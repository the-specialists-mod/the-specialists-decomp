/* mp.dll - CPointEntity (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000b570  CPointEntity::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CPointEntity::ObjectCaps(void)

{
  return 0;
}

/* 100377e0  CPointEntity::Spawn  (14 bytes)
 * undefined Spawn()
 */
void __fastcall CPointEntity::Spawn(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  return;
}

