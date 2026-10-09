/* ts_i386.so - CGlow (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000bb818  CGlow::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CGlow::Save(CSave &) */

undefined4 __thiscall CGlow::Save(CGlow *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CGlow",(int)this,(int *)m_SaveData,2);
  }
  return uVar2;
}

/* 000bb868  CGlow::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CGlow::Restore(CRestore &) */

undefined4 __thiscall CGlow::Restore(CGlow *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CGlow",(int)this,(int)m_SaveData,2);
  }
  return uVar2;
}

/* 000bb8b8  CGlow::Spawn  (238 bytes)
 * undefined Spawn(void)
 */
/* CGlow::Spawn(void) */

void __thiscall CGlow::Spawn(CGlow *this)

{
  int iVar1;
  
  this->pev->solid = 0;
  this->pev->movetype = 0;
  this->pev->effects = 0;
  this->pev->frame = 0.0;
  (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + this->pev->model);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  iVar1 = (*g_engfuncs.pfnModelFrames)(this->pev->modelindex);
  *(float *)&this->field_0x68 = (float)iVar1 - 1.0;
  if ((1.0 < (float)iVar1 - 1.0) && (this->pev->framerate != 0.0)) {
    this->pev->nextthink = gpGlobals->time + 0.1;
  }
  *(float *)&this->field_0x64 = gpGlobals->time;
  return;
}

/* 000bb9a8  CGlow::Think  (87 bytes)
 * undefined Think(void)
 */
/* CGlow::Think(void) */

void __thiscall CGlow::Think(CGlow *this)

{
  Animate(this,(gpGlobals->time - *(float *)&this->field_0x64) * this->pev->framerate);
  this->pev->nextthink = gpGlobals->time + 0.1;
  *(float *)&this->field_0x64 = gpGlobals->time;
  return;
}

/* 000bba00  CGlow::Animate  (79 bytes)
 * undefined Animate(float param_1)
 */
/* CGlow::Animate(float) */

void __thiscall CGlow::Animate(CGlow *this,float param_1)

{
  longdouble lVar1;
  
  if (0.0 < *(float *)&this->field_0x68) {
    lVar1 = (longdouble)param_1 + (longdouble)this->pev->frame;
    do {
      lVar1 = lVar1 - (longdouble)(unkint10)(lVar1 / (longdouble)*(float *)&this->field_0x68) *
                      (longdouble)*(float *)&this->field_0x68;
    } while (NAN(*(float *)&this->field_0x68));
    this->pev->frame = (float)lVar1;
  }
  return;
}

