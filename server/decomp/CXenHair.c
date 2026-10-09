/* ts_i386.so - CXenHair (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f5760  CXenHair::Spawn  (299 bytes)
 * undefined Spawn(void)
 */
/* CXenHair::Spawn(void) */

void __thiscall CXenHair::Spawn(CXenHair *this)

{
  longdouble lVar1;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  (*this->vtable[10])(this);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/hair.mdl");
  local_2c = 0x40800000;
  local_24 = 0x42000000;
  local_3c = 0xc0800000;
  local_34 = 0;
  local_38 = local_3c;
  local_28 = local_2c;
  UTIL_SetSize((int)this->pev,&local_3c,&local_2c);
  this->pev->sequence = 0;
  if ((((byte)this->pev->spawnflags ^ 1) & 1) != 0) {
    lVar1 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.0,255.0);
    this->pev->frame = (float)lVar1;
    lVar1 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.7,1.4);
    this->pev->framerate = (float)lVar1;
  }
  CBaseAnimating::ResetSequenceInfo((CBaseAnimating *)this);
  this->pev->solid = 0;
  this->pev->movetype = 0;
  lVar1 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.1,0.4);
  this->pev->nextthink = (float)(lVar1 + (longdouble)gpGlobals->time);
  return;
}

/* 000f588c  CXenHair::Think  (64 bytes)
 * undefined Think(void)
 */
/* CXenHair::Think(void) */

void __thiscall CXenHair::Think(CXenHair *this)

{
  CBaseAnimating::StudioFrameAdvance((CBaseAnimating *)this,0.0);
  this->pev->nextthink = gpGlobals->time + 0.5;
  return;
}

/* 000f58cc  CXenHair::Precache  (39 bytes)
 * undefined Precache(void)
 */
/* CXenHair::Precache(void) */

void CXenHair::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)("models/hair.mdl");
  return;
}

