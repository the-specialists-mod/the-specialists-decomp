/* mp.dll - CSprite (13 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001b4f0  CSprite::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CSprite::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CSprite_1009df64,(int)param_1,0x1009dc00,2);
  return;
}

/* 1001b520  CSprite::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CSprite::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CSprite_1009df64,(int)param_1,&DAT_1009dc00,2);
  return;
}

/* 1001b550  CSprite::Spawn  (212 bytes)
 * undefined Spawn()
 */
void __fastcall CSprite::Spawn(int *param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  (**(code **)(*param_1 + 0x20))();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  iVar1 = (*g_engfuncs.pfnModelFrames)(*(int *)(param_1[1] + 0xb4));
  param_1[0x16] = (int)((float)iVar1 - 1.0);
  if ((*(int *)(param_1[1] + 0x1cc) == 0) || ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0)) {
    TurnOn((int)param_1);
  }
  else {
    TurnOff((int)param_1);
  }
  iVar1 = param_1[1];
  if ((*(float *)(iVar1 + 0x54) != 0.0) && (*(float *)(iVar1 + 0x58) == 0.0)) {
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar1 + 0x54);
    *(undefined4 *)(param_1[1] + 0x54) = 0;
  }
  return;
}

/* 1001b630  CSprite::Precache  (130 bytes)
 * undefined Precache(int param_1)
 */
void __fastcall CSprite::Precache(int param_1)

{
  edict_t *pEdict;
  undefined4 uVar1;
  int iVar2;
  
  (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  iVar2 = *(int *)(param_1 + 4);
  pEdict = *(edict_t **)(iVar2 + 0x194);
  if (pEdict != (edict_t *)0x0) {
    uVar1 = *(undefined4 *)(iVar2 + 0x114);
    iVar2 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
    *(int *)(*(int *)(param_1 + 4) + 0x110) = iVar2;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x114) = uVar1;
    *(edict_t **)(*(int *)(param_1 + 4) + 0x194) = pEdict;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0xc;
    return;
  }
  *(undefined4 *)(iVar2 + 0x110) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x114) = 0;
  return;
}

/* 1001b6c0  CSprite::SpriteInit  (63 bytes)
 * undefined SpriteInit(int param_1, undefined4 * param_2)
 * called by: CSprite::SpriteCreate
 */
void __thiscall CSprite::SpriteInit(CSprite *this,int param_1,undefined4 *param_2)

{
  entvars_t *peVar1;
  
  this->pev->model = param_1 - (int)gpGlobals->pStringBase;
  peVar1 = this->pev;
  peVar1->origin[0] = (vec_t)*param_2;
  peVar1->origin[1] = (vec_t)param_2[1];
  peVar1->origin[2] = (vec_t)param_2[2];
  (*this->vtable[7])();
  return;
}

/* 1001b700  CSprite::SpriteCreate  (98 bytes)
 * void * SpriteCreate(int param_1, undefined4 * param_2, int param_3)
 * called by: CFuncTank::Fire, CLaser::Spawn, CXenPLight::Spawn
 */
void * __cdecl CSprite::SpriteCreate(int param_1,undefined4 *param_2,int param_3)

{
  CSprite *this;
  
  this = (CSprite *)GetClassPtr<CSprite>(0);
  SpriteInit(this,param_1,param_2);
  this->pev->classname = (int)s_env_sprite_1009df6c - (int)gpGlobals->pStringBase;
  this->pev->solid = 0;
  this->pev->movetype = 8;
  if (param_3 != 0) {
    TurnOn((int)this);
  }
  return this;
}

/* 1001b770  CSprite::AnimateThink  (69 bytes)
 * void AnimateThink(void)
 * called by: CSprite::AnimateUntilDead
 */
/* public: void __thiscall CSprite::AnimateThink(void) */

void __thiscall CSprite::AnimateThink(CSprite *this)

{
                    /* 0x1b770  3  ?AnimateThink@CSprite@@QAEXXZ */
  Animate(this,(gpGlobals->time - *(float *)&this->field_0x54) * this->pev->framerate);
  this->pev->nextthink = gpGlobals->time + 0.1;
  *(float *)&this->field_0x54 = gpGlobals->time;
  return;
}

/* 1001b7c0  CSprite::AnimateUntilDead  (63 bytes)
 * void AnimateUntilDead(void)
 */
/* public: void __thiscall CSprite::AnimateUntilDead(void) */

void __thiscall CSprite::AnimateUntilDead(CSprite *this)

{
                    /* 0x1b7c0  4  ?AnimateUntilDead@CSprite@@QAEXXZ */
  if (this->pev->dmgtime < gpGlobals->time) {
    UTIL_Remove((int *)this);
    return;
  }
  AnimateThink(this);
  this->pev->nextthink = gpGlobals->time;
  return;
}

/* 1001b800  CSprite::ExpandThink  (127 bytes)
 * void ExpandThink(void)
 */
/* public: void __thiscall CSprite::ExpandThink(void) */

void __thiscall CSprite::ExpandThink(CSprite *this)

{
  entvars_t *peVar1;
  float fVar2;
  
                    /* 0x1b800  43  ?ExpandThink@CSprite@@QAEXXZ */
  fVar2 = gpGlobals->time - *(float *)&this->field_0x54;
  peVar1 = this->pev;
  peVar1->scale = fVar2 * peVar1->speed + peVar1->scale;
  peVar1 = this->pev;
  peVar1->renderamt = peVar1->renderamt - fVar2 * peVar1->health;
  peVar1 = this->pev;
  if (peVar1->renderamt <= 0.0) {
    peVar1->renderamt = 0.0;
    UTIL_Remove((int *)this);
    return;
  }
  peVar1->nextthink = gpGlobals->time + 0.1;
  *(float *)&this->field_0x54 = gpGlobals->time;
  return;
}

/* 1001b880  CSprite::Animate  (97 bytes)
 * undefined Animate(float param_1)
 * called by: CSprite::AnimateThink
 */
void __thiscall CSprite::Animate(CSprite *this,float param_1)

{
  entvars_t *peVar1;
  float10 fVar2;
  
  this->pev->frame = param_1 + this->pev->frame;
  peVar1 = this->pev;
  if (*(float *)&this->field_0x58 < peVar1->frame) {
    if ((peVar1->spawnflags & 2) != 0) {
      TurnOff((int)this);
      return;
    }
    if (0.0 < *(float *)&this->field_0x58) {
      fVar2 = (float10)FUN_1007dc8a(this);
      peVar1->frame = (float)fVar2;
    }
  }
  return;
}

/* 1001b8f0  CSprite::TurnOff  (27 bytes)
 * undefined TurnOff(int param_1)
 * called by: CLaser::TurnOff, CSprite::Animate, CSprite::Spawn, CSprite::Use
 */
void __fastcall CSprite::TurnOff(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x104) = 0;
  return;
}

/* 1001b910  CSprite::TurnOn  (119 bytes)
 * undefined TurnOn(int param_1)
 * called by: CLaser::TurnOn, CSprite::Spawn, CSprite::SpriteCreate, CSprite::Use
 */
void __fastcall CSprite::TurnOn(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0;
  iVar1 = *(int *)(param_1 + 4);
  if (((*(float *)(iVar1 + 0x138) == 0.0) || (*(float *)(param_1 + 0x58) <= 1.0)) &&
     ((*(byte *)(iVar1 + 0x1a0) & 2) == 0)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0;
    return;
  }
  *(code **)(param_1 + 0x10) = AnimateThink;
  *(float *)(iVar1 + 0x104) = gpGlobals->time;
  *(float *)(param_1 + 0x54) = gpGlobals->time;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0;
  return;
}

/* 1001b990  CSprite::Use  (69 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, int param_3)
 */
void __thiscall CSprite::Use(CSprite *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(this->pev->effects != 0x80);
  iVar1 = CBaseEntity::ShouldToggle(param_3,uVar2);
  if (iVar1 != 0) {
    if (uVar2 != 0) {
      TurnOff((int)this);
      return;
    }
    TurnOn((int)this);
  }
  return;
}

