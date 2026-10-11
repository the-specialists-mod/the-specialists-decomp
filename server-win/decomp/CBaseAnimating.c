/* mp.dll - CBaseAnimating (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10008230  CBaseAnimating::Save  (48 bytes)
 * undefined Save(void * param_1)
 * called by: CActAnimating::Save, CBasePlayerItem::Save, CBaseToggle::Save, CTSPowerUp::Save
 */
void __thiscall CBaseAnimating::Save(CBaseAnimating *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Save((CBaseDelay *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_1,(byte_conflict *)s_CBaseAnimating_1009b69c,(int)this,0x1009b5f0,5);
  return;
}

/* 10008260  CBaseAnimating::Restore  (48 bytes)
 * undefined Restore(void * param_1)
 * called by: CActAnimating::Restore, CBasePlayerItem::Restore, CBaseToggle::Restore, CTSPowerUp::Restore
 */
void __thiscall CBaseAnimating::Restore(CBaseAnimating *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Restore((CBaseDelay *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_1,(byte_conflict *)s_CBaseAnimating_1009b69c,(int)this,&DAT_1009b5f0,5)
  ;
  return;
}

/* 10008290  CBaseAnimating::StudioFrameAdvance  (297 bytes)
 * float10 StudioFrameAdvance(int param_1, float param_2)
 * called by: CBasePlayer::PlayerDeathThink, CBasePlayer::PostThink, CCycler::TakeDamage, CCycler::Think, CTSPowerUp::WaitThink, CWreckage::Think, CXenHair::Think, CXenPLight::Think, CXenSpore::Think, CXenTree::Think
 */
float10 __thiscall CBaseAnimating::StudioFrameAdvance(int param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  float10 extraout_ST0;
  float10 extraout_ST1;
  longlong lVar3;
  
  fVar2 = (float10)param_2;
  if (fVar2 == (float10)0.0) {
    fVar2 = (float10)gpGlobals->time - (float10)*(float *)(*(int *)(param_1 + 4) + 0x134);
    if (fVar2 <= (float10)0.001) {
      *(float *)(*(int *)(param_1 + 4) + 0x134) = gpGlobals->time;
      return (float10)0.0;
    }
  }
  iVar1 = *(int *)(param_1 + 4);
  if (*(float *)(iVar1 + 0x134) == 0.0) {
    fVar2 = (float10)0.0;
  }
  *(float *)(iVar1 + 0x130) =
       (float)((float10)*(float *)(iVar1 + 0x138) * (float10)*(float *)(param_1 + 0x5c) * fVar2 +
              (float10)*(float *)(iVar1 + 0x130));
  *(float *)(*(int *)(param_1 + 4) + 0x134) = gpGlobals->time;
  iVar1 = *(int *)(param_1 + 4);
  if ((*(float *)(iVar1 + 0x130) < 0.0) || (256.0 <= *(float *)(iVar1 + 0x130))) {
    if (*(int *)(param_1 + 0x6c) != 0) {
      lVar3 = __ftol();
      *(float *)(iVar1 + 0x130) = (float)(extraout_ST0 - (float10)(int)lVar3 * (float10)256.0);
      *(undefined4 *)(param_1 + 0x68) = 1;
      return extraout_ST1;
    }
    param_2 = 0.0;
    if (0.0 <= *(float *)(iVar1 + 0x130)) {
      param_2 = 3.57331e-43;
    }
    *(float *)(iVar1 + 0x130) = (float)(int)param_2;
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  return fVar2;
}

/* 100083c0  CBaseAnimating::LookupActivity  (41 bytes)
 * undefined LookupActivity(int param_1)
 * called by: CActAnimating::SetActivity, CBaseMonster::GetDeathActivity, CBasePlayer::Spawn
 */
void __thiscall CBaseAnimating::LookupActivity(CBaseAnimating *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(*(edict_t **)(*(int *)(this + 4) + 0x208));
  ::LookupActivity((int)pvVar1,*(undefined4 *)(this + 4),param_1);
  return;
}

/* 100083f0  CBaseAnimating::LookupSequence  (33 bytes)
 * undefined LookupSequence(byte.conflict * param_1)
 * called by: CDeadHEV::Spawn, CTSAnimation::Animate, CTSAnimation::SetAnim
 */
void __thiscall CBaseAnimating::LookupSequence(CBaseAnimating *this,byte_conflict *param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(*(edict_t **)(*(int *)(this + 4) + 0x208));
  FUN_100089a0((int)pvVar1,param_1);
  return;
}

/* 10008420  CBaseAnimating::ResetSequenceInfo  (101 bytes)
 * undefined ResetSequenceInfo(int param_1)
 * called by: CActAnimating::SetActivity, CBaseMonster::MonsterInitDead, CBasePlayer::TSInit, CCycler::Spawn, CCycler::TakeDamage, CTSAnimation::Animate, CTSAnimation::SetAnim, CTSModel::Spawn, CTSPowerUp::Spawn, CXenHair::Spawn, CXenSpore::Spawn
 */
void __fastcall CBaseAnimating::ResetSequenceInfo(int param_1)

{
  void *pvVar1;
  uint uVar2;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  GetSequenceInfo((int)pvVar1,*(int *)(param_1 + 4),(float *)(param_1 + 0x5c),
                  (float *)(param_1 + 0x60));
  uVar2 = GetSequenceFlags(param_1);
  *(uint *)(param_1 + 0x6c) = uVar2 & 1;
  *(float *)(*(int *)(param_1 + 4) + 0x134) = gpGlobals->time;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(float *)(param_1 + 100) = gpGlobals->time;
  return;
}

/* 10008490  CBaseAnimating::GetSequenceFlags  (34 bytes)
 * undefined GetSequenceFlags(int param_1)
 * called by: CBaseAnimating::ResetSequenceInfo
 */
void __fastcall CBaseAnimating::GetSequenceFlags(int param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  ::GetSequenceFlags((int)pvVar1,*(int *)(param_1 + 4));
  return;
}

/* 100084c0  CBaseAnimating::DispatchAnimEvents  (268 bytes)
 * undefined DispatchAnimEvents(int * param_1)
 * called by: CXenTree::Think
 */
void __fastcall CBaseAnimating::DispatchAnimEvents(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uStack_4;
  
  pvVar4 = (*g_engfuncs.pfnGetModelPtr)(*(edict_t **)(param_1[1] + 0x208));
  if (pvVar4 != (void *)0x0) {
    iVar5 = param_1[1];
    fVar2 = ((float)param_1[0x19] - *(float *)(iVar5 + 0x134)) * *(float *)(iVar5 + 0x138) *
            (float)param_1[0x17] + *(float *)(iVar5 + 0x130);
    fVar3 = *(float *)(iVar5 + 0x138) * (float)param_1[0x17] * 0.1 + *(float *)(iVar5 + 0x130);
    fVar1 = *(float *)(iVar5 + 0x134);
    param_1[0x1a] = 0;
    param_1[0x19] = (int)(fVar1 + 0.1);
    if ((256.0 <= fVar3) || (fVar3 <= 0.0)) {
      param_1[0x1a] = 1;
    }
    for (iVar5 = GetAnimationEvent((int)pvVar4,iVar5,&uStack_4,fVar2,fVar3,0); iVar5 != 0;
        iVar5 = GetAnimationEvent((int)pvVar4,param_1[1],&uStack_4,fVar2,fVar3,iVar5)) {
      (**(code **)(*param_1 + 0x10c))(&uStack_4);
    }
    return;
  }
  (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_Gibbed_monster_is_thinking__1009b6ac);
  return;
}

/* 100085d0  CBaseAnimating::InitBoneControllers  (92 bytes)
 * undefined InitBoneControllers(int param_1)
 * called by: CBaseMonster::MonsterInitDead, CCycler::Spawn, CTSModel::Spawn
 */
void __fastcall CBaseAnimating::InitBoneControllers(int param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  SetController((int)pvVar1,*(int *)(param_1 + 4),0,0.0);
  SetController((int)pvVar1,*(int *)(param_1 + 4),1,0.0);
  SetController((int)pvVar1,*(int *)(param_1 + 4),2,0.0);
  SetController((int)pvVar1,*(int *)(param_1 + 4),3,0.0);
  return;
}

/* 10008630  CBaseAnimating::ExtractBbox  (46 bytes)
 * undefined ExtractBbox(int param_1, undefined4 * param_2, undefined4 * param_3)
 * called by: CBaseAnimating::SetSequenceBox
 */
void __thiscall
CBaseAnimating::ExtractBbox
          (CBaseAnimating *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(*(edict_t **)(*(int *)(this + 4) + 0x208));
  ::ExtractBbox((int)pvVar1,param_1,param_2,param_3);
  return;
}

/* 10008660  CBaseAnimating::SetSequenceBox  (447 bytes)
 * undefined SetSequenceBox(void * param_1)
 * called by: CBaseMonster::CorpseFallThink
 */
void __fastcall CBaseAnimating::SetSequenceBox(void *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = ExtractBbox(param_1,*(int *)(*(int *)((int)param_1 + 4) + 0x128),&local_48,&local_3c);
  if (iVar2 != 0) {
    fVar8 = (float10)*(float *)(*(int *)((int)param_1 + 4) + 0x54) * (float10)0.017453292519943295;
    local_18 = local_48;
    local_14 = local_44;
    local_10 = local_40;
    fVar9 = (float10)fcos(fVar8);
    local_c = local_3c;
    local_8 = local_38;
    local_4 = local_34;
    local_60 = 9999.0;
    local_5c = 9999.0;
    local_58 = 9999.0;
    local_6c = -9999.0;
    local_68 = -9999.0;
    local_64 = -9999.0;
    pfVar5 = &local_18;
    iVar2 = 2;
    local_30 = (float)fVar9;
    fVar8 = (float10)fsin((float10)(float)fVar8);
    local_2c = (float)fVar8;
    local_24 = (float)-fVar8;
    do {
      pfVar6 = &local_14;
      iVar7 = 2;
      do {
        pfVar3 = &local_10;
        iVar4 = 2;
        local_54 = (float)((float10)*pfVar6 * (float10)local_24 +
                          (float10)(float)((float10)*pfVar5 * (float10)local_30));
        fVar8 = (float10)*pfVar6 * fVar9 + (float10)*pfVar5 * (float10)local_2c;
        do {
          fVar1 = *pfVar3;
          if (local_54 < local_60) {
            local_60 = local_54;
          }
          if (local_6c < local_54) {
            local_6c = local_54;
          }
          if (fVar8 < (float10)local_5c) {
            local_5c = (float)fVar8;
          }
          if ((float10)local_68 < fVar8) {
            local_68 = (float)fVar8;
          }
          if (fVar1 < local_58) {
            local_58 = fVar1;
          }
          if (local_64 < fVar1) {
            local_64 = fVar1;
          }
          pfVar3 = pfVar3 + 3;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        pfVar6 = pfVar6 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      pfVar5 = pfVar5 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    local_58 = 0.0;
    local_64 = 1.0;
    UTIL_SetSize(*(int *)((int)param_1 + 4),&local_60,&local_6c);
  }
  return;
}

