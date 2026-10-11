/* mp.dll - CHalfLifeTeamplay (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003ef00  CHalfLifeTeamplay::CHalfLifeTeamplay  (609 bytes)
 * undefined4 * CHalfLifeTeamplay(undefined4 * param_1)
 * called by: InstallGameRules
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall CHalfLifeTeamplay::CHalfLifeTeamplay(undefined4 *param_1)

{
  char cVar1;
  edict_t *peVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char local_800 [2048];
  
  CHalfLifeMultiplay::CHalfLifeMultiplay(param_1);
  *param_1 = &vftable;
  CTSGameRules::Init(&TSGameRules);
  CXenSpore::Touch();
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  puVar8 = &DAT_100c0548;
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar8 = &DAT_100c0748;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  pcVar11 = (char *)(param_1 + 3);
  DAT_100c07d0 = 0;
  iVar3 = -1;
  *pcVar11 = '\0';
  local_800[0] = '\0';
  pcVar6 = (char *)&DAT_102ef3bc;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    uVar4 = 0xffffffff;
    pcVar6 = (char *)&DAT_102ef3bc;
    do {
      pcVar7 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar7 + -uVar4;
    pcVar7 = local_800;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_100a9398;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_102ef3bc;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  peVar2 = (*g_engfuncs.pfnPEntityOfEntIndex)(0);
  if ((((peVar2 != (edict_t *)0x0) && (iVar3 = (peVar2->v).team, iVar3 != 0)) &&
      (_DAT_1009ec84 != 0.0)) && (pcVar6 = gpGlobals->pStringBase + iVar3, pcVar6 != (char *)0x0)) {
    iVar3 = -1;
    pcVar7 = pcVar6;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      _strncpy(pcVar11,pcVar6,0x200);
    }
  }
  if ((g_teamplay != 2) && (g_teamplay != 3)) {
    iVar3 = -1;
    pcVar6 = pcVar11;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (iVar3 == -2) {
      _strncpy(pcVar11,PTR_s_hitman_gordon_1009ec4c,0x200);
    }
    iVar3 = -1;
    pcVar6 = local_800;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (iVar3 == -2) {
      _strncpy(local_800,PTR_DAT_1009ec64,0x800);
    }
  }
  iVar3 = -1;
  pcVar6 = pcVar11;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    CTSGameRules::SetTeamList((CTSGameRules *)&TSGameRules,pcVar11);
  }
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_100c0a70;
  pcVar6 = &DAT_100a9398;
  do {
    pcVar10 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar10 + -uVar4;
  pcVar10 = pcVar11;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar10 = pcVar10 + 1;
  }
  do {
    if (*pcVar7 != '\0') {
      uVar4 = 0xffffffff;
      pcVar6 = pcVar7;
      do {
        pcVar10 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar10 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar10;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar3 = -1;
      pcVar6 = pcVar11;
      do {
        pcVar9 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar9;
      } while (cVar1 != '\0');
      pcVar6 = pcVar10 + -uVar4;
      pcVar10 = pcVar9 + -1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar10 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar10 = pcVar10 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar6 = &DAT_100a2748;
      do {
        pcVar10 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar10 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar10;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar3 = -1;
      pcVar6 = pcVar11;
      do {
        pcVar9 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar9;
      } while (cVar1 != '\0');
      pcVar6 = pcVar10 + -uVar4;
      pcVar10 = pcVar9 + -1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar10 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    pcVar7 = pcVar7 + 0x8c;
  } while ((int)pcVar7 < 0x100c0ca0);
  iVar3 = -1;
  param_1[0x85] = 1;
  pcVar11 = local_800;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    FUN_1004dd20();
  }
  RecountTeams((CHalfLifeTeamplay *)param_1,'\0');
  return param_1;
}

/* 1003f170  CHalfLifeTeamplay::Think  (498 bytes)
 * undefined Think()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CHalfLifeTeamplay::Think(int *param_1)

{
  float fVar1;
  globalvars_t *pgVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  float10 extraout_ST0;
  longlong lVar8;
  longlong lVar9;
  int *piStack_4;
  
  iVar6 = 0;
  FUN_10079050(&DAT_100aee48,(double)gpGlobals->frametime);
  if (g_fGameOver != 0) {
    CHalfLifeMultiplay::Think(param_1);
    return;
  }
  (*g_engfuncs.pfnCVarGetFloat)(s_mp_timelimit_1009f19c);
  pgVar2 = gpGlobals;
  lVar8 = __ftol();
  fVar1 = DAT_1009eb94;
  if ((extraout_ST0 != (float10)0.0) && (extraout_ST0 <= (float10)pgVar2->time)) {
    (**(code **)(*param_1 + 0xf4))();
    return;
  }
  if (DAT_1009eb94 != 0.0) {
    iVar6 = 9999;
    iVar4 = FUN_1004da70(&TSGameRules);
    iVar3 = DAT_100c07d0;
    if ((char)iVar4 == '\0') {
      iVar4 = 0;
      param_1 = piStack_4;
      if (0 < DAT_100c07d0) {
        piVar7 = &DAT_100c0748;
        do {
          if (fVar1 <= (float)*piVar7) {
            (**(code **)(*piStack_4 + 0xf4))();
            return;
          }
          lVar9 = __ftol();
          if ((int)lVar9 < iVar6) {
            iVar6 = (int)lVar9;
          }
          iVar4 = iVar4 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar4 < iVar3);
      }
    }
    else {
      piVar7 = &DAT_100c0a6c;
      do {
        if (((char)piVar7[1] != '\0') && (fVar1 <= (float)*piVar7)) goto LAB_1003f339;
        lVar9 = __ftol();
        if ((int)lVar9 < iVar6) {
          iVar6 = (int)lVar9;
        }
        piVar7 = piVar7 + 0x23;
      } while ((int)piVar7 < 0x100c0c9c);
    }
  }
  if (iVar6 != DAT_100c07cc) {
    pcVar5 = UTIL_VarArgs(&DAT_1009cc60);
    (*g_engfuncs.pfnCvar_DirectSet)((cvar_s *)&PTR_s_mp_fragsleft_1009eb40,pcVar5);
  }
  if ((float)_DAT_100c07c8 != _DAT_1009eb64) {
    pcVar5 = UTIL_VarArgs(&DAT_1009cc60);
    (*g_engfuncs.pfnCvar_DirectSet)((cvar_s *)&PTR_s_mp_timeleft_1009eb58,pcVar5);
  }
  _DAT_100c07c8 = (int)lVar8;
  DAT_100c07cc = iVar6;
  CTSGameRules::Think(&TSGameRules);
  if (DAT_100c226c != '\0') {
LAB_1003f339:
    (**(code **)(*param_1 + 0xf4))();
  }
  return;
}

/* 1003f4d0  CHalfLifeTeamplay::InitHUD  (496 bytes)
 * undefined InitHUD()
 */
void __thiscall CHalfLifeTeamplay::InitHUD(CHalfLifeMultiplay *param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  char *in_stack_fffffbfc;
  int iStack_3f4;
  undefined1 auStack_3e4 [996];
  
  (**(code **)(*(int *)param_1 + 0xd8))(param_2);
  CHalfLifeMultiplay::InitHUD(param_1,(int)param_2);
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100d9758,(float *)0x0,*(edict_t **)(param_2[1] + 0x208));
  (*g_engfuncs.pfnWriteByte)(DAT_100c07d0);
  iVar6 = 0;
  if (0 < DAT_100c07d0) {
    pcVar5 = (char *)&DAT_100c0548;
    do {
      (*g_engfuncs.pfnWriteString)(pcVar5);
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 0x10;
    } while (iVar6 < DAT_100c07d0);
  }
  (*g_engfuncs.pfnMessageEnd)();
  RecountTeams((CHalfLifeTeamplay *)param_1,'\0');
  pcVar5 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(param_2[1] + 0x208));
  pbVar2 = (byte *)(*g_engfuncs.pfnInfoKeyValue)(pcVar5,in_stack_fffffbfc);
  pbVar7 = (byte *)(param_2 + 0x2cd);
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_1003f5a3:
      iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1003f5a8;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_1003f5a3;
    pbVar2 = pbVar2 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_1003f5a8:
  if (iVar6 == 0) {
    pcVar5 = s___you_are_on_team___s__100a276c;
  }
  else {
    pcVar5 = s___assigned_to_team__s_100a2754;
  }
  sprintf(auStack_3e4,(byte_conflict *)pcVar5);
  (**(code **)(*(int *)param_1 + 0xd4))(param_2,param_2 + 0x2cd,0,0);
  FUN_10076e00(&iStack_3f4,param_2);
  (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_2[1] + 0x208));
  RecountTeams((CHalfLifeTeamplay *)param_1,'\0');
  iStack_3f4 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar3 = (int *)UTIL_PlayerByIndex(iStack_3f4);
      if (piVar3 != (int *)0x0) {
        iVar6 = *(int *)param_1;
        uVar4 = (**(code **)(*piVar3 + 200))();
        iVar6 = (**(code **)(iVar6 + 0xd0))(uVar4);
        if (iVar6 != 0) {
          (*g_engfuncs.pfnMessageBegin)
                    (1,DAT_100d971c,(float *)0x0,*(edict_t **)(param_2[1] + 0x208));
          iVar6 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(piVar3[1] + 0x208));
          (*g_engfuncs.pfnWriteByte)(iVar6);
          pcVar5 = (char *)(**(code **)(*piVar3 + 200))();
          iStack_3f4 = 0x1003f68d;
          (*g_engfuncs.pfnWriteString)(pcVar5);
          (*g_engfuncs.pfnMessageEnd)();
        }
      }
      iStack_3f4 = iStack_3f4 + 1;
    } while (iStack_3f4 <= gpGlobals->maxClients);
  }
  return;
}

/* 1003f6c0  CHalfLifeTeamplay::ChangePlayerTeam  (862 bytes)
 * undefined ChangePlayerTeam(int * param_1, byte.conflict * param_2, int param_3)
 */
/* .so 0xe488c; slot 53 */

void __thiscall
CHalfLifeTeamplay::ChangePlayerTeam
          (CHalfLifeTeamplay *this,int *param_1,byte_conflict *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  edict_t *peVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  char *unaff_EBP;
  char *unaff_ESI;
  char *pcVar7;
  byte *pbVar8;
  int *key;
  bool bVar9;
  longlong lVar10;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_0000001c;
  int in_stack_00000020;
  float fStack00000044;
  int in_stack_00000074;
  int *key_00;
  
  iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1[1] + 0x208));
  pcVar7 = (char *)((-(uint)(in_stack_00000014 != 0) & 0x1000) + 0x1000);
  if (in_stack_00000010 != 0) {
    *(undefined4 *)(this + 0x20c) = 1;
    *(undefined4 *)(this + 0x210) = 1;
    peVar3 = (*g_engfuncs.pfnPEntityOfEntIndex)(0);
    if (peVar3 != (edict_t *)0x0) {
      peVar3 = (edict_t *)&peVar3->v;
    }
    (**(code **)(*param_1 + 0x50))(peVar3,peVar3,0x44610000);
    *(undefined4 *)(this + 0x20c) = 0;
    *(undefined4 *)(this + 0x210) = 0;
    unaff_ESI = pcVar7;
  }
  if (DAT_102efbc0 != 0) {
    if (*(char *)((int)param_1 + 0x7a5) == '\0') {
      _strncpy((char *)(param_1 + 0x2cd),&DAT_100c0afc,0x10);
    }
    else {
      _strncpy((char *)(param_1 + 0x2cd),&DAT_100c0a70,0x10);
    }
    goto LAB_1003f7ea;
  }
  if (*(char *)param_3 == '\0') {
LAB_1003f7c9:
    pcVar7 = (char *)FUN_10040030((int *)this);
  }
  else {
    pbVar8 = &DAT_100a9398;
    pbVar4 = (byte *)param_3;
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_1003f7b1:
        iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_1003f7b6;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_1003f7b1;
      pbVar4 = pbVar4 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_1003f7b6:
    if ((iVar5 == 0) ||
       (iVar5 = (**(code **)(*(int *)this + 0xd0))(param_3), pcVar7 = (char *)param_3, iVar5 == 0))
    goto LAB_1003f7c9;
  }
  _strncpy((char *)(param_1 + 0x2cd),pcVar7,0x10);
LAB_1003f7ea:
  key = param_1 + 0x2cd;
  if ((g_teamplay == 2) || (g_teamplay == 3)) {
    peVar3 = *(edict_t **)(param_1[1] + 0x208);
    (*g_engfuncs.pfnIndexOfEdict)(peVar3);
    pcVar7 = FUN_1004ec20(&TSGameRules,(int)param_1);
    pcVar6 = (*g_engfuncs.pfnGetInfoKeyBuffer)(peVar3);
    (*g_engfuncs.pfnSetClientKeyValue)(in_stack_0000001c,pcVar6,pcVar7,unaff_EBP);
    FUN_1004fc00(&TSGameRules,param_1);
  }
  else if (*(int *)(this + 0x214) == 0) {
    key_00 = key;
    pcVar7 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(param_1[1] + 0x208));
    (*g_engfuncs.pfnSetClientKeyValue)(iVar2,pcVar7,(char *)key_00,unaff_ESI);
    in_stack_00000020 = iVar2;
  }
  else {
    peVar3 = *(edict_t **)(param_1[1] + 0x208);
    (*g_engfuncs.pfnIndexOfEdict)(peVar3);
    pcVar7 = FUN_1004ec20(&TSGameRules,(int)param_1);
    pcVar6 = (*g_engfuncs.pfnGetInfoKeyBuffer)(peVar3);
    (*g_engfuncs.pfnSetClientKeyValue)(in_stack_0000001c,pcVar6,pcVar7,unaff_EBP);
  }
  pcVar7 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(param_1[1] + 0x208));
  (*g_engfuncs.pfnSetClientKeyValue)(in_stack_00000020,pcVar7,(char *)key,(char *)param_3);
  RecountTeams(this,'\0');
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100d971c,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(in_stack_00000020);
  (*g_engfuncs.pfnWriteString)((char *)key);
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9718,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(in_stack_00000020);
  lVar10 = __ftol();
  (*g_engfuncs.pfnWriteShort)((int)lVar10);
  (*g_engfuncs.pfnWriteShort)(param_1[0x2c7]);
  (*g_engfuncs.pfnWriteShort)(0);
  iVar2 = (**(code **)(*g_pGameRules + 200))();
  (*g_engfuncs.pfnWriteShort)(iVar2 + 1);
  (*g_engfuncs.pfnMessageEnd)();
  if ((in_stack_00000074 == 0) && (DAT_102efbc0 == 0)) {
    Vector::Vector((Vector *)&stack0x00000040,(undefined4 *)(param_1[1] + 8));
    CBasePlayer::StartObserver((CBasePlayer *)param_1);
    FUN_1004c260((int)param_1,5);
  }
  fStack00000044 = 2.6027673e-29;
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9758,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)((int)DAT_100c07d0);
  iVar2 = 0;
  if (0 < (int)DAT_100c07d0) {
    pcVar7 = (char *)&DAT_100c0548;
    do {
      (*g_engfuncs.pfnWriteString)(pcVar7);
      iVar2 = iVar2 + 1;
      pcVar7 = pcVar7 + 0x10;
    } while (iVar2 < (int)DAT_100c07d0);
  }
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 1003fa20  CHalfLifeTeamplay::ClientUserInfoChanged  (666 bytes)
 * undefined ClientUserInfoChanged()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
CHalfLifeTeamplay::ClientUserInfoChanged(CHalfLifeMultiplay *param_1,int *param_2,char *param_3)

{
  byte_conflict *pbVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *infobuffer;
  void *this;
  char *unaff_EBX;
  char *unaff_EBP;
  edict_t *pEdict;
  int *key;
  int *key_00;
  int in_stack_fffffc08;
  edict_t *in_stack_fffffc0c;
  undefined1 auStack_3e4 [24];
  undefined1 auStack_3cc [972];
  
  CHalfLifeMultiplay::ClientUserInfoChanged(param_1,param_2,param_3);
  pbVar1 = (byte_conflict *)(*g_engfuncs.pfnInfoKeyValue)(param_3,s_model_1009cca4);
  key = param_2 + 0x2cd;
  uVar2 = FUN_100887b0(this,pbVar1,(byte_conflict *)key);
  if (uVar2 != 0) {
    if ((g_teamplay == 2) || (g_teamplay == 3)) {
      pEdict = *(edict_t **)(param_2[1] + 0x208);
    }
    else {
      if (*(int *)(param_1 + 0x214) == 0) {
        if (_DAT_1009ec9c != 0.0) {
          iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_2[1] + 0x208));
          key_00 = key;
          pcVar4 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(param_2[1] + 0x208));
          (*g_engfuncs.pfnSetClientKeyValue)(iVar3,pcVar4,(char *)key_00,unaff_EBX);
          pcVar4 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(param_2[1] + 0x208));
          (*g_engfuncs.pfnSetClientKeyValue)(iVar3,pcVar4,(char *)key,(char *)in_stack_fffffc0c);
          sprintf(auStack_3cc,(byte_conflict *)s___Not_allowed_to_change_teams_in_100a2808);
          FUN_10076e00(auStack_3cc,param_2);
          return;
        }
        iVar3 = (**(code **)(*(int *)param_1 + 0xd0))(pbVar1);
        if (iVar3 != 0) {
          sprintf(&stack0xfffffc04,(byte_conflict *)s____s_has_changed_to_team___s__100a27e8);
          FUN_10076e60(&stack0xfffffc04,(int)param_2);
          (*g_engfuncs.pfnGetPlayerAuthId)(*(edict_t **)(param_2[1] + 0x208));
          (*g_engfuncs.pfnGetPlayerUserId)(in_stack_fffffc0c);
          UTIL_LogPrintf((byte_conflict *)s___s<_i><_s><_s>__joined_team___s_100a27c4);
          (**(code **)(*(int *)param_1 + 0xd4))(param_2,pbVar1,0,0);
          RecountTeams((CHalfLifeTeamplay *)param_1,'\x01');
          return;
        }
        (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_2[1] + 0x208));
        pcVar4 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(param_2[1] + 0x208));
        (*g_engfuncs.pfnSetClientKeyValue)(in_stack_fffffc08,pcVar4,(char *)key,unaff_EBP);
        sprintf(auStack_3e4,(byte_conflict *)s___Can_t_change_team_to___s__100a27a4);
        FUN_10076e00(auStack_3e4,param_2);
        sprintf(auStack_3e4,(byte_conflict *)s___Server_limits_teams_to___s__100a2784);
        FUN_10076e00(auStack_3e4,param_2);
        return;
      }
      pEdict = *(edict_t **)(param_2[1] + 0x208);
    }
    iVar3 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
    pcVar4 = FUN_1004ec20(&TSGameRules,(int)param_2);
    infobuffer = (*g_engfuncs.pfnGetInfoKeyBuffer)(pEdict);
    (*g_engfuncs.pfnSetClientKeyValue)(iVar3,infobuffer,pcVar4,unaff_EBX);
  }
  return;
}

/* 1003fcc0  CHalfLifeTeamplay::DeathNotice  (220 bytes)
 * undefined DeathNotice()
 */
void __thiscall
CHalfLifeTeamplay::DeathNotice
          (int *param_1,void *param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6)

{
  void *pvVar1;
  edict_t *peVar2;
  int iVar3;
  
  if (param_1[0x83] != 0) {
    return;
  }
  if (((((param_2 != (void *)0x0) && (param_3 != 0)) && ((*(byte *)(param_3 + 0x1a4) & 8) != 0)) &&
      ((peVar2 = *(edict_t **)(param_3 + 0x208), peVar2 != (edict_t *)0x0 ||
       (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 != (edict_t *)0x0)))) &&
     ((pvVar1 = peVar2->pvPrivateData, pvVar1 != (void *)0x0 &&
      ((pvVar1 != param_2 && (iVar3 = (**(code **)(*param_1 + 0xc4))(param_2,pvVar1), iVar3 == 1))))
     )) {
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9714,(float *)0x0,(edict_t *)0x0);
    iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_3 + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar3);
    iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)((int)param_2 + 4) + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar3);
    (*g_engfuncs.pfnWriteString)(s_teammate_100a2838);
    (*g_engfuncs.pfnMessageEnd)();
    return;
  }
  CHalfLifeMultiplay::DeathNotice((int)param_2,param_3,param_5,param_6);
  return;
}

/* 1003fda0  CHalfLifeTeamplay::PlayerKilled  (48 bytes)
 * undefined PlayerKilled(int * param_1, int * param_2)
 */
void __thiscall CHalfLifeTeamplay::PlayerKilled(CHalfLifeTeamplay *this,int *param_1,int *param_2)

{
  if (*(int *)(this + 0x210) == 0) {
    CHalfLifeMultiplay::PlayerKilled((CHalfLifeMultiplay *)this,param_1,param_2);
    RecountTeams(this,'\0');
  }
  return;
}

/* 1003fe30  CHalfLifeTeamplay::PlayerRelationship  (122 bytes)
 * undefined4 PlayerRelationship(byte.conflict * param_1, int * param_2)
 */
/* .so 0xe5278; slot 49 */

undefined4 __thiscall
CHalfLifeTeamplay::PlayerRelationship(CHalfLifeTeamplay *this,byte_conflict *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  byte_conflict *pbVar4;
  uint uVar5;
  void *this_00;
  
  if ((param_1 != (byte_conflict *)0x0) && (param_2 != (int *)0x0)) {
    iVar1 = (**(code **)(*param_2 + 0xc0))();
    if (iVar1 != 0) {
      pcVar2 = (char *)(**(code **)(*(int *)this + 0xc0))(param_1);
      if (*pcVar2 != '\0') {
        pcVar2 = (char *)(**(code **)(*(int *)this + 0xc0))(param_2);
        if (*pcVar2 != '\0') {
          uVar3 = (**(code **)(*(int *)this + 0xc0))(param_2);
          pbVar4 = (byte_conflict *)(**(code **)(*(int *)this + 0xc0))(param_1,uVar3);
          uVar5 = FUN_100887b0(this_00,pbVar4,param_1);
          if (uVar5 == 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/* 100400e0  CHalfLifeTeamplay::RecountTeams  (648 bytes)
 * undefined RecountTeams(char param_1)
 * called by: CHalfLifeTeamplay::CHalfLifeTeamplay, CHalfLifeTeamplay::ChangePlayerTeam, CHalfLifeTeamplay::ClientUserInfoChanged, CHalfLifeTeamplay::InitHUD, CHalfLifeTeamplay::PlayerKilled, CTSGameRules::RestartRound, FUN_1003f3b0
 */
void __thiscall CHalfLifeTeamplay::RecountTeams(CHalfLifeTeamplay *this,char param_1)

{
  CHalfLifeTeamplay CVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  CHalfLifeTeamplay *pCVar10;
  CHalfLifeTeamplay *pCVar11;
  char *pcVar12;
  undefined4 *puVar13;
  longlong lVar14;
  int iStack_204;
  
  uVar8 = 0xffffffff;
  DAT_100c07d0 = 0;
  pCVar10 = this + 0xc;
  do {
    pCVar11 = pCVar10;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pCVar11 = pCVar10 + 1;
    CVar1 = *pCVar10;
    pCVar10 = pCVar11;
  } while (CVar1 != (CHalfLifeTeamplay)0x0);
  uVar8 = ~uVar8;
  pCVar10 = pCVar11 + -uVar8;
  pCVar11 = (CHalfLifeTeamplay *)&stack0xfffffe00;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pCVar11 = *(undefined4 *)pCVar10;
    pCVar10 = pCVar10 + 4;
    pCVar11 = pCVar11 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pCVar11 = *pCVar10;
    pCVar10 = pCVar10 + 1;
    pCVar11 = pCVar11 + 1;
  }
  pcVar3 = (char *)FUN_1007e23b(&stack0xfffffe00,&DAT_100a2748);
  while ((pcVar3 != (char *)0x0 && (*pcVar3 != '\0'))) {
    iVar4 = (**(code **)(*(int *)this + 200))(pcVar3);
    if (iVar4 < 0) {
      uVar8 = 0xffffffff;
      do {
        pcVar12 = pcVar3;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar3 + 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar2 != '\0');
      uVar8 = ~uVar8;
      pcVar3 = pcVar12 + -uVar8;
      pcVar12 = (char *)(&DAT_100c0548 + DAT_100c07d0 * 4);
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar12 = pcVar12 + 4;
      }
      DAT_100c07d0 = DAT_100c07d0 + 1;
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar12 = pcVar12 + 1;
      }
    }
    pcVar3 = (char *)FUN_1007e23b((byte_conflict *)0x0,&DAT_100a2748);
  }
  if (DAT_100c07d0 < 2) {
    DAT_100c07d0 = 0;
    *(undefined4 *)(this + 0x214) = 0;
  }
  puVar13 = &DAT_100c0748;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  iStack_204 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar5 = (int *)UTIL_PlayerByIndex(iStack_204);
      if ((piVar5 != (int *)0x0) && (iVar4 = (**(code **)(*piVar5 + 0xc0))(), iVar4 != 0)) {
        pcVar3 = (char *)(**(code **)(*piVar5 + 200))();
        iVar6 = (**(code **)(*(int *)this + 200))(pcVar3);
        iVar4 = DAT_100c07d0;
        if (iVar6 < 0) {
          if (*(int *)(this + 0x214) == 0) {
            iVar6 = DAT_100c07d0 * 4;
            puVar13 = &DAT_100c0748 + DAT_100c07d0;
            DAT_100c07d0 = DAT_100c07d0 + 1;
            *puVar13 = 0;
            _strncpy((char *)(&DAT_100c0548 + iVar6),pcVar3,0x10);
            iVar6 = iVar4;
          }
          if (-1 < iVar6) goto LAB_1004024f;
        }
        else {
LAB_1004024f:
          lVar14 = __ftol();
          (&DAT_100c0748)[iVar6] = (int)lVar14;
        }
        if (param_1 != '\0') {
          iVar4 = *(int *)this;
          uVar7 = (**(code **)(*piVar5 + 200))();
          iVar4 = (**(code **)(iVar4 + 0xd0))(uVar7);
          if (iVar4 != 0) {
            (*g_engfuncs.pfnMessageBegin)(2,DAT_100d971c,(float *)0x0,(edict_t *)0x0);
            iVar4 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(piVar5[1] + 0x208));
            (*g_engfuncs.pfnWriteByte)(iVar4);
            pcVar3 = (char *)(**(code **)(*piVar5 + 200))();
            iStack_204 = 0x100402d4;
            (*g_engfuncs.pfnWriteString)(pcVar3);
            (*g_engfuncs.pfnMessageEnd)();
            iVar4 = FUN_1004da70(&TSGameRules);
            if ((char)iVar4 != '\0') {
              pcVar3 = &DAT_100c0a70;
              do {
                if (*pcVar3 != '\0') {
                  (*g_engfuncs.pfnMessageBegin)
                            (1,DAT_100d9720,(float *)0x0,*(edict_t **)(piVar5[1] + 0x208));
                  (*g_engfuncs.pfnWriteString)(pcVar3);
                  (*g_engfuncs.pfnWriteShort)(*(int *)(pcVar3 + -4));
                  (*g_engfuncs.pfnWriteShort)(0);
                  (*g_engfuncs.pfnMessageEnd)();
                }
                pcVar3 = pcVar3 + 0x8c;
              } while ((int)pcVar3 < 0x100c0ca0);
            }
          }
        }
      }
      iStack_204 = iStack_204 + 1;
    } while (iStack_204 <= gpGlobals->maxClients);
  }
  return;
}

