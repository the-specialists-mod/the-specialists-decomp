/* ts_i386.so - CFireAndDie (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e7c58  CFireAndDie::Spawn  (43 bytes)
 * undefined Spawn(void)
 */
/* CFireAndDie::Spawn(void) */

void __thiscall CFireAndDie::Spawn(CFireAndDie *this)

{
  this->pev->classname = (int)"fireanddie" - (int)gpGlobals->pStringBase;
  return;
}

/* 000e7c84  CFireAndDie::Precache  (40 bytes)
 * undefined Precache(void)
 */
/* CFireAndDie::Precache(void) */

void __thiscall CFireAndDie::Precache(CFireAndDie *this)

{
  this->pev->nextthink = gpGlobals->time + *(float *)&this->field_0x64;
  return;
}

/* 000e7cac  CFireAndDie::Think  (46 bytes)
 * undefined Think(void)
 */
/* CFireAndDie::Think(void) */

void __thiscall CFireAndDie::Think(CFireAndDie *this)

{
  CBaseDelay::SUB_UseTargets((CBaseDelay *)this,(int *)this,3,0);
  UTIL_Remove((int *)this);
  return;
}

/* 000eb8e0  CFireAndDie::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CFireAndDie::ObjectCaps(void) */

undefined4 CFireAndDie::ObjectCaps(void)

{
  return 0x82;
}

