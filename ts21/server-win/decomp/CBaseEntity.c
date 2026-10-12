/* mp.dll - CBaseEntity (69 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001270  CBaseEntity::SUB_CallUseToggle  (15 bytes)
 * void SUB_CallUseToggle(void)
 */
/* public: void __thiscall CBaseEntity::SUB_CallUseToggle(void) */

void __thiscall CBaseEntity::SUB_CallUseToggle(CBaseEntity *this)

{
                    /* 0x1270  88  ?SUB_CallUseToggle@CBaseEntity@@QAEXXZ */
  (**(code **)(*(int *)this + 0xc0))(this,this,3,0);
  return;
}

/* 10008b10  CBaseEntity::BreakableRespawn  (3 bytes)
 * undefined BreakableRespawn()
 */
void CBaseEntity::BreakableRespawn(void)

{
  return;
}

/* 10008b20  CBaseEntity::CanUsedTroughWalls  (3 bytes)
 * undefined CanUsedTroughWalls()
 */
undefined1 CBaseEntity::CanUsedTroughWalls(void)

{
  return 1;
}

/* 10008b50  CBaseEntity::Precache  (1 bytes)
 * undefined Precache()
 */
void CBaseEntity::Precache(void)

{
  return;
}

/* 10008b60  CBaseEntity::KeyValue  (14 bytes)
 * undefined KeyValue()
 */
/* Identical-code folding: also CBaseEntity::KeyValue, CTSPowerUp::KeyValue */

void CBaseEntity::KeyValue(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10008b70  CBaseEntity::Activate  (1 bytes)
 * undefined Activate()
 */
void CBaseEntity::Activate(void)

{
  return;
}

/* 10008b80  CBaseEntity::Classify  (3 bytes)
 * undefined Classify()
 */
undefined4 CBaseEntity::Classify(void)

{
  return 0;
}

/* 10008b90  CBaseEntity::DeathNotice  (3 bytes)
 * undefined DeathNotice()
 */
void CBaseEntity::DeathNotice(void)

{
  return;
}

/* 10008ba0  CBaseEntity::BloodColor  (4 bytes)
 * undefined BloodColor()
 */
undefined4 CBaseEntity::BloodColor(void)

{
  return 0xffffffff;
}

/* 10008bb0  CBaseEntity::IsTriggered  (8 bytes)
 * undefined IsTriggered()
 */
undefined4 CBaseEntity::IsTriggered(void)

{
  return 1;
}

/* 10008bc0  CBaseEntity::MyMonsterPointer  (3 bytes)
 * undefined MyMonsterPointer()
 */
undefined4 CBaseEntity::MyMonsterPointer(void)

{
  return 0;
}

/* 10008bd0  CBaseEntity::MySquadMonsterPointer  (3 bytes)
 * undefined MySquadMonsterPointer()
 */
undefined4 CBaseEntity::MySquadMonsterPointer(void)

{
  return 0;
}

/* 10008be0  CBaseEntity::GetToggleState  (3 bytes)
 * undefined GetToggleState()
 */
/* Identical-code folding: also CBaseEntity::GetToggleState, CBaseToggle::GetToggleState */

undefined4 CBaseEntity::GetToggleState(void)

{
  return 0;
}

/* 10008bf0  CBaseEntity::AddPoints  (3 bytes)
 * undefined AddPoints()
 */
void CBaseEntity::AddPoints(void)

{
  return;
}

/* 10008c00  CBaseEntity::AddPointsToTeam  (3 bytes)
 * undefined AddPointsToTeam()
 */
void CBaseEntity::AddPointsToTeam(void)

{
  return;
}

/* 10008c10  CBaseEntity::AddPlayerItem  (5 bytes)
 * undefined AddPlayerItem()
 */
undefined4 CBaseEntity::AddPlayerItem(void)

{
  return 0;
}

/* 10008c20  CBaseEntity::RemovePlayerItem  (5 bytes)
 * undefined RemovePlayerItem()
 */
undefined4 CBaseEntity::RemovePlayerItem(void)

{
  return 0;
}

/* 10008c30  CBaseEntity::GiveAmmo  (6 bytes)
 * undefined GiveAmmo()
 */
undefined4 CBaseEntity::GiveAmmo(void)

{
  return 0xffffffff;
}

/* 10008c40  CBaseEntity::GetDelay  (7 bytes)
 * undefined GetDelay()
 */
/* Identical-code folding: also CBaseEntity::GetDelay, CBaseToggle::GetDelay */

float10 CBaseEntity::GetDelay(void)

{
  return (float10)0.0;
}

/* 10008c50  CBaseEntity::IsMoving  (80 bytes)
 * undefined IsMoving()
 */
undefined4 __fastcall CBaseEntity::IsMoving(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((*(float *)(iVar1 + 0x20) == DAT_1009f4a8) && (*(float *)(iVar1 + 0x24) == DAT_1009f4ac)) &&
     (*(float *)(iVar1 + 0x28) == DAT_1009f4b0)) {
    return 0;
  }
  return 1;
}

/* 10008ca0  CBaseEntity::OverrideReset  (1 bytes)
 * undefined OverrideReset()
 */
void CBaseEntity::OverrideReset(void)

{
  return;
}

/* 10008cb0  CBaseEntity::SetToggleState  (3 bytes)
 * undefined SetToggleState()
 */
void CBaseEntity::SetToggleState(void)

{
  return;
}

/* 10008cc0  CBaseEntity::StartSneaking  (1 bytes)
 * undefined StartSneaking()
 */
void CBaseEntity::StartSneaking(void)

{
  return;
}

/* 10008cd0  CBaseEntity::StopSneaking  (1 bytes)
 * undefined StopSneaking()
 */
void CBaseEntity::StopSneaking(void)

{
  return;
}

/* 10008ce0  CBaseEntity::OnControls  (5 bytes)
 * undefined OnControls()
 */
undefined4 CBaseEntity::OnControls(void)

{
  return 0;
}

/* 10008cf0  CBaseEntity::IsSneaking  (3 bytes)
 * undefined IsSneaking()
 */
undefined4 CBaseEntity::IsSneaking(void)

{
  return 0;
}

/* 10008d00  CBaseEntity::IsAlive  (43 bytes)
 * undefined IsAlive()
 */
undefined4 __fastcall CBaseEntity::IsAlive(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 4) + 0x170) == 0) &&
     (0.0 < *(float *)(*(int *)(param_1 + 4) + 0x160))) {
    return 1;
  }
  return 0;
}

/* 10008d30  CBaseEntity::IsBSPModel  (30 bytes)
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

/* 10008d50  CBaseEntity::ReflectGauss  (48 bytes)
 * undefined4 ReflectGauss(int * param_1)
 */
undefined4 __fastcall CBaseEntity::ReflectGauss(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x98))();
  if ((iVar1 != 0) && (*(float *)(param_1[1] + 0x16c) == 0.0)) {
    return 1;
  }
  return 0;
}

/* 10008d80  CBaseEntity::HasTarget  (102 bytes)
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

/* 10008df0  CBaseEntity::IsPlayer  (3 bytes)
 * undefined IsPlayer()
 */
undefined4 CBaseEntity::IsPlayer(void)

{
  return 0;
}

/* 10008e00  CBaseEntity::IsNetClient  (3 bytes)
 * undefined IsNetClient()
 */
undefined4 CBaseEntity::IsNetClient(void)

{
  return 0;
}

/* 10008e10  CBaseEntity::TeamID  (6 bytes)
 * undefined TeamID()
 */
undefined1 * CBaseEntity::TeamID(void)

{
  return &DAT_1009f428;
}

/* 10008e20  CBaseEntity::Blocked  (12 bytes)
 * undefined Blocked()
 */
void __fastcall CBaseEntity::Blocked(int param_1)

{
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10008e27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x1c))();
    return;
  }
  return;
}

/* 10008e30  CBaseEntity::Respawn  (3 bytes)
 * undefined Respawn()
 */
undefined4 CBaseEntity::Respawn(void)

{
  return 0;
}

/* 10008e40  CBaseEntity::UpdateOwner  (1 bytes)
 * undefined UpdateOwner()
 */
void CBaseEntity::UpdateOwner(void)

{
  return;
}

/* 10008e50  CBaseEntity::FBecomeProne  (3 bytes)
 * undefined FBecomeProne()
 */
undefined4 CBaseEntity::FBecomeProne(void)

{
  return 0;
}

/* 10008e60  CBaseEntity::Center  (88 bytes)
 * undefined Center()
 */
void __thiscall CBaseEntity::Center(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  fVar1 = *(float *)(iVar5 + 200);
  fVar2 = *(float *)(iVar5 + 0xd4);
  fVar3 = *(float *)(iVar5 + 0xcc);
  fVar4 = *(float *)(iVar5 + 0xd8);
  *param_2 = (*(float *)(iVar5 + 0xc4) + *(float *)(iVar5 + 0xd0)) * 0.5;
  param_2[1] = (fVar1 + fVar2) * 0.5;
  param_2[2] = (fVar3 + fVar4) * 0.5;
  return;
}

/* 10008ec0  CBaseEntity::EyePosition  (45 bytes)
 * undefined EyePosition()
 */
void __thiscall CBaseEntity::EyePosition(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  fVar1 = *(float *)(iVar5 + 0x17c);
  fVar2 = *(float *)(iVar5 + 0x10);
  fVar3 = *(float *)(iVar5 + 0x178);
  fVar4 = *(float *)(iVar5 + 0xc);
  *param_2 = *(float *)(iVar5 + 0x174) + *(float *)(iVar5 + 8);
  param_2[1] = fVar3 + fVar4;
  param_2[2] = fVar1 + fVar2;
  return;
}

/* 10008ef0  CBaseEntity::EarPosition  (45 bytes)
 * undefined EarPosition()
 */
void __thiscall CBaseEntity::EarPosition(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  fVar1 = *(float *)(iVar5 + 0x17c);
  fVar2 = *(float *)(iVar5 + 0x10);
  fVar3 = *(float *)(iVar5 + 0x178);
  fVar4 = *(float *)(iVar5 + 0xc);
  *param_2 = *(float *)(iVar5 + 0x174) + *(float *)(iVar5 + 8);
  param_2[1] = fVar3 + fVar4;
  param_2[2] = fVar1 + fVar2;
  return;
}

/* 10008f20  CBaseEntity::BodyTarget  (20 bytes)
 * undefined BodyTarget()
 */
undefined4 __thiscall CBaseEntity::BodyTarget(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xd4))(param_2);
  return param_2;
}

/* 10008f40  CBaseEntity::Illumination  (20 bytes)
 * undefined Illumination()
 */
void __fastcall CBaseEntity::Illumination(int param_1)

{
  (*g_engfuncs.pfnGetEntityIllum)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  return;
}

/* 10009060  CBaseEntity::Use  (20 bytes)
 * undefined Use()
 */
/* Identical-code folding: also CBaseEntity::Use, CM61Grenade::Use */

void __fastcall CBaseEntity::Use(int param_1)

{
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000906f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))();
    return;
  }
  return;
}

/* 1000b760  CBaseEntity::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
/* Identical-code folding: also CBaseEntity::ObjectCaps, CM61Grenade::ObjectCaps */

undefined4 CBaseEntity::ObjectCaps(void)

{
  return 2;
}

/* 1000c230  CBaseEntity::TakeHealth  (113 bytes)
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

/* 1000c2b0  CBaseEntity::TakeDamage  (829 bytes)
 * undefined TakeDamage()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall CBaseEntity::TakeDamage(int *param_1,int param_2,int param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float afStack_c [3];
  
  iVar2 = param_1[1];
  if (*(float *)(iVar2 + 0x16c) == 0.0) {
    return 0;
  }
  if (param_3 == param_2) {
    pfVar1 = (float *)VecBModelOrigin(&fStack_24,iVar2);
    fStack_18 = *(float *)(param_2 + 8) - *pfVar1;
    fStack_14 = *(float *)(param_2 + 0xc) - pfVar1[1];
    fStack_10 = *(float *)(param_2 + 0x10) - pfVar1[2];
  }
  else {
    pfVar1 = (float *)VecBModelOrigin(&fStack_24,iVar2);
    fStack_18 = *(float *)(param_2 + 8) - *pfVar1;
    fStack_14 = *(float *)(param_2 + 0xc) - pfVar1[1];
    fStack_10 = *(float *)(param_2 + 0x10) - pfVar1[2];
  }
  fVar5 = SQRT(fStack_18 * fStack_18 + fStack_10 * fStack_10 + fStack_14 * fStack_14);
  if (fVar5 == 0.0) {
    fVar7 = 1.0;
    fVar6 = 0.0;
    fVar5 = 0.0;
  }
  else {
    fVar5 = 1.0 / fVar5;
    fVar7 = fStack_10 * fVar5;
    fVar6 = fStack_14 * fVar5;
    fVar5 = fStack_18 * fVar5;
  }
  fStack_24 = fStack_18;
  fStack_20 = fStack_14;
  fStack_1c = fStack_10;
  FUN_1000c5f0(&fStack_18,fVar5,fVar6,fVar7);
  _DAT_1009f4c4 = fStack_18;
  _DAT_1009f4c8 = fStack_14;
  _DAT_1009f4cc = fStack_10;
  if (param_2 != 0) {
    iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(param_2 + 0x208));
    if (iVar2 != 0) {
      iVar2 = param_1[1];
      if (((*(int *)(iVar2 + 0x108) == 3) || (*(int *)(iVar2 + 0x108) == 4)) &&
         (*(int *)(param_3 + 0x10c) != 1)) {
        fStack_18 = (*(float *)(param_2 + 0xd0) + *(float *)(param_2 + 0xc4)) * 0.5;
        fStack_14 = (*(float *)(param_2 + 0xd4) + *(float *)(param_2 + 200)) * 0.5;
        fStack_1c = *(float *)(iVar2 + 0x10) -
                    (*(float *)(param_2 + 0xd8) + *(float *)(param_2 + 0xcc)) * 0.5;
        fStack_20 = *(float *)(iVar2 + 0xc) - fStack_14;
        fStack_24 = *(float *)(iVar2 + 8) - fStack_18;
        fVar4 = FUN_1000c640(&fStack_24);
        if (fVar4 == (float10)0.0) {
          fStack_18 = 0.0;
          fStack_14 = 0.0;
          fStack_10 = 1.0;
        }
        else {
          fVar4 = (float10)1.0 / fVar4;
          FUN_1000c5f0(&fStack_18,(float)((float10)fStack_24 * fVar4),
                       (float)((float10)fStack_20 * fVar4),(float)((float10)fStack_1c * fVar4));
        }
        fStack_20 = fStack_14;
        iVar2 = param_1[1];
        fStack_24 = fStack_18;
        fStack_1c = fStack_10;
        fVar5 = (73728.0 /
                (*(float *)(iVar2 + 0xfc) * *(float *)(iVar2 + 0xf8) * *(float *)(iVar2 + 0xf4))) *
                param_4 * 5.0;
        if (1000.0 < fVar5) {
          fVar5 = 1000.0;
        }
        FUN_1000c5f0(&fStack_18,fStack_18 * fVar5,fStack_14 * fVar5,fStack_10 * fVar5);
        puVar3 = (undefined4 *)FUN_1000c610((void *)(param_1[1] + 0x20),afStack_c,&fStack_18);
        iVar2 = param_1[1];
        *(undefined4 *)(iVar2 + 0x20) = *puVar3;
        *(undefined4 *)(iVar2 + 0x24) = puVar3[1];
        *(undefined4 *)(iVar2 + 0x28) = puVar3[2];
      }
    }
  }
  *(float *)(param_1[1] + 0x160) = *(float *)(param_1[1] + 0x160) - param_4;
  if (*(float *)(param_1[1] + 0x160) < 0.0 != (*(float *)(param_1[1] + 0x160) == 0.0)) {
    (**(code **)(*param_1 + 0x40))(param_3,0);
    return 0;
  }
  return 1;
}

/* 1000c670  CBaseEntity::Killed  (36 bytes)
 * undefined Killed()
 */
void __fastcall CBaseEntity::Killed(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x16c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x170) = 2;
  UTIL_Remove(param_1);
  return;
}

/* 1000c6a0  CBaseEntity::GetNextTarget  (78 bytes)
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
                     ((edict_t *)0x0,s_targetname_100915e4,gpGlobals->pStringBase + iVar1);
  if (pEdict != (edict_t *)0x0) {
    iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
    if (iVar1 != 0) {
      return pEdict->pvPrivateData;
    }
  }
  return (void *)0x0;
}

/* 1000c6f0  CBaseEntity::Save  (60 bytes)
 * undefined4 Save(void * param_1)
 * called by: CAmbientGeneric::Save, CBaseDelay::Save, CBaseEntity::Save, CBaseToggle::Save, CBreakable::Save, CBubbling::Save, CCyclerSprite::Save, CEnvGlobal::Save, CEnvSound::Save, CEnvSpark::Save, CFrictionModifier::Save, CFuncRotating::Save, ... (37 total)
 */
/* Identical-code folding: also CBaseEntity::Save, CTSPowerUp::Save */

undefined4 __thiscall CBaseEntity::Save(CBaseEntity *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10069050(param_1,(byte_conflict *)s_ENTVARS_1009183c,*(int *)(this + 4));
  if (iVar1 != 0) {
    uVar2 = CSave::WriteFields(param_1,&DAT_10091844,(int)this,0x10091708,5);
    return uVar2;
  }
  return 0;
}

/* 1000c730  CBaseEntity::Restore  (238 bytes)
 * undefined4 Restore(void * param_1)
 * called by: CAmbientGeneric::Restore, CBaseDelay::Restore, CBaseEntity::Restore, CBaseToggle::Restore, CBreakable::Restore, CBubbling::Restore, CCyclerSprite::Restore, CEnvGlobal::Restore, CEnvSound::Restore, CEnvSpark::Restore, CFrictionModifier::Restore, CFuncRotating::Restore, ... (37 total)
 */
/* Identical-code folding: also CBaseEntity::Restore, CTSPowerUp::Restore */

undefined4 __thiscall CBaseEntity::Restore(CBaseEntity *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100697d0(param_1,(byte_conflict *)s_ENTVARS_1009183c,*(int *)(this + 4));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = CRestore::ReadFields(param_1,&DAT_10091844,(int)this,0x10091708,5);
  }
  iVar1 = *(int *)(this + 4);
  if ((*(int *)(iVar1 + 0xb4) != 0) && (*(int *)(iVar1 + 0xb8) != 0)) {
    (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + *(int *)(iVar1 + 0xb8));
    (*g_engfuncs.pfnSetModel)
              (*(edict_t **)(*(int *)(this + 4) + 0x208),
               gpGlobals->pStringBase + *(int *)(*(int *)(this + 4) + 0xb8));
    FUN_10067970();
  }
  return uVar2;
}

/* 1000c9d0  CBaseEntity::SetObjectCollisionBox  (11 bytes)
 * undefined SetObjectCollisionBox()
 */
void __fastcall CBaseEntity::SetObjectCollisionBox(int param_1)

{
  ::SetObjectCollisionBox(*(int *)(param_1 + 4));
  return;
}

/* 1000cae0  CBaseEntity::IsInWorld  (249 bytes)
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
  if (*(float *)(iVar1 + 8) < -4096.0 != (*(float *)(iVar1 + 8) == -4096.0)) {
    return 0;
  }
  if (*(float *)(iVar1 + 0xc) < -4096.0 != (*(float *)(iVar1 + 0xc) == -4096.0)) {
    return 0;
  }
  if (*(float *)(iVar1 + 0x10) < -4096.0 != (*(float *)(iVar1 + 0x10) == -4096.0)) {
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
  if (*(float *)(iVar1 + 0x20) < -2000.0 != (*(float *)(iVar1 + 0x20) == -2000.0)) {
    return 0;
  }
  if (*(float *)(iVar1 + 0x24) < -2000.0 != (*(float *)(iVar1 + 0x24) == -2000.0)) {
    return 0;
  }
  if (*(float *)(iVar1 + 0x28) < -2000.0 != (*(float *)(iVar1 + 0x28) == -2000.0)) {
    return 0;
  }
  return 1;
}

/* 1000cbe0  CBaseEntity::ShouldToggle  (44 bytes)
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

/* 1000cc10  CBaseEntity::DamageDecal  (48 bytes)
 * undefined DamageDecal()
 */
int __fastcall CBaseEntity::DamageDecal(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x148);
  if (iVar1 == 4) {
    return -1;
  }
  if (iVar1 != 0) {
    return 0x23;
  }
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,4);
  return iVar1;
}

/* 1000cc40  CBaseEntity::Create  (157 bytes)
 * int Create(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 param_4)
 * called by: CBasePlayer::CheatImpulseCommands, CBasePlayerItem::Respawn, CBreakable::Die, CEnvBeverage::Use, CEnvExplosion::Use, CFuncTankRocket::Fire, CWorld::Precache, CWorldItem::Spawn, FUN_1001af00, FUN_100406f0
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
  (*g_engfuncs.pfnAlertMessage)(at_console,s_NULL_Ent_in_Create__1009184c);
  return 0;
}

/* 1000fc30  CBaseEntity::Spawn  (1 bytes)
 * undefined Spawn()
 */
void CBaseEntity::Spawn(void)

{
  return;
}

/* 10011030  CBaseEntity::SUB_StartFadeOut  (111 bytes)
 * void SUB_StartFadeOut(void)
 * called by: CBaseMonster::FadeMonster
 */
/* public: void __thiscall CBaseEntity::SUB_StartFadeOut(void) */

void __thiscall CBaseEntity::SUB_StartFadeOut(CBaseEntity *this)

{
  int iVar1;
  
                    /* 0x11030  92  ?SUB_StartFadeOut@CBaseEntity@@QAEXXZ */
  if (*(int *)(*(int *)(this + 4) + 0x148) == 0) {
    *(undefined4 *)(*(int *)(this + 4) + 0x14c) = 0x437f0000;
    *(undefined4 *)(*(int *)(this + 4) + 0x148) = 2;
  }
  *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 0;
  iVar1 = *(int *)(this + 4);
  *(undefined4 *)(iVar1 + 0x5c) = DAT_1009f4a8;
  *(undefined4 *)(iVar1 + 0x60) = DAT_1009f4ac;
  *(undefined4 *)(iVar1 + 100) = DAT_1009f4b0;
  *(float *)(*(int *)(this + 4) + 0x104) = gpGlobals->time + 0.1;
  *(code **)(this + 0x10) = SUB_FadeOut;
  return;
}

/* 100110a0  CBaseEntity::SUB_FadeOut  (106 bytes)
 * void SUB_FadeOut(void)
 */
/* public: void __thiscall CBaseEntity::SUB_FadeOut(void) */

void __thiscall CBaseEntity::SUB_FadeOut(CBaseEntity *this)

{
  int iVar1;
  
                    /* 0x110a0  90  ?SUB_FadeOut@CBaseEntity@@QAEXXZ */
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

/* 10012350  CBaseEntity::FVisible  (259 bytes)
 * undefined FVisible()
 */
undefined4 __thiscall CBaseEntity::FVisible(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [16];
  float fStack_2c;
  
  iVar1 = param_2[1];
  if (*(char *)(iVar1 + 0x1a4) < '\0') {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(iVar2 + 0x1c0) != 3) {
    if (*(int *)(iVar1 + 0x1c0) == 3) {
      return 0;
    }
    if (*(int *)(iVar2 + 0x1c0) != 3) goto LAB_100123a6;
  }
  if (*(int *)(iVar1 + 0x1c0) == 0) {
    return 0;
  }
LAB_100123a6:
  fStack_50 = *(float *)(iVar2 + 0x174) + *(float *)(iVar2 + 8);
  fStack_4c = *(float *)(iVar2 + 0x178) + *(float *)(iVar2 + 0xc);
  fStack_54 = *(float *)(iVar2 + 0x17c) + *(float *)(iVar2 + 0x10);
  fStack_48 = fStack_54;
  (**(code **)(*param_2 + 0xd8))(auStack_44);
  FUN_10067810(&fStack_54,&stack0xffffffa0,1,1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
               auStack_3c);
  if (fStack_2c == 1.0) {
    return 1;
  }
  return 0;
}

/* 10012460  CBaseEntity::FVisible  (115 bytes)
 * undefined FVisible()
 */
undefined4 __fastcall CBaseEntity::FVisible(int *param_1)

{
  undefined4 unaff_retaddr;
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [16];
  float fStack_2c;
  
  (**(code **)(*param_1 + 0xd8))(auStack_44);
  FUN_10067810(&stack0xffffffac,unaff_retaddr,1,1,*(undefined4 *)(param_1[1] + 0x208),auStack_3c);
  if (fStack_2c != 1.0) {
    return 0;
  }
  return 1;
}

/* 100124e0  CBaseEntity::TraceAttack  (206 bytes)
 * undefined TraceAttack(undefined4 param_1, float param_2, float param_3, float param_4, float param_5, int param_6, uint param_7)
 * called by: CBreakable::TraceAttack
 */
void __thiscall
CBaseEntity::TraceAttack
          (CBaseEntity *this,undefined4 param_1,float param_2,float param_3,float param_4,
          float param_5,int param_6,uint param_7)

{
  int iVar1;
  undefined4 uStack_3c;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  local_4 = param_5 * 4.0;
  local_18 = *(float *)(param_6 + 0x14) - param_3 * 4.0;
  local_14 = *(float *)(param_6 + 0x18) - param_4 * 4.0;
  local_10 = *(float *)(param_6 + 0x1c) - local_4;
  if (*(float *)(*(int *)(this + 4) + 0x16c) != 0.0) {
    uStack_3c = 0x1001255b;
    FUN_1006a340(param_1,(int)this,param_2,param_7);
    iVar1 = (**(code **)(*(int *)this + 0x44))();
    if (iVar1 != -1) {
      FUN_1000a540(&uStack_3c,&local_18);
      FUN_1006a3a0();
      param_6 = *(int *)this;
      FUN_1000a540(&uStack_3c,&param_3);
      (**(code **)(param_6 + 0x48))(param_2);
    }
  }
  return;
}

/* 100132a0  CBaseEntity::TraceBleed  (475 bytes)
 * undefined TraceBleed()
 */
void __thiscall CBaseEntity::TraceBleed(int *param_1,float param_2)

{
  float flLow;
  int iVar1;
  uint in_stack_00000018;
  undefined1 auStack_38 [16];
  float fStack_28;
  
  iVar1 = (**(code **)(*param_1 + 0x44))();
  if (((iVar1 != -1) && (param_2 != 0.0)) && ((in_stack_00000018 & 0x8000c7) != 0)) {
    if (10.0 <= param_2) {
      if (25.0 <= param_2) {
        param_2 = 0.3;
        in_stack_00000018 = 4;
      }
      else {
        param_2 = 0.2;
        in_stack_00000018 = 2;
      }
    }
    else {
      param_2 = 0.1;
      in_stack_00000018 = 1;
    }
    if (in_stack_00000018 != 0) {
      flLow = -param_2;
      do {
        (*g_engfuncs.pfnRandomFloat)(flLow,param_2);
        (*g_engfuncs.pfnRandomFloat)(flLow,param_2);
        (*g_engfuncs.pfnRandomFloat)(flLow,param_2);
        FUN_10067850();
        if (fStack_28 != 1.0) {
          iVar1 = (**(code **)(*param_1 + 0x44))();
          FUN_10067ea0((int)auStack_38,iVar1);
        }
        in_stack_00000018 = in_stack_00000018 + -1;
      } while (in_stack_00000018 != 0);
    }
  }
  return;
}

/* 100378c0  CBaseEntity::Think  (10 bytes)
 * undefined Think()
 */
void __fastcall CBaseEntity::Think(int param_1)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100378c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))();
    return;
  }
  return;
}

/* 100378d0  CBaseEntity::Touch  (12 bytes)
 * undefined Touch()
 */
void __fastcall CBaseEntity::Touch(int param_1)

{
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100378d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x14))();
    return;
  }
  return;
}

/* 10037940  CBaseEntity::SUB_Remove  (79 bytes)
 * void SUB_Remove(void)
 * called by: CDecal::StaticDecal
 */
/* public: void __thiscall CBaseEntity::SUB_Remove(void) */

void __thiscall CBaseEntity::SUB_Remove(CBaseEntity *this)

{
                    /* 0x37940  91  ?SUB_Remove@CBaseEntity@@QAEXXZ */
  FUN_100378e0((int)this);
  if (0.0 < *(float *)(*(int *)(this + 4) + 0x160)) {
    *(undefined4 *)(*(int *)(this + 4) + 0x160) = 0;
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_SUB_Remove_called_on_entity_with_100973d8);
  }
  (*g_engfuncs.pfnRemoveEntity)(*(edict_t **)(*(int *)(this + 4) + 0x208));
  return;
}

/* 10037990  CBaseEntity::SUB_DoNothing  (1 bytes)
 * void SUB_DoNothing(void)
 */
/* public: void __thiscall CBaseEntity::SUB_DoNothing(void) */

void __thiscall CBaseEntity::SUB_DoNothing(CBaseEntity *this)

{
                    /* 0x37990  89  ?SUB_DoNothing@CBaseEntity@@QAEXXZ */
  return;
}

/* 10037a80  CBaseEntity::SUB_UseTargets  (55 bytes)
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

/* 100507a0  CBaseEntity::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CBaseEntity::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSObjectivePointer_10099004,(int)param_1,0x10098d30
                     ,2);
  return;
}

/* 100507d0  CBaseEntity::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CBaseEntity::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CTSObjectivePointer_10099004,(int)param_1,0x10098d30,2);
  return;
}

