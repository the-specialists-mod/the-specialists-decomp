/* mp.dll - CTSObjectiveManager (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10050340  CTSObjectiveManager::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSObjectiveManager::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSObjectiveManager_10098f24,(int)param_1,0x10098c60
                     ,0xd);
  return;
}

/* 10050370  CTSObjectiveManager::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSObjectiveManager::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CTSObjectiveManager_10098f24,(int)param_1,0x10098c60,0xd);
  return;
}

/* 100503a0  CTSObjectiveManager::KeyValue  (759 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSObjectiveManager::KeyValue(CTSObjectiveManager *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar3 = *(char **)(param_1 + 4);
  iVar1 = 0xc;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_objptargeta_10098ff8;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x64 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 0xc;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_objptargetb_10098fec;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x68 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 0xc;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_objptargetc_10098fe0;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x6c = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 0xc;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_objptargetd_10098fd4;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x70 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 0xc;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_objptargete_10098fc8;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x74 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 0xc;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_objptargetf_10098fbc;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x78 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 0xc;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_objptargetg_10098fb0;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x7c = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 0xc;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_objptargeth_10098fa4;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x80 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 9;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_messagea_10098f98;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x54 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 9;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_messageb_10098f8c;
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
  iVar1 = 9;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_messagec_10098f80;
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
  iVar1 = 9;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_messaged_10098f74;
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
  iVar1 = 0x11;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_targetontimeleft_10098f60;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x84 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 0x11;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_targetonspecdead_10098f4c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x88 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 0x11;
  bVar5 = true;
  pcVar2 = s_targetonmercdead_10098f38;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar3 == *pcVar2;
    pcVar3 = pcVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x8c = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 100506a0  CTSObjectiveManager::Spawn  (97 bytes)
 * undefined Spawn()
 */
void __fastcall CTSObjectiveManager::Spawn(int param_1)

{
  **(int **)(param_1 + 4) = (int)s_ts_objective_manager_100982f4 - (int)gpGlobals->pStringBase;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 10.0;
  return;
}

