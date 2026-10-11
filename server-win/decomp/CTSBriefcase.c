/* mp.dll - CTSBriefcase (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1005d3c0  CTSBriefcase::CTSBriefcase  (72 bytes)
 * undefined4 * CTSBriefcase(undefined4 * param_1)
 * called by: GetClassPtr<CTSBriefcase>
 */
undefined4 * __fastcall CTSBriefcase::CTSBriefcase(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_DeathNotice_1009409c;
  DAT_100d97e4 = DAT_100d97e4 + 1;
  if (0xf < DAT_100d97e4) {
    DAT_100d97e4 = 1;
  }
  param_1[0x1f] = DAT_100d97e4;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x16] = 0xffffffff;
  puVar2 = param_1 + 0x20;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

/* 1005d410  CTSBriefcase::KeyValue  (207 bytes)
 * undefined KeyValue()
 */
void __thiscall CTSBriefcase::KeyValue(void *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  void *this;
  char *pcVar6;
  bool bVar7;
  undefined3 uVar5;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pcVar6 = s_contents_100a5098;
  pbVar2 = pbVar4;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1005d44a:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1005d44f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1005d44a;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005d44f:
  if (iVar3 == 0) {
    _strncpy((char *)((int)param_1 + 0x5c),*(char **)(param_2 + 8),0x1f);
    *(undefined1 *)((int)param_1 + 0x7b) = 0;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar6 = s_ownerteam_100a508c;
  do {
    bVar1 = *pbVar4;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1005d4a6:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1005d4ab;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    this = (void *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1005d4a6;
    pbVar4 = pbVar4 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005d4ab:
  if (iVar3 == 0) {
    iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(int *)((int)param_1 + 0x58) = iVar3 + -1;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 1005d4e0  CTSBriefcase::Spawn  (316 bytes)
 * undefined Spawn()
 */
void __fastcall CTSBriefcase::Spawn(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  **(int **)(param_1 + 4) = (int)s_ts_briefcase_100a3f68 - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  iVar2 = *(int *)(param_1 + 4);
  UTIL_SetSize(iVar2,iVar2 + 0xdc,iVar2 + 0xe8);
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 5;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(code **)(param_1 + 0x14) = CaptureTouch;
  *(code **)(param_1 + 0x10) = FlagFall;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 1.0;
  iVar2 = -1;
  pcVar5 = (char *)(param_1 + 0x5c);
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (iVar2 == -2) {
    uVar3 = 0xffffffff;
    pcVar5 = s_a_flag_100a50a4;
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
    pcVar6 = (char *)(param_1 + 0x5c);
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
  pcVar5 = gpGlobals->pStringBase;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x7c);
  *(int *)(param_1 + 0x84) = (param_1 - (int)pcVar5) + 0x5c;
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x58);
  EHANDLE::operator=((EHANDLE *)(param_1 + 0x94),param_1);
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}

/* 1005d620  CTSBriefcase::FlagFall  (212 bytes)
 * undefined FlagFall(int param_1)
 */
void __fastcall CTSBriefcase::FlagFall(int param_1)

{
  int *piVar1;
  undefined4 uStack00000018;
  
  piVar1 = CTSFlag::CreateFlag((int *)0x0,(int *)(param_1 + 0x80));
  piVar1[0x1e] = 0;
  *(float *)(piVar1[1] + 8) =
       (*(float *)(*(int *)(param_1 + 4) + 0xe8) + *(float *)(*(int *)(param_1 + 4) + 0xdc)) * 0.5;
  *(float *)(piVar1[1] + 0xc) =
       (*(float *)(*(int *)(param_1 + 4) + 0xec) + *(float *)(*(int *)(param_1 + 4) + 0xe0)) * 0.5;
  *(float *)(piVar1[1] + 0x10) =
       (*(float *)(*(int *)(param_1 + 4) + 0xf0) + *(float *)(*(int *)(param_1 + 4) + 0xe4)) * 0.5;
  *(undefined1 *)(param_1 + 0x54) = 1;
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100d97cc,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnWriteByte)(*(int *)(param_1 + 0x88));
  (*g_engfuncs.pfnWriteByte)(*(int *)(param_1 + 0x8c) + 1);
  (*g_engfuncs.pfnWriteByte)(0);
  uStack00000018 = 0x1005d6d4;
  (*g_engfuncs.pfnMessageEnd)();
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 1.0;
  *(code **)(param_1 + 0x10) = CTSGroundAmmo::WaitThink;
  return;
}

/* 1005d760  CTSBriefcase::CaptureTouch  (864 bytes)
 * void CaptureTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSBriefcase::CaptureTouch(class CBaseEntity *) */

void __thiscall CTSBriefcase::CaptureTouch(CTSBriefcase *this,CBaseEntity *param_1)

{
  edict_t *e;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  byte_conflict *pbVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  
                    /* 0x5d760  24  ?CaptureTouch@CTSBriefcase@@QAEXPAVCBaseEntity@@@Z */
  if ((((this[0x54] != (CTSBriefcase)0x0) &&
       (iVar3 = (**(code **)(*(int *)param_1 + 0xc0))(), iVar3 != 0)) &&
      (iVar3 = (**(code **)(*(int *)param_1 + 0xac))(), iVar3 != 0)) &&
     ((cVar1 = FUN_1004d060((int)param_1), cVar1 != '\0' &&
      (bVar2 = FUN_1005d720(this,(int *)param_1), bVar2)))) {
    e = *(edict_t **)(*(int *)(param_1 + 4) + 0x208);
    (*g_engfuncs.pfnGetPlayerUserId)(e);
    (*g_engfuncs.pfnGetPlayerAuthId)(e);
    (*g_engfuncs.pfnGetPlayerUserId)(e);
    UTIL_LogPrintf((byte_conflict *)s___s<_i><_s><_i>__triggered__capt_100a50d4);
    iVar3 = EHANDLE::operator->((uint *)(param_1 + 2000));
    if (iVar3 != 0) {
      *(code **)(iVar3 + 0x10) = FlagFall;
      *(float *)(*(int *)(iVar3 + 4) + 0x104) = gpGlobals->time + 0.25;
    }
    iVar3 = 1;
    CBasePlayer::DropFlag((CBasePlayer *)param_1,'\x01');
    if (*(int *)(*(int *)(this + 4) + 0x1c8) != 0) {
      FireTargets((int)(gpGlobals->pStringBase + *(int *)(*(int *)(this + 4) + 0x1c8)),this,this,3,0
                 );
    }
    if (*(int *)(*(int *)(this + 4) + 0x1d4) != 0) {
      TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + *(int *)(*(int *)(this + 4) + 0x1d4))
      ;
    }
    iVar4 = FUN_1004f150();
    if (iVar4 < 2) {
      puVar9 = &DAT_100c0a6c;
      do {
        puVar9[-1] = 0;
        *puVar9 = 0;
        puVar9[-2] = 0;
        puVar9 = puVar9 + 0x23;
      } while ((int)puVar9 < 0x100c0c9c);
      TSHudMessageAll(0,0,0,8,0x1e,s_Waiting_for_other_players__100a4074);
    }
    else {
      *(float *)(*(int *)(param_1 + 4) + 0x164) = *(float *)(*(int *)(param_1 + 4) + 0x164) + 10.0;
      pcVar5 = UTIL_VarArgs((byte_conflict *)s__s_captured_the_briefcase___i__T_100a50ac);
      TSHudMessageAll(0,0xff,0,4,0x1e,pcVar5);
      (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9718,(float *)0x0,(edict_t *)0x0);
      iVar4 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
      (*g_engfuncs.pfnWriteByte)(iVar4);
      lVar10 = __ftol();
      (*g_engfuncs.pfnWriteShort)((int)lVar10);
      (*g_engfuncs.pfnWriteShort)(*(int *)(param_1 + 0xb1c));
      (*g_engfuncs.pfnWriteShort)(0);
      iVar4 = (**(code **)(*g_pGameRules + 200))();
      (*g_engfuncs.pfnWriteShort)(iVar4 + 1);
      (*g_engfuncs.pfnMessageEnd)();
      pbVar6 = (byte_conflict *)(**(code **)(*(int *)param_1 + 200))();
      iVar4 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pbVar6);
      if (-1 < iVar4) {
        (&DAT_100c0a6c)[iVar4 * 0x23] = (&DAT_100c0a6c)[iVar4 * 0x23] + 1;
      }
      if (0 < gpGlobals->maxClients) {
        do {
          piVar7 = (int *)UTIL_PlayerByIndex(iVar3);
          if ((piVar7 != (int *)0x0) && (iVar8 = (**(code **)(*piVar7 + 0xc0))(), iVar8 != 0)) {
            pbVar6 = (byte_conflict *)(**(code **)(*piVar7 + 200))();
            iVar8 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pbVar6);
            (*g_engfuncs.pfnMessageBegin)
                      (1,DAT_100d97c8,(float *)0x0,*(edict_t **)(piVar7[1] + 0x208));
            (*g_engfuncs.pfnWriteByte)((uint)(iVar4 != iVar8));
            (*g_engfuncs.pfnMessageEnd)();
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 <= gpGlobals->maxClients);
      }
    }
    pcVar5 = &DAT_100c0a70;
    do {
      if (*pcVar5 != '\0') {
        (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9720,(float *)0x0,(edict_t *)0x0);
        (*g_engfuncs.pfnWriteString)(pcVar5);
        (*g_engfuncs.pfnWriteShort)(*(int *)(pcVar5 + -4));
        (*g_engfuncs.pfnWriteShort)(0);
        (*g_engfuncs.pfnMessageEnd)();
      }
      pcVar5 = pcVar5 + 0x8c;
    } while ((int)pcVar5 < 0x100c0ca0);
  }
  return;
}

