// Exports a full decompilation of the current program for documentation:
//   decomp/<Class>.c        every function, grouped by C++ namespace (unnamed ones in address chunks)
//   functions.tsv           address, size, namespace, name, signature, callees, caller count, file
//   strings.tsv             defined strings and the functions that reference them
//   vtables.tsv             reconstructed vtables; vptr_index = index used by decompiled this->vtable[N]
//                           (GCC 2.95: via __tf type-info functions;
//                           MSVC without RTTI: code-referenced runs of function pointers)
//   data_symbols.tsv        named globals
//   imports.tsv             external functions
//   classes.tsv             C++ classes, method counts, and struct sizes (exact where known)
// Args: <output directory>
// @category TS30
import ghidra.app.decompiler.*;
import ghidra.app.decompiler.parallel.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.data.Structure;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import ghidra.util.task.TaskMonitor;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;
import java.util.regex.*;

public class ExportAll extends GhidraScript {
    private static final int CHUNK = 150;

    private record Result(Address entry, String code) {}

    private Path out;
    private final Map<Function, String> fileOf = new HashMap<>();

    @Override
    public void run() throws Exception {
        out = Path.of(getScriptArgs()[0]);
        Files.createDirectories(out.resolve("decomp"));

        List<Function> funcs = new ArrayList<>();
        for (Function f : currentProgram.getListing().getFunctions(true)) {
            if (!f.isExternal() && !f.isThunk()) funcs.add(f);
        }
        println("functions to decompile: " + funcs.size());

        Map<String, List<Function>> groups = groupFunctions(funcs);
        Map<Address, String> code = decompileAll(funcs);
        writeDecomp(groups, code);
        writeFunctions(funcs);
        writeStrings();
        writeVtables();
        writeDataSymbols();
        writeImports();
        writeClasses(funcs);
        println("export complete: " + out);
    }

    // ---- grouping -------------------------------------------------------------------------

    private static String sanitize(String s) {
        return s.replace("::", "__").replaceAll("[^A-Za-z0-9_.-]", "_");
    }

    private boolean isUnnamed(Function f) {
        return f.getSymbol().getSource() == SourceType.DEFAULT;
    }

    private Map<String, List<Function>> groupFunctions(List<Function> funcs) {
        Map<String, List<Function>> byNs = new TreeMap<>();
        List<Function> unnamed = new ArrayList<>();
        List<Function> global = new ArrayList<>();
        for (Function f : funcs) {
            Namespace ns = f.getParentNamespace();
            if (ns.isGlobal()) {
                (isUnnamed(f) ? unnamed : global).add(f);
            } else {
                byNs.computeIfAbsent(sanitize(ns.getName(true)), k -> new ArrayList<>()).add(f);
            }
        }
        chunk(byNs, "global", global);
        chunk(byNs, "unnamed", unnamed);
        for (var e : byNs.entrySet()) {
            for (Function f : e.getValue()) fileOf.put(f, "decomp/" + e.getKey() + ".c");
        }
        return byNs;
    }

    /** Address-ordered chunks; code from one source file tends to be contiguous. */
    private void chunk(Map<String, List<Function>> into, String prefix, List<Function> fs) {
        fs.sort(Comparator.comparing(Function::getEntryPoint));
        for (int i = 0; i < fs.size(); i += CHUNK) {
            List<Function> part = fs.subList(i, Math.min(fs.size(), i + CHUNK));
            String name = String.format("%s_%s", prefix, part.get(0).getEntryPoint().toString());
            into.put(name, new ArrayList<>(part));
        }
    }

    // ---- decompilation --------------------------------------------------------------------

    private Map<Address, String> decompileAll(List<Function> funcs) throws Exception {
        DecompileConfigurer cfg = d -> {
            DecompileOptions o = new DecompileOptions();
            o.grabFromProgram(currentProgram);
            d.setOptions(o);
            d.toggleCCode(true);
            d.setSimplificationStyle("decompile");
        };
        DecompilerCallback<Result> cb = new DecompilerCallback<>(currentProgram, cfg) {
            @Override
            public Result process(DecompileResults r, TaskMonitor m) {
                Function f = r.getFunction();
                if (r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    return new Result(f.getEntryPoint(), r.getDecompiledFunction().getC());
                }
                return new Result(f.getEntryPoint(), "/* decompilation failed: " + r.getErrorMessage() + " */\n");
            }
        };
        cb.setTimeout(180);
        Map<Address, String> code = new HashMap<>();
        try {
            for (Result r : ParallelDecompiler.decompileFunctions(cb, funcs, monitor)) {
                if (r != null) code.put(r.entry(), r.code());
            }
        } finally {
            cb.dispose();
        }
        println("decompiled: " + code.size());
        return code;
    }

    private String header(Function f) {
        StringBuilder sb = new StringBuilder();
        sb.append("/* ").append(f.getEntryPoint()).append("  ").append(f.getName(true))
          .append("  (").append(f.getBody().getNumAddresses()).append(" bytes)\n");
        sb.append(" * ").append(f.getPrototypeString(true, false)).append('\n');
        Set<String> callers = new TreeSet<>();
        for (Function c : f.getCallingFunctions(monitor)) callers.add(c.getName(true));
        if (!callers.isEmpty()) sb.append(" * called by: ").append(limit(callers, 12)).append('\n');
        sb.append(" */\n");
        return sb.toString();
    }

    private static String limit(Collection<String> items, int n) {
        StringBuilder sb = new StringBuilder();
        int i = 0;
        for (String s : items) {
            if (i == n) { sb.append(", ... (").append(items.size()).append(" total)"); break; }
            if (i++ > 0) sb.append(", ");
            sb.append(s);
        }
        return sb.toString();
    }

    private void writeDecomp(Map<String, List<Function>> groups, Map<Address, String> code) throws Exception {
        for (var e : groups.entrySet()) {
            List<Function> fs = e.getValue();
            fs.sort(Comparator.comparing(Function::getEntryPoint));
            try (Writer w = writer("decomp/" + e.getKey() + ".c")) {
                w.write("/* " + currentProgram.getName() + " - " + e.getKey() + " (" + fs.size()
                        + " functions). Ghidra decompiler output; see functions.tsv for the index. */\n\n");
                for (Function f : fs) {
                    w.write(header(f));
                    w.write(code.getOrDefault(f.getEntryPoint(), "/* missing */\n").strip());
                    w.write("\n\n");
                }
            }
        }
    }

    // ---- tables ---------------------------------------------------------------------------

    private Writer writer(String rel) throws IOException {
        Path p = out.resolve(rel);
        Files.createDirectories(p.getParent());
        return Files.newBufferedWriter(p, StandardCharsets.UTF_8);
    }

    private static String tsv(String s) {
        return s == null ? "" : s.replace("\\", "\\\\").replace("\t", "\\t").replace("\n", "\\n").replace("\r", "\\r");
    }

    private void writeFunctions(List<Function> funcs) throws Exception {
        try (Writer w = writer("functions.tsv")) {
            w.write("address\tsize\tnamespace\tname\tsignature\tcallees\tcallers\tfile\n");
            for (Function f : funcs) {
                Set<String> callees = new TreeSet<>();
                for (Function c : f.getCalledFunctions(monitor)) callees.add(c.getName(true));
                int callers = f.getCallingFunctions(monitor).size();
                w.write(String.join("\t", f.getEntryPoint().toString(),
                        Long.toString(f.getBody().getNumAddresses()),
                        tsv(f.getParentNamespace().isGlobal() ? "" : f.getParentNamespace().getName(true)),
                        tsv(f.getName()), tsv(f.getPrototypeString(true, false)),
                        tsv(String.join(",", callees)), Integer.toString(callers),
                        fileOf.getOrDefault(f, "")) + "\n");
            }
        }
    }

    private void writeStrings() throws Exception {
        try (Writer w = writer("strings.tsv")) {
            w.write("address\tvalue\treferenced_by\n");
            for (Data d : currentProgram.getListing().getDefinedData(true)) {
                if (!d.hasStringValue()) continue;
                Set<String> refs = new TreeSet<>();
                for (Reference r : getReferencesTo(d.getAddress())) {
                    Function f = getFunctionContaining(r.getFromAddress());
                    refs.add(f != null ? f.getName(true) : r.getFromAddress().toString());
                }
                w.write(d.getAddress() + "\t" + tsv(String.valueOf(d.getValue())) + "\t"
                        + tsv(String.join(",", refs)) + "\n");
            }
        }
    }

    private boolean isCode(Address a) {
        MemoryBlock b = a == null ? null : getMemoryBlock(a);
        return b != null && b.isExecute();
    }

    private Address readPtr(Address a) {
        try {
            return toAddr(getInt(a) & 0xffffffffL);
        } catch (Exception e) {
            return null;
        }
    }

    private String nameAt(Address a) {
        Function f = getFunctionAt(a);
        if (f != null) return f.getName(true);
        Symbol s = getSymbolAt(a);
        return s != null ? s.getName(true) : "";
    }

    private void writeVtables() throws Exception {
        try (Writer w = writer("vtables.tsv")) {
            w.write("class\tvtable\tslot\ttarget\ttarget_name\tvptr_index\n");
            if (currentProgram.getExecutableFormat().contains("ELF")) gccVtables(w);
            else msvcVtables(w);
        }
    }

    /** GCC 2.95 (vtable thunks): [0] = 0, [1] = &__tf<Class>, [2..] = virtual functions. */
    private void gccVtables(Writer w) throws Exception {
        Map<Long, List<Address>> words = new HashMap<>();
        for (MemoryBlock b : currentProgram.getMemory().getBlocks()) {
            if (!b.isInitialized() || b.isExecute()) continue;
            for (Address a = b.getStart(); a.add(3).compareTo(b.getEnd()) <= 0; a = a.add(4)) {
                words.computeIfAbsent(getInt(a) & 0xffffffffL, k -> new ArrayList<>()).add(a);
            }
        }
        Pattern tf = Pattern.compile("__tf(\\d+)(\\w+)");
        SymbolIterator it = currentProgram.getSymbolTable().getAllSymbols(true);
        Map<String, Address> tfs = new TreeMap<>();
        while (it.hasNext()) {
            Symbol s = it.next();
            Matcher m = tf.matcher(s.getName());
            if (m.matches()) {
                int len = Integer.parseInt(m.group(1));
                if (m.group(2).length() >= len) tfs.put(m.group(2).substring(0, len), s.getAddress());
            }
        }
        int n = 0;
        for (var e : tfs.entrySet()) {
            for (Address at : words.getOrDefault(e.getValue().getOffset(), List.of())) {
                Address start = at.subtract(4);
                if ((getInt(start)) != 0) continue;
                n++;
                for (int slot = 0; ; slot++) {
                    Address target = readPtr(at.add(4 + 4L * slot));
                    if (!isCode(target)) break;
                    // The vptr points at [0] (= 0), [1] is __tf: decompiler vtable[N] is slot N-2.
                    w.write(e.getKey() + "\t" + start + "\t" + slot + "\t" + target + "\t" + tsv(nameAt(target)) + "\t" + (slot + 2) + "\n");
                }
            }
        }
        println("vtables: " + n);
    }

    /** No RTTI: a data address that code takes, followed by >= 3 function pointers. */
    private void msvcVtables(Writer w) throws Exception {
        MemoryBlock rdata = getMemoryBlock(".rdata");
        if (rdata == null) return;
        int n = 0;
        for (Address a = rdata.getStart(); a.add(3).compareTo(rdata.getEnd()) <= 0; a = a.add(4)) {
            boolean codeRef = false;
            for (Reference r : getReferencesTo(a)) {
                if (isCode(r.getFromAddress())) { codeRef = true; break; }
            }
            if (!codeRef) continue;
            List<Address> slots = new ArrayList<>();
            for (Address s = a; s.compareTo(rdata.getEnd()) < 0; s = s.add(4)) {
                Address t = readPtr(s);
                if (!isCode(t) || getFunctionAt(t) == null) break;
                if (s != a && hasCodeRef(s)) break; // next vtable starts here
                slots.add(t);
            }
            if (slots.size() < 3) continue;
            n++;
            for (int i = 0; i < slots.size(); i++) {
                w.write("vtbl_" + a + "\t" + a + "\t" + i + "\t" + slots.get(i) + "\t" + tsv(nameAt(slots.get(i))) + "\t" + i + "\n");
            }
        }
        println("vtables: " + n);
    }

    private boolean hasCodeRef(Address a) {
        for (Reference r : getReferencesTo(a)) if (isCode(r.getFromAddress())) return true;
        return false;
    }

    private void writeDataSymbols() throws Exception {
        try (Writer w = writer("data_symbols.tsv")) {
            w.write("address\tname\ttype\tsection\n");
            SymbolIterator it = currentProgram.getSymbolTable().getAllSymbols(true);
            while (it.hasNext()) {
                Symbol s = it.next();
                if (s.getSymbolType() != SymbolType.LABEL || s.getSource() == SourceType.DEFAULT || s.isExternal()) continue;
                MemoryBlock b = getMemoryBlock(s.getAddress());
                if (b == null || b.isExecute()) continue;
                Data d = getDataAt(s.getAddress());
                w.write(s.getAddress() + "\t" + tsv(s.getName(true)) + "\t"
                        + tsv(d != null ? d.getDataType().getName() : "") + "\t" + b.getName() + "\n");
            }
        }
    }

    private void writeClasses(List<Function> funcs) throws Exception {
        Map<String, Integer> methods = new TreeMap<>();
        for (Function f : funcs) {
            if (f.getParentNamespace() instanceof GhidraClass c) methods.merge(c.getName(true), 1, Integer::sum);
        }
        try (Writer w = writer("classes.tsv")) {
            w.write("class\tmethods\tstruct_size\tnote\n");
            var it = currentProgram.getSymbolTable().getClassNamespaces();
            while (it.hasNext()) {
                GhidraClass c = it.next();
                Structure st = VariableUtilities.findExistingClassStruct(c, currentProgram.getDataTypeManager());
                w.write(tsv(c.getName(true)) + "\t" + methods.getOrDefault(c.getName(true), 0) + "\t"
                        + (st != null && !st.isNotYetDefined() ? "0x" + Integer.toHexString(st.getLength()) : "")
                        + "\t" + tsv(st != null ? st.getDescription() : "") + "\n");
            }
        }
    }

    private void writeImports() throws Exception {
        try (Writer w = writer("imports.tsv")) {
            w.write("library\tname\n");
            for (Function f : currentProgram.getFunctionManager().getExternalFunctions()) {
                ExternalLocation loc = f.getExternalLocation();
                w.write(tsv(loc != null ? loc.getLibraryName() : "") + "\t" + tsv(f.getName()) + "\n");
            }
        }
    }
}
