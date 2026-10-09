/* ts_i386.so - CTriggerOnce (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e76dc  CTriggerOnce::Spawn  (44 bytes)
 * undefined Spawn(void)
 */
/* CTriggerOnce::Spawn(void) */

void __thiscall CTriggerOnce::Spawn(CTriggerOnce *this)

{
  *(undefined4 *)&this->field_0x8c = 0xbf800000;
  CTriggerMultiple::Spawn((CTriggerMultiple *)this);
  return;
}

