# Okamiden Decompilation Status

This file records the validated matching-decompilation baseline at the end of Phase 10.

## Current baseline

- Repository checkpoint before this document: `62fc676`
- ARM9 matched source units: **3**
- Matched ARM9 `.text` bytes: **164**
- ds-decomp revision: `c408063`
- Compiler: Metrowerks CodeWarrior ARM Version 3.0 build 139
- Matching verification supports relocation-bearing source units.
- Objdiff integration is enabled and all current source units are complete.
- Shared declarations for the current `0x0203Axxx` subsystem live in `src/main/func_0203a.h`.
- `tools/decomp-status.py --check` provides the current progress/consistency report.

## Matched functions

| Function | Address range | Size | Compiler flags |
| --- | --- | ---: | --- |
| `func_0203a228` | `0x0203A228-0x0203A28C` | 100 bytes | `-O1,p -interworking` |
| `func_0203a28c` | `0x0203A28C-0x0203A2AC` | 32 bytes | `-O2 -interworking` |
| `func_0203a2ac` | `0x0203A2AC-0x0203A2CC` | 32 bytes | `-O2 -interworking` |

## Verification state

The complete build currently reports:

- `SOURCE_COUNT=3`
- `EXACT_MATCH_COUNT=3`
- `ALL_SOURCE_UNITS_MATCH=YES`
- `OBJDIFF_STATUS=0`
- `BUILD_STATUS=SUCCESS`

`func_0203a2ac` contains an `R_ARM_THM_CALL` relocation to
`func_02010af0`. Its match is verified by comparing the relocation
signature and all non-relocation bytes.

## Current structural findings

The three matched functions appear to belong to the same neighboring
ARM9 subsystem and access an object table through offset `0x1F04`.

The current shared types remain deliberately conservative. Similar
structures have not yet been merged unless the recovered code requires
the same proven layout.

## Next development direction

Future work should use the established workflow rather than requiring
new one-off matching scripts for each function:

1. select a useful target;
2. reconstruct source and infer types/prototypes;
3. determine compiler options when necessary;
4. add the source to the manifest and delink configuration;
5. run `./tools/build.sh`;
6. run `./tools/decomp-status.py --check`;
7. commit only after exact or relocation-aware exact verification.

Address-neighbor candidates shown by the status tool are informational,
not automatic recommendations.
