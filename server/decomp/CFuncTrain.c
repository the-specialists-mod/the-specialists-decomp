/* ts_i386.so - CFuncTrain (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000d3374  CFuncTrain::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CFuncTrain::Save(CSave &) */

undefined4 __thiscall CFuncTrain::Save(CFuncTrain *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBasePlatTrain::Save((CBasePlatTrain *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CFuncTrain",(int)this,(int *)m_SaveData,3);
  }
  return uVar2;
}

/* 000d33c4  CFuncTrain::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CFuncTrain::Restore(CRestore &) */

undefined4 __thiscall CFuncTrain::Restore(CFuncTrain *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBasePlatTrain::Restore((CBasePlatTrain *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CFuncTrain",(int)this,(int)m_SaveData,3);
  }
  return uVar2;
}

/* 000d3414  CFuncTrain::KeyValue  (97 bytes)
 * undefined KeyValue(int param_1)
 */
/* CFuncTrain::KeyValue(KeyValueData_s *) */

void __thiscall CFuncTrain::KeyValue(CFuncTrain *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"sounds");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0x110 = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    CBasePlatTrain::KeyValue((CBasePlatTrain *)this,param_1);
  }
  return;
}

/* 000d3478  CFuncTrain::Blocked  (93 bytes)
 * undefined Blocked(int param_1)
 */
/* CFuncTrain::Blocked(CBaseEntity *) */

void __thiscall CFuncTrain::Blocked(CFuncTrain *this,int param_1)

{
  entvars_t *peVar1;
  
  if (*(float *)&this->field_0x84 <= gpGlobals->time) {
    *(float *)&this->field_0x84 = gpGlobals->time + 0.5;
    peVar1 = this->pev;
    (**(code **)(*(int *)(param_1 + 0x60) + 0x58))(param_1,peVar1,peVar1,peVar1->dmg,1);
  }
  return;
}

/* 000d34d8  CFuncTrain::Use  (217 bytes)
 * undefined Use(CFuncTrain * param_1)
 */
/* CFuncTrain::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CFuncTrain::Use(CFuncTrain *param_1)

{
  int *piVar1;
  uint uVar2;
  entvars_t *peVar3;
  int iVar4;
  vec_t *pvVar5;
  vec_t *pvVar6;
  
  uVar2 = param_1->pev->spawnflags;
  if ((uVar2 & 1) == 0) {
    piVar1 = &param_1->pev->spawnflags;
    *piVar1 = *piVar1 | 1;
    peVar3 = param_1->pev;
    if (peVar3->enemy != (edict_t *)0x0) {
      peVar3->target = (peVar3->enemy->v).targetname;
    }
    param_1->pev->nextthink = 0.0;
    pvVar5 = (vec_t *)&g_vecZero;
    pvVar6 = param_1->pev->velocity;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pvVar6 = *pvVar5;
      pvVar5 = pvVar5 + 1;
      pvVar6 = pvVar6 + 1;
    }
    peVar3 = param_1->pev;
    if (peVar3->noise1 != 0) {
      EMIT_SOUND_DYN((int)peVar3->pContainingEntity,2,gpGlobals->pStringBase + peVar3->noise1,
                     *(undefined4 *)&param_1->field_0x108,0x3f4ccccd,0,100,0.5);
    }
  }
  else {
    param_1->pev->spawnflags = uVar2 & 0xfffffffe;
    Next(param_1);
  }
  return;
}

/* 000d35b4  CFuncTrain::Wait  (507 bytes)
 * undefined Wait(void)
 */
/* CFuncTrain::Wait(void) */

void __thiscall CFuncTrain::Wait(CFuncTrain *this)

{
  int *piVar1;
  entvars_t *peVar2;
  
  if (*(int *)(*(int *)&this->field_0x10c + 0x1d4) != 0) {
    FireTargets((int)(gpGlobals->pStringBase + *(int *)(*(int *)&this->field_0x10c + 0x1d4)),this,
                this,3,0);
    if ((*(byte *)(*(int *)&this->field_0x10c + 0x1a0) & 4) != 0) {
      *(undefined4 *)(*(int *)&this->field_0x10c + 0x1d4) = 0;
    }
  }
  if (((*(byte *)(*(int *)&this->field_0x10c + 0x1a0) & 1) == 0) &&
     ((this->pev->spawnflags & 1) == 0)) {
    if (*(float *)&this->field_0x8c == 0.0) {
      Next(this);
    }
    else {
      this->pev->nextthink = this->pev->ltime + *(float *)&this->field_0x8c;
      peVar2 = this->pev;
      if (peVar2->noise != 0) {
        EMIT_SOUND_DYN((int)peVar2->pContainingEntity,6,gpGlobals->pStringBase + peVar2->noise,0,0,
                       0x20,100,0.5);
      }
      peVar2 = this->pev;
      if (peVar2->noise1 != 0) {
        EMIT_SOUND_DYN((int)peVar2->pContainingEntity,2,gpGlobals->pStringBase + peVar2->noise1,
                       *(undefined4 *)&this->field_0x108,0x3f4ccccd,0,100,0.5);
      }
      *(undefined4 *)&this->field_0xc = 0xffff0000;
      *(code **)&this->field_0x10 = Next;
    }
  }
  else {
    piVar1 = &this->pev->spawnflags;
    *piVar1 = *piVar1 | 1;
    peVar2 = this->pev;
    if (peVar2->noise != 0) {
      EMIT_SOUND_DYN((int)peVar2->pContainingEntity,6,gpGlobals->pStringBase + peVar2->noise,0,0,
                     0x20,100,0.5);
    }
    peVar2 = this->pev;
    if (peVar2->noise1 != 0) {
      EMIT_SOUND_DYN((int)peVar2->pContainingEntity,2,gpGlobals->pStringBase + peVar2->noise1,
                     *(undefined4 *)&this->field_0x108,0x3f4ccccd,0,100,0.5);
    }
    this->pev->nextthink = 0.0;
  }
  return;
}

/* 000d37b4  CFuncTrain::Next  (910 bytes)
 * undefined Next(void)
 */
/* CFuncTrain::Next(void) */

void __thiscall CFuncTrain::Next(CFuncTrain *this)

{
  int *piVar1;
  entvars_t *peVar2;
  int iVar3;
  int *piVar4;
  longdouble lVar5;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  
  piVar4 = (int *)(*this->vtable[0x35])();
  if (piVar4 == (int *)0x0) {
    peVar2 = this->pev;
    if (peVar2->noise != 0) {
      EMIT_SOUND_DYN((int)peVar2->pContainingEntity,6,gpGlobals->pStringBase + peVar2->noise,0,0,
                     0x20,100,0.5);
    }
    peVar2 = this->pev;
    if (peVar2->noise1 != 0) {
      EMIT_SOUND_DYN((int)peVar2->pContainingEntity,2,gpGlobals->pStringBase + peVar2->noise1,
                     *(undefined4 *)&this->field_0x108,0x3f4ccccd,0,100,0.5);
    }
  }
  else {
    this->pev->message = this->pev->target;
    this->pev->target = *(string_t *)(*piVar4 + 0x1c8);
    lVar5 = (longdouble)(**(code **)(piVar4[0x18] + 0x90))();
    *(float *)&this->field_0x8c = (float)lVar5;
    if ((*(int *)&this->field_0x10c != 0) && (*(float *)(*(int *)&this->field_0x10c + 0x1f8) != 0.0)
       ) {
      this->pev->speed = *(float *)(*(int *)&this->field_0x10c + 0x1f8);
      (*g_engfuncs.pfnAlertMessage)
                (at_aiconsole,"Train %s speed to %4.2f\n",
                 gpGlobals->pStringBase + this->pev->targetname,(double)this->pev->speed);
    }
    *(int *)&this->field_0x10c = *piVar4;
    this->pev->enemy = *(edict_t **)(*piVar4 + 0x208);
    if ((*(byte *)(*(int *)&this->field_0x10c + 0x1a0) & 2) == 0) {
      peVar2 = this->pev;
      if (peVar2->noise != 0) {
        EMIT_SOUND_DYN((int)peVar2->pContainingEntity,6,gpGlobals->pStringBase + peVar2->noise,0,0,
                       0x20,100,0.5);
      }
      peVar2 = this->pev;
      if (peVar2->noise != 0) {
        EMIT_SOUND_DYN((int)peVar2->pContainingEntity,6,gpGlobals->pStringBase + peVar2->noise,
                       *(undefined4 *)&this->field_0x108,0x3f4ccccd,0,100,0.5);
      }
      piVar1 = &this->pev->effects;
      *piVar1 = *piVar1 & 0xffffffdf;
      *(undefined4 *)&this->field_0xdc = 0xffff0000;
      *(code **)&this->field_0xe0 = Wait;
      iVar3 = *piVar4;
      peVar2 = this->pev;
      local_2c = peVar2->mins[0] + peVar2->maxs[0];
      local_28 = peVar2->mins[1] + peVar2->maxs[1];
      local_24 = peVar2->mins[2] + peVar2->maxs[2];
      local_3c = local_2c * 0.5;
      local_38 = local_28 * 0.5;
      local_34 = local_24 * 0.5;
      local_4c = *(float *)(iVar3 + 8) - local_3c;
      local_48 = *(float *)(iVar3 + 0xc) - local_38;
      local_44 = *(float *)(iVar3 + 0x10) - local_34;
      CBaseToggle::LinearMove((CBaseToggle *)this,&local_4c,this->pev->speed);
    }
    else {
      piVar1 = &this->pev->effects;
      *piVar1 = *piVar1 | 0x20;
      iVar3 = *piVar4;
      peVar2 = this->pev;
      local_4c = peVar2->mins[0] + peVar2->maxs[0];
      local_48 = peVar2->mins[1] + peVar2->maxs[1];
      local_44 = peVar2->mins[2] + peVar2->maxs[2];
      local_3c = local_4c * 0.5;
      local_38 = local_48 * 0.5;
      local_34 = local_44 * 0.5;
      local_2c = *(float *)(iVar3 + 8) - local_3c;
      local_28 = *(float *)(iVar3 + 0xc) - local_38;
      local_24 = *(float *)(iVar3 + 0x10) - local_34;
      UTIL_SetOrigin((int)this->pev,&local_2c);
      Wait(this);
    }
  }
  return;
}

/* 000d3b44  CFuncTrain::Activate  (355 bytes)
 * undefined Activate(void)
 */
/* CFuncTrain::Activate(void) */

void __thiscall CFuncTrain::Activate(CFuncTrain *this)

{
  int *piVar1;
  entvars_t *peVar2;
  edict_t *peVar3;
  uint uVar4;
  float local_2c;
  float local_28;
  float local_24;
  
  if (*(int *)&this->field_0x114 == 0) {
    *(undefined4 *)&this->field_0x114 = 1;
    peVar3 = (*g_engfuncs.pfnFindEntityByString)
                       ((edict_t *)0x0,"targetname",gpGlobals->pStringBase + this->pev->target);
    uVar4 = (uint)&peVar3->v & (peVar3 == (edict_t *)0x0) - 1;
    this->pev->target = *(string_t *)(uVar4 + 0x1c8);
    *(uint *)&this->field_0x10c = uVar4;
    peVar2 = this->pev;
    local_2c = *(float *)(uVar4 + 8) - (peVar2->mins[0] + peVar2->maxs[0]) * 0.5;
    local_28 = *(float *)(uVar4 + 0xc) - (peVar2->mins[1] + peVar2->maxs[1]) * 0.5;
    local_24 = *(float *)(uVar4 + 0x10) - (peVar2->mins[2] + peVar2->maxs[2]) * 0.5;
    UTIL_SetOrigin((int)this->pev,&local_2c);
    peVar2 = this->pev;
    if (peVar2->targetname == 0) {
      peVar2->nextthink = peVar2->ltime + 0.1;
      *(undefined4 *)&this->field_0xc = 0xffff0000;
      *(code **)&this->field_0x10 = Next;
    }
    else {
      piVar1 = &this->pev->spawnflags;
      *piVar1 = *piVar1 | 1;
    }
  }
  return;
}

/* 000d3cac  CFuncTrain::Spawn  (312 bytes)
 * undefined Spawn(void)
 */
/* CFuncTrain::Spawn(void) */

void __thiscall CFuncTrain::Spawn(CFuncTrain *this)

{
  (*this->vtable[10])(this);
  if (this->pev->speed == 0.0) {
    this->pev->speed = 100.0;
  }
  if (this->pev->target == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"FuncTrain with no target");
  }
  if (this->pev->dmg == 0.0) {
    this->pev->dmg = 2.0;
  }
  this->pev->movetype = 7;
  if ((this->pev->spawnflags & 8) == 0) {
    this->pev->solid = 4;
  }
  else {
    this->pev->solid = 0;
  }
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  UTIL_SetSize((int)this->pev,this->pev->mins,this->pev->maxs);
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  *(undefined4 *)&this->field_0x114 = 0;
  if (*(float *)&this->field_0x108 == 0.0) {
    *(undefined4 *)&this->field_0x108 = 0x3f59999a;
  }
  return;
}

/* 000d3de8  CFuncTrain::Precache  (33 bytes)
 * undefined Precache(void)
 */
/* CFuncTrain::Precache(void) */

void __thiscall CFuncTrain::Precache(CFuncTrain *this)

{
  CBasePlatTrain::Precache((CBasePlatTrain *)this);
  return;
}

/* 000d3e0c  CFuncTrain::OverrideReset  (223 bytes)
 * undefined OverrideReset(void)
 */
/* CFuncTrain::OverrideReset(void) */

void __thiscall CFuncTrain::OverrideReset(CFuncTrain *this)

{
  entvars_t *peVar1;
  bool bVar2;
  int iVar3;
  vec_t *pvVar4;
  vec_t *pvVar5;
  
  peVar1 = this->pev;
  bVar2 = false;
  if (((peVar1->velocity[0] == g_vecZero) && (peVar1->velocity[1] == DAT_00190ef0)) &&
     (peVar1->velocity[2] == DAT_00190ef4)) {
    bVar2 = true;
  }
  if ((!bVar2) && (peVar1 = this->pev, peVar1->nextthink != 0.0)) {
    peVar1->target = peVar1->message;
    iVar3 = (*this->vtable[0x35])(this);
    if (iVar3 == 0) {
      this->pev->nextthink = 0.0;
      pvVar4 = &g_vecZero;
      pvVar5 = this->pev->velocity;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar5 = *pvVar4;
        pvVar4 = pvVar4 + 1;
        pvVar5 = pvVar5 + 1;
      }
    }
    else {
      *(undefined4 *)&this->field_0xc = 0xffff0000;
      *(code **)&this->field_0x10 = Next;
      this->pev->nextthink = this->pev->ltime + 0.1;
    }
  }
  return;
}

