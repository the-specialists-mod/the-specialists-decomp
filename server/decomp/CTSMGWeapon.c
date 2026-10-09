/* ts_i386.so - CTSMGWeapon (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c9dac  CTSMGWeapon::Spawn  (54 bytes)
 * undefined Spawn(void)
 */
/* CTSMGWeapon::Spawn(void) */

void __thiscall CTSMGWeapon::Spawn(CTSMGWeapon *this)

{
  *(undefined4 *)&this->field_0xa4 = 0x20;
  *(undefined4 *)&this->field_0xa8 = 100;
  CTSGroundWeapon::Spawn((CTSGroundWeapon *)this);
  return;
}

