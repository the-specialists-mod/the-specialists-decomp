/* mp.dll - CHalfLifeMultiplay (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10023850  CHalfLifeMultiplay::CHalfLifeMultiplay  (245 bytes)
 * undefined4 * CHalfLifeMultiplay(undefined4 * param_1)
 * called by: CHalfLifeTeamplay::CHalfLifeTeamplay, InstallGameRules
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall CHalfLifeMultiplay::CHalfLifeMultiplay(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char acStack_fc [252];
  
  *param_1 = &PTR_FUN_10084b48;
  FUN_10044810(&DAT_100ac8c0);
  CVoiceGameMgr::Init((CVoiceGameMgr *)&DAT_1009fe50,&DAT_1009f768,gpGlobals->maxClients);
  FUN_100239c0();
  param_1[1] = 0;
  _DAT_1009fe70 = 0;
  iVar1 = (*g_engfuncs.pfnIsDedicatedServer)();
  if (iVar1 == 0) {
    pcVar2 = (*g_engfuncs.pfnCVarGetString)(s_lservercfgfile_10094aa4);
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      (*g_engfuncs.pfnAlertMessage)(at_console,s_Executing_listen_server_config_f_10094a7c);
      FUN_1006e69a(acStack_fc,(byte_conflict *)s_exec__s_10094ab4);
      (*g_engfuncs.pfnServerCommand)(acStack_fc);
    }
  }
  else {
    pcVar2 = (*g_engfuncs.pfnCVarGetString)(s_servercfgfile_10094ae8);
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      (*g_engfuncs.pfnAlertMessage)(at_console,s_Executing_dedicated_server_confi_10094ac0);
      FUN_1006e69a(acStack_fc,(byte_conflict *)s_exec__s_10094ab4);
      (*g_engfuncs.pfnServerCommand)(acStack_fc);
      return param_1;
    }
  }
  return param_1;
}

/* 10023ec0  CHalfLifeMultiplay::InitHUD  (597 bytes)
 * undefined InitHUD(void * param_1)
 * called by: CHalfLifeTeamplay::InitHUD
 */
void __thiscall CHalfLifeMultiplay::InitHUD(CHalfLifeMultiplay *this,void *param_1)

{
  edict_t *peVar1;
  undefined *puVar2;
  char *infobuffer;
  int iValue;
  longlong lVar3;
  char *pcVar4;
  char *in_stack_00000008;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar7 = 0;
  iVar6 = 0;
  iVar5 = 0;
  puVar2 = UTIL_VarArgs((byte_conflict *)s__s_has_joined_the_game_10094b4c);
  iValue = 1;
  UTIL_ClientPrintAll(1,puVar2,iVar5,iVar6,iVar7,iVar8);
  if (DAT_1009f498 == 0) {
    peVar1 = *(edict_t **)(*(int *)((int)param_1 + 4) + 0x208);
    (*g_engfuncs.pfnGetPlayerUserId)(peVar1);
    (*g_engfuncs.pfnGetPlayerAuthId)(peVar1);
    (*g_engfuncs.pfnGetPlayerUserId)(peVar1);
    pcVar4 = s___s<_i><_s><_i>__entered_the_gam_10094b04;
  }
  else {
    peVar1 = *(edict_t **)(*(int *)((int)param_1 + 4) + 0x208);
    infobuffer = (*g_engfuncs.pfnGetInfoKeyBuffer)(peVar1);
    pcVar4 = (char *)0x10023f3e;
    (*g_engfuncs.pfnInfoKeyValue)(infobuffer,in_stack_00000008);
    (*g_engfuncs.pfnGetPlayerAuthId)(peVar1);
    (*g_engfuncs.pfnGetPlayerUserId)(peVar1);
  }
  FUN_10068840((byte_conflict *)pcVar4);
  (**(code **)(*(int *)this + 0x38))();
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100cbbf4,(float *)0x0,*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208));
  iVar5 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(iVar5);
  (*g_engfuncs.pfnWriteShort)(0);
  (*g_engfuncs.pfnWriteShort)(0);
  (*g_engfuncs.pfnWriteShort)(0);
  (*g_engfuncs.pfnWriteShort)(0);
  (*g_engfuncs.pfnMessageEnd)();
  SendMOTDToClient(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208));
  if (0 < gpGlobals->maxClients) {
    do {
      iVar5 = UTIL_PlayerByIndex(iValue);
      if (iVar5 != 0) {
        (*g_engfuncs.pfnMessageBegin)
                  (1,DAT_100cbbf4,(float *)0x0,*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208));
        (*g_engfuncs.pfnWriteByte)(iValue);
        lVar3 = __ftol();
        (*g_engfuncs.pfnWriteShort)((int)lVar3);
        (*g_engfuncs.pfnWriteShort)(*(int *)(iVar5 + 0xa88));
        (*g_engfuncs.pfnWriteShort)(0);
        iVar5 = (**(code **)(*(int *)this + 0xcc))();
        (*g_engfuncs.pfnWriteShort)(iVar5 + 1);
        (*g_engfuncs.pfnMessageEnd)();
      }
      iValue = iValue + 1;
    } while (iValue <= gpGlobals->maxClients);
  }
  if (DAT_1009f4a4 != 0) {
    (*g_engfuncs.pfnMessageBegin)
              (1,0x1e,(float *)0x0,*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208));
    (*g_engfuncs.pfnMessageEnd)();
  }
  FUN_100451c0(&DAT_100ac8c0,param_1);
  return;
}

/* 10024120  CHalfLifeMultiplay::ClientDisconnected  (250 bytes)
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
    FireTargets(0x10094bb0,this,this,3,0);
    if (DAT_1009f498 == 0) {
      peVar1 = *(edict_t **)(*(int *)((int)this + 4) + 0x208);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar1);
      (*g_engfuncs.pfnGetPlayerAuthId)(peVar1);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar1);
      pcVar2 = s___s<_i><_s><_i>__disconnected_10094b70;
    }
    else {
      peVar1 = *(edict_t **)(*(int *)((int)this + 4) + 0x208);
      infobuffer = (*g_engfuncs.pfnGetInfoKeyBuffer)(peVar1);
      pcVar2 = (char *)0x10024174;
      (*g_engfuncs.pfnInfoKeyValue)(infobuffer,unaff_EDI);
      (*g_engfuncs.pfnGetPlayerAuthId)(peVar1);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar1);
    }
    FUN_10068840((byte_conflict *)pcVar2);
    FUN_1002ad70(this,1);
    FUN_100648e0((int)this);
    _DAT_100b1d90 = 0;
  }
  return;
}

/* 10024c60  CHalfLifeMultiplay::ChangeLevel  (636 bytes)
 * undefined ChangeLevel()
 */
void CHalfLifeMultiplay::ChangeLevel(void)

{
  char cVar1;
  byte_conflict bVar2;
  bool bVar3;
  int iVar4;
  byte_conflict *pbVar5;
  uint uVar6;
  byte_conflict *pbVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  void *this;
  char *pcVar13;
  bool bVar14;
  int iStack_bf8;
  int in_stack_fffff40c;
  char acStack_bf0 [24];
  char acStack_bd8 [4];
  char acStack_bd4 [4];
  char acStack_bd0 [28];
  char acStack_bb4 [4];
  char acStack_bb0 [1496];
  char acStack_5d8 [12];
  char acStack_5cc [1484];
  
  iVar4 = 0;
  do {
    cVar1 = (&DAT_10094c94)[iVar4];
    acStack_bd8[iVar4] = cVar1;
    iVar4 = iVar4 + 1;
  } while (cVar1 != '\0');
  pbVar5 = (byte_conflict *)(*g_engfuncs.pfnCVarGetString)(s_mapcyclefile_10094c84);
  acStack_5d8[0] = '\0';
  acStack_bb4[0] = '\0';
  iVar4 = FUN_10024b20();
  uVar6 = FUN_1007e860(this,pbVar5,&DAT_1009f770);
  if (uVar6 == 0) {
    if (DAT_1009f760 == 0) goto LAB_10024dd8;
  }
  else {
    pbVar7 = pbVar5;
    do {
      bVar2 = *pbVar7;
      pbVar7[(int)&DAT_1009f770 - (int)pbVar5] = bVar2;
      pbVar7 = pbVar7 + 1;
    } while (bVar2 != '\0');
    FUN_10024720(&DAT_1009f760);
    iVar8 = ReloadMapCycleFile(pbVar5,&DAT_1009f760);
    if ((iVar8 == 0) || (DAT_1009f760 == 0)) {
      (*g_engfuncs.pfnAlertMessage)(at_console,s_Unable_to_load_map_cycle_file__s_10094c60,pbVar5);
      goto LAB_10024dd8;
    }
  }
  bVar14 = false;
  pcVar13 = &stack0xfffff40c;
  pcVar9 = gpGlobals->pStringBase + gpGlobals->mapname;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    *pcVar13 = cVar1;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  pcVar13 = gpGlobals->pStringBase + gpGlobals->mapname;
  iVar8 = -(int)pcVar13;
  do {
    cVar1 = *pcVar13;
    pcVar13[(int)(acStack_bd4 + iVar8)] = cVar1;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  piVar11 = DAT_1009f764;
  if ((int *)*DAT_1009f764 == DAT_1009f764) {
LAB_10024d96:
    piVar11 = DAT_1009f764;
  }
  else {
    do {
      iVar8 = piVar11[9];
      bVar3 = false;
      if (iVar8 != 0) {
        if (iVar4 < iVar8) {
          bVar3 = true;
        }
        else {
          bVar14 = true;
          iStack_bf8 = iVar8;
        }
      }
      if (piVar11[10] == 0) {
LAB_10024d88:
        if (!bVar3) goto LAB_10024d98;
      }
      else if (iVar4 <= piVar11[10]) {
        bVar14 = true;
        goto LAB_10024d88;
      }
      piVar11 = (int *)*piVar11;
    } while ((int *)*piVar11 != DAT_1009f764);
    if (!bVar14) goto LAB_10024d96;
  }
LAB_10024d98:
  DAT_1009f764 = (int *)*piVar11;
  piVar10 = piVar11 + 1;
  iVar8 = -0x20 - (int)piVar10;
  do {
    iVar12 = *piVar10;
    (acStack_bd4 + iVar8)[(int)piVar10] = (char)iVar12;
    piVar10 = (int *)((int)piVar10 + 1);
  } while ((char)iVar12 != '\0');
  piVar11 = piVar11 + 0xb;
  FUN_10024b60((char *)piVar11,acStack_5d8);
  iVar8 = -(int)piVar11;
  do {
    iVar12 = *piVar11;
    (acStack_bb4 + iVar8)[(int)piVar11] = (char)iVar12;
    piVar11 = (int *)((int)piVar11 + 1);
  } while ((char)iVar12 != '\0');
LAB_10024dd8:
  if (DAT_100add34 != '\0') {
    iVar8 = 8;
    bVar14 = true;
    pcVar13 = &DAT_100add34;
    pcVar9 = s_nextmap_10094c58;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar14 = *pcVar13 == *pcVar9;
      pcVar13 = pcVar13 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar14);
    if (!bVar14) {
      iVar8 = 0;
      do {
        cVar1 = (&DAT_100add34)[iVar8];
        acStack_bd4[iVar8 + -0x20] = cVar1;
        iVar8 = iVar8 + 1;
      } while (cVar1 != '\0');
    }
    DAT_100add34 = '\0';
  }
  FUN_10044810(&DAT_100ac8c0);
  iVar12 = (*g_engfuncs.pfnIsMapValid)(&stack0xfffff40c);
  iVar8 = 0;
  if (iVar12 == 0) {
    do {
      pcVar13 = acStack_bd0 + iVar8;
      acStack_bf0[iVar8] = *pcVar13;
      iVar8 = iVar8 + 1;
    } while (*pcVar13 != '\0');
  }
  DAT_1009f4a4 = 1;
  (*g_engfuncs.pfnAlertMessage)(at_console,s_CHANGE_LEVEL___s_10094c44,acStack_bf0);
  if ((in_stack_fffff40c != 0) || (iStack_bf8 != 0)) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,s_PLAYER_COUNT__min__i_max__i_curr_10094c18,in_stack_fffff40c,iStack_bf8,
               iVar4);
  }
  iVar4 = -1;
  pcVar13 = acStack_bb0;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  if (iVar4 != -2) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_RULES___s_10094c0c,acStack_bb0);
  }
  (*g_engfuncs.pfnChangeLevel)(acStack_bf0,(char *)0x0);
  iVar4 = -1;
  pcVar13 = acStack_5cc;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  if (iVar4 != -2) {
    (*g_engfuncs.pfnServerCommand)(acStack_5cc);
  }
  return;
}

/* 10024ee0  CHalfLifeMultiplay::SendMOTDToClient  (296 bytes)
 * undefined SendMOTDToClient(undefined4 param_1)
 * called by: CHalfLifeMultiplay::InitHUD
 */
void CHalfLifeMultiplay::SendMOTDToClient(edict_t *param_1)

{
  byte_conflict bVar1;
  char *pcVar2;
  byte_conflict *_Source;
  byte_conflict *pbVar3;
  uint uVar4;
  int iVar5;
  int *unaff_ESI;
  edict_t *in_stack_00000010;
  edict_t *in_stack_00000028;
  void *pvStack_24;
  byte_conflict abStack_1c [20];
  char acStack_8 [8];
  
  iVar5 = 0;
  pcVar2 = (*g_engfuncs.pfnCVarGetString)(s_motdfile_10094ca8);
  _Source = (*g_engfuncs.pfnLoadFileForMe)(pcVar2,unaff_ESI);
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc08,(float *)0x0,in_stack_00000010);
  pcVar2 = (*g_engfuncs.pfnCVarGetString)(s_hostname_10094c9c);
  (*g_engfuncs.pfnWriteString)(pcVar2);
  (*g_engfuncs.pfnMessageEnd)();
  if (_Source != (byte_conflict *)0x0) {
    while ((*_Source != '\0' && (iVar5 < 0x600))) {
      uVar4 = 0xffffffff;
      pbVar3 = _Source;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while (bVar1 != '\0');
      if (~uVar4 - 1 < 0x3c) {
        pbVar3 = _Source;
        do {
          bVar1 = *pbVar3;
          pbVar3[(int)(abStack_1c + -(int)_Source)] = bVar1;
          pbVar3 = pbVar3 + 1;
        } while (bVar1 != '\0');
      }
      else {
        _strncpy((char *)abStack_1c,(char *)_Source,0x3c);
      }
      uVar4 = 0xffffffff;
      pbVar3 = abStack_1c;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while (bVar1 != '\0');
      iVar5 = iVar5 + (~uVar4 - 1);
      if (iVar5 < 0x600) {
        _Source = (byte_conflict *)((int)pvStack_24 + iVar5);
      }
      else {
        *_Source = '\0';
      }
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc04,(float *)0x0,in_stack_00000028);
      (*g_engfuncs.pfnWriteByte)((uint)(*_Source == '\0'));
      (*g_engfuncs.pfnWriteString)(acStack_8);
      abStack_1c[0] = 0xec;
      abStack_1c[1] = 'O';
      abStack_1c[2] = '\x02';
      abStack_1c[3] = '\x10';
      (*g_engfuncs.pfnMessageEnd)();
    }
  }
  (*g_engfuncs.pfnFreeFile)(pvStack_24);
  return;
}

/* 1004f7e0  CHalfLifeMultiplay::PlayerKilled  (2320 bytes)
 * undefined PlayerKilled(int * param_1, int * param_2)
 * called by: FUN_100392e0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CHalfLifeMultiplay::PlayerKilled(CHalfLifeMultiplay *this,int *param_1,int *param_2)

{
  int *piVar1;
  CHalfLifeMultiplay CVar2;
  edict_t *peVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte_conflict *pbVar7;
  undefined *puVar8;
  CHalfLifeMultiplay *pCVar9;
  void *this_00;
  int *unaff_EBX;
  CHalfLifeMultiplay *unaff_ESI;
  CHalfLifeMultiplay *this_01;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  byte_conflict *in_stack_ffffff9c;
  int iVar13;
  int iVar14;
  undefined4 in_stack_ffffffbc;
  undefined4 in_stack_ffffffc0;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined1 uVar19;
  uint uVar20;
  
  pCVar9 = this;
  (**(code **)(*(int *)this + 0x70))();
  param_1[0x2a2] = param_1[0x2a2] + 1;
  FireTargets(0x10098be0,param_1,param_1,3,0);
  peVar3 = (edict_t *)param_2[0x82];
  this_01 = (CHalfLifeMultiplay *)0x0;
  if ((((peVar3 != (edict_t *)0x0) ||
       (peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar3 != (edict_t *)0x0)) &&
      (pCVar9 = peVar3->pvPrivateData, pCVar9 != (CHalfLifeMultiplay *)0x0)) &&
     (iVar4 = (**(code **)(*(int *)pCVar9 + 0x2c))(), iVar4 == 2)) {
    this_01 = pCVar9;
  }
  if (*(char *)((int)param_1 + 0x731) != '\0') {
    CTSGameRules::TheOneIsDead((CTSGameRules *)&DAT_100ac8c0,param_1,(int *)this_01);
    *(undefined1 *)(param_1 + 0x1af) = 0;
  }
  if ((((int *)param_1[1] == param_2) || (pCVar9 == (CHalfLifeMultiplay *)0x0)) ||
     (iVar4 = (**(code **)(*(int *)pCVar9 + 0xa8))(), iVar4 == 0)) {
    param_2[0x59] = (int)((float)param_2[0x59] - 1.0);
    goto LAB_1004ffa6;
  }
  uVar5 = (**(code **)(*(int *)this + 0x68))();
  uVar15 = 0x1004f8c7;
  uVar5 = FUN_1004f3c0(param_1,param_2,unaff_EBX,uVar5);
  uVar20 = uVar5;
  if (((((param_2[0x94] & 0x10c10U) != 0) || (DAT_100cbf11 != '\0')) ||
      (this = unaff_ESI, 2 < (int)uVar5)) &&
     (uVar10 = FUN_10043670(), this = unaff_ESI, (int)uVar10 != 0)) {
    uVar19 = 0;
    uVar18 = 0;
    fVar17 = 1.5;
    uVar16 = 0x3e19999a;
    FUN_1000a540(&stack0xffffffbc,(undefined4 *)(param_1[1] + 8));
    CTSSlowMotionPoint::CreateSlowMotionPoint
              (in_stack_ffffffbc,in_stack_ffffffc0,uVar15,uVar16,fVar17,uVar18,uVar19);
    this = unaff_ESI;
  }
  if (((DAT_100ac8c0 == '\0') || (DAT_100ac8c0 == '\x01')) && (0 < (int)uVar5)) {
    if (gpGlobals->time - *(float *)(this_01 + 0x6c0) < 1.0) {
      uVar5 = uVar5 * 2;
      uVar20 = uVar5;
      pcVar6 = UTIL_VarArgs((byte_conflict *)s_DoubleFrag_for__s__10098bcc);
      in_stack_ffffffc0 = 0xff;
      TSHudMessageAll(0,0xff,0,1,0x1e,pcVar6);
    }
    if (2 < *(byte *)(param_1 + 0x1af)) {
      if (*(byte *)(param_1 + 0x1af) < 9) {
        pcVar6 = UTIL_VarArgs((byte_conflict *)s__s_stops__s_s_fury__10098b88);
        in_stack_ffffffc0 = 0xff;
        TSHudMessageAll(0,0xff,0,1,0x1e,pcVar6);
      }
      else {
        uVar5 = uVar5 + 5;
        uVar20 = uVar5;
        pcVar6 = UTIL_VarArgs((byte_conflict *)s__i_frags_for__s__he_has_killed_T_10098b9c);
        in_stack_ffffffc0 = 0xff;
        TSHudMessageAll(0,0xff,0,1,0x28,pcVar6);
        if ((*(int *)(this_01 + 0x69c) == 0) && (*(int *)(this_01 + 0x6a0) == 0)) {
          *(undefined4 *)(this_01 + 0x69c) = 0;
          *(undefined4 *)(this_01 + 0x6a0) = 8;
          *(undefined4 *)(this_01 + 0x6a4) = 0;
          *(undefined4 *)(this_01 + 0x6a8) = 3;
        }
      }
    }
    if (this_01[0x6bc] != (CHalfLifeMultiplay)0xff) {
      this_01[0x6bc] = (CHalfLifeMultiplay)((char)this_01[0x6bc] + '\x01');
    }
    CVar2 = this_01[0x6bc];
    if ((byte)CVar2 < 10) {
      if (CVar2 == (CHalfLifeMultiplay)0x9) {
        pcVar6 = UTIL_VarArgs((byte_conflict *)s__s_is_The_Specialist__10098b48);
        in_stack_ffffffc0 = 0xff;
        TSHudMessageAll(0,0xff,0,1,0x1e,pcVar6);
        *(undefined4 *)(*(int *)(this_01 + 4) + 0x160) = 0x43160000;
        this_01[0x6c6] = (CHalfLifeMultiplay)0x1;
        this_01[0x6c7] = (CHalfLifeMultiplay)0x1;
        (*g_engfuncs.pfnSetPhysicsKeyValue)
                  (*(edict_t **)(*(int *)(this_01 + 4) + 0x208),&DAT_10091cdc,&DAT_10091ce0);
        (*g_engfuncs.pfnMessageBegin)
                  (1,DAT_100cbc68,(float *)0x0,*(edict_t **)(*(int *)(this_01 + 4) + 0x208));
        (*g_engfuncs.pfnWriteShort)(4);
        (*g_engfuncs.pfnWriteByte)(0);
        (*g_engfuncs.pfnMessageEnd)();
        this = (CHalfLifeMultiplay *)DAT_100cbc68;
        (*g_engfuncs.pfnMessageBegin)
                  (1,DAT_100cbc68,(float *)0x0,*(edict_t **)(*(int *)(this_01 + 4) + 0x208));
        (*g_engfuncs.pfnWriteShort)(0x100);
        uVar20 = 0;
        (*g_engfuncs.pfnWriteByte)(0);
        (*g_engfuncs.pfnMessageEnd)();
        if ((*(int *)(this_01 + 0x69c) == 0) && (*(int *)(this_01 + 0x6a0) == 0)) {
          *(undefined4 *)(this_01 + 0x69c) = 0;
          *(undefined4 *)(this_01 + 0x6a0) = 8;
          *(undefined4 *)(this_01 + 0x6a4) = 0;
          *(undefined4 *)(this_01 + 0x6a8) = 3;
        }
        CVar2 = (CHalfLifeMultiplay)((-(this_01[0x6c4] != (CHalfLifeMultiplay)0xa) & 0xfaU) + 10);
        goto LAB_1004fcec;
      }
      if (CVar2 == (CHalfLifeMultiplay)0x6) {
        pcVar6 = UTIL_VarArgs((byte_conflict *)s__s_is_Demolition_Man__10098b30);
        in_stack_ffffffc0 = 0xff;
        TSHudMessageAll(0,0xff,0,1,0x1e,pcVar6);
        fVar17 = *(float *)(*(int *)(this_01 + 4) + 0x160) + 50.0;
        if (150.0 <= fVar17) {
          fVar17 = 150.0;
        }
        *(float *)(*(int *)(this_01 + 4) + 0x160) = fVar17;
        CVar2 = (CHalfLifeMultiplay)((-(this_01[0x6c4] != (CHalfLifeMultiplay)0xa) & 0xf9U) + 10);
        goto LAB_1004fcec;
      }
      if (CVar2 == (CHalfLifeMultiplay)0x3) {
        pcVar6 = UTIL_VarArgs((byte_conflict *)s__s_is_a_Killer__10098b20);
        in_stack_ffffffc0 = 0xff;
        TSHudMessageAll(0,0xff,0,1,0x1e,pcVar6);
        fVar17 = *(float *)(*(int *)(this_01 + 4) + 0x160) + 30.0;
        if (150.0 <= fVar17) {
          fVar17 = 150.0;
        }
        *(float *)(*(int *)(this_01 + 4) + 0x160) = fVar17;
        CVar2 = (CHalfLifeMultiplay)((this_01[0x6c4] == (CHalfLifeMultiplay)0xa) * '\b' + '\x02');
        goto LAB_1004fcec;
      }
    }
    else {
      pcVar6 = UTIL_VarArgs((byte_conflict *)s__s_is_Unstoppable___i_consecutiv_10098b60);
      in_stack_ffffffc0 = 0xff;
      TSHudMessageAll(0,0xff,0,1,0x1e,pcVar6);
      uVar5 = uVar5 * 2;
      CVar2 = (CHalfLifeMultiplay)((-(this_01[0x6c4] != (CHalfLifeMultiplay)0xa) & 0xfbU) + 10);
      uVar20 = uVar5;
LAB_1004fcec:
      this_01[0x6c4] = CVar2;
    }
    if (100.0 < *(float *)(*(int *)(this_01 + 4) + 0x160)) {
      *(float *)(this_01 + 0x6b4) = gpGlobals->time + 1.0;
    }
    *(float *)(this_01 + 0x6c0) = gpGlobals->time;
    if (uVar5 == 0xffffffff) {
      iVar4 = -1000;
    }
    else {
      iVar4 = uVar5 * 900;
    }
    FUN_10042d00((int)this_01,iVar4,uVar5 == 0xffffffff);
  }
  param_2[0x59] = (int)((float)(int)uVar20 + (float)param_2[0x59]);
  pbVar7 = (byte_conflict *)(**(code **)(*(int *)this_01 + 0xb0))();
  FUN_1007e860(this_00,pbVar7,in_stack_ffffff9c);
  FUN_100445c0();
  FireTargets(0x10098b10,in_stack_ffffffc0,in_stack_ffffffc0,3,0);
  if (_DAT_10093bf8 == 1.0) {
    if (0 < (int)uVar5) {
      if (((*(uint *)(this_01 + 0x6a0) == 0) || ((*(uint *)(this_01 + 0x6a0) & 1) != 0)) &&
         (*(int *)(this_01 + 0x69c) == 0)) {
        *(undefined4 *)(this_01 + 0x69c) = 0;
        iVar4 = *(int *)(this_01 + 0x6a8) + 1;
        *(undefined4 *)(this_01 + 0x6a0) = 1;
        if (4 < iVar4) {
          iVar4 = 5;
        }
        *(int *)(this_01 + 0x6a8) = iVar4;
      }
      goto LAB_1004fe02;
    }
  }
  else {
LAB_1004fe02:
    if ((0 < (int)uVar5) && (*(int *)(this_01 + 0x14c) != 0)) {
      FUN_1005ddd0(this_01,param_1[1]);
    }
  }
  if (uVar5 != 0xffffffff) goto LAB_1004ffa6;
  if ((*(float *)(this_01 + 0x73c) == 0.0) || (*(float *)(this_01 + 0x73c) < gpGlobals->time)) {
    fVar17 = gpGlobals->time;
    this_01[0x740] = (CHalfLifeMultiplay)0x1;
LAB_1004fe78:
    *(float *)(this_01 + 0x73c) = fVar17 + 30.0;
  }
  else if (gpGlobals->time < *(float *)(this_01 + 0x73c)) {
    fVar17 = gpGlobals->time;
    this_01[0x740] = (CHalfLifeMultiplay)((char)this_01[0x740] + '\x01');
    goto LAB_1004fe78;
  }
  if ('\x02' < (char)this_01[0x740]) {
    iVar14 = 0;
    iVar13 = 0;
    iVar12 = 0;
    iVar4 = 0;
    if (_DAT_10093d74 <= 0.0) {
      FUN_100675b0((int)param_2,2,s_You_have_been_kicked_for_teamkil_10098a70,0,0,0,0);
      (*g_engfuncs.pfnGetPlayerUserId)(*(edict_t **)(*(int *)(this_01 + 4) + 0x208));
      pcVar6 = UTIL_VarArgs((byte_conflict *)s_kick___i_10098a64);
      (*g_engfuncs.pfnServerCommand)(pcVar6);
      iVar14 = 0;
      iVar13 = 0;
      iVar12 = 0;
      iVar4 = 0;
      puVar8 = UTIL_VarArgs((byte_conflict *)s__s_kicked_for_teamkilling_10098a48);
    }
    else {
      __ftol();
      puVar8 = UTIL_VarArgs((byte_conflict *)s_You_have_been_banned_for_teamkil_10098ad8);
      FUN_100675b0((int)param_2,2,puVar8,iVar4,iVar12,iVar13,iVar14);
      (*g_engfuncs.pfnGetPlayerUserId)(*(edict_t **)(*(int *)(this_01 + 4) + 0x208));
      __ftol();
      pcVar6 = UTIL_VarArgs((byte_conflict *)s_banid__i___i_kick_10098ac4);
      (*g_engfuncs.pfnServerCommand)(pcVar6);
      iVar14 = 0;
      iVar13 = 0;
      iVar12 = 0;
      iVar4 = 0;
      __ftol();
      puVar8 = UTIL_VarArgs((byte_conflict *)s__s_banned_for_teamkilling___i_mi_10098a9c);
    }
    UTIL_ClientPrintAll(3,puVar8,iVar4,iVar12,iVar13,iVar14);
  }
LAB_1004ffa6:
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbbf4,(float *)0x0,(edict_t *)0x0);
  iVar4 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1[1] + 0x208));
  (*g_engfuncs.pfnWriteByte)(iVar4);
  lVar11 = __ftol();
  (*g_engfuncs.pfnWriteShort)((int)lVar11);
  (*g_engfuncs.pfnWriteShort)(param_1[0x2a2]);
  (*g_engfuncs.pfnWriteShort)(0);
  iVar4 = (**(code **)(*(int *)this + 0xcc))();
  (*g_engfuncs.pfnWriteShort)(iVar4 + 1);
  (*g_engfuncs.pfnMessageEnd)();
  peVar3 = (edict_t *)param_2[0x82];
  if ((((peVar3 != (edict_t *)0x0) ||
       (peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar3 != (edict_t *)0x0)) &&
      (piVar1 = peVar3->pvPrivateData, piVar1 != (int *)0x0)) &&
     (iVar4 = (**(code **)(*piVar1 + 0x2c))(), iVar4 == 2)) {
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbbf4,(float *)0x0,(edict_t *)0x0);
    iVar4 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(piVar1[1] + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar4);
    lVar11 = __ftol();
    (*g_engfuncs.pfnWriteShort)((int)lVar11);
    (*g_engfuncs.pfnWriteShort)(piVar1[0x2a2]);
    (*g_engfuncs.pfnWriteShort)(0);
    iVar4 = (**(code **)(*(int *)this + 0xcc))();
    (*g_engfuncs.pfnWriteShort)(iVar4 + 1);
    (*g_engfuncs.pfnMessageEnd)();
    piVar1[0x2a7] = (int)gpGlobals->time;
  }
  FUN_10045910(0x100ac8c0);
  return;
}

/* 10050140  CHalfLifeMultiplay::IsValidTeam  (205 bytes)
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
  
  uVar1 = FUN_1007e860(this,param_1,(byte_conflict *)s_barney_10098c34);
  if (uVar1 == 0) {
    return false;
  }
  uVar1 = FUN_1007e860(this_00,param_1,&DAT_10098c2c);
  if (uVar1 == 0) {
    return false;
  }
  uVar1 = FUN_1007e860(this_01,param_1,&DAT_10098c24);
  if (uVar1 == 0) {
    return false;
  }
  uVar1 = FUN_1007e860(this_02,param_1,(byte_conflict *)s_helmet_10098c1c);
  if (uVar1 == 0) {
    return false;
  }
  uVar1 = FUN_1007e860(this_03,param_1,(byte_conflict *)s_hgrunt_10098c14);
  if (uVar1 == 0) {
    return false;
  }
  uVar1 = FUN_1007e860(this_04,param_1,(byte_conflict *)s_recon_10098c0c);
  if (uVar1 == 0) {
    return false;
  }
  uVar1 = FUN_1007e860(this_05,param_1,&DAT_10098c04);
  if (uVar1 == 0) {
    return false;
  }
  uVar1 = FUN_1007e860(this_06,param_1,(byte_conflict *)s_scientist_10098bf8);
  if (uVar1 == 0) {
    return false;
  }
  uVar1 = FUN_1007e860(this_07,param_1,(byte_conflict *)s_zombie_10098bf0);
  return uVar1 != 0;
}

/* 10050210  CHalfLifeMultiplay::ClientUserInfoChanged  (285 bytes)
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
  bVar1 = FUN_10064a20((int)param_1,in_stack_0000000c);
  if (bVar1) {
    key = &DAT_10091ce0;
    pcVar2 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(param_1[1] + 0x208));
    (*g_engfuncs.pfnSetClientKeyValue)(clientIndex,pcVar2,key,unaff_ESI);
    return;
  }
  pbVar3 = (byte_conflict *)(*g_engfuncs.pfnInfoKeyValue)(in_stack_0000000c,s_model_10091b60);
  key_00 = param_1 + 0x2a8;
  uVar4 = FUN_1007e860(this_00,pbVar3,(byte_conflict *)key_00);
  if (uVar4 != 0) {
    if ((_DAT_10093b44 == 0.0) && (iVar5 = (**(code **)(*piStack_3f8 + 0xf0))(pbVar3), iVar5 != 0))
    {
      return;
    }
    pcVar2 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(param_1[1] + 0x208));
    (*g_engfuncs.pfnSetClientKeyValue)(clientIndex,pcVar2,(char *)key_00,unaff_EBX);
    FUN_1006e69a(auStack_3e0,(byte_conflict *)s___Can_t_change_team_to___s__100974f8);
    FUN_10067640(auStack_3e0,param_1);
    FUN_1006e69a(auStack_3e0,(byte_conflict *)s___HLDM_models_not_allowed__10098c3c);
    FUN_10067640(auStack_3e0,param_1);
  }
  return;
}

