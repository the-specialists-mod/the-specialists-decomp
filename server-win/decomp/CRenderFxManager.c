/* mp.dll - CRenderFxManager (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10040c50  CRenderFxManager::Use  (211 bytes)
 * undefined Use(int param_1)
 */
void __fastcall CRenderFxManager::Use(int param_1)

{
  int iVar1;
  edict_t *pEdictStartSearchAfter;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x1c8) != 0) {
    pEdictStartSearchAfter = (edict_t *)0x0;
    while (pEdictStartSearchAfter =
                (*g_engfuncs.pfnFindEntityByString)
                          (pEdictStartSearchAfter,s_targetname_1009c68c,
                           gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1c8)),
          pEdictStartSearchAfter != (edict_t *)0x0) {
      iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
      if (iVar1 == 0) {
        return;
      }
      if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) == 0) {
        (pEdictStartSearchAfter->v).renderfx = *(int *)(*(int *)(param_1 + 4) + 0x15c);
      }
      if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) == 0) {
        (pEdictStartSearchAfter->v).renderamt = *(float *)(*(int *)(param_1 + 4) + 0x14c);
      }
      if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 4) == 0) {
        (pEdictStartSearchAfter->v).rendermode = *(int *)(*(int *)(param_1 + 4) + 0x148);
      }
      iVar1 = *(int *)(param_1 + 4);
      if ((*(byte *)(iVar1 + 0x1a0) & 8) == 0) {
        (pEdictStartSearchAfter->v).rendercolor[0] = *(vec_t *)(iVar1 + 0x150);
        (pEdictStartSearchAfter->v).rendercolor[1] = *(vec_t *)(iVar1 + 0x154);
        (pEdictStartSearchAfter->v).rendercolor[2] = *(vec_t *)(iVar1 + 0x158);
      }
    }
  }
  return;
}

