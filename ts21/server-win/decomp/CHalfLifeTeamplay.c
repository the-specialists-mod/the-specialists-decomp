/* mp.dll - CHalfLifeTeamplay (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10038550  CHalfLifeTeamplay::CHalfLifeTeamplay  (367 bytes)
 * undefined4 * CHalfLifeTeamplay(undefined4 * param_1)
 * called by: InstallGameRules
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall CHalfLifeTeamplay::CHalfLifeTeamplay(undefined4 *param_1)

{
  char cVar1;
  edict_t *peVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *_Dest;
  char local_200 [512];
  
  CHalfLifeMultiplay::CHalfLifeMultiplay(param_1);
  *param_1 = &PTR_FUN_100866e8;
  FUN_10044810(&DAT_100ac8c0);
  FUN_100451b0(&DAT_100ac8c0,&DAT_100ac750);
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  puVar5 = &DAT_100ac550;
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  _Dest = (char *)(param_1 + 3);
  DAT_100ac7d8 = 0;
  puVar5 = &DAT_100ac750;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *_Dest = '\0';
  if ((DAT_1009f498 == 2) || (pcVar4 = PTR_s_hitman_gordon_10093b14, DAT_1009f498 == 3)) {
    local_200[0] = '\0';
    iVar3 = 0;
    do {
      cVar1 = s_Specialists_10097488[iVar3];
      local_200[iVar3] = cVar1;
      iVar3 = iVar3 + 1;
    } while (cVar1 != '\0');
    iVar3 = -1;
    pcVar4 = local_200;
    do {
      pcVar6 = pcVar4;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar6;
    } while (cVar1 != '\0');
    *(undefined2 *)(pcVar6 + -1) = DAT_10097478;
    iVar3 = -1;
    pcVar4 = local_200;
    do {
      pcVar6 = pcVar4;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar6;
    } while (cVar1 != '\0');
    *(undefined4 *)(pcVar6 + -1) = s_Mercenary_1009747c._0_4_;
    *(undefined4 *)(pcVar6 + 3) = s_Mercenary_1009747c._4_4_;
    *(undefined2 *)(pcVar6 + 7) = s_Mercenary_1009747c._8_2_;
    pcVar4 = local_200;
  }
  _strncpy(_Dest,pcVar4,0x200);
  peVar2 = (*g_engfuncs.pfnPEntityOfEntIndex)(0);
  if ((((peVar2 != (edict_t *)0x0) && (iVar3 = (peVar2->v).team, iVar3 != 0)) &&
      (_DAT_10093b30 != 0.0)) && (pcVar4 = gpGlobals->pStringBase + iVar3, pcVar4 != (char *)0x0)) {
    iVar3 = -1;
    pcVar6 = pcVar4;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      _strncpy(_Dest,pcVar4,0x200);
    }
  }
  iVar3 = -1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *_Dest;
    _Dest = _Dest + 1;
  } while (cVar1 != '\0');
  if (iVar3 == -2) {
    param_1[0x85] = 0;
  }
  else {
    param_1[0x85] = 1;
  }
  FUN_10039730(param_1,'\0');
  return param_1;
}

/* 100386d0  CHalfLifeTeamplay::Think  (409 bytes)
 * undefined Think()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CHalfLifeTeamplay::Think(int *param_1)

{
  float fVar1;
  globalvars_t *pgVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  float10 extraout_ST0;
  longlong lVar7;
  longlong lVar8;
  int *unaff_retaddr;
  
  iVar5 = 0;
  FUN_10069cc0(&DAT_1009fe50,(double)gpGlobals->frametime);
  if (DAT_1009f4a4 != 0) {
    FUN_10023a60(param_1);
    return;
  }
  (*g_engfuncs.pfnCVarGetFloat)(s_mp_timelimit_10093fd8);
  pgVar2 = gpGlobals;
  lVar7 = __ftol();
  iVar3 = DAT_100ac7d8;
  fVar1 = DAT_10093a68;
  if ((extraout_ST0 != (float10)0.0) &&
     (extraout_ST0 < (float10)pgVar2->time != (extraout_ST0 == (float10)pgVar2->time))) {
                    /* WARNING: Could not recover jumptable at 0x10038769. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf8))();
    return;
  }
  if (DAT_10093a68 != 0.0) {
    iVar6 = 0;
    iVar5 = 9999;
    param_1 = unaff_retaddr;
    if (0 < DAT_100ac7d8) {
      do {
        if (fVar1 <= (float)(int)(&DAT_100ac750)[iVar6]) {
                    /* WARNING: Could not recover jumptable at 0x1003885e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_retaddr + 0xf8))();
          return;
        }
        lVar8 = __ftol();
        if ((int)lVar8 < iVar5) {
          iVar5 = (int)lVar8;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
  }
  if (iVar5 != DAT_100ac7d4) {
    pcVar4 = UTIL_VarArgs(&DAT_10091cc8);
    (*g_engfuncs.pfnCvar_DirectSet)((cvar_s *)&PTR_s_mp_fragsleft_10093a20,pcVar4);
  }
  if ((float)_DAT_100ac7d0 != _DAT_10093a40) {
    pcVar4 = UTIL_VarArgs(&DAT_10091cc8);
    (*g_engfuncs.pfnCvar_DirectSet)((cvar_s *)&PTR_s_mp_timeleft_10093a34,pcVar4);
  }
  _DAT_100ac7d0 = (int)lVar7;
  DAT_100ac7d4 = iVar5;
  GameDLLInit(&DAT_100ac8c0);
  if (DAT_100add34 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x10038849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf8))();
    return;
  }
  return;
}

/* 10038ac0  CHalfLifeTeamplay::InitHUD  (496 bytes)
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
  
  (**(code **)(*(int *)param_1 + 0xdc))(param_2);
  CHalfLifeMultiplay::InitHUD(param_1,param_2);
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc34,(float *)0x0,*(edict_t **)(param_2[1] + 0x208));
  (*g_engfuncs.pfnWriteByte)(DAT_100ac7d8);
  iVar6 = 0;
  if (0 < DAT_100ac7d8) {
    pcVar5 = (char *)&DAT_100ac550;
    do {
      (*g_engfuncs.pfnWriteString)(pcVar5);
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 0x10;
    } while (iVar6 < DAT_100ac7d8);
  }
  (*g_engfuncs.pfnMessageEnd)();
  FUN_10039730(param_1,'\0');
  pcVar5 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(param_2[1] + 0x208));
  pbVar2 = (byte *)(*g_engfuncs.pfnInfoKeyValue)(pcVar5,in_stack_fffffbfc);
  pbVar7 = (byte *)(param_2 + 0x2a8);
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_10038b93:
      iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10038b98;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_10038b93;
    pbVar2 = pbVar2 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_10038b98:
  if (iVar6 == 0) {
    pcVar5 = s___you_are_on_team___s__100974c0;
  }
  else {
    pcVar5 = s___assigned_to_team__s_100974a8;
  }
  FUN_1006e69a(auStack_3e4,(byte_conflict *)pcVar5);
  (**(code **)(*(int *)param_1 + 0xd8))(param_2,param_2 + 0x2a8,0,0);
  FUN_10067640(&iStack_3f4,param_2);
  (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_2[1] + 0x208));
  FUN_10039730(param_1,'\0');
  iStack_3f4 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar3 = (int *)UTIL_PlayerByIndex(iStack_3f4);
      if (piVar3 != (int *)0x0) {
        iVar6 = *(int *)param_1;
        uVar4 = (**(code **)(*piVar3 + 0xb0))();
        iVar6 = (**(code **)(iVar6 + 0xd4))(uVar4);
        if (iVar6 != 0) {
          (*g_engfuncs.pfnMessageBegin)
                    (1,DAT_100cbbf8,(float *)0x0,*(edict_t **)(param_2[1] + 0x208));
          iVar6 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(piVar3[1] + 0x208));
          (*g_engfuncs.pfnWriteByte)(iVar6);
          pcVar5 = (char *)(**(code **)(*piVar3 + 0xb0))();
          iStack_3f4 = 0x10038c7d;
          (*g_engfuncs.pfnWriteString)(pcVar5);
          (*g_engfuncs.pfnMessageEnd)();
        }
      }
      iStack_3f4 = iStack_3f4 + 1;
    } while (iStack_3f4 <= gpGlobals->maxClients);
  }
  return;
}

/* 10038f50  CHalfLifeTeamplay::ClientUserInfoChanged  (683 bytes)
 * undefined ClientUserInfoChanged()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
CHalfLifeTeamplay::ClientUserInfoChanged(CHalfLifeMultiplay *param_1,int *param_2,char *param_3)

{
  edict_t *pEdict;
  byte_conflict *pbVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *infobuffer;
  void *this;
  char *unaff_EBX;
  char *unaff_EBP;
  int *key;
  int *key_00;
  int in_stack_fffffc08;
  edict_t *in_stack_fffffc0c;
  undefined1 auStack_3e4 [24];
  undefined1 auStack_3cc [972];
  
  CHalfLifeMultiplay::ClientUserInfoChanged(param_1,param_2,param_3);
  pbVar1 = (byte_conflict *)(*g_engfuncs.pfnInfoKeyValue)(param_3,s_model_10091b60);
  key = param_2 + 0x2a8;
  uVar2 = FUN_1007e860(this,pbVar1,(byte_conflict *)key);
  if (uVar2 != 0) {
    if ((DAT_1009f498 != 2) && (DAT_1009f498 != 3)) {
      if (_DAT_102e00fc != 0.0) {
        (**(code **)(*(int *)param_1 + 0xdc))(param_2);
        return;
      }
      if (_DAT_10093b44 != 0.0) {
        iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_2[1] + 0x208));
        key_00 = key;
        pcVar4 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(param_2[1] + 0x208));
        (*g_engfuncs.pfnSetClientKeyValue)(iVar3,pcVar4,(char *)key_00,unaff_EBX);
        pcVar4 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(param_2[1] + 0x208));
        (*g_engfuncs.pfnSetClientKeyValue)(iVar3,pcVar4,(char *)key,(char *)in_stack_fffffc0c);
        FUN_1006e69a(auStack_3cc,(byte_conflict *)s___Not_allowed_to_change_teams_in_1009755c);
        FUN_10067640(auStack_3cc,param_2);
        return;
      }
      iVar3 = (**(code **)(*(int *)param_1 + 0xd4))(pbVar1);
      if (iVar3 != 0) {
        FUN_1006e69a(&stack0xfffffc04,(byte_conflict *)s____s_has_changed_to_team___s__1009753c);
        FUN_100676a0(&stack0xfffffc04,(int)param_2);
        (*g_engfuncs.pfnGetPlayerAuthId)(*(edict_t **)(param_2[1] + 0x208));
        (*g_engfuncs.pfnGetPlayerUserId)(in_stack_fffffc0c);
        FUN_10068840((byte_conflict *)s___s<_i><_s><_s>__joined_team___s_10097518);
        (**(code **)(*(int *)param_1 + 0xd8))(param_2,pbVar1,0,0);
        FUN_10039730(param_1,'\x01');
        return;
      }
      (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_2[1] + 0x208));
      pcVar4 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(param_2[1] + 0x208));
      (*g_engfuncs.pfnSetClientKeyValue)(in_stack_fffffc08,pcVar4,(char *)key,unaff_EBP);
      FUN_1006e69a(auStack_3e4,(byte_conflict *)s___Can_t_change_team_to___s__100974f8);
      FUN_10067640(auStack_3e4,param_2);
      FUN_1006e69a(auStack_3e4,(byte_conflict *)s___Server_limits_teams_to___s__100974d8);
      FUN_10067640(auStack_3e4,param_2);
      return;
    }
    pEdict = *(edict_t **)(param_2[1] + 0x208);
    iVar3 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
    pcVar4 = FUN_10045840(&DAT_100ac8c0,(int)param_2);
    infobuffer = (*g_engfuncs.pfnGetInfoKeyBuffer)(pEdict);
    (*g_engfuncs.pfnSetClientKeyValue)(iVar3,infobuffer,pcVar4,unaff_EBX);
  }
  return;
}

/* 10039200  CHalfLifeTeamplay::DeathNotice  (215 bytes)
 * undefined DeathNotice()
 */
void __thiscall
CHalfLifeTeamplay::DeathNotice
          (int *param_1,void *param_2,int *param_3,undefined4 param_4,int *param_5)

{
  void *pvVar1;
  edict_t *peVar2;
  int iVar3;
  
  if (param_1[0x83] != 0) {
    return;
  }
  if (((((param_2 != (void *)0x0) && (param_3 != (int *)0x0)) &&
       ((*(byte *)(param_3 + 0x69) & 8) != 0)) &&
      ((peVar2 = (edict_t *)param_3[0x82], peVar2 != (edict_t *)0x0 ||
       (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 != (edict_t *)0x0)))) &&
     ((pvVar1 = peVar2->pvPrivateData, pvVar1 != (void *)0x0 &&
      ((pvVar1 != param_2 && (iVar3 = (**(code **)(*param_1 + 200))(param_2,pvVar1), iVar3 == 1)))))
     ) {
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbbf0,(float *)0x0,(edict_t *)0x0);
    iVar3 = (*g_engfuncs.pfnIndexOfEdict)((edict_t *)param_3[0x82]);
    (*g_engfuncs.pfnWriteByte)(iVar3);
    iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)((int)param_2 + 4) + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar3);
    (*g_engfuncs.pfnWriteString)(s_teammate_1009758c);
    (*g_engfuncs.pfnMessageEnd)();
    return;
  }
  FUN_1004ede0((int)param_2,param_3,param_5);
  return;
}

