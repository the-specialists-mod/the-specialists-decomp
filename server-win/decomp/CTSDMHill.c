/* mp.dll - CTSDMHill (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10049a90  CTSDMHill::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSDMHill::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSDMHill_100a35cc,(int)param_1,0x100a3480,3);
  return;
}

/* 10049ac0  CTSDMHill::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSDMHill::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CTSDMHill_100a35cc,(int)param_1,&DAT_100a3480,3);
  return;
}

/* 10049af0  CTSDMHill::KeyValue  (270 bytes)
 * undefined KeyValue()
 */
void __thiscall CTSDMHill::KeyValue(undefined *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined *this;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar7 = s_nextcheck_100a34fc;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10049b28:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10049b2d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10049b28;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10049b2d:
  if (iVar3 == 0) {
    fVar9 = atof(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x68) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_fragamt_100a35e4;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10049b79:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10049b7e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10049b79;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10049b7e:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_fragamtteam_100a35d8;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10049bca:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10049bcf;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10049bca;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10049bcf:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 10049c00  CTSDMHill::Spawn  (274 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTSDMHill::Spawn(int param_1)

{
  float fVar1;
  int iVar2;
  
  **(int **)(param_1 + 4) = (int)s_ts_dmhill_100a35ec - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  iVar2 = *(int *)(param_1 + 4);
  UTIL_SetSize(iVar2,iVar2 + 0xdc,iVar2 + 0xe8);
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 5;
  iVar2 = (**(code **)(*g_pGameRules + 0x1c))();
  if ((iVar2 == 0) || (0 < *(int *)(param_1 + 100))) {
    iVar2 = (**(code **)(*g_pGameRules + 0x1c))();
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

/* 10049d20  CTSDMHill::WaitTouch  (1610 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSDMHill::WaitTouch(class CBaseEntity *) */

void __thiscall CTSDMHill::WaitTouch(CTSDMHill *this,CBaseEntity *param_1)

{
  float fVar1;
  char cVar2;
  CBaseEntity CVar3;
  byte bVar4;
  entvars_t *peVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  CBaseEntity *pCVar13;
  CBaseEntity *pCVar14;
  char *pcVar15;
  CBaseEntity *pCVar16;
  bool bVar17;
  longlong lVar18;
  char *pcVar19;
  CBaseEntity aCStack_100 [4];
  undefined4 uStack_fc;
  
                    /* 0x49d20  151  ?WaitTouch@CTSDMHill@@QAEXPAVCBaseEntity@@@Z */
  if (gpGlobals->time < *(float *)&this->field_0x54) {
    return;
  }
  iVar6 = (**(code **)(*(int *)param_1 + 0xc0))();
  if (iVar6 == 0) {
    return;
  }
  iVar6 = (**(code **)(*(int *)param_1 + 0xac))();
  if (iVar6 == 0) {
    return;
  }
  pCVar13 = *(CBaseEntity **)&this->field_0x5c;
  if (pCVar13 == (CBaseEntity *)0x0) {
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
  if (pCVar13 == param_1) {
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
    iVar6 = (**(code **)(*g_pGameRules + 0xc4))(pCVar13,param_1);
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
    iVar6 = (**(code **)(*g_pGameRules + 0x1c))();
    if (iVar6 == 0) {
      uVar11 = 0xffffffff;
      pcVar19 = gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1d0);
      do {
        pcVar15 = pcVar19;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar15 = pcVar19 + 1;
        cVar2 = *pcVar19;
        pcVar19 = pcVar15;
      } while (cVar2 != '\0');
      uVar11 = ~uVar11;
      pCVar13 = (CBaseEntity *)(pcVar15 + -uVar11);
      pCVar16 = aCStack_100;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pCVar16 = *(undefined4 *)pCVar13;
        pCVar13 = pCVar13 + 4;
        pCVar16 = pCVar16 + 4;
      }
    }
    else {
      uVar11 = 0xffffffff;
      pcVar19 = &DAT_100a3620;
      do {
        pcVar15 = pcVar19;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar15 = pcVar19 + 1;
        cVar2 = *pcVar19;
        pcVar19 = pcVar15;
      } while (cVar2 != '\0');
      uVar11 = ~uVar11;
      pCVar13 = (CBaseEntity *)(pcVar15 + -uVar11);
      pCVar16 = aCStack_100;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pCVar16 = *(undefined4 *)pCVar13;
        pCVar13 = pCVar13 + 4;
        pCVar16 = pCVar16 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pCVar16 = *pCVar13;
        pCVar13 = pCVar13 + 1;
        pCVar16 = pCVar16 + 1;
      }
      uVar11 = 0xffffffff;
      pCVar13 = param_1 + 0xb34;
      do {
        pCVar16 = pCVar13;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pCVar16 = pCVar13 + 1;
        CVar3 = *pCVar13;
        pCVar13 = pCVar16;
      } while (CVar3 != (CBaseEntity)0x0);
      uVar11 = ~uVar11;
      iVar6 = -1;
      pCVar13 = aCStack_100;
      do {
        pCVar14 = pCVar13;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar14 = pCVar13 + 1;
        CVar3 = *pCVar13;
        pCVar13 = pCVar14;
      } while (CVar3 != (CBaseEntity)0x0);
      pCVar13 = pCVar16 + -uVar11;
      pCVar16 = pCVar14 + -1;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pCVar16 = *(undefined4 *)pCVar13;
        pCVar13 = pCVar13 + 4;
        pCVar16 = pCVar16 + 4;
      }
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pCVar16 = *pCVar13;
      pCVar13 = pCVar13 + 1;
      pCVar16 = pCVar16 + 1;
    }
    uVar11 = 0xffffffff;
    pcVar19 = &DAT_1009ff58;
    do {
      pcVar15 = pcVar19;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar15 = pcVar19 + 1;
      cVar2 = *pcVar19;
      pcVar19 = pcVar15;
    } while (cVar2 != '\0');
    uVar11 = ~uVar11;
    iVar6 = -1;
    pCVar13 = aCStack_100;
    do {
      pCVar16 = pCVar13;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pCVar16 = pCVar13 + 1;
      CVar3 = *pCVar13;
      pCVar13 = pCVar16;
    } while (CVar3 != (CBaseEntity)0x0);
    pCVar13 = (CBaseEntity *)(pcVar15 + -uVar11);
    pCVar16 = pCVar16 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pCVar16 = *(undefined4 *)pCVar13;
      pCVar13 = pCVar13 + 4;
      pCVar16 = pCVar16 + 4;
    }
    peVar5 = this->pev;
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pCVar16 = *pCVar13;
      pCVar13 = pCVar13 + 1;
      pCVar16 = pCVar16 + 1;
    }
    uVar11 = 0xffffffff;
    pcVar19 = gpGlobals->pStringBase + peVar5->message;
    do {
      pcVar15 = pcVar19;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar15 = pcVar19 + 1;
      cVar2 = *pcVar19;
      pcVar19 = pcVar15;
    } while (cVar2 != '\0');
    uVar11 = ~uVar11;
    iVar6 = -1;
    pCVar13 = aCStack_100;
    do {
      pCVar16 = pCVar13;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pCVar16 = pCVar13 + 1;
      CVar3 = *pCVar13;
      pCVar13 = pCVar16;
    } while (CVar3 != (CBaseEntity)0x0);
    pCVar13 = (CBaseEntity *)(pcVar15 + -uVar11);
    pCVar16 = pCVar16 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pCVar16 = *(undefined4 *)pCVar13;
      pCVar13 = pCVar13 + 4;
      pCVar16 = pCVar16 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pCVar16 = *pCVar13;
      pCVar13 = pCVar13 + 1;
      pCVar16 = pCVar16 + 1;
    }
  }
  iVar6 = (**(code **)(*g_pGameRules + 0x1c))();
  if (iVar6 == 0) {
    *(float *)(*(int *)(param_1 + 4) + 0x164) =
         (float)*(int *)&this->field_0x60 + *(float *)(*(int *)(param_1 + 4) + 0x164);
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9718,(float *)0x0,(edict_t *)0x0);
    iVar6 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar6);
    lVar18 = __ftol();
    (*g_engfuncs.pfnWriteShort)((int)lVar18);
    (*g_engfuncs.pfnWriteShort)(*(int *)(param_1 + 0xb1c));
    (*g_engfuncs.pfnWriteShort)(0);
    iVar6 = (**(code **)(*g_pGameRules + 200))();
    uStack_fc = 0x1004a225;
    (*g_engfuncs.pfnWriteShort)(iVar6 + 1);
    (*g_engfuncs.pfnMessageEnd)();
    if (this->pev->message == 0) goto LAB_1004a277;
    pcVar19 = s___i_frags_for_him_100a35f8;
  }
  else {
    piVar7 = (int *)UTIL_FindEntityByClassname(0,s_player_1009c678);
    while (((piVar7 != (int *)0x0 && (*(edict_t **)(piVar7[1] + 0x208) != (edict_t *)0x0)) &&
           (iVar6 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar7[1] + 0x208)),
           iVar6 != 0))) {
      iVar6 = (**(code **)(*piVar7 + 0xc0))();
      if (iVar6 != 0) {
        piVar8 = (int *)GetClassPtr<CBasePlayer>(piVar7[1]);
        pbVar9 = (byte *)(**(code **)(*(int *)param_1 + 200))();
        pbVar10 = (byte *)(**(code **)(*piVar8 + 200))();
        do {
          bVar4 = *pbVar10;
          bVar17 = bVar4 < *pbVar9;
          if (bVar4 != *pbVar9) {
LAB_1004a0c8:
            iVar6 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_1004a0cd;
          }
          if (bVar4 == 0) break;
          bVar4 = pbVar10[1];
          bVar17 = bVar4 < pbVar9[1];
          if (bVar4 != pbVar9[1]) goto LAB_1004a0c8;
          pbVar10 = pbVar10 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar4 != 0);
        iVar6 = 0;
LAB_1004a0cd:
        if (iVar6 == 0) {
          *(float *)(piVar8[1] + 0x164) =
               (float)*(int *)&this->field_0x64 + *(float *)(piVar8[1] + 0x164);
          (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9718,(float *)0x0,(edict_t *)0x0);
          iVar6 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(piVar8[1] + 0x208));
          (*g_engfuncs.pfnWriteByte)(iVar6);
          lVar18 = __ftol();
          (*g_engfuncs.pfnWriteShort)((int)lVar18);
          (*g_engfuncs.pfnWriteShort)(piVar8[0x2c7]);
          (*g_engfuncs.pfnWriteShort)(0);
          iVar6 = (**(code **)(*g_pGameRules + 200))();
          uStack_fc = 0x1004a15a;
          (*g_engfuncs.pfnWriteShort)(iVar6 + 1);
          (*g_engfuncs.pfnMessageEnd)();
        }
      }
      piVar7 = (int *)UTIL_FindEntityByClassname((int)piVar7,s_player_1009c678);
    }
    if (this->pev->message == 0) goto LAB_1004a277;
    pcVar19 = s___i_frags_for_they_100a360c;
  }
  pcVar19 = UTIL_VarArgs((byte_conflict *)pcVar19);
  uVar11 = 0xffffffff;
  do {
    pcVar15 = pcVar19;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar15 = pcVar19 + 1;
    cVar2 = *pcVar19;
    pcVar19 = pcVar15;
  } while (cVar2 != '\0');
  uVar11 = ~uVar11;
  iVar6 = -1;
  pCVar13 = aCStack_100;
  do {
    pCVar16 = pCVar13;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pCVar16 = pCVar13 + 1;
    CVar3 = *pCVar13;
    pCVar13 = pCVar16;
  } while (CVar3 != (CBaseEntity)0x0);
  pCVar13 = (CBaseEntity *)(pcVar15 + -uVar11);
  pCVar16 = pCVar16 + -1;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pCVar16 = *(undefined4 *)pCVar13;
    pCVar13 = pCVar13 + 4;
    pCVar16 = pCVar16 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pCVar16 = *pCVar13;
    pCVar13 = pCVar13 + 1;
    pCVar16 = pCVar16 + 1;
  }
LAB_1004a277:
  if (this->pev->message != 0) {
    pCVar13 = aCStack_100;
    lVar18 = __ftol();
    TSHudMessageAll(0,0xff,0,8,(int)lVar18,(char *)pCVar13);
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

/* 1004a370  CTSDMHill::WaitThink  (59 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSDMHill::WaitThink(void) */

void __thiscall CTSDMHill::WaitThink(CTSDMHill *this)

{
                    /* 0x4a370  133  ?WaitThink@CTSDMHill@@QAEXXZ */
  if (0.5 < *(float *)&this->field_0x68) {
    this->pev->nextthink = *(float *)&this->field_0x68 + gpGlobals->time;
    return;
  }
  this->pev->nextthink = gpGlobals->time + 0.5;
  return;
}

