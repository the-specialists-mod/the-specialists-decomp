/* ts_i386.so - CFuncPlat (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000d248c  CFuncPlat::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CFuncPlat::Save(CSave &) */

undefined4 __thiscall CFuncPlat::Save(CFuncPlat *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBasePlatTrain::Save((CBasePlatTrain *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CFuncPlat",(int)this,(int *)m_SaveData,2);
  }
  return uVar2;
}

/* 000d24dc  CFuncPlat::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CFuncPlat::Restore(CRestore &) */

undefined4 __thiscall CFuncPlat::Restore(CFuncPlat *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBasePlatTrain::Restore((CBasePlatTrain *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CFuncPlat",(int)this,(int)m_SaveData,2);
  }
  return uVar2;
}

/* 000d252c  CFuncPlat::KeyValue  (156 bytes)
 * undefined KeyValue(int param_1)
 */
/* CFuncPlat::KeyValue(KeyValueData_s *) */

void __thiscall CFuncPlat::KeyValue(CFuncPlat *this,int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"targettop");
  if (iVar1 == 0) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x10c = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"targetbot");
    if (iVar1 == 0) {
      iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
      *(int *)&this->field_0x110 = iVar1;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      CBasePlatTrain::KeyValue((CBasePlatTrain *)this,param_1);
    }
  }
  return;
}

/* 000d25d0  CFuncPlat::Setup  (384 bytes)
 * undefined Setup(void)
 */
/* CFuncPlat::Setup(void) */

void __thiscall CFuncPlat::Setup(CFuncPlat *this)

{
  float fVar1;
  int iVar2;
  vec_t *pvVar3;
  vec_t *pvVar4;
  
  if (*(float *)&this->field_0x98 == 0.0) {
    *(undefined4 *)&this->field_0x98 = 0x42a00000;
  }
  if (*(float *)&this->field_0x94 == 0.0) {
    *(undefined4 *)&this->field_0x94 = 0x41200000;
  }
  pvVar3 = (vec_t *)&g_vecZero;
  pvVar4 = this->pev->angles;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar4 = *pvVar3;
    pvVar3 = pvVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  this->pev->solid = 4;
  this->pev->movetype = 7;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  UTIL_SetSize((int)this->pev,this->pev->mins,this->pev->maxs);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  pvVar3 = this->pev->origin;
  pvVar4 = (vec_t *)&this->field_0x9c;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar4 = *pvVar3;
    pvVar3 = pvVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  pvVar3 = this->pev->origin;
  pvVar4 = (vec_t *)&this->field_0xa8;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar4 = *pvVar3;
    pvVar3 = pvVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  if (*(float *)&this->field_0xd0 == 0.0) {
    fVar1 = (this->pev->origin[2] - this->pev->size[2]) + 8.0;
  }
  else {
    fVar1 = this->pev->origin[2] - *(float *)&this->field_0xd0;
  }
  *(float *)&this->field_0xb0 = fVar1;
  if (this->pev->speed == 0.0) {
    this->pev->speed = 150.0;
  }
  if (*(float *)&this->field_0x108 == 0.0) {
    *(undefined4 *)&this->field_0x108 = 0x3f59999a;
  }
  return;
}

/* 000d2754  CFuncPlat::Precache  (68 bytes)
 * undefined Precache(void)
 */
/* CFuncPlat::Precache(void) */

void __thiscall CFuncPlat::Precache(CFuncPlat *this)

{
  int iVar1;
  
  CBasePlatTrain::Precache((CBasePlatTrain *)this);
  iVar1 = (*this->vtable[0x46])(this);
  if (iVar1 == 0) {
    PlatSpawnInsideTrigger((uint)this->pev);
  }
  return;
}

/* 000d2798  CFuncPlat::Spawn  (139 bytes)
 * undefined Spawn(void)
 */
/* CFuncPlat::Spawn(void) */

void __thiscall CFuncPlat::Spawn(CFuncPlat *this)

{
  Setup(this);
  (*this->vtable[10])(this);
  if (this->pev->targetname == 0) {
    UTIL_SetOrigin((int)this->pev,&this->field_0xa8);
    *(undefined4 *)&this->field_0x80 = 1;
  }
  else {
    UTIL_SetOrigin((int)this->pev,&this->field_0x9c);
    *(undefined4 *)&this->field_0x80 = 0;
    *(undefined4 *)&this->field_0x1c = 0xffff0000;
    *(code **)&this->field_0x20 = PlatUse;
  }
  return;
}

/* 000d2a68  CFuncPlat::PlatUse  (155 bytes)
 * undefined PlatUse(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 */
/* CFuncPlat::PlatUse(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CFuncPlat::PlatUse(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0xd2a72;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x60) + 0x118))(param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      return;
    }
  }
  else {
    uVar2 = (uint)(*(int *)(param_1 + 0x80) == 1);
    iVar1 = CBaseEntity::ShouldToggle(param_1,param_4,uVar2);
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x80) != 0) {
      if (*(int *)(param_1 + 0x80) != 1) {
        return;
      }
      (**(code **)(*(int *)(param_1 + 0x60) + 0x11c))(param_1,param_4,uVar2,uVar3);
      return;
    }
  }
  (**(code **)(*(int *)(param_1 + 0x60) + 0x120))(param_1);
  return;
}

/* 000d2b08  CFuncPlat::GoDown  (183 bytes)
 * undefined GoDown(void)
 */
/* CFuncPlat::GoDown(void) */

void __thiscall CFuncPlat::GoDown(CFuncPlat *this)

{
  entvars_t *peVar1;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  peVar1 = this->pev;
  if (peVar1->noise != 0) {
    EMIT_SOUND_DYN((int)peVar1->pContainingEntity,6,gpGlobals->pStringBase + peVar1->noise,
                   *(undefined4 *)&this->field_0x108,0x3f4ccccd,0,100,0.5);
  }
  *(undefined4 *)&this->field_0x80 = 3;
  *(undefined4 *)&this->field_0xdc = 0xffff0000;
  *(code **)&this->field_0xe0 = CallHitBottom;
  local_1c = *(float *)&this->field_0xa8;
  local_18 = *(undefined4 *)&this->field_0xac;
  local_14 = *(undefined4 *)&this->field_0xb0;
  CBaseToggle::LinearMove((CBaseToggle *)this,&local_1c,this->pev->speed);
  return;
}

/* 000d2bc0  CFuncPlat::HitBottom  (215 bytes)
 * undefined HitBottom(void)
 */
/* CFuncPlat::HitBottom(void) */

void __thiscall CFuncPlat::HitBottom(CFuncPlat *this)

{
  entvars_t *peVar1;
  
  peVar1 = this->pev;
  if (peVar1->noise != 0) {
    EMIT_SOUND_DYN((int)peVar1->pContainingEntity,6,gpGlobals->pStringBase + peVar1->noise,0,0,0x20,
                   100,0.5);
  }
  peVar1 = this->pev;
  if (peVar1->noise1 != 0) {
    EMIT_SOUND_DYN((int)peVar1->pContainingEntity,1,gpGlobals->pStringBase + peVar1->noise1,
                   *(undefined4 *)&this->field_0x108,0x3f4ccccd,0,100,0.5);
  }
  *(undefined4 *)&this->field_0x80 = 1;
  if (*(int *)&this->field_0x110 != 0) {
    FireTargets((int)(gpGlobals->pStringBase + *(int *)&this->field_0x110),this,this,3,0);
  }
  return;
}

/* 000d2c98  CFuncPlat::GoUp  (183 bytes)
 * undefined GoUp(void)
 */
/* CFuncPlat::GoUp(void) */

void __thiscall CFuncPlat::GoUp(CFuncPlat *this)

{
  entvars_t *peVar1;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  peVar1 = this->pev;
  if (peVar1->noise != 0) {
    EMIT_SOUND_DYN((int)peVar1->pContainingEntity,6,gpGlobals->pStringBase + peVar1->noise,
                   *(undefined4 *)&this->field_0x108,0x3f4ccccd,0,100,0.5);
  }
  *(undefined4 *)&this->field_0x80 = 2;
  *(undefined4 *)&this->field_0xdc = 0xffff0000;
  *(code **)&this->field_0xe0 = CallHitTop;
  local_1c = *(float *)&this->field_0x9c;
  local_18 = *(undefined4 *)&this->field_0xa0;
  local_14 = *(undefined4 *)&this->field_0xa4;
  CBaseToggle::LinearMove((CBaseToggle *)this,&local_1c,this->pev->speed);
  return;
}

/* 000d2d50  CFuncPlat::HitTop  (276 bytes)
 * undefined HitTop(void)
 */
/* CFuncPlat::HitTop(void) */

void __thiscall CFuncPlat::HitTop(CFuncPlat *this)

{
  entvars_t *peVar1;
  int iVar2;
  
  peVar1 = this->pev;
  if (peVar1->noise != 0) {
    EMIT_SOUND_DYN((int)peVar1->pContainingEntity,6,gpGlobals->pStringBase + peVar1->noise,0,0,0x20,
                   100,0.5);
  }
  peVar1 = this->pev;
  if (peVar1->noise1 != 0) {
    EMIT_SOUND_DYN((int)peVar1->pContainingEntity,1,gpGlobals->pStringBase + peVar1->noise1,
                   *(undefined4 *)&this->field_0x108,0x3f4ccccd,0,100,0.5);
  }
  *(undefined4 *)&this->field_0x80 = 0;
  iVar2 = (*this->vtable[0x46])(this);
  if (iVar2 == 0) {
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = CallGoDown;
    this->pev->nextthink = this->pev->ltime + 3.0;
  }
  if (*(int *)&this->field_0x10c != 0) {
    FireTargets((int)(gpGlobals->pStringBase + *(int *)&this->field_0x10c),this,this,3,0);
  }
  return;
}

/* 000d2e64  CFuncPlat::Blocked  (228 bytes)
 * undefined Blocked(undefined4 * param_1)
 */
/* CFuncPlat::Blocked(CBaseEntity *) */

void __thiscall CFuncPlat::Blocked(CFuncPlat *this,undefined4 *param_1)

{
  entvars_t *peVar1;
  
  (*g_engfuncs.pfnAlertMessage)
            (at_aiconsole,"%s Blocked by %s\n",gpGlobals->pStringBase + this->pev->classname,
             gpGlobals->pStringBase + *(int *)*param_1);
  (**(code **)(param_1[0x18] + 0x58))(param_1,this->pev,this->pev,0x3f800000,1);
  peVar1 = this->pev;
  if (peVar1->noise != 0) {
    EMIT_SOUND_DYN((int)peVar1->pContainingEntity,6,gpGlobals->pStringBase + peVar1->noise,0,0,0x20,
                   100,0.5);
  }
  if (*(int *)&this->field_0x80 == 2) {
    (*this->vtable[0x48])(this);
  }
  else if (*(int *)&this->field_0x80 == 3) {
    (*this->vtable[0x47])(this);
  }
  return;
}

/* 000d7af0  CFuncPlat::CallGoDown  (21 bytes)
 * undefined CallGoDown(void)
 */
/* CFuncPlat::CallGoDown(void) */

void __thiscall CFuncPlat::CallGoDown(CFuncPlat *this)

{
  (*this->vtable[0x48])(this);
  return;
}

/* 000d7b08  CFuncPlat::CallHitTop  (21 bytes)
 * undefined CallHitTop(void)
 */
/* CFuncPlat::CallHitTop(void) */

void __thiscall CFuncPlat::CallHitTop(CFuncPlat *this)

{
  (*this->vtable[0x49])(this);
  return;
}

/* 000d7b20  CFuncPlat::CallHitBottom  (21 bytes)
 * undefined CallHitBottom(void)
 */
/* CFuncPlat::CallHitBottom(void) */

void __thiscall CFuncPlat::CallHitBottom(CFuncPlat *this)

{
  (*this->vtable[0x4a])(this);
  return;
}

