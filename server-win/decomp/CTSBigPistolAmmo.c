/* mp.dll - CTSBigPistolAmmo (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10028980  CTSBigPistolAmmo::Spawn  (52 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CTSBigPistolAmmo::Spawn(int *param_1)

{
  undefined4 *puVar1;
  
  CTSGroundAmmo::Spawn(param_1);
  puVar1 = get_ammo_info(5);
  param_1[0x1b] = (int)puVar1[3] / 2;
  puVar1 = get_ammo_info(0xb);
  param_1[0x21] = (int)puVar1[3] / 2;
  return;
}

