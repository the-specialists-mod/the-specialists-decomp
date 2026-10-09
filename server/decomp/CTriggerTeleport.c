/* ts_i386.so - CTriggerTeleport (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e93d8  CTriggerTeleport::Spawn  (57 bytes)
 * undefined Spawn(void)
 */
/* CTriggerTeleport::Spawn(void) */

void __thiscall CTriggerTeleport::Spawn(CTriggerTeleport *this)

{
  CBaseTrigger::InitTrigger((CBaseTrigger *)this);
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = CBaseTrigger::TeleportTouch;
  return;
}

