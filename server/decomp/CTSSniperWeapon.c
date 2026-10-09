/* ts_i386.so - CTSSniperWeapon (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c9508  CTSSniperWeapon::Spawn  (44 bytes)
 * undefined Spawn(void)
 */
/* CTSSniperWeapon::Spawn(void) */

void __thiscall CTSSniperWeapon::Spawn(CTSSniperWeapon *this)

{
  *(undefined4 *)&this->field_0xa4 = 0x12;
  CTSGroundWeapon::Spawn((CTSGroundWeapon *)this);
  return;
}

