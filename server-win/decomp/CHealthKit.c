/* mp.dll - CHealthKit (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10027ee0  CHealthKit::Spawn  (41 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CHealthKit::Spawn(int *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_w_medkit_mdl_1009f668);
  CItem::Spawn(param_1);
  return;
}

/* 10027f10  CHealthKit::Precache  (26 bytes)
 * undefined Precache()
 */
void CHealthKit::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_w_medkit_mdl_1009f668);
  (*g_engfuncs.pfnPrecacheSound)(s_items_smallmedkit1_wav_1009f67c);
  return;
}

/* 10027f30  CHealthKit::MyTouch  (215 bytes)
 * undefined4 MyTouch(int * param_1)
 */
undefined4 __thiscall CHealthKit::MyTouch(CHealthKit *this,int *param_1)

{
  int iVar1;
  
  if (*(int *)(param_1[1] + 0x170) == 0) {
    iVar1 = (**(code **)(*param_1 + 0x54))(0x42480000,0);
    if (iVar1 != 0) {
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100d9738,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteString)(gpGlobals->pStringBase + this->pev->classname);
      (*g_engfuncs.pfnMessageEnd)();
      EMIT_SOUND_DYN(*(void **)(param_1[1] + 0x208),*(void **)(param_1[1] + 0x208),3,
                     s_items_smallmedkit1_wav_1009f67c,0x3f800000,0x3f4ccccd,0);
      iVar1 = (**(code **)(*g_pGameRules + 0x90))();
      if (iVar1 != 0) {
        (*this->vtable[0x39])();
        return 1;
      }
      UTIL_Remove((int *)this);
      return 1;
    }
  }
  return 0;
}

