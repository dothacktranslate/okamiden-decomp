#!/usr/bin/env python3

import argparse
import json
from pathlib import Path


ROOT = Path(__file__).resolve().parent.parent


def parse_manifest(path):
    rows = []
    names = set()

    for line_no, raw in enumerate(
        path.read_text().splitlines(),
        1,
    ):
        if (
            not raw.strip()
            or raw.lstrip().startswith("#")
        ):
            continue

        parts = raw.split("\t")

        if len(parts) != 5:
            raise RuntimeError(
                f"{path}:{line_no}: "
                "expected 5 tab-separated columns"
            )

        source, flags, score_text, size_text, metric = parts

        name = Path(source).stem
        score = float(score_text)
        size = int(size_text)

        if name in names:
            raise RuntimeError(
                f"Duplicate fuzzy function: {name}"
            )

        if not (0.0 < score < 100.0):
            raise RuntimeError(
                f"Fuzzy score must be >0 and <100: "
                f"{name}={score}"
            )

        if size <= 0:
            raise RuntimeError(
                f"Invalid size for {name}"
            )

        if not (ROOT / source).exists():
            raise RuntimeError(
                f"Missing fuzzy source: {source}"
            )

        names.add(name)

        rows.append(
            {
                "source": source,
                "flags": flags,
                "name": name,
                "score": score,
                "size": size,
                "metric": metric,
            }
        )

    return rows


def find_function_unit(units, name):
    found = []

    for unit in units:
        for function in unit.get(
            "functions",
            [],
        ):
            if function.get("name") == name:
                found.append(unit)
                break

    if len(found) != 1:
        raise RuntimeError(
            f"Expected one report unit for "
            f"{name}, found {len(found)}"
        )

    return found[0]


def percentage(part, total):
    if not total:
        return 0.0

    return (
        float(part)
        * 100.0
        / float(total)
    )


def apply_weighted_measures(measures, equivalent):
    total_code = int(
        measures.get(
            "total_code",
            0,
        )
    )

    if total_code <= 0:
        return

    percent = percentage(
        equivalent,
        total_code,
    )

    # objdiff/decomp.dev semantics:
    #
    # matched_code:
    #     fuzzy-weighted partial progress
    #
    # complete_code:
    #     byte-exact progress
    #
    # matched_code is uint64 in the report schema,
    # so the weighted byte-equivalent is rounded only
    # for that integer field. The percent retains the
    # full floating-point value.
    measures["matched_code"] = str(
        int(round(equivalent))
    )

    measures[
        "matched_code_percent"
    ] = percent

    measures[
        "fuzzy_match_percent"
    ] = percent


def unit_equivalent(unit):
    result = 0.0

    for function in unit.get(
        "functions",
        [],
    ):
        size = int(
            function.get(
                "size",
                0,
            )
        )

        score = float(
            function.get(
                "fuzzy_match_percent",
                0.0,
            )
        )

        result += (
            size
            * score
            / 100.0
        )

    return result


def main():
    parser = argparse.ArgumentParser()

    parser.add_argument(
        "--report",
        default="build/decomp-dev/report.json",
    )

    parser.add_argument(
        "--manifest",
        default="config/arm9/fuzzy_sources.tsv",
    )

    args = parser.parse_args()

    report_path = ROOT / args.report
    manifest_path = ROOT / args.manifest

    report = json.loads(
        report_path.read_text()
    )

    rows = parse_manifest(
        manifest_path
    )

    units = report.get("units")

    if not isinstance(units, list):
        raise RuntimeError(
            "Report has no units list."
        )

    # ---------------------------------------------------------
    # Apply per-function fuzzy percentages.
    # ---------------------------------------------------------

    for row in rows:
        unit = find_function_unit(
            units,
            row["name"],
        )

        functions = [
            function
            for function in unit.get(
                "functions",
                [],
            )
            if function.get("name")
            == row["name"]
        ]

        if len(functions) != 1:
            raise RuntimeError(
                f"Expected one function record "
                f"for {row['name']}"
            )

        function = functions[0]

        actual_size = int(
            function.get(
                "size",
                0,
            )
        )

        if actual_size != row["size"]:
            raise RuntimeError(
                f"Size mismatch for "
                f"{row['name']}: "
                f"report={actual_size}, "
                f"manifest={row['size']}"
            )

        complete_code = int(
            unit.get(
                "measures",
                {},
            ).get(
                "complete_code",
                0,
            )
        )

        if complete_code != 0:
            raise RuntimeError(
                f"Fuzzy manifest contains "
                f"complete function "
                f"{row['name']}"
            )

        function[
            "fuzzy_match_percent"
        ] = row["score"]

        for section in unit.get(
            "sections",
            [],
        ):
            if section.get("name") == ".text":
                section[
                    "fuzzy_match_percent"
                ] = row["score"]

        metadata = unit.setdefault(
            "metadata",
            {},
        )

        metadata[
            "fuzzy_source_path"
        ] = row["source"]

        metadata[
            "fuzzy_metric"
        ] = row["metric"]

        metadata[
            "fuzzy_score"
        ] = row["score"]

    # ---------------------------------------------------------
    # Recalculate each unit's fuzzy-weighted matched_code.
    # complete_code is deliberately untouched.
    # ---------------------------------------------------------

    for unit in units:
        measures = unit.get(
            "measures"
        )

        if not isinstance(
            measures,
            dict,
        ):
            continue

        equivalent = unit_equivalent(
            unit
        )

        apply_weighted_measures(
            measures,
            equivalent,
        )

    # ---------------------------------------------------------
    # Whole-report fuzzy progress.
    # ---------------------------------------------------------

    fuzzy_equivalent_code = sum(
        unit_equivalent(unit)
        for unit in units
    )

    measures = report.get(
        "measures",
        {},
    )

    total_code = int(
        measures["total_code"]
    )

    fuzzy_percent = percentage(
        fuzzy_equivalent_code,
        total_code,
    )

    apply_weighted_measures(
        measures,
        fuzzy_equivalent_code,
    )

    # ---------------------------------------------------------
    # Categories: recompute fuzzy-weighted progress from units
    # tagged with each progress category.
    # ---------------------------------------------------------

    for category in report.get(
        "categories",
        [],
    ):
        category_id = category.get(
            "id"
        )

        category_measures = category.get(
            "measures"
        )

        if (
            not category_id
            or not isinstance(
                category_measures,
                dict,
            )
        ):
            continue

        equivalent = 0.0

        for unit in units:
            progress_categories = (
                unit.get(
                    "metadata",
                    {},
                ).get(
                    "progress_categories",
                    [],
                )
            )

            if category_id not in progress_categories:
                continue

            equivalent += unit_equivalent(
                unit
            )

        apply_weighted_measures(
            category_measures,
            equivalent,
        )

    report_path.write_text(
        json.dumps(
            report,
            indent=2,
        )
        + "\n"
    )

    complete_code = int(
        measures.get(
            "complete_code",
            0,
        )
    )

    complete_percent = float(
        measures.get(
            "complete_code_percent",
            0.0,
        )
    )

    matched_code = int(
        measures["matched_code"]
    )

    print(
        f"FUZZY_FUNCTIONS="
        f"{len(rows)}"
    )

    print(
        "FUZZY_EQUIVALENT_CODE="
        f"{fuzzy_equivalent_code:.6f}"
    )

    print(
        "MATCHED_CODE="
        f"{matched_code}/{total_code}"
    )

    print(
        "MATCHED_CODE_PERCENT="
        f"{fuzzy_percent:.6f}%"
    )

    print(
        "COMPLETE_CODE="
        f"{complete_code}/{total_code}"
    )

    print(
        "COMPLETE_CODE_PERCENT="
        f"{complete_percent:.6f}%"
    )

    print(
        "EXACT_FUNCTIONS="
        f"{measures['matched_functions']}/"
        f"{measures['total_functions']}"
    )


if __name__ == "__main__":
    main()
