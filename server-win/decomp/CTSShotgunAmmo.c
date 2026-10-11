/* mp.dll - CTSShotgunAmmo (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10028770  CTSShotgunAmmo::Spawn  (31 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CTSShotgunAmmo::Spawn(int *param_1)

{
  undefined4 *puVar1;
  
  CTSGroundAmmo::Spawn(param_1);
  puVar1 = get_ammo_info(3);
  param_1[0x19] = (int)puVar1[3] / 2;
  return;
}

