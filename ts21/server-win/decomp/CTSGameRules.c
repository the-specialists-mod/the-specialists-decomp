/* mp.dll - CTSGameRules (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10044400  CTSGameRules::RespawnEntities  (438 bytes)
 * undefined RespawnEntities(undefined4 param_1)
 * called by: CTSGameRules::RestartRound, GameDLLInit
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CTSGameRules::RespawnEntities(CTSGameRules *this,undefined4 param_1)

{
  edict_t *peVar1;
  undefined4 *puVar2;
  int iVar3;
  CTSGroundWeapon *this_00;
  CTSPowerUp *this_01;
  
  puVar2 = (undefined4 *)UTIL_FindEntityByClassname(0,s_func_breakable_10096ee4);
  while (((puVar2 != (undefined4 *)0x0 && (*(edict_t **)(puVar2[1] + 0x208) != (edict_t *)0x0)) &&
         (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(puVar2[1] + 0x208)), iVar3 != 0)
         )) {
    (**(code **)*puVar2)(param_1);
    puVar2 = (undefined4 *)UTIL_FindEntityByClassname((int)puVar2,s_func_breakable_10096ee4);
  }
  puVar2 = (undefined4 *)UTIL_FindEntityByClassname((int)puVar2,s_func_door_1009299c);
  while (((puVar2 != (undefined4 *)0x0 && (*(edict_t **)(puVar2[1] + 0x208) != (edict_t *)0x0)) &&
         (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(puVar2[1] + 0x208)), iVar3 != 0)
         )) {
    (**(code **)*puVar2)(param_1);
    puVar2 = (undefined4 *)UTIL_FindEntityByClassname((int)puVar2,s_func_door_1009299c);
  }
  puVar2 = (undefined4 *)UTIL_FindEntityByClassname((int)puVar2,s_func_door_rotating_10092988);
  while (((puVar2 != (undefined4 *)0x0 && (*(edict_t **)(puVar2[1] + 0x208) != (edict_t *)0x0)) &&
         (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(puVar2[1] + 0x208)), iVar3 != 0)
         )) {
    (**(code **)*puVar2)(param_1);
    puVar2 = (undefined4 *)UTIL_FindEntityByClassname((int)puVar2,s_func_door_rotating_10092988);
  }
  if (((*this == (CTSGameRules)0x3) || (*this == (CTSGameRules)0x2)) || (_DAT_10093ce8 != 0.0)) {
    this_00 = (CTSGroundWeapon *)UTIL_FindEntityByClassname((int)puVar2,s_ts_groundweapon_10098294);
    while (((this_00 != (CTSGroundWeapon *)0x0 &&
            (peVar1 = this_00->pev->pContainingEntity, peVar1 != (edict_t *)0x0)) &&
           (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1), iVar3 != 0))) {
      CTSGroundWeapon::Fall(this_00);
      this_00 = (CTSGroundWeapon *)
                UTIL_FindEntityByClassname((int)this_00,s_ts_groundweapon_10098294);
    }
    if (_DAT_10093ce8 != 0.0) {
      this_01 = (CTSPowerUp *)UTIL_FindEntityByClassname((int)this_00,s_ts_powerup_10098278);
      while (((this_01 != (CTSPowerUp *)0x0 &&
              (peVar1 = this_01->pev->pContainingEntity, peVar1 != (edict_t *)0x0)) &&
             (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1), iVar3 != 0))) {
        CTSPowerUp::Fall(this_01);
        this_01 = (CTSPowerUp *)UTIL_FindEntityByClassname((int)this_01,s_ts_powerup_10098278);
      }
    }
  }
  return;
}

/* 100445d0  CTSGameRules::RestartRound  (572 bytes)
 * undefined RestartRound(char * param_1)
 * called by: GameDLLInit
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CTSGameRules::RestartRound(char *param_1)

{
  float fVar1;
  float fVar2;
  CBasePlayer *this;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  
  if (_DAT_10093bbc <= 30.0) {
    fVar2 = 30.0;
  }
  else {
    fVar2 = _DAT_10093bbc;
    if (180.0 <= _DAT_10093bbc) {
      fVar2 = 180.0;
    }
  }
  fVar1 = gpGlobals->time;
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  *(float *)(param_1 + 8) = fVar2 + fVar1;
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc70,(float *)0x0,(edict_t *)0x0);
  lVar6 = __ftol();
  (*g_engfuncs.pfnWriteByte)((int)lVar6);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  if (*param_1 == '\x02') {
    iVar5 = *(int *)(param_1 + 0x2cc);
    *(int *)(param_1 + 0x2cc) = iVar5 + 1;
    if (2 < iVar5 + 1) {
      param_1[0x2cc] = '\0';
      param_1[0x2cd] = '\0';
      param_1[0x2ce] = '\0';
      param_1[0x2cf] = '\0';
      *(uint *)(param_1 + 0x2d0) = (uint)(*(int *)(param_1 + 0x2d0) == 0);
    }
  }
  else {
    param_1[0x2d0] = '\0';
    param_1[0x2d1] = '\0';
    param_1[0x2d2] = '\0';
    param_1[0x2d3] = '\0';
  }
  FUN_100449b0(param_1);
  FUN_10045150(param_1);
  if (*param_1 == '\x02') {
    TSHudMessageAll(0,0,0,1,0x1e,s_Defeat_the_opposite_team_100982a4);
  }
  iVar5 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      this = (CBasePlayer *)UTIL_PlayerByIndex(iVar5);
      if ((this != (CBasePlayer *)0x0) && (iVar3 = (*this->vtable[0x2a])(), iVar3 != 0)) {
        if ((*param_1 == '\x02') || (*param_1 == '\x03')) {
          iVar3 = FUN_100458b0(param_1,(int)this);
          if (*(int *)&this->field_0x4b8 < iVar3) {
            uVar4 = FUN_100458b0(param_1,(int)this);
            *(undefined4 *)&this->field_0x4b8 = uVar4;
          }
          if ((DAT_100b1d8c != '\0') || (*param_1 == '\x02')) {
            fVar2 = gpGlobals->time;
            goto LAB_1004475a;
          }
        }
        else {
          fVar2 = gpGlobals->time;
LAB_1004475a:
          *(float *)&this->field_0x734 = fVar2 + 25.0;
        }
        fVar2 = gpGlobals->time;
        this->field_0x6c4 = 0xb;
        this->field_0x68c = 0;
        this->field_0x732 = 0;
        *(undefined4 *)&this->field_0x6a4 = 0;
        *(undefined4 *)&this->field_0x6a8 = 0;
        *(undefined4 *)&this->field_0x69c = 0;
        *(float *)&this->field_0x6e8 = fVar2 + 3.0;
        *(undefined4 *)&this->field_0x6a0 = 0;
        if (this->pev->iuser1 == 0) {
          FUN_1000a540(&stack0xfffffff0,this->pev->origin);
          CBasePlayer::StartObserver(this);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= gpGlobals->maxClients);
  }
  FUN_10039730(DAT_1009f494,'\0');
  RespawnEntities((CTSGameRules *)param_1,1);
  return;
}

/* 10044ba0  CTSGameRules::ResetRestartRound  (340 bytes)
 * undefined ResetRestartRound(int param_1)
 * called by: GameDLLInit
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CTSGameRules::ResetRestartRound(CTSGameRules *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  int in_stack_0000001c;
  
  if (((*this == (CTSGameRules)0x3) || (*this == (CTSGameRules)0x2)) || (_DAT_10093ce8 != 0.0)) {
    fVar1 = gpGlobals->time;
    *(undefined4 *)(this + 8) = 0;
    *(float *)(this + 0xc) = fVar1 + 3.0;
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc70,(float *)0x0,(edict_t *)0x0);
    lVar2 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar2);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnMessageEnd)();
    if (1 < in_stack_0000001c) {
      lVar2 = __ftol();
      *(int *)(this + 0x78) = (int)lVar2;
      lVar2 = __ftol();
      *(int *)(this + 0x7c) = (int)lVar2;
      *(undefined4 *)(this + 0x84) = 0;
      *(undefined4 *)(this + 0x88) = 0;
      *(undefined4 *)(this + 0x8c) = 0;
      *(undefined4 *)(this + 0x90) = 0;
      (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbbfc,(float *)0x0,(edict_t *)0x0);
      (*g_engfuncs.pfnWriteString)(s_Specialists_10097488);
      (*g_engfuncs.pfnWriteShort)(*(int *)(this + 0x8c));
      (*g_engfuncs.pfnWriteShort)(0);
      (*g_engfuncs.pfnMessageEnd)();
      (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbbfc,(float *)0x0,(edict_t *)0x0);
      (*g_engfuncs.pfnWriteString)(s_Mercenary_1009747c);
      (*g_engfuncs.pfnWriteShort)(*(int *)(this + 0x90));
      (*g_engfuncs.pfnWriteShort)(0);
      (*g_engfuncs.pfnMessageEnd)();
    }
    TSHudMessageAll(0,0,0,1,0x1e,s_Restarting_Round_1009830c);
  }
  return;
}

/* 10044d00  CTSGameRules::TeamWin  (1000 bytes)
 * undefined TeamWin(int param_1)
 * called by: CTSGameRules::CheckDeads, CTSGameRules::RoundTimeLeft, CTSWinGiver::Use, GameDLLInit
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CTSGameRules::TeamWin(CTSGameRules *this,int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  byte_conflict *pbVar4;
  void *this_00;
  uint uVar5;
  longlong lVar6;
  int in_stack_0000001c;
  int iStack00000024;
  undefined4 uStack00000040;
  
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc70,(float *)0x0,(edict_t *)0x0);
  lVar6 = __ftol();
  (*g_engfuncs.pfnWriteByte)((int)lVar6);
  (*g_engfuncs.pfnWriteByte)(2);
  (*g_engfuncs.pfnMessageEnd)();
  fVar1 = gpGlobals->time;
  *(undefined4 *)(this + 8) = 0;
  *(float *)(this + 0xc) = fVar1 + 3.0;
  iVar2 = FUN_10045d80();
  if (iVar2 < 2) {
    lVar6 = __ftol();
    *(int *)(this + 0x78) = (int)lVar6;
    lVar6 = __ftol();
    *(int *)(this + 0x7c) = (int)lVar6;
    *(undefined4 *)(this + 0x84) = 0;
    *(undefined4 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x8c) = 0;
    *(undefined4 *)(this + 0x90) = 0;
    if (in_stack_0000001c == 0) {
      param_1 = (int)s_Specialists_Win_10098354;
    }
    else if (in_stack_0000001c == 1) {
      param_1 = (int)s_Mercenaries_Win_10098344;
    }
    else {
      param_1 = (int)s_Game_Draw_10098338;
    }
    TSHudMessageAll(0,0,0,1,0x1e,(char *)param_1);
    param_1 = (int)s_Waiting_other_players__10098320;
  }
  else {
    if (in_stack_0000001c == 0) {
      lVar6 = __ftol();
      *(int *)(this + 0x78) = (int)lVar6;
      lVar6 = __ftol();
      *(int *)(this + 0x7c) = (int)lVar6;
      *(int *)(this + 0x8c) = *(int *)(this + 0x8c) + 1;
    }
    else if (in_stack_0000001c == 1) {
      lVar6 = __ftol();
      *(int *)(this + 0x7c) = (int)lVar6;
      lVar6 = __ftol();
      *(int *)(this + 0x78) = (int)lVar6;
      *(int *)(this + 0x90) = *(int *)(this + 0x90) + 1;
    }
    else {
      lVar6 = __ftol();
      *(int *)(this + 0x78) = (int)lVar6;
      lVar6 = __ftol();
      *(int *)(this + 0x7c) = (int)lVar6;
    }
    iStack00000024 = 1;
    if (0 < gpGlobals->maxClients) {
      do {
        piVar3 = (int *)UTIL_PlayerByIndex(iStack00000024);
        if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0xa8))(), iVar2 != 0)) {
          if (in_stack_0000001c == 2) {
            uVar5 = 1;
          }
          else {
            pbVar4 = (byte_conflict *)(**(code **)(*piVar3 + 0xb0))();
            uVar5 = FUN_1007e860(this_00,pbVar4,(byte_conflict *)s_Specialists_10097488);
            if (uVar5 == 0) {
              uVar5 = (uint)(in_stack_0000001c != 0);
            }
            else {
              uVar5 = (uint)(in_stack_0000001c != 1);
            }
          }
          (*g_engfuncs.pfnMessageBegin)
                    (1,DAT_100cbca8,(float *)0x0,*(edict_t **)(piVar3[1] + 0x208));
          (*g_engfuncs.pfnWriteByte)(uVar5);
          (*g_engfuncs.pfnMessageEnd)();
        }
        iStack00000024 = iStack00000024 + 1;
      } while (iStack00000024 <= gpGlobals->maxClients);
    }
    if (in_stack_0000001c == 0) {
      param_1 = (int)s_Specialists_Win_10098354;
    }
    else if (in_stack_0000001c == 1) {
      param_1 = (int)s_Mercenaries_Win_10098344;
    }
    else {
      param_1 = (int)s_Game_Draw_10098338;
    }
  }
  TSHudMessageAll(0,0,0,1,0x1e,(char *)param_1);
  if ((*this == (CTSGameRules)0x3) || (*this == (CTSGameRules)0x2)) {
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbbfc,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteString)(s_Specialists_10097488);
    (*g_engfuncs.pfnWriteShort)(*(int *)(this + 0x8c));
    (*g_engfuncs.pfnWriteShort)(0);
    (*g_engfuncs.pfnMessageEnd)();
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbbfc,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteString)(s_Mercenary_1009747c);
    (*g_engfuncs.pfnWriteShort)(*(int *)(this + 0x90));
    (*g_engfuncs.pfnWriteShort)(0);
    uStack00000040 = 0x100450e2;
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 100450f0  CTSGameRules::RoundTimeLeft  (93 bytes)
 * undefined RoundTimeLeft(void * param_1)
 * called by: CTSBomb::WaitThink, GameDLLInit
 */
void __fastcall CTSGameRules::RoundTimeLeft(void *param_1)

{
  int iVar1;
  
  if (*(float *)((int)param_1 + 8) != 0.0) {
    iVar1 = *(int *)((int)param_1 + 0x19c);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x84) != 0)) {
      FireTargets((int)(gpGlobals->pStringBase + *(int *)(iVar1 + 0x84)),iVar1,iVar1,3,0);
      return;
    }
    __ftol();
    TeamWin(param_1,2);
  }
  return;
}

/* 10045940  CTSGameRules::CheckDeads  (1083 bytes)
 * undefined CheckDeads(char * param_1)
 * called by: GameDLLInit
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CTSGameRules::CheckDeads(char *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  byte_conflict *pbVar6;
  uint uVar7;
  void *this;
  void *this_00;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  int local_4;
  
  iVar8 = 0;
  param_1[0x54d4] = '\0';
  param_1[0x54d5] = '\0';
  param_1[0x54d6] = '\0';
  param_1[0x54d7] = '\0';
  if ((*(float *)(param_1 + 0xc) == 0.0) && (cVar1 = *param_1, cVar1 != '\x01')) {
    if ((cVar1 == '\0') && (_DAT_10093ce8 != 0.0)) {
      iVar9 = 1;
      piVar10 = (int *)0x0;
      local_4 = 0;
      if (0 < gpGlobals->maxClients) {
        do {
          piVar3 = (int *)UTIL_PlayerByIndex(iVar9);
          if ((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0xa8))(), iVar4 != 0)) {
            local_4 = local_4 + 1;
            iVar4 = (**(code **)(*piVar3 + 0x94))();
            if ((iVar4 != 0) || (0.0 <= (float)piVar3[0x1ba])) {
              iVar8 = iVar8 + 1;
              piVar10 = piVar3;
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 <= gpGlobals->maxClients);
        if (iVar8 == 1) {
          if (local_4 < 2) {
            TSHudMessageAll(0,0xff,0,1,0x1e,s_Waiting_other_players_10098400);
          }
          else {
            pcVar5 = UTIL_VarArgs((byte_conflict *)s__s_is_the_Last_Man_Standing___i_f_100983d8);
            TSHudMessageAll(0,0xff,0,1,0x1e,pcVar5);
            *(float *)(piVar10[1] + 0x164) = *(float *)(piVar10[1] + 0x164) + 10.0;
            (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbbf4,(float *)0x0,(edict_t *)0x0);
            iVar8 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(piVar10[1] + 0x208));
            (*g_engfuncs.pfnWriteByte)(iVar8);
            lVar11 = __ftol();
            (*g_engfuncs.pfnWriteShort)((int)lVar11);
            (*g_engfuncs.pfnWriteShort)(piVar10[0x2a2]);
            (*g_engfuncs.pfnWriteShort)(0);
            iVar8 = (**(code **)(*DAT_1009f494 + 0xcc))();
            (*g_engfuncs.pfnWriteShort)(iVar8 + 1);
            (*g_engfuncs.pfnMessageEnd)();
          }
          *(float *)(param_1 + 0xc) = gpGlobals->time + 3.0;
          (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc70,(float *)0x0,(edict_t *)0x0);
          lVar11 = __ftol();
          (*g_engfuncs.pfnWriteByte)((int)lVar11);
          (*g_engfuncs.pfnWriteByte)(2);
                    /* WARNING: Could not recover jumptable at 0x10045b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*g_engfuncs.pfnMessageEnd)();
          return;
        }
      }
      if ((*(float *)(param_1 + 8) < gpGlobals->time) || (local_4 < 2)) {
        TSHudMessageAll(0,0xff,0,1,0x1e,s_Round_over_100983cc);
        *(float *)(param_1 + 0xc) = gpGlobals->time + 3.0;
        return;
      }
    }
    else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
      iVar9 = 1;
      bVar2 = false;
      if (0 < gpGlobals->maxClients) {
        do {
          piVar10 = (int *)UTIL_PlayerByIndex(iVar9);
          if (((piVar10 != (int *)0x0) && (iVar4 = (**(code **)(*piVar10 + 0xa8))(), iVar4 != 0)) &&
             ((iVar4 = (**(code **)(*piVar10 + 0x94))(), iVar4 != 0 ||
              (0.0 <= (float)piVar10[0x1ba])))) {
            pbVar6 = (byte_conflict *)(**(code **)(*piVar10 + 0xb0))();
            uVar7 = FUN_1007e860(this,(byte_conflict *)s_Mercenary_1009747c,pbVar6);
            if (uVar7 == 0) {
              bVar2 = true;
            }
            else {
              pbVar6 = (byte_conflict *)(**(code **)(*piVar10 + 0xb0))();
              uVar7 = FUN_1007e860(this_00,(byte_conflict *)s_Specialists_10097488,pbVar6);
              if (uVar7 == 0) {
                iVar8 = 1;
              }
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 <= gpGlobals->maxClients);
      }
      if (*param_1 == '\x03') {
        if (bVar2) {
          if ((iVar8 == 0) && (iVar8 = *(int *)(param_1 + 0x19c), iVar8 != 0)) {
            FireTargets((int)(gpGlobals->pStringBase + *(int *)(iVar8 + 0x88)),iVar8,iVar8,3,0);
            return;
          }
        }
        else {
          if (iVar8 == 0) {
            __ftol();
            TeamWin((CTSGameRules *)param_1,2);
            return;
          }
          iVar8 = *(int *)(param_1 + 0x19c);
          if (iVar8 != 0) {
            FireTargets((int)(gpGlobals->pStringBase + *(int *)(iVar8 + 0x8c)),iVar8,iVar8,3,0);
            return;
          }
        }
      }
      else {
        if (!bVar2) {
          __ftol();
          if (iVar8 != 0) {
            __ftol();
            TeamWin((CTSGameRules *)param_1,0);
            return;
          }
          TeamWin((CTSGameRules *)param_1,2);
          return;
        }
        if (iVar8 == 0) {
          __ftol();
          __ftol();
          TeamWin((CTSGameRules *)param_1,1);
        }
      }
    }
  }
  return;
}

/* 10045df0  CTSGameRules::PlayerVote  (857 bytes)
 * undefined4 PlayerVote(int param_1, uint * param_2)
 * called by: Host_Say
 */
undefined4 __thiscall CTSGameRules::PlayerVote(CTSGameRules *this,int param_1,uint *param_2)

{
  CTSGameRules CVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  undefined *puVar5;
  char *pcVar6;
  uint uVar7;
  CTSGameRules *pCVar8;
  int iVar9;
  uint uVar10;
  void *this_00;
  void *pvVar11;
  void *this_01;
  void *extraout_ECX;
  int iVar12;
  CTSGameRules *pCVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  CTSGameRules local_100 [256];
  
  local_100[0] = (CTSGameRules)0x0;
  iVar3 = (*g_engfuncs.pfnIndexOfEdict)((edict_t *)param_1);
  iVar12 = param_1 + 0x80;
  if (((iVar12 != 0) && (-1 < iVar3)) && (iVar3 < 0x20)) {
    puVar4 = FUN_1006ead0(param_2,s_reset_100984b0);
    if (puVar4 != (uint *)0x0) {
      pCVar13 = this + iVar3 * 0x48 + 0x2d4;
      for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined4 *)pCVar13 = 0;
        pCVar13 = pCVar13 + 4;
      }
      *(int *)(this + (iVar3 * 9 + 99) * 8) = iVar3 + 1;
      FUN_100675b0(iVar12,3,s_Your_votes_are_resetted__10098494,0,0,0,0);
      return 1;
    }
    puVar4 = FUN_1006ead0(param_2,s_stats_1009848c);
    if (puVar4 != (uint *)0x0) {
      CalcMiniminVotants(*(int *)(this + 0x1470));
      pCVar13 = this + 0xbd8;
      bVar14 = true;
      iVar3 = 0x20;
      do {
        if (*pCVar13 != (CTSGameRules)0x0) {
          iVar17 = 0;
          iVar16 = 0;
          iVar15 = 0;
          iVar9 = 0;
          puVar5 = UTIL_VarArgs((byte_conflict *)s___i__i__votes_for__s_10098474);
          FUN_100675b0(iVar12,3,puVar5,iVar9,iVar15,iVar16,iVar17);
          bVar14 = false;
        }
        pCVar13 = pCVar13 + 0x40;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (bVar14) {
        FUN_100675b0(iVar12,3,s_No_votes_in_progress__1009845c,0,0,0,0);
      }
      return 1;
    }
    puVar4 = FUN_1006ead0(param_2,&DAT_10097a54);
    if (puVar4 != (uint *)0x0) {
      pcVar6 = (char *)((int)puVar4 + 3);
      iVar9 = -(int)pcVar6;
      do {
        cVar2 = *pcVar6;
        pcVar6[(int)(local_100 + iVar9)] = cVar2;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      uVar10 = 0xffffffff;
      iVar9 = 0;
      pCVar13 = local_100;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        CVar1 = *pCVar13;
        pCVar13 = pCVar13 + 1;
      } while (CVar1 != (CTSGameRules)0x0);
      if (0 < (int)(~uVar10 - 1)) {
        do {
          uVar7 = FUN_1006e879((void *)(int)(char)local_100[iVar9],(int)(char)local_100[iVar9]);
          if (uVar7 != 0) {
            uVar7 = FUN_1006e7fb(this_00,(int)(char)local_100[iVar9]);
            if (uVar7 == 0) break;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)(~uVar10 - 1));
      }
      pCVar13 = local_100 + iVar9;
      iVar9 = -(int)pCVar13;
      do {
        CVar1 = *pCVar13;
        pCVar13[(int)(local_100 + iVar9)] = CVar1;
        pCVar13 = pCVar13 + 1;
      } while (CVar1 != (CTSGameRules)0x0);
      uVar10 = 0xffffffff;
      iVar9 = 0;
      pCVar13 = local_100;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        CVar1 = *pCVar13;
        pCVar13 = pCVar13 + 1;
      } while (CVar1 != (CTSGameRules)0x0);
      pvVar11 = (void *)(~uVar10 - 1);
      this_01 = pvVar11;
      if (0 < (int)pvVar11) {
        while( true ) {
          uVar10 = FUN_1006e879(this_01,(int)(char)local_100[iVar9]);
          if (uVar10 == 0) break;
          uVar10 = FUN_1006e7fb((void *)(int)(char)local_100[iVar9],(int)(char)local_100[iVar9]);
          if ((uVar10 != 0) || (iVar9 = iVar9 + 1, this_01 = extraout_ECX, (int)pvVar11 <= iVar9))
          break;
        }
      }
      local_100[iVar9] = (CTSGameRules)0x0;
      pCVar13 = local_100;
      pCVar8 = (CTSGameRules *)(gpGlobals->pStringBase + gpGlobals->mapname);
      do {
        CVar1 = *pCVar13;
        bVar14 = (byte)CVar1 < (byte)*pCVar8;
        if (CVar1 != *pCVar8) {
LAB_1004603b:
          iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_10046040;
        }
        if (CVar1 == (CTSGameRules)0x0) break;
        CVar1 = pCVar13[1];
        bVar14 = (byte)CVar1 < (byte)pCVar8[1];
        if (CVar1 != pCVar8[1]) goto LAB_1004603b;
        pCVar13 = pCVar13 + 2;
        pCVar8 = pCVar8 + 2;
      } while (CVar1 != (CTSGameRules)0x0);
      iVar9 = 0;
LAB_10046040:
      if (iVar9 == 0) {
        iVar3 = iVar9;
        iVar15 = iVar9;
        iVar16 = iVar9;
        puVar5 = UTIL_VarArgs((byte_conflict *)s__s_is_the_current_map__10098444);
        FUN_100675b0(iVar12,3,puVar5,iVar9,iVar3,iVar15,iVar16);
        return 1;
      }
      iVar9 = (*g_engfuncs.pfnIsMapValid)((char *)local_100);
      if (iVar9 != 0) {
        pCVar13 = local_100;
        do {
          CVar1 = *pCVar13;
          (this + (iVar3 * 0x48 - (int)local_100) + 0x2d4)[(int)pCVar13] = CVar1;
          pCVar13 = pCVar13 + 1;
        } while (CVar1 != (CTSGameRules)0x0);
        iVar15 = 0;
        iVar9 = 0;
        iVar12 = 0;
        iVar3 = 0;
        puVar5 = UTIL_VarArgs((byte_conflict *)s__s_vote_for_map__s_10098430);
        UTIL_ClientPrintAll(3,puVar5,iVar3,iVar12,iVar9,iVar15);
        return 1;
      }
      iVar16 = 0;
      iVar15 = 0;
      iVar9 = 0;
      iVar3 = 0;
      puVar5 = UTIL_VarArgs((byte_conflict *)s__s_is_an_invalid_map_10098418);
      FUN_100675b0(iVar12,3,puVar5,iVar3,iVar9,iVar15,iVar16);
      return 1;
    }
  }
  return 0;
}

/* 10046150  CTSGameRules::CheckVotes  (1202 bytes)
 * undefined CheckVotes(int param_1)
 * called by: GameDLLInit
 */
void __fastcall CTSGameRules::CheckVotes(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int *piVar8;
  char *pcVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  int iVar12;
  bool bVar13;
  float10 fVar14;
  int iStack_24;
  int local_20;
  int local_18;
  int iStack_14;
  byte *pbStack_10;
  byte *pbStack_c;
  int local_8;
  
  if (*(float *)(param_1 + 0xbd4) <= gpGlobals->time) {
    local_18 = -1;
    *(float *)(param_1 + 0xbd4) = gpGlobals->time + 10.0;
    puVar11 = (undefined4 *)(param_1 + 0xbd8);
    for (iVar5 = 0x227; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    local_8 = 0;
    local_20 = 0;
    piVar3 = (int *)UTIL_FindEntityByClassname(0,s_player_100915d0);
    while (((piVar3 != (int *)0x0 && (*(edict_t **)(piVar3[1] + 0x208) != (edict_t *)0x0)) &&
           (iVar5 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar3[1] + 0x208)),
           iVar5 != 0))) {
      if (((piVar3[1] != 0) && (iVar5 = (**(code **)(*piVar3 + 0xac))(), iVar5 != 0)) &&
         ((iStack_24 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(piVar3[1] + 0x208)),
          -1 < iStack_24 && (iStack_24 < 0x20)))) {
        local_8 = local_8 + 1;
        iVar5 = param_1 + iStack_24 * 0x48;
        if (*(char *)(iVar5 + 0x314) == '\x01') {
          *(int *)(param_1 + 0x1458) = *(int *)(param_1 + 0x1458) + 1;
        }
        else if (*(char *)(iVar5 + 0x314) == '\x02') {
          *(int *)(param_1 + 0x145c) = *(int *)(param_1 + 0x145c) + 1;
        }
        if (*(char *)(iVar5 + 0x316) == '\x01') {
          *(int *)(param_1 + 0x1468) = *(int *)(param_1 + 0x1468) + 1;
        }
        else if (*(char *)(iVar5 + 0x316) == '\x02') {
          *(int *)(param_1 + 0x146c) = *(int *)(param_1 + 0x146c) + 1;
        }
        if (*(char *)(iVar5 + 0x315) == '\x01') {
          *(int *)(param_1 + 0x1460) = *(int *)(param_1 + 0x1460) + 1;
        }
        else if (*(char *)(iVar5 + 0x315) == '\x02') {
          *(int *)(param_1 + 0x1464) = *(int *)(param_1 + 0x1464) + 1;
        }
        pbStack_c = (byte *)(iVar5 + 0x2d4);
        if (*(char *)(iVar5 + 0x2d4) != '\0') {
          pbStack_10 = (byte *)(param_1 + 0xbd8);
          iStack_14 = 0;
          bVar7 = false;
          piVar8 = (int *)(param_1 + 0x13d8);
          do {
            pbVar4 = pbStack_10;
            pbVar10 = pbStack_c;
            if (bVar7) goto LAB_100463b9;
            do {
              bVar1 = *pbVar4;
              bVar13 = bVar1 < *pbVar10;
              if (bVar1 != *pbVar10) {
LAB_10046304:
                iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_10046309;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar13 = bVar1 < pbVar10[1];
              if (bVar1 != pbVar10[1]) goto LAB_10046304;
              pbVar4 = pbVar4 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_10046309:
            if (iVar5 == 0) {
              iVar5 = *piVar8 + 1;
              *piVar8 = iVar5;
              bVar7 = true;
              if (local_20 < iVar5) {
                local_18 = iStack_14;
                local_20 = iVar5;
              }
            }
            iStack_14 = iStack_14 + 1;
            piVar8 = piVar8 + 1;
            pbStack_10 = pbStack_10 + 0x40;
          } while (iStack_14 < 0x20);
          if (!bVar7) {
            iVar12 = 0;
            piVar8 = (int *)(param_1 + 0x13d8);
            pcVar9 = (char *)(param_1 + 0xbd8);
            iVar5 = (param_1 - (int)pbStack_c) + 0xbd8;
            bVar7 = false;
            do {
              if (bVar7) break;
              pbVar4 = pbStack_c;
              if (*pcVar9 == '\0') {
                do {
                  bVar1 = *pbVar4;
                  pbVar4[iVar5] = bVar1;
                  pbVar4 = pbVar4 + 1;
                } while (bVar1 != 0);
                iVar6 = *piVar8 + 1;
                bVar7 = true;
                *piVar8 = iVar6;
                if (local_20 < iVar6) {
                  local_20 = iVar6;
                  local_18 = iVar12;
                }
              }
              iVar12 = iVar12 + 1;
              piVar8 = piVar8 + 1;
              pcVar9 = pcVar9 + 0x40;
              iVar5 = iVar5 + 0x40;
            } while (iVar12 < 0x20);
          }
        }
      }
LAB_100463b9:
      piVar3 = (int *)UTIL_FindEntityByClassname((int)piVar3,s_player_100915d0);
    }
    *(int *)(param_1 + 0x1470) = local_8;
    iVar5 = CalcMiniminVotants(local_8);
    if (iVar5 <= *(int *)(param_1 + 0x1458)) {
      (*g_engfuncs.pfnCVarSetFloat)(s_mp_slowmatch_1009856c,1.0);
      UTIL_ClientPrintAll(4,s_SlowMatch_enabled__10098558,0,0,0,0);
      *(undefined1 *)(param_1 + 0x314 + (int)pbStack_c * 0x48) = 0;
      return;
    }
    if (iVar5 <= *(int *)(param_1 + 0x145c)) {
      (*g_engfuncs.pfnCVarSetFloat)(s_mp_slowmatch_1009856c,0.0);
      UTIL_ClientPrintAll(4,s_SlowMatch_disabled__10098544,0,0,0,0);
      *(undefined1 *)(param_1 + 0x314 + (int)pbStack_c * 0x48) = 0;
      return;
    }
    if (iVar5 <= *(int *)(param_1 + 0x1468)) {
      (*g_engfuncs.pfnCVarSetFloat)(s_mp_friendlyfire_10091b90,1.0);
      UTIL_ClientPrintAll(4,s_Friendly_fire_enabled__1009852c,0,0,0,0);
      *(undefined1 *)(param_1 + 0x316 + (int)pbStack_c * 0x48) = 0;
      return;
    }
    if (iVar5 <= *(int *)(param_1 + 0x146c)) {
      (*g_engfuncs.pfnCVarSetFloat)(s_mp_friendlyfire_10091b90,0.0);
      UTIL_ClientPrintAll(4,s_Friendly_fire_disabled__10098514,0,0,0,0);
      *(undefined1 *)(param_1 + 0x316 + (int)pbStack_c * 0x48) = 0;
      return;
    }
    if (*(int *)(param_1 + 0x1460) < iVar5) {
      if (*(int *)(param_1 + 0x1464) < iVar5) {
        if ((local_18 != -1) && (iVar5 <= *(int *)(param_1 + 0x13d8 + local_18 * 4))) {
          pcVar9 = (char *)(local_18 * 0x40 + 0xbd8 + param_1);
          iVar5 = param_1 - (int)pcVar9;
          do {
            cVar2 = *pcVar9;
            pcVar9[iVar5 + 0x1474] = cVar2;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x315 + iStack_24 * 0x48) = 0;
        fVar14 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_mp_teamplay_10093ff8);
        if (fVar14 != (float10)0.0) {
          (*g_engfuncs.pfnCVarSetFloat)(s_mp_teamplay_10093ff8,0.0);
          UTIL_ClientPrintAll(4,s_TeamPlay_in_DM_maps_disabled__wa_100984b8,0,0,0,0);
          pcVar9 = s_nextmap_10094c58;
          do {
            cVar2 = *pcVar9;
            pcVar9[param_1 + -0x100937e4] = cVar2;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          return;
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x315 + iStack_24 * 0x48) = 0;
      fVar14 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_mp_teamplay_10093ff8);
      if (fVar14 != (float10)1.0) {
        (*g_engfuncs.pfnCVarSetFloat)(s_mp_teamplay_10093ff8,1.0);
        UTIL_ClientPrintAll(4,s_TeamPlay_in_DM_maps_enabled__wai_100984e8,0,0,0,0);
        pcVar9 = s_nextmap_10094c58;
        do {
          cVar2 = *pcVar9;
          pcVar9[param_1 + -0x100937e4] = cVar2;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        return;
      }
    }
  }
  return;
}

/* 100466e0  CTSGameRules::SelectRandomTheOne  (209 bytes)
 * undefined SelectRandomTheOne(void * param_1)
 * called by: GameDLLInit
 */
void __fastcall CTSGameRules::SelectRandomTheOne(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 auStack_84 [33];
  
  if (*(float *)((int)param_1 + 0x54d0) <= gpGlobals->time) {
    iVar3 = 1;
    iVar4 = 0;
    *(float *)((int)param_1 + 0x54d0) = gpGlobals->time + 10.0;
    if (0 < gpGlobals->maxClients) {
      do {
        piVar1 = (int *)UTIL_PlayerByIndex(iVar3);
        if (piVar1 != (int *)0x0) {
          iVar2 = (**(code **)(*piVar1 + 0xa8))();
          if (iVar2 != 0) {
            iVar2 = (**(code **)(*piVar1 + 0x94))();
            if (((iVar2 != 0) && (*(int *)(piVar1[1] + 0x244) == 0)) && (iVar4 < 0x21)) {
              auStack_84[iVar4] = piVar1;
              iVar4 = iVar4 + 1;
            }
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= gpGlobals->maxClients);
      if (0 < iVar4) {
        iVar3 = (*g_engfuncs.pfnRandomLong)(0,iVar4 + -1);
        piVar1 = (int *)auStack_84[iVar3];
        SetPlayerTheOne(param_1,piVar1);
        (**(code **)(*DAT_1009f494 + 0xdc))(piVar1);
      }
    }
  }
  return;
}

/* 100467c0  CTSGameRules::SetPlayerTheOne  (363 bytes)
 * undefined SetPlayerTheOne(int * param_1)
 * called by: CTSGameRules::SelectRandomTheOne, CTSGameRules::TheOneIsDead
 */
void __thiscall CTSGameRules::SetPlayerTheOne(CTSGameRules *this,int *param_1)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack00000010;
  undefined4 uStack0000002c;
  
  iVar2 = (**(code **)(*param_1 + 0x94))();
  if ((iVar2 != 0) && (*(int *)(param_1[1] + 0x244) == 0)) {
    *(undefined1 *)((int)param_1 + 0x731) = 1;
    *(undefined4 *)(param_1[1] + 0x160) = 0x43160000;
    fVar1 = gpGlobals->time;
    *(undefined1 *)((int)param_1 + 0x6c6) = 1;
    *(undefined1 *)((int)param_1 + 0x6c7) = 1;
    param_1[0x1ad] = (int)(fVar1 + 1.0);
    (*g_engfuncs.pfnSetPhysicsKeyValue)
              (*(edict_t **)(param_1[1] + 0x208),&DAT_10091cdc,&DAT_10091ce0);
    (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc68,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
    (*g_engfuncs.pfnWriteShort)(4);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnMessageEnd)();
    (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc68,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
    (*g_engfuncs.pfnWriteShort)(0x100);
    (*g_engfuncs.pfnWriteByte)(0);
    uStack0000002c = 0x1004689f;
    (*g_engfuncs.pfnMessageEnd)();
    if ((param_1[0x1a7] == 0) && (param_1[0x1a8] == 0)) {
      param_1[0x1a7] = 0;
      param_1[0x1a8] = 8;
      param_1[0x1a9] = 0;
      param_1[0x1aa] = 3;
    }
    *(undefined1 *)(param_1 + 0x1b1) = 10;
    this[0x54ce] = (CTSGameRules)0x1;
    uStack0000002c = 1;
    pcVar3 = UTIL_VarArgs((byte_conflict *)s__s_is_The_One__1009857c);
    uStack00000010 = 0x10046922;
    TSHudMessageAll(100,0x96,0xff,1,0x1e,pcVar3);
  }
  return;
}

/* 10046930  CTSGameRules::TheOneIsDead  (211 bytes)
 * undefined TheOneIsDead(int * param_1, int * param_2)
 * called by: CHalfLifeMultiplay::PlayerKilled
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CTSGameRules::TheOneIsDead(CTSGameRules *this,int *param_1,int *param_2)

{
  char *pcVar1;
  
  this[0x54ce] = (CTSGameRules)0x0;
  if ((param_1 != (int *)0x0) && (*(undefined1 *)((int)param_1 + 0x731) = 0, _DAT_102e00fc != 0.0))
  {
    if ((param_2 != (int *)0x0) && (param_1 != param_2)) {
      pcVar1 = UTIL_VarArgs((byte_conflict *)s_The_One_was_killed_by__s__1009859c);
      TSHudMessageAll(100,0x96,0xff,1,0x1e,pcVar1);
      (**(code **)(*DAT_1009f494 + 0xdc))(param_1);
      SetPlayerTheOne(this,param_2);
      (**(code **)(*DAT_1009f494 + 0xdc))(param_2);
      return;
    }
    TSHudMessageAll(100,0x96,0xff,1,0x1e,s_The_One_is_dead_1009858c);
  }
  return;
}

