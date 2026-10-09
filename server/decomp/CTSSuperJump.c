/* ts_i386.so - CTSSuperJump (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c9f44  CTSSuperJump::Spawn  (54 bytes)
 * undefined Spawn(void)
 */
/* CTSSuperJump::Spawn(void) */

void __thiscall CTSSuperJump::Spawn(CTSSuperJump *this)

{
  *(undefined4 *)&this->field_0x84 = 0x100;
  CTSPowerUp::Spawn((CTSPowerUp *)this);
  DAT_001781a1 = 0xff;
  return;
}

