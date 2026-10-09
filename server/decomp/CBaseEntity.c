/* ts_i386.so - CBaseEntity (90 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a7358  CBaseEntity::SUB_CallUseToggle  (27 bytes)
 * undefined SUB_CallUseToggle(void)
 */
/* CBaseEntity::SUB_CallUseToggle(void) */

void __thiscall CBaseEntity::SUB_CallUseToggle(CBaseEntity *this)

{
  (*this->vtable[0x38])(this,this,this,3,0);
  return;
}

/* 000ab914  CBaseEntity::TakeHealth  (124 bytes)
 * undefined4 TakeHealth(int * param_1, float param_2)
 */
/* CBaseEntity::TakeHealth(float, int) */

undefined4 CBaseEntity::TakeHealth(int *param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(float *)(*param_1 + 0x16c) == 0.0) ||
     (*(float *)(*param_1 + 0x1b0) <= *(float *)(*param_1 + 0x160))) {
    uVar2 = 0;
  }
  else {
    *(float *)(*param_1 + 0x160) = param_2 + *(float *)(*param_1 + 0x160);
    iVar1 = *param_1;
    if (*(float *)(iVar1 + 0x1b0) < *(float *)(iVar1 + 0x160)) {
      *(undefined4 *)(iVar1 + 0x160) = *(undefined4 *)(iVar1 + 0x1b0);
    }
    uVar2 = 1;
  }
  return uVar2;
}

/* 000ab994  CBaseEntity::TakeDamage  (943 bytes)
 * bool TakeDamage(int * param_1, int param_2, int param_3, float param_4)
 */
/* CBaseEntity::TakeDamage(entvars_s *, entvars_s *, float, int) */

bool CBaseEntity::TakeDamage(int *param_1,int param_2,int param_3,float param_4)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float local_4c [4];
  float local_3c [4];
  float local_2c [7];
  
  if (*(float *)(*param_1 + 0x16c) == 0.0) {
    return false;
  }
  if (param_3 == param_2) {
    VecBModelOrigin(local_4c,*param_1);
    pfVar3 = local_3c;
    local_3c[0] = *(float *)(param_3 + 8) - local_4c[0];
    local_3c[1] = *(float *)(param_3 + 0xc) - local_4c[1];
    local_3c[2] = *(float *)(param_3 + 0x10) - local_4c[2];
  }
  else {
    VecBModelOrigin(local_3c,*param_1);
    pfVar3 = local_4c;
    local_4c[0] = *(float *)(param_2 + 8) - local_3c[0];
    local_4c[1] = *(float *)(param_2 + 0xc) - local_3c[1];
    local_4c[2] = *(float *)(param_2 + 0x10) - local_3c[2];
  }
  pfVar6 = local_2c;
  for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
  }
  fVar1 = SQRT(local_2c[2] * local_2c[2] + local_2c[1] * local_2c[1] + local_2c[0] * local_2c[0]);
  if (fVar1 == 0.0) {
    local_4c[0] = 0.0;
    local_4c[1] = 0.0;
    local_4c[2] = 1.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    local_4c[0] = fVar1 * local_2c[0];
    local_4c[1] = fVar1 * local_2c[1];
    local_4c[2] = fVar1 * local_2c[2];
  }
  pfVar3 = local_4c;
  pfVar6 = (float *)&g_vecAttackDir;
  for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
  }
  bVar2 = false;
  if ((param_2 == 0) ||
     (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(param_2 + 0x208)), iVar4 == 0)) {
    bVar2 = true;
  }
  if (((!bVar2) && (iVar4 = *param_1, *(int *)(iVar4 + 0x108) - 3U < 2)) &&
     (*(int *)(param_3 + 0x10c) != 1)) {
    local_4c[0] = *(float *)(iVar4 + 8) -
                  (*(float *)(param_2 + 0xc4) + *(float *)(param_2 + 0xd0)) * 0.5;
    local_4c[1] = *(float *)(iVar4 + 0xc) -
                  (*(float *)(param_2 + 200) + *(float *)(param_2 + 0xd4)) * 0.5;
    local_4c[2] = *(float *)(iVar4 + 0x10) -
                  (*(float *)(param_2 + 0xcc) + *(float *)(param_2 + 0xd8)) * 0.5;
    fVar1 = SQRT(local_4c[2] * local_4c[2] + local_4c[1] * local_4c[1] + local_4c[0] * local_4c[0]);
    if (fVar1 == 0.0) {
      local_3c[0] = 0.0;
      local_3c[1] = 0.0;
      local_3c[2] = 1.0;
    }
    else {
      fVar1 = 1.0 / fVar1;
      local_3c[0] = fVar1 * local_4c[0];
      local_3c[1] = fVar1 * local_4c[1];
      local_3c[2] = fVar1 * local_4c[2];
    }
    pfVar3 = local_3c;
    pfVar6 = local_4c;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar6 = pfVar6 + 1;
    }
    iVar4 = *param_1;
    fVar1 = (73728.0 /
            (*(float *)(iVar4 + 0xf4) * *(float *)(iVar4 + 0xf8) * *(float *)(iVar4 + 0xfc))) *
            param_4 * 5.0;
    if (1000.0 < fVar1) {
      fVar1 = 1000.0;
    }
    iVar4 = *param_1;
    local_3c[0] = *(float *)(iVar4 + 0x20) + fVar1 * local_4c[0];
    local_3c[1] = *(float *)(iVar4 + 0x24) + fVar1 * local_4c[1];
    local_3c[2] = *(float *)(iVar4 + 0x28) + fVar1 * local_4c[2];
    pfVar3 = local_3c;
    pfVar6 = (float *)(iVar4 + 0x20);
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar6 = pfVar6 + 1;
    }
  }
  *(float *)(*param_1 + 0x160) = *(float *)(*param_1 + 0x160) - param_4;
  bVar2 = 0.0 < *(float *)(*param_1 + 0x160);
  if (!bVar2) {
    (**(code **)(param_1[0x18] + 0x60))(param_1,param_3,0);
  }
  return bVar2;
}

/* 000abd4c  CBaseEntity::Killed  (58 bytes)
 * undefined Killed(int * param_1)
 */
/* CBaseEntity::Killed(entvars_s *, int) */

void CBaseEntity::Killed(int *param_1)

{
  *(undefined4 *)(*param_1 + 0x16c) = 0;
  *(undefined4 *)(*param_1 + 0x170) = 2;
  UTIL_Remove(param_1);
  return;
}

/* 000abd88  CBaseEntity::GetNextTarget  (181 bytes)
 * undefined4 GetNextTarget(void)
 */
/* CBaseEntity::GetNextTarget(void) */

void * __thiscall CBaseEntity::GetNextTarget(CBaseEntity *this)

{
  bool bVar1;
  void *pvVar2;
  edict_t *pEdict;
  int iVar3;
  
  if (this->pev->target == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pEdict = (*g_engfuncs.pfnFindEntityByString)
                       ((edict_t *)0x0,"targetname",gpGlobals->pStringBase + this->pev->target);
    bVar1 = false;
    if ((pEdict == (edict_t *)0x0) ||
       (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar3 == 0)) {
      bVar1 = true;
    }
    pvVar2 = (void *)0x0;
    if (!bVar1) {
      if (pEdict == (edict_t *)0x0) {
        pEdict = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      pvVar2 = (void *)0x0;
      if (pEdict != (edict_t *)0x0) {
        pvVar2 = pEdict->pvPrivateData;
      }
    }
  }
  return pvVar2;
}

/* 000abe40  CBaseEntity::Save  (87 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CBaseEntity::Save(CSave &) */

undefined4 __thiscall CBaseEntity::Save(CBaseEntity *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CSave::WriteEntVars(param_1,"ENTVARS",(int)this->pev);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"BASE",(int)this,(int *)m_SaveData,5);
  }
  return uVar2;
}

/* 000abe9c  CBaseEntity::Restore  (256 bytes)
 * int Restore(CRestore * param_1)
 */
/* CBaseEntity::Restore(CRestore &) */

int __thiscall CBaseEntity::Restore(CBaseEntity *this,CRestore *param_1)

{
  entvars_t *peVar1;
  int iVar2;
  vec_t *pvVar3;
  vec_t *pvVar4;
  int local_40;
  vec_t local_3c [4];
  vec_t local_2c [7];
  
  local_40 = CRestore::ReadEntVars(param_1,"ENTVARS",(int)this->pev);
  if (local_40 != 0) {
    local_40 = CRestore::ReadFields(param_1,"BASE",(int)this,(int)m_SaveData,5);
  }
  peVar1 = this->pev;
  if ((peVar1->modelindex != 0) && (peVar1->model != 0)) {
    pvVar3 = peVar1->mins;
    pvVar4 = local_2c;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pvVar4 = *pvVar3;
      pvVar3 = pvVar3 + 1;
      pvVar4 = pvVar4 + 1;
    }
    pvVar3 = this->pev->maxs;
    pvVar4 = local_3c;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pvVar4 = *pvVar3;
      pvVar3 = pvVar3 + 1;
      pvVar4 = pvVar4 + 1;
    }
    (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + this->pev->model);
    (*g_engfuncs.pfnSetModel)
              (this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
    UTIL_SetSize((int)this->pev,local_2c,local_3c);
  }
  return local_40;
}

/* 000ac1d0  CBaseEntity::SetObjectCollisionBox  (18 bytes)
 * undefined SetObjectCollisionBox(void)
 */
/* CBaseEntity::SetObjectCollisionBox(void) */

void __thiscall CBaseEntity::SetObjectCollisionBox(CBaseEntity *this)

{
  ::SetObjectCollisionBox((int)this->pev);
  return;
}

/* 000ac1e4  CBaseEntity::Intersects  (136 bytes)
 * undefined4 Intersects(int * param_1)
 */
/* CBaseEntity::Intersects(CBaseEntity *) */

undefined4 __thiscall CBaseEntity::Intersects(CBaseEntity *this,int *param_1)

{
  int iVar1;
  entvars_t *peVar2;
  
  iVar1 = *param_1;
  peVar2 = this->pev;
  if ((((*(float *)(iVar1 + 0xc4) <= peVar2->absmax[0]) &&
       (*(float *)(iVar1 + 200) <= peVar2->absmax[1])) &&
      (*(float *)(iVar1 + 0xcc) <= peVar2->absmax[2])) &&
     (((peVar2->absmin[0] <= *(float *)(iVar1 + 0xd0) &&
       (peVar2->absmin[1] <= *(float *)(iVar1 + 0xd4))) &&
      (peVar2->absmin[2] <= *(float *)(iVar1 + 0xd8))))) {
    return 1;
  }
  return 0;
}

/* 000ac270  CBaseEntity::MakeDormant  (101 bytes)
 * undefined MakeDormant(void)
 */
/* CBaseEntity::MakeDormant(void) */

void __thiscall CBaseEntity::MakeDormant(CBaseEntity *this)

{
  int *piVar1;
  
  piVar1 = &this->pev->flags;
  *piVar1 = *piVar1 | 0x80000000;
  this->pev->solid = 0;
  this->pev->movetype = 0;
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 0x80;
  this->pev->nextthink = 0.0;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  return;
}

/* 000ac2d8  CBaseEntity::IsDormant  (18 bytes)
 * uint IsDormant(void)
 */
/* CBaseEntity::IsDormant(void) */

uint __thiscall CBaseEntity::IsDormant(CBaseEntity *this)

{
  return this->pev->flags & 0x80000000;
}

/* 000ac2ec  CBaseEntity::IsInWorld  (264 bytes)
 * bool IsInWorld(void)
 */
/* CBaseEntity::IsInWorld(void) */

bool __thiscall CBaseEntity::IsInWorld(CBaseEntity *this)

{
  bool bVar1;
  
  if ((((((4096.0 <= this->pev->origin[0]) || (4096.0 <= this->pev->origin[1])) ||
        (4096.0 <= this->pev->origin[2])) ||
       ((this->pev->origin[0] <= -4096.0 || (this->pev->origin[1] <= -4096.0)))) ||
      ((this->pev->origin[2] <= -4096.0 ||
       ((2000.0 <= this->pev->velocity[0] || (2000.0 <= this->pev->velocity[1])))))) ||
     ((2000.0 <= this->pev->velocity[2] ||
      ((this->pev->velocity[0] <= -2000.0 || (this->pev->velocity[1] <= -2000.0)))))) {
    bVar1 = false;
  }
  else {
    bVar1 = -2000.0 < this->pev->velocity[2];
  }
  return bVar1;
}

/* 000ac3f8  CBaseEntity::ShouldToggle  (45 bytes)
 * undefined4 ShouldToggle(undefined4 this, int param_2, int param_3)
 */
/* CBaseEntity::ShouldToggle(USE_TYPE, int) */

undefined4 __thiscall CBaseEntity::ShouldToggle(undefined4 this,int param_2,int param_3)

{
  if ((1 < param_2 - 2U) &&
     (((param_3 != 0 && (param_2 == 1)) || ((param_3 == 0 && (param_2 == 0)))))) {
    return 0;
  }
  return 1;
}

/* 000ac428  CBaseEntity::DamageDecal  (83 bytes)
 * undefined4 DamageDecal(int * param_1)
 */
/* CBaseEntity::DamageDecal(int) */

int CBaseEntity::DamageDecal(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 0x148) == 4) {
    iVar1 = -1;
  }
  else if (*(int *)(*param_1 + 0x148) == 0) {
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,4);
  }
  else {
    iVar1 = 0x23;
  }
  return iVar1;
}

/* 000ac480  CBaseEntity::Create  (239 bytes)
 * int * Create(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 param_4)
 */
/* CBaseEntity::Create(char *, Vector const &, Vector const &, edict_s *) */

int * CBaseEntity::Create(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  edict_t *pEdict;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  pEdict = (*g_engfuncs.pfnCreateNamedEntity)(param_1 - (int)gpGlobals->pStringBase);
  bVar1 = false;
  if (pEdict != (edict_t *)0x0) {
    iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
    if (iVar2 != 0) goto LAB_000ac4d8;
  }
  bVar1 = true;
LAB_000ac4d8:
  if (bVar1) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"NULL Ent in Create!\n");
    piVar3 = (int *)0x0;
  }
  else {
    if (pEdict == (edict_t *)0x0) {
      pEdict = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    piVar3 = (int *)0x0;
    if (pEdict != (edict_t *)0x0) {
      piVar3 = pEdict->pvPrivateData;
    }
    *(undefined4 *)(*piVar3 + 0x198) = param_4;
    puVar4 = (undefined4 *)(*piVar3 + 8);
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar4 = (undefined4 *)(*piVar3 + 0x50);
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *param_3;
      param_3 = param_3 + 1;
      puVar4 = puVar4 + 1;
    }
    DispatchSpawn(*(edict_t **)(*piVar3 + 0x208));
  }
  return piVar3;
}

/* 000ac5ac  CBaseEntity::BreakableRespawn  (1 bytes)
 * undefined BreakableRespawn(void)
 */
/* CBaseEntity::BreakableRespawn(bool) */

void CBaseEntity::BreakableRespawn(void)

{
  return;
}

/* 000ac5b0  CBaseEntity::CanUsedTroughWalls  (3 bytes)
 * undefined1 CanUsedTroughWalls(void)
 */
/* CBaseEntity::CanUsedTroughWalls(void) */

undefined1 CBaseEntity::CanUsedTroughWalls(void)

{
  return 1;
}

/* 000ac5b4  CBaseEntity::GiveSlowMul  (41 bytes)
 * undefined GiveSlowMul(void)
 */
/* CBaseEntity::GiveSlowMul(void) */

void __thiscall CBaseEntity::GiveSlowMul(CBaseEntity *this)

{
  FixedSlowAmt(this->pev->fuser1);
  return;
}

/* 000ac5e0  CBaseEntity::GoSlow  (17 bytes)
 * undefined GoSlow(int * param_1, undefined4 param_2)
 */
/* CBaseEntity::GoSlow(float, char) */

void CBaseEntity::GoSlow(int *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x254) = param_2;
  return;
}

/* 000ac5f4  CBaseEntity::InSlow  (50 bytes)
 * bool InSlow(void)
 */
/* CBaseEntity::InSlow(void) */

bool __thiscall CBaseEntity::InSlow(CBaseEntity *this)

{
  return this->pev->fuser1 != 1.0;
}

/* 000ac628  CBaseEntity::IsObjective  (3 bytes)
 * undefined1 IsObjective(void)
 */
/* CBaseEntity::IsObjective(void) */

undefined1 CBaseEntity::IsObjective(void)

{
  return 0;
}

/* 000ac62c  CBaseEntity::EnableObjective  (1 bytes)
 * undefined EnableObjective(void)
 */
/* CBaseEntity::EnableObjective(bool) */

void CBaseEntity::EnableObjective(void)

{
  return;
}

/* 000ac630  CBaseEntity::Spawn  (1 bytes)
 * undefined Spawn(void)
 */
/* CBaseEntity::Spawn(void) */

void CBaseEntity::Spawn(void)

{
  return;
}

/* 000ac634  CBaseEntity::Precache  (1 bytes)
 * undefined Precache(void)
 */
/* CBaseEntity::Precache(void) */

void CBaseEntity::Precache(void)

{
  return;
}

/* 000ac638  CBaseEntity::KeyValue  (12 bytes)
 * undefined KeyValue(undefined4 this, int param_2)
 */
/* CBaseEntity::KeyValue(KeyValueData_s *) */

void __thiscall CBaseEntity::KeyValue(undefined4 this,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 000ac644  CBaseEntity::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CBaseEntity::ObjectCaps(void) */

undefined4 CBaseEntity::ObjectCaps(void)

{
  return 2;
}

/* 000ac64c  CBaseEntity::Activate  (1 bytes)
 * undefined Activate(void)
 */
/* CBaseEntity::Activate(void) */

void CBaseEntity::Activate(void)

{
  return;
}

/* 000ac650  CBaseEntity::OnFreeEntPrivateData  (1 bytes)
 * undefined OnFreeEntPrivateData(void)
 */
/* CBaseEntity::OnFreeEntPrivateData(void) */

void CBaseEntity::OnFreeEntPrivateData(void)

{
  return;
}

/* 000ac654  CBaseEntity::ShouldCollide  (6 bytes)
 * undefined4 ShouldCollide(void)
 */
/* CBaseEntity::ShouldCollide(CBaseEntity *) */

undefined4 CBaseEntity::ShouldCollide(void)

{
  return 1;
}

/* 000ac65c  CBaseEntity::Classify  (6 bytes)
 * undefined4 Classify(void)
 */
/* CBaseEntity::Classify(void) */

undefined4 CBaseEntity::Classify(void)

{
  return 0;
}

/* 000ac664  CBaseEntity::DeathNotice  (1 bytes)
 * undefined DeathNotice(void)
 */
/* CBaseEntity::DeathNotice(entvars_s *) */

void CBaseEntity::DeathNotice(void)

{
  return;
}

/* 000ac668  CBaseEntity::BloodColor  (6 bytes)
 * undefined4 BloodColor(void)
 */
/* CBaseEntity::BloodColor(void) */

undefined4 CBaseEntity::BloodColor(void)

{
  return 0xffffffff;
}

/* 000ac670  CBaseEntity::IsTriggered  (6 bytes)
 * undefined4 IsTriggered(void)
 */
/* CBaseEntity::IsTriggered(CBaseEntity *) */

undefined4 CBaseEntity::IsTriggered(void)

{
  return 1;
}

/* 000ac678  CBaseEntity::MyMonsterPointer  (6 bytes)
 * undefined4 MyMonsterPointer(void)
 */
/* CBaseEntity::MyMonsterPointer(void) */

undefined4 CBaseEntity::MyMonsterPointer(void)

{
  return 0;
}

/* 000ac680  CBaseEntity::MySquadMonsterPointer  (6 bytes)
 * undefined4 MySquadMonsterPointer(void)
 */
/* CBaseEntity::MySquadMonsterPointer(void) */

undefined4 CBaseEntity::MySquadMonsterPointer(void)

{
  return 0;
}

/* 000ac688  CBaseEntity::GetToggleState  (6 bytes)
 * undefined4 GetToggleState(void)
 */
/* CBaseEntity::GetToggleState(void) */

undefined4 CBaseEntity::GetToggleState(void)

{
  return 0;
}

/* 000ac690  CBaseEntity::AddPoints  (1 bytes)
 * undefined AddPoints(void)
 */
/* CBaseEntity::AddPoints(int, int) */

void CBaseEntity::AddPoints(void)

{
  return;
}

/* 000ac694  CBaseEntity::AddPointsToTeam  (1 bytes)
 * undefined AddPointsToTeam(void)
 */
/* CBaseEntity::AddPointsToTeam(int, int) */

void CBaseEntity::AddPointsToTeam(void)

{
  return;
}

/* 000ac698  CBaseEntity::AddPlayerItem  (6 bytes)
 * undefined4 AddPlayerItem(void)
 */
/* CBaseEntity::AddPlayerItem(CBasePlayerItem *) */

undefined4 CBaseEntity::AddPlayerItem(void)

{
  return 0;
}

/* 000ac6a0  CBaseEntity::RemovePlayerItem  (6 bytes)
 * undefined4 RemovePlayerItem(void)
 */
/* CBaseEntity::RemovePlayerItem(CBasePlayerItem *) */

undefined4 CBaseEntity::RemovePlayerItem(void)

{
  return 0;
}

/* 000ac6a8  CBaseEntity::GiveAmmo  (6 bytes)
 * undefined4 GiveAmmo(void)
 */
/* CBaseEntity::GiveAmmo(int, char *, int) */

undefined4 CBaseEntity::GiveAmmo(void)

{
  return 0xffffffff;
}

/* 000ac6b0  CBaseEntity::GetDelay  (21 bytes)
 * longdouble GetDelay(void)
 */
/* CBaseEntity::GetDelay(void) */

longdouble CBaseEntity::GetDelay(void)

{
  return (longdouble)0.0;
}

/* 000ac6c8  CBaseEntity::IsMoving  (85 bytes)
 * uint IsMoving(void)
 */
/* CBaseEntity::IsMoving(void) */

uint __thiscall CBaseEntity::IsMoving(CBaseEntity *this)

{
  entvars_t *peVar1;
  uint uVar2;
  
  peVar1 = this->pev;
  uVar2 = 0;
  if (((peVar1->velocity[0] == g_vecZero) && (peVar1->velocity[1] == DAT_00190ef0)) &&
     (peVar1->velocity[2] == DAT_00190ef4)) {
    uVar2 = 1;
  }
  return uVar2 ^ 1;
}

/* 000ac720  CBaseEntity::OverrideReset  (1 bytes)
 * undefined OverrideReset(void)
 */
/* CBaseEntity::OverrideReset(void) */

void CBaseEntity::OverrideReset(void)

{
  return;
}

/* 000ac724  CBaseEntity::SetToggleState  (1 bytes)
 * undefined SetToggleState(void)
 */
/* CBaseEntity::SetToggleState(int) */

void CBaseEntity::SetToggleState(void)

{
  return;
}

/* 000ac728  CBaseEntity::StartSneaking  (1 bytes)
 * undefined StartSneaking(void)
 */
/* CBaseEntity::StartSneaking(void) */

void CBaseEntity::StartSneaking(void)

{
  return;
}

/* 000ac72c  CBaseEntity::StopSneaking  (1 bytes)
 * undefined StopSneaking(void)
 */
/* CBaseEntity::StopSneaking(void) */

void CBaseEntity::StopSneaking(void)

{
  return;
}

/* 000ac730  CBaseEntity::OnControls  (6 bytes)
 * undefined4 OnControls(void)
 */
/* CBaseEntity::OnControls(entvars_s *) */

undefined4 CBaseEntity::OnControls(void)

{
  return 0;
}

/* 000ac738  CBaseEntity::IsSneaking  (6 bytes)
 * undefined4 IsSneaking(void)
 */
/* CBaseEntity::IsSneaking(void) */

undefined4 CBaseEntity::IsSneaking(void)

{
  return 0;
}

/* 000ac740  CBaseEntity::IsAlive  (59 bytes)
 * undefined4 IsAlive(void)
 */
/* CBaseEntity::IsAlive(void) */

undefined4 __thiscall CBaseEntity::IsAlive(CBaseEntity *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((this->pev->deadflag == 0) && (0.0 < this->pev->health)) {
    uVar1 = 1;
  }
  return uVar1;
}

/* 000ac77c  CBaseEntity::IsBSPModel  (37 bytes)
 * undefined4 IsBSPModel(void)
 */
/* CBaseEntity::IsBSPModel(void) */

undefined4 __thiscall CBaseEntity::IsBSPModel(CBaseEntity *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((this->pev->solid == 4) || (this->pev->movetype == 0xd)) {
    uVar1 = 1;
  }
  return uVar1;
}

/* 000ac7a4  CBaseEntity::ReflectGauss  (76 bytes)
 * undefined4 ReflectGauss(void)
 */
/* CBaseEntity::ReflectGauss(void) */

undefined4 __thiscall CBaseEntity::ReflectGauss(CBaseEntity *this)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (*this->vtable[0x2e])(this);
  if ((iVar1 != 0) && (this->pev->takedamage == 0.0)) {
    uVar2 = 1;
  }
  return uVar2;
}

/* 000ac7f0  CBaseEntity::HasTarget  (75 bytes)
 * bool HasTarget(int param_1)
 */
/* CBaseEntity::HasTarget(int) */

bool __thiscall CBaseEntity::HasTarget(CBaseEntity *this,int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(gpGlobals->pStringBase + param_1,gpGlobals->pStringBase + this->pev->targetname);
  return iVar1 == 0;
}

/* 000ac83c  CBaseEntity::IsPlayer  (6 bytes)
 * undefined4 IsPlayer(void)
 */
/* CBaseEntity::IsPlayer(void) */

undefined4 CBaseEntity::IsPlayer(void)

{
  return 0;
}

/* 000ac844  CBaseEntity::IsNetClient  (6 bytes)
 * undefined4 IsNetClient(void)
 */
/* CBaseEntity::IsNetClient(void) */

undefined4 CBaseEntity::IsNetClient(void)

{
  return 0;
}

/* 000ac84c  CBaseEntity::TeamID  (21 bytes)
 * undefined1 * TeamID(void)
 */
/* CBaseEntity::TeamID(void) */

undefined1 * CBaseEntity::TeamID(void)

{
  return &DAT_00106657;
}

/* 000ac864  CBaseEntity::Use  (74 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
/* CBaseEntity::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void __thiscall
CBaseEntity::Use(CBaseEntity *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
                undefined4 param_4)

{
  code *pcVar1;
  
  if (*(short *)&this->field_0x1e != 0) {
    if (*(short *)&this->field_0x1e < 0) {
      pcVar1 = *(code **)&this->field_0x20;
    }
    else {
      pcVar1 = *(code **)(*(int *)((int)&this->pev + (int)*(short *)&this->field_0x20) + -4 +
                         *(short *)&this->field_0x1e * 4);
    }
    (*pcVar1)((int)&this->pev + (int)*(short *)&this->field_0x1c,param_1,param_2,param_3,param_4);
  }
  return;
}

/* 000ac8b0  CBaseEntity::Blocked  (62 bytes)
 * undefined Blocked(undefined4 param_1)
 */
/* CBaseEntity::Blocked(CBaseEntity *) */

void __thiscall CBaseEntity::Blocked(CBaseEntity *this,undefined4 param_1)

{
  code *pcVar1;
  
  if (*(short *)&this->field_0x26 != 0) {
    if (*(short *)&this->field_0x26 < 0) {
      pcVar1 = *(code **)&this->field_0x28;
    }
    else {
      pcVar1 = *(code **)(*(int *)((int)&this->pev + (int)*(short *)&this->field_0x28) + -4 +
                         *(short *)&this->field_0x26 * 4);
    }
    (*pcVar1)((int)&this->pev + (int)*(short *)&this->field_0x24,param_1);
  }
  return;
}

/* 000ac8f0  CBaseEntity::operator.new  (50 bytes)
 * void * operator.new(undefined4 param_1, int param_2)
 */
/* CBaseEntity::operator new(unsigned int, entvars_s *) */

void * CBaseEntity::operator_new(long param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnPvAllocEntPrivateData)(*(edict_t **)(param_2 + 0x208),param_1);
  return pvVar1;
}

/* 000ac924  CBaseEntity::Respawn  (6 bytes)
 * undefined4 Respawn(void)
 */
/* CBaseEntity::Respawn(void) */

undefined4 CBaseEntity::Respawn(void)

{
  return 0;
}

/* 000ac92c  CBaseEntity::IsLockedByMaster  (6 bytes)
 * undefined4 IsLockedByMaster(void)
 */
/* CBaseEntity::IsLockedByMaster(void) */

undefined4 CBaseEntity::IsLockedByMaster(void)

{
  return 0;
}

/* 000ac934  CBaseEntity::Instance  (63 bytes)
 * undefined4 Instance(int param_1)
 */
/* CBaseEntity::Instance(edict_s *) */

void * CBaseEntity::Instance(int param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    param_1 = (int)(*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  pvVar1 = (void *)0x0;
  if ((edict_t *)param_1 != (edict_t *)0x0) {
    pvVar1 = ((edict_t *)param_1)->pvPrivateData;
  }
  return pvVar1;
}

/* 000ac974  CBaseEntity::Instance  (69 bytes)
 * undefined4 Instance(int param_1)
 */
/* CBaseEntity::Instance(entvars_s *) */

void * CBaseEntity::Instance(int param_1)

{
  edict_t *peVar1;
  void *pvVar2;
  
  peVar1 = *(edict_t **)(param_1 + 0x208);
  if (peVar1 == (edict_t *)0x0) {
    peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  pvVar2 = (void *)0x0;
  if (peVar1 != (edict_t *)0x0) {
    pvVar2 = peVar1->pvPrivateData;
  }
  return pvVar2;
}

/* 000ac9bc  CBaseEntity::Instance  (77 bytes)
 * undefined4 Instance(undefined4 param_1)
 */
/* CBaseEntity::Instance(int) */

void * CBaseEntity::Instance(int param_1)

{
  edict_t *peVar1;
  void *pvVar2;
  
  peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(param_1);
  if (peVar1 == (edict_t *)0x0) {
    peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  pvVar2 = (void *)0x0;
  if (peVar1 != (edict_t *)0x0) {
    pvVar2 = peVar1->pvPrivateData;
  }
  return pvVar2;
}

/* 000aca0c  CBaseEntity::GetMonsterPointer  (91 bytes)
 * undefined4 GetMonsterPointer(undefined4 this, int param_2)
 */
/* CBaseEntity::GetMonsterPointer(entvars_s *) */

undefined4 __thiscall CBaseEntity::GetMonsterPointer(undefined4 this,int param_2)

{
  edict_t *peVar1;
  undefined4 uVar2;
  void *pvVar3;
  
  peVar1 = *(edict_t **)(param_2 + 0x208);
  if (peVar1 == (edict_t *)0x0) {
    peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  pvVar3 = (void *)0x0;
  if (peVar1 != (edict_t *)0x0) {
    pvVar3 = peVar1->pvPrivateData;
  }
  if (pvVar3 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*(int *)((int)pvVar3 + 0x60) + 0x70))(pvVar3);
  }
  return uVar2;
}

/* 000aca6c  CBaseEntity::GetMonsterPointer  (85 bytes)
 * undefined4 GetMonsterPointer(undefined4 this, int param_2)
 */
/* CBaseEntity::GetMonsterPointer(edict_s *) */

undefined4 __thiscall CBaseEntity::GetMonsterPointer(undefined4 this,int param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  
  if (param_2 == 0) {
    param_2 = (int)(*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  pvVar2 = (void *)0x0;
  if ((edict_t *)param_2 != (edict_t *)0x0) {
    pvVar2 = ((edict_t *)param_2)->pvPrivateData;
  }
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)((int)pvVar2 + 0x60) + 0x70))(pvVar2);
  }
  return uVar1;
}

/* 000acac4  CBaseEntity::UpdateOwner  (1 bytes)
 * undefined UpdateOwner(void)
 */
/* CBaseEntity::UpdateOwner(void) */

void CBaseEntity::UpdateOwner(void)

{
  return;
}

/* 000acac8  CBaseEntity::FBecomeProne  (6 bytes)
 * undefined4 FBecomeProne(void)
 */
/* CBaseEntity::FBecomeProne(void) */

undefined4 CBaseEntity::FBecomeProne(void)

{
  return 0;
}

/* 000acad0  CBaseEntity::edict  (13 bytes)
 * undefined4 edict(void)
 */
/* CBaseEntity::edict(void) */

edict_t * __thiscall CBaseEntity::edict(CBaseEntity *this)

{
  return this->pev->pContainingEntity;
}

/* 000acae0  CBaseEntity::eoffset  (48 bytes)
 * undefined eoffset(void)
 */
/* CBaseEntity::eoffset(void) */

void __thiscall CBaseEntity::eoffset(CBaseEntity *this)

{
  (*g_engfuncs.pfnEntOffsetOfPEntity)(this->pev->pContainingEntity);
  return;
}

/* 000acb10  CBaseEntity::entindex  (48 bytes)
 * undefined entindex(void)
 */
/* CBaseEntity::entindex(void) */

void __thiscall CBaseEntity::entindex(CBaseEntity *this)

{
  (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  return;
}

/* 000acb40  CBaseEntity::Center  (120 bytes)
 * undefined Center(float * param_1, int * param_2)
 */
/* CBaseEntity::Center(void) */

void CBaseEntity::Center(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *param_2;
  fVar1 = *(float *)(iVar5 + 0xd4);
  fVar2 = *(float *)(iVar5 + 200);
  fVar3 = *(float *)(iVar5 + 0xd8);
  fVar4 = *(float *)(iVar5 + 0xcc);
  *param_1 = (*(float *)(iVar5 + 0xd0) + *(float *)(iVar5 + 0xc4)) * 0.5;
  param_1[1] = (fVar1 + fVar2) * 0.5;
  param_1[2] = (fVar3 + fVar4) * 0.5;
  return;
}

/* 000acbb8  CBaseEntity::EyePosition  (53 bytes)
 * undefined EyePosition(float * param_1, int * param_2)
 */
/* CBaseEntity::EyePosition(void) */

void CBaseEntity::EyePosition(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *param_2;
  fVar1 = *(float *)(iVar5 + 0xc);
  fVar2 = *(float *)(iVar5 + 0x178);
  fVar3 = *(float *)(iVar5 + 0x10);
  fVar4 = *(float *)(iVar5 + 0x17c);
  *param_1 = *(float *)(iVar5 + 8) + *(float *)(iVar5 + 0x174);
  param_1[1] = fVar1 + fVar2;
  param_1[2] = fVar3 + fVar4;
  return;
}

/* 000acbf0  CBaseEntity::EarPosition  (53 bytes)
 * undefined EarPosition(float * param_1, int * param_2)
 */
/* CBaseEntity::EarPosition(void) */

void CBaseEntity::EarPosition(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *param_2;
  fVar1 = *(float *)(iVar5 + 0xc);
  fVar2 = *(float *)(iVar5 + 0x178);
  fVar3 = *(float *)(iVar5 + 0x10);
  fVar4 = *(float *)(iVar5 + 0x17c);
  *param_1 = *(float *)(iVar5 + 8) + *(float *)(iVar5 + 0x174);
  param_1[1] = fVar1 + fVar2;
  param_1[2] = fVar3 + fVar4;
  return;
}

/* 000acc28  CBaseEntity::BodyTarget  (32 bytes)
 * CBaseEntity * BodyTarget(int param_1)
 */
/* CBaseEntity::BodyTarget(Vector const &) */

CBaseEntity * __thiscall CBaseEntity::BodyTarget(CBaseEntity *this,int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x60) + 0xf8))(this,param_1);
  return this;
}

/* 000acc48  CBaseEntity::Illumination  (45 bytes)
 * undefined Illumination(void)
 */
/* CBaseEntity::Illumination(void) */

void __thiscall CBaseEntity::Illumination(CBaseEntity *this)

{
  (*g_engfuncs.pfnGetEntityIllum)(this->pev->pContainingEntity);
  return;
}

/* 000b1cb0  CBaseEntity::SUB_StartFadeOut  (145 bytes)
 * undefined SUB_StartFadeOut(void)
 */
/* CBaseEntity::SUB_StartFadeOut(void) */

void __thiscall CBaseEntity::SUB_StartFadeOut(CBaseEntity *this)

{
  int iVar1;
  vec_t *pvVar2;
  vec_t *pvVar3;
  
  if (this->pev->rendermode == 0) {
    this->pev->renderamt = 255.0;
    this->pev->rendermode = 2;
  }
  this->pev->solid = 0;
  pvVar2 = (vec_t *)&g_vecZero;
  pvVar3 = this->pev->avelocity;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  this->pev->nextthink = gpGlobals->time + 0.1;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = SUB_FadeOut;
  return;
}

/* 000b1d44  CBaseEntity::SUB_FadeOut  (143 bytes)
 * undefined SUB_FadeOut(void)
 */
/* CBaseEntity::SUB_FadeOut(void) */

void __thiscall CBaseEntity::SUB_FadeOut(CBaseEntity *this)

{
  float fVar1;
  
  fVar1 = this->pev->renderamt;
  if (fVar1 <= 7.0) {
    this->pev->renderamt = 0.0;
    this->pev->nextthink = gpGlobals->time + 0.2;
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = SUB_Remove;
  }
  else {
    this->pev->renderamt = fVar1 - 7.0;
    this->pev->nextthink = gpGlobals->time + 0.1;
  }
  return;
}

/* 000b3580  CBaseEntity::FVisible  (304 bytes)
 * bool FVisible(int * param_1)
 */
/* CBaseEntity::FVisible(CBaseEntity *) */

bool __thiscall CBaseEntity::FVisible(CBaseEntity *this,int *param_1)

{
  entvars_t *peVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int *unaff_retaddr;
  undefined4 *local_94;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80 [4];
  undefined1 local_70 [4];
  float local_6c [3];
  undefined1 local_60 [16];
  float local_50;
  
  if (((*(char *)(*param_1 + 0x1a4) < '\0') ||
      ((this->pev->waterlevel != 3 && (*(int *)(*param_1 + 0x1c0) == 3)))) ||
     ((this->pev->waterlevel == 3 && (*(int *)(*param_1 + 0x1c0) == 0)))) {
    bVar2 = false;
  }
  else {
    peVar1 = this->pev;
    local_8c = peVar1->origin[0] + peVar1->view_ofs[0];
    local_88 = peVar1->origin[1] + peVar1->view_ofs[1];
    local_84 = peVar1->origin[2] + peVar1->view_ofs[2];
    pfVar4 = &local_8c;
    pfVar5 = local_6c;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    (**(code **)(param_1[0x18] + 0xfc))(&local_8c,param_1);
    puVar6 = local_80;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *local_94;
      local_94 = local_94 + 1;
      puVar6 = puVar6 + 1;
    }
    UTIL_TraceLine(local_70,local_80,1,1,*(undefined4 *)(*unaff_retaddr + 0x208),local_60);
    bVar2 = local_50 == 1.0;
  }
  return bVar2;
}

/* 000b36b4  CBaseEntity::FVisible  (139 bytes)
 * bool FVisible(int * param_1)
 */
/* CBaseEntity::FVisible(Vector const &) */

bool CBaseEntity::FVisible(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_84;
  undefined4 local_7c [11];
  float local_50;
  
  (**(code **)(param_1[0x18] + 0xfc))(local_7c,param_1);
  puVar2 = local_7c;
  puVar3 = local_7c + 3;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  UTIL_TraceLine(local_7c + 3,param_1,1,1,*(undefined4 *)(*param_1 + 0x208),local_84);
  return local_50 == 1.0;
}

/* 000b3740  CBaseEntity::TraceAttack  (264 bytes)
 * undefined TraceAttack(undefined4 param_1, float param_2, float * param_3, int param_4, uint param_5)
 */
/* CBaseEntity::TraceAttack(entvars_s *, float, Vector, TraceResult *, int) */

void __thiscall
CBaseEntity::TraceAttack
          (CBaseEntity *this,undefined4 param_1,float param_2,float *param_3,int param_4,
          uint param_5)

{
  uint uVar1;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  
  local_3c = *param_3 * 4.0;
  local_38 = param_3[1] * 4.0;
  local_34 = param_3[2] * 4.0;
  local_2c = *(float *)(param_4 + 0x14) - local_3c;
  local_28 = *(float *)(param_4 + 0x18) - local_38;
  local_24 = *(float *)(param_4 + 0x1c) - local_34;
  if (this->pev->takedamage != 0.0) {
    AddMultiDamage(param_1,(int)this,param_2,param_5);
    uVar1 = (*this->vtable[0x19])(this);
    if (uVar1 != 0xffffffff) {
      local_3c = local_2c;
      local_38 = local_28;
      local_34 = local_24;
      SpawnBlood(&local_3c,uVar1,param_2);
      local_3c = *param_3;
      local_38 = param_3[1];
      local_34 = param_3[2];
      (*this->vtable[0x1a])(this,param_2,&local_3c,param_4,param_5);
    }
  }
  return;
}

/* 000b39a4  CBaseEntity::FireBullets  (2401 bytes)
 * undefined FireBullets(uint param_1, float * param_2, float * param_3, float * param_4, float param_5, int param_6, int param_7, int param_8, int param_9)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBaseEntity::FireBullets(unsigned long, Vector, Vector, Vector, float, int, int, int, entvars_s
   *) */

void __thiscall
CBaseEntity::FireBullets
          (CBaseEntity *this,uint param_1,float *param_2,float *param_3,float *param_4,float param_5
          ,int param_6,int param_7,int param_8,int param_9)

{
  float fVar1;
  edict_t *peVar2;
  int iVar3;
  void *pvVar4;
  float *pfVar5;
  float *pfVar6;
  bool bVar7;
  longdouble extraout_ST0;
  longdouble extraout_ST0_00;
  longdouble extraout_ST0_01;
  longdouble extraout_ST0_02;
  longdouble lVar8;
  longdouble lVar9;
  uint local_118;
  float local_bc [4];
  float local_ac [4];
  float local_9c;
  float local_98;
  float local_94;
  float local_8c;
  float local_88;
  float local_84;
  vec_t local_7c;
  vec_t local_78;
  vec_t local_74;
  vec_t local_6c;
  vec_t local_68;
  vec_t local_64;
  undefined1 local_5c [16];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  edict_t *local_2c;
  
  local_6c = gpGlobals->v_right[0];
  local_68 = gpGlobals->v_right[1];
  local_64 = gpGlobals->v_right[2];
  local_7c = gpGlobals->v_up[0];
  local_78 = gpGlobals->v_up[1];
  local_74 = gpGlobals->v_up[2];
  if (param_9 == 0) {
    param_9 = (int)this->pev;
  }
  ClearMultiDamage();
  DAT_0019f258 = 0x1002;
  local_118 = 1;
  if (param_1 != 0) {
    do {
      do {
        (*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
        (*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
        (*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
        (*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
        lVar9 = (longdouble)(float)extraout_ST0_01 + extraout_ST0_02;
        lVar8 = (longdouble)(float)(extraout_ST0_00 + (longdouble)(float)extraout_ST0);
      } while ((longdouble)1.0 < lVar9 * lVar9 + lVar8 * lVar8);
      fVar1 = (float)(extraout_ST0_00 + (longdouble)(float)extraout_ST0) * *param_4;
      lVar9 = lVar9 * (longdouble)param_4[1];
      local_bc[0] = (float)(lVar9 * (longdouble)local_7c);
      local_bc[1] = (float)(lVar9 * (longdouble)local_78);
      local_bc[2] = (float)(lVar9 * (longdouble)local_74);
      local_8c = *param_3 + fVar1 * local_6c + local_bc[0];
      local_88 = param_3[1] + fVar1 * local_68 + local_bc[1];
      lVar8 = (longdouble)param_3[2] + (longdouble)(fVar1 * local_64) + lVar9 * (longdouble)local_74
      ;
      local_84 = (float)lVar8;
      local_9c = param_5 * local_8c;
      local_98 = param_5 * local_88;
      local_94 = (float)((longdouble)param_5 * lVar8);
      local_ac[0] = *param_2 + local_9c;
      local_ac[1] = param_2[1] + local_98;
      local_ac[2] = param_2[2] + local_94;
      pfVar5 = local_ac;
      pfVar6 = local_bc;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar6 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar6 = pfVar6 + 1;
      }
      UTIL_TraceLine(param_2,local_bc,0,this->pev->pContainingEntity,local_5c);
      bVar7 = false;
      if ((param_7 != 0) &&
         (iVar3 = tracerCount_1185 % param_7, tracerCount_1185 = tracerCount_1185 + 1, iVar3 == 0))
      {
        iVar3 = (*this->vtable[0x32])(this);
        if (iVar3 == 0) {
          pfVar5 = local_ac;
          iVar3 = 3;
          pfVar6 = param_2;
        }
        else {
          local_9c = *param_2 + 0.0 + gpGlobals->v_right[0] * 2.0 + gpGlobals->v_forward[0] * 16.0;
          local_98 = gpGlobals->v_forward[1] * 16.0 + gpGlobals->v_right[1] * 2.0 + param_2[1] + 0.0
          ;
          local_94 = param_2[2] + -4.0 + gpGlobals->v_right[2] * 2.0 +
                     gpGlobals->v_forward[2] * 16.0;
          iVar3 = 3;
          pfVar6 = &local_9c;
          pfVar5 = local_ac;
        }
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar5 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          pfVar5 = pfVar5 + 1;
        }
        bVar7 = param_7 != 1;
        (*g_engfuncs.pfnMessageBegin)(5,0x17,local_ac,(edict_t *)0x0);
        (*g_engfuncs.pfnWriteByte)(6);
        (*g_engfuncs.pfnWriteCoord)(local_ac[0]);
        (*g_engfuncs.pfnWriteCoord)(local_ac[1]);
        (*g_engfuncs.pfnWriteCoord)(local_ac[2]);
        (*g_engfuncs.pfnWriteCoord)(local_48);
        (*g_engfuncs.pfnWriteCoord)(local_44);
        (*g_engfuncs.pfnWriteCoord)(local_40);
        (*g_engfuncs.pfnMessageEnd)();
      }
      if (local_4c == 1.0) goto LAB_000b425a;
      peVar2 = local_2c;
      if (local_2c == (edict_t *)0x0) {
        peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      pvVar4 = (void *)0x0;
      if (peVar2 != (edict_t *)0x0) {
        pvVar4 = peVar2->pvPrivateData;
      }
      if (param_8 != 0) {
        local_ac[0] = local_8c;
        local_ac[1] = local_88;
        local_ac[2] = local_84;
        (**(code **)(*(int *)((int)pvVar4 + 0x60) + 0x54))
                  (pvVar4,param_9,(float)param_8,local_ac,local_5c,
                   ((0x10 < param_8) - 1 & 0xfffff000) + 0x2002);
        goto LAB_000b40a0;
      }
      switch(param_6) {
      case 0:
        local_ac[0] = local_8c;
        local_ac[1] = local_88;
        local_ac[2] = local_84;
        (**(code **)(*(int *)((int)pvVar4 + 0x60) + 0x54))
                  (pvVar4,param_9,0x42480000,local_ac,local_5c,0x80);
        local_ac[0] = *param_2;
        local_ac[1] = param_2[1];
        local_ac[2] = param_2[2];
        local_9c = local_bc[0];
        local_98 = local_bc[1];
        local_94 = local_bc[2];
        TEXTURETYPE_PlaySound((int)local_5c,local_ac,&local_9c,param_6);
        bVar7 = false;
        if ((local_2c == (edict_t *)0x0) ||
           (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(local_2c), iVar3 == 0)) {
          bVar7 = true;
        }
        if ((!bVar7) &&
           (*(int *)(((uint)&local_2c->v & (local_2c == (edict_t *)0x0) - 1) + 0x148) != 0)) {
          iVar3 = (*g_engfuncs.pfnRandomLong)(0,2);
          UTIL_DecalTrace((int)local_5c,iVar3 + 0x19);
        }
        break;
      default:
        local_ac[0] = local_8c;
        local_ac[1] = local_88;
        local_ac[2] = local_84;
        (**(code **)(*(int *)((int)pvVar4 + 0x60) + 0x54))
                  (pvVar4,param_9,_DAT_00191a28,local_ac,local_5c,2);
        goto LAB_000b40a0;
      case 7:
        local_ac[0] = local_8c;
        local_ac[1] = local_88;
        local_ac[2] = local_84;
        (**(code **)(*(int *)((int)pvVar4 + 0x60) + 0x54))
                  (pvVar4,param_9,_DAT_00191a2c,local_ac,local_5c,2);
LAB_000b40a0:
        local_ac[0] = *param_2;
        local_ac[1] = param_2[1];
        local_ac[2] = param_2[2];
        local_9c = local_bc[0];
        local_98 = local_bc[1];
        local_94 = local_bc[2];
        TEXTURETYPE_PlaySound((int)local_5c,local_ac,&local_9c,param_6);
        DecalGunshot((int)local_5c,param_6);
        break;
      case 8:
        local_ac[0] = local_8c;
        local_ac[1] = local_88;
        local_ac[2] = local_84;
        (**(code **)(*(int *)((int)pvVar4 + 0x60) + 0x54))
                  (pvVar4,param_9,_DAT_00191a30,local_ac,local_5c,2);
        if (!bVar7) goto LAB_000b40a0;
      }
LAB_000b425a:
      local_ac[0] = *param_2;
      local_ac[1] = param_2[1];
      local_ac[2] = param_2[2];
      local_9c = local_48;
      local_98 = local_44;
      local_94 = local_40;
      UTIL_BubbleTrail(local_ac,&local_9c,(int)ROUND(param_5 * local_4c * 0.015625));
      local_118 = local_118 + 1;
    } while (local_118 <= param_1);
  }
  ApplyMultiDamage(this->pev,param_9);
  return;
}

/* 000b4334  CBaseEntity::FireBulletsPlayer  (1679 bytes)
 * float * FireBulletsPlayer(float * param_1, int * param_2, uint param_3, float * param_4, float * param_5, float * param_6, float param_7, int param_8, undefined4 param_9, int param_10, int param_11, char param_12)
 */
/* CBaseEntity::FireBulletsPlayer(unsigned long, Vector, Vector, Vector, float, int, int, int,
   entvars_s *, int) */

float * CBaseEntity::FireBulletsPlayer
                  (float *param_1,int *param_2,uint param_3,float *param_4,float *param_5,
                  float *param_6,float param_7,int param_8,undefined4 param_9,int param_10,
                  int param_11,char param_12)

{
  float fVar1;
  bool bVar2;
  edict_t *peVar3;
  int iVar4;
  void *pvVar5;
  float *pfVar6;
  float *pfVar7;
  longdouble extraout_ST0;
  longdouble extraout_ST0_00;
  longdouble extraout_ST0_01;
  longdouble extraout_ST0_02;
  undefined4 uVar8;
  char cVar9;
  uint local_d0;
  float local_cc;
  float local_c8;
  float local_bc [4];
  float local_ac [4];
  float local_9c;
  float local_98;
  float local_94;
  float local_8c;
  float local_88;
  float local_84;
  vec_t local_7c;
  vec_t local_78;
  vec_t local_74;
  vec_t local_6c;
  vec_t local_68;
  vec_t local_64;
  undefined1 local_5c [16];
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  edict_t *local_2c;
  
  local_6c = gpGlobals->v_right[0];
  local_68 = gpGlobals->v_right[1];
  local_64 = gpGlobals->v_right[2];
  local_7c = gpGlobals->v_up[0];
  local_78 = gpGlobals->v_up[1];
  local_74 = gpGlobals->v_up[2];
  if (param_11 == 0) {
    param_11 = *param_2;
  }
  ClearMultiDamage();
  DAT_0019f258 = 0x1002;
  local_d0 = 1;
  if (param_3 != 0) {
    do {
      cVar9 = param_12 + (char)local_d0;
      UTIL_SharedRandomFloat(cVar9,-0.5,0.5);
      UTIL_SharedRandomFloat(cVar9 + '\x01',-0.5,0.5);
      local_c8 = (float)(extraout_ST0_00 + (longdouble)(float)extraout_ST0);
      UTIL_SharedRandomFloat(cVar9 + '\x02',-0.5,0.5);
      UTIL_SharedRandomFloat(cVar9 + '\x03',-0.5,0.5);
      local_cc = (float)(extraout_ST0_02 + (longdouble)(float)extraout_ST0_01);
      fVar1 = local_c8 * *param_6;
      local_bc[2] = local_cc * param_6[1];
      local_bc[0] = local_bc[2] * local_7c;
      local_bc[1] = local_bc[2] * local_78;
      local_bc[2] = local_bc[2] * local_74;
      local_8c = *param_5 + fVar1 * local_6c + local_bc[0];
      local_88 = param_5[1] + fVar1 * local_68 + local_bc[1];
      local_84 = param_5[2] + fVar1 * local_64 + local_bc[2];
      local_9c = param_7 * local_8c;
      local_98 = param_7 * local_88;
      local_94 = param_7 * local_84;
      local_ac[0] = *param_4 + local_9c;
      local_ac[1] = param_4[1] + local_98;
      local_ac[2] = param_4[2] + local_94;
      pfVar6 = local_ac;
      pfVar7 = local_bc;
      for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar7 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar7 = pfVar7 + 1;
      }
      UTIL_TraceLine(param_4,local_bc,0,*(undefined4 *)(*param_2 + 0x208),local_5c);
      if (local_4c != 1.0) {
        peVar3 = local_2c;
        if (local_2c == (edict_t *)0x0) {
          peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        }
        pvVar5 = (void *)0x0;
        if (peVar3 != (edict_t *)0x0) {
          pvVar5 = peVar3->pvPrivateData;
        }
        if (param_10 == 0) {
          switch(param_8) {
          case 0:
            local_ac[0] = local_8c;
            local_ac[1] = local_88;
            local_ac[2] = local_84;
            (**(code **)(*(int *)((int)pvVar5 + 0x60) + 0x54))
                      (pvVar5,param_11,0x42480000,local_ac,local_5c,0x80);
            local_ac[0] = *param_4;
            local_ac[1] = param_4[1];
            local_ac[2] = param_4[2];
            local_9c = local_bc[0];
            local_98 = local_bc[1];
            local_94 = local_bc[2];
            TEXTURETYPE_PlaySound((int)local_5c,local_ac,&local_9c,param_8);
            bVar2 = false;
            if ((local_2c == (edict_t *)0x0) ||
               (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(local_2c), iVar4 == 0)) {
              bVar2 = true;
            }
            if ((!bVar2) &&
               (*(int *)(((uint)&local_2c->v & (local_2c == (edict_t *)0x0) - 1) + 0x148) != 0)) {
              iVar4 = (*g_engfuncs.pfnRandomLong)(0,2);
              UTIL_DecalTrace((int)local_5c,iVar4 + 0x19);
            }
            goto LAB_000b48e9;
          default:
            iVar4 = *(int *)((int)pvVar5 + 0x60);
            uVar8 = DAT_001919ec;
            break;
          case 2:
            iVar4 = *(int *)((int)pvVar5 + 0x60);
            uVar8 = DAT_001919f4;
            break;
          case 3:
            iVar4 = *(int *)((int)pvVar5 + 0x60);
            uVar8 = DAT_001919f0;
            break;
          case 4:
            iVar4 = *(int *)((int)pvVar5 + 0x60);
            uVar8 = DAT_001919fc;
          }
          local_ac[2] = local_84;
          local_ac[1] = local_88;
          local_ac[0] = local_8c;
          (**(code **)(iVar4 + 0x54))(pvVar5,param_11,uVar8,local_ac,local_5c,2);
        }
        else {
          local_ac[0] = local_8c;
          local_ac[1] = local_88;
          local_ac[2] = local_84;
          (**(code **)(*(int *)((int)pvVar5 + 0x60) + 0x54))
                    (pvVar5,param_11,(float)param_10,local_ac,local_5c,
                     ((0x10 < param_10) - 1 & 0xfffff000) + 0x2002);
          local_ac[0] = *param_4;
          local_ac[1] = param_4[1];
          local_ac[2] = param_4[2];
          local_9c = local_bc[0];
          local_98 = local_bc[1];
          local_94 = local_bc[2];
          TEXTURETYPE_PlaySound((int)local_5c,local_ac,&local_9c,param_8);
          DecalGunshot((int)local_5c,param_8);
        }
      }
LAB_000b48e9:
      local_ac[0] = *param_4;
      local_ac[1] = param_4[1];
      local_ac[2] = param_4[2];
      local_9c = local_48;
      local_98 = (float)local_44;
      local_94 = (float)local_40;
      UTIL_BubbleTrail(local_ac,&local_9c,(int)ROUND(param_7 * local_4c * 0.015625));
      local_d0 = local_d0 + 1;
    } while (local_d0 <= param_3);
  }
  ApplyMultiDamage(*param_2,param_11);
  fVar1 = param_6[1];
  *param_1 = local_c8 * *param_6;
  param_1[1] = local_cc * fVar1;
  param_1[2] = 0.0;
  return param_1;
}

/* 000b49e0  CBaseEntity::TraceBleed  (550 bytes)
 * undefined TraceBleed(float param_1, float * param_2, int param_3, uint param_4)
 */
/* CBaseEntity::TraceBleed(float, Vector, TraceResult *, int) */

void __thiscall
CBaseEntity::TraceBleed(CBaseEntity *this,float param_1,float *param_2,int param_3,uint param_4)

{
  int iVar1;
  float flLow;
  float flHigh;
  float *pfVar2;
  float *pfVar3;
  longdouble lVar4;
  int local_90;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c [4];
  undefined1 local_5c [16];
  float local_4c;
  
  iVar1 = (*this->vtable[0x19])(this);
  if (((iVar1 != -1) && (param_1 != 0.0)) && ((param_4 & 0x8000c7) != 0)) {
    if (10.0 <= param_1) {
      if (25.0 <= param_1) {
        flHigh = 0.3;
        local_90 = 4;
      }
      else {
        flHigh = 0.2;
        local_90 = 2;
      }
    }
    else {
      flHigh = 0.1;
      local_90 = 1;
    }
    if (local_90 != 0) {
      flLow = -flHigh;
      do {
        local_7c = *param_2 * -1.0;
        local_78 = param_2[1] * -1.0;
        local_74 = param_2[2] * -1.0;
        pfVar2 = &local_7c;
        pfVar3 = local_6c;
        for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pfVar3 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          pfVar3 = pfVar3 + 1;
        }
        lVar4 = (longdouble)(*g_engfuncs.pfnRandomFloat)(flLow,flHigh);
        local_6c[0] = (float)(lVar4 + (longdouble)local_6c[0]);
        lVar4 = (longdouble)(*g_engfuncs.pfnRandomFloat)(flLow,flHigh);
        local_6c[1] = (float)(lVar4 + (longdouble)local_6c[1]);
        lVar4 = (longdouble)(*g_engfuncs.pfnRandomFloat)(flLow,flHigh);
        local_6c[2] = (float)(lVar4 + (longdouble)local_6c[2]);
        local_7c = *(float *)(param_3 + 0x14) + local_6c[0] * -172.0;
        local_78 = *(float *)(param_3 + 0x18) + local_6c[1] * -172.0;
        local_74 = *(float *)(param_3 + 0x1c) + local_6c[2] * -172.0;
        UTIL_TraceLine(param_3 + 0x14,&local_7c,1,this->pev->pContainingEntity,local_5c);
        if (local_4c != 1.0) {
          iVar1 = (*this->vtable[0x19])(this);
          UTIL_BloodDecalTrace((int)local_5c,iVar1);
        }
        local_90 = local_90 + -1;
      } while (local_90 != 0);
    }
  }
  return;
}

/* 000e2c50  CBaseEntity::Think  (58 bytes)
 * undefined Think(void)
 */
/* CBaseEntity::Think(void) */

void __thiscall CBaseEntity::Think(CBaseEntity *this)

{
  code *pcVar1;
  
  if (*(short *)&this->field_0xe != 0) {
    if (*(short *)&this->field_0xe < 0) {
      pcVar1 = *(code **)&this->field_0x10;
    }
    else {
      pcVar1 = *(code **)(*(int *)((int)&this->pev + (int)*(short *)&this->field_0x10) + -4 +
                         *(short *)&this->field_0xe * 4);
    }
    (*pcVar1)((int)&this->pev + (int)*(short *)&this->field_0xc);
  }
  return;
}

/* 000e2c8c  CBaseEntity::Touch  (62 bytes)
 * undefined Touch(undefined4 param_1)
 */
/* CBaseEntity::Touch(CBaseEntity *) */

void __thiscall CBaseEntity::Touch(CBaseEntity *this,undefined4 param_1)

{
  code *pcVar1;
  
  if (*(short *)&this->field_0x16 != 0) {
    if (*(short *)&this->field_0x16 < 0) {
      pcVar1 = *(code **)&this->field_0x18;
    }
    else {
      pcVar1 = *(code **)(*(int *)((int)&this->pev + (int)*(short *)&this->field_0x18) + -4 +
                         *(short *)&this->field_0x16 * 4);
    }
    (*pcVar1)((int)&this->pev + (int)*(short *)&this->field_0x14,param_1);
  }
  return;
}

/* 000e2ccc  CBaseEntity::UpdateOnRemove  (113 bytes)
 * undefined UpdateOnRemove(void)
 */
/* CBaseEntity::UpdateOnRemove(void) */

void __thiscall CBaseEntity::UpdateOnRemove(CBaseEntity *this)

{
  int iVar1;
  
  if (((this->pev->flags & 0x10000) != 0) && (iVar1 = 0, 0 < DAT_001911a8)) {
    do {
      if (*(entvars_t **)(DAT_001911ac + iVar1 * 4) == this->pev) {
        *(undefined4 *)(DAT_001911ac + iVar1 * 4) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_001911a8);
  }
  if (this->pev->globalname != 0) {
    CGlobalState::EntitySetState((CGlobalState *)&gGlobalState,this->pev->globalname,2);
  }
  return;
}

/* 000e2d40  CBaseEntity::SUB_Remove  (119 bytes)
 * undefined SUB_Remove(void)
 */
/* CBaseEntity::SUB_Remove(void) */

void __thiscall CBaseEntity::SUB_Remove(CBaseEntity *this)

{
  (*this->vtable[0x3a])(this);
  if (0.0 < this->pev->health) {
    this->pev->health = 0.0;
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,"SUB_Remove called on entity with health > 0\n");
  }
  (*g_engfuncs.pfnRemoveEntity)(this->pev->pContainingEntity);
  return;
}

/* 000e2db8  CBaseEntity::SUB_DoNothing  (1 bytes)
 * undefined SUB_DoNothing(void)
 */
/* CBaseEntity::SUB_DoNothing(void) */

void CBaseEntity::SUB_DoNothing(void)

{
  return;
}

/* 000e2efc  CBaseEntity::SUB_UseTargets  (83 bytes)
 * undefined SUB_UseTargets(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
/* CBaseEntity::SUB_UseTargets(CBaseEntity *, USE_TYPE, float) */

void __thiscall
CBaseEntity::SUB_UseTargets
          (CBaseEntity *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (this->pev->target != 0) {
    FireTargets((int)(gpGlobals->pStringBase + this->pev->target),param_1,this,param_2,param_3);
  }
  return;
}

