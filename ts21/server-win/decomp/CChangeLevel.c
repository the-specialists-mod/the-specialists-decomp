/* mp.dll - CChangeLevel (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003b160  CChangeLevel::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CChangeLevel::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CChangeLevel_100979e0,(int)param_1,0x10097628,4);
  return;
}

/* 1003b190  CChangeLevel::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CChangeLevel::Restore(CBaseToggle *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CChangeLevel_100979e0,(int)param_1,0x10097628,4);
  return;
}

/* 1003b1c0  CChangeLevel::KeyValue  (305 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CChangeLevel::KeyValue(CChangeLevel *this,int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  
  pcVar6 = *(char **)(param_1 + 4);
  iVar2 = 4;
  bVar8 = true;
  pcVar4 = pcVar6;
  pcVar7 = &DAT_10097a54;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar8 = *pcVar4 == *pcVar7;
    pcVar4 = pcVar4 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (!bVar8) {
    iVar2 = 9;
    bVar8 = true;
    pcVar4 = pcVar6;
    pcVar7 = s_landmark_10097a24;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar8 = *pcVar4 == *pcVar7;
      pcVar4 = pcVar4 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar2 = 0xd;
      bVar8 = true;
      pcVar4 = pcVar6;
      pcVar7 = s_changetarget_10091424;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar8 = *pcVar4 == *pcVar7;
        pcVar4 = pcVar4 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
        *(int *)&this->field_0x130 = iVar2;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      puVar5 = (undefined1 *)0xc;
      bVar8 = true;
      pcVar4 = s_changedelay_100979f0;
      do {
        if (puVar5 == (undefined1 *)0x0) break;
        puVar5 = puVar5 + -1;
        bVar8 = *pcVar6 == *pcVar4;
        pcVar6 = pcVar6 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar8);
      if (bVar8) {
        fVar9 = FUN_1006e0fb(puVar5,*(byte_conflict **)(param_1 + 8));
        *(float *)&this->field_0x134 = (float)fVar9;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      CBaseTrigger::KeyValue((CBaseTrigger *)this,param_1);
      return;
    }
    uVar3 = 0xffffffff;
    pcVar6 = *(char **)(param_1 + 8);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (0x1f < ~uVar3 - 1) {
      (*g_engfuncs.pfnAlertMessage)
                (at_error,s_Landmark_name___s__too_long__32_c_100979fc,*(char **)(param_1 + 8));
    }
    pcVar4 = *(char **)(param_1 + 8);
    pcVar6 = &this->field_0x110;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar6 = cVar1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  uVar3 = 0xffffffff;
  pcVar6 = *(char **)(param_1 + 8);
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (0x1f < ~uVar3 - 1) {
    (*g_engfuncs.pfnAlertMessage)
              (at_error,s_Map_name___s__too_long__32_chars_10097a30,*(char **)(param_1 + 8));
  }
  pcVar4 = *(char **)(param_1 + 8);
  pcVar6 = &this->field_0xf0;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 1003b300  CChangeLevel::Spawn  (136 bytes)
 * undefined Spawn()
 */
void __fastcall CChangeLevel::Spawn(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 1;
  bVar4 = true;
  pcVar2 = (char *)(param_1 + 0xf0);
  pcVar3 = &DAT_1009f428;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_a_trigger_changelevel_doesn_t_ha_10097a8c);
  }
  iVar1 = 1;
  bVar4 = true;
  pcVar2 = (char *)(param_1 + 0x110);
  pcVar3 = &DAT_1009f428;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,s_trigger_changelevel_to__s_doesn__10097a58,(char *)(param_1 + 0xf0));
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

/* 1003b390  CChangeLevel::ExecuteChangeLevel  (59 bytes)
 * void ExecuteChangeLevel(void)
 */
/* public: void __thiscall CChangeLevel::ExecuteChangeLevel(void) */

void __thiscall CChangeLevel::ExecuteChangeLevel(CChangeLevel *this)

{
                    /* 0x3b390  40  ?ExecuteChangeLevel@CChangeLevel@@QAEXXZ */
  (*g_engfuncs.pfnMessageBegin)(2,0x20,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(3);
  (*g_engfuncs.pfnWriteByte)(3);
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnMessageBegin)(2,0x1e,(float *)0x0,(edict_t *)0x0);
                    /* WARNING: Could not recover jumptable at 0x1003b3c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 1003b3d0  CChangeLevel::FindLandmark  (120 bytes)
 * int FindLandmark(undefined4 param_1)
 * called by: CChangeLevel::ChangeLevelNow, CChangeLevel::ChangeList
 */
int __cdecl CChangeLevel::FindLandmark(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  edict_t *pEdictStartSearchAfter;
  char *pszField;
  char *pszValue;
  
  pszField = s_targetname_100915e4;
  pEdictStartSearchAfter = (edict_t *)0x0;
  pszValue = param_1;
  do {
    pEdictStartSearchAfter =
         (*g_engfuncs.pfnFindEntityByString)(pEdictStartSearchAfter,pszField,pszValue);
    if ((pEdictStartSearchAfter == (edict_t *)0x0) ||
       (iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter), iVar1 == 0)) {
      (*g_engfuncs.pfnAlertMessage)(at_error,s_Can_t_find_landmark__s_10097ab8,param_1);
      return 0;
    }
    iVar1 = 0xe;
    bVar4 = true;
    pcVar2 = gpGlobals->pStringBase + (pEdictStartSearchAfter->v).classname;
    pcVar3 = s_info_landmark_10092e00;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      return (int)pEdictStartSearchAfter;
    }
  } while( true );
}

/* 1003b450  CChangeLevel::UseChangeLevel  (13 bytes)
 * void UseChangeLevel(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CChangeLevel::UseChangeLevel(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CChangeLevel::UseChangeLevel
          (CChangeLevel *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
                    /* 0x3b450  120
                       ?UseChangeLevel@CChangeLevel@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  ChangeLevelNow(this,(int *)param_1);
  return;
}

/* 1003b460  CChangeLevel::ChangeLevelNow  (421 bytes)
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
  char *pcVar7;
  char *pcVar8;
  int *piVar9;
  int *in_stack_0000000c;
  
  iVar5 = (**(code **)(*DAT_1009f494 + 0x1c))();
  if (iVar5 != 0) {
    return;
  }
  if (gpGlobals->time != this->pev->dmgtime) {
    this->pev->dmgtime = gpGlobals->time;
    peVar6 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
    if ((peVar6 == (edict_t *)0x0) &&
       (peVar6 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar6 == (edict_t *)0x0)) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = peVar6->pvPrivateData;
    }
    pcVar8 = &this->field_0x110;
    iVar5 = FUN_1003b740(piVar9,pcVar8);
    if (iVar5 != 0) {
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
      pcVar7 = &this->field_0xf0;
      iVar5 = (int)&DAT_100ac7fc - (int)pcVar7;
      do {
        cVar1 = *pcVar7;
        pcVar7[iVar5] = cVar1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      EHANDLE::operator=((EHANDLE *)&this->field_0xc4,(int)in_stack_0000000c);
      CBaseDelay::SUB_UseTargets((CBaseDelay *)this,in_stack_0000000c,3,0);
      DAT_100ac7dc = 0;
      peVar6 = (edict_t *)FindLandmark(pcVar8);
      if ((peVar6 != (edict_t *)0x0) &&
         (iVar5 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar6), iVar5 != 0)) {
        iVar5 = (int)&DAT_100ac7dc - (int)pcVar8;
        do {
          cVar1 = *pcVar8;
          pcVar8[iVar5] = cVar1;
          pgVar4 = gpGlobals;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        gpGlobals->vecLandmarkOffset[0] = (peVar6->v).origin[0];
        pgVar4->vecLandmarkOffset[1] = (peVar6->v).origin[1];
        pgVar4->vecLandmarkOffset[2] = (peVar6->v).origin[2];
      }
      (*g_engfuncs.pfnAlertMessage)
                (at_console,s_CHANGE_LEVEL___s__s_10097ad0,&DAT_100ac7fc,&DAT_100ac7dc);
      (*g_engfuncs.pfnChangeLevel)(&DAT_100ac7fc,&DAT_100ac7dc);
      return;
    }
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_Player_isn_t_in_the_transition_v_10097ae8,pcVar8);
    return;
  }
  return;
}

/* 1003b610  CChangeLevel::TouchChangeLevel  (61 bytes)
 * void TouchChangeLevel(CBaseEntity * param_1)
 */
/* public: void __thiscall CChangeLevel::TouchChangeLevel(class CBaseEntity *) */

void __thiscall CChangeLevel::TouchChangeLevel(CChangeLevel *this,CBaseEntity *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
                    /* 0x3b610  116  ?TouchChangeLevel@CChangeLevel@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = 7;
  bVar4 = true;
  pcVar2 = gpGlobals->pStringBase + **(int **)(param_1 + 4);
  pcVar3 = s_player_100915d0;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    ChangeLevelNow(this,(int *)param_1);
    return;
  }
  return;
}

/* 1003b800  CChangeLevel::ChangeList  (677 bytes)
 * int ChangeList(void)
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
  FUN_1006f1c0();
  iVar9 = 0;
  peVar3 = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,s_classname_100912d4,s_trigger_changelevel_10097b58);
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
    }
    iVar4 = FindLandmark(puVar6 + 0x44);
    if (((iVar4 != 0) &&
        (iVar4 = FUN_1003b650(in_stack_00001024,iVar9,(byte_conflict *)(puVar6 + 0x3c),
                              (char *)(puVar6 + 0x44),iVar4), iVar4 != 0)) &&
       (iVar9 = iVar9 + 1, in_stack_00001028 <= iVar9)) break;
    peVar3 = (*g_engfuncs.pfnFindEntityByString)
                       (peVar3,s_classname_100912d4,s_trigger_changelevel_10097b58);
  }
  pvVar1 = gpGlobals->pSaveData;
  if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x28) != 0)) {
    iStack00000004 = iVar9;
    FUN_10068940(&stack0x00000010,pvVar1);
    iStack0000000c = 0;
    pbStack00000008 = in_stack_00001024;
    if (0 < iVar9) {
      do {
        iVar9 = 0;
        peVar3 = (*g_engfuncs.pfnEntitiesInPVS)(*(edict_t **)(pbStack00000008 + 0x40));
        while ((peVar3 != (edict_t *)0x0 &&
               (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar3), iVar4 != 0))) {
          piVar2 = peVar3->pvPrivateData;
          if ((piVar2 != (int *)0x0) && (uVar7 = (**(code **)(*piVar2 + 0x20))(), -1 < (int)uVar7))
          {
            uVar11 = 0;
            if ((uVar7 & 2) != 0) {
              uVar11 = 0x20000000;
            }
            if ((*(int *)(piVar2[1] + 4) != 0) && (uVar7 = FUN_1000cad0((int)piVar2), uVar7 == 0)) {
              uVar11 = uVar11 | 0x10000000;
            }
            if (uVar11 != 0) {
              *(int **)(&stack0x00000814 + iVar9 * 4) = piVar2;
              *(uint *)(&stack0x00000014 + iVar9 * 4) = uVar11;
              iVar9 = iVar9 + 1;
              if (0x200 < iVar9) {
                (*g_engfuncs.pfnAlertMessage)(at_error,s_Too_many_entities_across_a_trans_10097b30);
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
              iVar8 = FUN_1003b740(piVar2,pbStack00000008 + 0x20);
              if (iVar8 != 0) {
                iVar8 = FUN_10068960(&stack0x00000010,(int)piVar2);
                FUN_10068a40(&stack0x00000010,iVar8,1 << ((byte)iStack0000000c & 0x1f) | uVar7);
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
    FUN_10068950();
  }
  ExceptionList = in_stack_00001014;
  return iVar9;
}

