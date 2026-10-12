/* mp.dll - CStripWeapons (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002e940  CStripWeapons::Use  (95 bytes)
 * undefined Use(int * param_1)
 */
void CStripWeapons::Use(int *param_1)

{
  int iVar1;
  edict_t *peVar2;
  
  if ((param_1 == (int *)0x0) || (iVar1 = (**(code **)(*param_1 + 0xa8))(), iVar1 == 0)) {
    iVar1 = (**(code **)(*DAT_1009f494 + 0x1c))();
    if (iVar1 != 0) {
      return;
    }
    peVar2 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
    if ((peVar2 == (edict_t *)0x0) &&
       (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 == (edict_t *)0x0)) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = peVar2->pvPrivateData;
    }
  }
  if (param_1 != (int *)0x0) {
    FUN_1002ad70(param_1,0);
  }
  return;
}

