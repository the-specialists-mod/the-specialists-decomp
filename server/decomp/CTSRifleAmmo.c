/* ts_i386.so - CTSRifleAmmo (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c96b4  CTSRifleAmmo::Spawn  (93 bytes)
 * undefined Spawn(void)
 */
/* CTSRifleAmmo::Spawn(void) */

void __thiscall CTSRifleAmmo::Spawn(CTSRifleAmmo *this)

{
  undefined4 *puVar1;
  
  CTSGroundAmmo::Spawn((CTSGroundAmmo *)this);
  puVar1 = get_ammo_info(6);
  *(int *)&this->field_0x80 = (int)puVar1[3] / 2;
  puVar1 = get_ammo_info(4);
  *(int *)&this->field_0x78 = (int)puVar1[3] / 2;
  return;
}

