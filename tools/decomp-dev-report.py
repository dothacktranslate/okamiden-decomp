#!/usr/bin/env python3

import argparse
import json
from pathlib import Path


ROOT = Path(__file__).resolve().parent.parent

SNAPSHOT = (
    ROOT
    / "config/arm9/"
      "decomp-dev-units.json"
)


def percent(part, total):
    if total == 0:
        return 0.0

    return (
        part
        * 100.0
        / total
    )


def measures(
    total_code,
    matched_code,
    total_functions,
    matched_functions,
    total_units,
    complete_units,
):
    return {
        "fuzzy_match_percent":
            percent(
                matched_code,
                total_code,
            ),

        "total_code":
            str(total_code),

        "matched_code":
            str(matched_code),

        "matched_code_percent":
            percent(
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
            percent(
                matched_functions,
                total_functions,
            ),

        "complete_code":
            str(matched_code),

        "complete_code_percent":
            percent(
                matched_code,
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
        "--out",
        default=(
            "build/decomp-dev/"
            "report.json"
        ),
    )

    args = parser.parse_args()

    snapshot = json.loads(
        SNAPSHOT.read_text()
    )

    if snapshot.get(
        "version"
    ) != 2:
        raise RuntimeError(
            "Unsupported ARM9 unit "
            "snapshot version."
        )

    total_code = int(
        snapshot["total_code"]
    )

    total_functions = int(
        snapshot[
            "total_functions"
        ]
    )

    expected_matched_code = int(
        snapshot["matched_code"]
    )

    expected_matched_functions = int(
        snapshot[
            "matched_functions"
        ]
    )

    units = []

    matched_code = 0
    matched_functions = 0
    complete_units = 0

    real_unit_code_sum = 0
    real_unit_function_sum = 0

    for row in snapshot[
        "units"
    ]:
        code_size = int(
            row["code_size"]
        )

        matched = bool(
            row["matched"]
        )

        real_unit_code_sum += (
            code_size
        )

        #
        # Function inventory policy:
        #
        # We know each integrated source unit currently
        # represents exactly one verified function.
        #
        # We intentionally DO NOT use nm-derived counts for
        # unmatched DSD gap units because those split ELF
        # objects do not preserve the complete config-level
        # function inventory.
        #
        unit_total_functions = (
            1
            if matched
            else 0
        )

        unit_matched_functions = (
            1
            if matched
            else 0
        )

        real_unit_function_sum += (
            unit_total_functions
        )

        unit_matched_code = (
            code_size
            if matched
            else 0
        )

        if matched:
            matched_code += (
                code_size
            )

            matched_functions += 1
            complete_units += 1

        metadata = {
            "complete": matched,

            "auto_generated":
                not matched,

            "progress_categories": [
                "arm9"
            ],
        }

        if row.get(
            "source_path"
        ):
            metadata[
                "source_path"
            ] = row["source_path"]

        unit = {
            "name":
                row["name"],

            "measures":
                measures(
                    code_size,
                    unit_matched_code,
                    unit_total_functions,
                    unit_matched_functions,
                    1,
                    1 if matched else 0,
                ),

            "metadata":
                metadata,
        }

        if matched:
            function_name = row.get(
                "matched_function",
                row["name"],
            )

            unit["functions"] = [
                {
                    "name":
                        function_name,

                    "size":
                        str(code_size),

                    "fuzzy_match_percent":
                        100.0,

                    "address":
                        "0",
                }
            ]

        units.append(unit)

    if (
        real_unit_code_sum
        != total_code
    ):
        raise RuntimeError(
            "Real-unit code sum mismatch: "
            f"{real_unit_code_sum} "
            f"!= {total_code}"
        )

    #
    # The remaining project-level function inventory goes in
    # a zero-code bookkeeping unit.
    #
    # decomp.dev's treemap ignores units with total_code == 0,
    # so this keeps the global function denominator honest
    # without creating a bogus visual rectangle.
    #
    unmatched_function_inventory = (
        total_functions
        - real_unit_function_sum
    )

    if (
        unmatched_function_inventory
        < 0
    ):
        raise RuntimeError(
            "Function bookkeeping "
            "underflow."
        )

    units.append(
        {
            "name":
                "ARM9 unmatched "
                "function inventory",

            "measures":
                measures(
                    0,
                    0,
                    unmatched_function_inventory,
                    0,
                    1,
                    0,
                ),

            "metadata": {
                "complete":
                    False,

                "auto_generated":
                    True,

                "bookkeeping_only":
                    True,

                "progress_categories": [
                    "arm9"
                ],
            },
        }
    )

    if (
        matched_code
        != expected_matched_code
    ):
        raise RuntimeError(
            "Matched code mismatch: "
            f"{matched_code} != "
            f"{expected_matched_code}"
        )

    if (
        matched_functions
        != expected_matched_functions
    ):
        raise RuntimeError(
            "Matched function mismatch: "
            f"{matched_functions} != "
            f"{expected_matched_functions}"
        )

    summed_total_functions = sum(
        int(
            unit["measures"][
                "total_functions"
            ]
        )
        for unit in units
    )

    if (
        summed_total_functions
        != total_functions
    ):
        raise RuntimeError(
            "Unit function totals "
            "do not sum to project "
            "denominator."
        )

    overall = measures(
        total_code,
        matched_code,
        total_functions,
        matched_functions,
        len(units),
        complete_units,
    )

    report = {
        "measures":
            overall,

        "units":
            units,

        "version":
            2,

        "categories": [
            {
                "id":
                    "arm9",

                "name":
                    "ARM9 main .text",

                "measures":
                    overall,
            }
        ],
    }

    output = ROOT / args.out

    output.parent.mkdir(
        parents=True,
        exist_ok=True,
    )

    output.write_text(
        json.dumps(
            report,
            indent=2,
        )
        + "\n"
    )

    visible_units = [
        unit
        for unit in units
        if int(
            unit["measures"][
                "total_code"
            ]
        ) > 0
    ]

    print(
        "REAL_TREEMAP_UNITS="
        + str(
            len(visible_units)
        )
    )

    print(
        "BOOKKEEPING_UNITS="
        + str(
            len(units)
            - len(visible_units)
        )
    )

    print(
        "COMPLETE_CODE_UNITS="
        + str(
            complete_units
        )
    )

    print(
        "MATCHED_CODE="
        f"{matched_code}/"
        f"{total_code}"
    )

    print(
        "MATCHED_CODE_PERCENT="
        f"{percent(matched_code, total_code):.6f}"
    )

    print(
        "MATCHED_FUNCTIONS="
        f"{matched_functions}/"
        f"{total_functions}"
    )

    print(
        "MATCHED_FUNCTION_PERCENT="
        f"{percent(matched_functions, total_functions):.6f}"
    )

    print(
        "UNMATCHED_FUNCTION_INVENTORY="
        + str(
            unmatched_function_inventory
        )
    )

    print(
        "REPORT_VERSION=2"
    )


if __name__ == "__main__":
    main()
