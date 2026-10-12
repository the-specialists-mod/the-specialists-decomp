/* mp.dll - CTSSlowMotion (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10040d50  CTSSlowMotion::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSSlowMotion::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSSlowMotion_1009811c,(int)param_1,0x10098010,2);
  return;
}

/* 10040d80  CTSSlowMotion::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSSlowMotion::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CTSSlowMotion_1009811c,(int)param_1,0x10098010,2);
  return;
}

/* 10040db0  CTSSlowMotion::KeyValue  (127 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSSlowMotion::KeyValue(CTSSlowMotion *this,int param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  float10 fVar5;
  
  puVar1 = &DAT_00000009;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_duration_10092f14;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    fVar5 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0xe8 = (float)fVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = &DAT_00000008;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = &DAT_1009812c;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    fVar5 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0xec = (float)fVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10040e30  CTSSlowMotion::Spawn  (371 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTSSlowMotion::Spawn(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  **(int **)(param_1 + 4) = (int)s_ts_slowmotion_10098134 - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  FUN_10067970();
  FUN_100679a0();
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
    return;
  }
  return;
}

/* 10040fb0  CTSSlowMotion::WaitTouch  (125 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSSlowMotion::WaitTouch(class CBaseEntity *) */

void __thiscall CTSSlowMotion::WaitTouch(CTSSlowMotion *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x40fb0  145  ?WaitTouch@CTSSlowMotion@@QAEXPAVCBaseEntity@@@Z */
  if ((*(float *)&this->field_0x58 != 0.0) || (this->field_0x54 != '\0')) {
    iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
    if (iVar1 != 0) {
      iVar1 = FUN_100551e0((int)param_1);
      if (iVar1 == 0) {
        FUN_10055220(param_1,*(float *)&this->field_0xec,0);
        param_1[0x15d] = (CBaseEntity)(this->field_0xf4 != '\0');
        iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
        if ((-1 < iVar1) && (iVar1 < 0x21)) {
          *(CBaseEntity **)(&this->field_0x60 + iVar1 * 4) = param_1;
        }
      }
    }
  }
  return;
}

/* 10041130  CTSSlowMotion::WaitThink  (168 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSSlowMotion::WaitThink(void) */

void __thiscall CTSSlowMotion::WaitThink(CTSSlowMotion *this)

{
                    /* 0x41130  134  ?WaitThink@CTSSlowMotion@@QAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.5;
  if (this->field_0x54 != '\0') {
    if (*(int *)&this->field_0xf0 == 0) {
      FUN_100410a0((int *)this);
    }
    else {
      FUN_100455f0(&DAT_100ac8c0,*(float *)&this->field_0xec,this->field_0xf4);
    }
  }
  if (*(float *)&this->field_0x58 != 0.0) {
    if (*(float *)&this->field_0x58 < gpGlobals->time) {
      *(undefined4 *)&this->field_0x14 = 0;
      FUN_10041030((int)this);
      return;
    }
    if (*(int *)&this->field_0xf0 == 0) {
      FUN_100410a0((int *)this);
      return;
    }
    FUN_100455f0(&DAT_100ac8c0,*(float *)&this->field_0xec,this->field_0xf4);
  }
  return;
}

/* 100411e0  CTSSlowMotion::ActivateSlow  (86 bytes)
 * undefined ActivateSlow(int param_1)
 * called by: CTSSlowMotion::Spawn, CTSSlowMotion::Use
 */
void __fastcall CTSSlowMotion::ActivateSlow(int param_1)

{
  bool bVar1;
  
  if (*(float *)(param_1 + 0xe8) < 0.0 == (*(float *)(param_1 + 0xe8) == 0.0)) {
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0xe8) + gpGlobals->time;
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
    bVar1 = *(char *)(param_1 + 0x54) == '\0';
    *(bool *)(param_1 + 0x54) = bVar1;
    if (!bVar1) {
      FUN_10041030(param_1);
    }
  }
  if (*(int *)(param_1 + 0xf0) == 0) {
    *(code **)(param_1 + 0x14) = WaitTouch;
  }
  return;
}

/* 10041240  CTSSlowMotion::Use  (122 bytes)
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
    TSHudMessageAll(0,0xff,0,1,0x1e,gpGlobals->pStringBase + iVar1);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1c8);
  if (iVar1 != 0) {
    FireTargets((int)(gpGlobals->pStringBase + iVar1),param_1,param_1,3,0);
  }
  return;
}

/* 10042290  CTSSlowMotion::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CTSSlowMotion::ObjectCaps(void)

{
  return 0;
}

