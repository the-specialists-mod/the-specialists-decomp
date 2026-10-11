/* mp.dll - CXenHair (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1007c2f0  CXenHair::Spawn  (250 bytes)
 * undefined Spawn()
 */
void __fastcall CXenHair::Spawn(int *param_1)

{
  float10 fVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x20))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_hair_mdl_100a8030);
  uStack_18 = 0x40800000;
  uStack_14 = 0x40800000;
  uStack_10 = 0x42000000;
  uStack_c = 0xc0800000;
  uStack_8 = 0xc0800000;
  uStack_4 = 0;
  UTIL_SetSize(param_1[1],&uStack_c,&uStack_18);
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

/* 1007c3f0  CXenHair::Think  (36 bytes)
 * undefined Think(int param_1)
 */
void __fastcall CXenHair::Think(int param_1)

{
  CBaseAnimating::StudioFrameAdvance(param_1,0.0);
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.5;
  return;
}

/* 1007c420  CXenHair::Precache  (13 bytes)
 * undefined Precache()
 */
void CXenHair::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_hair_mdl_100a8030);
  return;
}

