/* mp.dll - CXenSpore (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003ac60  CXenSpore::Touch  (3 bytes)
 * undefined Touch(void)
 * called by: CBasePlayer::CheatImpulseCommands, CHalfLifeTeamplay::CHalfLifeTeamplay
 */
/* Identical-code folding: also CFuncTrackChange::Touch, CXenSpore::Touch */

void CXenSpore::Touch(void)

{
  return;
}

/* 1007cf00  CXenSpore::Spawn  (178 bytes)
 * undefined Spawn(int * param_1)
 * called by: CXenSporeLarge::Spawn, CXenSporeMed::Spawn, CXenSporeSmall::Spawn
 */
void __fastcall CXenSpore::Spawn(int *param_1)

{
  float10 fVar1;
  
  (**(code **)(*param_1 + 0x20))();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),
             (&PTR_s_models_fungus_small__mdl_100a7efc)[*(int *)(param_1[1] + 0x110)]);
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x3f800000;
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,255.0);
  *(float *)(param_1[1] + 0x130) = (float)fVar1;
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.7,1.4);
  *(float *)(param_1[1] + 0x138) = (float)fVar1;
  CBaseAnimating::ResetSequenceInfo((int)param_1);
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.1,0.4);
  *(float *)(param_1[1] + 0x104) = (float)(fVar1 + (float10)gpGlobals->time);
  return;
}

/* 1007cfc0  CXenSpore::Precache  (25 bytes)
 * undefined Precache()
 */
void __fastcall CXenSpore::Precache(int param_1)

{
  (*g_engfuncs.pfnPrecacheModel)
            ((&PTR_s_models_fungus_small__mdl_100a7efc)[*(int *)(*(int *)(param_1 + 4) + 0x110)]);
  return;
}

/* 1007cfe0  CXenSpore::Think  (36 bytes)
 * undefined Think(int param_1)
 */
void __fastcall CXenSpore::Think(int param_1)

{
  CBaseAnimating::StudioFrameAdvance(param_1,0.0);
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 1007d210  CXenSpore::TakeDamage  (5 bytes)
 * undefined TakeDamage()
 */
undefined4 CXenSpore::TakeDamage(void)

{
  return 0;
}

