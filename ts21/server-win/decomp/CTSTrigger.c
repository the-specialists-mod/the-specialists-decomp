/* mp.dll - CTSTrigger (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10040a70  CTSTrigger::KeyValue  (126 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSTrigger::KeyValue(CTSTrigger *this,int param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  float10 fVar5;
  longlong lVar6;
  
  puVar1 = &DAT_0000000a;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_nextcheck_100980e0;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    fVar5 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x5c = (float)fVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = (undefined1 *)0xc;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_allowedteam_10098104;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    lVar6 = __ftol();
    *(int *)&this->field_0x58 = (int)lVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10040af0  CTSTrigger::Spawn  (264 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTSTrigger::Spawn(int param_1)

{
  float fVar1;
  
  **(int **)(param_1 + 4) = (int)s_ts_trigger_10098110 - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  FUN_10067970();
  FUN_100679a0();
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 5;
  *(code **)(param_1 + 0x14) = WaitTouch;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(float *)(param_1 + 0x5c) <= 0.5) {
    fVar1 = 0.5;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x5c);
  }
  *(float *)(*(int *)(param_1 + 4) + 0x104) = fVar1 + gpGlobals->time;
  if (0.5 < *(float *)(param_1 + 0x5c)) {
    *(float *)(param_1 + 0x54) = gpGlobals->time + *(float *)(param_1 + 0x5c);
    return;
  }
  *(float *)(param_1 + 0x54) = gpGlobals->time + 0.5;
  return;
}

/* 10040c00  CTSTrigger::WaitTouch  (250 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSTrigger::WaitTouch(class CBaseEntity *) */

void __thiscall CTSTrigger::WaitTouch(CTSTrigger *this,CBaseEntity *param_1)

{
  int iVar1;
  byte_conflict *pbVar2;
  uint uVar3;
  void *this_00;
  void *this_01;
  
                    /* 0x40c00  147  ?WaitTouch@CTSTrigger@@QAEXPAVCBaseEntity@@@Z */
  if (gpGlobals->time < *(float *)&this->field_0x54) {
    return;
  }
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (**(code **)(*(int *)param_1 + 0x94))();
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)&this->field_0x58 < 2) {
    if (*(int *)&this->field_0x58 == 0) {
      pbVar2 = (byte_conflict *)(**(code **)(*(int *)param_1 + 0xb0))();
      uVar3 = FUN_1007e860(this_00,(byte_conflict *)s_Specialists_10097488,pbVar2);
      if (uVar3 == 0) goto LAB_10040c8d;
    }
    if (*(int *)&this->field_0x58 != 1) goto LAB_10040cb7;
    pbVar2 = (byte_conflict *)(**(code **)(*(int *)param_1 + 0xb0))();
    uVar3 = FUN_1007e860(this_01,(byte_conflict *)s_Mercenary_1009747c,pbVar2);
    if (uVar3 != 0) goto LAB_10040cb7;
  }
LAB_10040c8d:
  iVar1 = this->pev->target;
  if (iVar1 != 0) {
    FireTargets((int)(gpGlobals->pStringBase + iVar1),this,this,3,0);
  }
LAB_10040cb7:
  if (*(float *)&this->field_0x5c <= 0.5) {
    *(float *)&this->field_0x54 = gpGlobals->time + 0.5;
    return;
  }
  *(float *)&this->field_0x54 = gpGlobals->time + *(float *)&this->field_0x5c;
  return;
}

/* 10040d00  CTSTrigger::WaitThink  (61 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSTrigger::WaitThink(void) */

void __thiscall CTSTrigger::WaitThink(CTSTrigger *this)

{
                    /* 0x40d00  137  ?WaitThink@CTSTrigger@@QAEXXZ */
  if (0.5 < *(float *)&this->field_0x5c) {
    this->pev->nextthink = *(float *)&this->field_0x5c + gpGlobals->time;
    return;
  }
  this->pev->nextthink = gpGlobals->time + 0.5;
  return;
}

/* 10042230  CTSTrigger::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CTSTrigger::ObjectCaps(void)

{
  return 0;
}

