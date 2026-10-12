/* mp.dll - CGameText (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100221e0  CGameText::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CGameText::Save(CRuleEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CRuleEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CGameText_100946a8,(int)param_1,0x100945f8,1);
  return;
}

/* 10022210  CGameText::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CGameText::Restore(CRuleEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CRuleEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CGameText_100946a8,(int)param_1,0x100945f8,1);
  return;
}

/* 10022240  CGameText::KeyValue  (598 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CGameText::KeyValue(CGameText *this,int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  float10 fVar8;
  undefined1 local_10 [4];
  undefined1 local_c;
  undefined1 local_8;
  undefined1 local_4;
  
  bVar7 = true;
  pcVar5 = *(char **)(param_1 + 4);
  puVar2 = &DAT_00000008;
  pcVar4 = pcVar5;
  pcVar6 = s_channel_100946e4;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    uVar1 = FUN_1006e1dd(puVar2,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x7c = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0x2;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = &DAT_100946e0;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    fVar8 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x58 = (float)fVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0x2;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = &DAT_100946dc;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    fVar8 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x5c = (float)fVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000007;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_effect_100946d4;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    uVar1 = FUN_1006e1dd(puVar2,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x60 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar3 = 6;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_color_10092f04;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    FUN_10068290(local_10,(int)local_10,4,*(char **)(param_1 + 8));
    this->field_0x64 = local_10[0];
    this->field_0x65 = local_c;
    this->field_0x66 = local_8;
    this->field_0x67 = local_4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar3 = 7;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_color2_100946cc;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    FUN_10068290(local_10,(int)local_10,4,*(char **)(param_1 + 8));
    this->field_0x68 = local_10[0];
    this->field_0x69 = local_c;
    this->field_0x6a = local_8;
    this->field_0x6b = local_4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000007;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_fadein_100946c4;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    fVar8 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x6c = (float)fVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000008;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_fadeout_100946bc;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    fVar8 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x70 = (float)fVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000009;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_holdtime_10092f2c;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    fVar8 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x74 = (float)fVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000007;
  bVar7 = true;
  pcVar4 = &DAT_100946b4;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar7 = *pcVar5 == *pcVar4;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar7);
  if (bVar7) {
    fVar8 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x78 = (float)fVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CRuleEntity::KeyValue((CRuleEntity *)this,param_1);
  return;
}

/* 100224a0  CGameText::Use  (122 bytes)
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
      FUN_100674e0((undefined4 *)(param_1 + 0x58),
                   gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1d4));
      return;
    }
    iVar2 = (**(code **)(*param_2 + 0xac))();
    if (iVar2 != 0) {
      FUN_100672d0(param_2,(undefined4 *)(param_1 + 0x58),
                   gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1d4));
    }
  }
  return;
}

