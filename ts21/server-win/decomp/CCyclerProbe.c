/* mp.dll - CCyclerProbe (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001fad0  CCyclerProbe::Spawn  (118 bytes)
 * undefined Spawn()
 */
void __fastcall CCyclerProbe::Spawn(CCycler *param_1)

{
  int iVar1;
  undefined1 auStack_28 [12];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
  *(float *)(iVar1 + 0x10) = *(float *)(iVar1 + 0x10) + 16.0;
  uStack_1c = 0x41800000;
  uStack_18 = 0x41800000;
  uStack_14 = 0x41800000;
  FUN_1000c5f0(auStack_28,0xc1800000,0xc1800000,0xc1800000);
  CCycler::GenericCyclerSpawn(param_1,s_models_prdroid_mdl_1009426c);
  return;
}

