/* mp.dll - CXenTree (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1007c510  CXenTree::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CXenTree::Save(CActAnimating *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CActAnimating::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CXenTree_100a8050,(int)param_1,0x100a7ed8,1);
  return;
}

/* 1007c540  CXenTree::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CXenTree::Restore(CActAnimating *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CActAnimating::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CXenTree_100a8050,(int)param_1,&DAT_100a7ed8,1);
  return;
}

/* 1007c570  CXenTree::Spawn  (446 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CXenTree::Spawn(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  float fStack_8;
  float fStack_4;
  
  (**(code **)(*param_1 + 0x20))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_tree_mdl_100a805c);
  fStack_24 = 30.0;
  fStack_20 = 30.0;
  fStack_1c = 188.0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  uStack_18 = 0xc1f00000;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x3f800000;
  fStack_14 = -30.0;
  fStack_10 = 0.0;
  UTIL_SetSize(param_1[1],&uStack_18,&fStack_24);
  CActAnimating::SetActivity((CActAnimating *)param_1,1);
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
  fVar2 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,255.0);
  *(float *)(param_1[1] + 0x130) = (float)fVar2;
  fVar2 = (float10)(*g_engfuncs.pfnRandomFloat)(0.7,1.4);
  *(float *)(param_1[1] + 0x138) = (float)fVar2;
  (*g_engfuncs.pfnAngleVectors)((float *)(param_1[1] + 0x50),&fStack_30,(float *)0x0,(float *)0x0);
  fStack_14 = fStack_2c * 64.0;
  iVar1 = param_1[1];
  fStack_10 = fStack_28 * 64.0;
  fStack_30 = fStack_30 * 64.0 + *(float *)(iVar1 + 8);
  fStack_2c = fStack_14 + *(float *)(iVar1 + 0xc);
  fStack_28 = fStack_10 + *(float *)(iVar1 + 0x10);
  fStack_24 = fStack_30;
  fStack_20 = fStack_2c;
  fStack_1c = fStack_28;
  fStack_8 = fStack_2c;
  fStack_4 = fStack_28;
  iVar1 = CXenTreeTrigger::TriggerCreate(*(undefined4 *)(iVar1 + 0x208),&fStack_30);
  param_1[0x1d] = iVar1;
  uStack_c = 0x41c00000;
  fStack_8 = 24.0;
  fStack_4 = 128.0;
  uStack_18 = 0xc1c00000;
  fStack_14 = -24.0;
  fStack_10 = 0.0;
  UTIL_SetSize(*(int *)(iVar1 + 4),&uStack_18,&uStack_c);
  return;
}

/* 1007c730  CXenTree::Precache  (84 bytes)
 * undefined Precache()
 */
void CXenTree::Precache(void)

{
  undefined **ppuVar1;
  
  (*g_engfuncs.pfnPrecacheModel)(s_models_tree_mdl_100a805c);
  (*g_engfuncs.pfnPrecacheModel)(s_sprites_flare3_spr_100a8008);
  ppuVar1 = &PTR_s_zombie_claw_strike1_wav_100a7ee8;
  do {
    (*g_engfuncs.pfnPrecacheSound)(*ppuVar1);
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x100a7ef4);
  ppuVar1 = &PTR_s_zombie_claw_miss1_wav_100a7ef4;
  do {
    (*g_engfuncs.pfnPrecacheSound)(*ppuVar1);
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x100a7efc);
  return;
}

/* 1007c790  CXenTree::Touch  (111 bytes)
 * undefined Touch()
 */
void __thiscall CXenTree::Touch(void *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = (**(code **)(*param_2 + 0xc0))();
  if (iVar2 == 0) {
    pcVar4 = s_monster_bigmomma_100a806c;
    pbVar3 = (byte *)(gpGlobals->pStringBase + *(int *)param_2[1]);
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_1007c7e8:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_1007c7ed;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_1007c7e8;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_1007c7ed:
    if (iVar2 == 0) {
      return;
    }
  }
  Attack(param_1);
  return;
}

/* 1007c800  CXenTree::Attack  (118 bytes)
 * undefined Attack(void * param_1)
 * called by: CXenTree::TakeDamage, CXenTree::Touch
 */
void __fastcall CXenTree::Attack(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(int *)((int)param_1 + 0x70) == 1) {
    CActAnimating::SetActivity(param_1,0x1e);
    fVar3 = (float10)(*g_engfuncs.pfnRandomFloat)(1.0,1.4);
    *(float *)(*(int *)((int)param_1 + 4) + 0x138) = (float)fVar3;
    uVar1 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
    (*g_engfuncs.pfnRandomLong)(0x5f,0x69);
    uVar6 = 0;
    uVar5 = 0x3f4ccccd;
    uVar4 = 0x3f800000;
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,1);
    EMIT_SOUND_DYN(this,uVar1,1,(&PTR_s_zombie_claw_miss1_wav_100a7ef4)[iVar2],uVar4,uVar5,uVar6);
  }
  return;
}

/* 1007c880  CXenTree::HandleAnimEvent  (378 bytes)
 * undefined HandleAnimEvent()
 */
void __thiscall CXenTree::HandleAnimEvent(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  void *this;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_28;
  float fStack_24;
  int aiStack_20 [8];
  
  if (*param_2 == 1) {
    bVar3 = false;
    param_2 = (int *)UTIL_EntitiesInBox(aiStack_20,8,(float *)(*(int *)(param_1[0x1d] + 4) + 0xc4),
                                        (float *)(*(int *)(param_1[0x1d] + 4) + 0xd0),0x28);
    (*g_engfuncs.pfnAngleVectors)((float *)(param_1[1] + 0x50),&fStack_44,(float *)0x0,(float *)0x0)
    ;
    if (0 < (int)param_2) {
      piVar5 = aiStack_20;
      do {
        piVar1 = (int *)*piVar5;
        if ((piVar1 != param_1) &&
           (iVar4 = param_1[1], *(int *)(piVar1[1] + 0x198) != *(int *)(iVar4 + 0x208))) {
          bVar3 = true;
          (**(code **)(*piVar1 + 0x50))(iVar4,iVar4,0x41c80000,5);
          *(undefined4 *)(*(int *)(*piVar5 + 4) + 0x68) = 0x41700000;
          fStack_34 = fStack_40 * 100.0;
          iVar4 = *(int *)(*piVar5 + 4);
          fStack_30 = fStack_3c * 100.0;
          fStack_28 = fStack_34 + *(float *)(iVar4 + 0x24);
          fStack_24 = fStack_30 + *(float *)(iVar4 + 0x28);
          *(float *)(iVar4 + 0x20) = fStack_44 * 100.0 + *(float *)(iVar4 + 0x20);
          *(float *)(iVar4 + 0x24) = fStack_28;
          *(float *)(iVar4 + 0x28) = fStack_24;
        }
        piVar5 = piVar5 + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (param_2 != (int *)0x0);
      if (bVar3) {
        uVar2 = *(undefined4 *)(param_1[1] + 0x208);
        (*g_engfuncs.pfnRandomLong)(0x5f,0x69);
        uVar8 = 0;
        uVar7 = 0x3f4ccccd;
        uVar6 = 0x3f800000;
        iVar4 = (*g_engfuncs.pfnRandomLong)(0,2);
        EMIT_SOUND_DYN(this,uVar2,1,(&PTR_s_zombie_claw_strike1_wav_100a7ee8)[iVar4],uVar6,uVar7,
                       uVar8);
      }
    }
  }
  return;
}

/* 1007ca00  CXenTree::Think  (102 bytes)
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

/* 1007d150  CXenTree::TakeDamage  (10 bytes)
 * undefined TakeDamage()
 */
undefined4 __fastcall CXenTree::TakeDamage(void *param_1)

{
  Attack(param_1);
  return 0;
}

