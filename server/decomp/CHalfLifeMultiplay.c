/* ts_i386.so - CHalfLifeMultiplay (56 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00088f7c  CHalfLifeMultiplay::DeathNotice  (301 bytes)
 * undefined DeathNotice(undefined4 this, int * param_2, int param_3, int param_4, undefined4 param_5)
 */
/* CHalfLifeMultiplay::DeathNotice(CBasePlayer *, entvars_s *, entvars_s *, char *) */

void __thiscall
CHalfLifeMultiplay::DeathNotice(undefined4 this,int *param_2,int param_3,int param_4,char *param_5)

{
  int iVar1;
  edict_t *pEdict;
  
  if ((*(uint *)(param_3 + 0x1a4) & 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_3 + 0x208));
  }
  (*g_engfuncs.pfnMessageBegin)(2,gmsgDeathMsg,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(iVar1);
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_2 + 0x208));
  (*g_engfuncs.pfnWriteByte)(iVar1);
  (*g_engfuncs.pfnWriteString)(param_5);
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnMessageBegin)(9,0x32,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(3);
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_2 + 0x208));
  (*g_engfuncs.pfnWriteShort)(iVar1);
  if (param_4 == 0) {
    pEdict = *(edict_t **)(param_3 + 0x208);
  }
  else {
    pEdict = *(edict_t **)(param_4 + 0x208);
  }
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
  (*g_engfuncs.pfnWriteShort)(iVar1);
  (*g_engfuncs.pfnWriteLong)(0x27);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000890ac  CHalfLifeMultiplay::PlayerSpawn  (145 bytes)
 * undefined PlayerSpawn(undefined4 this, CBasePlayer * param_2)
 */
/* CHalfLifeMultiplay::PlayerSpawn(CBasePlayer *) */

void __thiscall CHalfLifeMultiplay::PlayerSpawn(undefined4 this,CBasePlayer *param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  piVar1 = &param_2->pev->weapons;
  *piVar1 = *piVar1 | 0x80000000;
  bVar2 = true;
  while( true ) {
    piVar3 = (int *)UTIL_FindEntityByClassname(piVar3,"game_player_equip");
    if (piVar3 == (int *)0x0) break;
    (**(code **)(piVar3[0x18] + 0xdc))(piVar3,param_2);
    bVar2 = false;
  }
  if (bVar2) {
    CBasePlayer::GiveNamedItem(param_2,0x10806a);
    CBasePlayer::BuyArmament(param_2);
    *(undefined4 *)&param_2->field_0x53c = *(undefined4 *)&param_2->field_0x540;
  }
  return;
}

/* 000895e4  CHalfLifeMultiplay::PlayerKilled  (6865 bytes)
 * undefined PlayerKilled(CBasePlayer * param_1, uint * param_2, uint * param_3)
 */
/* CHalfLifeMultiplay::PlayerKilled(CBasePlayer *, entvars_s *, entvars_s *) */

void __thiscall
CHalfLifeMultiplay::PlayerKilled
          (CHalfLifeMultiplay *this,CBasePlayer *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  byte bVar2;
  entvars_t *peVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  undefined1 uVar12;
  edict_t *peVar13;
  int iVar14;
  CBasePlayer *pCVar15;
  undefined4 *puVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  vec_t *pvVar27;
  char *pcVar28;
  char *pcVar29;
  undefined3 extraout_var;
  undefined1 *puVar30;
  uint uVar31;
  CBasePlayer *pCVar32;
  void *pvVar33;
  CTSKnife *this_00;
  int iVar34;
  byte *pbVar35;
  uint uVar36;
  byte *pbVar37;
  int *piVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  undefined2 in_FPUControlWord;
  int iVar42;
  int iVar43;
  undefined4 local_e0;
  uint local_c4;
  CBasePlayer *local_bc;
  char *local_b8;
  char local_aa;
  char local_a9;
  int local_a8;
  undefined2 local_a4;
  undefined2 uStack_a2;
  vec_t local_9c [5];
  undefined1 local_85;
  char local_7c [32];
  byte local_5c [76];
  
  bVar10 = false;
  bVar4 = false;
  bVar9 = false;
  local_aa = '\0';
  local_a9 = '\0';
  bVar8 = false;
  bVar7 = false;
  bVar5 = false;
  bVar6 = false;
  local_b8 = (char *)0x0;
  local_bc = (CBasePlayer *)0x0;
  peVar13 = (edict_t *)param_2[0x82];
  if (peVar13 == (edict_t *)0x0) {
    peVar13 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  pCVar32 = (CBasePlayer *)0x0;
  if (peVar13 != (edict_t *)0x0) {
    pCVar32 = peVar13->pvPrivateData;
  }
  if ((pCVar32 != (CBasePlayer *)0x0) && (iVar14 = (*pCVar32->vtable[0x13])(), iVar14 == 2)) {
    local_bc = pCVar32;
  }
  local_c4 = (**(code **)(*(int *)this + 0x6c))();
  if (((param_1->pev != (entvars_t *)param_2) && (pCVar32 != (CBasePlayer *)0x0)) &&
     (iVar14 = (*pCVar32->vtable[0x32])(), iVar14 != 0)) {
    local_c4 = TSGetPointsForFrag(param_1,param_2,param_3,local_c4,&local_aa,&local_a9);
    iVar14 = *(int *)&pCVar32->field_0xa10;
    if (((iVar14 != 0) && (*(int *)(iVar14 + 0xcc) != 0)) &&
       (pCVar15 = (CBasePlayer *)_((EHANDLE *)(*(int *)(iVar14 + 0xcc) + 0x30)), pCVar15 == param_1)
       ) {
      cVar11 = GetWeaponType(*(uint *)(iVar14 + 200));
      if (((1 < (int)cVar11 - 2U) && (cVar11 != 0xb)) &&
         ((glast_closecombat == '\0' && (param_3 == param_2)))) {
        bVar10 = true;
      }
    }
    bVar4 = gpGlobals->time - *(float *)&local_bc->field_0x748 < 2.0;
    if ((2 < (byte)param_1->field_0x744) &&
       (local_b8 = gpGlobals->pStringBase + param_1->pev->netname, 8 < (byte)param_1->field_0x744))
    {
      bVar9 = true;
    }
    if (local_bc->field_0x744 != -1) {
      local_bc->field_0x744 = local_bc->field_0x744 + '\x01';
    }
    if ((byte)local_bc->field_0x744 < 10) {
      if (local_bc->field_0x744 == '\t') {
        bVar6 = true;
      }
      else if (local_bc->field_0x744 == '\x06') {
        bVar7 = true;
      }
      else if (local_bc->field_0x744 == '\x03') {
        bVar8 = true;
      }
    }
    else {
      bVar5 = true;
    }
  }
  local_5c[0] = 'w';
  local_5c[1] = 'o';
  local_5c[2] = 'r';
  local_5c[3] = 'l';
  local_5c[4] = 'd';
  local_5c[5] = '\0';
  if ((param_2[0x69] & 8) == 0) {
    if (param_3[0x73] == 0) {
      pcVar17 = gpGlobals->pStringBase + *param_3;
    }
    else {
      pcVar17 = gpGlobals->pStringBase + param_3[0x73];
    }
LAB_00089a86:
    strcpy((char *)local_5c,pcVar17);
  }
  else {
    (*g_engfuncs.pfnIndexOfEdict)((edict_t *)param_2[0x82]);
    if (param_3 != (uint *)0x0) {
      if (param_3 == param_2) {
        peVar13 = (edict_t *)param_2[0x82];
        if (peVar13 == (edict_t *)0x0) {
          peVar13 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        }
        pvVar33 = (void *)0x0;
        if (peVar13 != (edict_t *)0x0) {
          pvVar33 = peVar13->pvPrivateData;
        }
        uVar36 = glast_weaponid;
        if (glast_weaponid == 0xffffffff) {
          if (glast_closecombat == '\0') {
            if (((*(int *)((int)pvVar33 + 0xa10) != 0) &&
                (iVar14 = *(int *)((int)pvVar33 + 0xa10), *(int *)(iVar14 + 0x88) == 0x10)) &&
               (*(int *)(iVar14 + 0xcc) != 0)) {
              if (glast_coldcock == '\0') {
                uVar36 = *(uint *)(*(int *)((int)pvVar33 + 0xa10) + 200);
                goto LAB_0008999b;
              }
              puVar16 = get_weapon_info(*(uint *)(iVar14 + 200));
              strcpy((char *)local_5c,(char *)(puVar16 + 0x11));
              strcat((char *)local_5c," Stock");
            }
          }
          else {
            local_5c[0] = 'K';
            local_5c[1] = 'u';
            local_5c[2] = 'n';
            local_5c[3] = 'g';
            local_5c[4] = ' ';
            local_5c[5] = 'F';
            local_5c[6] = 'u';
            local_5c[7] = '\0';
          }
          goto LAB_00089a97;
        }
LAB_0008999b:
        puVar16 = get_weapon_info(uVar36);
        pcVar17 = (char *)(puVar16 + 0x11);
      }
      else {
        bVar39 = CARRY4((uint)gpGlobals->pStringBase,*param_3);
        pbVar35 = (byte *)(gpGlobals->pStringBase + *param_3);
        bVar41 = pbVar35 == (byte *)0x0;
        iVar14 = 6;
        pbVar37 = &DAT_001077e5;
        do {
          if (iVar14 == 0) break;
          iVar14 = iVar14 + -1;
          bVar39 = *pbVar35 < *pbVar37;
          bVar41 = *pbVar35 == *pbVar37;
          pbVar35 = pbVar35 + 1;
          pbVar37 = pbVar37 + 1;
        } while (bVar41);
        if ((!bVar39 && !bVar41) == bVar39) {
          peVar13 = (edict_t *)param_3[0x82];
          if (peVar13 == (edict_t *)0x0) {
            peVar13 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
          }
          this_00 = (CTSKnife *)0x0;
          if (peVar13 != (edict_t *)0x0) {
            this_00 = peVar13->pvPrivateData;
          }
          if (this_00 == (CTSKnife *)0x0) goto LAB_00089a97;
          pcVar17 = CTSKnife::GetDescription(this_00);
        }
        else {
          pcVar17 = gpGlobals->pStringBase + *param_3;
        }
      }
      goto LAB_00089a86;
    }
  }
LAB_00089a97:
  iVar34 = 0;
  iVar14 = strncmp((char *)local_5c,"weapon_",7);
  if (iVar14 == 0) {
    iVar34 = 7;
  }
  else {
    iVar14 = strncmp((char *)local_5c,"monster_",8);
    if (iVar14 == 0) {
      iVar34 = 8;
    }
    else {
      iVar14 = strncmp((char *)local_5c,"func_",5);
      if (iVar14 == 0) {
        iVar34 = 5;
      }
    }
  }
  bVar39 = iVar34 != 0;
  if (bVar39) {
    strcpy((char *)local_9c,(char *)local_5c);
    strcpy((char *)local_5c,(char *)((int)local_9c + iVar34));
  }
  bVar39 = bVar39 && (undefined1 *)0xffffffef < &stack0xffffff04;
  bVar41 = iVar34 == 0 || &stack0x00000000 == (undefined1 *)0xec;
  iVar14 = 6;
  pbVar35 = local_5c;
  pbVar37 = &DAT_001077e5;
  do {
    if (iVar14 == 0) break;
    iVar14 = iVar14 + -1;
    bVar39 = *pbVar35 < *pbVar37;
    bVar41 = *pbVar35 == *pbVar37;
    pbVar35 = pbVar35 + 1;
    pbVar37 = pbVar37 + 1;
  } while (bVar41);
  bVar40 = (!bVar39 && !bVar41) < bVar39;
  bVar39 = (!bVar39 && !bVar41) == bVar39;
  if (bVar39) {
    pcVar17 = "Throwing Knife";
    pbVar35 = local_5c;
    for (iVar14 = 3; iVar14 != 0; iVar14 = iVar14 + -1) {
      *(undefined4 *)pbVar35 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pbVar35 = pbVar35 + 4;
    }
    *(undefined2 *)pbVar35 = *(undefined2 *)pcVar17;
    pbVar35[2] = pcVar17[2];
  }
  else {
    iVar14 = 9;
    pbVar35 = local_5c;
    pbVar37 = (byte *)"shrapnel";
    do {
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      bVar40 = *pbVar35 < *pbVar37;
      bVar39 = *pbVar35 == *pbVar37;
      pbVar35 = pbVar35 + 1;
      pbVar37 = pbVar37 + 1;
    } while (bVar39);
    bVar41 = (!bVar40 && !bVar39) < bVar40;
    bVar39 = (!bVar40 && !bVar39) == bVar40;
    if (bVar39) {
      pbVar35 = (byte *)0x107e8f;
      pbVar37 = local_5c;
      for (iVar14 = 2; iVar14 != 0; iVar14 = iVar14 + -1) {
        *(undefined4 *)pbVar37 = *(undefined4 *)pbVar35;
        pbVar35 = pbVar35 + 4;
        pbVar37 = pbVar37 + 4;
      }
      *pbVar37 = *pbVar35;
    }
    else {
      iVar14 = 8;
      pbVar35 = local_5c;
      pbVar37 = (byte *)0x10c734;
      do {
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        bVar41 = *pbVar35 < *pbVar37;
        bVar39 = *pbVar35 == *pbVar37;
        pbVar35 = pbVar35 + 1;
        pbVar37 = pbVar37 + 1;
      } while (bVar39);
      if ((!bVar41 && !bVar39) == bVar41) {
        pcVar17 = "M61 Grenade";
        pbVar35 = local_5c;
        for (iVar14 = 3; iVar14 != 0; iVar14 = iVar14 + -1) {
          *(undefined4 *)pbVar35 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pbVar35 = pbVar35 + 4;
        }
      }
    }
  }
  (**(code **)(*(int *)this + 0x74))(this,param_1,param_2,param_3);
  iVar14 = -1;
  pbVar35 = local_5c;
  do {
    if (iVar14 == 0) break;
    iVar14 = iVar14 + -1;
    bVar2 = *pbVar35;
    pbVar35 = pbVar35 + 1;
  } while (bVar2 != 0);
  uVar36 = 0;
  if (iVar14 != -2) {
    do {
      bVar2 = local_5c[uVar36];
      if ((byte)(bVar2 + 0xbf) < 0x1a) {
        local_5c[uVar36] = bVar2 + 0x20;
      }
      else if (local_5c[uVar36] == 0x20) {
        local_5c[uVar36] = 0x5f;
      }
      uVar36 = uVar36 + 1;
      uVar31 = 0xffffffff;
      pbVar35 = local_5c;
      do {
        if (uVar31 == 0) break;
        uVar31 = uVar31 - 1;
        bVar2 = *pbVar35;
        pbVar35 = pbVar35 + 1;
      } while (bVar2 != 0);
    } while (uVar36 < ~uVar31 - 1);
  }
  if (param_1->pev == (entvars_t *)param_2) {
    if (g_teamplay == 0) {
      (*g_engfuncs.pfnGetPlayerUserId)(param_1->pev->pContainingEntity);
      pcVar18 = (*g_engfuncs.pfnGetPlayerAuthId)(param_1->pev->pContainingEntity);
      iVar14 = (*g_engfuncs.pfnGetPlayerUserId)(param_1->pev->pContainingEntity);
      pcVar19 = gpGlobals->pStringBase + param_1->pev->netname;
      pcVar17 = "\"%s<%i><%s><%i>\" committed suicide with \"%s\"\n";
    }
    else {
      pcVar17 = (*g_engfuncs.pfnGetInfoKeyBuffer)((edict_t *)param_2[0x82]);
      (*g_engfuncs.pfnInfoKeyValue)(pcVar17,"model");
      pcVar18 = (*g_engfuncs.pfnGetPlayerAuthId)(param_1->pev->pContainingEntity);
      iVar14 = (*g_engfuncs.pfnGetPlayerUserId)(param_1->pev->pContainingEntity);
      pcVar19 = gpGlobals->pStringBase + param_1->pev->netname;
      pcVar17 = "\"%s<%i><%s><%s>\" committed suicide with \"%s\"\n";
    }
LAB_0008a2b5:
    UTIL_LogPrintf(pcVar17,pcVar19,iVar14,pcVar18);
  }
  else {
    if ((param_2[0x69] & 8) == 0) {
      if (g_teamplay == 0) {
        (*g_engfuncs.pfnGetPlayerUserId)(param_1->pev->pContainingEntity);
        pcVar18 = (*g_engfuncs.pfnGetPlayerAuthId)(param_1->pev->pContainingEntity);
        iVar14 = (*g_engfuncs.pfnGetPlayerUserId)(param_1->pev->pContainingEntity);
        pcVar19 = gpGlobals->pStringBase + param_1->pev->netname;
        pcVar17 = "\"%s<%i><%s><%i>\" committed suicide with \"%s\" (world)\n";
      }
      else {
        pcVar17 = (*g_engfuncs.pfnGetInfoKeyBuffer)(param_1->pev->pContainingEntity);
        (*g_engfuncs.pfnInfoKeyValue)(pcVar17,"model");
        pcVar18 = (*g_engfuncs.pfnGetPlayerAuthId)(param_1->pev->pContainingEntity);
        iVar14 = (*g_engfuncs.pfnGetPlayerUserId)(param_1->pev->pContainingEntity);
        pcVar19 = gpGlobals->pStringBase + param_1->pev->netname;
        pcVar17 = "\"%s<%i><%s><%s>\" committed suicide with \"%s\" (world)\n";
      }
      goto LAB_0008a2b5;
    }
    if (local_b8 != (char *)0x0) {
      sprintf((char *)local_9c," (stopped_fury \"%s\")");
    }
    if (bVar5) {
      pcVar17 = " (is_unstoppable)";
      pcVar18 = local_7c;
      for (iVar14 = 4; iVar14 != 0; iVar14 = iVar14 + -1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar18 = pcVar18 + 4;
      }
      *(undefined2 *)pcVar18 = *(undefined2 *)pcVar17;
    }
    else {
      if (bVar6) {
        pcVar17 = " (is_specialist)";
LAB_00089e0d:
        iVar14 = 4;
        pcVar18 = local_7c;
      }
      else {
        if (bVar7) {
          pcVar17 = " (is_demolition)";
          goto LAB_00089e0d;
        }
        if (!bVar8) {
          local_7c[0] = '\0';
          goto LAB_00089e3d;
        }
        pcVar17 = " (is_killer)";
        pcVar18 = local_7c;
        iVar14 = 3;
      }
      for (; iVar14 != 0; iVar14 = iVar14 + -1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar18 = pcVar18 + 4;
      }
      *pcVar18 = *pcVar17;
    }
LAB_00089e3d:
    if (g_teamplay == 0) {
      pcVar18 = (char *)(*g_engfuncs.pfnGetPlayerUserId)(param_1->pev->pContainingEntity);
      pcVar19 = (*g_engfuncs.pfnGetPlayerAuthId)(param_1->pev->pContainingEntity);
      iVar14 = (*g_engfuncs.pfnGetPlayerUserId)(param_1->pev->pContainingEntity);
      pcVar20 = (char *)(*g_engfuncs.pfnGetPlayerUserId)((edict_t *)param_2[0x82]);
      pcVar21 = (*g_engfuncs.pfnGetPlayerAuthId)((edict_t *)param_2[0x82]);
      iVar34 = (*g_engfuncs.pfnGetPlayerUserId)((edict_t *)param_2[0x82]);
      pcVar17 = " (sliding)";
      if (local_aa == '\0') {
        pcVar17 = "";
      }
      pcVar24 = " (diving)";
      if (local_a9 == '\0') {
        pcVar24 = "";
      }
      pcVar25 = " (double_kill)";
      if (!bVar4) {
        pcVar25 = "";
      }
      pcVar26 = " (killed_specialist)";
      if (!bVar9) {
        pcVar26 = "";
      }
      pvVar27 = (vec_t *)&DAT_00106657;
      if (local_b8 != (char *)0x0) {
        pvVar27 = local_9c;
      }
      pcVar28 = " (victims_weapon)";
      if (!bVar10) {
        pcVar28 = "";
      }
      pcVar22 = gpGlobals->pStringBase + param_1->pev->netname;
      pcVar23 = gpGlobals->pStringBase + param_2[0x74];
      pcVar29 = "\"%s<%i><%s><%i>\" killed \"%s<%i><%s><%i>\" with \"%s\"%s%s%s%s%s%s%s%s\n";
    }
    else {
      pcVar17 = (*g_engfuncs.pfnGetInfoKeyBuffer)(param_1->pev->pContainingEntity);
      pcVar18 = (*g_engfuncs.pfnInfoKeyValue)(pcVar17,"model");
      pcVar19 = (*g_engfuncs.pfnGetPlayerAuthId)(param_1->pev->pContainingEntity);
      iVar14 = (*g_engfuncs.pfnGetPlayerUserId)(param_1->pev->pContainingEntity);
      pcVar17 = (*g_engfuncs.pfnGetInfoKeyBuffer)((edict_t *)param_2[0x82]);
      pcVar20 = (*g_engfuncs.pfnInfoKeyValue)(pcVar17,"model");
      pcVar21 = (*g_engfuncs.pfnGetPlayerAuthId)((edict_t *)param_2[0x82]);
      iVar34 = (*g_engfuncs.pfnGetPlayerUserId)((edict_t *)param_2[0x82]);
      pcVar17 = " (sliding)";
      if (local_aa == '\0') {
        pcVar17 = "";
      }
      pcVar24 = " (diving)";
      if (local_a9 == '\0') {
        pcVar24 = "";
      }
      pcVar25 = " (double_kill)";
      if (!bVar4) {
        pcVar25 = "";
      }
      pcVar26 = " (killed_specialist)";
      if (!bVar9) {
        pcVar26 = "";
      }
      pvVar27 = (vec_t *)&DAT_00106657;
      if (local_b8 != (char *)0x0) {
        pvVar27 = local_9c;
      }
      pcVar28 = " (victims_weapon)";
      if (!bVar10) {
        pcVar28 = "";
      }
      pcVar22 = gpGlobals->pStringBase + param_1->pev->netname;
      pcVar23 = gpGlobals->pStringBase + param_2[0x74];
      pcVar29 = "\"%s<%i><%s><%s>\" killed \"%s<%i><%s><%s>\" with \"%s\"%s%s%s%s%s%s%s%s\n";
    }
    UTIL_LogPrintf(pcVar29,pcVar23,iVar34,pcVar21,pcVar20,pcVar22,iVar14,pcVar19,pcVar18,local_5c,
                   pcVar28,pvVar27,pcVar26,pcVar25,pcVar24,pcVar17);
  }
  *(int *)&param_1->field_0xb30 = *(int *)&param_1->field_0xb30 + 1;
  FireTargets(0x1088dd,param_1,param_1,3,0);
  if (param_1->field_0x7b9 != '\0') {
    CTSGameRules::TheOneIsDead((CTSGameRules *)&TSGameRules,param_1,local_bc);
    param_1->field_0x744 = 0;
  }
  if (param_1->pev == (entvars_t *)param_2) {
    if (8 < (byte)param_1->field_0x744) {
      param_2[0x59] = (uint)((float)param_2[0x59] - 5.0);
      pcVar17 = UTIL_VarArgs("%s, #TS_SpecialistSuicide");
      TSHudMessageAll(0,0xff,0,1,0x1e,pcVar17);
    }
    param_2[0x59] = (uint)((float)param_2[0x59] - 1.0);
    goto LAB_0008aef5;
  }
  if ((pCVar32 == (CBasePlayer *)0x0) || (iVar14 = (*pCVar32->vtable[0x32])(), iVar14 == 0)) {
    param_2[0x59] = (uint)((float)param_2[0x59] - 1.0);
    goto LAB_0008aef5;
  }
  if (((((param_2[0x94] & 0x10c10) != 0) || (glast_closecombat != '\0')) || (2 < (int)local_c4)) &&
     (bVar39 = DoSpectacularNess(), CONCAT31(extraout_var,bVar39) != 0)) {
    peVar3 = param_1->pev;
    local_9c[0] = peVar3->origin[0];
    local_9c[1] = peVar3->origin[1];
    local_9c[2] = peVar3->origin[2];
    CTSSlowMotionPoint::CreateSlowMotionPoint(local_9c,0x3e800000,0x3f800000,0);
  }
  if (0 < (int)local_c4) {
    if (glast_headshot != '\0') {
      pcVar17 = UTIL_VarArgs("#TS_Headshot #TS_FrgFr %s!");
      TSHudMessageAll(0,0xff,0,1,0x14,pcVar17);
    }
    if (((((param_3 == param_2) && (local_bc != (CBasePlayer *)0x0)) &&
         (*(int *)&local_bc->field_0xa10 != 0)) &&
        ((iVar14 = *(int *)&local_bc->field_0xa10, *(int *)(iVar14 + 0x88) == 0x10 &&
         (*(int *)(iVar14 + 0xcc) != 0)))) && (glast_closecombat == '\0')) {
      puVar16 = get_weapon_info(*(uint *)(iVar14 + 200));
      if (*(char *)(puVar16 + 0xd2) == '\x03') {
        pcVar17 = "#TS_KnifeKill #TS_FrgFr %s!";
      }
      else {
        puVar16 = get_weapon_info(*(uint *)(iVar14 + 200));
        if (*(char *)(puVar16 + 0xd2) != '\n') goto LAB_0008a57e;
        pcVar17 = "#TS_KatanaKill #TS_FrgFr %s!";
      }
      pcVar17 = UTIL_VarArgs(pcVar17);
      TSHudMessageAll(0,0xff,0,1,0x14,pcVar17);
    }
LAB_0008a57e:
    if (glast_coldcock != '\0') {
      pcVar17 = UTIL_VarArgs("#TS_Coldcock #TS_FrgFr %s!");
      TSHudMessageAll(0,0xff,0,1,0x14,pcVar17);
    }
    if (bVar4) {
      local_c4 = local_c4 << 1;
      pcVar17 = UTIL_VarArgs("#TS_Doublefrag #TS_FrgFr %s!");
      TSHudMessageAll(0,0xff,0,1,0x14,pcVar17);
    }
    if (local_b8 != (char *)0x0) {
      if (bVar9) {
        local_c4 = local_c4 + 5;
        pcVar17 = UTIL_VarArgs("%i #TS_Frg #TS_FrgFr %s, #TS_KilledTheSpecialist",local_c4,
                               gpGlobals->pStringBase + param_2[0x74]);
        TSHudMessageAll(0,0xff,0,1,0x1e,pcVar17);
        if ((*(int *)&local_bc->field_0x724 == 0) && (*(int *)&local_bc->field_0x728 == 0)) {
          *(undefined4 *)&local_bc->field_0x724 = 0;
          *(undefined4 *)&local_bc->field_0x728 = 8;
          *(undefined4 *)&local_bc->field_0x72c = 0;
          *(undefined4 *)&local_bc->field_0x730 = 2;
        }
      }
      (*g_engfuncs.pfnRandomLong)(1,10);
      sprintf((char *)local_9c,"#TS_SpreeKilled%i");
      local_85 = 0;
      pcVar17 = UTIL_VarArgs("%s %s",gpGlobals->pStringBase + param_1->pev->netname,local_9c);
      TSHudMessageAll(0,0xff,0,1,0x1e,pcVar17);
    }
    iVar14 = 0;
    local_e0 = 0;
    if (bVar5) {
      pcVar17 = UTIL_VarArgs("#TS_Unstoppable %s! %i #TS_ConsKills",
                             gpGlobals->pStringBase + param_2[0x74],
                             (uint)(byte)local_bc->field_0x744);
      TSHudMessageAll(0,0xff,0,1,0x1e,pcVar17);
      local_c4 = local_c4 << 1;
    }
    else if (bVar6) {
      pcVar17 = UTIL_VarArgs("%s #TS_Specialist");
      TSHudMessageAll(0,0xff,0,1,0x37,pcVar17);
      if (local_bc->pev->health < 150.0) {
        local_bc->pev->health = 150.0;
      }
      local_bc->field_0x74e = 1;
      local_bc->field_0x74f = 1;
      (*g_engfuncs.pfnSetPhysicsKeyValue)(local_bc->pev->pContainingEntity,"mj","1");
      (*g_engfuncs.pfnMessageBegin)(1,gmsgTSPowerUp,(float *)0x0,local_bc->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteShort)(4);
      (*g_engfuncs.pfnWriteByte)(0);
      (*g_engfuncs.pfnMessageEnd)();
      (*g_engfuncs.pfnMessageBegin)(1,gmsgTSPowerUp,(float *)0x0,local_bc->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteShort)(0x100);
      (*g_engfuncs.pfnWriteByte)(0);
      (*g_engfuncs.pfnMessageEnd)();
      if ((*(int *)&local_bc->field_0x724 == 0) && (*(int *)&local_bc->field_0x728 == 0)) {
        *(undefined4 *)&local_bc->field_0x724 = 0;
        *(undefined4 *)&local_bc->field_0x728 = 8;
        *(undefined4 *)&local_bc->field_0x72c = 0;
        *(undefined4 *)&local_bc->field_0x730 = 2;
      }
      uVar12 = 10;
      if (local_bc->field_0x74c != '\n') {
        uVar12 = 4;
      }
      local_bc->field_0x74c = uVar12;
    }
    else if (bVar7) {
      fVar1 = local_bc->pev->health + 60.0;
      if (150.0 < fVar1) {
        fVar1 = 150.0;
      }
      local_bc->pev->health = fVar1;
      uVar12 = 10;
      if (local_bc->field_0x74c != '\n') {
        uVar12 = 3;
      }
      local_bc->field_0x74c = uVar12;
      iVar14 = 6;
      local_e0 = 0x2d;
    }
    else if (bVar8) {
      fVar1 = local_bc->pev->health + 30.0;
      if (150.0 < fVar1) {
        fVar1 = 150.0;
      }
      local_bc->pev->health = fVar1;
      uVar12 = 10;
      if (local_bc->field_0x74c != '\n') {
        uVar12 = 2;
      }
      local_bc->field_0x74c = uVar12;
      iVar14 = 3;
      local_e0 = 0x23;
    }
    if (iVar14 != 0) {
      (*g_engfuncs.pfnRandomLong)(1,0x10);
      sprintf((char *)local_9c,"#TS_KillSpree%i");
      local_85 = 0;
      pcVar17 = UTIL_VarArgs("%s %s %i #TS_ConsKills",gpGlobals->pStringBase + param_2[0x74],
                             local_9c,iVar14);
      TSHudMessageAll(0,0xff,0,1,local_e0,pcVar17);
    }
    if (100.0 < local_bc->pev->health) {
      *(float *)&local_bc->field_0x73c = gpGlobals->time + 1.0;
    }
    if (bVar4) {
      *(undefined4 *)&local_bc->field_0x748 = 0;
    }
    else {
      *(float *)&local_bc->field_0x748 = gpGlobals->time;
    }
    if (local_c4 == 0xffffffff) {
      iVar14 = -1000;
    }
    else {
      iVar14 = local_c4 * 500 + 400;
    }
    CBasePlayer::GiveCash(local_bc,iVar14);
    CBasePlayer::GiveCash(param_1,900);
  }
  if (1 < TSGameRules) {
    CBasePlayer::GiveCash(local_bc,((local_c4 != 0xffffffff) - 1 & 0xfffff830) + 1000);
    CBasePlayer::GiveCash(param_1,1000);
  }
  if (bVar10) {
    pcVar17 = UTIL_VarArgs("%s #TS_Killed %s #TS_OwnWeapon",gpGlobals->pStringBase + param_2[0x74],
                           gpGlobals->pStringBase + param_1->pev->netname);
    TSHudMessageAll(0,0xff,0,1,0x1e,pcVar17);
  }
  param_2[0x59] = (uint)((float)(int)local_c4 + (float)param_2[0x59]);
  pcVar17 = (char *)(*local_bc->vtable[0x34])();
  CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pcVar17);
  CTSGameRules::UpdateTeamScores();
  FireTargets(0x1089e3,pCVar32,pCVar32,3,0);
  if (((((float)slowmatch._12_4_ == 1.0) && (local_bc != (CBasePlayer *)0x0)) && (0 < (int)local_c4)
      ) && (((*(int *)&local_bc->field_0x728 == 0 || ((local_bc->field_0x728 & 1) != 0)) &&
            (*(int *)&local_bc->field_0x724 == 0)))) {
    *(undefined4 *)&local_bc->field_0x724 = 0;
    *(undefined4 *)&local_bc->field_0x728 = 1;
    iVar14 = *(int *)&local_bc->field_0x730 + 1;
    if (3 < iVar14) {
      iVar14 = 3;
    }
    *(int *)&local_bc->field_0x730 = iVar14;
  }
  if (local_c4 == 0xffffffff) {
    if ((*(float *)&local_bc->field_0x7c4 == 0.0) ||
       (*(float *)&local_bc->field_0x7c4 < gpGlobals->time)) {
      *(float *)&local_bc->field_0x7c4 = gpGlobals->time + 30.0;
      local_bc->field_0x7c8 = 1;
    }
    else if (gpGlobals->time < *(float *)&local_bc->field_0x7c4) {
      *(float *)&local_bc->field_0x7c4 = gpGlobals->time + 30.0;
      local_bc->field_0x7c8 = local_bc->field_0x7c8 + '\x01';
    }
    if ('\x02' < (char)local_bc->field_0x7c8) {
      if ((float)banfortk._12_4_ <= 0.0) {
        ClientPrint((int)param_2,2,"You have been kicked for teamkilling...\n",0,0,0,0);
        (*g_engfuncs.pfnGetPlayerUserId)(local_bc->pev->pContainingEntity);
        pcVar17 = UTIL_VarArgs("kick #%i\n");
        (*g_engfuncs.pfnServerCommand)(pcVar17);
        iVar43 = 0;
        iVar42 = 0;
        iVar34 = 0;
        iVar14 = 0;
        puVar30 = UTIL_VarArgs("%s kicked for teamkilling\n",gpGlobals->pStringBase + param_2[0x74])
        ;
      }
      else {
        iVar43 = 0;
        iVar42 = 0;
        iVar34 = 0;
        iVar14 = 0;
        local_a8 = (int)ROUND((float)banfortk._12_4_);
        puVar30 = UTIL_VarArgs("You have been banned for teamkilling (%i minutes)...\n",local_a8);
        ClientPrint((int)param_2,2,puVar30,iVar14,iVar34,iVar42,iVar43);
        (*g_engfuncs.pfnGetPlayerUserId)(local_bc->pev->pContainingEntity);
        local_a8 = (int)ROUND((float)banfortk._12_4_);
        pcVar17 = UTIL_VarArgs("banid %i #%i kick\n");
        (*g_engfuncs.pfnServerCommand)(pcVar17);
        iVar43 = 0;
        iVar42 = 0;
        iVar34 = 0;
        iVar14 = 0;
        _local_a4 = CONCAT22(uStack_a2,in_FPUControlWord);
        local_a8 = (int)ROUND((float)banfortk._12_4_);
        puVar30 = UTIL_VarArgs("%s banned for teamkilling (%i minutes)\n",
                               gpGlobals->pStringBase + param_2[0x74],local_a8);
      }
      UTIL_ClientPrintAll(3,puVar30,iVar14,iVar34,iVar42,iVar43);
    }
  }
LAB_0008aef5:
  (*g_engfuncs.pfnMessageBegin)(2,gmsgScoreInfo,(float *)0x0,(edict_t *)0x0);
  iVar14 = (*g_engfuncs.pfnIndexOfEdict)(param_1->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(iVar14);
  _local_a4 = CONCAT22(uStack_a2,in_FPUControlWord);
  local_a8 = (int)ROUND(param_1->pev->frags);
  (*g_engfuncs.pfnWriteShort)(local_a8);
  (*g_engfuncs.pfnWriteShort)(*(int *)&param_1->field_0xb30);
  (*g_engfuncs.pfnWriteShort)(0);
  iVar14 = (**(code **)(*(int *)this + 0xd0))(this,&param_1->field_0xb48);
  (*g_engfuncs.pfnWriteShort)(iVar14 + 1);
  (*g_engfuncs.pfnMessageEnd)();
  peVar13 = (edict_t *)param_2[0x82];
  if (peVar13 == (edict_t *)0x0) {
    peVar13 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  piVar38 = (int *)0x0;
  if (peVar13 != (edict_t *)0x0) {
    piVar38 = peVar13->pvPrivateData;
  }
  if ((piVar38 != (int *)0x0) && (iVar14 = (**(code **)(piVar38[0x18] + 0x4c))(), iVar14 == 2)) {
    (*g_engfuncs.pfnMessageBegin)(2,gmsgScoreInfo,(float *)0x0,(edict_t *)0x0);
    iVar14 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*piVar38 + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar14);
    _local_a4 = CONCAT22(uStack_a2,in_FPUControlWord);
    local_a8 = (int)ROUND(*(float *)(*piVar38 + 0x164));
    (*g_engfuncs.pfnWriteShort)(local_a8);
    (*g_engfuncs.pfnWriteShort)(piVar38[0x2cc]);
    (*g_engfuncs.pfnWriteShort)(0);
    iVar14 = (**(code **)(*(int *)this + 0xd0))(this,piVar38 + 0x2d2);
    (*g_engfuncs.pfnWriteShort)(iVar14 + 1);
    (*g_engfuncs.pfnMessageEnd)();
    piVar38[0x2d1] = (int)gpGlobals->time;
  }
  CTSGameRules::CallCheckDeads((CTSGameRules *)&TSGameRules);
  return;
}

/* 0008b0e4  CHalfLifeMultiplay::PlayFootstepSounds  (90 bytes)
 * undefined4 PlayFootstepSounds(undefined4 param_1, CBasePlayer * param_2)
 */
/* CHalfLifeMultiplay::PlayFootstepSounds(CBasePlayer *, float) */

undefined4 CHalfLifeMultiplay::PlayFootstepSounds(undefined4 param_1,CBasePlayer *param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  
  bVar3 = CBasePlayer::IsOnLadder(param_2);
  if ((CONCAT31(extraout_var,bVar3) != 0) ||
     (fVar1 = param_2->pev->velocity[0], fVar2 = param_2->pev->velocity[1],
     220.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1))) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

/* 0008b140  CHalfLifeMultiplay::IsValidTeam  (257 bytes)
 * bool IsValidTeam(undefined4 this, char * param_2)
 */
/* CHalfLifeMultiplay::IsValidTeam(char *) */

bool __thiscall CHalfLifeMultiplay::IsValidTeam(undefined4 this,char *param_2)

{
  int iVar1;
  
  iVar1 = strcasecmp(param_2,"barney");
  if (((((iVar1 != 0) && (iVar1 = strcasecmp(param_2,"gina"), iVar1 != 0)) &&
       (iVar1 = strcasecmp(param_2,"gman"), iVar1 != 0)) &&
      ((iVar1 = strcasecmp(param_2,"helmet"), iVar1 != 0 &&
       (iVar1 = strcasecmp(param_2,"hgrunt"), iVar1 != 0)))) &&
     ((iVar1 = strcasecmp(param_2,"recon"), iVar1 != 0 &&
      ((iVar1 = strcasecmp(param_2,"robo"), iVar1 != 0 &&
       (iVar1 = strcasecmp(param_2,"scientist"), iVar1 != 0)))))) {
    iVar1 = strcasecmp(param_2,"zombie");
    return iVar1 != 0;
  }
  return false;
}

/* 0008b244  CHalfLifeMultiplay::ClientUserInfoChanged  (353 bytes)
 * undefined ClientUserInfoChanged(int * param_1, undefined4 param_2)
 */
/* CHalfLifeMultiplay::ClientUserInfoChanged(CBasePlayer *, char *) */

void __thiscall
CHalfLifeMultiplay::ClientUserInfoChanged(CHalfLifeMultiplay *this,int *param_1,char *param_2)

{
  int clientIndex;
  uint uVar1;
  char *pcVar2;
  int iVar3;
  char *infobuffer;
  char local_41c [1036];
  
  clientIndex = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_1 + 0x208));
  uVar1 = PlayerIsCheating((uint)param_1,param_2);
  if ((char)uVar1 == '\0') {
    pcVar2 = (*g_engfuncs.pfnInfoKeyValue)(param_2,"model");
    iVar3 = strcasecmp(pcVar2,(char *)(param_1 + 0x2d2));
    if (iVar3 != 0) {
      if (((float)defaultteam._12_4_ == 0.0) &&
         (iVar3 = (**(code **)(*(int *)this + 0xf4))(this,pcVar2), iVar3 != 0)) {
        return;
      }
      infobuffer = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(*param_1 + 0x208));
      (*g_engfuncs.pfnSetClientKeyValue)(clientIndex,infobuffer,"model",(char *)(param_1 + 0x2d2));
      sprintf(local_41c,"* Can\'t change team to \'%s\'\n",pcVar2);
      UTIL_SayText(local_41c,param_1);
      sprintf(local_41c,"* HLDM models not allowed.\n");
      UTIL_SayText(local_41c,param_1);
    }
  }
  else {
    pcVar2 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(*param_1 + 0x208));
    (*g_engfuncs.pfnSetClientKeyValue)(clientIndex,pcVar2,"cl_lw","1");
  }
  return;
}

/* 000cedd0  CHalfLifeMultiplay::CHalfLifeMultiplay  (277 bytes)
 * undefined CHalfLifeMultiplay(void)
 */
/* CHalfLifeMultiplay::CHalfLifeMultiplay(void) */

void __thiscall CHalfLifeMultiplay::CHalfLifeMultiplay(CHalfLifeMultiplay *this)

{
  int iVar1;
  char *pcVar2;
  char *szFmt;
  CHalfLifeMultiplay *pCVar3;
  char local_10c [256];
  
  *(undefined1 **)this = CGameRules_virtual_table;
  *(undefined1 **)this = CHalfLifeMultiplay_virtual_table;
  CTSGameRules::Init((CTSGameRules *)&TSGameRules);
  CVoiceGameMgr::Init((CVoiceGameMgr *)g_VoiceGameMgr,&g_GameMgrHelper,gpGlobals->maxClients);
  pCVar3 = this;
  RefreshSkillData();
  *(undefined4 *)(this + 4) = 0;
  g_flIntermissionStartTime = 0;
  iVar1 = (*g_engfuncs.pfnIsDedicatedServer)(pCVar3);
  if (iVar1 == 0) {
    pcVar2 = (*g_engfuncs.pfnCVarGetString)("lservercfgfile");
    if (pcVar2 == (char *)0x0) {
      return;
    }
    if (*pcVar2 == '\0') {
      return;
    }
    szFmt = "Executing listen server config file\n";
  }
  else {
    pcVar2 = (*g_engfuncs.pfnCVarGetString)("servercfgfile");
    if (pcVar2 == (char *)0x0) {
      return;
    }
    if (*pcVar2 == '\0') {
      return;
    }
    szFmt = "Executing dedicated server config file\n";
  }
  (*g_engfuncs.pfnAlertMessage)(at_console,szFmt);
  sprintf(local_10c,"exec %s\n",pcVar2);
  (*g_engfuncs.pfnServerCommand)(local_10c);
  return;
}

/* 000ceee8  CHalfLifeMultiplay::ClientCommand  (140 bytes)
 * undefined4 ClientCommand(undefined4 this, int * param_2, char * param_3)
 */
/* CHalfLifeMultiplay::ClientCommand(CBasePlayer *, char const *) */

undefined4 __thiscall CHalfLifeMultiplay::ClientCommand(undefined4 this,int *param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  uVar1 = CVoiceGameMgr::ClientCommand((CVoiceGameMgr *)g_VoiceGameMgr,param_2,param_3);
  if ((char)uVar1 == '\0') {
    iVar2 = strcmp(param_3,"menuselect");
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = (*g_engfuncs.pfnCmd_Argc)();
    if (1 < iVar2) {
      pcVar3 = (*g_engfuncs.pfnCmd_Argv)(1);
      __strtol_internal(pcVar3,0,10,0);
    }
  }
  return 1;
}

/* 000cef78  CHalfLifeMultiplay::RefreshSkillData  (189 bytes)
 * undefined RefreshSkillData(void)
 */
/* CHalfLifeMultiplay::RefreshSkillData(void) */

void CHalfLifeMultiplay::RefreshSkillData(void)

{
  CGameRules::RefreshSkillData();
  DAT_00191a38 = 0x41f00000;
  DAT_001919e8 = 0x41c80000;
  DAT_001919ec = 0x41400000;
  DAT_001919f0 = 0x42200000;
  DAT_001919f4 = 0x41400000;
  DAT_001919f8 = 0x42c80000;
  DAT_001919fc = 0x41a00000;
  DAT_00191a00 = 0x41a00000;
  DAT_00191a08 = 0x42f00000;
  DAT_00191a14 = 0x41a00000;
  DAT_00191a10 = 0x41200000;
  DAT_00191a1c = 0x42c80000;
  DAT_00191a20 = 0x42f00000;
  DAT_00191a24 = 0x43160000;
  DAT_00191a18 = 0x41200000;
  return;
}

/* 000cf038  CHalfLifeMultiplay::Think  (753 bytes)
 * undefined Think(void)
 */
/* CHalfLifeMultiplay::Think(void) */

void __thiscall CHalfLifeMultiplay::Think(CHalfLifeMultiplay *this)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  longdouble lVar8;
  int local_1c;
  
  CVoiceGameMgr::Update((CVoiceGameMgr *)g_VoiceGameMgr,(double)gpGlobals->frametime);
  uVar3 = fraglimit._12_4_;
  local_1c = 0;
  if (g_fGameOver != 0) {
    lVar8 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("mp_chattime");
    if ((int)ROUND(lVar8) < 10) {
      (*g_engfuncs.pfnCVarSetString)("mp_chattime","10");
    }
    else if (0x78 < (int)ROUND(lVar8)) {
      pcVar4 = (char *)UTIL_dtos1(0x78);
      (*g_engfuncs.pfnCVarSetString)("mp_chattime",pcVar4);
    }
    fVar2 = g_flIntermissionStartTime + (float)mp_chattime._12_4_;
    *(float *)(this + 4) = fVar2;
    if (gpGlobals->time <= fVar2) {
      return;
    }
    if ((*(int *)(this + 8) == 0) && (gpGlobals->time <= g_flIntermissionStartTime + 120.0)) {
      return;
    }
    (**(code **)(*(int *)this + 0xf8))(this);
    return;
  }
  fVar2 = (float)timelimit._12_4_ * 60.0;
  if (fVar2 == 0.0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (int)ROUND(fVar2 - gpGlobals->time);
    if (fVar2 <= gpGlobals->time) goto LAB_000cf313;
  }
  if ((float)fraglimit._12_4_ != 0.0) {
    local_1c = 9999;
    for (iVar7 = 1; iVar7 <= gpGlobals->maxClients; iVar7 = iVar7 + 1) {
      piVar5 = (int *)UTIL_PlayerByIndex(iVar7);
      if ((piVar5 != (int *)0x0) && ((float)uVar3 <= *(float *)(*piVar5 + 0x164)))
      goto LAB_000cf313;
      if ((piVar5 != (int *)0x0) &&
         (iVar1 = (int)ROUND((float)uVar3 - *(float *)(*piVar5 + 0x164)), iVar1 < local_1c)) {
        local_1c = iVar1;
      }
    }
  }
  if (local_1c != last_frags_1203) {
    pcVar4 = UTIL_VarArgs("%i",local_1c);
    (*g_engfuncs.pfnCvar_DirectSet)((cvar_s *)fragsleft,pcVar4);
  }
  if ((float)last_time_1204 != (float)timeleft._12_4_) {
    pcVar4 = UTIL_VarArgs("%i",iVar6);
    (*g_engfuncs.pfnCvar_DirectSet)((cvar_s *)timeleft,pcVar4);
  }
  last_frags_1203 = local_1c;
  last_time_1204 = iVar6;
  CTSGameRules::Think((CTSGameRules *)&TSGameRules);
  if (DAT_001799c4 == '\0') {
    return;
  }
LAB_000cf313:
  (**(code **)(*(int *)this + 0xfc))(this);
  return;
}

/* 000cf330  CHalfLifeMultiplay::IsMultiplayer  (6 bytes)
 * undefined4 IsMultiplayer(void)
 */
/* CHalfLifeMultiplay::IsMultiplayer(void) */

undefined4 CHalfLifeMultiplay::IsMultiplayer(void)

{
  return 1;
}

/* 000cf338  CHalfLifeMultiplay::IsDeathmatch  (6 bytes)
 * undefined4 IsDeathmatch(void)
 */
/* CHalfLifeMultiplay::IsDeathmatch(void) */

undefined4 CHalfLifeMultiplay::IsDeathmatch(void)

{
  return 1;
}

/* 000cf340  CHalfLifeMultiplay::IsCoOp  (63 bytes)
 * int IsCoOp(void)
 */
/* CHalfLifeMultiplay::IsCoOp(void) */

int CHalfLifeMultiplay::IsCoOp(void)

{
  return (int)ROUND(gpGlobals->coop);
}

/* 000cf380  CHalfLifeMultiplay::FShouldSwitchWeapon  (149 bytes)
 * bool FShouldSwitchWeapon(undefined4 this, int param_2, int param_3)
 */
/* CHalfLifeMultiplay::FShouldSwitchWeapon(CBasePlayer *, CBasePlayerItem *) */

bool __thiscall CHalfLifeMultiplay::FShouldSwitchWeapon(undefined4 this,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_3 + 0x60) + 0x124))(param_3);
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0xa10) == 0) {
      return true;
    }
    iVar1 = (**(code **)(*(int *)(*(int *)(param_2 + 0xa10) + 0x60) + 300))
                      (*(int *)(param_2 + 0xa10));
    if (iVar1 != 0) {
      return *(int *)(&DAT_001a5b68 + *(int *)(*(int *)(param_2 + 0xa10) + 0x88) * 0x2c) <
             *(int *)(&DAT_001a5b68 + *(int *)(param_3 + 0x88) * 0x2c);
    }
  }
  return false;
}

/* 000cf418  CHalfLifeMultiplay::GetNextBestWeapon  (379 bytes)
 * undefined4 GetNextBestWeapon(undefined4 this, CBasePlayer * param_2, int param_3)
 */
/* CHalfLifeMultiplay::GetNextBestWeapon(CBasePlayer *, CBasePlayerItem *) */

undefined4 __thiscall
CHalfLifeMultiplay::GetNextBestWeapon(undefined4 this,CBasePlayer *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  local_18 = -1;
  local_14 = 0;
  iVar1 = (**(code **)(*(int *)(param_3 + 0x60) + 300))(param_3);
  local_1c = 0;
  local_24 = 0x9f0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      for (iVar1 = *(int *)(&param_2->field_0x8 + local_24); iVar1 != 0;
          iVar1 = *(int *)(iVar1 + 0x84)) {
        if (((*(int *)(&DAT_001a5b68 + *(int *)(iVar1 + 0x88) * 0x2c) < 0) ||
            (*(int *)(&DAT_001a5b68 + *(int *)(iVar1 + 0x88) * 0x2c) !=
             *(int *)(&DAT_001a5b68 + *(int *)(param_3 + 0x88) * 0x2c))) || (iVar1 == param_3)) {
          if (((local_18 < *(int *)(&DAT_001a5b68 + *(int *)(iVar1 + 0x88) * 0x2c)) &&
              (iVar1 != param_3)) &&
             (iVar3 = (**(code **)(*(int *)(iVar1 + 0x60) + 0x124))(iVar1), iVar3 != 0)) {
            local_18 = *(int *)(&DAT_001a5b68 + *(int *)(iVar1 + 0x88) * 0x2c);
            local_14 = iVar1;
          }
        }
        else {
          iVar3 = (**(code **)(*(int *)(iVar1 + 0x60) + 0x124))(iVar1);
          if ((iVar3 != 0) && (iVar3 = CBasePlayer::SwitchWeapon(param_2,iVar1), iVar3 != 0)) {
            return 1;
          }
        }
      }
      local_24 = local_24 + 4;
      local_1c = local_1c + 1;
    } while (local_1c < 6);
    uVar2 = 0;
    if (local_14 != 0) {
      CBasePlayer::SwitchWeapon(param_2,local_14);
      uVar2 = 1;
    }
  }
  return uVar2;
}

/* 000cf59c  CHalfLifeMultiplay::ClientConnected  (44 bytes)
 * undefined4 ClientConnected(undefined4 param_1, undefined4 param_2)
 */
/* CHalfLifeMultiplay::ClientConnected(edict_s *, char const *, char const *, char *) */

undefined4 CHalfLifeMultiplay::ClientConnected(undefined4 param_1,undefined4 param_2)

{
  CVoiceGameMgr::ClientConnected(g_VoiceGameMgr,param_2);
  return 1;
}

/* 000cf5c8  CHalfLifeMultiplay::UpdateGameMode  (78 bytes)
 * undefined UpdateGameMode(undefined4 this, int * param_2)
 */
/* CHalfLifeMultiplay::UpdateGameMode(CBasePlayer *) */

void __thiscall CHalfLifeMultiplay::UpdateGameMode(undefined4 this,int *param_2)

{
  (*g_engfuncs.pfnMessageBegin)(1,gmsgGameMode,(float *)0x0,*(edict_t **)(*param_2 + 0x208));
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000cf618  CHalfLifeMultiplay::InitHUD  (836 bytes)
 * undefined InitHUD(int * param_1)
 */
/* CHalfLifeMultiplay::InitHUD(CBasePlayer *) */

void __thiscall CHalfLifeMultiplay::InitHUD(CHalfLifeMultiplay *this,int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = 0;
  iVar10 = 0;
  iVar9 = 0;
  iVar8 = 0;
  if (*(int *)(*param_1 + 0x1d0) != 0) {
    iVar1 = *(int *)(*param_1 + 0x1d0);
    if (gpGlobals->pStringBase[iVar1] != '\0') {
      pcVar3 = gpGlobals->pStringBase + iVar1;
      goto LAB_000cf66a;
    }
  }
  pcVar3 = "unconnected";
LAB_000cf66a:
  puVar2 = UTIL_VarArgs("%s has joined the game\n",pcVar3);
  UTIL_ClientPrintAll(1,puVar2,iVar8,iVar9,iVar10,iVar11);
  if (g_teamplay == 0) {
    pcVar4 = (char *)(*g_engfuncs.pfnGetPlayerUserId)(*(edict_t **)(*param_1 + 0x208));
    pcVar5 = (*g_engfuncs.pfnGetPlayerAuthId)(*(edict_t **)(*param_1 + 0x208));
    iVar8 = (*g_engfuncs.pfnGetPlayerUserId)(*(edict_t **)(*param_1 + 0x208));
    pcVar6 = gpGlobals->pStringBase + *(int *)(*param_1 + 0x1d0);
    pcVar3 = "\"%s<%i><%s><%i>\" entered the game\n";
  }
  else {
    pcVar3 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(*param_1 + 0x208));
    pcVar4 = (*g_engfuncs.pfnInfoKeyValue)(pcVar3,"model");
    pcVar5 = (*g_engfuncs.pfnGetPlayerAuthId)(*(edict_t **)(*param_1 + 0x208));
    iVar8 = (*g_engfuncs.pfnGetPlayerUserId)(*(edict_t **)(*param_1 + 0x208));
    pcVar6 = gpGlobals->pStringBase + *(int *)(*param_1 + 0x1d0);
    pcVar3 = "\"%s<%i><%s><%s>\" entered the game\n";
  }
  UTIL_LogPrintf(pcVar3,pcVar6,iVar8,pcVar5,pcVar4);
  (**(code **)(*(int *)this + 0x3c))(this,param_1);
  (*g_engfuncs.pfnMessageBegin)(1,gmsgScoreInfo,(float *)0x0,*(edict_t **)(*param_1 + 0x208));
  iVar8 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_1 + 0x208));
  (*g_engfuncs.pfnWriteByte)(iVar8);
  (*g_engfuncs.pfnWriteShort)(0);
  (*g_engfuncs.pfnWriteShort)(0);
  (*g_engfuncs.pfnWriteShort)(0);
  (*g_engfuncs.pfnWriteShort)(0);
  (*g_engfuncs.pfnMessageEnd)();
  SendMOTDToClient(this,*(undefined4 *)(*param_1 + 0x208));
  iVar8 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar7 = (int *)UTIL_PlayerByIndex(iVar8);
      if (piVar7 != (int *)0x0) {
        (*g_engfuncs.pfnMessageBegin)(1,gmsgScoreInfo,(float *)0x0,*(edict_t **)(*param_1 + 0x208));
        (*g_engfuncs.pfnWriteByte)(iVar8);
        (*g_engfuncs.pfnWriteShort)((int)ROUND(*(float *)(*piVar7 + 0x164)));
        (*g_engfuncs.pfnWriteShort)(piVar7[0x2cc]);
        (*g_engfuncs.pfnWriteShort)(0);
        iVar9 = (**(code **)(*(int *)this + 0xd0))(this,piVar7 + 0x2d2);
        (*g_engfuncs.pfnWriteShort)(iVar9 + 1);
        (*g_engfuncs.pfnMessageEnd)();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 <= gpGlobals->maxClients);
  }
  if (g_fGameOver != 0) {
    (*g_engfuncs.pfnMessageBegin)(1,0x1e,(float *)0x0,*(edict_t **)(*param_1 + 0x208));
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 000cf960  CHalfLifeMultiplay::ClientDisconnected  (387 bytes)
 * undefined ClientDisconnected(undefined4 this, int param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CHalfLifeMultiplay::ClientDisconnected(edict_s *) */

void __thiscall CHalfLifeMultiplay::ClientDisconnected(undefined4 this,int param_2)

{
  CBasePlayer *this_00;
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  if ((param_2 != 0) && (this_00 = *(CBasePlayer **)(param_2 + 0x7c), this_00 != (CBasePlayer *)0x0)
     ) {
    FireTargets(0x10d7be,this_00,this_00,3,0);
    if (g_teamplay == 0) {
      pcVar2 = (char *)(*g_engfuncs.pfnGetPlayerUserId)(this_00->pev->pContainingEntity);
      pcVar3 = (*g_engfuncs.pfnGetPlayerAuthId)(this_00->pev->pContainingEntity);
      iVar4 = (*g_engfuncs.pfnGetPlayerUserId)(this_00->pev->pContainingEntity);
      pcVar5 = gpGlobals->pStringBase + this_00->pev->netname;
      pcVar1 = "\"%s<%i><%s><%i>\" disconnected\n";
    }
    else {
      pcVar1 = (*g_engfuncs.pfnGetInfoKeyBuffer)(this_00->pev->pContainingEntity);
      pcVar2 = (*g_engfuncs.pfnInfoKeyValue)(pcVar1,"model");
      pcVar3 = (*g_engfuncs.pfnGetPlayerAuthId)(this_00->pev->pContainingEntity);
      iVar4 = (*g_engfuncs.pfnGetPlayerUserId)(this_00->pev->pContainingEntity);
      pcVar5 = gpGlobals->pStringBase + this_00->pev->netname;
      pcVar1 = "\"%s<%i><%s><%s>\" disconnected\n";
    }
    UTIL_LogPrintf(pcVar1,pcVar5,iVar4,pcVar3,pcVar2);
    CBasePlayer::RemoveAllItems(this_00,1);
    TSPlayerDisconnect(this_00);
    _DAT_0017da1c = 0;
  }
  return;
}

/* 000cfae4  CHalfLifeMultiplay::FlPlayerFallDamage  (112 bytes)
 * longdouble FlPlayerFallDamage(undefined4 this, int param_2)
 */
/* CHalfLifeMultiplay::FlPlayerFallDamage(CBasePlayer *) */

longdouble __thiscall CHalfLifeMultiplay::FlPlayerFallDamage(undefined4 this,int param_2)

{
  longdouble lVar1;
  
  if (((int)ROUND((float)falldamage._12_4_) == 0) || ((int)ROUND((float)falldamage._12_4_) != 1)) {
    lVar1 = (longdouble)10.0;
  }
  else {
    lVar1 = (longdouble)*(float *)(param_2 + 0x828) - (longdouble)680.0;
    *(float *)(param_2 + 0x828) = (float)lVar1;
    lVar1 = lVar1 * (longdouble)100.0 * (longdouble)0.0022522523;
  }
  return lVar1;
}

/* 000cfb58  CHalfLifeMultiplay::FPlayerCanTakeDamage  (6 bytes)
 * undefined4 FPlayerCanTakeDamage(void)
 */
/* CHalfLifeMultiplay::FPlayerCanTakeDamage(CBasePlayer *, CBaseEntity *) */

undefined4 CHalfLifeMultiplay::FPlayerCanTakeDamage(void)

{
  return 1;
}

/* 000cfb60  CHalfLifeMultiplay::PlayerThink  (85 bytes)
 * undefined PlayerThink(int * param_1)
 */
/* CHalfLifeMultiplay::PlayerThink(CBasePlayer *) */

void __thiscall CHalfLifeMultiplay::PlayerThink(CHalfLifeMultiplay *this,int *param_1)

{
  if (g_fGameOver != 0) {
    if ((param_1[0x205] & 0x827U) != 0) {
      *(undefined4 *)(this + 8) = 1;
    }
    param_1[0x205] = 0;
    *(undefined4 *)(*param_1 + 0x180) = 0;
    param_1[0x206] = 0;
  }
  return;
}

/* 000cfbb8  CHalfLifeMultiplay::FPlayerCanRespawn  (6 bytes)
 * undefined4 FPlayerCanRespawn(void)
 */
/* CHalfLifeMultiplay::FPlayerCanRespawn(CBasePlayer *) */

undefined4 CHalfLifeMultiplay::FPlayerCanRespawn(void)

{
  return 1;
}

/* 000cfbc0  CHalfLifeMultiplay::FlPlayerSpawnTime  (25 bytes)
 * longdouble FlPlayerSpawnTime(void)
 */
/* CHalfLifeMultiplay::FlPlayerSpawnTime(CBasePlayer *) */

longdouble CHalfLifeMultiplay::FlPlayerSpawnTime(void)

{
  return (longdouble)gpGlobals->time;
}

/* 000cfbdc  CHalfLifeMultiplay::AllowAutoTargetCrosshair  (47 bytes)
 * bool AllowAutoTargetCrosshair(void)
 */
/* CHalfLifeMultiplay::AllowAutoTargetCrosshair(void) */

bool CHalfLifeMultiplay::AllowAutoTargetCrosshair(void)

{
  return (float)aimcrosshair._12_4_ != 0.0;
}

/* 000cfc0c  CHalfLifeMultiplay::IPointsForKill  (6 bytes)
 * undefined4 IPointsForKill(void)
 */
/* CHalfLifeMultiplay::IPointsForKill(CBasePlayer *, CBasePlayer *) */

undefined4 CHalfLifeMultiplay::IPointsForKill(void)

{
  return 1;
}

/* 000cfc14  CHalfLifeMultiplay::PlayerGotWeapon  (1 bytes)
 * undefined PlayerGotWeapon(void)
 */
/* CHalfLifeMultiplay::PlayerGotWeapon(CBasePlayer *, CBasePlayerItem *) */

void CHalfLifeMultiplay::PlayerGotWeapon(void)

{
  return;
}

/* 000cfc18  CHalfLifeMultiplay::FlWeaponRespawnTime  (95 bytes)
 * longdouble FlWeaponRespawnTime(undefined4 this, int param_2)
 */
/* CHalfLifeMultiplay::FlWeaponRespawnTime(CBasePlayerItem *) */

longdouble __thiscall CHalfLifeMultiplay::FlWeaponRespawnTime(undefined4 this,int param_2)

{
  longdouble lVar1;
  
  if (((float)weaponstay._12_4_ <= 0.0) ||
     (((&DAT_001a5b64)[*(int *)(param_2 + 0x88) * 0x2c] & 8) != 0)) {
    lVar1 = (longdouble)20.0 + (longdouble)gpGlobals->time;
  }
  else {
    lVar1 = (longdouble)gpGlobals->time;
  }
  return lVar1;
}

/* 000cfc7c  CHalfLifeMultiplay::FlWeaponTryRespawn  (125 bytes)
 * longdouble FlWeaponTryRespawn(CHalfLifeMultiplay * this, int param_2)
 */
/* CHalfLifeMultiplay::FlWeaponTryRespawn(CBasePlayerItem *) */

longdouble __thiscall CHalfLifeMultiplay::FlWeaponTryRespawn(CHalfLifeMultiplay *this,int param_2)

{
  int iVar1;
  longdouble lVar2;
  
  if ((((param_2 != 0) && (*(int *)(param_2 + 0x88) != 0)) &&
      (((&DAT_001a5b64)[*(int *)(param_2 + 0x88) * 0x2c] & 8) != 0)) &&
     (iVar1 = (*g_engfuncs.pfnNumberOfEntities)(), gpGlobals->maxEntities + -100 <= iVar1)) {
    lVar2 = (longdouble)(**(code **)(*(int *)this + 0x84))(this,param_2);
    return lVar2;
  }
  return (longdouble)0.0;
}

/* 000cfcfc  CHalfLifeMultiplay::VecWeaponRespawnSpot  (33 bytes)
 * undefined VecWeaponRespawnSpot(undefined4 * param_1, undefined4 param_2, int * param_3)
 */
/* CHalfLifeMultiplay::VecWeaponRespawnSpot(CBasePlayerItem *) */

void CHalfLifeMultiplay::VecWeaponRespawnSpot(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  *param_1 = *(undefined4 *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  return;
}

/* 000cfd20  CHalfLifeMultiplay::WeaponShouldRespawn  (23 bytes)
 * char WeaponShouldRespawn(undefined4 this, int * param_2)
 */
/* CHalfLifeMultiplay::WeaponShouldRespawn(CBasePlayerItem *) */

char __thiscall CHalfLifeMultiplay::WeaponShouldRespawn(undefined4 this,int *param_2)

{
  return ((*(byte *)(*param_2 + 0x1a3) & 0x40) != 0) + '\x01';
}

/* 000cfd38  CHalfLifeMultiplay::CanHavePlayerItem  (340 bytes)
 * undefined4 CanHavePlayerItem(CBasePlayer * param_1, undefined4 * param_2)
 */
/* CHalfLifeMultiplay::CanHavePlayerItem(CBasePlayer *, CBasePlayerItem *) */

undefined4 __thiscall
CHalfLifeMultiplay::CanHavePlayerItem
          (CHalfLifeMultiplay *this,CBasePlayer *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((0.0 < (float)weaponstay._12_4_) && (((&DAT_001a5b64)[param_2[0x22] * 0x2c] & 8) == 0)) {
    for (iVar1 = *(int *)&param_1->field_0x9f8; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x84)) {
      if (*(int *)(iVar1 + 0x88) == param_2[0x22]) {
        return 0;
      }
    }
    for (iVar1 = *(int *)&param_1->field_0x9fc; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x84)) {
      if (*(int *)(iVar1 + 0x88) == param_2[0x22]) {
        return 0;
      }
    }
    for (iVar1 = *(int *)&param_1->field_0xa00; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x84)) {
      if (*(int *)(iVar1 + 0x88) == param_2[0x22]) {
        return 0;
      }
    }
    for (iVar1 = *(int *)&param_1->field_0xa04; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x84)) {
      if (*(int *)(iVar1 + 0x88) == param_2[0x22]) {
        return 0;
      }
    }
    for (iVar1 = *(int *)&param_1->field_0xa08; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x84)) {
      if (*(int *)(iVar1 + 0x88) == param_2[0x22]) {
        return 0;
      }
    }
    for (iVar1 = *(int *)&param_1->field_0xa0c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x84)) {
      if (*(int *)(iVar1 + 0x88) == param_2[0x22]) {
        return 0;
      }
    }
  }
  uVar2 = CGameRules::CanHavePlayerItem((CGameRules *)this,param_1,param_2);
  return uVar2;
}

/* 000cfe90  CHalfLifeMultiplay::CanHaveItem  (6 bytes)
 * undefined4 CanHaveItem(void)
 */
/* CHalfLifeMultiplay::CanHaveItem(CBasePlayer *, CItem *) */

undefined4 CHalfLifeMultiplay::CanHaveItem(void)

{
  return 1;
}

/* 000cfe98  CHalfLifeMultiplay::PlayerGotItem  (1 bytes)
 * undefined PlayerGotItem(void)
 */
/* CHalfLifeMultiplay::PlayerGotItem(CBasePlayer *, CItem *) */

void CHalfLifeMultiplay::PlayerGotItem(void)

{
  return;
}

/* 000cfe9c  CHalfLifeMultiplay::ItemShouldRespawn  (25 bytes)
 * char ItemShouldRespawn(undefined4 this, int * param_2)
 */
/* CHalfLifeMultiplay::ItemShouldRespawn(CItem *) */

char __thiscall CHalfLifeMultiplay::ItemShouldRespawn(undefined4 this,int *param_2)

{
  return ((*(byte *)(*param_2 + 0x1a3) & 0x40) != 0) + '\x05';
}

/* 000cfeb8  CHalfLifeMultiplay::FlItemRespawnTime  (31 bytes)
 * longdouble FlItemRespawnTime(void)
 */
/* CHalfLifeMultiplay::FlItemRespawnTime(CItem *) */

longdouble CHalfLifeMultiplay::FlItemRespawnTime(void)

{
  return (longdouble)30.0 + (longdouble)gpGlobals->time;
}

/* 000cfed8  CHalfLifeMultiplay::VecItemRespawnSpot  (33 bytes)
 * undefined VecItemRespawnSpot(undefined4 * param_1, undefined4 param_2, int * param_3)
 */
/* CHalfLifeMultiplay::VecItemRespawnSpot(CItem *) */

void CHalfLifeMultiplay::VecItemRespawnSpot(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  *param_1 = *(undefined4 *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  return;
}

/* 000cfefc  CHalfLifeMultiplay::PlayerGotAmmo  (1 bytes)
 * undefined PlayerGotAmmo(void)
 */
/* CHalfLifeMultiplay::PlayerGotAmmo(CBasePlayer *, char *, int) */

void CHalfLifeMultiplay::PlayerGotAmmo(void)

{
  return;
}

/* 000cff00  CHalfLifeMultiplay::IsAllowedToSpawn  (6 bytes)
 * undefined4 IsAllowedToSpawn(void)
 */
/* CHalfLifeMultiplay::IsAllowedToSpawn(CBaseEntity *) */

undefined4 CHalfLifeMultiplay::IsAllowedToSpawn(void)

{
  return 1;
}

/* 000cff08  CHalfLifeMultiplay::AmmoShouldRespawn  (25 bytes)
 * char AmmoShouldRespawn(undefined4 this, int * param_2)
 */
/* CHalfLifeMultiplay::AmmoShouldRespawn(CBasePlayerAmmo *) */

char __thiscall CHalfLifeMultiplay::AmmoShouldRespawn(undefined4 this,int *param_2)

{
  return ((*(byte *)(*param_2 + 0x1a3) & 0x40) != 0) + '\x03';
}

/* 000cff24  CHalfLifeMultiplay::FlAmmoRespawnTime  (31 bytes)
 * longdouble FlAmmoRespawnTime(void)
 */
/* CHalfLifeMultiplay::FlAmmoRespawnTime(CBasePlayerAmmo *) */

longdouble CHalfLifeMultiplay::FlAmmoRespawnTime(void)

{
  return (longdouble)20.0 + (longdouble)gpGlobals->time;
}

/* 000cff44  CHalfLifeMultiplay::VecAmmoRespawnSpot  (33 bytes)
 * undefined VecAmmoRespawnSpot(undefined4 * param_1, undefined4 param_2, int * param_3)
 */
/* CHalfLifeMultiplay::VecAmmoRespawnSpot(CBasePlayerAmmo *) */

void CHalfLifeMultiplay::VecAmmoRespawnSpot(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  *param_1 = *(undefined4 *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  return;
}

/* 000cff68  CHalfLifeMultiplay::FlHealthChargerRechargeTime  (21 bytes)
 * longdouble FlHealthChargerRechargeTime(void)
 */
/* CHalfLifeMultiplay::FlHealthChargerRechargeTime(void) */

longdouble CHalfLifeMultiplay::FlHealthChargerRechargeTime(void)

{
  return (longdouble)60.0;
}

/* 000cff80  CHalfLifeMultiplay::FlHEVChargerRechargeTime  (21 bytes)
 * longdouble FlHEVChargerRechargeTime(void)
 */
/* CHalfLifeMultiplay::FlHEVChargerRechargeTime(void) */

longdouble CHalfLifeMultiplay::FlHEVChargerRechargeTime(void)

{
  return (longdouble)30.0;
}

/* 000cff98  CHalfLifeMultiplay::DeadPlayerWeapons  (6 bytes)
 * undefined4 DeadPlayerWeapons(void)
 */
/* CHalfLifeMultiplay::DeadPlayerWeapons(CBasePlayer *) */

undefined4 CHalfLifeMultiplay::DeadPlayerWeapons(void)

{
  return 8;
}

/* 000cffa0  CHalfLifeMultiplay::DeadPlayerAmmo  (6 bytes)
 * undefined4 DeadPlayerAmmo(void)
 */
/* CHalfLifeMultiplay::DeadPlayerAmmo(CBasePlayer *) */

undefined4 CHalfLifeMultiplay::DeadPlayerAmmo(void)

{
  return 0xb;
}

/* 000cffa8  CHalfLifeMultiplay::GetPlayerSpawnSpot  (111 bytes)
 * int GetPlayerSpawnSpot(int * param_1)
 */
/* CHalfLifeMultiplay::GetPlayerSpawnSpot(CBasePlayer *) */

int __thiscall CHalfLifeMultiplay::GetPlayerSpawnSpot(CHalfLifeMultiplay *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CGameRules::GetPlayerSpawnSpot(this,param_1);
  iVar2 = (**(code **)(*(int *)this + 0x1c))(this);
  if ((iVar2 != 0) && (*(int *)(iVar1 + 0x248) != 0)) {
    FireTargets((int)(gpGlobals->pStringBase + *(int *)(iVar1 + 0x248)),param_1,param_1,3,0);
  }
  return iVar1;
}

/* 000d0018  CHalfLifeMultiplay::PlayerRelationship  (6 bytes)
 * undefined4 PlayerRelationship(void)
 */
/* CHalfLifeMultiplay::PlayerRelationship(CBaseEntity *, CBaseEntity *) */

undefined4 CHalfLifeMultiplay::PlayerRelationship(void)

{
  return 0;
}

/* 000d0020  CHalfLifeMultiplay::FAllowMonsters  (47 bytes)
 * bool FAllowMonsters(void)
 */
/* CHalfLifeMultiplay::FAllowMonsters(void) */

bool CHalfLifeMultiplay::FAllowMonsters(void)

{
  return (float)allowmonsters._12_4_ != 0.0;
}

/* 000d0050  CHalfLifeMultiplay::GoToIntermission  (277 bytes)
 * undefined GoToIntermission(void)
 */
/* CHalfLifeMultiplay::GoToIntermission(void) */

void __thiscall CHalfLifeMultiplay::GoToIntermission(CHalfLifeMultiplay *this)

{
  char *szValue;
  longdouble extraout_ST0;
  
  if (g_fGameOver != 0) {
    return;
  }
  (*g_engfuncs.pfnMessageBegin)(2,0x1e,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnCVarGetFloat)("mp_chattime");
  if ((int)ROUND(extraout_ST0) < 10) {
    szValue = "10";
  }
  else {
    if ((int)ROUND(extraout_ST0) < 0x79) goto LAB_000d0105;
    szValue = (char *)UTIL_dtos1(0x78);
  }
  (*g_engfuncs.pfnCVarSetString)("mp_chattime",szValue);
LAB_000d0105:
  *(float *)(this + 4) = (float)(int)ROUND((float)mp_chattime._12_4_) + gpGlobals->time;
  g_flIntermissionStartTime = gpGlobals->time;
  g_fGameOver = 1;
  *(undefined4 *)(this + 8) = 0;
  return;
}

/* 000d0784  CHalfLifeMultiplay::ChangeLevel  (857 bytes)
 * undefined ChangeLevel(void)
 */
/* CHalfLifeMultiplay::ChangeLevel(void) */

void CHalfLifeMultiplay::ChangeLevel(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  int local_c24;
  int local_c20;
  char local_c1c [1504];
  char local_63c [1504];
  undefined4 local_5c;
  undefined2 local_58;
  char local_3c [44];
  
  local_c20 = 0;
  local_c24 = 0;
  local_5c = 0x6d646c68;
  local_58 = 0x31;
  bVar8 = true;
  pcVar2 = (*g_engfuncs.pfnCVarGetString)("mapcyclefile");
  local_63c[0] = '\0';
  local_c1c[0] = '\0';
  iVar3 = CountPlayers();
  iVar4 = strcasecmp(pcVar2,szPreviousMapCycleFile_1346);
  if (iVar4 != 0) {
    strcpy(szPreviousMapCycleFile_1346,pcVar2);
    DestroyMapCycle(&mapcycle_1347);
    iVar4 = ReloadMapCycleFile(pcVar2,&mapcycle_1347);
    if ((iVar4 == 0) || (mapcycle_1347 == 0)) {
      (*g_engfuncs.pfnAlertMessage)(at_console,"Unable to load map cycle file %s\n",pcVar2);
      bVar8 = false;
    }
  }
  if ((bVar8) && (mapcycle_1347 != 0)) {
    bVar8 = false;
    strcpy(local_3c,gpGlobals->pStringBase + gpGlobals->mapname);
    strcpy((char *)&local_5c,gpGlobals->pStringBase + gpGlobals->mapname);
    for (piVar5 = DAT_001912e4; (undefined4 *)*piVar5 != DAT_001912e4; piVar5 = (int *)*piVar5) {
      bVar9 = false;
      if (piVar5[9] != 0) {
        if (iVar3 < piVar5[9]) {
          bVar9 = true;
        }
        else {
          bVar8 = true;
          local_c20 = piVar5[9];
        }
      }
      if (piVar5[10] != 0) {
        if (piVar5[10] < iVar3) {
          bVar9 = true;
        }
        else {
          bVar8 = true;
          local_c24 = piVar5[10];
        }
      }
      if (!bVar9) {
        bVar8 = true;
        break;
      }
    }
    if (!bVar8) {
      piVar5 = DAT_001912e4;
    }
    DAT_001912e4 = (undefined4 *)*piVar5;
    strcpy(local_3c,(char *)(piVar5 + 1));
    ExtractCommandString((char *)(piVar5 + 0xb),local_63c);
    strcpy(local_c1c,(char *)(piVar5 + 0xb));
  }
  bVar8 = false;
  bVar9 = DAT_001799c4 == '\0';
  if (!bVar9) {
    iVar4 = 8;
    pbVar6 = (byte *)&DAT_001799c4;
    pbVar7 = (byte *)"nextmap";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar8 = *pbVar6 < *pbVar7;
      bVar9 = *pbVar6 == *pbVar7;
      pbVar6 = pbVar6 + 1;
      pbVar7 = pbVar7 + 1;
    } while (bVar9);
    if ((!bVar8 && !bVar9) != bVar8) {
      strcpy(local_3c,&DAT_001799c4);
    }
    DAT_001799c4 = '\0';
  }
  CTSGameRules::Init((CTSGameRules *)&TSGameRules);
  iVar4 = (*g_engfuncs.pfnIsMapValid)(local_3c);
  if (iVar4 == 0) {
    strcpy(local_3c,(char *)&local_5c);
  }
  g_fGameOver = 1;
  (*g_engfuncs.pfnAlertMessage)(at_console,"CHANGE LEVEL: %s\n",local_3c);
  if ((local_c20 != 0) || (local_c24 != 0)) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,"PLAYER COUNT:  min %i max %i current %i\n",local_c20,local_c24,iVar3);
  }
  iVar3 = -1;
  pcVar2 = local_c1c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"RULES:  %s\n",local_c1c);
  }
  (*g_engfuncs.pfnChangeLevel)(local_3c,(char *)0x0);
  iVar3 = -1;
  pcVar2 = local_63c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    (*g_engfuncs.pfnServerCommand)(local_63c);
  }
  return;
}

/* 000d0ae4  CHalfLifeMultiplay::SendMOTDToClient  (384 bytes)
 * undefined SendMOTDToClient(undefined4 this, undefined4 param_2)
 */
/* CHalfLifeMultiplay::SendMOTDToClient(edict_s *) */

void __thiscall CHalfLifeMultiplay::SendMOTDToClient(undefined4 this,edict_t *param_2)

{
  byte_conflict bVar1;
  char cVar2;
  char *pcVar3;
  byte_conflict *buffer;
  uint uVar4;
  byte_conflict *__src;
  byte_conflict *pbVar5;
  int *pLength;
  int local_64;
  int local_60;
  char local_5c [60];
  undefined1 local_20;
  
  local_64 = 0;
  pLength = &local_60;
  pcVar3 = (*g_engfuncs.pfnCVarGetString)("motdfile");
  buffer = (*g_engfuncs.pfnLoadFileForMe)(pcVar3,pLength);
  (*g_engfuncs.pfnMessageBegin)(1,gmsgServerName,(float *)0x0,param_2);
  pcVar3 = (*g_engfuncs.pfnCVarGetString)("hostname");
  (*g_engfuncs.pfnWriteString)(pcVar3);
  (*g_engfuncs.pfnMessageEnd)();
  if ((buffer != (byte_conflict *)0x0) && (*buffer != '\0')) {
    __src = buffer;
    do {
      uVar4 = 0xffffffff;
      pbVar5 = __src;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (bVar1 != '\0');
      if (~uVar4 - 1 < 0x3c) {
        strcpy(local_5c,(char *)__src);
      }
      else {
        strncpy(local_5c,(char *)__src,0x3c);
        local_20 = 0;
      }
      uVar4 = 0xffffffff;
      pcVar3 = local_5c;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      local_64 = local_64 + -1 + ~uVar4;
      if (local_64 < 0x600) {
        __src = buffer + local_64;
      }
      else {
        *__src = '\0';
      }
      (*g_engfuncs.pfnMessageBegin)(1,gmsgMOTD,(float *)0x0,param_2);
      (*g_engfuncs.pfnWriteByte)((uint)(*__src == '\0'));
      (*g_engfuncs.pfnWriteString)(local_5c);
      (*g_engfuncs.pfnMessageEnd)();
    } while (((__src != (byte_conflict *)0x0) && (*__src != '\0')) && (local_64 < 0x600));
  }
  (*g_engfuncs.pfnFreeFile)(buffer);
  return;
}

/* 000d0c68  CHalfLifeMultiplay::GetGameDescription  (59 bytes)
 * undefined1 * GetGameDescription(void)
 */
/* CHalfLifeMultiplay::GetGameDescription(void) */

undefined1 * CHalfLifeMultiplay::GetGameDescription(void)

{
  char *pcVar1;
  
  if (g_theOneMode == 0) {
    if (g_lastManStanding == 0) {
      pcVar1 = g_szDMDescription;
    }
    else {
      pcVar1 = g_szLMSDescription;
    }
  }
  else {
    pcVar1 = g_szTOMDescription;
  }
  return pcVar1;
}

/* 000d0d9c  CHalfLifeMultiplay::GetTeamID  (21 bytes)
 * undefined1 * GetTeamID(void)
 */
/* CHalfLifeMultiplay::GetTeamID(CBaseEntity *) */

undefined1 * CHalfLifeMultiplay::GetTeamID(void)

{
  return &DAT_00106657;
}

/* 000d0db4  CHalfLifeMultiplay::PlayTextureSounds  (6 bytes)
 * undefined4 PlayTextureSounds(void)
 */
/* CHalfLifeMultiplay::PlayTextureSounds(void) */

undefined4 CHalfLifeMultiplay::PlayTextureSounds(void)

{
  return 0;
}

/* 000d0dbc  CHalfLifeMultiplay::EndMultiplayerGame  (20 bytes)
 * undefined EndMultiplayerGame(void)
 */
/* CHalfLifeMultiplay::EndMultiplayerGame(void) */

void __thiscall CHalfLifeMultiplay::EndMultiplayerGame(CHalfLifeMultiplay *this)

{
  (**(code **)(*(int *)this + 0xfc))(this);
  return;
}

