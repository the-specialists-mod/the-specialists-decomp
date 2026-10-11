/* mp.dll - CXenSporeMed (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1007cc20  CXenSporeMed::Spawn  (99 bytes)
 * undefined Spawn()
 */
void __fastcall CXenSporeMed::Spawn(int *param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(param_1[1] + 0x110) = 1;
  CXenSpore::Spawn(param_1);
  uStack_18 = 0x42200000;
  uStack_14 = 0x42200000;
  uStack_10 = 0x42f00000;
  uStack_c = 0xc2200000;
  uStack_8 = 0xc2200000;
  uStack_4 = 0;
  UTIL_SetSize(param_1[1],&uStack_c,&uStack_18);
  return;
}

