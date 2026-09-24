#!/usr/bin/env python3

import argparse
import json
import subprocess
from pathlib import Path


ROOT = Path(__file__).resolve().parent.parent

OBJDIFF = ROOT / "objdiff.json"

MANIFEST = (
    ROOT
    / "config/arm9/"
      "mwcc_sources.tsv"
)

EXPECTED_TOTAL_CODE = 431_680

# This comes from the authoritative ARM9 symbol/config
# inventory used by tools/decomp-status.py. It is deliberately
# NOT derived from nm output on DSD's split object files.
TOTAL_FUNCTIONS = 3_304

EXPECTED_MATCHED_CODE = 776
EXPECTED_MATCHED_UNITS = 18
EXPECTED_MATCHED_FUNCTIONS = 18


def read_manifest():
    result = set()

    for raw in (
        MANIFEST
        .read_text()
        .splitlines()
    ):
        if (
            not raw.strip()
            or raw.lstrip()
                .startswith("#")
            or "\t" not in raw
        ):
            continue

        source = raw.split(
            "\t",
            1,
        )[0].strip()

        if source:
            result.add(source)

    return result


def normalize_path(value):
    path = Path(value)

    if not path.is_absolute():
        path = ROOT / path

    return path.resolve()


def is_main_unit(unit):
    name = unit.get(
        "name",
        "",
    )

    metadata = (
        unit.get("metadata")
        or {}
    )

    source_path = metadata.get(
        "source_path",
        "",
    )

    if name.startswith(
        "_dsd_gap@main_"
    ):
        return True

    if name.startswith(
        "src/main/"
    ):
        return True

    if source_path.startswith(
        "src/main/"
    ):
        return True

    for key in (
        "target_path",
        "base_path",
    ):
        value = unit.get(key)

        if not value:
            continue

        value = value.replace(
            "\\",
            "/",
        )

        if "/src/main/" in value:
            return True

        if "_dsd_gap@main_" in value:
            return True

    return False


def find_reference_object(unit):
    candidates = []

    for key in (
        "target_path",
        "base_path",
    ):
        value = unit.get(key)

        if not value:
            continue

        candidates.append(
            normalize_path(value)
        )

    # We want the reference/delink object whenever available.
    candidates.sort(
        key=lambda path: (
            "/build/delinks/"
            not in path.as_posix(),
            path.as_posix(),
        )
    )

    for path in candidates:
        if path.is_file():
            return path

    raise RuntimeError(
        "No existing object for unit "
        f"{unit.get('name')!r}.\n"
        + "\n".join(
            f"  {path}"
            for path in candidates
        )
    )


def text_size(path):
    output = subprocess.check_output(
        [
            "arm-none-eabi-objdump",
            "-h",
            str(path),
        ],
        text=True,
    )

    for line in output.splitlines():
        parts = line.split()

        if (
            len(parts) >= 3
            and parts[1] == ".text"
        ):
            return int(
                parts[2],
                16,
            )

    return 0


def defined_func_symbols(path):
    """
    Diagnostic only.

    DSD split objects are not guaranteed to retain every
    config-level func_* symbol as an ELF STT_FUNC/T symbol.

    Therefore this count must never be used as the project's
    authoritative 3304-function denominator.
    """

    output = subprocess.check_output(
        [
            "arm-none-eabi-nm",
            "--defined-only",
            "-n",
            str(path),
        ],
        text=True,
    )

    result = []

    for line in output.splitlines():
        parts = line.split()

        if len(parts) < 2:
            continue

        name = parts[-1]

        if name.startswith(
            "func_"
        ):
            result.append(name)

    return result


def source_for_unit(
    unit,
    manifest,
):
    metadata = (
        unit.get("metadata")
        or {}
    )

    candidate = metadata.get(
        "source_path"
    )

    if candidate in manifest:
        return candidate

    name = unit.get(
        "name",
        "",
    )

    if name.startswith(
        "src/main/"
    ):
        candidate = (
            name
            if name.endswith(".c")
            else name + ".c"
        )

        if candidate in manifest:
            return candidate

    for source in manifest:
        stem = (
            Path(source)
            .with_suffix("")
            .as_posix()
        )

        if name == stem:
            return source

    return None


def main():
    parser = argparse.ArgumentParser()

    parser.add_argument(
        "--out",
        default=(
            "config/arm9/"
            "decomp-dev-units.json"
        ),
    )

    args = parser.parse_args()

    config = json.loads(
        OBJDIFF.read_text()
    )

    manifest = read_manifest()

    raw_units = config.get(
        "units",
        [],
    )

    main_units = [
        unit
        for unit in raw_units
        if is_main_unit(unit)
    ]

    if not main_units:
        raise RuntimeError(
            "No ARM9 main units found "
            "in objdiff.json."
        )

    result = []

    matched_sources = set()

    observed_symbol_total = 0

    for index, unit in enumerate(
        main_units
    ):
        name = unit.get(
            "name"
        )

        if not name:
            raise RuntimeError(
                f"Unnamed ARM9 unit "
                f"at index {index}"
            )

        obj = find_reference_object(
            unit
        )

        code_size = text_size(
            obj
        )

        observed_symbols = (
            defined_func_symbols(
                obj
            )
        )

        observed_symbol_total += (
            len(observed_symbols)
        )

        source = source_for_unit(
            unit,
            manifest,
        )

        matched = (
            source is not None
        )

        row = {
            "name": name,
            "code_size": code_size,
            "matched": matched,

            # Purely diagnostic. This is NOT the official
            # function denominator.
            "observed_func_symbols":
                len(observed_symbols),
        }

        if source is not None:
            matched_sources.add(
                source
            )

            row["source_path"] = (
                source
            )

            row["matched_function"] = (
                Path(source).stem
            )

        result.append(row)

        print(
            f"{index:3d} "
            f"{name:44} "
            f"code={code_size:7d} "
            f"nm-funcs="
            f"{len(observed_symbols):4d} "
            f"matched="
            f"{'YES' if matched else 'NO'}"
        )

    missing_sources = sorted(
        manifest
        - matched_sources
    )

    if missing_sources:
        raise RuntimeError(
            "Manifest source units were "
            "not found in ARM9 units:\n  "
            + "\n  ".join(
                missing_sources
            )
        )

    total_code = sum(
        row["code_size"]
        for row in result
    )

    matched_units = [
        row
        for row in result
        if row["matched"]
    ]

    matched_code = sum(
        row["code_size"]
        for row in matched_units
    )

    matched_functions = (
        len(matched_units)
    )

    print()
    print("=" * 78)
    print("ARM9 UNIT SNAPSHOT")
    print("=" * 78)

    print(
        "REAL_UNIT_COUNT="
        + str(len(result))
    )

    print(
        "TOTAL_CODE="
        + str(total_code)
    )

    print(
        "EXPECTED_TOTAL_CODE="
        + str(
            EXPECTED_TOTAL_CODE
        )
    )

    print(
        "MATCHED_UNIT_COUNT="
        + str(
            len(matched_units)
        )
    )

    print(
        "MATCHED_CODE="
        + str(matched_code)
    )

    print(
        "MATCHED_FUNCTIONS="
        + str(
            matched_functions
        )
    )

    print(
        "CONFIG_FUNCTION_DENOMINATOR="
        + str(TOTAL_FUNCTIONS)
    )

    print(
        "OBSERVED_DEFINED_FUNC_SYMBOLS="
        + str(
            observed_symbol_total
        )
    )

    print()
    print(
        "NOTE: observed nm func_* symbols "
        "are diagnostic only."
    )

    if (
        observed_symbol_total
        != TOTAL_FUNCTIONS
    ):
        print(
            "EXPECTED_NM_COUNT_DIFFERENCE=YES"
        )

    if (
        total_code
        != EXPECTED_TOTAL_CODE
    ):
        raise RuntimeError(
            "Real ARM9 object .text sizes "
            "do not sum to 431680 bytes: "
            f"{total_code}"
        )

    if (
        len(matched_units)
        != EXPECTED_MATCHED_UNITS
    ):
        raise RuntimeError(
            "Expected 18 matched units, "
            f"found {len(matched_units)}."
        )

    if (
        matched_code
        != EXPECTED_MATCHED_CODE
    ):
        raise RuntimeError(
            "Expected 776 matched bytes, "
            f"found {matched_code}."
        )

    if (
        matched_functions
        != EXPECTED_MATCHED_FUNCTIONS
    ):
        raise RuntimeError(
            "Expected 18 matched functions, "
            f"found {matched_functions}."
        )

    output = ROOT / args.out

    output.parent.mkdir(
        parents=True,
        exist_ok=True,
    )

    snapshot = {
        "version": 2,

        "total_code":
            EXPECTED_TOTAL_CODE,

        "total_functions":
            TOTAL_FUNCTIONS,

        "matched_code":
            EXPECTED_MATCHED_CODE,

        "matched_functions":
            EXPECTED_MATCHED_FUNCTIONS,

        "observed_defined_func_symbols":
            observed_symbol_total,

        "units":
            result,
    }

    output.write_text(
        json.dumps(
            snapshot,
            indent=2,
        )
        + "\n"
    )

    print()
    print(
        "SNAPSHOT="
        + str(
            output.relative_to(ROOT)
        )
    )

    print(
        "SNAPSHOT_STATUS=VALID"
    )


if __name__ == "__main__":
    main()
