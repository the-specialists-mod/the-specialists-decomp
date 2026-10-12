/* mp.dll - CGamePlayerZone (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10022770  CGamePlayerZone::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CGamePlayerZone::Save(CRuleEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CRuleEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CGamePlayerZone_10094708,(int)param_1,0x10094608,4);
  return;
}

/* 100227a0  CGamePlayerZone::Restore  (48 bytes)
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
            (param_2,(byte_conflict *)s_CGamePlayerZone_10094708,(int)param_1,0x10094608,4);
  return;
}

/* 100227d0  CGamePlayerZone::KeyValue  (220 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CGamePlayerZone::KeyValue(CGamePlayerZone *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar3 = *(char **)(param_1 + 4);
  iVar1 = 9;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_intarget_10094738;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x58 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 10;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_outtarget_1009472c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x5c = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 8;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_incount_10094724;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x60 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 9;
  bVar5 = true;
  pcVar2 = s_outcount_10094718;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar3 == *pcVar2;
    pcVar3 = pcVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x64 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CRuleEntity::KeyValue((CRuleEntity *)this,param_1);
  return;
}

/* 100228b0  CGamePlayerZone::Use  (354 bytes)
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
  char *pcVar4;
  int iStack_40;
  int iStack_3c;
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
          FUN_10067890();
          if (iStack_34 == 0) {
            iStack_3c = iStack_3c + 1;
            if (*(int *)(param_1 + 0x5c) != 0) {
              pcVar4 = gpGlobals->pStringBase + *(int *)(param_1 + 0x5c);
              goto LAB_10022997;
            }
          }
          else {
            iStack_40 = iStack_40 + 1;
            if (*(int *)(param_1 + 0x58) != 0) {
              pcVar4 = gpGlobals->pStringBase + *(int *)(param_1 + 0x58);
LAB_10022997:
              FireTargets((int)pcVar4,iVar3,uVar1,param_4,param_5);
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

