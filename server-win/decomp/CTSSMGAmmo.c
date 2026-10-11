/* mp.dll - CTSSMGAmmo (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10028850  CTSSMGAmmo::Spawn  (88 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CTSSMGAmmo::Spawn(int *param_1)

{
  undefined4 *puVar1;
  
  CTSGroundAmmo::Spawn(param_1);
  puVar1 = get_ammo_info(2);
  param_1[0x18] = (int)puVar1[3] / 2;
  puVar1 = get_ammo_info(1);
  param_1[0x17] = (int)puVar1[3] / 2;
  puVar1 = get_ammo_info(7);
  param_1[0x1d] = (int)puVar1[3] / 2;
  puVar1 = get_ammo_info(0xc);
  param_1[0x22] = (int)puVar1[3] / 2;
  return;
}

