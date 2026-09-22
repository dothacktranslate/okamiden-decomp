#!/usr/bin/env python3

from __future__ import print_function

import argparse
import json
from pathlib import Path
import re
import subprocess
import sys


ROOT = Path(__file__).resolve().parent.parent

MANIFEST = ROOT / "config/arm9/mwcc_sources.tsv"
DELINKS = ROOT / "config/arm9/delinks.txt"
OBJDIFF = ROOT / "objdiff.json"
BUILD_LOG = ROOT / "logs/build_latest.txt"
CONFIG_DIR = ROOT / "config/arm9"

FUNC_RE = re.compile(
    r"\bfunc_([0-9A-Fa-f]{8})\b"
)

TEXT_RANGE_RE = re.compile(
    r"\.text\s+"
    r"start:(0x[0-9A-Fa-f]+)\s+"
    r"end:(0x[0-9A-Fa-f]+)"
)


def git_head():
    try:
        return subprocess.check_output(
            [
                "git",
                "-C",
                str(ROOT),
                "rev-parse",
                "--short",
                "HEAD",
            ],
            text=True,
        ).strip()
    except Exception:
        return "unknown"


def read_manifest():
    entries = []

    if not MANIFEST.is_file():
        raise SystemExit(
            "ERROR: manifest not found: "
            + str(MANIFEST)
        )

    for lineno, raw in enumerate(
        MANIFEST.read_text().splitlines(),
        1,
    ):
        line = raw.strip()

        if not line or line.startswith("#"):
            continue

        parts = raw.split("\t", 1)

        if len(parts) != 2:
            raise SystemExit(
                "ERROR: malformed manifest line "
                f"{lineno}: {raw}"
            )

        source = parts[0].strip()
        flags = parts[1].strip()

        entries.append({
            "source": source,
            "flags": flags,
        })

    return entries


def read_delink_ranges():
    result = {}
    current = None

    if not DELINKS.is_file():
        return result

    for raw in DELINKS.read_text().splitlines():

        if (
            raw
            and not raw[0].isspace()
            and raw.rstrip().endswith(":")
        ):
            current = raw.strip()[:-1]
            continue

        if current is None:
            continue

        match = TEXT_RANGE_RE.search(raw)

        if not match:
            continue

        start = int(match.group(1), 16)
        end = int(match.group(2), 16)

        result[current] = {
            "start": start,
            "end": end,
            "size": end - start,
        }

    return result


def read_objdiff():
    result = {}

    if not OBJDIFF.is_file():
        return result

    try:
        data = json.loads(
            OBJDIFF.read_text()
        )
    except Exception:
        return result

    for unit in data.get("units", []):
        name = unit.get("name")

        if not name:
            continue

        metadata = unit.get(
            "metadata",
            {},
        )

        result[name] = {
            "complete":
                metadata.get("complete"),
            "auto_generated":
                metadata.get("auto_generated"),
            "source_path":
                metadata.get("source_path"),
        }

    return result


def read_build_summary():
    result = {}

    if not BUILD_LOG.is_file():
        return result

    wanted = {
        "SOURCE_COUNT",
        "EXACT_MATCH_COUNT",
        "ALL_SOURCE_UNITS_MATCH",
        "OBJDIFF_STATUS",
        "SOURCE_UNITS_IN_OBJDIFF",
        "BUILD_STATUS",
    }

    for raw in BUILD_LOG.read_text(
        errors="replace"
    ).splitlines():

        if "=" not in raw:
            continue

        key, value = raw.split("=", 1)

        key = key.strip()
        value = value.strip()

        if key in wanted:
            result[key] = value

    return result


def discover_function_symbols():
    names = set()

    if not CONFIG_DIR.is_dir():
        return names

    allowed_suffixes = {
        "",
        ".txt",
        ".yaml",
        ".yml",
        ".json",
        ".csv",
        ".tsv",
        ".map",
    }

    for path in CONFIG_DIR.rglob("*"):

        if not path.is_file():
            continue

        if (
            path.suffix.lower()
            not in allowed_suffixes
        ):
            continue

        try:
            if path.stat().st_size > 8 * 1024 * 1024:
                continue

            text = path.read_text(
                errors="ignore"
            )

        except Exception:
            continue

        for match in FUNC_RE.finditer(text):
            names.add(
                "func_" + match.group(1).lower()
            )

    return names


def format_table(rows):
    headers = [
        "Address",
        "Bytes",
        "Source",
        "Flags",
        "Objdiff",
    ]

    rendered = []

    for row in rows:
        if row["start"] is None:
            address = "?"
        else:
            address = (
                f'0x{row["start"]:08X}'
                f'-0x{row["end"]:08X}'
            )

        complete = row["objdiff_complete"]

        if complete is True:
            objdiff = "complete"
        elif complete is False:
            objdiff = "incomplete"
        else:
            objdiff = "-"

        rendered.append([
            address,
            str(row["size"])
                if row["size"] is not None
                else "?",
            row["source"],
            row["flags"],
            objdiff,
        ])

    widths = []

    for col in range(len(headers)):
        widths.append(
            max(
                len(headers[col]),
                *[
                    len(row[col])
                    for row in rendered
                ],
            )
        )

    lines = []

    lines.append(
        "  ".join(
            headers[i].ljust(widths[i])
            for i in range(len(headers))
        )
    )

    lines.append(
        "  ".join(
            "-" * widths[i]
            for i in range(len(headers))
        )
    )

    for row in rendered:
        lines.append(
            "  ".join(
                row[i].ljust(widths[i])
                for i in range(len(headers))
            )
        )

    return "\n".join(lines)


def make_report(check=False):
    manifest = read_manifest()
    ranges = read_delink_ranges()
    objdiff = read_objdiff()
    build = read_build_summary()
    symbols = discover_function_symbols()

    rows = []
    errors = []

    seen_sources = set()

    for entry in manifest:

        source = entry["source"]
        flags = entry["flags"]

        if source in seen_sources:
            errors.append(
                "duplicate manifest source: "
                + source
            )

        seen_sources.add(source)

        source_path = ROOT / source

        if not source_path.is_file():
            errors.append(
                "missing source file: "
                + source
            )

        info = ranges.get(source)

        if info is None:
            errors.append(
                "missing delink .text range: "
                + source
            )

        unit_name = str(
            Path(source).with_suffix("")
        ).replace("\\", "/")

        metadata = objdiff.get(
            unit_name,
            {},
        )

        if (
            metadata
            and metadata.get("complete")
            is not True
        ):
            errors.append(
                "objdiff unit not complete: "
                + unit_name
            )

        rows.append({
            "source": source,
            "flags": flags,
            "start":
                info["start"]
                if info else None,
            "end":
                info["end"]
                if info else None,
            "size":
                info["size"]
                if info else None,
            "objdiff_complete":
                metadata.get("complete"),
        })

    known_sizes = [
        row["size"]
        for row in rows
        if row["size"] is not None
    ]

    matched_bytes = sum(known_sizes)

    max_end = max(
        (
            row["end"]
            for row in rows
            if row["end"] is not None
        ),
        default=None,
    )

    nearby = []

    if max_end is not None:

        addressed = []

        for name in symbols:
            match = FUNC_RE.fullmatch(name)

            if not match:
                continue

            address = int(
                match.group(1),
                16,
            )

            if address >= max_end:
                addressed.append(
                    (address, name)
                )

        addressed.sort()

        nearby = addressed[:8]

    optimization_counts = {}

    for row in rows:
        flags = row["flags"]

        optimization_counts[flags] = (
            optimization_counts.get(
                flags,
                0,
            ) + 1
        )

    lines = []

    lines.append(
        "OKAMIDEN DECOMPILATION STATUS"
    )
    lines.append(
        "=" * 28
    )
    lines.append("")

    lines.append(
        "Repository HEAD: "
        + git_head()
    )

    lines.append(
        "Matched source units: "
        + str(len(rows))
    )

    lines.append(
        "Matched .text bytes: "
        + str(matched_bytes)
    )

    lines.append(
        "Known func_* symbols in ARM9 config: "
        + str(len(symbols))
    )

    lines.append("")

    lines.append(
        "Matched units"
    )
    lines.append(
        "-------------"
    )

    if rows:
        lines.append(
            format_table(rows)
        )
    else:
        lines.append("(none)")

    lines.append("")
    lines.append(
        "Compiler flag distribution"
    )
    lines.append(
        "--------------------------"
    )

    for flags, count in sorted(
        optimization_counts.items()
    ):
        lines.append(
            f"{count:3d}  {flags}"
        )

    if not optimization_counts:
        lines.append("(none)")

    lines.append("")
    lines.append(
        "Latest build"
    )
    lines.append(
        "------------"
    )

    if build:
        for key in [
            "SOURCE_COUNT",
            "EXACT_MATCH_COUNT",
            "ALL_SOURCE_UNITS_MATCH",
            "OBJDIFF_STATUS",
            "SOURCE_UNITS_IN_OBJDIFF",
            "BUILD_STATUS",
        ]:
            if key in build:
                lines.append(
                    f"{key}={build[key]}"
                )
    else:
        lines.append(
            "(no generated build summary)"
        )

    lines.append("")
    lines.append(
        "Nearby address symbols after "
        "the current matched region"
    )
    lines.append(
        "--------------------------------"
    )

    if nearby:
        for address, name in nearby:
            lines.append(
                f"0x{address:08X}  {name}"
            )
    else:
        lines.append(
            "(none discovered)"
        )

    lines.append("")
    lines.append(
        "These nearby symbols are address "
        "neighbors only; they are not "
        "automatically recommended targets."
    )

    lines.append("")
    lines.append(
        "Consistency"
    )
    lines.append(
        "-----------"
    )

    if errors:
        for error in errors:
            lines.append(
                "ERROR: " + error
            )
    else:
        lines.append(
            "STATUS=CONSISTENT"
        )

    if build:
        expected = str(len(rows))

        if (
            build.get("SOURCE_COUNT")
            not in (None, expected)
        ):
            errors.append(
                "latest build SOURCE_COUNT "
                "does not match manifest"
            )

        if (
            build.get("EXACT_MATCH_COUNT")
            not in (None, expected)
        ):
            errors.append(
                "latest build EXACT_MATCH_COUNT "
                "does not match manifest"
            )

        if (
            build.get(
                "ALL_SOURCE_UNITS_MATCH"
            )
            not in (None, "YES")
        ):
            errors.append(
                "latest build does not report "
                "all source units matching"
            )

        if (
            build.get("BUILD_STATUS")
            not in (None, "SUCCESS")
        ):
            errors.append(
                "latest build is not successful"
            )

    return "\n".join(lines) + "\n", errors


def main():
    parser = argparse.ArgumentParser(
        description=(
            "Summarize current Okamiden "
            "matching-decompilation progress."
        )
    )

    parser.add_argument(
        "--check",
        action="store_true",
        help=(
            "exit nonzero when source, delink, "
            "objdiff, or latest-build metadata "
            "is inconsistent"
        ),
    )

    parser.add_argument(
        "--output",
        default="reports/decomp-status.txt",
        help=(
            "report path relative to repository "
            "root"
        ),
    )

    args = parser.parse_args()

    report, errors = make_report(
        check=args.check
    )

    print(report, end="")

    output = ROOT / args.output
    output.parent.mkdir(
        parents=True,
        exist_ok=True,
    )
    output.write_text(report)

    print(
        "\nReport written to:",
        output.relative_to(ROOT),
    )

    if args.check and errors:
        sys.exit(1)


if __name__ == "__main__":
    main()
