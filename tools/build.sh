#!/usr/bin/env bash
set -euo pipefail

ROOT="$(
    cd "$(dirname "${BASH_SOURCE[0]}")/.." &&
    pwd
)"

cd "$ROOT"

LOG="${OKAMIDEN_BUILD_LOG:-$ROOT/logs/build_latest.txt}"

mkdir -p "$ROOT/logs"

exec > >(tee "$LOG") 2>&1

echo "============================================================"
echo "OKAMIDEN DECOMP BUILD"
echo "============================================================"
echo

CONFIG="$ROOT/config/arm9/config.yaml"
MANIFEST="$ROOT/config/arm9/mwcc_sources.tsv"

DSD="$ROOT/build/tools/dsd"
DSD_BUILDER="$ROOT/tools/build-dsd-patched.sh"

MWCCARM="${MWCCARM:-$ROOT/tools/mwccarm/2.0/sp2p4/mwccarm.exe}"

VERIFY="$ROOT/build/match-verify"

COMMON_FLAGS=(
    -lang c99
    -enum int
    -char signed
    -proc arm946e
    -gccext,on
    -msgstyle gcc
)

echo "Repository:"
git rev-parse --short HEAD

echo
echo "ds-decomp:"
git -C "$ROOT/extern/ds-decomp" rev-parse --short HEAD

echo
echo "Compiler:"
wine "$MWCCARM" -version 2>&1 \
    | grep -E '^Version|Runtime Built'

echo
echo "============================================================"
echo "PATCHED DSD"
echo "============================================================"

if [ ! -x "$DSD" ]; then
    echo "Patched DSD not present; building it."
    "$DSD_BUILDER"
else
    echo "Using existing patched DSD:"
    echo "$DSD"
fi

"$DSD" --version

echo
echo "============================================================"
echo "DELINK REFERENCE OBJECTS"
echo "============================================================"

"$DSD" delink \
    --config-path "$CONFIG"

echo
echo "DELINK_STATUS=0"

echo
echo "============================================================"
echo "COMPILE SOURCE UNITS"
echo "============================================================"

SOURCE_COUNT=0

while IFS=$'\t' read -r SRC PER_FILE_FLAGS || [ -n "${SRC:-}" ]; do

    [ -n "${SRC:-}" ] || continue

    case "$SRC" in
        \#*)
            continue
            ;;
    esac

    if [ ! -f "$ROOT/$SRC" ]; then
        echo "ERROR: source does not exist:"
        echo "$SRC"
        exit 1
    fi

    OBJ="build/${SRC%.c}.o"

    mkdir -p "$ROOT/$(dirname "$OBJ")"

    read -r -a EXTRA_FLAGS <<< "${PER_FILE_FLAGS:-}"

    echo
    echo "------------------------------------------------------------"
    echo "$SRC"
    echo "output: $OBJ"
    echo "flags: ${EXTRA_FLAGS[*]}"
    echo "------------------------------------------------------------"

    wine "$MWCCARM" \
        -c \
        "${EXTRA_FLAGS[@]}" \
        "${COMMON_FLAGS[@]}" \
        "$ROOT/$SRC" \
        -o "$ROOT/$OBJ"

    SOURCE_COUNT=$((SOURCE_COUNT + 1))

done < "$MANIFEST"

echo
echo "SOURCE_COUNT=$SOURCE_COUNT"

if [ "$SOURCE_COUNT" -eq 0 ]; then
    echo "ERROR: no source units were compiled."
    exit 1
fi

echo
echo "============================================================"
echo "GENERATE LCF / OBJECT LIST"
echo "============================================================"

"$DSD" lcf \
    --config-path "$CONFIG"

echo
echo "LCF_STATUS=0"

echo
echo "============================================================"
echo "VALIDATE OBJECT LIST"
echo "============================================================"

python3 - <<'PY'
from pathlib import Path
from collections import Counter

objects = []

for raw in Path("build/objects.txt").read_text().splitlines():
    value = raw.strip()

    if not value:
        continue

    if value.startswith('"') and value.endswith('"'):
        value = value[1:-1]

    objects.append(Path(value))

missing = [
    path
    for path in objects
    if not path.exists()
]

counts = Counter(path.name for path in objects)

duplicates = [
    (name, count)
    for name, count in sorted(counts.items())
    if count > 1
]

print("OBJECT_COUNT=", len(objects))
print("MISSING_OBJECTS=", len(missing))
print("DUPLICATE_BASENAMES=", len(duplicates))

for path in missing:
    print("MISSING:", path)

for name, count in duplicates:
    print("DUPLICATE:", count, name)

if missing or duplicates:
    raise SystemExit(1)

print("OBJECT_LIST_STATUS=CLEAN")
PY

echo
echo "============================================================"
echo "VERIFY MATCHED .TEXT SECTIONS"
echo "============================================================"

rm -rf "$VERIFY"
mkdir -p "$VERIFY"

MATCH_COUNT=0

while IFS=$'\t' read -r SRC PER_FILE_FLAGS || [ -n "${SRC:-}" ]; do

    [ -n "${SRC:-}" ] || continue

    case "$SRC" in
        \#*)
            continue
            ;;
    esac

    STEM="${SRC%.c}"

    REF="$ROOT/build/delinks/${STEM}.o"
    OBJ="$ROOT/build/${STEM}.o"

    SAFE="${STEM//\//_}"

    REF_BIN="$VERIFY/${SAFE}.reference.bin"
    OBJ_BIN="$VERIFY/${SAFE}.source.bin"

    if [ ! -f "$REF" ]; then
        echo "ERROR: reference object missing:"
        echo "$REF"
        exit 1
    fi

    if [ ! -f "$OBJ" ]; then
        echo "ERROR: source object missing:"
        echo "$OBJ"
        exit 1
    fi

    arm-none-eabi-objcopy \
        -O binary \
        -j .text \
        "$REF" \
        "$REF_BIN"

    arm-none-eabi-objcopy \
        -O binary \
        -j .text \
        "$OBJ" \
        "$OBJ_BIN"

    echo
    echo "$SRC"

    echo "reference:"
    stat -c 'size=%s' "$REF_BIN"
    sha256sum "$REF_BIN"

    echo "source:"
    stat -c 'size=%s' "$OBJ_BIN"
    sha256sum "$OBJ_BIN"

    if cmp -s "$REF_BIN" "$OBJ_BIN"; then
        echo "MATCH=EXACT"
        MATCH_COUNT=$((MATCH_COUNT + 1))
    else
        echo "MATCH=DIFFERENT"

        cmp -l "$REF_BIN" "$OBJ_BIN" \
            | head -n 30 || true

        exit 1
    fi

done < "$MANIFEST"

echo
echo "EXACT_MATCH_COUNT=$MATCH_COUNT"

if [ "$MATCH_COUNT" -ne "$SOURCE_COUNT" ]; then
    echo "ERROR: not every source unit matched."
    exit 1
fi

echo
echo "ALL_SOURCE_UNITS_MATCH=YES"

echo
echo "============================================================"
echo "REGENERATE OBJDIFF"
echo "============================================================"

"$DSD" objdiff \
    --config-path "$CONFIG" \
    --output-path .

echo
echo "OBJDIFF_STATUS=0"

python3 - <<'PY'
import json
from pathlib import Path

data = json.loads(Path("objdiff.json").read_text())

units = []

for unit in data.get("units", []):
    metadata = unit.get("metadata", {})

    if metadata.get("source_path"):
        units.append(unit)

print("SOURCE_UNITS_IN_OBJDIFF=", len(units))

for unit in units:
    metadata = unit.get("metadata", {})

    print(
        unit.get("name"),
        "complete=" + str(metadata.get("complete")),
        "source=" + str(metadata.get("source_path")),
    )
PY

echo
echo "============================================================"
echo "MAIN OBJECT ORDER"
echo "============================================================"

grep -n -E \
    '_dsd_gap@main|func_0203a228' \
    build/objects.txt || true

echo
echo "============================================================"
echo "BUILD COMPLETE"
echo "============================================================"

echo "BUILD_STATUS=SUCCESS"

git status --short
