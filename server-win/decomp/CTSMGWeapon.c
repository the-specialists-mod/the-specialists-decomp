/* mp.dll - CTSMGWeapon (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100289f0  CTSMGWeapon::Spawn  (25 bytes)
 * undefined Spawn()
 */
void __fastcall CTSMGWeapon::Spawn(int *param_1)

{
  param_1[0x25] = 0x20;
  param_1[0x26] = 100;
  CTSGroundWeapon::Spawn(param_1);
  return;
}

