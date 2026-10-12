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
| Server (Windows) | `ts/dlls/mp.dll` | MSVC | Exports only, no RTTI. Names recovered from the `.so` (see below). **The only build with the bot AI.** | `df7d1f20…7580d0` |

TS 2.1 (April 2004, `ts21/`, for comparing gameplay with 3.0):

| Role | File | Toolchain | Symbols | SHA-256 |
|---|---|---|---|---|
| Server (Windows) | `ts21/dlls/mp.dll` | MSVC 6, incremental link (`jmp` thunks) | Exports only. Names recovered from the 3.0 `.so`. Has a bot AI. | `31a632e5…8f0e` |
| Client (Windows) | `ts21/cl_dlls/client.dll` | MSVC 6 | Exports, plus RTTI (names the statically linked VGUI classes only) | `6352c0c2…fe5` |

The binaries aren't in this repo. Point `TS_DIR` at a TS 3.0 install to regenerate (and `TS21_DIR`
at a TS 2.1 install for `scripts/run.sh ts21`).

`mp.dll` has no symbols beyond its exports, so `NameMsvcServer.java` borrows them from the `.so`
export: classname exports give 175 classes and their vtables, the `.so` vtables name 745 virtual
methods slot by slot, unique strings and call-graph propagation name 350 more, and
`scripts/types/mpdll_names.tsv` names the bot code (which the `.so` doesn't have). MSVC member
offsets differ from the `.so`'s (`docs/server/bots.md` §14.1).

## Layout

```
docs/                     written analysis (start here)
  method.md               how the export was produced, conventions, pitfalls
  server/*.md             server subsystems
  client/*.md             client subsystems
  rust-recreation.md      how it all maps onto the Rust workspace, in build order
server/                   ts_i386.so export: 3,158 functions (35 unnamed), 197 entity class layouts, 226 vtables
client/                   client.dll export: 2,271 functions (1,880 unnamed), 142 heuristic vtables
server-win/               mp.dll export: 2,677 functions (816 unnamed), 181 named vtables, the bot AI
ts21/server-win/          TS 2.1 mp.dll export: 2,643 functions (1,186 unnamed), 149 classes, 798 virtuals named
ts21/client/              TS 2.1 client.dll export: 4,095 functions (game code unnamed; VGUI named by RTTI)
  decomp/*.c              Ghidra C, grouped by class (server) or address range (client)
  functions.tsv           index: address, size, class, name, signature, callees, callers, file
  strings.tsv             strings with their referencing functions
  vtables.tsv  classes.tsv  data_symbols.tsv  imports.tsv
scripts/
  run.sh                  regenerate everything (headless Ghidra 12.1.2)
  ghidra/*.java           ConfigureAnalysis, CreateMissingFunctions, ApplyGoldSrcTypes, NameMsvcServer, ExportAll
  types/mpdll_names.tsv   hand-made names for mp.dll (bot AI and the shared code it calls)
  ndm.py                  parser/validator for the bots' maps/*.ndm node graphs
  types/                  GoldSrc SDK header (from FWGS) preprocessed for i386
```

## Reading the code

* Addresses are Ghidra addresses. **For the server, subtract `0x10000` to get `objdump`/`nm`
  addresses.** Client and `mp.dll` addresses are the same in both.
* Engine calls are typed: `(*g_engfuncs.pfnMessageBegin)(…)` on the server,
  `gEngfuncs.pTriAPI->…` on the client.
* Server entity objects: `pev` is at `+0x00`, and the vtable pointer is at **`+0x60`** (GCC 2.95).
  `this->vtable[N]` is row `vptr_index == N` in `vtables.tsv`.
* `classes.tsv` sizes marked "from GetClassPtr" are the exact `sizeof` the game allocates.
* Find a function with `grep -P '\tCTSGun\tZoom\t' server/functions.tsv`. The last column is the
  file it's in.

## Regenerating

```sh
TS_DIR=/path/to/ts FWGS_DIR=/path/to/xash3d-fwgs scripts/run.sh all   # or server|client|mpdll
```

You need Ghidra 12.x at `/opt/ghidra` (or set `GHIDRA`), plus `clang` and `python3`. A full run
takes about 3 minutes on 24 cores (`mpdll` runs after `server`, whose export it reads). See [docs/method.md](docs/method.md).

## Documentation index

See [docs/README.md](docs/README.md).
