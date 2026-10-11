/* mp.dll - CTSCustomTarget (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1004af20  CTSCustomTarget::KeyValue  (272 bytes)
 * undefined KeyValue()
 */
void __thiscall CTSCustomTarget::KeyValue(void *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  void *this;
  char *pcVar7;
  bool bVar8;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar7 = s_targets_100a36a4;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1004af58:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1004af5d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1004af58;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1004af5d:
  if (iVar3 == 0) {
    FUN_1004b090(param_1,*(char **)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_triggermethod_100a3694;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1004afa5:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1004afaa;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1004afa5;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1004afaa:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x858) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_accumulate_100a3688;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1004aff9:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1004affe;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1004aff9;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1004affe:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x85c) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 1004b030  CTSCustomTarget::Spawn  (87 bytes)
 * undefined Spawn()
 */
void __fastcall CTSCustomTarget::Spawn(int param_1)

{
  **(int **)(param_1 + 4) = (int)s_ts_customtarget_100a36ac - (int)gpGlobals->pStringBase;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 5;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x860) = 0;
  *(undefined4 *)(param_1 + 0x864) = 0;
  return;
}

/* 1004b150  CTSCustomTarget::FireTarget  (106 bytes)
 * undefined FireTarget(int param_1)
 * called by: CTSCustomTarget::Use
 */
void __thiscall CTSCustomTarget::FireTarget(CTSCustomTarget *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if ((param_1 < 0) || (*(int *)&this->field_0x854 <= param_1)) {
    iVar1 = 0;
    if (0 < *(int *)&this->field_0x854) {
      puVar2 = &this->field_0x54;
      do {
        if (puVar2 != (undefined1 *)0x0) {
          FireTargets((int)puVar2,this,this,3,0);
        }
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 0x20;
      } while (iVar1 < *(int *)&this->field_0x854);
    }
  }
  else if (&this->field_0x54 + param_1 * 0x20 != (undefined1 *)0x0) {
    FireTargets((int)(&this->field_0x54 + param_1 * 0x20),this,this,3,0);
    return;
  }
  return;
}

/* 1004b1c0  CTSCustomTarget::Use  (200 bytes)
 * undefined Use(void * param_1)
 */
void __fastcall CTSCustomTarget::Use(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x860) + 1;
  *(int *)((int)param_1 + 0x860) = iVar1;
  if (*(int *)((int)param_1 + 0x85c) <= iVar1) {
    *(undefined4 *)((int)param_1 + 0x860) = 0;
    iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 0x1d4);
    if (iVar1 != 0) {
      TSHudMessageAll(0,0xff,0,1,0x1e,gpGlobals->pStringBase + iVar1);
    }
    if (*(int *)((int)param_1 + 0x858) == 1) {
      iVar1 = (*g_engfuncs.pfnRandomLong)(0,*(int *)((int)param_1 + 0x854) + -1);
      FireTarget(param_1,iVar1);
    }
    else {
      if (*(int *)((int)param_1 + 0x858) != 2) {
        FireTarget(param_1,-1);
        return;
      }
      iVar1 = *(int *)((int)param_1 + 0x864);
      *(int *)((int)param_1 + 0x864) = iVar1 + 1;
      FireTarget(param_1,iVar1);
      if (*(int *)((int)param_1 + 0x854) <= *(int *)((int)param_1 + 0x864)) {
        *(undefined4 *)((int)param_1 + 0x864) = 0;
        return;
      }
    }
  }
  return;
}

