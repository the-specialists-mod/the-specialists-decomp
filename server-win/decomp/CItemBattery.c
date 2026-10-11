/* mp.dll - CItemBattery (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10029580  CItemBattery::Spawn  (41 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CItemBattery::Spawn(int *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_w_battery_mdl_1009f788);
  CItem::Spawn(param_1);
  return;
}

/* 100295b0  CItemBattery::Precache  (26 bytes)
 * undefined Precache()
 */
void CItemBattery::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_w_battery_mdl_1009f788);
  (*g_engfuncs.pfnPrecacheSound)(s_items_gunpickup2_wav_1009f7a0);
  return;
}

/* 100295d0  CItemBattery::MyTouch  (292 bytes)
 * undefined MyTouch()
 */
undefined4 __thiscall CItemBattery::MyTouch(int param_1,CBasePlayer *param_2)

{
  entvars_t *peVar1;
  edict_t *this;
  byte_conflict abStack_2c [44];
  
  peVar1 = param_2->pev;
  if (((peVar1->deadflag == 0) && (peVar1->armorvalue < 100.0)) &&
     ((peVar1->weapons & 0x80000000U) != 0)) {
    CBasePlayer::TakeArmor(param_2,0x32);
    this = param_2->pev->pContainingEntity;
    EMIT_SOUND_DYN(this,this,3,s_items_gunpickup2_wav_1009f7a0,0x3f800000,0x3f4ccccd,0);
    (*g_engfuncs.pfnMessageBegin)(1,DAT_100d9738,(float *)0x0,param_2->pev->pContainingEntity);
    (*g_engfuncs.pfnWriteString)(gpGlobals->pStringBase + **(int **)(param_1 + 4));
    (*g_engfuncs.pfnMessageEnd)();
    __ftol();
    sprintf(abStack_2c,(byte_conflict *)s__HEV__1dP_1009f7b8);
    CBasePlayer::SetSuitUpdate(param_2,abStack_2c,0,0x1e);
    return 1;
  }
  return 0;
}

