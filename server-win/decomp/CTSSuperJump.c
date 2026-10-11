/* mp.dll - CTSSuperJump (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10028a70  CTSSuperJump::Spawn  (20 bytes)
 * undefined Spawn()
 */
void __fastcall CTSSuperJump::Spawn(int *param_1)

{
  param_1[0x1d] = 0x100;
  CTSPowerUp::Spawn(param_1);
  DAT_100c0a49 = 0xff;
  return;
}

