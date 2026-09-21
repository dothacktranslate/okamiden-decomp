# Okamiden Decompilation

Work-in-progress matching decompilation of Okamiden for the Nintendo DS.

The goal is to reconstruct the game's program code in source form while
producing machine code that matches the original game.

## Status

Early project bootstrap.

## Requirements

A legally obtained copy of Okamiden is required. No ROM, extracted game
assets, proprietary SDK files, or proprietary compiler binaries are included
in this repository.

## Tooling

- ds-decomp / dsd
- objdiff
- Metrowerks CodeWarrior ARM toolchain, version to be determined

## Reference Version

This project currently targets the USA release of Okamiden:

- Game code: BOOE
- ROM version: 0
- Size: 134,217,728 bytes
- MD5: 27998bc1dbdd4b3d68a16235d8a40320
- SHA-1: 95eea81b1189cea711d4e541eceb9863668404fc
- SHA-256: 282b50c4b7ffe09ab7b8caabe65e2f1d535258d6dda4aab044c0062efcb4a67f

The ARM9 overlay set includes DS Protect v1.27 protected code.
The project currently pins ds-decomp commit
c4080635ac38aaf9608ca23751defa9fa19cf81a.

## Progress

Progress reporting will use objdiff reports compatible with decomp.dev once
the matching build pipeline is operational.
