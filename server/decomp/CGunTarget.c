/* ts_i386.so - CGunTarget (14 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000d6da8  CGunTarget::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CGunTarget::Save(CSave &) */

undefined4 __thiscall CGunTarget::Save(CGunTarget *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Save((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CGunTarget",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 000d6df8  CGunTarget::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CGunTarget::Restore(CRestore &) */

undefined4 __thiscall CGunTarget::Restore(CGunTarget *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Restore((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CGunTarget",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 000d6e48  CGunTarget::Spawn  (237 bytes)
 * undefined Spawn(void)
 */
/* CGunTarget::Spawn(void) */

void __thiscall CGunTarget::Spawn(CGunTarget *this)

{
  int *piVar1;
  entvars_t *peVar2;
  
  this->pev->solid = 4;
  this->pev->movetype = 7;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  if (this->pev->speed == 0.0) {
    this->pev->speed = 100.0;
  }
  this->pev->takedamage = 0.0;
  piVar1 = &this->pev->flags;
  *piVar1 = *piVar1 | 0x20;
  *(undefined4 *)&this->field_0x164 = 0;
  this->pev->max_health = this->pev->health;
  peVar2 = this->pev;
  if ((peVar2->spawnflags & 1) != 0) {
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = Start;
    peVar2->nextthink = peVar2->ltime + 0.3;
  }
  return;
}

/* 000d6f38  CGunTarget::Activate  (226 bytes)
 * undefined Activate(void)
 */
/* CGunTarget::Activate(void) */

void __thiscall CGunTarget::Activate(CGunTarget *this)

{
  int iVar1;
  entvars_t *peVar2;
  int *piVar3;
  float local_2c;
  float local_28;
  float local_24;
  
  piVar3 = (int *)(*this->vtable[0x35])(this);
  if (piVar3 != (int *)0x0) {
    EHANDLE::operator=((EHANDLE *)&this->field_0x138,piVar3);
    iVar1 = *piVar3;
    peVar2 = this->pev;
    local_2c = *(float *)(iVar1 + 8) - (peVar2->mins[0] + peVar2->maxs[0]) * 0.5;
    local_28 = *(float *)(iVar1 + 0xc) - (peVar2->mins[1] + peVar2->maxs[1]) * 0.5;
    local_24 = *(float *)(iVar1 + 0x10) - (peVar2->mins[2] + peVar2->maxs[2]) * 0.5;
    UTIL_SetOrigin((int)this->pev,&local_2c);
  }
  return;
}

/* 000d701c  CGunTarget::Start  (27 bytes)
 * undefined Start(void)
 */
/* CGunTarget::Start(void) */

void __thiscall CGunTarget::Start(CGunTarget *this)

{
  (*this->vtable[0x38])(this,this,this,1,0);
  return;
}

/* 000d7038  CGunTarget::Next  (292 bytes)
 * undefined Next(void)
 */
/* CGunTarget::Next(void) */

void __thiscall CGunTarget::Next(CGunTarget *this)

{
  int iVar1;
  entvars_t *peVar2;
  int *piVar3;
  float local_2c;
  float local_28;
  float local_24;
  
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  piVar3 = (int *)(*this->vtable[0x35])(this);
  EHANDLE::operator=((EHANDLE *)&this->field_0x138,piVar3);
  piVar3 = (int *)_((EHANDLE *)&this->field_0x138);
  if (piVar3 == (int *)0x0) {
    Stop(this);
  }
  else {
    *(undefined4 *)&this->field_0xdc = 0xffff0000;
    *(code **)&this->field_0xe0 = Wait;
    iVar1 = *piVar3;
    peVar2 = this->pev;
    local_2c = *(float *)(iVar1 + 8) - (peVar2->mins[0] + peVar2->maxs[0]) * 0.5;
    local_28 = *(float *)(iVar1 + 0xc) - (peVar2->mins[1] + peVar2->maxs[1]) * 0.5;
    local_24 = *(float *)(iVar1 + 0x10) - (peVar2->mins[2] + peVar2->maxs[2]) * 0.5;
    CBaseToggle::LinearMove((CBaseToggle *)this,&local_2c,this->pev->speed);
  }
  return;
}

/* 000d7160  CGunTarget::Wait  (245 bytes)
 * undefined Wait(void)
 */
/* CGunTarget::Wait(void) */

void __thiscall CGunTarget::Wait(CGunTarget *this)

{
  int *piVar1;
  longdouble lVar2;
  
  piVar1 = (int *)_((EHANDLE *)&this->field_0x138);
  if (piVar1 == (int *)0x0) {
    Stop(this);
  }
  else {
    if (*(int *)(*piVar1 + 0x1d4) != 0) {
      FireTargets((int)(gpGlobals->pStringBase + *(int *)(*piVar1 + 0x1d4)),this,this,3,0);
      if ((*(byte *)(*piVar1 + 0x1a0) & 4) != 0) {
        *(undefined4 *)(*piVar1 + 0x1d4) = 0;
      }
    }
    lVar2 = (longdouble)(**(code **)(piVar1[0x18] + 0x90))(piVar1);
    *(float *)&this->field_0x8c = (float)lVar2;
    this->pev->target = *(string_t *)(*piVar1 + 0x1c8);
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = Next;
    if (*(float *)&this->field_0x8c == 0.0) {
      Next(this);
    }
    else {
      this->pev->nextthink = this->pev->ltime + *(float *)&this->field_0x8c;
    }
  }
  return;
}

/* 000d7258  CGunTarget::Stop  (66 bytes)
 * undefined Stop(void)
 */
/* CGunTarget::Stop(void) */

void __thiscall CGunTarget::Stop(CGunTarget *this)

{
  int iVar1;
  vec_t *pvVar2;
  vec_t *pvVar3;
  
  pvVar2 = (vec_t *)&g_vecZero;
  pvVar3 = this->pev->velocity;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  this->pev->nextthink = 0.0;
  this->pev->takedamage = 0.0;
  return;
}

/* 000d729c  CGunTarget::TakeDamage  (159 bytes)
 * undefined4 TakeDamage(CGunTarget * param_1, undefined4 param_2, undefined4 param_3, float param_4)
 */
/* CGunTarget::TakeDamage(entvars_s *, entvars_s *, float, int) */

undefined4
CGunTarget::TakeDamage(CGunTarget *param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  entvars_t *peVar1;
  
  peVar1 = param_1->pev;
  if (0.0 < peVar1->health) {
    peVar1->health = peVar1->health - param_4;
    if (param_1->pev->health <= 0.0) {
      param_1->pev->health = 0.0;
      Stop(param_1);
      if (param_1->pev->message != 0) {
        FireTargets((int)(gpGlobals->pStringBase + param_1->pev->message),param_1,param_1,3,0);
      }
    }
  }
  return 0;
}

/* 000d733c  CGunTarget::Use  (151 bytes)
 * undefined Use(CGunTarget * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 */
/* CGunTarget::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CGunTarget::Use(CGunTarget *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0xd7344;
  iVar4 = *(int *)&param_1->field_0x164;
  iVar2 = CBaseEntity::ShouldToggle(param_1,param_4,iVar4);
  if (iVar2 != 0) {
    if (*(int *)&param_1->field_0x164 == 0) {
      param_1->pev->takedamage = 2.0;
      piVar3 = (int *)(*param_1->vtable[0x35])(param_1,param_4,iVar4,uVar5);
      EHANDLE::operator=((EHANDLE *)&param_1->field_0x138,piVar3);
      bVar1 = int((EHANDLE *)&param_1->field_0x138);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        param_1->pev->health = param_1->pev->max_health;
        Next(param_1);
      }
    }
    else {
      Stop(param_1);
    }
  }
  return;
}

/* 000d7d74  CGunTarget::BloodColor  (6 bytes)
 * undefined4 BloodColor(void)
 */
/* CGunTarget::BloodColor(void) */

undefined4 CGunTarget::BloodColor(void)

{
  return 0xffffffff;
}

/* 000d7d7c  CGunTarget::Classify  (6 bytes)
 * undefined4 Classify(void)
 */
/* CGunTarget::Classify(void) */

undefined4 CGunTarget::Classify(void)

{
  return 1;
}

/* 000d7d84  CGunTarget::BodyTarget  (33 bytes)
 * undefined BodyTarget(int * param_1)
 */
/* CGunTarget::BodyTarget(Vector const &) */

void __thiscall CGunTarget::BodyTarget(CGunTarget *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  this->pev = *(entvars_t **)(iVar1 + 8);
  *(undefined4 *)&this->field_0x4 = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)&this->field_0x8 = *(undefined4 *)(iVar1 + 0x10);
  return;
}

/* 000d7da8  CGunTarget::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CGunTarget::ObjectCaps(void) */

undefined4 CGunTarget::ObjectCaps(void)

{
  return 0;
}

