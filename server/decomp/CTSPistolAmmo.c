/* ts_i386.so - CTSPistolAmmo (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c9a2c  CTSPistolAmmo::Spawn  (180 bytes)
 * undefined Spawn(void)
 */
/* CTSPistolAmmo::Spawn(void) */

void __thiscall CTSPistolAmmo::Spawn(CTSPistolAmmo *this)

{
  undefined4 *puVar1;
  
  CTSGroundAmmo::Spawn((CTSGroundAmmo *)this);
  puVar1 = get_ammo_info(2);
  *(int *)(this + 0x70) = (int)puVar1[3] / 2;
  puVar1 = get_ammo_info(10);
  *(int *)(this + 0x90) = (int)puVar1[3] / 2;
  puVar1 = get_ammo_info(9);
  *(int *)(this + 0x8c) = (int)puVar1[3] / 2;
  puVar1 = get_ammo_info(1);
  *(int *)(this + 0x6c) = (int)puVar1[3] / 2;
  puVar1 = get_ammo_info(7);
  *(int *)(this + 0x84) = (int)puVar1[3] / 2;
  return;
}

