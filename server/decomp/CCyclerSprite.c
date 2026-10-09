/* ts_i386.so - CCyclerSprite (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c7960  CCyclerSprite::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CCyclerSprite::Save(CSave &) */

undefined4 __thiscall CCyclerSprite::Save(CCyclerSprite *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CCyclerSprite",(int)this,(int *)m_SaveData,3);
  }
  return uVar2;
}

/* 000c79b0  CCyclerSprite::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CCyclerSprite::Restore(CRestore &) */

undefined4 __thiscall CCyclerSprite::Restore(CCyclerSprite *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CCyclerSprite",(int)this,(int)m_SaveData,3);
  }
  return uVar2;
}

/* 000c7a00  CCyclerSprite::Spawn  (214 bytes)
 * undefined Spawn(void)
 */
/* CCyclerSprite::Spawn(void) */

void __thiscall CCyclerSprite::Spawn(CCyclerSprite *this)

{
  int iVar1;
  
  this->pev->solid = 3;
  this->pev->movetype = 0;
  this->pev->takedamage = 1.0;
  this->pev->effects = 0;
  this->pev->frame = 0.0;
  this->pev->nextthink = gpGlobals->time + 0.1;
  *(undefined4 *)&this->field_0x64 = 1;
  *(float *)&this->field_0x68 = gpGlobals->time;
  (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + this->pev->model);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  iVar1 = (*g_engfuncs.pfnModelFrames)(this->pev->modelindex);
  *(float *)&this->field_0x6c = (float)iVar1 - 1.0;
  return;
}

/* 000c7ad8  CCyclerSprite::Think  (130 bytes)
 * undefined Think(void)
 */
/* CCyclerSprite::Think(void) */

void __thiscall CCyclerSprite::Think(CCyclerSprite *this)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(int *)&this->field_0x64 != 0) && (1.0 < *(float *)&this->field_0x6c)) {
    bVar1 = true;
  }
  if (bVar1) {
    Animate(this,(gpGlobals->time - *(float *)&this->field_0x68) * this->pev->framerate);
  }
  this->pev->nextthink = gpGlobals->time + 0.1;
  *(float *)&this->field_0x68 = gpGlobals->time;
  return;
}

/* 000c7b5c  CCyclerSprite::Use  (87 bytes)
 * undefined Use(int * param_1)
 */
/* CCyclerSprite::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CCyclerSprite::Use(int *param_1)

{
  param_1[0x19] = (uint)(param_1[0x19] == 0);
  (*g_engfuncs.pfnAlertMessage)
            (at_console,"Sprite: %s\n",gpGlobals->pStringBase + *(int *)(*param_1 + 0xb8));
  return;
}

/* 000c7bb4  CCyclerSprite::TakeDamage  (63 bytes)
 * undefined4 TakeDamage(CCyclerSprite * param_1)
 */
/* CCyclerSprite::TakeDamage(entvars_s *, entvars_s *, float, int) */

undefined4 CCyclerSprite::TakeDamage(CCyclerSprite *param_1)

{
  if (1.0 < *(float *)&param_1->field_0x6c) {
    Animate(param_1,1.0);
  }
  return 1;
}

/* 000c7bf4  CCyclerSprite::Animate  (93 bytes)
 * undefined Animate(float param_1)
 */
/* CCyclerSprite::Animate(float) */

void __thiscall CCyclerSprite::Animate(CCyclerSprite *this,float param_1)

{
  longdouble lVar1;
  
  this->pev->frame = param_1 + this->pev->frame;
  if (0.0 < *(float *)&this->field_0x6c) {
    lVar1 = (longdouble)this->pev->frame;
    do {
      lVar1 = lVar1 - (longdouble)(unkint10)(lVar1 / (longdouble)*(float *)&this->field_0x6c) *
                      (longdouble)*(float *)&this->field_0x6c;
    } while (NAN(*(float *)&this->field_0x6c));
    this->pev->frame = (float)lVar1;
  }
  return;
}

/* 000c87b0  CCyclerSprite::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CCyclerSprite::ObjectCaps(void) */

undefined4 CCyclerSprite::ObjectCaps(void)

{
  return 0x8000000a;
}

/* 000c87b8  CCyclerSprite::ShouldAnimate  (53 bytes)
 * undefined4 ShouldAnimate(void)
 */
/* CCyclerSprite::ShouldAnimate(void) */

undefined4 __thiscall CCyclerSprite::ShouldAnimate(CCyclerSprite *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)&this->field_0x64 != 0) && (1.0 < *(float *)&this->field_0x6c)) {
    uVar1 = 1;
  }
  return uVar1;
}

