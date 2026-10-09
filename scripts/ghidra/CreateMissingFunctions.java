// Creates functions at code addresses that are referenced but were never turned into functions.
// In client.dll, many small callbacks passed to pfnAddCommand / pfnHookUserMsg / pfnHookEvent
// (push offset handler) and vtable entries were left as bare code or undefined bytes, so they
// never showed up in the decompilation.
// Sources: operand references from instructions, and pointer-sized words in initialized data
// blocks. A data word only counts if it points at an existing instruction, or at bytes that
// disassemble cleanly into a run ending in RET/JMP. Repeats until nothing new is found.
// @category TS30
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.*;
import java.util.*;

public class CreateMissingFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        int total = 0;
        for (int pass = 0; pass < 5; pass++) {
            Set<Address> candidates = new TreeSet<>();
            collectInstructionRefs(candidates);
            collectDataWords(candidates);
            int created = 0;
            for (Address a : candidates) {
                if (monitor.isCancelled()) break;
                if (getFunctionContaining(a) != null) continue;
                if (getInstructionAt(a) == null && !tryDisassemble(a)) continue;
                if (createFunction(a, null) != null) created++;
            }
            total += created;
            println("pass " + pass + ": created " + created + " functions");
            if (created == 0) break;
        }
        println("created " + total + " functions in total");
    }

    private boolean isCode(Address a) {
        MemoryBlock b = a == null ? null : getMemoryBlock(a);
        return b != null && b.isExecute() && b.isInitialized();
    }

    private void collectInstructionRefs(Set<Address> out) {
        for (Instruction ins : currentProgram.getListing().getInstructions(true)) {
            for (Reference r : ins.getReferencesFrom()) {
                Address t = r.getToAddress();
                if (r.getReferenceType().isFlow() && !r.getReferenceType().isCall()) continue; // jumps stay inside functions
                if (isCode(t)) out.add(t);
            }
            // `push imm` / `mov reg, imm` with an address that analysis didn't turn into a reference
            for (int i = 0; i < ins.getNumOperands(); i++) {
                var sc = ins.getScalar(i);
                if (sc == null || sc.bitLength() < 32) continue;
                try {
                    Address t = toAddr(sc.getUnsignedValue());
                    if (isCode(t) && getInstructionAt(t) != null) out.add(t);
                } catch (Exception e) { /* not an address */ }
            }
        }
    }

    private void collectDataWords(Set<Address> out) throws Exception {
        for (MemoryBlock b : currentProgram.getMemory().getBlocks()) {
            if (!b.isInitialized() || b.isExecute()) continue;
            for (Address a = b.getStart(); a.add(3).compareTo(b.getEnd()) <= 0; a = a.add(4)) {
                Address t;
                try {
                    t = toAddr(getInt(a) & 0xffffffffL);
                } catch (Exception e) {
                    continue;
                }
                if (!isCode(t) || getFunctionContaining(t) != null) continue;
                if (getInstructionAt(t) != null || looksLikeCode(t)) out.add(t);
            }
        }
    }

    /** Undefined bytes at t: accept only if a short linear decode ends in RET or JMP. */
    private boolean looksLikeCode(Address t) {
        if (getDataContaining(t) != null || getInstructionContaining(t) != null) return false;
        return getUndefinedDataAt(t) != null || getDataAt(t) == null;
    }

    private boolean tryDisassemble(Address t) throws Exception {
        if (getDataContaining(t) != null) return false;
        DisassembleCommand cmd = new DisassembleCommand(t, null, true);
        if (!cmd.applyTo(currentProgram, monitor)) return false;
        AddressSetView set = cmd.getDisassembledAddressSet();
        if (set == null || set.isEmpty()) return false;
        // Reject decodes that run into garbage: require a terminating RET/JMP within the set.
        for (Instruction ins : currentProgram.getListing().getInstructions(set, true)) {
            String m = ins.getMnemonicString();
            if (m.startsWith("RET") || m.equals("JMP")) return true;
        }
        clearListing(set);
        return false;
    }
}
