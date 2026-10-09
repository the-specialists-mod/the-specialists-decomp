/* ts_i386.so - CTriggerCounter (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e7b54  CTriggerCounter::Spawn  (69 bytes)
 * undefined Spawn(void)
 */
/* CTriggerCounter::Spawn(void) */

void __thiscall CTriggerCounter::Spawn(CTriggerCounter *this)

{
  *(undefined4 *)&this->field_0x8c = 0xbf800000;
  if (*(int *)&this->field_0xcc == 0) {
    *(undefined4 *)&this->field_0xcc = 2;
  }
  *(undefined4 *)&this->field_0x1c = 0xffff0000;
  *(code **)&this->field_0x20 = CBaseTrigger::CounterUse;
  return;
}

