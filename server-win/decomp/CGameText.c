/* mp.dll - CGameText (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002a130  CGameText::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CGameText::Save(CRuleEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CRuleEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CGameText_1009f990,(int)param_1,0x1009f8e0,1);
  return;
}

/* 1002a160  CGameText::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CGameText::Restore(CRuleEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CRuleEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CGameText_1009f990,(int)param_1,&DAT_1009f8e0,1);
  return;
}

/* 1002a190  CGameText::KeyValue  (938 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CGameText::KeyValue(CGameText *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  CGameText *this_00;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  float10 fVar10;
  undefined1 local_10 [4];
  undefined1 local_c;
  undefined1 local_8;
  undefined1 local_4;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_1 + 4);
  pcVar7 = s_channel_1009f9cc;
  pbVar2 = pbVar5;
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002a1cb:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002a1d0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002a1cb;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002a1d0:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x7c = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pbVar8 = &DAT_1009f9c8;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_1002a21f:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002a224;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_1002a21f;
    pbVar2 = pbVar2 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002a224:
  if (iVar3 == 0) {
    fVar10 = atof((undefined *)this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x58 = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pbVar8 = &DAT_1009f9c4;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_1002a273:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002a278;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_1002a273;
    pbVar2 = pbVar2 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002a278:
  if (iVar3 == 0) {
    fVar10 = atof((undefined *)this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x5c = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_effect_1009f9bc;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002a2c7:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002a2cc;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002a2c7;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002a2cc:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x60 = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_color_1009dffc;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002a31b:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002a320;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002a31b;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002a320:
  if (iVar3 == 0) {
    FUN_100779b0((undefined4 *)local_10,4,*(char **)(param_1 + 8));
    this->field_0x64 = local_10[0];
    this->field_0x65 = local_c;
    this->field_0x66 = local_8;
    this->field_0x67 = local_4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_color2_1009f9b4;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002a38f:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002a394;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002a38f;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002a394:
  if (iVar3 == 0) {
    FUN_100779b0((undefined4 *)local_10,4,*(char **)(param_1 + 8));
    this->field_0x68 = local_10[0];
    this->field_0x69 = local_c;
    this->field_0x6a = local_8;
    this->field_0x6b = local_4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_fadein_1009f9ac;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002a403:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002a408;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002a403;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002a408:
  if (iVar3 == 0) {
    fVar10 = atof((undefined *)this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x6c = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_fadeout_1009f9a4;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002a457:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002a45c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002a457;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002a45c:
  if (iVar3 == 0) {
    fVar10 = atof((undefined *)this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x70 = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_holdtime_1009e024;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002a4ab:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002a4b0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002a4ab;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002a4b0:
  if (iVar3 == 0) {
    fVar10 = atof((undefined *)this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x74 = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pbVar2 = &DAT_1009f99c;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_1002a4ff:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002a504;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this_00 = (CGameText *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_1002a4ff;
    pbVar5 = pbVar5 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002a504:
  if (iVar3 == 0) {
    fVar10 = atof((undefined *)this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x78 = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CRuleEntity::KeyValue((CRuleEntity *)this,param_1);
  return;
}

/* 1002a540  CGameText::Use  (122 bytes)
 * undefined Use()
 */
void __thiscall CGameText::Use(CRuleEntity *param_1,int *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = CRuleEntity::CanFireForActivator(param_1,param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) {
      FUN_10076ca0((undefined4 *)(param_1 + 0x58),
                   gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1d4));
      return;
    }
    iVar2 = (**(code **)(*param_2 + 0xc4))();
    if (iVar2 != 0) {
      FUN_10076a90(param_2,(undefined4 *)(param_1 + 0x58),
                   gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1d4));
    }
  }
  return;
}

