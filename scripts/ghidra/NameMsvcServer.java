// Recovers class names, class sizes, vtables and virtual method names in mp.dll (MSVC, stripped,
// no RTTI) by matching it against the symbolized Linux build (ts_i386.so).
//
// 1. Every entity classname export (`player`, `weapon_tsgun`, ...) is a one-line wrapper around
//    GetClassPtr<X>. The .so's functions.tsv says which X each classname uses. In mp.dll,
//    GetClassPtr<X> is `pfnPvAllocEntPrivateData(edict, sizeof(X))` followed by the inlined
//    constructor's vtable stores `mov [esi], vtbl`. The last store is X's own vtable.
// 2. MSVC and GCC 2.95 lay out single-inheritance vtables in declaration order, so slot i of X's
//    vtable in mp.dll is slot i of X's vtable in the .so (vtables.tsv). Unnamed targets get the
//    .so name. MSVC folds identical functions (/OPT:ICF), so one target can stand for several .so
//    methods: it gets the most common name and a comment listing the others.
// 3. A function that is the only user of a string in both binaries, where the .so's user is also
//    unique, gets the .so name (if every such string agrees).
// 4. Call-graph propagation: for a matched pair, if exactly one callee (or caller) on each side is
//    still unmatched and their sizes are within 2x, they are the same function. Repeat to a fixpoint.
// 5. Optional manual names (address <TAB> Class::Method or name <TAB> comment) for code the .so
//    doesn't have, i.e. the bot AI.
// Base-class vtables (CBaseEntity, CBaseMonster, ...) are stored by inlined constructors but have
// no classname export; they get the .so class whose slot names best match their (now named) targets.
// The demangled save/restore exports (?Think@CClass@@...) are used to check the slot alignment.
// Args: <server/functions.tsv> <server/vtables.tsv> <server/strings.tsv> [<manual names.tsv>]
// @category TS30
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.*;
import ghidra.app.util.NamespaceUtils;
import java.nio.file.*;
import java.util.*;

public class NameMsvcServer extends GhidraScript {
    private record ClassInfo(String name, Address getClassPtr, Address vtable, int size) {}

    private final Map<String, ClassInfo> classes = new TreeMap<>();

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        Map<String, String> classOf = classnameMap(Path.of(args[0]));
        Map<String, List<String>> soSlots = soVtables(Path.of(args[1]));
        findClasses(classOf);
        nameVirtuals(soSlots);
        nameBaseVtables(soSlots);
        nameVirtuals(soSlots);
        nameFromStrings(Path.of(args[2]));
        propagateCallGraph(Path.of(args[0]));
        if (args.length > 3 && Files.exists(Path.of(args[3]))) manualNames(Path.of(args[3]));
        classStructs(); // last: moving functions into class namespaces can replace the class structs
    }

    /** Class structs: MSVC vptr at +0, pev at +4, size from GetClassPtr. */
    private void classStructs() throws Exception {
        DataTypeManager dtm = currentProgram.getDataTypeManager();
        DataType ev = dtm.getDataType("/entvars_t");
        int n = 0;
        for (ClassInfo c : classes.values()) {
            if (c.size() <= 0) continue;
            Namespace ns = classNs(c.name());
            Structure s = VariableUtilities.findOrCreateClassStruct((GhidraClass) ns, dtm);
            for (int i = 0; i < 3 && s.getLength() < c.size(); i++) s.growStructure(c.size() - s.getLength());
            s.replaceAtOffset(0x00, new PointerDataType(new PointerDataType(VoidDataType.dataType)), 4, "vtable", "MSVC vptr at +0");
            s.replaceAtOffset(0x04, new PointerDataType(ev != null ? ev : VoidDataType.dataType), 4, "pev", "entvars_t of the owning edict");
            s.setDescription("sizeof = 0x" + Integer.toHexString(c.size()) + " (from GetClassPtr)");
            n++;
        }
        println("class structs with exact sizes: " + n);
    }

    /** functions.tsv rows `classname -> GetClassPtr<X>` from the .so. */
    private Map<String, String> classnameMap(Path tsv) throws Exception {
        Map<String, String> m = new HashMap<>();
        for (String line : Files.readAllLines(tsv)) {
            String[] c = line.split("\t", -1);
            if (c.length < 6 || !c[2].isEmpty()) continue;
            if (c[5].startsWith("GetClassPtr<") && !c[5].contains(",")) {
                m.put(c[3], c[5].substring("GetClassPtr<".length(), c[5].length() - 1));
            }
        }
        println("classname exports in the .so: " + m.size());
        return m;
    }

    /** class -> slot names, from the first (primary) vtable of each class in vtables.tsv. */
    private Map<String, List<String>> soVtables(Path tsv) throws Exception {
        Map<String, List<String>> m = new HashMap<>();
        Map<String, String> first = new HashMap<>();
        for (String line : Files.readAllLines(tsv)) {
            String[] c = line.split("\t", -1);
            if (c.length < 6 || c[0].equals("class")) continue;
            if (!first.computeIfAbsent(c[0], k -> c[1]).equals(c[1])) continue;
            m.computeIfAbsent(c[0], k -> new ArrayList<>()).add(c[4]);
        }
        return m;
    }

    private boolean inBlock(String block, long v) {
        MemoryBlock b = getMemoryBlock(block);
        try {
            return b != null && b.contains(toAddr(v));
        } catch (Exception e) {
            return false;
        }
    }

    private Namespace classNs(String name) throws Exception {
        Namespace ns = NamespaceUtils.createNamespaceHierarchy(name, null, currentProgram, SourceType.USER_DEFINED);
        return ns instanceof GhidraClass ? ns : NamespaceUtils.convertNamespaceToClass(ns);
    }

    private void findClasses(Map<String, String> classOf) throws Exception {
        SymbolTable st = currentProgram.getSymbolTable();
        int noVtable = 0;
        for (AddressIterator it = st.getExternalEntryPointIterator(); it.hasNext(); ) {
            Address a = it.next();
            Symbol s = st.getPrimarySymbol(a);
            Function f = getFunctionAt(a);
            String cls = s == null ? null : classOf.get(s.getName());
            if (cls == null || f == null) continue;
            Address g = null;
            for (Instruction ins : currentProgram.getListing().getInstructions(f.getBody(), true)) {
                if (ins.getFlowType().isCall() && ins.getFlows().length > 0) { g = ins.getFlows()[0]; break; }
            }
            Function gf = g == null ? null : getFunctionAt(g);
            if (gf == null) continue;
            int size = 0, pushed = 0;
            Address vt = null;
            for (Instruction ins : currentProgram.getListing().getInstructions(gf.getBody(), true)) {
                String m = ins.getMnemonicString();
                // sizeof(X) is the immediate pushed right before pfnPvAllocEntPrivateData (an
                // indirect call; the SEH prologue's pushes are -1 and a code address)
                if (m.equals("PUSH") && ins.getScalar(0) != null) {
                    long v = ins.getScalar(0).getUnsignedValue();
                    if (v >= 0x54 && v < 0x10000) pushed = (int) v;
                }
                if (size == 0 && m.equals("CALL") && pushed != 0 && ins.getDefaultOperandRepresentation(0).startsWith("dword ptr")) size = pushed;
                // mov dword ptr [reg], imm32 into .rdata: a vtable store
                if (m.equals("MOV") && ins.getNumOperands() == 2 && ins.getScalar(1) != null
                        && ins.getDefaultOperandRepresentation(0).matches("dword ptr \\[E[A-Z]{2}\\]")) {
                    long v = ins.getScalar(1).getUnsignedValue();
                    if (inBlock(".rdata", v)) vt = toAddr(v);
                }
            }
            if (vt == null) { noVtable++; continue; }
            ClassInfo old = classes.get(cls);
            if (old != null && !old.vtable().equals(vt)) println("WARNING " + cls + ": two vtables " + old.vtable() + " " + vt);
            classes.putIfAbsent(cls, new ClassInfo(cls, g, vt, size));
        }
        for (ClassInfo c : classes.values()) {
            classNs(c.name());
            Function gf = getFunctionAt(c.getClassPtr());
            if (gf != null && gf.getSymbol().getSource() == SourceType.DEFAULT) gf.setName("GetClassPtr<" + c.name() + ">", SourceType.USER_DEFINED);
            createLabel(c.vtable(), "vftable", classNs(c.name()), true, SourceType.USER_DEFINED);
        }
        println("classes from classname exports: " + classes.size() + " (" + noVtable + " exports without a vtable store)");
    }

    /** Function pointers from vt until the next code-referenced word (the next vtable) or non-code. */
    private List<Address> slots(Address vt) throws Exception {
        List<Address> out = new ArrayList<>();
        for (Address s = vt; ; s = s.add(4)) {
            if (!s.equals(vt)) {
                boolean ref = false;
                for (Reference r : getReferencesTo(s)) if (getFunctionContaining(r.getFromAddress()) != null) ref = true;
                if (ref) break;
            }
            Address t = toAddr(getInt(s) & 0xffffffffL);
            MemoryBlock b = getMemoryBlock(t);
            if (b == null || !b.isExecute()) break;
            if (getFunctionAt(t) == null && createFunction(t, null) == null) break;
            out.add(t);
        }
        return out;
    }

    private void nameVirtuals(Map<String, List<String>> soSlots) throws Exception {
        Map<Address, Map<String, Integer>> votes = new HashMap<>();
        int checked = 0, agree = 0, lenDiff = 0;
        for (ClassInfo c : classes.values()) {
            List<String> so = soSlots.get(c.name());
            if (so == null) { println("no .so vtable for " + c.name()); continue; }
            List<Address> win = slots(c.vtable());
            if (win.size() != so.size()) { lenDiff++; println("slot count " + c.name() + ": mp.dll " + win.size() + ", .so " + so.size()); }
            for (int i = 0; i < Math.min(win.size(), so.size()); i++) {
                Function f = getFunctionAt(win.get(i));
                String soName = so.get(i);
                if (!soName.contains("::")) continue;
                if (f.getSymbol().getSource() != SourceType.DEFAULT && f.getSymbol().getSource() != SourceType.USER_DEFINED) {
                    checked++;
                    if (soName.endsWith("::" + f.getName())) agree++;
                    else if (!f.getName().startsWith("SUB_")) // empty bodies folded into SUB_DoNothing are expected
                        println("alignment check " + c.name() + " slot " + i + ": mp.dll " + f.getName(true) + " vs .so " + soName);
                    else agree++;
                }
                votes.computeIfAbsent(win.get(i), k -> new TreeMap<>()).merge(soName, 1, Integer::sum);
            }
        }
        println("slot alignment check against demangled exports: " + agree + "/" + checked + " agree (counting bodies folded into SUB_*); " + lenDiff + " classes differ in slot count");
        int named = 0, folded = 0;
        for (var e : votes.entrySet()) {
            Function f = getFunctionAt(e.getKey());
            if (f.getSymbol().getSource() != SourceType.DEFAULT) continue;
            String best = Collections.max(e.getValue().entrySet(), Map.Entry.comparingByValue()).getKey();
            int sep = best.lastIndexOf("::");
            f.setParentNamespace(classNs(best.substring(0, sep)));
            f.setName(best.substring(sep + 2), SourceType.USER_DEFINED);
            if (e.getValue().size() > 1) {
                folded++;
                f.setComment("Identical-code folding: also " + String.join(", ", e.getValue().keySet()));
            }
            named++;
        }
        println("virtual methods named from the .so: " + named + " (" + folded + " folded)");
    }

    /** Every `mov [reg], vtbl` in the program whose vtable isn't named yet: match by slot names. */
    private void nameBaseVtables(Map<String, List<String>> soSlots) throws Exception {
        Set<String> taken = new HashSet<>(classes.keySet());
        Set<Address> seen = new HashSet<>();
        for (ClassInfo c : classes.values()) seen.add(c.vtable());
        int n = 0;
        for (Instruction ins : currentProgram.getListing().getInstructions(true)) {
            if (!ins.getMnemonicString().equals("MOV") || ins.getNumOperands() != 2 || ins.getScalar(1) == null
                    || !ins.getDefaultOperandRepresentation(0).startsWith("dword ptr [")) continue;
            long v = ins.getScalar(1).getUnsignedValue();
            if (!inBlock(".rdata", v) || !seen.add(toAddr(v))) continue;
            List<Address> win = slots(toAddr(v));
            if (win.size() < 3) continue;
            String best = null;
            int bestScore = 0, ties = 0;
            for (var e : soSlots.entrySet()) {
                if (e.getValue().size() != win.size() || taken.contains(e.getKey())) continue;
                int score = 0;
                for (int i = 0; i < win.size(); i++) {
                    if (getFunctionAt(win.get(i)).getName(true).equals(e.getValue().get(i))) score++;
                }
                if (score > bestScore) { best = e.getKey(); bestScore = score; ties = 0; }
                else if (score == bestScore) ties++;
            }
            // Require a clear majority; derived classes that override nothing are indistinguishable.
            if (best == null || ties > 0 || bestScore * 2 < win.size()) continue;
            taken.add(best);
            classes.put(best, new ClassInfo(best, null, toAddr(v), 0));
            createLabel(toAddr(v), "vftable", classNs(best), true, SourceType.USER_DEFINED);
            n++;
        }
        println("base-class vtables matched by slot names: " + n);
    }

    /**
     * address <TAB> [Class::]name [<TAB> comment]; '#' starts a comment line. Code addresses name
     * (and create) functions; data addresses get labels (`CBot::vftable` names a vtable).
     */
    private void manualNames(Path tsv) throws Exception {
        int n = 0;
        for (String line : Files.readAllLines(tsv)) {
            if (line.isBlank() || line.startsWith("#")) continue;
            String[] c = line.split("\t", -1);
            Address a = toAddr(Long.parseLong(c[0].replaceFirst("^0x", ""), 16));
            MemoryBlock blk = getMemoryBlock(a);
            if (blk != null && !blk.isExecute()) { // a global or a vtable: just a label
                int sep = c[1].lastIndexOf("::");
                Namespace ns = sep > 0 ? classNs(c[1].substring(0, sep)) : currentProgram.getGlobalNamespace();
                createLabel(a, sep > 0 ? c[1].substring(sep + 2) : c[1], ns, true, SourceType.USER_DEFINED);
                if (c.length > 2 && !c[2].isEmpty()) setPlateComment(a, c[2]);
                n++;
                continue;
            }
            Function f = getFunctionAt(a);
            if (f == null) f = createFunction(a, null);
            if (f == null) { println("manual name: no function at " + a); continue; }
            String name = c[1];
            int sep = name.lastIndexOf("::");
            if (sep > 0) {
                f.setParentNamespace(classNs(name.substring(0, sep)));
                name = name.substring(sep + 2);
            } else {
                f.setParentNamespace(currentProgram.getGlobalNamespace());
            }
            f.setName(name, SourceType.USER_DEFINED);
            if (c.length > 2 && !c[2].isEmpty()) f.setComment(c[2]);
            n++;
        }
        println("manual names applied: " + n);
    }

    private static String untsv(String s) {
        StringBuilder b = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == '\\' && i + 1 < s.length()) {
                char n = s.charAt(++i);
                b.append(n == 'n' ? '\n' : n == 't' ? '\t' : n == 'r' ? '\r' : n);
            } else b.append(c);
        }
        return b.toString();
    }

    private void nameFromStrings(Path soStrings) throws Exception {
        Map<String, Set<String>> so = new HashMap<>();
        for (String line : Files.readAllLines(soStrings)) {
            String[] c = line.split("\t", -1);
            if (c.length < 3 || c[0].equals("address") || c[0].contains("::")) continue;
            Set<String> users = so.computeIfAbsent(untsv(c[1]), k -> new HashSet<>());
            for (String u : c[2].split(",")) if (u.contains("::") || (!u.isEmpty() && !u.matches("[0-9a-f]{8}"))) users.add(u);
            if (c[2].isEmpty()) users.add("?");
        }
        Map<String, Set<Function>> win = new HashMap<>();
        for (Data d : currentProgram.getListing().getDefinedData(true)) {
            if (!d.hasStringValue()) continue;
            Set<Function> users = win.computeIfAbsent(String.valueOf(d.getValue()), k -> new HashSet<>());
            for (Reference r : getReferencesTo(d.getAddress())) {
                Function f = getFunctionContaining(r.getFromAddress());
                if (f != null) users.add(f);
            }
        }
        Map<Function, Set<String>> votes = new HashMap<>();
        for (var e : win.entrySet()) {
            Set<String> s = so.get(e.getKey());
            if (s == null || s.size() != 1 || e.getValue().size() != 1) continue;
            String name = s.iterator().next();
            if (name.equals("?") || name.startsWith("FUN_")) continue;
            votes.computeIfAbsent(e.getValue().iterator().next(), k -> new TreeSet<>()).add(name);
        }
        Map<String, Integer> used = new HashMap<>();
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            if (f.getSymbol().getSource() != SourceType.DEFAULT) used.merge(f.getName(true), 1, Integer::sum);
        }
        int named = 0, conflict = 0;
        for (var e : votes.entrySet()) {
            Function f = e.getKey();
            if (f.getSymbol().getSource() != SourceType.DEFAULT) continue;
            if (e.getValue().size() != 1) { conflict++; continue; }
            String best = e.getValue().iterator().next();
            if (used.containsKey(best)) continue;
            int sep = best.lastIndexOf("::");
            if (sep > 0) f.setParentNamespace(classNs(best.substring(0, sep)));
            f.setName(sep > 0 ? best.substring(sep + 2) : best, SourceType.USER_DEFINED);
            used.put(best, 1);
            named++;
        }
        println("functions named from unique strings: " + named + " (" + conflict + " with conflicting votes)");
    }

    private record SoFunc(String name, int size, Set<String> callees, Set<String> callers) {}

    private void propagateCallGraph(Path soFunctions) throws Exception {
        Map<String, SoFunc> so = new HashMap<>();
        Set<String> dup = new HashSet<>();
        for (String line : Files.readAllLines(soFunctions)) {
            String[] c = line.split("\t", -1);
            if (c.length < 8 || c[0].equals("address")) continue;
            String name = (c[2].isEmpty() ? "" : c[2] + "::") + c[3];
            if (so.containsKey(name)) dup.add(name);
            so.put(name, new SoFunc(name, Integer.parseInt(c[1]), new HashSet<>(c[5].isEmpty() ? List.of() : List.of(c[5].split(","))), new HashSet<>()));
        }
        for (String d : dup) so.remove(d); // overloads: ambiguous by name
        for (SoFunc f : so.values()) for (String c : f.callees()) if (so.containsKey(c)) so.get(c).callers().add(f.name());

        FunctionManager fm = currentProgram.getFunctionManager();
        Map<String, Function> matched = new HashMap<>();
        Map<String, Integer> nameCount = new HashMap<>();
        for (Function f : fm.getFunctions(true)) {
            if (f.getSymbol().getSource() != SourceType.DEFAULT) nameCount.merge(f.getName(true), 1, Integer::sum);
        }
        for (Function f : fm.getFunctions(true)) {
            String n = f.getName(true);
            if (f.getSymbol().getSource() != SourceType.DEFAULT && nameCount.get(n) == 1 && so.containsKey(n)) matched.put(n, f);
        }
        Set<Function> taken = new HashSet<>(matched.values());
        int total = 0;
        for (int pass = 0; pass < 20; pass++) {
            Map<Function, String> found = new HashMap<>();
            Set<Function> conflicted = new HashSet<>();
            for (var e : new ArrayList<>(matched.entrySet())) {
                SoFunc s = so.get(e.getKey());
                Function w = e.getValue();
                for (int dir = 0; dir < 2; dir++) {
                    Set<String> soSide = new HashSet<>(dir == 0 ? s.callees() : s.callers());
                    soSide.removeIf(n -> matched.containsKey(n) || !so.containsKey(n) || n.startsWith("FUN_"));
                    Set<Function> wSide = new HashSet<>(dir == 0 ? w.getCalledFunctions(monitor) : w.getCallingFunctions(monitor));
                    wSide.removeIf(f -> taken.contains(f) || f.isThunk() || f.isExternal() || f.getSymbol().getSource() != SourceType.DEFAULT);
                    if (soSide.size() != 1 || wSide.size() != 1) continue;
                    String sn = soSide.iterator().next();
                    Function wf = wSide.iterator().next();
                    long ws = wf.getBody().getNumAddresses();
                    int ss = so.get(sn).size();
                    if (ws * 2 < ss || ss * 2 < ws) continue;
                    String prev = found.putIfAbsent(wf, sn);
                    if (prev != null && !prev.equals(sn)) conflicted.add(wf);
                }
            }
            Set<String> namesUsed = new HashSet<>();
            Set<String> dupNames = new HashSet<>();
            for (var e : found.entrySet()) if (!conflicted.contains(e.getKey()) && !namesUsed.add(e.getValue())) dupNames.add(e.getValue());
            int n = 0;
            for (var e : found.entrySet()) {
                if (conflicted.contains(e.getKey()) || dupNames.contains(e.getValue())) continue;
                String best = e.getValue();
                Function f = e.getKey();
                int sep = best.lastIndexOf("::");
                if (sep > 0) f.setParentNamespace(classNs(best.substring(0, sep)));
                f.setName(sep > 0 ? best.substring(sep + 2) : best, SourceType.USER_DEFINED);
                matched.put(best, f);
                taken.add(f);
                n++;
            }
            total += n;
            if (n == 0) break;
        }
        println("functions named by call-graph propagation: " + total);
    }
}
