/* mp.dll - CTSShotgunWeapon (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10028790  CTSShotgunWeapon::RandomShotgun  (58 bytes)
 * undefined RandomShotgun()
 */
undefined4 CTSShotgunWeapon::RandomShotgun(void)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnRandomLong)(1,5);
  switch(iVar1) {
  case 2:
    return 0x1a;
  case 3:
    return 0x21;
  case 4:
    return 0x14;
  case 5:
    return 0xb;
  default:
    return 4;
  }
}

