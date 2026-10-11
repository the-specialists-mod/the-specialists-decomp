/* mp.dll - CSound (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003dbc0  CSound::Clear  (50 bytes)
 * undefined Clear(undefined4 * param_1)
 * called by: CSoundEnt::Initialize
 */
void __fastcall CSound::Clear(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = DAT_100ae498;
  param_1[1] = DAT_100ae49c;
  uVar1 = DAT_100ae4a0;
  param_1[6] = 0xffffffff;
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  return;
}

