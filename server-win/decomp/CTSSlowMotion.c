/* mp.dll - CTSSlowMotion (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10049190  CTSSlowMotion::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSSlowMotion::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSSlowMotion_100a3564,(int)param_1,0x100a3460,2);
  return;
}

/* 100491c0  CTSSlowMotion::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSSlowMotion::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CTSSlowMotion_100a3564,(int)param_1,&DAT_100a3460,2);
  return;
}

/* 100491f0  CTSSlowMotion::KeyValue  (195 bytes)
 * undefined KeyValue()
 */
void __thiscall CTSSlowMotion::KeyValue(undefined *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined *puVar5;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pcVar7 = s_duration_1009e00c;
  pbVar2 = pbVar4;
  puVar5 = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)puVar5 >> 8);
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10049228:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1004922d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10049228;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1004922d:
  if (iVar3 == 0) {
    fVar9 = atof(puVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0xe8) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pbVar2 = &DAT_100a3574;
  do {
    bVar1 = *pbVar4;
    uVar6 = (undefined3)((uint)puVar5 >> 8);
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_1004927c:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10049281;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_1004927c;
    pbVar4 = pbVar4 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10049281:
  if (iVar3 == 0) {
    fVar9 = atof(puVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0xec) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 100492c0  CTSSlowMotion::Spawn  (366 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTSSlowMotion::Spawn(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  **(int **)(param_1 + 4) = (int)s_ts_slowmotion_100a357c - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  iVar1 = *(int *)(param_1 + 4);
  UTIL_SetSize(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 5;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(code **)(param_1 + 0x10) = WaitThink;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.5;
  *(float *)(param_1 + 0x5c) = gpGlobals->time + 0.5;
  puVar2 = (undefined4 *)(param_1 + 0x60);
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar1 = *(int *)(param_1 + 4);
  lVar3 = __ftol();
  *(int *)(param_1 + 0xe4) = (int)lVar3;
  if ((*(byte *)(iVar1 + 0x1a0) & 2) == 0) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xf0) = 1;
  }
  if ((*(byte *)(iVar1 + 0x1a0) & 4) == 0) {
    *(undefined1 *)(param_1 + 0xf4) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xf4) = 1;
  }
  if ((*(byte *)(iVar1 + 0x1a0) & 1) != 0) {
    ActivateSlow(param_1);
  }
  return;
}

/* 10049430  CTSSlowMotion::WaitTouch  (126 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSSlowMotion::WaitTouch(class CBaseEntity *) */

void __thiscall CTSSlowMotion::WaitTouch(CTSSlowMotion *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x49430  157  ?WaitTouch@CTSSlowMotion@@QAEXPAVCBaseEntity@@@Z */
  if ((*(float *)&this->field_0x58 != 0.0) || (this->field_0x54 != '\0')) {
    iVar1 = (**(code **)(*(int *)param_1 + 0xc0))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)param_1 + 0x10))();
      if (iVar1 == 0) {
        (**(code **)(*(int *)param_1 + 0xc))(*(undefined4 *)&this->field_0xec,0);
        param_1[0x161] = (CBaseEntity)(this->field_0xf4 != '\0');
        iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
        if ((-1 < iVar1) && (iVar1 < 0x21)) {
          *(CBaseEntity **)(&this->field_0x60 + iVar1 * 4) = param_1;
        }
      }
    }
  }
  return;
}

/* 100495b0  CTSSlowMotion::WaitThink  (170 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSSlowMotion::WaitThink(void) */

void __thiscall CTSSlowMotion::WaitThink(CTSSlowMotion *this)

{
                    /* 0x495b0  143  ?WaitThink@CTSSlowMotion@@QAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.5;
  if (this->field_0x54 != '\0') {
    if (*(int *)&this->field_0xf0 == 0) {
      FUN_10049520((int *)this);
    }
    else {
      FUN_1004e9f0(&TSGameRules,*(float *)&this->field_0xec,this->field_0xf4);
    }
  }
  if (*(float *)&this->field_0x58 != 0.0) {
    if (*(float *)&this->field_0x58 < gpGlobals->time) {
      *(undefined4 *)&this->field_0x14 = 0;
      FUN_100494b0((int)this);
      return;
    }
    if (*(int *)&this->field_0xf0 != 0) {
      FUN_1004e9f0(&TSGameRules,*(float *)&this->field_0xec,this->field_0xf4);
      return;
    }
    FUN_10049520((int *)this);
  }
  return;
}

/* 10049660  CTSSlowMotion::ActivateSlow  (86 bytes)
 * undefined ActivateSlow(int param_1)
 * called by: CTSSlowMotion::Spawn, CTSSlowMotion::Use
 */
void __fastcall CTSSlowMotion::ActivateSlow(int param_1)

{
  bool bVar1;
  
  if (0.0 < *(float *)(param_1 + 0xe8)) {
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0xe8) + gpGlobals->time;
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
    bVar1 = *(char *)(param_1 + 0x54) == '\0';
    *(bool *)(param_1 + 0x54) = bVar1;
    if (!bVar1) {
      FUN_100494b0(param_1);
    }
  }
  if (*(int *)(param_1 + 0xf0) == 0) {
    *(code **)(param_1 + 0x14) = WaitTouch;
  }
  return;
}

/* 100496c0  CTSSlowMotion::Use  (120 bytes)
 * undefined Use(int param_1)
 */
void __fastcall CTSSlowMotion::Use(int param_1)

{
  int iVar1;
  
  ActivateSlow(param_1);
  if (*(int *)(param_1 + 0xf0) == 0) {
    *(code **)(param_1 + 0x14) = WaitTouch;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1d4);
  if (iVar1 != 0) {
    TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + iVar1);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1c8);
  if (iVar1 != 0) {
    FireTargets((int)(gpGlobals->pStringBase + iVar1),param_1,param_1,3,0);
  }
  return;
}

