# How the decompilation was made

Everything in `server/` and `client/` comes from `scripts/run.sh`. It runs headless Ghidra 12.1.2
(`/opt/ghidra/support/analyzeHeadless`) on the original binaries. No GUI steps, no manual renames.
Rerun it after improving a script and the whole export updates consistently.

```sh
scripts/run.sh all            # ~1.5 min: SDK types, import + analysis, typing, export
scripts/run.sh server         # one binary only
EXPORT_ONLY=1 scripts/run.sh  # skip import/analysis, just re-export from the saved databases
```

Environment variables: `TS_DIR` (default `../ts`), `FWGS_DIR` (default `../xash3d-fwgs`),
`GHIDRA`, and `PROJECT_DIR` (default `../ghidra/ts30`). The Ghidra databases stay out of git.
Open them in the GUI (`ghidra` → File → Open Project → `ghidra/ts30/server.gpr`) to browse
interactively. The GhidraMCP bridge works once the GUI is running.

## Pipeline

| Step | Script | What it does |
|---|---|---|
| 1 | `scripts/types/goldsrc_types.h` | Preprocesses the FWGS SDK headers for `i386` with stub libc headers (`stubinc/`). `clang -fsyntax-only -m32` then runs FWGS's own `_Static_assert` size checks, which proves the struct layouts match 32-bit GoldSrc. |
| 2 | `scripts/types/strip_for_ghidra.py` | Removes `_Static_assert`s and inline function bodies, which Ghidra's C parser rejects. |
| 3 | `ConfigureAnalysis.java` (pre) | Enables the deprecated GNU v2 demangler and disables two analyzers that break this binary (see Pitfalls). |
| 4 | Ghidra auto-analysis | Default analyzers, plus Decompiler Parameter ID. |
| 4b | `CreateMissingFunctions.java` (post) | Creates functions at code addresses that instructions or data tables reference but analysis left as bare code. These are mostly client callbacks passed to `pfnAddCommand`/`pfnHookUserMsg`/`pfnHookEvent`, plus vtable entries. It adds about 650 decompiled client functions (1,620 → 2,271) and about 35 server functions. A data word only counts if it points at existing code, or at bytes that disassemble cleanly up to a RET/JMP. |
| 5 | `ApplyGoldSrcTypes.java` (post) | Parses the SDK header into the program and types the engine interface globals, the `DLL_FUNCTIONS` table and its 50 callbacks, the client's exported entry points, and the server's entity class layouts. |
| 6 | `ExportAll.java` (post) | Decompiles every function in parallel and writes the TSV indexes. |

## Output format

| File | Contents |
|---|---|
| `decomp/<Class>.c` | Every method of a C++ class, in address order. Each function has a header comment with its address, size, prototype, and callers. |
| `decomp/global_<addr>.c` | Named free functions, in address-ordered chunks of 150. Neighbouring functions usually come from the same source file. |
| `decomp/unnamed_<addr>.c` | Functions with no symbol. That's nearly all of the client, and one function in the server. |
| `functions.tsv` | `address size namespace name signature callees callers file`. Use it to find which `.c` file a function is in. |
| `strings.tsv` | Every defined string and the functions that reference it. This is the main tool for naming client functions. |
| `vtables.tsv` | Reconstructed vtables, one row per slot. |
| `classes.tsv` | C++ classes, method counts, and struct sizes. "from GetClassPtr" marks an exact `sizeof`. |
| `data_symbols.tsv` | Named globals (server only: `gmsg*`, cvars, `m_SaveData` tables, …). |
| `imports.tsv` | External functions. |

## Address conventions

* **Server (`ts_i386.so`):** Ghidra loads the ELF at image base `0x10000`, so
  **Ghidra address = `objdump`/`nm` address + 0x10000**. Every address in `server/` and in the
  docs is a Ghidra address. To read raw data, subtract `0x10000`:
  `objdump -s -j .rodata --start-address=$((0xADDR - 0x10000)) ts_i386.so`.
* **Client (`client.dll`):** image base `0x10000000`. Ghidra and `objdump` addresses are the same.

## What the typing gives you

* `g_engfuncs` (server) and `gEngfuncs` (client) are typed with the SDK tables, so engine calls
  read `(*g_engfuncs.pfnPrecacheModel)("…")` and `gEngfuncs.pTriAPI->Begin(…)`.
* The 2007-era tables are **shorter than FWGS's**, because FWGS appends extensions. The script
  truncates them to the space the binary reserves:
  * `enginefuncs_t_ts30` is 620 bytes: the space up to `gpGlobals`.
  * `cl_enginefunc_t_ts30` is 392 bytes: the `rep movsd` count in `Initialize`.

  For Rust, that means the TS engine table ends at the last field that fits in those sizes.
* Server entity classes (`CBaseEntity` and all 196 derived classes reached from `GetClassPtr`)
  have a struct with `pev` (`entvars_t *`) at `+0x00` and `vtable` at `+0x60`. So code reads
  `this->pev->origin` and `(*this->vtable[0x5d])(this, …)`. Other members are still
  `this->field_0xNNN`. The subsystem docs give the offset tables that were worked out.
* Demangled signatures use the real SDK `entvars_s`, `edict_s`, `TraceResult`, … plus a 12-byte
  `Vector { float x, y, z; }`. Without that, they would point at the demangler's empty placeholder
  structs.

## GCC 2.95 facts the server relies on

* **Mangling** is GNU v2 (`Zoom__6CTSGuni`, `_._13CVoiceGameMgr` for destructors).
  Modern binutils can't demangle it. Use `/opt/ghidra/GPL/DemanglerGnu/os/linux_x86_64/demangler_gnu_v2_24 -s gnu`.
* **The vtable pointer is at `+0x60`, not `+0`**: GCC 2.x puts it after the data members of the
  first class that declares virtual functions (`CBaseEntity`). The Windows `mp.dll` and
  `client.dll` (MSVC) put it at `+0`, so `pev` is at `+4` there. Offsets for the same member differ
  between the Linux and Windows builds.
* **Vtables** have no symbols. With vtable thunks, a vtable is `[0] = 0`, `[1] = &__tf<Class>`
  (type-info function), `[2..]` = virtual functions. `ExportAll` finds every `__tf` function and
  scans `.data` for `0, &__tf` pairs. The object's vptr points at entry `[0]`, so the
  decompiler's `this->vtable[N]` is `vtables.tsv` row `vptr_index == N`, which is `slot N-2`.
  `slot` counts from the first virtual function. For example, `CTSGun` `vtable[0x5d]` is slot 91,
  `CBasePlayerWeapon::SendWeaponAnim`. In the MSVC client, the vptr points at the first
  function, so `vptr_index == slot` there.
* **Class sizes** come from `GetClassPtr<X>`, the template every classname export calls. It inlines
  `pfnPvAllocEntPrivateData(edict, sizeof(X))` and then stores the vtables of X's base classes in
  construction order. That order is also the inheritance chain.
* **PIC code** reaches globals through `ebx` (`__i686.get_pc_thunk.bx`) and calls its own exported
  functions through the PLT. Ghidra resolves both.

## Pitfalls hit (and fixed in the scripts)

| Symptom | Cause | Fix |
|---|---|---|
| 1,500+ `FUN_` fragments in a fully symbolized binary; functions end at the first call to `strcmp` | "Non-Returning Functions - Discovered" flagged `strcmp`, `UTIL_TraceLine`, `EMIT_SOUND_DYN`, and even `__i686.get_pc_thunk.bx` as noreturn | Analyzer disabled. The known-noreturn library list (`abort`, `__assert_fail`, …) is kept. |
| Still ~1,800 `FUN_`, many starting mid-instruction | "GCC Exception Handlers" misreads GCC 2.95's old `"eh"` `.eh_frame` augmentation and creates functions at bogus FDE addresses | Analyzer disabled. The server went from 4,930 functions (1,791 unnamed) to 3,124 functions (1 unnamed). `CreateMissingFunctions` later adds about 35 real but unnamed functions (code reached only through data or operand references). |
| Client docs had to fall back to `objdump` for ~45 message hooks, commands and event handlers | Callbacks passed as `push offset handler` were never made into functions | `CreateMissingFunctions.java`. Every `.text` address the client docs cite is now inside a decompiled function. |
| Engine calls showed as `(*_DAT_00190f74)()` even after typing `g_engfuncs` | The FWGS `enginefuncs_t` (636 bytes) overlapped `gpGlobals`; typing `gpGlobals` cleared it | Tables truncated to the real size (see above). |
| `Path element starting with '.' is not permitted` | Ghidra rejects `..` in project paths | `run.sh` canonicalizes paths. |
| Engine ran the client but printed nothing | (FWGS, not Ghidra) | Use `-dev 2`. |

## Known gaps

* The client is stripped and has no RTTI. Its functions are named only where the subsystem docs
  identified them (address → proposed name tables). Those names haven't been written back into
  the Ghidra database yet. A follow-up script could apply the tables and re-export.
* The six subsystem docs were written by parallel analysis passes over the export. Their
  addresses and the cross-doc claims were spot-checked (the armour default, the dead game modes,
  `CashBased`, section references), not exhaustively re-verified. "(inferred)" marks weaker claims.
* Class member offsets past `pev`/`vtable` aren't typed in the databases. They're documented in
  `docs/server/*.md`.
* `mp.dll` (the Windows server, stripped, MSVC layout) isn't exported. The Linux `.so` has symbols
  and is the better source. `mp.dll` matters only for Windows-specific offsets.
