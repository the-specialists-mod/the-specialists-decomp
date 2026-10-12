/* mp.dll - CXenHair (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006d190  CXenHair::Spawn  (250 bytes)
 * undefined Spawn()
 */
void __fastcall CXenHair::Spawn(int *param_1)

{
  float10 fVar1;
  
  (**(code **)(*param_1 + 0x10))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_hair_mdl_1009b8c4);
  FUN_10067970();
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0) {
    fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,255.0);
    *(float *)(param_1[1] + 0x130) = (float)fVar1;
    fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.7,1.4);
    *(float *)(param_1[1] + 0x138) = (float)fVar1;
  }
  CBaseAnimating::ResetSequenceInfo((int)param_1);
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.1,0.4);
  *(float *)(param_1[1] + 0x104) = (float)(fVar1 + (float10)gpGlobals->time);
  return;
}

/* 1006d290  CXenHair::Think  (36 bytes)
 * undefined Think()
 */
void __fastcall CXenHair::Think(int param_1)

{
  CBaseAnimating::StudioFrameAdvance(param_1,0.0);
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.5;
  return;
}

/* 1006d2c0  CXenHair::Precache  (13 bytes)
 * undefined Precache()
 */
void CXenHair::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_hair_mdl_1009b8c4);
  return;
}

