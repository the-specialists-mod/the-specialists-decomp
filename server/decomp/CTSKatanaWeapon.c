/* ts_i386.so - CTSKatanaWeapon (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c9eec  CTSKatanaWeapon::Spawn  (44 bytes)
 * undefined Spawn(void)
 */
/* CTSKatanaWeapon::Spawn(void) */

void __thiscall CTSKatanaWeapon::Spawn(CTSKatanaWeapon *this)

{
  *(undefined4 *)&this->field_0xa4 = 0x22;
  CTSGroundWeapon::Spawn((CTSGroundWeapon *)this);
  return;
}

