/* mp.dll - CXenSporeSmall (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1007cbb0  CXenSporeSmall::Spawn  (99 bytes)
 * undefined Spawn()
 */
void __fastcall CXenSporeSmall::Spawn(int *param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(param_1[1] + 0x110) = 0;
  CXenSpore::Spawn(param_1);
  uStack_18 = 0x41800000;
  uStack_14 = 0x41800000;
  uStack_10 = 0x42800000;
  uStack_c = 0xc1800000;
  uStack_8 = 0xc1800000;
  uStack_4 = 0;
  UTIL_SetSize(param_1[1],&uStack_c,&uStack_18);
  return;
}

