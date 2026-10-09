/* ts_i386.so - global_000c5520 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c5520  cmd_addbot  (45 bytes)
 * undefined cmd_addbot(void)
 */
/* cmd_addbot(void) */

void cmd_addbot(void)

{
  (*g_engfuncs.pfnAlertMessage)(at_console,"Bots only in listen servers.\n");
  return;
}

/* 000c5550  cmd_addcustombot  (45 bytes)
 * undefined cmd_addcustombot(void)
 */
/* cmd_addcustombot(void) */

void cmd_addcustombot(void)

{
  (*g_engfuncs.pfnAlertMessage)(at_console,"Bots only in listen servers.\n");
  return;
}

/* 000c5580  cmd_globalslow  (450 bytes)
 * undefined cmd_globalslow(void)
 */
/* cmd_globalslow(void) */

void cmd_globalslow(void)

{
  int iVar1;
  char *pcVar2;
  longdouble lVar3;
  undefined4 in_stack_ffffffdc;
  double dVar4;
  float local_10;
  
  dVar4 = (double)CONCAT44(0xc559d,in_stack_ffffffdc);
  iVar1 = (*g_engfuncs.pfnCmd_Argc)();
  if (iVar1 < 2) {
    if (DAT_00178704 != 0.0) {
      (*g_engfuncs.pfnAlertMessage)
                (at_console,"Globalslow is at %.0f%%.\n",(double)(DAT_00178704 * 100.0));
      return;
    }
  }
  else {
    pcVar2 = (*g_engfuncs.pfnCmd_Argv)(1);
    dVar4 = (double)((ulonglong)dVar4 & 0xffffffff00000000);
    lVar3 = (longdouble)__strtod_internal(pcVar2,0,0);
    local_10 = (float)lVar3 * 0.01;
    if (2.0 < local_10) {
      local_10 = 2.0;
    }
    if (local_10 < 0.0) {
      local_10 = 0.0;
    }
    if ((0.999 < local_10) && (local_10 < 1.001)) {
      local_10 = 0.0;
    }
    if ((0.0 < local_10) && (local_10 < 0.01)) {
      local_10 = 0.01;
    }
    if (local_10 == 0.0) {
      if (local_10 != DAT_00178704) {
        DAT_00178700 = 0;
      }
    }
    else if (local_10 != DAT_00178704) {
      dVar4 = (double)((ulonglong)dVar4 & 0xffffffff00000000);
      CTSGameRules::SetGlobalSlowMotion((CTSGameRules *)&TSGameRules,local_10,0.0);
    }
    if (local_10 != 0.0) {
      dVar4 = (double)(local_10 * 100.0);
      pcVar2 = "Globalslow is at %.0f%%.\n";
      goto LAB_000c5733;
    }
  }
  pcVar2 = "Globalslow is off.\n";
LAB_000c5733:
  (*g_engfuncs.pfnAlertMessage)(at_console,pcVar2,dVar4);
  return;
}

/* 000c5748  cmd_restartround  (37 bytes)
 * undefined cmd_restartround(void)
 */
/* cmd_restartround(void) */

void cmd_restartround(void)

{
  CTSGameRules::ResetRestartRound((CTSGameRules *)&TSGameRules,2);
  return;
}

/* 000c5770  display_weaponrestriction  (301 bytes)
 * undefined display_weaponrestriction(void)
 */
/* display_weaponrestriction(void) */

void display_weaponrestriction(void)

{
  char local_7c [120];
  
  local_7c[0] = '\0';
  if (DAT_0017da10 == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"All weapons are restricted.\n");
  }
  else {
    if ((DAT_0017da10 & 1) != 0) {
      strcat(local_7c,(char *)g_szRestrictions._4_4_);
    }
    if ((DAT_0017da10 & 2) != 0) {
      strcat(local_7c,(char *)g_szRestrictions._8_4_);
    }
    if ((DAT_0017da10 & 4) != 0) {
      strcat(local_7c,(char *)g_szRestrictions._12_4_);
    }
    if ((DAT_0017da10 & 8) != 0) {
      strcat(local_7c,(char *)g_szRestrictions._16_4_);
    }
    if ((DAT_0017da10 & 0x10) != 0) {
      strcat(local_7c,(char *)g_szRestrictions._20_4_);
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,"Weapons allowed: %s\n",local_7c);
  }
  return;
}

/* 000c58a0  cmd_weaponrestriction  (262 bytes)
 * undefined cmd_weaponrestriction(void)
 */
/* cmd_weaponrestriction(void) */

void cmd_weaponrestriction(void)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar2 = (*g_engfuncs.pfnCmd_Argc)();
  uVar1 = DAT_0017da10;
  if (iVar2 < 2) {
    display_weaponrestriction();
  }
  else {
    pcVar3 = (*g_engfuncs.pfnCmd_Argv)(1);
    iVar2 = __strtol_internal(pcVar3,0,10,0);
    if (iVar2 == 5) {
      DAT_0017da10 = InitWeaponRestriction();
    }
    else {
      pcVar3 = (*g_engfuncs.pfnCmd_Argv)(1);
      uVar4 = __strtol_internal(pcVar3,0,10,0);
      uVar5 = WeaponRestrictionByID(uVar4);
      DAT_0017da10 = uVar5 & DAT_0017da0c;
    }
    if (DAT_0017da10 != uVar1) {
      (*g_engfuncs.pfnMessageBegin)(2,gmsgTSServerSetting,(float *)0x0,(edict_t *)0x0);
      (*g_engfuncs.pfnWriteByte)(3);
      (*g_engfuncs.pfnWriteShort)(DAT_0017da10);
      (*g_engfuncs.pfnMessageEnd)();
    }
    display_weaponrestriction();
  }
  return;
}

/* 000c59ac  cmd_loadweapons  (122 bytes)
 * undefined cmd_loadweapons(void)
 */
/* cmd_loadweapons(void) */

void cmd_loadweapons(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  iVar1 = (*g_engfuncs.pfnCmd_Argc)();
  if (iVar1 < 2) {
    pcVar2 = "ERROR: specify a file!; example: \"loadweapons weapons.txt\"\n";
  }
  else {
    pcVar2 = (*g_engfuncs.pfnCmd_Argv)(1);
    uVar3 = adjust_weapon_value(pcVar2);
    if ((char)uVar3 != '\0') {
      InformClientsOnWeaponsParams((int *)0x0);
      return;
    }
    pcVar2 = "ERROR: file doesn\'t exist!\n";
  }
  (*g_engfuncs.pfnAlertMessage)(at_console,pcVar2);
  return;
}

/* 000c5a2c  cmd_saveweapons  (113 bytes)
 * undefined cmd_saveweapons(void)
 */
/* cmd_saveweapons(void) */

void cmd_saveweapons(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  iVar1 = (*g_engfuncs.pfnCmd_Argc)();
  if (iVar1 < 2) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,"ERROR: specify a file!; example: \"saveweapons weapons.txt\"\n");
  }
  else {
    pcVar2 = (*g_engfuncs.pfnCmd_Argv)(1);
    uVar3 = save_weapon_value(pcVar2);
    if ((char)uVar3 == '\0') {
      (*g_engfuncs.pfnAlertMessage)(at_console,"ERROR: unable to save!\n");
    }
  }
  return;
}

/* 000c5aa0  GameDLLInit  (822 bytes)
 * void GameDLLInit(void)
 */
/* GameDLLInit(void) */

void GameDLLInit(void)

{
  (*g_engfuncs.pfnAddServerCommand)("addbot",cmd_addbot);
  (*g_engfuncs.pfnAddServerCommand)("addcustombot",cmd_addcustombot);
  (*g_engfuncs.pfnAddServerCommand)("globalslow",cmd_globalslow);
  (*g_engfuncs.pfnAddServerCommand)("restartround",cmd_restartround);
  (*g_engfuncs.pfnAddServerCommand)("weaponrestriction",cmd_weaponrestriction);
  (*g_engfuncs.pfnAddServerCommand)("loadweapons",cmd_loadweapons);
  (*g_engfuncs.pfnAddServerCommand)("saveweapons",cmd_saveweapons);
  g_psv_gravity = (*g_engfuncs.pfnCVarGetPointer)("sv_gravity");
  g_psv_aim = (*g_engfuncs.pfnCVarGetPointer)("sv_aim");
  g_footsteps = (*g_engfuncs.pfnCVarGetPointer)("mp_footsteps");
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)displaysoundlist);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)teamplay);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)fraglimit);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)timelimit);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)fragsleft);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)timeleft);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)friendlyfire);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)falldamage);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)weaponstay);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)forcerespawn);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)aimcrosshair);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)decalfrequency);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)teamlist);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)teammodels);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)teamoverride);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)defaultteam);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)allowmonsters);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)mp_chattime);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)roundtime);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)respawntime);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)damagemult);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)slowmatch);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)botlearn);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)nopowerup);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)realbullet);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)dmcashbased);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)cv_ammocount);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)bottalk);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)weaponstay_time);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)mp_theonemode);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)mp_theone);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)mp_theothers);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)lastmanstanding);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)spectacularness);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)customweapons);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)banfortk);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)botarmor);
  (*g_engfuncs.pfnServerCommand)("exec skill.cfg\n");
  return;
}

/* 000c6050  InstallGameRules  (349 bytes)
 * CHalfLifeRules * InstallGameRules(void)
 */
/* InstallGameRules(void) */

CHalfLifeRules * InstallGameRules(void)

{
  CHalfLifeRules *this;
  
  (*g_engfuncs.pfnServerCommand)("exec game.cfg\n");
  (*g_engfuncs.pfnServerExecute)();
  if (gpGlobals->deathmatch == 0.0) {
    g_teamplay = 0;
    this = (CHalfLifeRules *)__builtin_new(4);
    CHalfLifeRules::CHalfLifeRules(this);
  }
  else {
    g_teamplay = DecideGamePlay(gpGlobals->pStringBase + gpGlobals->mapname,
                                (int)ROUND((float)teamplay._12_4_));
    if (g_teamplay < 1) {
      if ((int)ROUND(gpGlobals->deathmatch) == 1) {
        g_teamplay = 0;
        this = (CHalfLifeRules *)__builtin_new(0xc);
        CHalfLifeMultiplay::CHalfLifeMultiplay((CHalfLifeMultiplay *)this);
      }
      else {
        g_teamplay = 0;
        this = (CHalfLifeRules *)__builtin_new(0xc);
        CHalfLifeMultiplay::CHalfLifeMultiplay((CHalfLifeMultiplay *)this);
      }
    }
    else {
      this = (CHalfLifeRules *)__builtin_new(0x218);
      CHalfLifeTeamplay::CHalfLifeTeamplay((CHalfLifeTeamplay *)this);
    }
  }
  return this;
}

/* 000c6268  CGameRules_type_info_function  (57 bytes)
 * undefined4 * CGameRules_type_info_function(void)
 */
/* CGameRules type_info function */

undefined4 * CGameRules_type_info_function(void)

{
  if (CGameRules_type_info_node == 0) {
    __rtti_user(&CGameRules_type_info_node,"10CGameRules");
  }
  return &CGameRules_type_info_node;
}

/* 000c635c  gcc2_compiled.  (52 bytes)
 * undefined gcc2_compiled.(int param_1, int param_2)
 * called by: global.constructors.keyed.to.g_vecAttackDir
 */
void gcc2_compiled_(int param_1,int param_2)

{
  if ((param_2 == 0xffff) && (param_1 == 1)) {
    g_vecZero = 0;
    DAT_00190ef0 = 0;
    DAT_00190ef4 = 0;
  }
  return;
}

/* 000c6390  global.constructors.keyed.to.g_vecAttackDir  (19 bytes)
 * undefined global.constructors.keyed.to.g_vecAttackDir(void)
 */
/* global constructors keyed to g_vecAttackDir */

void global_constructors_keyed_to_g_vecAttackDir(void)

{
  gcc2_compiled_(1,0xffff);
  return;
}

/* 000c63a4  FBoxVisible  (450 bytes)
 * undefined4 FBoxVisible(int param_1, int param_2, float * param_3, float param_4)
 */
/* FBoxVisible(entvars_s *, entvars_s *, Vector &, float) */

undefined4 FBoxVisible(int param_1,int param_2,float *param_3,float param_4)

{
  int iVar1;
  float *pfVar2;
  longdouble lVar3;
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_5c [16];
  float local_4c;
  
  if (((*(int *)(param_1 + 0x1c0) == 3) || (*(int *)(param_2 + 0x1c0) != 3)) &&
     ((*(int *)(param_1 + 0x1c0) != 3 || (*(int *)(param_2 + 0x1c0) != 0)))) {
    local_6c = *(float *)(param_1 + 8) + *(float *)(param_1 + 0x174);
    local_68 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x178);
    local_64 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x17c);
    local_80 = 0;
    do {
      local_7c = *(float *)(param_2 + 8);
      local_78 = *(float *)(param_2 + 0xc);
      local_74 = *(float *)(param_2 + 0x10);
      lVar3 = (longdouble)
              (*g_engfuncs.pfnRandomFloat)
                        (param_4 + *(float *)(param_2 + 0xdc),*(float *)(param_2 + 0xe8) - param_4);
      local_7c = (float)(lVar3 + (longdouble)local_7c);
      lVar3 = (longdouble)
              (*g_engfuncs.pfnRandomFloat)
                        (param_4 + *(float *)(param_2 + 0xe0),*(float *)(param_2 + 0xec) - param_4);
      local_78 = (float)(lVar3 + (longdouble)local_78);
      lVar3 = (longdouble)
              (*g_engfuncs.pfnRandomFloat)
                        (param_4 + *(float *)(param_2 + 0xe4),*(float *)(param_2 + 0xf0) - param_4);
      local_74 = (float)(lVar3 + (longdouble)local_74);
      UTIL_TraceLine(&local_6c,&local_7c,1,1,*(undefined4 *)(param_1 + 0x208),local_5c);
      if (local_4c == 1.0) {
        pfVar2 = &local_7c;
        for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
          *param_3 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          param_3 = param_3 + 1;
        }
        return 1;
      }
      local_80 = local_80 + 1;
    } while (local_80 < 5);
  }
  return 0;
}

/* 000c656c  VecCheckToss  (1387 bytes)
 * float * VecCheckToss(float * param_1, int param_2, float * param_3, float * param_4, float param_5)
 */
/* VecCheckToss(entvars_s *, Vector const &, Vector, float) */

float * VecCheckToss(float *param_1,int param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  globalvars_t *pgVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  longdouble lVar6;
  longdouble lVar7;
  float local_dc [4];
  float local_cc;
  float local_c8;
  float local_c4;
  float local_bc [8];
  float local_9c [8];
  float local_7c [4];
  float local_6c [4];
  undefined1 local_5c [16];
  float local_4c;
  float local_48 [14];
  
  fVar1 = param_5 * *(float *)(g_psv_gravity + 0xc);
  if (param_4[2] - param_3[2] <= 500.0) {
    UTIL_MakeVectors(param_2 + 0x50);
    pgVar2 = gpGlobals;
    lVar6 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-8.0,8.0);
    lVar7 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-16.0,16.0);
    lVar7 = (longdouble)(float)lVar6 + lVar7;
    local_cc = (float)(lVar7 * (longdouble)pgVar2->v_right[0]);
    local_c8 = (float)(lVar7 * (longdouble)pgVar2->v_right[1]);
    local_c4 = (float)(lVar7 * (longdouble)pgVar2->v_right[2]);
    local_bc[0] = *param_4 + local_cc;
    local_bc[1] = param_4[1] + local_c8;
    local_bc[2] = param_4[2] + local_c4;
    pfVar4 = local_bc;
    pfVar5 = param_4;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    (*g_engfuncs.pfnRandomFloat)(-8.0,8.0);
    (*g_engfuncs.pfnRandomFloat)(-16.0,16.0);
    pfVar4 = &local_cc;
    pfVar5 = param_4;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    local_bc[0] = (*param_4 - *param_3) * 0.5;
    local_bc[1] = (param_4[1] - param_3[1]) * 0.5;
    local_bc[2] = (param_4[2] - param_3[2]) * 0.5;
    pfVar4 = &local_cc;
    pfVar5 = local_6c;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    local_cc = 0.0;
    local_c4 = 500.0;
    local_dc[0] = local_6c[0] + 0.0;
    local_dc[1] = local_6c[1] + 0.0;
    local_dc[2] = local_6c[2] + 500.0;
    local_c8 = local_cc;
    UTIL_TraceLine(local_6c,local_dc,1,*(undefined4 *)(param_2 + 0x208),local_5c);
    pfVar4 = local_48;
    pfVar5 = local_6c;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    local_6c[2] = local_6c[2] - 15.0;
    if (((param_3[2] <= local_6c[2]) && (param_4[2] <= local_6c[2])) &&
       (local_c4 = SQRT((local_6c[2] - param_3[2]) / (fVar1 * 0.5)), 0.1 <= local_c4)) {
      pfVar4 = local_dc;
      pfVar5 = local_9c;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar5 = pfVar5 + 1;
      }
      local_9c[2] = fVar1 * local_c4;
      local_cc = local_c4 * local_9c[0];
      local_c8 = local_c4 * local_9c[1];
      local_c4 = local_c4 * local_9c[2];
      local_dc[0] = *param_3 + local_cc;
      local_dc[1] = param_3[1] + local_c8;
      local_dc[2] = param_3[2] + local_c4;
      pfVar4 = local_dc;
      pfVar5 = local_7c;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar5 = pfVar5 + 1;
      }
      local_7c[2] = local_6c[2];
      UTIL_TraceLine(param_3,local_7c,0,*(undefined4 *)(param_2 + 0x208),local_5c);
      if ((local_4c == 1.0) &&
         (UTIL_TraceLine(param_4,local_7c,1,*(undefined4 *)(param_2 + 0x208),local_5c),
         local_4c == 1.0)) {
        *param_1 = local_9c[0];
        param_1[1] = local_9c[1];
        param_1[2] = local_9c[2];
        return param_1;
      }
    }
  }
  *param_1 = g_vecZero;
  param_1[1] = DAT_00190ef0;
  param_1[2] = DAT_00190ef4;
  return param_1;
}

/* 000c6ad8  VecCheckThrow  (599 bytes)
 * float * VecCheckThrow(float * param_1, int param_2, float * param_3, float * param_4, float param_5, float param_6)
 */
/* VecCheckThrow(entvars_s *, Vector const &, Vector, float, float) */

float * VecCheckThrow(float *param_1,int param_2,float *param_3,float *param_4,float param_5,
                     float param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 local_ac [16];
  float local_9c;
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c [7];
  float local_30;
  float local_2c [7];
  
  fVar2 = param_6 * *(float *)(g_psv_gravity + 0xc);
  local_2c[0] = *param_4 - *param_3;
  local_2c[1] = param_4[1] - param_3[1];
  local_2c[2] = param_4[2] - param_3[2];
  fVar1 = SQRT(local_2c[2] * local_2c[2] + local_2c[1] * local_2c[1] + local_2c[0] * local_2c[0]) /
          param_5;
  local_30 = 1.0 / fVar1;
  local_4c[0] = local_30 * local_2c[0];
  local_4c[1] = local_30 * local_2c[1];
  local_4c[2] = local_30 * local_2c[2];
  pfVar4 = local_4c;
  pfVar5 = local_2c;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  local_2c[2] = fVar2 * fVar1 * 0.5 + local_2c[2];
  local_6c = *param_4 - *param_3;
  local_68 = param_4[1] - param_3[1];
  local_64 = param_4[2] - param_3[2];
  local_5c = local_6c * 0.5;
  local_58 = local_68 * 0.5;
  local_54 = local_64 * 0.5;
  local_4c[0] = *param_3 + local_5c;
  local_4c[1] = param_3[1] + local_58;
  local_4c[2] = fVar2 * 0.5 * fVar1 * 0.5 * fVar1 * 0.5 + param_3[2] + local_54;
  UTIL_TraceLine(param_3,local_4c,0,*(undefined4 *)(param_2 + 0x208),local_ac);
  if (local_9c == 1.0) {
    UTIL_TraceLine(param_4,local_4c,1,*(undefined4 *)(param_2 + 0x208),local_ac);
    if (local_9c == 1.0) {
      *param_1 = local_2c[0];
      param_1[1] = local_2c[1];
    }
    else {
      *param_1 = g_vecZero;
      param_1[1] = DAT_00190ef0;
      local_2c[2] = DAT_00190ef4;
    }
  }
  else {
    *param_1 = g_vecZero;
    param_1[1] = DAT_00190ef0;
    local_2c[2] = DAT_00190ef4;
  }
  param_1[2] = local_2c[2];
  return param_1;
}

/* 000c6dd8  func_recharge  (33 bytes)
 * undefined func_recharge(uint param_1)
 */
void func_recharge(uint param_1)

{
  GetClassPtr<CRecharge>(param_1);
  return;
}

/* 000c7350  GetClassPtr<CRecharge>  (161 bytes)
 * CRecharge * GetClassPtr<CRecharge>(uint param_1)
 */
/* CRecharge * GetClassPtr<CRecharge>(CRecharge *) */

CRecharge * GetClassPtr<CRecharge>(uint param_1)

{
  edict_t *peVar1;
  CRecharge *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CRecharge *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CRecharge *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x118)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CRecharge_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000c73f4  CRecharge_type_info_function  (70 bytes)
 * undefined4 * CRecharge_type_info_function(void)
 */
/* CRecharge type_info function */

undefined4 * CRecharge_type_info_function(void)

{
  if (CRecharge_type_info_node == 0) {
    CBaseToggle_type_info_function();
    __rtti_si(&CRecharge_type_info_node,"9CRecharge",&CBaseToggle_type_info_node);
  }
  return &CRecharge_type_info_node;
}

/* 000c74e4  cycler  (33 bytes)
 * undefined cycler(uint param_1)
 */
void cycler(uint param_1)

{
  GetClassPtr<CGenericCycler>(param_1);
  return;
}

/* 000c7508  cycler_prdroid  (33 bytes)
 * undefined cycler_prdroid(uint param_1)
 */
void cycler_prdroid(uint param_1)

{
  GetClassPtr<CCyclerProbe>(param_1);
  return;
}

/* 000c793c  cycler_sprite  (33 bytes)
 * undefined cycler_sprite(uint param_1)
 */
void cycler_sprite(uint param_1)

{
  GetClassPtr<CCyclerSprite>(param_1);
  return;
}

/* 000c7c54  cycler_weapon  (33 bytes)
 * undefined cycler_weapon(uint param_1)
 */
void cycler_weapon(uint param_1)

{
  GetClassPtr<CWeaponCycler>(param_1);
  return;
}

/* 000c7fc0  cycler_wreckage  (33 bytes)
 * undefined cycler_wreckage(uint param_1)
 */
void cycler_wreckage(uint param_1)

{
  GetClassPtr<CWreckage>(param_1);
  return;
}

/* 000c82c8  GetClassPtr<CGenericCycler>  (179 bytes)
 * CGenericCycler * GetClassPtr<CGenericCycler>(uint param_1)
 */
/* CGenericCycler * GetClassPtr<CGenericCycler>(CGenericCycler *) */

CGenericCycler * GetClassPtr<CGenericCycler>(uint param_1)

{
  edict_t *peVar1;
  CGenericCycler *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CGenericCycler *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CGenericCycler *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x168)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseMonster_virtual_table;
    pCVar2->vtable = (void **)CCycler_virtual_table;
    pCVar2->vtable = (void **)CGenericCycler_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000c837c  GetClassPtr<CCyclerProbe>  (179 bytes)
 * CCyclerProbe * GetClassPtr<CCyclerProbe>(uint param_1)
 */
/* CCyclerProbe * GetClassPtr<CCyclerProbe>(CCyclerProbe *) */

CCyclerProbe * GetClassPtr<CCyclerProbe>(uint param_1)

{
  edict_t *peVar1;
  CCyclerProbe *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CCyclerProbe *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CCyclerProbe *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x168)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseMonster_virtual_table;
    pCVar2->vtable = (void **)CCycler_virtual_table;
    pCVar2->vtable = (void **)CCyclerProbe_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000c8430  GetClassPtr<CCyclerSprite>  (131 bytes)
 * CCyclerSprite * GetClassPtr<CCyclerSprite>(uint param_1)
 */
/* CCyclerSprite * GetClassPtr<CCyclerSprite>(CCyclerSprite *) */

CCyclerSprite * GetClassPtr<CCyclerSprite>(uint param_1)

{
  edict_t *peVar1;
  CCyclerSprite *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CCyclerSprite *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CCyclerSprite *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x70);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CCyclerSprite_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000c84b4  GetClassPtr<CWeaponCycler>  (170 bytes)
 * CWeaponCycler * GetClassPtr<CWeaponCycler>(uint param_1)
 */
/* CWeaponCycler * GetClassPtr<CWeaponCycler>(CWeaponCycler *) */

CWeaponCycler * GetClassPtr<CWeaponCycler>(uint param_1)

{
  edict_t *peVar1;
  CWeaponCycler *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CWeaponCycler *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CWeaponCycler *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xd0);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBasePlayerItem_virtual_table;
    pCVar2->vtable = (void **)CBasePlayerWeapon_virtual_table;
    pCVar2->vtable = (void **)CWeaponCycler_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000c8560  GetClassPtr<CWreckage>  (170 bytes)
 * CWreckage * GetClassPtr<CWreckage>(uint param_1)
 */
/* CWreckage * GetClassPtr<CWreckage>(CWreckage *) */

CWreckage * GetClassPtr<CWreckage>(uint param_1)

{
  edict_t *peVar1;
  CWreckage *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CWreckage *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CWreckage *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x168)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseMonster_virtual_table;
    pCVar2->vtable = (void **)CWreckage_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000c860c  CCycler_type_info_function  (70 bytes)
 * undefined4 * CCycler_type_info_function(void)
 */
/* CCycler type_info function */

undefined4 * CCycler_type_info_function(void)

{
  if (CCycler_type_info_node == 0) {
    CBaseMonster_type_info_function();
    __rtti_si(&CCycler_type_info_node,"7CCycler",&CBaseMonster_type_info_node);
  }
  return &CCycler_type_info_node;
}

/* 000c8664  CGenericCycler_type_info_function  (70 bytes)
 * undefined4 * CGenericCycler_type_info_function(void)
 */
/* CGenericCycler type_info function */

undefined4 * CGenericCycler_type_info_function(void)

{
  if (CGenericCycler_type_info_node == 0) {
    CCycler_type_info_function();
    __rtti_si(&CGenericCycler_type_info_node,"14CGenericCycler",&CCycler_type_info_node);
  }
  return &CGenericCycler_type_info_node;
}

/* 000c8720  CCyclerProbe_type_info_function  (70 bytes)
 * undefined4 * CCyclerProbe_type_info_function(void)
 */
/* CCyclerProbe type_info function */

undefined4 * CCyclerProbe_type_info_function(void)

{
  if (CCyclerProbe_type_info_node == 0) {
    CCycler_type_info_function();
    __rtti_si(&CCyclerProbe_type_info_node,"12CCyclerProbe",&CCycler_type_info_node);
  }
  return &CCyclerProbe_type_info_node;
}

/* 000c8768  CCyclerSprite_type_info_function  (70 bytes)
 * undefined4 * CCyclerSprite_type_info_function(void)
 */
/* CCyclerSprite type_info function */

undefined4 * CCyclerSprite_type_info_function(void)

{
  if (CCyclerSprite_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CCyclerSprite_type_info_node,"13CCyclerSprite",&CBaseEntity_type_info_node);
  }
  return &CCyclerSprite_type_info_node;
}

/* 000c87f0  CWeaponCycler_type_info_function  (70 bytes)
 * undefined4 * CWeaponCycler_type_info_function(void)
 */
/* CWeaponCycler type_info function */

undefined4 * CWeaponCycler_type_info_function(void)

{
  if (CWeaponCycler_type_info_node == 0) {
    CBasePlayerWeapon_type_info_function();
    __rtti_si(&CWeaponCycler_type_info_node,"13CWeaponCycler",&CBasePlayerWeapon_type_info_node);
  }
  return &CWeaponCycler_type_info_node;
}

/* 000c8848  CWreckage_type_info_function  (70 bytes)
 * undefined4 * CWreckage_type_info_function(void)
 */
/* CWreckage type_info function */

undefined4 * CWreckage_type_info_function(void)

{
  if (CWreckage_type_info_node == 0) {
    CBaseMonster_type_info_function();
    __rtti_si(&CWreckage_type_info_node,"9CWreckage",&CBaseMonster_type_info_node);
  }
  return &CWreckage_type_info_node;
}

/* 000c8890  GiveFnptrsToDll  (49 bytes)
 * undefined GiveFnptrsToDll(undefined4 * param_1, undefined4 param_2)
 */
void GiveFnptrsToDll(undefined4 *param_1,globalvars_t *param_2)

{
  int iVar1;
  enginefuncs_t_ts30 *peVar2;
  
  peVar2 = &g_engfuncs;
  for (iVar1 = 0x9b; iVar1 != 0; iVar1 = iVar1 + -1) {
    peVar2->pfnPrecacheModel = (_func_38 *)*param_1;
    param_1 = param_1 + 1;
    peVar2 = (enginefuncs_t_ts30 *)&peVar2->pfnPrecacheSound;
  }
  gpGlobals = param_2;
  return;
}

/* 000c88c4  item_healthkit  (33 bytes)
 * undefined item_healthkit(uint param_1)
 */
void item_healthkit(uint param_1)

{
  GetClassPtr<CHealthKit>(param_1);
  return;
}

/* 000c8b10  func_healthcharger  (33 bytes)
 * undefined func_healthcharger(uint param_1)
 */
void func_healthcharger(uint param_1)

{
  GetClassPtr<CWallHealth>(param_1);
  return;
}

/* 000c907c  GetClassPtr<CHealthKit>  (140 bytes)
 * CHealthKit * GetClassPtr<CHealthKit>(uint param_1)
 */
/* CHealthKit * GetClassPtr<CHealthKit>(CHealthKit *) */

CHealthKit * GetClassPtr<CHealthKit>(uint param_1)

{
  edict_t *peVar1;
  CHealthKit *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CHealthKit *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CHealthKit *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CItem_virtual_table;
    pCVar2->vtable = (void **)CHealthKit_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000c9108  GetClassPtr<CWallHealth>  (161 bytes)
 * CWallHealth * GetClassPtr<CWallHealth>(uint param_1)
 */
/* CWallHealth * GetClassPtr<CWallHealth>(CWallHealth *) */

CWallHealth * GetClassPtr<CWallHealth>(uint param_1)

{
  edict_t *peVar1;
  CWallHealth *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CWallHealth *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CWallHealth *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x118)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CWallHealth_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000c91ac  CHealthKit_type_info_function  (70 bytes)
 * undefined4 * CHealthKit_type_info_function(void)
 */
/* CHealthKit type_info function */

undefined4 * CHealthKit_type_info_function(void)

{
  if (CHealthKit_type_info_node == 0) {
    CItem_type_info_function();
    __rtti_si(&CHealthKit_type_info_node,"10CHealthKit",&CItem_type_info_node);
  }
  return &CHealthKit_type_info_node;
}

/* 000c91f4  CWallHealth_type_info_function  (70 bytes)
 * undefined4 * CWallHealth_type_info_function(void)
 */
/* CWallHealth type_info function */

undefined4 * CWallHealth_type_info_function(void)

{
  if (CWallHealth_type_info_node == 0) {
    CBaseToggle_type_info_function();
    __rtti_si(&CWallHealth_type_info_node,"11CWallHealth",&CBaseToggle_type_info_node);
  }
  return &CWallHealth_type_info_node;
}

/* 000c9244  ammo_crossbow  (33 bytes)
 * undefined ammo_crossbow(uint param_1)
 */
void ammo_crossbow(uint param_1)

{
  GetClassPtr<CTSSniperAmmo>(param_1);
  return;
}

/* 000c9268  weapon_crossbow  (33 bytes)
 * undefined weapon_crossbow(uint param_1)
 */
void weapon_crossbow(uint param_1)

{
  GetClassPtr<CTSSniperWeapon>(param_1);
  return;
}

/* 000c928c  ammo_buckshot  (33 bytes)
 * undefined ammo_buckshot(uint param_1)
 */
void ammo_buckshot(uint param_1)

{
  GetClassPtr<CTSShotgunAmmo>(param_1);
  return;
}

/* 000c92b0  weapon_shotgun  (33 bytes)
 * undefined weapon_shotgun(uint param_1)
 */
void weapon_shotgun(uint param_1)

{
  GetClassPtr<CTSShotgunWeapon>(param_1);
  return;
}

/* 000c92d4  ammo_gaussclip  (33 bytes)
 * undefined ammo_gaussclip(uint param_1)
 */
void ammo_gaussclip(uint param_1)

{
  GetClassPtr<CTSRifleAmmo>(param_1);
  return;
}

/* 000c92f8  weapon_gauss  (33 bytes)
 * undefined weapon_gauss(uint param_1)
 */
void weapon_gauss(uint param_1)

{
  GetClassPtr<CTSRifleWeapon>(param_1);
  return;
}

/* 000c931c  weapon_egon  (33 bytes)
 * undefined weapon_egon(uint param_1)
 */
void weapon_egon(uint param_1)

{
  GetClassPtr<CTSRifleWeapon>(param_1);
  return;
}

/* 000c9340  ammo_rpgclip  (33 bytes)
 * undefined ammo_rpgclip(uint param_1)
 */
void ammo_rpgclip(uint param_1)

{
  GetClassPtr<CTSSMGAmmo>(param_1);
  return;
}

/* 000c9364  weapon_rpg  (33 bytes)
 * undefined weapon_rpg(uint param_1)
 */
void weapon_rpg(uint param_1)

{
  GetClassPtr<CTSSMGWeapon>(param_1);
  return;
}

/* 000c9388  ammo_9mmAR  (33 bytes)
 * undefined ammo_9mmAR(uint param_1)
 */
void ammo_9mmAR(uint param_1)

{
  GetClassPtr<CTSBigPistolAmmo>(param_1);
  return;
}

/* 000c93ac  weapon_9MMAR  (33 bytes)
 * undefined weapon_9MMAR(uint param_1)
 */
void weapon_9MMAR(uint param_1)

{
  GetClassPtr<CTSBigPistolWeapon>(param_1);
  return;
}

/* 000c93d0  weapon_hornetgun  (33 bytes)
 * undefined weapon_hornetgun(uint param_1)
 */
void weapon_hornetgun(uint param_1)

{
  GetClassPtr<CTSMGWeapon>(param_1);
  return;
}

/* 000c93f4  ammo_ARgrenades  (33 bytes)
 * undefined ammo_ARgrenades(uint param_1)
 */
void ammo_ARgrenades(uint param_1)

{
  GetClassPtr<CTSKnifeWeapon>(param_1);
  return;
}

/* 000c9418  weapon_satchel  (33 bytes)
 * undefined weapon_satchel(uint param_1)
 */
void weapon_satchel(uint param_1)

{
  GetClassPtr<CTSKnifeWeapon>(param_1);
  return;
}

/* 000c943c  weapon_snark  (33 bytes)
 * undefined weapon_snark(uint param_1)
 */
void weapon_snark(uint param_1)

{
  GetClassPtr<CTSKatanaWeapon>(param_1);
  return;
}

/* 000c9460  weapon_handgrenade  (33 bytes)
 * undefined weapon_handgrenade(uint param_1)
 */
void weapon_handgrenade(uint param_1)

{
  GetClassPtr<CTSGrenadeWeapon>(param_1);
  return;
}

/* 000c9484  item_longjump  (33 bytes)
 * undefined item_longjump(uint param_1)
 */
void item_longjump(uint param_1)

{
  GetClassPtr<CTSSuperJump>(param_1);
  return;
}

/* 000c9f7c  GetClassPtr<CTSSniperAmmo>  (143 bytes)
 * CTSSniperAmmo * GetClassPtr<CTSSniperAmmo>(uint param_1)
 */
/* CTSSniperAmmo * GetClassPtr<CTSSniperAmmo>(CTSSniperAmmo *) */

CTSSniperAmmo * GetClassPtr<CTSSniperAmmo>(uint param_1)

{
  edict_t *peVar1;
  CTSSniperAmmo *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSSniperAmmo *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSSniperAmmo *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xac);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSGroundAmmo_virtual_table;
    pCVar2->vtable = (void **)CTSSniperAmmo_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ca00c  GetClassPtr<CTSSniperWeapon>  (143 bytes)
 * CTSSniperWeapon * GetClassPtr<CTSSniperWeapon>(uint param_1)
 */
/* CTSSniperWeapon * GetClassPtr<CTSSniperWeapon>(CTSSniperWeapon *) */

CTSSniperWeapon * GetClassPtr<CTSSniperWeapon>(uint param_1)

{
  edict_t *peVar1;
  CTSSniperWeapon *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSSniperWeapon *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSSniperWeapon *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xb4);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSGroundWeapon_virtual_table;
    pCVar2->vtable = (void **)CTSSniperWeapon_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ca09c  GetClassPtr<CTSShotgunAmmo>  (143 bytes)
 * CTSShotgunAmmo * GetClassPtr<CTSShotgunAmmo>(uint param_1)
 */
/* CTSShotgunAmmo * GetClassPtr<CTSShotgunAmmo>(CTSShotgunAmmo *) */

CTSShotgunAmmo * GetClassPtr<CTSShotgunAmmo>(uint param_1)

{
  edict_t *peVar1;
  CTSShotgunAmmo *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSShotgunAmmo *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSShotgunAmmo *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xac);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSGroundAmmo_virtual_table;
    pCVar2->vtable = (void **)CTSShotgunAmmo_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ca12c  GetClassPtr<CTSShotgunWeapon>  (143 bytes)
 * CTSShotgunWeapon * GetClassPtr<CTSShotgunWeapon>(uint param_1)
 */
/* CTSShotgunWeapon * GetClassPtr<CTSShotgunWeapon>(CTSShotgunWeapon *) */

CTSShotgunWeapon * GetClassPtr<CTSShotgunWeapon>(uint param_1)

{
  edict_t *peVar1;
  CTSShotgunWeapon *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSShotgunWeapon *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSShotgunWeapon *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xb4);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSGroundWeapon_virtual_table;
    pCVar2->vtable = (void **)CTSShotgunWeapon_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ca1bc  GetClassPtr<CTSRifleAmmo>  (143 bytes)
 * CTSRifleAmmo * GetClassPtr<CTSRifleAmmo>(uint param_1)
 */
/* CTSRifleAmmo * GetClassPtr<CTSRifleAmmo>(CTSRifleAmmo *) */

CTSRifleAmmo * GetClassPtr<CTSRifleAmmo>(uint param_1)

{
  edict_t *peVar1;
  CTSRifleAmmo *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSRifleAmmo *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSRifleAmmo *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xac);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSGroundAmmo_virtual_table;
    pCVar2->vtable = (void **)CTSRifleAmmo_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ca24c  GetClassPtr<CTSRifleWeapon>  (143 bytes)
 * CTSRifleWeapon * GetClassPtr<CTSRifleWeapon>(uint param_1)
 */
/* CTSRifleWeapon * GetClassPtr<CTSRifleWeapon>(CTSRifleWeapon *) */

CTSRifleWeapon * GetClassPtr<CTSRifleWeapon>(uint param_1)

{
  edict_t *peVar1;
  CTSRifleWeapon *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSRifleWeapon *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSRifleWeapon *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xb4);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSGroundWeapon_virtual_table;
    pCVar2->vtable = (void **)CTSRifleWeapon_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ca2dc  GetClassPtr<CTSSMGAmmo>  (143 bytes)
 * CTSSMGAmmo * GetClassPtr<CTSSMGAmmo>(uint param_1)
 */
/* CTSSMGAmmo * GetClassPtr<CTSSMGAmmo>(CTSSMGAmmo *) */

CTSSMGAmmo * GetClassPtr<CTSSMGAmmo>(uint param_1)

{
  edict_t *peVar1;
  CTSSMGAmmo *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSSMGAmmo *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSSMGAmmo *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xac);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSGroundAmmo_virtual_table;
    pCVar2->vtable = (void **)CTSSMGAmmo_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ca36c  GetClassPtr<CTSSMGWeapon>  (143 bytes)
 * CTSSMGWeapon * GetClassPtr<CTSSMGWeapon>(uint param_1)
 */
/* CTSSMGWeapon * GetClassPtr<CTSSMGWeapon>(CTSSMGWeapon *) */

CTSSMGWeapon * GetClassPtr<CTSSMGWeapon>(uint param_1)

{
  edict_t *peVar1;
  CTSSMGWeapon *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSSMGWeapon *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSSMGWeapon *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xb4);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSGroundWeapon_virtual_table;
    pCVar2->vtable = (void **)CTSSMGWeapon_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ca3fc  GetClassPtr<CTSBigPistolAmmo>  (143 bytes)
 * CTSBigPistolAmmo * GetClassPtr<CTSBigPistolAmmo>(uint param_1)
 */
/* CTSBigPistolAmmo * GetClassPtr<CTSBigPistolAmmo>(CTSBigPistolAmmo *) */

CTSBigPistolAmmo * GetClassPtr<CTSBigPistolAmmo>(uint param_1)

{
  edict_t *peVar1;
  CTSBigPistolAmmo *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSBigPistolAmmo *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSBigPistolAmmo *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xac);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSGroundAmmo_virtual_table;
    pCVar2->vtable = (void **)CTSBigPistolAmmo_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ca48c  GetClassPtr<CTSBigPistolWeapon>  (143 bytes)
 * CTSBigPistolWeapon * GetClassPtr<CTSBigPistolWeapon>(uint param_1)
 */
/* CTSBigPistolWeapon * GetClassPtr<CTSBigPistolWeapon>(CTSBigPistolWeapon *) */

CTSBigPistolWeapon * GetClassPtr<CTSBigPistolWeapon>(uint param_1)

{
  edict_t *peVar1;
  CTSBigPistolWeapon *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSBigPistolWeapon *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSBigPistolWeapon *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xb4);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSGroundWeapon_virtual_table;
    pCVar2->vtable = (void **)CTSBigPistolWeapon_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ca51c  GetClassPtr<CTSMGWeapon>  (143 bytes)
 * CTSMGWeapon * GetClassPtr<CTSMGWeapon>(uint param_1)
 */
/* CTSMGWeapon * GetClassPtr<CTSMGWeapon>(CTSMGWeapon *) */

CTSMGWeapon * GetClassPtr<CTSMGWeapon>(uint param_1)

{
  edict_t *peVar1;
  CTSMGWeapon *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSMGWeapon *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSMGWeapon *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xb4);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSGroundWeapon_virtual_table;
    pCVar2->vtable = (void **)CTSMGWeapon_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ca5ac  GetClassPtr<CTSKnifeWeapon>  (143 bytes)
 * CTSKnifeWeapon * GetClassPtr<CTSKnifeWeapon>(uint param_1)
 */
/* CTSKnifeWeapon * GetClassPtr<CTSKnifeWeapon>(CTSKnifeWeapon *) */

CTSKnifeWeapon * GetClassPtr<CTSKnifeWeapon>(uint param_1)

{
  edict_t *peVar1;
  CTSKnifeWeapon *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSKnifeWeapon *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSKnifeWeapon *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xb4);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSGroundWeapon_virtual_table;
    pCVar2->vtable = (void **)CTSKnifeWeapon_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ca63c  GetClassPtr<CTSKatanaWeapon>  (143 bytes)
 * CTSKatanaWeapon * GetClassPtr<CTSKatanaWeapon>(uint param_1)
 */
/* CTSKatanaWeapon * GetClassPtr<CTSKatanaWeapon>(CTSKatanaWeapon *) */

CTSKatanaWeapon * GetClassPtr<CTSKatanaWeapon>(uint param_1)

{
  edict_t *peVar1;
  CTSKatanaWeapon *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSKatanaWeapon *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSKatanaWeapon *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xb4);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSGroundWeapon_virtual_table;
    pCVar2->vtable = (void **)CTSKatanaWeapon_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ca6cc  GetClassPtr<CTSGrenadeWeapon>  (143 bytes)
 * CTSGrenadeWeapon * GetClassPtr<CTSGrenadeWeapon>(uint param_1)
 */
/* CTSGrenadeWeapon * GetClassPtr<CTSGrenadeWeapon>(CTSGrenadeWeapon *) */

CTSGrenadeWeapon * GetClassPtr<CTSGrenadeWeapon>(uint param_1)

{
  edict_t *peVar1;
  CTSGrenadeWeapon *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSGrenadeWeapon *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSGrenadeWeapon *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xb4);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSGroundWeapon_virtual_table;
    pCVar2->vtable = (void **)CTSGrenadeWeapon_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ca75c  GetClassPtr<CTSSuperJump>  (193 bytes)
 * CTSSuperJump * GetClassPtr<CTSSuperJump>(uint param_1)
 */
/* CTSSuperJump * GetClassPtr<CTSSuperJump>(CTSSuperJump *) */

CTSSuperJump * GetClassPtr<CTSSuperJump>(uint param_1)

{
  edict_t *peVar1;
  CTSSuperJump *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSSuperJump *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSSuperJump *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x9c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CTSPowerUp_virtual_table;
    *(undefined4 *)&pCVar2->field_0x84 = 0;
    *(undefined4 *)&pCVar2->field_0x98 = 0x3f800000;
    *(undefined4 *)&pCVar2->field_0x94 = 0;
    pCVar2->vtable = (void **)CTSSuperJump_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ca820  CTSSniperAmmo_type_info_function  (70 bytes)
 * undefined4 * CTSSniperAmmo_type_info_function(void)
 */
/* CTSSniperAmmo type_info function */

undefined4 * CTSSniperAmmo_type_info_function(void)

{
  if (CTSSniperAmmo_type_info_node == 0) {
    CTSGroundAmmo_type_info_function();
    __rtti_si(&CTSSniperAmmo_type_info_node,"13CTSSniperAmmo",&CTSGroundAmmo_type_info_node);
  }
  return &CTSSniperAmmo_type_info_node;
}

/* 000ca868  CTSSniperWeapon_type_info_function  (70 bytes)
 * undefined4 * CTSSniperWeapon_type_info_function(void)
 */
/* CTSSniperWeapon type_info function */

undefined4 * CTSSniperWeapon_type_info_function(void)

{
  if (CTSSniperWeapon_type_info_node == 0) {
    CTSGroundWeapon_type_info_function();
    __rtti_si(&CTSSniperWeapon_type_info_node,"15CTSSniperWeapon",&CTSGroundWeapon_type_info_node);
  }
  return &CTSSniperWeapon_type_info_node;
}

/* 000ca8b0  CTSShotgunAmmo_type_info_function  (70 bytes)
 * undefined4 * CTSShotgunAmmo_type_info_function(void)
 */
/* CTSShotgunAmmo type_info function */

undefined4 * CTSShotgunAmmo_type_info_function(void)

{
  if (CTSShotgunAmmo_type_info_node == 0) {
    CTSGroundAmmo_type_info_function();
    __rtti_si(&CTSShotgunAmmo_type_info_node,"14CTSShotgunAmmo",&CTSGroundAmmo_type_info_node);
  }
  return &CTSShotgunAmmo_type_info_node;
}

/* 000ca8f8  CTSShotgunWeapon_type_info_function  (70 bytes)
 * undefined4 * CTSShotgunWeapon_type_info_function(void)
 */
/* CTSShotgunWeapon type_info function */

undefined4 * CTSShotgunWeapon_type_info_function(void)

{
  if (CTSShotgunWeapon_type_info_node == 0) {
    CTSGroundWeapon_type_info_function();
    __rtti_si(&CTSShotgunWeapon_type_info_node,"16CTSShotgunWeapon",&CTSGroundWeapon_type_info_node)
    ;
  }
  return &CTSShotgunWeapon_type_info_node;
}

/* 000ca940  CTSRifleAmmo_type_info_function  (70 bytes)
 * undefined4 * CTSRifleAmmo_type_info_function(void)
 */
/* CTSRifleAmmo type_info function */

undefined4 * CTSRifleAmmo_type_info_function(void)

{
  if (CTSRifleAmmo_type_info_node == 0) {
    CTSGroundAmmo_type_info_function();
    __rtti_si(&CTSRifleAmmo_type_info_node,"12CTSRifleAmmo",&CTSGroundAmmo_type_info_node);
  }
  return &CTSRifleAmmo_type_info_node;
}

/* 000ca988  CTSRifleWeapon_type_info_function  (70 bytes)
 * undefined4 * CTSRifleWeapon_type_info_function(void)
 */
/* CTSRifleWeapon type_info function */

undefined4 * CTSRifleWeapon_type_info_function(void)

{
  if (CTSRifleWeapon_type_info_node == 0) {
    CTSGroundWeapon_type_info_function();
    __rtti_si(&CTSRifleWeapon_type_info_node,"14CTSRifleWeapon",&CTSGroundWeapon_type_info_node);
  }
  return &CTSRifleWeapon_type_info_node;
}

/* 000ca9d0  CTSSMGAmmo_type_info_function  (70 bytes)
 * undefined4 * CTSSMGAmmo_type_info_function(void)
 */
/* CTSSMGAmmo type_info function */

undefined4 * CTSSMGAmmo_type_info_function(void)

{
  if (CTSSMGAmmo_type_info_node == 0) {
    CTSGroundAmmo_type_info_function();
    __rtti_si(&CTSSMGAmmo_type_info_node,"10CTSSMGAmmo",&CTSGroundAmmo_type_info_node);
  }
  return &CTSSMGAmmo_type_info_node;
}

/* 000caa18  CTSSMGWeapon_type_info_function  (70 bytes)
 * undefined4 * CTSSMGWeapon_type_info_function(void)
 */
/* CTSSMGWeapon type_info function */

undefined4 * CTSSMGWeapon_type_info_function(void)

{
  if (CTSSMGWeapon_type_info_node == 0) {
    CTSGroundWeapon_type_info_function();
    __rtti_si(&CTSSMGWeapon_type_info_node,"12CTSSMGWeapon",&CTSGroundWeapon_type_info_node);
  }
  return &CTSSMGWeapon_type_info_node;
}

/* 000caa60  CTSPistolAmmo_type_info_function  (70 bytes)
 * undefined4 * CTSPistolAmmo_type_info_function(void)
 */
/* CTSPistolAmmo type_info function */

undefined4 * CTSPistolAmmo_type_info_function(void)

{
  if (CTSPistolAmmo_type_info_node == 0) {
    CTSGroundAmmo_type_info_function();
    __rtti_si(&CTSPistolAmmo_type_info_node,"13CTSPistolAmmo",&CTSGroundAmmo_type_info_node);
  }
  return &CTSPistolAmmo_type_info_node;
}

/* 000caaa8  CTSPistolWeapon_type_info_function  (70 bytes)
 * undefined4 * CTSPistolWeapon_type_info_function(void)
 */
/* CTSPistolWeapon type_info function */

undefined4 * CTSPistolWeapon_type_info_function(void)

{
  if (CTSPistolWeapon_type_info_node == 0) {
    CTSGroundWeapon_type_info_function();
    __rtti_si(&CTSPistolWeapon_type_info_node,"15CTSPistolWeapon",&CTSGroundWeapon_type_info_node);
  }
  return &CTSPistolWeapon_type_info_node;
}

/* 000caaf0  CTSBigPistolAmmo_type_info_function  (70 bytes)
 * undefined4 * CTSBigPistolAmmo_type_info_function(void)
 */
/* CTSBigPistolAmmo type_info function */

undefined4 * CTSBigPistolAmmo_type_info_function(void)

{
  if (CTSBigPistolAmmo_type_info_node == 0) {
    CTSGroundAmmo_type_info_function();
    __rtti_si(&CTSBigPistolAmmo_type_info_node,"16CTSBigPistolAmmo",&CTSGroundAmmo_type_info_node);
  }
  return &CTSBigPistolAmmo_type_info_node;
}

/* 000cab38  CTSBigPistolWeapon_type_info_function  (70 bytes)
 * undefined4 * CTSBigPistolWeapon_type_info_function(void)
 */
/* CTSBigPistolWeapon type_info function */

undefined4 * CTSBigPistolWeapon_type_info_function(void)

{
  if (CTSBigPistolWeapon_type_info_node == 0) {
    CTSGroundWeapon_type_info_function();
    __rtti_si(&CTSBigPistolWeapon_type_info_node,"18CTSBigPistolWeapon",
              &CTSGroundWeapon_type_info_node);
  }
  return &CTSBigPistolWeapon_type_info_node;
}

/* 000cab80  CTSMGWeapon_type_info_function  (70 bytes)
 * undefined4 * CTSMGWeapon_type_info_function(void)
 */
/* CTSMGWeapon type_info function */

undefined4 * CTSMGWeapon_type_info_function(void)

{
  if (CTSMGWeapon_type_info_node == 0) {
    CTSGroundWeapon_type_info_function();
    __rtti_si(&CTSMGWeapon_type_info_node,"11CTSMGWeapon",&CTSGroundWeapon_type_info_node);
  }
  return &CTSMGWeapon_type_info_node;
}

/* 000cabc8  CTSKnifeWeapon_type_info_function  (70 bytes)
 * undefined4 * CTSKnifeWeapon_type_info_function(void)
 */
/* CTSKnifeWeapon type_info function */

undefined4 * CTSKnifeWeapon_type_info_function(void)

{
  if (CTSKnifeWeapon_type_info_node == 0) {
    CTSGroundWeapon_type_info_function();
    __rtti_si(&CTSKnifeWeapon_type_info_node,"14CTSKnifeWeapon",&CTSGroundWeapon_type_info_node);
  }
  return &CTSKnifeWeapon_type_info_node;
}

/* 000cac10  CTSKatanaWeapon_type_info_function  (70 bytes)
 * undefined4 * CTSKatanaWeapon_type_info_function(void)
 */
/* CTSKatanaWeapon type_info function */

undefined4 * CTSKatanaWeapon_type_info_function(void)

{
  if (CTSKatanaWeapon_type_info_node == 0) {
    CTSGroundWeapon_type_info_function();
    __rtti_si(&CTSKatanaWeapon_type_info_node,"15CTSKatanaWeapon",&CTSGroundWeapon_type_info_node);
  }
  return &CTSKatanaWeapon_type_info_node;
}

/* 000cac58  CTSGrenadeWeapon_type_info_function  (70 bytes)
 * undefined4 * CTSGrenadeWeapon_type_info_function(void)
 */
/* CTSGrenadeWeapon type_info function */

undefined4 * CTSGrenadeWeapon_type_info_function(void)

{
  if (CTSGrenadeWeapon_type_info_node == 0) {
    CTSGroundWeapon_type_info_function();
    __rtti_si(&CTSGrenadeWeapon_type_info_node,"16CTSGrenadeWeapon",&CTSGroundWeapon_type_info_node)
    ;
  }
  return &CTSGrenadeWeapon_type_info_node;
}

/* 000caca0  CTSSuperJump_type_info_function  (70 bytes)
 * undefined4 * CTSSuperJump_type_info_function(void)
 */
/* CTSSuperJump type_info function */

undefined4 * CTSSuperJump_type_info_function(void)

{
  if (CTSSuperJump_type_info_node == 0) {
    CTSPowerUp_type_info_function();
    __rtti_si(&CTSSuperJump_type_info_node,"12CTSSuperJump",&CTSPowerUp_type_info_node);
  }
  return &CTSSuperJump_type_info_node;
}

/* 000cace8  world_items  (33 bytes)
 * undefined world_items(uint param_1)
 */
void world_items(uint param_1)

{
  GetClassPtr<CWorldItem>(param_1);
  return;
}

/* 000cb178  item_suit  (33 bytes)
 * undefined item_suit(uint param_1)
 */
void item_suit(uint param_1)

{
  GetClassPtr<CItemSuit>(param_1);
  return;
}

/* 000cb19c  item_battery  (33 bytes)
 * undefined item_battery(uint param_1)
 */
void item_battery(uint param_1)

{
  GetClassPtr<CItemBattery>(param_1);
  return;
}

/* 000cb1c0  item_antidote  (33 bytes)
 * undefined item_antidote(uint param_1)
 */
void item_antidote(uint param_1)

{
  GetClassPtr<CItemAntidote>(param_1);
  return;
}

/* 000cb1e4  item_security  (33 bytes)
 * undefined item_security(uint param_1)
 */
void item_security(uint param_1)

{
  GetClassPtr<CItemSecurity>(param_1);
  return;
}

/* 000cb208  GetClassPtr<CWorldItem>  (131 bytes)
 * CWorldItem * GetClassPtr<CWorldItem>(uint param_1)
 */
/* CWorldItem * GetClassPtr<CWorldItem>(CWorldItem *) */

CWorldItem * GetClassPtr<CWorldItem>(uint param_1)

{
  edict_t *peVar1;
  CWorldItem *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CWorldItem *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CWorldItem *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x68);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CWorldItem_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cb28c  GetClassPtr<CItemSuit>  (140 bytes)
 * CItemSuit * GetClassPtr<CItemSuit>(uint param_1)
 */
/* CItemSuit * GetClassPtr<CItemSuit>(CItemSuit *) */

CItemSuit * GetClassPtr<CItemSuit>(uint param_1)

{
  edict_t *peVar1;
  CItemSuit *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CItemSuit *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CItemSuit *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CItem_virtual_table;
    pCVar2->vtable = (void **)CItemSuit_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cb318  GetClassPtr<CItemBattery>  (140 bytes)
 * CItemBattery * GetClassPtr<CItemBattery>(uint param_1)
 */
/* CItemBattery * GetClassPtr<CItemBattery>(CItemBattery *) */

CItemBattery * GetClassPtr<CItemBattery>(uint param_1)

{
  edict_t *peVar1;
  CItemBattery *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CItemBattery *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CItemBattery *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CItem_virtual_table;
    pCVar2->vtable = (void **)CItemBattery_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cb3a4  GetClassPtr<CItemAntidote>  (140 bytes)
 * CItemAntidote * GetClassPtr<CItemAntidote>(uint param_1)
 */
/* CItemAntidote * GetClassPtr<CItemAntidote>(CItemAntidote *) */

CItemAntidote * GetClassPtr<CItemAntidote>(uint param_1)

{
  edict_t *peVar1;
  CItemAntidote *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CItemAntidote *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CItemAntidote *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CItem_virtual_table;
    pCVar2->vtable = (void **)CItemAntidote_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cb430  GetClassPtr<CItemSecurity>  (140 bytes)
 * CItemSecurity * GetClassPtr<CItemSecurity>(uint param_1)
 */
/* CItemSecurity * GetClassPtr<CItemSecurity>(CItemSecurity *) */

CItemSecurity * GetClassPtr<CItemSecurity>(uint param_1)

{
  edict_t *peVar1;
  CItemSecurity *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CItemSecurity *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CItemSecurity *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CItem_virtual_table;
    pCVar2->vtable = (void **)CItemSecurity_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cb4bc  CItem_type_info_function  (70 bytes)
 * undefined4 * CItem_type_info_function(void)
 */
/* CItem type_info function */

undefined4 * CItem_type_info_function(void)

{
  if (CItem_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CItem_type_info_node,"5CItem",&CBaseEntity_type_info_node);
  }
  return &CItem_type_info_node;
}

/* 000cb50c  CWorldItem_type_info_function  (70 bytes)
 * undefined4 * CWorldItem_type_info_function(void)
 */
/* CWorldItem type_info function */

undefined4 * CWorldItem_type_info_function(void)

{
  if (CWorldItem_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CWorldItem_type_info_node,"10CWorldItem",&CBaseEntity_type_info_node);
  }
  return &CWorldItem_type_info_node;
}

/* 000cb554  CItemSuit_type_info_function  (70 bytes)
 * undefined4 * CItemSuit_type_info_function(void)
 */
/* CItemSuit type_info function */

undefined4 * CItemSuit_type_info_function(void)

{
  if (CItemSuit_type_info_node == 0) {
    CItem_type_info_function();
    __rtti_si(&CItemSuit_type_info_node,"9CItemSuit",&CItem_type_info_node);
  }
  return &CItemSuit_type_info_node;
}

/* 000cb684  CItemBattery_type_info_function  (70 bytes)
 * undefined4 * CItemBattery_type_info_function(void)
 */
/* CItemBattery type_info function */

undefined4 * CItemBattery_type_info_function(void)

{
  if (CItemBattery_type_info_node == 0) {
    CItem_type_info_function();
    __rtti_si(&CItemBattery_type_info_node,"12CItemBattery",&CItem_type_info_node);
  }
  return &CItemBattery_type_info_node;
}

/* 000cb8b0  CItemAntidote_type_info_function  (70 bytes)
 * undefined4 * CItemAntidote_type_info_function(void)
 */
/* CItemAntidote type_info function */

undefined4 * CItemAntidote_type_info_function(void)

{
  if (CItemAntidote_type_info_node == 0) {
    CItem_type_info_function();
    __rtti_si(&CItemAntidote_type_info_node,"13CItemAntidote",&CItem_type_info_node);
  }
  return &CItemAntidote_type_info_node;
}

/* 000cb9a0  CItemSecurity_type_info_function  (70 bytes)
 * undefined4 * CItemSecurity_type_info_function(void)
 */
/* CItemSecurity type_info function */

undefined4 * CItemSecurity_type_info_function(void)

{
  if (CItemSecurity_type_info_node == 0) {
    CItem_type_info_function();
    __rtti_si(&CItemSecurity_type_info_node,"13CItemSecurity",&CItem_type_info_node);
  }
  return &CItemSecurity_type_info_node;
}

/* 000cba68  light  (33 bytes)
 * undefined light(uint param_1)
 */
void light(uint param_1)

{
  GetClassPtr<CLight>(param_1);
  return;
}

/* 000cbd68  light_spot  (33 bytes)
 * undefined light_spot(uint param_1)
 */
void light_spot(uint param_1)

{
  GetClassPtr<CLight>(param_1);
  return;
}

/* 000cbd8c  light_environment  (33 bytes)
 * undefined light_environment(uint param_1)
 */
void light_environment(uint param_1)

{
  GetClassPtr<CEnvLight>(param_1);
  return;
}

/* 000cc100  GetClassPtr<CLight>  (140 bytes)
 * CLight * GetClassPtr<CLight>(uint param_1)
 */
/* CLight * GetClassPtr<CLight>(CLight *) */

CLight * GetClassPtr<CLight>(uint param_1)

{
  edict_t *peVar1;
  CLight *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CLight *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CLight *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x6c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CLight_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cc18c  GetClassPtr<CEnvLight>  (149 bytes)
 * CEnvLight * GetClassPtr<CEnvLight>(uint param_1)
 */
/* CEnvLight * GetClassPtr<CEnvLight>(CEnvLight *) */

CEnvLight * GetClassPtr<CEnvLight>(uint param_1)

{
  edict_t *peVar1;
  CEnvLight *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CEnvLight *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CEnvLight *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x6c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CLight_virtual_table;
    pCVar2->vtable = (void **)CEnvLight_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cc224  CLight_type_info_function  (70 bytes)
 * undefined4 * CLight_type_info_function(void)
 */
/* CLight type_info function */

undefined4 * CLight_type_info_function(void)

{
  if (CLight_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CLight_type_info_node,"6CLight",&CPointEntity_type_info_node);
  }
  return &CLight_type_info_node;
}

/* 000cc26c  CEnvLight_type_info_function  (70 bytes)
 * undefined4 * CEnvLight_type_info_function(void)
 */
/* CEnvLight type_info function */

undefined4 * CEnvLight_type_info_function(void)

{
  if (CEnvLight_type_info_node == 0) {
    CLight_type_info_function();
    __rtti_si(&CEnvLight_type_info_node,"9CEnvLight",&CLight_type_info_node);
  }
  return &CEnvLight_type_info_node;
}

/* 000cc4b4  game_score  (33 bytes)
 * undefined game_score(uint param_1)
 */
void game_score(uint param_1)

{
  GetClassPtr<CGameScore>(param_1);
  return;
}

/* 000cc644  game_end  (33 bytes)
 * undefined game_end(uint param_1)
 */
void game_end(uint param_1)

{
  GetClassPtr<CGameEnd>(param_1);
  return;
}

/* 000cc6ac  game_text  (33 bytes)
 * undefined game_text(uint param_1)
 */
void game_text(uint param_1)

{
  GetClassPtr<CGameText>(param_1);
  return;
}

/* 000ccac4  game_team_master  (33 bytes)
 * undefined game_team_master(uint param_1)
 */
void game_team_master(uint param_1)

{
  GetClassPtr<CGameTeamMaster>(param_1);
  return;
}

/* 000ccd40  game_team_set  (33 bytes)
 * undefined game_team_set(uint param_1)
 */
void game_team_set(uint param_1)

{
  GetClassPtr<CGameTeamSet>(param_1);
  return;
}

/* 000ccdcc  game_zone_player  (33 bytes)
 * undefined game_zone_player(uint param_1)
 */
void game_zone_player(uint param_1)

{
  GetClassPtr<CGamePlayerZone>(param_1);
  return;
}

/* 000cd148  game_player_hurt  (33 bytes)
 * undefined game_player_hurt(uint param_1)
 */
void game_player_hurt(uint param_1)

{
  GetClassPtr<CGamePlayerHurt>(param_1);
  return;
}

/* 000cd228  game_counter  (33 bytes)
 * undefined game_counter(uint param_1)
 */
void game_counter(uint param_1)

{
  GetClassPtr<CGameCounter>(param_1);
  return;
}

/* 000cd3f4  game_counter_set  (33 bytes)
 * undefined game_counter_set(uint param_1)
 */
void game_counter_set(uint param_1)

{
  GetClassPtr<CGameCounterSet>(param_1);
  return;
}

/* 000cd470  game_player_equip  (33 bytes)
 * undefined game_player_equip(uint param_1)
 */
void game_player_equip(uint param_1)

{
  GetClassPtr<CGamePlayerEquip>(param_1);
  return;
}

/* 000cd740  game_player_team  (33 bytes)
 * undefined game_player_team(uint param_1)
 */
void game_player_team(uint param_1)

{
  GetClassPtr<CGamePlayerTeam>(param_1);
  return;
}

/* 000cd8a0  GetClassPtr<CGameScore>  (149 bytes)
 * CGameScore * GetClassPtr<CGameScore>(uint param_1)
 */
/* CGameScore * GetClassPtr<CGameScore>(CGameScore *) */

CGameScore * GetClassPtr<CGameScore>(uint param_1)

{
  edict_t *peVar1;
  CGameScore *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CGameScore *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CGameScore *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x68);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CRuleEntity_virtual_table;
    pCVar2->vtable = (void **)CRulePointEntity_virtual_table;
    pCVar2->vtable = (void **)CGameScore_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cd938  GetClassPtr<CGameEnd>  (149 bytes)
 * CGameEnd * GetClassPtr<CGameEnd>(uint param_1)
 */
/* CGameEnd * GetClassPtr<CGameEnd>(CGameEnd *) */

CGameEnd * GetClassPtr<CGameEnd>(uint param_1)

{
  edict_t *peVar1;
  CGameEnd *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CGameEnd *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CGameEnd *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x68);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CRuleEntity_virtual_table;
    pCVar2->vtable = (void **)CRulePointEntity_virtual_table;
    pCVar2->vtable = (void **)CGameEnd_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cd9d0  GetClassPtr<CGameText>  (152 bytes)
 * CGameText * GetClassPtr<CGameText>(uint param_1)
 */
/* CGameText * GetClassPtr<CGameText>(CGameText *) */

CGameText * GetClassPtr<CGameText>(uint param_1)

{
  edict_t *peVar1;
  CGameText *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CGameText *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CGameText *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x90);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CRuleEntity_virtual_table;
    pCVar2->vtable = (void **)CRulePointEntity_virtual_table;
    pCVar2->vtable = (void **)CGameText_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cda68  GetClassPtr<CGameTeamMaster>  (149 bytes)
 * CGameTeamMaster * GetClassPtr<CGameTeamMaster>(uint param_1)
 */
/* CGameTeamMaster * GetClassPtr<CGameTeamMaster>(CGameTeamMaster *) */

CGameTeamMaster * GetClassPtr<CGameTeamMaster>(uint param_1)

{
  edict_t *peVar1;
  CGameTeamMaster *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CGameTeamMaster *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CGameTeamMaster *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x70);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CRuleEntity_virtual_table;
    pCVar2->vtable = (void **)CRulePointEntity_virtual_table;
    pCVar2->vtable = (void **)CGameTeamMaster_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cdb00  GetClassPtr<CGameTeamSet>  (149 bytes)
 * CGameTeamSet * GetClassPtr<CGameTeamSet>(uint param_1)
 */
/* CGameTeamSet * GetClassPtr<CGameTeamSet>(CGameTeamSet *) */

CGameTeamSet * GetClassPtr<CGameTeamSet>(uint param_1)

{
  edict_t *peVar1;
  CGameTeamSet *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CGameTeamSet *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CGameTeamSet *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x68);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CRuleEntity_virtual_table;
    pCVar2->vtable = (void **)CRulePointEntity_virtual_table;
    pCVar2->vtable = (void **)CGameTeamSet_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cdb98  GetClassPtr<CGamePlayerZone>  (149 bytes)
 * CGamePlayerZone * GetClassPtr<CGamePlayerZone>(uint param_1)
 */
/* CGamePlayerZone * GetClassPtr<CGamePlayerZone>(CGamePlayerZone *) */

CGamePlayerZone * GetClassPtr<CGamePlayerZone>(uint param_1)

{
  edict_t *peVar1;
  CGamePlayerZone *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CGamePlayerZone *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CGamePlayerZone *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x78);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CRuleEntity_virtual_table;
    pCVar2->vtable = (void **)CRuleBrushEntity_virtual_table;
    pCVar2->vtable = (void **)CGamePlayerZone_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cdc30  GetClassPtr<CGamePlayerHurt>  (149 bytes)
 * CGamePlayerHurt * GetClassPtr<CGamePlayerHurt>(uint param_1)
 */
/* CGamePlayerHurt * GetClassPtr<CGamePlayerHurt>(CGamePlayerHurt *) */

CGamePlayerHurt * GetClassPtr<CGamePlayerHurt>(uint param_1)

{
  edict_t *peVar1;
  CGamePlayerHurt *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CGamePlayerHurt *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CGamePlayerHurt *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x68);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CRuleEntity_virtual_table;
    pCVar2->vtable = (void **)CRulePointEntity_virtual_table;
    pCVar2->vtable = (void **)CGamePlayerHurt_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cdcc8  GetClassPtr<CGameCounter>  (149 bytes)
 * CGameCounter * GetClassPtr<CGameCounter>(uint param_1)
 */
/* CGameCounter * GetClassPtr<CGameCounter>(CGameCounter *) */

CGameCounter * GetClassPtr<CGameCounter>(uint param_1)

{
  edict_t *peVar1;
  CGameCounter *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CGameCounter *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CGameCounter *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x68);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CRuleEntity_virtual_table;
    pCVar2->vtable = (void **)CRulePointEntity_virtual_table;
    pCVar2->vtable = (void **)CGameCounter_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cdd60  GetClassPtr<CGameCounterSet>  (149 bytes)
 * CGameCounterSet * GetClassPtr<CGameCounterSet>(uint param_1)
 */
/* CGameCounterSet * GetClassPtr<CGameCounterSet>(CGameCounterSet *) */

CGameCounterSet * GetClassPtr<CGameCounterSet>(uint param_1)

{
  edict_t *peVar1;
  CGameCounterSet *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CGameCounterSet *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CGameCounterSet *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x68);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CRuleEntity_virtual_table;
    pCVar2->vtable = (void **)CRulePointEntity_virtual_table;
    pCVar2->vtable = (void **)CGameCounterSet_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cddf8  GetClassPtr<CGamePlayerEquip>  (152 bytes)
 * CGamePlayerEquip * GetClassPtr<CGamePlayerEquip>(uint param_1)
 */
/* CGamePlayerEquip * GetClassPtr<CGamePlayerEquip>(CGamePlayerEquip *) */

CGamePlayerEquip * GetClassPtr<CGamePlayerEquip>(uint param_1)

{
  edict_t *peVar1;
  CGamePlayerEquip *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CGamePlayerEquip *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CGamePlayerEquip *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x168)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CRuleEntity_virtual_table;
    pCVar2->vtable = (void **)CRulePointEntity_virtual_table;
    pCVar2->vtable = (void **)CGamePlayerEquip_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cde90  GetClassPtr<CGamePlayerTeam>  (149 bytes)
 * CGamePlayerTeam * GetClassPtr<CGamePlayerTeam>(uint param_1)
 */
/* CGamePlayerTeam * GetClassPtr<CGamePlayerTeam>(CGamePlayerTeam *) */

CGamePlayerTeam * GetClassPtr<CGamePlayerTeam>(uint param_1)

{
  edict_t *peVar1;
  CGamePlayerTeam *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CGamePlayerTeam *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CGamePlayerTeam *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x68);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CRuleEntity_virtual_table;
    pCVar2->vtable = (void **)CRulePointEntity_virtual_table;
    pCVar2->vtable = (void **)CGamePlayerTeam_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000cdf28  CRuleEntity_type_info_function  (70 bytes)
 * undefined4 * CRuleEntity_type_info_function(void)
 */
/* CRuleEntity type_info function */

undefined4 * CRuleEntity_type_info_function(void)

{
  if (CRuleEntity_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CRuleEntity_type_info_node,"11CRuleEntity",&CBaseEntity_type_info_node);
  }
  return &CRuleEntity_type_info_node;
}

/* 000cdf7c  CRulePointEntity_type_info_function  (70 bytes)
 * undefined4 * CRulePointEntity_type_info_function(void)
 */
/* CRulePointEntity type_info function */

undefined4 * CRulePointEntity_type_info_function(void)

{
  if (CRulePointEntity_type_info_node == 0) {
    CRuleEntity_type_info_function();
    __rtti_si(&CRulePointEntity_type_info_node,"16CRulePointEntity",&CRuleEntity_type_info_node);
  }
  return &CRulePointEntity_type_info_node;
}

/* 000cdfc4  CRuleBrushEntity_type_info_function  (70 bytes)
 * undefined4 * CRuleBrushEntity_type_info_function(void)
 */
/* CRuleBrushEntity type_info function */

undefined4 * CRuleBrushEntity_type_info_function(void)

{
  if (CRuleBrushEntity_type_info_node == 0) {
    CRuleEntity_type_info_function();
    __rtti_si(&CRuleBrushEntity_type_info_node,"16CRuleBrushEntity",&CRuleEntity_type_info_node);
  }
  return &CRuleBrushEntity_type_info_node;
}

/* 000ce00c  CGameScore_type_info_function  (70 bytes)
 * undefined4 * CGameScore_type_info_function(void)
 */
/* CGameScore type_info function */

undefined4 * CGameScore_type_info_function(void)

{
  if (CGameScore_type_info_node == 0) {
    CRulePointEntity_type_info_function();
    __rtti_si(&CGameScore_type_info_node,"10CGameScore",&CRulePointEntity_type_info_node);
  }
  return &CGameScore_type_info_node;
}

/* 000ce0bc  CGameEnd_type_info_function  (70 bytes)
 * undefined4 * CGameEnd_type_info_function(void)
 */
/* CGameEnd type_info function */

undefined4 * CGameEnd_type_info_function(void)

{
  if (CGameEnd_type_info_node == 0) {
    CRulePointEntity_type_info_function();
    __rtti_si(&CGameEnd_type_info_node,"8CGameEnd",&CRulePointEntity_type_info_node);
  }
  return &CGameEnd_type_info_node;
}

/* 000ce104  CGameText_type_info_function  (70 bytes)
 * undefined4 * CGameText_type_info_function(void)
 */
/* CGameText type_info function */

undefined4 * CGameText_type_info_function(void)

{
  if (CGameText_type_info_node == 0) {
    CRulePointEntity_type_info_function();
    __rtti_si(&CGameText_type_info_node,"9CGameText",&CRulePointEntity_type_info_node);
  }
  return &CGameText_type_info_node;
}

/* 000ce1c0  CGameTeamMaster_type_info_function  (70 bytes)
 * undefined4 * CGameTeamMaster_type_info_function(void)
 */
/* CGameTeamMaster type_info function */

undefined4 * CGameTeamMaster_type_info_function(void)

{
  if (CGameTeamMaster_type_info_node == 0) {
    CRulePointEntity_type_info_function();
    __rtti_si(&CGameTeamMaster_type_info_node,"15CGameTeamMaster",&CRulePointEntity_type_info_node);
  }
  return &CGameTeamMaster_type_info_node;
}

/* 000ce23c  CGameTeamSet_type_info_function  (70 bytes)
 * undefined4 * CGameTeamSet_type_info_function(void)
 */
/* CGameTeamSet type_info function */

undefined4 * CGameTeamSet_type_info_function(void)

{
  if (CGameTeamSet_type_info_node == 0) {
    CRulePointEntity_type_info_function();
    __rtti_si(&CGameTeamSet_type_info_node,"12CGameTeamSet",&CRulePointEntity_type_info_node);
  }
  return &CGameTeamSet_type_info_node;
}

/* 000ce2b0  CGamePlayerZone_type_info_function  (70 bytes)
 * undefined4 * CGamePlayerZone_type_info_function(void)
 */
/* CGamePlayerZone type_info function */

undefined4 * CGamePlayerZone_type_info_function(void)

{
  if (CGamePlayerZone_type_info_node == 0) {
    CRuleBrushEntity_type_info_function();
    __rtti_si(&CGamePlayerZone_type_info_node,"15CGamePlayerZone",&CRuleBrushEntity_type_info_node);
  }
  return &CGamePlayerZone_type_info_node;
}

/* 000ce2f8  CGamePlayerHurt_type_info_function  (70 bytes)
 * undefined4 * CGamePlayerHurt_type_info_function(void)
 */
/* CGamePlayerHurt type_info function */

undefined4 * CGamePlayerHurt_type_info_function(void)

{
  if (CGamePlayerHurt_type_info_node == 0) {
    CRulePointEntity_type_info_function();
    __rtti_si(&CGamePlayerHurt_type_info_node,"15CGamePlayerHurt",&CRulePointEntity_type_info_node);
  }
  return &CGamePlayerHurt_type_info_node;
}

/* 000ce358  CGameCounter_type_info_function  (70 bytes)
 * undefined4 * CGameCounter_type_info_function(void)
 */
/* CGameCounter type_info function */

undefined4 * CGameCounter_type_info_function(void)

{
  if (CGameCounter_type_info_node == 0) {
    CRulePointEntity_type_info_function();
    __rtti_si(&CGameCounter_type_info_node,"12CGameCounter",&CRulePointEntity_type_info_node);
  }
  return &CGameCounter_type_info_node;
}

/* 000ce524  CGameCounterSet_type_info_function  (70 bytes)
 * undefined4 * CGameCounterSet_type_info_function(void)
 */
/* CGameCounterSet type_info function */

undefined4 * CGameCounterSet_type_info_function(void)

{
  if (CGameCounterSet_type_info_node == 0) {
    CRulePointEntity_type_info_function();
    __rtti_si(&CGameCounterSet_type_info_node,"15CGameCounterSet",&CRulePointEntity_type_info_node);
  }
  return &CGameCounterSet_type_info_node;
}

/* 000ce584  CGamePlayerEquip_type_info_function  (70 bytes)
 * undefined4 * CGamePlayerEquip_type_info_function(void)
 */
/* CGamePlayerEquip type_info function */

undefined4 * CGamePlayerEquip_type_info_function(void)

{
  if (CGamePlayerEquip_type_info_node == 0) {
    CRulePointEntity_type_info_function();
    __rtti_si(&CGamePlayerEquip_type_info_node,"16CGamePlayerEquip",&CRulePointEntity_type_info_node
             );
  }
  return &CGamePlayerEquip_type_info_node;
}

/* 000ce5e4  CGamePlayerTeam_type_info_function  (70 bytes)
 * undefined4 * CGamePlayerTeam_type_info_function(void)
 */
/* CGamePlayerTeam type_info function */

undefined4 * CGamePlayerTeam_type_info_function(void)

{
  if (CGamePlayerTeam_type_info_node == 0) {
    CRulePointEntity_type_info_function();
    __rtti_si(&CGamePlayerTeam_type_info_node,"15CGamePlayerTeam",&CRulePointEntity_type_info_node);
  }
  return &CGamePlayerTeam_type_info_node;
}

