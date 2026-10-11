/* mp.dll - CGameScore (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002a000  CGameScore::KeyValue  (125 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CGameScore::KeyValue(CGameScore *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  CGameScore *this_00;
  char *pcVar5;
  bool bVar6;
  undefined3 uVar4;
  
  pcVar5 = s_points_1009f988;
  pbVar2 = *(byte **)(param_1 + 4);
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar4 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CGameScore *)CONCAT31(uVar4,bVar1);
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1002a03a:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1002a03f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CGameScore *)CONCAT31(uVar4,bVar1);
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1002a03a;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002a03f:
  if (iVar3 == 0) {
    iVar3 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    this->pev->frags = (float)iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CRuleEntity::KeyValue((CRuleEntity *)this,param_1);
  return;
}

/* 1002a080  CGameScore::Use  (99 bytes)
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
    iVar2 = (**(code **)(*param_1 + 0xc0))();
    if (iVar2 != 0) {
      iVar2 = *param_1;
      uVar3 = this->pev->spawnflags;
      if ((uVar3 & 2) != 0) {
        uVar3 = uVar3 & 1;
        lVar4 = __ftol();
        (**(code **)(iVar2 + 0x78))((int)lVar4,uVar3);
        return;
      }
      uVar3 = uVar3 & 1;
      lVar4 = __ftol();
      (**(code **)(iVar2 + 0x74))((int)lVar4,uVar3);
    }
  }
  return;
}

