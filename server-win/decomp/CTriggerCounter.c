/* mp.dll - CTriggerCounter (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10041d40  CTriggerCounter::Spawn  (35 bytes)
 * undefined Spawn()
 */
void __fastcall CTriggerCounter::Spawn(int param_1)

{
  *(undefined4 *)(param_1 + 0x7c) = 0xbf800000;
  if (*(int *)(param_1 + 0xbc) == 0) {
    *(undefined4 *)(param_1 + 0xbc) = 2;
  }
  *(code **)(param_1 + 0x18) = CBaseTrigger::CounterUse;
  return;
}

