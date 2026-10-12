#!/usr/bin/env python3

from __future__ import annotations

import argparse
import csv
import hashlib
import json

from pathlib import Path


ROOT = Path(__file__).resolve().parent.parent

DEFAULT_REPORT = ROOT / "build/decomp-dev/report.json"
DEFAULT_V2 = ROOT / "config/arm9/fuzzy_v2_preferences.tsv"
DEFAULT_EXACT = ROOT / "config/arm9/mwcc_sources.tsv"
DEFAULT_HUMAN = ROOT / "reports/decomp-progress-v2.txt"


def sha256(path: Path) -> str:
    h = hashlib.sha256()

    with path.open("rb") as f:
        while True:
            chunk = f.read(1024 * 1024)

            if not chunk:
                break

            h.update(chunk)

    return h.hexdigest()


def pct(part: float, total: float) -> float:
    if total == 0:
        return 0.0

    return float(part) * 100.0 / float(total)


def exact_names(path: Path) -> set[str]:
    result = set()

    for raw in path.read_text(
        encoding="utf-8",
        errors="replace",
    ).splitlines():

        line = raw.strip()

        if (
            not line
            or line.startswith("#")
        ):
            continue

        source = (
            line.split("\t", 1)[0]
            .split(None, 1)[0]
            .strip()
        )

        if source:
            result.add(
                Path(source).stem.lower()
            )

    return result


def v2_rows(path: Path) -> dict[str, dict]:
    with path.open(
        newline="",
        encoding="utf-8",
        errors="replace",
    ) as f:
        reader = csv.DictReader(
            f,
            delimiter="\t",
        )

        fields = list(
            reader.fieldnames or []
        )

        rows = list(reader)

    source_field = next(
        (
            field
            for field in fields
            if field.strip().lower()
            in {
                "# source",
                "source",
            }
        ),
        None,
    )

    score_field = next(
        (
            field
            for field in fields
            if field.strip().lower()
            in {
                "v2_score",
                "score",
            }
        ),
        None,
    )

    if source_field is None:
        raise RuntimeError(
            "No source column in V2 manifest."
        )

    if score_field is None:
        raise RuntimeError(
            "No V2 score column in manifest."
        )

    result = {}

    for row in rows:
        source_rel = str(
            row.get(
                source_field,
                "",
            )
        ).strip()

        if not source_rel:
            continue

        source = ROOT / source_rel

        if not source.is_file():
            raise RuntimeError(
                "Missing V2 source: "
                + source_rel
            )

        expected_hash = str(
            row.get(
                "source_sha256",
                "",
            )
        ).strip()

        if expected_hash:
            actual_hash = sha256(source)

            if actual_hash != expected_hash:
                raise RuntimeError(
                    "Stale V2 source hash: "
                    + source_rel
                )

        score = float(
            row[score_field]
        )

        if not (
            0.0 < score <= 100.0
        ):
            raise RuntimeError(
                f"Invalid V2 fuzzy score for "
                f"{source_rel}: {score}"
            )

        name = Path(
            source_rel
        ).stem.lower()

        if name in result:
            raise RuntimeError(
                "Duplicate V2 function: "
                + name
            )

        result[name] = {
            "source": source_rel,
            "raw_score": score,
        }

    return result


def function_units(report: dict) -> dict[str, dict]:
    result = {}

    for unit in report.get(
        "units",
        [],
    ):
        functions = unit.get(
            "functions",
            [],
        )

        if len(functions) != 1:
            continue

        function = functions[0]

        name = str(
            function.get(
                "name",
                "",
            )
        ).lower()

        if not name.startswith(
            "func_"
        ):
            continue

        if name in result:
            raise RuntimeError(
                "Duplicate function unit: "
                + name
            )

        result[name] = {
            "unit": unit,
            "function": function,
            "size": int(
                function.get(
                    "size",
                    "0",
                )
            ),
        }

    return result


def weighted_fuzzy_percent(
    units: list[dict],
) -> float:
    equivalent = 0.0
    total = 0

    for unit in units:
        measures = unit.get(
            "measures",
            {},
        )

        size = int(
            measures.get(
                "total_code",
                "0",
            )
        )

        score = float(
            measures.get(
                "fuzzy_match_percent",
                0.0,
            )
        )

        total += size
        equivalent += (
            size
            * score
            / 100.0
        )

    return pct(
        equivalent,
        total,
    )


def main() -> None:
    parser = argparse.ArgumentParser()

    parser.add_argument(
        "--report",
        type=Path,
        default=DEFAULT_REPORT,
    )

    parser.add_argument(
        "--v2",
        type=Path,
        default=DEFAULT_V2,
    )

    parser.add_argument(
        "--exact",
        type=Path,
        default=DEFAULT_EXACT,
    )

    parser.add_argument(
        "--human-out",
        type=Path,
        default=DEFAULT_HUMAN,
    )

    args = parser.parse_args()

    report = json.loads(
        args.report.read_text(
            encoding="utf-8",
        )
    )

    if report.get("version") != 2:
        raise RuntimeError(
            "Expected objdiff report version 2."
        )

    if "measures" not in report:
        raise RuntimeError(
            "Report has no top-level measures."
        )

    if "units" not in report:
        raise RuntimeError(
            "Report has no units."
        )

    if "categories" not in report:
        raise RuntimeError(
            "Report has no categories."
        )

    exact = exact_names(
        args.exact
    )

    v2 = v2_rows(
        args.v2
    )

    units = function_units(
        report
    )

    unit_names = set(units)

    missing_exact = sorted(
        exact - unit_names
    )

    if missing_exact:
        raise RuntimeError(
            "Exact functions missing from report: "
            + ", ".join(
                missing_exact[:20]
            )
        )

    missing_v2 = sorted(
        set(v2) - unit_names
    )

    if missing_v2:
        raise RuntimeError(
            "V2 functions missing from report: "
            + ", ".join(
                missing_v2[:20]
            )
        )

    overlap = exact & set(v2)

    if overlap:
        raise RuntimeError(
            "Exact/V2 manifest overlap: "
            + ", ".join(
                sorted(overlap)[:20]
            )
        )

    # Preserve authoritative exact fields before touching
    # fuzzy_match_percent.
    exact_snapshot = {
        key: report["measures"].get(key)
        for key in (
            "total_code",
            "matched_code",
            "matched_code_percent",
            "complete_code",
            "complete_code_percent",
            "total_functions",
            "matched_functions",
            "matched_functions_percent",
            "total_units",
            "complete_units",
        )
    }

    raw_equivalent_bytes = 0.0
    raw_equivalent_functions = 0.0

    exported_100_clamps = 0

    for name, entry in units.items():
        unit = entry["unit"]
        function = entry["function"]
        size = entry["size"]

        if name in exact:
            raw_score = 100.0
            export_score = 100.0

        elif name in v2:
            raw_score = float(
                v2[name]["raw_score"]
            )

            # Proven legacy fuzzy reporting required:
            #
            #     0 < fuzzy score < 100
            #
            # A V2 score of 100 without authoritative exact
            # promotion therefore remains fuzzy for decomp.dev.
            if raw_score >= 100.0:
                export_score = 99.999999
                exported_100_clamps += 1
            else:
                export_score = raw_score

        else:
            raw_score = 0.0
            export_score = 0.0

        raw_equivalent_bytes += (
            size
            * raw_score
            / 100.0
        )

        raw_equivalent_functions += (
            raw_score
            / 100.0
        )

        # This is the ONLY progress value changed on a
        # function/unit.
        function[
            "fuzzy_match_percent"
        ] = export_score

        unit.setdefault(
            "measures",
            {},
        )[
            "fuzzy_match_percent"
        ] = export_score

        # Some objdiff reports include sections.
        # Updating this standard field is safe and schema-valid.
        for section in unit.get(
            "sections",
            [],
        ):
            section[
                "fuzzy_match_percent"
            ] = export_score

    # Recalculate fuzzy_match_percent for categories only.
    #
    # DO NOT rewrite matched_code, complete_code,
    # matched_functions, or their percentages.
    for category in report.get(
        "categories",
        [],
    ):
        category_id = str(
            category.get(
                "id",
                "",
            )
        )

        category_units = []

        for unit in report.get(
            "units",
            [],
        ):
            progress_categories = (
                unit.get(
                    "metadata",
                    {},
                ).get(
                    "progress_categories",
                    [],
                )
            )

            if category_id in progress_categories:
                category_units.append(unit)

        if category_units:
            category.setdefault(
                "measures",
                {},
            )[
                "fuzzy_match_percent"
            ] = weighted_fuzzy_percent(
                category_units
            )

    # Top-level fuzzy progress is byte weighted across ALL
    # report units, including explicit gaps at 0%.
    report[
        "measures"
    ][
        "fuzzy_match_percent"
    ] = weighted_fuzzy_percent(
        report.get(
            "units",
            [],
        )
    )

    # Verify none of the strict fields moved.
    for key, before in exact_snapshot.items():
        after = report[
            "measures"
        ].get(key)

        if after != before:
            raise RuntimeError(
                f"Strict report field changed: "
                f"{key}: {before!r} -> {after!r}"
            )

    total_code = int(
        report[
            "measures"
        ][
            "total_code"
        ]
    )

    total_functions = int(
        report[
            "measures"
        ][
            "total_functions"
        ]
    )

    exact_code = int(
        report[
            "measures"
        ][
            "matched_code"
        ]
    )

    exact_functions = int(
        report[
            "measures"
        ][
            "matched_functions"
        ]
    )

    stable_v2_percent = pct(
        raw_equivalent_bytes,
        total_code,
    )

    equivalent_function_percent = pct(
        raw_equivalent_functions,
        total_functions,
    )

    human = f"""OKAMIDEN DECOMPILATION PROGRESS
================================

Primary Stable V2 progress
--------------------------
Fuzzy-equivalent code:
  {raw_equivalent_bytes:.6f} / {total_code}
  {stable_v2_percent:.6f}%

Fuzzy-equivalent functions:
  {raw_equivalent_functions:.6f} / {total_functions}
  {equivalent_function_percent:.6f}%

Strict exact progress
---------------------
Exact code:
  {exact_code} / {total_code}
  {pct(exact_code, total_code):.6f}%

Exact functions:
  {exact_functions} / {total_functions}
  {pct(exact_functions, total_functions):.6f}%

decomp.dev reporting
--------------------
fuzzy_match_percent carries partial V2 progress.

matched_code, complete_code, matched_functions, and their
corresponding percentages remain strict exact values.

Non-exact V2 scores of 100 are exported as 99.999999 only in
the decomp.dev report so they remain fuzzy until authoritative
exact validation promotes them.

V2 fuzzy rows          : {len(v2)}
V2 100% rows clamped   : {exported_100_clamps}
"""

    args.human_out.parent.mkdir(
        parents=True,
        exist_ok=True,
    )

    args.human_out.write_text(
        human,
        encoding="utf-8",
    )

    args.report.write_text(
        json.dumps(
            report,
            separators=(
                ",",
                ":",
            ),
        )
        + "\n",
        encoding="utf-8",
    )

    print(
        "EXACT_MATCHED_CODE="
        + str(exact_code)
    )

    print(
        "EXACT_MATCHED_FUNCTIONS="
        + str(exact_functions)
    )

    print(
        "STABLE_V2_EQUIVALENT_BYTES="
        + f"{raw_equivalent_bytes:.6f}"
    )

    print(
        "STABLE_V2_PERCENT="
        + f"{stable_v2_percent:.9f}%"
    )

    print(
        "STABLE_V2_EQUIVALENT_FUNCTIONS="
        + f"{raw_equivalent_functions:.6f}"
    )

    print(
        "EXPORTED_100_CLAMPS="
        + str(exported_100_clamps)
    )

    print(
        "DECOMPDEV_FUZZY_PERCENT="
        + f"{report['measures']['fuzzy_match_percent']:.9f}%"
    )

    print(
        "STRICT_FIELDS_UNCHANGED=PASS"
    )

    print(
        "V2_REPORT_APPLY=PASS"
    )


if __name__ == "__main__":
    main()
