/* mp.dll - CFuncTankMortar (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10022610  CFuncTankMortar::KeyValue  (117 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CFuncTankMortar::KeyValue(CFuncTankMortar *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  CFuncTankMortar *this_00;
  char *pcVar5;
  bool bVar6;
  undefined3 uVar4;
  
  pcVar5 = s_iMagnitude_1009e114;
  pbVar2 = *(byte **)(param_1 + 4);
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar4 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTankMortar *)CONCAT31(uVar4,bVar1);
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1002264a:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1002264f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTankMortar *)CONCAT31(uVar4,bVar1);
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1002264a;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002264f:
  if (iVar3 == 0) {
    iVar3 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    this->pev->impulse = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CFuncTank::KeyValue((CFuncTank *)this,param_1);
  return;
}

/* 10022690  CFuncTankMortar::Fire  (203 bytes)
 * undefined Fire()
 */
void __thiscall CFuncTankMortar::Fire(CFuncTank *param_1,float *param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [20];
  undefined4 auStack_24 [9];
  
  if (*(float *)(param_1 + 0x88) == 0.0) {
    CFuncTank::Fire(param_1,param_2);
  }
  else {
    lVar2 = __ftol();
    if (0 < (int)lVar2) {
      FUN_10076540((float *)(*(int *)(param_1 + 4) + 0x50));
      FUN_10021d90(param_1,param_2,param_3,(float *)(&DAT_100a93e8 + *(int *)(param_1 + 0xcc) * 0xc)
                   ,auStack_38);
      iVar1 = *(int *)(param_1 + 4);
      FUN_1001e460(auStack_24,(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(iVar1 + 0x208),
                   *(int *)(iVar1 + 0x184));
      CFuncTank::Fire(param_1,param_2);
      return;
    }
  }
  return;
}

