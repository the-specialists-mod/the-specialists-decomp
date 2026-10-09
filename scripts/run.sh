#!/usr/bin/env bash
# Rebuild the whole decompilation: SDK header -> Ghidra import/analysis -> typed export.
# Usage: scripts/run.sh [server|client|all]   (env: TS_DIR, FWGS_DIR, GHIDRA, PROJECT_DIR,
#        EXPORT_ONLY=1 to re-run only ExportAll on the existing databases)
set -euo pipefail
ROOT=$(cd "$(dirname "$0")/.." && pwd)
PARENT=$(cd "$ROOT/.." && pwd)
TS_DIR=${TS_DIR:-$PARENT/ts}
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
run() { # <name> <binary>
    local name=$1 bin=$2 mode
    rm -rf "$ROOT/$name/decomp"
    if [ -n "${EXPORT_ONLY:-}" ]; then   # reuse the analysed database, only re-run the export
        mode=(-process "$(basename "$bin")" -noanalysis)
    else
        rm -rf "$PROJECT_DIR/$name.gpr" "$PROJECT_DIR/$name.rep"
        mode=(-import "$bin" -overwrite -preScript ConfigureAnalysis.java
              -postScript ApplyGoldSrcTypes.java "$TYPES/goldsrc_types_ghidra.h")
    fi
    "$GHIDRA" "$PROJECT_DIR" "$name" "${mode[@]}" \
        -scriptPath "$ROOT/scripts/ghidra" \
        -postScript ExportAll.java "$ROOT/$name" \
        > "$PROJECT_DIR/$name.log" 2>&1
    grep -E "INFO .*(ExportAll|ApplyGoldSrcTypes|ConfigureAnalysis).*> |ERROR|Exception" "$PROJECT_DIR/$name.log" | tail -40
}

case "${1:-all}" in
    server) run server "$TS_DIR/dlls/ts_i386.so" ;;
    client) run client "$TS_DIR/cl_dlls/client.dll" ;;
    all) run server "$TS_DIR/dlls/ts_i386.so" & run client "$TS_DIR/cl_dlls/client.dll" & wait ;;
esac
