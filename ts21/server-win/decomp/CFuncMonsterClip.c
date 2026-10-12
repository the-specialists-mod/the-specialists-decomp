/* mp.dll - CFuncMonsterClip (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10007610  CFuncMonsterClip::Spawn  (63 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CFuncMonsterClip::Spawn(int param_1)

{
  uint *puVar1;
  float10 fVar2;
  
  CFuncWall::Spawn(param_1);
  fVar2 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_showtriggers_10090ec8);
  if (fVar2 == (float10)0.0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  }
  puVar1 = (uint *)(*(int *)(param_1 + 4) + 0x1a4);
  *puVar1 = *puVar1 | 0x800000;
  return;
}

/* 10009100  CFuncMonsterClip::Use  (3 bytes)
 * undefined Use()
 */
void CFuncMonsterClip::Use(void)

{
  return;
}

