#!/usr/bin/env bash
# Rebuild the whole decompilation: SDK header -> Ghidra import/analysis -> typed export.
# Usage: scripts/run.sh [server|client|mpdll|all]   (env: TS_DIR, FWGS_DIR, GHIDRA, PROJECT_DIR,
#        EXPORT_ONLY=1 to re-run only the naming + ExportAll steps on the existing databases)
# mpdll (the Windows server) borrows names from the server export, so run `server` first if
# server/ is missing.
set -euo pipefail
ROOT=$(cd "$(dirname "$0")/.." && pwd)
PARENT=$(cd "$ROOT/.." && pwd)
TS_DIR=${TS_DIR:-$PARENT/ts_original}
FWGS_DIR=${FWGS_DIR:-$PARENT/xash3d-fwgs}
GHIDRA=${GHIDRA:-/opt/ghidra/support/analyzeHeadless}
PROJECT_DIR=${PROJECT_DIR:-$PARENT/ghidra/ts30}   # Ghidra databases stay out of git
TYPES=$ROOT/scripts/types

# 1. GoldSrc SDK types for i386, layout-checked by FWGS's own _Static_asserts.
clang -w -E -P -m32 --target=i386-linux-gnu -nostdinc -I"$TYPES/stubinc" \
    -I"$FWGS_DIR/common" -I"$FWGS_DIR/engine" -I"$FWGS_DIR/pm_shared" -I"$FWGS_DIR/public" \
    -I"$FWGS_DIR/3rdparty/library_suffix/include" "$TYPES/goldsrc_types.h" -o "$TYPES/goldsrc_types.i"
clang -w -fsyntax-only -m32 --target=i386-linux-gnu -x c "$TYPES/goldsrc_types.i"
python3 "$TYPES/strip_for_ghidra.py" "$TYPES/goldsrc_types.i" "$TYPES/goldsrc_types_ghidra.h"

mkdir -p "$PROJECT_DIR"
run() { # <name> <binary> [extra -postScript args before ExportAll...]
    local name=$1 bin=$2 mode
    shift 2
    rm -rf "$ROOT/$name/decomp"
    if [ -n "${EXPORT_ONLY:-}" ]; then   # reuse the analysed database, only re-run the export
        mode=(-process "$(basename "$bin")" -noanalysis)
    else
        rm -rf "$PROJECT_DIR/$name.gpr" "$PROJECT_DIR/$name.rep"
        mode=(-import "$bin" -overwrite -preScript ConfigureAnalysis.java
              -postScript CreateMissingFunctions.java
              -postScript ApplyGoldSrcTypes.java "$TYPES/goldsrc_types_ghidra.h")
    fi
    "$GHIDRA" "$PROJECT_DIR" "$name" "${mode[@]}" \
        -scriptPath "$ROOT/scripts/ghidra" "$@" \
        -postScript ExportAll.java "$ROOT/$name" \
        > "$PROJECT_DIR/$name.log" 2>&1
    grep -E "INFO .*(ExportAll|ApplyGoldSrcTypes|ConfigureAnalysis|CreateMissingFunctions|NameMsvcServer).*> |ERROR|Exception" "$PROJECT_DIR/$name.log" | tail -40
}

# mp.dll: class names, vtables and virtual method names come from the .so export; the bot AI
# (absent from the .so) is named from scripts/types/mpdll_names.tsv.
MPDLL_NAMES=(-postScript NameMsvcServer.java "$ROOT/server/functions.tsv" "$ROOT/server/vtables.tsv"
             "$ROOT/server/strings.tsv" "$ROOT/scripts/types/mpdll_names.tsv")
case "${1:-all}" in
    server) run server "$TS_DIR/dlls/ts_i386.so" ;;
    client) run client "$TS_DIR/cl_dlls/client.dll" ;;
    mpdll) run server-win "$TS_DIR/dlls/mp.dll" "${MPDLL_NAMES[@]}" ;;
    all) { run server "$TS_DIR/dlls/ts_i386.so"; run server-win "$TS_DIR/dlls/mp.dll" "${MPDLL_NAMES[@]}"; } &
         run client "$TS_DIR/cl_dlls/client.dll" & wait ;;
esac
