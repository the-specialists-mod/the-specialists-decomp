/* mp.dll - CTSRifleAmmo (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100287e0  CTSRifleAmmo::Spawn  (49 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CTSRifleAmmo::Spawn(int *param_1)

{
  undefined4 *puVar1;
  
  CTSGroundAmmo::Spawn(param_1);
  puVar1 = get_ammo_info(6);
  param_1[0x1c] = (int)puVar1[3] / 2;
  puVar1 = get_ammo_info(4);
  param_1[0x1a] = (int)puVar1[3] / 2;
  return;
}

