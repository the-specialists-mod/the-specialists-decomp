/* ts_i386.so - CChangeLevel (12 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e7d00  CChangeLevel::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CChangeLevel::Save(CSave &) */

undefined4 __thiscall CChangeLevel::Save(CChangeLevel *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Save((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CChangeLevel",(int)this,(int *)m_SaveData,4);
  }
  return uVar2;
}

/* 000e7d50  CChangeLevel::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CChangeLevel::Restore(CRestore &) */

undefined4 __thiscall CChangeLevel::Restore(CChangeLevel *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Restore((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CChangeLevel",(int)this,(int)m_SaveData,4);
  }
  return uVar2;
}

/* 000e7da0  CChangeLevel::KeyValue  (390 bytes)
 * undefined KeyValue(int param_1)
 */
/* CChangeLevel::KeyValue(KeyValueData_s *) */

void __thiscall CChangeLevel::KeyValue(CChangeLevel *this,int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  longdouble lVar5;
  
  iVar2 = strcmp(*(char **)(param_1 + 4),"map");
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
    pcVar4 = *(char **)(param_1 + 8);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (0x1f < ~uVar3 - 1) {
      (*g_engfuncs.pfnAlertMessage)
                (at_error,"Map name \'%s\' too long (32 chars)\n",*(char **)(param_1 + 8));
    }
    strcpy(&this->field_0x104,*(char **)(param_1 + 8));
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar2 = strcmp(*(char **)(param_1 + 4),"landmark");
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
      pcVar4 = *(char **)(param_1 + 8);
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (0x1f < ~uVar3 - 1) {
        (*g_engfuncs.pfnAlertMessage)
                  (at_error,"Landmark name \'%s\' too long (32 chars)\n",*(char **)(param_1 + 8));
      }
      strcpy(&this->field_0x124,*(char **)(param_1 + 8));
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar2 = strcmp(*(char **)(param_1 + 4),"changetarget");
      if (iVar2 == 0) {
        iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
        *(int *)&this->field_0x144 = iVar2;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        iVar2 = strcmp(*(char **)(param_1 + 4),"changedelay");
        if (iVar2 == 0) {
          lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
          *(float *)&this->field_0x148 = (float)lVar5;
          *(undefined4 *)(param_1 + 0xc) = 1;
        }
        else {
          CBaseTrigger::KeyValue((CBaseTrigger *)this,param_1);
        }
      }
    }
  }
  return;
}

/* 000e7f30  CChangeLevel::Spawn  (222 bytes)
 * undefined Spawn(void)
 */
/* CChangeLevel::Spawn(void) */

void __thiscall CChangeLevel::Spawn(CChangeLevel *this)

{
  int iVar1;
  
  iVar1 = strcmp(&this->field_0x104,"");
  if (iVar1 == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"a trigger_changelevel doesn\'t have a map");
  }
  iVar1 = strcmp(&this->field_0x124,"");
  if (iVar1 == 0) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,"trigger_changelevel to %s doesn\'t have a landmark",&this->field_0x104);
  }
  if (this->pev->targetname != 0) {
    *(undefined4 *)&this->field_0x1c = 0xffff0000;
    *(code **)&this->field_0x20 = UseChangeLevel;
  }
  CBaseTrigger::InitTrigger((CBaseTrigger *)this);
  if ((this->pev->spawnflags & 2) == 0) {
    *(undefined4 *)&this->field_0x14 = 0xffff0000;
    *(code **)&this->field_0x18 = TouchChangeLevel;
  }
  return;
}

/* 000e8010  CChangeLevel::ExecuteChangeLevel  (101 bytes)
 * undefined ExecuteChangeLevel(void)
 */
/* CChangeLevel::ExecuteChangeLevel(void) */

void CChangeLevel::ExecuteChangeLevel(void)

{
  (*g_engfuncs.pfnMessageBegin)(2,0x20,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(3);
  (*g_engfuncs.pfnWriteByte)(3);
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnMessageBegin)(2,0x1e,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000e8078  CChangeLevel::FindLandmark  (218 bytes)
 * int FindLandmark(undefined4 param_1)
 */
/* CChangeLevel::FindLandmark(char const *) */

int CChangeLevel::FindLandmark(char *param_1)

{
  bool bVar1;
  edict_t *pEdict;
  int iVar2;
  
  pEdict = (*g_engfuncs.pfnFindEntityByString)((edict_t *)0x0,"targetname",param_1);
  while( true ) {
    bVar1 = false;
    if ((pEdict == (edict_t *)0x0) ||
       (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar2 == 0)) {
      bVar1 = true;
    }
    if (bVar1) break;
    iVar2 = strcmp(gpGlobals->pStringBase +
                   *(int *)((uint)&pEdict->v & (pEdict == (edict_t *)0x0) - 1),"info_landmark");
    if (iVar2 == 0) {
      return (int)pEdict;
    }
    pEdict = (*g_engfuncs.pfnFindEntityByString)(pEdict,"targetname",param_1);
  }
  (*g_engfuncs.pfnAlertMessage)(at_error,"Can\'t find landmark %s\n",param_1);
  return 0;
}

/* 000e8158  CChangeLevel::UseChangeLevel  (37 bytes)
 * undefined UseChangeLevel(CChangeLevel * param_1, int * param_2)
 */
/* CChangeLevel::UseChangeLevel(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CChangeLevel::UseChangeLevel(CChangeLevel *param_1,int *param_2)

{
  ChangeLevelNow(param_1,param_2);
  return;
}

/* 000e8180  CChangeLevel::ChangeLevelNow  (607 bytes)
 * undefined ChangeLevelNow(int * param_1)
 */
/* CChangeLevel::ChangeLevelNow(CBaseEntity *) */

void __thiscall CChangeLevel::ChangeLevelNow(CChangeLevel *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  edict_t *peVar3;
  CFireAndDie *pCVar4;
  int *piVar5;
  vec_t *pvVar6;
  vec_t *pvVar7;
  
  iVar2 = (**(code **)(*g_pGameRules + 0x20))(g_pGameRules);
  if (iVar2 == 0) {
    if (gpGlobals->time != this->pev->dmgtime) {
      this->pev->dmgtime = gpGlobals->time;
      peVar3 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
      if (peVar3 == (edict_t *)0x0) {
        peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      piVar5 = (int *)0x0;
      if (peVar3 != (edict_t *)0x0) {
        piVar5 = peVar3->pvPrivateData;
      }
      iVar2 = InTransitionVolume(piVar5,&this->field_0x124);
      if (iVar2 == 0) {
        (*g_engfuncs.pfnAlertMessage)
                  (at_aiconsole,"Player isn\'t in the transition volume %s, aborting\n",
                   &this->field_0x124);
      }
      else {
        if ((*(int *)&this->field_0x144 != 0) &&
           (pCVar4 = GetClassPtr<CFireAndDie>(0), pCVar4 != (CFireAndDie *)0x0)) {
          pCVar4->pev->target = *(string_t *)&this->field_0x144;
          *(undefined4 *)&pCVar4->field_0x64 = *(undefined4 *)&this->field_0x148;
          pvVar6 = (vec_t *)(*piVar5 + 8);
          pvVar7 = pCVar4->pev->origin;
          for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pvVar7 = *pvVar6;
            pvVar6 = pvVar6 + 1;
            pvVar7 = pvVar7 + 1;
          }
          DispatchSpawn(pCVar4->pev->pContainingEntity);
        }
        strcpy(st_szNextMap,&this->field_0x104);
        EHANDLE::operator=((EHANDLE *)&this->field_0xd4,param_1);
        CBaseDelay::SUB_UseTargets((CBaseDelay *)this,param_1,3,0);
        st_szNextSpot = 0;
        peVar3 = (edict_t *)FindLandmark(&this->field_0x124);
        bVar1 = false;
        if ((peVar3 == (edict_t *)0x0) ||
           (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar3), iVar2 == 0)) {
          bVar1 = true;
        }
        if (!bVar1) {
          strcpy(&st_szNextSpot,&this->field_0x124);
          pvVar6 = (vec_t *)(((uint)&peVar3->v & (peVar3 == (edict_t *)0x0) - 1) + 8);
          pvVar7 = gpGlobals->vecLandmarkOffset;
          for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pvVar7 = *pvVar6;
            pvVar6 = pvVar6 + 1;
            pvVar7 = pvVar7 + 1;
          }
        }
        (*g_engfuncs.pfnAlertMessage)
                  (at_console,"CHANGE LEVEL: %s %s\n",st_szNextMap,&st_szNextSpot);
        (*g_engfuncs.pfnChangeLevel)(st_szNextMap,&st_szNextSpot);
      }
    }
  }
  return;
}

/* 000e83e4  CChangeLevel::TouchChangeLevel  (84 bytes)
 * undefined TouchChangeLevel(int * param_1)
 */
/* CChangeLevel::TouchChangeLevel(CBaseEntity *) */

void __thiscall CChangeLevel::TouchChangeLevel(CChangeLevel *this,int *param_1)

{
  int iVar1;
  
  iVar1 = strcmp(gpGlobals->pStringBase + *(int *)*param_1,"player");
  if (iVar1 == 0) {
    ChangeLevelNow(this,param_1);
  }
  return;
}

/* 000e8438  CChangeLevel::AddTransitionToList  (503 bytes)
 * undefined4 AddTransitionToList(char * param_1, uint param_2, char * param_3, char * param_4, int param_5)
 */
/* CChangeLevel::AddTransitionToList(LEVELLIST *, int, char const *, char const *, edict_s *) */

undefined4
CChangeLevel::AddTransitionToList
          (char *param_1,uint param_2,char *param_3,char *param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int local_14;
  
  if ((((param_1 == (char *)0x0) || (param_3 == (char *)0x0)) || (param_4 == (char *)0x0)) ||
     (param_5 == 0)) {
LAB_000e8468:
    uVar1 = 0;
  }
  else {
    local_14 = 0;
    if (0 < (int)param_2) {
      uVar2 = param_2 & 3;
      pcVar4 = param_1;
      if ((int)param_2 < 1) {
LAB_000e84e9:
        if ((*(int *)(pcVar4 + 0x40) == param_5) && (iVar3 = strcmp(pcVar4,param_3), iVar3 == 0))
        goto LAB_000e8468;
        pcVar4 = pcVar4 + 0x50;
        local_14 = local_14 + 1;
        pcVar6 = pcVar4;
        if ((int)param_2 <= local_14) goto LAB_000e85cb;
      }
      else {
        pcVar6 = param_1;
        if (uVar2 != 0) {
          if (1 < uVar2) {
            pcVar4 = param_1;
            if (2 < uVar2) {
              if ((*(int *)(param_1 + 0x40) == param_5) &&
                 (iVar3 = strcmp(param_1,param_3), iVar3 == 0)) goto LAB_000e8468;
              pcVar4 = param_1 + 0x50;
              local_14 = 1;
            }
            if ((*(int *)(pcVar4 + 0x40) == param_5) && (iVar3 = strcmp(pcVar4,param_3), iVar3 == 0)
               ) goto LAB_000e8468;
            pcVar4 = pcVar4 + 0x50;
            local_14 = local_14 + 1;
          }
          goto LAB_000e84e9;
        }
      }
      do {
        if (((((*(int *)(pcVar6 + 0x40) == param_5) && (iVar3 = strcmp(pcVar4,param_3), iVar3 == 0))
             || ((*(int *)(pcVar6 + 0x90) == param_5 &&
                 (iVar3 = strcmp(pcVar4 + 0x50,param_3), iVar3 == 0)))) ||
            ((*(int *)(pcVar6 + 0xe0) == param_5 &&
             (iVar3 = strcmp(pcVar4 + 0xa0,param_3), iVar3 == 0)))) ||
           ((*(int *)(pcVar6 + 0x130) == param_5 &&
            (iVar3 = strcmp(pcVar4 + 0xf0,param_3), iVar3 == 0)))) goto LAB_000e8468;
        local_14 = local_14 + 4;
        pcVar4 = pcVar4 + 0x140;
        pcVar6 = pcVar6 + 0x140;
      } while (local_14 < (int)param_2);
    }
LAB_000e85cb:
    pcVar4 = param_1 + param_2 * 0x50;
    strcpy(pcVar4,param_3);
    strcpy(pcVar4 + 0x20,param_4);
    *(int *)(param_1 + param_2 * 0x50 + 0x40) = param_5;
    puVar5 = (undefined4 *)((param_5 + 0x80U & (param_5 == 0) - 1) + 8);
    pcVar4 = pcVar4 + 0x44;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pcVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      pcVar4 = pcVar4 + 4;
    }
    uVar1 = 1;
  }
  return uVar1;
}

/* 000e865c  CChangeLevel::InTransitionVolume  (355 bytes)
 * undefined4 InTransitionVolume(int * param_1, undefined4 param_2)
 */
/* WARNING: Removing unreachable block (ram,0x000e86ad) */
/* CChangeLevel::InTransitionVolume(CBaseEntity *, char *) */

undefined4 CChangeLevel::InTransitionVolume(int *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  edict_t *pEdict;
  int iVar3;
  edict_t *peVar4;
  CBaseEntity *this;
  undefined4 local_14;
  
  cVar2 = (**(code **)(param_1[0x18] + 0x38))(param_1);
  if (cVar2 < '\0') {
    return 1;
  }
  iVar3 = *param_1;
  if ((*(int *)(iVar3 + 0x108) == 0xc) && (*(int *)(iVar3 + 0x194) != 0)) {
    param_1 = (int *)0x0;
    if (*(int *)(iVar3 + 0x194) != 0) {
      param_1 = *(int **)(*(int *)(iVar3 + 0x194) + 0x7c);
    }
  }
  local_14 = 1;
  pEdict = (*g_engfuncs.pfnFindEntityByString)((edict_t *)0x0,"targetname",param_2);
  while( true ) {
    bVar1 = false;
    if ((pEdict == (edict_t *)0x0) ||
       (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar3 == 0)) {
      bVar1 = true;
    }
    if (bVar1) break;
    peVar4 = pEdict;
    if (pEdict == (edict_t *)0x0) {
      peVar4 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    this = (CBaseEntity *)0x0;
    if (peVar4 != (edict_t *)0x0) {
      this = peVar4->pvPrivateData;
    }
    if ((this != (CBaseEntity *)0x0) &&
       (iVar3 = strcmp(gpGlobals->pStringBase + this->pev->classname,"trigger_transition"),
       iVar3 == 0)) {
      iVar3 = CBaseEntity::Intersects(this,param_1);
      if (iVar3 != 0) {
        return 1;
      }
      local_14 = 0;
    }
    pEdict = (*g_engfuncs.pfnFindEntityByString)(pEdict,"targetname",param_2);
  }
  return local_14;
}

/* 000e87c4  CChangeLevel::ChangeList  (1177 bytes)
 * uint ChangeList(char * param_1, int param_2)
 */
/* CChangeLevel::ChangeList(LEVELLIST *, int) */

uint CChangeLevel::ChangeList(char *param_1,int param_2)

{
  bool bVar1;
  edict_t *peVar2;
  int iVar3;
  CChangeLevel *pCVar4;
  edict_t *peVar5;
  uint uVar6;
  uint uVar7;
  CBaseEntity *this;
  undefined1 *puVar8;
  uint uVar9;
  int local_1048;
  undefined1 *local_1044;
  int local_1040;
  uint local_1034;
  int local_1030;
  uint local_1028;
  int local_1024;
  CSaveRestoreBuffer local_1020 [4];
  uint auStack_101c [512];
  int *local_81c [512];
  undefined1 auStack_1c [12];
  
  local_1028 = 0;
  peVar2 = (*g_engfuncs.pfnFindEntityByString)((edict_t *)0x0,"classname","trigger_changelevel");
  bVar1 = false;
  if ((peVar2 == (edict_t *)0x0) ||
     (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2), iVar3 == 0)) {
    bVar1 = true;
  }
  uVar7 = 0;
  if (!bVar1) {
    while( true ) {
      bVar1 = false;
      if ((peVar2 == (edict_t *)0x0) ||
         (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2), iVar3 == 0)) {
        bVar1 = true;
      }
      if (bVar1) break;
      pCVar4 = GetClassPtr<CChangeLevel>((uint)&peVar2->v & (peVar2 == (edict_t *)0x0) - 1);
      if (pCVar4 != (CChangeLevel *)0x0) {
        iVar3 = FindLandmark(&pCVar4->field_0x124);
        if (((iVar3 != 0) &&
            (iVar3 = AddTransitionToList(param_1,local_1028,&pCVar4->field_0x104,
                                         &pCVar4->field_0x124,iVar3), iVar3 != 0)) &&
           (local_1028 = local_1028 + 1, param_2 <= (int)local_1028)) break;
      }
      peVar2 = (*g_engfuncs.pfnFindEntityByString)(peVar2,"classname","trigger_changelevel");
    }
    uVar7 = local_1028;
    if ((gpGlobals->pSaveData != (void *)0x0) && (*(int *)((int)gpGlobals->pSaveData + 0x28) != 0))
    {
      CSaveRestoreBuffer::CSaveRestoreBuffer(local_1020,gpGlobals->pSaveData);
      local_1024 = 0;
      if (0 < (int)local_1028) {
        local_1048 = 0;
        do {
          local_1034 = 0;
          peVar2 = (*g_engfuncs.pfnEntitiesInPVS)(*(edict_t **)(param_1 + local_1048 + 0x40));
          while( true ) {
            bVar1 = false;
            if ((peVar2 == (edict_t *)0x0) ||
               (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2), iVar3 == 0)) {
              bVar1 = true;
            }
            if (bVar1) break;
            peVar5 = peVar2;
            if (peVar2 == (edict_t *)0x0) {
              peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
            }
            this = (CBaseEntity *)0x0;
            if (peVar5 != (edict_t *)0x0) {
              this = peVar5->pvPrivateData;
            }
            if ((this != (CBaseEntity *)0x0) &&
               (uVar6 = (*this->vtable[0xe])(this), -1 < (int)uVar6)) {
              uVar9 = 0;
              if ((uVar6 & 2) != 0) {
                uVar9 = 0x20000000;
              }
              if ((this->pev->globalname != 0) && (uVar6 = CBaseEntity::IsDormant(this), uVar6 == 0)
                 ) {
                uVar9 = uVar9 | 0x10000000;
              }
              if (uVar9 != 0) {
                local_81c[local_1034] = (int *)this;
                auStack_101c[local_1034] = uVar9;
                local_1034 = local_1034 + 1;
                if (0x200 < (int)local_1034) {
                  (*g_engfuncs.pfnAlertMessage)(at_error,"Too many entities across a transition!");
                }
              }
            }
            peVar2 = (peVar2->v).chain;
          }
          local_1030 = 0;
          if (0 < (int)local_1034) {
            local_1040 = 0;
            if (((int)local_1034 < 1) || ((local_1034 & 1) != 0)) {
              if ((auStack_101c[0] != 0) &&
                 (iVar3 = InTransitionVolume(local_81c[0],param_1 + local_1048 + 0x20), iVar3 != 0))
              {
                iVar3 = CSaveRestoreBuffer::EntityIndex(local_1020,local_81c[0]);
                CSaveRestoreBuffer::EntityFlagsSet
                          (local_1020,iVar3,1 << ((byte)local_1024 & 0x1f) | auStack_101c[0]);
              }
              local_1040 = 4;
              local_1030 = 1;
              if ((int)local_1034 < 2) goto LAB_000e8c29;
            }
            puVar8 = auStack_1c + local_1040;
            local_1044 = puVar8;
            do {
              if (*(int *)(puVar8 + -0x1000) != 0) {
                iVar3 = InTransitionVolume(*(int **)((int)local_81c + local_1040),
                                           param_1 + local_1048 + 0x20);
                if (iVar3 != 0) {
                  iVar3 = CSaveRestoreBuffer::EntityIndex
                                    (local_1020,*(int **)((int)local_81c + local_1040));
                  CSaveRestoreBuffer::EntityFlagsSet
                            (local_1020,iVar3,
                             1 << ((byte)local_1024 & 0x1f) | *(uint *)(local_1044 + -0x1000));
                }
              }
              if (*(int *)(puVar8 + -0xffc) != 0) {
                iVar3 = InTransitionVolume(*(int **)((int)local_81c + local_1040 + 4),
                                           param_1 + local_1048 + 0x20);
                if (iVar3 != 0) {
                  iVar3 = CSaveRestoreBuffer::EntityIndex
                                    (local_1020,*(int **)((int)local_81c + local_1040 + 4));
                  CSaveRestoreBuffer::EntityFlagsSet
                            (local_1020,iVar3,
                             1 << ((byte)local_1024 & 0x1f) | *(uint *)(local_1044 + -0xffc));
                }
              }
              local_1044 = local_1044 + 8;
              puVar8 = puVar8 + 8;
              local_1040 = local_1040 + 8;
              local_1030 = local_1030 + 2;
            } while (local_1030 < (int)local_1034);
          }
LAB_000e8c29:
          local_1048 = local_1048 + 0x50;
          local_1024 = local_1024 + 1;
        } while (local_1024 < (int)local_1028);
      }
      CSaveRestoreBuffer::~CSaveRestoreBuffer(local_1020,0);
    }
  }
  return uVar7;
}

