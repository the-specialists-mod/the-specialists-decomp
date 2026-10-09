/* ts_i386.so - CPendulum (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a66ac  CPendulum::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CPendulum::Save(CSave &) */

undefined4 __thiscall CPendulum::Save(CPendulum *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CPendulum",(int)this,(int *)m_SaveData,8);
  }
  return uVar2;
}

/* 000a66fc  CPendulum::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CPendulum::Restore(CRestore &) */

undefined4 __thiscall CPendulum::Restore(CPendulum *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CPendulum",(int)this,(int)m_SaveData,8);
  }
  return uVar2;
}

/* 000a674c  CPendulum::KeyValue  (156 bytes)
 * undefined KeyValue(int param_1)
 */
/* CPendulum::KeyValue(KeyValueData_s *) */

void __thiscall CPendulum::KeyValue(CPendulum *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"distance");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this->field_0x68 = (float)lVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"damp");
    if (iVar1 == 0) {
      lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      *(float *)&this->field_0x70 = (float)(lVar2 * (longdouble)0.001);
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

/* 000a67f0  CPendulum::Spawn  (487 bytes)
 * undefined Spawn(void)
 */
/* CPendulum::Spawn(void) */

void __thiscall CPendulum::Spawn(CPendulum *this)

{
  entvars_t *peVar1;
  entvars_t *peVar2;
  int iVar3;
  vec_t *pvVar4;
  float *pfVar5;
  vec_t *pvVar6;
  float *pfVar7;
  float local_3c [7];
  float local_20;
  
  CBaseToggle::AxisDir((int)this->pev);
  if ((this->pev->spawnflags & 8) == 0) {
    this->pev->solid = 4;
  }
  else {
    this->pev->solid = 0;
  }
  this->pev->movetype = 7;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  if (*(float *)&this->field_0x68 != 0.0) {
    if (this->pev->speed == 0.0) {
      this->pev->speed = 100.0;
    }
    peVar1 = this->pev;
    *(float *)&this->field_0x64 =
         (peVar1->speed * peVar1->speed) /
         (ABS(*(float *)&this->field_0x68) + ABS(*(float *)&this->field_0x68));
    *(float *)&this->field_0x74 = peVar1->speed;
    pvVar4 = peVar1->angles;
    pvVar6 = (vec_t *)&this->field_0x88;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar6 = *pvVar4;
      pvVar4 = pvVar4 + 1;
      pvVar6 = pvVar6 + 1;
    }
    peVar1 = this->pev;
    local_20 = *(float *)&this->field_0x68 * 0.5;
    peVar2 = this->pev;
    local_3c[0] = peVar1->angles[0] + local_20 * peVar2->movedir[0];
    local_3c[1] = peVar1->angles[1] + local_20 * peVar2->movedir[1];
    local_3c[2] = peVar1->angles[2] + local_20 * peVar2->movedir[2];
    pfVar5 = local_3c;
    pfVar7 = (float *)&this->field_0x7c;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar7 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar7 = pfVar7 + 1;
    }
    if ((this->pev->spawnflags & 1) != 0) {
      *(undefined4 *)&this->field_0xc = 0xffff0000;
      *(code **)&this->field_0x10 = CBaseEntity::SUB_CallUseToggle;
      this->pev->nextthink = gpGlobals->time + 0.1;
    }
    this->pev->speed = 0.0;
    *(undefined4 *)&this->field_0x1c = 0xffff0000;
    *(code **)&this->field_0x20 = PendulumUse;
    if ((this->pev->spawnflags & 2) != 0) {
      *(undefined4 *)&this->field_0x14 = 0xffff0000;
      *(code **)&this->field_0x18 = RopeTouch;
    }
  }
  return;
}

/* 000a69dc  CPendulum::PendulumUse  (310 bytes)
 * undefined PendulumUse(int * param_1)
 */
/* CPendulum::PendulumUse(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CPendulum::PendulumUse(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 *puVar7;
  longdouble lVar8;
  float local_2c [7];
  
  if (*(float *)(*param_1 + 0x1f8) == 0.0) {
    *(float *)(*param_1 + 0x104) = *(float *)(*param_1 + 0x100) + 0.1;
    param_1[0x1b] = (int)gpGlobals->time;
    param_1[3] = -0x10000;
    param_1[4] = (int)Swing;
    param_1[0x1e] = param_1[0x1d];
  }
  else if ((*(byte *)(*param_1 + 0x1a0) & 0x10) == 0) {
    *(undefined4 *)(*param_1 + 0x1f8) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    puVar5 = &g_vecZero;
    puVar7 = (undefined4 *)(*param_1 + 0x5c);
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  else {
    lVar8 = CBaseToggle::AxisDelta
                      ((byte_conflict)*(undefined4 *)(*param_1 + 0x1a0),(float *)(*param_1 + 0x50),
                       (float *)(param_1 + 0x22));
    iVar3 = *param_1;
    fVar1 = (float)param_1[0x1d];
    local_2c[0] = fVar1 * *(float *)(iVar3 + 0x44);
    local_2c[1] = fVar1 * *(float *)(iVar3 + 0x48);
    local_2c[2] = fVar1 * *(float *)(iVar3 + 0x4c);
    pfVar4 = local_2c;
    pfVar6 = (float *)(iVar3 + 0x5c);
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar6 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar6 = pfVar6 + 1;
    }
    *(float *)(*param_1 + 0x104) =
         (float)(lVar8 / (longdouble)(float)param_1[0x1d] + (longdouble)*(float *)(*param_1 + 0x100)
                );
    param_1[3] = -0x10000;
    param_1[4] = (int)Stop;
  }
  return;
}

/* 000a6b18  CPendulum::Stop  (86 bytes)
 * undefined Stop(void)
 */
/* CPendulum::Stop(void) */

void __thiscall CPendulum::Stop(CPendulum *this)

{
  int iVar1;
  vec_t *pvVar2;
  vec_t *pvVar3;
  
  pvVar2 = (vec_t *)&this->field_0x88;
  pvVar3 = this->pev->angles;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  this->pev->speed = 0.0;
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  pvVar2 = (vec_t *)&g_vecZero;
  pvVar3 = this->pev->avelocity;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  return;
}

/* 000a6b70  CPendulum::Blocked  (32 bytes)
 * undefined Blocked(int param_1)
 */
/* CPendulum::Blocked(CBaseEntity *) */

void CPendulum::Blocked(int param_1)

{
  *(float *)(param_1 + 0x6c) = gpGlobals->time;
  return;
}

/* 000a6b90  CPendulum::Swing  (474 bytes)
 * undefined Swing(void)
 */
/* CPendulum::Swing(void) */

void __thiscall CPendulum::Swing(CPendulum *this)

{
  float fVar1;
  float fVar2;
  entvars_t *peVar3;
  int iVar4;
  float *pfVar5;
  vec_t *pvVar6;
  vec_t *pvVar7;
  longdouble lVar8;
  float local_2c [7];
  
  lVar8 = CBaseToggle::AxisDelta
                    ((byte_conflict)this->pev->spawnflags,this->pev->angles,
                     (float *)&this->field_0x7c);
  fVar2 = gpGlobals->time - *(float *)&this->field_0x6c;
  *(float *)&this->field_0x6c = gpGlobals->time;
  if ((lVar8 <= (longdouble)0.0) || ((longdouble)*(float *)&this->field_0x64 <= (longdouble)0.0)) {
    peVar3 = this->pev;
    fVar1 = fVar2 * *(float *)&this->field_0x64 + peVar3->speed;
  }
  else {
    peVar3 = this->pev;
    fVar1 = peVar3->speed - fVar2 * *(float *)&this->field_0x64;
  }
  peVar3->speed = fVar1;
  if (this->pev->speed <= *(float *)&this->field_0x74) {
    if (this->pev->speed < -*(float *)&this->field_0x74) {
      this->pev->speed = -*(float *)&this->field_0x74;
    }
  }
  else {
    this->pev->speed = *(float *)&this->field_0x74;
  }
  peVar3 = this->pev;
  fVar1 = peVar3->speed;
  local_2c[0] = fVar1 * peVar3->movedir[0];
  local_2c[1] = fVar1 * peVar3->movedir[1];
  local_2c[2] = fVar1 * peVar3->movedir[2];
  pfVar5 = local_2c;
  pvVar6 = peVar3->avelocity;
  for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pvVar6 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pvVar6 = pvVar6 + 1;
  }
  this->pev->nextthink = this->pev->ltime + 0.1;
  if (*(float *)&this->field_0x70 != 0.0) {
    fVar2 = *(float *)&this->field_0x78 -
            *(float *)&this->field_0x70 * *(float *)&this->field_0x78 * fVar2;
    *(float *)&this->field_0x78 = fVar2;
    if (fVar2 < 30.0) {
      pvVar6 = (vec_t *)&this->field_0x7c;
      pvVar7 = this->pev->angles;
      for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pvVar7 = *pvVar6;
        pvVar6 = pvVar6 + 1;
        pvVar7 = pvVar7 + 1;
      }
      this->pev->speed = 0.0;
      *(undefined4 *)&this->field_0xc = 0;
      *(undefined4 *)&this->field_0x10 = 0;
      pvVar6 = (vec_t *)&g_vecZero;
      pvVar7 = this->pev->avelocity;
      for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pvVar7 = *pvVar6;
        pvVar6 = pvVar6 + 1;
        pvVar7 = pvVar7 + 1;
      }
    }
    else if (*(float *)&this->field_0x78 < this->pev->speed) {
      this->pev->speed = *(float *)&this->field_0x78;
    }
    else if (this->pev->speed < -*(float *)&this->field_0x78) {
      this->pev->speed = -*(float *)&this->field_0x78;
    }
  }
  return;
}

/* 000a6d70  CPendulum::Touch  (374 bytes)
 * undefined Touch(int * param_1)
 */
/* CPendulum::Touch(CBaseEntity *) */

void __thiscall CPendulum::Touch(CPendulum *this,int *param_1)

{
  int iVar1;
  entvars_t *peVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  float local_4c;
  float local_48;
  float fStack_44;
  float local_3c [7];
  float fStack_20;
  
  iVar1 = *param_1;
  peVar2 = this->pev;
  if ((0.0 < peVar2->dmg) && (*(float *)(iVar1 + 0x16c) != 0.0)) {
    local_70 = peVar2->dmg * peVar2->speed * 0.01;
    if (local_70 < 0.0) {
      local_70 = -local_70;
    }
    (**(code **)(param_1[0x18] + 0x58))(param_1,this->pev,this->pev,local_70,1);
    VecBModelOrigin(&local_6c,(int)this->pev);
    local_6c = *(float *)(iVar1 + 8) - local_6c;
    local_68 = *(float *)(iVar1 + 0xc) - local_68;
    fStack_64 = *(float *)(iVar1 + 0x10) - fStack_64;
    fStack_20 = SQRT(fStack_64 * fStack_64 + local_68 * local_68 + local_6c * local_6c);
    if (fStack_20 == 0.0) {
      fStack_44 = 1.0;
      local_4c = 0.0;
      local_48 = 0.0;
    }
    else {
      fStack_20 = 1.0 / fStack_20;
      local_4c = fStack_20 * local_6c;
      local_48 = fStack_20 * local_68;
      fStack_44 = fStack_20 * fStack_64;
    }
    local_3c[0] = local_70 * local_4c;
    local_3c[1] = local_70 * local_48;
    local_3c[2] = local_70 * fStack_44;
    pfVar4 = local_3c;
    pfVar5 = (float *)(iVar1 + 0x20);
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
  }
  return;
}

/* 000a6eec  CPendulum::RopeTouch  (143 bytes)
 * undefined RopeTouch(int * param_1)
 */
/* CPendulum::RopeTouch(CBaseEntity *) */

void __thiscall CPendulum::RopeTouch(CPendulum *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  iVar2 = (**(code **)(param_1[0x18] + 200))(param_1);
  if (iVar2 == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"Not a client\n");
  }
  else if (*(edict_t **)(iVar1 + 0x208) != this->pev->enemy) {
    this->pev->enemy = *(edict_t **)(*param_1 + 0x208);
    puVar3 = &g_vecZero;
    puVar4 = (undefined4 *)(iVar1 + 0x20);
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(iVar1 + 0x108) = 0;
  }
  return;
}

/* 000a7588  CPendulum::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CPendulum::ObjectCaps(void) */

undefined4 CPendulum::ObjectCaps(void)

{
  return 0;
}

