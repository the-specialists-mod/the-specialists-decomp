/* ts_i386.so - CTSGrenadeWeapon (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c9f18  CTSGrenadeWeapon::Spawn  (44 bytes)
 * undefined Spawn(void)
 */
/* CTSGrenadeWeapon::Spawn(void) */

void __thiscall CTSGrenadeWeapon::Spawn(CTSGrenadeWeapon *this)

{
  *(undefined4 *)&this->field_0xa4 = 0x18;
  CTSGroundWeapon::Spawn((CTSGroundWeapon *)this);
  return;
}

