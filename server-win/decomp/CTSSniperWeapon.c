/* mp.dll - CTSSniperWeapon (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10028760  CTSSniperWeapon::Spawn  (15 bytes)
 * undefined Spawn()
 */
void __fastcall CTSSniperWeapon::Spawn(int *param_1)

{
  param_1[0x25] = 0x12;
  CTSGroundWeapon::Spawn(param_1);
  return;
}

