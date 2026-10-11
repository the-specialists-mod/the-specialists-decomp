/* mp.dll - CBlood (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001c690  CBlood::Spawn  (49 bytes)
 * undefined Spawn()
 */
void __fastcall CBlood::Spawn(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0;
  SetMovedir(*(int *)(param_1 + 4));
  return;
}

/* 1001c6d0  CBlood::KeyValue  (235 bytes)
 * undefined KeyValue()
 */
void __thiscall CBlood::KeyValue(undefined *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined *this;
  char *pcVar6;
  bool bVar7;
  float10 fVar8;
  undefined3 uVar5;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pcVar6 = s_color_1009dffc;
  pbVar2 = pbVar4;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1001c708:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1001c70d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1001c708;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001c70d:
  if (iVar3 == 0) {
    iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
    if (iVar3 != 1) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x184) = 0xf7;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x184) = 0xc3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar6 = s_amount_1009dff4;
  do {
    bVar1 = *pbVar4;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1001c781:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1001c786;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    this = (undefined *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1001c781;
    pbVar4 = pbVar4 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001c786:
  if (iVar3 == 0) {
    fVar8 = atof(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x1e0) = (float)fVar8;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 1001c930  CBlood::Use  (410 bytes)
 * undefined Use()
 */
void __thiscall CBlood::Use(void *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  longlong lVar7;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  
  iVar6 = *(int *)((int)param_1 + 4);
  if ((*(byte *)(iVar6 + 0x1a0) & 2) == 0) {
    iVar6 = *(int *)(iVar6 + 0x184);
    lVar7 = __ftol();
    iVar2 = (int)lVar7;
    puVar3 = FUN_1001c7c0(param_1,&fStack_44);
    puVar4 = (undefined4 *)FUN_1001c820(param_1,&fStack_50,param_2);
    FUN_10077420(puVar4,puVar3,iVar6,iVar2);
  }
  else {
    iVar6 = *(int *)(iVar6 + 0x184);
    if (iVar6 == 0xf7) {
      iVar6 = 0x46;
    }
    lVar7 = __ftol();
    iVar2 = (int)lVar7;
    puVar3 = FUN_1001c7c0(param_1,&fStack_44);
    puVar4 = (undefined4 *)FUN_1001c820(param_1,&fStack_50,param_2);
    FUN_10077370(puVar4,puVar3,iVar6,iVar2);
  }
  if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 8) != 0) {
    pfVar5 = (float *)FUN_1001c7c0(param_1,&fStack_44);
    fStack_50 = *pfVar5;
    fStack_4c = pfVar5[1];
    fStack_48 = pfVar5[2];
    pfVar5 = (float *)FUN_1001c820(param_1,&fStack_44,param_2);
    fStack_5c = *pfVar5;
    fStack_58 = pfVar5[1];
    fStack_54 = pfVar5[2];
    fVar1 = *(float *)(*(int *)((int)param_1 + 4) + 0x1e0);
    fStack_44 = fStack_50 * fVar1;
    fStack_50 = fStack_44 + fStack_44 + fStack_5c;
    fStack_4c = fStack_58 + fStack_4c * fVar1 + fStack_4c * fVar1;
    fStack_48 = fStack_54 + fVar1 * fStack_48 + fVar1 * fStack_48;
    fStack_40 = fStack_4c;
    fStack_3c = fStack_48;
    UTIL_TraceLine(&fStack_5c,&fStack_50,1,0,auStack_38);
    if (fStack_28 != 1.0) {
      FUN_10077580((int)auStack_38,*(int *)(*(int *)((int)param_1 + 4) + 0x184));
    }
  }
  return;
}

