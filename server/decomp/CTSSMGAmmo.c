/* ts_i386.so - CTSSMGAmmo (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c9848  CTSSMGAmmo::Spawn  (150 bytes)
 * undefined Spawn(void)
 */
/* CTSSMGAmmo::Spawn(void) */

void __thiscall CTSSMGAmmo::Spawn(CTSSMGAmmo *this)

{
  undefined4 *puVar1;
  
  CTSGroundAmmo::Spawn((CTSGroundAmmo *)this);
  puVar1 = get_ammo_info(2);
  *(int *)&this->field_0x70 = (int)puVar1[3] / 2;
  puVar1 = get_ammo_info(1);
  *(int *)&this->field_0x6c = (int)puVar1[3] / 2;
  puVar1 = get_ammo_info(7);
  *(int *)&this->field_0x84 = (int)puVar1[3] / 2;
  puVar1 = get_ammo_info(0xc);
  *(int *)&this->field_0x98 = (int)puVar1[3] / 2;
  return;
}

