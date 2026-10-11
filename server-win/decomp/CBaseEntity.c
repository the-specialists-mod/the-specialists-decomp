/* mp.dll - CBaseEntity (52 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001350  CBaseEntity::SUB_CallUseToggle  (15 bytes)
 * void SUB_CallUseToggle(void)
 */
/* public: void __thiscall CBaseEntity::SUB_CallUseToggle(void) */

void __thiscall CBaseEntity::SUB_CallUseToggle(CBaseEntity *this)

{
                    /* 0x1350  94  ?SUB_CallUseToggle@CBaseEntity@@QAEXXZ */
  (**(code **)(*(int *)this + 0xd8))(this,this,3,0);
  return;
}

/* 1000a8e0  CBaseEntity::GiveSlowMul  (17 bytes)
 * undefined GiveSlowMul()
 */
void __fastcall CBaseEntity::GiveSlowMul(int param_1)

{
  FixedSlowAmt(*(float *)(*(int *)(param_1 + 4) + 0x254));
  return;
}

/* 1000a900  CBaseEntity::GoSlow  (16 bytes)
 * undefined GoSlow()
 */
void __thiscall CBaseEntity::GoSlow(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x254) = param_2;
  return;
}

/* 1000a910  CBaseEntity::InSlow  (31 bytes)
 * undefined InSlow()
 */
undefined4 __fastcall CBaseEntity::InSlow(int param_1)

{
  if (*(float *)(*(int *)(param_1 + 4) + 0x254) != 1.0) {
    return 1;
  }
  return 0;
}

/* 1000a930  CBaseEntity::KeyValue  (14 bytes)
 * undefined KeyValue()
 */
void CBaseEntity::KeyValue(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 1000a940  CBaseEntity::ShouldCollide  (8 bytes)
 * undefined ShouldCollide()
 */
/* Identical-code folding: also CBaseEntity::IsTriggered, CBaseEntity::ShouldCollide */

undefined4 CBaseEntity::ShouldCollide(void)

{
  return 1;
}

/* 1000a950  CBaseEntity::BloodColor  (4 bytes)
 * undefined BloodColor()
 */
/* Identical-code folding: also CBaseEntity::BloodColor, CGunTarget::BloodColor */

undefined4 CBaseEntity::BloodColor(void)

{
  return 0xffffffff;
}

/* 1000a960  CBaseEntity::GiveAmmo  (6 bytes)
 * undefined GiveAmmo()
 */
undefined4 CBaseEntity::GiveAmmo(void)

{
  return 0xffffffff;
}

/* 1000a970  CBaseEntity::GetDelay  (7 bytes)
 * undefined GetDelay()
 */
float10 CBaseEntity::GetDelay(void)

{
  return (float10)0.0;
}

/* 1000a980  CBaseEntity::IsMoving  (80 bytes)
 * undefined IsMoving()
 */
undefined4 __fastcall CBaseEntity::IsMoving(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((*(float *)(iVar1 + 0x20) == DAT_100ae498) && (*(float *)(iVar1 + 0x24) == DAT_100ae49c)) &&
     (*(float *)(iVar1 + 0x28) == DAT_100ae4a0)) {
    return 0;
  }
  return 1;
}

/* 1000a9d0  CBaseEntity::IsAlive  (41 bytes)
 * undefined IsAlive()
 */
/* Identical-code folding: also CBaseEntity::IsAlive, CBasePlayer::IsAlive */

undefined4 __fastcall CBaseEntity::IsAlive(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 4) + 0x170) == 0) &&
     (0.0 < *(float *)(*(int *)(param_1 + 4) + 0x160))) {
    return 1;
  }
  return 0;
}

/* 1000aa00  CBaseEntity::IsBSPModel  (30 bytes)
 * undefined IsBSPModel()
 */
undefined4 __fastcall CBaseEntity::IsBSPModel(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 4) + 0x10c) != 4) &&
     (*(int *)(*(int *)(param_1 + 4) + 0x108) != 0xd)) {
    return 0;
  }
  return 1;
}

/* 1000aa20  CBaseEntity::ReflectGauss  (48 bytes)
 * undefined4 ReflectGauss(int * param_1)
 */
undefined4 __fastcall CBaseEntity::ReflectGauss(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xb0))();
  if ((iVar1 != 0) && (*(float *)(param_1[1] + 0x16c) == 0.0)) {
    return 1;
  }
  return 0;
}

/* 1000aa50  CBaseEntity::HasTarget  (102 bytes)
 * undefined HasTarget()
 */
bool __thiscall CBaseEntity::HasTarget(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar2 = (byte *)(gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1cc));
  pbVar3 = (byte *)(gpGlobals->pStringBase + param_2);
  while( true ) {
    bVar1 = *pbVar3;
    bVar4 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return true;
    }
    bVar1 = pbVar3[1];
    bVar4 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return true;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* 1000aac0  CBaseEntity::TeamID  (6 bytes)
 * undefined TeamID()
 */
undefined1 * CBaseEntity::TeamID(void)

{
  return &DAT_100a9398;
}

/* 1000aad0  CBaseEntity::Blocked  (17 bytes)
 * undefined Blocked()
 */
void __thiscall CBaseEntity::Blocked(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))(param_2);
  }
  return;
}

/* 1000abe0  CBaseEntity::Use  (32 bytes)
 * undefined Use()
 */
void __thiscall
CBaseEntity::Use(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_2,param_3,param_4,param_5);
  }
  return;
}

/* 1000ac00  CBaseEntity::Center  (104 bytes)
 * undefined Center(float * param_1)
 */
void __thiscall CBaseEntity::Center(CBaseEntity *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *(int *)(this + 4);
  fVar1 = *(float *)(iVar5 + 200);
  fVar2 = *(float *)(iVar5 + 0xd4);
  fVar3 = *(float *)(iVar5 + 0xcc);
  fVar4 = *(float *)(iVar5 + 0xd8);
  *param_1 = (*(float *)(iVar5 + 0xc4) + *(float *)(iVar5 + 0xd0)) * 0.5;
  param_1[2] = (fVar3 + fVar4) * 0.5;
  param_1[1] = (fVar1 + fVar2) * 0.5;
  return;
}

/* 1000ac70  CBaseEntity::EarPosition  (61 bytes)
 * undefined EarPosition()
 */
/* Identical-code folding: also CBaseEntity::EarPosition, CBaseEntity::EyePosition */

void __thiscall CBaseEntity::EarPosition(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  fVar1 = *(float *)(iVar5 + 0x178);
  fVar2 = *(float *)(iVar5 + 0xc);
  fVar3 = *(float *)(iVar5 + 0x17c);
  fVar4 = *(float *)(iVar5 + 0x10);
  *param_2 = *(float *)(iVar5 + 0x174) + *(float *)(iVar5 + 8);
  param_2[1] = fVar1 + fVar2;
  param_2[2] = fVar3 + fVar4;
  return;
}

/* 1000ad10  CBaseEntity::BodyTarget  (44 bytes)
 * undefined BodyTarget()
 */
undefined4 * __fastcall CBaseEntity::BodyTarget(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *unaff_retaddr;
  undefined1 auStack_c [12];
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xf0))(auStack_c);
  *unaff_retaddr = *puVar1;
  unaff_retaddr[1] = puVar1[1];
  unaff_retaddr[2] = puVar1[2];
  return unaff_retaddr;
}

/* 1000ad90  CBaseEntity::Illumination  (20 bytes)
 * undefined Illumination()
 */
void __fastcall CBaseEntity::Illumination(int param_1)

{
  (*g_engfuncs.pfnGetEntityIllum)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  return;
}

/* 1000d8c0  CBaseEntity::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
/* Identical-code folding: also CBaseEntity::ObjectCaps, CTSGun::iItemSlot */

undefined4 CBaseEntity::ObjectCaps(void)

{
  return 2;
}

/* 1000e460  CBaseEntity::TakeHealth  (109 bytes)
 * undefined4 TakeHealth(float param_1)
 * called by: CBaseMonster::TakeHealth
 */
undefined4 __thiscall CBaseEntity::TakeHealth(CBaseEntity *this,float param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 4);
  if (*(float *)(iVar1 + 0x16c) == 0.0) {
    return 0;
  }
  if (*(float *)(iVar1 + 0x1b0) <= *(float *)(iVar1 + 0x160)) {
    return 0;
  }
  *(float *)(iVar1 + 0x160) = param_1 + *(float *)(iVar1 + 0x160);
  iVar1 = *(int *)(this + 4);
  if (*(float *)(iVar1 + 0x1b0) < *(float *)(iVar1 + 0x160)) {
    *(undefined4 *)(iVar1 + 0x160) = *(undefined4 *)(iVar1 + 0x1b0);
  }
  return 1;
}

/* 1000e4d0  CBaseEntity::TakeDamage  (934 bytes)
 * undefined TakeDamage()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall CBaseEntity::TakeDamage(int *param_1,int param_2,float param_3,float param_4)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int iVar4;
  Vector *pVVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Vector VStack_54;
  Vector VStack_48;
  Vector VStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  Vector VStack_24;
  Vector VStack_18;
  Vector VStack_c;
  
  iVar1 = (int)param_3;
  iVar4 = param_1[1];
  if (*(float *)(iVar4 + 0x16c) == 0.0) {
    return 0;
  }
  if (param_3 == (float)param_2) {
    pfVar2 = (float *)VecBModelOrigin(&VStack_c.x,iVar4);
    VStack_48.x = *(float *)(param_2 + 8) - *pfVar2;
    VStack_48.y = *(float *)(param_2 + 0xc) - pfVar2[1];
    VStack_48.z = *(float *)(param_2 + 0x10) - pfVar2[2];
    Vector::Vector(&VStack_3c,&VStack_48.x);
    VStack_54.x = VStack_3c.x;
    VStack_54.y = VStack_3c.y;
    VStack_54.z = VStack_3c.z;
  }
  else {
    pfVar2 = (float *)VecBModelOrigin(&VStack_c.x,iVar4);
    VStack_3c.x = *(float *)(param_2 + 8) - *pfVar2;
    VStack_3c.y = *(float *)(param_2 + 0xc) - pfVar2[1];
    VStack_3c.z = *(float *)(param_2 + 0x10) - pfVar2[2];
    Vector::Vector(&VStack_48,&VStack_3c.x);
    VStack_54.x = VStack_48.x;
    VStack_54.y = VStack_48.y;
    VStack_54.z = VStack_48.z;
  }
  fVar7 = SQRT(VStack_54.x * VStack_54.x + VStack_54.z * VStack_54.z + VStack_54.y * VStack_54.y);
  if (fVar7 == 0.0) {
    fVar9 = 1.0;
    fVar8 = 0.0;
    fVar7 = 0.0;
    pVVar5 = &VStack_c;
  }
  else {
    fVar7 = 1.0 / fVar7;
    fVar9 = VStack_54.z * fVar7;
    fVar8 = VStack_54.y * fVar7;
    fVar7 = VStack_54.x * fVar7;
    pVVar5 = &VStack_18;
  }
  puVar3 = (undefined4 *)Vector::Vector(pVVar5,fVar7,fVar8,fVar9);
  Vector::Vector(&VStack_54,puVar3);
  _DAT_100ae4b8 = VStack_54.x;
  _DAT_100ae4bc = VStack_54.y;
  _DAT_100ae4c0 = VStack_54.z;
  if (param_2 != 0) {
    iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(param_2 + 0x208));
    if ((iVar4 != 0) &&
       (((*(int *)(param_1[1] + 0x108) == 3 || (*(int *)(param_1[1] + 0x108) == 4)) &&
        (*(int *)((int)param_3 + 0x10c) != 1)))) {
      VStack_3c.x = *(float *)(param_2 + 0xc4) + *(float *)(param_2 + 0xd0);
      VStack_3c.y = *(float *)(param_2 + 0xd4) + *(float *)(param_2 + 200);
      VStack_3c.z = *(float *)(param_2 + 0xd8) + *(float *)(param_2 + 0xcc);
      Vector::Vector(&VStack_48,&VStack_3c.x);
      fStack_30 = VStack_48.x * 0.5;
      fStack_2c = VStack_48.y * 0.5;
      fStack_28 = VStack_48.z * 0.5;
      Vector::Vector(&VStack_24,&fStack_30);
      iVar4 = param_1[1];
      VStack_18.x = *(float *)(iVar4 + 8) - VStack_24.x;
      VStack_18.y = *(float *)(iVar4 + 0xc) - VStack_24.y;
      VStack_18.z = *(float *)(iVar4 + 0x10) - VStack_24.z;
      Vector::Vector(&VStack_c,&VStack_18.x);
      VStack_54.z = VStack_c.z;
      VStack_54.x = VStack_c.x;
      VStack_54.y = VStack_c.y;
      fVar6 = Vector::Length(&VStack_54.x);
      if (fVar6 == (float10)0.0) {
        fVar7 = 1.0;
        fVar9 = 0.0;
        fVar8 = 0.0;
        pVVar5 = &VStack_c;
      }
      else {
        fVar6 = (float10)1.0 / fVar6;
        fVar7 = (float)((float10)VStack_54.z * fVar6);
        fVar9 = (float)((float10)VStack_54.y * fVar6);
        pVVar5 = &VStack_18;
        fVar8 = (float)(fVar6 * (float10)VStack_54.x);
      }
      puVar3 = (undefined4 *)Vector::Vector(pVVar5,fVar8,fVar9,fVar7);
      Vector::Vector(&VStack_48,puVar3);
      VStack_54.y = VStack_48.y;
      iVar4 = param_1[1];
      VStack_54.x = VStack_48.x;
      VStack_54.z = VStack_48.z;
      param_3 = (73728.0 /
                (*(float *)(iVar4 + 0xfc) * *(float *)(iVar4 + 0xf8) * *(float *)(iVar4 + 0xf4))) *
                param_4 * 5.0;
      if (1000.0 < param_3) {
        param_3 = 1000.0;
      }
      pfVar2 = (float *)Vector::operator*(&VStack_54,&VStack_c.x,param_3);
      puVar3 = (undefined4 *)Vector::operator+((Vector *)(param_1[1] + 0x20),&VStack_18.x,pfVar2);
      iVar4 = param_1[1];
      *(undefined4 *)(iVar4 + 0x20) = *puVar3;
      *(undefined4 *)(iVar4 + 0x24) = puVar3[1];
      *(undefined4 *)(iVar4 + 0x28) = puVar3[2];
    }
  }
  *(float *)(param_1[1] + 0x160) = *(float *)(param_1[1] + 0x160) - param_4;
  if (*(float *)(param_1[1] + 0x160) <= 0.0) {
    (**(code **)(*param_1 + 0x58))(iVar1,0);
    return 0;
  }
  return 1;
}

/* 1000e950  CBaseEntity::Killed  (36 bytes)
 * undefined Killed()
 */
void __fastcall CBaseEntity::Killed(int *param_1)

{
  *(undefined4 *)(param_1[1] + 0x16c) = 0;
  *(undefined4 *)(param_1[1] + 0x170) = 2;
  UTIL_Remove(param_1);
  return;
}

/* 1000e980  CBaseEntity::GetNextTarget  (78 bytes)
 * undefined GetNextTarget()
 */
void * __fastcall CBaseEntity::GetNextTarget(int param_1)

{
  edict_t *pEdict;
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1c8);
  if (iVar1 == 0) {
    return (void *)0x0;
  }
  pEdict = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,s_targetname_1009c68c,gpGlobals->pStringBase + iVar1);
  if (pEdict != (edict_t *)0x0) {
    iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
    if (iVar1 != 0) {
      return pEdict->pvPrivateData;
    }
  }
  return (void *)0x0;
}

/* 1000e9d0  CBaseEntity::Save  (60 bytes)
 * undefined4 Save(void * param_1)
 * called by: CAmbientGeneric::Save, CBaseDelay::Save, CBreakable::Save, CBubbling::Save, CCyclerSprite::Save, CEnvGlobal::Save, CEnvSound::Save, CEnvSpark::Save, CFrictionModifier::Save, CFuncRotating::Save, CFuncTank::Save, CFuncTankControls::Save, ... (35 total)
 */
undefined4 __thiscall CBaseEntity::Save(CBaseEntity *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CSave::WriteEntVars(param_1,(byte_conflict *)s_ENTVARS_1009c968,*(int *)(this + 4));
  if (iVar1 != 0) {
    uVar2 = CSave::WriteFields(param_1,&DAT_1009c970,(int)this,0x1009c7c0,5);
    return uVar2;
  }
  return 0;
}

/* 1000ea10  CBaseEntity::Restore  (238 bytes)
 * undefined4 Restore(void * param_1)
 * called by: CAmbientGeneric::Restore, CBaseDelay::Restore, CBreakable::Restore, CBubbling::Restore, CCyclerSprite::Restore, CEnvGlobal::Restore, CEnvSound::Restore, CEnvSpark::Restore, CFrictionModifier::Restore, CFuncRotating::Restore, CFuncTank::Restore, CFuncTankControls::Restore, ... (35 total)
 */
undefined4 __thiscall CBaseEntity::Restore(CBaseEntity *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = CRestore::ReadEntVars(param_1,(byte_conflict *)s_ENTVARS_1009c968,*(int *)(this + 4));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = CRestore::ReadFields(param_1,&DAT_1009c970,(int)this,&DAT_1009c7c0,5);
  }
  iVar1 = *(int *)(this + 4);
  if ((*(int *)(iVar1 + 0xb4) != 0) && (*(int *)(iVar1 + 0xb8) != 0)) {
    local_c = *(undefined4 *)(iVar1 + 0xdc);
    local_8 = *(undefined4 *)(iVar1 + 0xe0);
    local_4 = *(undefined4 *)(iVar1 + 0xe4);
    local_18 = *(undefined4 *)(iVar1 + 0xe8);
    local_14 = *(undefined4 *)(iVar1 + 0xec);
    local_10 = *(undefined4 *)(iVar1 + 0xf0);
    (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + *(int *)(iVar1 + 0xb8));
    (*g_engfuncs.pfnSetModel)
              (*(edict_t **)(*(int *)(this + 4) + 0x208),
               gpGlobals->pStringBase + *(int *)(*(int *)(this + 4) + 0xb8));
    UTIL_SetSize(*(int *)(this + 4),&local_c,&local_18);
  }
  return uVar2;
}

/* 1000ecd0  CBaseEntity::SetObjectCollisionBox  (11 bytes)
 * undefined SetObjectCollisionBox()
 */
void __fastcall CBaseEntity::SetObjectCollisionBox(int param_1)

{
  ::SetObjectCollisionBox(*(int *)(param_1 + 4));
  return;
}

/* 1000ede0  CBaseEntity::IsInWorld  (237 bytes)
 * undefined IsInWorld()
 */
undefined4 __fastcall CBaseEntity::IsInWorld(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (4096.0 <= *(float *)(iVar1 + 8)) {
    return 0;
  }
  if (4096.0 <= *(float *)(iVar1 + 0xc)) {
    return 0;
  }
  if (4096.0 <= *(float *)(iVar1 + 0x10)) {
    return 0;
  }
  if (*(float *)(iVar1 + 8) <= -4096.0) {
    return 0;
  }
  if (*(float *)(iVar1 + 0xc) <= -4096.0) {
    return 0;
  }
  if (*(float *)(iVar1 + 0x10) <= -4096.0) {
    return 0;
  }
  if (2000.0 <= *(float *)(iVar1 + 0x20)) {
    return 0;
  }
  if (2000.0 <= *(float *)(iVar1 + 0x24)) {
    return 0;
  }
  if (2000.0 <= *(float *)(iVar1 + 0x28)) {
    return 0;
  }
  if (*(float *)(iVar1 + 0x20) <= -2000.0) {
    return 0;
  }
  if (*(float *)(iVar1 + 0x24) <= -2000.0) {
    return 0;
  }
  if (*(float *)(iVar1 + 0x28) <= -2000.0) {
    return 0;
  }
  return 1;
}

/* 1000eed0  CBaseEntity::ShouldToggle  (44 bytes)
 * undefined4 ShouldToggle(int param_1, int param_2)
 * called by: CBubbling::Use, CButtonTarget::Use, CFuncPlat::PlatUse, CFuncTank::Use, CFuncTrackAuto::Use, CFuncTrackTrain::Use, CFuncWall::Use, CFuncWallToggle::Use, CGunTarget::Use, CLaser::Use, CLight::Use, CLightning::StrikeUse, ... (16 total)
 */
undefined4 CBaseEntity::ShouldToggle(int param_1,int param_2)

{
  if ((param_1 != 3) && (param_1 != 2)) {
    if (param_2 == 0) {
      if (param_1 == 0) {
        return 0;
      }
    }
    else if (param_1 == 1) {
      return 0;
    }
  }
  return 1;
}

/* 1000ef00  CBaseEntity::DamageDecal  (48 bytes)
 * undefined4 DamageDecal(int param_1)
 * called by: CBreakable::DamageDecal
 */
undefined4 __fastcall CBaseEntity::DamageDecal(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x148);
  if (iVar1 == 4) {
    return 0xffffffff;
  }
  if (iVar1 != 0) {
    return 0x23;
  }
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,4);
  return iVar1;
}

/* 1000ef30  CBaseEntity::Create  (157 bytes)
 * int Create(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 param_4)
 * called by: CBaseDoor::Spawn, CBasePlayer::CheatImpulseCommands, CBasePlayerItem::Respawn, CBreakable::Die, CBreakable::Spawn, CEnvBeverage::Use, CEnvExplosion::Use, CFuncTankRocket::Fire, CRotDoor::Spawn, CWorld::Precache, CWorldItem::Spawn, FUN_1001e460, ... (13 total)
 */
int __cdecl
CBaseEntity::Create(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  void *pvVar1;
  edict_t *pEdict;
  int iVar2;
  undefined4 *in_stack_00000014;
  undefined4 in_stack_00000018;
  
  pEdict = (*g_engfuncs.pfnCreateNamedEntity)(param_1 - (int)gpGlobals->pStringBase);
  if (pEdict != (edict_t *)0x0) {
    iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
    if (iVar2 != 0) {
      pvVar1 = pEdict->pvPrivateData;
      *(undefined4 *)(*(int *)((int)pvVar1 + 4) + 0x198) = in_stack_00000018;
      iVar2 = *(int *)((int)pvVar1 + 4);
      *(undefined4 *)(iVar2 + 8) = *param_4;
      *(undefined4 *)(iVar2 + 0xc) = param_4[1];
      *(undefined4 *)(iVar2 + 0x10) = param_4[2];
      iVar2 = *(int *)((int)pvVar1 + 4);
      *(undefined4 *)(iVar2 + 0x50) = *in_stack_00000014;
      *(undefined4 *)(iVar2 + 0x54) = in_stack_00000014[1];
      *(undefined4 *)(iVar2 + 0x58) = in_stack_00000014[2];
      pfnSpawn(*(edict_t **)(*(int *)((int)pvVar1 + 4) + 0x208));
      return (int)pvVar1;
    }
  }
  (*g_engfuncs.pfnAlertMessage)(at_console,s_NULL_Ent_in_Create__1009c978);
  return 0;
}

/* 10013820  CBaseEntity::SUB_StartFadeOut  (111 bytes)
 * void SUB_StartFadeOut(void)
 * called by: CBaseMonster::FadeMonster
 */
/* public: void __thiscall CBaseEntity::SUB_StartFadeOut(void) */

void __thiscall CBaseEntity::SUB_StartFadeOut(CBaseEntity *this)

{
  int iVar1;
  
                    /* 0x13820  98  ?SUB_StartFadeOut@CBaseEntity@@QAEXXZ */
  if (*(int *)(*(int *)(this + 4) + 0x148) == 0) {
    *(undefined4 *)(*(int *)(this + 4) + 0x14c) = 0x437f0000;
    *(undefined4 *)(*(int *)(this + 4) + 0x148) = 2;
  }
  *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 0;
  iVar1 = *(int *)(this + 4);
  *(undefined4 *)(iVar1 + 0x5c) = DAT_100ae498;
  *(undefined4 *)(iVar1 + 0x60) = DAT_100ae49c;
  *(undefined4 *)(iVar1 + 100) = DAT_100ae4a0;
  *(float *)(*(int *)(this + 4) + 0x104) = gpGlobals->time + 0.1;
  *(code **)(this + 0x10) = SUB_FadeOut;
  return;
}

/* 10013890  CBaseEntity::SUB_FadeOut  (104 bytes)
 * void SUB_FadeOut(void)
 */
/* public: void __thiscall CBaseEntity::SUB_FadeOut(void) */

void __thiscall CBaseEntity::SUB_FadeOut(CBaseEntity *this)

{
  int iVar1;
  
                    /* 0x13890  96  ?SUB_FadeOut@CBaseEntity@@QAEXXZ */
  iVar1 = *(int *)(this + 4);
  if (7.0 < *(float *)(iVar1 + 0x14c)) {
    *(float *)(iVar1 + 0x14c) = *(float *)(iVar1 + 0x14c) - 7.0;
    *(float *)(*(int *)(this + 4) + 0x104) = gpGlobals->time + 0.1;
    return;
  }
  *(undefined4 *)(iVar1 + 0x14c) = 0;
  *(float *)(*(int *)(this + 4) + 0x104) = gpGlobals->time + 0.2;
  *(code **)(this + 0x10) = SUB_Remove;
  return;
}

/* 10014b90  CBaseEntity::FVisible  (274 bytes)
 * undefined FVisible()
 */
undefined4 __thiscall CBaseEntity::FVisible(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float afStack_3c [4];
  float fStack_2c;
  
  iVar1 = param_2[1];
  if ((*(byte *)(iVar1 + 0x1a4) & 0x80) != 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(iVar2 + 0x1c0) != 3) {
    if (*(int *)(iVar1 + 0x1c0) == 3) {
      return 0;
    }
    if (*(int *)(iVar2 + 0x1c0) != 3) goto LAB_10014be5;
  }
  if (*(int *)(iVar1 + 0x1c0) == 0) {
    return 0;
  }
LAB_10014be5:
  fStack_5c = *(float *)(iVar2 + 0x174) + *(float *)(iVar2 + 8);
  fStack_58 = *(float *)(iVar2 + 0x178) + *(float *)(iVar2 + 0xc);
  fStack_54 = *(float *)(iVar2 + 0x17c) + *(float *)(iVar2 + 0x10);
  fStack_4c = fStack_58;
  fStack_48 = fStack_54;
  fStack_44 = fStack_5c;
  fStack_40 = fStack_58;
  afStack_3c[0] = fStack_54;
  pfVar3 = (float *)(**(code **)(*param_2 + 0xf4))(&fStack_5c);
  fStack_54 = *pfVar3;
  fStack_50 = pfVar3[1];
  fStack_4c = pfVar3[2];
  FUN_10076f70(&fStack_48,&fStack_54,1,1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),afStack_3c);
  if (fStack_2c == 1.0) {
    return 1;
  }
  return 0;
}

/* 10014cb0  CBaseEntity::FVisible  (115 bytes)
 * undefined FVisible()
 */
undefined4 __fastcall CBaseEntity::FVisible(int *param_1)

{
  undefined4 unaff_retaddr;
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [16];
  float fStack_2c;
  
  (**(code **)(*param_1 + 0xf4))(auStack_44);
  FUN_10076f70(&stack0xffffffac,unaff_retaddr,1,1,*(undefined4 *)(param_1[1] + 0x208),auStack_3c);
  if (fStack_2c != 1.0) {
    return 0;
  }
  return 1;
}

/* 10014d30  CBaseEntity::TraceAttack  (222 bytes)
 * undefined TraceAttack(undefined4 param_1, float param_2, float param_3, float param_4, float param_5, int param_6, uint param_7)
 * called by: CBreakable::TraceAttack
 */
void __thiscall
CBaseEntity::TraceAttack
          (CBaseEntity *this,undefined4 param_1,float param_2,float param_3,float param_4,
          float param_5,int param_6,uint param_7)

{
  int iVar1;
  float fStack_3c;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  local_18 = *(float *)(param_6 + 0x14) - param_3 * 4.0;
  local_14 = *(float *)(param_6 + 0x18) - param_4 * 4.0;
  local_10 = *(float *)(param_6 + 0x1c) - param_5 * 4.0;
  if (*(float *)(*(int *)(this + 4) + 0x16c) != 0.0) {
    fStack_3c = 2.5500646e-29;
    local_8 = local_14;
    local_4 = local_10;
    FUN_100796f0(param_1,(int)this,param_2,param_7);
    iVar1 = (**(code **)(*(int *)this + 0x5c))();
    if (iVar1 != -1) {
      Vector::Vector((Vector *)&fStack_3c,&local_18);
      FUN_10079750();
      param_6 = *(int *)this;
      Vector::Vector((Vector *)&fStack_3c,&param_3);
      (**(code **)(param_6 + 0x60))(param_2);
    }
  }
  return;
}

/* 10015770  CBaseEntity::TraceBleed  (505 bytes)
 * undefined TraceBleed()
 */
void __thiscall
CBaseEntity::TraceBleed
          (int *param_1,float param_2,float param_3,float param_4,float param_5,int param_6,
          uint param_7)

{
  float10 fVar1;
  float flLow;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float fStack_8c;
  int iStack_88;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  
  iVar2 = (**(code **)(*param_1 + 0x5c))();
  if (((iVar2 != -1) && (param_2 != 0.0)) && ((param_7 & 0x8000c7) != 0)) {
    if (10.0 <= param_2) {
      if (25.0 <= param_2) {
        fStack_8c = 0.3;
        iStack_88 = 4;
      }
      else {
        fStack_8c = 0.2;
        iStack_88 = 2;
      }
    }
    else {
      fStack_8c = 0.1;
      iStack_88 = 1;
    }
    if (iStack_88 != 0) {
      fStack_44 = param_3 * -1.0;
      flLow = -fStack_8c;
      fStack_3c = param_5 * -1.0;
      do {
        fVar3 = (float10)(*g_engfuncs.pfnRandomFloat)(flLow,fStack_8c);
        fVar1 = (float10)fStack_44;
        fVar4 = (float10)(*g_engfuncs.pfnRandomFloat)(flLow,fStack_8c);
        fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(flLow,fStack_8c);
        fStack_50 = (float)(fVar3 + fVar1) * -172.0 + *(float *)(param_6 + 0x14);
        fStack_4c = (float)(fVar4 + (float10)(param_4 * -1.0)) * -172.0 + *(float *)(param_6 + 0x18)
        ;
        fStack_48 = (float)((fVar5 + (float10)(param_5 * -1.0)) * (float10)-172.0 +
                           (float10)*(float *)(param_6 + 0x1c));
        UTIL_TraceLine((float *)(param_6 + 0x14),&fStack_50,1,*(undefined4 *)(param_1[1] + 0x208),
                       auStack_38);
        if (fStack_28 != 1.0) {
          iVar2 = (**(code **)(*param_1 + 0x5c))();
          FUN_10077580((int)auStack_38,iVar2);
        }
        iStack_88 = iStack_88 + -1;
      } while (iStack_88 != 0);
    }
  }
  return;
}

/* 10027c70  CBaseEntity::MyMonsterPointer  (3 bytes)
 * undefined MyMonsterPointer()
 */
/* Identical-code folding: also CActAnimating::ObjectCaps, CAmbientGeneric::ObjectCaps,
   CAutoTrigger::ObjectCaps, CBaseEntity::Classify, CBaseEntity::FBecomeProne,
   CBaseEntity::GetToggleState, CBaseEntity::IsNetClient, CBaseEntity::IsPlayer,
   CBaseEntity::IsSneaking, CBaseEntity::MyMonsterPointer, CBaseEntity::MySquadMonsterPointer,
   CBaseEntity::Respawn, CBasePlatTrain::ObjectCaps, CBasePlayer::ObjectCaps,
   CBasePlayer::ShouldFadeOnDeath, CBasePlayerWeapon::ShouldWeaponIdle,
   CBasePlayerWeapon::UseDecrement, CBaseTrigger::ObjectCaps, CBreakable::ObjectCaps,
   CBubbling::ObjectCaps, CCycler::IsAlive, CFrictionModifier::ObjectCaps,
   CFuncIllusionary::ObjectCaps, CFuncRotating::ObjectCaps, CFuncTank::ObjectCaps,
   CFuncTrainControls::ObjectCaps, CFuncWall::ObjectCaps, CGunTarget::ObjectCaps,
   CMomentaryDoor::ObjectCaps, CMultiManager::ObjectCaps, CPendulum::ObjectCaps,
   CPointEntity::ObjectCaps, CSpeaker::ObjectCaps, CTSDMHill::ObjectCaps, CTSSlowMotion::ObjectCaps,
   CTSTrigger::ObjectCaps, CTriggerCamera::ObjectCaps, CTriggerChangeTarget::ObjectCaps,
   CTriggerRelay::ObjectCaps */

undefined4 CBaseEntity::MyMonsterPointer(void)

{
  return 0;
}

/* 10027e10  CBaseEntity::OnFreeEntPrivateData  (1 bytes)
 * undefined OnFreeEntPrivateData()
 */
/* Identical-code folding: also CBaseEntity::Activate, CBaseEntity::OnFreeEntPrivateData,
   CBaseEntity::OverrideReset, CBaseEntity::Precache, CBaseEntity::Spawn,
   CBaseEntity::StartSneaking, CBaseEntity::StopSneaking, CBaseEntity::UpdateOwner,
   CBaseMonster::PainSound, CBasePlayerItem::ItemPreFrame, CBasePlayerWeapon::AlternateAttack,
   CBasePlayerWeapon::Reload, CBasePlayerWeapon::UpdateItemInfo, CBasePlayerWeapon::WeaponIdle */

void CBaseEntity::OnFreeEntPrivateData(void)

{
  return;
}

/* 10027e40  CBaseEntity::AddPlayerItem  (5 bytes)
 * undefined AddPlayerItem()
 */
/* Identical-code folding: also CBaseEntity::AddPlayerItem, CBaseEntity::OnControls,
   CBaseEntity::RemovePlayerItem, CWeaponCycler::GetItemInfo */

undefined4 CBaseEntity::AddPlayerItem(void)

{
  return 0;
}

/* 10028ae0  CBaseEntity::IsObjective  (3 bytes)
 * undefined IsObjective()
 */
/* Identical-code folding: also CBaseEntity::IsObjective, CTSFlag::CanUsedTroughWalls,
   CTSGroundAmmo::CanUsedTroughWalls, CTSGroundWeapon::CanUsedTroughWalls,
   CTSWorldGun::CanUsedTroughWalls */

undefined1 CBaseEntity::IsObjective(void)

{
  return 0;
}

/* 1003ad30  CBaseEntity::DeathNotice  (3 bytes)
 * undefined DeathNotice()
 */
/* Identical-code folding: also CBaseAnimating::HandleAnimEvent, CBaseEntity::BreakableRespawn,
   CBaseEntity::DeathNotice, CBaseEntity::EnableObjective, CBaseEntity::SetToggleState */

void CBaseEntity::DeathNotice(void)

{
  return;
}

/* 1003ad50  CBaseEntity::AddPoints  (3 bytes)
 * undefined AddPoints()
 */
/* Identical-code folding: also CBaseEntity::AddPoints, CBaseEntity::AddPointsToTeam */

void CBaseEntity::AddPoints(void)

{
  return;
}

/* 1003e260  CBaseEntity::Think  (10 bytes)
 * undefined Think()
 */
void __fastcall CBaseEntity::Think(int param_1)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1003e267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))();
    return;
  }
  return;
}

/* 1003e270  CBaseEntity::Touch  (17 bytes)
 * undefined Touch()
 */
void __thiscall CBaseEntity::Touch(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))(param_2);
  }
  return;
}

/* 1003e290  CBaseEntity::UpdateOnRemove  (95 bytes)
 * undefined UpdateOnRemove()
 */
void __fastcall CBaseEntity::UpdateOnRemove(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x10000) != 0) &&
     (iVar1 = 0, iVar2 = DAT_100ae74c, 0 < DAT_100ae748)) {
    do {
      if (*(int *)(iVar2 + iVar1 * 4) == *(int *)(param_1 + 4)) {
        *(undefined4 *)(iVar2 + iVar1 * 4) = 0;
        iVar2 = DAT_100ae74c;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_100ae748);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar2 != 0) {
    FUN_1007b1a0(&DAT_102ef3b0,iVar2,2);
  }
  return;
}

/* 1003e2f0  CBaseEntity::SUB_Remove  (80 bytes)
 * void SUB_Remove(void)
 * called by: CBreakable::BreakableRespawn, CBreakable::Die, CDecal::StaticDecal
 */
/* public: void __thiscall CBaseEntity::SUB_Remove(void) */

void __thiscall CBaseEntity::SUB_Remove(CBaseEntity *this)

{
                    /* 0x3e2f0  97  ?SUB_Remove@CBaseEntity@@QAEXXZ */
  (**(code **)(*(int *)this + 0xe0))();
  if (0.0 < *(float *)(*(int *)(this + 4) + 0x160)) {
    *(undefined4 *)(*(int *)(this + 4) + 0x160) = 0;
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_SUB_Remove_called_on_entity_with_100a26a8);
  }
  (*g_engfuncs.pfnRemoveEntity)(*(edict_t **)(*(int *)(this + 4) + 0x208));
  return;
}

/* 1003e460  CBaseEntity::SUB_UseTargets  (55 bytes)
 * undefined SUB_UseTargets(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: CButtonTarget::Use, CFade::Use, CFuncTank::Fire, CGameCounter::Use, CGameCounterSet::Use, CGamePlayerHurt::Use, CGameTeamMaster::Use, CGameTeamSet::Use, CItem::ItemTouch, CMessage::Use, CMultiSource::Use
 */
void __thiscall
CBaseEntity::SUB_UseTargets
          (CBaseEntity *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(*(int *)(this + 4) + 0x1c8) != 0) {
    FireTargets((int)(gpGlobals->pStringBase + *(int *)(*(int *)(this + 4) + 0x1c8)),param_1,this,
                param_2,param_3);
  }
  return;
}

/* 100431f0  CBaseEntity::SUB_DoNothing  (1 bytes)
 * void SUB_DoNothing(void)
 * called by: CBaseEntity::SUB_DoNothing, CBasePlayer::Restore, CChangeLevel::ChangeList, CWorld::Precache, FUN_10064e60, FUN_10064ef0, FUN_10064f40, pfnRestore, pfnRestoreGlobalState, pfnSave, pfnSaveGlobalState, pfnSaveReadFields, ... (14 total)
 */
/* public: void __thiscall CBaseEntity::SUB_DoNothing(void) */

void __thiscall CBaseEntity::SUB_DoNothing(CBaseEntity *this)

{
                    /* 0x431f0  95  ?SUB_DoNothing@CBaseEntity@@QAEXXZ */
  return;
}

/* 1005dc50  CBaseEntity::CanUsedTroughWalls  (3 bytes)
 * undefined CanUsedTroughWalls()
 */
/* Identical-code folding: also CBaseEntity::CanUsedTroughWalls, CTSObjective::IsObjective,
   CTSWinGiver::IsObjective */

undefined1 CBaseEntity::CanUsedTroughWalls(void)

{
  return 1;
}

