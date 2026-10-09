/* ts_i386.so - CStripWeapons (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000ddbb0  CStripWeapons::Use  (150 bytes)
 * undefined Use(undefined4 param_1, CBasePlayer * param_2)
 */
/* CStripWeapons::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CStripWeapons::Use(undefined4 param_1,CBasePlayer *param_2)

{
  int iVar1;
  edict_t *peVar2;
  
  if (((param_2 == (CBasePlayer *)0x0) || (iVar1 = (*param_2->vtable[0x32])(param_2), iVar1 == 0))
     && (iVar1 = (**(code **)(*g_pGameRules + 0x20))(g_pGameRules), param_2 = (CBasePlayer *)0x0,
        iVar1 == 0)) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
    if (peVar2 == (edict_t *)0x0) {
      peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    param_2 = (CBasePlayer *)0x0;
    if (peVar2 != (edict_t *)0x0) {
      param_2 = peVar2->pvPrivateData;
    }
  }
  if (param_2 != (CBasePlayer *)0x0) {
    CBasePlayer::RemoveAllItems(param_2,0);
  }
  return;
}

