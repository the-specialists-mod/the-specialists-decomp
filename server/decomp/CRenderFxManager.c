/* ts_i386.so - CRenderFxManager (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e667c  CRenderFxManager::Spawn  (17 bytes)
 * undefined Spawn(void)
 */
/* CRenderFxManager::Spawn(void) */

void __thiscall CRenderFxManager::Spawn(CRenderFxManager *this)

{
  this->pev->solid = 0;
  return;
}

/* 000e6690  CRenderFxManager::Use  (310 bytes)
 * undefined Use(int * param_1)
 */
/* CRenderFxManager::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CRenderFxManager::Use(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  edict_t *pEdictStartSearchAfter;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)(*param_1 + 0x1c8) != 0) {
    pEdictStartSearchAfter = (edict_t *)0x0;
    while( true ) {
      pEdictStartSearchAfter =
           (*g_engfuncs.pfnFindEntityByString)
                     (pEdictStartSearchAfter,"targetname",
                      gpGlobals->pStringBase + *(int *)(*param_1 + 0x1c8));
      bVar1 = false;
      if ((pEdictStartSearchAfter == (edict_t *)0x0) ||
         (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter), iVar2 == 0)) {
        bVar1 = true;
      }
      if (bVar1) break;
      uVar3 = (uint)&pEdictStartSearchAfter->v & (pEdictStartSearchAfter == (edict_t *)0x0) - 1;
      if (((*(byte *)(*param_1 + 0x1a0) ^ 1) & 1) != 0) {
        *(undefined4 *)(uVar3 + 0x15c) = *(undefined4 *)(*param_1 + 0x15c);
      }
      if ((*(byte *)(*param_1 + 0x1a0) & 2) == 0) {
        *(undefined4 *)(uVar3 + 0x14c) = *(undefined4 *)(*param_1 + 0x14c);
      }
      if ((*(byte *)(*param_1 + 0x1a0) & 4) == 0) {
        *(undefined4 *)(uVar3 + 0x148) = *(undefined4 *)(*param_1 + 0x148);
      }
      if ((*(byte *)(*param_1 + 0x1a0) & 8) == 0) {
        puVar4 = (undefined4 *)(*param_1 + 0x150);
        puVar5 = (undefined4 *)(uVar3 + 0x150);
        for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
    }
  }
  return;
}

