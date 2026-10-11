/* mp.dll - CTSGrenadeWeapon (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10028a60  CTSGrenadeWeapon::Spawn  (15 bytes)
 * undefined Spawn()
 */
void __fastcall CTSGrenadeWeapon::Spawn(int *param_1)

{
  param_1[0x25] = 0x18;
  CTSGroundWeapon::Spawn(param_1);
  return;
}

