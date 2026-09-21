#!/usr/bin/env bash
set -euo pipefail

ROOT="$(
    cd "$(dirname "${BASH_SOURCE[0]}")/.." &&
    pwd
)"

DSD="$ROOT/extern/ds-decomp"
PATCH="$ROOT/patches/ds-decomp-lcf-gap-names.patch"

WORKTREE="$ROOT/build/dsd-patched-worktree"
CARGO_TARGET="$ROOT/build/dsd-cargo-target"
OUTPUT="$ROOT/build/tools/dsd"

PINNED="$(git -C "$DSD" rev-parse HEAD)"

cleanup() {
    if [ -d "$WORKTREE" ]; then
        git -C "$DSD" worktree remove \
            --force \
            "$WORKTREE" \
            >/dev/null 2>&1 || true
    fi

    git -C "$DSD" worktree prune \
        >/dev/null 2>&1 || true
}

trap cleanup EXIT

cleanup

mkdir -p "$(dirname "$OUTPUT")"

git -C "$DSD" worktree add \
    --detach \
    "$WORKTREE" \
    "$PINNED" \
    >/dev/null

git -C "$WORKTREE" apply "$PATCH"

CARGO_TARGET_DIR="$CARGO_TARGET" \
cargo build \
    --release \
    --manifest-path "$WORKTREE/Cargo.toml"

cp \
    "$CARGO_TARGET/release/dsd" \
    "$OUTPUT"

chmod +x "$OUTPUT"

echo "Built patched DSD:"
echo "$OUTPUT"

"$OUTPUT" --version
