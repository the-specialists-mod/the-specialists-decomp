/* ts_i386.so - CLaser (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000bb064  CLaser::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CLaser::Save(CSave &) */

undefined4 __thiscall CLaser::Save(CLaser *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CLaser",(int)this,(int *)m_SaveData,3);
  }
  return uVar2;
}

/* 000bb0b4  CLaser::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CLaser::Restore(CRestore &) */

undefined4 __thiscall CLaser::Restore(CLaser *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CLaser",(int)this,(int)m_SaveData,3);
  }
  return uVar2;
}

/* 000bb104  CLaser::Spawn  (532 bytes)
 * undefined Spawn(void)
 */
/* CLaser::Spawn(void) */

void __thiscall CLaser::Spawn(CLaser *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  CSprite *pCVar7;
  
  if (this->pev->model == 0) {
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
  }
  else {
    this->pev->solid = 0;
    (*this->vtable[10])(this);
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = StrikeThink;
    piVar5 = &this->pev->flags;
    *piVar5 = *piVar5 | 0x20000000;
    CBeam::PointsInit((CBeam *)this,this->pev->origin,this->pev->origin);
    if ((*(int *)&this->field_0x64 == 0) && (*(int *)&this->field_0x68 != 0)) {
      pCVar7 = CSprite::SpriteCreate
                         ((int)(gpGlobals->pStringBase + *(int *)&this->field_0x68),
                          this->pev->origin,1);
      *(CSprite **)&this->field_0x64 = pCVar7;
    }
    else {
      *(undefined4 *)&this->field_0x64 = 0;
    }
    if (*(int *)&this->field_0x64 != 0) {
      piVar5 = *(int **)&this->field_0x64;
      fVar1 = this->pev->rendercolor[0];
      fVar2 = this->pev->rendercolor[1];
      fVar3 = this->pev->rendercolor[2];
      fVar4 = this->pev->renderamt;
      iVar6 = this->pev->renderfx;
      *(undefined4 *)(*piVar5 + 0x148) = 3;
      *(float *)(*piVar5 + 0x150) = (float)(int)ROUND(fVar1);
      *(float *)(*piVar5 + 0x154) = (float)(int)ROUND(fVar2);
      *(float *)(*piVar5 + 0x158) = (float)(int)ROUND(fVar3);
      *(float *)(*piVar5 + 0x14c) = (float)(int)ROUND(fVar4);
      *(int *)(*piVar5 + 0x15c) = iVar6;
    }
    if ((this->pev->targetname == 0) || ((((byte)this->pev->spawnflags ^ 1) & 1) == 0)) {
      TurnOn(this);
    }
    else {
      TurnOff(this);
    }
  }
  return;
}

/* 000bb320  CLaser::Precache  (104 bytes)
 * undefined Precache(void)
 */
/* CLaser::Precache(void) */

void __thiscall CLaser::Precache(CLaser *this)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + this->pev->model);
  this->pev->modelindex = iVar1;
  if (*(int *)&this->field_0x68 != 0) {
    (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + *(int *)&this->field_0x68);
  }
  return;
}

/* 000bb388  CLaser::KeyValue  (564 bytes)
 * int KeyValue(int param_1)
 */
/* CLaser::KeyValue(KeyValueData_s *) */

int __thiscall CLaser::KeyValue(CLaser *this,int param_1)

{
  entvars_t *peVar1;
  int iVar2;
  longdouble lVar3;
  longdouble extraout_ST0;
  
  iVar2 = strcmp(*(char **)(param_1 + 4),"LaserTarget");
  if (iVar2 == 0) {
    iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->message = iVar2;
  }
  else {
    iVar2 = strcmp(*(char **)(param_1 + 4),"width");
    if (iVar2 == 0) {
      lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      this->pev->scale = (float)(int)ROUND(lVar3);
      *(undefined4 *)(param_1 + 0xc) = 1;
      return (int)ROUND(lVar3);
    }
    iVar2 = strcmp(*(char **)(param_1 + 4),"NoiseAmplitude");
    if (iVar2 == 0) {
      iVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      this->pev->body = iVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return iVar2;
    }
    iVar2 = strcmp(*(char **)(param_1 + 4),"TextureScroll");
    if (iVar2 == 0) {
      iVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      this->pev->animtime = (float)iVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return iVar2;
    }
    iVar2 = strcmp(*(char **)(param_1 + 4),"texture");
    if (iVar2 == 0) {
      iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
      this->pev->model = iVar2;
    }
    else {
      iVar2 = strcmp(*(char **)(param_1 + 4),"EndSprite");
      if (iVar2 != 0) {
        iVar2 = strcmp(*(char **)(param_1 + 4),"framestart");
        if (iVar2 == 0) {
          peVar1 = this->pev;
          iVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
          peVar1->frame = (float)iVar2;
          *(undefined4 *)(param_1 + 0xc) = 1;
          return iVar2;
        }
        iVar2 = strcmp(*(char **)(param_1 + 4),"damage");
        if (iVar2 == 0) {
          peVar1 = this->pev;
          iVar2 = __strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
          peVar1->dmg = (float)extraout_ST0;
          *(undefined4 *)(param_1 + 0xc) = 1;
          return iVar2;
        }
        *(undefined4 *)(param_1 + 0xc) = 0;
        return iVar2;
      }
      iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
      *(int *)&this->field_0x68 = iVar2;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return iVar2;
}

/* 000bb5cc  CLaser::IsOn  (22 bytes)
 * bool IsOn(void)
 */
/* CLaser::IsOn(void) */

bool __thiscall CLaser::IsOn(CLaser *this)

{
  return -1 < (char)this->pev->effects;
}

/* 000bb5e4  CLaser::TurnOff  (69 bytes)
 * undefined TurnOff(void)
 */
/* CLaser::TurnOff(void) */

void __thiscall CLaser::TurnOff(CLaser *this)

{
  int *piVar1;
  
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 0x80;
  this->pev->nextthink = 0.0;
  if (*(int *)&this->field_0x64 != 0) {
    CSprite::TurnOff(*(CSprite **)&this->field_0x64);
  }
  return;
}

/* 000bb62c  CLaser::TurnOn  (89 bytes)
 * undefined TurnOn(void)
 */
/* CLaser::TurnOn(void) */

void __thiscall CLaser::TurnOn(CLaser *this)

{
  int *piVar1;
  
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 & 0xffffff7f;
  if (*(int *)&this->field_0x64 != 0) {
    CSprite::TurnOn(*(CSprite **)&this->field_0x64);
  }
  this->pev->dmgtime = gpGlobals->time;
  this->pev->nextthink = gpGlobals->time;
  return;
}

/* 000bb688  CLaser::Use  (91 bytes)
 * undefined Use(CLaser * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 */
/* CLaser::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CLaser::Use(CLaser *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = IsOn(param_1);
  iVar2 = CBaseEntity::ShouldToggle(param_1,param_4,CONCAT31(extraout_var,bVar1));
  if (iVar2 != 0) {
    if (CONCAT31(extraout_var,bVar1) == 0) {
      TurnOn(param_1);
    }
    else {
      TurnOff(param_1);
    }
  }
  return;
}

/* 000bb6e4  CLaser::FireAtPoint  (120 bytes)
 * undefined FireAtPoint(int param_1)
 */
/* CLaser::FireAtPoint(TraceResult &) */

void __thiscall CLaser::FireAtPoint(CLaser *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  vec_t *pvVar4;
  vec_t *pvVar5;
  
  pvVar4 = (vec_t *)(param_1 + 0x14);
  pvVar5 = this->pev->angles;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pvVar5 = *pvVar4;
    pvVar4 = pvVar4 + 1;
    pvVar5 = pvVar5 + 1;
  }
  if (*(int *)&this->field_0x64 != 0) {
    UTIL_SetOrigin(**(int **)&this->field_0x64,(vec_t *)(param_1 + 0x14));
  }
  CBeam::BeamDamage((CBeam *)this,param_1);
  puVar1 = (undefined4 *)(param_1 + 0x14);
  puVar2 = (undefined4 *)CBeam::GetStartPos((CBeam *)this);
  CBeam::DoSparks((CBeam *)this,puVar2,puVar1);
  return;
}

/* 000bb75c  CLaser::StrikeThink  (150 bytes)
 * undefined StrikeThink(void)
 */
/* CLaser::StrikeThink(void) */

void __thiscall CLaser::StrikeThink(CLaser *this)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_5c [76];
  
  piVar1 = CBeam::RandomTargetname(this,gpGlobals->pStringBase + this->pev->message);
  if (piVar1 != (int *)0x0) {
    puVar3 = (undefined4 *)(*piVar1 + 8);
    puVar4 = (undefined4 *)&this->field_0x6c;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  UTIL_TraceLine(this->pev->origin,&this->field_0x6c,0,0,local_5c);
  FireAtPoint(this,(int)local_5c);
  this->pev->nextthink = gpGlobals->time + 0.1;
  return;
}

