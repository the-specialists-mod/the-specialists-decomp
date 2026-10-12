/* mp.dll - CGameScore (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100220e0  CGameScore::KeyValue  (87 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CGameScore::KeyValue(CGameScore *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 7;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_points_100946a0;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = FUN_1006e1dd(*(void **)(param_1 + 8),*(void **)(param_1 + 8));
    this->pev->frags = (float)iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CRuleEntity::KeyValue((CRuleEntity *)this,param_1);
  return;
}

/* 10022140  CGameScore::Use  (93 bytes)
 * undefined Use(int * param_1)
 */
void __thiscall CGameScore::Use(CGameScore *this,int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  bVar1 = CRuleEntity::CanFireForActivator((CRuleEntity *)this,param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = (**(code **)(*param_1 + 0xa8))();
    if (iVar2 != 0) {
      iVar2 = *param_1;
      uVar3 = this->pev->spawnflags;
      if ((uVar3 & 2) != 0) {
        uVar3 = uVar3 & 1;
        lVar4 = __ftol();
        (**(code **)(iVar2 + 0x60))((int)lVar4,uVar3);
        return;
      }
      uVar3 = uVar3 & 1;
      lVar4 = __ftol();
      (**(code **)(iVar2 + 0x5c))((int)lVar4,uVar3);
    }
  }
  return;
}

