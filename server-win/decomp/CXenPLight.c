/* mp.dll - CXenPLight (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1007bf30  CXenPLight::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CXenPLight::Save(CActAnimating *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CActAnimating::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CXenPLight_100a7ffc,(int)param_1,0x100a7ec8,1);
  return;
}

/* 1007bf60  CXenPLight::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CXenPLight::Restore(CActAnimating *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CActAnimating::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CXenPLight_100a7ffc,(int)param_1,&DAT_100a7ec8,1);
  return;
}

/* 1007bf90  CXenPLight::Spawn  (491 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CXenPLight::Spawn(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  edict_t *pEdict;
  void *pvVar3;
  int iVar4;
  float10 fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
  (**(code **)(*param_1 + 0x20))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_light_mdl_100a801c);
  uStack_18 = 0x42a00000;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  uStack_14 = 0x42a00000;
  *(undefined4 *)(param_1[1] + 0x10c) = 1;
  fStack_10 = 32.0;
  uStack_c = 0xc2a00000;
  uStack_8 = 0xc2a00000;
  fStack_4 = 0.0;
  UTIL_SetSize(param_1[1],&uStack_c,&uStack_18);
  CActAnimating::SetActivity((CActAnimating *)param_1,1);
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
  fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,255.0);
  *(float *)(param_1[1] + 0x130) = (float)fVar5;
  iVar1 = param_1[1];
  uStack_18 = *(undefined4 *)(iVar1 + 8);
  uStack_14 = *(undefined4 *)(iVar1 + 0xc);
  fStack_10 = (*(float *)(iVar1 + 0xf0) + *(float *)(iVar1 + 0xe4)) * 0.5 + *(float *)(iVar1 + 0x10)
  ;
  uStack_8 = uStack_14;
  fStack_4 = fStack_10;
  pvVar3 = CSprite::SpriteCreate(0x100a8008,&uStack_18,0);
  param_1[0x1d] = (int)pvVar3;
  uVar2 = *(undefined4 *)(param_1[1] + 0x15c);
  lVar6 = __ftol();
  lVar7 = __ftol();
  lVar8 = __ftol();
  lVar9 = __ftol();
  *(undefined4 *)(*(int *)((int)pvVar3 + 4) + 0x148) = 3;
  *(float *)(*(int *)((int)pvVar3 + 4) + 0x150) = (float)(int)lVar9;
  *(float *)(*(int *)((int)pvVar3 + 4) + 0x154) = (float)(int)lVar8;
  *(float *)(*(int *)((int)pvVar3 + 4) + 0x158) = (float)(int)lVar7;
  *(float *)(*(int *)((int)pvVar3 + 4) + 0x14c) = (float)(int)lVar6;
  *(undefined4 *)(*(int *)((int)pvVar3 + 4) + 0x15c) = uVar2;
  iVar1 = param_1[0x1d];
  pEdict = *(edict_t **)(param_1[1] + 0x208);
  if (pEdict != (edict_t *)0x0) {
    iVar4 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
    *(int *)(*(int *)(iVar1 + 4) + 0x110) = iVar4;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x114) = 1;
    *(edict_t **)(*(int *)(iVar1 + 4) + 0x194) = pEdict;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x108) = 0xc;
  }
  return;
}

/* 1007c180  CXenPLight::Precache  (26 bytes)
 * undefined Precache()
 */
void CXenPLight::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_light_mdl_100a801c);
  (*g_engfuncs.pfnPrecacheModel)(s_sprites_flare3_spr_100a8008);
  return;
}

/* 1007c1a0  CXenPLight::Think  (132 bytes)
 * undefined Think(void * param_1)
 */
void __fastcall CXenPLight::Think(void *param_1)

{
  int iVar1;
  
  CBaseAnimating::StudioFrameAdvance((int)param_1,0.0);
  *(float *)(*(int *)((int)param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  iVar1 = *(int *)((int)param_1 + 0x70);
  if (iVar1 == 0x11) {
    if (*(int *)((int)param_1 + 0x68) != 0) {
      CActAnimating::SetActivity(param_1,0x12);
      FUN_1007c2b0(param_1);
    }
  }
  else if (iVar1 == 0x12) {
    if (*(float *)(*(int *)((int)param_1 + 4) + 0x1e4) < gpGlobals->time) {
      CActAnimating::SetActivity(param_1,0x13);
      FUN_1007c280(param_1);
      return;
    }
  }
  else if ((iVar1 == 0x13) && (*(int *)((int)param_1 + 0x68) != 0)) {
    CActAnimating::SetActivity(param_1,1);
    return;
  }
  return;
}

/* 1007c230  CXenPLight::Touch  (68 bytes)
 * undefined Touch(int * param_1)
 */
void __thiscall CXenPLight::Touch(CXenPLight *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xc0))();
  if (iVar1 != 0) {
    this->pev->dmgtime = gpGlobals->time + 5.0;
    if ((*(int *)&this->field_0x70 == 1) || (*(int *)&this->field_0x70 == 0x13)) {
      CActAnimating::SetActivity((CActAnimating *)this,0x11);
    }
  }
  return;
}

