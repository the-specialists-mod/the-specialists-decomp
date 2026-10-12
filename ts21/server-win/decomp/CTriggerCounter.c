/* mp.dll - CTriggerCounter (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003b040  CTriggerCounter::Spawn  (35 bytes)
 * undefined Spawn()
 */
void __fastcall CTriggerCounter::Spawn(int param_1)

{
  *(undefined4 *)(param_1 + 0x7c) = 0xbf800000;
  *(code **)(param_1 + 0x18) = CBaseTrigger::CounterUse;
  if (*(int *)(param_1 + 0xbc) == 0) {
    *(undefined4 *)(param_1 + 0xbc) = 2;
  }
  return;
}

