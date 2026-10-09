/* ts_i386.so - CXenSpore (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f6880  CXenSpore::Spawn  (215 bytes)
 * undefined Spawn(void)
 */
/* CXenSpore::Spawn(void) */

void __thiscall CXenSpore::Spawn(CXenSpore *this)

{
  longdouble lVar1;
  
  (*this->vtable[10])(this);
  (*g_engfuncs.pfnSetModel)
            (this->pev->pContainingEntity,*(char **)(pModelNames + this->pev->skin * 4));
  this->pev->movetype = 0;
  this->pev->solid = 2;
  this->pev->takedamage = 1.0;
  this->pev->sequence = 0;
  lVar1 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.0,255.0);
  this->pev->frame = (float)lVar1;
  lVar1 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.7,1.4);
  this->pev->framerate = (float)lVar1;
  CBaseAnimating::ResetSequenceInfo((CBaseAnimating *)this);
  lVar1 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.1,0.4);
  this->pev->nextthink = (float)(lVar1 + (longdouble)gpGlobals->time);
  return;
}

/* 000f6958  CXenSpore::Precache  (53 bytes)
 * undefined Precache(void)
 */
/* CXenSpore::Precache(void) */

void __thiscall CXenSpore::Precache(CXenSpore *this)

{
  (*g_engfuncs.pfnPrecacheModel)(*(char **)(pModelNames + this->pev->skin * 4));
  return;
}

/* 000f6990  CXenSpore::Touch  (1 bytes)
 * undefined Touch(void)
 */
/* CXenSpore::Touch(CBaseEntity *) */

void CXenSpore::Touch(void)

{
  return;
}

/* 000f6994  CXenSpore::Think  (64 bytes)
 * undefined Think(void)
 */
/* CXenSpore::Think(void) */

void __thiscall CXenSpore::Think(CXenSpore *this)

{
  CBaseAnimating::StudioFrameAdvance((CBaseAnimating *)this,0.0);
  this->pev->nextthink = gpGlobals->time + 0.1;
  return;
}

/* 000f7180  CXenSpore::TakeDamage  (6 bytes)
 * undefined4 TakeDamage(void)
 */
/* CXenSpore::TakeDamage(entvars_s *, entvars_s *, float, int) */

undefined4 CXenSpore::TakeDamage(void)

{
  return 0;
}

/* 000f7188  CXenSpore::Attack  (1 bytes)
 * undefined Attack(void)
 */
/* CXenSpore::Attack(void) */

void CXenSpore::Attack(void)

{
  return;
}

