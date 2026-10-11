/* mp.dll - CChangeLevel (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10041e60  CChangeLevel::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CChangeLevel::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CChangeLevel_100a2c90,(int)param_1,0x100a28d8,4);
  return;
}

/* 10041e90  CChangeLevel::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CChangeLevel::Restore(CBaseToggle *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CChangeLevel_100a2c90,(int)param_1,&DAT_100a28d8,4);
  return;
}

/* 10041ec0  CChangeLevel::KeyValue  (475 bytes)
 * undefined KeyValue()
 */
void __thiscall CChangeLevel::KeyValue(CBaseTrigger *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  CBaseTrigger *pCVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  float10 fVar14;
  undefined3 uVar9;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pbVar10 = &DAT_100a2d04;
  pbVar3 = pbVar5;
  pCVar6 = param_1;
  do {
    bVar2 = *pbVar3;
    uVar9 = (undefined3)((uint)pCVar6 >> 8);
    pCVar6 = (CBaseTrigger *)CONCAT31(uVar9,bVar2);
    bVar13 = bVar2 < *pbVar10;
    if (bVar2 != *pbVar10) {
LAB_10041ef8:
      iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_10041efd;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    pCVar6 = (CBaseTrigger *)CONCAT31(uVar9,bVar2);
    bVar13 = bVar2 < pbVar10[1];
    if (bVar2 != pbVar10[1]) goto LAB_10041ef8;
    pbVar3 = pbVar3 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_10041efd:
  if (iVar4 != 0) {
    pcVar11 = s_landmark_100a2cd4;
    pbVar3 = pbVar5;
    do {
      bVar2 = *pbVar3;
      uVar9 = (undefined3)((uint)pCVar6 >> 8);
      pCVar6 = (CBaseTrigger *)CONCAT31(uVar9,bVar2);
      bVar13 = bVar2 < (byte)*pcVar11;
      if (bVar2 != *pcVar11) {
LAB_10041f83:
        iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_10041f88;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      pCVar6 = (CBaseTrigger *)CONCAT31(uVar9,bVar2);
      bVar13 = bVar2 < (byte)pcVar11[1];
      if (bVar2 != pcVar11[1]) goto LAB_10041f83;
      pbVar3 = pbVar3 + 2;
      pcVar11 = pcVar11 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_10041f88:
    if (iVar4 != 0) {
      pcVar11 = s_changetarget_1009c4cc;
      pbVar3 = pbVar5;
      do {
        bVar2 = *pbVar3;
        uVar9 = (undefined3)((uint)pCVar6 >> 8);
        pCVar6 = (CBaseTrigger *)CONCAT31(uVar9,bVar2);
        bVar13 = bVar2 < (byte)*pcVar11;
        if (bVar2 != *pcVar11) {
LAB_1004200e:
          iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_10042013;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        pCVar6 = (CBaseTrigger *)CONCAT31(uVar9,bVar2);
        bVar13 = bVar2 < (byte)pcVar11[1];
        if (bVar2 != pcVar11[1]) goto LAB_1004200e;
        pbVar3 = pbVar3 + 2;
        pcVar11 = pcVar11 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_10042013:
      if (iVar4 == 0) {
        iVar4 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
        *(int *)&param_1[1].field_0x40 = iVar4;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar11 = s_changedelay_100a2ca0;
      do {
        bVar2 = *pbVar5;
        uVar9 = (undefined3)((uint)pCVar6 >> 8);
        pCVar6 = (CBaseTrigger *)CONCAT31(uVar9,bVar2);
        bVar13 = bVar2 < (byte)*pcVar11;
        if (bVar2 != *pcVar11) {
LAB_10042063:
          iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_10042068;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        pCVar6 = (CBaseTrigger *)CONCAT31(uVar9,bVar2);
        bVar13 = bVar2 < (byte)pcVar11[1];
        if (bVar2 != pcVar11[1]) goto LAB_10042063;
        pbVar5 = pbVar5 + 2;
        pcVar11 = pcVar11 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_10042068:
      if (iVar4 == 0) {
        fVar14 = atof((undefined *)pCVar6,*(byte_conflict **)(param_2 + 8));
        *(float *)&param_1[1].field_0x44 = (float)fVar14;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      CBaseTrigger::KeyValue(param_1,param_2);
      return;
    }
    uVar7 = 0xffffffff;
    pcVar11 = *(char **)(param_2 + 8);
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    if (0x1f < ~uVar7 - 1) {
      (*g_engfuncs.pfnAlertMessage)
                (at_error,s_Landmark_name___s__too_long__32_c_100a2cac,*(char **)(param_2 + 8));
    }
    uVar7 = 0xffffffff;
    pcVar11 = *(char **)(param_2 + 8);
    do {
      pcVar12 = pcVar11;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar11 = pcVar12 + -uVar7;
    pcVar12 = &param_1[1].field_0x20;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  uVar7 = 0xffffffff;
  pcVar11 = *(char **)(param_2 + 8);
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  if (0x1f < ~uVar7 - 1) {
    (*g_engfuncs.pfnAlertMessage)
              (at_error,s_Map_name___s__too_long__32_chars_100a2ce0,*(char **)(param_2 + 8));
  }
  uVar7 = 0xffffffff;
  pcVar11 = *(char **)(param_2 + 8);
  do {
    pcVar12 = pcVar11;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar11 = pcVar12 + -uVar7;
  pCVar6 = param_1 + 1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    pCVar6->vtable = *(void ***)pcVar11;
    pcVar11 = pcVar11 + 4;
    pCVar6 = (CBaseTrigger *)&pCVar6->pev;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(char *)&pCVar6->vtable = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pCVar6 = (CBaseTrigger *)((int)&pCVar6->vtable + 1);
  }
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

/* 100420a0  CChangeLevel::Spawn  (212 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CChangeLevel::Spawn(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar4 = &DAT_100a9398;
  pbVar2 = (byte *)(param_1 + 0xf0);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_100420db:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_100420e0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_100420db;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100420e0:
  if (iVar3 == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_a_trigger_changelevel_doesn_t_ha_100a2d3c);
  }
  pbVar4 = &DAT_100a9398;
  pbVar2 = (byte *)(param_1 + 0x110);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_10042127:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_1004212c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_10042127;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1004212c:
  if (iVar3 == 0) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,s_trigger_changelevel_to__s_doesn__100a2d08,(byte *)(param_1 + 0xf0));
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x1cc) != 0) {
    *(code **)(param_1 + 0x18) = UseChangeLevel;
  }
  CBaseTrigger::InitTrigger(param_1);
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) == 0) {
    *(code **)(param_1 + 0x14) = TouchChangeLevel;
  }
  return;
}

/* 10042180  CChangeLevel::ExecuteChangeLevel  (59 bytes)
 * void ExecuteChangeLevel(void)
 */
/* public: void __thiscall CChangeLevel::ExecuteChangeLevel(void) */

void __thiscall CChangeLevel::ExecuteChangeLevel(CChangeLevel *this)

{
                    /* 0x42180  42  ?ExecuteChangeLevel@CChangeLevel@@QAEXXZ */
  (*g_engfuncs.pfnMessageBegin)(2,0x20,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(3);
  (*g_engfuncs.pfnWriteByte)(3);
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnMessageBegin)(2,0x1e,(float *)0x0,(edict_t *)0x0);
                    /* WARNING: Could not recover jumptable at 0x100421b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 100421c0  CChangeLevel::FindLandmark  (158 bytes)
 * int FindLandmark(undefined4 param_1)
 * called by: CChangeLevel::ChangeLevelNow, CChangeLevel::ChangeList
 */
int __cdecl CChangeLevel::FindLandmark(char *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  bool bVar5;
  edict_t *pEdictStartSearchAfter;
  char *pszField;
  char *pszValue;
  
  pszField = s_targetname_1009c68c;
  pEdictStartSearchAfter = (edict_t *)0x0;
  pszValue = param_1;
  do {
    pEdictStartSearchAfter =
         (*g_engfuncs.pfnFindEntityByString)(pEdictStartSearchAfter,pszField,pszValue);
    if ((pEdictStartSearchAfter == (edict_t *)0x0) ||
       (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter), iVar2 == 0)) {
      (*g_engfuncs.pfnAlertMessage)(at_error,s_Can_t_find_landmark__s_100a2d68,param_1);
      return 0;
    }
    pcVar4 = s_info_landmark_1009def8;
    pbVar3 = (byte *)(gpGlobals->pStringBase + (pEdictStartSearchAfter->v).classname);
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_1004222d:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10042232;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_1004222d;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_10042232:
    if (iVar2 == 0) {
      return (int)pEdictStartSearchAfter;
    }
  } while( true );
}

/* 10042260  CChangeLevel::UseChangeLevel  (13 bytes)
 * void UseChangeLevel(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CChangeLevel::UseChangeLevel(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CChangeLevel::UseChangeLevel
          (CChangeLevel *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
                    /* 0x42260  127
                       ?UseChangeLevel@CChangeLevel@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  ChangeLevelNow(this,(int *)param_1);
  return;
}

/* 10042270  CChangeLevel::ChangeLevelNow  (453 bytes)
 * undefined ChangeLevelNow(int * param_1)
 * called by: CChangeLevel::TouchChangeLevel, CChangeLevel::UseChangeLevel
 */
void __thiscall CChangeLevel::ChangeLevelNow(CChangeLevel *this,int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  globalvars_t *pgVar4;
  int iVar5;
  edict_t *peVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  int *in_stack_0000000c;
  
  iVar5 = (**(code **)(*g_pGameRules + 0x18))();
  if (iVar5 != 0) {
    return;
  }
  if (gpGlobals->time == this->pev->dmgtime) {
    return;
  }
  this->pev->dmgtime = gpGlobals->time;
  peVar6 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
  if ((peVar6 == (edict_t *)0x0) &&
     (peVar6 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar6 == (edict_t *)0x0)) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = peVar6->pvPrivateData;
  }
  pcVar11 = &this->field_0x110;
  iVar5 = FUN_100425e0(piVar9,pcVar11);
  if (iVar5 == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_Player_isn_t_in_the_transition_v_100a2d98,pcVar11);
    return;
  }
  if ((*(int *)&this->field_0x130 != 0) && (iVar5 = GetClassPtr<CFireAndDie>(0), iVar5 != 0)) {
    *(undefined4 *)(*(int *)(iVar5 + 4) + 0x1c8) = *(undefined4 *)&this->field_0x130;
    *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)&this->field_0x134;
    iVar2 = piVar9[1];
    iVar3 = *(int *)(iVar5 + 4);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
    pfnSpawn(*(edict_t **)(*(int *)(iVar5 + 4) + 0x208));
  }
  uVar7 = 0xffffffff;
  pcVar10 = &this->field_0xf0;
  do {
    pcVar12 = pcVar10;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar12 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar10 = pcVar12 + -uVar7;
  pcVar12 = (char *)&DAT_100c07f4;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar12 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  }
  EHANDLE::operator=((EHANDLE *)&this->field_0xc4,(int)in_stack_0000000c);
  CBaseDelay::SUB_UseTargets((CBaseDelay *)this,in_stack_0000000c,3,0);
  DAT_100c07d4._0_1_ = 0;
  peVar6 = (edict_t *)FindLandmark(pcVar11);
  if ((peVar6 != (edict_t *)0x0) &&
     (iVar5 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar6), iVar5 != 0)) {
    uVar7 = 0xffffffff;
    do {
      pcVar10 = pcVar11;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar11 = pcVar10 + -uVar7;
    pcVar10 = (char *)&DAT_100c07d4;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; pgVar4 = gpGlobals, uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    gpGlobals->vecLandmarkOffset[0] = (peVar6->v).origin[0];
    pgVar4->vecLandmarkOffset[1] = (peVar6->v).origin[1];
    pgVar4->vecLandmarkOffset[2] = (peVar6->v).origin[2];
  }
  (*g_engfuncs.pfnAlertMessage)
            (at_console,s_CHANGE_LEVEL___s__s_100a2d80,&DAT_100c07f4,&DAT_100c07d4);
  (*g_engfuncs.pfnChangeLevel)((char *)&DAT_100c07f4,(char *)&DAT_100c07d4);
  return;
}

/* 10042440  CChangeLevel::TouchChangeLevel  (98 bytes)
 * void TouchChangeLevel(CBaseEntity * param_1)
 */
/* public: void __thiscall CChangeLevel::TouchChangeLevel(class CBaseEntity *) */

void __thiscall CChangeLevel::TouchChangeLevel(CChangeLevel *this,CBaseEntity *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
                    /* 0x42440  123  ?TouchChangeLevel@CChangeLevel@@QAEXPAVCBaseEntity@@@Z */
  pcVar4 = s_player_1009c678;
  pbVar2 = (byte *)(gpGlobals->pStringBase + **(int **)(param_1 + 4));
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_1004248a:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_1004248f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_1004248a;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1004248f:
  if (iVar3 == 0) {
    ChangeLevelNow(this,(int *)param_1);
  }
  return;
}

/* 100426e0  CChangeLevel::ChangeList  (684 bytes)
 * int ChangeList(void)
 * called by: BuildChangeList
 */
int CChangeLevel::ChangeList(void)

{
  void *pvVar1;
  int *piVar2;
  edict_t *peVar3;
  int iVar4;
  edict_t *peVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  entvars_t *peVar10;
  uint uVar11;
  int iStack00000004;
  byte_conflict *pbStack00000008;
  int iStack0000000c;
  void *in_stack_00001014;
  byte_conflict *in_stack_00001024;
  int in_stack_00001028;
  
  ExceptionList = &stack0xfffffff4;
  FUN_1007e2e0();
  iVar9 = 0;
  peVar3 = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,s_classname_1009c37c,s_trigger_changelevel_100a2e08);
  if ((peVar3 == (edict_t *)0x0) ||
     (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar3), iVar4 == 0)) {
    ExceptionList = in_stack_00001014;
    return 0;
  }
  while ((peVar3 != (edict_t *)0x0 &&
         (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar3), iVar4 != 0))) {
    peVar10 = &peVar3->v;
    if ((peVar10 == (entvars_t *)0x0) &&
       (peVar5 = (*g_engfuncs.pfnCreateEntity)(), peVar5 != (edict_t *)0x0)) {
      peVar10 = &peVar5->v;
    }
    peVar5 = peVar10->pContainingEntity;
    if ((peVar5 == (edict_t *)0x0) || (puVar6 = peVar5->pvPrivateData, puVar6 == (undefined4 *)0x0))
    {
      puVar6 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar5,0x138);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = &vftable;
      }
      puVar6[1] = peVar10;
      if (puVar6 != (undefined4 *)0x0) goto LAB_100427b5;
    }
    else {
LAB_100427b5:
      iVar4 = FindLandmark(puVar6 + 0x44);
      if (((iVar4 != 0) &&
          (iVar4 = FUN_100424b0(in_stack_00001024,iVar9,(byte_conflict *)(puVar6 + 0x3c),
                                (char *)(puVar6 + 0x44),iVar4), iVar4 != 0)) &&
         (iVar9 = iVar9 + 1, in_stack_00001028 <= iVar9)) break;
    }
    peVar3 = (*g_engfuncs.pfnFindEntityByString)
                       (peVar3,s_classname_1009c37c,s_trigger_changelevel_100a2e08);
  }
  pvVar1 = gpGlobals->pSaveData;
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x28) != 0)) {
    iStack00000004 = iVar9;
    FUN_10077ee0(&stack0x00000010,pvVar1);
    iStack0000000c = 0;
    if (0 < iVar9) {
      pbStack00000008 = in_stack_00001024 + 0x20;
      do {
        iVar9 = 0;
        peVar3 = (*g_engfuncs.pfnEntitiesInPVS)(*(edict_t **)(pbStack00000008 + 0x20));
        while ((peVar3 != (edict_t *)0x0 &&
               (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar3), iVar4 != 0))) {
          piVar2 = peVar3->pvPrivateData;
          if ((piVar2 != (int *)0x0) &&
             (uVar7 = (**(code **)(*piVar2 + 0x30))(), (uVar7 & 0x80000000) == 0)) {
            uVar11 = 0;
            if ((uVar7 & 2) != 0) {
              uVar11 = 0x20000000;
            }
            if ((*(int *)(piVar2[1] + 4) != 0) && (uVar7 = FUN_1000edd0((int)piVar2), uVar7 == 0)) {
              uVar11 = uVar11 | 0x10000000;
            }
            if (uVar11 != 0) {
              *(int **)(&stack0x00000814 + iVar9 * 4) = piVar2;
              *(uint *)(&stack0x00000014 + iVar9 * 4) = uVar11;
              iVar9 = iVar9 + 1;
              if (0x200 < iVar9) {
                (*g_engfuncs.pfnAlertMessage)(at_error,s_Too_many_entities_across_a_trans_100a2de0);
              }
            }
          }
          peVar3 = (peVar3->v).chain;
        }
        iVar4 = 0;
        if (0 < iVar9) {
          do {
            uVar7 = *(uint *)(&stack0x00000014 + iVar4 * 4);
            if (uVar7 != 0) {
              piVar2 = *(int **)(&stack0x00000814 + iVar4 * 4);
              iVar8 = FUN_100425e0(piVar2,pbStack00000008);
              if (iVar8 != 0) {
                iVar8 = FUN_10077ef0(&stack0x00000010,(int)piVar2);
                FUN_10077fd0(&stack0x00000010,iVar8,1 << ((byte)iStack0000000c & 0x1f) | uVar7);
              }
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar9);
        }
        iStack0000000c = iStack0000000c + 1;
        pbStack00000008 = pbStack00000008 + 0x50;
        iVar9 = iStack00000004;
      } while (iStack0000000c < iStack00000004);
    }
    CBaseEntity::SUB_DoNothing((CBaseEntity *)&stack0x00000010);
  }
  ExceptionList = in_stack_00001014;
  return iVar9;
}

