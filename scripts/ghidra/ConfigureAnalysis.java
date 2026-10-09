// Pre-analysis options for the TS 3.0 binaries.
// ts_i386.so was built with GCC 2.95, so its symbols use the old GNU v2 mangling, which only the
// deprecated demangler understands.
// "Non-Returning Functions - Discovered" is disabled: on this binary it wrongly flags strcmp,
// UTIL_TraceLine, EMIT_SOUND_DYN and even __i686.get_pc_thunk.bx as noreturn, which truncates
// most functions and spawns ~1500 bogus FUN_ fragments. The known-library list is kept.
// "GCC Exception Handlers" is disabled for the same reason: GCC 2.95's old "eh" .eh_frame
// augmentation is misparsed and creates functions in the middle of real ones.
// @category TS30
import ghidra.app.script.GhidraScript;

public class ConfigureAnalysis extends GhidraScript {
    @Override
    public void run() throws Exception {
        if (currentProgram.getExecutableFormat().contains("ELF")) {
            setAnalysisOption(currentProgram, "Demangler GNU.Use Deprecated Demangler", "true");
            setAnalysisOption(currentProgram, "Demangler GNU.Demangler Format", "GNU");
            setAnalysisOption(currentProgram, "GCC Exception Handlers", "false");
        }
        setAnalysisOption(currentProgram, "Decompiler Parameter ID", "true");
        setAnalysisOption(currentProgram, "Non-Returning Functions - Discovered", "false");
        for (var e : getCurrentAnalysisOptionsAndValues(currentProgram).entrySet()) {
            if (e.getKey().startsWith("Demangler GNU") || e.getKey().equals("Decompiler Parameter ID")
                    || e.getKey().startsWith("Non-Returning") || e.getKey().equals("GCC Exception Handlers")) {
                println("option " + e.getKey() + " = " + e.getValue());
            }
        }
    }
}
