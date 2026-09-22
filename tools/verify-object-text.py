#!/usr/bin/env python3

from pathlib import Path
import hashlib
import re
import subprocess
import sys


if len(sys.argv) != 4:
    print(
        "usage: verify-object-text.py "
        "<reference.o> <source.o> <output-prefix>",
        file=sys.stderr,
    )
    sys.exit(2)


reference = Path(sys.argv[1])
source = Path(sys.argv[2])
prefix = Path(sys.argv[3])

prefix.parent.mkdir(parents=True, exist_ok=True)

ref_bin = Path(str(prefix) + ".reference.bin")
src_bin = Path(str(prefix) + ".source.bin")


def run(args):
    return subprocess.run(
        args,
        check=True,
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
    ).stdout


def extract_text(obj, dest):
    subprocess.run(
        [
            "arm-none-eabi-objcopy",
            "-O", "binary",
            "-j", ".text",
            str(obj),
            str(dest),
        ],
        check=True,
    )

    return dest.read_bytes()


def relocations(obj):
    output = run([
        "arm-none-eabi-objdump",
        "-r",
        "-j", ".text",
        str(obj),
    ])

    result = []

    for line in output.splitlines():

        match = re.match(
            r"^\s*"
            r"([0-9A-Fa-f]+)"
            r"\s+"
            r"(R_ARM_[A-Z0-9_]+)"
            r"\s+"
            r"(.+?)"
            r"\s*$",
            line,
        )

        if not match:
            continue

        offset = int(match.group(1), 16)
        rtype = match.group(2)

        value = match.group(3).strip()

        # objdump may print a REL addend as:
        #
        #   func_02010af0-0x00000004
        #
        # The original delink object and newly compiled object
        # can encode the relocation-site addend differently.
        # For structural comparison we care about the symbol,
        # relocation type, and relocation offset.
        symbol = re.sub(
            r"[+-]0x[0-9A-Fa-f]+$",
            "",
            value,
        )

        result.append(
            (offset, rtype, symbol, value)
        )

    return result, output


# Number of bytes occupied by the relocation site.
#
# Refuse unknown types rather than silently masking bytes we
# do not understand.
WIDTHS = {
    "R_ARM_NONE": 0,

    "R_ARM_PC24": 4,
    "R_ARM_ABS32": 4,
    "R_ARM_REL32": 4,
    "R_ARM_CALL": 4,
    "R_ARM_JUMP24": 4,
    "R_ARM_PLT32": 4,
    "R_ARM_TARGET1": 4,
    "R_ARM_TARGET2": 4,

    "R_ARM_THM_CALL": 4,
    "R_ARM_THM_JUMP24": 4,
    "R_ARM_THM_MOVW_ABS_NC": 4,
    "R_ARM_THM_MOVT_ABS": 4,

    "R_ARM_MOVW_ABS_NC": 4,
    "R_ARM_MOVT_ABS": 4,

    "R_ARM_ABS16": 2,
    "R_ARM_THM_PC8": 2,
    "R_ARM_THM_PC12": 2,
    "R_ARM_THM_JUMP11": 2,
    "R_ARM_THM_JUMP8": 2,
    "R_ARM_THM_JUMP6": 2,

    "R_ARM_ABS8": 1,
}


if not reference.is_file():
    print(
        f"ERROR: reference object not found: {reference}",
        file=sys.stderr,
    )
    sys.exit(2)

if not source.is_file():
    print(
        f"ERROR: source object not found: {source}",
        file=sys.stderr,
    )
    sys.exit(2)


ref_data = extract_text(reference, ref_bin)
src_data = extract_text(source, src_bin)

ref_relocs, ref_reloc_text = relocations(reference)
src_relocs, src_reloc_text = relocations(source)


print("reference:")
print(f"size={len(ref_data)}")
print(
    hashlib.sha256(ref_data).hexdigest(),
    reference,
)

print("source:")
print(f"size={len(src_data)}")
print(
    hashlib.sha256(src_data).hexdigest(),
    source,
)


if len(ref_data) != len(src_data):
    print("MATCH=DIFFERENT")
    print("REASON=TEXT_SIZE")
    sys.exit(1)


def signature(items):
    return sorted(
        (offset, rtype, symbol)
        for offset, rtype, symbol, _ in items
    )


ref_signature = signature(ref_relocs)
src_signature = signature(src_relocs)

print()
print("reference .text relocations:")

if ref_signature:
    for item in ref_signature:
        print(
            f"  0x{item[0]:08X} "
            f"{item[1]} "
            f"{item[2]}"
        )
else:
    print("  none")

print("source .text relocations:")

if src_signature:
    for item in src_signature:
        print(
            f"  0x{item[0]:08X} "
            f"{item[1]} "
            f"{item[2]}"
        )
else:
    print("  none")


if ref_signature != src_signature:
    print()
    print("MATCH=DIFFERENT")
    print("REASON=RELOCATION_SIGNATURE")
    print()
    print("--- reference objdump -r ---")
    print(ref_reloc_text)
    print("--- source objdump -r ---")
    print(src_reloc_text)
    sys.exit(1)


masked = set()

for offset, rtype, symbol in ref_signature:

    if rtype not in WIDTHS:
        print()
        print("MATCH=ERROR")
        print(
            "REASON=UNKNOWN_RELOCATION_TYPE "
            f"{rtype}"
        )
        sys.exit(2)

    width = WIDTHS[rtype]

    for i in range(offset, offset + width):
        if i >= len(ref_data):
            print()
            print("MATCH=ERROR")
            print(
                "REASON=RELOCATION_OUTSIDE_TEXT "
                f"{rtype}@0x{offset:X}"
            )
            sys.exit(2)

        masked.add(i)


mismatches = [
    i
    for i, (a, b) in enumerate(
        zip(ref_data, src_data)
    )
    if i not in masked and a != b
]


normalized_ref = bytearray(ref_data)
normalized_src = bytearray(src_data)

for i in masked:
    normalized_ref[i] = 0
    normalized_src[i] = 0


print()
print(f"RELOCATION_MASKED_BYTES={len(masked)}")

if masked:
    print(
        "RELOCATION_MASKED_OFFSETS=" +
        ",".join(
            f"0x{i:02X}"
            for i in sorted(masked)
        )
    )
else:
    print("RELOCATION_MASKED_OFFSETS=none")

print(
    "NORMALIZED_REFERENCE_SHA256=" +
    hashlib.sha256(normalized_ref).hexdigest()
)

print(
    "NORMALIZED_SOURCE_SHA256=" +
    hashlib.sha256(normalized_src).hexdigest()
)


if mismatches:
    print()
    print("MATCH=DIFFERENT")
    print(
        "NON_RELOCATION_MISMATCHES=" +
        ",".join(
            f"0x{i:02X}"
            for i in mismatches
        )
    )

    for i in mismatches[:50]:
        print(
            f"  +0x{i:04X}: "
            f"{ref_data[i]:02X} != "
            f"{src_data[i]:02X}"
        )

    sys.exit(1)


print()
print("NON_RELOCATION_MISMATCHES=0")

if masked:
    print("MATCH=EXACT_RELOCATION_AWARE")
else:
    print("MATCH=EXACT")

sys.exit(0)
