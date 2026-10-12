/* mp.dll - CBaseAnimating (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10006030  CBaseAnimating::Save  (48 bytes)
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
  CSave::WriteFields(param_1,(byte_conflict *)s_CBaseAnimating_1009059c,(int)this,0x100904f0,5);
  return;
}

/* 10006060  CBaseAnimating::Restore  (48 bytes)
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
  CRestore::ReadFields(param_1,(byte_conflict *)s_CBaseAnimating_1009059c,(int)this,0x100904f0,5);
  return;
}

/* 10006090  CBaseAnimating::StudioFrameAdvance  (299 bytes)
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
    if (fVar2 < (float10)0.001 != (fVar2 == (float10)0.001)) {
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

/* 100061c0  CBaseAnimating::LookupActivity  (41 bytes)
 * undefined LookupActivity(int param_1)
 * called by: CActAnimating::SetActivity, CBaseMonster::GetDeathActivity, CBaseMonster::GetSmallFlinchActivity, CBasePlayer::Spawn
 */
void __thiscall CBaseAnimating::LookupActivity(CBaseAnimating *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(*(edict_t **)(*(int *)(this + 4) + 0x208));
  ::LookupActivity((int)pvVar1,*(undefined4 *)(this + 4),param_1);
  return;
}

/* 10006220  CBaseAnimating::LookupSequence  (33 bytes)
 * undefined LookupSequence(byte.conflict * param_1)
 * called by: CDeadHEV::Spawn, CTSAnimation::Animate, CTSAnimation::SetAnim
 */
void __thiscall CBaseAnimating::LookupSequence(CBaseAnimating *this,byte_conflict *param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(*(edict_t **)(*(int *)(this + 4) + 0x208));
  FUN_10006990((int)pvVar1,param_1);
  return;
}

/* 10006250  CBaseAnimating::ResetSequenceInfo  (101 bytes)
 * undefined ResetSequenceInfo(int param_1)
 * called by: CActAnimating::SetActivity, CBaseMonster::MonsterInitDead, CCycler::TakeDamage, CTSAnimation::Animate, CTSAnimation::SetAnim, CTSModel::Spawn, CTSPowerUp::Spawn, CXenHair::Spawn, FUN_1001fc00, FUN_1006dc70
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

/* 100062c0  CBaseAnimating::GetSequenceFlags  (34 bytes)
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

/* 100062f0  CBaseAnimating::DispatchAnimEvents  (270 bytes)
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
    if ((256.0 <= fVar3) || (fVar3 < 0.0 != (fVar3 == 0.0))) {
      param_1[0x1a] = 1;
    }
    for (iVar5 = GetAnimationEvent((int)pvVar4,iVar5,&uStack_4,fVar2,fVar3,0); iVar5 != 0;
        iVar5 = GetAnimationEvent((int)pvVar4,param_1[1],&uStack_4,fVar2,fVar3,iVar5)) {
      (**(code **)(*param_1 + 0xf0))(&uStack_4);
    }
    return;
  }
  (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_Gibbed_monster_is_thinking__100905ac);
  return;
}

/* 10009080  CBaseAnimating::HandleAnimEvent  (3 bytes)
 * undefined HandleAnimEvent()
 */
void CBaseAnimating::HandleAnimEvent(void)

{
  return;
}

/* 10021950  CBaseAnimating::HandleAnimEvent  (165 bytes)
 * undefined4 HandleAnimEvent(int param_1)
 */
undefined4 __thiscall CBaseAnimating::HandleAnimEvent(CBaseAnimating *this,int param_1)

{
  if ((*(int *)(param_1 + 0x92c) == 0) && (*(int *)(*(int *)(param_1 + 4) + 0x168) < 0)) {
    *(undefined4 *)(param_1 + 0x92c) = 1;
    (*g_engfuncs.pfnSetPhysicsKeyValue)
              (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),&DAT_10094510,&DAT_10091ce0);
    (*g_engfuncs.pfnMessageBegin)
              (1,DAT_100cbc14,(float *)0x0,*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
    (*g_engfuncs.pfnWriteString)(gpGlobals->pStringBase + **(int **)(this + 4));
    (*g_engfuncs.pfnMessageEnd)();
    EMIT_SOUND_SUIT(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s__HEV_A1_10094508);
    return 1;
  }
  return 0;
}

