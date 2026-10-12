/* mp.dll - CXenSporeLarge (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006db30  CXenSporeLarge::Spawn  (320 bytes)
 * undefined Spawn()
 */
void __fastcall CXenSporeLarge::Spawn(int *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(param_1[1] + 0x110) = 2;
  FUN_1006dc70(param_1);
  FUN_10067970();
  (*g_engfuncs.pfnAngleVectors)((float *)(param_1[1] + 0x50),&fStack_30,&fStack_3c,(float *)0x0);
  uVar3 = 0;
  do {
    fVar1 = *(float *)((int)&DAT_102e0108 + uVar3);
    uStack_18 = 0x41400000;
    fVar2 = *(float *)((int)&DAT_102e0104 + uVar3);
    uStack_14 = 0x41400000;
    uStack_10 = 0x42f00000;
    uStack_c = 0xc1400000;
    uStack_8 = 0xc1400000;
    uStack_4 = 0;
    fStack_24 = fStack_30 * fVar2 + fStack_3c * fVar1;
    fStack_20 = fStack_2c * fVar2 + fStack_38 * fVar1;
    fStack_1c = fStack_28 * fVar2 + fStack_34 * fVar1;
    CXenHull::CreateHull((int)param_1,&uStack_c,&uStack_18,&fStack_24);
    uVar3 = uVar3 + 0xc;
  } while (uVar3 < 0x3c);
  return;
}

