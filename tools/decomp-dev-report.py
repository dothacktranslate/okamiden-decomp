#!/usr/bin/env python3

import argparse
import json
import re
from pathlib import Path


ROOT = Path(__file__).resolve().parent.parent

DELINKS = ROOT / "config/arm9/delinks.txt"
MANIFEST = ROOT / "config/arm9/mwcc_sources.tsv"

# Established Okamiden ARM9-main progress denominator.
TOTAL_CODE = 431_680
TOTAL_FUNCTIONS = 3_304


def pct(part, total):
    if total == 0:
        return 0.0
    return (part * 100.0) / total


def make_measures(
    total_code,
    matched_code,
    total_functions,
    matched_functions,
    total_units,
    complete_units,
):
    code_pct = pct(
        matched_code,
        total_code,
    )

    function_pct = pct(
        matched_functions,
        total_functions,
    )

    return {
        "fuzzy_match_percent": code_pct,

        "total_code": str(total_code),
        "matched_code": str(matched_code),
        "matched_code_percent": code_pct,

        "total_data": "0",
        "matched_data": "0",
        "matched_data_percent": 0.0,

        "total_functions": total_functions,
        "matched_functions": matched_functions,
        "matched_functions_percent": function_pct,

        "complete_code": str(matched_code),
        "complete_code_percent": code_pct,

        "complete_data": "0",
        "complete_data_percent": 0.0,

        "total_units": total_units,
        "complete_units": complete_units,
    }


def read_manifest():
    result = []

    for raw in MANIFEST.read_text().splitlines():
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

        result.append(source)

    return result


def read_ranges():
    text = DELINKS.read_text()

    block_re = re.compile(
        r"(?ms)^"
        r"([^\s:#][^:\n]*\.c):\s*\n"
        r"(.*?)"
        r"(?="
        r"^[^\s:#][^:\n]*\.c:\s*\n"
        r"|\Z"
        r")"
    )

    range_re = re.compile(
        r"\.text\s+"
        r"start:(0x[0-9A-Fa-f]+)\s+"
        r"end:(0x[0-9A-Fa-f]+)"
    )

    result = {}

    for match in block_re.finditer(text):
        source = match.group(1).strip()
        body = match.group(2)

        range_match = range_re.search(body)

        if range_match is None:
            continue

        start = int(
            range_match.group(1),
            16,
        )

        end = int(
            range_match.group(2),
            16,
        )

        if end <= start:
            raise RuntimeError(
                f"Invalid range for {source}: "
                f"0x{start:X}-0x{end:X}"
            )

        result[source] = (
            start,
            end,
        )

    return result


def main():
    parser = argparse.ArgumentParser()

    parser.add_argument(
        "--out",
        default="build/decomp-dev/report.json",
    )

    args = parser.parse_args()

    manifest = read_manifest()
    ranges = read_ranges()

    matched = []

    for source in manifest:
        if source not in ranges:
            raise RuntimeError(
                f"No delink range for {source}"
            )

        start, end = ranges[source]

        matched.append(
            {
                "source": source,
                "name": Path(source).stem,
                "start": start,
                "end": end,
                "size": end - start,
            }
        )

    matched.sort(
        key=lambda row: row["start"]
    )

    matched_code = sum(
        row["size"]
        for row in matched
    )

    matched_functions = len(matched)

    if matched_code > TOTAL_CODE:
        raise RuntimeError(
            "Matched code exceeds total."
        )

    if matched_functions > TOTAL_FUNCTIONS:
        raise RuntimeError(
            "Matched functions exceed total."
        )

    remaining_code = (
        TOTAL_CODE
        - matched_code
    )

    remaining_functions = (
        TOTAL_FUNCTIONS
        - matched_functions
    )

    units = []

    for row in matched:
        size = row["size"]

        units.append(
            {
                "name": row["name"],

                "measures": make_measures(
                    size,
                    size,
                    1,
                    1,
                    1,
                    1,
                ),

                "functions": [
                    {
                        "name": row["name"],
                        "size": str(size),
                        "fuzzy_match_percent": 100.0,
                        "address": "0",

                        "metadata": {
                            "virtual_address":
                                str(row["start"]),
                        },
                    }
                ],

                "metadata": {
                    "complete": True,
                    "source_path": row["source"],
                    "progress_categories": [
                        "arm9"
                    ],
                },
            }
        )

    # One synthetic unit represents all code that has not yet
    # been converted to verified matching source. This gives
    # decomp.dev the correct whole-ARM9 denominator without
    # requiring the ROM or proprietary compiler in CI.
    units.append(
        {
            "name": "ARM9 remaining",

            "measures": make_measures(
                remaining_code,
                0,
                remaining_functions,
                0,
                1,
                0,
            ),

            "metadata": {
                "complete": False,
                "auto_generated": True,
                "progress_categories": [
                    "arm9"
                ],
            },
        }
    )

    overall = make_measures(
        TOTAL_CODE,
        matched_code,
        TOTAL_FUNCTIONS,
        matched_functions,
        len(units),
        matched_functions,
    )

    report = {
        "measures": overall,

        "units": units,

        "version": 2,

        "categories": [
            {
                "id": "arm9",
                "name": "ARM9 main .text",
                "measures": overall,
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

    print(
        f"MATCHED_CODE={matched_code}"
    )

    print(
        f"TOTAL_CODE={TOTAL_CODE}"
    )

    print(
        "CODE_PERCENT="
        f"{pct(matched_code, TOTAL_CODE):.6f}"
    )

    print(
        f"MATCHED_FUNCTIONS={matched_functions}"
    )

    print(
        f"TOTAL_FUNCTIONS={TOTAL_FUNCTIONS}"
    )

    print(
        "FUNCTION_PERCENT="
        f"{pct(matched_functions, TOTAL_FUNCTIONS):.6f}"
    )

    print(
        f"REPORT={output}"
    )

    print("REPORT_VERSION=2")


if __name__ == "__main__":
    main()
