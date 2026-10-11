/* mp.dll - CEnvGlobal (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000ae20  CEnvGlobal::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CEnvGlobal::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CEnvGlobal_1009c2bc,(int)param_1,0x1009c048,3);
  return;
}

/* 1000ae50  CEnvGlobal::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CEnvGlobal::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CEnvGlobal_1009c2bc,(int)param_1,&DAT_1009c048,3);
  return;
}

/* 1000ae90  CEnvGlobal::KeyValue  (257 bytes)
 * undefined KeyValue()
 */
void __thiscall CEnvGlobal::KeyValue(void *param_1,int param_2)

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
  *(undefined4 *)(param_2 + 0xc) = 1;
  pcVar7 = s_globalstate_1009c2e4;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1000aecf:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1000aed4;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1000aecf;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1000aed4:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)((int)param_1 + 0x54) = iVar3;
    return;
  }
  pcVar7 = s_triggermode_1009c2d8;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1000af1a:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1000af1f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1000af1a;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1000af1f:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x58) = uVar4;
    return;
  }
  pcVar7 = s_initialstate_1009c2c8;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1000af64:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1000af69;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1000af64;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1000af69:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x5c) = uVar4;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 1000afa0  CEnvGlobal::Spawn  (88 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CEnvGlobal::Spawn(int param_1)

{
  byte_conflict *pbVar1;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    (*g_engfuncs.pfnRemoveEntity)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
    return;
  }
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) {
    pbVar1 = FUN_1007b040(&DAT_102ef3b0,*(int *)(param_1 + 0x54));
    if (pbVar1 == (byte_conflict *)0x0) {
      FUN_1007b100(&DAT_102ef3b0,*(int *)(param_1 + 0x54),gpGlobals->mapname,
                   *(int *)(param_1 + 0x5c));
    }
  }
  return;
}

/* 1000b000  CEnvGlobal::Use  (128 bytes)
 * undefined Use(int param_1)
 */
void __fastcall CEnvGlobal::Use(int param_1)

{
  int iVar1;
  int iVar2;
  byte_conflict *pbVar3;
  
  iVar2 = FUN_1007b1d0(&DAT_102ef3b0,*(int *)(param_1 + 0x54));
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
LAB_1000b03b:
    iVar2 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        iVar2 = 2;
        goto LAB_1000b03d;
      }
      if (iVar2 == 1) goto LAB_1000b03b;
      if (iVar2 != 0) goto LAB_1000b03d;
    }
    iVar2 = 1;
  }
LAB_1000b03d:
  pbVar3 = FUN_1007b040(&DAT_102ef3b0,*(int *)(param_1 + 0x54));
  if (pbVar3 == (byte_conflict *)0x0) {
    FUN_1007b100(&DAT_102ef3b0,*(int *)(param_1 + 0x54),gpGlobals->mapname,iVar2);
    return;
  }
  FUN_1007b1a0(&DAT_102ef3b0,*(int *)(param_1 + 0x54),iVar2);
  return;
}

