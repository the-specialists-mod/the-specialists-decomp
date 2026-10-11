/* mp.dll - CTSRifleWeapon (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10028820  CTSRifleWeapon::RandomRifle  (48 bytes)
 * undefined RandomRifle()
 */
undefined4 CTSRifleWeapon::RandomRifle(void)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnRandomLong)(1,4);
  if (iVar1 == 2) {
    return 5;
  }
  if (iVar1 != 3) {
    if (iVar1 != 4) {
      return 0xd;
    }
    return 0xf;
  }
  return 0x1b;
}

