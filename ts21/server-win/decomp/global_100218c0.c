/* mp.dll - global_100218c0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100218c0  GetClassPtr<CTSSuperJump>  (76 bytes)
 * undefined GetClassPtr<CTSSuperJump>(int param_1)
 */
void __cdecl GetClassPtr<CTSSuperJump>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSSuperJump::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10021eb0  GetClassPtr<CLight>  (76 bytes)
 * undefined GetClassPtr<CLight>(int param_1)
 */
void __cdecl GetClassPtr<CLight>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CLight::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10021f00  GetClassPtr<CEnvLight>  (76 bytes)
 * undefined GetClassPtr<CEnvLight>(int param_1)
 */
void __cdecl GetClassPtr<CEnvLight>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CEnvLight::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10022e80  GetClassPtr<CGameScore>  (76 bytes)
 * undefined GetClassPtr<CGameScore>(int param_1)
 */
void __cdecl GetClassPtr<CGameScore>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGameScore::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10022ed0  GetClassPtr<CGameEnd>  (76 bytes)
 * undefined GetClassPtr<CGameEnd>(int param_1)
 */
void __cdecl GetClassPtr<CGameEnd>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGameEnd::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10022f20  GetClassPtr<CGameText>  (79 bytes)
 * undefined GetClassPtr<CGameText>(int param_1)
 */
void __cdecl GetClassPtr<CGameText>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x80), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGameText::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10022f70  GetClassPtr<CGameTeamMaster>  (76 bytes)
 * undefined GetClassPtr<CGameTeamMaster>(int param_1)
 */
void __cdecl GetClassPtr<CGameTeamMaster>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x60), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGameTeamMaster::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10022fd0  GetClassPtr<CGameTeamSet>  (76 bytes)
 * undefined GetClassPtr<CGameTeamSet>(int param_1)
 */
void __cdecl GetClassPtr<CGameTeamSet>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGameTeamSet::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10023020  GetClassPtr<CGamePlayerZone>  (76 bytes)
 * undefined GetClassPtr<CGamePlayerZone>(int param_1)
 */
void __cdecl GetClassPtr<CGamePlayerZone>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x68), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGamePlayerZone::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10023070  GetClassPtr<CGamePlayerHurt>  (76 bytes)
 * undefined GetClassPtr<CGamePlayerHurt>(int param_1)
 */
void __cdecl GetClassPtr<CGamePlayerHurt>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGamePlayerHurt::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100230c0  GetClassPtr<CGameCounter>  (76 bytes)
 * undefined GetClassPtr<CGameCounter>(int param_1)
 */
void __cdecl GetClassPtr<CGameCounter>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGameCounter::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10023110  GetClassPtr<CGameCounterSet>  (76 bytes)
 * undefined GetClassPtr<CGameCounterSet>(int param_1)
 */
void __cdecl GetClassPtr<CGameCounterSet>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGameCounterSet::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10023160  GetClassPtr<CGamePlayerEquip>  (79 bytes)
 * undefined GetClassPtr<CGamePlayerEquip>(int param_1)
 */
void __cdecl GetClassPtr<CGamePlayerEquip>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x158),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGamePlayerEquip::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100231b0  GetClassPtr<CGamePlayerTeam>  (76 bytes)
 * undefined GetClassPtr<CGamePlayerTeam>(int param_1)
 */
void __cdecl GetClassPtr<CGamePlayerTeam>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGamePlayerTeam::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10024890  ReloadMapCycleFile  (642 bytes)
 * undefined4 ReloadMapCycleFile(undefined4 param_1, undefined4 * param_2)
 * called by: CHalfLifeMultiplay::ChangeLevel
 */
undefined4 __cdecl ReloadMapCycleFile(char *param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  byte_conflict *buffer;
  undefined4 *puVar4;
  byte_conflict *pbVar5;
  int iVar6;
  uint uVar7;
  void *this;
  int iVar8;
  void *this_00;
  void *this_01;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *in_stack_00000010;
  undefined4 *in_stack_00000014;
  char *pcVar12;
  byte_conflict *pbStack_424;
  byte_conflict *pbStack_420;
  char acStack_418 [4];
  char acStack_414 [28];
  char acStack_3f8 [4];
  char acStack_3f4 [8];
  char acStack_3ec [8];
  char acStack_3e4 [8];
  char acStack_3dc [8];
  char acStack_3d4 [980];
  
  buffer = (*g_engfuncs.pfnLoadFileForMe)(param_1,(int *)&stack0xfffffbd8);
  pcVar9 = (char *)0x0;
  pcVar12 = (char *)0x0;
  if ((buffer != (byte_conflict *)0x0) &&
     (pbStack_424 = buffer, pbStack_420 != (byte_conflict *)0x0)) {
LAB_100248d0:
    pcVar10 = acStack_3f8;
    for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar10[0] = '\0';
      pcVar10[1] = '\0';
      pcVar10[2] = '\0';
      pcVar10[3] = '\0';
      pcVar10 = pcVar10 + 4;
    }
    bVar2 = false;
    pbStack_424 = (byte_conflict *)FUN_10024760((char *)pbStack_424);
    uVar7 = 0xffffffff;
    iVar6 = 0;
    pcVar10 = &DAT_1009f870;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    this = (void *)(~uVar7 - 1);
    if (this != (void *)0x0) {
      do {
        cVar1 = (&DAT_1009f870)[iVar6];
        this = (void *)CONCAT31((int3)((uint)this >> 8),cVar1);
        acStack_418[iVar6] = cVar1;
        iVar6 = iVar6 + 1;
      } while (cVar1 != '\0');
      iVar6 = FUN_10024840(this,(char *)pbStack_424);
      if (iVar6 != 0) {
        pbStack_424 = (byte_conflict *)FUN_10024760((char *)pbStack_424);
        iVar8 = -1;
        iVar6 = 0;
        pcVar10 = &DAT_1009f870;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        if (iVar8 != -2) {
          bVar2 = true;
          do {
            cVar1 = (&DAT_1009f870)[iVar6];
            acStack_3f4[iVar6 + -4] = cVar1;
            iVar6 = iVar6 + 1;
          } while (cVar1 != '\0');
        }
      }
      iVar6 = (*g_engfuncs.pfnIsMapValid)(acStack_418);
      if (iVar6 == 0) {
        (*g_engfuncs.pfnAlertMessage)
                  (at_console,s_Skipping__s_from_mapcycle__not_a_10094bc4,acStack_414);
        pbStack_424 = pbStack_420;
      }
      else {
        puVar4 = operator_new(0x42c);
        pcVar9 = acStack_414;
        do {
          cVar1 = *pcVar9;
          pcVar9[(int)puVar4 + (4 - (int)acStack_414)] = cVar1;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        puVar4[9] = 0;
        puVar4[10] = 0;
        puVar11 = puVar4 + 0xb;
        for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        pcVar9 = pcVar12;
        if (bVar2) {
          pbVar5 = (byte_conflict *)(*g_engfuncs.pfnInfoKeyValue)(acStack_3f4,s_minplayers_10094bfc)
          ;
          if ((pbVar5 != (byte_conflict *)0x0) && (*pbVar5 != '\0')) {
            uVar7 = FUN_1006e1dd(this_00,pbVar5);
            puVar4[9] = uVar7;
            uVar7 = uVar7 & ((int)uVar7 < 1) - 1;
            puVar4[9] = uVar7;
            if (gpGlobals->maxClients <= (int)uVar7) {
              uVar7 = gpGlobals->maxClients;
            }
            puVar4[9] = uVar7;
          }
          pbVar5 = (byte_conflict *)(*g_engfuncs.pfnInfoKeyValue)(acStack_3ec,s_maxplayers_10094bf0)
          ;
          if ((pbVar5 != (byte_conflict *)0x0) && (*pbVar5 != '\0')) {
            uVar7 = FUN_1006e1dd(this_01,pbVar5);
            puVar4[10] = uVar7;
            uVar7 = uVar7 & ((int)uVar7 < 1) - 1;
            puVar4[10] = uVar7;
            if (gpGlobals->maxClients <= (int)uVar7) {
              uVar7 = gpGlobals->maxClients;
            }
            puVar4[10] = uVar7;
          }
          (*g_engfuncs.pfnInfo_RemoveKey)(acStack_3e4,s_minplayers_10094bfc);
          pcVar9 = s_maxplayers_10094bf0;
          (*g_engfuncs.pfnInfo_RemoveKey)(acStack_3dc,s_maxplayers_10094bf0);
          pcVar12 = acStack_3d4;
          do {
            cVar1 = *pcVar12;
            pcVar12[(int)(puVar4 + 0xb) - (int)acStack_3d4] = cVar1;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
        }
        *puVar4 = *in_stack_00000010;
        *in_stack_00000010 = puVar4;
        pcVar12 = pcVar9;
      }
      goto LAB_100248d0;
    }
    (*g_engfuncs.pfnFreeFile)(buffer);
  }
  pcVar12 = (char *)*in_stack_00000014;
  while (pcVar10 = pcVar12, pcVar10 != (char *)0x0) {
    pcVar12 = *(char **)pcVar10;
    *(char **)pcVar10 = pcVar9;
    pcVar9 = pcVar10;
  }
  *in_stack_00000014 = pcVar9;
  if (pcVar9 == (char *)0x0) {
    return 0;
  }
  pcVar10 = *(char **)pcVar9;
  pcVar12 = pcVar9;
  while (pcVar3 = pcVar10, pcVar3 != (char *)0x0) {
    pcVar12 = pcVar3;
    pcVar10 = *(char **)pcVar3;
  }
  *(char **)pcVar12 = pcVar9;
  in_stack_00000014[1] = pcVar9;
  return 1;
}

/* 10025b40  GetClassPtr<CPathCorner>  (76 bytes)
 * undefined GetClassPtr<CPathCorner>(int param_1)
 */
void __cdecl GetClassPtr<CPathCorner>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CPathCorner::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10025ba0  GetClassPtr<CPathTrack>  (76 bytes)
 * undefined GetClassPtr<CPathTrack>(int param_1)
 */
void __cdecl GetClassPtr<CPathTrack>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x68), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CPathTrack::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10026440  PlatSpawnInsideTrigger  (32 bytes)
 * undefined PlatSpawnInsideTrigger(int param_1)
 * called by: CFuncPlat::Precache
 */
void __cdecl PlatSpawnInsideTrigger(int param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = GetClassPtr<CFuncPlat>(param_1);
  this = (void *)FUN_1002a060(0);
  FUN_10026460(this,iVar1);
  return;
}

/* 10029ff0  GetClassPtr<CFuncPlat>  (79 bytes)
 * undefined GetClassPtr<CFuncPlat>(int param_1)
 * called by: PlatSpawnInsideTrigger
 */
void __cdecl GetClassPtr<CFuncPlat>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x100),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncPlat::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002a0c0  GetClassPtr<CFuncPlatRot>  (79 bytes)
 * undefined GetClassPtr<CFuncPlatRot>(int param_1)
 */
void __cdecl GetClassPtr<CFuncPlatRot>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x118),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncPlatRot::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002a110  GetClassPtr<CFuncTrain>  (79 bytes)
 * undefined GetClassPtr<CFuncTrain>(int param_1)
 */
void __cdecl GetClassPtr<CFuncTrain>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x104),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncTrain::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002a160  GetClassPtr<CFuncTrackTrain>  (79 bytes)
 * undefined GetClassPtr<CFuncTrackTrain>(int param_1)
 */
void __cdecl GetClassPtr<CFuncTrackTrain>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x9c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncTrackTrain::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002a1c0  GetClassPtr<CFuncTrainControls>  (76 bytes)
 * undefined GetClassPtr<CFuncTrainControls>(int param_1)
 */
void __cdecl GetClassPtr<CFuncTrainControls>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncTrainControls::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002a220  GetClassPtr<CFuncTrackChange>  (79 bytes)
 * undefined GetClassPtr<CFuncTrackChange>(int param_1)
 */
void __cdecl GetClassPtr<CFuncTrackChange>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x13c),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncTrackChange::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002a280  GetClassPtr<CFuncTrackAuto>  (163 bytes)
 * undefined GetClassPtr<CFuncTrackAuto>(int param_1)
 */
void __cdecl GetClassPtr<CFuncTrackAuto>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  code *pcStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  pcStack_8 = FUN_1007ff61;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((param_1 == 0) &&
     (ExceptionList = &pvStack_c, peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0
     )) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x13c),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    pcStack_8 = (code *)puVar3;
    FUN_1002a3d0(puVar3);
    *puVar3 = &CFuncTrackAuto::vftable;
    puVar3[1] = param_1;
    ExceptionList = pvStack_4;
    return;
  }
  iRam00000004 = peVar1;
  ExceptionList = pvStack_c;
  return;
}

/* 1002a330  GetClassPtr<CGunTarget>  (79 bytes)
 * undefined GetClassPtr<CGunTarget>(int param_1)
 */
void __cdecl GetClassPtr<CGunTarget>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x154),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGunTarget::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002a3e0  LinkUserMessages  (1172 bytes)
 * undefined LinkUserMessages(void)
 * called by: CBasePlayer::Precache, pfnServerActivate
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LinkUserMessages(void)

{
  if (DAT_100cbbb4 == 0) {
    DAT_100cbbb4 = (*g_engfuncs.pfnRegUserMsg)(s_SelAmmo_10095e00,4);
    DAT_100cbbcc = (*g_engfuncs.pfnRegUserMsg)(s_CurWeapon_10095df4,3);
    DAT_100cbc30 = (*g_engfuncs.pfnRegUserMsg)(s_Geiger_10095dec,1);
    DAT_100cbbb8 = (*g_engfuncs.pfnRegUserMsg)(s_Flashlight_10095de0,2);
    DAT_100cbbbc = (*g_engfuncs.pfnRegUserMsg)(s_FlashBat_10095dd4,1);
    _DAT_100cbbd0 = (*g_engfuncs.pfnRegUserMsg)(s_Health_10095dcc,1);
    _DAT_100cbbd4 = (*g_engfuncs.pfnRegUserMsg)(s_Damage_10095dc4,0xc);
    _DAT_100cbbd8 = (*g_engfuncs.pfnRegUserMsg)(s_Battery_10095dbc,2);
    DAT_100cbbdc = (*g_engfuncs.pfnRegUserMsg)(s_Train_10095db4,1);
    DAT_100cbbec = (*g_engfuncs.pfnRegUserMsg)(s_HudText_10095dac,-1);
    DAT_100cbc20 = (*g_engfuncs.pfnRegUserMsg)(s_SayText_10095da4,-1);
    DAT_100cbc24 = (*g_engfuncs.pfnRegUserMsg)(s_TextMsg_10095d9c,-1);
    _DAT_100cbbe4 = (*g_engfuncs.pfnRegUserMsg)(s_WeaponList_10095d90,-1);
    DAT_100cbbc0 = (*g_engfuncs.pfnRegUserMsg)(s_ResetHUD_10095d84,1);
    DAT_100cbbc4 = (*g_engfuncs.pfnRegUserMsg)(s_InitHUD_10095d7c,0);
    _DAT_100cbbc8 = (*g_engfuncs.pfnRegUserMsg)(s_GameTitle_10095d70,1);
    DAT_100cbbf0 = (*g_engfuncs.pfnRegUserMsg)(s_DeathMsg_10095d64,-1);
    DAT_100cbbf4 = (*g_engfuncs.pfnRegUserMsg)(s_ScoreInfo_10095d58,9);
    DAT_100cbbf8 = (*g_engfuncs.pfnRegUserMsg)(s_TeamInfo_10095d4c,-1);
    DAT_100cbbfc = (*g_engfuncs.pfnRegUserMsg)(s_TeamScore_10095d40,-1);
    DAT_100cbc00 = (*g_engfuncs.pfnRegUserMsg)(s_GameMode_10095d34,1);
    DAT_100cbc04 = (*g_engfuncs.pfnRegUserMsg)(&DAT_10095d2c,-1);
    DAT_100cbc08 = (*g_engfuncs.pfnRegUserMsg)(s_ServerName_10095d20,-1);
    DAT_100cbc0c = (*g_engfuncs.pfnRegUserMsg)(s_AmmoPickup_10095d14,2);
    _DAT_100cbc10 = (*g_engfuncs.pfnRegUserMsg)(s_WeapPickup_10095d08,1);
    DAT_100cbc14 = (*g_engfuncs.pfnRegUserMsg)(s_ItemPickup_10095cfc,-1);
    DAT_100cbc18 = (*g_engfuncs.pfnRegUserMsg)(s_HideWeapon_10095cf0,1);
    DAT_100cbc28 = (*g_engfuncs.pfnRegUserMsg)(s_SetFOV_10095ce8,1);
    _DAT_100cbc2c = (*g_engfuncs.pfnRegUserMsg)(s_ShowMenu_10095cdc,-1);
    DAT_100cbbac = (*g_engfuncs.pfnRegUserMsg)(s_ScreenShake_10095cd0,6);
    DAT_100cbbb0 = (*g_engfuncs.pfnRegUserMsg)(s_ScreenFade_10095cc4,10);
    _DAT_100cbbe8 = (*g_engfuncs.pfnRegUserMsg)(s_AmmoX_10095cbc,2);
    DAT_100cbc34 = (*g_engfuncs.pfnRegUserMsg)(s_TeamNames_10095cb0,-1);
    DAT_100cbc38 = (*g_engfuncs.pfnRegUserMsg)(s_VGUIMenu_10095ca4,1);
    DAT_100cbc40 = (*g_engfuncs.pfnRegUserMsg)(s_WeaponInfo_10095c98,6);
    DAT_100cbc44 = (*g_engfuncs.pfnRegUserMsg)(s_ClipInfo_10095c8c,1);
    DAT_100cbc5c = (*g_engfuncs.pfnRegUserMsg)(s_WStatus_10095c84,2);
    DAT_100cbc60 = (*g_engfuncs.pfnRegUserMsg)(s_ActItems_10095c78,2);
    DAT_100cbc3c = (*g_engfuncs.pfnRegUserMsg)(s_KFuPower_10095c6c,1);
    DAT_100cbc48 = (*g_engfuncs.pfnRegUserMsg)(s_TSHealth_10095c60,1);
    DAT_100cbc4c = (*g_engfuncs.pfnRegUserMsg)(s_TSArmor_10095c58,1);
    DAT_100cbc50 = (*g_engfuncs.pfnRegUserMsg)(s_TSState_10095c50,1);
    DAT_100cbc54 = (*g_engfuncs.pfnRegUserMsg)(s_TSCash_10095c48,2);
    DAT_100cbc58 = (*g_engfuncs.pfnRegUserMsg)(s_TSSpace_10095c40,1);
    DAT_100cbc64 = (*g_engfuncs.pfnRegUserMsg)(s_NextStunt_10095c34,1);
    DAT_100cbc68 = (*g_engfuncs.pfnRegUserMsg)(&DAT_10095c2c,3);
    DAT_100cbc6c = (*g_engfuncs.pfnRegUserMsg)(s_PwUpTime_10095c20,1);
    DAT_100cbc70 = (*g_engfuncs.pfnRegUserMsg)(s_RoundTime_10095c14,2);
    DAT_100cbc88 = (*g_engfuncs.pfnRegUserMsg)(s_Objective_10095c08,-1);
    DAT_100cbc8c = (*g_engfuncs.pfnRegUserMsg)(s_DelObj_10095c00,1);
    DAT_100cbc90 = (*g_engfuncs.pfnRegUserMsg)(s_Wires_10095bf8,3);
    _DAT_100cbc94 = (*g_engfuncs.pfnRegUserMsg)(s_GloSlow_10095bf0,1);
    DAT_100cbc9c = (*g_engfuncs.pfnRegUserMsg)(s_SrvSett_10095be8,3);
    DAT_100cbca0 = (*g_engfuncs.pfnRegUserMsg)(s_TSPAward_10095bdc,2);
    DAT_100cbca4 = (*g_engfuncs.pfnRegUserMsg)(s_TSBTime_10095bd4,1);
    DAT_100cbca8 = (*g_engfuncs.pfnRegUserMsg)(s_TSHVoice_10095bc8,1);
    DAT_100cbcac = (*g_engfuncs.pfnRegUserMsg)(s_CustomWP_10095bbc,-1);
    DAT_100cbc78 = (*g_engfuncs.pfnRegUserMsg)(s_Spectator_10095bb0,2);
    DAT_100cbc7c = (*g_engfuncs.pfnRegUserMsg)(s_TSMessage_10095ba4,-1);
    DAT_100cbc80 = (*g_engfuncs.pfnRegUserMsg)(s_TSSlowMo_10095b98,2);
    DAT_100cbc74 = (*g_engfuncs.pfnRegUserMsg)(s_PTakeDam_10095b8c,0xd);
    DAT_100cbc84 = (*g_engfuncs.pfnRegUserMsg)(s_TSFrags_10095b84,0xd);
    _DAT_100cbc98 = (*g_engfuncs.pfnRegUserMsg)(s_KAlign_10095b7c,4);
  }
  return;
}

/* 1002ee30  GetClassPtr<CDeadHEV>  (79 bytes)
 * undefined GetClassPtr<CDeadHEV>(int param_1)
 */
void __cdecl GetClassPtr<CDeadHEV>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x154),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CDeadHEV::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002ee90  GetClassPtr<CStripWeapons>  (76 bytes)
 * undefined GetClassPtr<CStripWeapons>(int param_1)
 */
void __cdecl GetClassPtr<CStripWeapons>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CStripWeapons::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002eee0  GetClassPtr<CRevertSaved>  (76 bytes)
 * undefined GetClassPtr<CRevertSaved>(int param_1)
 */
void __cdecl GetClassPtr<CRevertSaved>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CRevertSaved::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002ef30  GetClassPtr<CInfoIntermission>  (76 bytes)
 * undefined GetClassPtr<CInfoIntermission>(int param_1)
 */
void __cdecl GetClassPtr<CInfoIntermission>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CInfoIntermission::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100301c0  pfnPM_FindTextureType  (94 bytes)
 * char pfnPM_FindTextureType(char * name)
 * called by: FUN_10030a20
 */
char __cdecl pfnPM_FindTextureType(char *name)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_100a1f30 + -1;
  iVar2 = 0;
  if (-1 < iVar4) {
    do {
      iVar3 = (iVar4 + iVar2) / 2;
      iVar1 = FUN_1007e930((byte_conflict *)name,&DAT_100a0328 + iVar3 * 0xd,(void *)0xc);
      if (iVar1 == 0) {
        return (&DAT_100a1d28)[iVar3];
      }
      if (iVar1 < 1) {
        if (iVar1 < 0) {
          iVar4 = iVar3 + -1;
        }
      }
      else {
        iVar2 = iVar3 + 1;
      }
    } while (iVar2 <= iVar4);
  }
  return 'C';
}

/* 10030e30  PM_AddToTouched  (160 bytes)
 * undefined4 PM_AddToTouched(void)
 * called by: FUN_10031150, FUN_10031f40, FUN_10033060
 */
undefined4 PM_AddToTouched(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_stack_00000034;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  undefined4 *in_stack_00000048;
  
  iVar1 = 0;
  iVar2 = *(int *)(DAT_100a1f2c + 0x4548c);
  if (0 < iVar2) {
    piVar3 = (int *)(DAT_100a1f2c + 0x454c0);
    do {
      if (*piVar3 == in_stack_00000034) break;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 0x11;
    } while (iVar1 < iVar2);
  }
  if (iVar1 != iVar2) {
    return 0;
  }
  uStack00000038 = *in_stack_00000048;
  uStack0000003c = in_stack_00000048[1];
  uStack00000040 = in_stack_00000048[2];
  if (599 < iVar2) {
    (**(code **)(DAT_100a1f2c + 0x4f564))(s_Too_many_entities_were_touched__10096104);
  }
  puVar4 = (undefined4 *)(DAT_100a1f2c + 0x45490 + *(int *)(DAT_100a1f2c + 0x4548c) * 0x44);
  for (iVar2 = 0x11; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar2 != 0;
      iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)register0x00000010;
    puVar4 = puVar4 + 1;
  }
  *(int *)(DAT_100a1f2c + 0x4548c) = *(int *)(DAT_100a1f2c + 0x4548c) + 1;
  return 1;
}

/* 10030ed0  PM_CheckVelocity  (236 bytes)
 * undefined PM_CheckVelocity(void)
 * called by: FUN_10031070, FUN_100310f0, FUN_10033000, PM_PlayerMove
 */
void PM_CheckVelocity(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0x5c;
  iVar1 = DAT_100a1f2c;
  do {
    if ((*(uint *)(iVar2 + iVar1) & DAT_100960a0) == DAT_100960a0) {
      (**(code **)(iVar1 + 0x4f568))(s_PM_Got_a_NaN_velocity__i_1009618c,iVar3);
      *(undefined4 *)(iVar2 + DAT_100a1f2c) = 0;
      iVar1 = DAT_100a1f2c;
    }
    if ((*(uint *)(iVar2 + -0x24 + iVar1) & DAT_100960a0) == DAT_100960a0) {
      (**(code **)(iVar1 + 0x4f568))(s_PM_Got_a_NaN_origin_on__i_10096170,iVar3);
      *(undefined4 *)(iVar2 + -0x24 + DAT_100a1f2c) = 0;
      iVar1 = DAT_100a1f2c;
    }
    if (*(float *)(iVar2 + iVar1) <= *(float *)(*(int *)(iVar1 + 0x4f4f0) + 0x34)) {
      if (*(float *)(iVar2 + iVar1) < -*(float *)(*(int *)(iVar1 + 0x4f4f0) + 0x34)) {
        (**(code **)(iVar1 + 0x4f564))(s_PM_Got_a_velocity_too_low_on__i_10096128,iVar3);
        *(float *)(iVar2 + DAT_100a1f2c) = -*(float *)(*(int *)(DAT_100a1f2c + 0x4f4f0) + 0x34);
        iVar1 = DAT_100a1f2c;
      }
    }
    else {
      (**(code **)(iVar1 + 0x4f564))(s_PM_Got_a_velocity_too_high_on__i_1009614c,iVar3);
      *(undefined4 *)(iVar2 + DAT_100a1f2c) =
           *(undefined4 *)(*(int *)(DAT_100a1f2c + 0x4f4f0) + 0x34);
      iVar1 = DAT_100a1f2c;
    }
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + 1;
  } while (iVar2 < 0x68);
  return;
}

/* 10033c90  PM_PlayerMove  (2196 bytes)
 * undefined PM_PlayerMove(undefined4 param_1)
 * called by: pfnPM_Move
 */
void __cdecl PM_PlayerMove(undefined4 param_1)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  float *pfVar7;
  int extraout_EDX;
  int *piVar8;
  int iVar9;
  float local_54;
  float local_50 [3];
  int local_44 [4];
  float local_34;
  undefined4 uStack_28;
  float fVar10;
  float fVar11;
  
  iVar9 = 0;
  *(undefined4 *)(DAT_100a1f2c + 4) = param_1;
  FUN_10058a60();
  *(undefined4 *)(DAT_100a1f2c + 0x4548c) = 0;
  *(float *)(DAT_100a1f2c + 0x10) = (float)*(byte *)(DAT_100a1f2c + 0x4545a) * 0.001;
  if (*(float *)(DAT_100a1f2c + 0x20c) != 0.0) {
    if (0.1 <= *(float *)(DAT_100a1f2c + 0x20c)) {
      fVar10 = *(float *)(DAT_100a1f2c + 0x20c);
    }
    else {
      fVar10 = 0.0;
    }
    *(float *)(DAT_100a1f2c + 0x10) = fVar10 * *(float *)(DAT_100a1f2c + 0x10);
  }
  FUN_10033b90();
  pfVar7 = (float *)(DAT_100a1f2c + 0x14);
  fVar10 = 2.5882326e-29;
  FUN_1002f540((float *)(DAT_100a1f2c + 0x44),pfVar7,(float *)(DAT_100a1f2c + 0x20),
               (float *)(DAT_100a1f2c + 0x2c));
  if ((*(int *)(DAT_100a1f2c + 0xd8) == 0) && (*(int *)(DAT_100a1f2c + 0x1fc) < 1)) {
    if (((*(int *)(DAT_100a1f2c + 0xdc) != 8) && (*(int *)(DAT_100a1f2c + 0xdc) != 0)) &&
       (iVar6 = FUN_100320f0(), iVar6 != 0)) {
      return;
    }
    FUN_10031f40();
    *(undefined4 *)(DAT_100a1f2c + 0xec) = *(undefined4 *)(DAT_100a1f2c + 0xe4);
    if (*(int *)(DAT_100a1f2c + 0xe0) == -1) {
      *(float *)(DAT_100a1f2c + 0x9c) = -*(float *)(DAT_100a1f2c + 100);
    }
    DAT_100a1f34 = 0;
    if (((*(int *)(DAT_100a1f2c + 0xd0) == 0) && ((*(uint *)(DAT_100a1f2c + 0xb8) & 0x1000000) == 0)
        ) && (iVar9 = FUN_10032e70(), iVar9 != 0)) {
      DAT_100a1f34 = 1;
    }
    FUN_10058400();
    FUN_10030b00();
    FUN_10058d70();
    if ((*(int *)(DAT_100a1f2c + 0xd0) == 0) && ((*(uint *)(DAT_100a1f2c + 0xb8) & 0x1000000) == 0))
    {
      if (iVar9 == 0) {
        if ((*(int *)(DAT_100a1f2c + 0xdc) != 3) && (*(int *)(DAT_100a1f2c + 0xdc) != 8)) {
          *(undefined4 *)(DAT_100a1f2c + 0xdc) = 3;
        }
      }
      else {
        FUN_10032b00(iVar9);
      }
    }
    switch(*(undefined4 *)(DAT_100a1f2c + 0xdc)) {
    case 0:
      return;
    default:
      (**(code **)(DAT_100a1f2c + 0x4f564))();
      return;
    case 3:
      bVar3 = FUN_10031d60();
      iVar6 = extraout_EDX;
      if (CONCAT31(extraout_var,bVar3) == 0) {
        FUN_10031070();
        iVar6 = DAT_100a1f2c;
      }
      if (*(float *)(iVar6 + 0xcc) == 0.0) {
        if (*(int *)(iVar6 + 0xe4) < 2) {
          if ((*(byte *)(iVar6 + 0x45476) & 2) == 0) {
            *(uint *)(iVar6 + 200) = *(uint *)(iVar6 + 200) & 0xfffffffd;
            iVar6 = DAT_100a1f2c;
          }
          else if (iVar9 == 0) {
            FUN_10058680();
            iVar6 = DAT_100a1f2c;
          }
          if (*(int *)(iVar6 + 0xe0) != -1) {
            *(undefined4 *)(iVar6 + 100) = 0;
            FUN_100316b0();
          }
          PM_CheckVelocity();
          if (*(int *)(DAT_100a1f2c + 0xe0) == -1) {
            FUN_10031c20();
          }
          else {
            FUN_10058fd0();
          }
          FUN_10031f40();
          *(float *)(DAT_100a1f2c + 0x5c) =
               *(float *)(DAT_100a1f2c + 0x5c) - *(float *)(DAT_100a1f2c + 0x74);
          *(float *)(DAT_100a1f2c + 0x60) =
               *(float *)(DAT_100a1f2c + 0x60) - *(float *)(DAT_100a1f2c + 0x78);
          *(float *)(DAT_100a1f2c + 100) =
               *(float *)(DAT_100a1f2c + 100) - *(float *)(DAT_100a1f2c + 0x7c);
          PM_CheckVelocity();
          bVar3 = FUN_10031d60();
          if (CONCAT31(extraout_var_00,bVar3) == 0) {
            FUN_100310f0();
          }
          if (*(int *)(DAT_100a1f2c + 0xe0) != -1) {
            *(undefined4 *)(DAT_100a1f2c + 100) = 0;
          }
          FUN_100337d0();
        }
        else {
          if (*(int *)(iVar6 + 0xe4) == 2) {
            FUN_10033560();
            iVar6 = DAT_100a1f2c;
          }
          if ((*(float *)(iVar6 + 100) < 0.0) && (*(float *)(iVar6 + 0xcc) != 0.0)) {
            *(undefined4 *)(iVar6 + 0xcc) = 0;
            iVar6 = DAT_100a1f2c;
          }
          if ((*(byte *)(iVar6 + 0x45476) & 2) == 0) {
            *(uint *)(iVar6 + 200) = *(uint *)(iVar6 + 200) & 0xfffffffd;
          }
          else {
            FUN_10058680();
          }
          FUN_10031910();
          *(float *)(DAT_100a1f2c + 0x5c) =
               *(float *)(DAT_100a1f2c + 0x5c) - *(float *)(DAT_100a1f2c + 0x74);
          *(float *)(DAT_100a1f2c + 0x60) =
               *(float *)(DAT_100a1f2c + 0x60) - *(float *)(DAT_100a1f2c + 0x78);
          *(float *)(DAT_100a1f2c + 100) =
               *(float *)(DAT_100a1f2c + 100) - *(float *)(DAT_100a1f2c + 0x7c);
          FUN_10031f40();
        }
        if (*(int *)(DAT_100a1f2c + 0xec) == 0) {
          if (*(int *)(DAT_100a1f2c + 0xe4) == 0) {
            return;
          }
        }
        else if (*(int *)(DAT_100a1f2c + 0xe4) != 0) {
          return;
        }
        uVar5 = (**(code **)(DAT_100a1f2c + 0x4f588))();
        switch(uVar5) {
        case 0:
          (**(code **)(DAT_100a1f2c + 0x4f5b4))();
          return;
        case 1:
          (**(code **)(DAT_100a1f2c + 0x4f5b4))();
          return;
        case 2:
          (**(code **)(DAT_100a1f2c + 0x4f5b4))();
          return;
        case 3:
          (**(code **)(DAT_100a1f2c + 0x4f5b4))();
        }
        return;
      }
      FUN_10032f40();
      FUN_10031150();
      FUN_10031d80();
      return;
    case 5:
      FUN_10031d80();
      if ((*(byte *)(DAT_100a1f2c + 0x45476) & 2) == 0) {
        *(uint *)(DAT_100a1f2c + 200) = *(uint *)(DAT_100a1f2c + 200) & 0xfffffffd;
      }
      else if (iVar9 == 0) {
        FUN_10058680();
      }
      *(float *)(DAT_100a1f2c + 0x5c) =
           *(float *)(DAT_100a1f2c + 0x74) + *(float *)(DAT_100a1f2c + 0x5c);
      *(float *)(DAT_100a1f2c + 0x60) =
           *(float *)(DAT_100a1f2c + 0x78) + *(float *)(DAT_100a1f2c + 0x60);
      *(float *)(DAT_100a1f2c + 100) =
           *(float *)(DAT_100a1f2c + 0x7c) + *(float *)(DAT_100a1f2c + 100);
      FUN_10031150();
      *(float *)(DAT_100a1f2c + 0x5c) =
           *(float *)(DAT_100a1f2c + 0x5c) - *(float *)(DAT_100a1f2c + 0x74);
      *(float *)(DAT_100a1f2c + 0x60) =
           *(float *)(DAT_100a1f2c + 0x60) - *(float *)(DAT_100a1f2c + 0x78);
      *(float *)(DAT_100a1f2c + 100) =
           *(float *)(DAT_100a1f2c + 100) - *(float *)(DAT_100a1f2c + 0x7c);
      return;
    case 6:
    case 10:
      goto LAB_10033140;
    case 8:
      fVar10 = *(float *)(DAT_100a1f2c + 0x45468);
      fVar11 = *(float *)(DAT_100a1f2c + 0x4546c);
      FUN_1002fc10((float *)(DAT_100a1f2c + 0x14));
      FUN_1002fc10((float *)(DAT_100a1f2c + 0x20));
      iVar9 = 0;
      pfVar7 = (float *)(DAT_100a1f2c + 0x14);
      do {
        pfVar1 = pfVar7 + 3;
        fVar2 = *pfVar7;
        iVar9 = iVar9 + 1;
        pfVar7 = pfVar7 + 1;
        *(float *)(&stack0xfffffff0 + iVar9 * 4) = fVar10 * fVar2 + fVar11 * *pfVar1;
      } while (iVar9 < 3);
      uStack_28 = 0x100334c2;
      FUN_1002fad0((float *)(DAT_100a1f2c + 0x38),*(float *)(DAT_100a1f2c + 0x10),
                   (float *)&stack0xfffffff4,(float *)(DAT_100a1f2c + 0x38));
      *(undefined4 *)(DAT_100a1f2c + 0x5c) = 0;
      *(undefined4 *)(DAT_100a1f2c + 0x60) = 0;
      *(undefined4 *)(DAT_100a1f2c + 100) = 0;
      return;
    }
  }
  FUN_100324c0();
  FUN_10031f40();
  return;
LAB_10033140:
  FUN_10031d80();
  if (0.0 < *(float *)(DAT_100a1f2c + 100)) {
    *(undefined4 *)(DAT_100a1f2c + 0xe0) = 0xffffffff;
  }
  if (((*(int *)(DAT_100a1f2c + 0xe0) == -1) ||
      (iVar9 = FUN_1002faa0(DAT_100a1f2c + 0x74,(float *)&DAT_1009fe84), iVar9 == 0)) ||
     (iVar9 = FUN_1002faa0(DAT_100a1f2c + 0x5c,(float *)&DAT_1009fe84), iVar9 == 0)) {
    PM_CheckVelocity();
    iVar9 = *(int *)(DAT_100a1f2c + 0xdc);
    if (((iVar9 != 5) && (iVar9 != 0xb)) && (iVar9 != 9)) {
      FUN_10033000();
    }
    *(float *)(DAT_100a1f2c + 0x5c) =
         *(float *)(DAT_100a1f2c + 0x74) + *(float *)(DAT_100a1f2c + 0x5c);
    *(float *)(DAT_100a1f2c + 0x60) =
         *(float *)(DAT_100a1f2c + 0x78) + *(float *)(DAT_100a1f2c + 0x60);
    *(float *)(DAT_100a1f2c + 100) =
         *(float *)(DAT_100a1f2c + 0x7c) + *(float *)(DAT_100a1f2c + 100);
    PM_CheckVelocity();
    FUN_1002fc80((float *)(DAT_100a1f2c + 0x5c),*(float *)(DAT_100a1f2c + 0x10),local_50);
    *(float *)(DAT_100a1f2c + 0x5c) =
         *(float *)(DAT_100a1f2c + 0x5c) - *(float *)(DAT_100a1f2c + 0x74);
    *(float *)(DAT_100a1f2c + 0x60) =
         *(float *)(DAT_100a1f2c + 0x60) - *(float *)(DAT_100a1f2c + 0x78);
    *(float *)(DAT_100a1f2c + 100) =
         *(float *)(DAT_100a1f2c + 100) - *(float *)(DAT_100a1f2c + 0x7c);
    piVar4 = (int *)FUN_10033060(local_44,local_50);
    piVar8 = local_44;
    for (iVar9 = 0x11; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar8 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar8 = piVar8 + 1;
    }
    PM_CheckVelocity();
    if (local_44[0] == 0) {
      if (local_34 == 1.0) {
        FUN_10031d80();
        return;
      }
      if (*(int *)(DAT_100a1f2c + 0xdc) == 10) {
        local_54 = 2.0 - *(float *)(DAT_100a1f2c + 0xc4);
      }
      else {
        local_54 = 2.0;
        if (*(int *)(DAT_100a1f2c + 0xdc) != 0xb) {
          local_54 = 1.0;
        }
      }
      FUN_10030fc0((float *)(DAT_100a1f2c + 0x5c),(float *)&stack0xffffffdc,
                   (float *)(DAT_100a1f2c + 0x5c),local_54);
      if (0.7 < fVar10) {
        if (*(float *)(DAT_100a1f2c + 100) <
            **(float **)(DAT_100a1f2c + 0x4f4f0) * *(float *)(DAT_100a1f2c + 0x10)) {
          *(float **)(DAT_100a1f2c + 0xe0) = pfVar7;
          *(undefined4 *)(DAT_100a1f2c + 100) = 0;
        }
        if ((*(float *)(DAT_100a1f2c + 100) * *(float *)(DAT_100a1f2c + 100) +
             *(float *)(DAT_100a1f2c + 0x5c) * *(float *)(DAT_100a1f2c + 0x5c) +
             *(float *)(DAT_100a1f2c + 0x60) * *(float *)(DAT_100a1f2c + 0x60) < 900.0) ||
           ((*(int *)(DAT_100a1f2c + 0xdc) != 10 && (*(int *)(DAT_100a1f2c + 0xdc) != 0xb)))) {
          *(float **)(DAT_100a1f2c + 0xe0) = pfVar7;
          *(undefined4 *)(DAT_100a1f2c + 0x5c) = DAT_1009fe84;
          *(undefined4 *)(DAT_100a1f2c + 0x60) = DAT_1009fe88;
          *(undefined4 *)(DAT_100a1f2c + 100) = DAT_1009fe8c;
        }
        else {
          FUN_1002fc80((float *)(DAT_100a1f2c + 0x5c),
                       (1.0 - local_34) * *(float *)(DAT_100a1f2c + 0x10) * 0.9,local_50);
          FUN_10033060(local_44,local_50);
        }
        *(undefined4 *)(DAT_100a1f2c + 0x5c) = *(undefined4 *)(DAT_100a1f2c + 0x5c);
        *(undefined4 *)(DAT_100a1f2c + 0x60) = *(undefined4 *)(DAT_100a1f2c + 0x60);
        *(undefined4 *)(DAT_100a1f2c + 100) = *(undefined4 *)(DAT_100a1f2c + 100);
      }
      FUN_10031d80();
      return;
    }
    *(float **)(DAT_100a1f2c + 0xe0) = pfVar7;
    *(undefined4 *)(DAT_100a1f2c + 0x5c) = DAT_1009fe84;
    *(undefined4 *)(DAT_100a1f2c + 0x60) = DAT_1009fe88;
    *(undefined4 *)(DAT_100a1f2c + 100) = DAT_1009fe8c;
  }
  return;
}

/* 100342e0  pfnPM_Move  (97 bytes)
 * void pfnPM_Move(playermove_s * ppmove, qboolean server)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnPM_Move(playermove_s *ppmove,qboolean server)

{
  uint uVar1;
  
  DAT_100a1f2c = ppmove;
  PM_PlayerMove((uint)(server != 0));
  if (DAT_100a1f2c->onground == -1) {
    uVar1 = DAT_100a1f2c->flags & 0xfffffdff;
  }
  else {
    uVar1 = DAT_100a1f2c->flags | 0x200;
  }
  DAT_100a1f2c->flags = uVar1;
  if ((DAT_100a1f2c->multiplayer == 0) && (DAT_100a1f2c->movetype == 3)) {
    DAT_100a1f2c->friction = 1.0;
  }
  return;
}

/* 10034380  pfnPM_Init  (30 bytes)
 * void pfnPM_Init(playermove_s * ppmove)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnPM_Init(playermove_s *ppmove)

{
  DAT_100a1f2c = ppmove;
  FUN_100340d0();
  FUN_1002ff30();
  _DAT_100a1f28 = 1;
  return;
}

/* 10035720  FEnvSoundInRange  (276 bytes)
 * undefined4 FEnvSoundInRange(int param_1, undefined4 param_2, float * param_3)
 * called by: CEnvSound::Think
 */
undefined4 __cdecl FEnvSoundInRange(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar7 = GetClassPtr<CEnvSound>(param_1);
  fVar1 = *(float *)(param_1 + 0x174);
  fVar2 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 0x178);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 0x17c);
  fVar6 = *(float *)(param_1 + 0x10);
  FUN_10067850();
  if (((uStack_30 != 0) && (uStack_2c != 0)) || (uStack_28 != 1.0)) {
    return 0;
  }
  fVar1 = uStack_24 - (fVar1 + fVar2);
  fVar3 = uStack_20 - (fVar3 + fVar4);
  fVar2 = uStack_1c - (fVar5 + fVar6);
  fVar1 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
  if (*(float *)(iVar7 + 0x54) < fVar1) {
    return 0;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar1;
    return 1;
  }
  return 1;
}

/* 10035a70  USENTENCEG_PickSequential  (261 bytes)
 * uint USENTENCEG_PickSequential(uint param_1, char * param_2, int param_3, int param_4)
 * called by: SENTENCEG_PlaySequentialSz
 */
uint __cdecl USENTENCEG_PickSequential(uint param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char local_8 [8];
  
  if (DAT_100ac538 == 0) {
    return 0xffffffff;
  }
  if ((int)param_1 < 0) {
    return 0xffffffff;
  }
  iVar5 = param_1 * 0xd;
  iVar2 = param_1 * 0xd;
  param_1 = (uint)*(byte *)(&DAT_100a20a8 + iVar2);
  if (*(byte *)(&DAT_100a20a8 + iVar2) == 0) {
    return 0xffffffff;
  }
  if ((int)param_1 <= param_3) {
    param_3 = param_1 - 1;
  }
  pcVar3 = &DAT_10095e80;
  do {
    cVar1 = *pcVar3;
    (param_2 + -0x10095e80)[(int)pcVar3] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = 0xffffffff;
  pcVar3 = (char *)(&DAT_100a2098 + iVar5);
  do {
    pcVar7 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar3 = param_2;
  do {
    pcVar8 = pcVar3;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  pcVar3 = pcVar7 + -uVar4;
  pcVar7 = pcVar8 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_1006e69a(local_8,&DAT_100945a0);
  uVar4 = 0xffffffff;
  pcVar3 = local_8;
  do {
    pcVar7 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  do {
    pcVar3 = param_2;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar3 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar3;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -uVar4;
  pcVar3 = pcVar3 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar3 = pcVar3 + 1;
  }
  if ((int)param_1 <= param_3) {
    return ~-(uint)(param_4 != 0) & param_1;
  }
  return param_3 + 1;
}

/* 10035b80  USENTENCEG_Pick  (286 bytes)
 * uint USENTENCEG_Pick(uint param_1, char * param_2)
 * called by: SENTENCEG_PlayRndI, SENTENCEG_PlayRndSz
 */
uint __cdecl USENTENCEG_Pick(uint param_1,char *param_2)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char local_8 [8];
  
  if (DAT_100ac538 == 0) {
    return 0xffffffff;
  }
  if ((int)param_1 < 0) {
    return 0xffffffff;
  }
  bVar2 = *(byte *)(&DAT_100a20a8 + param_1 * 0xd);
  iVar7 = param_1 * 0xd;
  puVar1 = &DAT_100a20ac + param_1 * 0x34;
  while( true ) {
    bVar5 = 0;
    param_1 = 0;
    if (bVar2 != 0) break;
LAB_10035bef:
    FUN_10035a00((int)puVar1,(uint)bVar2);
  }
  while( true ) {
    if (puVar1[param_1] != -1) break;
    bVar5 = bVar5 + 1;
    param_1 = (uint)bVar5;
    if (bVar2 <= bVar5) goto LAB_10035bef;
  }
  bVar2 = puVar1[param_1];
  puVar1[param_1] = 0xff;
  pcVar4 = &DAT_10095e80;
  do {
    cVar3 = *pcVar4;
    (param_2 + -0x10095e80)[(int)pcVar4] = cVar3;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  uVar6 = 0xffffffff;
  pcVar4 = (char *)(&DAT_100a2098 + iVar7);
  do {
    pcVar9 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar4 + 1;
    cVar3 = *pcVar4;
    pcVar4 = pcVar9;
  } while (cVar3 != '\0');
  uVar6 = ~uVar6;
  iVar7 = -1;
  pcVar4 = param_2;
  do {
    pcVar10 = pcVar4;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = pcVar4 + 1;
    cVar3 = *pcVar4;
    pcVar4 = pcVar10;
  } while (cVar3 != '\0');
  pcVar4 = pcVar9 + -uVar6;
  pcVar9 = pcVar10 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar9 = pcVar9 + 1;
  }
  FUN_1006e69a(local_8,&DAT_100945a0);
  uVar6 = 0xffffffff;
  pcVar4 = local_8;
  do {
    pcVar9 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar4 + 1;
    cVar3 = *pcVar4;
    pcVar4 = pcVar9;
  } while (cVar3 != '\0');
  uVar6 = ~uVar6;
  iVar7 = -1;
  do {
    pcVar4 = param_2;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar4 = param_2 + 1;
    cVar3 = *param_2;
    param_2 = pcVar4;
  } while (cVar3 != '\0');
  pcVar9 = pcVar9 + -uVar6;
  pcVar4 = pcVar4 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar4 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar4 = pcVar4 + 1;
  }
  return (uint)bVar2;
}

/* 10035ca0  SENTENCEG_GetIndex  (114 bytes)
 * int SENTENCEG_GetIndex(byte.conflict * param_1)
 * called by: CBasePlayer::SetSuitUpdate, SENTENCEG_PlayRndSz, SENTENCEG_PlaySequentialSz
 */
int __cdecl SENTENCEG_GetIndex(byte_conflict *param_1)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (((DAT_100ac538 != 0) && (param_1 != (byte_conflict *)0x0)) && (iVar5 = 0, DAT_100a20a8 != 0))
  {
    puVar7 = &DAT_100a20a8;
    do {
      pbVar6 = (byte *)(puVar7 + -4);
      pbVar3 = param_1;
      do {
        bVar2 = *pbVar3;
        bVar8 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_10035cef:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_10035cf4;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar8 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_10035cef;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_10035cf4:
      if (iVar4 == 0) {
        return iVar5;
      }
      piVar1 = puVar7 + 0xd;
      puVar7 = puVar7 + 0xd;
      iVar5 = iVar5 + 1;
    } while (*piVar1 != 0);
  }
  return -1;
}

/* 10035d20  SENTENCEG_PlayRndI  (96 bytes)
 * uint SENTENCEG_PlayRndI(void * param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * called by: EMIT_GROUPID_SUIT
 */
uint __cdecl
SENTENCEG_PlayRndI(void *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  char local_40 [64];
  
  if (DAT_100ac538 == 0) {
    return 0xffffffff;
  }
  local_40[0] = '\0';
  uVar1 = USENTENCEG_Pick(param_2,local_40);
  if (0 < (int)uVar1) {
    EMIT_SOUND_DYN(param_1,param_1,2,local_40,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}

/* 10035d80  SENTENCEG_PlayRndSz  (143 bytes)
 * uint SENTENCEG_PlayRndSz(void * param_1, byte.conflict * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * called by: CSpeaker::SpeakerThink
 */
uint __cdecl
SENTENCEG_PlayRndSz(void *param_1,byte_conflict *param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  char local_40 [64];
  
  if (DAT_100ac538 == 0) {
    return 0xffffffff;
  }
  local_40[0] = '\0';
  uVar1 = SENTENCEG_GetIndex(param_2);
  if ((int)uVar1 < 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_No_such_sentence_group__s_10096e0c,param_2);
    return 0xffffffff;
  }
  uVar1 = USENTENCEG_Pick(uVar1,local_40);
  if ((-1 < (int)uVar1) && (local_40[0] != '\0')) {
    EMIT_SOUND_DYN(param_1,param_1,2,local_40,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}

/* 10035e10  SENTENCEG_PlaySequentialSz  (134 bytes)
 * uint SENTENCEG_PlaySequentialSz(void * param_1, byte.conflict * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, int param_7, int param_8)
 * called by: PlayLockSounds
 */
uint __cdecl
SENTENCEG_PlaySequentialSz
          (void *param_1,byte_conflict *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,int param_7,int param_8)

{
  uint uVar1;
  char local_40 [64];
  
  if (DAT_100ac538 == 0) {
    return 0xffffffff;
  }
  local_40[0] = '\0';
  uVar1 = SENTENCEG_GetIndex(param_2);
  if ((int)uVar1 < 0) {
    return 0xffffffff;
  }
  uVar1 = USENTENCEG_PickSequential(uVar1,local_40,param_7,param_8);
  if ((-1 < (int)uVar1) && (local_40[0] != '\0')) {
    EMIT_SOUND_DYN(param_1,param_1,2,local_40,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}

/* 10035f80  SENTENCEG_Init  (708 bytes)
 * undefined SENTENCEG_Init(void)
 * called by: CWorld::Precache
 */
/* WARNING: Type propagation algorithm not settling */

void SENTENCEG_Init(void)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  void *extraout_ECX;
  void *pvVar10;
  void *extraout_ECX_00;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  byte_conflict **ppbVar15;
  bool bVar16;
  char *szFmt;
  int local_24c;
  int *piStack_248;
  int local_244;
  byte_conflict *local_240;
  int iStack_23c;
  byte abStack_238 [56];
  undefined4 local_200;
  char acStack_1f9 [505];
  
  if (DAT_100ac538 == 0) {
    DAT_100ac53c = (void *)0x0;
    puVar5 = (undefined4 *)&DAT_100a4938;
    for (iVar9 = 0x1800; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar5 = &DAT_100a2098;
    for (iVar9 = 0xa28; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar5 = &local_200;
    for (iVar9 = 0x80; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    ppbVar15 = &local_240;
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *ppbVar15 = (byte_conflict *)0x0;
      ppbVar15 = ppbVar15 + 1;
    }
    local_244 = 0;
    local_240 = (*g_engfuncs.pfnLoadFileForMe)(s_sound_sentences_txt_10096ea0,&local_24c);
    if (local_240 != (byte_conflict *)0x0) {
      puVar5 = FUN_100364e0((int)local_240,local_244,&iStack_23c,
                            (undefined4 *)((int)acStack_1f9 + 1),0x1ff);
      if (puVar5 != (undefined4 *)0x0) {
        piStack_248 = (int *)&DAT_100a2074;
        pvVar10 = extraout_ECX;
LAB_10036023:
        iVar9 = 0;
        cVar2 = acStack_1f9[1];
        while ((cVar2 != '\0' && (cVar2 == ' '))) {
          uVar4 = iVar9 + 2;
          iVar9 = iVar9 + 1;
          cVar2 = acStack_1f9[uVar4];
        }
        cVar2 = acStack_1f9[iVar9 + 1];
        pbVar8 = (byte *)(acStack_1f9 + iVar9 + 1);
        if (((cVar2 != '\0') && (cVar2 != '/')) &&
           (uVar6 = FUN_1006e728(pvVar10,(int)cVar2), uVar6 != 0)) {
          bVar3 = *pbVar8;
          iVar12 = iVar9;
          while ((bVar3 != 0 && (bVar3 != 0x20))) {
            uVar4 = iVar12 + 2;
            iVar12 = iVar12 + 1;
            bVar3 = acStack_1f9[uVar4];
          }
          if (acStack_1f9[iVar12 + 1] == '\0') goto LAB_100361b0;
          if ((int)DAT_100ac53c < 0x601) {
            uVar6 = 0xffffffff;
            acStack_1f9[iVar12 + 1] = 0;
            pbVar11 = pbVar8;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              bVar3 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar3 != 0);
            if (0xf < ~uVar6 - 1) {
              (*g_engfuncs.pfnAlertMessage)
                        (at_warning,s_Sentence__s_longer_than__d_lette_10096e7c,pbVar8,0xf);
            }
            pbVar7 = &DAT_100a4938 + (int)DAT_100ac53c * 0x10;
            pvVar10 = (void *)((int)DAT_100ac53c + 1);
            pbVar11 = pbVar8;
            DAT_100ac53c = pvVar10;
            do {
              bVar3 = *pbVar11;
              pvVar10 = (void *)CONCAT31((int3)((uint)pvVar10 >> 8),bVar3);
              pbVar11 = pbVar11 + 1;
              *pbVar7 = bVar3;
              pbVar7 = pbVar7 + 1;
            } while (bVar3 != 0);
            iVar13 = iVar12 + -1;
            if ((iVar9 < iVar13) &&
               (uVar6 = FUN_1006e7a6(pvVar10,(int)acStack_1f9[iVar12]), uVar6 != 0)) {
              do {
                uVar6 = FUN_1006e7a6((void *)(int)acStack_1f9[iVar13 + 1],
                                     (int)acStack_1f9[iVar13 + 1]);
                if (uVar6 == 0) {
                  if (iVar9 < iVar13) {
                    acStack_1f9[iVar13 + 2] = 0;
                    pbVar11 = abStack_238;
                    pbVar7 = pbVar8;
                    goto LAB_10036132;
                  }
                  break;
                }
                iVar13 = iVar13 + -1;
              } while (iVar9 < iVar13);
            }
            goto LAB_100361b0;
          }
          szFmt = s_Too_many_sentences_in_sentences__10096e54;
          goto LAB_100361e7;
        }
        goto LAB_100361b0;
      }
LAB_100361f2:
      (*g_engfuncs.pfnFreeFile)(local_240);
      DAT_100ac538 = 1;
      if (DAT_100a20a8 != 0) {
        piVar14 = &DAT_100a20a8;
        do {
          if (0x100a4947 < (int)piVar14) {
            return;
          }
          FUN_10035a00((int)(piVar14 + 1),*piVar14);
          piVar1 = piVar14 + 0xd;
          piVar14 = piVar14 + 0xd;
        } while (*piVar1 != 0);
      }
    }
  }
  return;
  while( true ) {
    bVar3 = pbVar11[1];
    bVar16 = bVar3 < pbVar7[1];
    if (bVar3 != pbVar7[1]) goto LAB_1003615a;
    pbVar11 = pbVar11 + 2;
    pbVar7 = pbVar7 + 2;
    if (bVar3 == 0) break;
LAB_10036132:
    bVar3 = *pbVar11;
    bVar16 = bVar3 < *pbVar7;
    if (bVar3 != *pbVar7) {
LAB_1003615a:
      iVar9 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
      goto LAB_1003615f;
    }
    if (bVar3 == 0) break;
  }
  iVar9 = 0;
LAB_1003615f:
  if (iVar9 == 0) {
    if (0x100a20a7 < (int)piStack_248) {
      *piStack_248 = *piStack_248 + 1;
    }
  }
  else {
    piStack_248 = piStack_248 + 0xd;
    if (0x100a4947 < (int)piStack_248) {
      szFmt = s_Too_many_sentence_groups_in_sent_10096e28;
LAB_100361e7:
      (*g_engfuncs.pfnAlertMessage)(at_error,szFmt);
      goto LAB_100361f2;
    }
    pbVar11 = pbVar8;
    do {
      bVar3 = *pbVar11;
      pbVar11[(int)((int)piStack_248 + (-0x10 - (int)pbVar8))] = bVar3;
      pbVar11 = pbVar11 + 1;
    } while (bVar3 != 0);
    *piStack_248 = 1;
    iVar9 = -(int)pbVar8;
    do {
      bVar3 = *pbVar8;
      pbVar8[(int)(abStack_238 + iVar9)] = bVar3;
      pbVar8 = pbVar8 + 1;
    } while (bVar3 != 0);
  }
LAB_100361b0:
  puVar5 = FUN_100364e0((int)local_240,local_244,&iStack_23c,(undefined4 *)((int)acStack_1f9 + 1),
                        0x1ff);
  pvVar10 = extraout_ECX_00;
  if (puVar5 == (undefined4 *)0x0) goto LAB_100361f2;
  goto LAB_10036023;
}

/* 10036250  SENTENCEG_Lookup  (164 bytes)
 * int SENTENCEG_Lookup(int param_1, char * param_2)
 * called by: CBasePlayer::SetSuitUpdate, EMIT_SOUND_DYN, UTIL_EmitAmbientSound
 */
int __thiscall SENTENCEG_Lookup(void *this,int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  void *extraout_ECX;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte_conflict *pbVar7;
  char *pcVar8;
  char local_8 [8];
  
  iVar6 = 0;
  if (DAT_100ac53c < 1) {
    return -1;
  }
  pbVar7 = &DAT_100a4938;
  while (uVar2 = FUN_1007e860(this,pbVar7,(byte_conflict *)(param_1 + 1)), uVar2 != 0) {
    iVar6 = iVar6 + 1;
    pbVar7 = pbVar7 + 0x10;
    this = extraout_ECX;
    if (DAT_100ac53c <= iVar6) {
      return -1;
    }
  }
  if (param_2 == (char *)0x0) {
    return iVar6;
  }
  pcVar3 = &DAT_10095e80;
  do {
    cVar1 = *pcVar3;
    (param_2 + -0x10095e80)[(int)pcVar3] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_1006e69a(local_8,&DAT_100945a0);
  uVar2 = 0xffffffff;
  pcVar3 = local_8;
  do {
    pcVar8 = pcVar3;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  do {
    pcVar3 = param_2;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar3 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar3;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -uVar2;
  pcVar3 = pcVar3 + -1;
  for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar3 = pcVar3 + 1;
  }
  return iVar6;
}

/* 10036300  EMIT_SOUND_DYN  (129 bytes)
 * undefined EMIT_SOUND_DYN(undefined4 param_1, undefined4 param_2, char * param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * called by: CBaseButton::ButtonActivate, CBaseButton::ButtonTouch, CBaseButton::ButtonUse, CBaseButton::TakeDamage, CBaseDoor::DoorGoDown, CBaseDoor::DoorGoUp, CBaseDoor::DoorHitBottom, CBaseDoor::DoorHitTop, CBaseDoor::TraceAttack, CBaseMonster::GibMonster, CBaseMonster::Killed, CBasePlayer::PickUpWeapon, ... (109 total)
 */
void __thiscall
EMIT_SOUND_DYN(void *this,edict_t *param_1,int param_2,char *param_3,float param_4,float param_5,
              int param_6,int param_7)

{
  int iVar1;
  char local_20 [32];
  
  if ((param_3 != (char *)0x0) && (*param_3 == '!')) {
    iVar1 = SENTENCEG_Lookup(this,(int)param_3,local_20);
    if (iVar1 < 0) {
      (*g_engfuncs.pfnAlertMessage)
                (at_aiconsole,s_Unable_to_find__s_in_sentences_t_10096eb4,param_3);
      return;
    }
    param_3 = local_20;
  }
  (*g_engfuncs.pfnEmitSound)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

/* 10036390  EMIT_SOUND_SUIT  (112 bytes)
 * undefined EMIT_SOUND_SUIT(undefined4 param_1, void * param_2)
 * called by: CBaseAnimating::HandleAnimEvent, CBasePlayer::CheckSuitUpdate, CItemSuit::MyTouch
 */
void __cdecl EMIT_SOUND_SUIT(undefined4 param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = 100;
  fVar3 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_suitvolume_10096ed8);
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,1);
  if (iVar1 != 0) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,6);
    iVar2 = iVar2 + 0x62;
  }
  if (0.05 < (float)fVar3) {
    EMIT_SOUND_DYN(param_2,param_1,6,param_2,(float)fVar3,0x3f4ccccd,0,iVar2);
  }
  return;
}

/* 10036400  EMIT_GROUPID_SUIT  (110 bytes)
 * undefined EMIT_GROUPID_SUIT(void * param_1, uint param_2)
 * called by: CBasePlayer::CheckSuitUpdate
 */
void __cdecl EMIT_GROUPID_SUIT(void *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = 100;
  fVar3 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_suitvolume_10096ed8);
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,1);
  if (iVar1 != 0) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,6);
    iVar2 = iVar2 + 0x62;
  }
  if (0.05 < (float)fVar3) {
    SENTENCEG_PlayRndI(param_1,param_2,(float)fVar3,0x3f4ccccd,0,iVar2);
  }
  return;
}

/* 10036760  TEXTURETYPE_Find  (68 bytes)
 * undefined1 TEXTURETYPE_Find(byte.conflict * param_1)
 * called by: TEXTURETYPE_PlaySound
 */
undefined1 __cdecl TEXTURETYPE_Find(byte_conflict *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_100ac544) {
    pcVar2 = &DAT_100aa938;
    do {
      iVar1 = FUN_1007e930(param_1,pcVar2,(void *)0xc);
      if (iVar1 == 0) {
        return (&DAT_100ac338)[iVar3];
      }
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 0xd;
    } while (iVar3 < DAT_100ac544);
  }
  return 0x43;
}

/* 100367b0  TEXTURETYPE_PlaySound  (1176 bytes)
 * float10 TEXTURETYPE_PlaySound(int param_1, float param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, float param_8)
 * called by: FUN_100126a0
 */
float10 __cdecl
TEXTURETYPE_PlaySound
          (int param_1,float param_2,undefined4 param_3,undefined4 param_4,int param_5,
          undefined4 param_6,char *param_7,float param_8)

{
  char cVar1;
  int iVar2;
  edict_t *peVar3;
  int iVar4;
  int *piVar5;
  float *unaff_EDI;
  char *pcVar6;
  bool bVar7;
  float in_stack_0000002c;
  char *in_stack_00000030;
  float *v1;
  float fVar8;
  char *pcVar9;
  char *in_stack_ffffffa0;
  float in_stack_ffffffa4;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_stack_ffffffb0;
  byte_conflict abStack_30 [4];
  undefined4 auStack_2c [2];
  char cStack_24;
  
  iVar2 = (**(code **)(*DAT_1009f494 + 0xe0))();
  if (iVar2 == 0) {
    return (float10)0.0;
  }
  peVar3 = *(edict_t **)(param_1 + 0x30);
  if ((peVar3 == (edict_t *)0x0) &&
     (peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar3 == (edict_t *)0x0)) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = peVar3->pvPrivateData;
  }
  cVar1 = '\0';
  if (((piVar5 == (int *)0x0) || (iVar2 = (**(code **)(*piVar5 + 0x2c))(), iVar2 == 0)) ||
     (iVar2 = (**(code **)(*piVar5 + 0x2c))(), iVar2 == 1)) {
    v1 = (float *)&stack0xffffff98;
    if (piVar5 == (int *)0x0) {
      peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      in_stack_ffffffa0 = param_7;
      in_stack_ffffffa4 = param_2;
    }
    else {
      peVar3 = *(edict_t **)(piVar5[1] + 0x208);
      in_stack_ffffffa0 = param_7;
      in_stack_ffffffa4 = param_2;
    }
    pcVar9 = (*g_engfuncs.pfnTraceTexture)(peVar3,v1,unaff_EDI);
    if (pcVar9 != (char *)0x0) {
      if ((*pcVar9 == '-') || (*pcVar9 == '+')) {
        pcVar9 = pcVar9 + 2;
      }
      cVar1 = *pcVar9;
      if (((cVar1 == '{') || (cVar1 == '!')) || ((cVar1 == '~' || (cVar1 == ' ')))) {
        pcVar9 = pcVar9 + 1;
      }
      iVar2 = -(int)pcVar9;
      do {
        cVar1 = *pcVar9;
        pcVar9[(int)(abStack_30 + iVar2)] = cVar1;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      cStack_24 = cVar1;
      cVar1 = TEXTURETYPE_Find(abStack_30);
    }
  }
  else {
    cVar1 = 'F';
  }
  switch(cVar1) {
  case 'D':
    iVar2 = 3;
    goto LAB_10036ae4;
  default:
    goto LAB_10036adf;
  case 'F':
    if (in_stack_00000030 == (char *)0x5) {
      return (float10)0.0;
    }
    in_stack_00000030 = (char *)0x3f800000;
    in_stack_ffffffa4 = 1.0;
    iVar2 = 2;
    break;
  case 'G':
    goto LAB_10036adf;
  case 'M':
LAB_10036adf:
    iVar2 = 2;
    goto LAB_10036ae4;
  case 'P':
  case 'Y':
    in_stack_00000030 = (char *)0x3f4ccccd;
    iVar2 = 3;
    break;
  case 'S':
    iVar2 = 4;
    goto LAB_10036ae4;
  case 'T':
    in_stack_00000030 = (char *)0x3f4ccccd;
    iVar2 = 4;
    break;
  case 'V':
    in_stack_00000030 = (char *)0x3f000000;
    iVar2 = 2;
    break;
  case 'W':
    iVar2 = 3;
LAB_10036ae4:
    in_stack_00000030 = (char *)0x3f666666;
  }
  if (piVar5 != (int *)0x0) {
    iVar4 = 0xf;
    bVar7 = true;
    pcVar9 = gpGlobals->pStringBase + *(int *)piVar5[1];
    pcVar6 = s_func_breakable_10096ee4;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = *pcVar9 == *pcVar6;
      pcVar9 = pcVar9 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    param_1 = param_5;
    if (bVar7) goto LAB_10036bf0;
  }
  if (((cVar1 == 'P') && (*(float *)(param_1 + 0x10) != 1.0)) &&
     (iVar4 = (*g_engfuncs.pfnRandomLong)(0,1), iVar4 != 0)) {
    UTIL_Sparks((undefined4 *)(param_1 + 0x14));
    (*g_engfuncs.pfnRandomFloat)(0.7,1.0);
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar4 == 0) {
      pcVar9 = s_buttons_spark5_wav_1009137c;
    }
    else {
      if (iVar4 != 1) goto LAB_10036bf0;
      pcVar9 = s_buttons_spark6_wav_10091368;
    }
    uVar11 = 100;
    uVar10 = 0;
    in_stack_ffffffa4 = 0.8;
    peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    UTIL_EmitAmbientSound
              (peVar3,(undefined4 *)pcVar9,in_stack_00000030,in_stack_ffffffa4,uVar10,uVar11,
               in_stack_ffffffb0);
    in_stack_ffffffa0 = in_stack_00000030;
  }
LAB_10036bf0:
  peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  iVar4 = (*g_engfuncs.pfnRandomLong)(0,0xf);
  iVar4 = iVar4 + 0x60;
  fVar8 = 0.0;
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,iVar2 + -1);
  UTIL_EmitAmbientSound
            (peVar3,(undefined4 *)(param_1 + 0x14),(char *)auStack_2c[iVar2],fVar8,iVar4,
             in_stack_ffffffa0,in_stack_ffffffa4);
  return (float10)in_stack_0000002c;
}

/* 10037080  GetClassPtr<CAmbientGeneric>  (79 bytes)
 * undefined GetClassPtr<CAmbientGeneric>(int param_1)
 */
void __cdecl GetClassPtr<CAmbientGeneric>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xc4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CAmbientGeneric::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100370e0  GetClassPtr<CEnvSound>  (76 bytes)
 * undefined GetClassPtr<CEnvSound>(int param_1)
 * called by: FEnvSoundInRange
 */
void __cdecl GetClassPtr<CEnvSound>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CEnvSound::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10037130  GetClassPtr<CSpeaker>  (76 bytes)
 * undefined GetClassPtr<CSpeaker>(int param_1)
 */
void __cdecl GetClassPtr<CSpeaker>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CSpeaker::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100375e0  GetClassPtr<CSoundEnt>  (79 bytes)
 * undefined GetClassPtr<CSoundEnt>(int param_1)
 * called by: CWorld::Precache
 */
void __cdecl GetClassPtr<CSoundEnt>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x864),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CSoundEnt::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10037ac0  FireTargets  (164 bytes)
 * undefined FireTargets(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * called by: CBaseDelay::SUB_UseTargets, CBaseDoor::DoorHitBottom, CBaseDoor::DoorHitTop, CBaseEntity::SUB_UseTargets, CBasePlayer::UpdateClientData, CFuncPlat::HitBottom, CFuncPlat::HitTop, CFuncTrackTrain::DeadEnd, CFuncTrackTrain::Next, CFuncTrain::Wait, CGamePlayerZone::Use, CGunTarget::TakeDamage, ... (30 total)
 */
void __cdecl
FireTargets(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  edict_t *pEdictStartSearchAfter;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  pEdictStartSearchAfter = (edict_t *)0x0;
  if (param_1 != 0) {
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_Firing____s__10097434,param_1);
    while (pEdictStartSearchAfter =
                (*g_engfuncs.pfnFindEntityByString)
                          (pEdictStartSearchAfter,s_targetname_100915e4,(char *)param_1),
          pEdictStartSearchAfter != (edict_t *)0x0) {
      iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
      if (iVar2 == 0) {
        return;
      }
      piVar1 = pEdictStartSearchAfter->pvPrivateData;
      if ((piVar1 != (int *)0x0) && ((((int *)piVar1[1])[0x69] & 0x40000000U) == 0)) {
        (*g_engfuncs.pfnAlertMessage)
                  (at_aiconsole,s_Found___s__firing___s__1009741c,
                   gpGlobals->pStringBase + *(int *)piVar1[1],param_1);
        (**(code **)(*piVar1 + 0xc0))(in_stack_00000018,in_stack_0000001c,in_stack_00000020,param_5)
        ;
      }
    }
  }
  return;
}

/* 10037d40  SetMovedir  (258 bytes)
 * undefined SetMovedir(int param_1)
 * called by: CBaseButton::Spawn, CBaseDoor::Spawn, CBaseTrigger::InitTrigger, CBlood::Spawn, CFuncConveyor::Spawn, CGibShooter::Spawn, CMomentaryDoor::Spawn, CTriggerMonsterJump::Spawn
 */
void __cdecl SetMovedir(int param_1)

{
  globalvars_t *pgVar1;
  
  if (((*(float *)(param_1 + 0x50) == 0.0) && (*(int *)(param_1 + 0x54) == -0x40800000)) &&
     (*(float *)(param_1 + 0x58) == 0.0)) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  }
  else if (((*(float *)(param_1 + 0x50) == 0.0) && (*(int *)(param_1 + 0x54) == -0x40000000)) &&
          (*(float *)(param_1 + 0x58) == 0.0)) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0xbf800000;
  }
  else {
    FUN_10066df0();
    pgVar1 = gpGlobals;
    *(vec_t *)(param_1 + 0x44) = gpGlobals->v_forward[0];
    *(vec_t *)(param_1 + 0x48) = pgVar1->v_forward[1];
    *(vec_t *)(param_1 + 0x4c) = pgVar1->v_forward[2];
  }
  *(float *)(param_1 + 0x50) = DAT_1009f4a8;
  *(undefined4 *)(param_1 + 0x54) = DAT_1009f4ac;
  *(undefined4 *)(param_1 + 0x58) = DAT_1009f4b0;
  return;
}

/* 10038460  GetClassPtr<CNullEntity>  (76 bytes)
 * undefined GetClassPtr<CNullEntity>(int param_1)
 */
void __cdecl GetClassPtr<CNullEntity>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CNullEntity::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100384b0  GetClassPtr<CBaseDMStart>  (76 bytes)
 * undefined GetClassPtr<CBaseDMStart>(int param_1)
 */
void __cdecl GetClassPtr<CBaseDMStart>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBaseDMStart::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10038500  GetClassPtr<CBaseDelay>  (76 bytes)
 * undefined GetClassPtr<CBaseDelay>(int param_1)
 * called by: CBaseDelay::SUB_UseTargets
 */
void __cdecl GetClassPtr<CBaseDelay>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBaseDelay::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003a550  PlayCDTrack  (117 bytes)
 * undefined PlayCDTrack(int param_1)
 * called by: FUN_1003a5d0, FUN_1003a730
 */
void __cdecl PlayCDTrack(int param_1)

{
  edict_t *pEdict;
  int in_stack_00000008;
  char *pcVar1;
  char *pcVar2;
  char acStack_3c [60];
  
  pEdict = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
  if (pEdict != (edict_t *)0x0) {
    if ((-2 < in_stack_00000008) && (in_stack_00000008 < 0x1f)) {
      if (in_stack_00000008 == -1) {
        (*g_engfuncs.pfnClientCommand)(pEdict,s_cd_pause_10097934);
        return;
      }
      pcVar1 = acStack_3c;
      pcVar2 = s_cd_play__3d_10097924;
      FUN_1006e69a(pcVar1,(byte_conflict *)s_cd_play__3d_10097924);
      (*g_engfuncs.pfnClientCommand)(pEdict,acStack_3c,pcVar1,pcVar2,in_stack_00000008);
      return;
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,s_TriggerCDAudio___Track__d_out_of_100978fc);
  }
  return;
}

/* 1003cdd0  GetClassPtr<CFrictionModifier>  (76 bytes)
 * undefined GetClassPtr<CFrictionModifier>(int param_1)
 */
void __cdecl GetClassPtr<CFrictionModifier>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFrictionModifier::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003ce30  GetClassPtr<CAutoTrigger>  (76 bytes)
 * undefined GetClassPtr<CAutoTrigger>(int param_1)
 */
void __cdecl GetClassPtr<CAutoTrigger>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,100), peVar1 = (entvars_t *)param_1,
        puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CAutoTrigger::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003ce90  GetClassPtr<CTriggerRelay>  (76 bytes)
 * undefined GetClassPtr<CTriggerRelay>(int param_1)
 */
void __cdecl GetClassPtr<CTriggerRelay>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x60), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerRelay::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003cef0  GetClassPtr<CMultiManager>  (79 bytes)
 * undefined GetClassPtr<CMultiManager>(int param_1)
 * called by: CMultiManager::Clone
 */
void __cdecl GetClassPtr<CMultiManager>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x17c),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CMultiManager::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003cf50  GetClassPtr<CRenderFxManager>  (76 bytes)
 * undefined GetClassPtr<CRenderFxManager>(int param_1)
 */
void __cdecl GetClassPtr<CRenderFxManager>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CRenderFxManager::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003cfa0  GetClassPtr<CBaseTrigger>  (79 bytes)
 * undefined GetClassPtr<CBaseTrigger>(int param_1)
 */
void __cdecl GetClassPtr<CBaseTrigger>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBaseTrigger::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003cff0  GetClassPtr<CTriggerHurt>  (79 bytes)
 * undefined GetClassPtr<CTriggerHurt>(int param_1)
 */
void __cdecl GetClassPtr<CTriggerHurt>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerHurt::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003d040  GetClassPtr<CTriggerMonsterJump>  (79 bytes)
 * undefined GetClassPtr<CTriggerMonsterJump>(int param_1)
 */
void __cdecl GetClassPtr<CTriggerMonsterJump>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerMonsterJump::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003d090  GetClassPtr<CTriggerCDAudio>  (79 bytes)
 * undefined GetClassPtr<CTriggerCDAudio>(int param_1)
 */
void __cdecl GetClassPtr<CTriggerCDAudio>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerCDAudio::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003d0e0  GetClassPtr<CTargetCDAudio>  (76 bytes)
 * undefined GetClassPtr<CTargetCDAudio>(int param_1)
 */
void __cdecl GetClassPtr<CTargetCDAudio>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTargetCDAudio::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003d130  GetClassPtr<CTriggerMultiple>  (79 bytes)
 * undefined GetClassPtr<CTriggerMultiple>(int param_1)
 */
void __cdecl GetClassPtr<CTriggerMultiple>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerMultiple::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003d180  GetClassPtr<CTriggerOnce>  (79 bytes)
 * undefined GetClassPtr<CTriggerOnce>(int param_1)
 */
void __cdecl GetClassPtr<CTriggerOnce>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerOnce::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003d1d0  GetClassPtr<CTriggerCounter>  (79 bytes)
 * undefined GetClassPtr<CTriggerCounter>(int param_1)
 */
void __cdecl GetClassPtr<CTriggerCounter>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerCounter::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003d220  GetClassPtr<CTriggerVolume>  (76 bytes)
 * undefined GetClassPtr<CTriggerVolume>(int param_1)
 */
void __cdecl GetClassPtr<CTriggerVolume>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerVolume::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003d270  GetClassPtr<CFireAndDie>  (76 bytes)
 * undefined GetClassPtr<CFireAndDie>(int param_1)
 * called by: CChangeLevel::ChangeLevelNow
 */
void __cdecl GetClassPtr<CFireAndDie>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFireAndDie::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003d2d0  GetClassPtr<CChangeLevel>  (79 bytes)
 * undefined GetClassPtr<CChangeLevel>(int param_1)
 */
void __cdecl GetClassPtr<CChangeLevel>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x138),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CChangeLevel::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003d320  GetClassPtr<CLadder>  (79 bytes)
 * undefined GetClassPtr<CLadder>(int param_1)
 */
void __cdecl GetClassPtr<CLadder>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CLadder::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003d370  GetClassPtr<CTriggerPush>  (79 bytes)
 * undefined GetClassPtr<CTriggerPush>(int param_1)
 */
void __cdecl GetClassPtr<CTriggerPush>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerPush::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003d3c0  GetClassPtr<CTriggerTeleport>  (79 bytes)
 * undefined GetClassPtr<CTriggerTeleport>(int param_1)
 */
void __cdecl GetClassPtr<CTriggerTeleport>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerTeleport::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003d410  GetClassPtr<CTriggerSave>  (79 bytes)
 * undefined GetClassPtr<CTriggerSave>(int param_1)
 */
void __cdecl GetClassPtr<CTriggerSave>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerSave::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003d460  GetClassPtr<CTriggerEndSection>  (79 bytes)
 * undefined GetClassPtr<CTriggerEndSection>(int param_1)
 */
void __cdecl GetClassPtr<CTriggerEndSection>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerEndSection::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003d4b0  GetClassPtr<CTriggerGravity>  (79 bytes)
 * undefined GetClassPtr<CTriggerGravity>(int param_1)
 */
void __cdecl GetClassPtr<CTriggerGravity>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerGravity::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003d500  GetClassPtr<CTriggerChangeTarget>  (76 bytes)
 * undefined GetClassPtr<CTriggerChangeTarget>(int param_1)
 */
void __cdecl GetClassPtr<CTriggerChangeTarget>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x60), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerChangeTarget::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003d560  GetClassPtr<CTriggerCamera>  (79 bytes)
 * undefined GetClassPtr<CTriggerCamera>(int param_1)
 */
void __cdecl GetClassPtr<CTriggerCamera>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x98), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerCamera::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100409a0  GetClassPtr<CTSDeadCorpse>  (76 bytes)
 * undefined GetClassPtr<CTSDeadCorpse>(int param_1)
 */
void __cdecl GetClassPtr<CTSDeadCorpse>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSDeadCorpse::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100421e0  GetClassPtr<CTSTrigger>  (76 bytes)
 * undefined GetClassPtr<CTSTrigger>(int param_1)
 */
void __cdecl GetClassPtr<CTSTrigger>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x60), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSTrigger::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10042240  GetClassPtr<CTSSlowMotion>  (79 bytes)
 * undefined GetClassPtr<CTSSlowMotion>(int param_1)
 */
void __cdecl GetClassPtr<CTSSlowMotion>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf8), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSSlowMotion::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100422a0  GetClassPtr<CTSSlowMotionPoint>  (79 bytes)
 * undefined GetClassPtr<CTSSlowMotionPoint>(int param_1)
 * called by: CTSSlowMotionPoint::CreateSlowMotionPoint
 */
void __cdecl GetClassPtr<CTSSlowMotionPoint>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xe8), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSSlowMotionPoint::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100422f0  GetClassPtr<CTSDMHill>  (76 bytes)
 * undefined GetClassPtr<CTSDMHill>(int param_1)
 */
void __cdecl GetClassPtr<CTSDMHill>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x70), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSDMHill::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10042350  GetClassPtr<CTSModel>  (79 bytes)
 * undefined GetClassPtr<CTSModel>(int param_1)
 */
void __cdecl GetClassPtr<CTSModel>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x150),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSModel::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100423a0  GetClassPtr<CTSMapGlobals>  (76 bytes)
 * undefined GetClassPtr<CTSMapGlobals>(int param_1)
 */
void __cdecl GetClassPtr<CTSMapGlobals>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSMapGlobals::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100434a0  TSHudMessageOne  (175 bytes)
 * undefined TSHudMessageOne(undefined1 param_1, undefined1 param_2, undefined1 param_3, undefined4 param_4, undefined4 param_5, char * param_6, int param_7)
 * called by: CBasePlayer::PreThink, CBasePlayer::UsePowerUp, CTSPowerUp::WaitTouch, FUN_100451c0, FUN_10066250, InformClientsOnWeaponsParams
 */
void __cdecl
TSHudMessageOne(undefined1 param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5,
               char *param_6,int param_7)

{
  uint in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000034;
  char local_40 [36];
  char acStack_1c [27];
  undefined1 local_1;
  
  if ((param_7 != 0) && (*param_6 != '\0')) {
    _strncpy(local_40,param_6,0x40);
    local_1 = 0;
    (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc7c,(float *)0x0,*(edict_t **)(param_7 + 0x208));
    (*g_engfuncs.pfnWriteByte)(param_5 & 0xff);
    (*g_engfuncs.pfnWriteByte)(param_7 & 0xff);
    (*g_engfuncs.pfnWriteByte)(in_stack_00000024 & 0xff);
    (*g_engfuncs.pfnWriteByte)(in_stack_0000002c);
    (*g_engfuncs.pfnWriteByte)(in_stack_00000034);
    (*g_engfuncs.pfnWriteString)(acStack_1c);
                    /* WARNING: Could not recover jumptable at 0x10043544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_engfuncs.pfnMessageEnd)();
    return;
  }
  return;
}

/* 10043550  TSHudMessageAll  (152 bytes)
 * undefined TSHudMessageAll(undefined1 param_1, undefined1 param_2, undefined1 param_3, undefined4 param_4, undefined4 param_5, char * param_6)
 * called by: CHalfLifeMultiplay::PlayerKilled, CTSBomb::Use, CTSDMHill::WaitTouch, CTSGameRules::CheckDeads, CTSGameRules::ResetRestartRound, CTSGameRules::RestartRound, CTSGameRules::SetPlayerTheOne, CTSGameRules::TeamWin, CTSGameRules::TheOneIsDead, CTSHack::Use, CTSSlowMotion::Use, CTSTeamEscape::WaitTouch, ... (17 total)
 */
void __cdecl
TSHudMessageAll(undefined1 param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5,
               char *param_6)

{
  uint in_stack_0000001c;
  uint in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000034;
  char local_40 [36];
  char acStack_1c [27];
  undefined1 local_1;
  
  if (*param_6 != '\0') {
    _strncpy(local_40,param_6,0x40);
    local_1 = 0;
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc7c,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(param_5 & 0xff);
    (*g_engfuncs.pfnWriteByte)(in_stack_0000001c & 0xff);
    (*g_engfuncs.pfnWriteByte)(in_stack_00000024 & 0xff);
    (*g_engfuncs.pfnWriteByte)(in_stack_0000002c);
    (*g_engfuncs.pfnWriteByte)(in_stack_00000034);
    (*g_engfuncs.pfnWriteString)(acStack_1c);
                    /* WARNING: Could not recover jumptable at 0x100435de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_engfuncs.pfnMessageEnd)();
    return;
  }
  return;
}

/* 10043cc0  GameDLLInit  (1849 bytes)
 * undefined GameDLLInit(char * param_1)
 * called by: CHalfLifeTeamplay::Think, FUN_10023a60
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall GameDLLInit(char *param_1)

{
  char cVar1;
  float fVar2;
  byte_conflict bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  float10 extraout_ST0;
  longlong lVar9;
  float fVar10;
  char acStack_30 [4];
  undefined4 uStack_2c;
  
  if (param_1[0x54bc] == -1) {
    param_1[0x54cd] = '\0';
    param_1[0x54cc] = '\0';
    iVar4 = UTIL_FindEntityByClassname(0,s_ts_mapglobals_10098284);
    if (iVar4 != 0) {
      uVar5 = FUN_10042190(iVar4);
      *(uint *)(param_1 + 0x54c0) = uVar5;
      param_1[0x54cd] = *(char *)(iVar4 + 0x58);
      param_1[0x54cc] = *(char *)(iVar4 + 0x54);
    }
    param_1[0x54bc] = '\x01';
  }
  if (_DAT_102e0100 == 0.0) {
    fVar10 = 1.0;
  }
  else {
    fVar10 = 2.0;
  }
  fVar2 = _DAT_10093c0c;
  if (fVar10 <= _DAT_10093c0c) {
    if (_DAT_102e0100 == 0.0) {
      fVar2 = 1.0;
    }
    else {
      fVar2 = 2.0;
    }
  }
  if (fVar2 <= 0.0) {
    fVar10 = 0.0;
  }
  else {
    if (_DAT_102e0100 == 0.0) {
      fVar2 = 1.0;
    }
    else {
      fVar2 = 2.0;
    }
    fVar10 = _DAT_10093c0c;
    if (fVar2 <= _DAT_10093c0c) {
      if (_DAT_102e0100 == 0.0) {
        fVar10 = 1.0;
      }
      else {
        fVar10 = 2.0;
      }
    }
  }
  if (fVar10 == 1.0) {
    fVar10 = 0.0;
  }
  else if (fVar10 != 0.0) {
    if (fVar10 != *(float *)(param_1 + 0x1ac)) {
      FUN_10045500(param_1,fVar10,0.0);
    }
    goto LAB_10043e14;
  }
  if (*(float *)(param_1 + 0x1bc) != fVar10) {
    param_1[0x1a8] = '\0';
    param_1[0x1a9] = '\0';
    param_1[0x1aa] = '\0';
    param_1[0x1ab] = '\0';
  }
LAB_10043e14:
  if ((*(float *)(param_1 + 0x1b0) != 0.0) && (*(float *)(param_1 + 0x1b0) < gpGlobals->time)) {
    param_1[0x1a8] = '\0';
    param_1[0x1a9] = '\0';
    param_1[0x1aa] = '\0';
    param_1[0x1ab] = '\0';
  }
  *(float *)(param_1 + 0x1bc) = fVar10;
  if (*(float *)(param_1 + 0x1a8) == 0.0) {
    if (*(float *)(param_1 + 0x1ac) != 0.0) {
      FUN_100455f0(param_1,0.0,'\0');
      param_1[0x1ac] = '\0';
      param_1[0x1ad] = '\0';
      param_1[0x1ae] = '\0';
      param_1[0x1af] = '\0';
      param_1[0x1b0] = '\0';
      param_1[0x1b1] = '\0';
      param_1[0x1b2] = '\0';
      param_1[0x1b3] = '\0';
    }
  }
  else {
    FUN_100455f0(param_1,*(float *)(param_1 + 0x1ac),'\0');
  }
  if ((*(float *)(param_1 + 0x54d4) != 0.0) && (*(float *)(param_1 + 0x54d4) < gpGlobals->time)) {
    CTSGameRules::CheckDeads(param_1);
  }
  cVar1 = *param_1;
  if ((cVar1 == '\0') || (cVar1 == '\x01')) {
    if (param_1[1] == -1) {
      param_1[1] = '\x01';
      for (iVar4 = UTIL_FindEntityByClassname(0,s_ts_powerup_10098278); iVar4 != 0;
          iVar4 = UTIL_FindEntityByClassname(iVar4,s_ts_powerup_10098278)) {
        param_1[1] = '\0';
      }
    }
    if ((_DAT_10093c20 != 1.0) && (param_1[1] == '\x01')) {
      if (gpGlobals->time <= *(float *)(param_1 + 4)) {
        if (21.0 < *(float *)(param_1 + 4) - gpGlobals->time) {
          param_1[4] = '\0';
          param_1[5] = '\0';
          param_1[6] = '\0';
          param_1[7] = '\0';
        }
      }
      else {
        (*g_engfuncs.pfnRandomFloat)(0.0,1.0);
        if (((float10)0.25 <= extraout_ST0) || (_DAT_10093bf8 == 1.0)) {
          iVar4 = (*g_engfuncs.pfnRandomLong)(0,8);
          bVar3 = (byte_conflict)iVar4;
        }
        else {
          bVar3 = '\0';
        }
        iVar4 = FUN_10059840(bVar3);
        if (iVar4 == 0) {
          *(float *)(param_1 + 4) = gpGlobals->time + 1.0;
        }
        else {
          *(float *)(param_1 + 4) = gpGlobals->time + 20.0;
        }
      }
    }
    if ((_DAT_102e00fc != 0.0) && (param_1[0x54ce] == '\0')) {
      CTSGameRules::SelectRandomTheOne(param_1);
    }
    if ((_DAT_10093ce8 == 0.0) || (DAT_100ac8c0 != '\0')) {
      if (*(float *)(param_1 + 0x1b8) < gpGlobals->time) {
        CTSGameRules::RespawnEntities((CTSGameRules *)param_1,0);
        *(float *)(param_1 + 0x1b8) = gpGlobals->time + 60.0;
      }
    }
    else {
      if ((*(float *)(param_1 + 0xc) < gpGlobals->time) && (*(float *)(param_1 + 0xc) != 0.0)) {
        CTSGameRules::RestartRound(param_1);
      }
      if ((*(float *)(param_1 + 8) < gpGlobals->time) && (*(float *)(param_1 + 0xc) == 0.0)) {
        CTSGameRules::CheckDeads(param_1);
      }
    }
  }
  else {
    if ((*(float *)(param_1 + 8) < gpGlobals->time) && (*(float *)(param_1 + 0xc) == 0.0)) {
      if (cVar1 == '\x02') {
        __ftol();
        CTSGameRules::TeamWin((CTSGameRules *)param_1,2);
      }
      else {
        CTSGameRules::RoundTimeLeft(&DAT_100ac8c0);
      }
    }
    if ((*(float *)(param_1 + 0xc) < gpGlobals->time) && (*(float *)(param_1 + 0xc) != 0.0)) {
      CTSGameRules::RestartRound(param_1);
    }
  }
  CTSGameRules::CheckVotes((int)param_1);
  if ((float)*(int *)(param_1 + 0x1c0) != _DAT_10093c48) {
    lVar9 = __ftol();
    *(int *)(param_1 + 0x1c0) = (int)lVar9;
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc9c,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnWriteShort)((uint)(*(int *)(param_1 + 0x1c0) != 0));
    uStack_2c = 0x1004419e;
    (*g_engfuncs.pfnMessageEnd)();
  }
  if (*(int *)(param_1 + 0x54b4) != 0) {
    FUN_1003f770(param_1 + 0x14b4);
  }
  if ((float)*(int *)(param_1 + 0x1a0) != _DAT_10093c5c) {
    lVar9 = __ftol();
    *(int *)(param_1 + 0x1a0) = (int)lVar9;
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc9c,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(1);
    (*g_engfuncs.pfnWriteShort)((uint)(*(int *)(param_1 + 0x1a0) != 0));
    uStack_2c = 0x1004420a;
    (*g_engfuncs.pfnMessageEnd)();
  }
  if ((float)*(int *)(param_1 + 0x1a4) != _DAT_10093c70) {
    lVar9 = __ftol();
    *(int *)(param_1 + 0x1a4) = (int)lVar9;
    Set_ammo_count((int)lVar9);
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc9c,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(2);
    (*g_engfuncs.pfnWriteShort)(*(int *)(param_1 + 0x1a4));
    uStack_2c = 0x10044263;
    (*g_engfuncs.pfnMessageEnd)();
  }
  if (_DAT_10093cfc == 5.0) {
    uVar5 = FUN_10043620();
  }
  else {
    lVar9 = __ftol();
    uVar5 = FUN_10043630((int)lVar9);
    uVar5 = uVar5 & *(uint *)(param_1 + 0x54c0);
  }
  *(uint *)(param_1 + 0x54c4) = uVar5;
  if (uVar5 != *(uint *)(param_1 + 0x54c8)) {
    *(uint *)(param_1 + 0x54c8) = uVar5;
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc9c,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(3);
    (*g_engfuncs.pfnWriteShort)(*(int *)(param_1 + 0x54c8));
    uStack_2c = 0x100442de;
    (*g_engfuncs.pfnMessageEnd)();
  }
  if (_DAT_10093d4c != 0.0) {
    lVar9 = __ftol();
    CTSGameRules::ResetRestartRound((CTSGameRules *)param_1,(int)lVar9);
    (*g_engfuncs.pfnCVarSetFloat)(s_restartround_10093d98,0.0);
  }
  iVar4 = _strncmp(PTR_DAT_10093d58,&DAT_1009f428,1);
  if (iVar4 != 0) {
    _strncpy(acStack_30,PTR_DAT_10093d58,0x40);
    uVar6 = adjust_weapon_value();
    if ((char)uVar6 != '\0') {
      InformClientsOnWeaponsParams(0);
    }
    (*g_engfuncs.pfnCVarSetString)(s_customweapons_10093d88,&DAT_1009f428);
  }
  if ((_DAT_102e00fc != 0.0) && (*(float *)(param_1 + 0x54d0) < gpGlobals->time)) {
    iVar4 = 0;
    if (0 < gpGlobals->maxClients) {
      do {
        piVar7 = (int *)UTIL_PlayerByIndex(iVar4);
        if (((piVar7 != (int *)0x0) && (iVar8 = (**(code **)(*piVar7 + 0xa8))(), iVar8 != 0)) &&
           (*(char *)((int)piVar7 + 0x731) != '\0')) goto LAB_100443de;
        iVar4 = iVar4 + 1;
      } while (iVar4 < gpGlobals->maxClients);
    }
    CTSGameRules::SelectRandomTheOne(param_1);
LAB_100443de:
    *(float *)(param_1 + 0x54d0) = gpGlobals->time + 10.0;
  }
  return;
}

/* 10045dd0  CalcMiniminVotants  (20 bytes)
 * int CalcMiniminVotants(int param_1)
 * called by: CTSGameRules::CheckVotes, CTSGameRules::PlayerVote
 */
int __cdecl CalcMiniminVotants(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 / 2;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  return iVar1;
}

/* 10047aa0  TSExplosion  (1371 bytes)
 * undefined TSExplosion(float param_1, float param_2, float param_3, int param_4, int param_5, float param_6, undefined4 param_7, float param_8, float param_9)
 * called by: CBreakable::Die, CM61Grenade::WaitThink, CTSBomb::WaitThink
 */
void __cdecl
TSExplosion(float param_1,float param_2,float param_3,int param_4,int param_5,float param_6,
           float param_7,float param_8,float param_9)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar5;
  longlong lVar6;
  ulonglong uVar7;
  float in_stack_00000030;
  float in_stack_00000034;
  float in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_00000040;
  float in_stack_00000044;
  float in_stack_0000004c;
  float in_stack_00000050;
  float *pfVar8;
  float fVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  int in_stack_ffffff94;
  int in_stack_ffffff98;
  float fVar17;
  float fVar18;
  float fVar19;
  int iStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  param_3 = param_3 + 1.0;
  UTIL_ScreenShake(&param_1,param_6,0x42a00000,0x3f800000,param_9 + param_9);
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc84,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteCoord)((float)param_5);
  (*g_engfuncs.pfnWriteCoord)(param_7);
  (*g_engfuncs.pfnWriteCoord)(param_9);
  lVar6 = __ftol();
  fVar14 = (float)lVar6;
  (*g_engfuncs.pfnWriteCoord)((float)(int)fVar14);
  (*g_engfuncs.pfnWriteCoord)(0.0);
  (*g_engfuncs.pfnWriteCoord)(0.0);
  pfVar10 = (float *)0x1;
  (*g_engfuncs.pfnWriteByte)(1);
  (*g_engfuncs.pfnMessageEnd)();
  fStack_34 = in_stack_00000044 / (in_stack_00000050 - in_stack_0000004c);
  iVar4 = in_stack_00000040;
  if (in_stack_00000040 == 0) {
    iVar4 = in_stack_0000003c;
  }
  uVar11 = 0x10047bac;
  piVar1 = (int *)FUN_10066c30(0,&stack0x00000030,in_stack_00000050);
  do {
    if (piVar1 == (int *)0x0) {
      uVar12 = 0x10047eb9;
      iVar2 = (*g_engfuncs.pfnRandomLong)(0x1e,0x2d);
      if (0 < iVar2) {
        do {
          (*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
          (*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
          fStack_44 = (float)extraout_ST0;
          (*g_engfuncs.pfnRandomFloat)(-0.3,1.0);
          fStack_38 = (float)extraout_ST0_00;
          fVar5 = SQRT((float10)fStack_40 * (float10)fStack_40 +
                       (float10)fStack_3c * (float10)fStack_3c +
                       extraout_ST0_00 * (float10)fStack_38);
          if (fVar5 == (float10)0.0) {
            fVar9 = 0.0;
            fVar17 = 0.0;
            fStack_18 = 1.0;
          }
          else {
            fStack_44 = (float)((float10)1.0 / fVar5);
            fVar9 = fStack_44 * fStack_40;
            fVar17 = fStack_44 * fStack_3c;
            fStack_18 = fStack_44 * fStack_38;
          }
          fVar9 = fVar9 * 2000.0;
          fVar17 = fVar17 * 2000.0;
          fVar18 = fStack_18 * 2000.0;
          fStack_10 = fVar9;
          FUN_1000a540(&stack0xffffff94,&stack0x00000050);
          CTSShrapnel::Create(iVar4,in_stack_ffffff94,in_stack_ffffff98,(int)fVar14,fVar9,fVar17,
                              fVar18);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      uVar7 = FUN_10043670();
      if ((int)uVar7 != 0) {
        uVar16 = 0;
        uVar15 = 0;
        fVar14 = 1.5;
        uVar13 = 0x3e19999a;
        FUN_1000a540(&stack0xffffff78,&stack0x00000038);
        CTSSlowMotionPoint::CreateSlowMotionPoint(pfVar10,uVar11,uVar12,uVar13,fVar14,uVar15,uVar16)
        ;
      }
      return;
    }
    if ((*(float *)(piVar1[1] + 0x16c) != 0.0) && (*(int *)(piVar1[1] + 0x170) != 2)) {
      iVar2 = (**(code **)(*piVar1 + 0x94))();
      if ((iVar2 != 0) && (iVar2 = (**(code **)(*piVar1 + 0xa8))(), iVar2 != 0)) {
        fStack_40 = 222.0;
        fStack_3c = 227.0;
        fStack_38 = 189.0;
        UTIL_ScreenFade(piVar1);
      }
      pfVar10 = (float *)(**(code **)(*piVar1 + 0xd4))();
      fStack_4c = *pfVar10;
      fStack_48 = pfVar10[1];
      fStack_44 = pfVar10[2] + 1.0;
      pfVar10 = &stack0x00000030;
      FUN_10067850();
      fVar14 = SQRT((in_stack_00000030 - fStack_4c) * (in_stack_00000030 - fStack_4c) +
                    (in_stack_00000034 - fStack_48) * (in_stack_00000034 - fStack_48) +
                    (in_stack_00000038 - fStack_44) * (in_stack_00000038 - fStack_44));
      fVar9 = in_stack_00000044;
      if ((fVar14 < in_stack_0000004c == (fVar14 == in_stack_0000004c)) &&
         (fVar9 = in_stack_00000044 - (fVar14 - in_stack_0000004c) * fStack_34, fVar9 <= 0.0)) {
        fVar9 = 0.0;
      }
      if ((fStack_14 == 1.0) || (param_3 == *(float *)(piVar1[1] + 0x208))) {
        FUN_1006a2f0();
        iStack_50 = *piVar1;
        pfVar8 = (float *)&stack0xffffff78;
        pvVar3 = (void *)FUN_10011f90(&fStack_4c,&param_8,&stack0x00000030);
        FUN_10011fc0(pvVar3,pfVar8);
        fVar14 = fVar9;
      }
      else {
        fVar17 = fStack_10;
        fVar18 = fStack_c;
        fVar19 = fStack_8;
        if (iStack_20 != 0) {
          fVar17 = in_stack_00000030;
          fVar18 = in_stack_00000034;
          fVar19 = in_stack_00000038;
        }
        pfVar10 = &fStack_4c;
        FUN_10067850();
        fVar14 = fVar9;
        if ((fStack_14 == 1.0) ||
           (fVar17 = SQRT((fStack_10 - fVar17) * (fStack_10 - fVar17) +
                          (fStack_c - fVar18) * (fStack_c - fVar18) +
                          (fStack_8 - fVar19) * (fStack_8 - fVar19)), fVar9 <= fVar17))
        goto LAB_10047e8c;
        FUN_1006a2f0();
        iStack_50 = *piVar1;
        pfVar8 = (float *)&stack0xffffff78;
        pvVar3 = (void *)FUN_10011f90(&fStack_4c,(float *)&param_5,&stack0x00000030);
        fVar14 = fVar9;
        FUN_10011fc0(pvVar3,pfVar8);
        fVar9 = fVar14 - fVar17;
      }
      (**(code **)(iStack_50 + 0x34))(iVar4,fVar9);
      FUN_1006a310(in_stack_0000003c,iVar4);
    }
LAB_10047e8c:
    uVar11 = 0x10047ea2;
    piVar1 = (int *)FUN_10066c30((int)piVar1,&stack0x00000030,in_stack_00000050);
  } while( true );
}

/* 10048ec0  GetClassPtr<CTSShrapnel>  (79 bytes)
 * undefined GetClassPtr<CTSShrapnel>(int param_1)
 * called by: CTSShrapnel::Create
 */
void __cdecl GetClassPtr<CTSShrapnel>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x8c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSShrapnel::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10048f20  GetClassPtr<CM61Grenade>  (79 bytes)
 * undefined GetClassPtr<CM61Grenade>(int param_1)
 * called by: CM61Grenade::CreateGrenade
 */
void __cdecl GetClassPtr<CM61Grenade>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x84), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CM61Grenade::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10048f70  GetClassPtr<CTSKnife>  (79 bytes)
 * undefined GetClassPtr<CTSKnife>(int param_1)
 * called by: CTSKnife::CreateKnife
 */
void __cdecl GetClassPtr<CTSKnife>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x94), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSKnife::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10049190  get_weapon_info  (37 bytes)
 * undefined4 * get_weapon_info(int param_1)
 * called by: CBasePlayer::Killed, CBasePlayer::PickUpWeapon, CTSGroundWeapon::Spawn, CTSWorldGun::BounceTouch, CTSWorldGun::Spawn, FUN_1004a410, FUN_1004ec80, FUN_1004ede0, FUN_1004f3c0, FUN_10055a40, FUN_10055e00, FUN_10056080, ... (19 total)
 */
undefined4 * __cdecl get_weapon_info(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x40)) {
    return &DAT_100bbea8 + param_1 * 0xfd;
  }
  return &DAT_100bbea8;
}

/* 100492a0  Set_ammo_count  (379 bytes)
 * undefined Set_ammo_count(int param_1)
 * called by: GameDLLInit, compile_ammo_info
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Set_ammo_count(int param_1)

{
  if (param_1 == 1) {
    _DAT_100b1edc = 0x5a;
    _DAT_100b1fbc = 0x15;
    _DAT_100b202c = 0x28;
    _DAT_100b1f14 = 0x30;
    _DAT_100b209c = 0x1e;
    _DAT_100b2064 = 10;
    _DAT_100b1f4c = 0x20;
    _DAT_100b20d4 = 0x22;
    _DAT_100b2144 = 0xf;
    _DAT_100b1f84 = 0x3c;
    _DAT_100b1ff4 = 0x3c;
    return;
  }
  if (param_1 != 2) {
    if (param_1 != 3) {
      _DAT_100b1edc = 0xd2;
      _DAT_100b202c = 200;
      _DAT_100b1f14 = 200;
      _DAT_100b1fbc = 0x46;
      _DAT_100b209c = 100;
      _DAT_100b2064 = 0x14;
      _DAT_100b1f4c = 0x3c;
      _DAT_100b20d4 = 0x96;
      _DAT_100b2144 = 0x32;
      _DAT_100b1f84 = 0x5a;
      _DAT_100b1ff4 = 0x5a;
      return;
    }
    _DAT_100b1edc = 0;
    _DAT_100b1fbc = 0;
    _DAT_100b202c = 0;
    _DAT_100b1f14 = 0;
    _DAT_100b209c = 0;
    _DAT_100b2064 = 0;
    _DAT_100b1f4c = 0;
    _DAT_100b20d4 = 0;
    _DAT_100b2144 = 0;
    _DAT_100b1f84 = 0;
    _DAT_100b1ff4 = 0;
    return;
  }
  _DAT_100b1edc = 0x1e;
  _DAT_100b1f84 = 0x1e;
  _DAT_100b1ff4 = 0x1e;
  _DAT_100b1fbc = 7;
  _DAT_100b202c = 0x14;
  _DAT_100b1f14 = 0x10;
  _DAT_100b209c = 0xf;
  _DAT_100b2064 = 5;
  _DAT_100b1f4c = 0x10;
  _DAT_100b20d4 = 0x11;
  _DAT_100b2144 = 5;
  return;
}

/* 10049420  compile_ammo_info  (1126 bytes)
 * undefined compile_ammo_info(void)
 * called by: FUN_10049890
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compile_ammo_info(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = 0;
  puVar4 = &DAT_100b1e98;
  for (iVar3 = 0xe0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  _DAT_100b1ed0 = 0x3ecccccd;
  _DAT_100b1ed4 = 0x32;
  _DAT_100b1ed8 = 1;
  _DAT_100b1ee0 = 0x1e;
  _DAT_100b1ee4 = 0x2000;
  _DAT_100b1ee8 = 0x3e4ccccd;
  _DAT_100b1eec = 0x2d;
  _DAT_100b1ef0 = 0x50;
  _DAT_100b1ef4 = 0x14a;
  do {
    pcVar1 = &DAT_100986c8 + iVar2;
    (&DAT_100b1ef8)[iVar2] = *pcVar1;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  _DAT_100b1fb0 = 0x3e99999a;
  _DAT_100b1fb4 = 0x46;
  _DAT_100b1fb8 = 1;
  _DAT_100b1fc0 = 10;
  _DAT_100b1fc4 = 0x2000;
  _DAT_100b1fc8 = 0x3f000000;
  _DAT_100b1fcc = 0x4d;
  _DAT_100b1fd0 = 0x5a;
  _DAT_100b1fd4 = 0x1e0;
  iVar2 = 0;
  do {
    pcVar1 = &DAT_100986c0 + iVar2;
    (&DAT_100b1fd8)[iVar2] = *pcVar1;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  _DAT_100b2020 = 0x3f000000;
  _DAT_100b2024 = 0x78;
  _DAT_100b2028 = 1;
  _DAT_100b2030 = 0x14;
  _DAT_100b2034 = 0x2000;
  _DAT_100b2038 = 0x3f800000;
  _DAT_100b203c = 0x23;
  _DAT_100b2040 = 100;
  _DAT_100b2044 = 0x2da;
  iVar2 = 0;
  do {
    pcVar1 = &DAT_100986b4 + iVar2;
    (&DAT_100b2048)[iVar2] = *pcVar1;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  _DAT_100b1f08 = 0x3ecccccd;
  _DAT_100b1f0c = 0x3c;
  _DAT_100b1f10 = 1;
  _DAT_100b1f18 = 0xc;
  _DAT_100b1f1c = 0x2000;
  _DAT_100b1f20 = 0x3e4ccccd;
  _DAT_100b1f24 = 0x37;
  _DAT_100b1f28 = 0x5a;
  _DAT_100b1f2c = 0x118;
  iVar2 = 0;
  do {
    pcVar1 = &DAT_100986ac + iVar2;
    (&DAT_100b1f30)[iVar2] = *pcVar1;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  _DAT_100b2090 = 0x3e99999a;
  _DAT_100b2094 = 0x46;
  _DAT_100b2098 = 1;
  _DAT_100b20a0 = 0xf;
  _DAT_100b20a4 = 0x2000;
  _DAT_100b20a8 = 0x3f000000;
  _DAT_100b20ac = 0x3c;
  _DAT_100b20b0 = 0x5a;
  _DAT_100b20b4 = 0x1c2;
  iVar2 = 0;
  do {
    pcVar1 = s_10mm_AUTO_100986a0 + iVar2;
    (&DAT_100b20b8)[iVar2] = *pcVar1;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  _DAT_100b1f78 = 0x3e99999a;
  _DAT_100b1f7c = 0x50;
  _DAT_100b1f80 = 2;
  _DAT_100b1f88 = 0x1e;
  _DAT_100b1f8c = 0x2000;
  _DAT_100b1f90 = 0x3f666666;
  _DAT_100b1f94 = 0x3c;
  _DAT_100b1f98 = 0x96;
  _DAT_100b1f9c = 900;
  iVar2 = 0;
  do {
    pcVar1 = s_5_56_Nato_10098694 + iVar2;
    (&DAT_100b1fa0)[iVar2] = *pcVar1;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  _DAT_100b1fe8 = 0x3e4ccccd;
  _DAT_100b1fec = 100;
  _DAT_100b1ff0 = 2;
  _DAT_100b1ff8 = 0x1e;
  _DAT_100b1ffc = 0x2000;
  _DAT_100b2000 = 0x3f333333;
  _DAT_100b2004 = 0x46;
  _DAT_100b2008 = 0xaa;
  _DAT_100b200c = 0x316;
  iVar2 = 0;
  do {
    pcVar1 = &DAT_10098688 + iVar2;
    (&DAT_100b2010)[iVar2] = *pcVar1;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  _DAT_100b2058 = 0x3dcccccd;
  _DAT_100b205c = 500;
  _DAT_100b2060 = 2;
  _DAT_100b2068 = 5;
  _DAT_100b206c = 0x2000;
  _DAT_100b2070 = 0x3f800000;
  _DAT_100b2074 = 0x96;
  _DAT_100b2078 = 200;
  _DAT_100b207c = 1000;
  iVar2 = 0;
  do {
    pcVar1 = &DAT_10098680 + iVar2;
    (&DAT_100b2080)[iVar2] = *pcVar1;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  _DAT_100b1f48 = 2;
  _DAT_100b1f40 = 0x3e99999a;
  _DAT_100b1f44 = 0x78;
  _DAT_100b1f50 = 8;
  _DAT_100b1f54 = 0x2000;
  _DAT_100b1f58 = 0;
  _DAT_100b1f5c = 0x12;
  _DAT_100b1f60 = 0x5a;
  _DAT_100b1f64 = 0x15e;
  iVar2 = 0;
  do {
    pcVar1 = s_SHELLS_10098678 + iVar2;
    (&DAT_100b1f68)[iVar2] = *pcVar1;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  _DAT_100b20c8 = 0x3f000000;
  _DAT_100b20cc = 100;
  _DAT_100b20d0 = 1;
  _DAT_100b20d8 = 0x11;
  _DAT_100b20dc = 0x2000;
  _DAT_100b20e0 = 0x3d4ccccd;
  _DAT_100b20e4 = 0x17;
  _DAT_100b20e8 = 0x46;
  _DAT_100b20ec = 0x15e;
  iVar2 = 0;
  do {
    pcVar1 = &DAT_10098670 + iVar2;
    (&DAT_100b20f0)[iVar2] = *pcVar1;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  _DAT_100b2148 = 5;
  _DAT_100b2140 = 1;
  _DAT_100b213c = 0x96;
  _DAT_100b2138 = 0x3e99999a;
  _DAT_100b214c = 0x2000;
  _DAT_100b2150 = 0x3f400000;
  _DAT_100b2154 = 0xa0;
  _DAT_100b2158 = 0x14;
  _DAT_100b215c = 400;
  iVar2 = 0;
  do {
    pcVar1 = s__454_Casull_10098664 + iVar2;
    (&DAT_100b2160)[iVar2] = *pcVar1;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  Set_ammo_count(0);
  return;
}

/* 1004ed60  GetClassPtr<CTSGun>  (79 bytes)
 * undefined GetClassPtr<CTSGun>(int param_1)
 */
void __cdecl GetClassPtr<CTSGun>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xdb4),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSGun::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10051f30  GetClassPtr<CTSObjectiveManager>  (79 bytes)
 * undefined GetClassPtr<CTSObjectiveManager>(int param_1)
 */
void __cdecl GetClassPtr<CTSObjectiveManager>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x90), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSObjectiveManager::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10051f80  GetClassPtr<CTSObjectivePointer>  (76 bytes)
 * undefined GetClassPtr<CTSObjectivePointer>(int param_1)
 */
void __cdecl GetClassPtr<CTSObjectivePointer>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSObjectivePointer::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10051fd0  GetClassPtr<CTSWinGiver>  (76 bytes)
 * undefined GetClassPtr<CTSWinGiver>(int param_1)
 */
void __cdecl GetClassPtr<CTSWinGiver>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x6c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSWinGiver::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10052020  GetClassPtr<CTSBomb>  (76 bytes)
 * undefined GetClassPtr<CTSBomb>(int param_1)
 */
void __cdecl GetClassPtr<CTSBomb>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x78), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSBomb::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10052080  GetClassPtr<CTSHack>  (76 bytes)
 * undefined GetClassPtr<CTSHack>(int param_1)
 */
void __cdecl GetClassPtr<CTSHack>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x70), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSHack::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100520e0  GetClassPtr<CTSTeamEscape>  (79 bytes)
 * undefined GetClassPtr<CTSTeamEscape>(int param_1)
 */
void __cdecl GetClassPtr<CTSTeamEscape>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xe8), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSTeamEscape::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100599d0  PlayerAddPowerUp  (452 bytes)
 * undefined4 PlayerAddPowerUp(void * param_1, uint param_2, int param_3)
 * called by: CTSPowerUp::WaitTouch
 */
undefined4 __cdecl PlayerAddPowerUp(void *param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if ((char)param_2 < '\0') {
    *(float *)(*(int *)((int)param_1 + 4) + 0x1bc) =
         *(float *)(param_3 + 0x7c) + *(float *)(*(int *)((int)param_1 + 4) + 0x1bc);
    iVar1 = *(int *)((int)param_1 + 4);
    if (100.0 <= *(float *)(iVar1 + 0x1bc)) {
      *(undefined4 *)(iVar1 + 0x1bc) = 0x42c80000;
    }
    else {
      *(undefined4 *)(iVar1 + 0x1bc) = *(undefined4 *)(iVar1 + 0x1bc);
    }
  }
  else if ((param_2 & 4) == 0) {
    if ((param_2 & 0x100) == 0) {
      if ((param_2 & 0x40) == 0) {
        if ((param_2 & 0x20) == 0) {
          *(undefined4 *)((int)param_1 + 0x69c) = 0;
          *(uint *)((int)param_1 + 0x6a0) = param_2;
          *(undefined4 *)((int)param_1 + 0x6a4) = 0;
          *(undefined4 *)((int)param_1 + 0x6a8) = *(undefined4 *)(param_3 + 0x80);
        }
        else {
          iVar1 = CBasePlayer::PickUpWeapon(param_1,0x18,(undefined4 *)0x0,0,'\0');
          if (iVar1 == 0) {
            return 0;
          }
        }
      }
      else {
        if (*(float *)(*(int *)((int)param_1 + 4) + 0x160) < 150.0) {
          *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x160) = 0x43160000;
        }
        *(float *)((int)param_1 + 0x6b4) = gpGlobals->time + 1.0;
      }
    }
    else if (*(char *)((int)param_1 + 0x6c7) == '\0') {
      *(undefined1 *)((int)param_1 + 0x6c7) = 1;
      (*g_engfuncs.pfnSetPhysicsKeyValue)
                (*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208),&DAT_10091cdc,&DAT_10091ce0);
      (*g_engfuncs.pfnMessageBegin)
                (1,DAT_100cbc68,(float *)0x0,*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208));
      (*g_engfuncs.pfnWriteShort)(0x100);
      (*g_engfuncs.pfnWriteByte)(0);
      (*g_engfuncs.pfnMessageEnd)();
    }
  }
  else if (*(char *)((int)param_1 + 0x6c6) == '\0') {
    *(undefined1 *)((int)param_1 + 0x6c6) = 1;
    (*g_engfuncs.pfnMessageBegin)
              (1,DAT_100cbc68,(float *)0x0,*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208));
    (*g_engfuncs.pfnWriteShort)(4);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnMessageEnd)();
  }
  EMIT_SOUND_DYN(*(void **)((int)param_1 + 4),
                 *(undefined4 *)((int)*(void **)((int)param_1 + 4) + 0x208),3,
                 s_items_gunpickup2_wav_10094490,0x3f800000,0x3f4ccccd,0,100);
  return 1;
}

/* 1005a360  GetClassPtr<CTSPowerUp>  (79 bytes)
 * undefined GetClassPtr<CTSPowerUp>(int param_1)
 * called by: CTSPowerUp::CreatePowerUp
 */
void __cdecl GetClassPtr<CTSPowerUp>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x88), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSPowerUp::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10063d90  InformClientsOnWeaponsParams  (88 bytes)
 * undefined InformClientsOnWeaponsParams(int param_1)
 * called by: FUN_100451c0, GameDLLInit
 */
void __cdecl InformClientsOnWeaponsParams(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    TSHudMessageAll(0x2d,0xc3,0x2d,1,100,s_This_server_is_using_custom_weap_10099654);
  }
  else {
    TSHudMessageOne(0x2d,0xc3,0x2d,1,100,s_This_server_is_using_custom_weap_10099654,
                    *(int *)(param_1 + 4));
  }
  iVar1 = 0;
  do {
    SendWeaponParams(iVar1,param_1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40);
  return;
}

/* 10063df0  SendWeaponParams  (213 bytes)
 * undefined SendWeaponParams(int param_1, int param_2)
 * called by: InformClientsOnWeaponsParams
 */
void __cdecl SendWeaponParams(int param_1,int param_2)

{
  char *pcVar1;
  undefined1 local_40 [16];
  char acStack_30 [47];
  undefined1 local_1;
  
  if ((-1 < param_1) && (param_1 < 0x40)) {
    pcVar1 = (char *)get_weapon_info(param_1);
    if (*pcVar1 != '\0') {
      get_weapon_info(param_1);
      get_weapon_info(param_1);
      get_weapon_info(param_1);
      FUN_1006e69a(local_40,(byte_conflict *)s__i__f__f__f_1009967c);
      local_1 = 0;
      if (param_2 != 0) {
        (*g_engfuncs.pfnMessageBegin)
                  (1,DAT_100cbcac,(float *)0x0,*(edict_t **)(*(int *)(param_2 + 4) + 0x208));
        (*g_engfuncs.pfnWriteString)(acStack_30);
                    /* WARNING: Could not recover jumptable at 0x10063e8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*g_engfuncs.pfnMessageEnd)();
        return;
      }
      (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbcac,(float *)0x0,(edict_t *)0x0);
      (*g_engfuncs.pfnWriteString)(acStack_30);
                    /* WARNING: Could not recover jumptable at 0x10063eba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_engfuncs.pfnMessageEnd)();
      return;
    }
  }
  return;
}

/* 10063ed0  adjust_weapon_value  (518 bytes)
 * undefined4 adjust_weapon_value(void)
 * called by: GameDLLInit
 */
undefined4 adjust_weapon_value(void)

{
  char cVar1;
  FILE *pFVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  void *this;
  void *extraout_ECX;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iStack_614;
  float fStack_610;
  float fStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined1 local_600 [256];
  CHAR aCStack_500 [256];
  char acStack_400 [1024];
  
  (*g_engfuncs.pfnGetGameDir)(local_600);
  FUN_1006e69a(aCStack_500,(byte_conflict *)s__s_s_s_100996bc);
  pFVar2 = (FILE *)FUN_1006f2ff(aCStack_500,&DAT_10099594);
  if (pFVar2 == (FILE *)0x0) {
    return 0;
  }
  pcVar3 = FUN_1006f26c(acStack_400,0x400,(undefined4 *)pFVar2);
  do {
    if (pcVar3 == (char *)0x0) {
      FUN_1006f1ef(pFVar2);
      iVar13 = 0;
      iVar12 = 0;
      iVar11 = 0;
      iVar4 = 0;
      puVar7 = UTIL_VarArgs((byte_conflict *)s_weapons_behaviour_changed_by__s_10099688);
      uVar8 = UTIL_ClientPrintAll(3,puVar7,iVar4,iVar11,iVar12,iVar13);
      DAT_100b1d98 = 1;
      return CONCAT31((int3)((uint)uVar8 >> 8),1);
    }
    local_600[0] = '\0';
    iVar4 = 0;
    do {
      pcVar3 = acStack_400 + iVar4;
      local_600[iVar4] = *pcVar3;
      iVar4 = iVar4 + 1;
    } while (*pcVar3 != '\0');
    uVar9 = 0xffffffff;
    pcVar3 = local_600;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    this = (void *)(~uVar9 - 1);
    iVar4 = ~uVar9 - 2;
    while ((-1 < iVar4 && (uVar9 = FUN_1006e8a7(this,(int)(char)local_600[iVar4]), uVar9 == 0))) {
      iVar4 = iVar4 + -1;
      this = extraout_ECX;
    }
    if (iVar4 + 1 < 0x100) {
      uVar10 = 0x100 - (iVar4 + 1);
      puVar6 = (undefined4 *)(local_600 + iVar4 + 1);
      for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    if ((((local_600[0] != '\0') &&
         (puVar5 = FUN_1006ead0((uint *)local_600,&DAT_100995a8), puVar5 == (uint *)0x0)) &&
        (FUN_1006ea8e(local_600,(byte_conflict *)s__i__f__f__f_100996ac), -1 < iStack_614)) &&
       ((iStack_614 < 0x40 && (pcVar3 = (char *)get_weapon_info(iStack_614), *pcVar3 != '\0')))) {
      fStack_60c = fStack_610;
      if (fStack_610 <= 0.001) {
        fStack_60c = 0.001;
      }
      puVar6 = get_weapon_info(iStack_614);
      puVar6[10] = fStack_60c;
      puVar6 = get_weapon_info(iStack_614);
      puVar6[0xc] = uStack_608;
      puVar6 = get_weapon_info(iStack_614);
      puVar6[0xd] = uStack_604;
    }
    pcVar3 = FUN_1006f26c(acStack_400,0x400,(undefined4 *)pFVar2);
  } while( true );
}

/* 100640e0  save_weapon_value  (331 bytes)
 * undefined4 save_weapon_value(void)
 */
undefined4 save_weapon_value(void)

{
  char cVar1;
  FILE *pFVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char local_148 [4];
  char acStack_144 [64];
  CHAR aCStack_104 [256];
  
  (*g_engfuncs.pfnGetGameDir)(local_148);
  FUN_1006e69a(aCStack_104,(byte_conflict *)s__s_s_s_100996bc);
  pFVar2 = (FILE *)FUN_1006f2ff(aCStack_104,&DAT_100996fc);
  if (pFVar2 == (FILE *)0x0) {
    return 0;
  }
  FUN_1006f562((int *)pFVar2,0,0);
  iVar7 = 0;
  do {
    pcVar3 = (char *)get_weapon_info(iVar7);
    if (*pcVar3 != '\0') {
      get_weapon_info(iVar7);
      FUN_1006e69a(acStack_144,(byte_conflict *)s____s_100996f4);
      uVar6 = 0xffffffff;
      pcVar3 = acStack_144;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_1006f429(acStack_144,1,~uVar6 - 1,(int *)pFVar2);
      get_weapon_info(iVar7);
      get_weapon_info(iVar7);
      get_weapon_info(iVar7);
      FUN_1006e69a(acStack_144,(byte_conflict *)s__i__f__f__f_100996e4);
      uVar6 = 0xffffffff;
      pcVar3 = acStack_144;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_1006f429(acStack_144,1,~uVar6 - 1,(int *)pFVar2);
    }
    iVar7 = iVar7 + 1;
    if (0x3f < iVar7) {
      FUN_1006f1ef(pFVar2);
      uVar9 = 0;
      uVar8 = 0;
      puVar4 = UTIL_VarArgs((byte_conflict *)s_weapons_behaviour_saved_to__s_100996c4);
      uVar5 = UTIL_ClientPrintAll(3,puVar4,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                                  (int)((ulonglong)uVar9 >> 0x20));
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  } while( true );
}

/* 100642e0  TSPrecache  (1524 bytes)
 * undefined TSPrecache(void)
 * called by: CWorld::Precache
 */
void TSPrecache(void)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  (*g_engfuncs.pfnPrecacheSound)(s_player_superjump_land_wav_10099388);
  (*g_engfuncs.pfnPrecacheSound)(s_player_land_wav_100994c4);
  (*g_engfuncs.pfnPrecacheSound)(s_player_dive_wav_100994d4);
  (*g_engfuncs.pfnPrecacheSound)(s_player_airwheel_wav_100994b0);
  (*g_engfuncs.pfnPrecacheSound)(s_player_headshot_wav_100992b4);
  (*g_engfuncs.pfnPrecacheSound)(s_player_headshot2_wav_100992c8);
  (*g_engfuncs.pfnPrecacheSound)(s_player_kevlarhit_wav_100987ac);
  (*g_engfuncs.pfnPrecacheSound)(s_player_block_wav_10098834);
  (*g_engfuncs.pfnPrecacheSound)(s_player_bodyhit1_wav_100992a0);
  (*g_engfuncs.pfnPrecacheSound)(s_player_bodyhit2_wav_1009928c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_bodyhit3_wav_10099278);
  (*g_engfuncs.pfnPrecacheSound)(s_player_bodyhit4_wav_10099264);
  (*g_engfuncs.pfnPrecacheSound)(s_player_die_wav_10099ba8);
  (*g_engfuncs.pfnPrecacheSound)(s_player_die1_wav_10099b98);
  (*g_engfuncs.pfnPrecacheSound)(s_player_die2_wav_10099b88);
  (*g_engfuncs.pfnPrecacheSound)(s_player_die3_wav_10099b78);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pain1_wav_10099b64);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pain2_wav_10099228);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pain3_wav_1009923c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pain4_wav_10099250);
  (*g_engfuncs.pfnPrecacheSound)(s_misc_hacking_wav_100990ec);
  (*g_engfuncs.pfnPrecacheSound)(s_misc_hacked_wav_100990dc);
  (*g_engfuncs.pfnPrecacheSound)(s_misc_failed_wav_10099b54);
  (*g_engfuncs.pfnPrecacheSound)(s_misc_successful_wav_10099b40);
  (*g_engfuncs.pfnPrecacheSound)(s_misc_gogogo_wav_10099b30);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_ric1_wav_10099b20);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_ric2_wav_10099b10);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_ric3_wav_10099b00);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_ric4_wav_10099af0);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_ric5_wav_10099ae0);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_cement_wav_10099acc);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_cement1_wav_10099ab8);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_cement2_wav_10099aa4);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_cement3_wav_10099a90);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_cement4_wav_10099a7c);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_cement5_wav_10099a68);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_cement6_wav_10099a54);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_gravel1_wav_10099a40);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_gravel2_wav_10099a2c);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_gravel3_wav_10099a18);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_gravel4_wav_10099a04);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_metal1_wav_10093224);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_metal2_wav_10093210);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_metal3_wav_100931fc);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_metal4_wav_100999f0);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_metal5_wav_100999dc);
  iVar5 = 0;
  do {
    pcVar2 = (char *)get_weapon_info(iVar5);
    if (*pcVar2 != '\0') {
      pbVar6 = &DAT_1009f428;
      pbVar3 = (byte *)(pcVar2 + 0xe0);
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_1006452f:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_10064534;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_1006452f;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_10064534:
      if (iVar4 != 0) {
        (*g_engfuncs.pfnPrecacheModel)(pcVar2 + 0xe0);
      }
      pbVar6 = &DAT_1009f428;
      pbVar3 = (byte *)(pcVar2 + 0x12a);
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_10064573:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_10064578;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_10064573;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_10064578:
      if (iVar4 != 0) {
        (*g_engfuncs.pfnPrecacheModel)(pcVar2 + 0x12a);
      }
      pbVar6 = &DAT_1009f428;
      pbVar3 = (byte *)(pcVar2 + 0x16a);
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_100645b7:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_100645bc;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_100645b7;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_100645bc:
      if (iVar4 != 0) {
        (*g_engfuncs.pfnPrecacheModel)(pcVar2 + 0x16a);
      }
      pbVar6 = &DAT_1009f428;
      pbVar3 = (byte *)(pcVar2 + 0x1aa);
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_100645fb:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_10064600;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_100645fb;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_10064600:
      if (iVar4 != 0) {
        (*g_engfuncs.pfnPrecacheModel)(pcVar2 + 0x1aa);
      }
      pbVar6 = &DAT_1009f428;
      pbVar3 = (byte *)(pcVar2 + 0x1ea);
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_1006463f:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_10064644;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_1006463f;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_10064644:
      if (iVar4 != 0) {
        (*g_engfuncs.pfnPrecacheModel)(pcVar2 + 0x1ea);
      }
      pbVar6 = &DAT_1009f428;
      pbVar3 = (byte *)(pcVar2 + 0x2de);
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_10064683:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_10064688;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_10064683;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_10064688:
      if (iVar4 != 0) {
        (*g_engfuncs.pfnPrecacheSound)(pcVar2 + 0x2de);
      }
      pbVar6 = &DAT_1009f428;
      pbVar3 = (byte *)(pcVar2 + 0x31e);
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_100646c7:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_100646cc;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_100646c7;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_100646cc:
      if (iVar4 != 0) {
        (*g_engfuncs.pfnPrecacheSound)(pcVar2 + 0x31e);
      }
    }
    iVar5 = iVar5 + 1;
    if (0x3f < iVar5) {
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_pistol_empty_wav_100999c0);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_insert_shell_wav_10098818);
      (*g_engfuncs.pfnPrecacheSound)(s_goslow_wav_100999b4);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_fire_inslow_wav_1009999c);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_sfire_inslow_wav_10099980);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_fire_inslow_sil_wav_10099964);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_mp5_boltslap_wav_10099948);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_mp5_boltpull_wav_1009992c);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_mp5_clipout_wav_10099914);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_mp5_clipin_wav_100998fc);
      (*g_engfuncs.pfnPrecacheSound)(s_player_closecombat_wav_100987c4);
      (*g_engfuncs.pfnPrecacheSound)(s_player_kungfuhit_wav_10098260);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_weapondrop_wav_100993f0);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_items_wav_100993dc);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_draw_wav_100998e8);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_switch_wav_10098798);
      (*g_engfuncs.pfnPrecacheSound)(s_items_9mmclip1_wav_100993c8);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_generic_reload_wav_100998cc);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_gr_pull_wav_100998b8);
      (*g_engfuncs.pfnPrecacheSound)(s_explo_explode_wav_100998a4);
      (*g_engfuncs.pfnPrecacheSound)(s_explo_explode1_wav_10099890);
      (*g_engfuncs.pfnPrecacheSound)(s_explo_explode2_wav_1009987c);
      (*g_engfuncs.pfnPrecacheSound)(s_explo_explode3_wav_10099868);
      (*g_engfuncs.pfnPrecacheSound)(s_explo_explode4_wav_10099854);
      (*g_engfuncs.pfnPrecacheSound)(s_explo_explode_slow_wav_1009983c);
      (*g_engfuncs.pfnPrecacheSound)(s_explo_explode1_slow_wav_10099824);
      (*g_engfuncs.pfnPrecacheSound)(s_explo_explode2_slow_wav_1009980c);
      (*g_engfuncs.pfnPrecacheSound)(s_explo_explode3_slow_wav_100997f4);
      (*g_engfuncs.pfnPrecacheSound)(s_explo_explode4_slow_wav_100997dc);
      (*g_engfuncs.pfnPrecacheModel)(s_models_generic_clip_mdl_100997c4);
      (*g_engfuncs.pfnPrecacheModel)(s_models_ammopack_mdl_100997b0);
      (*g_engfuncs.pfnPrecacheModel)(s_models_bullet_mdl_1009979c);
      (*g_engfuncs.pfnPrecacheModel)(s_models_long_bullet_mdl_10099784);
      (*g_engfuncs.pfnPrecacheModel)(s_models_pellet_mdl_10099770);
      UTIL_PrecacheOther(0x10099764);
      UTIL_PrecacheOther(0x10098618);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_knife_knife_miss_wav_100987f8);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_knife_knife_hit_wav_10098244);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_knife_knife_hitbody_wav_10098644);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_katana_hit_body_wav_100987dc);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_katana_miss1_wav_10099748);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_katana_miss_wav_10099730);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_katana_hit_wav_10099718);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_katana_hit1_wav_10099700);
      return;
    }
  } while( true );
}

/* 10064a70  RemoveEntityFromSlowedArray  (147 bytes)
 * undefined RemoveEntityFromSlowedArray(int param_1)
 * called by: CM61Grenade::WaitThink, CTSKnife::Use, CTSKnife::WaitThink, CTSShrapnel::WaitThink, CTSWorldGun::Fall, CTSWorldGun::GetWeapon, CTSWorldGun::WaitThink
 */
void __cdecl RemoveEntityFromSlowedArray(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  local_4 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar1 = (int *)UTIL_PlayerByIndex(local_4);
      if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xa8))(), iVar2 != 0)) {
        iVar2 = (int)(char)piVar1[0x9c];
        iVar3 = 0;
        if (0 < iVar2) {
          do {
            iVar2 = FUN_10063ca0((int)(piVar1 + 0x7c),iVar2,param_1);
            if (-1 < iVar2) {
              piVar1[iVar2 + 0x7c] = 0;
            }
            iVar2 = (int)(char)piVar1[0x9c];
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar2);
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 <= gpGlobals->maxClients);
  }
  return;
}

/* 10066460  GetClassPtr<CTSWorldGun>  (79 bytes)
 * undefined GetClassPtr<CTSWorldGun>(int param_1)
 * called by: CTSWorldGun::CreateWeapon
 */
void __cdecl GetClassPtr<CTSWorldGun>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xb8), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSWorldGun::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100664b0  GetClassPtr<CTSAmmoPack>  (79 bytes)
 * undefined GetClassPtr<CTSAmmoPack>(int param_1)
 * called by: CTSAmmoPack::CreateAmmoPack
 */
void __cdecl GetClassPtr<CTSAmmoPack>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x98), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSAmmoPack::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10066500  GetClassPtr<CTSGroundWeapon>  (79 bytes)
 * undefined GetClassPtr<CTSGroundWeapon>(int param_1)
 */
void __cdecl GetClassPtr<CTSGroundWeapon>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x94), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSGroundWeapon::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100669c0  UTIL_VecToAngles  (47 bytes)
 * undefined UTIL_VecToAngles(undefined4 * param_1, undefined4 param_2)
 * called by: CFuncTrackTrain::Find, CFuncTrackTrain::Next, CGib::StickyGibTouch, CInfoIntermission::Think, CTSKnife::BounceTouch, CTSShrapnel::BounceTouch, CTriggerCamera::FollowTarget, FUN_1001cff0, FUN_1004c6c0, FUN_1005e9a0, FUN_1005fa90, FUN_100616b0, ... (15 total)
 */
void __cdecl UTIL_VecToAngles(undefined4 *param_1,float *param_2)

{
  float local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (*g_engfuncs.pfnVecToAngles)(param_2,&local_c);
  *param_1 = local_c;
  param_1[1] = uStack_8;
  param_1[2] = uStack_4;
  return;
}

/* 10066a30  UTIL_EntitiesInBox  (245 bytes)
 * int UTIL_EntitiesInBox(int param_1, int param_2, float * param_3, float * param_4, uint param_5)
 * called by: CBaseMonster::Look, CBreakable::Die, CXenTree::HandleAnimEvent
 */
int __cdecl UTIL_EntitiesInBox(int param_1,int param_2,float *param_3,float *param_4,uint param_5)

{
  edict_t *peVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  peVar1 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
  iVar2 = 0;
  if (peVar1 == (edict_t *)0x0) {
    return 0;
  }
  if (1 < gpGlobals->maxEntities) {
    do {
      if (((peVar1->free == 0) &&
          ((((param_5 == 0 || (((peVar1->v).flags & param_5) != 0)) &&
            (*param_3 <= (peVar1->v).absmax[0])) &&
           ((param_3[1] <= (peVar1->v).absmax[1] && (param_3[2] <= (peVar1->v).absmax[2])))))) &&
         (((peVar1->v).absmin[0] <= *param_4 &&
          ((((peVar1->v).absmin[1] <= param_4[1] && ((peVar1->v).absmin[2] <= param_4[2])) &&
           (peVar1->pvPrivateData != (void *)0x0)))))) {
        iVar2 = iVar2 + 1;
        *(void **)(param_1 + -4 + iVar2 * 4) = peVar1->pvPrivateData;
        if (param_2 <= iVar2) {
          return iVar2;
        }
      }
      iVar3 = iVar3 + 1;
      peVar1 = peVar1 + 1;
    } while (iVar3 < gpGlobals->maxEntities);
  }
  return iVar2;
}

/* 10066cd0  UTIL_FindEntityByClassname  (24 bytes)
 * undefined UTIL_FindEntityByClassname(int param_1, undefined4 param_2)
 * called by: CTSDMHill::WaitTouch, CTSGameRules::CheckVotes, CTSGameRules::RespawnEntities, FUN_10043010, FUN_100449b0, FUN_100455f0, FUN_1004f350, FUN_100576d0, FUN_10059840, FUN_100604a0, FUN_10060950, FUN_100649c0, ... (14 total)
 */
void __cdecl UTIL_FindEntityByClassname(int param_1,undefined4 param_2)

{
  FUN_10066c80(param_1,s_classname_100912d4,param_2);
  return;
}

/* 10066cf0  UTIL_FindEntityByTargetname  (24 bytes)
 * undefined UTIL_FindEntityByTargetname(int param_1, undefined4 param_2)
 * called by: CGamePlayerTeam::TargetTeamName, FUN_10016810
 */
void __cdecl UTIL_FindEntityByTargetname(int param_1,undefined4 param_2)

{
  FUN_10066c80(param_1,s_targetname_100915e4,param_2);
  return;
}

/* 10066db0  UTIL_PlayerByIndex  (53 bytes)
 * int UTIL_PlayerByIndex(int param_1)
 * called by: CBasePlayer::AddPointsToTeam, CBasePlayer::Killed, CGamePlayerZone::Use, CHalfLifeMultiplay::InitHUD, CHalfLifeTeamplay::InitHUD, CTSGameRules::CheckDeads, CTSGameRules::RestartRound, CTSGameRules::SelectRandomTheOne, CTSGameRules::TeamWin, CTSObjectivePointer::Use, CTSSlowMotionPoint::WaitThink, FUN_10023a60, ... (31 total)
 */
int __cdecl UTIL_PlayerByIndex(int param_1)

{
  edict_t *peVar1;
  
  if ((0 < param_1) && (param_1 <= gpGlobals->maxClients)) {
    peVar1 = (*g_engfuncs.pfnPEntityOfEntIndex)(param_1);
    if ((peVar1 != (edict_t *)0x0) && (peVar1->free == 0)) {
      return (int)peVar1->pvPrivateData;
    }
  }
  return 0;
}

/* 10066e30  UTIL_MakeInvVectors  (125 bytes)
 * undefined UTIL_MakeInvVectors(undefined4 param_1, int param_2)
 * called by: CFuncTrackChange::UpdateTrain
 */
void __cdecl UTIL_MakeInvVectors(float *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  
  (*g_engfuncs.pfnMakeVectors)(param_1);
  pfVar1 = (float *)(param_2 + 0x40);
  *pfVar1 = *(float *)(param_2 + 0x40) * -1.0;
  fVar2 = *(float *)(param_2 + 0x2c);
  *(float *)(param_2 + 0x44) = *(float *)(param_2 + 0x44) * -1.0;
  *(float *)(param_2 + 0x48) = *(float *)(param_2 + 0x48) * -1.0;
  *(float *)(param_2 + 0x2c) = *pfVar1;
  *pfVar1 = fVar2;
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_2 + 0x34) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_2 + 0x38) = uVar3;
  return;
}

/* 10066eb0  UTIL_EmitAmbientSound  (150 bytes)
 * undefined UTIL_EmitAmbientSound(undefined4 param_1, undefined4 * param_2, char * param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * called by: CAmbientGeneric::Precache, CAmbientGeneric::RampThink, CAmbientGeneric::ToggleUse, CSpeaker::SpeakerThink, TEXTURETYPE_PlaySound
 */
void __cdecl
UTIL_EmitAmbientSound
          (edict_t *param_1,undefined4 *param_2,char *param_3,float param_4,float param_5,
          int param_6,int param_7)

{
  int iVar1;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_20 [32];
  
  local_2c = (float)*param_2;
  local_28 = param_2[1];
  local_24 = param_2[2];
  if ((param_3 == (char *)0x0) || (*param_3 != '!')) {
    (*g_engfuncs.pfnEmitAmbientSound)(param_1,&local_2c,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    iVar1 = SENTENCEG_Lookup(local_20,(int)param_3,local_20);
    if (-1 < iVar1) {
      (*g_engfuncs.pfnEmitAmbientSound)(param_1,&local_2c,local_20,param_4,param_5,param_6,param_7);
      return;
    }
  }
  return;
}

/* 10066f50  UTIL_ScreenShake  (356 bytes)
 * undefined UTIL_ScreenShake(float * param_1, float param_2, undefined4 param_3, undefined4 param_4, float param_5)
 * called by: CBasePlayer::PostThink, CShake::Use, TSExplosion
 */
void __cdecl
UTIL_ScreenShake(float *param_1,float param_2,undefined4 param_3,int param_4,float param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = FUN_100670c0();
  uVar6 = FUN_100670c0();
  param_4 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      iVar7 = UTIL_PlayerByIndex(param_4);
      if ((((iVar7 != 0) && (iVar1 = *(int *)(iVar7 + 4), (*(uint *)(iVar1 + 0x1a4) & 0x200) != 0))
          && ((param_5 < 0.0 != (param_5 == 0.0) ||
              (fVar2 = *param_1 - *(float *)(iVar1 + 8),
              fVar3 = param_1[1] - *(float *)(iVar1 + 0xc),
              fVar4 = param_1[2] - *(float *)(iVar1 + 0x10),
              SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4) < param_5)))) && (param_2 != 0.0))
      {
        FUN_100670c0();
        (*g_engfuncs.pfnMessageBegin)
                  (1,DAT_100cbbac,(float *)0x0,*(edict_t **)(*(int *)(iVar7 + 4) + 0x208));
        (*g_engfuncs.pfnWriteShort)((uint)param_2 & 0xffff);
        (*g_engfuncs.pfnWriteShort)(uVar5 & 0xffff);
        (*g_engfuncs.pfnWriteShort)(uVar6 & 0xffff);
        (*g_engfuncs.pfnMessageEnd)();
      }
      param_4 = param_4 + 1;
    } while (param_4 <= gpGlobals->maxClients);
  }
  return;
}

/* 10067220  UTIL_ScreenFadeAll  (100 bytes)
 * undefined UTIL_ScreenFadeAll(void)
 * called by: CFade::Use, CRevertSaved::Use
 */
void UTIL_ScreenFadeAll(void)

{
  int *piVar1;
  int iVar2;
  undefined2 local_c [6];
  
  FUN_10067110(local_c);
  iVar2 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar1 = (int *)UTIL_PlayerByIndex(iVar2);
      FUN_10067180(local_c,piVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 <= gpGlobals->maxClients);
  }
  return;
}

/* 10067290  UTIL_ScreenFade  (57 bytes)
 * undefined UTIL_ScreenFade(int * param_1)
 * called by: CBasePlayer::TSInit, CBasePlayer::TakeDamage, CFade::Use, TSExplosion
 */
void __cdecl UTIL_ScreenFade(int *param_1)

{
  undefined2 local_c [6];
  
  FUN_10067110(local_c);
  FUN_10067180(local_c,param_1);
  return;
}

/* 10067530  UTIL_ClientPrintAll  (121 bytes)
 * undefined UTIL_ClientPrintAll(undefined4 param_1, undefined4 param_2, int param_3, int param_4, int param_5, int param_6)
 * called by: CBasePlayer::PreThink, CBulletManager::FireBullet, CHalfLifeMultiplay::InitHUD, CHalfLifeMultiplay::PlayerKilled, CTSAmmoPack::CreateAmmoPack, CTSGameRules::CheckVotes, CTSGameRules::PlayerVote, CTSPowerUp::CreatePowerUp, CTSSlowMotionPoint::CreateSlowMotionPoint, CTSWorldGun::CreateWeapon, FUN_10062bb0, FUN_10063360, ... (14 total)
 */
void UTIL_ClientPrintAll(int param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

{
  char *in_stack_0000001c;
  char *in_stack_00000024;
  char *in_stack_0000002c;
  char *in_stack_00000030;
  char *in_stack_00000034;
  
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc24,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(param_5);
  (*g_engfuncs.pfnWriteString)(in_stack_0000001c);
  if (in_stack_00000024 != (char *)0x0) {
    (*g_engfuncs.pfnWriteString)(in_stack_00000024);
  }
  if (in_stack_0000002c != (char *)0x0) {
    (*g_engfuncs.pfnWriteString)(in_stack_0000002c);
  }
  if (in_stack_00000030 != (char *)0x0) {
    (*g_engfuncs.pfnWriteString)(in_stack_00000030);
  }
  if (in_stack_00000034 != (char *)0x0) {
    (*g_engfuncs.pfnWriteString)(in_stack_00000034);
  }
                    /* WARNING: Could not recover jumptable at 0x100675a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10067770  UTIL_ShowMessage  (72 bytes)
 * undefined UTIL_ShowMessage(undefined4 param_1, int * param_2)
 * called by: CBaseTrigger::ActivateMultiTrigger, CMessage::Use, UTIL_ShowMessageAll
 */
void __cdecl UTIL_ShowMessage(char *param_1,int *param_2)

{
  int iVar1;
  char *in_stack_00000014;
  
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0xac))();
    if (iVar1 != 0) {
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbbec,(float *)0x0,*(edict_t **)(param_2[1] + 0x208));
      (*g_engfuncs.pfnWriteString)(in_stack_00000014);
                    /* WARNING: Could not recover jumptable at 0x100677b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_engfuncs.pfnMessageEnd)();
      return;
    }
  }
  return;
}

/* 100677c0  UTIL_ShowMessageAll  (65 bytes)
 * undefined UTIL_ShowMessageAll(undefined4 param_1)
 * called by: CMessage::Use, CRevertSaved::MessageThink
 */
void __cdecl UTIL_ShowMessageAll(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar1 = (int *)UTIL_PlayerByIndex(iVar2);
      if (piVar1 != (int *)0x0) {
        UTIL_ShowMessage(param_1,piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= gpGlobals->maxClients);
  }
  return;
}

/* 10067b50  UTIL_VarArgs  (29 bytes)
 * undefined * UTIL_VarArgs(byte.conflict * param_1)
 * called by: CBasePlayer::PreThink, CHalfLifeMultiplay::InitHUD, CHalfLifeMultiplay::PlayerKilled, CHalfLifeTeamplay::Think, CTSBomb::Use, CTSDMHill::WaitTouch, CTSGameRules::CheckDeads, CTSGameRules::PlayerVote, CTSGameRules::SetPlayerTheOne, CTSGameRules::TheOneIsDead, CTSHack::Use, FUN_10023a60, ... (23 total)
 */
undefined * __cdecl UTIL_VarArgs(byte_conflict *param_1)

{
  FUN_1006f61b(&DAT_102df488,param_1,(undefined4 *)&stack0x00000008);
  return &DAT_102df488;
}

/* 10067bb0  UTIL_IsMasterTriggered  (114 bytes)
 * undefined4 UTIL_IsMasterTriggered(int param_1, undefined4 param_2)
 * called by: CBaseButton::ButtonActivate, CBaseButton::ButtonTouch, CBaseButton::TriggerAndWait, CBaseDMStart::IsTriggered, CBaseDoor::DoorActivate, CBaseDoor::DoorTouch, CBaseToggle::IsLockedByMaster, CBaseTrigger::ActivateMultiTrigger, CBaseTrigger::TeleportTouch, CFuncTank::StartControl, CRuleEntity::CanFireForActivator, CTriggerSave::SaveTouch
 */
undefined4 __cdecl UTIL_IsMasterTriggered(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  edict_t *pEdict;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 != 0) {
    pEdict = (*g_engfuncs.pfnFindEntityByString)
                       ((edict_t *)0x0,s_targetname_100915e4,gpGlobals->pStringBase + param_1);
    if (pEdict != (edict_t *)0x0) {
      iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
      if ((iVar3 != 0) && (piVar1 = pEdict->pvPrivateData, piVar1 != (int *)0x0)) {
        cVar2 = (**(code **)(*piVar1 + 0x20))();
        if (cVar2 < '\0') {
          uVar4 = (**(code **)(*piVar1 + 0x4c))();
          return uVar4;
        }
      }
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Master_was_null_or_not_a_master__1009a974);
  }
  return 1;
}

/* 10067c30  UTIL_ShouldShowBlood  (85 bytes)
 * undefined4 UTIL_ShouldShowBlood(int param_1)
 * called by: FUN_10067ca0, FUN_10067d50, FUN_10067ea0
 */
undefined4 __cdecl UTIL_ShouldShowBlood(int param_1)

{
  float10 fVar1;
  
  if (param_1 != -1) {
    if (param_1 == 0xf7) {
      fVar1 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_violence_hblood_1009a9a8);
      if (fVar1 != (float10)0.0) {
        return 1;
      }
    }
    else {
      fVar1 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_violence_ablood_1009a998);
      if (fVar1 != (float10)0.0) {
        return 1;
      }
    }
  }
  return 0;
}

/* 10068120  UTIL_Sparks  (65 bytes)
 * undefined UTIL_Sparks(undefined4 * param_1)
 * called by: CBreakable::TraceAttack, CShower::Think, DoSpark, FUN_10016860, TEXTURETYPE_PlaySound
 */
void UTIL_Sparks(undefined4 *param_1)

{
  (*g_engfuncs.pfnMessageBegin)(4,0x17,(float *)param_1,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(9);
  (*g_engfuncs.pfnWriteCoord)((float)*param_1);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[1]);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x1006815b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 100681d0  UTIL_TeamsMatch  (62 bytes)
 * undefined4 UTIL_TeamsMatch(char * param_1, byte.conflict * param_2)
 * called by: CGameTeamMaster::TeamMatch
 */
undefined4 __cdecl UTIL_TeamsMatch(char *param_1,byte_conflict *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*DAT_1009f494 + 0x20))();
  if (iVar1 == 0) {
    return 1;
  }
  if ((*param_1 != '\0') && (*param_2 != '\0')) {
    uVar2 = FUN_1007e860(param_1,(byte_conflict *)param_1,param_2);
    if (uVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

/* 10068750  UTIL_Remove  (52 bytes)
 * undefined UTIL_Remove(int param_1)
 * called by: CAutoTrigger::Think, CBaseDelay::SUB_UseTargets, CBaseEntity::Killed, CBasePlayerItem::DefaultTouch, CEnvExplosion::Smoke, CFireAndDie::Think, CFuncTankLaser::Activate, CFuncTrainControls::Find, CGameCounter::Use, CGameCounterSet::Use, CGamePlayerHurt::Use, CGamePlayerTeam::Use, ... (51 total)
 */
void __cdecl UTIL_Remove(int param_1)

{
  if (param_1 != 0) {
    FUN_100378e0(param_1);
    *(uint *)(*(int *)(param_1 + 4) + 0x1a4) = *(uint *)(*(int *)(param_1 + 4) + 0x1a4) | 0x40000000
    ;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1cc) = 0;
  }
  return;
}

/* 100687c0  UTIL_PrecacheOther  (115 bytes)
 * undefined UTIL_PrecacheOther(int param_1)
 * called by: CBreakable::Precache, CFuncTankRocket::Precache, ClientPrecache, TSPrecache, W_Precache
 */
void __cdecl UTIL_PrecacheOther(int param_1)

{
  edict_t *pEdict;
  int iVar1;
  edict_t *peVar2;
  
  pEdict = (*g_engfuncs.pfnCreateNamedEntity)(param_1 - (int)gpGlobals->pStringBase);
  if (pEdict == (edict_t *)0x0) {
LAB_100687ef:
    (*g_engfuncs.pfnAlertMessage)(at_console,s_NULL_Ent_in_UTIL_PrecacheOther_1009a9b8);
    return;
  }
  iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
  if (iVar1 == 0) goto LAB_100687ef;
  peVar2 = (pEdict->v).pContainingEntity;
  if (peVar2 == (edict_t *)0x0) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar2 == (edict_t *)0x0) goto LAB_10068827;
  }
  if (peVar2->pvPrivateData != (int *)0x0) {
    (**(code **)(*(int *)peVar2->pvPrivateData + 0x10))();
  }
LAB_10068827:
  (*g_engfuncs.pfnRemoveEntity)(pEdict);
  return;
}

/* 10068f30  EntvarsKeyvalue  (238 bytes)
 * undefined EntvarsKeyvalue(int param_1, int param_2)
 * called by: pfnKeyValue
 */
void __cdecl EntvarsKeyvalue(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *this;
  undefined4 *puVar4;
  uint uVar5;
  float10 fVar6;
  
  puVar4 = &DAT_1009a090;
  uVar5 = 0;
  do {
    uVar1 = FUN_1007e860((void *)puVar4[1],(void *)puVar4[1],*(byte_conflict **)(param_2 + 4));
    if (uVar1 == 0) {
      switch(*puVar4) {
      case 0:
      case 0xf:
        fVar6 = FUN_1006e0fb(this,*(byte_conflict **)(param_2 + 8));
        *(float *)(param_1 + puVar4[2]) = (float)fVar6;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      case 1:
      case 0x10:
      case 0x11:
        iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
        *(int *)(param_2 + puVar4[2]) = iVar2;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      default:
        (*g_engfuncs.pfnAlertMessage)(at_error,s_Bad_field_in_entity___1009aa34);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      case 7:
      case 8:
        FUN_10068210((void *)(puVar4[2] + param_1),puVar4[2] + param_1,*(char **)(param_2 + 8));
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      case 10:
        uVar3 = FUN_1006e1dd(this,*(byte_conflict **)(param_2 + 8));
        *(undefined4 *)(param_1 + puVar4[2]) = uVar3;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
    }
    uVar5 = uVar5 + 0x10;
    puVar4 = puVar4 + 4;
  } while (uVar5 < 0x560);
  return;
}

/* 1006a1f0  MaxAmmoCarry  (251 bytes)
 * undefined4 MaxAmmoCarry(int param_1)
 * called by: CWeaponBox::PackAmmo, CWeaponBox::Touch
 */
undefined4 __cdecl MaxAmmoCarry(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  bool bVar6;
  int local_4;
  
  local_4 = 0;
  puVar5 = &DAT_102dfb78;
  do {
    pbVar4 = (byte *)puVar5[-2];
    if (pbVar4 != (byte *)0x0) {
      pbVar2 = (byte *)(gpGlobals->pStringBase + param_1);
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_1006a23f:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_1006a244;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_1006a23f;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1006a244:
      if (iVar3 == 0) {
        return *(undefined4 *)(&DAT_102dfb74 + local_4 * 0x2c);
      }
    }
    pbVar4 = (byte *)*puVar5;
    if (pbVar4 != (byte *)0x0) {
      pbVar2 = (byte *)(gpGlobals->pStringBase + param_1);
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_1006a27a:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_1006a27f;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_1006a27a;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1006a27f:
      if (iVar3 == 0) {
        return *(undefined4 *)(&DAT_102dfb7c + local_4 * 0x2c);
      }
    }
    puVar5 = puVar5 + 0xb;
    local_4 = local_4 + 1;
    if (0x102e00f7 < (int)puVar5) {
      (*g_engfuncs.pfnAlertMessage)
                (at_console,s_MaxAmmoCarry___doesn_t_recognize_1009ae0c,
                 gpGlobals->pStringBase + param_1);
      return 0xffffffff;
    }
  } while( true );
}

/* 1006a5b0  UTIL_PrecacheOtherWeapon  (233 bytes)
 * undefined UTIL_PrecacheOtherWeapon(int param_1)
 * called by: W_Precache
 */
void __cdecl UTIL_PrecacheOtherWeapon(int param_1)

{
  int *piVar1;
  edict_t *pEdict;
  int iVar2;
  edict_t *peVar3;
  void *extraout_ECX;
  void *this;
  byte_conflict **ppbVar4;
  undefined4 *puVar5;
  int unaff_retaddr;
  byte_conflict *apbStack_20 [4];
  byte_conflict *pbStack_10;
  
  pEdict = (*g_engfuncs.pfnCreateNamedEntity)(param_1 - (int)gpGlobals->pStringBase);
  if (pEdict == (edict_t *)0x0) {
LAB_1006a5e3:
    (*g_engfuncs.pfnAlertMessage)(at_console,s_NULL_Ent_in_UTIL_PrecacheOtherWe_1009ae34);
    return;
  }
  iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
  if (iVar2 == 0) goto LAB_1006a5e3;
  peVar3 = (pEdict->v).pContainingEntity;
  if (peVar3 == (edict_t *)0x0) {
    peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar3 == (edict_t *)0x0) goto LAB_1006a688;
  }
  piVar1 = peVar3->pvPrivateData;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))();
    ppbVar4 = apbStack_20;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppbVar4 = (byte_conflict *)0x0;
      ppbVar4 = ppbVar4 + 1;
    }
    iVar2 = (**(code **)(*piVar1 + 0xfc))(apbStack_20);
    if (iVar2 != 0) {
      ppbVar4 = apbStack_20;
      puVar5 = &DAT_102dfb68 + unaff_retaddr * 0xb;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *ppbVar4;
        ppbVar4 = ppbVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      this = (void *)0x0;
      if ((apbStack_20[2] != (byte_conflict *)0x0) && (*apbStack_20[2] != '\0')) {
        FUN_1006a550((void *)0x0,apbStack_20[2]);
        this = extraout_ECX;
      }
      if ((pbStack_10 != (byte_conflict *)0x0) && (*pbStack_10 != '\0')) {
        FUN_1006a550(this,pbStack_10);
      }
    }
  }
LAB_1006a688:
  (*g_engfuncs.pfnRemoveEntity)(pEdict);
  return;
}

/* 1006a6a0  W_Precache  (507 bytes)
 * undefined W_Precache(void)
 * called by: CWorld::Precache
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void W_Precache(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_102dfb68;
  for (iVar1 = 0x160; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_102dfa60;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_102e00ec = 0;
  UTIL_PrecacheOther(0x100943fc);
  UTIL_PrecacheOther(0x10098284);
  UTIL_PrecacheOther(0x100982f4);
  UTIL_PrecacheOther(0x10099030);
  UTIL_PrecacheOther(0x100982c8);
  UTIL_PrecacheOther(0x10098110);
  UTIL_PrecacheOther(0x10098134);
  UTIL_PrecacheOther(0x10098170);
  UTIL_PrecacheOther(0x100981a4);
  UTIL_PrecacheOther(0x100982e4);
  UTIL_PrecacheOther(0x100982ec);
  UTIL_PrecacheOther(0x100982d4);
  UTIL_PrecacheOther(0x100981e0);
  FUN_10049890();
  UTIL_PrecacheOtherWeapon(0x100986dc);
  UTIL_PrecacheOther(0x10098278);
  UTIL_PrecacheOther(0x10098294);
  UTIL_PrecacheOther(0x10097fe4);
  DAT_102df074 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_lgtning_spr_10092ee8);
  (**(code **)(*DAT_1009f494 + 0x1c))();
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_zerogxplode_spr_1009af70);
  DAT_102dfa54 = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_WXplo1_spr_1009af5c);
  _DAT_102dfa40 = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_steam1_spr_1009af48);
  DAT_102dfa42 = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_bubble_spr_10092d18);
  DAT_102e00e8 = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_bloodspray_spr_1009af30);
  DAT_102dfa58 = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_blood_spr_1009af1c);
  DAT_102dfa44 = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(PTR_s_sprites_laserbeam_spr_1009ac60);
  _DAT_102dfa56 = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_laserdot_spr_1009af04);
  _DAT_102dfb60 = (undefined2)iVar1;
  (*g_engfuncs.pfnPrecacheModel)(s_models_grenade_mdl_10092ff8);
  (*g_engfuncs.pfnPrecacheModel)(s_sprites_explode1_spr_1009aeec);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_debris1_wav_1009aed8);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_debris2_wav_1009aec4);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_debris3_wav_1009aeb0);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_grenade_hit1_wav_1009ae94);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_grenade_hit2_wav_1009ae78);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_grenade_hit3_wav_1009ae5c);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_bullet_hit1_wav_10096f0c);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_bullet_hit2_wav_10096ef4);
  (*g_engfuncs.pfnPrecacheSound)(s_items_weapondrop1_wav_10099c20);
  return;
}

/* 1006bc90  GetClassPtr<CWeaponBox>  (79 bytes)
 * undefined GetClassPtr<CWeaponBox>(int param_1)
 */
void __cdecl GetClassPtr<CWeaponBox>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x170),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CWeaponBox::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1006c430  pfnSaveGlobalState  (90 bytes)
 * void pfnSaveGlobalState(SAVERESTOREDATA * param_1)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnSaveGlobalState(SAVERESTOREDATA *param_1)

{
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_1007ffb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_10068940(&param_1,param_1);
  uStack_4 = 0;
  FUN_1006c2c0(&DAT_102e00f4,&param_1);
  uStack_4 = 0xffffffff;
  FUN_10068950();
  ExceptionList = pvStack_c;
  return;
}

/* 1006c490  pfnRestoreGlobalState  (103 bytes)
 * void pfnRestoreGlobalState(SAVERESTOREDATA * param_1)
 */
void __cdecl pfnRestoreGlobalState(SAVERESTOREDATA *param_1)

{
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_1007ffd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10068940(local_18,param_1);
  local_10 = 1;
  local_14 = 0;
  local_4 = 0;
  FUN_1006c330(&DAT_102e00f4,local_18);
  local_4 = 0xffffffff;
  FUN_10068950();
  ExceptionList = local_c;
  return;
}

/* 1006c500  pfnResetGlobalState  (21 bytes)
 * void pfnResetGlobalState(void)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnResetGlobalState(void)

{
  FUN_1006c400((undefined4 *)&DAT_102e00f4);
  DAT_10095638 = 1;
  return;
}

/* 1006cc30  GetClassPtr<CDecal>  (76 bytes)
 * undefined GetClassPtr<CDecal>(int param_1)
 */
void __cdecl GetClassPtr<CDecal>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CDecal::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

