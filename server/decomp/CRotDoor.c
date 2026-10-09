/* ts_i386.so - CRotDoor (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000b7838  CRotDoor::BreakableRespawn  (383 bytes)
 * undefined BreakableRespawn(char param_1)
 */
/* CRotDoor::BreakableRespawn(bool) */

void __thiscall CRotDoor::BreakableRespawn(CRotDoor *this,char param_1)

{
  undefined1 *this_00;
  entvars_t *peVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int *piVar4;
  vec_t *pvVar5;
  vec_t *pvVar6;
  undefined1 local_40 [4];
  vec_t local_3c;
  vec_t local_38;
  vec_t local_34;
  vec_t local_2c;
  vec_t local_28;
  vec_t local_24;
  
  if (((this->pev->deadflag == 2) || (this->pev->effects == 0x80)) || (param_1 != '\0')) {
    peVar1 = this->pev;
    local_2c = peVar1->absmin[0];
    local_28 = peVar1->absmin[1];
    local_24 = peVar1->absmin[2];
    peVar1 = this->pev;
    local_3c = peVar1->absmax[0];
    local_38 = peVar1->absmax[1];
    local_34 = peVar1->absmax[2];
    iVar3 = UTIL_EntitiesInBox((int)local_40,1,&local_2c,&local_3c,0x2008);
    if (iVar3 == 0) {
      this->pev->deadflag = 0;
      this->pev->effects = 0;
      pvVar5 = (vec_t *)&this->field_0x130;
      pvVar6 = this->pev->angles;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar6 = *pvVar5;
        pvVar5 = pvVar5 + 1;
        pvVar6 = pvVar6 + 1;
      }
      pvVar5 = (vec_t *)&g_vecZero;
      pvVar6 = this->pev->avelocity;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar6 = *pvVar5;
        pvVar5 = pvVar5 + 1;
        pvVar6 = pvVar6 + 1;
      }
      pvVar5 = (vec_t *)&g_vecZero;
      pvVar6 = this->pev->velocity;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar6 = *pvVar5;
        pvVar5 = pvVar5 + 1;
        pvVar6 = pvVar6 + 1;
      }
      *(undefined4 *)&this->field_0x14 = 0;
      *(undefined4 *)&this->field_0x18 = 0;
      *(undefined4 *)&this->field_0xc = 0;
      *(undefined4 *)&this->field_0x10 = 0;
      (*this->vtable[9])(this);
    }
    else {
      this_00 = &this->field_0x104;
      bVar2 = int((EHANDLE *)this_00);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        piVar4 = (int *)EHANDLE::operator->((EHANDLE *)this_00);
        *(float *)(*piVar4 + 0x104) = gpGlobals->time + 5.0;
        iVar3 = EHANDLE::operator->((EHANDLE *)this_00);
        *(undefined4 *)(iVar3 + 0xc) = 0xffff0000;
        *(code **)(iVar3 + 0x10) = CInfoBreakable::RespawnThink;
      }
    }
  }
  return;
}

/* 000b79b8  CRotDoor::Spawn  (866 bytes)
 * undefined Spawn(void)
 */
/* CRotDoor::Spawn(void) */

void __thiscall CRotDoor::Spawn(CRotDoor *this)

{
  entvars_t *peVar1;
  bool bVar2;
  undefined3 extraout_var;
  int *piVar3;
  undefined3 extraout_var_00;
  uint uVar4;
  int iVar5;
  vec_t *pvVar6;
  undefined4 *puVar7;
  float *pfVar8;
  vec_t *pvVar9;
  undefined4 *puVar10;
  float *pfVar11;
  edict_t *peVar12;
  float local_3c [4];
  float local_2c [7];
  
  pvVar6 = this->pev->origin;
  pvVar9 = (vec_t *)&this->field_0x124;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar9 = *pvVar6;
    pvVar6 = pvVar6 + 1;
    pvVar9 = pvVar9 + 1;
  }
  pvVar6 = this->pev->angles;
  pvVar9 = (vec_t *)&this->field_0x130;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar9 = *pvVar6;
    pvVar6 = pvVar6 + 1;
    pvVar9 = pvVar9 + 1;
  }
  this->field_0x13c = 0;
  *(undefined4 *)&this->field_0x110 = 0;
  *(undefined4 *)&this->field_0x114 = 0;
  if (*(float *)&this->field_0x118 <= 0.0) {
    this->pev->takedamage = 0.0;
  }
  else {
    this->pev->takedamage = 1.0;
  }
  (*this->vtable[10])(this);
  CBaseToggle::AxisDir((int)this->pev);
  peVar1 = this->pev;
  if ((peVar1->spawnflags & 2) != 0) {
    local_2c[0] = peVar1->movedir[0] * -1.0;
    local_2c[1] = peVar1->movedir[1] * -1.0;
    local_2c[2] = peVar1->movedir[2] * -1.0;
    pfVar8 = local_2c;
    pvVar6 = peVar1->movedir;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pvVar6 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pvVar6 = pvVar6 + 1;
    }
  }
  pvVar6 = this->pev->angles;
  pvVar9 = (vec_t *)&this->field_0xb4;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar9 = *pvVar6;
    pvVar6 = pvVar6 + 1;
    pvVar9 = pvVar9 + 1;
  }
  peVar1 = this->pev;
  local_3c[2] = *(float *)&this->field_0x88;
  local_3c[0] = local_3c[2] * peVar1->movedir[0];
  local_3c[1] = local_3c[2] * peVar1->movedir[1];
  local_3c[2] = local_3c[2] * peVar1->movedir[2];
  local_2c[0] = peVar1->angles[0] + local_3c[0];
  local_2c[1] = peVar1->angles[1] + local_3c[1];
  local_2c[2] = peVar1->angles[2] + local_3c[2];
  pfVar8 = local_2c;
  pfVar11 = (float *)&this->field_0xc0;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar11 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar11 = pfVar11 + 1;
  }
  if ((this->pev->spawnflags & 8) == 0) {
    this->pev->solid = 4;
  }
  else {
    this->pev->solid = 0;
  }
  this->pev->movetype = 7;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  if (this->pev->speed == 0.0) {
    this->pev->speed = 100.0;
  }
  if ((this->pev->spawnflags & 1) != 0) {
    pvVar6 = (vec_t *)&this->field_0xc0;
    pvVar9 = this->pev->angles;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pvVar9 = *pvVar6;
      pvVar6 = pvVar6 + 1;
      pvVar9 = pvVar9 + 1;
    }
    local_3c[0] = *(float *)&this->field_0xb4;
    local_3c[1] = *(float *)&this->field_0xb8;
    local_3c[2] = *(float *)&this->field_0xbc;
    puVar7 = (undefined4 *)&this->field_0xb4;
    puVar10 = (undefined4 *)&this->field_0xc0;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
    pfVar8 = local_3c;
    pfVar11 = (float *)&this->field_0xb4;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar11 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar11 = pfVar11 + 1;
    }
    peVar1 = this->pev;
    local_2c[0] = peVar1->movedir[0] * -1.0;
    local_2c[1] = peVar1->movedir[1] * -1.0;
    local_2c[2] = peVar1->movedir[2] * -1.0;
    pfVar8 = local_2c;
    pvVar6 = peVar1->movedir;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pvVar6 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pvVar6 = pvVar6 + 1;
    }
  }
  *(undefined4 *)&this->field_0x80 = 1;
  if ((this->pev->spawnflags & 0x100) == 0) {
    *(undefined4 *)&this->field_0x14 = 0xffff0000;
    *(code **)&this->field_0x18 = CBaseDoor::DoorTouch;
  }
  else {
    *(undefined4 *)&this->field_0x14 = 0;
    *(undefined4 *)&this->field_0x18 = 0;
  }
  if (0.0 <= *(float *)&this->field_0x10c) {
    bVar2 = int((EHANDLE *)&this->field_0x104);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      peVar12 = this->pev->pContainingEntity;
      pvVar6 = this->pev->angles;
      VecBModelOrigin(local_3c,(int)this->pev);
      piVar3 = CBaseEntity::Create((int)g_szInfoBreakable,local_3c,pvVar6,peVar12);
      EHANDLE::operator=((EHANDLE *)&this->field_0x104,piVar3);
    }
    bVar2 = int((EHANDLE *)&this->field_0x104);
    if (CONCAT31(extraout_var_00,bVar2) != 0) {
      uVar4 = EHANDLE::Get((EHANDLE *)&this->field_0x104);
      iVar5 = 0;
      if (uVar4 != 0) {
        iVar5 = *(int *)(uVar4 + 0x7c);
      }
      EHANDLE::operator=((EHANDLE *)(iVar5 + 100),(int *)this);
    }
  }
  return;
}

/* 000b7d20  CRotDoor::SetToggleState  (81 bytes)
 * undefined SetToggleState(int param_1)
 */
/* CRotDoor::SetToggleState(int) */

void __thiscall CRotDoor::SetToggleState(CRotDoor *this,int param_1)

{
  entvars_t *peVar1;
  int iVar2;
  vec_t *pvVar3;
  vec_t *pvVar4;
  
  if (param_1 == 0) {
    peVar1 = this->pev;
    pvVar3 = (vec_t *)&this->field_0xc0;
  }
  else {
    peVar1 = this->pev;
    pvVar3 = (vec_t *)&this->field_0xb4;
  }
  pvVar4 = peVar1->angles;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar4 = *pvVar3;
    pvVar3 = pvVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  return;
}

/* 000b8740  CRotDoor::CRotDoor  (108 bytes)
 * undefined CRotDoor(void)
 */
/* CRotDoor::CRotDoor(void) */

void __thiscall CRotDoor::CRotDoor(CRotDoor *this)

{
  this->vtable = (void **)CBaseEntity_virtual_table;
  this->vtable = (void **)CBaseDelay_virtual_table;
  this->vtable = (void **)CBaseAnimating_virtual_table;
  this->vtable = (void **)CBaseToggle_virtual_table;
  this->vtable = (void **)CBaseDoor_virtual_table;
  EHANDLE::operator=((EHANDLE *)&this->field_0x104,(int *)0x0);
  this->vtable = (void **)CRotDoor_virtual_table;
  EHANDLE::operator=((EHANDLE *)&this->field_0x104,(int *)0x0);
  return;
}

