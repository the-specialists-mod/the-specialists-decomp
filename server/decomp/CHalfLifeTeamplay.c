/* ts_i386.so - CHalfLifeTeamplay (22 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e3e48  CHalfLifeTeamplay::CHalfLifeTeamplay  (740 bytes)
 * undefined CHalfLifeTeamplay(void)
 */
/* CHalfLifeTeamplay::CHalfLifeTeamplay(void) */

void __thiscall CHalfLifeTeamplay::CHalfLifeTeamplay(CHalfLifeTeamplay *this)

{
  char cVar1;
  CHalfLifeTeamplay CVar2;
  edict_t *peVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  CHalfLifeTeamplay *pCVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int local_820;
  char local_81c [2060];
  
  CHalfLifeMultiplay::CHalfLifeMultiplay((CHalfLifeMultiplay *)this);
  *(undefined1 **)this = CHalfLifeTeamplay_virtual_table;
  CTSGameRules::Init((CTSGameRules *)&TSGameRules);
  CTSGameRules::InitTeamScore();
  *(undefined4 *)(this + 0x20c) = 0;
  *(undefined4 *)(this + 0x210) = 0;
  memset(team_names,0,0x200);
  puVar8 = &team_scores;
  for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  num_teams = 0;
  this[0xc] = (CHalfLifeTeamplay)0x0;
  local_81c[0] = '\0';
  iVar5 = -1;
  pcVar4 = &g_teamModels;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (iVar5 != -2) {
    strcpy(local_81c,&g_teamModels);
  }
  g_teamModels = 0;
  peVar3 = (*g_engfuncs.pfnPEntityOfEntIndex)(0);
  if ((((peVar3 != (edict_t *)0x0) && ((peVar3->v).team != 0)) &&
      ((float)teamoverride._12_4_ != 0.0)) &&
     (pcVar4 = gpGlobals->pStringBase + (peVar3->v).team, pcVar4 != (char *)0x0)) {
    iVar5 = -1;
    pcVar9 = pcVar4;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (iVar5 != -2) {
      strncpy((char *)(this + 0xc),pcVar4,0x200);
    }
  }
  if (1 < g_teamplay - 2U) {
    iVar5 = -1;
    pCVar7 = this + 0xc;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      CVar2 = *pCVar7;
      pCVar7 = pCVar7 + 1;
    } while (CVar2 != (CHalfLifeTeamplay)0x0);
    if (iVar5 == -2) {
      strncpy((char *)(this + 0xc),(char *)teamlist._4_4_,0x200);
    }
    iVar5 = -1;
    pcVar4 = local_81c;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar5 == -2) {
      strncpy(local_81c,(char *)teammodels._4_4_,0x800);
    }
  }
  iVar5 = -1;
  pCVar7 = this + 0xc;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    CVar2 = *pCVar7;
    pCVar7 = pCVar7 + 1;
  } while (CVar2 != (CHalfLifeTeamplay)0x0);
  if (iVar5 != -2) {
    CTSGameRules::SetTeamList((CTSGameRules *)&TSGameRules,(char *)(this + 0xc));
  }
  this[0xc] = (CHalfLifeTeamplay)0x0;
  local_820 = 0;
  puVar6 = &TSGameRules;
  pCVar7 = this + 0xc;
  pcVar4 = &DAT_001781c8;
  do {
    if (puVar6[0x28] != '\0') {
      strcat((char *)pCVar7,pcVar4);
      strcat((char *)pCVar7,";");
    }
    if (puVar6[0xb4] != '\0') {
      strcat((char *)pCVar7,pcVar4 + 0x8c);
      strcat((char *)pCVar7,";");
    }
    pcVar4 = pcVar4 + 0x118;
    puVar6 = puVar6 + 0x118;
    local_820 = local_820 + 2;
  } while (local_820 < 4);
  *(undefined4 *)(this + 0x214) = 1;
  iVar5 = -1;
  pcVar4 = local_81c;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (iVar5 != -2) {
    CTSGameRules::SetTeamModelList((CTSGameRules *)&TSGameRules,local_81c);
  }
  RecountTeams(this,'\0');
  return;
}

/* 000e412c  CHalfLifeTeamplay::Think  (662 bytes)
 * undefined Think(void)
 */
/* CHalfLifeTeamplay::Think(void) */

void __thiscall CHalfLifeTeamplay::Think(CHalfLifeTeamplay *this)

{
  int iVar1;
  undefined4 uVar2;
  CTSGameRules CVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  longdouble lVar8;
  int local_20;
  int local_1c;
  
  local_1c = 0;
  CVoiceGameMgr::Update((CVoiceGameMgr *)g_VoiceGameMgr,(double)gpGlobals->frametime);
  if (g_fGameOver == 0) {
    lVar8 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("mp_timelimit");
    uVar2 = fraglimit._12_4_;
    lVar8 = lVar8 * (longdouble)60.0;
    if (lVar8 == (longdouble)0.0) {
      local_20 = 0;
    }
    else {
      local_20 = (int)ROUND(lVar8 - (longdouble)gpGlobals->time);
    }
    if ((lVar8 == (longdouble)0.0) || ((longdouble)gpGlobals->time < lVar8)) {
      if ((float)fraglimit._12_4_ != 0.0) {
        local_1c = 9999;
        CVar3 = CTSGameRules::IsCTB((CTSGameRules *)&TSGameRules);
        if (CVar3 == (CTSGameRules)0x0) {
          iVar5 = 0;
          if (0 < num_teams) {
            piVar6 = &team_scores;
            do {
              if ((float)uVar2 <= (float)*piVar6) goto LAB_000e43af;
              iVar7 = (int)ROUND((float)uVar2 - (float)*piVar6);
              if (iVar7 < local_1c) {
                local_1c = iVar7;
              }
              piVar6 = piVar6 + 1;
              iVar5 = iVar5 + 1;
            } while (iVar5 < num_teams);
          }
        }
        else {
          iVar5 = 0;
          iVar7 = 0;
          do {
            if (((&DAT_001781c8)[iVar7] != '\0') &&
               ((float)uVar2 <= (float)*(int *)((int)&DAT_001781c4 + iVar7))) goto LAB_000e43af;
            iVar1 = (int)ROUND((float)uVar2 - (float)*(int *)((int)&DAT_001781c4 + iVar7));
            if (iVar1 < local_1c) {
              local_1c = iVar1;
            }
            iVar7 = iVar7 + 0x8c;
            iVar5 = iVar5 + 1;
          } while (iVar5 < 4);
        }
      }
      if (local_1c != last_frags_1191) {
        pcVar4 = UTIL_VarArgs("%i",local_1c);
        (*g_engfuncs.pfnCvar_DirectSet)((cvar_s *)fragsleft,pcVar4);
      }
      if ((float)last_time_1192 != (float)timeleft._12_4_) {
        pcVar4 = UTIL_VarArgs("%i",local_20);
        (*g_engfuncs.pfnCvar_DirectSet)((cvar_s *)timeleft,pcVar4);
      }
      last_frags_1191 = local_1c;
      last_time_1192 = local_20;
      CTSGameRules::Think((CTSGameRules *)&TSGameRules);
      if (DAT_001799c4 == '\0') {
        return;
      }
    }
LAB_000e43af:
    (**(code **)(*(int *)this + 0xfc))(this);
  }
  else {
    CHalfLifeMultiplay::Think((CHalfLifeMultiplay *)this);
  }
  return;
}

/* 000e43c8  CHalfLifeTeamplay::ClientCommand  (140 bytes)
 * undefined4 ClientCommand(undefined4 this, int * param_2, char * param_3)
 */
/* CHalfLifeTeamplay::ClientCommand(CBasePlayer *, char const *) */

undefined4 __thiscall CHalfLifeTeamplay::ClientCommand(undefined4 this,int *param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  uVar1 = CVoiceGameMgr::ClientCommand((CVoiceGameMgr *)g_VoiceGameMgr,param_2,param_3);
  if ((char)uVar1 == '\0') {
    iVar2 = strcmp(param_3,"menuselect");
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = (*g_engfuncs.pfnCmd_Argc)();
    if (1 < iVar2) {
      pcVar3 = (*g_engfuncs.pfnCmd_Argv)(1);
      __strtol_internal(pcVar3,0,10,0);
    }
  }
  return 1;
}

/* 000e4458  CHalfLifeTeamplay::UpdateGameMode  (82 bytes)
 * undefined UpdateGameMode(undefined4 this, int * param_2)
 */
/* CHalfLifeTeamplay::UpdateGameMode(CBasePlayer *) */

void __thiscall CHalfLifeTeamplay::UpdateGameMode(undefined4 this,int *param_2)

{
  (*g_engfuncs.pfnMessageBegin)(1,gmsgGameMode,(float *)0x0,*(edict_t **)(*param_2 + 0x208));
  (*g_engfuncs.pfnWriteByte)(g_teamplay);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000e44ac  CHalfLifeTeamplay::SetDefaultPlayerTeam  (297 bytes)
 * int * SetDefaultPlayerTeam(int * param_1)
 */
/* CHalfLifeTeamplay::SetDefaultPlayerTeam(CBasePlayer *) */

int * __thiscall CHalfLifeTeamplay::SetDefaultPlayerTeam(CHalfLifeTeamplay *this,int *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined1 *__src;
  
  if (TSGameRules < 2) {
    if (g_theOneMode == 0) {
      pcVar1 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(*param_1 + 0x208));
      pcVar1 = (*g_engfuncs.pfnInfoKeyValue)(pcVar1,"team");
    }
    else if (*(char *)((int)param_1 + 0x7b9) == '\0') {
      pcVar1 = &DAT_00178254;
    }
    else {
      pcVar1 = &DAT_001781c8;
    }
    strncpy((char *)(param_1 + 0x2d2),pcVar1,0x10);
  }
  RecountTeams(this,'\x01');
  if ((char)param_1[0x2d2] != '\0') {
    iVar2 = (**(code **)(*(int *)this + 0xd8))(this,param_1 + 0x2d2);
    if ((iVar2 != 0) && ((float)defaultteam._12_4_ == 0.0)) goto LAB_000e45c9;
  }
  __src = team_names;
  if ((float)defaultteam._12_4_ == 0.0) {
    __src = TeamWithFewestPlayers(this);
  }
  strncpy((char *)(param_1 + 0x2d2),__src,0x10);
LAB_000e45c9:
  return param_1 + 0x2d2;
}

/* 000e45d8  CHalfLifeTeamplay::InitHUD  (686 bytes)
 * undefined InitHUD(int * param_1)
 */
/* CHalfLifeTeamplay::InitHUD(CBasePlayer *) */

void __thiscall CHalfLifeTeamplay::InitHUD(CHalfLifeTeamplay *this,int *param_1)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char local_41c [1036];
  
  (**(code **)(*(int *)this + 0xe0))(this,param_1);
  CHalfLifeMultiplay::InitHUD((CHalfLifeMultiplay *)this,param_1);
  (*g_engfuncs.pfnMessageBegin)(1,gmsgTeamNames,(float *)0x0,*(edict_t **)(*param_1 + 0x208));
  (*g_engfuncs.pfnWriteByte)(num_teams);
  iVar4 = 0;
  if (0 < num_teams) {
    iVar5 = 0;
    do {
      (*g_engfuncs.pfnWriteString)(team_names + iVar5);
      iVar5 = iVar5 + 0x10;
      iVar4 = iVar4 + 1;
    } while (iVar4 < num_teams);
  }
  (*g_engfuncs.pfnMessageEnd)();
  RecountTeams(this,'\0');
  pcVar1 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(*param_1 + 0x208));
  pcVar1 = (*g_engfuncs.pfnInfoKeyValue)(pcVar1,"model");
  iVar4 = strcmp(pcVar1,(char *)(param_1 + 0x2d2));
  if (iVar4 == 0) {
    pcVar1 = "* you are on team \'%s\'\n";
  }
  else {
    pcVar1 = "* assigned to team %s\n";
  }
  sprintf(local_41c,pcVar1,param_1 + 0x2d2);
  (**(code **)(*(int *)this + 0xdc))(this,param_1,param_1 + 0x2d2,0,0);
  UTIL_SayText(local_41c,param_1);
  (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_1 + 0x208));
  RecountTeams(this,'\0');
  iVar4 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar2 = (int *)UTIL_PlayerByIndex(iVar4);
      if (piVar2 != (int *)0x0) {
        iVar5 = *(int *)this;
        uVar3 = (**(code **)(piVar2[0x18] + 0xd0))(piVar2);
        iVar5 = (**(code **)(iVar5 + 0xd8))(this,uVar3);
        if (iVar5 != 0) {
          (*g_engfuncs.pfnMessageBegin)(1,gmsgTeamInfo,(float *)0x0,*(edict_t **)(*param_1 + 0x208))
          ;
          iVar5 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*piVar2 + 0x208));
          (*g_engfuncs.pfnWriteByte)(iVar5);
          pcVar1 = (char *)(**(code **)(piVar2[0x18] + 0xd0))(piVar2);
          (*g_engfuncs.pfnWriteString)(pcVar1);
          (*g_engfuncs.pfnMessageEnd)();
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= gpGlobals->maxClients);
  }
  return;
}

/* 000e488c  CHalfLifeTeamplay::ChangePlayerTeam  (1157 bytes)
 * undefined ChangePlayerTeam(CBasePlayer * param_1, byte.conflict * param_2, int param_3, int param_4)
 */
/* CHalfLifeTeamplay::ChangePlayerTeam(CBasePlayer *, char const *, int, int) */

void __thiscall
CHalfLifeTeamplay::ChangePlayerTeam
          (CHalfLifeTeamplay *this,CBasePlayer *param_1,byte_conflict *param_2,int param_3,
          int param_4)

{
  undefined1 *value;
  entvars_t *peVar1;
  bool bVar2;
  int iVar3;
  edict_t *peVar4;
  char *pcVar5;
  int iVar6;
  CTSGameRules *pCVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 uVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  undefined2 in_FPUControlWord;
  size_t __n;
  vec_t local_4c;
  vec_t local_48;
  vec_t local_44;
  vec_t local_3c;
  vec_t local_38;
  vec_t local_34;
  int local_24;
  undefined2 local_20;
  undefined2 uStack_1e;
  
  iVar3 = (*g_engfuncs.pfnIndexOfEdict)(param_1->pev->pContainingEntity);
  if (param_4 == 0) {
    uVar10 = 0x1000;
  }
  else {
    uVar10 = 0x2000;
  }
  if (param_3 != 0) {
    *(undefined4 *)(this + 0x20c) = 1;
    *(undefined4 *)(this + 0x210) = 1;
    peVar4 = (*g_engfuncs.pfnPEntityOfEntIndex)(0);
    uVar8 = (uint)&peVar4->v & (peVar4 == (edict_t *)0x0) - 1;
    (*param_1->vtable[0x16])(param_1,uVar8,uVar8,0x44610000,uVar10);
    *(undefined4 *)(this + 0x20c) = 0;
    *(undefined4 *)(this + 0x210) = 0;
  }
  if (g_theOneMode != 0) {
    if (param_1->field_0x7b9 == '\0') {
      __n = 0x10;
      param_2 = &DAT_00178254;
    }
    else {
      __n = 0x10;
      param_2 = &DAT_001781c8;
    }
    goto LAB_000e49ff;
  }
  bVar2 = false;
  bVar12 = false;
  if (*param_2 == '\0') {
LAB_000e49d6:
    bVar2 = true;
  }
  else {
    iVar6 = 1;
    bVar13 = false;
    pbVar9 = param_2;
    pbVar11 = &DAT_00106657;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar12 = *pbVar9 < *pbVar11;
      bVar13 = *pbVar9 == *pbVar11;
      pbVar9 = pbVar9 + 1;
      pbVar11 = pbVar11 + 1;
    } while (bVar13);
    if (((!bVar12 && !bVar13) == bVar12) ||
       (iVar6 = (**(code **)(*(int *)this + 0xd8))(this,param_2), iVar6 == 0)) goto LAB_000e49d6;
  }
  __n = 0x10;
  if (bVar2) {
    param_2 = TeamWithFewestPlayers(this);
  }
LAB_000e49ff:
  strncpy(&param_1->field_0xb48,(char *)param_2,__n);
  if (g_teamplay - 2U < 2) {
    pcVar5 = (*g_engfuncs.pfnGetInfoKeyBuffer)(param_1->pev->pContainingEntity);
    iVar6 = (*g_engfuncs.pfnIndexOfEdict)(param_1->pev->pContainingEntity);
    pCVar7 = CTSGameRules::GetPlayerModel((CTSGameRules *)&TSGameRules,(int)param_1);
    (*g_engfuncs.pfnSetClientKeyValue)(iVar6,pcVar5,"model",(char *)pCVar7);
    CTSGameRules::SendObjectiveList((CTSGameRules *)&TSGameRules,(int *)param_1);
  }
  else if (*(int *)(this + 0x214) == 0) {
    pcVar5 = (*g_engfuncs.pfnGetInfoKeyBuffer)(param_1->pev->pContainingEntity);
    (*g_engfuncs.pfnSetClientKeyValue)(iVar3,pcVar5,"model",&param_1->field_0xb48);
  }
  else {
    pcVar5 = (*g_engfuncs.pfnGetInfoKeyBuffer)(param_1->pev->pContainingEntity);
    iVar6 = (*g_engfuncs.pfnIndexOfEdict)(param_1->pev->pContainingEntity);
    pCVar7 = CTSGameRules::GetPlayerModel((CTSGameRules *)&TSGameRules,(int)param_1);
    (*g_engfuncs.pfnSetClientKeyValue)(iVar6,pcVar5,"model",(char *)pCVar7);
  }
  pcVar5 = (*g_engfuncs.pfnGetInfoKeyBuffer)(param_1->pev->pContainingEntity);
  value = &param_1->field_0xb48;
  (*g_engfuncs.pfnSetClientKeyValue)(iVar3,pcVar5,"team",value);
  RecountTeams(this,'\0');
  (*g_engfuncs.pfnMessageBegin)(2,gmsgTeamInfo,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(iVar3);
  (*g_engfuncs.pfnWriteString)(value);
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnMessageBegin)(2,gmsgScoreInfo,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(iVar3);
  _local_20 = CONCAT22(uStack_1e,in_FPUControlWord);
  local_24 = (int)ROUND(param_1->pev->frags);
  (*g_engfuncs.pfnWriteShort)(local_24);
  (*g_engfuncs.pfnWriteShort)(*(int *)&param_1->field_0xb30);
  (*g_engfuncs.pfnWriteShort)(0);
  iVar3 = (**(code **)(*g_pGameRules + 0xd0))(g_pGameRules,value);
  (*g_engfuncs.pfnWriteShort)(iVar3 + 1);
  (*g_engfuncs.pfnMessageEnd)();
  if ((param_3 == 0) && (g_theOneMode == 0)) {
    peVar1 = param_1->pev;
    local_3c = peVar1->origin[0];
    local_38 = peVar1->origin[1];
    local_34 = peVar1->origin[2];
    peVar1 = param_1->pev;
    local_4c = peVar1->v_angle[0];
    local_48 = peVar1->v_angle[1];
    local_44 = peVar1->v_angle[2];
    CBasePlayer::StartObserver(param_1,&local_3c,&local_4c);
    SetPlayerRespawnTime((int)param_1,5);
  }
  (*g_engfuncs.pfnMessageBegin)(2,gmsgTeamNames,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(num_teams);
  iVar3 = 0;
  if (0 < num_teams) {
    iVar6 = 0;
    do {
      (*g_engfuncs.pfnWriteString)(team_names + iVar6);
      iVar6 = iVar6 + 0x10;
      iVar3 = iVar3 + 1;
    } while (iVar3 < num_teams);
  }
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000e4d18  CHalfLifeTeamplay::ClientUserInfoChanged  (890 bytes)
 * undefined ClientUserInfoChanged(int * param_1, undefined4 param_2)
 */
/* CHalfLifeTeamplay::ClientUserInfoChanged(CBasePlayer *, char *) */

void __thiscall
CHalfLifeTeamplay::ClientUserInfoChanged(CHalfLifeTeamplay *this,int *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  CTSGameRules *pCVar3;
  char *pcVar4;
  char local_41c [1036];
  
  CHalfLifeMultiplay::ClientUserInfoChanged((CHalfLifeMultiplay *)this,param_1,param_2);
  pcVar1 = (*g_engfuncs.pfnInfoKeyValue)(param_2,"model");
  iVar2 = strcasecmp(pcVar1,(char *)(param_1 + 0x2d2));
  if (iVar2 != 0) {
    if (g_teamplay - 2U < 2) {
      pcVar1 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(*param_1 + 0x208));
      iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_1 + 0x208));
      pCVar3 = CTSGameRules::GetPlayerModel((CTSGameRules *)&TSGameRules,(int)param_1);
      (*g_engfuncs.pfnSetClientKeyValue)(iVar2,pcVar1,"model",(char *)pCVar3);
    }
    else if (*(int *)(this + 0x214) == 0) {
      if ((float)defaultteam._12_4_ == 0.0) {
        iVar2 = (**(code **)(*(int *)this + 0xd8))(this,pcVar1);
        if (iVar2 == 0) {
          iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_1 + 0x208));
          pcVar4 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(*param_1 + 0x208));
          (*g_engfuncs.pfnSetClientKeyValue)(iVar2,pcVar4,"model",(char *)(param_1 + 0x2d2));
          sprintf(local_41c,"* Can\'t change team to \'%s\'\n",pcVar1);
          UTIL_SayText(local_41c,param_1);
          sprintf(local_41c,"* Server limits teams to \'%s\'\n",this + 0xc);
          UTIL_SayText(local_41c,param_1);
        }
        else {
          sprintf(local_41c,"* %s has changed to team \'%s\'\n",
                  gpGlobals->pStringBase + *(int *)(*param_1 + 0x1d0),pcVar1);
          UTIL_SayTextAll(local_41c,param_1);
          pcVar4 = (*g_engfuncs.pfnGetPlayerAuthId)(*(edict_t **)(*param_1 + 0x208));
          iVar2 = (*g_engfuncs.pfnGetPlayerUserId)(*(edict_t **)(*param_1 + 0x208));
          UTIL_LogPrintf("\"%s<%i><%s><%s>\" joined team \"%s\"\n",
                         gpGlobals->pStringBase + *(int *)(*param_1 + 0x1d0),iVar2,pcVar4,
                         param_1 + 0x2d2,pcVar1);
          (**(code **)(*(int *)this + 0xdc))(this,param_1,pcVar1,0,0);
          RecountTeams(this,'\x01');
        }
      }
      else {
        iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_1 + 0x208));
        pcVar1 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(*param_1 + 0x208));
        (*g_engfuncs.pfnSetClientKeyValue)(iVar2,pcVar1,"model",(char *)(param_1 + 0x2d2));
        pcVar1 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(*param_1 + 0x208));
        (*g_engfuncs.pfnSetClientKeyValue)(iVar2,pcVar1,"team",(char *)(param_1 + 0x2d2));
        sprintf(local_41c,"* Not allowed to change teams in this game!\n");
        UTIL_SayText(local_41c,param_1);
      }
    }
    else {
      pcVar1 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(*param_1 + 0x208));
      iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_1 + 0x208));
      pCVar3 = CTSGameRules::GetPlayerModel((CTSGameRules *)&TSGameRules,(int)param_1);
      (*g_engfuncs.pfnSetClientKeyValue)(iVar2,pcVar1,"model",(char *)pCVar3);
    }
  }
  return;
}

/* 000e509c  CHalfLifeTeamplay::DeathNotice  (282 bytes)
 * undefined DeathNotice(int * param_1, int param_2, int param_3, undefined4 param_4)
 */
/* CHalfLifeTeamplay::DeathNotice(CBasePlayer *, entvars_s *, entvars_s *, char *) */

void __thiscall
CHalfLifeTeamplay::DeathNotice
          (CHalfLifeTeamplay *this,int *param_1,int param_2,int param_3,undefined4 param_4)

{
  edict_t *peVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(this + 0x20c) == 0) {
    if (((param_1 != (int *)0x0) && (param_2 != 0)) && ((*(byte *)(param_2 + 0x1a4) & 8) != 0)) {
      peVar1 = *(edict_t **)(param_2 + 0x208);
      if (peVar1 == (edict_t *)0x0) {
        peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      piVar3 = (int *)0x0;
      if (peVar1 != (edict_t *)0x0) {
        piVar3 = peVar1->pvPrivateData;
      }
      if (((piVar3 != (int *)0x0) && (piVar3 != param_1)) &&
         (iVar2 = (**(code **)(*(int *)this + 0xcc))(this,param_1,piVar3), iVar2 == 1)) {
        (*g_engfuncs.pfnMessageBegin)(2,gmsgDeathMsg,(float *)0x0,(edict_t *)0x0);
        iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_2 + 0x208));
        (*g_engfuncs.pfnWriteByte)(iVar2);
        iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_1 + 0x208));
        (*g_engfuncs.pfnWriteByte)(iVar2);
        (*g_engfuncs.pfnWriteString)("teammate");
        (*g_engfuncs.pfnMessageEnd)();
        return;
      }
    }
    CHalfLifeMultiplay::DeathNotice(this,param_1,param_2,param_3,param_4);
  }
  return;
}

/* 000e51b8  CHalfLifeTeamplay::PlayerKilled  (69 bytes)
 * undefined PlayerKilled(CBasePlayer * param_1, uint * param_2, uint * param_3)
 */
/* CHalfLifeTeamplay::PlayerKilled(CBasePlayer *, entvars_s *, entvars_s *) */

void __thiscall
CHalfLifeTeamplay::PlayerKilled
          (CHalfLifeTeamplay *this,CBasePlayer *param_1,uint *param_2,uint *param_3)

{
  if (*(int *)(this + 0x210) == 0) {
    CHalfLifeMultiplay::PlayerKilled((CHalfLifeMultiplay *)this,param_1,param_2,param_3);
    RecountTeams(this,'\0');
  }
  return;
}

/* 000e5200  CHalfLifeTeamplay::IsTeamplay  (6 bytes)
 * undefined4 IsTeamplay(void)
 */
/* CHalfLifeTeamplay::IsTeamplay(void) */

undefined4 CHalfLifeTeamplay::IsTeamplay(void)

{
  return 1;
}

/* 000e5208  CHalfLifeTeamplay::FPlayerCanTakeDamage  (111 bytes)
 * undefined4 FPlayerCanTakeDamage(int param_1, int param_2)
 */
/* CHalfLifeTeamplay::FPlayerCanTakeDamage(CBasePlayer *, CBaseEntity *) */

undefined4 __thiscall
CHalfLifeTeamplay::FPlayerCanTakeDamage(CHalfLifeTeamplay *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((param_2 != 0) &&
       (iVar1 = (**(code **)(*(int *)this + 0xcc))(this,param_1,param_2), iVar1 == 1)) &&
      ((float)friendlyfire._12_4_ == 0.0)) && (param_2 != param_1)) {
    return 0;
  }
  uVar2 = CHalfLifeMultiplay::FPlayerCanTakeDamage();
  return uVar2;
}

/* 000e5278  CHalfLifeTeamplay::PlayerRelationship  (166 bytes)
 * undefined4 PlayerRelationship(int param_1, int param_2)
 */
/* CHalfLifeTeamplay::PlayerRelationship(CBaseEntity *, CBaseEntity *) */

undefined4 __thiscall
CHalfLifeTeamplay::PlayerRelationship(CHalfLifeTeamplay *this,int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *__s1;
  
  if ((((param_1 != 0) && (param_2 != 0)) &&
      (iVar1 = (**(code **)(*(int *)(param_2 + 0x60) + 200))(param_2), iVar1 != 0)) &&
     ((pcVar2 = (char *)(**(code **)(*(int *)this + 200))(this,param_1), *pcVar2 != '\0' &&
      (pcVar2 = (char *)(**(code **)(*(int *)this + 200))(this,param_2), *pcVar2 != '\0')))) {
    pcVar2 = (char *)(**(code **)(*(int *)this + 200))(this,param_2);
    __s1 = (char *)(**(code **)(*(int *)this + 200))(this,param_1);
    iVar1 = strcasecmp(__s1,pcVar2);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

/* 000e5324  CHalfLifeTeamplay::ShouldAutoAim  (124 bytes)
 * undefined4 ShouldAutoAim(undefined4 param_1, int param_2)
 */
/* CHalfLifeTeamplay::ShouldAutoAim(CBasePlayer *, edict_s *) */

undefined4 __thiscall
CHalfLifeTeamplay::ShouldAutoAim(CHalfLifeTeamplay *this,undefined4 param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (param_2 == 0) {
    param_2 = (int)(*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  pvVar2 = (void *)0x0;
  if ((edict_t *)param_2 != (edict_t *)0x0) {
    pvVar2 = ((edict_t *)param_2)->pvPrivateData;
  }
  if (((pvVar2 != (void *)0x0) &&
      (iVar1 = (**(code **)(*(int *)((int)pvVar2 + 0x60) + 200))(pvVar2), iVar1 != 0)) &&
     (iVar1 = (**(code **)(*(int *)this + 0xcc))(this,param_1,pvVar2), iVar1 == 1)) {
    return 0;
  }
  return 1;
}

/* 000e53a4  CHalfLifeTeamplay::IPointsForKill  (77 bytes)
 * undefined4 IPointsForKill(int param_1, int param_2)
 */
/* CHalfLifeTeamplay::IPointsForKill(CBasePlayer *, CBasePlayer *) */

undefined4 __thiscall
CHalfLifeTeamplay::IPointsForKill(CHalfLifeTeamplay *this,int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((param_2 != 0) && (uVar1 = 1, param_1 != 0)) {
    if ((param_1 != param_2) &&
       (iVar2 = (**(code **)(*(int *)this + 0xcc))(this,param_1,param_2), iVar2 == 1)) {
      return 0xffffffff;
    }
    uVar1 = 1;
  }
  return uVar1;
}

/* 000e53f4  CHalfLifeTeamplay::GetTeamID  (58 bytes)
 * undefined1 * GetTeamID(undefined4 this, int * param_2)
 */
/* CHalfLifeTeamplay::GetTeamID(CBaseEntity *) */

undefined1 * __thiscall CHalfLifeTeamplay::GetTeamID(undefined4 this,int *param_2)

{
  undefined1 *puVar1;
  
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    puVar1 = &DAT_00106657;
  }
  else {
    puVar1 = (undefined1 *)(**(code **)(param_2[0x18] + 0xd0))(param_2);
  }
  return puVar1;
}

/* 000e5434  CHalfLifeTeamplay::GetTeamIndex  (105 bytes)
 * int GetTeamIndex(undefined4 this, char * param_2)
 */
/* CHalfLifeTeamplay::GetTeamIndex(char const *) */

int __thiscall CHalfLifeTeamplay::GetTeamIndex(undefined4 this,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) && (iVar2 = 0, 0 < num_teams)) {
    iVar3 = 0;
    do {
      iVar1 = strcasecmp(team_names + iVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar3 = iVar3 + 0x10;
      iVar2 = iVar2 + 1;
    } while (iVar2 < num_teams);
  }
  return -1;
}

/* 000e54a0  CHalfLifeTeamplay::GetIndexedTeamName  (49 bytes)
 * undefined1 * GetIndexedTeamName(undefined4 this, int param_2)
 */
/* CHalfLifeTeamplay::GetIndexedTeamName(int) */

undefined1 * __thiscall CHalfLifeTeamplay::GetIndexedTeamName(undefined4 this,int param_2)

{
  undefined1 *puVar1;
  
  if ((param_2 < 0) || (num_teams <= param_2)) {
    puVar1 = &DAT_00106657;
  }
  else {
    puVar1 = team_names + param_2 * 0x10;
  }
  return puVar1;
}

/* 000e54d4  CHalfLifeTeamplay::IsValidTeam  (57 bytes)
 * bool IsValidTeam(undefined4 param_1)
 */
/* CHalfLifeTeamplay::IsValidTeam(char const *) */

bool __thiscall CHalfLifeTeamplay::IsValidTeam(CHalfLifeTeamplay *this,undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if (*(int *)(this + 0x214) != 0) {
    iVar1 = (**(code **)(*(int *)this + 0xd0))(this,param_1);
    bVar2 = iVar1 != -1;
  }
  return bVar2;
}

/* 000e5510  CHalfLifeTeamplay::TeamWithFewestPlayers  (247 bytes)
 * undefined1 * TeamWithFewestPlayers(void)
 */
/* CHalfLifeTeamplay::TeamWithFewestPlayers(void) */

undefined1 * __thiscall CHalfLifeTeamplay::TeamWithFewestPlayers(CHalfLifeTeamplay *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 *local_a4;
  int local_a0;
  int local_9c [35];
  
  local_a0 = 0x20;
  local_a4 = (undefined1 *)0x0;
  piVar5 = local_9c;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  iVar3 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      iVar1 = UTIL_PlayerByIndex(iVar3);
      if (iVar1 != 0) {
        iVar4 = *(int *)this;
        uVar2 = (**(code **)(*(int *)(iVar1 + 0x60) + 0xd0))(iVar1);
        iVar1 = (**(code **)(iVar4 + 0xd0))(this,uVar2);
        if (-1 < iVar1) {
          local_9c[iVar1] = local_9c[iVar1] + 1;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= gpGlobals->maxClients);
  }
  iVar3 = 0;
  if (0 < num_teams) {
    iVar1 = 0;
    iVar4 = 0;
    do {
      if (*(int *)((int)local_9c + iVar4) < local_a0) {
        local_a0 = *(int *)((int)local_9c + iVar4);
        local_a4 = team_names + iVar1;
      }
      iVar1 = iVar1 + 0x10;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < num_teams);
  }
  return local_a4;
}

/* 000e5608  CHalfLifeTeamplay::RecountTeams  (1016 bytes)
 * undefined RecountTeams(char param_1)
 */
/* CHalfLifeTeamplay::RecountTeams(bool) */

void __thiscall CHalfLifeTeamplay::RecountTeams(CHalfLifeTeamplay *this,char param_1)

{
  CTSGameRules CVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *local_244;
  undefined1 *local_240;
  int local_23c;
  int local_234;
  int local_228;
  char local_21c [524];
  
  num_teams = 0;
  pcVar2 = local_21c;
  strcpy(pcVar2,(char *)(this + 0xc));
  while ((pcVar2 = strtok(pcVar2,";"), pcVar2 != (char *)0x0 && (*pcVar2 != '\0'))) {
    iVar6 = (**(code **)(*(int *)this + 0xd0))(this,pcVar2);
    if (iVar6 < 0) {
      strcpy(team_names + num_teams * 0x10,pcVar2);
      num_teams = num_teams + 1;
    }
    pcVar2 = (char *)0x0;
  }
  if (num_teams < 2) {
    num_teams = 0;
    *(undefined4 *)(this + 0x214) = 0;
  }
  puVar7 = &team_scores;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_228 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar3 = (int *)UTIL_PlayerByIndex(local_228);
      if ((piVar3 != (int *)0x0) && (iVar6 = (**(code **)(piVar3[0x18] + 200))(piVar3), iVar6 != 0))
      {
        pcVar2 = (char *)(**(code **)(piVar3[0x18] + 0xd0))(piVar3);
        iVar4 = (**(code **)(*(int *)this + 0xd0))(this,pcVar2);
        iVar6 = num_teams;
        if ((iVar4 < 0) && (*(int *)(this + 0x214) == 0)) {
          puVar7 = &team_scores + num_teams;
          num_teams = num_teams + 1;
          *puVar7 = 0;
          strncpy(team_names + iVar6 * 0x10,pcVar2,0x10);
          iVar4 = iVar6;
        }
        if (-1 < iVar4) {
          (&team_scores)[iVar4] =
               (int)ROUND((float)(int)(&team_scores)[iVar4] + *(float *)(*piVar3 + 0x164));
        }
        if ((param_1 != '\0') && (piVar3 != (int *)0x0)) {
          iVar6 = *(int *)this;
          uVar5 = (**(code **)(piVar3[0x18] + 0xd0))(piVar3);
          iVar6 = (**(code **)(iVar6 + 0xd8))(this,uVar5);
          if (iVar6 != 0) {
            (*g_engfuncs.pfnMessageBegin)(2,gmsgTeamInfo,(float *)0x0,(edict_t *)0x0);
            iVar6 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*piVar3 + 0x208));
            (*g_engfuncs.pfnWriteByte)(iVar6);
            pcVar2 = (char *)(**(code **)(piVar3[0x18] + 0xd0))(piVar3);
            (*g_engfuncs.pfnWriteString)(pcVar2);
            (*g_engfuncs.pfnMessageEnd)();
            CVar1 = CTSGameRules::IsCTB((CTSGameRules *)&TSGameRules);
            if (CVar1 != (CTSGameRules)0x0) {
              local_234 = 0;
              local_23c = 0;
              local_244 = &DAT_001781b0;
              local_240 = local_244;
              do {
                if (local_244[0x18] != '\0') {
                  (*g_engfuncs.pfnMessageBegin)
                            (1,gmsgTeamScore,(float *)0x0,*(edict_t **)(*piVar3 + 0x208));
                  (*g_engfuncs.pfnWriteString)(&DAT_001781c8 + local_23c);
                  (*g_engfuncs.pfnWriteShort)(*(int *)(local_240 + 0x14));
                  (*g_engfuncs.pfnWriteShort)(0);
                  (*g_engfuncs.pfnMessageEnd)();
                }
                if (local_244[0xa4] != '\0') {
                  (*g_engfuncs.pfnMessageBegin)
                            (1,gmsgTeamScore,(float *)0x0,*(edict_t **)(*piVar3 + 0x208));
                  (*g_engfuncs.pfnWriteString)(&DAT_00178254 + local_23c);
                  (*g_engfuncs.pfnWriteShort)(*(int *)(local_240 + 0xa0));
                  (*g_engfuncs.pfnWriteShort)(0);
                  (*g_engfuncs.pfnMessageEnd)();
                }
                local_240 = local_240 + 0x118;
                local_244 = local_244 + 0x118;
                local_23c = local_23c + 0x118;
                local_234 = local_234 + 2;
              } while (local_234 < 4);
            }
          }
        }
      }
      local_228 = local_228 + 1;
    } while (local_228 <= gpGlobals->maxClients);
  }
  return;
}

/* 000e5a04  CHalfLifeTeamplay::GetGameDescription  (59 bytes)
 * undefined1 * GetGameDescription(void)
 */
/* CHalfLifeTeamplay::GetGameDescription(void) */

undefined1 * CHalfLifeTeamplay::GetGameDescription(void)

{
  char *pcVar1;
  
  if (g_theOneMode == 0) {
    if (g_lastManStanding == 0) {
      pcVar1 = g_szTDMDescription;
    }
    else {
      pcVar1 = g_szLMSDescription;
    }
  }
  else {
    pcVar1 = g_szTOMDescription;
  }
  return pcVar1;
}

