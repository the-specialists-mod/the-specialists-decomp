/* ts_i386.so - CNullEntity (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e2a68  CNullEntity::Spawn  (45 bytes)
 * undefined Spawn(void)
 */
/* CNullEntity::Spawn(void) */

void __thiscall CNullEntity::Spawn(CNullEntity *this)

{
  (*g_engfuncs.pfnRemoveEntity)(this->pev->pContainingEntity);
  return;
}

