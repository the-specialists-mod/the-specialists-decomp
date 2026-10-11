/* mp.dll - CTSObjectiveManager (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1005b5a0  CTSObjectiveManager::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSObjectiveManager::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSObjectiveManager_100a4e44,(int)param_1,0x100a4bc0
                     ,0xd);
  return;
}

/* 1005b5d0  CTSObjectiveManager::Restore  (48 bytes)
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
            (param_2,(byte_conflict *)s_CTSObjectiveManager_100a4e44,(int)param_1,&DAT_100a4bc0,0xd)
  ;
  return;
}

/* 1005b600  CTSObjectiveManager::KeyValue  (1269 bytes)
 * undefined KeyValue()
 */
void __thiscall CTSObjectiveManager::KeyValue(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pcVar5 = s_objptargeta_100a4f18;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1005b638:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1005b63d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1005b638;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b63d:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 100) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_objptargetb_100a4f0c;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1005b68a:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1005b68f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1005b68a;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b68f:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x68) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_objptargetc_100a4f00;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1005b6dc:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1005b6e1;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1005b6dc;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b6e1:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x6c) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_objptargetd_100a4ef4;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1005b72e:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1005b733;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1005b72e;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b733:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x70) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_objptargete_100a4ee8;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1005b780:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1005b785;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1005b780;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b785:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x74) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_objptargetf_100a4edc;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1005b7d2:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1005b7d7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1005b7d2;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b7d7:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x78) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_objptargetg_100a4ed0;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1005b824:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1005b829;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1005b824;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b829:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x7c) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_objptargeth_100a4ec4;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1005b876:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1005b87b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1005b876;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b87b:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x80) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_messagea_100a4eb8;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1005b8cb:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1005b8d0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1005b8cb;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b8d0:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x54) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_messageb_100a4eac;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1005b91d:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1005b922;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1005b91d;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b922:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x58) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_messagec_100a4ea0;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1005b96f:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1005b974;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1005b96f;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b974:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x5c) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_messaged_100a4e94;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1005b9c1:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1005b9c6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1005b9c1;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005b9c6:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x60) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_targetontimeleft_100a4e80;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1005ba13:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1005ba18;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1005ba13;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005ba18:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x84) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_targetonspecdead_100a4e6c;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1005ba68:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1005ba6d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1005ba68;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005ba6d:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x88) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_targetonmercdead_100a4e58;
  do {
    bVar1 = *pbVar4;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1005babd:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1005bac2;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1005babd;
    pbVar4 = pbVar4 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005bac2:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x8c) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 1005bb00  CTSObjectiveManager::Spawn  (97 bytes)
 * undefined Spawn()
 */
void __fastcall CTSObjectiveManager::Spawn(int param_1)

{
  **(int **)(param_1 + 4) = (int)s_ts_objective_manager_100a3ff0 - (int)gpGlobals->pStringBase;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 10.0;
  return;
}

/* 1005bb70  CTSObjectiveManager::Reset  (114 bytes)
 * undefined Reset(int param_1)
 */
void __fastcall CTSObjectiveManager::Reset(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 4;
  piVar2 = (int *)(param_1 + 0x54);
  do {
    if (*piVar2 != 0) {
      TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + *piVar2);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar2 = (int *)(param_1 + 100);
  iVar1 = 8;
  do {
    if (*piVar2 != 0) {
      FireTargets((int)(gpGlobals->pStringBase + *piVar2),param_1,param_1,3,0);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

