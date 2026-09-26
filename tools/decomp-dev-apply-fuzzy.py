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
                f"Invalid fuzzy size for {name}"
            )

        source_path = ROOT / source

        if not source_path.exists():
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
    direct = [
        unit
        for unit in units
        if unit.get("name") == name
    ]

    if len(direct) == 1:
        return direct[0]

    found = []

    for unit in units:
        for function in unit.get("functions", []):
            if function.get("name") == name:
                found.append(unit)
                break

    if len(found) != 1:
        raise RuntimeError(
            f"Expected exactly one report unit "
            f"for {name}, found {len(found)}"
        )

    return found[0]


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
            if function.get("name") == row["name"]
        ]

        if len(functions) != 1:
            raise RuntimeError(
                f"Expected one function record "
                f"for {row['name']}"
            )

        function = functions[0]

        actual_size = int(
            function.get("size", 0)
        )

        if actual_size != row["size"]:
            raise RuntimeError(
                f"Size mismatch for {row['name']}: "
                f"report={actual_size}, "
                f"manifest={row['size']}"
            )

        matched_functions = int(
            unit.get(
                "measures",
                {},
            ).get(
                "matched_functions",
                0,
            )
        )

        if matched_functions != 0:
            raise RuntimeError(
                f"Fuzzy manifest contains exact "
                f"function {row['name']}"
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

        measures = unit.setdefault(
            "measures",
            {},
        )

        measures[
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

    fuzzy_equivalent_code = 0.0
    function_code = 0

    for unit in units:
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

            function_code += size

            fuzzy_equivalent_code += (
                size
                * score
                / 100.0
            )

    measures = report.get(
        "measures",
        {},
    )

    total_code = int(
        measures["total_code"]
    )

    fuzzy_percent = (
        100.0
        * fuzzy_equivalent_code
        / total_code
    )

    measures[
        "fuzzy_match_percent"
    ] = fuzzy_percent

    report_path.write_text(
        json.dumps(
            report,
            indent=2,
        )
        + "\n"
    )

    print(
        f"FUZZY_FUNCTIONS={len(rows)}"
    )

    print(
        f"FUNCTION_CODE={function_code}"
    )

    print(
        "FUZZY_EQUIVALENT_CODE="
        f"{fuzzy_equivalent_code:.6f}"
    )

    print(
        "FUZZY_MATCH_PERCENT="
        f"{fuzzy_percent:.6f}%"
    )

    print(
        "EXACT_MATCHED_CODE="
        f"{measures['matched_code']}/"
        f"{measures['total_code']}"
    )

    print(
        "EXACT_MATCHED_FUNCTIONS="
        f"{measures['matched_functions']}/"
        f"{measures['total_functions']}"
    )


if __name__ == "__main__":
    main()
