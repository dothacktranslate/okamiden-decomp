# Nonmatching ARM9 source

This directory contains source reconstructions that compile successfully
with the established MWCCARM toolchain but are not yet byte-for-byte
matches.

They are retained because they capture useful recovered control flow,
types, structure layouts, calls, and source shape while exact matching
continues.

`config/arm9/fuzzy_sources.tsv` records the current structural similarity
score for each nonmatching function.

The current metric is `structural-v1`, the project's fast,
relocation-aware exploratory similarity score. It is deliberately kept
separate from exact match status and should not be confused with a native
objdiff fuzzy score.

Only functions in `config/arm9/mwcc_sources.tsv` count as exact matches.
