/* ts_i386.so - CLadder (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e8df8  CLadder::KeyValue  (37 bytes)
 * undefined KeyValue(int param_1)
 */
/* CLadder::KeyValue(KeyValueData_s *) */

void __thiscall CLadder::KeyValue(CLadder *this,int param_1)

{
  CBaseTrigger::KeyValue((CBaseTrigger *)this,param_1);
  return;
}

/* 000e8e20  CLadder::Precache  (125 bytes)
 * undefined Precache(void)
 */
/* CLadder::Precache(void) */

void __thiscall CLadder::Precache(CLadder *this)

{
  int *piVar1;
  longdouble lVar2;
  
  this->pev->solid = 0;
  this->pev->skin = -0x10;
  lVar2 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("showtriggers");
  if (lVar2 == (longdouble)0.0) {
    this->pev->rendermode = 2;
    this->pev->renderamt = 0.0;
  }
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 & 0xffffff7f;
  return;
}

/* 000e8ea0  CLadder::Spawn  (90 bytes)
 * undefined Spawn(void)
 */
/* CLadder::Spawn(void) */

void __thiscall CLadder::Spawn(CLadder *this)

{
  (*this->vtable[10])(this);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  this->pev->movetype = 7;
  return;
}

