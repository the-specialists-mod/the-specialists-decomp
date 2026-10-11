/* mp.dll - CTriggerTeleport (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10042e70  CTriggerTeleport::Spawn  (17 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTriggerTeleport::Spawn(int param_1)

{
  CBaseTrigger::InitTrigger(param_1);
  *(code **)(param_1 + 0x14) = CBaseTrigger::TeleportTouch;
  return;
}

