/* ts_i386.so - CTSSniperAmmo (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c94a8  CTSSniperAmmo::Spawn  (96 bytes)
 * undefined Spawn(void)
 */
/* CTSSniperAmmo::Spawn(void) */

void __thiscall CTSSniperAmmo::Spawn(CTSSniperAmmo *this)

{
  undefined4 *puVar1;
  
  CTSGroundAmmo::Spawn((CTSGroundAmmo *)this);
  puVar1 = get_ammo_info(8);
  *(int *)&this->field_0x88 = (int)puVar1[3] / 2;
  puVar1 = get_ammo_info(0xd);
  *(int *)&this->field_0x9c = (int)puVar1[3] / 2;
  return;
}

