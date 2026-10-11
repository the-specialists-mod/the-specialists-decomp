/* mp.dll - CTSTrigger (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10048d90  CTSTrigger::KeyValue  (304 bytes)
 * undefined KeyValue()
 */
void __thiscall CTSTrigger::KeyValue(undefined *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined *puVar5;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  longlong lVar10;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pcVar7 = s_nextcheck_100a34fc;
  pbVar2 = pbVar4;
  puVar5 = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)puVar5 >> 8);
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10048dc8:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10048dcd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10048dc8;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10048dcd:
  if (iVar3 == 0) {
    fVar9 = atof(puVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0xf8) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_attackerteam_100a3548;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)puVar5 >> 8);
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10048e1c:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10048e21;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10048e1c;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10048e21:
  if (iVar3 == 0) {
    atof(puVar5,*(byte_conflict **)(param_2 + 8));
    lVar10 = __ftol();
    *(int *)(param_1 + 0xf4) = (int)lVar10;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_allowedteam_100a353c;
  do {
    bVar1 = *pbVar4;
    uVar6 = (undefined3)((uint)puVar5 >> 8);
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10048e75:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10048e7a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10048e75;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10048e7a:
  if (iVar3 == 0) {
    atof(puVar5,*(byte_conflict **)(param_2 + 8));
    lVar10 = __ftol();
    *(int *)(param_1 + 0xf4) = (int)lVar10;
    if ((int)lVar10 == 2) {
      *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
    }
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 10048ec0  CTSTrigger::Spawn  (278 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTSTrigger::Spawn(int param_1)

{
  float fVar1;
  int iVar2;
  
  **(int **)(param_1 + 4) = (int)s_ts_trigger_100a3558 - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  iVar2 = *(int *)(param_1 + 4);
  UTIL_SetSize(iVar2,iVar2 + 0xdc,iVar2 + 0xe8);
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 5;
  *(code **)(param_1 + 0x14) = WaitTouch;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(float *)(param_1 + 0xf8) <= 0.5) {
    fVar1 = 0.5;
  }
  else {
    fVar1 = *(float *)(param_1 + 0xf8);
  }
  *(float *)(*(int *)(param_1 + 4) + 0x104) = fVar1 + gpGlobals->time;
  if (0.5 < *(float *)(param_1 + 0xf8)) {
    *(float *)(param_1 + 0xf0) = gpGlobals->time + *(float *)(param_1 + 0xf8);
    return;
  }
  *(float *)(param_1 + 0xf0) = gpGlobals->time + 0.5;
  return;
}

/* 10048fe0  CTSTrigger::WaitTouch  (333 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSTrigger::WaitTouch(class CBaseEntity *) */

void __thiscall CTSTrigger::WaitTouch(CTSTrigger *this,CBaseEntity *param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  byte_conflict *pbVar5;
  char acStack_64 [100];
  
                    /* 0x48fe0  159  ?WaitTouch@CTSTrigger@@QAEXPAVCBaseEntity@@@Z */
  if (gpGlobals->time < *(float *)&this->field_0xf0) {
    return;
  }
  iVar4 = (**(code **)(*(int *)param_1 + 0xc0))();
  if (iVar4 == 0) {
    return;
  }
  iVar4 = (**(code **)(*(int *)param_1 + 0xac))();
  if (iVar4 == 0) {
    return;
  }
  if (*(int *)&this->field_0xf4 != -1) {
    pbVar5 = (byte_conflict *)(**(code **)(*(int *)param_1 + 200))();
    iVar4 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pbVar5);
    if (*(int *)&this->field_0xf4 != iVar4) {
      bVar2 = false;
      goto LAB_10049054;
    }
  }
  bVar2 = true;
LAB_10049054:
  if (((this->pev->spawnflags & 8) != 0) && (cVar3 = FUN_1004d060((int)param_1), cVar3 == '\0')) {
    return;
  }
  if ((bVar2) && (iVar4 = this->pev->target, iVar4 != 0)) {
    FireTargets((int)(gpGlobals->pStringBase + iVar4),this,this,3,0);
  }
  if (this->pev->message != 0) {
    sprintf(acStack_64,(byte_conflict *)(gpGlobals->pStringBase + this->pev->message));
    TSHudMessageAll(0,0xff,0,8,0x1e,acStack_64);
  }
  if (*(float *)&this->field_0xf8 <= 0.5) {
    fVar1 = 0.5;
  }
  else {
    fVar1 = *(float *)&this->field_0xf8;
  }
  *(float *)&this->field_0xf0 = gpGlobals->time + fVar1;
  return;
}

/* 10049130  CTSTrigger::WaitThink  (65 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSTrigger::WaitThink(void) */

void __thiscall CTSTrigger::WaitThink(CTSTrigger *this)

{
                    /* 0x49130  147  ?WaitThink@CTSTrigger@@QAEXXZ */
  if (0.5 < *(float *)&this->field_0xf8) {
    this->pev->nextthink = *(float *)&this->field_0xf8 + gpGlobals->time;
    return;
  }
  this->pev->nextthink = gpGlobals->time + 0.5;
  return;
}

