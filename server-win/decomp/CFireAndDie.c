/* mp.dll - CFireAndDie (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10041df0  CFireAndDie::Spawn  (27 bytes)
 * undefined Spawn()
 */
void __fastcall CFireAndDie::Spawn(int param_1)

{
  **(int **)(param_1 + 4) = (int)s_fireanddie_100a2c84 - (int)gpGlobals->pStringBase;
  return;
}

/* 10041e10  CFireAndDie::Precache  (20 bytes)
 * undefined Precache()
 */
void __fastcall CFireAndDie::Precache(int param_1)

{
  *(float *)(*(int *)(param_1 + 4) + 0x104) = *(float *)(param_1 + 0x54) + gpGlobals->time;
  return;
}

/* 10041e30  CFireAndDie::Think  (24 bytes)
 * undefined Think(int * param_1)
 */
void __fastcall CFireAndDie::Think(int *param_1)

{
  CBaseDelay::SUB_UseTargets((CBaseDelay *)param_1,param_1,3,0);
  UTIL_Remove(param_1);
  return;
}

/* 10044230  CFireAndDie::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
/* Identical-code folding: also CFireAndDie::ObjectCaps, CGameTeamMaster::ObjectCaps */

undefined4 CFireAndDie::ObjectCaps(void)

{
  return 0x82;
}

