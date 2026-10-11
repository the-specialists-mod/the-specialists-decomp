/* mp.dll - CTSKatanaWeapon (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10028a50  CTSKatanaWeapon::Spawn  (15 bytes)
 * undefined Spawn()
 */
void __fastcall CTSKatanaWeapon::Spawn(int *param_1)

{
  param_1[0x25] = 0x22;
  CTSGroundWeapon::Spawn(param_1);
  return;
}

