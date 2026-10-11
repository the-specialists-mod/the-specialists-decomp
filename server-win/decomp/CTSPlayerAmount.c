/* mp.dll - CTSPlayerAmount (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1004a970  CTSPlayerAmount::KeyValue  (309 bytes)
 * undefined KeyValue()
 */
void __thiscall CTSPlayerAmount::KeyValue(void *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  void *this;
  uint uVar7;
  uint uVar8;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  undefined3 uVar9;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar10 = s_connecttarget_100a366c;
  pbVar3 = pbVar5;
  this = param_1;
  do {
    bVar2 = *pbVar3;
    uVar9 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar9,bVar2);
    bVar12 = bVar2 < (byte)*pcVar10;
    if (bVar2 != *pcVar10) {
LAB_1004a9a8:
      iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_1004a9ad;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    this = (void *)CONCAT31(uVar9,bVar2);
    bVar12 = bVar2 < (byte)pcVar10[1];
    if (bVar2 != pcVar10[1]) goto LAB_1004a9a8;
    pbVar3 = pbVar3 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_1004a9ad:
  if (iVar4 != 0) {
    pcVar10 = s_disconnecttarget_100a3658;
    pbVar3 = pbVar5;
    do {
      bVar2 = *pbVar3;
      uVar9 = (undefined3)((uint)this >> 8);
      this = (void *)CONCAT31(uVar9,bVar2);
      bVar12 = bVar2 < (byte)*pcVar10;
      if (bVar2 != *pcVar10) {
LAB_1004aa0b:
        iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_1004aa10;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      this = (void *)CONCAT31(uVar9,bVar2);
      bVar12 = bVar2 < (byte)pcVar10[1];
      if (bVar2 != pcVar10[1]) goto LAB_1004aa0b;
      pbVar3 = pbVar3 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_1004aa10:
    if (iVar4 != 0) {
      pcVar10 = s_clients_100a3650;
      do {
        bVar2 = *pbVar5;
        uVar9 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar9,bVar2);
        bVar12 = bVar2 < (byte)*pcVar10;
        if (bVar2 != *pcVar10) {
LAB_1004aa71:
          iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_1004aa76;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        this = (void *)CONCAT31(uVar9,bVar2);
        bVar12 = bVar2 < (byte)pcVar10[1];
        if (bVar2 != pcVar10[1]) goto LAB_1004aa71;
        pbVar5 = pbVar5 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_1004aa76:
      if (iVar4 == 0) {
        uVar6 = atoi(this,*(byte_conflict **)(param_2 + 8));
        *(undefined4 *)((int)param_1 + 0x60) = uVar6;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      *(undefined4 *)(param_2 + 0xc) = 0;
      return;
    }
    uVar7 = 0xffffffff;
    pcVar10 = *(char **)(param_2 + 8);
    do {
      pcVar11 = pcVar10;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar10 = pcVar11 + -uVar7;
    pcVar11 = (char *)((int)param_1 + 200);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  uVar7 = 0xffffffff;
  pcVar10 = *(char **)(param_2 + 8);
  do {
    pcVar11 = pcVar10;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar10 = pcVar11 + -uVar7;
  pcVar11 = (char *)((int)param_1 + 100);
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

/* 1004aab0  CTSPlayerAmount::Spawn  (78 bytes)
 * undefined Spawn()
 */
void __fastcall CTSPlayerAmount::Spawn(int param_1)

{
  **(int **)(param_1 + 4) = (int)s_ts_playeramount_1009cc30 - (int)gpGlobals->pStringBase;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 5;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}

/* 1004ab00  CTSPlayerAmount::ClientConnect  (273 bytes)
 * undefined ClientConnect(int * param_1)
 * called by: BotSetup, pfnClientConnect
 */
/* .so 0x72aec; count++ == target -> FireTargets/DelayedUse */

void __fastcall CTSPlayerAmount::ClientConnect(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  iVar3 = param_1[0x17];
  param_1[0x17] = iVar3 + 1;
  if (iVar3 + 1 == param_1[0x18]) {
    pbVar4 = &DAT_100a9398;
    pbVar2 = (byte *)(param_1 + 0x19);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_1004ab47:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_1004ab4c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_1004ab47;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_1004ab4c:
    if (iVar3 != 0) {
      if ((float)param_1[0x15] == 0.0) {
        FireTargets((int)(param_1 + 0x19),0,param_1,3,0);
      }
      else {
        iVar3 = GetClassPtr<CBaseDelay>(0);
        **(int **)(iVar3 + 4) = (int)s_DelayedUse_100a2730 - (int)gpGlobals->pStringBase;
        *(float *)(*(int *)(iVar3 + 4) + 0x104) = (float)param_1[0x15] + gpGlobals->time;
        *(code **)(iVar3 + 0x10) = CBaseDelay::DelayThink;
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x180) = 3;
        *(int *)(iVar3 + 0x58) = param_1[0x16];
        *(undefined4 *)(iVar3 + 0x54) = 0;
        *(int *)(*(int *)(iVar3 + 4) + 0x1c8) = (int)param_1 + (100 - (int)gpGlobals->pStringBase);
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x198) = 0;
      }
      if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
        UTIL_Remove(param_1);
      }
    }
  }
  return;
}

