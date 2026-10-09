/* ts_i386.so - CSprite (23 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000bba74  CSprite::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CSprite::Save(CSave &) */

undefined4 __thiscall CSprite::Save(CSprite *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CSprite",(int)this,(int *)m_SaveData,2);
  }
  return uVar2;
}

/* 000bbac4  CSprite::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CSprite::Restore(CRestore &) */

undefined4 __thiscall CSprite::Restore(CSprite *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CSprite",(int)this,(int)m_SaveData,2);
  }
  return uVar2;
}

/* 000bbb14  CSprite::Spawn  (249 bytes)
 * undefined Spawn(void)
 */
/* CSprite::Spawn(void) */

void __thiscall CSprite::Spawn(CSprite *this)

{
  entvars_t *peVar1;
  int iVar2;
  
  this->pev->solid = 0;
  this->pev->movetype = 0;
  this->pev->effects = 0;
  this->pev->frame = 0.0;
  (*this->vtable[10])(this);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  iVar2 = (*g_engfuncs.pfnModelFrames)(this->pev->modelindex);
  *(float *)&this->field_0x68 = (float)iVar2 - 1.0;
  if ((this->pev->targetname == 0) || ((((byte)this->pev->spawnflags ^ 1) & 1) == 0)) {
    TurnOn(this);
  }
  else {
    TurnOff(this);
  }
  peVar1 = this->pev;
  if ((peVar1->angles[1] != 0.0) && (peVar1->angles[2] == 0.0)) {
    peVar1->angles[2] = peVar1->angles[1];
    this->pev->angles[1] = 0.0;
  }
  return;
}

/* 000bbc10  CSprite::Precache  (193 bytes)
 * undefined Precache(void)
 */
/* CSprite::Precache(void) */

void __thiscall CSprite::Precache(CSprite *this)

{
  entvars_t *peVar1;
  edict_t *pEdict;
  int iVar2;
  int iVar3;
  
  (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + this->pev->model);
  peVar1 = this->pev;
  if (peVar1->aiment == (edict_t *)0x0) {
    this->pev->skin = 0;
    this->pev->body = 0;
  }
  else {
    pEdict = peVar1->aiment;
    iVar2 = peVar1->body;
    iVar3 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
    peVar1->skin = iVar3;
    this->pev->body = iVar2;
    this->pev->aiment = pEdict;
    this->pev->movetype = 0xc;
  }
  return;
}

/* 000bbcd4  CSprite::SpriteInit  (86 bytes)
 * undefined SpriteInit(int param_1, undefined4 * param_2)
 */
/* CSprite::SpriteInit(char const *, Vector const &) */

void __thiscall CSprite::SpriteInit(CSprite *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  vec_t *pvVar2;
  
  this->pev->model = param_1 - (int)gpGlobals->pStringBase;
  pvVar2 = this->pev->origin;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar2 = (vec_t)*param_2;
    param_2 = param_2 + 1;
    pvVar2 = pvVar2 + 1;
  }
  (*this->vtable[9])(this);
  return;
}

/* 000bbd2c  CSprite::SpriteCreate  (133 bytes)
 * CSprite * SpriteCreate(int param_1, undefined4 * param_2, int param_3)
 */
/* CSprite::SpriteCreate(char const *, Vector const &, int) */

CSprite * CSprite::SpriteCreate(int param_1,undefined4 *param_2,int param_3)

{
  CSprite *this;
  
  this = GetClassPtr<CSprite>(0);
  SpriteInit(this,param_1,param_2);
  this->pev->classname = (int)"env_sprite" - (int)gpGlobals->pStringBase;
  this->pev->solid = 0;
  this->pev->movetype = 8;
  if (param_3 != 0) {
    TurnOn(this);
  }
  return this;
}

/* 000bbdb4  CSprite::AnimateThink  (87 bytes)
 * undefined AnimateThink(void)
 */
/* CSprite::AnimateThink(void) */

void __thiscall CSprite::AnimateThink(CSprite *this)

{
  Animate(this,(gpGlobals->time - *(float *)&this->field_0x64) * this->pev->framerate);
  this->pev->nextthink = gpGlobals->time + 0.1;
  *(float *)&this->field_0x64 = gpGlobals->time;
  return;
}

/* 000bbe0c  CSprite::AnimateUntilDead  (93 bytes)
 * undefined AnimateUntilDead(void)
 */
/* CSprite::AnimateUntilDead(void) */

void __thiscall CSprite::AnimateUntilDead(CSprite *this)

{
  if (gpGlobals->time <= this->pev->dmgtime) {
    AnimateThink(this);
    this->pev->nextthink = gpGlobals->time;
  }
  else {
    UTIL_Remove((int *)this);
  }
  return;
}

/* 000bbe6c  CSprite::Expand  (91 bytes)
 * undefined Expand(undefined4 param_1, undefined4 param_2)
 */
/* CSprite::Expand(float, float) */

void __thiscall CSprite::Expand(CSprite *this,float param_1,float param_2)

{
  this->pev->speed = param_1;
  this->pev->health = param_2;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = ExpandThink;
  this->pev->nextthink = gpGlobals->time;
  *(float *)&this->field_0x64 = gpGlobals->time;
  return;
}

/* 000bbec8  CSprite::ExpandThink  (158 bytes)
 * undefined ExpandThink(void)
 */
/* CSprite::ExpandThink(void) */

void __thiscall CSprite::ExpandThink(CSprite *this)

{
  entvars_t *peVar1;
  float fVar2;
  
  fVar2 = gpGlobals->time - *(float *)&this->field_0x64;
  peVar1 = this->pev;
  peVar1->scale = fVar2 * peVar1->speed + peVar1->scale;
  peVar1 = this->pev;
  peVar1->renderamt = peVar1->renderamt - fVar2 * peVar1->health;
  if (0.0 < this->pev->renderamt) {
    this->pev->nextthink = gpGlobals->time + 0.1;
    *(float *)&this->field_0x64 = gpGlobals->time;
  }
  else {
    this->pev->renderamt = 0.0;
    UTIL_Remove((int *)this);
  }
  return;
}

/* 000bbf6c  CSprite::Animate  (134 bytes)
 * undefined Animate(float param_1)
 */
/* CSprite::Animate(float) */

void __thiscall CSprite::Animate(CSprite *this,float param_1)

{
  longdouble lVar1;
  
  this->pev->frame = param_1 + this->pev->frame;
  if (*(float *)&this->field_0x68 < this->pev->frame) {
    if ((this->pev->spawnflags & 2) == 0) {
      if (0.0 < *(float *)&this->field_0x68) {
        lVar1 = (longdouble)this->pev->frame;
        do {
          lVar1 = lVar1 - (longdouble)(unkint10)(lVar1 / (longdouble)*(float *)&this->field_0x68) *
                          (longdouble)*(float *)&this->field_0x68;
        } while (NAN(*(float *)&this->field_0x68));
        this->pev->frame = (float)lVar1;
      }
    }
    else {
      TurnOff(this);
    }
  }
  return;
}

/* 000bbff4  CSprite::TurnOff  (29 bytes)
 * undefined TurnOff(void)
 */
/* CSprite::TurnOff(void) */

void __thiscall CSprite::TurnOff(CSprite *this)

{
  this->pev->effects = 0x80;
  this->pev->nextthink = 0.0;
  return;
}

/* 000bc014  CSprite::TurnOn  (139 bytes)
 * undefined TurnOn(void)
 */
/* CSprite::TurnOn(void) */

void __thiscall CSprite::TurnOn(CSprite *this)

{
  this->pev->effects = 0;
  if (((this->pev->framerate != 0.0) && (1.0 < *(float *)&this->field_0x68)) ||
     ((this->pev->spawnflags & 2) != 0)) {
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = AnimateThink;
    this->pev->nextthink = gpGlobals->time;
    *(float *)&this->field_0x64 = gpGlobals->time;
  }
  this->pev->frame = 0.0;
  return;
}

/* 000bc0a0  CSprite::Use  (95 bytes)
 * undefined Use(CSprite * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 */
/* CSprite::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CSprite::Use(CSprite *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(param_1->pev->effects != 0x80);
  iVar2 = CBaseEntity::ShouldToggle(param_1,param_4,uVar1);
  if (iVar2 != 0) {
    if (uVar1 == 0) {
      TurnOn(param_1);
    }
    else {
      TurnOff(param_1);
    }
  }
  return;
}

/* 000bebe8  CSprite::ObjectCaps  (29 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CSprite::ObjectCaps(void) */

undefined4 __thiscall CSprite::ObjectCaps(CSprite *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((short)this->pev->spawnflags < 0) {
    uVar1 = 0x80000000;
  }
  return uVar1;
}

/* 000bec08  CSprite::SetAttachment  (98 bytes)
 * undefined SetAttachment(int param_1, undefined4 param_2)
 */
/* CSprite::SetAttachment(edict_s *, int) */

void __thiscall CSprite::SetAttachment(CSprite *this,int param_1,int param_2)

{
  entvars_t *peVar1;
  int iVar2;
  
  if (param_1 != 0) {
    peVar1 = this->pev;
    iVar2 = (*g_engfuncs.pfnIndexOfEdict)((edict_t *)param_1);
    peVar1->skin = iVar2;
    this->pev->body = param_2;
    this->pev->aiment = (edict_t *)param_1;
    this->pev->movetype = 0xc;
  }
  return;
}

/* 000bec6c  CSprite::Frames  (8 bytes)
 * longdouble Frames(CSprite * this)
 */
/* CSprite::Frames(void) */

longdouble __thiscall CSprite::Frames(CSprite *this)

{
  return (longdouble)*(float *)&this->field_0x68;
}

/* 000bec74  CSprite::SetTransparency  (100 bytes)
 * undefined SetTransparency(undefined4 param_1, int param_2, int param_3, int param_4, int param_5, undefined4 param_6)
 */
/* CSprite::SetTransparency(int, int, int, int, int, int) */

void __thiscall
CSprite::SetTransparency
          (CSprite *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  this->pev->rendermode = param_1;
  this->pev->rendercolor[0] = (float)param_2;
  this->pev->rendercolor[1] = (float)param_3;
  this->pev->rendercolor[2] = (float)param_4;
  this->pev->renderamt = (float)param_5;
  this->pev->renderfx = param_6;
  return;
}

/* 000becd8  CSprite::SetTexture  (17 bytes)
 * undefined SetTexture(undefined4 param_1)
 */
/* CSprite::SetTexture(int) */

void __thiscall CSprite::SetTexture(CSprite *this,int param_1)

{
  this->pev->modelindex = param_1;
  return;
}

/* 000becec  CSprite::SetScale  (17 bytes)
 * undefined SetScale(undefined4 param_1)
 */
/* CSprite::SetScale(float) */

void __thiscall CSprite::SetScale(CSprite *this,float param_1)

{
  this->pev->scale = param_1;
  return;
}

/* 000bed00  CSprite::SetColor  (54 bytes)
 * undefined SetColor(int param_1, int param_2, int param_3)
 */
/* CSprite::SetColor(int, int, int) */

void __thiscall CSprite::SetColor(CSprite *this,int param_1,int param_2,int param_3)

{
  this->pev->rendercolor[0] = (float)param_1;
  this->pev->rendercolor[1] = (float)param_2;
  this->pev->rendercolor[2] = (float)param_3;
  return;
}

/* 000bed38  CSprite::SetBrightness  (17 bytes)
 * undefined SetBrightness(int param_1)
 */
/* CSprite::SetBrightness(int) */

void __thiscall CSprite::SetBrightness(CSprite *this,int param_1)

{
  this->pev->renderamt = (float)param_1;
  return;
}

/* 000bed4c  CSprite::AnimateAndDie  (87 bytes)
 * undefined AnimateAndDie(float param_1)
 */
/* CSprite::AnimateAndDie(float) */

void __thiscall CSprite::AnimateAndDie(CSprite *this,float param_1)

{
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = AnimateUntilDead;
  this->pev->framerate = param_1;
  this->pev->dmgtime = *(float *)&this->field_0x68 / param_1 + gpGlobals->time;
  this->pev->nextthink = gpGlobals->time;
  return;
}

