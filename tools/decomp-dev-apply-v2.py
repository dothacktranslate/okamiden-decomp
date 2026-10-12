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


def pct(
    part: float,
    total: float,
) -> float:

    if total == 0:
        return 0.0

    return (
        float(part)
        * 100.0
        / float(total)
    )


def sha256(
    path: Path,
) -> str:

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


def read_exact_names(
    path: Path,
) -> set[str]:

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
            line.split(
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

            result.add(
                Path(
                    source
                ).stem.lower()
            )

    return result


def read_v2(
    path: Path,
) -> dict[str, dict]:

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
            reader.fieldnames
            or []
        )

        rows = list(
            reader
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
            "V2 manifest has no source column."
        )


    if score_field is None:

        raise RuntimeError(
            "V2 manifest has no score column."
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


        expected_hash = str(
            row.get(
                "source_sha256",
                "",
            )
        ).strip()


        if expected_hash:

            actual_hash = sha256(
                source
            )


            if actual_hash != expected_hash:

                raise RuntimeError(
                    "Stale V2 source hash: "
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


def collect_functions(
    report: dict,
) -> list[dict]:

    result = []


    for unit in report.get(
        "units",
        []
    ):

        functions = unit.get(
            "functions",
            []
        )


        if len(
            functions
        ) != 1:

            continue


        function = functions[
            0
        ]

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


        size = int(
            function.get(
                "size",
                "0",
            )
        )


        if size <= 0:

            raise RuntimeError(
                "Invalid function size for "
                + name
            )


        result.append(
            {
                "name":
                    name,

                "size":
                    size,

                "unit":
                    unit,

                "function":
                    function,
            }
        )


    return result


def allocate_matched_bytes(
    entries: list[dict],
) -> tuple[
    dict[str, int],
    float,
]:

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


    target_total = int(
        round(
            raw_total
        )
    )

    current_total = sum(
        floors.values()
    )

    remaining = (
        target_total
        - current_total
    )


    fractions.sort(
        key=lambda item: (
            item[0],
            item[1],
        ),
        reverse=True,
    )


    for _fraction, name in fractions[
        :remaining
    ]:

        floors[
            name
        ] += 1


    if sum(
        floors.values()
    ) != target_total:

        raise RuntimeError(
            "Equivalent-byte allocation failed."
        )


    return (
        floors,
        raw_total,
    )


def set_unit_progress(
    entry: dict,
    exact_names: set[str],
    byte_map: dict[str, int],
) -> None:

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

    function = entry[
        "function"
    ]

    exact = (
        name
        in exact_names
    )

    matched_bytes = byte_map[
        name
    ]


    function[
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
    ] = str(
        size
    )

    measures[
        "matched_code"
    ] = str(
        matched_bytes
    )

    measures[
        "matched_code_percent"
    ] = pct(
        matched_bytes,
        size,
    )


    # matched_functions remains STRICT.
    #
    # Partial progress belongs in fuzzy_match_percent.
    # Do not use a rounded fuzzy-equivalent count here.
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


    # complete_code is also strict exact progress.
    measures[
        "complete_code"
    ] = str(
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
        "total_data"
    ] = "0"

    measures[
        "matched_data"
    ] = "0"

    measures[
        "matched_data_percent"
    ] = 0.0

    measures[
        "complete_data"
    ] = "0"

    measures[
        "complete_data_percent"
    ] = 0.0

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


def aggregate(
    units: list[dict],
) -> dict:

    total_code = 0
    matched_code = 0
    complete_code = 0

    total_functions = 0
    matched_functions = 0

    complete_units = 0


    fuzzy_numerator = 0.0


    for unit in units:

        measures = unit.get(
            "measures",
            {}
        )


        unit_total_code = int(
            measures.get(
                "total_code",
                "0",
            )
        )

        unit_matched_code = int(
            measures.get(
                "matched_code",
                "0",
            )
        )

        unit_complete_code = int(
            measures.get(
                "complete_code",
                "0",
            )
        )


        total_code += (
            unit_total_code
        )

        matched_code += (
            unit_matched_code
        )

        complete_code += (
            unit_complete_code
        )


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

            function = functions[
                0
            ]

            size = int(
                function.get(
                    "size",
                    "0",
                )
            )

            score = float(
                function.get(
                    "fuzzy_match_percent",
                    0.0,
                )
            )

            fuzzy_numerator += (
                size
                * score
                / 100.0
            )


    fuzzy_percent = pct(
        fuzzy_numerator,
        total_code,
    )


    return {
        "fuzzy_match_percent":
            fuzzy_percent,

        "total_code":
            str(
                total_code
            ),

        "matched_code":
            str(
                matched_code
            ),

        "matched_code_percent":
            pct(
                matched_code,
                total_code,
            ),

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
            str(
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
            len(
                units
            ),

        "complete_units":
            complete_units,
    }


def validate_consistency(
    report: dict,
) -> None:

    units = report.get(
        "units",
        []
    )

    top = report[
        "measures"
    ]


    unit_total_code = sum(
        int(
            unit.get(
                "measures",
                {},
            ).get(
                "total_code",
                "0",
            )
        )
        for unit
        in units
    )

    unit_matched_code = sum(
        int(
            unit.get(
                "measures",
                {},
            ).get(
                "matched_code",
                "0",
            )
        )
        for unit
        in units
    )

    unit_complete_code = sum(
        int(
            unit.get(
                "measures",
                {},
            ).get(
                "complete_code",
                "0",
            )
        )
        for unit
        in units
    )

    unit_total_functions = sum(
        int(
            unit.get(
                "measures",
                {},
            ).get(
                "total_functions",
                0,
            )
        )
        for unit
        in units
    )

    unit_matched_functions = sum(
        int(
            unit.get(
                "measures",
                {},
            ).get(
                "matched_functions",
                0,
            )
        )
        for unit
        in units
    )


    checks = {
        "total_code":
            (
                int(
                    top[
                        "total_code"
                    ]
                ),
                unit_total_code,
            ),

        "matched_code":
            (
                int(
                    top[
                        "matched_code"
                    ]
                ),
                unit_matched_code,
            ),

        "complete_code":
            (
                int(
                    top[
                        "complete_code"
                    ]
                ),
                unit_complete_code,
            ),

        "total_functions":
            (
                int(
                    top[
                        "total_functions"
                    ]
                ),
                unit_total_functions,
            ),

        "matched_functions":
            (
                int(
                    top[
                        "matched_functions"
                    ]
                ),
                unit_matched_functions,
            ),
    }


    for field, (
        aggregate_value,
        unit_value,
    ) in checks.items():

        if (
            aggregate_value
            != unit_value
        ):

            raise RuntimeError(
                f"Inconsistent {field}: "
                f"top={aggregate_value}, "
                f"units={unit_value}"
            )


def main() -> None:

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
            "Expected report version 2."
        )


    exact_names = read_exact_names(
        args.exact
    )

    v2 = read_v2(
        args.v2
    )

    entries = collect_functions(
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
            v2
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


    overlap = (
        exact_names
        & set(
            v2
        )
    )


    if overlap:

        raise RuntimeError(
            "Functions appear in both exact and V2 manifests: "
            + ", ".join(
                sorted(
                    overlap
                )[
                    :20
                ]
            )
        )


    for entry in entries:

        name = entry[
            "name"
        ]


        if name in exact_names:

            entry[
                "score"
            ] = 100.0

        elif name in v2:

            entry[
                "score"
            ] = v2[
                name
            ][
                "score"
            ]

        else:

            entry[
                "score"
            ] = 0.0


    (
        byte_map,
        raw_equivalent_bytes,
    ) = allocate_matched_bytes(
        entries
    )


    for entry in entries:

        set_unit_progress(
            entry,
            exact_names,
            byte_map,
        )


    # --------------------------------------------------------
    # Recalculate category aggregates.
    # --------------------------------------------------------

    for category in report.get(
        "categories",
        []
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
            []
        ):

            progress_categories = (
                unit.get(
                    "metadata",
                    {}
                ).get(
                    "progress_categories",
                    [],
                )
            )


            if (
                category_id
                in progress_categories
            ):

                category_units.append(
                    unit
                )


        if category_units:

            category[
                "measures"
            ] = aggregate(
                category_units
            )


    # --------------------------------------------------------
    # Recalculate report aggregate.
    # --------------------------------------------------------

    report[
        "measures"
    ] = aggregate(
        report.get(
            "units",
            []
        )
    )


    validate_consistency(
        report
    )


    top = report[
        "measures"
    ]

    total_code = int(
        top[
            "total_code"
        ]
    )

    total_functions = int(
        top[
            "total_functions"
        ]
    )

    exact_functions = int(
        top[
            "matched_functions"
        ]
    )

    exact_bytes = int(
        top[
            "complete_code"
        ]
    )


    fuzzy_equivalent_functions = (
        exact_functions
        + sum(
            row[
                "score"
            ]
            / 100.0
            for row
            in v2.values()
        )
    )


    zero_functions = (
        total_functions
        - exact_functions
        - len(
            v2
        )
    )


    precise_code_percent = pct(
        raw_equivalent_bytes,
        total_code,
    )

    fuzzy_function_percent = pct(
        fuzzy_equivalent_functions,
        total_functions,
    )


    human = f"""OKAMIDEN DECOMPILATION PROGRESS
================================

Primary progress
----------------
Stable V2 fuzzy-equivalent code:
  {raw_equivalent_bytes:.6f} / {total_code} bytes
  {precise_code_percent:.6f}%

Displayed matched-equivalent code:
  {top['matched_code']} / {total_code}
  {float(top['matched_code_percent']):.6f}%

Fuzzy-equivalent function progress
----------------------------------
Project V2 equivalent functions:
  {fuzzy_equivalent_functions:.6f} / {total_functions}
  {fuzzy_function_percent:.6f}%

This is a project progress metric and is intentionally separate from
objdiff/decomp.dev's integer matched_functions field.

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
V2-scored functions   : {len(v2)}
Zero/unscored         : {zero_functions}
Total functions       : {total_functions}

Reporting policy
----------------
Partial source improvements contribute to fuzzy_match_percent and
matched_code, so the primary code progress moves whenever V2 improves.

complete_code and matched_functions remain strict exact measures.

The fractional fuzzy-equivalent function count above is maintained as
a separate project metric because objdiff's matched_functions field is
an integer exact-function count.
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
                v2
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
            top[
                "matched_code"
            ]
        )
    )

    print(
        "FUZZY_MATCH_PERCENT="
        + f"{precise_code_percent:.9f}%"
    )

    print(
        "FUZZY_EQUIVALENT_FUNCTIONS="
        + f"{fuzzy_equivalent_functions:.6f}"
    )

    print(
        "FUZZY_FUNCTION_PERCENT="
        + f"{fuzzy_function_percent:.9f}%"
    )

    print(
        "STRICT_MATCHED_FUNCTIONS="
        + str(
            top[
                "matched_functions"
            ]
        )
    )

    print(
        "REPORT_INTERNAL_CONSISTENCY=PASS"
    )

    print(
        "V2_PROGRESS_APPLY=PASS"
    )


if __name__ == "__main__":
    main()
