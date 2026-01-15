# graphcore-ipu-research

This is a repository containing our attempt to reverse engineer the Graphcore IPU and build a new toolchain for it. Our effort is currently directed to the IPU1 chip (part of the C2 card released in 2017), as that's the hardware we have right now.

## Useful Links
- [LLVM Fork Source Code](https://github.com/Sanae6/llvm-project-fork)
  - A fork of Graphcore's LLVM fork, adds some undocumented instructions to make it easier to decompile the bootloader and other programs.
- [Developer Downloads](https://www.graphcore.ai/downloads)
  - Useful libraries (`libgraphcore_target_access.a`, `libipu_user.a`) are available in the CLI tools and the Poplar SDK.
    - The CLI tools contain even more up to date versions of tools, but it doesn't matter since we're focused on the IPU1 right now.
  - Everything is being reversed with the 3.4.0 SDK.
  - The kernel driver is available in the SDK as well, source and all.
- [Graphcore's GitHub Org](https://github.com/graphcore)
  - The home to many useful examples, mostly useless for reverse engineering. The old icu flasher is available but woefully outdated.
