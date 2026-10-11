/* mp.dll - CBaseToggle (12 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000ae00  CBaseToggle::GetToggleState  (4 bytes)
 * undefined GetToggleState()
 */
undefined4 __fastcall CBaseToggle::GetToggleState(int param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}

/* 1000ae10  CBaseToggle::GetDelay  (4 bytes)
 * undefined GetDelay()
 */
float10 __fastcall CBaseToggle::GetDelay(int param_1)

{
  return (float10)*(float *)(param_1 + 0x7c);
}

/* 1003e890  CBaseToggle::Save  (48 bytes)
 * undefined Save(void * param_1)
 * called by: CBaseButton::Save, CBaseDoor::Save, CBasePlatTrain::Save, CBasePlayer::Save, CChangeLevel::Save, CCycler::Save, CEnvExplosion::Save, CGunTarget::Save, CMomentaryDoor::Save, CMomentaryRotButton::Save, CMultiManager::Save, CWreckage::Save
 */
void __thiscall CBaseToggle::Save(CBaseToggle *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseAnimating::Save((CBaseAnimating *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_1,(byte_conflict *)s_CBaseToggle_100a273c,(int)this,0x100a2450,0x13);
  return;
}

/* 1003e8c0  CBaseToggle::Restore  (48 bytes)
 * undefined Restore(void * param_1)
 * called by: CBaseButton::Restore, CBaseDoor::Restore, CBasePlatTrain::Restore, CBasePlayer::Restore, CChangeLevel::Restore, CCycler::Restore, CEnvExplosion::Restore, CGunTarget::Restore, CMomentaryDoor::Restore, CMomentaryRotButton::Restore, CMultiManager::Restore, CWreckage::Restore
 */
void __thiscall CBaseToggle::Restore(CBaseToggle *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseAnimating::Restore((CBaseAnimating *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_1,(byte_conflict *)s_CBaseToggle_100a273c,(int)this,&DAT_100a2450,0x13)
  ;
  return;
}

/* 1003e8f0  CBaseToggle::KeyValue  (359 bytes)
 * undefined KeyValue(int param_1)
 * called by: CBaseButton::KeyValue, CBaseDoor::KeyValue, CBaseMonster::KeyValue, CBasePlatTrain::KeyValue, CBaseTrigger::KeyValue, CFuncIllusionary::KeyValue, CMomentaryDoor::KeyValue, CMomentaryRotButton::KeyValue, CRecharge::KeyValue
 */
void __thiscall CBaseToggle::KeyValue(CBaseToggle *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  CBaseToggle *pCVar5;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  float10 fVar10;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_1 + 4);
  pbVar7 = &DAT_1009e538;
  pbVar2 = pbVar4;
  pCVar5 = this;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_1003e928:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1003e92d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar5 = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_1003e928;
    pbVar2 = pbVar2 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003e92d:
  if (iVar3 == 0) {
    fVar10 = atof(pCVar5,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x80) = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pbVar7 = &DAT_100a00b8;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_1003e97c:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1003e981;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar5 = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_1003e97c;
    pbVar2 = pbVar2 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003e981:
  if (iVar3 == 0) {
    fVar10 = atof(pCVar5,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x7c) = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_master_1009e980;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1003e9cd:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1003e9d2;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar5 = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1003e9cd;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003e9d2:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)(this + 0xec) = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_distance_1009c02c;
  do {
    bVar1 = *pbVar4;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1003ea22:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1003ea27;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    pCVar5 = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1003ea22;
    pbVar4 = pbVar4 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003ea27:
  if (iVar3 == 0) {
    fVar10 = atof(pCVar5,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x78) = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
  return;
}

/* 1003ea60  CBaseToggle::LinearMove  (243 bytes)
 * undefined LinearMove(float param_1, float param_2, float param_3, float param_4)
 * called by: CBaseButton::ButtonActivate, CBaseButton::ButtonReturn, CBaseDoor::DoorGoDown, CBaseDoor::DoorGoUp, CFuncPlat::GoDown, CFuncPlat::GoUp, CFuncTrain::Next, CGunTarget::Next, CMomentaryDoor::Use
 */
void __thiscall
CBaseToggle::LinearMove(CBaseToggle *this,float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  *(float *)(this + 0xd0) = param_1;
  *(float *)(this + 0xd4) = param_2;
  *(float *)(this + 0xd8) = param_3;
  iVar1 = *(int *)(this + 4);
  if (((param_1 == *(float *)(iVar1 + 8)) && (param_2 == *(float *)(iVar1 + 0xc))) &&
     (param_3 == *(float *)(iVar1 + 0x10))) {
    LinearMoveDone(this);
    return;
  }
  fVar2 = param_1 - *(float *)(iVar1 + 8);
  fVar5 = param_2 - *(float *)(iVar1 + 0xc);
  fVar4 = param_3 - *(float *)(iVar1 + 0x10);
  fVar3 = SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4) / param_4;
  *(float *)(iVar1 + 0x104) = fVar3 + *(float *)(iVar1 + 0x100);
  *(code **)(this + 0x10) = LinearMoveDone;
  iVar1 = *(int *)(this + 4);
  *(float *)(iVar1 + 0x20) = fVar2 / fVar3;
  *(float *)(iVar1 + 0x24) = fVar5 / fVar3;
  *(float *)(iVar1 + 0x28) = fVar4 / fVar3;
  return;
}

/* 1003eb60  CBaseToggle::LinearMoveDone  (81 bytes)
 * void LinearMoveDone(void)
 * called by: CBaseToggle::LinearMove
 */
/* public: void __thiscall CBaseToggle::LinearMoveDone(void) */

void __thiscall CBaseToggle::LinearMoveDone(CBaseToggle *this)

{
  int iVar1;
  
                    /* 0x3eb60  64  ?LinearMoveDone@CBaseToggle@@QAEXXZ */
  UTIL_SetOrigin(*(int *)(this + 4),this + 0xd0);
  iVar1 = *(int *)(this + 4);
  *(undefined4 *)(iVar1 + 0x20) = DAT_100ae498;
  *(undefined4 *)(iVar1 + 0x24) = DAT_100ae49c;
  *(undefined4 *)(iVar1 + 0x28) = DAT_100ae4a0;
  *(undefined4 *)(*(int *)(this + 4) + 0x104) = 0xbf800000;
  if (*(code **)(this + 0xcc) != (code *)0x0) {
    (**(code **)(this + 0xcc))();
  }
  return;
}

/* 1003ebc0  CBaseToggle::AngularMove  (243 bytes)
 * undefined AngularMove(float param_1, float param_2, float param_3, float param_4)
 * called by: CBaseButton::ButtonActivate, CBaseButton::ButtonReturn, CBaseDoor::DoorGoDown, CBaseDoor::DoorGoUp, CFuncTrackChange::GoDown, CFuncTrackChange::GoUp
 */
void __thiscall
CBaseToggle::AngularMove(CBaseToggle *this,float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  *(float *)(this + 0xdc) = param_1;
  *(float *)(this + 0xe0) = param_2;
  *(float *)(this + 0xe4) = param_3;
  iVar1 = *(int *)(this + 4);
  if (((param_1 == *(float *)(iVar1 + 0x50)) && (param_2 == *(float *)(iVar1 + 0x54))) &&
     (param_3 == *(float *)(iVar1 + 0x58))) {
    AngularMoveDone(this);
    return;
  }
  fVar2 = param_1 - *(float *)(iVar1 + 0x50);
  fVar5 = param_2 - *(float *)(iVar1 + 0x54);
  fVar4 = param_3 - *(float *)(iVar1 + 0x58);
  fVar3 = SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4) / param_4;
  *(float *)(iVar1 + 0x104) = fVar3 + *(float *)(iVar1 + 0x100);
  *(code **)(this + 0x10) = AngularMoveDone;
  iVar1 = *(int *)(this + 4);
  *(float *)(iVar1 + 0x5c) = fVar2 / fVar3;
  *(float *)(iVar1 + 0x60) = fVar5 / fVar3;
  *(float *)(iVar1 + 100) = fVar4 / fVar3;
  return;
}

/* 1003ecc0  CBaseToggle::AngularMoveDone  (85 bytes)
 * void AngularMoveDone(void)
 * called by: CBaseToggle::AngularMove
 */
/* public: void __thiscall CBaseToggle::AngularMoveDone(void) */

void __thiscall CBaseToggle::AngularMoveDone(CBaseToggle *this)

{
  int iVar1;
  
                    /* 0x3ecc0  2  ?AngularMoveDone@CBaseToggle@@QAEXXZ */
  iVar1 = *(int *)(this + 4);
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(this + 0xdc);
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(this + 0xe0);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(this + 0xe4);
  iVar1 = *(int *)(this + 4);
  *(undefined4 *)(iVar1 + 0x5c) = DAT_100ae498;
  *(undefined4 *)(iVar1 + 0x60) = DAT_100ae49c;
  *(undefined4 *)(iVar1 + 100) = DAT_100ae4a0;
  *(undefined4 *)(*(int *)(this + 4) + 0x104) = 0xbf800000;
  if (*(code **)(this + 0xcc) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1003ed12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0xcc))();
    return;
  }
  return;
}

/* 1003ed20  CBaseToggle::AxisDir  (174 bytes)
 * undefined AxisDir(int param_1)
 * called by: CFuncPlatRot::SetupRotation, CMomentaryRotButton::Spawn, CPendulum::Spawn, CRotButton::Spawn, CRotDoor::Spawn
 */
void __cdecl CBaseToggle::AxisDir(int param_1)

{
  if ((*(uint *)(param_1 + 0x1a0) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
    return;
  }
  if ((*(uint *)(param_1 + 0x1a0) & 0x80) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

/* 1003edd0  CBaseToggle::AxisDelta  (55 bytes)
 * float10 AxisDelta(byte.conflict param_1, float * param_2, float * param_3)
 * called by: CMomentaryRotButton::Return, CMomentaryRotButton::Use, CPendulum::PendulumUse, CPendulum::Swing
 */
float10 __cdecl CBaseToggle::AxisDelta(byte_conflict param_1,float *param_2,float *param_3)

{
  if ((param_1 & 0x40) != 0) {
    return (float10)param_2[2] - (float10)param_3[2];
  }
  if ((param_1 & 0x80) != 0) {
    return (float10)*param_2 - (float10)*param_3;
  }
  return (float10)param_2[1] - (float10)param_3[1];
}

/* 1006c3b0  CBaseToggle::CBaseToggle  (9 bytes)
 * undefined CBaseToggle(undefined4 * param_1)
 * called by: GetClassPtr<CBot>
 */
/* inlined base ctor: sets CBaseToggle vptr */

void __fastcall CBaseToggle::CBaseToggle(undefined4 *param_1)

{
  *param_1 = &vftable;
  return;
}

