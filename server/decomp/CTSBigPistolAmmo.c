/* ts_i386.so - CTSBigPistolAmmo (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c9c38  CTSBigPistolAmmo::Spawn  (93 bytes)
 * undefined Spawn(void)
 */
/* CTSBigPistolAmmo::Spawn(void) */

void __thiscall CTSBigPistolAmmo::Spawn(CTSBigPistolAmmo *this)

{
  undefined4 *puVar1;
  
  CTSGroundAmmo::Spawn((CTSGroundAmmo *)this);
  puVar1 = get_ammo_info(5);
  *(int *)&this->field_0x7c = (int)puVar1[3] / 2;
  puVar1 = get_ammo_info(0xb);
  *(int *)&this->field_0x94 = (int)puVar1[3] / 2;
  return;
}

