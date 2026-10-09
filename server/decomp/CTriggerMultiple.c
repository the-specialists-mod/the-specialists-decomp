/* ts_i386.so - CTriggerMultiple (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e7660  CTriggerMultiple::Spawn  (86 bytes)
 * undefined Spawn(void)
 */
/* CTriggerMultiple::Spawn(void) */

void __thiscall CTriggerMultiple::Spawn(CTriggerMultiple *this)

{
  if (*(float *)&this->field_0x8c == 0.0) {
    *(undefined4 *)&this->field_0x8c = 0x3e4ccccd;
  }
  CBaseTrigger::InitTrigger((CBaseTrigger *)this);
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = CBaseTrigger::MultiTouch;
  return;
}

