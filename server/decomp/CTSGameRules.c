/* ts_i386.so - CTSGameRules (41 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000771dc  CTSGameRules::CTSGameRules  (39 bytes)
 * undefined CTSGameRules(void)
 */
/* CTSGameRules::CTSGameRules(void) */

void __thiscall CTSGameRules::CTSGameRules(CTSGameRules *this)

{
  CBulletManager::CBulletManager((CBulletManager *)(this + 0x1864));
  return;
}

/* 00077204  CTSGameRules::Think  (1365 bytes)
 * undefined Think(void)
 */
/* CTSGameRules::Think(void) */

void __thiscall CTSGameRules::Think(CTSGameRules *this)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  CBaseEntity *this_00;
  int iVar4;
  uint uVar5;
  longdouble extraout_ST0;
  
  if ((*(float *)(this + 0x568) != 0.0) && (*(float *)(this + 0x568) < gpGlobals->time)) {
    *(undefined4 *)(this + 0x560) = 0;
  }
  if (*(float *)(this + 0x560) == 0.0) {
    if (*(float *)(this + 0x564) != 0.0) {
      GlobalSlowMotion2(this,0.0,'\0');
      *(undefined4 *)(this + 0x564) = 0;
      *(undefined4 *)(this + 0x568) = 0;
    }
  }
  else {
    GlobalSlowMotion2(this,*(float *)(this + 0x564),'\0');
  }
  if ((*(float *)(this + 0x5880) != 0.0) && (*(float *)(this + 0x5880) < gpGlobals->time)) {
    CheckDeads(this);
  }
  if ((byte)*this < 2) {
    if (this[1] == (CTSGameRules)0xff) {
      this[1] = (CTSGameRules)0x1;
    }
    if (((float)nopowerup._12_4_ != 1.0) && (this[1] == (CTSGameRules)0x1)) {
      if (gpGlobals->time <= *(float *)(this + 4)) {
        if (21.0 < *(float *)(this + 4) - gpGlobals->time) {
          *(undefined4 *)(this + 4) = 0;
        }
      }
      else {
        (*g_engfuncs.pfnRandomFloat)(0.0,1.0);
        if (((longdouble)0.25 <= extraout_ST0) || (uVar5 = 1, (float)slowmatch._12_4_ == 1.0)) {
          uVar5 = GetRandomPowerup(&TSGameRules,0x1ff);
        }
        iVar3 = PutPowerUp(this,uVar5);
        if (iVar3 == 0) {
          fVar1 = 1.0;
        }
        else {
          fVar1 = 20.0;
        }
        *(float *)(this + 4) = fVar1 + gpGlobals->time;
      }
    }
    if ((g_theOneMode != 0) && (*(float *)(this + 0x587c) < gpGlobals->time)) {
      bVar2 = false;
      this[0x5876] = (CTSGameRules)0x0;
      iVar3 = 0;
      if (0 < gpGlobals->maxClients) {
        do {
          this_00 = (CBaseEntity *)UTIL_PlayerByIndex(iVar3);
          if (((this_00 != (CBaseEntity *)0x0) &&
              (iVar4 = (*this_00->vtable[0x32])(this_00), iVar4 != 0)) &&
             (uVar5 = CBaseEntity::IsDormant(this_00), uVar5 == 0)) {
            if (this_00[0x13].field_0x4d == '\0') {
              this[0x5876] = (CTSGameRules)((char)this[0x5876] + '\x01');
            }
            else {
              bVar2 = true;
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < gpGlobals->maxClients);
      }
      if (!bVar2) {
        SelectRandomTheOne(this);
      }
      *(float *)(this + 0x587c) = gpGlobals->time + 10.0;
    }
    if ((g_lastManStanding != 0) && (*this == (CTSGameRules)0x0)) {
      if ((*(float *)(this + 0xc) < gpGlobals->time) && (*(float *)(this + 0xc) != 0.0)) {
        RestartRound(this);
      }
      if ((*(float *)(this + 8) < gpGlobals->time) && (*(float *)(this + 0xc) == 0.0)) {
        CheckDeads(this);
      }
    }
  }
  else {
    if (((*(float *)(this + 8) < gpGlobals->time) && (*(float *)(this + 0xc) == 0.0)) &&
       (this[0x10] != (CTSGameRules)0x0)) {
      if (*this == (CTSGameRules)0x2) {
        TeamWin(this,2,0,'\x01','\0');
      }
      else {
        RoundTimeLeft(this);
      }
    }
    if ((*(float *)(this + 0xc) < gpGlobals->time) && (*(float *)(this + 0xc) != 0.0)) {
      RestartRound(this);
    }
  }
  CheckVotes(this);
  if ((float)*(int *)(this + 0x578) != (float)realbullet._12_4_) {
    *(int *)(this + 0x578) = (int)ROUND((float)realbullet._12_4_);
    (*g_engfuncs.pfnMessageBegin)(2,gmsgTSServerSetting,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnWriteShort)(*(int *)(this + 0x578));
    (*g_engfuncs.pfnMessageEnd)();
  }
  if (*(int *)(this + 0x5864) != 0) {
    CBulletManager::Think((CBulletManager *)(this + 0x1864));
  }
  if ((float)*(int *)(this + 0x558) != (float)dmcashbased._12_4_) {
    *(int *)(this + 0x558) = (int)ROUND((float)dmcashbased._12_4_);
    (*g_engfuncs.pfnMessageBegin)(2,gmsgTSServerSetting,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(1);
    (*g_engfuncs.pfnWriteShort)((uint)(*(int *)(this + 0x558) != 0));
    (*g_engfuncs.pfnMessageEnd)();
  }
  iVar3 = (int)ROUND((float)cv_ammocount._12_4_);
  if (iVar3 != *(int *)(this + 0x55c)) {
    *(int *)(this + 0x55c) = iVar3;
    Set_ammo_count(iVar3);
    (*g_engfuncs.pfnMessageBegin)(2,gmsgTSServerSetting,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(2);
    (*g_engfuncs.pfnWriteShort)(*(int *)(this + 0x55c));
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 00077764  CTSGameRules::RespawnEntities  (415 bytes)
 * undefined RespawnEntities(char * param_1)
 */
/* CTSGameRules::RespawnEntities(bool) */

void CTSGameRules::RespawnEntities(char *param_1)

{
  edict_t *peVar1;
  bool bVar2;
  int iVar3;
  CTSGroundWeapon *this;
  
  this = (CTSGroundWeapon *)0x0;
  while (this = (CTSGroundWeapon *)UTIL_FindEntityByClassname((int *)this,"info_breakable"),
        this != (CTSGroundWeapon *)0x0) {
    peVar1 = this->pev->pContainingEntity;
    bVar2 = false;
    if ((peVar1 == (edict_t *)0x0) ||
       (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1), iVar3 == 0)) {
      bVar2 = true;
    }
    if (bVar2) break;
    CInfoBreakable::RespawnThink((CInfoBreakable *)this);
  }
  if (((byte)(*param_1 - 2U) < 2) || (g_lastManStanding != 0)) {
    while (this = (CTSGroundWeapon *)UTIL_FindEntityByClassname((int *)this,"ts_groundweapon"),
          this != (CTSGroundWeapon *)0x0) {
      peVar1 = this->pev->pContainingEntity;
      bVar2 = false;
      if ((peVar1 == (edict_t *)0x0) ||
         (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1), iVar3 == 0)) {
        bVar2 = true;
      }
      if (bVar2) break;
      CTSGroundWeapon::Fall(this);
    }
  }
  if (g_lastManStanding != 0) {
    while (this = (CTSGroundWeapon *)UTIL_FindEntityByClassname((int *)this,"ts_powerup"),
          this != (CTSGroundWeapon *)0x0) {
      peVar1 = this->pev->pContainingEntity;
      bVar2 = false;
      if ((peVar1 == (edict_t *)0x0) ||
         (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1), iVar3 == 0)) {
        bVar2 = true;
      }
      if (bVar2) break;
      CTSPowerUp::Fall((CTSPowerUp *)this);
    }
  }
  while( true ) {
    this = (CTSGroundWeapon *)UTIL_FindEntityByClassname((int *)this,"ts_flag");
    if (this == (CTSGroundWeapon *)0x0) {
      return;
    }
    peVar1 = this->pev->pContainingEntity;
    bVar2 = false;
    if ((peVar1 == (edict_t *)0x0) ||
       (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1), iVar3 == 0)) {
      bVar2 = true;
    }
    if (bVar2) break;
    CTSFlag::RespawnFlag((CTSFlag *)this);
  }
  return;
}

/* 00077908  CTSGameRules::UpdateTeamScores  (21 bytes)
 * undefined UpdateTeamScores(void)
 */
/* CTSGameRules::UpdateTeamScores(int, int) */

void CTSGameRules::UpdateTeamScores(void)

{
  return;
}

/* 00077920  CTSGameRules::RestartRound  (1098 bytes)
 * undefined RestartRound(void)
 */
/* CTSGameRules::RestartRound(void) */

void __thiscall CTSGameRules::RestartRound(CTSGameRules *this)

{
  uint uVar1;
  float fVar2;
  entvars_t *peVar3;
  CBasePlayer *this_00;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined2 in_FPUControlWord;
  int local_6c;
  int local_68;
  int local_60;
  int local_50;
  vec_t local_4c;
  vec_t local_48;
  vec_t local_44;
  vec_t local_3c;
  vec_t local_38;
  vec_t local_34;
  int local_24;
  undefined2 local_20;
  undefined2 uStack_1e;
  
  fVar2 = (float)roundtime._12_4_;
  if ((float)roundtime._12_4_ < 30.0) {
    fVar2 = 30.0;
  }
  if (180.0 < fVar2) {
    fVar2 = 180.0;
  }
  *(float *)(this + 8) = fVar2 + gpGlobals->time;
  *(undefined4 *)(this + 0xc) = 0;
  if (this[0x10] != (CTSGameRules)0x0) {
    (*g_engfuncs.pfnMessageBegin)(2,gmsgTSRoundTime,(float *)0x0,(edict_t *)0x0);
    fVar2 = *(float *)(this + 8) - gpGlobals->time;
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    _local_20 = CONCAT22(uStack_1e,in_FPUControlWord);
    local_24 = (int)ROUND(fVar2);
    (*g_engfuncs.pfnWriteByte)(local_24);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnMessageEnd)();
  }
  InitObjectives(this);
  SetObjective(this);
  if (*this == (CTSGameRules)0x2) {
    TSHudMessageAll(0,0,0,8,0x1e,"Defeat the opposite team");
  }
  local_50 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      this_00 = (CBasePlayer *)UTIL_PlayerByIndex(local_50);
      if ((this_00 != (CBasePlayer *)0x0) && (iVar4 = (*this_00->vtable[0x32])(this_00), iVar4 != 0)
         ) {
        if ((byte)((char)*this - 2U) < 2) {
          if ((this[0x5874] != (CTSGameRules)0x0) || (*this == (CTSGameRules)0x2)) {
            *(float *)&this_00->field_0x7bc = gpGlobals->time + 10.0;
          }
        }
        else {
          *(float *)&this_00->field_0x7bc = gpGlobals->time + 10.0;
        }
        *(float *)&this_00->field_0x770 = gpGlobals->time + 3.0;
        this_00->field_0x74c = 0xb;
        this_00->field_0x714 = 0;
        this_00->field_0x7ba = 0;
        *(undefined4 *)&this_00->field_0x72c = 0;
        *(undefined4 *)&this_00->field_0x730 = 0;
        *(undefined4 *)&this_00->field_0x724 = 0;
        *(undefined4 *)&this_00->field_0x728 = 0;
        local_6c = *(int *)&this_00->field_0xa10;
        local_60 = 0;
        if ((local_6c != 0) && (*(int *)(local_6c + 0x88) == 0x10)) {
          uVar7 = 0;
          iVar4 = 0x120;
          do {
            if (((*(char *)(local_6c + -0xc + iVar4) != '\0') && (0 < (int)uVar7)) &&
               (uVar7 != 0x1d)) {
              puVar5 = get_weapon_info(uVar7);
              local_60 = local_60 + puVar5[0x36];
              if ((*(byte *)(local_6c + 4 + iVar4) & 1) != 0) {
                local_60 = local_60 + 900;
              }
              if ((*(byte *)(local_6c + 4 + iVar4) & 2) != 0) {
                local_60 = local_60 + 800;
              }
              if ((*(byte *)(local_6c + 4 + iVar4) & 4) != 0) {
                local_60 = local_60 + 500;
              }
              if ((*(byte *)(local_6c + 4 + iVar4) & 8) != 0) {
                local_60 = local_60 + 0x708;
              }
            }
            iVar4 = iVar4 + 0x38;
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < 0x26);
          uVar7 = 0;
          local_6c = local_6c + 0xd0;
          local_68 = local_6c;
          do {
            puVar5 = get_ammo_info(uVar7);
            if ((int)puVar5[4] < *(int *)(local_6c + 4)) {
              puVar5 = get_ammo_info(uVar7);
              puVar6 = get_ammo_info(uVar7);
              local_60 = local_60 + (puVar5[1] * *(int *)(local_68 + 4)) / (int)puVar6[4];
            }
            uVar1 = uVar7 + 1;
            puVar5 = get_ammo_info(uVar1);
            if ((int)puVar5[4] < *(int *)(local_6c + 8)) {
              puVar5 = get_ammo_info(uVar1);
              puVar6 = get_ammo_info(uVar1);
              local_60 = local_60 + (puVar5[1] * *(int *)(local_68 + 8)) / (int)puVar6[4];
            }
            local_68 = local_68 + 8;
            local_6c = local_6c + 8;
            uVar7 = uVar7 + 2;
          } while ((int)uVar7 < 0x10);
        }
        CBasePlayer::GiveCash(this_00,local_60);
        if (this_00->pev->iuser1 == 0) {
          peVar3 = this_00->pev;
          local_3c = peVar3->origin[0];
          local_38 = peVar3->origin[1];
          local_34 = peVar3->origin[2];
          peVar3 = this_00->pev;
          local_4c = peVar3->v_angle[0];
          local_48 = peVar3->v_angle[1];
          local_44 = peVar3->v_angle[2];
          CBasePlayer::StartObserver(this_00,&local_3c,&local_4c);
        }
      }
      local_50 = local_50 + 1;
    } while (local_50 <= gpGlobals->maxClients);
  }
  CHalfLifeTeamplay::RecountTeams(g_pGameRules,'\0');
  RespawnEntities((char *)this);
  return;
}

/* 00077d6c  CTSGameRules::Init  (412 bytes)
 * undefined Init(void)
 */
/* CTSGameRules::Init(void) */

void __thiscall CTSGameRules::Init(CTSGameRules *this)

{
  undefined4 uVar1;
  int iVar2;
  CTSGameRules *pCVar3;
  
  *this = g_teamplay._0_1_;
  InitTeams(this);
  this[1] = (CTSGameRules)0xff;
  *(undefined4 *)(this + 0x56c) = 0;
  *(undefined4 *)(this + 0x560) = 0;
  *(undefined4 *)(this + 0x564) = 0;
  *(undefined4 *)(this + 0x568) = 0;
  *(undefined4 *)(this + 0x574) = 0xbf800000;
  *(undefined4 *)(this + 0x578) = 0xffffffff;
  *(undefined4 *)(this + 0x55c) = 0xffffffff;
  *(undefined4 *)(this + 0x558) = 0xffffffff;
  pCVar3 = this + 0x57c;
  for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar3 = 0;
    pCVar3 = pCVar3 + 4;
  }
  *(float *)(this + 0x570) = gpGlobals->time + 60.0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x18] = (CTSGameRules)0x0;
  *(undefined4 *)(this + 8) = 0;
  *(float *)(this + 0xc) = gpGlobals->time + 5.0;
  this[0x10] = (CTSGameRules)0x1;
  InitObjectives(this);
  SetObjective(this);
  pCVar3 = this + 0x684;
  for (iVar2 = 0x240; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar3 = 0;
    pCVar3 = pCVar3 + 4;
  }
  *(float *)(this + 0xf84) = gpGlobals->time + 10.0;
  this[0x1824] = (CTSGameRules)0x0;
  CBulletManager::Reset((CBulletManager *)(this + 0x1864));
  uVar1 = InitWeaponRestriction();
  *(undefined4 *)(this + 0x586c) = uVar1;
  *(undefined4 *)(this + 0x5870) = uVar1;
  this[0x5878] = (CTSGameRules)0x0;
  *(float *)(this + 0x587c) = gpGlobals->time + 10.0;
  *(undefined4 *)(this + 0x5880) = 0;
  this[0x5884] = (CTSGameRules)0x0;
  this[0x5885] = (CTSGameRules)0x0;
  this[0x5875] = (CTSGameRules)0x0;
  this[0x5874] = (CTSGameRules)0x0;
  this[0x5876] = (CTSGameRules)0x0;
  *(undefined4 *)(this + 0x5888) = 0x3dcccccd;
  *(undefined4 *)(this + 0x588c) = 0x3e59999a;
  this[0x5890] = (CTSGameRules)0x0;
  this[0x5891] = (CTSGameRules)0x0;
  return;
}

/* 00077f08  CTSGameRules::IsCTB  (85 bytes)
 * CTSGameRules IsCTB(CTSGameRules * this)
 */
/* CTSGameRules::IsCTB(void) */

CTSGameRules __thiscall CTSGameRules::IsCTB(CTSGameRules *this)

{
  CTSGameRules CVar1;
  int iVar2;
  
  CVar1 = (CTSGameRules)0x0;
  if (*this == (CTSGameRules)0x1) {
    if (this[0x5891] == (CTSGameRules)0x0) {
      iVar2 = UTIL_FindEntityByClassname((int *)0x0,"ts_briefcase");
      this[0x5890] = (CTSGameRules)(iVar2 != 0);
      this[0x5891] = (CTSGameRules)0x1;
    }
    CVar1 = this[0x5890];
  }
  return CVar1;
}

/* 00077f60  CTSGameRules::InitTeams  (380 bytes)
 * undefined InitTeams(void)
 */
/* CTSGameRules::InitTeams(void) */

void __thiscall CTSGameRules::InitTeams(CTSGameRules *this)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  CTSGameRules *pCVar5;
  int local_1c;
  
  pCVar5 = this + 0x1c;
  for (iVar1 = 0x8c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar5 = 0;
    pCVar5 = pCVar5 + 4;
  }
  local_1c = 0;
  do {
    iVar4 = local_1c * 0x8c;
    *(undefined4 *)(this + iVar4 + 0x20) = 0;
    *(undefined4 *)(this + iVar4 + 0x24) = 0;
    *(int *)(this + iVar4 + 0x1c) = (int)ROUND((float)initial_cash._12_4_);
    iVar2 = local_1c + 1;
    sprintf((char *)(this + iVar4 + 0x28),"Team%i",iVar2);
    sprintf((char *)(this + iVar4 + 0x68),"info_player_team%i",iVar2);
    pcVar3 = "info_player_deathmatch";
    pCVar5 = this + iVar4 + 0x88;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar5 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pCVar5 = pCVar5 + 4;
    }
    *(undefined2 *)pCVar5 = *(undefined2 *)pcVar3;
    pCVar5[2] = *(CTSGameRules *)(pcVar3 + 2);
    SetTeamModelList(this,local_1c,defTeamModels + local_1c * 0x200);
    local_1c = iVar2;
  } while (iVar2 < 4);
  if ((byte)((char)*this - 2U) < 2) {
    SetTeamModelList(this,0,"seal");
    SetTeamModelList(this,1,"merc");
    SetTeamList(this,"Specialists;Mercenaries");
    pcVar3 = "info_player_start";
    pCVar5 = this + 0x88;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar5 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pCVar5 = pCVar5 + 4;
    }
    *(undefined2 *)pCVar5 = *(undefined2 *)pcVar3;
  }
  return;
}

/* 000780dc  CTSGameRules::SetTeamList  (380 bytes)
 * undefined SetTeamList(char * param_1)
 */
/* CTSGameRules::SetTeamList(char const *) */

void __thiscall CTSGameRules::SetTeamList(CTSGameRules *this,char *param_1)

{
  char *__src;
  CTSGameRules *pCVar1;
  CTSGameRules *__dest;
  CTSGameRules *pCVar2;
  bool bVar3;
  int local_220;
  char local_21c [524];
  
  this[0x1cc] = (CTSGameRules)0x0;
  this[0x140] = (CTSGameRules)0x0;
  this[0xb4] = (CTSGameRules)0x0;
  this[0x28] = (CTSGameRules)0x0;
  pCVar1 = this + -100;
  strcpy(local_21c,param_1);
  __src = strtok(local_21c,";");
  local_220 = 0;
  bVar3 = g_theOneMode == 0;
  if (((__src != (char *)0x0) && (*__src != '\0')) && (bVar3 != 0x7fffffff)) {
    __dest = this + 0x28;
    do {
      if ((local_220 == 0) && (g_theOneMode != 0)) {
        *(undefined4 *)(this + 0x28) = 0x20656854;
        *(undefined4 *)(this + 0x2c) = 0x454e4f;
        pCVar1 = this + 0x28;
        pCVar2 = this + 0xb4;
        local_220 = 1;
      }
      else {
        pCVar1 = pCVar1 + 0x8c;
        pCVar2 = __dest + 0x8c;
        local_220 = local_220 + 1;
        strcpy((char *)__dest,__src);
      }
      __src = strtok((char *)0x0,";");
      (*g_engfuncs.pfnAlertMessage)(at_console,"created team %s\n",pCVar1);
    } while (((__src != (char *)0x0) && (*__src != '\0')) &&
            (__dest = pCVar2, local_220 < (int)((uint)bVar3 * 2 + 2)));
  }
  return;
}

/* 00078258  CTSGameRules::SetTeamModelList  (478 bytes)
 * undefined SetTeamModelList(char * param_1)
 */
/* CTSGameRules::SetTeamModelList(char const *) */

void __thiscall CTSGameRules::SetTeamModelList(CTSGameRules *this,char *param_1)

{
  char *__src;
  char *pcVar1;
  int iVar2;
  CTSGameRules *pCVar3;
  char local_101c [512];
  char local_e1c [512];
  char local_c1c [512];
  char local_a1c [512];
  char local_81c [2060];
  
  pCVar3 = this + 0x38;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar3 = 0;
    pCVar3 = pCVar3 + 4;
  }
  pCVar3 = this + 0xc4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar3 = 0;
    pCVar3 = pCVar3 + 4;
  }
  pCVar3 = this + 0x150;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar3 = 0;
    pCVar3 = pCVar3 + 4;
  }
  pCVar3 = this + 0x1dc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar3 = 0;
    pCVar3 = pCVar3 + 4;
  }
  strcpy(local_81c,param_1);
  __src = strtok(local_81c,"|");
  pcVar1 = local_101c;
  for (iVar2 = 0x200; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1 = pcVar1 + 4;
  }
  if ((__src != (char *)0x0) && (*__src != '\0')) {
    strcpy(local_101c,__src);
    pcVar1 = strtok((char *)0x0,"|");
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      strcpy(local_e1c,pcVar1);
      pcVar1 = strtok((char *)0x0,"|");
      if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
        strcpy(local_c1c,pcVar1);
        pcVar1 = strtok((char *)0x0,"|");
        if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
          strcpy(local_a1c,pcVar1);
          strtok((char *)0x0,"|");
        }
      }
    }
  }
  SetTeamModelList(this,0,local_101c);
  SetTeamModelList(this,1,local_e1c);
  SetTeamModelList(this,2,local_c1c);
  SetTeamModelList(this,3,local_a1c);
  return;
}

/* 00078438  CTSGameRules::SetTeamModelList  (367 bytes)
 * undefined SetTeamModelList(int param_1, char * param_2)
 */
/* CTSGameRules::SetTeamModelList(int, char const *) */

void __thiscall CTSGameRules::SetTeamModelList(CTSGameRules *this,int param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  CTSGameRules *pCVar3;
  char local_21c [524];
  
  pCVar3 = this + param_1 * 0x8c + 0x38;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar3 = 0;
    pCVar3 = pCVar3 + 4;
  }
  strcpy(local_21c,param_2);
  pcVar1 = strtok(local_21c,";");
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    strcpy((char *)(this + param_1 * 0x8c + 0x38),pcVar1);
    pcVar1 = strtok((char *)0x0,";");
    pCVar3 = this + param_1 * 0x8c + 0x28;
    (*g_engfuncs.pfnAlertMessage)
              (at_console,"set model %s for team %s\n",this + param_1 * 0x8c + 0x38,pCVar3);
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      strcpy((char *)(this + param_1 * 0x8c + 0x48),pcVar1);
      pcVar1 = strtok((char *)0x0,";");
      (*g_engfuncs.pfnAlertMessage)
                (at_console,"set model %s for team %s\n",this + param_1 * 0x8c + 0x48,pCVar3);
      if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
        strcpy((char *)(this + param_1 * 0x8c + 0x58),pcVar1);
        strtok((char *)0x0,";");
        (*g_engfuncs.pfnAlertMessage)
                  (at_console,"set model %s for team %s\n",this + param_1 * 0x8c + 0x58,pCVar3);
      }
    }
  }
  return;
}

/* 000785a8  CTSGameRules::GetTeamsNum  (47 bytes)
 * char GetTeamsNum(void)
 */
/* CTSGameRules::GetTeamsNum(void) */

char __thiscall CTSGameRules::GetTeamsNum(CTSGameRules *this)

{
  char cVar1;
  
  cVar1 = this[0x28] != (CTSGameRules)0x0;
  if (this[0xb4] != (CTSGameRules)0x0) {
    cVar1 = cVar1 + '\x01';
  }
  if (this[0x140] != (CTSGameRules)0x0) {
    cVar1 = cVar1 + '\x01';
  }
  if (this[0x1cc] != (CTSGameRules)0x0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}

/* 000785d8  CTSGameRules::InitObjectives  (373 bytes)
 * undefined InitObjectives(void)
 */
/* CTSGameRules::InitObjectives(void) */

void __thiscall CTSGameRules::InitObjectives(CTSGameRules *this)

{
  bool bVar1;
  char cVar2;
  edict_t *peVar3;
  edict_t *peVar4;
  int iVar5;
  int *piVar6;
  CTSGameRules *pCVar7;
  void *pvVar8;
  char *pcVar9;
  
  pCVar7 = this + 0x250;
  for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = 0;
    pCVar7 = pCVar7 + 4;
  }
  if ((byte)((char)*this - 2U) < 2) {
    piVar6 = (int *)0x0;
    *(undefined4 *)(this + 0x24c) = 0;
    *(undefined4 *)(this + 0x554) = 0;
    while( true ) {
      pcVar9 = "ts_objective_manager";
      piVar6 = (int *)UTIL_FindEntityByClassname(piVar6,"ts_objective_manager");
      if (piVar6 == (int *)0x0) break;
      bVar1 = false;
      if (*(edict_t **)(*piVar6 + 0x208) == (edict_t *)0x0) {
LAB_00078655:
        bVar1 = true;
      }
      else {
        iVar5 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(*piVar6 + 0x208));
        if (iVar5 == 0) goto LAB_00078655;
      }
      if (bVar1) break;
      if (*(int *)(this + 0x24c) < 0x20) {
        *(int **)(this + *(int *)(this + 0x24c) * 4 + 0x250) = piVar6;
        *(int *)(this + 0x24c) = *(int *)(this + 0x24c) + 1;
      }
    }
    if (*(int *)(this + 0x24c) == 0) {
      *this = (CTSGameRules)0x2;
      g_teamplay = 2;
    }
    else {
      *this = (CTSGameRules)0x3;
      g_teamplay = 3;
      peVar3 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
      if (peVar3 != (edict_t *)0x0) {
        for (iVar5 = 1; iVar5 < gpGlobals->maxEntities; iVar5 = iVar5 + 1) {
          if (peVar3->free == 0) {
            peVar4 = peVar3;
            if (peVar3 == (edict_t *)0x0) {
              peVar4 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
            }
            pvVar8 = (void *)0x0;
            if (peVar4 != (edict_t *)0x0) {
              pvVar8 = peVar4->pvPrivateData;
            }
            if (pvVar8 != (void *)0x0) {
              cVar2 = (**(code **)(*(int *)((int)pvVar8 + 0x60) + 0x1c))(pvVar8);
              if (cVar2 != '\0') {
                pcVar9 = (char *)((uint)pcVar9 & 0xffff0000);
                (**(code **)(*(int *)((int)pvVar8 + 0x60) + 0x20))(pvVar8,pcVar9);
              }
            }
          }
          peVar3 = peVar3 + 1;
        }
      }
    }
  }
  return;
}

/* 00078750  CTSGameRules::ResetRestartRound  (695 bytes)
 * undefined ResetRestartRound(int param_1)
 */
/* CTSGameRules::ResetRestartRound(int) */

void __thiscall CTSGameRules::ResetRestartRound(CTSGameRules *this,int param_1)

{
  float fVar1;
  CTSGameRules *pCVar2;
  CTSGameRules *sz;
  CTSGameRules *local_30;
  CTSGameRules *local_2c;
  CTSGameRules *local_28;
  int local_24;
  int local_20;
  
  if (((byte)((char)*this - 2U) < 2) || (g_lastManStanding != 0)) {
    *(float *)(this + 0xc) = gpGlobals->time + 1.0;
    *(undefined4 *)(this + 8) = 0;
    if (this[0x10] != (CTSGameRules)0x0) {
      (*g_engfuncs.pfnMessageBegin)(2,gmsgTSRoundTime,(float *)0x0,(edict_t *)0x0);
      fVar1 = *(float *)(this + 0xc) - gpGlobals->time;
      if (fVar1 < 0.0) {
        fVar1 = 0.0;
      }
      (*g_engfuncs.pfnWriteByte)((int)ROUND(fVar1));
      (*g_engfuncs.pfnWriteByte)(0);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if (1 < param_1) {
      local_20 = 0;
      sz = this + 0x28;
      local_24 = 0x10;
      pCVar2 = this + 0x10;
      local_30 = pCVar2;
      local_2c = pCVar2;
      local_28 = pCVar2;
      do {
        *(undefined4 *)(this + local_24 + 0x10) = 0;
        *(undefined4 *)(local_30 + 0x14) = 0;
        *(int *)(local_2c + 0xc) = (int)ROUND((float)initial_cash._12_4_);
        if (pCVar2[0x18] != (CTSGameRules)0x0) {
          (*g_engfuncs.pfnMessageBegin)(2,gmsgTeamScore,(float *)0x0,(edict_t *)0x0);
          (*g_engfuncs.pfnWriteString)((char *)sz);
          (*g_engfuncs.pfnWriteShort)(*(int *)(local_28 + 0x14));
          (*g_engfuncs.pfnWriteShort)(0);
          (*g_engfuncs.pfnMessageEnd)();
        }
        *(undefined4 *)(this + local_24 + 0x9c) = 0;
        *(undefined4 *)(local_30 + 0xa0) = 0;
        *(int *)(local_2c + 0x98) = (int)ROUND((float)initial_cash._12_4_);
        if (pCVar2[0xa4] != (CTSGameRules)0x0) {
          (*g_engfuncs.pfnMessageBegin)(2,gmsgTeamScore,(float *)0x0,(edict_t *)0x0);
          (*g_engfuncs.pfnWriteString)((char *)(sz + 0x8c));
          (*g_engfuncs.pfnWriteShort)(*(int *)(local_28 + 0xa0));
          (*g_engfuncs.pfnWriteShort)(0);
          (*g_engfuncs.pfnMessageEnd)();
        }
        sz = sz + 0x118;
        local_28 = local_28 + 0x118;
        pCVar2 = pCVar2 + 0x118;
        local_2c = local_2c + 0x118;
        local_30 = local_30 + 0x118;
        local_24 = local_24 + 0x118;
        local_20 = local_20 + 2;
      } while (local_20 < 4);
    }
    TSHudMessageAll(0,0,0,8,0x1e,"Restarting Round");
  }
  return;
}

/* 00078a08  CTSGameRules::TeamWin  (1558 bytes)
 * undefined TeamWin(int param_1, int param_2, char param_3, char param_4)
 */
/* CTSGameRules::TeamWin(int, int, bool, bool) */

void __thiscall
CTSGameRules::TeamWin(CTSGameRules *this,int param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  CBasePlayer *this_00;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  CTSGameRules *pCVar6;
  CTSGameRules *sz;
  undefined2 in_FPUControlWord;
  char *pcVar7;
  int local_6c;
  int local_68;
  int local_54;
  int local_50;
  char local_4c [40];
  int local_24;
  undefined2 local_20;
  undefined2 uStack_1e;
  
  if ((this[0x10] != (CTSGameRules)0x0) && (param_4 == '\0')) {
    (*g_engfuncs.pfnMessageBegin)(2,gmsgTSRoundTime,(float *)0x0,(edict_t *)0x0);
    _local_20 = CONCAT22(uStack_1e,in_FPUControlWord);
    local_24 = (int)ROUND(*(float *)(this + 8) - gpGlobals->time);
    (*g_engfuncs.pfnWriteByte)(local_24);
    (*g_engfuncs.pfnWriteByte)(2);
    (*g_engfuncs.pfnMessageEnd)();
  }
  if (param_3 != '\0') {
    *(float *)(this + 0xc) = gpGlobals->time + 3.0;
    *(undefined4 *)(this + 8) = 0;
  }
  iVar1 = CountPlayers();
  if (iVar1 < 2) {
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x24) = 0;
    *(int *)(this + 0x1c) = (int)ROUND((float)initial_cash._12_4_);
    *(undefined4 *)(this + 0xac) = 0;
    *(undefined4 *)(this + 0xb0) = 0;
    *(int *)(this + 0xa8) = (int)ROUND((float)initial_cash._12_4_);
    *(undefined4 *)(this + 0x138) = 0;
    *(undefined4 *)(this + 0x13c) = 0;
    *(int *)(this + 0x134) = (int)ROUND((float)initial_cash._12_4_);
    *(undefined4 *)(this + 0x1c4) = 0;
    *(undefined4 *)(this + 0x1c8) = 0;
    _local_20 = CONCAT22(uStack_1e,in_FPUControlWord);
    local_24 = (int)ROUND((float)initial_cash._12_4_);
    *(int *)(this + 0x1c0) = local_24;
    TSHudMessageAll(0,0,0,8,0x1e,"Waiting for other players.");
  }
  else {
    iVar1 = 1;
    if (0 < gpGlobals->maxClients) {
      do {
        this_00 = (CBasePlayer *)UTIL_PlayerByIndex(iVar1);
        if ((this_00 != (CBasePlayer *)0x0) &&
           (iVar2 = (*this_00->vtable[0x32])(this_00), iVar2 != 0)) {
          if (param_2 == 0) {
            sscanf((char *)cashforwin._4_4_,"%i",&local_50);
          }
          else {
            local_50 = param_2;
          }
          sscanf((char *)cashforlose._4_4_,"%i",&local_54);
          pcVar3 = (char *)(*this_00->vtable[0x34])(this_00);
          iVar2 = GetTeamIndex(this,pcVar3);
          if (param_1 != iVar2) {
            CBasePlayer::GiveCash(this_00,local_54);
          }
          else {
            CBasePlayer::GiveCash(this_00,local_50);
          }
          (*g_engfuncs.pfnMessageBegin)
                    (1,gmsgTSVoiceMessage,(float *)0x0,this_00->pev->pContainingEntity);
          (*g_engfuncs.pfnWriteByte)((uint)(param_1 != iVar2));
          (*g_engfuncs.pfnMessageEnd)();
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 <= gpGlobals->maxClients);
    }
    if (param_1 == 2) {
      pcVar7 = "Game Draw";
      TSHudMessageAll(0,0,0,8,0x1e,"Game Draw");
      pcVar3 = "Round draw\n";
    }
    else {
      *(int *)(this + param_1 * 0x8c + 0x24) = *(int *)(this + param_1 * 0x8c + 0x24) + 1;
      if (param_4 == '\0') {
        pcVar3 = "%s Win!";
      }
      else {
        pcVar3 = "%s Score!";
      }
      sprintf(local_4c,pcVar3,this + param_1 * 0x8c + 0x28);
      TSHudMessageAll(0,0,0,8,0x1e,local_4c);
      (**(code **)(*g_pGameRules + 0xd0))(g_pGameRules,this + param_1 * 0x8c + 0x28);
      iVar1 = 1;
      if (0 < gpGlobals->maxClients) {
        do {
          iVar2 = UTIL_PlayerByIndex(iVar1);
          if ((iVar2 != 0) &&
             (iVar4 = (**(code **)(*(int *)(iVar2 + 0x60) + 200))(iVar2), iVar4 != 0)) {
            iVar4 = *g_pGameRules;
            uVar5 = (**(code **)(*(int *)(iVar2 + 0x60) + 0xd0))(iVar2);
            (**(code **)(iVar4 + 0xd0))(g_pGameRules,uVar5);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 <= gpGlobals->maxClients);
      }
      pcVar7 = (char *)(this + param_1 * 0x8c + 0x28);
      pcVar3 = "Team \"%s\" scored \"%d\" with \"%d\" players\n";
    }
    UTIL_LogPrintf(pcVar3,pcVar7);
  }
  if ((byte)((char)*this - 2U) < 2) {
    local_68 = 0;
    sz = this + 0x28;
    local_6c = 0x10;
    pCVar6 = this + 0x10;
    do {
      if (pCVar6[0x18] != (CTSGameRules)0x0) {
        (*g_engfuncs.pfnMessageBegin)(2,gmsgTeamScore,(float *)0x0,(edict_t *)0x0);
        (*g_engfuncs.pfnWriteString)((char *)sz);
        (*g_engfuncs.pfnWriteShort)(*(int *)(this + local_6c + 0x14));
        (*g_engfuncs.pfnWriteShort)(0);
        (*g_engfuncs.pfnMessageEnd)();
      }
      if (pCVar6[0xa4] != (CTSGameRules)0x0) {
        (*g_engfuncs.pfnMessageBegin)(2,gmsgTeamScore,(float *)0x0,(edict_t *)0x0);
        (*g_engfuncs.pfnWriteString)((char *)(sz + 0x8c));
        (*g_engfuncs.pfnWriteShort)(*(int *)(this + local_6c + 0xa0));
        (*g_engfuncs.pfnWriteShort)(0);
        (*g_engfuncs.pfnMessageEnd)();
      }
      sz = sz + 0x118;
      pCVar6 = pCVar6 + 0x118;
      local_6c = local_6c + 0x118;
      local_68 = local_68 + 2;
    } while (local_68 < 4);
  }
  return;
}

/* 00079024  CTSGameRules::RoundTimeLeft  (139 bytes)
 * undefined RoundTimeLeft(void)
 */
/* CTSGameRules::RoundTimeLeft(void) */

void __thiscall CTSGameRules::RoundTimeLeft(CTSGameRules *this)

{
  int iVar1;
  
  if ((*(float *)(this + 8) != 0.0) && (this[0x10] != (CTSGameRules)0x0)) {
    if ((*(int *)(this + 0x554) == 0) ||
       (iVar1 = *(int *)(this + 0x554), *(int *)(iVar1 + 0x94) == 0)) {
      TeamWin(this,2,0,'\x01','\0');
    }
    else {
      FireTargets((int)(gpGlobals->pStringBase + *(int *)(*(int *)(this + 0x554) + 0x94)),iVar1,
                  iVar1,3,0);
    }
  }
  return;
}

/* 000790b4  CTSGameRules::SetObjective  (124 bytes)
 * undefined SetObjective(void)
 */
/* CTSGameRules::SetObjective(void) */

void __thiscall CTSGameRules::SetObjective(CTSGameRules *this)

{
  int iVar1;
  
  ClearObjectiveList(this);
  if (((byte)((char)*this - 2U) < 2) &&
     (*(undefined4 *)(this + 0x554) = 0, *(int *)(this + 0x24c) != 0)) {
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,*(int *)(this + 0x24c) + -1);
    iVar1 = iVar1 * 4 + 0x250;
    (**(code **)(*(int *)(*(int *)(this + iVar1) + 0x60) + 0x114))(*(int *)(this + iVar1));
    *(undefined4 *)(this + 0x554) = *(undefined4 *)(this + iVar1);
  }
  return;
}

/* 00079130  CTSGameRules::InitTeamScore  (1 bytes)
 * undefined InitTeamScore(void)
 */
/* CTSGameRules::InitTeamScore(int *) */

void CTSGameRules::InitTeamScore(void)

{
  return;
}

/* 00079134  CTSGameRules::InitHUD  (1256 bytes)
 * undefined InitHUD(CBasePlayer * param_1)
 */
/* CTSGameRules::InitHUD(CBasePlayer *) */

void __thiscall CTSGameRules::InitHUD(CTSGameRules *this,CBasePlayer *param_1)

{
  float fVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  CTSGameRules *pCVar7;
  undefined2 in_FPUControlWord;
  entvars_t *peVar8;
  vec_t local_4c;
  vec_t local_48;
  vec_t local_44;
  vec_t local_3c;
  vec_t local_38;
  vec_t local_34;
  int local_24;
  undefined2 local_20;
  undefined2 uStack_1e;
  
  if ((g_flWeaponCheat != 0.0) &&
     (TSHudMessageOne(0x2d,0xc3,0x2d,8,100,"This server has cheats enabled.",(int)param_1->pev),
     0.0 < (float)damagemult._12_4_)) {
    peVar8 = param_1->pev;
    pcVar2 = UTIL_VarArgs("This server has custom weapon damages (%.2f)",
                          (double)(float)damagemult._12_4_);
    TSHudMessageOne(0x2d,0xc3,0x2d,8,100,pcVar2,(int)peVar8);
  }
  if (this[0x5884] != (CTSGameRules)0x0) {
    InformClientsOnWeaponsParams((int *)param_1);
  }
  (*g_engfuncs.pfnMessageBegin)(1,gmsgTSServerSetting,(float *)0x0,param_1->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnWriteShort)(*(int *)(this + 0x578));
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnMessageBegin)(1,gmsgTSServerSetting,(float *)0x0,param_1->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(1);
  (*g_engfuncs.pfnWriteShort)((uint)((float)dmcashbased._12_4_ != 0.0));
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnMessageBegin)(1,gmsgTSServerSetting,(float *)0x0,param_1->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(2);
  local_24 = (int)ROUND((float)cv_ammocount._12_4_);
  (*g_engfuncs.pfnWriteShort)(local_24);
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnMessageBegin)(1,gmsgTSServerSetting,(float *)0x0,param_1->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(3);
  (*g_engfuncs.pfnWriteShort)(*(int *)(this + 0x5870));
  (*g_engfuncs.pfnMessageEnd)();
  if ((*(float *)(this + 8) != 0.0) && (this[0x10] != (CTSGameRules)0x0)) {
    (*g_engfuncs.pfnMessageBegin)(1,gmsgTSRoundTime,(float *)0x0,param_1->pev->pContainingEntity);
    fVar1 = *(float *)(this + 8) - gpGlobals->time;
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    local_24 = (int)ROUND(fVar1);
    (*g_engfuncs.pfnWriteByte)(local_24);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnMessageEnd)();
  }
  iVar6 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar3 = (int *)UTIL_PlayerByIndex(iVar6);
      if ((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(piVar3[0x18] + 200))(piVar3), iVar4 != 0))
      {
        (*g_engfuncs.pfnMessageBegin)(1,gmsgSpectator,(float *)0x0,param_1->pev->pContainingEntity);
        iVar4 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*piVar3 + 0x208));
        (*g_engfuncs.pfnWriteByte)(iVar4);
        (*g_engfuncs.pfnWriteByte)((uint)(*(int *)(*piVar3 + 0x244) != 0));
        (*g_engfuncs.pfnMessageEnd)();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= gpGlobals->maxClients);
  }
  peVar8 = param_1->pev;
  local_3c = peVar8->origin[0];
  local_38 = peVar8->origin[1];
  local_34 = peVar8->origin[2];
  peVar8 = param_1->pev;
  local_4c = peVar8->v_angle[0];
  local_48 = peVar8->v_angle[1];
  local_44 = peVar8->v_angle[2];
  CBasePlayer::StartObserver(param_1,&local_3c,&local_4c);
  param_1->field_0x7ba = 0;
  param_1->field_0x714 = 0;
  *(undefined4 *)&param_1->field_0x53c = 0;
  *(undefined4 *)&param_1->field_0x538 = 0;
  *(undefined4 *)&param_1->field_0x7c4 = 0;
  param_1->field_0x7c8 = 0;
  *(undefined4 *)&param_1->field_0x7cc = 0;
  fVar1 = (float)respawntime._12_4_;
  if ((float)respawntime._12_4_ < 5.0) {
    fVar1 = 5.0;
  }
  if (30.0 < fVar1) {
    fVar1 = 30.0;
  }
  _local_20 = CONCAT22(uStack_1e,in_FPUControlWord);
  local_24 = (int)ROUND(fVar1);
  SetPlayerRespawnTime((int)param_1,local_24);
  memset(&param_1->field_0x49a,0,0x40);
  CBasePlayer::ResetArmament(param_1);
  if (g_teamplay - 2U < 2) {
    *(undefined4 *)&param_1->field_0x758 = 0;
    SendObjectiveList(this,(int *)param_1);
  }
  uVar5 = (*g_engfuncs.pfnIndexOfEdict)(param_1->pev->pContainingEntity);
  if (uVar5 < 0x20) {
    pCVar7 = this + uVar5 * 0x48 + 0x684;
    for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pCVar7 = 0;
      pCVar7 = pCVar7 + 4;
    }
    *(uint *)(this + uVar5 * 0x48 + 0x6c8) = uVar5 + 1;
  }
  return;
}

/* 0007961c  CTSGameRules::SetGlobalSlowMotion  (167 bytes)
 * undefined SetGlobalSlowMotion(float param_1, float param_2)
 */
/* CTSGameRules::SetGlobalSlowMotion(float, float) */

void __thiscall CTSGameRules::SetGlobalSlowMotion(CTSGameRules *this,float param_1,float param_2)

{
  if (param_1 != *(float *)(this + 0x564)) {
    if (param_1 == 0.0) {
      *(undefined4 *)(this + 0x560) = 0;
    }
    else {
      GlobalSlowMotion2(this,0.0,'\0');
      *(float *)(this + 0x56c) = gpGlobals->time;
      *(float *)(this + 0x564) = param_1;
      *(undefined4 *)(this + 0x560) = 0x3f800000;
      if (param_2 == 0.0) {
        *(undefined4 *)(this + 0x568) = 0;
      }
      else {
        *(float *)(this + 0x568) = param_2 + gpGlobals->time;
      }
    }
  }
  return;
}

/* 000796c8  CTSGameRules::TogglePlayerFromSlow  (87 bytes)
 * undefined TogglePlayerFromSlow(int param_1)
 */
/* CTSGameRules::TogglePlayerFromSlow(CBasePlayer *) */

void __thiscall CTSGameRules::TogglePlayerFromSlow(CTSGameRules *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if (0 < gpGlobals->maxClients) {
    iVar2 = 0x574;
    do {
      if (*(int *)(this + iVar2 + 0xc) == param_1) {
        *(undefined4 *)(this + iVar2 + 0xc) = 0;
        return;
      }
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 <= gpGlobals->maxClients);
  }
  return;
}

/* 00079720  CTSGameRules::GlobalSlowMotion2  (736 bytes)
 * undefined GlobalSlowMotion2(float param_1, char param_2)
 */
/* CTSGameRules::GlobalSlowMotion2(float, bool) */

void __thiscall CTSGameRules::GlobalSlowMotion2(CTSGameRules *this,float param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if ((*(float *)(this + 0x56c) <= gpGlobals->time) || (param_1 == 0.0)) {
    *(float *)(this + 0x56c) = gpGlobals->time + 0.5;
    iVar4 = 1;
    if (0 < gpGlobals->maxClients) {
      do {
        iVar2 = UTIL_PlayerByIndex(iVar4);
        if ((iVar2 != 0) && (iVar3 = (**(code **)(*(int *)(iVar2 + 0x60) + 200))(iVar2), iVar3 != 0)
           ) {
          iVar3 = (**(code **)(*(int *)(iVar2 + 0x60) + 0x18))(iVar2);
          if (iVar3 == 0) {
            (**(code **)(*(int *)(iVar2 + 0x60) + 0x14))(iVar2,param_1,0);
            *(bool *)(iVar2 + 0x175) = param_2 != '\0';
          }
          if (param_1 == 0.0) {
            (**(code **)(*(int *)(iVar2 + 0x60) + 0x14))(iVar2,0x3f800000,0);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= gpGlobals->maxClients);
    }
    piVar5 = (int *)0x0;
    while (piVar5 = (int *)UTIL_FindEntityByClassname(piVar5,"grenade"), piVar5 != (int *)0x0) {
      bVar1 = false;
      if ((*(edict_t **)(*piVar5 + 0x208) == (edict_t *)0x0) ||
         (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(*piVar5 + 0x208)), iVar4 == 0))
      {
        bVar1 = true;
      }
      if (bVar1) break;
      iVar4 = (**(code **)(piVar5[0x18] + 0x18))(piVar5);
      if (iVar4 == 0) {
        (**(code **)(piVar5[0x18] + 0x14))(piVar5,param_1,0);
      }
      if (param_1 == 0.0) {
        (**(code **)(piVar5[0x18] + 0x14))(piVar5,0x3f800000,0);
      }
    }
    piVar5 = (int *)0x0;
    while (piVar5 = (int *)UTIL_FindEntityByClassname(piVar5,&DAT_001077e5), piVar5 != (int *)0x0) {
      bVar1 = false;
      if ((*(edict_t **)(*piVar5 + 0x208) == (edict_t *)0x0) ||
         (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(*piVar5 + 0x208)), iVar4 == 0))
      {
        bVar1 = true;
      }
      if (bVar1) break;
      iVar4 = (**(code **)(piVar5[0x18] + 0x18))(piVar5);
      if (iVar4 == 0) {
        (**(code **)(piVar5[0x18] + 0x14))(piVar5,param_1,0);
      }
      if (param_1 == 0.0) {
        (**(code **)(piVar5[0x18] + 0x14))(piVar5,0x3f800000,0);
      }
    }
    piVar5 = (int *)0x0;
    while (piVar5 = (int *)UTIL_FindEntityByClassname(piVar5,"WorldGun"), piVar5 != (int *)0x0) {
      bVar1 = false;
      if ((*(edict_t **)(*piVar5 + 0x208) == (edict_t *)0x0) ||
         (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(*piVar5 + 0x208)), iVar4 == 0))
      {
        bVar1 = true;
      }
      if (bVar1) {
        return;
      }
      iVar4 = (**(code **)(piVar5[0x18] + 0x18))(piVar5);
      if (iVar4 == 0) {
        (**(code **)(piVar5[0x18] + 0x14))(piVar5,param_1,0);
      }
      if (param_1 == 0.0) {
        (**(code **)(piVar5[0x18] + 0x14))(piVar5,0x3f800000,0);
      }
    }
  }
  return;
}

/* 00079a08  CTSGameRules::GetPlayerModel  (159 bytes)
 * CTSGameRules * GetPlayerModel(int param_1)
 */
/* CTSGameRules::GetPlayerModel(CBasePlayer *) */

CTSGameRules * __thiscall CTSGameRules::GetPlayerModel(CTSGameRules *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = GetTeamIndex(this,(char *)(param_1 + 0xb48));
  if (iVar1 != -1) {
    iVar3 = iVar1 * 0x8c;
    uVar2 = (uint)(this[iVar3 + 0x38] != (CTSGameRules)0x0);
    if (this[iVar3 + 0x48] != (CTSGameRules)0x0) {
      uVar2 = uVar2 + 1;
    }
    if (this[iVar3 + 0x58] != (CTSGameRules)0x0) {
      uVar2 = uVar2 + 1;
    }
    if (uVar2 != 0) {
      iVar3 = (*g_engfuncs.pfnRandomLong)(0,uVar2 - 1);
      *(int *)(param_1 + 0x758) = iVar3;
      return this + iVar3 * 0x10 + iVar1 * 0x8c + 0x38;
    }
  }
  return (CTSGameRules *)&DAT_00106657;
}

/* 00079aac  CTSGameRules::GetTeamCash  (84 bytes)
 * undefined4 GetTeamCash(int param_1)
 */
/* CTSGameRules::GetTeamCash(CBasePlayer *) */

undefined4 __thiscall CTSGameRules::GetTeamCash(CTSGameRules *this,int param_1)

{
  int iVar1;
  
  if (((byte)((char)*this - 2U) < 2) &&
     (iVar1 = GetTeamIndex(this,(char *)(param_1 + 0xb48)), iVar1 != -1)) {
    return *(undefined4 *)(this + iVar1 * 0x8c + 0x1c);
  }
  return 0;
}

/* 00079b04  CTSGameRules::GetTeamIndex  (182 bytes)
 * undefined4 GetTeamIndex(char * param_1)
 */
/* CTSGameRules::GetTeamIndex(char const *) */

undefined4 __thiscall CTSGameRules::GetTeamIndex(CTSGameRules *this,char *param_1)

{
  int iVar1;
  
  if ((this[0x28] != (CTSGameRules)0x0) &&
     (iVar1 = strcasecmp(param_1,(char *)(this + 0x28)), iVar1 == 0)) {
    return 0;
  }
  if ((this[0xb4] != (CTSGameRules)0x0) &&
     (iVar1 = strcasecmp(param_1,(char *)(this + 0xb4)), iVar1 == 0)) {
    return 1;
  }
  if ((this[0x140] != (CTSGameRules)0x0) &&
     (iVar1 = strcasecmp(param_1,(char *)(this + 0x140)), iVar1 == 0)) {
    return 2;
  }
  if ((this[0x1cc] != (CTSGameRules)0x0) &&
     (iVar1 = strcasecmp(param_1,(char *)(this + 0x1cc)), iVar1 == 0)) {
    return 3;
  }
  return 0xffffffff;
}

/* 00079bc0  CTSGameRules::CallCheckDeads  (63 bytes)
 * undefined CallCheckDeads(void)
 */
/* CTSGameRules::CallCheckDeads(void) */

void __thiscall CTSGameRules::CallCheckDeads(CTSGameRules *this)

{
  if (*(float *)(this + 0xc) == 0.0) {
    *(float *)(this + 0x5880) = gpGlobals->time + 1.0;
  }
  return;
}

/* 00079c00  CTSGameRules::CheckDeads  (1342 bytes)
 * undefined CheckDeads(void)
 */
/* CTSGameRules::CheckDeads(void) */

void __thiscall CTSGameRules::CheckDeads(CTSGameRules *this)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 in_FPUControlWord;
  int local_44;
  int *local_40;
  int local_3c [6];
  int local_24;
  undefined2 local_20;
  undefined2 uStack_1e;
  
  *(undefined4 *)(this + 0x5880) = 0;
  if ((*(float *)(this + 0xc) == 0.0) && (*this != (CTSGameRules)0x1)) {
    if ((*this == (CTSGameRules)0x0) && (g_lastManStanding != 0)) {
      iVar5 = 0;
      local_44 = 0;
      local_40 = (int *)0x0;
      for (iVar6 = 1; iVar6 <= gpGlobals->maxClients; iVar6 = iVar6 + 1) {
        piVar1 = (int *)UTIL_PlayerByIndex(iVar6);
        if ((piVar1 != (int *)0x0) &&
           (iVar2 = (**(code **)(piVar1[0x18] + 200))(piVar1), iVar2 != 0)) {
          local_44 = local_44 + 1;
          iVar2 = (**(code **)(piVar1[0x18] + 0xb4))(piVar1);
          if (iVar2 != 0) {
            iVar5 = iVar5 + 1;
            local_40 = piVar1;
          }
        }
      }
      if (iVar5 == 1) {
        if (local_44 < 2) {
          TSHudMessageAll(0,0xff,0,8,0x1e,"Waiting for other players.");
        }
        else {
          pcVar3 = UTIL_VarArgs("%s is the Last Man Standing! %i frags",
                                gpGlobals->pStringBase + *(int *)(*local_40 + 0x1d0),10);
          TSHudMessageAll(0,0xff,0,1,0x1e,pcVar3);
          *(float *)(*local_40 + 0x164) = *(float *)(*local_40 + 0x164) + 10.0;
          (*g_engfuncs.pfnMessageBegin)(2,gmsgScoreInfo,(float *)0x0,(edict_t *)0x0);
          iVar5 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*local_40 + 0x208));
          (*g_engfuncs.pfnWriteByte)(iVar5);
          _local_20 = CONCAT22(uStack_1e,in_FPUControlWord);
          local_24 = (int)ROUND(*(float *)(*local_40 + 0x164));
          (*g_engfuncs.pfnWriteShort)(local_24);
          (*g_engfuncs.pfnWriteShort)(local_40[0x2cc]);
          (*g_engfuncs.pfnWriteShort)(0);
          iVar5 = (**(code **)(*g_pGameRules + 0xd0))(g_pGameRules,local_40 + 0x2d2);
          (*g_engfuncs.pfnWriteShort)(iVar5 + 1);
          (*g_engfuncs.pfnMessageEnd)();
          UTIL_LogPrintf("Player \"%s\" triggered \"last_man_standing\"\n",
                         gpGlobals->pStringBase + *(int *)(*local_40 + 0x1d0));
        }
        *(float *)(this + 0xc) = gpGlobals->time + 3.0;
        if (this[0x10] != (CTSGameRules)0x0) {
          (*g_engfuncs.pfnMessageBegin)(2,gmsgTSRoundTime,(float *)0x0,(edict_t *)0x0);
          _local_20 = CONCAT22(uStack_1e,in_FPUControlWord);
          local_24 = (int)ROUND(*(float *)(this + 8) - gpGlobals->time);
          (*g_engfuncs.pfnWriteByte)(local_24);
          (*g_engfuncs.pfnWriteByte)(2);
          (*g_engfuncs.pfnMessageEnd)();
        }
      }
      else if ((((0 < iVar5) && (gpGlobals->time <= *(float *)(this + 8))) && (1 < local_44)) ||
              (this[0x10] == (CTSGameRules)0x0)) {
        pcVar3 = UTIL_VarArgs("%d men standing!",iVar5);
        TSHudMessageAll(0,0xff,0,1,0x1e,pcVar3);
      }
      else {
        TSHudMessageAll(0,0xff,0,8,0x1e,"Round over");
        *(float *)(this + 0xc) = gpGlobals->time + 3.0;
      }
    }
    else if ((byte)((char)*this - 2U) < 2) {
      iVar6 = 0;
      piVar1 = local_3c;
      for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar1 = 0;
        piVar1 = piVar1 + 1;
      }
      for (iVar5 = 1; iVar5 <= gpGlobals->maxClients; iVar5 = iVar5 + 1) {
        iVar2 = UTIL_PlayerByIndex(iVar5);
        if (((iVar2 != 0) &&
            (iVar4 = (**(code **)(*(int *)(iVar2 + 0x60) + 200))(iVar2), iVar4 != 0)) &&
           ((iVar4 = (**(code **)(*(int *)(iVar2 + 0x60) + 0xb4))(iVar2), iVar4 != 0 ||
            (0.0 <= *(float *)(iVar2 + 0x770))))) {
          pcVar3 = (char *)(**(code **)(*(int *)(iVar2 + 0x60) + 0xd0))(iVar2);
          iVar2 = GetTeamIndex(this,pcVar3);
          if (-1 < iVar2) {
            local_3c[iVar2] = local_3c[iVar2] + 1;
            iVar6 = iVar6 + 1;
          }
        }
      }
      if (*this == (CTSGameRules)0x3) {
        if (0 < iVar6) {
          if (local_3c[1] < 1) {
            if (*(int *)(this + 0x554) == 0) {
              return;
            }
            FireTargets((int)(gpGlobals->pStringBase + *(int *)(*(int *)(this + 0x554) + 0x9c)),
                        *(undefined4 *)(this + 0x554),*(undefined4 *)(this + 0x554),3,0);
            return;
          }
          if (0 < local_3c[0]) {
            return;
          }
          if (*(int *)(this + 0x554) == 0) {
            return;
          }
          FireTargets((int)(gpGlobals->pStringBase + *(int *)(*(int *)(this + 0x554) + 0x98)),
                      *(undefined4 *)(this + 0x554),*(undefined4 *)(this + 0x554),3,0);
          return;
        }
        iVar5 = 2;
      }
      else if (iVar6 < 1) {
        iVar5 = 2;
      }
      else if (local_3c[1] < 1) {
        iVar5 = 0;
      }
      else {
        if (0 < local_3c[0]) {
          return;
        }
        iVar5 = 1;
      }
      TeamWin(this,iVar5,0,'\x01','\0');
    }
  }
  return;
}

/* 0007a154  CTSGameRules::CountPlayers  (89 bytes)
 * int CountPlayers(void)
 */
/* CTSGameRules::CountPlayers(void) */

int CTSGameRules::CountPlayers(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (iVar2 = 1; iVar2 <= gpGlobals->maxClients; iVar2 = iVar2 + 1) {
    iVar1 = UTIL_PlayerByIndex(iVar2);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x60) + 200))(iVar1);
      if (iVar1 != 0) {
        iVar3 = iVar3 + 1;
      }
    }
  }
  return iVar3;
}

/* 0007a1c8  CTSGameRules::PlayerVote  (1013 bytes)
 * undefined4 PlayerVote(int param_1, char * param_2)
 */
/* CTSGameRules::PlayerVote(edict_s *, char *) */

undefined4 __thiscall CTSGameRules::PlayerVote(CTSGameRules *this,int param_1,char *param_2)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  CTSGameRules *pCVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  CTSGameRules *local_12c;
  char local_11c [268];
  
  local_11c[0] = '\0';
  uVar4 = (*g_engfuncs.pfnIndexOfEdict)((edict_t *)param_1);
  iVar9 = param_1 + 0x80;
  if (iVar9 == 0) {
    return 0;
  }
  if (0x1f < uVar4) {
    return 0;
  }
  pcVar5 = strstr(param_2,"reset");
  if (pcVar5 == (char *)0x0) {
    pcVar5 = strstr(param_2,"stats");
    if (pcVar5 != (char *)0x0) {
      iVar7 = CalcMiniminVotants(*(int *)(this + 0x1820));
      bVar3 = true;
      iVar11 = 0;
      pCVar10 = this + 0xf88;
      local_12c = this + 0x1788;
      do {
        if (this[0xf88] != (CTSGameRules)0x0) {
          iVar15 = 0;
          iVar13 = 0;
          iVar14 = 0;
          iVar12 = 0;
          puVar6 = UTIL_VarArgs("(%i/%i) votes for %s\n",*(undefined4 *)local_12c,iVar7,pCVar10);
          ClientPrint(iVar9,3,puVar6,iVar12,iVar14,iVar13,iVar15);
          bVar3 = false;
        }
        if (this[0xfc8] != (CTSGameRules)0x0) {
          iVar15 = 0;
          iVar13 = 0;
          iVar14 = 0;
          iVar12 = 0;
          puVar6 = UTIL_VarArgs("(%i/%i) votes for %s\n",*(undefined4 *)(local_12c + 4),iVar7,
                                pCVar10 + 0x40);
          ClientPrint(iVar9,3,puVar6,iVar12,iVar14,iVar13,iVar15);
          bVar3 = false;
        }
        local_12c = local_12c + 8;
        pCVar10 = pCVar10 + 0x80;
        this = this + 0x80;
        iVar11 = iVar11 + 2;
      } while (iVar11 < 0x20);
      if (bVar3) {
        ClientPrint(iVar9,3,"No votes in progress.\n",0,0,0,0);
      }
      return 1;
    }
    pcVar5 = strstr(param_2,"map");
    if (pcVar5 == (char *)0x0) {
      return 0;
    }
    strcpy(local_11c,pcVar5 + 3);
    uVar8 = 0xffffffff;
    pcVar5 = local_11c;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar7 = 0;
    if ((0 < (int)(~uVar8 - 1)) && ((*(ushort *)(__ctype_b + local_11c[0] * 2) & 0x6000) != 0x4000))
    {
      iVar11 = 0;
      do {
        iVar7 = iVar11 + 1;
        if ((int)(~uVar8 - 1) <= iVar7) break;
        iVar12 = iVar11 + 1;
        iVar11 = iVar7;
      } while ((*(ushort *)(__ctype_b + local_11c[iVar12] * 2) & 0x6000) != 0x4000);
    }
    strcpy(local_11c,local_11c + iVar7);
    uVar8 = 0xffffffff;
    pcVar5 = local_11c;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar7 = 0;
    if (0 < (int)(~uVar8 - 1)) {
      uVar2 = *(ushort *)(__ctype_b + local_11c[0] * 2);
      iVar11 = 0;
      while ((iVar7 = iVar11, (uVar2 & 0x6000) == 0x4000 &&
             (iVar7 = iVar11 + 1, iVar7 < (int)(~uVar8 - 1)))) {
        uVar2 = *(ushort *)(__ctype_b + local_11c[iVar11 + 1] * 2);
        iVar11 = iVar7;
      }
    }
    local_11c[iVar7] = '\0';
    iVar7 = strcmp(local_11c,gpGlobals->pStringBase + gpGlobals->mapname);
    if (iVar7 == 0) {
      pcVar5 = "%s is the current map!\n";
    }
    else {
      iVar7 = (*g_engfuncs.pfnIsMapValid)(local_11c);
      if (iVar7 != 0) {
        strcpy((char *)(this + uVar4 * 0x48 + 0x684),local_11c);
        iVar12 = 0;
        iVar11 = 0;
        iVar7 = 0;
        iVar9 = 0;
        puVar6 = UTIL_VarArgs("%s vote for map %s\n",
                              gpGlobals->pStringBase + *(int *)(param_1 + 0x250),local_11c);
        UTIL_ClientPrintAll(3,puVar6,iVar9,iVar7,iVar11,iVar12);
        return 1;
      }
      pcVar5 = "%s is an invalid map\n";
    }
    iVar14 = 0;
    iVar12 = 0;
    iVar11 = 0;
    iVar7 = 0;
    pcVar5 = UTIL_VarArgs(pcVar5,local_11c);
  }
  else {
    pCVar10 = this + uVar4 * 0x48 + 0x684;
    for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pCVar10 = 0;
      pCVar10 = pCVar10 + 4;
    }
    *(uint *)(this + uVar4 * 0x48 + 0x6c8) = uVar4 + 1;
    iVar14 = 0;
    iVar12 = 0;
    iVar11 = 0;
    iVar7 = 0;
    pcVar5 = "Your votes are resetted.\n";
  }
  ClientPrint(iVar9,3,pcVar5,iVar7,iVar11,iVar12,iVar14);
  return 1;
}

/* 0007a5c4  CTSGameRules::CheckVotes  (1556 bytes)
 * undefined CheckVotes(void)
 */
/* CTSGameRules::CheckVotes(void) */

void __thiscall CTSGameRules::CheckVotes(CTSGameRules *this)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint unaff_ESI;
  CTSGameRules *pCVar5;
  longdouble lVar6;
  int local_3c;
  int local_38;
  int local_34;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  
  if (*(float *)(this + 0xf84) <= gpGlobals->time) {
    *(float *)(this + 0xf84) = gpGlobals->time + 10.0;
    pCVar5 = this + 0xf88;
    for (iVar4 = 0x227; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pCVar5 = 0;
      pCVar5 = pCVar5 + 4;
    }
    local_18 = (int *)0x0;
    local_1c = 0;
    local_24 = 0;
    local_20 = -1;
    while (local_18 = (int *)UTIL_FindEntityByClassname(local_18,"player"), local_18 != (int *)0x0)
    {
      bVar1 = false;
      if ((*(edict_t **)(*local_18 + 0x208) == (edict_t *)0x0) ||
         (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(*local_18 + 0x208)), iVar4 == 0)
         ) {
        bVar1 = true;
      }
      if (bVar1) break;
      if (((*local_18 != 0) && (iVar4 = (**(code **)(local_18[0x18] + 0xcc))(local_18), iVar4 != 0))
         && (unaff_ESI = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*local_18 + 0x208)),
            unaff_ESI < 0x20)) {
        local_1c = local_1c + 1;
        if (this[unaff_ESI * 0x48 + 0x6c4] == (CTSGameRules)0x1) {
          *(int *)(this + 0x1808) = *(int *)(this + 0x1808) + 1;
        }
        else if (this[unaff_ESI * 0x48 + 0x6c4] == (CTSGameRules)0x2) {
          *(int *)(this + 0x180c) = *(int *)(this + 0x180c) + 1;
        }
        if (this[unaff_ESI * 0x48 + 0x6c6] == (CTSGameRules)0x1) {
          *(int *)(this + 0x1818) = *(int *)(this + 0x1818) + 1;
        }
        else if (this[unaff_ESI * 0x48 + 0x6c6] == (CTSGameRules)0x2) {
          *(int *)(this + 0x181c) = *(int *)(this + 0x181c) + 1;
        }
        if (this[unaff_ESI * 0x48 + 0x6c5] == (CTSGameRules)0x1) {
          *(int *)(this + 0x1810) = *(int *)(this + 0x1810) + 1;
        }
        else if (this[unaff_ESI * 0x48 + 0x6c5] == (CTSGameRules)0x2) {
          *(int *)(this + 0x1814) = *(int *)(this + 0x1814) + 1;
        }
        if (this[unaff_ESI * 0x48 + 0x684] != (CTSGameRules)0x0) {
          bVar1 = false;
          iVar4 = 0;
          local_3c = 0x1780;
          pCVar5 = this + 0xf88;
          do {
            iVar2 = strcmp((char *)pCVar5,(char *)(this + unaff_ESI * 0x48 + 0x684));
            if (iVar2 == 0) {
              iVar2 = *(int *)(this + local_3c + 8);
              *(int *)(this + local_3c + 8) = iVar2 + 1;
              bVar1 = true;
              if (local_24 < *(int *)(this + local_3c + 8)) {
                local_24 = iVar2 + 1;
                local_20 = iVar4;
              }
            }
            local_3c = local_3c + 4;
            pCVar5 = pCVar5 + 0x40;
            iVar4 = iVar4 + 1;
          } while ((iVar4 < 0x20) && (!bVar1));
          if (!bVar1) {
            iVar4 = 0;
            local_34 = 0x1780;
            pCVar5 = this + 0xf88;
            local_38 = 0;
            do {
              if (this[local_38 + 0xf88] == (CTSGameRules)0x0) {
                strcpy((char *)pCVar5,(char *)(this + unaff_ESI * 0x48 + 0x684));
                iVar2 = *(int *)(this + local_34 + 8);
                *(int *)(this + local_34 + 8) = iVar2 + 1;
                bVar1 = true;
                if (local_24 < *(int *)(this + local_34 + 8)) {
                  local_24 = iVar2 + 1;
                  local_20 = iVar4;
                }
              }
              local_34 = local_34 + 4;
              pCVar5 = pCVar5 + 0x40;
              local_38 = local_38 + 0x40;
              iVar4 = iVar4 + 1;
            } while ((iVar4 < 0x20) && (!bVar1));
          }
        }
      }
    }
    *(int *)(this + 0x1820) = local_1c;
    iVar4 = CalcMiniminVotants(local_1c);
    if (*(int *)(this + 0x1808) < iVar4) {
      if (*(int *)(this + 0x180c) < iVar4) {
        if (*(int *)(this + 0x1818) < iVar4) {
          if (*(int *)(this + 0x181c) < iVar4) {
            if (*(int *)(this + 0x1810) < iVar4) {
              if (*(int *)(this + 0x1814) < iVar4) {
                if (local_20 == -1) {
                  return;
                }
                if (*(int *)(this + local_20 * 4 + 0x1788) < iVar4) {
                  return;
                }
                strcpy((char *)(this + 0x1824),(char *)(this + local_20 * 0x40 + 0xf88));
                return;
              }
              iVar4 = 0x1f;
              do {
                iVar4 = iVar4 + -0x10;
              } while (-1 < iVar4);
              this[unaff_ESI * 0x48 + 0x6c5] = (CTSGameRules)0x0;
              lVar6 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("mp_teamplay");
              if (lVar6 == (longdouble)0.0) {
                return;
              }
              (*g_engfuncs.pfnCVarSetFloat)("mp_teamplay",0.0);
              pcVar3 = "TeamPlay in DM maps disabled, wait next map.";
            }
            else {
              iVar4 = 0x1f;
              do {
                iVar4 = iVar4 + -0x10;
              } while (-1 < iVar4);
              this[unaff_ESI * 0x48 + 0x6c5] = (CTSGameRules)0x0;
              lVar6 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("mp_teamplay");
              if (lVar6 == (longdouble)1.0) {
                return;
              }
              (*g_engfuncs.pfnCVarSetFloat)("mp_teamplay",1.0);
              pcVar3 = "TeamPlay in DM maps enabled, wait next map.";
            }
            UTIL_ClientPrintAll(4,pcVar3,0,0,0,0);
            *(undefined4 *)(this + 0x1824) = 0x7478656e;
            *(undefined4 *)(this + 0x1828) = 0x70616d;
          }
          else {
            (*g_engfuncs.pfnCVarSetFloat)("mp_friendlyfire",0.0);
            UTIL_ClientPrintAll(4,"Friendly fire disabled.",0,0,0,0);
            iVar4 = 0;
            do {
              this[unaff_ESI * 0x48 + 0x6c6] = (CTSGameRules)0x0;
              iVar4 = iVar4 + 1;
            } while (iVar4 < 0x20);
          }
        }
        else {
          (*g_engfuncs.pfnCVarSetFloat)("mp_friendlyfire",1.0);
          UTIL_ClientPrintAll(4,"Friendly fire enabled.",0,0,0,0);
          iVar4 = 0;
          do {
            this[unaff_ESI * 0x48 + 0x6c6] = (CTSGameRules)0x0;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x20);
        }
      }
      else {
        (*g_engfuncs.pfnCVarSetFloat)("mp_slowmatch",0.0);
        UTIL_ClientPrintAll(4,"SlowMatch disabled.",0,0,0,0);
        iVar4 = 0;
        do {
          this[unaff_ESI * 0x48 + 0x6c4] = (CTSGameRules)0x0;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x20);
      }
    }
    else {
      (*g_engfuncs.pfnCVarSetFloat)("mp_slowmatch",1.0);
      UTIL_ClientPrintAll(4,"SlowMatch enabled.",0,0,0,0);
      iVar4 = 0;
      do {
        this[unaff_ESI * 0x48 + 0x6c4] = (CTSGameRules)0x0;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x20);
    }
  }
  return;
}

/* 0007abdc  CTSGameRules::ClearObjectiveList  (36 bytes)
 * undefined ClearObjectiveList(void)
 */
/* CTSGameRules::ClearObjectiveList(void) */

void __thiscall CTSGameRules::ClearObjectiveList(CTSGameRules *this)

{
  int iVar1;
  CTSGameRules *pCVar2;
  
  *(undefined4 *)(this + 0x2d0) = 0;
  pCVar2 = this + 0x2d4;
  for (iVar1 = 0xa0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = 0;
    pCVar2 = pCVar2 + 4;
  }
  return;
}

/* 0007ac00  CTSGameRules::AddObjectiveInList  (126 bytes)
 * uint AddObjectiveInList(int param_1, undefined4 * param_2)
 */
/* CTSGameRules::AddObjectiveInList(CTSObjective *, int *) */

uint __thiscall CTSGameRules::AddObjectiveInList(CTSGameRules *this,int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  CTSGameRules *pCVar3;
  
  uVar1 = FindIndexByObjective(this,param_1);
  if ((0x7fffffff < uVar1) && (uVar1 = 0xffffffff, *(int *)(this + 0x2d0) < 0x20)) {
    *(int *)(this + *(int *)(this + 0x2d0) * 0x14 + 0x2d4) = param_1;
    pCVar3 = this + *(int *)(this + 0x2d0) * 0x14 + 0x2d8;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar3 = *param_2;
      param_2 = param_2 + 1;
      pCVar3 = pCVar3 + 4;
    }
    uVar1 = *(uint *)(this + 0x2d0);
    *(uint *)(this + 0x2d0) = uVar1 + 1;
  }
  return uVar1;
}

/* 0007ac80  CTSGameRules::SendObjectiveToHud  (340 bytes)
 * undefined SendObjectiveToHud(int param_1, int * param_2)
 */
/* CTSGameRules::SendObjectiveToHud(int, CBaseEntity *) */

void __thiscall CTSGameRules::SendObjectiveToHud(CTSGameRules *this,int param_1,int *param_2)

{
  CTSGameRules *pCVar1;
  char *pcVar2;
  int iVar3;
  int unaff_EBP;
  edict_t *ed;
  undefined1 local_6c [4];
  char local_68 [12];
  char local_5c [63];
  undefined1 local_1d;
  
  if (((param_2 != (int *)0x0) && (param_1 < *(int *)(this + 0x2d0))) && (-1 < param_1)) {
    local_5c[0] = '\0';
    pCVar1 = this + param_1 * 0x14 + 0x2d4;
    pcVar2 = (char *)(**(code **)(param_2[0x18] + 0xd0))(param_2);
    iVar3 = GetTeamIndex(this,pcVar2);
    if (-1 < iVar3) {
      if (*(int *)(pCVar1 + iVar3 * 4 + 4) != 0) {
        strncpy(local_5c,gpGlobals->pStringBase + *(int *)(pCVar1 + iVar3 * 4 + 4),0x40);
        local_1d = 0;
      }
    }
    ed = *(edict_t **)(*param_2 + 0x208);
    (*g_engfuncs.pfnMessageBegin)(1,gmsgTSObjective,(float *)0x0,ed);
    (**(code **)(*(int *)(*(int *)pCVar1 + 0x60) + 0xf8))(local_6c,*(int *)pCVar1);
    (*g_engfuncs.pfnWriteCoord)((float)ed);
    (**(code **)(*(int *)(*(int *)pCVar1 + 0x60) + 0xf8))(local_6c,*(int *)pCVar1);
    (*g_engfuncs.pfnWriteCoord)((float)ed);
    (**(code **)(*(int *)(*(int *)pCVar1 + 0x60) + 0xf8))(local_6c,*(int *)pCVar1);
    (*g_engfuncs.pfnWriteCoord)((float)ed);
    (*g_engfuncs.pfnWriteByte)(unaff_EBP);
    (*g_engfuncs.pfnWriteString)(local_68);
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 0007add4  CTSGameRules::SendObjectiveList  (75 bytes)
 * undefined SendObjectiveList(int * param_1)
 */
/* CTSGameRules::SendObjectiveList(CBaseEntity *) */

void __thiscall CTSGameRules::SendObjectiveList(CTSGameRules *this,int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (iVar1 = 0, 0 < *(int *)(this + 0x2d0))) {
    do {
      SendObjectiveToHud(this,iVar1,param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 0x2d0));
  }
  return;
}

/* 0007ae20  CTSGameRules::FindIndexByObjective  (154 bytes)
 * int FindIndexByObjective(int param_1)
 */
/* CTSGameRules::FindIndexByObjective(CTSObjective *) */

int __thiscall CTSGameRules::FindIndexByObjective(CTSGameRules *this,int param_1)

{
  int iVar1;
  uint uVar2;
  CTSGameRules *pCVar3;
  
  iVar1 = 0;
  if (*(int *)(this + 0x2d0) < 1) {
    return -1;
  }
  pCVar3 = this + 0x2d4;
  uVar2 = *(uint *)(this + 0x2d0) & 3;
  if (0 < *(int *)(this + 0x2d0)) {
    if (uVar2 == 0) goto LAB_0007ae84;
    if (1 < uVar2) {
      if (2 < uVar2) {
        if (*(int *)(this + 0x2d4) == param_1) {
          return 0;
        }
        pCVar3 = this + 0x2e8;
        iVar1 = 1;
      }
      if (*(int *)pCVar3 == param_1) {
        return iVar1;
      }
      pCVar3 = pCVar3 + 0x14;
      iVar1 = iVar1 + 1;
    }
  }
  if (*(int *)pCVar3 == param_1) {
    return iVar1;
  }
  pCVar3 = pCVar3 + 0x14;
  iVar1 = iVar1 + 1;
  if (*(int *)(this + 0x2d0) <= iVar1) {
    return -1;
  }
LAB_0007ae84:
  while( true ) {
    if (*(int *)pCVar3 == param_1) {
      return iVar1;
    }
    if (*(int *)(pCVar3 + 0x14) == param_1) {
      return iVar1 + 1;
    }
    if (*(int *)(pCVar3 + 0x28) == param_1) {
      return iVar1 + 2;
    }
    if (*(int *)(pCVar3 + 0x3c) == param_1) break;
    pCVar3 = pCVar3 + 0x50;
    iVar1 = iVar1 + 4;
    if (*(int *)(this + 0x2d0) <= iVar1) {
      return -1;
    }
  }
  return iVar1 + 3;
}

/* 0007aebc  CTSGameRules::ShowObjectiveOnHud  (107 bytes)
 * undefined ShowObjectiveOnHud(int param_1, char param_2)
 */
/* CTSGameRules::ShowObjectiveOnHud(CTSObjective *, bool) */

void __thiscall CTSGameRules::ShowObjectiveOnHud(CTSGameRules *this,int param_1,char param_2)

{
  int iValue;
  
  iValue = FindIndexByObjective(this,param_1);
  (*g_engfuncs.pfnMessageBegin)(2,gmsgTSShowObjective,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(iValue);
  (*g_engfuncs.pfnWriteByte)((uint)(param_2 != '\0'));
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 0007af28  CTSGameRules::SelectRandomTheOne  (335 bytes)
 * undefined SelectRandomTheOne(void)
 */
/* CTSGameRules::SelectRandomTheOne(void) */

void __thiscall CTSGameRules::SelectRandomTheOne(CTSGameRules *this)

{
  CBasePlayer *pCVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_ac [39];
  
  if (*(float *)(this + 0x587c) <= gpGlobals->time) {
    *(float *)(this + 0x587c) = gpGlobals->time + 10.0;
    iVar6 = 0;
    iVar5 = 1;
    if (0 < gpGlobals->maxClients) {
      do {
        piVar2 = (int *)UTIL_PlayerByIndex(iVar5);
        if ((piVar2 != (int *)0x0) &&
           (iVar3 = (**(code **)(piVar2[0x18] + 200))(piVar2), iVar3 != 0)) {
          if (*(char *)((int)piVar2 + 0x7b9) != '\0') {
            return;
          }
          iVar3 = (**(code **)(piVar2[0x18] + 0xb4))(piVar2);
          if (((iVar3 != 0) && (*(int *)(*piVar2 + 0x244) == 0)) && (iVar6 < 0x21)) {
            local_ac[iVar6] = piVar2;
            iVar6 = iVar6 + 1;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= gpGlobals->maxClients);
    }
    if (0 < iVar6) {
      iVar5 = (*g_engfuncs.pfnRandomLong)(0,iVar6 + -1);
      pCVar1 = (CBasePlayer *)local_ac[iVar5];
      SetPlayerTheOne(this,pCVar1);
      (**(code **)(*g_pGameRules + 0xe0))(g_pGameRules,pCVar1);
      iVar5 = *g_pGameRules;
      uVar8 = 0;
      uVar7 = 0;
      uVar4 = (*pCVar1->vtable[0x34])(pCVar1);
      (**(code **)(iVar5 + 0xdc))(g_pGameRules,pCVar1,uVar4,uVar7,uVar8);
    }
  }
  return;
}

/* 0007b078  CTSGameRules::SetPlayerTheOne  (480 bytes)
 * undefined SetPlayerTheOne(CBasePlayer * param_1)
 */
/* CTSGameRules::SetPlayerTheOne(CBasePlayer *) */

void __thiscall CTSGameRules::SetPlayerTheOne(CTSGameRules *this,CBasePlayer *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = (*param_1->vtable[0x2d])(param_1);
  if ((iVar1 != 0) && (param_1->pev->iuser1 == 0)) {
    param_1->field_0x7b9 = 1;
    param_1->pev->health = 150.0;
    *(float *)&param_1->field_0x73c = gpGlobals->time + 1.0;
    param_1->field_0x74e = 1;
    param_1->field_0x74f = 1;
    (*g_engfuncs.pfnSetPhysicsKeyValue)(param_1->pev->pContainingEntity,"mj","1");
    CBasePlayer::SetPlayerSpeed(param_1,330.0);
    (*g_engfuncs.pfnMessageBegin)(1,gmsgTSPowerUp,(float *)0x0,param_1->pev->pContainingEntity);
    (*g_engfuncs.pfnWriteShort)(4);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnMessageEnd)();
    (*g_engfuncs.pfnMessageBegin)(1,gmsgTSPowerUp,(float *)0x0,param_1->pev->pContainingEntity);
    (*g_engfuncs.pfnWriteShort)(0x100);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnMessageEnd)();
    if ((*(int *)&param_1->field_0x724 == 0) && (*(int *)&param_1->field_0x728 == 0)) {
      *(undefined4 *)&param_1->field_0x724 = 0;
      *(undefined4 *)&param_1->field_0x728 = 8;
      *(undefined4 *)&param_1->field_0x72c = 0;
      *(undefined4 *)&param_1->field_0x730 = 3;
    }
    param_1->field_0x74c = 10;
    this[0x5878] = (CTSGameRules)0x1;
    this[0x5877] = (CTSGameRules)0x0;
    pcVar2 = UTIL_VarArgs("%s is The One!",gpGlobals->pStringBase + param_1->pev->netname);
    TSHudMessageAll(100,0x96,0xff,1,0x1e,pcVar2);
    UTIL_LogPrintf("Player \"%s\" triggered \"the_one\"\n",
                   gpGlobals->pStringBase + param_1->pev->netname);
  }
  return;
}

/* 0007b258  CTSGameRules::TheOneIsDead  (331 bytes)
 * undefined TheOneIsDead(CBasePlayer * param_1, CBasePlayer * param_2)
 */
/* CTSGameRules::TheOneIsDead(CBasePlayer *, CBasePlayer *) */

void __thiscall
CTSGameRules::TheOneIsDead(CTSGameRules *this,CBasePlayer *param_1,CBasePlayer *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  this[0x5878] = (CTSGameRules)0x0;
  if ((param_1 != (CBasePlayer *)0x0) && (param_1->field_0x7b9 = 0, g_theOneMode != 0)) {
    if ((param_2 == (CBasePlayer *)0x0) || (param_1 == param_2)) {
      TSHudMessageAll(100,0x96,0xff,1,0x1e,"The One is dead.");
    }
    else {
      pcVar2 = UTIL_VarArgs("The One was killed by %s!",
                            gpGlobals->pStringBase + param_2->pev->netname);
      uVar4 = 0xff;
      uVar3 = 0x96;
      TSHudMessageAll(100,0x96,0xff,1,0x1e,pcVar2);
      (**(code **)(*g_pGameRules + 0xe0))(g_pGameRules,param_1);
      iVar1 = *g_pGameRules;
      uVar3 = (*param_1->vtable[0x34])(param_1,uVar3,uVar4,0,0);
      (**(code **)(iVar1 + 0xdc))(g_pGameRules,param_1,uVar3);
      SetPlayerTheOne(this,param_2);
      (**(code **)(*g_pGameRules + 0xe0))(g_pGameRules,param_2);
      iVar1 = *g_pGameRules;
      uVar3 = (*param_2->vtable[0x34])(param_2,param_1,uVar3,0,0);
      (**(code **)(iVar1 + 0xdc))(g_pGameRules,param_2,uVar3);
    }
  }
  return;
}

/* 00097894  CTSGameRules::GetRandomPowerup  (229 bytes)
 * uint GetRandomPowerup(undefined4 this, uint param_2)
 */
/* CTSGameRules::GetRandomPowerup(int) */

uint __thiscall CTSGameRules::GetRandomPowerup(undefined4 this,uint param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint local_4c [15];
  
  iVar1 = 0;
  puVar5 = local_4c;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar3 = 0;
  do {
    bVar2 = (byte)iVar3;
    uVar4 = 1 << (bVar2 & 0x1f);
    if (((param_2 & uVar4) != 0) &&
       (((DAT_0017da25 == '\0' || ((uVar4 & 0x100) == 0)) && (-1 < (char)uVar4)))) {
      local_4c[iVar1] = uVar4;
      iVar1 = iVar1 + 1;
    }
    uVar4 = 1 << (bVar2 + 1 & 0x1f);
    if ((((param_2 & uVar4) != 0) && ((DAT_0017da25 == '\0' || ((uVar4 & 0x100) == 0)))) &&
       (-1 < (char)uVar4)) {
      local_4c[iVar1] = uVar4;
      iVar1 = iVar1 + 1;
    }
    uVar4 = 1 << (bVar2 + 2 & 0x1f);
    if ((((param_2 & uVar4) != 0) && ((DAT_0017da25 == '\0' || ((uVar4 & 0x100) == 0)))) &&
       (-1 < (char)uVar4)) {
      local_4c[iVar1] = uVar4;
      iVar1 = iVar1 + 1;
    }
    iVar3 = iVar3 + 3;
  } while (iVar3 < 9);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,iVar1 + -1);
    uVar4 = local_4c[iVar1];
  }
  return uVar4;
}

/* 0009797c  CTSGameRules::PutPowerUp  (583 bytes)
 * undefined4 PutPowerUp(undefined4 this, uint param_2)
 */
/* CTSGameRules::PutPowerUp(int) */

undefined4 __thiscall CTSGameRules::PutPowerUp(undefined4 this,uint param_2)

{
  bool bVar1;
  CTSPowerUp *pCVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  char *pcVar9;
  vec_t *pvVar10;
  float *pfVar11;
  undefined4 *puVar12;
  vec_t *pvVar13;
  float *pfVar14;
  int local_104;
  float local_fc [4];
  int local_ec [32];
  undefined4 local_6c;
  vec_t avStack_2c [4];
  undefined1 auStack_1c [12];
  
  piVar7 = (int *)0x0;
  pcVar9 = "info_player_deathmatch";
  puVar12 = &local_6c;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar12 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    puVar12 = puVar12 + 1;
  }
  *(undefined2 *)puVar12 = *(undefined2 *)pcVar9;
  *(char *)((int)puVar12 + 2) = pcVar9[2];
  for (local_104 = 0;
      (piVar7 = (int *)UTIL_FindEntityByClassname(piVar7,&local_6c), piVar7 != (int *)0x0 &&
      (local_104 < 0x20)); local_104 = local_104 + 1) {
    local_ec[local_104] = (int)piVar7;
  }
  if ((local_104 != 0) && (local_104 = local_104 + -1, -1 < local_104)) {
    do {
      uVar3 = (*g_engfuncs.pfnRandomLong)(0,local_104);
      piVar7 = (int *)0x0;
      GetRandomPosition(local_fc,(float *)(*(int *)local_ec[uVar3] + 8));
      pfVar11 = local_fc;
      pfVar14 = avStack_2c;
      for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar14 = *pfVar11;
        pfVar11 = pfVar11 + 1;
        pfVar14 = pfVar14 + 1;
      }
      bVar1 = true;
      while ((piVar7 = (int *)UTIL_FindEntityInSphere(piVar7,avStack_2c,0x43000000),
             piVar7 != (int *)0x0 && (bVar1))) {
        iVar5 = strcmp(gpGlobals->pStringBase + *(int *)*piVar7,"ts_powerup");
        if (iVar5 == 0) {
          bVar1 = false;
        }
      }
      if (bVar1) {
        pCVar2 = CTSPowerUp::CreatePowerUp(param_2,-1);
        pvVar10 = avStack_2c;
        pvVar13 = pCVar2->pev->origin;
        for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pvVar13 = *pvVar10;
          pvVar10 = pvVar10 + 1;
          pvVar13 = pvVar13 + 1;
        }
        return 1;
      }
      local_6c = 0;
      if ((int)uVar3 < 0x1f) {
        iVar5 = uVar3 * 4;
        uVar4 = ~uVar3 & 3;
        if ((int)uVar3 < 0x1f) {
          if (uVar4 != 0) {
            if (1 < uVar4) {
              if (2 < uVar4) {
                local_ec[uVar3] = local_ec[uVar3 + 1];
                iVar5 = iVar5 + 4;
                uVar3 = uVar3 + 1;
              }
              *(undefined4 *)((int)local_ec + iVar5) = *(undefined4 *)((int)local_ec + iVar5 + 4);
              iVar5 = iVar5 + 4;
              uVar3 = uVar3 + 1;
            }
            goto LAB_00097b47;
          }
        }
        else {
LAB_00097b47:
          *(undefined4 *)((int)local_ec + iVar5) = *(undefined4 *)((int)local_ec + iVar5 + 4);
          iVar5 = iVar5 + 4;
          uVar3 = uVar3 + 1;
          if (0x1e < (int)uVar3) goto LAB_00097ba2;
        }
        puVar6 = auStack_1c + iVar5;
        puVar8 = puVar6;
        do {
          *(undefined4 *)(puVar6 + -0xd0) = *(undefined4 *)(puVar8 + -0xcc);
          *(undefined4 *)(puVar6 + -0xcc) = *(undefined4 *)(puVar8 + -200);
          *(undefined4 *)(puVar6 + -200) = *(undefined4 *)(puVar8 + -0xc4);
          *(undefined4 *)(puVar6 + -0xc4) = *(undefined4 *)(puVar8 + -0xc0);
          puVar6 = puVar6 + 0x10;
          puVar8 = puVar8 + 0x10;
          uVar3 = uVar3 + 4;
        } while ((int)uVar3 < 0x1f);
      }
LAB_00097ba2:
      local_104 = local_104 + -1;
    } while (-1 < local_104);
  }
  return 0;
}

