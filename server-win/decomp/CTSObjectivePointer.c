/* mp.dll - CTSObjectivePointer (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1005bc00  CTSObjectivePointer::KeyValue  (437 bytes)
 * undefined KeyValue()
 */
void __thiscall CTSObjectivePointer::KeyValue(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pbVar5 = &DAT_100a4f54;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_1005bc38:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1005bc3d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_1005bc38;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005bc3d:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x54) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar6 = s_objmsgmerc_100a4f48;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1005bc8a:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1005bc8f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1005bc8a;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005bc8f:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x58) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pbVar5 = &DAT_100a4f3c;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_1005bcdc:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1005bce1;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_1005bcdc;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005bce1:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x5c) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pbVar5 = &DAT_100a4f30;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_1005bd2e:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1005bd33;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_1005bd2e;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005bd33:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x60) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar6 = s_objmsgall_100a4f24;
  do {
    bVar1 = *pbVar4;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1005bd80:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1005bd85;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1005bd80;
    pbVar4 = pbVar4 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005bd85:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 100) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 1005bdc0  CTSObjectivePointer::Spawn  (97 bytes)
 * undefined Spawn()
 */
void __fastcall CTSObjectivePointer::Spawn(int param_1)

{
  **(int **)(param_1 + 4) = (int)s_ts_objective_ptr_100a4f60 - (int)gpGlobals->pStringBase;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 10.0;
  return;
}

/* 1005be30  CTSObjectivePointer::Use  (200 bytes)
 * undefined Use()
 */
void __fastcall CTSObjectivePointer::Use(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  edict_t *pEdictStartSearchAfter;
  
  pEdictStartSearchAfter = (edict_t *)0x0;
  if (*(int *)(*(int *)(param_1 + 4) + 0x1c8) != 0) {
    while ((pEdictStartSearchAfter =
                 (*g_engfuncs.pfnFindEntityByString)
                           (pEdictStartSearchAfter,s_targetname_1009c68c,
                            gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1c8)),
           pEdictStartSearchAfter != (edict_t *)0x0 &&
           (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter), iVar2 != 0))) {
      piVar4 = pEdictStartSearchAfter->pvPrivateData;
      cVar1 = (**(code **)(*piVar4 + 0x14))();
      if (cVar1 != '\0') {
        (**(code **)(*piVar4 + 0x18))(1);
        uVar3 = FUN_1004fa60(&TSGameRules,(int)piVar4,(undefined4 *)(param_1 + 0x54));
        if ((uVar3 != 0xffffffff) && (iVar2 = 1, 0 < gpGlobals->maxClients)) {
          do {
            piVar4 = (int *)UTIL_PlayerByIndex(iVar2);
            if (piVar4 != (int *)0x0) {
              FUN_1004fae0(&TSGameRules,uVar3,piVar4);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 <= gpGlobals->maxClients);
        }
      }
    }
  }
  return;
}

