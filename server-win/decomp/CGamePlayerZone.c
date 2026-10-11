/* mp.dll - CGamePlayerZone (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002a850  CGamePlayerZone::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CGamePlayerZone::Save(CRuleEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CRuleEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CGamePlayerZone_1009f9f0,(int)param_1,0x1009f8f0,4);
  return;
}

/* 1002a880  CGamePlayerZone::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CGamePlayerZone::Restore(CRuleEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CRuleEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CGamePlayerZone_1009f9f0,(int)param_1,&DAT_1009f8f0,4);
  return;
}

/* 1002a8b0  CGamePlayerZone::KeyValue  (356 bytes)
 * undefined KeyValue()
 */
void __thiscall CGamePlayerZone::KeyValue(CRuleEntity *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pcVar5 = s_intarget_1009fa20;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1002a8e8:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1002a8ed;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1002a8e8;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002a8ed:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x58) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_outtarget_1009fa14;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1002a93a:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1002a93f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1002a93a;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002a93f:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x5c) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_incount_1009fa0c;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1002a98c:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1002a991;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1002a98c;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002a991:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x60) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_outcount_1009fa00;
  do {
    bVar1 = *pbVar4;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1002a9de:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1002a9e3;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1002a9de;
    pbVar4 = pbVar4 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002a9e3:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 100) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  CRuleEntity::KeyValue(param_1,param_2);
  return;
}

/* 1002aa20  CGamePlayerZone::Use  (354 bytes)
 * undefined Use()
 */
void __thiscall
CGamePlayerZone::Use
          (CRuleEntity *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
          )

{
  undefined4 uVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iStack_40;
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  uVar1 = param_2;
  iStack_40 = 0;
  iStack_3c = 0;
  bVar2 = CRuleEntity::CanFireForActivator(param_1,param_2);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    param_2 = 1;
    if (0 < gpGlobals->maxClients) {
      do {
        iVar3 = UTIL_PlayerByIndex(param_2);
        if (iVar3 != 0) {
          uVar5 = 1;
          if ((*(uint *)(*(int *)(iVar3 + 4) + 0x1a4) & 0x4000) != 0) {
            uVar5 = 3;
          }
          iVar4 = *(int *)(iVar3 + 4) + 8;
          UTIL_TraceModel(iVar4,iVar4,uVar5,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                          auStack_38);
          if (iStack_34 == 0) {
            iStack_3c = iStack_3c + 1;
            if (*(int *)(param_1 + 0x5c) != 0) {
              pcVar6 = gpGlobals->pStringBase + *(int *)(param_1 + 0x5c);
              goto LAB_1002ab07;
            }
          }
          else {
            iStack_40 = iStack_40 + 1;
            if (*(int *)(param_1 + 0x58) != 0) {
              pcVar6 = gpGlobals->pStringBase + *(int *)(param_1 + 0x58);
LAB_1002ab07:
              FireTargets((int)pcVar6,iVar3,uVar1,param_4,param_5);
            }
          }
        }
        param_2 = param_2 + 1;
      } while (param_2 <= gpGlobals->maxClients);
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      FireTargets((int)(gpGlobals->pStringBase + *(int *)(param_1 + 0x60)),uVar1,param_1,2,
                  (float)iStack_40);
    }
    if (*(int *)(param_1 + 100) != 0) {
      FireTargets((int)(gpGlobals->pStringBase + *(int *)(param_1 + 100)),uVar1,param_1,2,
                  (float)iStack_3c);
    }
  }
  return;
}

