#!/usr/bin/env python3

from __future__ import annotations

import argparse
import csv
import hashlib
import json
import math

from pathlib import Path


ROOT = Path(__file__).resolve().parent.parent

DEFAULT_REPORT = (
    ROOT
    / "build/decomp-dev/report.json"
)

DEFAULT_V2 = (
    ROOT
    / "config/arm9/fuzzy_v2_preferences.tsv"
)

DEFAULT_EXACT = (
    ROOT
    / "config/arm9/mwcc_sources.tsv"
)

DEFAULT_HUMAN = (
    ROOT
    / "reports/decomp-progress-v2.txt"
)


def sha256(path: Path) -> str:

    h = hashlib.sha256()

    with path.open("rb") as f:

        while True:

            block = f.read(
                1024 * 1024
            )

            if not block:
                break

            h.update(
                block
            )

    return h.hexdigest()


def parse_exact_manifest(
    path: Path,
):

    names = set()

    for raw in path.read_text(
        encoding="utf-8",
        errors="replace",
    ).splitlines():

        raw = raw.strip()

        if (
            not raw
            or raw.startswith("#")
        ):
            continue

        source = (
            raw.split(
                "\t",
                1,
            )[0]
            .split(
                None,
                1,
            )[0]
            .strip()
        )

        if source:

            names.add(
                Path(
                    source
                ).stem.lower()
            )

    return names


def parse_v2_manifest(
    path: Path,
):

    with path.open(
        newline="",
        encoding="utf-8",
        errors="replace",
    ) as f:

        reader = csv.DictReader(
            f,
            delimiter="\t",
        )

        rows = list(
            reader
        )

        fields = list(
            reader.fieldnames
            or []
        )


    source_field = next(
        (
            field
            for field
            in fields
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
            for field
            in fields
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
            "Unable to locate V2 source column."
        )


    if score_field is None:

        raise RuntimeError(
            "Unable to locate V2 score column."
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


        source = (
            ROOT
            / source_rel
        )


        if not source.is_file():

            raise RuntimeError(
                "V2 source is missing: "
                + source_rel
            )


        recorded_hash = str(
            row.get(
                "source_sha256",
                "",
            )
        ).strip()


        if recorded_hash:

            actual_hash = sha256(
                source
            )


            if actual_hash != recorded_hash:

                raise RuntimeError(
                    "Stale V2 score/source hash: "
                    + source_rel
                )


        score = float(
            row[
                score_field
            ]
        )


        if not (
            0.0
            <= score
            <= 100.0
        ):

            raise RuntimeError(
                f"Invalid V2 score for "
                f"{source_rel}: {score}"
            )


        name = (
            Path(
                source_rel
            ).stem.lower()
        )


        if name in result:

            raise RuntimeError(
                "Duplicate V2 function: "
                + name
            )


        result[
            name
        ] = {
            "source":
                source_rel,

            "score":
                score,
        }


    return result


def int_string(
    value,
):

    return str(
        int(
            value
        )
    )


def pct(
    part,
    total,
):

    if total == 0:
        return 0.0

    return (
        float(part)
        * 100.0
        / float(total)
    )


def function_entries(
    report,
):

    entries = []


    for unit_index, unit in enumerate(
        report.get(
            "units",
            []
        )
    ):

        functions = unit.get(
            "functions",
            []
        )


        if len(functions) != 1:

            continue


        fn = functions[
            0
        ]

        name = str(
            fn.get(
                "name",
                "",
            )
        ).lower()


        if not name.startswith(
            "func_"
        ):

            continue


        size = int(
            fn.get(
                "size",
                "0",
            )
        )


        entries.append(
            {
                "name":
                    name,

                "size":
                    size,

                "unit":
                    unit,

                "function":
                    fn,

                "unit_index":
                    unit_index,
            }
        )


    return entries


def allocate_integer_matched_bytes(
    entries,
):

    floors = {}
    fractions = []

    raw_total = 0.0


    for entry in entries:

        raw = (
            entry[
                "size"
            ]
            * entry[
                "score"
            ]
            / 100.0
        )

        floor_value = math.floor(
            raw
        )

        floors[
            entry[
                "name"
            ]
        ] = floor_value

        raw_total += raw

        fractions.append(
            (
                raw
                - floor_value,

                entry[
                    "name"
                ],
            )
        )


    target = int(
        round(
            raw_total
        )
    )

    current = sum(
        floors.values()
    )

    need = (
        target
        - current
    )


    fractions.sort(
        reverse=True
    )


    for _fraction, name in fractions[
        :max(
            0,
            need,
        )
    ]:

        floors[
            name
        ] += 1


    return (
        floors,
        raw_total,
        target,
    )


def apply_function_unit(
    entry,
    exact_names,
    matched_bytes,
):

    name = entry[
        "name"
    ]

    size = entry[
        "size"
    ]

    score = entry[
        "score"
    ]

    unit = entry[
        "unit"
    ]

    fn = entry[
        "function"
    ]

    exact = (
        name
        in exact_names
    )

    assigned = matched_bytes[
        name
    ]


    fn[
        "fuzzy_match_percent"
    ] = score


    for section in unit.get(
        "sections",
        []
    ):

        section[
            "fuzzy_match_percent"
        ] = score


    measures = unit.setdefault(
        "measures",
        {}
    )

    measures[
        "fuzzy_match_percent"
    ] = score

    measures[
        "total_code"
    ] = int_string(
        size
    )

    measures[
        "matched_code"
    ] = int_string(
        assigned
    )

    measures[
        "matched_code_percent"
    ] = pct(
        assigned,
        size,
    )

    measures[
        "total_functions"
    ] = 1

    measures[
        "matched_functions"
    ] = (
        1
        if exact
        else 0
    )

    measures[
        "matched_functions_percent"
    ] = (
        100.0
        if exact
        else 0.0
    )

    measures[
        "complete_code"
    ] = int_string(
        size
        if exact
        else 0
    )

    measures[
        "complete_code_percent"
    ] = (
        100.0
        if exact
        else 0.0
    )

    measures[
        "complete_data"
    ] = "0"

    measures[
        "complete_data_percent"
    ] = 0.0

    measures[
        "matched_data"
    ] = "0"

    measures[
        "matched_data_percent"
    ] = 0.0

    measures[
        "total_data"
    ] = "0"

    measures[
        "total_units"
    ] = 1

    measures[
        "complete_units"
    ] = (
        1
        if exact
        else 0
    )


    metadata = unit.setdefault(
        "metadata",
        {}
    )

    metadata[
        "complete"
    ] = bool(
        exact
    )


def aggregate_units(
    units,
):

    total_code = 0
    matched_code = 0
    complete_code = 0

    total_functions = 0
    matched_functions = 0

    total_units = len(
        units
    )

    complete_units = 0


    weighted_score_sum = 0.0
    weighted_score_size = 0


    for unit in units:

        measures = unit.get(
            "measures",
            {}
        )

        unit_total = int(
            measures.get(
                "total_code",
                "0",
            )
        )

        unit_matched = int(
            measures.get(
                "matched_code",
                "0",
            )
        )

        unit_complete = int(
            measures.get(
                "complete_code",
                "0",
            )
        )


        total_code += unit_total
        matched_code += unit_matched
        complete_code += unit_complete


        total_functions += int(
            measures.get(
                "total_functions",
                0,
            )
        )

        matched_functions += int(
            measures.get(
                "matched_functions",
                0,
            )
        )

        complete_units += int(
            measures.get(
                "complete_units",
                0,
            )
        )


        functions = unit.get(
            "functions",
            []
        )


        if len(
            functions
        ) == 1:

            fn = functions[
                0
            ]

            size = int(
                fn.get(
                    "size",
                    "0",
                )
            )

            score = float(
                fn.get(
                    "fuzzy_match_percent",
                    0.0,
                )
            )

            weighted_score_sum += (
                size
                * score
            )

            weighted_score_size += (
                size
            )


    if total_code:

        fuzzy_percent = pct(
            matched_code,
            total_code,
        )

    else:

        fuzzy_percent = 0.0


    return {
        "fuzzy_match_percent":
            fuzzy_percent,

        "total_code":
            int_string(
                total_code
            ),

        "matched_code":
            int_string(
                matched_code
            ),

        "matched_code_percent":
            fuzzy_percent,

        "total_data":
            "0",

        "matched_data":
            "0",

        "matched_data_percent":
            0.0,

        "total_functions":
            total_functions,

        "matched_functions":
            matched_functions,

        "matched_functions_percent":
            pct(
                matched_functions,
                total_functions,
            ),

        "complete_code":
            int_string(
                complete_code
            ),

        "complete_code_percent":
            pct(
                complete_code,
                total_code,
            ),

        "complete_data":
            "0",

        "complete_data_percent":
            0.0,

        "total_units":
            total_units,

        "complete_units":
            complete_units,
    }


def main():

    parser = argparse.ArgumentParser()

    parser.add_argument(
        "--report",
        type=Path,
        default=
            DEFAULT_REPORT,
    )

    parser.add_argument(
        "--v2",
        type=Path,
        default=
            DEFAULT_V2,
    )

    parser.add_argument(
        "--exact",
        type=Path,
        default=
            DEFAULT_EXACT,
    )

    parser.add_argument(
        "--human-out",
        type=Path,
        default=
            DEFAULT_HUMAN,
    )

    args = parser.parse_args()


    report = json.loads(
        args.report.read_text(
            encoding="utf-8",
        )
    )


    if report.get(
        "version"
    ) != 2:

        raise RuntimeError(
            "Expected objdiff report version 2."
        )


    exact_names = parse_exact_manifest(
        args.exact
    )

    fuzzy = parse_v2_manifest(
        args.v2
    )

    entries = function_entries(
        report
    )


    entry_names = {
        entry[
            "name"
        ]
        for entry
        in entries
    }


    missing_exact = sorted(
        exact_names
        - entry_names
    )


    if missing_exact:

        raise RuntimeError(
            "Exact functions missing from report: "
            + ", ".join(
                missing_exact[
                    :20
                ]
            )
        )


    missing_v2 = sorted(
        set(
            fuzzy
        )
        - entry_names
    )


    if missing_v2:

        raise RuntimeError(
            "V2 functions missing from report: "
            + ", ".join(
                missing_v2[
                    :20
                ]
            )
        )


    for entry in entries:

        name = entry[
            "name"
        ]


        if name in exact_names:

            score = 100.0

        elif name in fuzzy:

            score = fuzzy[
                name
            ][
                "score"
            ]

        else:

            score = 0.0


        entry[
            "score"
        ] = score


    (
        matched_byte_map,
        raw_equivalent_bytes,
        displayed_equivalent_bytes,
    ) = allocate_integer_matched_bytes(
        entries
    )


    for entry in entries:

        apply_function_unit(
            entry,
            exact_names,
            matched_byte_map,
        )


    # --------------------------------------------------------
    # Recalculate category measures from their actual units.
    # --------------------------------------------------------

    categories = report.get(
        "categories",
        []
    )


    for category in categories:

        category_id = str(
            category.get(
                "id",
                "",
            )
        )


        category_units = []


        for unit in report.get(
            "units",
            []
        ):

            metadata = unit.get(
                "metadata",
                {}
            )

            progress_categories = metadata.get(
                "progress_categories",
                []
            )


            if category_id in progress_categories:

                category_units.append(
                    unit
                )


        if category_units:

            category[
                "measures"
            ] = aggregate_units(
                category_units
            )


    # --------------------------------------------------------
    # Top-level report measures.
    # --------------------------------------------------------

    all_units = report.get(
        "units",
        []
    )

    top = aggregate_units(
        all_units
    )


    total_code = int(
        top[
            "total_code"
        ]
    )


    # Preserve exact V2 percentage rather than the very slightly
    # rounded integer-byte percentage used for matched_code.
    exact_v2_percent = pct(
        raw_equivalent_bytes,
        total_code,
    )


    top[
        "fuzzy_match_percent"
    ] = exact_v2_percent

    top[
        "matched_code_percent"
    ] = exact_v2_percent

    report[
        "measures"
    ] = top


    # If there is one ARM9 category covering the entire report,
    # preserve the exact Stable V2 percentage there too.
    for category in categories:

        measures = category.get(
            "measures",
            {}
        )


        if int(
            measures.get(
                "total_code",
                "0",
            )
        ) == total_code:

            measures[
                "fuzzy_match_percent"
            ] = exact_v2_percent

            measures[
                "matched_code_percent"
            ] = exact_v2_percent


    # --------------------------------------------------------
    # Human-readable progress summary.
    # --------------------------------------------------------

    total_functions = int(
        top.get(
            "total_functions",
            0,
        )
    )

    exact_functions = len(
        exact_names
        & entry_names
    )

    exact_bytes = sum(
        entry[
            "size"
        ]

        for entry
        in entries

        if entry[
            "name"
        ]
        in exact_names
    )


    fuzzy_function_equivalent = (
        exact_functions
        + sum(
            fuzzy[
                name
            ][
                "score"
            ]
            / 100.0

            for name
            in fuzzy
        )
    )


    zero_functions = (
        total_functions
        - exact_functions
        - len(
            fuzzy
        )
    )


    human = f"""OKAMIDEN DECOMPILATION PROGRESS
================================

Primary progress metric
-----------------------
Stable V2 fuzzy-equivalent code:
  {raw_equivalent_bytes:.6f} / {total_code} bytes
  {exact_v2_percent:.6f}%

Displayed decomp.dev matched-equivalent bytes:
  {displayed_equivalent_bytes} / {total_code}

Fuzzy-equivalent functions:
  {fuzzy_function_equivalent:.6f} / {total_functions}
  {pct(fuzzy_function_equivalent, total_functions):.6f}%

Strict exact progress
---------------------
Exact code:
  {exact_bytes} / {total_code}
  {pct(exact_bytes, total_code):.6f}%

Exact functions:
  {exact_functions} / {total_functions}
  {pct(exact_functions, total_functions):.6f}%

Population
----------
Exact functions       : {exact_functions}
V2-scored functions   : {len(fuzzy)}
Zero/unscored         : {zero_functions}
Total functions       : {total_functions}

Reporting policy
----------------
Stable V2 fuzzy-equivalent progress is the primary progress figure.
It increases when a non-exact function becomes closer to the target.

Exact/complete figures remain strict and only increase after an
authoritative exact match is validated.

The decomp.dev report keeps complete_code and exact-function counts
strict while matched_code and fuzzy_match_percent reflect Stable V2
partial progress.
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
        "V2_FUNCTIONS="
        + str(
            len(
                fuzzy
            )
        )
    )

    print(
        "ZERO_FUNCTIONS="
        + str(
            zero_functions
        )
    )

    print(
        "EXACT_FUNCTIONS="
        + str(
            exact_functions
        )
    )

    print(
        "EXACT_BYTES="
        + str(
            exact_bytes
        )
    )

    print(
        "FUZZY_EQUIVALENT_BYTES="
        + f"{raw_equivalent_bytes:.6f}"
    )

    print(
        "DISPLAYED_MATCHED_CODE="
        + str(
            displayed_equivalent_bytes
        )
    )

    print(
        "FUZZY_MATCH_PERCENT="
        + f"{exact_v2_percent:.9f}%"
    )

    print(
        "FUZZY_EQUIVALENT_FUNCTIONS="
        + f"{fuzzy_function_equivalent:.6f}"
    )

    print(
        "FUZZY_FUNCTION_PERCENT="
        + f"{pct(fuzzy_function_equivalent, total_functions):.9f}%"
    )

    print(
        "V2_PROGRESS_APPLY=PASS"
    )


if __name__ == "__main__":
    main()
