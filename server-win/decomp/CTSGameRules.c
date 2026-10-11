/* mp.dll - CTSGameRules (24 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1004d090  CTSGameRules::Think  (1080 bytes)
 * undefined Think(char * param_1)
 * called by: CHalfLifeMultiplay::Think, CHalfLifeTeamplay::Think
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CTSGameRules::Think(char *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float10 extraout_ST0;
  longlong lVar7;
  undefined4 uStack00000018;
  
  if ((*(float *)(param_1 + 0x568) != 0.0) && (*(float *)(param_1 + 0x568) < gpGlobals->time)) {
    param_1[0x560] = '\0';
    param_1[0x561] = '\0';
    param_1[0x562] = '\0';
    param_1[0x563] = '\0';
  }
  if (*(float *)(param_1 + 0x560) == 0.0) {
    if (*(float *)(param_1 + 0x564) != 0.0) {
      FUN_1004e9f0(param_1,0.0,'\0');
      param_1[0x564] = '\0';
      param_1[0x565] = '\0';
      param_1[0x566] = '\0';
      param_1[0x567] = '\0';
      param_1[0x568] = '\0';
      param_1[0x569] = '\0';
      param_1[0x56a] = '\0';
      param_1[0x56b] = '\0';
    }
  }
  else {
    FUN_1004e9f0(param_1,*(float *)(param_1 + 0x564),'\0');
  }
  if ((*(float *)(param_1 + 0x5880) != 0.0) && (*(float *)(param_1 + 0x5880) < gpGlobals->time)) {
    CheckDeads(param_1);
  }
  cVar1 = *param_1;
  if ((cVar1 != '\0') && (cVar1 != '\x01')) {
    if (((*(float *)(param_1 + 8) < gpGlobals->time) && (*(float *)(param_1 + 0xc) == 0.0)) &&
       (param_1[0x10] != '\0')) {
      if (cVar1 == '\x02') {
        TeamWin((CTSGameRules *)param_1,2,0,1,'\0');
      }
      else {
        RoundTimeLeft(param_1);
      }
    }
    if ((*(float *)(param_1 + 0xc) < gpGlobals->time) && (*(float *)(param_1 + 0xc) != 0.0)) {
      RestartRound(param_1);
    }
    goto LAB_1004d3a7;
  }
  if (param_1[1] == -1) {
    param_1[1] = '\x01';
  }
  if ((_DAT_1009ed8c != 1.0) && (param_1[1] == '\x01')) {
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
      if (((float10)0.25 <= extraout_ST0) || (_DAT_1009ed74 == 1.0)) {
        uVar3 = FUN_100662f0(0x1ff);
      }
      else {
        uVar3 = 1;
      }
      iVar4 = FUN_10066370(uVar3);
      if (iVar4 == 0) {
        *(float *)(param_1 + 4) = gpGlobals->time + 1.0;
      }
      else {
        *(float *)(param_1 + 4) = gpGlobals->time + 20.0;
      }
    }
  }
  if ((DAT_102efbc0 != 0) && (*(float *)(param_1 + 0x587c) < gpGlobals->time)) {
    bVar2 = false;
    param_1[0x5876] = '\0';
    iVar4 = 0;
    if (gpGlobals->maxClients < 1) {
LAB_1004d32b:
      SelectRandomTheOne(param_1);
    }
    else {
      do {
        piVar5 = (int *)UTIL_PlayerByIndex(iVar4);
        if (piVar5 != (int *)0x0) {
          iVar6 = (**(code **)(*piVar5 + 0xc0))();
          if (iVar6 != 0) {
            uVar3 = FUN_1000edd0((int)piVar5);
            if (uVar3 == 0) {
              if (*(char *)((int)piVar5 + 0x7a5) == '\0') {
                param_1[0x5876] = param_1[0x5876] + '\x01';
              }
              else {
                bVar2 = true;
              }
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < gpGlobals->maxClients);
      if (!bVar2) goto LAB_1004d32b;
    }
    *(float *)(param_1 + 0x587c) = gpGlobals->time + 10.0;
  }
  if ((DAT_102efbc4 != 0) && (*param_1 == '\0')) {
    if ((*(float *)(param_1 + 0xc) < gpGlobals->time) && (*(float *)(param_1 + 0xc) != 0.0)) {
      RestartRound(param_1);
    }
    if ((*(float *)(param_1 + 8) < gpGlobals->time) && (*(float *)(param_1 + 0xc) == 0.0)) {
      CheckDeads(param_1);
    }
  }
LAB_1004d3a7:
  CheckVotes((int)param_1);
  if ((float)*(int *)(param_1 + 0x578) != _DAT_1009edbc) {
    lVar7 = __ftol();
    *(int *)(param_1 + 0x578) = (int)lVar7;
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100d97bc,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnWriteShort)(*(int *)(param_1 + 0x578));
    (*g_engfuncs.pfnMessageEnd)();
  }
  if (*(int *)(param_1 + 0x5864) != 0) {
    FUN_100470c0(param_1 + 0x1864);
  }
  if ((float)*(int *)(param_1 + 0x558) != _DAT_1009edd4) {
    lVar7 = __ftol();
    *(int *)(param_1 + 0x558) = (int)lVar7;
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100d97bc,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(1);
    (*g_engfuncs.pfnWriteShort)((uint)(*(int *)(param_1 + 0x558) != 0));
    (*g_engfuncs.pfnMessageEnd)();
  }
  lVar7 = __ftol();
  iVar4 = (int)lVar7;
  if (iVar4 != *(int *)(param_1 + 0x55c)) {
    *(int *)(param_1 + 0x55c) = iVar4;
    Set_ammo_count(iVar4);
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100d97bc,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(2);
    (*g_engfuncs.pfnWriteShort)(*(int *)(param_1 + 0x55c));
    uStack00000018 = 0x1004d4c6;
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 1004d4d0  CTSGameRules::RespawnEntities  (338 bytes)
 * undefined RespawnEntities(char * param_1)
 * called by: CTSGameRules::RestartRound
 */
void __fastcall CTSGameRules::RespawnEntities(char *param_1)

{
  edict_t *peVar1;
  CTSGroundAmmo *this;
  int iVar2;
  int *piVar3;
  
  this = (CTSGroundAmmo *)UTIL_FindEntityByClassname(0,s_info_breakable_100a3f3c);
  while (((this != (CTSGroundAmmo *)0x0 &&
          (peVar1 = this->pev->pContainingEntity, peVar1 != (edict_t *)0x0)) &&
         (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1), iVar2 != 0))) {
    CInfoBreakable::RespawnThink((CInfoBreakable *)this);
    this = (CTSGroundAmmo *)UTIL_FindEntityByClassname((int)this,s_info_breakable_100a3f3c);
  }
  if (((*param_1 == '\x03') || (*param_1 == '\x02')) || (DAT_102efbc4 != 0)) {
    this = (CTSGroundAmmo *)UTIL_FindEntityByClassname((int)this,s_ts_groundweapon_100a3f2c);
    while (((this != (CTSGroundAmmo *)0x0 &&
            (peVar1 = this->pev->pContainingEntity, peVar1 != (edict_t *)0x0)) &&
           (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1), iVar2 != 0))) {
      CTSGroundAmmo::Fall(this);
      this = (CTSGroundAmmo *)UTIL_FindEntityByClassname((int)this,s_ts_groundweapon_100a3f2c);
    }
    if (DAT_102efbc4 != 0) {
      this = (CTSGroundAmmo *)UTIL_FindEntityByClassname((int)this,s_ts_powerup_100a3f20);
      while (((this != (CTSGroundAmmo *)0x0 &&
              (peVar1 = this->pev->pContainingEntity, peVar1 != (edict_t *)0x0)) &&
             (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1), iVar2 != 0))) {
        CTSPowerUp::Fall((CTSPowerUp *)this);
        this = (CTSGroundAmmo *)UTIL_FindEntityByClassname((int)this,s_ts_powerup_100a3f20);
      }
    }
  }
  piVar3 = (int *)UTIL_FindEntityByClassname((int)this,s_ts_flag_100a3f18);
  while (((piVar3 != (int *)0x0 && (*(edict_t **)(piVar3[1] + 0x208) != (edict_t *)0x0)) &&
         (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar3[1] + 0x208)), iVar2 != 0)
         )) {
    CTSFlag::RespawnFlag(piVar3);
    piVar3 = (int *)UTIL_FindEntityByClassname((int)piVar3,s_ts_flag_100a3f18);
  }
  return;
}

/* 1004d630  CTSGameRules::RestartRound  (736 bytes)
 * undefined RestartRound(char * param_1)
 * called by: CTSGameRules::Think
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CTSGameRules::RestartRound(char *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  CBasePlayer *this;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iStack_c;
  
  if (_DAT_1009ed2c <= 30.0) {
    fVar2 = 30.0;
  }
  else {
    fVar2 = _DAT_1009ed2c;
    if (180.0 <= _DAT_1009ed2c) {
      fVar2 = 180.0;
    }
  }
  fVar1 = gpGlobals->time;
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  *(float *)(param_1 + 8) = fVar2 + fVar1;
  if (param_1[0x10] != '\0') {
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9794,(float *)0x0,(edict_t *)0x0);
    lVar12 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar12);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnMessageEnd)();
  }
  InitObjectives(param_1);
  SetObjective(param_1);
  if (*param_1 == '\x02') {
    TSHudMessageAll(0,0,0,8,0x1e,s_Defeat_the_opposite_team_100a3f4c);
  }
  iStack_c = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      iVar10 = 0;
      this = (CBasePlayer *)UTIL_PlayerByIndex(iStack_c);
      if ((this != (CBasePlayer *)0x0) && (iVar6 = (*this->vtable[0x30])(), iVar6 != 0)) {
        cVar3 = *param_1;
        if ((cVar3 == '\x02') || (cVar3 == '\x03')) {
          if ((param_1[0x5874] != '\0') || (cVar3 == '\x02')) {
            fVar2 = gpGlobals->time;
            goto LAB_1004d770;
          }
        }
        else {
          fVar2 = gpGlobals->time;
LAB_1004d770:
          *(float *)&this->field_0x7a8 = fVar2 + 10.0;
        }
        iVar6 = *(int *)&this->field_0x9fc;
        iVar11 = 0;
        fVar2 = gpGlobals->time;
        this->field_0x738 = 0xb;
        this->field_0x700 = 0;
        this->field_0x7a6 = 0;
        *(undefined4 *)&this->field_0x718 = 0;
        *(undefined4 *)&this->field_0x71c = 0;
        *(undefined4 *)&this->field_0x710 = 0;
        *(float *)&this->field_0x75c = fVar2 + 3.0;
        *(undefined4 *)&this->field_0x714 = 0;
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x78) == 0x10)) {
          puVar8 = (uint *)(iVar6 + 0x114);
          do {
            if ((((char)puVar8[-4] != '\0') && (0 < iVar10)) && (iVar10 != 0x1d)) {
              puVar7 = get_weapon_info(iVar10);
              uVar4 = *puVar8;
              iVar11 = iVar11 + puVar7[0x36];
              if ((uVar4 & 1) != 0) {
                iVar11 = iVar11 + 900;
              }
              if ((uVar4 & 2) != 0) {
                iVar11 = iVar11 + 800;
              }
              if ((uVar4 & 4) != 0) {
                iVar11 = iVar11 + 500;
              }
              if ((uVar4 & 8) != 0) {
                iVar11 = iVar11 + 0x708;
              }
            }
            iVar10 = iVar10 + 1;
            puVar8 = puVar8 + 0xe;
          } while (iVar10 < 0x26);
          iVar10 = 0;
          piVar9 = (int *)(iVar6 + 0xc4);
          do {
            puVar7 = get_ammo_info(iVar10);
            if ((int)puVar7[4] < *piVar9) {
              puVar7 = get_ammo_info(iVar10);
              iVar6 = puVar7[1];
              iVar5 = *piVar9;
              puVar7 = get_ammo_info(iVar10);
              iVar11 = iVar11 + (iVar6 * iVar5) / (int)puVar7[4];
            }
            iVar10 = iVar10 + 1;
            piVar9 = piVar9 + 1;
          } while (iVar10 < 0x10);
        }
        CBasePlayer::GiveCash(this,iVar11);
        if (this->pev->iuser1 == 0) {
          Vector::Vector((Vector *)&stack0xffffffc8,this->pev->origin);
          CBasePlayer::StartObserver(this);
        }
      }
      iStack_c = iStack_c + 1;
    } while (iStack_c <= gpGlobals->maxClients);
  }
  CHalfLifeTeamplay::RecountTeams(g_pGameRules,'\0');
  RespawnEntities(param_1);
  return;
}

/* 1004d910  CTSGameRules::Init  (350 bytes)
 * undefined Init(char * param_1)
 * called by: CHalfLifeMultiplay::CHalfLifeMultiplay, CHalfLifeMultiplay::ChangeLevel, CHalfLifeTeamplay::CHalfLifeTeamplay
 */
void __fastcall CTSGameRules::Init(char *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  *param_1 = (char)g_teamplay;
  InitTeams(param_1);
  param_1[1] = -1;
  param_1[0x578] = -1;
  param_1[0x579] = -1;
  param_1[0x57a] = -1;
  param_1[0x57b] = -1;
  param_1[0x55c] = -1;
  param_1[0x55d] = -1;
  param_1[0x55e] = -1;
  param_1[0x55f] = -1;
  param_1[0x558] = -1;
  param_1[0x559] = -1;
  param_1[0x55a] = -1;
  param_1[0x55b] = -1;
  param_1[0x56c] = '\0';
  param_1[0x56d] = '\0';
  param_1[0x56e] = '\0';
  param_1[0x56f] = '\0';
  param_1[0x560] = '\0';
  param_1[0x561] = '\0';
  param_1[0x562] = '\0';
  param_1[0x563] = '\0';
  param_1[0x564] = '\0';
  param_1[0x565] = '\0';
  param_1[0x566] = '\0';
  param_1[0x567] = '\0';
  param_1[0x568] = '\0';
  param_1[0x569] = '\0';
  param_1[0x56a] = '\0';
  param_1[0x56b] = '\0';
  param_1[0x574] = '\0';
  param_1[0x575] = '\0';
  param_1[0x576] = -0x80;
  param_1[0x577] = -0x41;
  pcVar4 = param_1 + 0x57c;
  for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  fVar1 = gpGlobals->time;
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  *(float *)(param_1 + 0x570) = fVar1 + 60.0;
  fVar1 = gpGlobals->time;
  param_1[0x10] = '\x01';
  *(float *)(param_1 + 0xc) = fVar1 + 5.0;
  InitObjectives(param_1);
  SetObjective(param_1);
  CNodeGraph::Reset(&g_NodeGraph);
  CNodeGraph::Load(&g_NodeGraph);
  BotLoadFiles();
  pcVar4 = param_1 + 0x684;
  for (iVar3 = 0x240; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  fVar1 = gpGlobals->time;
  param_1[0x1824] = '\0';
  *(float *)(param_1 + 0xf84) = fVar1 + 10.0;
  CBulletManager::Reset((undefined4 *)(param_1 + 0x1864));
  uVar2 = InitWeaponRestriction();
  *(undefined4 *)(param_1 + 0x586c) = uVar2;
  *(undefined4 *)(param_1 + 0x5870) = uVar2;
  param_1[0x5878] = '\0';
  fVar1 = gpGlobals->time;
  param_1[0x5880] = '\0';
  param_1[0x5881] = '\0';
  param_1[0x5882] = '\0';
  param_1[0x5883] = '\0';
  param_1[0x5884] = '\0';
  param_1[0x5885] = '\0';
  param_1[0x5875] = '\0';
  param_1[0x5874] = '\0';
  param_1[0x5876] = '\0';
  *(float *)(param_1 + 0x587c) = fVar1 + 10.0;
  param_1[0x5888] = -0x33;
  param_1[0x5889] = -0x34;
  param_1[0x588a] = -0x34;
  param_1[0x588b] = '=';
  param_1[0x588c] = -0x66;
  param_1[0x588d] = -0x67;
  param_1[0x588e] = 'Y';
  param_1[0x588f] = '>';
  param_1[0x5890] = '\0';
  param_1[0x5891] = '\0';
  return;
}

/* 1004dab0  CTSGameRules::InitTeams  (297 bytes)
 * undefined InitTeams(char * param_1)
 * called by: CTSGameRules::Init
 */
void __fastcall CTSGameRules::InitTeams(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  int local_c;
  char *local_8;
  
  local_c = 0;
  pcVar5 = param_1 + 0x1c;
  for (iVar2 = 0x8c; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  local_8 = s_seal_merc_100a3718;
  pcVar5 = param_1 + 0x24;
  do {
    pcVar5[-0xffffffff00000004] = '\0';
    pcVar5[-0xffffffff00000003] = '\0';
    pcVar5[-0xffffffff00000002] = '\0';
    pcVar5[-0xffffffff00000001] = '\0';
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    lVar8 = __ftol();
    *(int *)(pcVar5 + -8) = (int)lVar8;
    sprintf(pcVar5 + 4,(byte_conflict *)s_Team_i_100a3fac);
    sprintf(pcVar5 + 0x44,(byte_conflict *)s_info_player_team_i_100a3f98);
    uVar3 = 0xffffffff;
    pcVar6 = s_info_player_deathmatch_100a23fc;
    do {
      pcVar7 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar7 + -uVar3;
    pcVar7 = pcVar5 + 100;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    SetTeamModelList((CTSGameRules *)param_1,local_c,local_8);
    local_8 = local_8 + 0x200;
    pcVar5 = pcVar5 + 0x8c;
    local_c = local_c + 1;
  } while ((int)local_8 < 0x100a3f18);
  if ((*param_1 == '\x03') || (*param_1 == '\x02')) {
    SetTeamModelList((CTSGameRules *)param_1,0,(char *)&DAT_1009efcc);
    SetTeamModelList((CTSGameRules *)param_1,1,&DAT_100a3f90);
    SetTeamList((CTSGameRules *)param_1,s_Specialists_Mercenaries_100a3f78);
    uVar3 = 0xffffffff;
    pcVar5 = s_info_player_start_100a36d0;
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    pcVar6 = param_1 + 0x88;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  return;
}

/* 1004dbe0  CTSGameRules::SetTeamList  (312 bytes)
 * undefined SetTeamList(char * param_1)
 * called by: CHalfLifeTeamplay::CHalfLifeTeamplay, CTSGameRules::InitTeams, CWorld::KeyValue
 */
void __thiscall CTSGameRules::SetTeamList(CTSGameRules *this,char *param_1)

{
  char cVar1;
  CTSGameRules *pCVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte_conflict *pbVar8;
  byte_conflict *pbVar9;
  char *pcVar10;
  CTSGameRules *pCVar11;
  bool bVar12;
  byte_conflict local_200 [512];
  
  pCVar2 = this + 0x28;
  iVar4 = 4;
  do {
    *pCVar2 = (CTSGameRules)0x0;
    pCVar2 = pCVar2 + 0x8c;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar5 = 0xffffffff;
  do {
    pcVar3 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar3 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar3;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pbVar8 = (byte_conflict *)(pcVar3 + -uVar5);
  pbVar9 = local_200;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    pbVar9 = pbVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar9 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar9 = pbVar9 + 1;
  }
  pcVar3 = (char *)FUN_1007e23b(local_200,&DAT_100a2748);
  bVar12 = DAT_102efbc0 != 0;
  iVar4 = 0;
  do {
    if (((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) ||
       ((int)((-(uint)bVar12 & 0xfffffffe) + 4) <= iVar4)) {
      return;
    }
    if ((iVar4 == 0) && (DAT_102efbc0 != 0)) {
      uVar5 = 0xffffffff;
      iVar7 = 1;
      pcVar3 = s_The_ONE_100a3fc8;
      do {
        pcVar10 = pcVar3;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pCVar2 = (CTSGameRules *)(pcVar10 + -uVar5);
      pCVar11 = this + 0x28;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pCVar11 = *(undefined4 *)pCVar2;
        pCVar2 = pCVar2 + 4;
        pCVar11 = pCVar11 + 4;
      }
    }
    else {
      iVar7 = iVar4 + 1;
      uVar5 = 0xffffffff;
      do {
        pcVar10 = pcVar3;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pCVar2 = (CTSGameRules *)(pcVar10 + -uVar5);
      pCVar11 = this + iVar4 * 0x8c + 0x28;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pCVar11 = *(undefined4 *)pCVar2;
        pCVar2 = pCVar2 + 4;
        pCVar11 = pCVar11 + 4;
      }
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pCVar11 = *pCVar2;
      pCVar2 = pCVar2 + 1;
      pCVar11 = pCVar11 + 1;
    }
    pcVar3 = (char *)FUN_1007e23b((byte_conflict *)0x0,&DAT_100a2748);
    (*g_engfuncs.pfnAlertMessage)(at_console,s_created_team__s_100a3fb4,this + iVar7 * 0x8c + -100);
    iVar4 = iVar7;
  } while( true );
}

/* 1004de30  CTSGameRules::SetTeamModelList  (212 bytes)
 * undefined SetTeamModelList(int param_1, char * param_2)
 * called by: CTSGameRules::InitTeams, FUN_1004dd20
 */
void __thiscall CTSGameRules::SetTeamModelList(CTSGameRules *this,int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  CTSGameRules *pCVar6;
  byte_conflict *pbVar7;
  CTSGameRules *pCVar8;
  byte_conflict *pbVar9;
  char *pcVar10;
  CTSGameRules *pCVar11;
  byte_conflict local_200 [512];
  
  pCVar6 = this + param_1 * 0x8c + 0x38;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar6 = 0;
    pCVar6 = pCVar6 + 4;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar2 = param_2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar2 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar2;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pbVar7 = (byte_conflict *)(pcVar2 + -uVar4);
  pbVar9 = local_200;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pbVar9 = *(undefined4 *)pbVar7;
    pbVar7 = pbVar7 + 4;
    pbVar9 = pbVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar9 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    pbVar9 = pbVar9 + 1;
  }
  pcVar2 = (char *)FUN_1007e23b(local_200,&DAT_100a2748);
  iVar3 = 0;
  if (pcVar2 != (char *)0x0) {
    pCVar6 = this + param_1 * 0x8c + 0x28;
    do {
      if (*pcVar2 == '\0') {
        return;
      }
      if (2 < iVar3) {
        return;
      }
      pCVar11 = pCVar6 + 0x10;
      uVar4 = 0xffffffff;
      iVar3 = iVar3 + 1;
      pCVar6 = pCVar6 + 0x10;
      do {
        pcVar10 = pcVar2;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar10 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar10;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pCVar8 = (CTSGameRules *)(pcVar10 + -uVar4);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pCVar11 = *(undefined4 *)pCVar8;
        pCVar8 = pCVar8 + 4;
        pCVar11 = pCVar11 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pCVar11 = *pCVar8;
        pCVar8 = pCVar8 + 1;
        pCVar11 = pCVar11 + 1;
      }
      pcVar2 = (char *)FUN_1007e23b((byte_conflict *)0x0,&DAT_100a2748);
      (*g_engfuncs.pfnAlertMessage)
                (at_console,s_set_model__s_for_team__s_100a3fd4,pCVar6,this + param_1 * 0x8c + 0x28)
      ;
    } while (pcVar2 != (char *)0x0);
  }
  return;
}

/* 1004df10  CTSGameRules::GetTeamsNum  (26 bytes)
 * int GetTeamsNum(int param_1)
 * called by: CBotStateDM::Think
 */
/* .so 0x785a8; this = TSGameRules */

int __fastcall CTSGameRules::GetTeamsNum(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar1 = 0;
  pcVar2 = (char *)(param_1 + 0x28);
  iVar3 = 4;
  do {
    if (*pcVar2 != '\0') {
      iVar1 = iVar1 + 1;
    }
    pcVar2 = pcVar2 + 0x8c;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar1;
}

/* 1004df30  CTSGameRules::InitObjectives  (305 bytes)
 * undefined InitObjectives(char * param_1)
 * called by: CTSGameRules::Init, CTSGameRules::RestartRound
 */
/* .so 0x785d8; ts_objective_manager, called from Init */

void __fastcall CTSGameRules::InitObjectives(char *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  edict_t *peVar4;
  edict_t *peVar5;
  int iVar6;
  char *pcVar7;
  
  pcVar7 = param_1 + 0x250;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + 4;
  }
  if ((*param_1 == '\x03') || (*param_1 == '\x02')) {
    param_1[0x24c] = '\0';
    param_1[0x24d] = '\0';
    param_1[0x24e] = '\0';
    param_1[0x24f] = '\0';
    param_1[0x554] = '\0';
    param_1[0x555] = '\0';
    param_1[0x556] = '\0';
    param_1[0x557] = '\0';
    iVar6 = UTIL_FindEntityByClassname(0,s_ts_objective_manager_100a3ff0);
    while (((iVar6 != 0 &&
            (peVar4 = *(edict_t **)(*(int *)(iVar6 + 4) + 0x208), peVar4 != (edict_t *)0x0)) &&
           (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar4), iVar3 != 0))) {
      if (*(int *)(param_1 + 0x24c) < 0x20) {
        *(int *)(param_1 + *(int *)(param_1 + 0x24c) * 4 + 0x250) = iVar6;
        *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) + 1;
      }
      iVar6 = UTIL_FindEntityByClassname(iVar6,s_ts_objective_manager_100a3ff0);
    }
    if (*(int *)(param_1 + 0x24c) == 0) {
      *param_1 = '\x02';
      g_teamplay = 2;
      return;
    }
    iVar6 = 1;
    *param_1 = '\x03';
    g_teamplay = 3;
    peVar4 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
    if ((peVar4 != (edict_t *)0x0) && (1 < gpGlobals->maxEntities)) {
      do {
        if ((((peVar4->free == 0) &&
             ((peVar5 = peVar4, peVar4 != (edict_t *)0x0 ||
              (peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar5 != (edict_t *)0x0)))) &&
            (piVar1 = peVar5->pvPrivateData, piVar1 != (int *)0x0)) &&
           (cVar2 = (**(code **)(*piVar1 + 0x14))(), cVar2 != '\0')) {
          (**(code **)(*piVar1 + 0x18))(0);
        }
        iVar6 = iVar6 + 1;
        peVar4 = peVar4 + 1;
      } while (iVar6 < gpGlobals->maxEntities);
    }
  }
  return;
}

/* 1004e070  CTSGameRules::ResetRestartRound  (260 bytes)
 * undefined ResetRestartRound(int param_1)
 * called by: cmd_restartround
 */
void __thiscall CTSGameRules::ResetRestartRound(CTSGameRules *this,int param_1)

{
  float fVar1;
  CTSGameRules *sz;
  int iVar2;
  longlong lVar3;
  
  if (((*this == (CTSGameRules)0x3) || (*this == (CTSGameRules)0x2)) || (DAT_102efbc4 != 0)) {
    fVar1 = gpGlobals->time;
    *(undefined4 *)(this + 8) = 0;
    *(float *)(this + 0xc) = fVar1 + 1.0;
    if (this[0x10] != (CTSGameRules)0x0) {
      (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9794,(float *)0x0,(edict_t *)0x0);
      lVar3 = __ftol();
      (*g_engfuncs.pfnWriteByte)((int)lVar3);
      param_1 = 0;
      (*g_engfuncs.pfnWriteByte)(0);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if (1 < param_1) {
      sz = this + 0x28;
      iVar2 = 4;
      do {
        *(undefined4 *)(sz + -8) = 0;
        *(undefined4 *)(sz + -4) = 0;
        lVar3 = __ftol();
        *(int *)(sz + -0xc) = (int)lVar3;
        if (*sz != (CTSGameRules)0x0) {
          (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9720,(float *)0x0,(edict_t *)0x0);
          (*g_engfuncs.pfnWriteString)((char *)sz);
          (*g_engfuncs.pfnWriteShort)(*(int *)(sz + -4));
          (*g_engfuncs.pfnWriteShort)(0);
          (*g_engfuncs.pfnMessageEnd)();
        }
        sz = sz + 0x8c;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    TSHudMessageAll(0,0,0,8,0x1e,s_Restarting_Round_100a4008);
  }
  return;
}

/* 1004e180  CTSGameRules::TeamWin  (838 bytes)
 * undefined TeamWin(int param_1, int param_2, int param_3, char param_4)
 * called by: CTSGameRules::CheckDeads, CTSGameRules::RoundTimeLeft, CTSGameRules::Think, CTSScoreGiver::Use, CTSWinGiver::Use
 */
void __thiscall
CTSGameRules::TeamWin(CTSGameRules *this,int param_1,int param_2,int param_3,char param_4)

{
  float fVar1;
  int iVar2;
  CBasePlayer *this_00;
  byte_conflict *pbVar3;
  int *piVar4;
  undefined4 uVar5;
  CTSGameRules *pCVar6;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  char acStack_20 [32];
  
  if ((this[0x10] != (CTSGameRules)0x0) && (param_4 == '\0')) {
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9794,(float *)0x0,(edict_t *)0x0);
    lVar8 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar8);
    (*g_engfuncs.pfnWriteByte)(2);
    acStack_20[0] = -0x2b;
    acStack_20[1] = -0x1f;
    acStack_20[2] = '\x04';
    acStack_20[3] = '\x10';
    (*g_engfuncs.pfnMessageEnd)();
  }
  if ((char)param_3 != '\0') {
    fVar1 = gpGlobals->time;
    *(undefined4 *)(this + 8) = 0;
    *(float *)(this + 0xc) = fVar1 + 3.0;
  }
  iVar2 = FUN_1004f150();
  iVar7 = 1;
  if (iVar2 < 2) {
    pCVar6 = this + 0x24;
    iVar7 = 4;
    do {
      *(undefined4 *)(pCVar6 + -4) = 0;
      *(undefined4 *)pCVar6 = 0;
      lVar8 = __ftol();
      *(int *)(pCVar6 + -8) = (int)lVar8;
      pCVar6 = pCVar6 + 0x8c;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    TSHudMessageAll(0,0,0,8,0x1e,s_Waiting_for_other_players__100a4074);
  }
  else {
    if (0 < gpGlobals->maxClients) {
      do {
        this_00 = (CBasePlayer *)UTIL_PlayerByIndex(iVar7);
        if ((this_00 != (CBasePlayer *)0x0) && (iVar2 = (*this_00->vtable[0x30])(), iVar2 != 0)) {
          if (param_2 == 0) {
            sscanf(PTR_s_10000_1009ecf4,&DAT_1009cc60);
          }
          else {
            param_3 = param_2;
          }
          sscanf(PTR_DAT_1009ed0c,&DAT_1009cc60);
          pbVar3 = (byte_conflict *)(*this_00->vtable[0x32])();
          iVar7 = GetTeamIndex(this,pbVar3);
          if (param_1 != iVar7) {
            CBasePlayer::GiveCash(this_00,param_1);
          }
          else {
            CBasePlayer::GiveCash(this_00,param_3);
          }
          (*g_engfuncs.pfnMessageBegin)(1,DAT_100d97c8,(float *)0x0,this_00->pev->pContainingEntity)
          ;
          (*g_engfuncs.pfnWriteByte)((uint)(param_1 != iVar7));
          (*g_engfuncs.pfnMessageEnd)();
          iVar7 = 0x1004e324;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 <= gpGlobals->maxClients);
    }
    if (param_1 == 2) {
      TSHudMessageAll(0,0,0,8,0x1e,s_Game_Draw_100a4028);
      UTIL_LogPrintf((byte_conflict *)s_Round_draw_100a401c);
    }
    else {
      *(int *)(this + param_1 * 0x8c + 0x24) = *(int *)(this + param_1 * 0x8c + 0x24) + 1;
      if (param_4 == '\0') {
        pcVar9 = s__s_Win__100a4060;
      }
      else {
        pcVar9 = s__s_Score__100a4068;
      }
      sprintf(acStack_20,(byte_conflict *)pcVar9);
      TSHudMessageAll(0,0,0,8,0x1e,acStack_20);
      (**(code **)(*g_pGameRules + 200))(this + param_1 * 0x8c + 0x28);
      iVar7 = 1;
      if (0 < gpGlobals->maxClients) {
        do {
          piVar4 = (int *)UTIL_PlayerByIndex(iVar7);
          if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 0xc0))(), iVar2 != 0)) {
            iVar2 = *g_pGameRules;
            uVar5 = (**(code **)(*piVar4 + 200))();
            (**(code **)(iVar2 + 200))(uVar5);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 <= gpGlobals->maxClients);
      }
      UTIL_LogPrintf((byte_conflict *)s_Team___s__scored___d__with___d__p_100a4034);
    }
  }
  if ((*this == (CTSGameRules)0x3) || (*this == (CTSGameRules)0x2)) {
    pCVar6 = this + 0x28;
    iVar7 = 4;
    do {
      if (*pCVar6 != (CTSGameRules)0x0) {
        (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9720,(float *)0x0,(edict_t *)0x0);
        (*g_engfuncs.pfnWriteString)((char *)pCVar6);
        (*g_engfuncs.pfnWriteShort)(*(int *)(pCVar6 + -4));
        (*g_engfuncs.pfnWriteShort)(0);
        acStack_20[4] = -0x4c;
        acStack_20[5] = -0x1c;
        acStack_20[6] = '\x04';
        acStack_20[7] = '\x10';
        (*g_engfuncs.pfnMessageEnd)();
      }
      pCVar6 = pCVar6 + 0x8c;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

/* 1004e4d0  CTSGameRules::RoundTimeLeft  (86 bytes)
 * undefined RoundTimeLeft(void * param_1)
 * called by: CTSBomb::WaitThink, CTSGameRules::Think
 */
void __fastcall CTSGameRules::RoundTimeLeft(void *param_1)

{
  int iVar1;
  
  if ((*(float *)((int)param_1 + 8) != 0.0) && (*(char *)((int)param_1 + 0x10) != '\0')) {
    iVar1 = *(int *)((int)param_1 + 0x554);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x84) != 0)) {
      FireTargets((int)(gpGlobals->pStringBase + *(int *)(iVar1 + 0x84)),iVar1,iVar1,3,0);
      return;
    }
    TeamWin(param_1,2,0,1,'\0');
  }
  return;
}

/* 1004e530  CTSGameRules::SetObjective  (85 bytes)
 * undefined SetObjective(char * param_1)
 * called by: CTSGameRules::Init, CTSGameRules::RestartRound
 */
/* .so 0x790b4; called from Init */

void __fastcall CTSGameRules::SetObjective(char *param_1)

{
  int iVar1;
  
  ClearObjectiveList((int)param_1);
  if ((*param_1 == '\x03') || (*param_1 == '\x02')) {
    param_1[0x554] = '\0';
    param_1[0x555] = '\0';
    param_1[0x556] = '\0';
    param_1[0x557] = '\0';
    if (*(int *)(param_1 + 0x24c) != 0) {
      iVar1 = (*g_engfuncs.pfnRandomLong)(0,*(int *)(param_1 + 0x24c) + -1);
      (**(code **)(**(int **)(param_1 + iVar1 * 4 + 0x250) + 0x10c))();
      *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_1 + iVar1 * 4 + 0x250);
    }
  }
  return;
}

/* 1004e590  CTSGameRules::InitHUD  (948 bytes)
 * undefined InitHUD(int * param_1)
 * called by: CBasePlayer::UpdateClientData
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CTSGameRules::InitHUD(CTSGameRules *this,int *param_1)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  CTSGameRules *pCVar6;
  longlong lVar7;
  undefined4 uStack00000008;
  undefined4 uStack00000030;
  float in_stack_0000003c;
  int iStack00000064;
  
  if ((_g_flWeaponCheat != 0.0) &&
     (TSHudMessageOne(0x2d,0xc3,0x2d,8,100,s_This_server_has_cheats_enabled__100a40c0,param_1[1]),
     0.0 < DAT_1009ed5c)) {
    iVar3 = param_1[1];
    pcVar1 = UTIL_VarArgs((byte_conflict *)s_This_server_has_custom_weapon_da_100a4090);
    TSHudMessageOne(0x2d,0xc3,0x2d,8,100,pcVar1,iVar3);
  }
  if (this[0x5884] != (CTSGameRules)0x0) {
    InformClientsOnWeaponsParams((int)param_1);
  }
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100d97bc,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnWriteShort)(*(int *)(this + 0x578));
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100d97bc,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
  (*g_engfuncs.pfnWriteByte)(1);
  (*g_engfuncs.pfnWriteShort)((uint)(_DAT_1009edd4 != 0.0));
  (*g_engfuncs.pfnMessageEnd)();
  uStack00000008 = 0x1004e6c0;
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100d97bc,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
  (*g_engfuncs.pfnWriteByte)(2);
  lVar7 = __ftol();
  (*g_engfuncs.pfnWriteShort)((int)lVar7);
  (*g_engfuncs.pfnMessageEnd)();
  uStack00000008 = 0x1004e6f9;
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100d97bc,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
  (*g_engfuncs.pfnWriteByte)(3);
  (*g_engfuncs.pfnWriteShort)(*(int *)(this + 0x5870));
  (*g_engfuncs.pfnMessageEnd)();
  if ((*(float *)(this + 8) != 0.0) && (this[0x10] != (CTSGameRules)0x0)) {
    in_stack_0000003c = 2.621057e-29;
    (*g_engfuncs.pfnMessageBegin)(1,DAT_100d9794,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
    lVar7 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar7);
    (*g_engfuncs.pfnWriteByte)(0);
    iStack00000064 = 0x1004e783;
    (*g_engfuncs.pfnMessageEnd)();
  }
  iStack00000064 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar2 = (int *)UTIL_PlayerByIndex(iStack00000064);
      if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0xc0))(), iVar3 != 0)) {
        in_stack_0000003c = 2.6211004e-29;
        (*g_engfuncs.pfnMessageBegin)(1,DAT_100d979c,(float *)0x0,*(edict_t **)(param_1[1] + 0x208))
        ;
        iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(piVar2[1] + 0x208));
        (*g_engfuncs.pfnWriteByte)(iVar3);
        (*g_engfuncs.pfnWriteByte)((uint)(*(int *)(piVar2[1] + 0x244) != 0));
        (*g_engfuncs.pfnMessageEnd)();
      }
      iStack00000064 = iStack00000064 + 1;
    } while (iStack00000064 <= gpGlobals->maxClients);
  }
  uStack00000030 = 0x1004e852;
  Vector::Vector((Vector *)&stack0x00000038,(undefined4 *)(param_1[1] + 8));
  CBasePlayer::StartObserver((CBasePlayer *)param_1);
  *(undefined1 *)((int)param_1 + 0x7a6) = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  param_1[0x14a] = 0;
  param_1[0x149] = 0;
  param_1[0x1ec] = 0;
  *(undefined1 *)(param_1 + 0x1ed) = 0;
  param_1[0x1ee] = 0;
  lVar7 = __ftol();
  FUN_1004c260((int)param_1,(int)lVar7);
  puVar5 = (undefined4 *)((int)param_1 + 0x486);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  CBasePlayer::ResetArmament((int)param_1);
  if ((g_teamplay == 2) || (g_teamplay == 3)) {
    param_1[0x1d1] = 0;
    FUN_1004fc00(this,param_1);
  }
  iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1[1] + 0x208));
  if ((-1 < iVar3) && (iVar3 < 0x20)) {
    pCVar6 = this + iVar3 * 0x48 + 0x684;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pCVar6 = 0;
      pCVar6 = pCVar6 + 4;
    }
    *(int *)(this + iVar3 * 0x48 + 0x6c8) = iVar3 + 1;
  }
  return;
}

/* 1004eca0  CTSGameRules::GetTeamIndex  (60 bytes)
 * int GetTeamIndex(byte.conflict * param_1)
 * called by: CBotStateTeamRounds::Think, CHalfLifeMultiplay::PlayerKilled, CTSBriefcase::CaptureTouch, CTSFlag::PlayerTakeFlag, CTSGameRules::CheckDeads, CTSGameRules::TeamWin, CTSGroundWeapon::GetWeapon, CTSSellZone::SellTouch, CTSTrigger::WaitTouch, FUN_1004c380, FUN_1004ec20, FUN_1004fae0, ... (14 total)
 */
/* .so 0x79b04; this = TSGameRules, -1 if none */

int __thiscall CTSGameRules::GetTeamIndex(CTSGameRules *this,byte_conflict *param_1)

{
  uint uVar1;
  CTSGameRules *extraout_ECX;
  CTSGameRules *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this + 0x28;
  do {
    if (*pCVar2 != (CTSGameRules)0x0) {
      uVar1 = FUN_100887b0(this,param_1,(byte_conflict *)pCVar2);
      this = extraout_ECX;
      if (uVar1 == 0) {
        return iVar3;
      }
    }
    iVar3 = iVar3 + 1;
    pCVar2 = pCVar2 + 0x8c;
  } while (iVar3 < 4);
  return -1;
}

/* 1004ece0  CTSGameRules::CallCheckDeads  (36 bytes)
 * undefined CallCheckDeads(int param_1)
 * called by: CBasePlayer::PreThink, CHalfLifeMultiplay::PlayerKilled, TSPlayerDisconnect
 */
void __fastcall CTSGameRules::CallCheckDeads(int param_1)

{
  if (*(float *)(param_1 + 0xc) == 0.0) {
    *(float *)(param_1 + 0x5880) = gpGlobals->time + 1.0;
  }
  return;
}

/* 1004ed10  CTSGameRules::CheckDeads  (1075 bytes)
 * undefined CheckDeads(char * param_1)
 * called by: CTSGameRules::Think
 */
void __fastcall CTSGameRules::CheckDeads(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  byte_conflict *pbVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int local_14;
  
  iVar7 = 0;
  param_1[0x5880] = '\0';
  param_1[0x5881] = '\0';
  param_1[0x5882] = '\0';
  param_1[0x5883] = '\0';
  if ((*(float *)(param_1 + 0xc) != 0.0) || (cVar1 = *param_1, cVar1 == '\x01')) {
    return;
  }
  if ((cVar1 != '\0') || (DAT_102efbc4 == 0)) {
    if ((cVar1 != '\x02') && (cVar1 != '\x03')) {
      return;
    }
    iVar11 = 1;
    iVar10 = 0;
    iVar5 = 0;
    iVar8 = 0;
    iVar3 = 0;
    if (0 < gpGlobals->maxClients) {
      do {
        iVar5 = iVar3;
        iVar10 = iVar8;
        piVar9 = (int *)UTIL_PlayerByIndex(iVar11);
        if (((piVar9 != (int *)0x0) && (iVar8 = (**(code **)(*piVar9 + 0xc0))(), iVar8 != 0)) &&
           ((iVar8 = (**(code **)(*piVar9 + 0xac))(), iVar8 != 0 || (0.0 <= (float)piVar9[0x1d7]))))
        {
          pbVar6 = (byte_conflict *)(**(code **)(*piVar9 + 200))();
          iVar8 = GetTeamIndex((CTSGameRules *)param_1,pbVar6);
          if (-1 < iVar8) {
            iVar7 = iVar7 + 1;
            *(int *)(&stack0xfffffff0 + iVar8 * 4) = *(int *)(&stack0xfffffff0 + iVar8 * 4) + 1;
          }
        }
        iVar11 = iVar11 + 1;
        iVar8 = iVar10;
        iVar3 = iVar5;
      } while (iVar11 <= gpGlobals->maxClients);
    }
    if (*param_1 != '\x03') {
      if (iVar7 < 1) {
        TeamWin((CTSGameRules *)param_1,2,0,1,'\0');
        return;
      }
      if (0 < iVar5) {
        if (0 < iVar10) {
          return;
        }
        TeamWin((CTSGameRules *)param_1,1,0,1,'\0');
        return;
      }
      TeamWin((CTSGameRules *)param_1,0,0,1,'\0');
      return;
    }
    if (iVar7 < 1) {
      TeamWin((CTSGameRules *)param_1,2,0,1,'\0');
      return;
    }
    if (iVar5 < 1) {
      iVar7 = *(int *)(param_1 + 0x554);
      if (iVar7 == 0) {
        return;
      }
      FireTargets((int)(gpGlobals->pStringBase + *(int *)(iVar7 + 0x8c)),iVar7,iVar7,3,0);
      return;
    }
    if (0 < iVar10) {
      return;
    }
    iVar7 = *(int *)(param_1 + 0x554);
    if (iVar7 == 0) {
      return;
    }
    FireTargets((int)(gpGlobals->pStringBase + *(int *)(iVar7 + 0x88)),iVar7,iVar7,3,0);
    return;
  }
  iVar8 = 1;
  piVar9 = (int *)0x0;
  local_14 = 0;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar2 = (int *)UTIL_PlayerByIndex(iVar8);
      if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0xc0))(), iVar3 != 0)) {
        local_14 = local_14 + 1;
        iVar3 = (**(code **)(*piVar2 + 0xac))();
        if (iVar3 != 0) {
          iVar7 = iVar7 + 1;
          piVar9 = piVar2;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 <= gpGlobals->maxClients);
    if (iVar7 == 1) {
      if (local_14 < 2) {
        TSHudMessageAll(0,0xff,0,8,0x1e,s_Waiting_for_other_players__100a4074);
      }
      else {
        pcVar4 = UTIL_VarArgs((byte_conflict *)s__s_is_the_Last_Man_Standing___i_f_100a412c);
        TSHudMessageAll(0,0xff,0,1,0x1e,pcVar4);
        *(float *)(piVar9[1] + 0x164) = *(float *)(piVar9[1] + 0x164) + 10.0;
        (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9718,(float *)0x0,(edict_t *)0x0);
        iVar7 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(piVar9[1] + 0x208));
        (*g_engfuncs.pfnWriteByte)(iVar7);
        lVar12 = __ftol();
        (*g_engfuncs.pfnWriteShort)((int)lVar12);
        (*g_engfuncs.pfnWriteShort)(piVar9[0x2c7]);
        (*g_engfuncs.pfnWriteShort)(0);
        iVar7 = (**(code **)(*g_pGameRules + 200))();
        (*g_engfuncs.pfnWriteShort)(iVar7 + 1);
        (*g_engfuncs.pfnMessageEnd)();
        UTIL_LogPrintf((byte_conflict *)s_Player___s__triggered__last_man__100a4100);
      }
      *(float *)(param_1 + 0xc) = gpGlobals->time + 3.0;
      if (param_1[0x10] == '\0') {
        return;
      }
      (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9794,(float *)0x0,(edict_t *)0x0);
      lVar12 = __ftol();
      (*g_engfuncs.pfnWriteByte)((int)lVar12);
      (*g_engfuncs.pfnWriteByte)(2);
      (*g_engfuncs.pfnMessageEnd)();
      return;
    }
    if (((0 < iVar7) && (gpGlobals->time <= *(float *)(param_1 + 8))) && (1 < local_14))
    goto LAB_1004ef88;
  }
  if (param_1[0x10] != '\0') {
    TSHudMessageAll(0,0xff,0,8,0x1e,s_Round_over_100a40f4);
    *(float *)(param_1 + 0xc) = gpGlobals->time + 3.0;
    return;
  }
LAB_1004ef88:
  pcVar4 = UTIL_VarArgs((byte_conflict *)s__d_men_standing__100a40e0);
  TSHudMessageAll(0,0xff,0,1,0x1e,pcVar4);
  return;
}

/* 1004f1c0  CTSGameRules::PlayerVote  (896 bytes)
 * undefined4 PlayerVote(int param_1, uint * param_2)
 * called by: Host_Say
 */
undefined4 __thiscall CTSGameRules::PlayerVote(CTSGameRules *this,int param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  undefined *puVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  void *this_00;
  void *this_01;
  int iVar10;
  CTSGameRules *pCVar11;
  byte *pbVar12;
  char *pcVar13;
  char *pcVar14;
  CTSGameRules *pCVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte local_100 [256];
  
  local_100[0] = 0;
  iVar3 = (*g_engfuncs.pfnIndexOfEdict)((edict_t *)param_1);
  iVar10 = param_1 + 0x80;
  if (((iVar10 != 0) && (-1 < iVar3)) && (iVar3 < 0x20)) {
    puVar4 = strstr(param_2,s_reset_100a41ec);
    if (puVar4 != (uint *)0x0) {
      pCVar11 = this + iVar3 * 0x48 + 0x684;
      for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined4 *)pCVar11 = 0;
        pCVar11 = pCVar11 + 4;
      }
      *(int *)(this + iVar3 * 0x48 + 0x6c8) = iVar3 + 1;
      ClientPrint(iVar10,3,s_Your_votes_are_resetted__100a41d0,0,0,0,0);
      return 1;
    }
    puVar4 = strstr(param_2,s_stats_100a41c8);
    if (puVar4 != (uint *)0x0) {
      CalcMiniminVotants(*(int *)(this + 0x1820));
      pCVar11 = this + 0xf88;
      bVar16 = true;
      iVar3 = 0x20;
      do {
        if (*pCVar11 != (CTSGameRules)0x0) {
          iVar19 = 0;
          iVar18 = 0;
          iVar17 = 0;
          iVar7 = 0;
          puVar5 = UTIL_VarArgs((byte_conflict *)s___i__i__votes_for__s_100a41b0);
          ClientPrint(iVar10,3,puVar5,iVar7,iVar17,iVar18,iVar19);
          bVar16 = false;
        }
        pCVar11 = pCVar11 + 0x40;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (bVar16) {
        ClientPrint(iVar10,3,s_No_votes_in_progress__100a4198,0,0,0,0);
      }
      return 1;
    }
    puVar4 = strstr(param_2,&DAT_100a2d04);
    if (puVar4 != (uint *)0x0) {
      uVar8 = 0xffffffff;
      pcVar13 = (char *)((int)puVar4 + 3);
      do {
        pcVar14 = pcVar13;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar14 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pbVar12 = (byte *)(pcVar14 + -uVar8);
      pbVar6 = local_100;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar6 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar6 = pbVar6 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar6 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar6 = pbVar6 + 1;
      }
      uVar8 = 0xffffffff;
      pbVar12 = local_100;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar2 != 0);
      iVar7 = 0;
      if (0 < (int)(~uVar8 - 1)) {
        do {
          uVar9 = FUN_1007db1c((void *)(int)(char)local_100[iVar7],(int)(char)local_100[iVar7]);
          if (uVar9 != 0) {
            uVar9 = FUN_1007dac6(this_00,(int)(char)local_100[iVar7]);
            if (uVar9 == 0) break;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(~uVar8 - 1));
      }
      uVar8 = 0xffffffff;
      pbVar12 = local_100 + iVar7;
      do {
        pbVar6 = pbVar12;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pbVar6 = pbVar12 + 1;
        bVar2 = *pbVar12;
        pbVar12 = pbVar6;
      } while (bVar2 != 0);
      uVar8 = ~uVar8;
      pbVar12 = pbVar6 + -uVar8;
      pbVar6 = local_100;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar6 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar6 = pbVar6 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar6 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar6 = pbVar6 + 1;
      }
      uVar8 = 0xffffffff;
      pbVar12 = local_100;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar2 != 0);
      iVar7 = 0;
      if (0 < (int)(~uVar8 - 1)) {
        while( true ) {
          uVar9 = FUN_1007db1c((void *)(int)(char)local_100[iVar7],(int)(char)local_100[iVar7]);
          if (uVar9 == 0) break;
          uVar9 = FUN_1007dac6(this_01,(int)(char)local_100[iVar7]);
          if ((uVar9 != 0) || (iVar7 = iVar7 + 1, (int)(~uVar8 - 1) <= iVar7)) break;
        }
      }
      local_100[iVar7] = 0;
      pbVar12 = local_100;
      pbVar6 = (byte *)(gpGlobals->pStringBase + gpGlobals->mapname);
      do {
        bVar2 = *pbVar12;
        bVar16 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_1004f428:
          iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_1004f42d;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar12[1];
        bVar16 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_1004f428;
        pbVar12 = pbVar12 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar7 = 0;
LAB_1004f42d:
      if (iVar7 == 0) {
        iVar3 = iVar7;
        iVar17 = iVar7;
        iVar18 = iVar7;
        puVar5 = UTIL_VarArgs((byte_conflict *)s__s_is_the_current_map__100a4180);
        ClientPrint(iVar10,3,puVar5,iVar7,iVar3,iVar17,iVar18);
        return 1;
      }
      iVar7 = (*g_engfuncs.pfnIsMapValid)((char *)local_100);
      if (iVar7 == 0) {
        iVar18 = 0;
        iVar17 = 0;
        iVar7 = 0;
        iVar3 = 0;
        puVar5 = UTIL_VarArgs((byte_conflict *)s__s_is_an_invalid_map_100a4154);
        ClientPrint(iVar10,3,puVar5,iVar3,iVar7,iVar17,iVar18);
        return 1;
      }
      uVar8 = 0xffffffff;
      iVar10 = 0;
      pbVar12 = local_100;
      do {
        pbVar6 = pbVar12;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pbVar6 = pbVar12 + 1;
        bVar2 = *pbVar12;
        pbVar12 = pbVar6;
      } while (bVar2 != 0);
      uVar8 = ~uVar8;
      iVar17 = 0;
      iVar7 = 0;
      pCVar11 = (CTSGameRules *)(pbVar6 + -uVar8);
      pCVar15 = this + iVar3 * 0x48 + 0x684;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pCVar15 = *(undefined4 *)pCVar11;
        pCVar11 = pCVar11 + 4;
        pCVar15 = pCVar15 + 4;
      }
      iVar3 = 0;
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pCVar15 = *pCVar11;
        pCVar11 = pCVar11 + 1;
        pCVar15 = pCVar15 + 1;
      }
      puVar5 = UTIL_VarArgs((byte_conflict *)s__s_vote_for_map__s_100a416c);
      UTIL_ClientPrintAll(3,puVar5,iVar3,iVar7,iVar17,iVar10);
      return 1;
    }
  }
  return 0;
}

/* 1004f540  CTSGameRules::CheckVotes  (1275 bytes)
 * undefined CheckVotes(int param_1)
 * called by: CTSGameRules::Think
 */
void __fastcall CTSGameRules::CheckVotes(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  char *pcVar14;
  bool bVar15;
  float10 fVar16;
  char *pcVar17;
  int iStack_20;
  int local_18;
  int local_14;
  int local_10;
  byte *pbStack_8;
  
  if (gpGlobals->time < *(float *)(param_1 + 0xf84)) {
    return;
  }
  *(float *)(param_1 + 0xf84) = gpGlobals->time + 10.0;
  puVar13 = (undefined4 *)(param_1 + 0xf88);
  for (iVar8 = 0x227; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  local_14 = -1;
  local_10 = 0;
  local_18 = 0;
  piVar4 = (int *)UTIL_FindEntityByClassname(0,s_player_1009c678);
  while (((piVar4 != (int *)0x0 && (*(edict_t **)(piVar4[1] + 0x208) != (edict_t *)0x0)) &&
         (iVar8 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar4[1] + 0x208)), iVar8 != 0)
         )) {
    if (((piVar4[1] != 0) && (iVar8 = (**(code **)(*piVar4 + 0xc4))(), iVar8 != 0)) &&
       ((iStack_20 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(piVar4[1] + 0x208)), -1 < iStack_20
        && (iStack_20 < 0x20)))) {
      local_10 = local_10 + 1;
      iVar8 = param_1 + iStack_20 * 0x48;
      if (*(char *)(iVar8 + 0x6c4) == '\x01') {
        *(int *)(param_1 + 0x1808) = *(int *)(param_1 + 0x1808) + 1;
      }
      else if (*(char *)(iVar8 + 0x6c4) == '\x02') {
        *(int *)(param_1 + 0x180c) = *(int *)(param_1 + 0x180c) + 1;
      }
      if (*(char *)(iVar8 + 0x6c6) == '\x01') {
        *(int *)(param_1 + 0x1818) = *(int *)(param_1 + 0x1818) + 1;
      }
      else if (*(char *)(iVar8 + 0x6c6) == '\x02') {
        *(int *)(param_1 + 0x181c) = *(int *)(param_1 + 0x181c) + 1;
      }
      if (*(char *)(iVar8 + 0x6c5) == '\x01') {
        *(int *)(param_1 + 0x1810) = *(int *)(param_1 + 0x1810) + 1;
      }
      else if (*(char *)(iVar8 + 0x6c5) == '\x02') {
        *(int *)(param_1 + 0x1814) = *(int *)(param_1 + 0x1814) + 1;
      }
      pbStack_8 = (byte *)(iVar8 + 0x684);
      if (*pbStack_8 != 0) {
        pbVar7 = (byte *)(param_1 + 0xf88);
        bVar3 = false;
        iVar8 = 0;
        piVar11 = (int *)(param_1 + 0x1788);
        do {
          pbVar5 = pbVar7;
          pbVar12 = pbStack_8;
          if (bVar3) goto LAB_1004f793;
          do {
            bVar2 = *pbVar5;
            bVar15 = bVar2 < *pbVar12;
            if (bVar2 != *pbVar12) {
LAB_1004f6ed:
              iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_1004f6f2;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            bVar15 = bVar2 < pbVar12[1];
            if (bVar2 != pbVar12[1]) goto LAB_1004f6ed;
            pbVar5 = pbVar5 + 2;
            pbVar12 = pbVar12 + 2;
          } while (bVar2 != 0);
          iVar6 = 0;
LAB_1004f6f2:
          if (iVar6 == 0) {
            iVar6 = *piVar11 + 1;
            *piVar11 = iVar6;
            bVar3 = true;
            if (local_18 < iVar6) {
              local_18 = iVar6;
              local_14 = iVar8;
            }
          }
          iVar8 = iVar8 + 1;
          piVar11 = piVar11 + 1;
          pbVar7 = pbVar7 + 0x40;
        } while (iVar8 < 0x20);
        if (!bVar3) {
          iVar8 = 0;
          piVar11 = (int *)(param_1 + 0x1788);
          pbVar7 = (byte *)(param_1 + 0xf88);
          bVar3 = false;
          do {
            if (bVar3) break;
            if (*pbVar7 == 0) {
              uVar9 = 0xffffffff;
              pbVar5 = pbStack_8;
              do {
                pbVar12 = pbVar5;
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                pbVar12 = pbVar5 + 1;
                bVar2 = *pbVar5;
                pbVar5 = pbVar12;
              } while (bVar2 != 0);
              uVar9 = ~uVar9;
              pbVar5 = pbVar12 + -uVar9;
              pbVar12 = pbVar7;
              for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined4 *)pbVar12 = *(undefined4 *)pbVar5;
                pbVar5 = pbVar5 + 4;
                pbVar12 = pbVar12 + 4;
              }
              for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *pbVar12 = *pbVar5;
                pbVar5 = pbVar5 + 1;
                pbVar12 = pbVar12 + 1;
              }
              iVar6 = *piVar11 + 1;
              bVar3 = true;
              *piVar11 = iVar6;
              if (local_18 < iVar6) {
                local_18 = iVar6;
                local_14 = iVar8;
              }
            }
            iVar8 = iVar8 + 1;
            piVar11 = piVar11 + 1;
            pbVar7 = pbVar7 + 0x40;
          } while (iVar8 < 0x20);
        }
      }
    }
LAB_1004f793:
    piVar4 = (int *)UTIL_FindEntityByClassname((int)piVar4,s_player_1009c678);
  }
  *(int *)(param_1 + 0x1820) = local_10;
  iVar8 = CalcMiniminVotants(local_10);
  if (iVar8 <= *(int *)(param_1 + 0x1808)) {
    (*g_engfuncs.pfnCVarSetFloat)(s_mp_slowmatch_100a42a8,1.0);
    UTIL_ClientPrintAll(4,s_SlowMatch_enabled__100a4294,0,0,0,0);
    iVar8 = 0x20;
    do {
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(undefined1 *)(param_1 + 0x6c4 + (int)pbStack_8 * 0x48) = 0;
    return;
  }
  if (iVar8 <= *(int *)(param_1 + 0x180c)) {
    (*g_engfuncs.pfnCVarSetFloat)(s_mp_slowmatch_100a42a8,0.0);
    UTIL_ClientPrintAll(4,s_SlowMatch_disabled__100a4280,0,0,0,0);
    iVar8 = 0x20;
    do {
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(undefined1 *)(param_1 + 0x6c4 + (int)pbStack_8 * 0x48) = 0;
    return;
  }
  if (iVar8 <= *(int *)(param_1 + 0x1818)) {
    (*g_engfuncs.pfnCVarSetFloat)(s_mp_friendlyfire_1009f18c,1.0);
    UTIL_ClientPrintAll(4,s_Friendly_fire_enabled__100a4268,0,0,0,0);
    iVar8 = 0x20;
    do {
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(undefined1 *)(param_1 + 0x6c6 + (int)pbStack_8 * 0x48) = 0;
    return;
  }
  if (iVar8 <= *(int *)(param_1 + 0x181c)) {
    (*g_engfuncs.pfnCVarSetFloat)(s_mp_friendlyfire_1009f18c,0.0);
    UTIL_ClientPrintAll(4,s_Friendly_fire_disabled__100a4250,0,0,0,0);
    iVar8 = 0x20;
    do {
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(undefined1 *)(param_1 + 0x6c6 + (int)pbStack_8 * 0x48) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x1810) < iVar8) {
    if (*(int *)(param_1 + 0x1814) < iVar8) {
      if (local_14 == -1) {
        return;
      }
      if (*(int *)(param_1 + 0x1788 + local_14 * 4) < iVar8) {
        return;
      }
      pcVar17 = (char *)(local_14 * 0x40 + 0xf88 + param_1);
      goto LAB_1004fa17;
    }
    iVar8 = 0x20;
    do {
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(undefined1 *)(param_1 + 0x6c5 + iStack_20 * 0x48) = 0;
    fVar16 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_mp_teamplay_1009f1bc);
    if (fVar16 == (float10)0.0) {
      return;
    }
    (*g_engfuncs.pfnCVarSetFloat)(s_mp_teamplay_1009f1bc,0.0);
    pcVar17 = s_TeamPlay_in_DM_maps_disabled__wa_100a41f4;
  }
  else {
    iVar8 = 0x20;
    do {
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(undefined1 *)(param_1 + 0x6c5 + iStack_20 * 0x48) = 0;
    fVar16 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_mp_teamplay_1009f1bc);
    if (fVar16 == (float10)1.0) {
      return;
    }
    (*g_engfuncs.pfnCVarSetFloat)(s_mp_teamplay_1009f1bc,1.0);
    pcVar17 = s_TeamPlay_in_DM_maps_enabled__wai_100a4224;
  }
  UTIL_ClientPrintAll(4,pcVar17,0,0,0,0);
  pcVar17 = s_nextmap_1009ffa8;
LAB_1004fa17:
  uVar9 = 0xffffffff;
  do {
    pcVar14 = pcVar17;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar14;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pcVar17 = pcVar14 + -uVar9;
  pcVar14 = (char *)(param_1 + 0x1824);
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar17;
    pcVar17 = pcVar17 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar17;
    pcVar17 = pcVar17 + 1;
    pcVar14 = pcVar14 + 1;
  }
  return;
}

/* 1004fa40  CTSGameRules::ClearObjectiveList  (30 bytes)
 * undefined ClearObjectiveList(int param_1)
 * called by: CTSGameRules::SetObjective
 */
/* .so 0x7abdc; first call in SetObjective */

void __fastcall CTSGameRules::ClearObjectiveList(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x2d4);
  for (iVar1 = 0xa0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 1004fc70  CTSGameRules::ShowObjectiveOnHud  (70 bytes)
 * undefined ShowObjectiveOnHud(int param_1, char param_2)
 * called by: CTSObjective::Freeze
 */
void __thiscall CTSGameRules::ShowObjectiveOnHud(CTSGameRules *this,int param_1,char param_2)

{
  int iValue;
  undefined4 uStack00000010;
  char in_stack_0000001c;
  
  iValue = FUN_1004fc40(this,param_1);
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100d97b0,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(iValue);
  (*g_engfuncs.pfnWriteByte)((uint)(in_stack_0000001c != '\0'));
  uStack00000010 = 0x1004fcb2;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 1004fcc0  CTSGameRules::SelectRandomTheOne  (272 bytes)
 * undefined SelectRandomTheOne(void * param_1)
 * called by: CTSGameRules::Think
 */
void __fastcall CTSGameRules::SelectRandomTheOne(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 local_84 [33];
  
  if (*(float *)((int)param_1 + 0x587c) <= gpGlobals->time) {
    iVar5 = 1;
    iVar6 = 0;
    *(float *)((int)param_1 + 0x587c) = gpGlobals->time + 10.0;
    if (0 < gpGlobals->maxClients) {
      puVar4 = local_84;
      do {
        piVar1 = (int *)UTIL_PlayerByIndex(iVar5);
        if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xc0))(), iVar2 != 0)) {
          if (*(char *)((int)piVar1 + 0x7a5) != '\0') {
            return;
          }
          iVar2 = (**(code **)(*piVar1 + 0xac))();
          if (((iVar2 != 0) && (*(int *)(piVar1[1] + 0x244) == 0)) && (iVar6 < 0x21)) {
            *puVar4 = piVar1;
            iVar6 = iVar6 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= gpGlobals->maxClients);
      if (0 < iVar6) {
        iVar5 = (*g_engfuncs.pfnRandomLong)(0,iVar6 + -1);
        piVar1 = (int *)local_84[iVar5];
        SetPlayerTheOne(param_1,piVar1);
        (**(code **)(*g_pGameRules + 0xd8))(piVar1);
        iVar5 = *g_pGameRules;
        uVar3 = (**(code **)(*piVar1 + 200))(0,0);
        (**(code **)(iVar5 + 0xd4))(piVar1,uVar3);
      }
    }
  }
  return;
}

/* 1004fdd0  CTSGameRules::SetPlayerTheOne  (412 bytes)
 * undefined SetPlayerTheOne(int * param_1)
 * called by: CTSGameRules::SelectRandomTheOne, CTSGameRules::TheOneIsDead
 */
void __thiscall CTSGameRules::SetPlayerTheOne(CTSGameRules *this,int *param_1)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  char *pcStack0000000c;
  char *pcStack0000002c;
  
  iVar2 = (**(code **)(*param_1 + 0xac))();
  if ((iVar2 != 0) && (*(int *)(param_1[1] + 0x244) == 0)) {
    *(undefined1 *)((int)param_1 + 0x7a5) = 1;
    *(undefined4 *)(param_1[1] + 0x160) = 0x43160000;
    fVar1 = gpGlobals->time;
    *(undefined1 *)((int)param_1 + 0x73a) = 1;
    *(undefined1 *)((int)param_1 + 0x73b) = 1;
    param_1[0x1ca] = (int)(fVar1 + 1.0);
    (*g_engfuncs.pfnSetPhysicsKeyValue)
              (*(edict_t **)(param_1[1] + 0x208),&DAT_1009ce1c,&DAT_1009ce20);
    CBasePlayer::SetPlayerSpeed((CBasePlayer *)param_1,330.0);
    (*g_engfuncs.pfnMessageBegin)(1,DAT_100d978c,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
    (*g_engfuncs.pfnWriteShort)(4);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnMessageEnd)();
    (*g_engfuncs.pfnMessageBegin)(1,DAT_100d978c,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
    (*g_engfuncs.pfnWriteShort)(0x100);
    (*g_engfuncs.pfnWriteByte)(0);
    pcStack0000002c = (char *)0x1004febe;
    (*g_engfuncs.pfnMessageEnd)();
    if ((param_1[0x1c4] == 0) && (param_1[0x1c5] == 0)) {
      param_1[0x1c4] = 0;
      param_1[0x1c5] = 8;
      param_1[0x1c6] = 0;
      param_1[0x1c7] = 3;
    }
    *(undefined1 *)(param_1 + 0x1ce) = 10;
    this[0x5878] = (CTSGameRules)0x1;
    this[0x5877] = (CTSGameRules)0x0;
    pcStack0000002c = gpGlobals->pStringBase + *(int *)(param_1[1] + 0x1d0);
    pcVar3 = UTIL_VarArgs((byte_conflict *)s__s_is_The_One__100a42dc);
    pcStack0000000c = (char *)0x1004ff42;
    TSHudMessageAll(100,0x96,0xff,1,0x1e,pcVar3);
    pcStack0000000c = gpGlobals->pStringBase + *(int *)(param_1[1] + 0x1d0);
    UTIL_LogPrintf((byte_conflict *)s_Player___s__triggered__the_one__100a42b8);
  }
  return;
}

/* 1004ff70  CTSGameRules::TheOneIsDead  (282 bytes)
 * undefined TheOneIsDead(int * param_1, int * param_2)
 * called by: CHalfLifeMultiplay::PlayerKilled
 */
void __thiscall CTSGameRules::TheOneIsDead(CTSGameRules *this,int *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  this[0x5878] = (CTSGameRules)0x0;
  if ((param_1 != (int *)0x0) && (*(undefined1 *)((int)param_1 + 0x7a5) = 0, DAT_102efbc0 != 0)) {
    if ((param_2 != (int *)0x0) && (param_1 != param_2)) {
      pcVar2 = UTIL_VarArgs((byte_conflict *)s_The_One_was_killed_by__s__100a4300);
      TSHudMessageAll(100,0x96,0xff,1,0x1e,pcVar2);
      (**(code **)(*g_pGameRules + 0xd8))(param_1);
      iVar1 = *g_pGameRules;
      uVar3 = (**(code **)(*param_1 + 200))(0,0);
      (**(code **)(iVar1 + 0xd4))(param_1,uVar3);
      SetPlayerTheOne(this,param_2);
      (**(code **)(*g_pGameRules + 0xd8))(param_2);
      iVar1 = *g_pGameRules;
      uVar3 = (**(code **)(*param_2 + 200))(0,0);
      (**(code **)(iVar1 + 0xd4))(param_2,uVar3);
      return;
    }
    TSHudMessageAll(100,0x96,0xff,1,0x1e,s_The_One_is_dead__100a42ec);
  }
  return;
}

