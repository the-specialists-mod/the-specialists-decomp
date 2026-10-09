/* ts_i386.so - CTSDeadCorpse (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0007040c  CTSDeadCorpse::Spawn  (82 bytes)
 * undefined Spawn(void)
 */
/* CTSDeadCorpse::Spawn(void) */

void __thiscall CTSDeadCorpse::Spawn(CTSDeadCorpse *this)

{
  (*this->vtable[10])(this);
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = WaitThink;
  this->pev->nextthink = gpGlobals->time + 0.5;
  return;
}

/* 00070460  CTSDeadCorpse::WaitThink  (153 bytes)
 * undefined WaitThink(void)
 */
/* CTSDeadCorpse::WaitThink(void) */

void __thiscall CTSDeadCorpse::WaitThink(CTSDeadCorpse *this)

{
  float fVar1;
  
  this->pev->nextthink = gpGlobals->time + 0.5;
  if (gpGlobals->time <= *(float *)&this->field_0x64) {
    fVar1 = *(float *)&this->field_0x68 * 0.6666667;
    if (fVar1 < 1.0) {
      fVar1 = 1.0;
    }
    fVar1 = ((*(float *)&this->field_0x64 - gpGlobals->time) / fVar1) * 255.0;
    if (255.0 < fVar1) {
      fVar1 = 255.0;
    }
    this->pev->renderamt = fVar1;
  }
  else {
    UTIL_Remove((int *)this);
  }
  return;
}

/* 000704fc  CTSDeadCorpse::Precache  (1 bytes)
 * undefined Precache(void)
 */
/* CTSDeadCorpse::Precache(void) */

void CTSDeadCorpse::Precache(void)

{
  return;
}

/* 00070500  CTSDeadCorpse::TraceAttack  (1 bytes)
 * undefined TraceAttack(void)
 */
/* CTSDeadCorpse::TraceAttack(entvars_s *, float, Vector, TraceResult *, int) */

void CTSDeadCorpse::TraceAttack(void)

{
  return;
}

/* 000705d0  CTSDeadCorpse::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CTSDeadCorpse::ObjectCaps(void) */

undefined4 CTSDeadCorpse::ObjectCaps(void)

{
  return 0x80000000;
}

