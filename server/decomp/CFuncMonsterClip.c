/* ts_i386.so - CFuncMonsterClip (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a55d0  CFuncMonsterClip::Spawn  (97 bytes)
 * undefined Spawn(void)
 */
/* CFuncMonsterClip::Spawn(void) */

void __thiscall CFuncMonsterClip::Spawn(CFuncMonsterClip *this)

{
  int *piVar1;
  longdouble lVar2;
  
  CFuncWall::Spawn((CFuncWall *)this);
  lVar2 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("showtriggers");
  if (lVar2 == (longdouble)0.0) {
    this->pev->effects = 0x80;
  }
  piVar1 = &this->pev->flags;
  *piVar1 = *piVar1 | 0x800000;
  return;
}

/* 000a74ec  CFuncMonsterClip::Use  (1 bytes)
 * undefined Use(void)
 */
/* CFuncMonsterClip::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CFuncMonsterClip::Use(void)

{
  return;
}

