/* mp.dll - CTriggerOnce (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003acf0  CTriggerOnce::Spawn  (12 bytes)
 * undefined Spawn()
 */
void __fastcall CTriggerOnce::Spawn(int param_1)

{
  *(undefined4 *)(param_1 + 0x7c) = 0xbf800000;
  CTriggerMultiple::Spawn(param_1);
  return;
}

