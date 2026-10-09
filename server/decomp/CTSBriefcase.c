/* ts_i386.so - CTSBriefcase (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0008d788  CTSBriefcase::CTSBriefcase  (106 bytes)
 * undefined CTSBriefcase(void)
 */
/* CTSBriefcase::CTSBriefcase(void) */

void __thiscall CTSBriefcase::CTSBriefcase(CTSBriefcase *this)

{
  int iVar1;
  CTSBriefcase *pCVar2;
  
  *(undefined1 **)(this + 0x60) = CBaseEntity_virtual_table;
  *(undefined1 **)(this + 0x60) = CTSBriefcase_virtual_table;
  s_nextFlagID = s_nextFlagID + 1;
  if (0xf < s_nextFlagID) {
    s_nextFlagID = 1;
  }
  *(int *)(this + 0x8c) = s_nextFlagID;
  this[100] = (CTSBriefcase)0x0;
  *(undefined4 *)(this + 0x68) = 0xffffffff;
  this[0x6c] = (CTSBriefcase)0x0;
  pCVar2 = this + 0x90;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = 0;
    pCVar2 = pCVar2 + 4;
  }
  return;
}

/* 0008d7f4  CTSBriefcase::KeyValue  (150 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSBriefcase::KeyValue(KeyValueData_s *) */

void __thiscall CTSBriefcase::KeyValue(CTSBriefcase *this,int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"contents");
  if (iVar1 == 0) {
    strncpy((char *)(this + 0x6c),*(char **)(param_1 + 8),0x1f);
    this[0x8b] = (CTSBriefcase)0x0;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"ownerteam");
    if (iVar1 == 0) {
      iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      *(int *)(this + 0x68) = iVar1 + -1;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

/* 0008d88c  CTSBriefcase::Spawn  (371 bytes)
 * undefined Spawn(void)
 */
/* CTSBriefcase::Spawn(void) */

void __thiscall CTSBriefcase::Spawn(CTSBriefcase *this)

{
  CTSBriefcase CVar1;
  int iVar2;
  char *pcVar3;
  CTSBriefcase *pCVar4;
  
  **(int **)this = (int)"ts_briefcase" - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)this + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)this + 0xb8));
  UTIL_SetSize(*(int *)this,*(int *)this + 0xdc,*(int *)this + 0xe8);
  UTIL_SetOrigin(*(int *)this,*(int *)this + 8);
  *(undefined4 *)(*(int *)this + 0x118) = 0x80;
  *(undefined4 *)(*(int *)this + 0x10c) = 1;
  *(undefined4 *)(*(int *)this + 0x1a4) = 0;
  *(undefined4 *)(*(int *)this + 0x108) = 5;
  this[100] = (CTSBriefcase)0x0;
  *(undefined4 *)(this + 0x14) = 0xffff0000;
  *(code **)(this + 0x18) = CaptureTouch;
  *(undefined4 *)(this + 0xc) = 0xffff0000;
  *(code **)(this + 0x10) = FlagFall;
  *(float *)(*(int *)this + 0x104) = gpGlobals->time + 1.0;
  iVar2 = -1;
  pCVar4 = this + 0x6c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    CVar1 = *pCVar4;
    pCVar4 = pCVar4 + 1;
  } while (CVar1 != (CTSBriefcase)0x0);
  if (iVar2 == -2) {
    pcVar3 = "a flag";
    pCVar4 = this + 0x6c;
    for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pCVar4 = pCVar4 + 4;
    }
    *(undefined2 *)pCVar4 = *(undefined2 *)pcVar3;
    pCVar4[2] = *(CTSBriefcase *)(pcVar3 + 2);
  }
  *(CTSBriefcase **)(this + 0x94) = this + (0x6c - (int)gpGlobals->pStringBase);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(this + 0x8c);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(this + 0x68);
  EHANDLE::operator=((EHANDLE *)(this + 0xa4),(int *)this);
  *(undefined4 *)(this + 0xa0) = 0;
  return;
}

/* 0008da00  CTSBriefcase::FlagFall  (274 bytes)
 * undefined FlagFall(void)
 */
/* CTSBriefcase::FlagFall(void) */

void __thiscall CTSBriefcase::FlagFall(CTSBriefcase *this)

{
  CTSFlag *pCVar1;
  
  pCVar1 = CTSFlag::CreateFlag((int *)0x0,(undefined4 *)(this + 0x90));
  *(undefined4 *)&pCVar1->field_0x88 = 0;
  pCVar1->pev->origin[0] = (*(float *)(*(int *)this + 0xdc) + *(float *)(*(int *)this + 0xe8)) * 0.5
  ;
  pCVar1->pev->origin[1] = (*(float *)(*(int *)this + 0xe0) + *(float *)(*(int *)this + 0xec)) * 0.5
  ;
  pCVar1->pev->origin[2] = (*(float *)(*(int *)this + 0xe4) + *(float *)(*(int *)this + 0xf0)) * 0.5
  ;
  this[100] = (CTSBriefcase)0x1;
  (*g_engfuncs.pfnMessageBegin)(2,gmsgTSHaveFlag,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnWriteByte)(*(int *)(this + 0x98));
  (*g_engfuncs.pfnWriteByte)(*(int *)(this + 0x9c) + 1);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  *(float *)(*(int *)this + 0x104) = gpGlobals->time + 1.0;
  *(undefined4 *)(this + 0xc) = 0xffff0000;
  *(code **)(this + 0x10) = WaitThink;
  return;
}

/* 0008db14  CTSBriefcase::WaitThink  (49 bytes)
 * undefined WaitThink(void)
 */
/* CTSBriefcase::WaitThink(void) */

void __thiscall CTSBriefcase::WaitThink(CTSBriefcase *this)

{
  *(float *)(*(int *)this + 0x104) = gpGlobals->time + 1.0;
  return;
}

/* 0008db48  CTSBriefcase::CanInteract  (83 bytes)
 * bool CanInteract(int param_1)
 */
/* CTSBriefcase::CanInteract(CBasePlayer *) */

bool __thiscall CTSBriefcase::CanInteract(CTSBriefcase *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = true;
  if (*(int *)(this + 0x68) != -1) {
    pcVar1 = (char *)(**(code **)(*(int *)(param_1 + 0x60) + 0xd0))(param_1);
    iVar2 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pcVar1);
    bVar3 = *(int *)(this + 0x68) == iVar2;
  }
  return bVar3;
}

/* 0008db9c  CTSBriefcase::CaptureTouch  (1421 bytes)
 * undefined CaptureTouch(CBasePlayer * param_1)
 */
/* CTSBriefcase::CaptureTouch(CBaseEntity *) */

void __thiscall CTSBriefcase::CaptureTouch(CTSBriefcase *this,CBasePlayer *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *local_38;
  int local_34;
  int local_2c;
  
  if ((((this[100] != (CTSBriefcase)0x0) && (iVar3 = (*param_1->vtable[0x32])(param_1), iVar3 != 0))
      && (iVar3 = (*param_1->vtable[0x2d])(param_1), iVar3 != 0)) &&
     ((cVar1 = HaveFlag((int)param_1), cVar1 != '\0' &&
      (bVar2 = CanInteract(this,(int)param_1), bVar2)))) {
    iVar3 = (*g_engfuncs.pfnGetPlayerUserId)(param_1->pev->pContainingEntity);
    pcVar4 = (*g_engfuncs.pfnGetPlayerAuthId)(param_1->pev->pContainingEntity);
    iVar5 = (*g_engfuncs.pfnGetPlayerUserId)(param_1->pev->pContainingEntity);
    UTIL_LogPrintf("\"%s<%i><%s><%i>\" triggered \"captured_briefcase\" (contents \"%s\")\n",
                   gpGlobals->pStringBase + param_1->pev->netname,iVar5,pcVar4,iVar3,
                   gpGlobals->pStringBase + *(int *)&param_1->field_0x7d4);
    piVar6 = (int *)_((EHANDLE *)&param_1->field_0x7e4);
    if (piVar6 != (int *)0x0) {
      piVar6[3] = -0x10000;
      piVar6[4] = (int)FlagFall;
      *(float *)(*piVar6 + 0x104) = gpGlobals->time + 0.25;
    }
    CBasePlayer::DropFlag(param_1,'\x01');
    if (*(int *)(*(int *)this + 0x1c8) != 0) {
      FireTargets((int)(gpGlobals->pStringBase + *(int *)(*(int *)this + 0x1c8)),this,this,3,0);
    }
    if (*(int *)(*(int *)this + 0x1d4) != 0) {
      TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + *(int *)(*(int *)this + 0x1d4));
    }
    iVar3 = CTSGameRules::CountPlayers();
    if (iVar3 < 2) {
      DAT_001781c0 = 0;
      DAT_001781c4 = 0;
      DAT_001781bc = 0;
      DAT_0017824c = 0;
      DAT_00178250 = 0;
      DAT_00178248 = 0;
      DAT_001782d8 = 0;
      DAT_001782dc = 0;
      DAT_001782d4 = 0;
      DAT_00178364 = 0;
      DAT_00178368 = 0;
      DAT_00178360 = 0;
      TSHudMessageAll(0,0,0,8,0x1e,"Waiting for other players.");
    }
    else {
      param_1->pev->frags = param_1->pev->frags + 10.0;
      pcVar4 = UTIL_VarArgs("%s captured the briefcase! %i #TS_Frg",
                            gpGlobals->pStringBase + param_1->pev->netname,10);
      TSHudMessageAll(0,0xff,0,4,0x1e,pcVar4);
      (*g_engfuncs.pfnMessageBegin)(2,gmsgScoreInfo,(float *)0x0,(edict_t *)0x0);
      iVar3 = (*g_engfuncs.pfnIndexOfEdict)(param_1->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)(iVar3);
      (*g_engfuncs.pfnWriteShort)((int)ROUND(param_1->pev->frags));
      (*g_engfuncs.pfnWriteShort)(*(int *)&param_1->field_0xb30);
      (*g_engfuncs.pfnWriteShort)(0);
      iVar3 = (**(code **)(*g_pGameRules + 0xd0))(g_pGameRules,&param_1->field_0xb48);
      (*g_engfuncs.pfnWriteShort)(iVar3 + 1);
      (*g_engfuncs.pfnMessageEnd)();
      pcVar4 = (char *)(*param_1->vtable[0x34])(param_1);
      iVar3 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pcVar4);
      if (-1 < iVar3) {
        (&DAT_001781c4)[iVar3 * 0x23] = (&DAT_001781c4)[iVar3 * 0x23] + 1;
      }
      iVar5 = 1;
      if (0 < gpGlobals->maxClients) {
        do {
          piVar6 = (int *)UTIL_PlayerByIndex(iVar5);
          if ((piVar6 != (int *)0x0) &&
             (iVar7 = (**(code **)(piVar6[0x18] + 200))(piVar6), iVar7 != 0)) {
            pcVar4 = (char *)(**(code **)(piVar6[0x18] + 0xd0))(piVar6);
            iVar7 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pcVar4);
            (*g_engfuncs.pfnMessageBegin)
                      (1,gmsgTSVoiceMessage,(float *)0x0,*(edict_t **)(*piVar6 + 0x208));
            (*g_engfuncs.pfnWriteByte)((uint)(iVar3 != iVar7));
            (*g_engfuncs.pfnMessageEnd)();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 <= gpGlobals->maxClients);
      }
    }
    local_2c = 0;
    local_34 = 0;
    puVar8 = &DAT_001781b0;
    local_38 = puVar8;
    do {
      if (puVar8[0x18] != '\0') {
        (*g_engfuncs.pfnMessageBegin)(2,gmsgTeamScore,(float *)0x0,(edict_t *)0x0);
        (*g_engfuncs.pfnWriteString)(&DAT_001781c8 + local_34);
        (*g_engfuncs.pfnWriteShort)(*(int *)(local_38 + 0x14));
        (*g_engfuncs.pfnWriteShort)(0);
        (*g_engfuncs.pfnMessageEnd)();
      }
      if (puVar8[0xa4] != '\0') {
        (*g_engfuncs.pfnMessageBegin)(2,gmsgTeamScore,(float *)0x0,(edict_t *)0x0);
        (*g_engfuncs.pfnWriteString)(&DAT_00178254 + local_34);
        (*g_engfuncs.pfnWriteShort)(*(int *)(local_38 + 0xa0));
        (*g_engfuncs.pfnWriteShort)(0);
        (*g_engfuncs.pfnMessageEnd)();
      }
      local_38 = local_38 + 0x118;
      puVar8 = puVar8 + 0x118;
      local_34 = local_34 + 0x118;
      local_2c = local_2c + 2;
    } while (local_2c < 4);
  }
  return;
}

