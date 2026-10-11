/* mp.dll - CStripWeapons (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10035bd0  CStripWeapons::Use  (95 bytes)
 * undefined Use(int * param_1)
 */
void CStripWeapons::Use(int *param_1)

{
  int iVar1;
  edict_t *peVar2;
  
  if ((param_1 == (int *)0x0) || (iVar1 = (**(code **)(*param_1 + 0xc0))(), iVar1 == 0)) {
    iVar1 = (**(code **)(*g_pGameRules + 0x18))();
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
    FUN_10033050(param_1,0);
  }
  return;
}

