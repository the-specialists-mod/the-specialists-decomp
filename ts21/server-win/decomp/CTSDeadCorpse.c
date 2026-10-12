/* mp.dll - CTSDeadCorpse (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10040890  CTSDeadCorpse::Spawn  (40 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CTSDeadCorpse::Spawn(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  param_1[4] = (int)FUN_100408c0;
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.5;
  return;
}

/* 10040980  CTSDeadCorpse::Precache  (1 bytes)
 * undefined Precache()
 */
void CTSDeadCorpse::Precache(void)

{
  return;
}

/* 10040990  CTSDeadCorpse::TraceAttack  (3 bytes)
 * undefined TraceAttack()
 */
void CTSDeadCorpse::TraceAttack(void)

{
  return;
}

/* 100409f0  CTSDeadCorpse::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CTSDeadCorpse::ObjectCaps(void)

{
  return 0x80000000;
}

