/* mp.dll - CItemBattery (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100215b0  CItemBattery::Spawn  (40 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CItemBattery::Spawn(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_w_battery_mdl_10094478);
  CItem::Spawn((int)param_1);
  return;
}

/* 100215e0  CItemBattery::Precache  (26 bytes)
 * undefined Precache()
 */
void CItemBattery::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_w_battery_mdl_10094478);
  (*g_engfuncs.pfnPrecacheSound)(s_items_gunpickup2_wav_10094490);
  return;
}

/* 10021600  CItemBattery::MyTouch  (336 bytes)
 * undefined MyTouch()
 */
undefined4 __thiscall CItemBattery::MyTouch(int param_1,CBasePlayer *param_2)

{
  float fVar1;
  entvars_t *peVar2;
  edict_t *this;
  byte_conflict abStack_2c [44];
  
  peVar2 = param_2->pev;
  if (((peVar2->deadflag == 0) && (peVar2->armorvalue < 100.0)) && (peVar2->weapons < 0)) {
    peVar2->armorvalue = peVar2->armorvalue + 50.0;
    peVar2 = param_2->pev;
    if (100.0 <= peVar2->armorvalue) {
      fVar1 = 100.0;
    }
    else {
      fVar1 = peVar2->armorvalue;
    }
    peVar2->armorvalue = fVar1;
    this = param_2->pev->pContainingEntity;
    EMIT_SOUND_DYN(this,this,3,s_items_gunpickup2_wav_10094490,0x3f800000,0x3f4ccccd,0,100);
    (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc14,(float *)0x0,param_2->pev->pContainingEntity);
    (*g_engfuncs.pfnWriteString)(gpGlobals->pStringBase + **(int **)(param_1 + 4));
    (*g_engfuncs.pfnMessageEnd)();
    __ftol();
    FUN_1006e69a(abStack_2c,(byte_conflict *)s__HEV__1dP_100944a8);
    CBasePlayer::SetSuitUpdate(param_2,abStack_2c,0,0x1e);
    return 1;
  }
  return 0;
}

