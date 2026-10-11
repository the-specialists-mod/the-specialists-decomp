/* mp.dll - CAmbientGeneric (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003ad80  CAmbientGeneric::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CAmbientGeneric::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CAmbientGeneric_100a2018,(int)param_1,0x100a1f60,4);
  return;
}

/* 1003adb0  CAmbientGeneric::Restore  (48 bytes)
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
            (param_2,(byte_conflict *)s_CAmbientGeneric_100a2018,(int)param_1,&DAT_100a1f60,4);
  return;
}

/* 1003ade0  CAmbientGeneric::Spawn  (269 bytes)
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
      if ((*(byte *)(param_1[1] + 0x1a0) & 0x20) != 0) {
        param_1[0x30] = 0;
        (**(code **)(*param_1 + 0x20))();
        return;
      }
      param_1[0x30] = 1;
      (**(code **)(*param_1 + 0x20))();
      return;
    }
  }
  (*g_engfuncs.pfnAlertMessage)
            (at_error,s_EMPTY_AMBIENT_AT___f___f___f_100a2028,(double)*(float *)(iVar2 + 8),
             (double)*(float *)(iVar2 + 0xc),(double)*(float *)(iVar2 + 0x10));
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
  param_1[4] = (int)CBaseEntity::SUB_Remove;
  return;
}

/* 1003aef0  CAmbientGeneric::Precache  (192 bytes)
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
               (float)*(int *)(param_1 + 0xa4) * 0.01,*(undefined4 *)(param_1 + 0x54),0x100);
    *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  }
  return;
}

/* 1003afb0  CAmbientGeneric::RampThink  (917 bytes)
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
  bool bVar10;
  uint local_14;
  int local_c;
  
                    /* 0x3afb0  85  ?RampThink@CAmbientGeneric@@QAEXXZ */
  peVar1 = this->pev;
  local_c = *(int *)&this->field_0xa4;
  iVar2 = peVar1->message;
  local_14 = 0;
  bVar10 = false;
  pcVar3 = gpGlobals->pStringBase;
  iVar9 = *(int *)&this->field_0x64;
  iVar8 = *(int *)&this->field_0x94;
  if (iVar9 == 0) {
    if ((((*(int *)&this->field_0x68 == 0) && (*(int *)&this->field_0x74 == 0)) &&
        (*(int *)&this->field_0x78 == 0)) && (*(int *)&this->field_0x7c == 0)) {
      return;
    }
    if (*(int *)&this->field_0x68 != 0) goto LAB_1003b019;
  }
  else {
LAB_1003b019:
    iVar5 = *(int *)&this->field_0xa0;
    if (iVar9 < 1) {
      if (0 < *(int *)&this->field_0x68) {
        iVar9 = -*(int *)&this->field_0x68;
        goto LAB_1003b035;
      }
    }
    else {
LAB_1003b035:
      *(int *)&this->field_0xa0 = iVar5 + iVar9;
    }
    iVar8 = *(int *)&this->field_0xa0 >> 8;
    if (*(int *)&this->field_0x5c < iVar8) {
      *(undefined4 *)&this->field_0x64 = 0;
      iVar8 = *(int *)&this->field_0x5c;
    }
    if (iVar8 < *(int *)&this->field_0x60) {
      *(undefined4 *)&this->field_0x68 = 0;
      goto LAB_1003b0f8;
    }
    if (iVar8 < 0x100) {
      if (iVar8 < 1) {
        iVar8 = 1;
      }
    }
    else {
      iVar8 = 0xff;
    }
    bVar10 = iVar5 >> 8 != iVar8;
    *(int *)&this->field_0x94 = iVar8;
    local_14 = 0x80;
  }
  iVar9 = *(int *)&this->field_0x74;
  if ((iVar9 != 0) || (*(int *)&this->field_0x78 != 0)) {
    iVar5 = *(int *)&this->field_0xb0;
    if (iVar9 < 1) {
      if (0 < *(int *)&this->field_0x78) {
        iVar9 = -*(int *)&this->field_0x78;
        goto LAB_1003b0c5;
      }
    }
    else {
LAB_1003b0c5:
      *(int *)&this->field_0xb0 = iVar5 + iVar9;
    }
    local_c = *(int *)&this->field_0xb0 >> 8;
    if (*(int *)&this->field_0x6c < local_c) {
      *(undefined4 *)&this->field_0x74 = 0;
      local_c = *(int *)&this->field_0x6c;
    }
    if (local_c < *(int *)&this->field_0x70) {
      *(undefined4 *)&this->field_0x78 = 0;
LAB_1003b0f8:
      UTIL_EmitAmbientSound(peVar1->pContainingEntity,peVar1->origin,pcVar3 + iVar2,0,0,0x20);
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
    bVar10 = (bool)(bVar10 | iVar5 >> 8 != local_c);
    local_14 = local_14 | 0x40;
  }
  iVar9 = *(int *)&this->field_0x7c;
  if (iVar9 == 0) goto LAB_1003b2dd;
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
LAB_1003b1c6:
    *(int *)&this->field_0x80 = iVar5;
  }
  else if (0xff < iVar6) {
    iVar6 = 0xff;
    *(undefined4 *)&this->field_0xb4 = 0xff00;
    iVar5 = -((uVar4 ^ uVar7) - uVar7);
    goto LAB_1003b1c6;
  }
  if (iVar9 == 1) {
    if (iVar6 < 0x80) {
      *(undefined4 *)&this->field_0xb8 = 0xff;
    }
    else {
      *(undefined4 *)&this->field_0xb8 = 0;
    }
  }
  else if (iVar9 == 3) {
    if (iVar6 == 0xff) {
      iVar9 = (*g_engfuncs.pfnRandomLong)(0,0xff);
      *(int *)&this->field_0xb8 = iVar9;
    }
  }
  else {
    *(int *)&this->field_0xb8 = iVar6;
  }
  if (*(int *)&this->field_0x84 != 0) {
    iVar9 = iVar8 + ((*(int *)&this->field_0xb8 + -0x80) * *(int *)&this->field_0x84) / 100;
    if (iVar9 < 0x100) {
      if (iVar9 < 1) {
        iVar9 = 1;
      }
    }
    else {
      iVar9 = 0xff;
    }
    bVar10 = (bool)(bVar10 | iVar8 != iVar9);
    local_14 = local_14 | 0x80;
  }
  if (*(int *)&this->field_0x88 != 0) {
    iVar9 = local_c + ((*(int *)&this->field_0xb8 + -0x80) * *(int *)&this->field_0x88) / 100;
    if (iVar9 < 0x65) {
      if (iVar9 < 0) {
        iVar9 = 0;
      }
    }
    else {
      iVar9 = 100;
    }
    bVar10 = (bool)(bVar10 | local_c != iVar9);
    local_14 = local_14 | 0x40;
    local_c = iVar9;
  }
LAB_1003b2dd:
  if ((local_14 != 0) && (bVar10)) {
    UTIL_EmitAmbientSound
              (this->pev->pContainingEntity,this->pev->origin,pcVar3 + iVar2,(float)local_c * 0.01,
               *(undefined4 *)&this->field_0x54,local_14);
  }
  this->pev->nextthink = gpGlobals->time + 0.2;
  return;
}

/* 1003b350  CAmbientGeneric::InitModulationParms  (497 bytes)
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
    pcVar4 = s_PM_Got_a_NaN_velocity__i_100a1468 + iVar1 * 100 + 4;
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

/* 1003b550  CAmbientGeneric::ToggleUse  (565 bytes)
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
  
                    /* 0x3b550  119
                       ?ToggleUse@CAmbientGeneric@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  peVar1 = this->pev;
  pcVar4 = gpGlobals->pStringBase + peVar1->message;
  if (param_3 != 3) {
    if (*(int *)&this->field_0xbc != 0) {
      if (param_3 == 1) {
        return;
      }
      if (*(int *)&this->field_0xbc != 0) goto LAB_1003b59a;
    }
    if (param_3 == 0) {
      return;
    }
  }
LAB_1003b59a:
  if (param_3 == 2) {
    if (*(int *)&this->field_0xbc != 0) {
      lVar5 = __ftol();
      *(int *)&this->field_0x94 = (int)lVar5;
      UTIL_EmitAmbientSound(peVar1->pContainingEntity,peVar1->origin,pcVar4,0,0,0x80);
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
      UTIL_EmitAmbientSound(this->pev->pContainingEntity,this->pev->origin,pcVar4,0,0,0x20);
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
    UTIL_EmitAmbientSound(peVar1->pContainingEntity,peVar1->origin,pcVar4,0,0,0x20);
  }
  else {
    *(undefined4 *)&this->field_0xbc = 1;
  }
  InitModulationParms((int)this);
  UTIL_EmitAmbientSound
            (this->pev->pContainingEntity,this->pev->origin,pcVar4,
             (float)*(int *)&this->field_0xa4 * 0.01,*(undefined4 *)&this->field_0x54,0);
  this->pev->nextthink = gpGlobals->time + 0.1;
  return;
}

/* 1003b790  CAmbientGeneric::KeyValue  (1572 bytes)
 * undefined KeyValue()
 */
void __thiscall CAmbientGeneric::KeyValue(void *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  void *this;
  char *pcVar7;
  bool bVar8;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar7 = s_preset_100a20a4;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1003b7ca:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1003b7cf;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1003b7ca;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003b7cf:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_pitch_1009f84c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1003b81f:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1003b824;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1003b81f;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003b824:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    if (0xff < *(int *)((int)param_1 + 0x5c)) {
      *(undefined4 *)((int)param_1 + 0x5c) = 0xff;
    }
    if (*(int *)((int)param_1 + 0x5c) < 0) {
      *(undefined4 *)((int)param_1 + 0x5c) = 0;
      return;
    }
  }
  else {
    pcVar7 = s_pitchstart_100a2098;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this >> 8);
      this = (void *)CONCAT31(uVar6,bVar1);
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_1003b88f:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_1003b894;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this = (void *)CONCAT31(uVar6,bVar1);
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_1003b88f;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_1003b894:
    if (iVar3 == 0) {
      uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
      *(undefined4 *)((int)param_1 + 0x60) = uVar4;
      *(undefined4 *)(param_2 + 0xc) = 1;
      if (0xff < *(int *)((int)param_1 + 0x60)) {
        *(undefined4 *)((int)param_1 + 0x60) = 0xff;
      }
      if (*(int *)((int)param_1 + 0x60) < 0) {
        *(undefined4 *)((int)param_1 + 0x60) = 0;
        return;
      }
    }
    else {
      pcVar7 = s_spinup_100a2090;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_1003b8ff:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1003b904;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_1003b8ff;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1003b904:
      if (iVar3 == 0) {
        iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
        *(int *)((int)param_1 + 100) = iVar3;
        if (100 < iVar3) {
          *(undefined4 *)((int)param_1 + 100) = 100;
        }
        if (*(int *)((int)param_1 + 100) < 0) {
          *(undefined4 *)((int)param_1 + 100) = 0;
        }
        if (0 < *(int *)((int)param_1 + 100)) {
          *(int *)((int)param_1 + 100) = (0x65 - *(int *)((int)param_1 + 100)) * 0x40;
        }
        *(undefined4 *)((int)param_1 + 0x98) = *(undefined4 *)((int)param_1 + 100);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_spindown_100a2084;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_1003b985:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1003b98a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_1003b985;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1003b98a:
      if (iVar3 == 0) {
        iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
        *(int *)((int)param_1 + 0x68) = iVar3;
        if (100 < iVar3) {
          *(undefined4 *)((int)param_1 + 0x68) = 100;
        }
        if (*(int *)((int)param_1 + 0x68) < 0) {
          *(undefined4 *)((int)param_1 + 0x68) = 0;
        }
        if (0 < *(int *)((int)param_1 + 0x68)) {
          *(int *)((int)param_1 + 0x68) = (0x65 - *(int *)((int)param_1 + 0x68)) * 0x40;
        }
        *(undefined4 *)((int)param_1 + 0x9c) = *(undefined4 *)((int)param_1 + 0x68);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_volstart_100a2078;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_1003ba0b:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1003ba10;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_1003ba0b;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1003ba10:
      if (iVar3 == 0) {
        iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
        *(int *)((int)param_1 + 0x70) = iVar3;
        if (10 < iVar3) {
          *(undefined4 *)((int)param_1 + 0x70) = 10;
        }
        if (*(int *)((int)param_1 + 0x70) < 0) {
          *(undefined4 *)((int)param_1 + 0x70) = 0;
        }
        *(int *)((int)param_1 + 0x70) = *(int *)((int)param_1 + 0x70) * 10;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_fadein_1009f9ac;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_1003ba7f:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1003ba84;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_1003ba7f;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1003ba84:
      if (iVar3 == 0) {
        iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
        *(int *)((int)param_1 + 0x74) = iVar3;
        if (100 < iVar3) {
          *(undefined4 *)((int)param_1 + 0x74) = 100;
        }
        if (*(int *)((int)param_1 + 0x74) < 0) {
          *(undefined4 *)((int)param_1 + 0x74) = 0;
        }
        if (0 < *(int *)((int)param_1 + 0x74)) {
          *(int *)((int)param_1 + 0x74) = (0x65 - *(int *)((int)param_1 + 0x74)) * 0x40;
        }
        *(undefined4 *)((int)param_1 + 0xa8) = *(undefined4 *)((int)param_1 + 0x74);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_fadeout_1009f9a4;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_1003bb05:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1003bb0a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_1003bb05;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1003bb0a:
      if (iVar3 == 0) {
        iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
        *(int *)((int)param_1 + 0x78) = iVar3;
        if (100 < iVar3) {
          *(undefined4 *)((int)param_1 + 0x78) = 100;
        }
        if (*(int *)((int)param_1 + 0x78) < 0) {
          *(undefined4 *)((int)param_1 + 0x78) = 0;
        }
        if (0 < *(int *)((int)param_1 + 0x78)) {
          *(int *)((int)param_1 + 0x78) = (0x65 - *(int *)((int)param_1 + 0x78)) * 0x40;
        }
        *(undefined4 *)((int)param_1 + 0xac) = *(undefined4 *)((int)param_1 + 0x78);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_lfotype_100a2070;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_1003bb8b:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1003bb90;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_1003bb8b;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1003bb90:
      if (iVar3 == 0) {
        iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
        *(int *)((int)param_1 + 0x7c) = iVar3;
        if (4 < iVar3) {
          *(undefined4 *)((int)param_1 + 0x7c) = 2;
        }
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_lforate_100a2068;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_1003bbec:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1003bbf1;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_1003bbec;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1003bbf1:
      if (iVar3 == 0) {
        iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
        *(int *)((int)param_1 + 0x80) = iVar3;
        if (1000 < iVar3) {
          *(undefined4 *)((int)param_1 + 0x80) = 1000;
        }
        if (*(int *)((int)param_1 + 0x80) < 0) {
          *(undefined4 *)((int)param_1 + 0x80) = 0;
        }
        *(int *)((int)param_1 + 0x80) = *(int *)((int)param_1 + 0x80) << 8;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_lfomodpitch_100a205c;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_1003bc72:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1003bc77;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_1003bc72;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1003bc77:
      if (iVar3 == 0) {
        iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
        *(int *)((int)param_1 + 0x84) = iVar3;
        if (100 < iVar3) {
          *(undefined4 *)((int)param_1 + 0x84) = 100;
        }
        if (*(int *)((int)param_1 + 0x84) < 0) {
          *(undefined4 *)((int)param_1 + 0x84) = 0;
        }
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_lfomodvol_100a2050;
      pbVar2 = pbVar5;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_1003bce7:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1003bcec;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_1003bce7;
        pbVar2 = pbVar2 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1003bcec:
      if (iVar3 == 0) {
        iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
        *(int *)((int)param_1 + 0x88) = iVar3;
        if (100 < iVar3) {
          *(undefined4 *)((int)param_1 + 0x88) = 100;
        }
        if (*(int *)((int)param_1 + 0x88) < 0) {
          *(undefined4 *)((int)param_1 + 0x88) = 0;
        }
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      pcVar7 = s_cspinup_100a2048;
      do {
        bVar1 = *pbVar5;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_1003bd5c:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1003bd61;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        this = (void *)CONCAT31(uVar6,bVar1);
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_1003bd5c;
        pbVar5 = pbVar5 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1003bd61:
      if (iVar3 == 0) {
        iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
        *(int *)((int)param_1 + 0x8c) = iVar3;
        if (100 < iVar3) {
          *(undefined4 *)((int)param_1 + 0x8c) = 100;
        }
        if (*(int *)((int)param_1 + 0x8c) < 0) {
          *(undefined4 *)((int)param_1 + 0x8c) = 0;
        }
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
  }
  return;
}

