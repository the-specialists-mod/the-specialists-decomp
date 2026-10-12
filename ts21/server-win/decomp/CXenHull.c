/* mp.dll - CXenHull (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006d870  CXenHull::CreateHull  (232 bytes)
 * int CreateHull(int param_1, undefined4 param_2, undefined4 param_3, float * param_4)
 * called by: CXenSporeLarge::Spawn
 */
int __cdecl CXenHull::CreateHull(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  int iVar1;
  
  iVar1 = GetClassPtr<CXenHull>(0);
  FUN_100679a0();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(iVar1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x10c) = 2;
  **(int **)(iVar1 + 4) = (int)s_xen_hull_1009b914 - (int)gpGlobals->pStringBase;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x198) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
  FUN_10067970();
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x14c) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x148) = 2;
  return iVar1;
}

/* 1006df50  CXenHull::Classify  (6 bytes)
 * undefined Classify()
 */
undefined4 CXenHull::Classify(void)

{
  return 99;
}

