#!/usr/bin/env python3

import argparse
import json
import re
from pathlib import Path


ROOT = Path(__file__).resolve().parent.parent

MAIN_SYMBOLS = ROOT / "config/arm9/symbols.txt"
ITCM_SYMBOLS = ROOT / "config/arm9/itcm/symbols.txt"
DTCM_SYMBOLS = ROOT / "config/arm9/dtcm/symbols.txt"

DELINKS = ROOT / "config/arm9/delinks.txt"
MANIFEST = ROOT / "config/arm9/mwcc_sources.tsv"

TEXT_START_EXPECTED = 0x02000000
TEXT_END_EXPECTED = 0x02069640
TOTAL_CODE_EXPECTED = 431_680

MAIN_FUNCTIONS_EXPECTED = 3_223
MATCHED_FUNCTIONS_EXPECTED = 18
MATCHED_CODE_EXPECTED = 776


FUNC_NAME_RE = re.compile(
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


def count_func_lines(path):
    if not path.is_file():
        return 0

    count = 0

    for raw in path.read_text().splitlines():
        if FUNC_NAME_RE.match(
            raw.strip()
        ):
            count += 1

    return count


def read_text_range():
    text = DELINKS.read_text()

    match = TEXT_RE.search(text)

    if match is None:
        raise RuntimeError(
            "Main ARM9 .text range "
            "not found."
        )

    return (
        int(match.group(1), 16),
        int(match.group(2), 16),
    )


def read_main_functions():
    functions = []

    for line_number, raw in enumerate(
        MAIN_SYMBOLS.read_text().splitlines(),
        1,
    ):
        line = raw.strip()

        name_match = FUNC_NAME_RE.match(
            line
        )

        if name_match is None:
            continue

        name = name_match.group(1)

        addr_match = ADDR_RE.search(
            line
        )

        if addr_match is None:
            raise RuntimeError(
                f"{name} has no address "
                f"at symbols.txt:"
                f"{line_number}"
            )

        size_match = SIZE_RE.search(
            line
        )

        functions.append(
            {
                "name":
                    name,

                "address":
                    int(
                        addr_match.group(1),
                        16,
                    ),

                "explicit_size":
                    (
                        int(
                            size_match.group(1),
                            16,
                        )
                        if size_match
                        else None
                    ),

                "line":
                    line_number,
            }
        )

    functions.sort(
        key=lambda row:
            row["address"]
    )

    return functions


def resolve_sizes(
    functions,
    text_start,
    text_end,
):
    explicit = 0
    inferred = 0

    seen_names = set()
    seen_addresses = set()

    for i, function in enumerate(
        functions
    ):
        name = function["name"]
        start = function["address"]

        if name in seen_names:
            raise RuntimeError(
                f"Duplicate function {name}"
            )

        if start in seen_addresses:
            raise RuntimeError(
                "Duplicate function address "
                f"0x{start:08X}"
            )

        seen_names.add(name)
        seen_addresses.add(start)

        next_start = (
            functions[i + 1]["address"]
            if i + 1 < len(functions)
            else text_end
        )

        if (
            function["explicit_size"]
            is not None
        ):
            size = function[
                "explicit_size"
            ]

            source = "explicit"
            explicit += 1

        else:
            size = next_start - start

            source = "inferred"
            inferred += 1

        if size <= 0:
            raise RuntimeError(
                f"Bad size for {name}: "
                f"{size}"
            )

        end = start + size

        if start < text_start:
            raise RuntimeError(
                f"{name} starts outside "
                "main .text."
            )

        if end > text_end:
            raise RuntimeError(
                f"{name} ends outside "
                "main .text."
            )

        if end > next_start:
            raise RuntimeError(
                "Function overlap:\n"
                f"  {name}: "
                f"0x{start:08X}-"
                f"0x{end:08X}\n"
                f"  next starts "
                f"0x{next_start:08X}"
            )

        function["size"] = size
        function["end"] = end
        function["size_source"] = (
            source
        )

    return explicit, inferred


def read_matched_functions():
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


def build_units(
    functions,
    matched,
    text_start,
    text_end,
):
    units = []

    cursor = text_start
    gap_index = 0

    for function in functions:
        start = function["address"]
        end = function["end"]
        size = function["size"]
        name = function["name"]

        if start < cursor:
            raise RuntimeError(
                f"Coverage overlap at {name}"
            )

        if start > cursor:
            gap_size = start - cursor

            units.append(
                {
                    "name":
                        (
                            f"gap_{gap_index:04d}_"
                            f"{cursor:08x}_"
                            f"{start:08x}"
                        ),

                    "measures":
                        measures(
                            gap_size,
                            0,
                            0,
                            0,
                        ),

                    "metadata": {
                        "complete":
                            False,

                        "auto_generated":
                            True,

                        "gap":
                            True,

                        "start_address":
                            str(cursor),

                        "end_address":
                            str(start),

                        "progress_categories":
                            ["arm9"],
                    },
                }
            )

            gap_index += 1

        is_match = name in matched

        metadata = {
            "complete":
                is_match,

            "auto_generated":
                not is_match,

            "size_source":
                function[
                    "size_source"
                ],

            "start_address":
                str(start),

            "end_address":
                str(end),

            "progress_categories":
                ["arm9"],
        }

        if is_match:
            metadata["source_path"] = (
                f"src/main/{name}.c"
            )

        units.append(
            {
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
                            (
                                100.0
                                if is_match
                                else 0.0
                            ),

                        "address":
                            str(start),

                        "metadata": {
                            "virtual_address":
                                str(start),

                            "size_source":
                                function[
                                    "size_source"
                                ],
                        },
                    }
                ],

                "metadata":
                    metadata,
            }
        )

        cursor = end

    if cursor < text_end:
        units.append(
            {
                "name":
                    (
                        f"gap_{gap_index:04d}_"
                        f"{cursor:08x}_"
                        f"{text_end:08x}"
                    ),

                "measures":
                    measures(
                        text_end - cursor,
                        0,
                        0,
                        0,
                    ),

                "metadata": {
                    "complete":
                        False,

                    "auto_generated":
                        True,

                    "gap":
                        True,

                    "start_address":
                        str(cursor),

                    "end_address":
                        str(text_end),

                    "progress_categories":
                        ["arm9"],
                },
            }
        )

    return units


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

    #
    # First establish exactly where the old 3304 count came
    # from. These diagnostics do not control the main treemap.
    #
    main_inventory = count_func_lines(
        MAIN_SYMBOLS
    )

    itcm_inventory = count_func_lines(
        ITCM_SYMBOLS
    )

    dtcm_inventory = count_func_lines(
        DTCM_SYMBOLS
    )

    print(
        "MAIN_FUNC_INVENTORY="
        + str(main_inventory)
    )

    print(
        "ITCM_FUNC_INVENTORY="
        + str(itcm_inventory)
    )

    print(
        "DTCM_FUNC_INVENTORY="
        + str(dtcm_inventory)
    )

    print(
        "MAIN_PLUS_ITCM_DTCM="
        + str(
            main_inventory
            + itcm_inventory
            + dtcm_inventory
        )
    )

    print()

    if (
        main_inventory
        != MAIN_FUNCTIONS_EXPECTED
    ):
        raise RuntimeError(
            "Expected 3223 main ARM9 "
            "func_* entries, found "
            f"{main_inventory}."
        )

    text_start, text_end = (
        read_text_range()
    )

    if (
        text_start
        != TEXT_START_EXPECTED
        or text_end
        != TEXT_END_EXPECTED
    ):
        raise RuntimeError(
            "Unexpected main ARM9 "
            ".text bounds."
        )

    total_code = (
        text_end
        - text_start
    )

    if total_code != TOTAL_CODE_EXPECTED:
        raise RuntimeError(
            "Unexpected main ARM9 "
            f".text size: {total_code}"
        )

    functions = read_main_functions()

    if (
        len(functions)
        != MAIN_FUNCTIONS_EXPECTED
    ):
        raise RuntimeError(
            "Parsed function count "
            f"{len(functions)} != 3223."
        )

    explicit, inferred = (
        resolve_sizes(
            functions,
            text_start,
            text_end,
        )
    )

    print(
        "PARSED_MAIN_FUNCTIONS="
        + str(len(functions))
    )

    print(
        "EXPLICIT_SIZE_FUNCTIONS="
        + str(explicit)
    )

    print(
        "INFERRED_SIZE_FUNCTIONS="
        + str(inferred)
    )

    if inferred:
        print()
        print(
            "INFERRED-SIZE FUNCTIONS:"
        )

        for function in functions:
            if (
                function["size_source"]
                != "inferred"
            ):
                continue

            print(
                f"  {function['name']} "
                f"0x"
                f"{function['address']:08X} "
                f"size=0x"
                f"{function['size']:X}"
            )

    matched = (
        read_matched_functions()
    )

    if (
        len(matched)
        != MATCHED_FUNCTIONS_EXPECTED
    ):
        raise RuntimeError(
            "Expected 18 matched "
            f"functions, found "
            f"{len(matched)}."
        )

    function_names = {
        function["name"]
        for function in functions
    }

    missing = sorted(
        matched - function_names
    )

    if missing:
        raise RuntimeError(
            "Matched functions missing "
            "from main ARM9 inventory:\n  "
            + "\n  ".join(missing)
        )

    matched_code = sum(
        function["size"]
        for function in functions
        if function["name"] in matched
    )

    if (
        matched_code
        != MATCHED_CODE_EXPECTED
    ):
        raise RuntimeError(
            "Expected 776 matched "
            f"bytes, found "
            f"{matched_code}."
        )

    units = build_units(
        functions,
        matched,
        text_start,
        text_end,
    )

    function_units = [
        unit
        for unit in units
        if (
            int(
                unit["measures"][
                    "total_functions"
                ]
            )
            == 1
        )
    ]

    gap_units = [
        unit
        for unit in units
        if (
            unit.get(
                "metadata",
                {},
            ).get(
                "gap",
                False,
            )
        )
    ]

    green_units = [
        unit
        for unit in function_units
        if (
            int(
                unit["measures"][
                    "matched_functions"
                ]
            )
            == 1
        )
    ]

    unit_code_sum = sum(
        int(
            unit["measures"][
                "total_code"
            ]
        )
        for unit in units
    )

    unit_function_sum = sum(
        int(
            unit["measures"][
                "total_functions"
            ]
        )
        for unit in units
    )

    unit_matched_code = sum(
        int(
            unit["measures"][
                "matched_code"
            ]
        )
        for unit in units
    )

    unit_matched_functions = sum(
        int(
            unit["measures"][
                "matched_functions"
            ]
        )
        for unit in units
    )

    if unit_code_sum != TOTAL_CODE_EXPECTED:
        raise RuntimeError(
            "Function + gap coverage "
            f"{unit_code_sum} != "
            f"{TOTAL_CODE_EXPECTED}."
        )

    if (
        unit_function_sum
        != MAIN_FUNCTIONS_EXPECTED
    ):
        raise RuntimeError(
            "Function unit sum "
            f"{unit_function_sum} "
            "!= 3223."
        )

    if (
        unit_matched_code
        != MATCHED_CODE_EXPECTED
    ):
        raise RuntimeError(
            "Matched code unit sum "
            "is not 776."
        )

    if (
        unit_matched_functions
        != MATCHED_FUNCTIONS_EXPECTED
    ):
        raise RuntimeError(
            "Matched function unit "
            "sum is not 18."
        )

    gap_bytes = sum(
        int(
            unit["measures"][
                "total_code"
            ]
        )
        for unit in gap_units
    )

    function_bytes = (
        TOTAL_CODE_EXPECTED
        - gap_bytes
    )

    overall = measures(
        TOTAL_CODE_EXPECTED,
        MATCHED_CODE_EXPECTED,
        MAIN_FUNCTIONS_EXPECTED,
        MATCHED_FUNCTIONS_EXPECTED,
        len(units),
        MATCHED_FUNCTIONS_EXPECTED,
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

    print()
    print(
        "============================================================"
    )
    print(
        "FUNCTION-LEVEL REPORT SUMMARY"
    )
    print(
        "============================================================"
    )

    print(
        "FUNCTION_UNITS="
        + str(len(function_units))
    )

    print(
        "GAP_UNITS="
        + str(len(gap_units))
    )

    print(
        "GREEN_FUNCTION_UNITS="
        + str(len(green_units))
    )

    print(
        "FUNCTION_BYTES="
        + str(function_bytes)
    )

    print(
        "GAP_BYTES="
        + str(gap_bytes)
    )

    print(
        "TOTAL_REPORT_UNITS="
        + str(len(units))
    )

    print(
        "MATCHED_CODE=776/431680"
    )

    print(
        "CODE_PERCENT="
        f"{percent(776, 431680):.6f}"
    )

    print(
        "MATCHED_FUNCTIONS=18/3223"
    )

    print(
        "FUNCTION_PERCENT="
        f"{percent(18, 3223):.6f}"
    )

    print(
        "FUNCTION_LEVEL_REPORT=VALID"
    )


if __name__ == "__main__":
    main()
