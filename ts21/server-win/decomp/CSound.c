/* mp.dll - CSound (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100371a0  CSound::Clear  (50 bytes)
 * undefined Clear(undefined4 * param_1)
 * called by: CSoundEnt::Initialize
 */
void __fastcall CSound::Clear(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = DAT_1009f4a8;
  param_1[1] = DAT_1009f4ac;
  uVar1 = DAT_1009f4b0;
  param_1[6] = 0xffffffff;
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  return;
}

