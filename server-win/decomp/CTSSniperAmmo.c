/* mp.dll - CTSSniperAmmo (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10028720  CTSSniperAmmo::Spawn  (52 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CTSSniperAmmo::Spawn(int *param_1)

{
  undefined4 *puVar1;
  
  CTSGroundAmmo::Spawn(param_1);
  puVar1 = get_ammo_info(8);
  param_1[0x1e] = (int)puVar1[3] / 2;
  puVar1 = get_ammo_info(0xd);
  param_1[0x23] = (int)puVar1[3] / 2;
  return;
}

