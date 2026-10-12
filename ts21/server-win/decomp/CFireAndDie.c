/* mp.dll - CFireAndDie (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003b0f0  CFireAndDie::Spawn  (27 bytes)
 * undefined Spawn()
 */
void __fastcall CFireAndDie::Spawn(int param_1)

{
  **(int **)(param_1 + 4) = (int)s_fireanddie_100979d4 - (int)gpGlobals->pStringBase;
  return;
}

/* 1003b110  CFireAndDie::Precache  (20 bytes)
 * undefined Precache()
 */
void __fastcall CFireAndDie::Precache(int param_1)

{
  *(float *)(*(int *)(param_1 + 4) + 0x104) = *(float *)(param_1 + 0x54) + gpGlobals->time;
  return;
}

/* 1003b130  CFireAndDie::Think  (24 bytes)
 * undefined Think(void * param_1)
 */
void __fastcall CFireAndDie::Think(void *param_1)

{
  CBaseDelay::SUB_UseTargets(param_1,param_1,3,0);
  UTIL_Remove((int)param_1);
  return;
}

/* 1003d2c0  CFireAndDie::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CFireAndDie::ObjectCaps(void)

{
  return 0x82;
}

