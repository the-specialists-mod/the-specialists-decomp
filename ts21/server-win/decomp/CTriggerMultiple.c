/* mp.dll - CTriggerMultiple (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003acb0  CTriggerMultiple::Spawn  (42 bytes)
 * undefined Spawn(int param_1)
 * called by: CTriggerOnce::Spawn
 */
void __fastcall CTriggerMultiple::Spawn(int param_1)

{
  if (*(float *)(param_1 + 0x7c) == 0.0) {
    *(undefined4 *)(param_1 + 0x7c) = 0x3e4ccccd;
  }
  CBaseTrigger::InitTrigger(param_1);
  *(code **)(param_1 + 0x14) = CBaseTrigger::MultiTouch;
  return;
}

