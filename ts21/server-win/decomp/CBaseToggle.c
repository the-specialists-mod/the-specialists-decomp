/* mp.dll - CBaseToggle (14 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10009090  CBaseToggle::GetToggleState  (4 bytes)
 * undefined GetToggleState()
 */
undefined4 __fastcall CBaseToggle::GetToggleState(int param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}

/* 100090a0  CBaseToggle::GetDelay  (4 bytes)
 * undefined GetDelay()
 */
float10 __fastcall CBaseToggle::GetDelay(int param_1)

{
  return (float10)*(float *)(param_1 + 0x7c);
}

/* 10037e90  CBaseToggle::Save  (48 bytes)
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
  CSave::WriteFields(param_1,(byte_conflict *)s_CBaseToggle_1009746c,(int)this,0x10097180,0x13);
  return;
}

/* 10037ec0  CBaseToggle::Restore  (48 bytes)
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
  CRestore::ReadFields(param_1,(byte_conflict *)s_CBaseToggle_1009746c,(int)this,0x10097180,0x13);
  return;
}

/* 10037ef0  CBaseToggle::KeyValue  (223 bytes)
 * undefined KeyValue(int param_1)
 * called by: CBaseButton::KeyValue, CBaseDoor::KeyValue, CBasePlatTrain::KeyValue, CBaseTrigger::KeyValue, CFuncIllusionary::KeyValue, CMomentaryDoor::KeyValue, CMomentaryRotButton::KeyValue, CRecharge::KeyValue, CWallHealth::KeyValue
 */
void __thiscall CBaseToggle::KeyValue(CBaseToggle *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  float10 fVar7;
  
  pcVar4 = *(char **)(param_1 + 4);
  puVar1 = (undefined1 *)0x4;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = &DAT_10093440;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    fVar7 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x80) = (float)fVar7;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = (undefined1 *)0x5;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = &DAT_10094d68;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    fVar7 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x7c) = (float)fVar7;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar2 = 7;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_master_10093878;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)(this + 0xec) = iVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = &DAT_00000009;
  bVar6 = true;
  pcVar3 = s_distance_10090f84;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar6 = *pcVar4 == *pcVar3;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar6);
  if (bVar6) {
    fVar7 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x78) = (float)fVar7;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
  return;
}

/* 10037fd0  CBaseToggle::LinearMove  (235 bytes)
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
  fVar4 = param_2 - *(float *)(iVar1 + 0xc);
  fVar5 = param_3 - *(float *)(iVar1 + 0x10);
  fVar3 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar5 * fVar5) / param_4;
  *(float *)(iVar1 + 0x104) = fVar3 + *(float *)(iVar1 + 0x100);
  fVar3 = 1.0 / fVar3;
  iVar1 = *(int *)(this + 4);
  *(code **)(this + 0x10) = LinearMoveDone;
  *(float *)(iVar1 + 0x20) = fVar3 * fVar2;
  *(float *)(iVar1 + 0x24) = fVar3 * fVar4;
  *(float *)(iVar1 + 0x28) = fVar3 * fVar5;
  return;
}

/* 100380c0  CBaseToggle::LinearMoveDone  (82 bytes)
 * void LinearMoveDone(void)
 * called by: CBaseToggle::LinearMove
 */
/* public: void __thiscall CBaseToggle::LinearMoveDone(void) */

void __thiscall CBaseToggle::LinearMoveDone(CBaseToggle *this)

{
  int iVar1;
  
                    /* 0x380c0  59  ?LinearMoveDone@CBaseToggle@@QAEXXZ */
  FUN_100679a0();
  iVar1 = *(int *)(this + 4);
  *(undefined4 *)(iVar1 + 0x20) = DAT_1009f4a8;
  *(undefined4 *)(iVar1 + 0x24) = DAT_1009f4ac;
  *(undefined4 *)(iVar1 + 0x28) = DAT_1009f4b0;
  *(undefined4 *)(*(int *)(this + 4) + 0x104) = 0xbf800000;
  if (*(code **)(this + 0xcc) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1003810e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0xcc))();
    return;
  }
  return;
}

/* 10038120  CBaseToggle::IsLockedByMaster  (55 bytes)
 * undefined4 IsLockedByMaster(int param_1)
 */
undefined4 __fastcall CBaseToggle::IsLockedByMaster(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xec) != 0) {
    uVar1 = FUN_1000c1d0((uint *)(param_1 + 0xc4));
    iVar2 = UTIL_IsMasterTriggered(*(int *)(param_1 + 0xec),uVar1);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

/* 10038160  CBaseToggle::AngularMove  (235 bytes)
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
  fVar4 = param_2 - *(float *)(iVar1 + 0x54);
  fVar5 = param_3 - *(float *)(iVar1 + 0x58);
  fVar3 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar5 * fVar5) / param_4;
  *(float *)(iVar1 + 0x104) = fVar3 + *(float *)(iVar1 + 0x100);
  fVar3 = 1.0 / fVar3;
  iVar1 = *(int *)(this + 4);
  *(code **)(this + 0x10) = AngularMoveDone;
  *(float *)(iVar1 + 0x5c) = fVar3 * fVar2;
  *(float *)(iVar1 + 0x60) = fVar3 * fVar4;
  *(float *)(iVar1 + 100) = fVar3 * fVar5;
  return;
}

/* 10038250  CBaseToggle::AngularMoveDone  (85 bytes)
 * void AngularMoveDone(void)
 * called by: CBaseToggle::AngularMove
 */
/* public: void __thiscall CBaseToggle::AngularMoveDone(void) */

void __thiscall CBaseToggle::AngularMoveDone(CBaseToggle *this)

{
  int iVar1;
  
                    /* 0x38250  2  ?AngularMoveDone@CBaseToggle@@QAEXXZ */
  iVar1 = *(int *)(this + 4);
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(this + 0xdc);
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(this + 0xe0);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(this + 0xe4);
  iVar1 = *(int *)(this + 4);
  *(undefined4 *)(iVar1 + 0x5c) = DAT_1009f4a8;
  *(undefined4 *)(iVar1 + 0x60) = DAT_1009f4ac;
  *(undefined4 *)(iVar1 + 100) = DAT_1009f4b0;
  *(undefined4 *)(*(int *)(this + 4) + 0x104) = 0xbf800000;
  if (*(code **)(this + 0xcc) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100382a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0xcc))();
    return;
  }
  return;
}

/* 100382e0  CBaseToggle::AxisDir  (133 bytes)
 * undefined AxisDir(int param_1)
 * called by: CFuncPlatRot::SetupRotation, CMomentaryRotButton::Spawn, CPendulum::Spawn, CRotButton::Spawn, CRotDoor::Spawn
 */
void __cdecl CBaseToggle::AxisDir(int param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(uint *)(param_1 + 0x1a0) & 0x40) == 0) {
    local_4 = 0;
    if ((char)*(uint *)(param_1 + 0x1a0) < '\0') {
      *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      return;
    }
    local_8 = 0x3f800000;
  }
  else {
    local_8 = 0;
    local_4 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = local_8;
  *(undefined4 *)(param_1 + 0x4c) = local_4;
  return;
}

/* 10038370  CBaseToggle::AxisDelta  (55 bytes)
 * float10 AxisDelta(byte.conflict param_1, float * param_2, float * param_3)
 * called by: CMomentaryRotButton::Return, CMomentaryRotButton::Use, CPendulum::PendulumUse, CPendulum::Swing
 */
float10 __cdecl CBaseToggle::AxisDelta(byte_conflict param_1,float *param_2,float *param_3)

{
  if ((param_1 & 0x40) != 0) {
    return (float10)param_2[2] - (float10)param_3[2];
  }
  if ((char)param_1 < '\0') {
    return (float10)*param_2 - (float10)*param_3;
  }
  return (float10)param_2[1] - (float10)param_3[1];
}

/* 10040a10  CBaseToggle::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CBaseToggle::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSTrigger_100980f8,(int)param_1,0x10097ff0,2);
  return;
}

/* 10040a40  CBaseToggle::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CBaseToggle::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CTSTrigger_100980f8,(int)param_1,0x10097ff0,2);
  return;
}

