/* mp.dll - CMultiSource (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100093c0  CMultiSource::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CMultiSource::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CMultiSource_10091248,(int)param_1,0x10090fd0,4);
  return;
}

/* 100093f0  CMultiSource::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CMultiSource::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CMultiSource_10091248,(int)param_1,0x10090fd0,4);
  return;
}

/* 10009430  CMultiSource::KeyValue  (186 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CMultiSource::KeyValue(CMultiSource *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar3 = *(char **)(param_1 + 4);
  iVar1 = 6;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_style_10091284;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar1 = 7;
    bVar5 = true;
    pcVar2 = pcVar3;
    pcVar4 = s_height_1009127c;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *pcVar2 == *pcVar4;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar1 = 0xb;
      bVar5 = true;
      pcVar2 = pcVar3;
      pcVar4 = s_killtarget_10091270;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar5 = *pcVar2 == *pcVar4;
        pcVar2 = pcVar2 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) {
        iVar1 = 7;
        bVar5 = true;
        pcVar2 = pcVar3;
        pcVar4 = &DAT_10091268;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar5 = *pcVar2 == *pcVar4;
          pcVar2 = pcVar2 + 1;
          pcVar4 = pcVar4 + 1;
        } while (bVar5);
        if (!bVar5) {
          iVar1 = 7;
          bVar5 = true;
          pcVar2 = pcVar3;
          pcVar4 = &DAT_10091260;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar5 = *pcVar2 == *pcVar4;
            pcVar2 = pcVar2 + 1;
            pcVar4 = pcVar4 + 1;
          } while (bVar5);
          if (!bVar5) {
            iVar1 = 7;
            bVar5 = true;
            pcVar2 = pcVar3;
            pcVar4 = &DAT_10091258;
            do {
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              bVar5 = *pcVar2 == *pcVar4;
              pcVar2 = pcVar2 + 1;
              pcVar4 = pcVar4 + 1;
            } while (bVar5);
            if (!bVar5) {
              iVar1 = 0xc;
              bVar5 = true;
              pcVar2 = s_globalstate_1009123c;
              do {
                if (iVar1 == 0) break;
                iVar1 = iVar1 + -1;
                bVar5 = *pcVar3 == *pcVar2;
                pcVar3 = pcVar3 + 1;
                pcVar2 = pcVar2 + 1;
              } while (bVar5);
              if (!bVar5) {
                *(undefined4 *)(param_1 + 0xc) = 0;
                return;
              }
              iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
              *(int *)&this->field_0x1d8 = iVar1;
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 100094f0  CMultiSource::Spawn  (68 bytes)
 * undefined Spawn()
 */
void __fastcall CMultiSource::Spawn(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  *(uint *)(*(int *)(param_1 + 4) + 0x1a0) = *(uint *)(*(int *)(param_1 + 4) + 0x1a0) | 1;
  *(code **)(param_1 + 0x10) = Register;
  return;
}

/* 10009540  CMultiSource::Use  (216 bytes)
 * undefined Use()
 */
void __thiscall CMultiSource::Use(CBaseEntity *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  CBaseEntity *pCVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x1d4)) {
    pCVar3 = param_1 + 0x54;
    do {
      iVar4 = iVar4 + 1;
      iVar1 = FUN_1000c1d0((uint *)pCVar3);
      if (iVar1 == param_3) break;
      pCVar3 = pCVar3 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x1d4));
  }
  if (*(int *)(param_1 + 0x1d4) < iVar4) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,s_MultiSrc_Used_by_non_member__s__100912b0,
               gpGlobals->pStringBase + **(int **)(param_3 + 4));
    return;
  }
  *(uint *)(param_1 + iVar4 * 4 + 0x150) = *(uint *)(param_1 + iVar4 * 4 + 0x150) ^ 1;
  iVar4 = (**(code **)(*(int *)param_1 + 0x4c))(param_2);
  if (iVar4 != 0) {
    (*g_engfuncs.pfnAlertMessage)
              (at_aiconsole,s_Multisource__s_enabled___d_input_1009128c,
               gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1cc),
               *(undefined4 *)(param_1 + 0x1d4));
    uVar2 = 3;
    if (*(int *)(param_1 + 0x1d8) != 0) {
      uVar2 = 1;
    }
    CBaseEntity::SUB_UseTargets(param_1,0,uVar2,0);
  }
  return;
}

/* 10009620  CMultiSource::IsTriggered  (88 bytes)
 * undefined IsTriggered()
 */
undefined4 __fastcall CMultiSource::IsTriggered(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x1d4);
    if (0 < iVar1) {
      piVar3 = (int *)(param_1 + 0x154);
      do {
        if (*piVar3 == 0) break;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < iVar1);
    }
    if (iVar2 == iVar1) {
      if ((*(int *)(param_1 + 0x1d8) != 0) &&
         (iVar2 = FUN_1006c2a0(&DAT_102e00f4,*(int *)(param_1 + 0x1d8)), iVar2 != 1)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

/* 10009680  CMultiSource::Register  (297 bytes)
 * void Register(void)
 */
/* public: void __thiscall CMultiSource::Register(void) */

void __thiscall CMultiSource::Register(CMultiSource *this)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  char *pszValue;
  undefined4 *puVar4;
  edict_t *peVar5;
  
  *(undefined4 *)&this->field_0x1d4 = 0;
  puVar4 = (undefined4 *)&this->field_0x54;
                    /* 0x9680  83  ?Register@CMultiSource@@QAEXXZ */
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(code **)&this->field_0x10 = CBaseEntity::SUB_DoNothing;
  pszValue = gpGlobals->pStringBase + this->pev->targetname;
  peVar5 = (edict_t *)0x0;
  while (((peVar5 = (*g_engfuncs.pfnFindEntityByString)(peVar5,s_target_100912f0,pszValue),
          peVar5 != (edict_t *)0x0 &&
          (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar5), iVar3 != 0)) &&
         (iVar3 = *(int *)&this->field_0x1d4, iVar3 < 0x20))) {
    pvVar1 = peVar5->pvPrivateData;
    if (pvVar1 != (void *)0x0) {
      *(int *)&this->field_0x1d4 = iVar3 + 1;
      EHANDLE::operator=((EHANDLE *)(&this->field_0x54 + iVar3 * 8),(int)pvVar1);
    }
    pszValue = gpGlobals->pStringBase + this->pev->targetname;
  }
  peVar5 = (edict_t *)0x0;
  while (((peVar5 = (*g_engfuncs.pfnFindEntityByString)
                              (peVar5,s_classname_100912d4,s_multi_manager_100912e0),
          peVar5 != (edict_t *)0x0 &&
          (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar5), iVar3 != 0)) &&
         (*(int *)&this->field_0x1d4 < 0x20))) {
    piVar2 = peVar5->pvPrivateData;
    if ((piVar2 != (int *)0x0) &&
       (iVar3 = (**(code **)(*piVar2 + 0xa0))(this->pev->targetname), iVar3 != 0)) {
      iVar3 = *(int *)&this->field_0x1d4;
      *(int *)&this->field_0x1d4 = iVar3 + 1;
      EHANDLE::operator=((EHANDLE *)(&this->field_0x54 + iVar3 * 8),(int)piVar2);
    }
  }
  this->pev->spawnflags = this->pev->spawnflags & 0xfffffffe;
  return;
}

/* 1000b5d0  CMultiSource::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CMultiSource::ObjectCaps(void)

{
  return 0x80;
}

