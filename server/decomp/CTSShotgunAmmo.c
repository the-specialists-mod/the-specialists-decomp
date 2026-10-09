/* ts_i386.so - CTSShotgunAmmo (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c9534  CTSShotgunAmmo::Spawn  (63 bytes)
 * undefined Spawn(void)
 */
/* CTSShotgunAmmo::Spawn(void) */

void __thiscall CTSShotgunAmmo::Spawn(CTSShotgunAmmo *this)

{
  undefined4 *puVar1;
  
  CTSGroundAmmo::Spawn((CTSGroundAmmo *)this);
  puVar1 = get_ammo_info(3);
  *(int *)&this->field_0x74 = (int)puVar1[3] / 2;
  return;
}

