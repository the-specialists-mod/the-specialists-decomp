/* mp.dll - CXenTree (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006d380  CXenTree::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CXenTree::Save(CActAnimating *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CActAnimating::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CXenTree_1009b8e4,(int)param_1,0x1009b76c,1);
  return;
}

/* 1006d3b0  CXenTree::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CXenTree::Restore(CActAnimating *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CActAnimating::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CXenTree_1009b8e4,(int)param_1,0x1009b76c,1);
  return;
}

/* 1006d3e0  CXenTree::Spawn  (424 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CXenTree::Spawn(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
  (**(code **)(*param_1 + 0x10))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_tree_mdl_1009b8f0);
  fStack_18 = 30.0;
  fStack_14 = 30.0;
  fStack_10 = 188.0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  uStack_c = 0xc1f00000;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x3f800000;
  uStack_8 = 0xc1f00000;
  fStack_4 = 0.0;
  FUN_10067970();
  CActAnimating::SetActivity((CActAnimating *)param_1,1);
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
  fVar2 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,255.0);
  *(float *)(param_1[1] + 0x130) = (float)fVar2;
  fVar2 = (float10)(*g_engfuncs.pfnRandomFloat)(0.7,1.4);
  *(float *)(param_1[1] + 0x138) = (float)fVar2;
  (*g_engfuncs.pfnAngleVectors)((float *)(param_1[1] + 0x50),&fStack_24,(float *)0x0,(float *)0x0);
  fStack_4 = fStack_1c * 64.0;
  iVar1 = param_1[1];
  fStack_24 = fStack_24 * 64.0 + *(float *)(iVar1 + 8);
  fStack_20 = fStack_20 * 64.0 + *(float *)(iVar1 + 0xc);
  fStack_1c = fStack_4 + *(float *)(iVar1 + 0x10);
  fStack_18 = fStack_24;
  fStack_14 = fStack_20;
  fStack_10 = fStack_1c;
  iVar1 = CXenTreeTrigger::TriggerCreate(*(undefined4 *)(iVar1 + 0x208),&fStack_24);
  param_1[0x1d] = iVar1;
  uStack_c = 0x41c00000;
  uStack_8 = 0x41c00000;
  fStack_4 = 128.0;
  fStack_18 = -24.0;
  fStack_14 = -24.0;
  fStack_10 = 0.0;
  FUN_10067970();
  return;
}

/* 1006d590  CXenTree::Precache  (80 bytes)
 * undefined Precache()
 */
void CXenTree::Precache(void)

{
  uint uVar1;
  
  (*g_engfuncs.pfnPrecacheModel)(s_models_tree_mdl_1009b8f0);
  (*g_engfuncs.pfnPrecacheModel)(s_sprites_flare3_spr_1009b89c);
  uVar1 = 0;
  do {
    (*g_engfuncs.pfnPrecacheSound)(*(char **)((int)&PTR_s_zombie_claw_strike1_wav_1009b77c + uVar1))
    ;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0xc);
  uVar1 = 0;
  do {
    (*g_engfuncs.pfnPrecacheSound)(*(char **)((int)&PTR_s_zombie_claw_miss1_wav_1009b788 + uVar1));
    uVar1 = uVar1 + 4;
  } while (uVar1 < 8);
  return;
}

/* 1006d5e0  CXenTree::Touch  (71 bytes)
 * undefined Touch()
 */
void __thiscall CXenTree::Touch(void *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = (**(code **)(*param_2 + 0xa8))();
  if (iVar1 == 0) {
    iVar1 = 0x11;
    bVar4 = true;
    pcVar2 = gpGlobals->pStringBase + *(int *)param_2[1];
    pcVar3 = s_monster_bigmomma_1009b900;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      return;
    }
  }
  Attack(param_1);
  return;
}

/* 1006d630  CXenTree::Attack  (110 bytes)
 * undefined Attack(void * param_1)
 * called by: CXenTree::TakeDamage, CXenTree::Touch
 */
void __fastcall CXenTree::Attack(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *this;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)((int)param_1 + 0x70) == 1) {
    CActAnimating::SetActivity(param_1,0x1e);
    fVar4 = (float10)(*g_engfuncs.pfnRandomFloat)(1.0,1.4);
    *(float *)(*(int *)((int)param_1 + 4) + 0x138) = (float)fVar4;
    uVar1 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
    iVar2 = (*g_engfuncs.pfnRandomLong)(0x5f,0x69);
    uVar7 = 0;
    uVar6 = 0x3f4ccccd;
    uVar5 = 0x3f800000;
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    EMIT_SOUND_DYN(this,uVar1,1,(&PTR_s_zombie_claw_miss1_wav_1009b788)[iVar3],uVar5,uVar6,uVar7,
                   iVar2);
  }
  return;
}

/* 1006d6a0  CXenTree::HandleAnimEvent  (346 bytes)
 * undefined HandleAnimEvent()
 */
void __thiscall CXenTree::HandleAnimEvent(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  void *this;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  int aiStack_20 [8];
  
  if (*param_2 == 1) {
    bVar4 = false;
    iVar5 = UTIL_EntitiesInBox((int)aiStack_20,8,(float *)(*(int *)(param_1[0x1d] + 4) + 0xc4),
                               (float *)(*(int *)(param_1[0x1d] + 4) + 0xd0),0x28);
    (*g_engfuncs.pfnAngleVectors)((float *)(param_1[1] + 0x50),&fStack_38,(float *)0x0,(float *)0x0)
    ;
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        piVar1 = (int *)aiStack_20[iVar6];
        if ((piVar1 != param_1) &&
           (iVar2 = param_1[1], *(int *)(piVar1[1] + 0x198) != *(int *)(iVar2 + 0x208))) {
          bVar4 = true;
          (**(code **)(*piVar1 + 0x38))(iVar2,iVar2,0x41c80000,5);
          *(undefined4 *)(*(int *)(aiStack_20[iVar6] + 4) + 0x68) = 0x41700000;
          fStack_24 = fStack_30 * 100.0;
          iVar2 = *(int *)(aiStack_20[iVar6] + 4);
          *(float *)(iVar2 + 0x20) = fStack_38 * 100.0 + *(float *)(iVar2 + 0x20);
          *(float *)(iVar2 + 0x24) = fStack_34 * 100.0 + *(float *)(iVar2 + 0x24);
          *(float *)(iVar2 + 0x28) = fStack_24 + *(float *)(iVar2 + 0x28);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
      if (bVar4) {
        uVar3 = *(undefined4 *)(param_1[1] + 0x208);
        iVar5 = (*g_engfuncs.pfnRandomLong)(0x5f,0x69);
        uVar9 = 0;
        uVar8 = 0x3f4ccccd;
        uVar7 = 0x3f800000;
        iVar6 = (*g_engfuncs.pfnRandomLong)(0,2);
        EMIT_SOUND_DYN(this,uVar3,1,(&PTR_s_zombie_claw_strike1_wav_1009b77c)[iVar6],uVar7,uVar8,
                       uVar9,iVar5);
      }
    }
  }
  return;
}

/* 1006d800  CXenTree::Think  (102 bytes)
 * undefined Think()
 */
void __fastcall CXenTree::Think(CActAnimating *param_1)

{
  float10 fVar1;
  
  CBaseAnimating::StudioFrameAdvance((int)param_1,0.0);
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  CBaseAnimating::DispatchAnimEvents((int *)param_1);
  if ((*(int *)(param_1 + 0x70) == 0x1e) && (*(int *)(param_1 + 0x68) != 0)) {
    CActAnimating::SetActivity(param_1,1);
    fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.6,1.4);
    *(float *)(*(int *)(param_1 + 4) + 0x138) = (float)fVar1;
  }
  return;
}

/* 1006dee0  CXenTree::TakeDamage  (10 bytes)
 * undefined TakeDamage()
 */
undefined4 __fastcall CXenTree::TakeDamage(void *param_1)

{
  Attack(param_1);
  return 0;
}

/* 1006def0  CXenTree::Classify  (6 bytes)
 * undefined Classify()
 */
undefined4 CXenTree::Classify(void)

{
  return 99;
}

