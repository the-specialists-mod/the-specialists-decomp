/* mp.dll - CTSSMGWeapon (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10028920  CTSSMGWeapon::RandomSMG  (64 bytes)
 * undefined RandomSMG()
 */
undefined4 CTSSMGWeapon::RandomSMG(void)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnRandomLong)(1,6);
  switch(iVar1) {
  case 2:
    return 7;
  case 3:
    return 6;
  case 4:
    return 0x13;
  case 5:
    return 0x11;
  case 6:
    return 3;
  default:
    return 0x17;
  }
}

