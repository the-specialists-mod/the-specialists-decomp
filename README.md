# The Specialists 3.0: decompilation and documentation

A Ghidra decompilation of the TS 3.0 game libraries, with documentation written so the mod can be
**recreated in Rust**. The Rust side is the `mymod` workspace
([rust-hlmod](https://github.com/CrunchyMonkies/rust-hlmod)), designed in `docs/rust.md` of the
parent workspace.

Nothing here is meant to be compiled back into TS. The decompiled C is a reference for behaviour,
constants, and data layouts.

## Binaries

| Role | File | Toolchain | Symbols | SHA-256 |
|---|---|---|---|---|
| Server (Linux) | `ts/dlls/ts_i386.so` | GCC 2.95, PIC | Full C++ symbols (GNU v2 mangling) | `b4040467…86d1e8` |
| Client (Windows) | `ts/cl_dlls/client.dll` | MSVC (2007) | Exports only, no RTTI | `1811bd4f…8f1fdd` |
| Server (Windows) | `ts/dlls/mp.dll` | MSVC | Stripped. **Not exported**: the `.so` covers the same code with names. | `df7d1f20…7580d0` |

The binaries aren't in this repo. Point `TS_DIR` at a TS 3.0 install to regenerate.

## Layout

```
docs/                     written analysis (start here)
  method.md               how the export was produced, conventions, pitfalls
  server/*.md             server subsystems
  client/*.md             client subsystems
  rust-recreation.md      how it all maps onto the Rust workspace, in build order
server/                   ts_i386.so export: 3,158 functions (35 unnamed), 197 entity class layouts, 226 vtables
client/                   client.dll export: 2,271 functions (1,880 unnamed), 142 heuristic vtables
  decomp/*.c              Ghidra C, grouped by class (server) or address range (client)
  functions.tsv           index: address, size, class, name, signature, callees, callers, file
  strings.tsv             strings with their referencing functions
  vtables.tsv  classes.tsv  data_symbols.tsv  imports.tsv
scripts/
  run.sh                  regenerate everything (headless Ghidra 12.1.2)
  ghidra/*.java           ConfigureAnalysis, CreateMissingFunctions, ApplyGoldSrcTypes, ExportAll
  types/                  GoldSrc SDK header (from FWGS) preprocessed for i386
```

## Reading the code

* Addresses are Ghidra addresses. **For the server, subtract `0x10000` to get `objdump`/`nm`
  addresses.** Client addresses are the same in both.
* Engine calls are typed: `(*g_engfuncs.pfnMessageBegin)(…)` on the server,
  `gEngfuncs.pTriAPI->…` on the client.
* Server entity objects: `pev` is at `+0x00`, and the vtable pointer is at **`+0x60`** (GCC 2.95).
  `this->vtable[N]` is row `vptr_index == N` in `vtables.tsv`.
* `classes.tsv` sizes marked "from GetClassPtr" are the exact `sizeof` the game allocates.
* Find a function with `grep -P '\tCTSGun\tZoom\t' server/functions.tsv`. The last column is the
  file it's in.

## Regenerating

```sh
TS_DIR=/path/to/ts FWGS_DIR=/path/to/xash3d-fwgs scripts/run.sh all
```

You need Ghidra 12.x at `/opt/ghidra` (or set `GHIDRA`), plus `clang` and `python3`. A full run
takes about 1.5 minutes on 24 cores. See [docs/method.md](docs/method.md).

## Documentation index

See [docs/README.md](docs/README.md).
