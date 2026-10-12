/* mp.dll - CTSDMHill (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10041600  CTSDMHill::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSDMHill::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSDMHill_10098184,(int)param_1,0x10098030,3);
  return;
}

/* 10041630  CTSDMHill::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSDMHill::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CTSDMHill_10098184,(int)param_1,0x10098030,3);
  return;
}

/* 10041660  CTSDMHill::KeyValue  (168 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSDMHill::KeyValue(CTSDMHill *this,int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  void *this_00;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  float10 fVar7;
  
  pcVar4 = *(char **)(param_1 + 4);
  puVar2 = &DAT_0000000a;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_nextcheck_100980e0;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    fVar7 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x68 = (float)fVar7;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000008;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_fragamt_1009819c;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    uVar1 = FUN_1006e1dd(puVar2,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x60 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  this_00 = (void *)0xc;
  bVar6 = true;
  pcVar3 = s_fragamtteam_10098190;
  do {
    if (this_00 == (void *)0x0) break;
    this_00 = (void *)((int)this_00 + -1);
    bVar6 = *pcVar4 == *pcVar3;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar6);
  if (bVar6) {
    uVar1 = FUN_1006e1dd(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x64 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10041710  CTSDMHill::Spawn  (276 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTSDMHill::Spawn(int param_1)

{
  float fVar1;
  int iVar2;
  
  **(int **)(param_1 + 4) = (int)s_ts_dmhill_100981a4 - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  FUN_10067970();
  FUN_100679a0();
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 5;
  iVar2 = (**(code **)(*DAT_1009f494 + 0x20))();
  if ((iVar2 == 0) || (0 < *(int *)(param_1 + 100))) {
    iVar2 = (**(code **)(*DAT_1009f494 + 0x20))();
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x60) < 1)) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      *(code **)(param_1 + 0x14) = WaitTouch;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(float *)(param_1 + 0x68) <= 0.5) {
    fVar1 = 0.5;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x68);
  }
  *(float *)(*(int *)(param_1 + 4) + 0x104) = fVar1 + gpGlobals->time;
  fVar1 = gpGlobals->time;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(float *)(param_1 + 0x54) = fVar1 + 1.0;
  return;
}

/* 10041830  CTSDMHill::WaitTouch  (1579 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSDMHill::WaitTouch(class CBaseEntity *) */

void __thiscall CTSDMHill::WaitTouch(CTSDMHill *this,CBaseEntity *param_1)

{
  float fVar1;
  CBaseEntity CVar2;
  char cVar3;
  byte bVar4;
  entvars_t *peVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  CBaseEntity *pCVar14;
  CBaseEntity *pCVar15;
  char *pcVar16;
  bool bVar17;
  longlong lVar18;
  char *pcVar19;
  char acStack_100 [4];
  undefined4 uStack_fc;
  
                    /* 0x41830  141  ?WaitTouch@CTSDMHill@@QAEXPAVCBaseEntity@@@Z */
  if (gpGlobals->time < *(float *)&this->field_0x54) {
    return;
  }
  iVar6 = (**(code **)(*(int *)param_1 + 0xa8))();
  if (iVar6 == 0) {
    return;
  }
  iVar6 = (**(code **)(*(int *)param_1 + 0x94))();
  if (iVar6 == 0) {
    return;
  }
  pCVar14 = *(CBaseEntity **)&this->field_0x5c;
  if (pCVar14 == (CBaseEntity *)0x0) {
    *(CBaseEntity **)&this->field_0x5c = param_1;
    *(undefined4 *)&this->field_0x54 = 0;
    if (*(float *)&this->field_0x68 <= 0.5) {
      fVar1 = 0.5;
    }
    else {
      fVar1 = *(float *)&this->field_0x68;
    }
    *(float *)&this->field_0x6c = gpGlobals->time + fVar1;
    if (*(float *)&this->field_0x68 <= 0.5) {
      *(float *)&this->field_0x58 = gpGlobals->time + 0.5;
      return;
    }
    *(float *)&this->field_0x58 = gpGlobals->time + *(float *)&this->field_0x68;
    return;
  }
  if (pCVar14 == param_1) {
    if (*(float *)&this->field_0x68 <= 0.5) {
      fVar1 = 0.5;
    }
    else {
      fVar1 = *(float *)&this->field_0x68;
    }
    if (fVar1 < gpGlobals->time - *(float *)&this->field_0x58) {
      *(undefined4 *)&this->field_0x5c = 0;
      *(undefined4 *)&this->field_0x54 = 0;
      if (*(float *)&this->field_0x68 <= 0.5) {
        *(float *)&this->field_0x6c = gpGlobals->time + 0.5;
        return;
      }
      *(float *)&this->field_0x6c = gpGlobals->time + *(float *)&this->field_0x68;
      return;
    }
  }
  else {
    iVar6 = (**(code **)(*DAT_1009f494 + 200))(pCVar14,param_1);
    if (iVar6 != 1) {
      *(undefined4 *)&this->field_0x5c = 0;
      *(undefined4 *)&this->field_0x54 = 0;
      if (*(float *)&this->field_0x68 <= 0.5) {
        *(float *)&this->field_0x6c = gpGlobals->time + 0.5;
        return;
      }
      *(float *)&this->field_0x6c = gpGlobals->time + *(float *)&this->field_0x68;
      return;
    }
  }
  if (gpGlobals->time <= *(float *)&this->field_0x6c) {
    return;
  }
  if (this->pev->message != 0) {
    iVar6 = (**(code **)(*DAT_1009f494 + 0x20))();
    if (iVar6 == 0) {
      pcVar19 = acStack_100;
      pcVar7 = gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1d0);
      do {
        cVar3 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        *pcVar19 = cVar3;
        pcVar19 = pcVar19 + 1;
      } while (cVar3 != '\0');
    }
    else {
      iVar6 = 0;
      do {
        cVar3 = (&DAT_100981d8)[iVar6];
        acStack_100[iVar6] = cVar3;
        iVar6 = iVar6 + 1;
      } while (cVar3 != '\0');
      uVar12 = 0xffffffff;
      pCVar14 = param_1 + 0xaa0;
      do {
        pCVar15 = pCVar14;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pCVar15 = pCVar14 + 1;
        CVar2 = *pCVar14;
        pCVar14 = pCVar15;
      } while (CVar2 != (CBaseEntity)0x0);
      uVar12 = ~uVar12;
      iVar6 = -1;
      pcVar19 = acStack_100;
      do {
        pcVar7 = pcVar19;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar7 = pcVar19 + 1;
        cVar3 = *pcVar19;
        pcVar19 = pcVar7;
      } while (cVar3 != '\0');
      pCVar14 = pCVar15 + -uVar12;
      pCVar15 = (CBaseEntity *)(pcVar7 + -1);
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pCVar15 = *(undefined4 *)pCVar14;
        pCVar14 = pCVar14 + 4;
        pCVar15 = pCVar15 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pCVar15 = *pCVar14;
        pCVar14 = pCVar14 + 1;
        pCVar15 = pCVar15 + 1;
      }
    }
    iVar6 = -1;
    peVar5 = this->pev;
    pcVar19 = acStack_100;
    do {
      pcVar7 = pcVar19;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar19 + 1;
      cVar3 = *pcVar19;
      pcVar19 = pcVar7;
    } while (cVar3 != '\0');
    *(undefined2 *)(pcVar7 + -1) = DAT_10094c08;
    uVar12 = 0xffffffff;
    pcVar19 = gpGlobals->pStringBase + peVar5->message;
    do {
      pcVar7 = pcVar19;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar7 = pcVar19 + 1;
      cVar3 = *pcVar19;
      pcVar19 = pcVar7;
    } while (cVar3 != '\0');
    uVar12 = ~uVar12;
    iVar6 = -1;
    pcVar19 = acStack_100;
    do {
      pcVar16 = pcVar19;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar19 + 1;
      cVar3 = *pcVar19;
      pcVar19 = pcVar16;
    } while (cVar3 != '\0');
    pcVar19 = pcVar7 + -uVar12;
    pcVar7 = pcVar16 + -1;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar7 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  iVar6 = (**(code **)(*DAT_1009f494 + 0x20))();
  if (iVar6 == 0) {
    *(float *)(*(int *)(param_1 + 4) + 0x164) =
         (float)*(int *)&this->field_0x60 + *(float *)(*(int *)(param_1 + 4) + 0x164);
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbbf4,(float *)0x0,(edict_t *)0x0);
    iVar6 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar6);
    lVar18 = __ftol();
    (*g_engfuncs.pfnWriteShort)((int)lVar18);
    (*g_engfuncs.pfnWriteShort)(*(int *)(param_1 + 0xa88));
    (*g_engfuncs.pfnWriteShort)(0);
    iVar6 = (**(code **)(*DAT_1009f494 + 0xcc))();
    uStack_fc = 0x10041d06;
    (*g_engfuncs.pfnWriteShort)(iVar6 + 1);
    (*g_engfuncs.pfnMessageEnd)();
    if (this->pev->message == 0) goto LAB_10041d58;
    pcVar19 = s___i_frags_for_him_100981b0;
  }
  else {
    piVar8 = (int *)UTIL_FindEntityByClassname(0,s_player_100915d0);
    while (((piVar8 != (int *)0x0 && (*(edict_t **)(piVar8[1] + 0x208) != (edict_t *)0x0)) &&
           (iVar6 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar8[1] + 0x208)),
           iVar6 != 0))) {
      iVar6 = (**(code **)(*piVar8 + 0xa8))();
      if (iVar6 != 0) {
        piVar9 = (int *)GetClassPtr<CBasePlayer>(piVar8[1]);
        pbVar10 = (byte *)(**(code **)(*(int *)param_1 + 0xb0))();
        pbVar11 = (byte *)(**(code **)(*piVar9 + 0xb0))();
        do {
          bVar4 = *pbVar11;
          bVar17 = bVar4 < *pbVar10;
          if (bVar4 != *pbVar10) {
LAB_10041ba8:
            iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_10041bad;
          }
          if (bVar4 == 0) break;
          bVar4 = pbVar11[1];
          bVar17 = bVar4 < pbVar10[1];
          if (bVar4 != pbVar10[1]) goto LAB_10041ba8;
          pbVar11 = pbVar11 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar4 != 0);
        iVar6 = 0;
LAB_10041bad:
        if (iVar6 == 0) {
          *(float *)(piVar9[1] + 0x164) =
               (float)*(int *)&this->field_0x64 + *(float *)(piVar9[1] + 0x164);
          (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbbf4,(float *)0x0,(edict_t *)0x0);
          iVar6 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(piVar9[1] + 0x208));
          (*g_engfuncs.pfnWriteByte)(iVar6);
          lVar18 = __ftol();
          (*g_engfuncs.pfnWriteShort)((int)lVar18);
          (*g_engfuncs.pfnWriteShort)(piVar9[0x2a2]);
          (*g_engfuncs.pfnWriteShort)(0);
          iVar6 = (**(code **)(*DAT_1009f494 + 0xcc))();
          uStack_fc = 0x10041c3a;
          (*g_engfuncs.pfnWriteShort)(iVar6 + 1);
          (*g_engfuncs.pfnMessageEnd)();
        }
      }
      piVar8 = (int *)UTIL_FindEntityByClassname((int)piVar8,s_player_100915d0);
    }
    if (this->pev->message == 0) goto LAB_10041d58;
    pcVar19 = s___i_frags_for_they_100981c4;
  }
  pcVar19 = UTIL_VarArgs((byte_conflict *)pcVar19);
  uVar12 = 0xffffffff;
  do {
    pcVar7 = pcVar19;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar7 = pcVar19 + 1;
    cVar3 = *pcVar19;
    pcVar19 = pcVar7;
  } while (cVar3 != '\0');
  uVar12 = ~uVar12;
  iVar6 = -1;
  pcVar19 = acStack_100;
  do {
    pcVar16 = pcVar19;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar16 = pcVar19 + 1;
    cVar3 = *pcVar19;
    pcVar19 = pcVar16;
  } while (cVar3 != '\0');
  pcVar19 = pcVar7 + -uVar12;
  pcVar7 = pcVar16 + -1;
  for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar19;
    pcVar19 = pcVar19 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *pcVar7 = *pcVar19;
    pcVar19 = pcVar19 + 1;
    pcVar7 = pcVar7 + 1;
  }
LAB_10041d58:
  if (this->pev->message != 0) {
    pcVar19 = acStack_100;
    lVar18 = __ftol();
    TSHudMessageAll(0,0xff,0,1,(int)lVar18,pcVar19);
  }
  if (*(float *)&this->field_0x68 <= 0.5) {
    fVar1 = 0.5;
  }
  else {
    fVar1 = *(float *)&this->field_0x68;
  }
  *(float *)&this->field_0x6c = gpGlobals->time + fVar1;
  iVar6 = this->pev->target;
  if (iVar6 != 0) {
    FireTargets((int)(gpGlobals->pStringBase + iVar6),this,this,3,0);
  }
  *(float *)&this->field_0x58 = gpGlobals->time;
  return;
}

/* 10041e60  CTSDMHill::WaitThink  (61 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSDMHill::WaitThink(void) */

void __thiscall CTSDMHill::WaitThink(CTSDMHill *this)

{
                    /* 0x41e60  126  ?WaitThink@CTSDMHill@@QAEXXZ */
  if (0.5 < *(float *)&this->field_0x68) {
    this->pev->nextthink = *(float *)&this->field_0x68 + gpGlobals->time;
    return;
  }
  this->pev->nextthink = gpGlobals->time + 0.5;
  return;
}

/* 10042340  CTSDMHill::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CTSDMHill::ObjectCaps(void)

{
  return 0;
}

