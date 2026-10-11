/* mp.dll - CXenHull (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1007ca70  CXenHull::CreateHull  (250 bytes)
 * int CreateHull(int param_1, undefined4 param_2, undefined4 param_3, float * param_4)
 * called by: CXenSporeLarge::Spawn
 */
int __cdecl CXenHull::CreateHull(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = GetClassPtr<CXenHull>(0);
  iVar1 = *(int *)(param_1 + 4);
  local_c = *(float *)(iVar1 + 8) + *param_4;
  local_8 = *(float *)(iVar1 + 0xc) + param_4[1];
  local_4 = *(float *)(iVar1 + 0x10) + param_4[2];
  UTIL_SetOrigin(*(int *)(iVar2 + 4),&local_c);
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(iVar2 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x10c) = 2;
  **(int **)(iVar2 + 4) = (int)s_xen_hull_100a8080 - (int)gpGlobals->pStringBase;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x198) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
  UTIL_SetSize(*(int *)(iVar2 + 4),param_2,param_3);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x14c) = 0;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x148) = 2;
  return iVar2;
}

/* 1007d1b0  CXenHull::Classify  (6 bytes)
 * undefined Classify()
 */
/* Identical-code folding: also CXenHull::Classify, CXenTree::Classify */

undefined4 CXenHull::Classify(void)

{
  return 99;
}

