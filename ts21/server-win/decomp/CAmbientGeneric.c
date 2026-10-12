/* mp.dll - CAmbientGeneric (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100347c0  CAmbientGeneric::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CAmbientGeneric::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CAmbientGeneric_10096d60,(int)param_1,0x10096ca8,4);
  return;
}

/* 100347f0  CAmbientGeneric::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CAmbientGeneric::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CAmbientGeneric_10096d60,(int)param_1,0x10096ca8,4);
  return;
}

/* 10034820  CAmbientGeneric::Spawn  (256 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CAmbientGeneric::Spawn(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  iVar2 = param_1[1];
  uVar3 = *(uint *)(iVar2 + 0x1a0);
  if ((uVar3 & 1) == 0) {
    if ((uVar3 & 2) == 0) {
      if (((uVar3 & 4) == 0) && ((uVar3 & 8) != 0)) {
        param_1[0x15] = 0x3f4ccccd;
      }
      else {
        param_1[0x15] = 0x3fa00000;
      }
    }
    else {
      param_1[0x15] = 0x40000000;
    }
  }
  else {
    param_1[0x15] = 0;
  }
  if (*(int *)(iVar2 + 0x1d4) != 0) {
    iVar4 = -1;
    pcVar5 = gpGlobals->pStringBase + *(int *)(iVar2 + 0x1d4);
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (iVar4 != -2) {
      *(undefined4 *)(iVar2 + 0x10c) = 0;
      *(undefined4 *)(param_1[1] + 0x108) = 0;
      param_1[4] = (int)RampThink;
      *(undefined4 *)(param_1[1] + 0x104) = 0;
      param_1[6] = (int)ToggleUse;
      param_1[0x2f] = 0;
      if ((*(byte *)(param_1[1] + 0x1a0) & 0x20) == 0) {
        param_1[0x30] = 1;
      }
      else {
        param_1[0x30] = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x100348d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  (*g_engfuncs.pfnAlertMessage)
            (at_error,s_EMPTY_AMBIENT_AT___f___f___f_10096d70,(double)*(float *)(iVar2 + 8),
             (double)*(float *)(iVar2 + 0xc),(double)*(float *)(iVar2 + 0x10));
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
  param_1[4] = (int)CBaseEntity::SUB_Remove;
  return;
}

/* 10034920  CAmbientGeneric::Precache  (192 bytes)
 * undefined Precache(int param_1)
 */
void __fastcall CAmbientGeneric::Precache(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *s;
  char *pcVar4;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x1d4);
  s = gpGlobals->pStringBase + iVar2;
  if (iVar2 != 0) {
    uVar3 = 0xffffffff;
    pcVar4 = s;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if ((1 < ~uVar3 - 1) && (*s != '!')) {
      (*g_engfuncs.pfnPrecacheSound)(s);
    }
  }
  InitModulationParms(param_1);
  iVar2 = *(int *)(param_1 + 4);
  if (((*(byte *)(iVar2 + 0x1a0) & 0x10) == 0) && (*(int *)(param_1 + 0xc0) != 0)) {
    *(undefined4 *)(param_1 + 0xbc) = 1;
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    UTIL_EmitAmbientSound
              (*(undefined4 *)(iVar2 + 0x208),(undefined4 *)(iVar2 + 8),s,
               (float)*(int *)(param_1 + 0xa4) * 0.01,*(undefined4 *)(param_1 + 0x54),0x100,
               *(undefined4 *)(param_1 + 0x94));
    *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  }
  return;
}

/* 100349e0  CAmbientGeneric::RampThink  (917 bytes)
 * void RampThink(void)
 */
/* public: void __thiscall CAmbientGeneric::RampThink(void) */

void __thiscall CAmbientGeneric::RampThink(CAmbientGeneric *this)

{
  entvars_t *peVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint local_14;
  int local_c;
  
                    /* 0x349e0  80  ?RampThink@CAmbientGeneric@@QAEXXZ */
  peVar1 = this->pev;
  local_c = *(int *)&this->field_0xa4;
  iVar2 = peVar1->message;
  local_14 = 0;
  bVar11 = false;
  pcVar3 = gpGlobals->pStringBase;
  iVar8 = *(int *)&this->field_0x64;
  iVar9 = *(int *)&this->field_0x94;
  if (iVar8 == 0) {
    if ((((*(int *)&this->field_0x68 == 0) && (*(int *)&this->field_0x74 == 0)) &&
        (*(int *)&this->field_0x78 == 0)) && (*(int *)&this->field_0x7c == 0)) {
      return;
    }
    if (*(int *)&this->field_0x68 != 0) goto LAB_10034a49;
  }
  else {
LAB_10034a49:
    iVar10 = *(int *)&this->field_0xa0;
    if (iVar8 < 1) {
      if (0 < *(int *)&this->field_0x68) {
        iVar8 = -*(int *)&this->field_0x68;
        goto LAB_10034a65;
      }
    }
    else {
LAB_10034a65:
      *(int *)&this->field_0xa0 = iVar10 + iVar8;
    }
    iVar9 = *(int *)&this->field_0xa0 >> 8;
    if (*(int *)&this->field_0x5c < iVar9) {
      *(undefined4 *)&this->field_0x64 = 0;
      iVar9 = *(int *)&this->field_0x5c;
    }
    if (iVar9 < *(int *)&this->field_0x60) {
      *(undefined4 *)&this->field_0x68 = 0;
      goto LAB_10034b28;
    }
    if (iVar9 < 0x100) {
      if (iVar9 < 1) {
        iVar9 = 1;
      }
    }
    else {
      iVar9 = 0xff;
    }
    bVar11 = iVar10 >> 8 != iVar9;
    *(int *)&this->field_0x94 = iVar9;
    local_14 = 0x80;
  }
  iVar8 = *(int *)&this->field_0x74;
  if ((iVar8 != 0) || (*(int *)&this->field_0x78 != 0)) {
    iVar10 = *(int *)&this->field_0xb0;
    if (iVar8 < 1) {
      if (0 < *(int *)&this->field_0x78) {
        iVar8 = -*(int *)&this->field_0x78;
        goto LAB_10034af5;
      }
    }
    else {
LAB_10034af5:
      *(int *)&this->field_0xb0 = iVar10 + iVar8;
    }
    local_c = *(int *)&this->field_0xb0 >> 8;
    if (*(int *)&this->field_0x6c < local_c) {
      *(undefined4 *)&this->field_0x74 = 0;
      local_c = *(int *)&this->field_0x6c;
    }
    if (local_c < *(int *)&this->field_0x70) {
      *(undefined4 *)&this->field_0x78 = 0;
LAB_10034b28:
      UTIL_EmitAmbientSound(peVar1->pContainingEntity,peVar1->origin,pcVar3 + iVar2,0,0,0x20,0);
      return;
    }
    if (local_c < 0x65) {
      if (local_c < 1) {
        local_c = 1;
      }
    }
    else {
      local_c = 100;
    }
    *(int *)&this->field_0xa4 = local_c;
    bVar11 = (bool)(bVar11 | iVar10 >> 8 != local_c);
    local_14 = local_14 | 0x40;
  }
  iVar8 = *(int *)&this->field_0x7c;
  iVar10 = iVar9;
  if (iVar8 == 0) goto LAB_10034d0d;
  if (0x6fffffff < *(int *)&this->field_0xb4) {
    *(undefined4 *)&this->field_0xb4 = 0;
  }
  uVar4 = *(uint *)&this->field_0x80;
  iVar5 = *(int *)&this->field_0xb4 + uVar4;
  *(int *)&this->field_0xb4 = iVar5;
  iVar6 = iVar5 >> 8;
  uVar7 = (int)uVar4 >> 0x1f;
  if (iVar5 < 0) {
    iVar6 = 0;
    *(undefined4 *)&this->field_0xb4 = 0;
    iVar5 = (uVar4 ^ uVar7) - uVar7;
LAB_10034bf6:
    *(int *)&this->field_0x80 = iVar5;
  }
  else if (0xff < iVar6) {
    iVar6 = 0xff;
    *(undefined4 *)&this->field_0xb4 = 0xff00;
    iVar5 = -((uVar4 ^ uVar7) - uVar7);
    goto LAB_10034bf6;
  }
  if (iVar8 == 1) {
    if (iVar6 < 0x80) {
      *(undefined4 *)&this->field_0xb8 = 0xff;
    }
    else {
      *(undefined4 *)&this->field_0xb8 = 0;
    }
  }
  else if (iVar8 == 3) {
    if (iVar6 == 0xff) {
      iVar8 = (*g_engfuncs.pfnRandomLong)(0,0xff);
      *(int *)&this->field_0xb8 = iVar8;
    }
  }
  else {
    *(int *)&this->field_0xb8 = iVar6;
  }
  if (*(int *)&this->field_0x84 != 0) {
    iVar10 = iVar9 + ((*(int *)&this->field_0xb8 + -0x80) * *(int *)&this->field_0x84) / 100;
    if (iVar10 < 0x100) {
      if (iVar10 < 1) {
        iVar10 = 1;
      }
    }
    else {
      iVar10 = 0xff;
    }
    bVar11 = (bool)(bVar11 | iVar9 != iVar10);
    local_14 = local_14 | 0x80;
  }
  if (*(int *)&this->field_0x88 != 0) {
    iVar8 = local_c + ((*(int *)&this->field_0xb8 + -0x80) * *(int *)&this->field_0x88) / 100;
    if (iVar8 < 0x65) {
      if (iVar8 < 0) {
        iVar8 = 0;
      }
    }
    else {
      iVar8 = 100;
    }
    bVar11 = (bool)(bVar11 | local_c != iVar8);
    local_14 = local_14 | 0x40;
    local_c = iVar8;
  }
LAB_10034d0d:
  if ((local_14 != 0) && (bVar11)) {
    if (iVar10 == 100) {
      iVar10 = 0x65;
    }
    UTIL_EmitAmbientSound
              (this->pev->pContainingEntity,this->pev->origin,pcVar3 + iVar2,(float)local_c * 0.01,
               *(undefined4 *)&this->field_0x54,local_14,iVar10);
  }
  this->pev->nextthink = gpGlobals->time + 0.2;
  return;
}

/* 10034d80  CAmbientGeneric::InitModulationParms  (497 bytes)
 * undefined InitModulationParms(int param_1)
 * called by: CAmbientGeneric::Precache, CAmbientGeneric::ToggleUse
 */
void __fastcall CAmbientGeneric::InitModulationParms(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  lVar6 = __ftol();
  *(int *)(param_1 + 0x6c) = (int)lVar6;
  if (100 < (int)lVar6) {
    *(undefined4 *)(param_1 + 0x6c) = 100;
  }
  if (*(int *)(param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if ((iVar1 != 0) && (iVar1 < 0x1c)) {
    pcVar4 = s_Bogus_pmove_player_movetype__i_o_100961ac + iVar1 * 100 + 8;
    puVar5 = (undefined4 *)(param_1 + 0x58);
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      puVar5 = puVar5 + 1;
    }
    if (0 < *(int *)(param_1 + 0x68)) {
      *(int *)(param_1 + 0x68) = (0x65 - *(int *)(param_1 + 0x68)) * 0x40;
    }
    if (0 < *(int *)(param_1 + 100)) {
      *(int *)(param_1 + 100) = (0x65 - *(int *)(param_1 + 100)) * 0x40;
    }
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) * 10;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) * 10;
    if (0 < *(int *)(param_1 + 0x74)) {
      *(int *)(param_1 + 0x74) = (0x65 - *(int *)(param_1 + 0x74)) * 0x40;
    }
    if (0 < *(int *)(param_1 + 0x78)) {
      *(int *)(param_1 + 0x78) = (0x65 - *(int *)(param_1 + 0x78)) * 0x40;
    }
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) << 8;
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x68);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0xa8);
  if (*(int *)(param_1 + 0xa8) == 0) {
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x6c);
  }
  else {
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x70);
  }
  iVar1 = *(int *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(int *)(param_1 + 100) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x5c);
  }
  else {
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x60);
  }
  if (*(int *)(param_1 + 0x94) == 0) {
    *(undefined4 *)(param_1 + 0x94) = 100;
  }
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xa4) << 8;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  uVar3 = (int)*(uint *)(param_1 + 0x80) >> 0x1f;
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0x94) << 8;
  *(uint *)(param_1 + 0x80) = (*(uint *)(param_1 + 0x80) ^ uVar3) - uVar3;
  *(undefined4 *)(param_1 + 0x90) = 1;
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     (iVar2 = (0xff - *(int *)(param_1 + 0x60)) / *(int *)(param_1 + 0x8c) +
              *(int *)(param_1 + 0x60), *(int *)(param_1 + 0x5c) = iVar2, 0xff < iVar2)) {
    *(undefined4 *)(param_1 + 0x5c) = 0xff;
  }
  if ((((iVar1 != 0) || (*(int *)(param_1 + 0x9c) != 0)) ||
      ((*(int *)(param_1 + 0x7c) != 0 && (*(int *)(param_1 + 0x84) != 0)))) &&
     (*(int *)(param_1 + 0x94) == 100)) {
    *(undefined4 *)(param_1 + 0x94) = 0x65;
  }
  return;
}

/* 10034f80  CAmbientGeneric::ToggleUse  (563 bytes)
 * void ToggleUse(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CAmbientGeneric::ToggleUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CAmbientGeneric::ToggleUse
          (CAmbientGeneric *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  entvars_t *peVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  
                    /* 0x34f80  112
                       ?ToggleUse@CAmbientGeneric@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  peVar1 = this->pev;
  pcVar4 = gpGlobals->pStringBase + peVar1->message;
  if (param_3 != 3) {
    if (*(int *)&this->field_0xbc != 0) {
      if (param_3 == 1) {
        return;
      }
      if (*(int *)&this->field_0xbc != 0) goto LAB_10034fc6;
    }
    if (param_3 == 0) {
      return;
    }
  }
LAB_10034fc6:
  if (param_3 == 2) {
    if (*(int *)&this->field_0xbc != 0) {
      lVar5 = __ftol();
      *(int *)&this->field_0x94 = (int)lVar5;
      UTIL_EmitAmbientSound(peVar1->pContainingEntity,peVar1->origin,pcVar4,0,0,0x80,(int)lVar5);
      return;
    }
  }
  else if (*(int *)&this->field_0xbc != 0) {
    iVar2 = *(int *)&this->field_0x8c;
    if (iVar2 != 0) {
      if (iVar2 < *(int *)&this->field_0x90) {
        return;
      }
      *(undefined4 *)&this->field_0x64 = *(undefined4 *)&this->field_0x98;
      *(undefined4 *)&this->field_0x68 = 0;
      iVar3 = *(int *)&this->field_0x90 + 1;
      *(int *)&this->field_0x90 = iVar3;
      iVar2 = ((0xff - *(int *)&this->field_0x60) / iVar2) * iVar3 + *(int *)&this->field_0x60;
      *(int *)&this->field_0x5c = iVar2;
      if (0xff < iVar2) {
        *(undefined4 *)&this->field_0x5c = 0xff;
      }
      peVar1->nextthink = gpGlobals->time + 0.1;
      return;
    }
    *(undefined4 *)&this->field_0xbc = 0;
    peVar1->spawnflags = peVar1->spawnflags | 0x10;
    if ((*(int *)&this->field_0x9c == 0) && (*(int *)&this->field_0xac == 0)) {
      UTIL_EmitAmbientSound(this->pev->pContainingEntity,this->pev->origin,pcVar4,0,0,0x20,0);
      return;
    }
    *(int *)&this->field_0x68 = *(int *)&this->field_0x9c;
    *(undefined4 *)&this->field_0x64 = 0;
    *(undefined4 *)&this->field_0x78 = *(undefined4 *)&this->field_0xac;
    *(undefined4 *)&this->field_0x74 = 0;
    this->pev->nextthink = gpGlobals->time + 0.1;
    return;
  }
  if (*(int *)&this->field_0xc0 == 0) {
    UTIL_EmitAmbientSound(peVar1->pContainingEntity,peVar1->origin,pcVar4,0,0,0x20,0);
  }
  else {
    *(undefined4 *)&this->field_0xbc = 1;
  }
  InitModulationParms((int)this);
  UTIL_EmitAmbientSound
            (this->pev->pContainingEntity,this->pev->origin,pcVar4,
             (float)*(int *)&this->field_0xa4 * 0.01,*(undefined4 *)&this->field_0x54,0,
             *(undefined4 *)&this->field_0x94);
  this->pev->nextthink = gpGlobals->time + 0.1;
  return;
}

/* 100351c0  CAmbientGeneric::KeyValue  (1142 bytes)
 * undefined KeyValue()
 */
void __thiscall CAmbientGeneric::KeyValue(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  
  pcVar6 = *(char **)(param_2 + 4);
  puVar3 = &DAT_00000007;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_preset_10096dec;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    uVar1 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pvVar4 = (void *)0x6;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_pitch_10094560;
  do {
    if (pvVar4 == (void *)0x0) break;
    pvVar4 = (void *)((int)pvVar4 + -1);
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    uVar1 = FUN_1006e1dd(pvVar4,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(undefined4 *)(param_2 + 0xc) = 1;
    if (0xff < *(int *)(param_1 + 0x5c)) {
      *(undefined4 *)(param_1 + 0x5c) = 0xff;
    }
    if (*(int *)(param_1 + 0x5c) < 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      return;
    }
  }
  else {
    pvVar4 = (void *)0xb;
    bVar8 = true;
    pcVar5 = pcVar6;
    pcVar7 = s_pitchstart_10096de0;
    do {
      if (pvVar4 == (void *)0x0) break;
      pvVar4 = (void *)((int)pvVar4 + -1);
      bVar8 = *pcVar5 == *pcVar7;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar8);
    if (bVar8) {
      uVar1 = FUN_1006e1dd(pvVar4,*(byte_conflict **)(param_2 + 8));
      *(undefined4 *)(param_1 + 0x60) = uVar1;
      *(undefined4 *)(param_2 + 0xc) = 1;
      if (0xff < *(int *)(param_1 + 0x60)) {
        *(undefined4 *)(param_1 + 0x60) = 0xff;
      }
      if (*(int *)(param_1 + 0x60) < 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        return;
      }
    }
    else {
      puVar3 = &DAT_00000007;
      bVar8 = true;
      pcVar5 = pcVar6;
      pcVar7 = s_spinup_10096dd8;
      do {
        if (puVar3 == (undefined1 *)0x0) break;
        puVar3 = puVar3 + -1;
        bVar8 = *pcVar5 == *pcVar7;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        iVar2 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_2 + 8));
        *(int *)(param_1 + 100) = iVar2;
        if (100 < iVar2) {
          *(undefined4 *)(param_1 + 100) = 100;
        }
        if (*(int *)(param_1 + 100) < 0) {
          *(undefined4 *)(param_1 + 100) = 0;
        }
        if (0 < *(int *)(param_1 + 100)) {
          *(int *)(param_1 + 100) = (0x65 - *(int *)(param_1 + 100)) * 0x40;
        }
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 100);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      puVar3 = &DAT_00000009;
      bVar8 = true;
      pcVar5 = pcVar6;
      pcVar7 = s_spindown_10096dcc;
      do {
        if (puVar3 == (undefined1 *)0x0) break;
        puVar3 = puVar3 + -1;
        bVar8 = *pcVar5 == *pcVar7;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        iVar2 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_2 + 8));
        *(int *)(param_1 + 0x68) = iVar2;
        if (100 < iVar2) {
          *(undefined4 *)(param_1 + 0x68) = 100;
        }
        if (*(int *)(param_1 + 0x68) < 0) {
          *(undefined4 *)(param_1 + 0x68) = 0;
        }
        if (0 < *(int *)(param_1 + 0x68)) {
          *(int *)(param_1 + 0x68) = (0x65 - *(int *)(param_1 + 0x68)) * 0x40;
        }
        *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x68);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      puVar3 = &DAT_00000009;
      bVar8 = true;
      pcVar5 = pcVar6;
      pcVar7 = s_volstart_10096dc0;
      do {
        if (puVar3 == (undefined1 *)0x0) break;
        puVar3 = puVar3 + -1;
        bVar8 = *pcVar5 == *pcVar7;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        iVar2 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_2 + 8));
        *(int *)(param_1 + 0x70) = iVar2;
        if (10 < iVar2) {
          *(undefined4 *)(param_1 + 0x70) = 10;
        }
        if (*(int *)(param_1 + 0x70) < 0) {
          *(undefined4 *)(param_1 + 0x70) = 0;
        }
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) * 10;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      puVar3 = &DAT_00000007;
      bVar8 = true;
      pcVar5 = pcVar6;
      pcVar7 = s_fadein_100946c4;
      do {
        if (puVar3 == (undefined1 *)0x0) break;
        puVar3 = puVar3 + -1;
        bVar8 = *pcVar5 == *pcVar7;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        iVar2 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_2 + 8));
        *(int *)(param_1 + 0x74) = iVar2;
        if (100 < iVar2) {
          *(undefined4 *)(param_1 + 0x74) = 100;
        }
        if (*(int *)(param_1 + 0x74) < 0) {
          *(undefined4 *)(param_1 + 0x74) = 0;
        }
        if (0 < *(int *)(param_1 + 0x74)) {
          *(int *)(param_1 + 0x74) = (0x65 - *(int *)(param_1 + 0x74)) * 0x40;
        }
        *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x74);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      puVar3 = &DAT_00000008;
      bVar8 = true;
      pcVar5 = pcVar6;
      pcVar7 = s_fadeout_100946bc;
      do {
        if (puVar3 == (undefined1 *)0x0) break;
        puVar3 = puVar3 + -1;
        bVar8 = *pcVar5 == *pcVar7;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        iVar2 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_2 + 8));
        *(int *)(param_1 + 0x78) = iVar2;
        if (100 < iVar2) {
          *(undefined4 *)(param_1 + 0x78) = 100;
        }
        if (*(int *)(param_1 + 0x78) < 0) {
          *(undefined4 *)(param_1 + 0x78) = 0;
        }
        if (0 < *(int *)(param_1 + 0x78)) {
          *(int *)(param_1 + 0x78) = (0x65 - *(int *)(param_1 + 0x78)) * 0x40;
        }
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x78);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      puVar3 = &DAT_00000008;
      bVar8 = true;
      pcVar5 = pcVar6;
      pcVar7 = s_lfotype_10096db8;
      do {
        if (puVar3 == (undefined1 *)0x0) break;
        puVar3 = puVar3 + -1;
        bVar8 = *pcVar5 == *pcVar7;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        iVar2 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_2 + 8));
        *(int *)(param_1 + 0x7c) = iVar2;
        if (4 < iVar2) {
          *(undefined4 *)(param_1 + 0x7c) = 2;
        }
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      puVar3 = &DAT_00000008;
      bVar8 = true;
      pcVar5 = pcVar6;
      pcVar7 = s_lforate_10096db0;
      do {
        if (puVar3 == (undefined1 *)0x0) break;
        puVar3 = puVar3 + -1;
        bVar8 = *pcVar5 == *pcVar7;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        iVar2 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_2 + 8));
        *(int *)(param_1 + 0x80) = iVar2;
        if (1000 < iVar2) {
          *(undefined4 *)(param_1 + 0x80) = 1000;
        }
        if (*(int *)(param_1 + 0x80) < 0) {
          *(undefined4 *)(param_1 + 0x80) = 0;
        }
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) << 8;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pvVar4 = (void *)0xc;
      bVar8 = true;
      pcVar5 = pcVar6;
      pcVar7 = s_lfomodpitch_10096da4;
      do {
        if (pvVar4 == (void *)0x0) break;
        pvVar4 = (void *)((int)pvVar4 + -1);
        bVar8 = *pcVar5 == *pcVar7;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        iVar2 = FUN_1006e1dd(pvVar4,*(byte_conflict **)(param_2 + 8));
        *(int *)(param_1 + 0x84) = iVar2;
        if (100 < iVar2) {
          *(undefined4 *)(param_1 + 0x84) = 100;
        }
        if (*(int *)(param_1 + 0x84) < 0) {
          *(undefined4 *)(param_1 + 0x84) = 0;
        }
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      puVar3 = &DAT_0000000a;
      bVar8 = true;
      pcVar5 = pcVar6;
      pcVar7 = s_lfomodvol_10096d98;
      do {
        if (puVar3 == (undefined1 *)0x0) break;
        puVar3 = puVar3 + -1;
        bVar8 = *pcVar5 == *pcVar7;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        iVar2 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_2 + 8));
        *(int *)(param_1 + 0x88) = iVar2;
        if (100 < iVar2) {
          *(undefined4 *)(param_1 + 0x88) = 100;
        }
        if (*(int *)(param_1 + 0x88) < 0) {
          *(undefined4 *)(param_1 + 0x88) = 0;
        }
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      puVar3 = &DAT_00000008;
      bVar8 = true;
      pcVar5 = s_cspinup_10096d90;
      do {
        if (puVar3 == (undefined1 *)0x0) break;
        puVar3 = puVar3 + -1;
        bVar8 = *pcVar6 == *pcVar5;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar8);
      if (bVar8) {
        iVar2 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_2 + 8));
        *(int *)(param_1 + 0x8c) = iVar2;
        if (100 < iVar2) {
          *(undefined4 *)(param_1 + 0x8c) = 100;
        }
        if (*(int *)(param_1 + 0x8c) < 0) {
          *(undefined4 *)(param_1 + 0x8c) = 0;
        }
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
  }
  return;
}

/* 100370d0  CAmbientGeneric::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CAmbientGeneric::ObjectCaps(void)

{
  return 0;
}

