/* mp.dll - CNullEntity (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003e180  CNullEntity::Spawn  (18 bytes)
 * undefined Spawn()
 */
void __fastcall CNullEntity::Spawn(int param_1)

{
  (*g_engfuncs.pfnRemoveEntity)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  return;
}

