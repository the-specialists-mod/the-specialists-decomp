/* mp.dll - CHalfLifeMultiplay (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002b980  CHalfLifeMultiplay::CHalfLifeMultiplay  (245 bytes)
 * undefined4 * CHalfLifeMultiplay(undefined4 * param_1)
 * called by: CHalfLifeTeamplay::CHalfLifeTeamplay, InstallGameRules
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall CHalfLifeMultiplay::CHalfLifeMultiplay(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char acStack_fc [252];
  
  *param_1 = &vftable;
  CTSGameRules::Init(&TSGameRules);
  CVoiceGameMgr::Init((CVoiceGameMgr *)&DAT_100aee48,&DAT_100ae760,gpGlobals->maxClients);
  FUN_1002bb20();
  param_1[1] = 0;
  _DAT_100aee68 = 0;
  iVar1 = (*g_engfuncs.pfnIsDedicatedServer)();
  if (iVar1 == 0) {
    pcVar2 = (*g_engfuncs.pfnCVarGetString)(s_lservercfgfile_1009fdf4);
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      (*g_engfuncs.pfnAlertMessage)(at_console,s_Executing_listen_server_config_f_1009fdcc);
      sprintf(acStack_fc,(byte_conflict *)s_exec__s_1009fe04);
      (*g_engfuncs.pfnServerCommand)(acStack_fc);
    }
  }
  else {
    pcVar2 = (*g_engfuncs.pfnCVarGetString)(s_servercfgfile_1009fe38);
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      (*g_engfuncs.pfnAlertMessage)(at_console,s_Executing_dedicated_server_confi_1009fe10);
      sprintf(acStack_fc,(byte_conflict *)s_exec__s_1009fe04);
      (*g_engfuncs.pfnServerCommand)(acStack_fc);
      return param_1;
    }
  }
  return param_1;
}

/* 1002bbc0  CHalfLifeMultiplay::Think  (555 bytes)
 * undefined Think(int * param_1)
 * called by: CHalfLifeTeamplay::Think
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CHalfLifeMultiplay::Think(int *param_1)

{
  float fVar1;
  globalvars_t *pgVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 extraout_ST0;
  longlong lVar7;
  int in_stack_00000004;
  
  FUN_10079050(&DAT_100aee48,(double)gpGlobals->frametime);
  pgVar2 = gpGlobals;
  fVar1 = DAT_1009eb94;
  iVar5 = 0;
  if (g_fGameOver == 0) {
    __ftol();
    if ((extraout_ST0 != (float10)0.0) && (extraout_ST0 <= (float10)pgVar2->time)) {
      (**(code **)(*param_1 + 0xf4))();
      return;
    }
    if (fVar1 != 0.0) {
      iVar6 = 1;
      iVar5 = 9999;
      if (0 < pgVar2->maxClients) {
        do {
          iVar4 = UTIL_PlayerByIndex(iVar6);
          if (iVar4 != 0) {
            if (fVar1 <= *(float *)(*(int *)(iVar4 + 4) + 0x164)) goto LAB_1002bdd8;
            lVar7 = __ftol();
            if ((int)lVar7 < iVar5) {
              iVar5 = (int)lVar7;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 <= gpGlobals->maxClients);
      }
    }
    if (iVar5 != DAT_100aee44) {
      pcVar3 = UTIL_VarArgs(&DAT_1009cc60);
      (*g_engfuncs.pfnCvar_DirectSet)((cvar_s *)&PTR_s_mp_fragsleft_1009eb40,pcVar3);
    }
    if ((float)_DAT_100ae764 != _DAT_1009eb64) {
      pcVar3 = UTIL_VarArgs(&DAT_1009cc60);
      (*g_engfuncs.pfnCvar_DirectSet)((cvar_s *)&PTR_s_mp_timeleft_1009eb58,pcVar3);
    }
    _DAT_100ae764 = in_stack_00000004;
    DAT_100aee44 = iVar5;
    CTSGameRules::Think(&TSGameRules);
    if (DAT_100c226c != '\0') {
LAB_1002bdd8:
      (**(code **)(*param_1 + 0xf4))();
    }
  }
  else {
    (*g_engfuncs.pfnCVarGetFloat)(s_mp_chattime_1009f0c8);
    lVar7 = __ftol();
    if ((int)lVar7 < 10) {
      (*g_engfuncs.pfnCVarSetString)(s_mp_chattime_1009f0c8,&DAT_1009f0c4);
    }
    else if (0x78 < (int)lVar7) {
      pcVar3 = FUN_10076eb0();
      (*g_engfuncs.pfnCVarSetString)(s_mp_chattime_1009f0c8,pcVar3);
    }
    fVar1 = _DAT_1009eccc + _DAT_100aee68;
    param_1[1] = (int)fVar1;
    if ((fVar1 < gpGlobals->time) &&
       ((param_1[2] != 0 || (_DAT_100aee68 + 120.0 < gpGlobals->time)))) {
      (**(code **)(*param_1 + 0xf0))();
      return;
    }
  }
  return;
}

/* 1002bfe0  CHalfLifeMultiplay::InitHUD  (586 bytes)
 * undefined InitHUD(int param_1)
 * called by: CHalfLifeTeamplay::InitHUD
 */
void __thiscall CHalfLifeMultiplay::InitHUD(CHalfLifeMultiplay *this,int param_1)

{
  edict_t *peVar1;
  undefined *puVar2;
  char *infobuffer;
  int iValue;
  longlong lVar3;
  char *pcVar4;
  char *in_stack_00000008;
  undefined4 uStack00000044;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar7 = 0;
  iVar6 = 0;
  iVar5 = 0;
  puVar2 = UTIL_VarArgs((byte_conflict *)s__s_has_joined_the_game_1009fe9c);
  iValue = 1;
  UTIL_ClientPrintAll(1,puVar2,iVar5,iVar6,iVar7,iVar8);
  if (g_teamplay == 0) {
    peVar1 = *(edict_t **)(*(int *)(param_1 + 4) + 0x208);
    (*g_engfuncs.pfnGetPlayerUserId)(peVar1);
    (*g_engfuncs.pfnGetPlayerAuthId)(peVar1);
    (*g_engfuncs.pfnGetPlayerUserId)(peVar1);
    pcVar4 = s___s<_i><_s><_i>__entered_the_gam_1009fe54;
  }
  else {
    peVar1 = *(edict_t **)(*(int *)(param_1 + 4) + 0x208);
    infobuffer = (*g_engfuncs.pfnGetInfoKeyBuffer)(peVar1);
    pcVar4 = (char *)0x1002c05e;
    (*g_engfuncs.pfnInfoKeyValue)(infobuffer,in_stack_00000008);
    (*g_engfuncs.pfnGetPlayerAuthId)(peVar1);
    (*g_engfuncs.pfnGetPlayerUserId)(peVar1);
  }
  UTIL_LogPrintf((byte_conflict *)pcVar4);
  (**(code **)(*(int *)this + 0x34))();
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100d9718,(float *)0x0,*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  iVar5 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(iVar5);
  (*g_engfuncs.pfnWriteShort)(0);
  (*g_engfuncs.pfnWriteShort)(0);
  (*g_engfuncs.pfnWriteShort)(0);
  (*g_engfuncs.pfnWriteShort)(0);
  (*g_engfuncs.pfnMessageEnd)();
  SendMOTDToClient(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  if (0 < gpGlobals->maxClients) {
    do {
      iVar5 = UTIL_PlayerByIndex(iValue);
      if (iVar5 != 0) {
        (*g_engfuncs.pfnMessageBegin)
                  (1,DAT_100d9718,(float *)0x0,*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
        (*g_engfuncs.pfnWriteByte)(iValue);
        lVar3 = __ftol();
        (*g_engfuncs.pfnWriteShort)((int)lVar3);
        (*g_engfuncs.pfnWriteShort)(*(int *)(iVar5 + 0xb1c));
        (*g_engfuncs.pfnWriteShort)(0);
        iVar5 = (**(code **)(*(int *)this + 200))();
        (*g_engfuncs.pfnWriteShort)(iVar5 + 1);
        (*g_engfuncs.pfnMessageEnd)();
      }
      iValue = iValue + 1;
    } while (iValue <= gpGlobals->maxClients);
  }
  if (g_fGameOver != 0) {
    (*g_engfuncs.pfnMessageBegin)(1,0x1e,(float *)0x0,*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
    uStack00000044 = 0x1002c223;
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 1002c230  CHalfLifeMultiplay::ClientDisconnected  (250 bytes)
 * undefined ClientDisconnected()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CHalfLifeMultiplay::ClientDisconnected(int param_1)

{
  void *this;
  edict_t *peVar1;
  char *infobuffer;
  char *unaff_EDI;
  char *pcVar2;
  
  if ((param_1 != 0) && (this = *(void **)(param_1 + 0x7c), this != (void *)0x0)) {
    FireTargets(0x1009ff00,this,this,3,0);
    if (g_teamplay == 0) {
      peVar1 = *(edict_t **)(*(int *)((int)this + 4) + 0x208);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar1);
      (*g_engfuncs.pfnGetPlayerAuthId)(peVar1);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar1);
      pcVar2 = s___s<_i><_s><_i>__disconnected_1009fec0;
    }
    else {
      peVar1 = *(edict_t **)(*(int *)((int)this + 4) + 0x208);
      infobuffer = (*g_engfuncs.pfnGetInfoKeyBuffer)(peVar1);
      pcVar2 = (char *)0x1002c284;
      (*g_engfuncs.pfnInfoKeyValue)(infobuffer,unaff_EDI);
      (*g_engfuncs.pfnGetPlayerAuthId)(peVar1);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar1);
    }
    UTIL_LogPrintf((byte_conflict *)pcVar2);
    FUN_10033050(this,1);
    TSPlayerDisconnect(this);
    _DAT_100c62c4 = 0;
  }
  return;
}

/* 1002c370  CHalfLifeMultiplay::PlayerThink  (58 bytes)
 * undefined PlayerThink()
 */
/* .so 0xcfb60; vtable slot 18 (both rules classes) */

void __thiscall CHalfLifeMultiplay::PlayerThink(int param_1,int param_2)

{
  if (g_fGameOver != 0) {
    if ((*(uint *)(param_2 + 0x800) & 0x827) != 0) {
      *(undefined4 *)(param_1 + 8) = 1;
    }
    *(undefined4 *)(param_2 + 0x800) = 0;
    *(undefined4 *)(*(int *)(param_2 + 4) + 0x180) = 0;
    *(undefined4 *)(param_2 + 0x804) = 0;
  }
  return;
}

/* 1002cce0  CHalfLifeMultiplay::ChangeLevel  (834 bytes)
 * undefined ChangeLevel()
 */
void CHalfLifeMultiplay::ChangeLevel(void)

{
  char cVar1;
  byte_conflict bVar2;
  byte bVar3;
  bool bVar4;
  globalvars_t *pgVar5;
  byte_conflict *pbVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  void *this;
  int *piVar12;
  byte_conflict *pbVar13;
  undefined4 *puVar14;
  char *pcVar15;
  byte_conflict *pbVar16;
  int *piVar17;
  int *piVar18;
  undefined4 *puVar19;
  bool bVar20;
  int in_stack_fffff404;
  char *pcStack_bf8;
  char acStack_bf4 [4];
  char acStack_bf0 [24];
  char acStack_bd8 [4];
  undefined4 uStack_bd4;
  char acStack_bd0 [28];
  undefined4 uStack_bb4;
  char acStack_bb0 [1496];
  char acStack_5d8 [12];
  char acStack_5cc [1484];
  
  uVar10 = 0xffffffff;
  pcVar9 = &DAT_1009ffe4;
  do {
    pcVar15 = pcVar9;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar15 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar15;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  pcVar9 = pcVar15 + -uVar10;
  pcVar15 = acStack_bd8;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar15 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar15 = pcVar15 + 1;
  }
  pbVar6 = (byte_conflict *)(*g_engfuncs.pfnCVarGetString)(s_mapcyclefile_1009ffd4);
  acStack_5d8[0] = '\0';
  uStack_bb4._0_1_ = 0;
  iVar7 = FUN_1002cb70();
  uVar10 = FUN_100887b0(this,pbVar6,(byte_conflict *)&DAT_100ae768);
  if (uVar10 == 0) {
    if (DAT_100ae758 == 0) goto LAB_1002cecd;
  }
  else {
    uVar10 = 0xffffffff;
    pbVar13 = pbVar6;
    do {
      pbVar16 = pbVar13;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pbVar16 = pbVar13 + 1;
      bVar2 = *pbVar13;
      pbVar13 = pbVar16;
    } while (bVar2 != '\0');
    uVar10 = ~uVar10;
    pbVar13 = pbVar16 + -uVar10;
    pbVar16 = (byte_conflict *)&DAT_100ae768;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pbVar16 = *(undefined4 *)pbVar13;
      pbVar13 = pbVar13 + 4;
      pbVar16 = pbVar16 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pbVar16 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      pbVar16 = pbVar16 + 1;
    }
    FUN_1002c720(&DAT_100ae758);
    iVar8 = ReloadMapCycleFile(pbVar6,&DAT_100ae758);
    if ((iVar8 == 0) || (DAT_100ae758 == 0)) {
      (*g_engfuncs.pfnAlertMessage)(at_console,s_Unable_to_load_map_cycle_file__s_1009ffb0,pbVar6);
      goto LAB_1002cecd;
    }
  }
  pgVar5 = gpGlobals;
  bVar20 = false;
  pcStack_bf8 = acStack_bf4;
  uVar10 = 0xffffffff;
  pcVar9 = gpGlobals->pStringBase + gpGlobals->mapname;
  do {
    pcVar15 = pcVar9;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar15 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar15;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  pcVar9 = pcVar15 + -uVar10;
  pcVar15 = pcStack_bf8;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar15 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar15 = pcVar15 + 1;
  }
  uVar10 = 0xffffffff;
  pcVar9 = pgVar5->pStringBase + pgVar5->mapname;
  do {
    pcVar15 = pcVar9;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar15 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar15;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  pcVar9 = acStack_bd8;
  pcVar15 = pcVar15 + -uVar10;
  for (uVar11 = uVar10 >> 2; pcVar9 = pcVar9 + 4, uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar9 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar9 = pcVar9 + 1;
  }
  piVar12 = DAT_100ae75c;
  if ((int *)*DAT_100ae75c == DAT_100ae75c) {
LAB_1002ce6a:
    piVar12 = DAT_100ae75c;
  }
  else {
    do {
      iVar8 = piVar12[9];
      bVar4 = false;
      if (iVar8 != 0) {
        if (iVar7 < iVar8) {
          bVar4 = true;
        }
        else {
          bVar20 = true;
          in_stack_fffff404 = iVar8;
        }
      }
      if (piVar12[10] == 0) {
LAB_1002ce5c:
        if (!bVar4) goto LAB_1002ce6c;
      }
      else if (iVar7 <= piVar12[10]) {
        bVar20 = true;
        goto LAB_1002ce5c;
      }
      piVar12 = (int *)*piVar12;
    } while ((int *)*piVar12 != DAT_100ae75c);
    if (!bVar20) goto LAB_1002ce6a;
  }
LAB_1002ce6c:
  DAT_100ae75c = (int *)*piVar12;
  uVar10 = 0xffffffff;
  piVar18 = piVar12 + 1;
  do {
    piVar17 = piVar18;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    piVar17 = (int *)((int)piVar18 + 1);
    iVar8 = *piVar18;
    piVar18 = piVar17;
  } while ((char)iVar8 != '\0');
  uVar10 = ~uVar10;
  pcVar9 = (char *)((int)piVar17 - uVar10);
  pcVar15 = acStack_bf4;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar15 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar15 = pcVar15 + 1;
  }
  FUN_1002cbb0((char *)(piVar12 + 0xb),acStack_5d8);
  uVar10 = 0xffffffff;
  piVar12 = piVar12 + 0xb;
  do {
    piVar18 = piVar12;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    piVar18 = (int *)((int)piVar12 + 1);
    iVar8 = *piVar12;
    piVar12 = piVar18;
  } while ((char)iVar8 != '\0');
  uVar10 = ~uVar10;
  puVar14 = (undefined4 *)((int)piVar18 - uVar10);
  puVar19 = &uStack_bb4;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar19 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar19 = puVar19 + 1;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar19 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
    puVar19 = (undefined4 *)((int)puVar19 + 1);
  }
LAB_1002cecd:
  if (DAT_100c226c != '\0') {
    pcVar15 = s_nextmap_1009ffa8;
    pcVar9 = &DAT_100c226c;
    do {
      bVar3 = *pcVar9;
      bVar20 = bVar3 < (byte)*pcVar15;
      if (bVar3 != *pcVar15) {
LAB_1002cf03:
        iVar8 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
        goto LAB_1002cf08;
      }
      if (bVar3 == 0) break;
      bVar3 = pcVar9[1];
      bVar20 = bVar3 < (byte)pcVar15[1];
      if (bVar3 != pcVar15[1]) goto LAB_1002cf03;
      pcVar9 = pcVar9 + 2;
      pcVar15 = pcVar15 + 2;
    } while (bVar3 != 0);
    iVar8 = 0;
LAB_1002cf08:
    if (iVar8 != 0) {
      uVar10 = 0xffffffff;
      pcVar9 = &DAT_100c226c;
      do {
        pcVar15 = pcVar9;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar15 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar15;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar9 = pcVar15 + -uVar10;
      pcVar15 = acStack_bf4;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar15 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar15 = pcVar15 + 1;
      }
    }
    DAT_100c226c = '\0';
  }
  CTSGameRules::Init(&TSGameRules);
  iVar8 = (*g_engfuncs.pfnIsMapValid)(acStack_bf4);
  if (iVar8 == 0) {
    uVar10 = 0xffffffff;
    pcVar9 = acStack_bd0;
    do {
      pcVar15 = pcVar9;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar15 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar15;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar9 = pcVar15 + -uVar10;
    pcVar15 = acStack_bf0;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar15 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar15 = pcVar15 + 1;
    }
  }
  g_fGameOver = 1;
  (*g_engfuncs.pfnAlertMessage)(at_console,s_CHANGE_LEVEL___s_1009ff94,acStack_bf0);
  if ((pcStack_bf8 != (char *)0x0) || (iVar7 != 0)) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,s_PLAYER_COUNT__min__i_max__i_curr_1009ff68,pcStack_bf8,iVar7,
               in_stack_fffff404);
  }
  iVar7 = -1;
  pcVar9 = acStack_bb0;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  if (iVar7 != -2) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_RULES___s_1009ff5c,acStack_bb0);
  }
  (*g_engfuncs.pfnChangeLevel)(acStack_bf0,(char *)0x0);
  iVar7 = -1;
  pcVar9 = acStack_5cc;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  if (iVar7 != -2) {
    (*g_engfuncs.pfnServerCommand)(acStack_5cc);
  }
  return;
}

/* 1002d030  CHalfLifeMultiplay::SendMOTDToClient  (317 bytes)
 * undefined SendMOTDToClient(undefined4 param_1)
 * called by: CHalfLifeMultiplay::InitHUD, pfnClientCommand
 */
void CHalfLifeMultiplay::SendMOTDToClient(edict_t *param_1)

{
  byte_conflict bVar1;
  char *pcVar2;
  byte_conflict *_Source;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte_conflict *pbVar6;
  byte_conflict *pbVar7;
  int *unaff_EDI;
  byte_conflict *pbVar8;
  edict_t *in_stack_00000010;
  edict_t *in_stack_00000028;
  byte_conflict *pbStack_24;
  byte_conflict abStack_1c [20];
  char acStack_8 [8];
  
  iVar5 = 0;
  pcVar2 = (*g_engfuncs.pfnCVarGetString)(s_motdfile_1009fff8);
  _Source = (*g_engfuncs.pfnLoadFileForMe)(pcVar2,unaff_EDI);
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100d972c,(float *)0x0,in_stack_00000010);
  pcVar2 = (*g_engfuncs.pfnCVarGetString)(s_hostname_1009ffec);
  (*g_engfuncs.pfnWriteString)(pcVar2);
  (*g_engfuncs.pfnMessageEnd)();
  pbVar7 = _Source;
  do {
    if (((_Source == (byte_conflict *)0x0) || (*_Source == '\0')) || (0x5ff < iVar5)) {
      (*g_engfuncs.pfnFreeFile)(pbVar7);
      return;
    }
    uVar3 = 0xffffffff;
    pbVar6 = _Source;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != '\0');
    if (~uVar3 - 1 < 0x3c) {
      uVar3 = 0xffffffff;
      pbVar7 = _Source;
      do {
        pbVar6 = pbVar7;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pbVar6 = pbVar7 + 1;
        bVar1 = *pbVar7;
        pbVar7 = pbVar6;
      } while (bVar1 != '\0');
      uVar3 = ~uVar3;
      pbVar6 = pbVar6 + -uVar3;
      pbVar8 = abStack_1c;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pbVar8 = *(undefined4 *)pbVar6;
        pbVar6 = pbVar6 + 4;
        pbVar8 = pbVar8 + 4;
      }
      for (uVar3 = uVar3 & 3; pbVar7 = pbStack_24, uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar8 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        pbVar8 = pbVar8 + 1;
      }
    }
    else {
      _strncpy((char *)abStack_1c,(char *)_Source,0x3c);
    }
    uVar3 = 0xffffffff;
    pbVar6 = abStack_1c;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != '\0');
    iVar5 = iVar5 + (~uVar3 - 1);
    if (iVar5 < 0x600) {
      _Source = pbVar7 + iVar5;
    }
    else {
      *_Source = '\0';
    }
    (*g_engfuncs.pfnMessageBegin)(1,DAT_100d9728,(float *)0x0,in_stack_00000028);
    (*g_engfuncs.pfnWriteByte)((uint)(*_Source == '\0'));
    (*g_engfuncs.pfnWriteString)(acStack_8);
    (*g_engfuncs.pfnMessageEnd)();
  } while( true );
}

/* 10059730  CHalfLifeMultiplay::DeathNotice  (215 bytes)
 * undefined DeathNotice(int param_1, int param_2, int param_3, undefined4 param_4)
 * called by: CHalfLifeTeamplay::DeathNotice
 */
void CHalfLifeMultiplay::DeathNotice(int param_1,int param_2,int param_3,char *param_4)

{
  int iVar1;
  edict_t *pEdict;
  int in_stack_0000001c;
  char *in_stack_00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  int in_stack_0000004c;
  
  if ((*(byte *)(param_2 + 0x1a4) & 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_2 + 0x208));
  }
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9714,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(iVar1);
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(in_stack_0000001c + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(iVar1);
  (*g_engfuncs.pfnWriteString)(in_stack_00000030);
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnMessageBegin)(9,0x32,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(3);
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(in_stack_0000001c + 4) + 0x208));
  (*g_engfuncs.pfnWriteShort)(iVar1);
  if (in_stack_0000004c == 0) {
    pEdict = *(edict_t **)(param_2 + 0x208);
  }
  else {
    pEdict = *(edict_t **)(in_stack_0000004c + 0x208);
  }
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
  (*g_engfuncs.pfnWriteShort)(iVar1);
  uStack00000038 = 0x100597f9;
  (*g_engfuncs.pfnWriteLong)(0x27);
  uStack00000040 = 0x10059802;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10059d10  CHalfLifeMultiplay::PlayerKilled  (5689 bytes)
 * undefined PlayerKilled(int * param_1, int * param_2)
 * called by: CHalfLifeTeamplay::PlayerKilled
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CHalfLifeMultiplay::PlayerKilled(CHalfLifeMultiplay *this,int *param_1,int *param_2)

{
  byte bVar1;
  edict_t *peVar2;
  globalvars_t *pgVar3;
  char cVar4;
  edict_t *peVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  void *pvVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  char *pcVar12;
  int iVar13;
  byte_conflict *pbVar14;
  undefined *puVar15;
  uint uVar16;
  CBasePlayer **ppCVar17;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  CBasePlayer *this_00;
  undefined4 unaff_ESI;
  CBasePlayer *pCVar18;
  byte *pbVar19;
  char *pcVar20;
  int **ppiVar21;
  char *pcVar22;
  bool bVar23;
  longlong lVar24;
  ulonglong uVar25;
  int unaff_retaddr;
  entvars_t *in_stack_0000000c;
  entvars_t *in_stack_0000001c;
  int iVar26;
  int iVar27;
  char *pcVar28;
  float fVar29;
  char *pcVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 uVar33;
  undefined2 uVar34;
  char cVar35;
  uint3 in_stack_ffffff34;
  char *pcVar36;
  char *pcStack_bc;
  int *local_b4;
  int iStack_b0;
  int *local_ac;
  CBasePlayer *local_a8;
  CBasePlayer *apCStack_a0 [4];
  CBasePlayer *pCStack_90;
  int *piStack_8c;
  char acStack_74 [32];
  undefined1 auStack_54 [11];
  undefined1 uStack_49;
  char acStack_44 [52];
  int iStack_10;
  CBasePlayer *pCStack_4;
  
  cVar35 = (char)((uint)unaff_EBP >> 0x18);
  peVar5 = (edict_t *)param_2[0x82];
  this_00 = (CBasePlayer *)0x0;
  pcVar12 = (char *)(uint)in_stack_ffffff34;
  iVar13 = 0;
  local_b4 = (int *)0x0;
  if ((peVar5 == (edict_t *)0x0) &&
     (local_a8 = (CBasePlayer *)this, peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0),
     peVar5 == (edict_t *)0x0)) {
    pCVar18 = (CBasePlayer *)0x0;
    local_a8 = (CBasePlayer *)0x0;
  }
  else {
    pCVar18 = peVar5->pvPrivateData;
    local_a8 = pCVar18;
    if ((pCVar18 != (CBasePlayer *)0x0) && (iVar6 = (*pCVar18->vtable[0x11])(), iVar6 == 2)) {
      this_00 = pCVar18;
      apCStack_a0[0] = pCVar18;
    }
  }
  piVar8 = param_2;
  uVar7 = (**(code **)(*(int *)this + 100))();
  uVar34 = (undefined2)((uint)piVar8 >> 0x10);
  if ((((int *)param_2[1] != param_2) && (pCVar18 != (CBasePlayer *)0x0)) &&
     (iVar6 = (*pCVar18->vtable[0x30])(), iVar6 != 0)) {
    TSGetPointsForFrag(param_2,param_2,param_2,uVar7,&stack0xffffff3b,&stack0xffffff36);
    iVar6 = *(int *)(iStack_b0 + 0x9fc);
    if ((((iVar6 != 0) && (*(int *)(iVar6 + 0xbc) != 0)) &&
        ((piVar8 = (int *)EHANDLE::operator->((uint *)(*(int *)(iVar6 + 0xbc) + 0x30)),
         piVar8 == param_2 &&
         ((cVar4 = GetWeaponType(*(int *)(iVar6 + 0xb8)), cVar4 != '\x03' && (cVar4 != '\x02'))))))
       && ((cVar4 != '\v' && (DAT_100da9d8 == '\0')))) {
      pcVar12 = (char *)CONCAT22((short)((uint)pcVar12 >> 0x10),CONCAT11(1,(char)pcVar12));
    }
    if (gpGlobals->time - *(float *)&this_00->field_0x734 < 2.0) {
      unaff_EBX = CONCAT13(1,(int3)unaff_EBX);
    }
    if ((2 < *(byte *)(param_2 + 0x1cc)) && (8 < *(byte *)(param_2 + 0x1cc))) {
      pcVar12 = (char *)CONCAT31((int3)((uint)pcVar12 >> 8),1);
    }
    if (this_00->field_0x730 != -1) {
      this_00->field_0x730 = this_00->field_0x730 + '\x01';
    }
    bVar1 = this_00->field_0x730;
    if (bVar1 < 10) {
      if (bVar1 == 9) {
        pcVar12 = (char *)CONCAT13(1,(int3)pcVar12);
      }
      else if (bVar1 == 6) {
        iVar13 = CONCAT31((int3)((uint)iVar13 >> 8),1);
      }
      else if (bVar1 == 3) {
        iVar13 = CONCAT13((char)((uint)iVar13 >> 0x18),CONCAT12(1,(short)iVar13));
      }
    }
    else {
      iVar13 = CONCAT22((short)((uint)iVar13 >> 0x10),CONCAT11(1,(char)iVar13));
    }
  }
  pgVar3 = gpGlobals;
  uVar7 = 0xffffffff;
  pcVar22 = &stack0xffffff5c;
  pcVar20 = s_world_100a4b48;
  do {
    pcVar28 = pcVar20;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar28 = pcVar20 + 1;
    cVar4 = *pcVar20;
    pcVar20 = pcVar28;
  } while (cVar4 != '\0');
  uVar7 = ~uVar7;
  pcVar20 = pcVar28 + -uVar7;
  pcVar28 = pcVar22;
  for (uVar16 = uVar7 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar28 = *(undefined4 *)pcVar20;
    pcVar20 = pcVar20 + 4;
    pcVar28 = pcVar28 + 4;
  }
  bVar1 = *(byte *)(param_2 + 0x69);
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar28 = *pcVar20;
    pcVar20 = pcVar20 + 1;
    pcVar28 = pcVar28 + 1;
  }
  if ((bVar1 & 8) == 0) {
    if (param_2[0x73] == 0) {
      pcVar20 = pgVar3->pStringBase + *param_2;
    }
    else {
      pcVar20 = pgVar3->pStringBase + param_2[0x73];
    }
LAB_1005a0f8:
    ppCVar17 = (CBasePlayer **)&stack0xffffff5c;
LAB_1005a0fc:
    uVar7 = 0xffffffff;
    do {
      pbVar11 = (byte *)pcVar20;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pbVar11 = (byte *)(pcVar20 + 1);
      bVar1 = *pcVar20;
      pcVar20 = (char *)pbVar11;
    } while (bVar1 != 0);
    uVar7 = ~uVar7;
    pbVar11 = pbVar11 + -uVar7;
    for (uVar16 = uVar7 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *ppCVar17 = *(CBasePlayer **)pbVar11;
      pbVar11 = pbVar11 + 4;
      ppCVar17 = ppCVar17 + 1;
    }
LAB_1005a114:
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(byte *)ppCVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      ppCVar17 = (CBasePlayer **)((int)ppCVar17 + 1);
    }
  }
  else {
    (*g_engfuncs.pfnIndexOfEdict)((edict_t *)param_2[0x82]);
    if (in_stack_0000000c != (entvars_t *)0x0) {
      if (in_stack_0000000c != (entvars_t *)param_2) {
        pbVar19 = &DAT_1009d568;
        pcVar20 = gpGlobals->pStringBase + in_stack_0000000c->classname;
        pbVar11 = (byte *)pcVar20;
        do {
          bVar1 = *pbVar11;
          bVar23 = bVar1 < *pbVar19;
          if (bVar1 != *pbVar19) {
LAB_1005a093:
            iVar6 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_1005a098;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar11[1];
          bVar23 = bVar1 < pbVar19[1];
          if (bVar1 != pbVar19[1]) goto LAB_1005a093;
          pbVar11 = pbVar11 + 2;
          pbVar19 = pbVar19 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_1005a098:
        if (iVar6 == 0) {
          peVar5 = in_stack_0000000c->pContainingEntity;
          if (((peVar5 == (edict_t *)0x0) &&
              (peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar5 == (edict_t *)0x0)) ||
             (peVar5->pvPrivateData == (void *)0x0)) goto LAB_1005a119;
          pcVar20 = CTSKnife::GetDescription((int)peVar5->pvPrivateData);
          ppCVar17 = (CBasePlayer **)&stack0xffffff5c;
        }
        else {
          ppCVar17 = apCStack_a0;
        }
        goto LAB_1005a0fc;
      }
      peVar5 = (edict_t *)param_2[0x82];
      if ((peVar5 == (edict_t *)0x0) &&
         (peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar5 == (edict_t *)0x0)) {
        pvVar9 = (void *)0x0;
      }
      else {
        pvVar9 = peVar5->pvPrivateData;
      }
      if (DAT_100a32b4 != -1) {
        puVar10 = get_weapon_info(DAT_100a32b4);
        pcVar20 = (char *)(puVar10 + 0x11);
        goto LAB_1005a0f8;
      }
      if (DAT_100da9d8 != '\0') {
        ppCVar17 = (CBasePlayer **)&stack0xffffff5c;
        pcVar20 = s_Kung_Fu_100a4b40;
        goto LAB_1005a0fc;
      }
      iVar6 = *(int *)((int)pvVar9 + 0x9fc);
      if (((iVar6 == 0) || (*(int *)(iVar6 + 0x78) != 0x10)) || (*(int *)(iVar6 + 0xbc) == 0))
      goto LAB_1005a119;
      if (DAT_100da9d9 == '\0') {
        puVar10 = get_weapon_info(*(int *)(iVar6 + 0xb8));
        pcVar20 = (char *)(puVar10 + 0x11);
        goto LAB_1005a0f8;
      }
      puVar10 = get_weapon_info(*(int *)(iVar6 + 0xb8));
      uVar7 = 0xffffffff;
      pcVar20 = (char *)(puVar10 + 0x11);
      do {
        pcVar28 = pcVar20;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar28 = pcVar20 + 1;
        cVar4 = *pcVar20;
        pcVar20 = pcVar28;
      } while (cVar4 != '\0');
      uVar7 = ~uVar7;
      pcVar20 = pcVar28 + -uVar7;
      pcVar28 = &stack0xffffff5c;
      for (uVar16 = uVar7 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar28 = *(undefined4 *)pcVar20;
        pcVar20 = pcVar20 + 4;
        pcVar28 = pcVar28 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar28 = *pcVar20;
        pcVar20 = pcVar20 + 1;
        pcVar28 = pcVar28 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar20 = s_Stock_100a4b38;
      do {
        pcVar28 = pcVar20;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar28 = pcVar20 + 1;
        cVar4 = *pcVar20;
        pcVar20 = pcVar28;
      } while (cVar4 != '\0');
      uVar7 = ~uVar7;
      iVar6 = -1;
      pcVar20 = &stack0xffffff5c;
      do {
        pcVar30 = pcVar20;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar30 = pcVar20 + 1;
        cVar4 = *pcVar20;
        pcVar20 = pcVar30;
      } while (cVar4 != '\0');
      pbVar11 = (byte *)(pcVar28 + -uVar7);
      ppCVar17 = (CBasePlayer **)(pcVar30 + -1);
      for (uVar16 = uVar7 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *ppCVar17 = *(CBasePlayer **)pbVar11;
        pbVar11 = pbVar11 + 4;
        ppCVar17 = ppCVar17 + 1;
      }
      goto LAB_1005a114;
    }
  }
LAB_1005a119:
  iVar6 = _strncmp(&stack0xffffff5c,s_weapon__1009ce0c,7);
  if (iVar6 == 0) {
    iVar6 = 7;
LAB_1005a174:
    uVar7 = 0xffffffff;
    pcVar22 = acStack_44;
    pcVar20 = &stack0xffffff5c;
    do {
      pcVar28 = pcVar20;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar28 = pcVar20 + 1;
      cVar4 = *pcVar20;
      pcVar20 = pcVar28;
    } while (cVar4 != '\0');
    uVar7 = ~uVar7;
    pcVar20 = pcVar28 + -uVar7;
    pcVar28 = pcVar22;
    for (uVar16 = uVar7 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar28 = *(undefined4 *)pcVar20;
      pcVar20 = pcVar20 + 4;
      pcVar28 = pcVar28 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar28 = *pcVar20;
      pcVar20 = pcVar20 + 1;
      pcVar28 = pcVar28 + 1;
    }
    uVar7 = 0xffffffff;
    pcVar20 = acStack_44 + iVar6;
    do {
      pcVar28 = pcVar20;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar28 = pcVar20 + 1;
      cVar4 = *pcVar20;
      pcVar20 = pcVar28;
    } while (cVar4 != '\0');
    uVar7 = ~uVar7;
    pcVar20 = pcVar28 + -uVar7;
    pcVar28 = &stack0xffffff5c;
    for (uVar16 = uVar7 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar28 = *(undefined4 *)pcVar20;
      pcVar20 = pcVar20 + 4;
      pcVar28 = pcVar28 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar28 = *pcVar20;
      pcVar20 = pcVar20 + 1;
      pcVar28 = pcVar28 + 1;
    }
  }
  else {
    iVar6 = _strncmp(&stack0xffffff5c,s_monster__100a4b2c,8);
    if (iVar6 == 0) {
      iVar6 = 8;
      goto LAB_1005a174;
    }
    iVar6 = _strncmp(&stack0xffffff5c,s_func__100a4b24,5);
    if (iVar6 == 0) {
      iVar6 = 5;
      goto LAB_1005a174;
    }
  }
  pbVar19 = &DAT_1009d568;
  pbVar11 = &stack0xffffff5c;
  do {
    bVar1 = *pbVar11;
    bVar23 = bVar1 < *pbVar19;
    if (bVar1 != *pbVar19) {
LAB_1005a1f7:
      iVar6 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
      goto LAB_1005a1fc;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar11[1];
    bVar23 = bVar1 < pbVar19[1];
    if (bVar1 != pbVar19[1]) goto LAB_1005a1f7;
    pbVar11 = pbVar11 + 2;
    pbVar19 = pbVar19 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_1005a1fc:
  if (iVar6 == 0) {
    pcVar20 = s_Throwing_Knife_100a4b14;
LAB_1005a28e:
    uVar7 = 0xffffffff;
    do {
      pcVar28 = pcVar20;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar28 = pcVar20 + 1;
      cVar4 = *pcVar20;
      pcVar20 = pcVar28;
    } while (cVar4 != '\0');
    uVar7 = ~uVar7;
    pcVar20 = pcVar28 + -uVar7;
    pcVar28 = &stack0xffffff5c;
    for (uVar16 = uVar7 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar28 = *(undefined4 *)pcVar20;
      pcVar20 = pcVar20 + 4;
      pcVar28 = pcVar28 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar28 = *pcVar20;
      pcVar20 = pcVar20 + 1;
      pcVar28 = pcVar28 + 1;
    }
  }
  else {
    pcVar20 = s_shrapnel_100a437c;
    pbVar11 = &stack0xffffff5c;
    do {
      bVar1 = *pbVar11;
      bVar23 = bVar1 < (byte)*pcVar20;
      if (bVar1 != *pcVar20) {
LAB_1005a23b:
        iVar6 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
        goto LAB_1005a240;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar11[1];
      bVar23 = bVar1 < (byte)pcVar20[1];
      if (bVar1 != pcVar20[1]) goto LAB_1005a23b;
      pbVar11 = pbVar11 + 2;
      pcVar20 = pcVar20 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_1005a240:
    if (iVar6 == 0) {
      pcVar20 = s_Shrapnel_100a4b08;
      goto LAB_1005a28e;
    }
    pcVar20 = s_grenade_100a315c;
    pbVar11 = &stack0xffffff5c;
    do {
      bVar1 = *pbVar11;
      bVar23 = bVar1 < (byte)*pcVar20;
      if (bVar1 != *pcVar20) {
LAB_1005a27c:
        iVar6 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
        goto LAB_1005a281;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar11[1];
      bVar23 = bVar1 < (byte)pcVar20[1];
      if (bVar1 != pcVar20[1]) goto LAB_1005a27c;
      pbVar11 = pbVar11 + 2;
      pcVar20 = pcVar20 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_1005a281:
    if (iVar6 == 0) {
      pcVar20 = s_M61_Grenade_1009aba8;
      goto LAB_1005a28e;
    }
  }
  (**(code **)(*local_ac + 0x6c))();
  iVar6 = -1;
  uVar7 = 0;
  ppiVar21 = &local_b4;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar4 = *(char *)ppiVar21;
    ppiVar21 = (int **)((int)ppiVar21 + 1);
  } while (cVar4 != '\0');
  if (iVar6 != -2) {
    do {
      cVar4 = *(char *)((int)&local_b4 + uVar7);
      if ((cVar4 < 'A') || ('Z' < cVar4)) {
        if (cVar4 == ' ') {
          *(undefined1 *)((int)&local_b4 + uVar7) = 0x5f;
        }
      }
      else {
        *(char *)((int)&local_b4 + uVar7) = cVar4 + ' ';
      }
      uVar16 = 0xffffffff;
      uVar7 = uVar7 + 1;
      ppiVar21 = &local_b4;
      do {
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        cVar4 = *(char *)ppiVar21;
        ppiVar21 = (int **)((int)ppiVar21 + 1);
      } while (cVar4 != '\0');
    } while (uVar7 < ~uVar16 - 1);
  }
  piVar8 = *(int **)(unaff_retaddr + 4);
  if (piVar8 == param_2) {
    peVar5 = (edict_t *)piVar8[0x82];
    if (g_teamplay == 0) {
      (*g_engfuncs.pfnGetPlayerUserId)(peVar5);
      (*g_engfuncs.pfnGetPlayerAuthId)(peVar5);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar5);
      pcVar28 = s___s<_i><_s><_i>__committed_suici_100a4aa8;
    }
    else {
      ppiVar21 = &local_b4;
      pcVar20 = (*g_engfuncs.pfnGetInfoKeyBuffer)(peVar5);
      pcVar28 = (char *)0x1005a342;
      (*g_engfuncs.pfnInfoKeyValue)(pcVar20,(char *)ppiVar21);
      (*g_engfuncs.pfnGetPlayerAuthId)(peVar5);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar5);
    }
LAB_1005a841:
    pcVar20 = (char *)0x1005a846;
    UTIL_LogPrintf((byte_conflict *)pcVar28);
    pCVar18 = pCStack_4;
  }
  else if ((*(byte *)(param_2 + 0x69) & 8) == 0) {
    peVar5 = (edict_t *)piVar8[0x82];
    if (g_teamplay == 0) {
      (*g_engfuncs.pfnGetPlayerUserId)(peVar5);
      (*g_engfuncs.pfnGetPlayerAuthId)(peVar5);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar5);
      pcVar28 = s___s<_i><_s><_i>__committed_suici_100a48e4;
      goto LAB_1005a841;
    }
    ppiVar21 = &local_b4;
    pcVar20 = (char *)0x1005a7a8;
    pcVar28 = (*g_engfuncs.pfnGetInfoKeyBuffer)(peVar5);
    (*g_engfuncs.pfnInfoKeyValue)(pcVar28,(char *)ppiVar21);
    (*g_engfuncs.pfnGetPlayerAuthId)(peVar5);
    (*g_engfuncs.pfnGetPlayerUserId)(peVar5);
    UTIL_LogPrintf((byte_conflict *)s___s<_i><_s><_s>__committed_suici_100a491c);
    pCVar18 = (CBasePlayer *)param_1;
  }
  else {
    if (iVar13 != 0) {
      sprintf(auStack_54,(byte_conflict *)s__stopped_fury___s___100a4a90);
    }
    if ((char)((uint)unaff_ESI >> 8) == '\0') {
      if ((char)((ushort)uVar34 >> 8) == '\0') {
        if ((char)unaff_ESI == '\0') {
          if ((char)((uint)unaff_ESI >> 0x10) == '\0') {
            acStack_74[0] = '\0';
          }
          else {
            uVar7 = 0xffffffff;
            pcVar12 = s__is_killer__100a4a44;
            do {
              pcVar22 = pcVar12;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar22 = pcVar12 + 1;
              cVar35 = *pcVar12;
              pcVar12 = pcVar22;
            } while (cVar35 != '\0');
            uVar7 = ~uVar7;
            pcVar12 = pcVar22 + -uVar7;
            pcVar22 = acStack_74;
            for (uVar16 = uVar7 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar22 = pcVar22 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar22 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar22 = pcVar22 + 1;
            }
          }
        }
        else {
          uVar7 = 0xffffffff;
          pcVar12 = s__is_demolition__100a4a54;
          do {
            pcVar22 = pcVar12;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar22 = pcVar12 + 1;
            cVar35 = *pcVar12;
            pcVar12 = pcVar22;
          } while (cVar35 != '\0');
          uVar7 = ~uVar7;
          pcVar12 = pcVar22 + -uVar7;
          pcVar22 = acStack_74;
          for (uVar16 = uVar7 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar22 = pcVar22 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar22 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar22 = pcVar22 + 1;
          }
        }
      }
      else {
        uVar7 = 0xffffffff;
        pcVar12 = s__is_specialist__100a4a68;
        do {
          pcVar22 = pcVar12;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar22 = pcVar12 + 1;
          cVar35 = *pcVar12;
          pcVar12 = pcVar22;
        } while (cVar35 != '\0');
        uVar7 = ~uVar7;
        pcVar12 = pcVar22 + -uVar7;
        pcVar22 = acStack_74;
        for (uVar16 = uVar7 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar22 = pcVar22 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar22 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar22 = pcVar22 + 1;
        }
      }
    }
    else {
      uVar7 = 0xffffffff;
      pcVar12 = s__is_unstoppable__100a4a7c;
      do {
        pcVar22 = pcVar12;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar22 = pcVar12 + 1;
        cVar35 = *pcVar12;
        pcVar12 = pcVar22;
      } while (cVar35 != '\0');
      uVar7 = ~uVar7;
      pcVar12 = pcVar22 + -uVar7;
      pcVar22 = acStack_74;
      for (uVar16 = uVar7 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar22 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar22 = pcVar22 + 1;
      }
    }
    cVar4 = (char)((uint)unaff_ESI >> 0x18);
    if (g_teamplay == 0) {
      cVar35 = '\x10';
      pcVar12 = s__sliding__100a4a24;
      if (cVar4 == '\0') {
        pcVar12 = &DAT_100a9398;
      }
      pcVar20 = s__diving__100a4a18;
      if ((char)uVar34 == '\0') {
        pcVar20 = &DAT_100a9398;
      }
      peVar5 = (edict_t *)param_2[0x82];
      peVar2 = *(edict_t **)(*(int *)(iStack_10 + 4) + 0x208);
      pcVar22 = pcVar20;
      (*g_engfuncs.pfnGetPlayerUserId)(peVar2);
      (*g_engfuncs.pfnGetPlayerAuthId)(peVar2);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar2);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar5);
      (*g_engfuncs.pfnGetPlayerAuthId)(peVar5);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar5);
      UTIL_LogPrintf((byte_conflict *)s___s<_i><_s><_i>__killed___s<_i><_100a4954);
      param_2 = &in_stack_0000000c->classname;
      this_00 = apCStack_a0[0];
      pCVar18 = pCStack_4;
    }
    else {
      pcVar22 = s__killed_the_one__100a4a30;
      if (*(char *)(iStack_10 + 0x7a5) == '\0') {
        pcVar22 = &DAT_100a9398;
      }
      pcVar12 = s__sliding__100a4a24;
      if (cVar4 == '\0') {
        pcVar12 = &DAT_100a9398;
      }
      pcVar20 = s__diving__100a4a18;
      if ((char)uVar34 == '\0') {
        pcVar20 = &DAT_100a9398;
      }
      peVar5 = (edict_t *)param_2[0x82];
      peVar2 = *(edict_t **)(*(int *)(iStack_10 + 4) + 0x208);
      ppiVar21 = &local_b4;
      pcVar28 = pcVar20;
      pcVar30 = (*g_engfuncs.pfnGetInfoKeyBuffer)(peVar2);
      cVar35 = (char)((uint)pcVar28 >> 0x18);
      (*g_engfuncs.pfnInfoKeyValue)(pcVar30,(char *)ppiVar21);
      (*g_engfuncs.pfnGetPlayerAuthId)(peVar2);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar2);
      pcVar28 = gpGlobals->pStringBase + *(int *)(param_1[1] + 0x1d0);
      pcVar30 = (*g_engfuncs.pfnGetInfoKeyBuffer)(peVar5);
      (*g_engfuncs.pfnInfoKeyValue)(pcVar30,pcVar28);
      (*g_engfuncs.pfnGetPlayerAuthId)(peVar5);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar5);
      UTIL_LogPrintf((byte_conflict *)s___s<_i><_s><_s>__killed___s<_i><_100a4998);
      param_2 = &in_stack_0000001c->classname;
      this_00 = pCStack_90;
      pCVar18 = pCStack_4;
    }
  }
  pcVar30 = s_game_playerdie_100a48d4;
  *(int *)&pCVar18->field_0xb1c = *(int *)&pCVar18->field_0xb1c + 1;
  fVar29 = 2.6359376e-29;
  pcVar28 = (char *)pCVar18;
  FireTargets(0x100a48d4,pCVar18,pCVar18,3,0);
  if (pCVar18->field_0x7a5 != '\0') {
    pcVar28 = (char *)0x1005a886;
    CTSGameRules::TheOneIsDead((CTSGameRules *)&TSGameRules,(int *)pCVar18,(int *)this_00);
    pCVar18->field_0x730 = 0;
  }
  if (pCVar18->pev == (entvars_t *)param_2) {
    if (8 < (byte)pCVar18->field_0x730) {
      ((entvars_t *)param_2)->frags = ((entvars_t *)param_2)->frags - 5.0;
      pcVar12 = UTIL_VarArgs((byte_conflict *)s__s___TS_SpecialistSuicide_100a48b8);
      TSHudMessageAll(0,0xff,0,1,0x1e,pcVar12);
    }
  }
  else if ((local_b4 != (int *)0x0) && (iVar13 = (**(code **)(*local_b4 + 0xc0))(), iVar13 != 0)) {
    pcVar36 = pcVar22;
    if ((((((entvars_t *)param_2)->iuser4 & 0x10c10U) != 0) ||
        ((DAT_100da9d8 != '\0' || (2 < (int)pcVar22)))) &&
       (uVar25 = DoSpectacularNess(), (int)uVar25 != 0)) {
      uVar33 = 0;
      uVar32 = 0;
      pcVar28 = (char *)0x3f800000;
      uVar31 = 0x3e800000;
      Vector::Vector((Vector *)&stack0xffffff00,pCStack_4->pev->origin);
      CTSSlowMotionPoint::CreateSlowMotionPoint
                (pcVar20,fVar29,pcVar30,uVar31,(float)pcVar28,uVar32,uVar33);
    }
    if (0 < (int)pcVar22) {
      if (DAT_100da9da != '\0') {
        pcVar28 = UTIL_VarArgs((byte_conflict *)s__TS_Headshot__TS_FrgFr__s__100a489c);
        TSHudMessageAll(0,0xff,0,1,0x14,pcVar28);
      }
      if (((((param_1 == param_2) && (this_00 != (CBasePlayer *)0x0)) &&
           (iVar13 = *(int *)&this_00->field_0x9fc, iVar13 != 0)) &&
          ((*(int *)(iVar13 + 0x78) == 0x10 && (*(int *)(iVar13 + 0xbc) != 0)))) &&
         (DAT_100da9d8 == '\0')) {
        puVar10 = get_weapon_info(*(int *)(iVar13 + 0xb8));
        if (*(char *)(puVar10 + 0xd2) == '\x03') {
          pcVar20 = s__TS_KnifeKill__TS_FrgFr__s__100a4880;
        }
        else {
          puVar10 = get_weapon_info(*(int *)(iVar13 + 0xb8));
          if (*(char *)(puVar10 + 0xd2) != '\n') goto LAB_1005abd8;
          pcVar20 = s__TS_KatanaKill__TS_FrgFr__s__100a4860;
        }
        pcVar28 = UTIL_VarArgs((byte_conflict *)pcVar20);
        TSHudMessageAll(0,0xff,0,1,0x14,pcVar28);
      }
LAB_1005abd8:
      if (DAT_100da9d9 != '\0') {
        pcVar28 = UTIL_VarArgs((byte_conflict *)s__TS_Coldcock__TS_FrgFr__s__100a4844);
        TSHudMessageAll(0,0xff,0,1,0x14,pcVar28);
      }
      if (cVar35 != '\0') {
        pcVar22 = (char *)((int)pcVar22 * 2);
        pcVar36 = pcVar22;
        pcVar28 = UTIL_VarArgs((byte_conflict *)s__TS_Doublefrag__TS_FrgFr__s__100a4824);
        TSHudMessageAll(0,0xff,0,1,0x14,pcVar28);
      }
      if (pcStack_bc != (char *)0x0) {
        if ((char)unaff_EBX != '\0') {
          pcVar22 = pcVar22 + 5;
          pcVar36 = pcVar22;
          pcVar20 = UTIL_VarArgs((byte_conflict *)s__i__TS_Frg__TS_FrgFr__s___TS_Kil_100a47f0);
          TSHudMessageAll(0,0xff,0,1,0x1e,pcVar20);
          if ((*(int *)&this_00->field_0x710 == 0) && (*(int *)&this_00->field_0x714 == 0)) {
            *(undefined4 *)&this_00->field_0x710 = 0;
            *(undefined4 *)&this_00->field_0x714 = 8;
            *(undefined4 *)&this_00->field_0x718 = 0;
            *(undefined4 *)&this_00->field_0x71c = 2;
          }
        }
        (*g_engfuncs.pfnRandomLong)(1,10);
        pcVar28 = acStack_74 + 0x14;
        sprintf(pcVar28,(byte_conflict *)s__TS_SpreeKilled_i_100a47dc);
        uStack_49 = 0;
        pcVar20 = UTIL_VarArgs((byte_conflict *)s__s__s_1009cd18);
        TSHudMessageAll(0,0xff,0,1,0x1e,pcVar20);
      }
      if ((char)((uint)pcVar12 >> 8) == '\0') {
        if ((char)((uint)unaff_EBX >> 0x18) == '\0') {
          if ((char)pcVar12 == '\0') {
            if ((char)((uint)pcVar12 >> 0x10) == '\0') goto LAB_1005afd9;
            fVar29 = this_00->pev->health + 30.0;
            if (150.0 <= fVar29) {
              fVar29 = 150.0;
            }
            this_00->pev->health = fVar29;
            uVar31 = 0x23;
            this_00->field_0x738 = (-(this_00->field_0x738 != '\n') & 0xf8U) + 10;
          }
          else {
            fVar29 = this_00->pev->health + 60.0;
            if (150.0 <= fVar29) {
              fVar29 = 150.0;
            }
            this_00->pev->health = fVar29;
            uVar31 = 0x2d;
            this_00->field_0x738 = (-(this_00->field_0x738 != '\n') & 0xf9U) + 10;
          }
          (*g_engfuncs.pfnRandomLong)(1,0x10);
          pcVar28 = acStack_74 + 0x14;
          sprintf(pcVar28,(byte_conflict *)s__TS_KillSpree_i_100a4790);
          uStack_49 = 0;
          pcVar12 = UTIL_VarArgs((byte_conflict *)s__s__s__i__TS_ConsKills_100a4778);
          TSHudMessageAll(0,0xff,0,1,uVar31,pcVar12);
          pcVar22 = pcStack_bc;
        }
        else {
          pcVar12 = UTIL_VarArgs((byte_conflict *)s__s__TS_Specialist_100a47a0);
          TSHudMessageAll(0,0xff,0,1,0x37,pcVar12);
          if (this_00->pev->health < 150.0) {
            this_00->pev->health = 150.0;
          }
          this_00->field_0x73a = 1;
          this_00->field_0x73b = 1;
          (*g_engfuncs.pfnSetPhysicsKeyValue)
                    (this_00->pev->pContainingEntity,&DAT_1009ce1c,&DAT_1009ce20);
          (*g_engfuncs.pfnMessageBegin)(1,DAT_100d978c,(float *)0x0,this_00->pev->pContainingEntity)
          ;
          (*g_engfuncs.pfnWriteShort)(4);
          (*g_engfuncs.pfnWriteByte)(0);
          (*g_engfuncs.pfnMessageEnd)();
          pcVar28 = (char *)DAT_100d978c;
          (*g_engfuncs.pfnMessageBegin)(1,DAT_100d978c,(float *)0x0,this_00->pev->pContainingEntity)
          ;
          (*g_engfuncs.pfnWriteShort)(0x100);
          (*g_engfuncs.pfnWriteByte)(0);
          local_ac = (int *)0x1005ae79;
          (*g_engfuncs.pfnMessageEnd)();
          if ((*(int *)&this_00->field_0x710 == 0) && (*(int *)&this_00->field_0x714 == 0)) {
            *(undefined4 *)&this_00->field_0x710 = 0;
            *(undefined4 *)&this_00->field_0x714 = 8;
            *(undefined4 *)&this_00->field_0x718 = 0;
            *(undefined4 *)&this_00->field_0x71c = 2;
          }
          this_00->field_0x738 = (-(this_00->field_0x738 != '\n') & 0xfaU) + 10;
        }
      }
      else {
        pcVar28 = s__TS_Unstoppable__s___i__TS_ConsK_100a47b4;
        pcVar12 = UTIL_VarArgs((byte_conflict *)s__TS_Unstoppable__s___i__TS_ConsK_100a47b4);
        TSHudMessageAll(0,0xff,0,1,0x1e,pcVar12);
        pcVar36 = (char *)((int)pcVar22 * 2);
        pcVar22 = pcVar36;
      }
LAB_1005afd9:
      if (100.0 < this_00->pev->health) {
        *(float *)&this_00->field_0x728 = gpGlobals->time + 1.0;
      }
      if (cVar35 == '\0') {
        *(float *)&this_00->field_0x734 = gpGlobals->time;
      }
      else {
        *(undefined4 *)&this_00->field_0x734 = 0;
      }
      if (pcVar22 == (char *)0xffffffff) {
        iVar13 = -1000;
      }
      else {
        iVar13 = (int)pcVar22 * 500 + 400;
      }
      CBasePlayer::GiveCash(this_00,iVar13);
      CBasePlayer::GiveCash(pCStack_4,900);
    }
    cVar35 = (char)((uint)unaff_EBX >> 8);
    pCVar18 = pCStack_4;
    if ((TSGameRules != '\0') && (TSGameRules != '\x01')) {
      CBasePlayer::GiveCash(this_00,(-(uint)(pcVar22 != (char *)0xffffffff) & 2000) - 1000);
      CBasePlayer::GiveCash(pCStack_4,1000);
      pCVar18 = pCStack_4;
    }
    if (cVar35 != '\0') {
      pcVar28 = s__s__TS_Killed__s__TS_OwnWeapon_100a4758;
      pcVar12 = UTIL_VarArgs((byte_conflict *)s__s__TS_Killed__s__TS_OwnWeapon_100a4758);
      TSHudMessageAll(0,0xff,0,1,0x1e,pcVar12);
    }
    ((entvars_t *)param_2)->frags = (float)(int)pcVar36 + ((entvars_t *)param_2)->frags;
    pbVar14 = (byte_conflict *)(*this_00->vtable[0x32])();
    CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pbVar14);
    FUN_1003aca0();
    FireTargets(0x100a4748,pcVar28,pcVar28,3,0);
    if ((_DAT_1009ed74 == 1.0) && (this_00 != (CBasePlayer *)0x0)) {
      if (0 < (int)pcVar22) {
        if (((*(uint *)&this_00->field_0x714 == 0) || ((*(uint *)&this_00->field_0x714 & 1) != 0))
           && (*(int *)&this_00->field_0x710 == 0)) {
          *(undefined4 *)&this_00->field_0x710 = 0;
          *(undefined4 *)&this_00->field_0x714 = 1;
          if (*(int *)&this_00->field_0x71c + 1 < 3) {
            iVar13 = *(int *)&this_00->field_0x71c + 1;
          }
          else {
            iVar13 = 3;
          }
          *(int *)&this_00->field_0x71c = iVar13;
        }
        goto LAB_1005b190;
      }
    }
    else {
LAB_1005b190:
      if (((0 < (int)pcVar22) && (this_00 != (CBasePlayer *)0x0)) &&
         (*(int *)&this_00->field_0x14c != 0)) {
        CBot::OnKill((CBot *)this_00,(int)pCVar18->pev);
      }
    }
    if (pcVar22 == (char *)0xffffffff) {
      if ((*(float *)&this_00->field_0x7b0 == 0.0) ||
         (*(float *)&this_00->field_0x7b0 < gpGlobals->time)) {
        fVar29 = gpGlobals->time;
        this_00->field_0x7b4 = 1;
        *(float *)&this_00->field_0x7b0 = fVar29 + 30.0;
      }
      else if (gpGlobals->time < *(float *)&this_00->field_0x7b0) {
        fVar29 = gpGlobals->time;
        this_00->field_0x7b4 = this_00->field_0x7b4 + '\x01';
        *(float *)&this_00->field_0x7b0 = fVar29 + 30.0;
      }
      if ('\x02' < (char)this_00->field_0x7b4) {
        iVar27 = 0;
        iVar26 = 0;
        iVar6 = 0;
        iVar13 = 0;
        if (_DAT_1009eedc <= 0.0) {
          ClientPrint((int)param_2,2,s_You_have_been_kicked_for_teamkil_100a46a8,0,0,0,0);
          (*g_engfuncs.pfnGetPlayerUserId)(this_00->pev->pContainingEntity);
          pcVar12 = UTIL_VarArgs((byte_conflict *)s_kick___i_100a469c);
          (*g_engfuncs.pfnServerCommand)(pcVar12);
          fVar29 = 0.0;
          iVar26 = 0;
          iVar6 = 0;
          iVar13 = 0;
          puVar15 = UTIL_VarArgs((byte_conflict *)s__s_kicked_for_teamkilling_100a4680);
          UTIL_ClientPrintAll(3,puVar15,iVar13,iVar6,iVar26,(int)fVar29);
        }
        else {
          __ftol();
          puVar15 = UTIL_VarArgs((byte_conflict *)s_You_have_been_banned_for_teamkil_100a4710);
          ClientPrint((int)param_2,2,puVar15,iVar13,iVar6,iVar26,iVar27);
          (*g_engfuncs.pfnGetPlayerUserId)(this_00->pev->pContainingEntity);
          __ftol();
          pcVar12 = UTIL_VarArgs((byte_conflict *)s_banid__i___i_kick_100a46fc);
          (*g_engfuncs.pfnServerCommand)(pcVar12);
          fVar29 = 0.0;
          iVar26 = 0;
          iVar6 = 0;
          iVar13 = 0;
          __ftol();
          puVar15 = UTIL_VarArgs((byte_conflict *)s__s_banned_for_teamkilling___i_mi_100a46d4);
          UTIL_ClientPrintAll(3,puVar15,iVar13,iVar6,iVar26,(int)fVar29);
        }
      }
    }
    goto LAB_1005a8ff;
  }
  ((entvars_t *)param_2)->frags = ((entvars_t *)param_2)->frags - 1.0;
  pCVar18 = pCStack_4;
LAB_1005a8ff:
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9718,(float *)0x0,(edict_t *)0x0);
  iVar13 = (*g_engfuncs.pfnIndexOfEdict)(pCVar18->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(iVar13);
  lVar24 = __ftol();
  (*g_engfuncs.pfnWriteShort)((int)lVar24);
  (*g_engfuncs.pfnWriteShort)(*(int *)&pCVar18->field_0xb1c);
  (*g_engfuncs.pfnWriteShort)(0);
  iVar13 = (**(code **)(*piStack_8c + 200))();
  (*g_engfuncs.pfnWriteShort)(iVar13 + 1);
  (*g_engfuncs.pfnMessageEnd)();
  peVar5 = ((entvars_t *)param_2)->pContainingEntity;
  if ((((peVar5 != (edict_t *)0x0) ||
       (peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar5 != (edict_t *)0x0)) &&
      (piVar8 = peVar5->pvPrivateData, piVar8 != (int *)0x0)) &&
     (iVar13 = (**(code **)(*piVar8 + 0x44))(), iVar13 == 2)) {
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9718,(float *)0x0,(edict_t *)0x0);
    iVar13 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(piVar8[1] + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar13);
    lVar24 = __ftol();
    (*g_engfuncs.pfnWriteShort)((int)lVar24);
    (*g_engfuncs.pfnWriteShort)(piVar8[0x2c7]);
    (*g_engfuncs.pfnWriteShort)(0);
    apCStack_a0[0] = (CBasePlayer *)(piVar8 + 0x2cd);
    iVar13 = (**(code **)(*piStack_8c + 200))();
    local_a8 = (CBasePlayer *)0x1005aa23;
    (*g_engfuncs.pfnWriteShort)(iVar13 + 1);
    apCStack_a0[0] = (CBasePlayer *)0x1005aa2c;
    (*g_engfuncs.pfnMessageEnd)();
    piVar8[0x2cc] = (int)gpGlobals->time;
  }
  CTSGameRules::CallCheckDeads(0x100c0a48);
  return;
}

/* 1005b3a0  CHalfLifeMultiplay::IsValidTeam  (205 bytes)
 * bool IsValidTeam(byte.conflict * param_1)
 */
bool __thiscall CHalfLifeMultiplay::IsValidTeam(CHalfLifeMultiplay *this,byte_conflict *param_1)

{
  uint uVar1;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  void *this_07;
  
  uVar1 = FUN_100887b0(this,param_1,(byte_conflict *)s_barney_100a4b94);
  if (uVar1 == 0) {
    return false;
  }
  uVar1 = FUN_100887b0(this_00,param_1,&DAT_100a4b8c);
  if (uVar1 == 0) {
    return false;
  }
  uVar1 = FUN_100887b0(this_01,param_1,&DAT_100a4b84);
  if (uVar1 == 0) {
    return false;
  }
  uVar1 = FUN_100887b0(this_02,param_1,(byte_conflict *)s_helmet_100a4b7c);
  if (uVar1 == 0) {
    return false;
  }
  uVar1 = FUN_100887b0(this_03,param_1,(byte_conflict *)s_hgrunt_100a4b74);
  if (uVar1 == 0) {
    return false;
  }
  uVar1 = FUN_100887b0(this_04,param_1,(byte_conflict *)s_recon_100a4b6c);
  if (uVar1 == 0) {
    return false;
  }
  uVar1 = FUN_100887b0(this_05,param_1,&DAT_100a4b64);
  if (uVar1 == 0) {
    return false;
  }
  uVar1 = FUN_100887b0(this_06,param_1,(byte_conflict *)s_scientist_100a4b58);
  if (uVar1 == 0) {
    return false;
  }
  uVar1 = FUN_100887b0(this_07,param_1,(byte_conflict *)s_zombie_100a4b50);
  return uVar1 != 0;
}

/* 1005b470  CHalfLifeMultiplay::ClientUserInfoChanged  (285 bytes)
 * undefined ClientUserInfoChanged(int * param_1, undefined4 param_2)
 * called by: CHalfLifeTeamplay::ClientUserInfoChanged
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
CHalfLifeMultiplay::ClientUserInfoChanged(CHalfLifeMultiplay *this,int *param_1,char *param_2)

{
  bool bVar1;
  int clientIndex;
  char *pcVar2;
  byte_conflict *pbVar3;
  uint uVar4;
  int iVar5;
  void *this_00;
  char *unaff_EBX;
  char *unaff_ESI;
  char *in_stack_0000000c;
  char *key;
  int *key_00;
  int *piStack_3f8;
  undefined1 auStack_3e0 [992];
  
  clientIndex = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1[1] + 0x208));
  bVar1 = PlayerIsCheating((int)param_1,in_stack_0000000c);
  if (bVar1) {
    key = &DAT_1009ce20;
    pcVar2 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(param_1[1] + 0x208));
    (*g_engfuncs.pfnSetClientKeyValue)(clientIndex,pcVar2,key,unaff_ESI);
    return;
  }
  pbVar3 = (byte_conflict *)(*g_engfuncs.pfnInfoKeyValue)(in_stack_0000000c,s_model_1009cca4);
  key_00 = param_1 + 0x2cd;
  uVar4 = FUN_100887b0(this_00,pbVar3,(byte_conflict *)key_00);
  if (uVar4 != 0) {
    if ((_DAT_1009ec9c == 0.0) && (iVar5 = (**(code **)(*piStack_3f8 + 0xec))(pbVar3), iVar5 != 0))
    {
      return;
    }
    pcVar2 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(param_1[1] + 0x208));
    (*g_engfuncs.pfnSetClientKeyValue)(clientIndex,pcVar2,(char *)key_00,unaff_EBX);
    sprintf(auStack_3e0,(byte_conflict *)s___Can_t_change_team_to___s__100a27a4);
    FUN_10076e00(auStack_3e0,param_1);
    sprintf(auStack_3e0,(byte_conflict *)s___HLDM_models_not_allowed__100a4b9c);
    FUN_10076e00(auStack_3e0,param_1);
  }
  return;
}

