/* ts_i386.so - CPushable (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c1688  CPushable::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CPushable::Save(CSave &) */

undefined4 __thiscall CPushable::Save(CPushable *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBreakable::Save((CBreakable *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CPushable",(int)this,(int *)m_SaveData,2);
  }
  return uVar2;
}

/* 000c16d8  CPushable::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CPushable::Restore(CRestore &) */

undefined4 __thiscall CPushable::Restore(CPushable *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBreakable::Restore((CBreakable *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CPushable",(int)this,(int)m_SaveData,2);
  }
  return uVar2;
}

/* 000c174c  CPushable::Spawn  (324 bytes)
 * undefined Spawn(void)
 */
/* CPushable::Spawn(void) */

void __thiscall CPushable::Spawn(CPushable *this)

{
  int *piVar1;
  entvars_t *peVar2;
  
  if ((char)this->pev->spawnflags < '\0') {
    CBreakable::Spawn((CBreakable *)this);
  }
  else {
    (*this->vtable[10])(this);
  }
  this->pev->movetype = 0xd;
  this->pev->solid = 2;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  if (399.0 < this->pev->friction) {
    this->pev->friction = 399.0;
  }
  *(float *)&this->field_0x11c = 400.0 - this->pev->friction;
  piVar1 = &this->pev->flags;
  *piVar1 = *piVar1 | 0x8000;
  this->pev->friction = 0.0;
  this->pev->origin[2] = this->pev->origin[2] + 1.0;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  peVar2 = this->pev;
  peVar2->skin = (int)ROUND((peVar2->maxs[1] - peVar2->mins[1]) *
                            (peVar2->maxs[0] - peVar2->mins[0]) * (float)peVar2->skin * 0.0005);
  *(undefined4 *)&this->field_0x120 = 0;
  return;
}

/* 000c1894  CPushable::Precache  (96 bytes)
 * undefined Precache(void)
 */
/* CPushable::Precache(void) */

void __thiscall CPushable::Precache(CPushable *this)

{
  (*g_engfuncs.pfnPrecacheSound)(m_soundNames);
  (*g_engfuncs.pfnPrecacheSound)(PTR_s_debris_pushbox2_wav_00118304);
  (*g_engfuncs.pfnPrecacheSound)(PTR_s_debris_pushbox3_wav_00118308);
  if ((char)this->pev->spawnflags < '\0') {
    CBreakable::Precache((CBreakable *)this);
  }
  return;
}

/* 000c18f4  CPushable::KeyValue  (562 bytes)
 * undefined KeyValue(int param_1)
 */
/* CPushable::KeyValue(KeyValueData_s *) */

void __thiscall CPushable::KeyValue(CPushable *this,int param_1)

{
  entvars_t *peVar1;
  int iVar2;
  undefined4 uVar3;
  longdouble lVar4;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar2 = strcmp(*(char **)(param_1 + 4),"size");
  if (iVar2 == 0) {
    uVar3 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)(param_1 + 0xc) = 1;
    switch(uVar3) {
    case 0:
      local_2c = 0x41000000;
      local_3c = 0xc1000000;
      local_38 = local_3c;
      local_34 = local_3c;
      local_28 = local_2c;
      local_24 = local_2c;
      UTIL_SetSize((int)this->pev,&local_3c,&local_2c);
      break;
    default:
      local_5c = 0x41800000;
      local_54 = 0x42100000;
      local_4c = 0xc1800000;
      local_44 = 0xc2100000;
      local_58 = local_5c;
      local_48 = local_4c;
      UTIL_SetSize((int)this->pev,&local_4c,&local_5c);
      break;
    case 2:
      local_2c = 0x41800000;
      local_24 = 0x41900000;
      local_3c = 0x42000000;
      local_34 = 0x42100000;
      local_5c = 0xc1800000;
      local_54 = 0xc1900000;
      local_4c = 0xc2000000;
      local_44 = 0xc2100000;
      local_58 = local_5c;
      local_48 = local_4c;
      local_38 = local_3c;
      local_28 = local_2c;
      UTIL_SetSize((int)this->pev,&local_4c,&local_3c);
      break;
    case 3:
      local_2c = 0x41800000;
      local_24 = 0x41900000;
      local_5c = 0xc1800000;
      local_54 = 0xc1900000;
      local_58 = local_5c;
      local_28 = local_2c;
      UTIL_SetSize((int)this->pev,&local_5c,&local_2c);
    }
  }
  else {
    iVar2 = strcmp(*(char **)(param_1 + 4),"buoyancy");
    if (iVar2 == 0) {
      peVar1 = this->pev;
      lVar4 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      peVar1->skin = (int)ROUND(lVar4);
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      CBreakable::KeyValue((CBreakable *)this,param_1);
    }
  }
  return;
}

/* 000c1b44  CPushable::Use  (176 bytes)
 * undefined Use(int * param_1, int * param_2)
 */
/* CPushable::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void __thiscall CPushable::Use(CPushable *this,int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((param_1 == (int *)0x0) || (iVar2 = (**(code **)(param_1[0x18] + 200))(param_1), iVar2 == 0))
  {
    if ((char)this->pev->spawnflags < '\0') {
      CBreakable::Use((CBreakable *)this,param_1,param_2);
    }
    return;
  }
  iVar2 = *param_1;
  bVar1 = false;
  if ((*(float *)(iVar2 + 0x20) == g_vecZero) &&
     ((*(float *)(iVar2 + 0x24) == DAT_00190ef0 && (*(float *)(iVar2 + 0x28) == DAT_00190ef4)))) {
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
  Move(this,param_1,0);
  return;
}

/* 000c1bf8  CPushable::Touch  (86 bytes)
 * undefined Touch(int * param_1)
 */
/* CPushable::Touch(CBaseEntity *) */

void __thiscall CPushable::Touch(CPushable *this,int *param_1)

{
  int iVar1;
  
  iVar1 = strcmp(gpGlobals->pStringBase + *(int *)*param_1,"worldspawn");
  if (iVar1 != 0) {
    Move(this,param_1,1);
  }
  return;
}

/* 000c1c50  CPushable::Move  (673 bytes)
 * undefined Move(int * param_1, int param_2)
 */
/* CPushable::Move(CBaseEntity *, int) */

void __thiscall CPushable::Move(CPushable *this,int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  entvars_t *peVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  edict_t *peVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float local_2c [7];
  
  iVar5 = *param_1;
  bVar3 = false;
  pfVar7 = (float *)(iVar5 + 0x20);
  pfVar8 = local_2c;
  for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar8 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar8 = pfVar8 + 1;
  }
  iVar6 = (**(code **)(param_1[0x18] + 200))(param_1);
  if ((iVar6 != 0) && ((*(byte *)(iVar5 + 0x180) & 0x20) != 0)) {
    local_2c[0] = local_2c[0] * 0.3;
    local_2c[1] = local_2c[1] * 0.3;
    local_2c[2] = local_2c[2] * 0.3;
  }
  if ((((*(byte *)(iVar5 + 0x1a5) & 2) == 0) || (*(int *)(iVar5 + 0x19c) == 0)) ||
     (peVar4 = (entvars_t *)(*(int *)(iVar5 + 0x19c) + 0x80U & (*(int *)(iVar5 + 0x19c) == 0) - 1),
     peVar4 != this->pev)) {
    iVar6 = (**(code **)(param_1[0x18] + 200))(param_1);
    if (iVar6 != 0) {
      if ((param_2 != 0) && ((*(uint *)(iVar5 + 0x180) & 0x28) == 0)) {
        return;
      }
      bVar3 = true;
    }
    if (bVar3) {
      if ((*(byte *)(iVar5 + 0x1a5) & 2) == 0) {
        if (this->pev->waterlevel < 1) {
          return;
        }
        fVar1 = 0.1;
      }
      else {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.25;
    }
    this->pev->velocity[0] = fVar1 * local_2c[0] + this->pev->velocity[0];
    this->pev->velocity[1] = fVar1 * local_2c[1] + this->pev->velocity[1];
    fVar1 = this->pev->velocity[0];
    fVar2 = this->pev->velocity[1];
    fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    if ((param_2 != 0) && (*(float *)&this->field_0x11c < fVar1)) {
      this->pev->velocity[0] = (*(float *)&this->field_0x11c * this->pev->velocity[0]) / fVar1;
      this->pev->velocity[1] = (*(float *)&this->field_0x11c * this->pev->velocity[1]) / fVar1;
    }
    if (bVar3) {
      *(vec_t *)(iVar5 + 0x20) = this->pev->velocity[0];
      *(vec_t *)(iVar5 + 0x24) = this->pev->velocity[1];
      if (0.7 < gpGlobals->time - *(float *)&this->field_0x120) {
        *(float *)&this->field_0x120 = gpGlobals->time;
        if ((fVar1 <= 0.0) || ((this->pev->flags & 0x200) == 0)) {
          uVar13 = 0x20;
          uVar12 = 0;
          uVar11 = 0;
          pcVar10 = (&m_soundNames)[*(int *)&this->field_0x118];
          peVar9 = this->pev->pContainingEntity;
        }
        else {
          iVar5 = (*g_engfuncs.pfnRandomLong)(0,2);
          *(int *)&this->field_0x118 = iVar5;
          uVar11 = 0x3f000000;
          uVar13 = 0;
          uVar12 = 0x3f4ccccd;
          pcVar10 = (&m_soundNames)[iVar5];
          peVar9 = this->pev->pContainingEntity;
        }
        EMIT_SOUND_DYN((int)peVar9,1,pcVar10,uVar11,uVar12,uVar13,100,0.5);
      }
    }
  }
  else if (0 < peVar4->waterlevel) {
    peVar4->velocity[2] = local_2c[2] * 0.1 + peVar4->velocity[2];
  }
  return;
}

/* 000c1ef8  CPushable::TakeDamage  (71 bytes)
 * bool TakeDamage(int param_1, int param_2, float param_3, uint param_4)
 */
/* CPushable::TakeDamage(entvars_s *, entvars_s *, float, int) */

bool __thiscall
CPushable::TakeDamage(CPushable *this,int param_1,int param_2,float param_3,uint param_4)

{
  bool bVar1;
  
  if ((char)this->pev->spawnflags < '\0') {
    bVar1 = CBreakable::TakeDamage((CBreakable *)this,param_1,param_2,param_3,param_4);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

/* 000c20d4  CPushable::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CPushable::ObjectCaps(void) */

undefined4 CPushable::ObjectCaps(void)

{
  return 0x10;
}

/* 000c20dc  CPushable::MaxSpeed  (11 bytes)
 * longdouble MaxSpeed(CPushable * this)
 */
/* CPushable::MaxSpeed(void) */

longdouble __thiscall CPushable::MaxSpeed(CPushable *this)

{
  return (longdouble)*(float *)&this->field_0x11c;
}

