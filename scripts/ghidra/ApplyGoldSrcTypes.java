// Imports the GoldSrc SDK types (scripts/types/goldsrc_types_ghidra.h, 32-bit layouts) and applies
// them to the engine interface globals and the game-library entry points, so decompiled code reads
// g_engfuncs.pfnPrecacheModel(...) instead of (**(code **)(DAT_xxx + 4))(...).
// Args: <path to goldsrc_types_ghidra.h>
// @category TS30
import ghidra.app.cmd.function.ApplyFunctionSignatureCmd;
import ghidra.app.cmd.function.FunctionRenameOption;
import ghidra.app.script.GhidraScript;
import ghidra.app.util.cparser.C.CParser;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.*;
import ghidra.app.util.NamespaceUtils;
import java.nio.file.*;
import java.util.*;

public class ApplyGoldSrcTypes extends GhidraScript {
    private final Map<String, DataType> types = new HashMap<>();

    @Override
    public void run() throws Exception {
        DataTypeManager dtm = currentProgram.getDataTypeManager();
        CParser parser = new CParser(dtm, true, null);
        parser.parse(Files.readString(Path.of(getScriptArgs()[0])));
        dtm.getAllDataTypes().forEachRemaining(dt -> {
            DataType old = types.get(dt.getName());
            if (old == null || (isPlaceholder(old) && !isPlaceholder(dt))) types.put(dt.getName(), dt);
        });
        println("SDK types available: " + types.size());
        replacePlaceholders(dtm);

        if (currentProgram.getExecutableFormat().contains("ELF")) {
            server();
        } else if (symbol("GiveFnptrsToDll") != null) {
            windowsServer();
        } else {
            client();
        }
    }

    /** The demangler creates empty 1-byte structs under /Demangler for every type it sees. */
    private static boolean isPlaceholder(DataType dt) {
        return dt.getCategoryPath().getPath().startsWith("/Demangler") || dt.getLength() <= 1;
    }

    /**
     * Point demangled signatures (entvars_s *, edict_s *, Vector, TraceResult ...) at the real SDK
     * types instead of the demangler's empty placeholders. Vector is a C++ class, so define it here.
     */
    private void replacePlaceholders(DataTypeManager dtm) {
        StructureDataType vec = new StructureDataType("Vector", 0, dtm);
        for (String f : new String[] {"x", "y", "z"}) vec.add(FloatDataType.dataType, 4, f, null);
        types.put("Vector", dtm.addDataType(vec, DataTypeConflictHandler.REPLACE_HANDLER));

        List<DataType> placeholders = new ArrayList<>();
        dtm.getAllDataTypes().forEachRemaining(dt -> {
            if (dt instanceof Structure st && st.isNotYetDefined() && dt.getCategoryPath().getPath().startsWith("/Demangler")) {
                placeholders.add(dt);
            }
        });
        int n = 0;
        for (DataType ph : placeholders) {
            DataType real = types.get(ph.getName());
            if (real == null || isPlaceholder(real)) continue;
            if (real instanceof TypeDef td) real = td.getBaseDataType();
            try {
                dtm.replaceDataType(ph, real, true);
                n++;
            } catch (Exception e) {
                println("could not replace " + ph.getPathName() + ": " + e.getMessage());
            }
        }
        println("replaced " + n + " demangler placeholders with SDK types");
    }

    /**
     * The 2007 SDK's interface tables are shorter than FWGS's, which appends extensions. Keep only
     * the fields that fit in the space the binary actually reserves.
     */
    private DataType fit(DataType dt, int max) {
        if (dt.getLength() <= max) return dt;
        Structure base = (Structure) (dt instanceof TypeDef td ? td.getBaseDataType() : dt);
        StructureDataType cut = new StructureDataType(dt.getName() + "_ts30", 0, currentProgram.getDataTypeManager());
        for (DataTypeComponent c : base.getComponents()) {
            if (c.getOffset() + c.getLength() > max) break;
            cut.add(c.getDataType(), c.getLength(), c.getFieldName(), c.getComment());
        }
        cut.setDescription("First " + cut.getNumComponents() + " fields of " + dt.getName()
                + ": the TS 3.0 build reserves 0x" + Integer.toHexString(max) + " bytes");
        println("truncated " + dt.getName() + " from " + dt.getLength() + " to " + cut.getLength() + " bytes");
        return currentProgram.getDataTypeManager().addDataType(cut, DataTypeConflictHandler.REPLACE_HANDLER);
    }

    /** Bytes from `a` to the next named (non-default) symbol in the same memory block. */
    private int spaceAt(Address a) {
        MemoryBlock b = getMemoryBlock(a);
        SymbolIterator it = currentProgram.getSymbolTable().getSymbolIterator(a.add(1), true);
        while (it.hasNext()) {
            Symbol s = it.next();
            if (!b.contains(s.getAddress())) break;
            if (s.getSource() != SourceType.DEFAULT) return (int) s.getAddress().subtract(a);
        }
        return (int) b.getEnd().subtract(a) + 1;
    }

    private DataType type(String name) {
        DataType dt = types.get(name);
        if (dt == null) throw new IllegalStateException("missing SDK type " + name);
        return dt;
    }

    /** Typedef'd anonymous structs may come out of CParser as either a TypeDef or the Structure. */
    private Structure struct(String name) {
        DataType dt = type(name);
        return (Structure) (dt instanceof TypeDef td ? td.getBaseDataType() : dt);
    }

    private Address symbol(String name) {
        for (Symbol s : currentProgram.getSymbolTable().getGlobalSymbols(name)) return s.getAddress();
        return null;
    }

    private void applyData(Address a, DataType dt, String label) throws Exception {
        Address end = a.add(dt.getLength() - 1);
        clearListing(a, end);
        // Analysis labels inside the range (e.g. _DAT_00190f74) would hide the struct field names.
        for (Symbol s : currentProgram.getSymbolTable().getSymbols(new AddressSet(a.add(1), end), SymbolType.LABEL, true)) {
            if (s.getSource() == SourceType.DEFAULT || s.getSource() == SourceType.ANALYSIS) s.delete();
        }
        createData(a, dt);
        if (label != null) createLabel(a, label, true, SourceType.USER_DEFINED);
        println("typed " + a + " " + (label != null ? label : "") + " as " + dt.getName());
    }

    private void applyGlobal(String sym, DataType dt) throws Exception {
        Address a = symbol(sym);
        if (a == null) { println("no symbol " + sym); return; }
        applyData(a, dt, null);
    }

    private void applySignature(Function f, FunctionDefinition def) {
        var cmd = new ApplyFunctionSignatureCmd(f.getEntryPoint(), def, SourceType.USER_DEFINED,
                true, FunctionRenameOption.NO_CHANGE);
        if (!cmd.applyTo(currentProgram)) println("signature failed for " + f.getName() + ": " + cmd.getStatusMsg());
    }

    /** For a struct of function pointers already laid down at `table`, type each target function. */
    private void typeFunctionTable(Address table, Structure st, boolean renameDefaults) throws Exception {
        for (DataTypeComponent c : st.getComponents()) {
            if (!(c.getDataType() instanceof Pointer p) || !(p.getDataType() instanceof FunctionDefinition def)) continue;
            Address target = toAddr(getInt(table.add(c.getOffset())) & 0xffffffffL);
            Function f = getFunctionAt(target);
            if (f == null) f = createFunction(target, null);
            if (f == null) continue;
            if (renameDefaults && f.getSymbol().getSource() == SourceType.DEFAULT) {
                f.setName(c.getFieldName(), SourceType.USER_DEFINED);
            }
            applySignature(f, def);
        }
    }

    private void server() throws Exception {
        Address eng = symbol("g_engfuncs");
        if (eng != null) applyData(eng, fit(type("enginefuncs_t"), spaceAt(eng)), null);
        applyGlobal("gpGlobals", new PointerDataType(type("globalvars_t")));
        applyGlobal("pmove", new PointerDataType(type("playermove_t")));
        Address ft = symbol("gFunctionTable");
        if (ft != null) {
            Structure st = struct("DLL_FUNCTIONS");
            applyData(ft, st, null);
            typeFunctionTable(ft, st, true);
        }
        classLayouts();
        Address nft = symbol("gNewDLLFunctions");
        if (nft != null) {
            Structure st = struct("NEW_DLL_FUNCTIONS");
            applyData(nft, st, null);
            typeFunctionTable(nft, st, true);
        }
    }

    /**
     * Entity classes (GCC 2.95 layout): pev at +0x00, vtable pointer at +0x60 (placed after
     * CBaseEntity's own data). Sizes come from GetClassPtr<X>, which inlines
     * pfnPvAllocEntPrivateData(edict, sizeof(X)) followed by the vtable stores of X and its bases.
     */
    private void classLayouts() throws Exception {
        Map<String, Integer> sizes = new TreeMap<>();
        Set<String> classes = new TreeSet<>(List.of("CBaseEntity"));
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            String n = f.getName();
            if (!n.startsWith("GetClassPtr<") || !n.endsWith(">")) continue;
            String cls = n.substring("GetClassPtr<".length(), n.length() - 1);
            for (Instruction ins : currentProgram.getListing().getInstructions(f.getBody(), true)) {
                if (!sizes.containsKey(cls) && ins.getMnemonicString().equals("PUSH") && ins.getScalar(0) != null) {
                    long v = ins.getScalar(0).getUnsignedValue();
                    if (v >= 0x64 && v < 0x100000) sizes.put(cls, (int) v);
                }
                for (Reference r : ins.getReferencesFrom()) {
                    Symbol s = getSymbolAt(r.getToAddress());
                    if (s != null && s.getName().endsWith("_virtual_table")) {
                        classes.add(s.getName().substring(0, s.getName().length() - "_virtual_table".length()));
                    }
                }
            }
        }
        DataTypeManager dtm = currentProgram.getDataTypeManager();
        DataType pev = new PointerDataType(type("entvars_t"));
        DataType vptr = new PointerDataType(new PointerDataType(VoidDataType.dataType));
        int n = 0;
        for (String cls : classes) {
            Namespace ns = currentProgram.getSymbolTable().getNamespace(cls, currentProgram.getGlobalNamespace());
            if (ns == null) continue;
            GhidraClass gc = ns instanceof GhidraClass c ? c : NamespaceUtils.convertNamespaceToClass(ns);
            Structure st = VariableUtilities.findOrCreateClassStruct(gc, dtm);
            int size = Math.max(sizes.getOrDefault(cls, 0x64), 0x64);
            // A placeholder class struct reports length 1 with no components; grow until it fits.
            for (int i = 0; i < 3 && st.getLength() < size; i++) st.growStructure(size - st.getLength());
            st.replaceAtOffset(0x00, pev, 4, "pev", "entvars_t of the owning edict");
            st.replaceAtOffset(0x60, vptr, 4, "vtable", "GCC 2.95 vptr, after CBaseEntity's data members");
            if (sizes.containsKey(cls)) st.setDescription("sizeof = 0x" + Integer.toHexString(size) + " (from GetClassPtr)");
            n++;
        }
        println("class layouts: " + n + " classes, " + sizes.size() + " with exact sizes");
    }

    /** cldll_func_t field name -> exported symbol name. */
    private static String exportName(String field) {
        switch (field) {
            case "pfnInitialize": return "Initialize";
            case "pfnCalcRefdef": return "V_CalcRefdef";
            case "pfnDemo_ReadBuffer": return "Demo_ReadBuffer";
            case "pfnDirectorMessage": return "HUD_DirectorEvent"; // TS 3.0 still uses the old name
        }
        if (field.matches("(IN|CL|KB|CAM)_.*")) return field;
        return "HUD_" + field.substring(3);
    }

    private void client() throws Exception {
        Structure cl = struct("cldll_func_t");
        for (DataTypeComponent c : cl.getComponents()) {
            if (!(c.getDataType() instanceof Pointer p) || !(p.getDataType() instanceof FunctionDefinition def)) continue;
            Address a = symbol(exportName(c.getFieldName()));
            Function f = a == null ? null : getFunctionAt(a);
            if (f != null) applySignature(f, def);
        }

        // Initialize() copies the engine table: `mov edi, gEngfuncs; ...; rep movsd`.
        Function init = getFunctionAt(symbol("Initialize"));
        // The copy length (ecx dwords) is the size of the 2007 SDK's cl_enginefunc_t.
        MemoryBlock data = getMemoryBlock(".data");
        Address dest = null;
        long dwords = 0;
        for (Instruction ins : currentProgram.getListing().getInstructions(init.getBody(), true)) {
            if (!ins.getMnemonicString().equals("MOV") || ins.getNumOperands() != 2 || ins.getScalar(1) == null) continue;
            String reg = ins.getDefaultOperandRepresentation(0);
            long v = ins.getScalar(1).getUnsignedValue();
            if (reg.equals("EDI") && data != null && data.contains(toAddr(v))) dest = toAddr(v);
            if (reg.equals("ECX")) dwords = v;
        }
        if (dest != null) {
            DataType t = type("cl_enginefunc_t");
            applyData(dest, dwords > 0 ? fit(t, (int) dwords * 4) : t, "gEngfuncs");
        }
    }

    /**
     * mp.dll (MSVC, stripped): the globals have no symbols, so find them from the exports.
     * GiveFnptrsToDll is `mov ecx, N; mov edi, g_engfuncs; rep movsd; mov [gpGlobals], eax`,
     * GetEntityAPI is `mov ecx, 50; mov esi, gFunctionTable; rep movsd`, and GetNewDLLFunctions
     * copies three dwords out of gNewDLLFunctions with `mov eax, [table]`.
     */
    private void windowsServer() throws Exception {
        Function give = getFunctionAt(symbol("GiveFnptrsToDll"));
        Address eng = null, globals = null;
        long dwords = 0;
        for (Instruction ins : currentProgram.getListing().getInstructions(give.getBody(), true)) {
            String m = ins.getMnemonicString();
            if (m.equals("MOV") && ins.getScalar(1) != null) {
                String reg = ins.getDefaultOperandRepresentation(0);
                if (reg.equals("EDI")) eng = toAddr(ins.getScalar(1).getUnsignedValue());
                if (reg.equals("ECX")) dwords = ins.getScalar(1).getUnsignedValue();
            } else if (m.equals("MOV") && ins.getDefaultOperandRepresentation(1).equals("EAX")) {
                for (Reference r : ins.getReferencesFrom()) if (r.getReferenceType().isWrite()) globals = r.getToAddress();
            }
        }
        if (eng != null) applyData(eng, fit(type("enginefuncs_t"), (int) dwords * 4), "g_engfuncs");
        if (globals != null) applyData(globals, new PointerDataType(type("globalvars_t")), "gpGlobals");

        Address ft = null;
        for (Instruction ins : currentProgram.getListing().getInstructions(getFunctionAt(symbol("GetEntityAPI")).getBody(), true)) {
            if (ins.getMnemonicString().equals("MOV") && ins.getDefaultOperandRepresentation(0).equals("ESI") && ins.getScalar(1) != null) {
                ft = toAddr(ins.getScalar(1).getUnsignedValue());
            }
        }
        if (ft != null) {
            Structure st = struct("DLL_FUNCTIONS");
            applyData(ft, st, "gFunctionTable");
            typeFunctionTable(ft, st, true);
        }
        Address nft = null;
        for (Instruction ins : currentProgram.getListing().getInstructions(getFunctionAt(symbol("GetNewDLLFunctions")).getBody(), true)) {
            if (nft != null) break;
            if (!ins.getMnemonicString().equals("MOV") || !ins.getDefaultOperandRepresentation(0).equals("EAX")) continue;
            for (Reference r : ins.getReferencesFrom()) if (r.getReferenceType().isRead()) nft = r.getToAddress();
        }
        if (nft != null) {
            // TS copies only the first three callbacks (OnFreeEntPrivateData, GameShutdown, ShouldCollide).
            Structure st = (Structure) fit(struct("NEW_DLL_FUNCTIONS"), 12);
            applyData(nft, st, "gNewDLLFunctions");
            typeFunctionTable(nft, st, true);
        }
    }
}
