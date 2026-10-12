/* mp.dll - CFuncTankMortar (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001e180  CFuncTankMortar::KeyValue  (79 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CFuncTankMortar::KeyValue(CFuncTankMortar *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 0xb;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_iMagnitude_1009301c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = FUN_1006e1dd(*(void **)(param_1 + 8),*(void **)(param_1 + 8));
    this->pev->impulse = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CFuncTank::KeyValue((CFuncTank *)this,param_1);
  return;
}

/* 1001e1d0  CFuncTankMortar::Fire  (203 bytes)
 * undefined Fire()
 */
void __thiscall CFuncTankMortar::Fire(CFuncTank *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 auStack_24 [9];
  
  if (*(float *)(param_1 + 0x88) == 0.0) {
    CFuncTank::Fire(param_1,param_2);
  }
  else {
    lVar2 = __ftol();
    if (0 < (int)lVar2) {
      FUN_10066e00((float *)(*(int *)(param_1 + 4) + 0x50));
      FUN_1001da40();
      iVar1 = *(int *)(param_1 + 4);
      FUN_1001af00(auStack_24,(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(iVar1 + 0x208),
                   *(int *)(iVar1 + 0x184));
      CFuncTank::Fire(param_1,param_2);
      return;
    }
  }
  return;
}

