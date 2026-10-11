/* mp.dll - CTSKnifeWeapon (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10028a30  CTSKnifeWeapon::RandomKnife  (29 bytes)
 * undefined RandomKnife()
 */
undefined4 CTSKnifeWeapon::RandomKnife(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*g_engfuncs.pfnRandomLong)(1,2);
  uVar2 = 0x19;
  if (iVar1 == 2) {
    uVar2 = 0x23;
  }
  return uVar2;
}

