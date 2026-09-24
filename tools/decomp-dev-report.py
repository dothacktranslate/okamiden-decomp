#!/usr/bin/env python3

import argparse
import json
import re
from pathlib import Path


ROOT = Path(__file__).resolve().parent.parent

SYMBOLS = ROOT / "config/arm9/symbols.txt"
DELINKS = ROOT / "config/arm9/delinks.txt"
MANIFEST = ROOT / "config/arm9/mwcc_sources.tsv"

TEXT_START = 0x02000000
TEXT_END = 0x02069640

TOTAL_CODE = 431680
TOTAL_FUNCTIONS = 3223

MATCHED_CODE = 852
MATCHED_FUNCTIONS = 20


FUNC_RE = re.compile(
    r"^(func_[0-9A-Fa-f]+)\b"
)

ADDR_RE = re.compile(
    r"\baddr:(0x[0-9A-Fa-f]+)\b"
)

SIZE_RE = re.compile(
    r"\bsize=(0x[0-9A-Fa-f]+)\b"
)

TEXT_RE = re.compile(
    r"^\s*\.text\s+"
    r"start:(0x[0-9A-Fa-f]+)\s+"
    r"end:(0x[0-9A-Fa-f]+)\s+"
    r"kind:code\b",
    re.MULTILINE,
)


def percent(part, total):
    if total == 0:
        return 0.0

    return part * 100.0 / total


def measures(
    total_code,
    matched_code,
    total_functions,
    matched_functions,
    total_units=1,
    complete_units=0,
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


def read_text_bounds():
    text = DELINKS.read_text()

    match = TEXT_RE.search(text)

    if match is None:
        raise RuntimeError(
            "ARM9 .text bounds not found."
        )

    return (
        int(match.group(1), 16),
        int(match.group(2), 16),
    )


def read_functions():
    result = []

    for line_number, raw in enumerate(
        SYMBOLS.read_text().splitlines(),
        1,
    ):
        line = raw.strip()

        name_match = FUNC_RE.match(line)

        if name_match is None:
            continue

        addr_match = ADDR_RE.search(line)
        size_match = SIZE_RE.search(line)

        if addr_match is None:
            raise RuntimeError(
                f"Function without address "
                f"at line {line_number}: "
                f"{line}"
            )

        if size_match is None:
            raise RuntimeError(
                f"Function without size "
                f"at line {line_number}: "
                f"{line}"
            )

        result.append(
            {
                "name":
                    name_match.group(1),

                "address":
                    int(
                        addr_match.group(1),
                        16,
                    ),

                "size":
                    int(
                        size_match.group(1),
                        16,
                    ),
            }
        )

    result.sort(
        key=lambda item:
            item["address"]
    )

    return result


def read_matched():
    matched = set()

    for raw in (
        MANIFEST
        .read_text()
        .splitlines()
    ):
        if (
            not raw.strip()
            or raw.lstrip().startswith("#")
            or "\t" not in raw
        ):
            continue

        source = raw.split(
            "\t",
            1,
        )[0].strip()

        matched.add(
            Path(source).stem
        )

    return matched


def function_unit(
    function,
    matched,
):
    name = function["name"]
    address = function["address"]
    size = function["size"]

    is_match = name in matched

    #
    # IMPORTANT:
    #
    # Keep this deliberately limited to documented objdiff
    # report fields. Do not add custom per-function metadata.
    #
    return {
        "name":
            name,

        "measures":
            measures(
                size,
                size if is_match else 0,
                1,
                1 if is_match else 0,
                1,
                1 if is_match else 0,
            ),

        "functions": [
            {
                "name":
                    name,

                "size":
                    str(size),

                "fuzzy_match_percent":
                    100.0 if is_match else 0.0,

                "address":
                    str(address),
            }
        ],

        "metadata": {
            "complete":
                is_match,

            "auto_generated":
                False,

            "progress_categories":
                ["arm9"],
        },
    }


def gap_unit(
    index,
    start,
    end,
):
    size = end - start

    return {
        "name":
            (
                f"gap_{index:04d}_"
                f"{start:08x}_"
                f"{end:08x}"
            ),

        "measures":
            measures(
                size,
                0,
                0,
                0,
                1,
                0,
            ),

        "metadata": {
            "complete":
                False,

            "auto_generated":
                True,

            "progress_categories":
                ["arm9"],
        },
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

    start, end = read_text_bounds()

    if start != TEXT_START:
        raise RuntimeError(
            f"Unexpected .text start: "
            f"0x{start:08X}"
        )

    if end != TEXT_END:
        raise RuntimeError(
            f"Unexpected .text end: "
            f"0x{end:08X}"
        )

    if end - start != TOTAL_CODE:
        raise RuntimeError(
            "Unexpected ARM9 .text size."
        )

    functions = read_functions()

    if len(functions) != TOTAL_FUNCTIONS:
        raise RuntimeError(
            f"Expected {TOTAL_FUNCTIONS} "
            f"functions, found "
            f"{len(functions)}."
        )

    matched = read_matched()

    if len(matched) != MATCHED_FUNCTIONS:
        raise RuntimeError(
            f"Expected {MATCHED_FUNCTIONS} "
            f"matched functions, found "
            f"{len(matched)}."
        )

    names = {
        function["name"]
        for function in functions
    }

    missing = sorted(
        matched - names
    )

    if missing:
        raise RuntimeError(
            "Matched functions absent "
            "from main ARM9:\n  "
            + "\n  ".join(missing)
        )

    matched_bytes = sum(
        function["size"]
        for function in functions
        if function["name"] in matched
    )

    if matched_bytes != MATCHED_CODE:
        raise RuntimeError(
            f"Expected {MATCHED_CODE} "
            f"matched bytes, found "
            f"{matched_bytes}."
        )

    units = []

    cursor = TEXT_START
    gap_index = 0

    for function in functions:
        function_start = (
            function["address"]
        )

        function_end = (
            function_start
            + function["size"]
        )

        if function_start < cursor:
            raise RuntimeError(
                "Function overlap at "
                + function["name"]
            )

        if function_start > cursor:
            units.append(
                gap_unit(
                    gap_index,
                    cursor,
                    function_start,
                )
            )

            gap_index += 1

        units.append(
            function_unit(
                function,
                matched,
            )
        )

        cursor = function_end

    if cursor < TEXT_END:
        units.append(
            gap_unit(
                gap_index,
                cursor,
                TEXT_END,
            )
        )

    code_sum = sum(
        int(
            unit["measures"][
                "total_code"
            ]
        )
        for unit in units
    )

    function_sum = sum(
        int(
            unit["measures"][
                "total_functions"
            ]
        )
        for unit in units
    )

    matched_code_sum = sum(
        int(
            unit["measures"][
                "matched_code"
            ]
        )
        for unit in units
    )

    matched_function_sum = sum(
        int(
            unit["measures"][
                "matched_functions"
            ]
        )
        for unit in units
    )

    if code_sum != TOTAL_CODE:
        raise RuntimeError(
            f"Unit code sum "
            f"{code_sum} != {TOTAL_CODE}"
        )

    if function_sum != TOTAL_FUNCTIONS:
        raise RuntimeError(
            "Function sum mismatch."
        )

    if matched_code_sum != MATCHED_CODE:
        raise RuntimeError(
            "Matched code sum mismatch."
        )

    if (
        matched_function_sum
        != MATCHED_FUNCTIONS
    ):
        raise RuntimeError(
            "Matched function sum mismatch."
        )

    overall = measures(
        TOTAL_CODE,
        MATCHED_CODE,
        TOTAL_FUNCTIONS,
        MATCHED_FUNCTIONS,
        len(units),
        MATCHED_FUNCTIONS,
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

    gaps = [
        unit
        for unit in units
        if not unit.get("functions")
    ]

    green = [
        unit
        for unit in units
        if (
            unit.get("functions")
            and unit["metadata"][
                "complete"
            ]
        )
    ]

    print(
        "FUNCTION_UNITS="
        + str(TOTAL_FUNCTIONS)
    )

    print(
        "GAP_UNITS="
        + str(len(gaps))
    )

    print(
        "GREEN_UNITS="
        + str(len(green))
    )

    print(
        "TOTAL_UNITS="
        + str(len(units))
    )

    print(
        "MATCHED_CODE="
        f"{MATCHED_CODE}/{TOTAL_CODE}"
    )

    print(
        "CODE_PERCENT="
        f"{percent(MATCHED_CODE, TOTAL_CODE):.6f}%"
    )

    print(
        "MATCHED_FUNCTIONS="
        f"{MATCHED_FUNCTIONS}/"
        f"{TOTAL_FUNCTIONS}"
    )

    print(
        "FUNCTION_PERCENT="
        f"{percent(MATCHED_FUNCTIONS, TOTAL_FUNCTIONS):.6f}%"
    )

    print(
        "SCHEMA_STRICT_REPORT=YES"
    )


if __name__ == "__main__":
    main()
