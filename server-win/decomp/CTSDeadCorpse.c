/* mp.dll - CTSDeadCorpse (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100485a0  CTSDeadCorpse::Spawn  (40 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CTSDeadCorpse::Spawn(int *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  param_1[4] = (int)FUN_100485d0;
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.5;
  return;
}

/* 10048690  CTSDeadCorpse::TraceAttack  (3 bytes)
 * undefined TraceAttack()
 */
void CTSDeadCorpse::TraceAttack(void)

{
  return;
}

