/* mp.dll - CPendulum (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000a0a0  CPendulum::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CPendulum::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CPendulum_1009c018,(int)param_1,0x1009be58,8);
  return;
}

/* 1000a0d0  CPendulum::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CPendulum::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CPendulum_1009c018,(int)param_1,&DAT_1009be58,8);
  return;
}

/* 1000a100  CPendulum::KeyValue  (195 bytes)
 * undefined KeyValue()
 */
void __thiscall CPendulum::KeyValue(undefined *param_1,int param_2)

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
  pcVar7 = s_distance_1009c02c;
  pbVar2 = pbVar4;
  puVar5 = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)puVar5 >> 8);
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1000a138:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1000a13d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1000a138;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1000a13d:
  if (iVar3 == 0) {
    fVar9 = atof(puVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x58) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pbVar2 = &DAT_1009c024;
  do {
    bVar1 = *pbVar4;
    uVar6 = (undefined3)((uint)puVar5 >> 8);
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_1000a189:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1000a18e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_1000a189;
    pbVar4 = pbVar4 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1000a18e:
  if (iVar3 == 0) {
    fVar9 = atof(puVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x60) = (float)(fVar9 * (float10)0.001);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 1000a1d0  CPendulum::Spawn  (415 bytes)
 * undefined Spawn()
 */
void __fastcall CPendulum::Spawn(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  
  CBaseToggle::AxisDir(*(int *)(param_1 + 4));
  iVar5 = *(int *)(param_1 + 4);
  if ((*(byte *)(iVar5 + 0x1a0) & 8) == 0) {
    *(undefined4 *)(iVar5 + 0x10c) = 4;
  }
  else {
    *(undefined4 *)(iVar5 + 0x10c) = 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  if (*(float *)(param_1 + 0x58) != 0.0) {
    if (*(float *)(*(int *)(param_1 + 4) + 0x1f8) == 0.0) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8) = 0x42c80000;
    }
    iVar5 = *(int *)(param_1 + 4);
    *(float *)(param_1 + 0x54) =
         (*(float *)(iVar5 + 0x1f8) * *(float *)(iVar5 + 0x1f8)) /
         (ABS(*(float *)(param_1 + 0x58)) + ABS(*(float *)(param_1 + 0x58)));
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar5 + 0x1f8);
    fVar6 = *(float *)(param_1 + 0x58) * 0.5;
    *(float *)(param_1 + 0x78) = *(float *)(iVar5 + 0x50);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar5 + 0x54);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar5 + 0x58);
    fVar1 = *(float *)(iVar5 + 0x48);
    fVar2 = *(float *)(iVar5 + 0x4c);
    fVar3 = *(float *)(iVar5 + 0x54);
    fVar4 = *(float *)(iVar5 + 0x58);
    *(float *)(param_1 + 0x6c) = fVar6 * *(float *)(iVar5 + 0x44) + *(float *)(iVar5 + 0x50);
    *(float *)(param_1 + 0x70) = fVar6 * fVar1 + fVar3;
    *(float *)(param_1 + 0x74) = fVar6 * fVar2 + fVar4;
    if ((*(byte *)(iVar5 + 0x1a0) & 1) != 0) {
      *(code **)(param_1 + 0x10) = CBaseEntity::SUB_CallUseToggle;
      *(float *)(iVar5 + 0x104) = gpGlobals->time + 0.1;
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8) = 0;
    *(code **)(param_1 + 0x18) = PendulumUse;
    if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) != 0) {
      *(code **)(param_1 + 0x14) = RopeTouch;
    }
  }
  return;
}

/* 1000a370  CPendulum::PendulumUse  (260 bytes)
 * void PendulumUse(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CPendulum::PendulumUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CPendulum::PendulumUse
          (CPendulum *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  entvars_t *peVar4;
  float10 fVar5;
  
                    /* 0xa370  81  ?PendulumUse@CPendulum@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  peVar4 = this->pev;
  if (peVar4->speed == 0.0) {
    peVar4->nextthink = peVar4->ltime + 0.1;
    fVar1 = gpGlobals->time;
    *(code **)&this->field_0x10 = Swing;
    *(float *)&this->field_0x5c = fVar1;
    *(undefined4 *)&this->field_0x68 = *(undefined4 *)&this->field_0x64;
    return;
  }
  if ((peVar4->spawnflags & 0x10U) != 0) {
    fVar5 = CBaseToggle::AxisDelta
                      ((byte_conflict)peVar4->spawnflags,peVar4->angles,(float *)&this->field_0x78);
    fVar1 = *(float *)&this->field_0x64;
    peVar4 = this->pev;
    fVar2 = peVar4->movedir[1];
    fVar3 = peVar4->movedir[2];
    peVar4->avelocity[0] = fVar1 * peVar4->movedir[0];
    peVar4->avelocity[1] = fVar1 * fVar2;
    peVar4->avelocity[2] = fVar1 * fVar3;
    this->pev->nextthink =
         (float)(fVar5 / (float10)*(float *)&this->field_0x64 + (float10)this->pev->ltime);
    *(code **)&this->field_0x10 = Stop;
    return;
  }
  peVar4->speed = 0.0;
  peVar4 = this->pev;
  *(undefined4 *)&this->field_0x10 = 0;
  peVar4->avelocity[0] = DAT_100ae498;
  peVar4->avelocity[1] = DAT_100ae49c;
  peVar4->avelocity[2] = DAT_100ae4a0;
  return;
}

/* 1000a480  CPendulum::Stop  (74 bytes)
 * void Stop(void)
 */
/* public: void __thiscall CPendulum::Stop(void) */

void __thiscall CPendulum::Stop(CPendulum *this)

{
  entvars_t *peVar1;
  
                    /* 0xa480  112  ?Stop@CPendulum@@QAEXXZ */
  peVar1 = this->pev;
  peVar1->angles[0] = *(vec_t *)&this->field_0x78;
  peVar1->angles[1] = *(vec_t *)&this->field_0x7c;
  peVar1->angles[2] = *(vec_t *)&this->field_0x80;
  this->pev->speed = 0.0;
  *(undefined4 *)&this->field_0x10 = 0;
  peVar1 = this->pev;
  peVar1->avelocity[0] = DAT_100ae498;
  peVar1->avelocity[1] = DAT_100ae49c;
  peVar1->avelocity[2] = DAT_100ae4a0;
  return;
}

/* 1000a4d0  CPendulum::Blocked  (13 bytes)
 * undefined Blocked()
 */
void __fastcall CPendulum::Blocked(int param_1)

{
  *(float *)(param_1 + 0x5c) = gpGlobals->time;
  return;
}

/* 1000a4e0  CPendulum::Swing  (461 bytes)
 * void Swing(void)
 */
/* public: void __thiscall CPendulum::Swing(void) */

void __thiscall CPendulum::Swing(CPendulum *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  entvars_t *peVar5;
  float10 fVar6;
  
                    /* 0xa4e0  116  ?Swing@CPendulum@@QAEXXZ */
  fVar6 = CBaseToggle::AxisDelta
                    ((byte_conflict)this->pev->spawnflags,this->pev->angles,
                     (float *)&this->field_0x6c);
  fVar4 = gpGlobals->time - *(float *)&this->field_0x5c;
  *(float *)&this->field_0x5c = gpGlobals->time;
  if ((fVar6 <= (float10)0.0) || (*(float *)&this->field_0x54 <= 0.0)) {
    peVar5 = this->pev;
    fVar1 = fVar4 * *(float *)&this->field_0x54 + peVar5->speed;
  }
  else {
    peVar5 = this->pev;
    fVar1 = peVar5->speed - fVar4 * *(float *)&this->field_0x54;
  }
  peVar5->speed = fVar1;
  peVar5 = this->pev;
  if (peVar5->speed <= *(float *)&this->field_0x64) {
    if (peVar5->speed < -*(float *)&this->field_0x64) {
      peVar5->speed = -*(float *)&this->field_0x64;
    }
  }
  else {
    peVar5->speed = *(float *)&this->field_0x64;
  }
  peVar5 = this->pev;
  fVar1 = peVar5->speed;
  fVar2 = peVar5->movedir[1];
  fVar3 = peVar5->movedir[2];
  peVar5->avelocity[0] = fVar1 * peVar5->movedir[0];
  peVar5->avelocity[1] = fVar1 * fVar2;
  peVar5->avelocity[2] = fVar1 * fVar3;
  this->pev->nextthink = this->pev->ltime + 0.1;
  if (*(float *)&this->field_0x60 != 0.0) {
    fVar4 = *(float *)&this->field_0x68 -
            *(float *)&this->field_0x68 * *(float *)&this->field_0x60 * fVar4;
    *(float *)&this->field_0x68 = fVar4;
    if (fVar4 < 30.0) {
      peVar5 = this->pev;
      peVar5->angles[0] = *(vec_t *)&this->field_0x6c;
      peVar5->angles[1] = *(vec_t *)&this->field_0x70;
      peVar5->angles[2] = *(vec_t *)&this->field_0x74;
      this->pev->speed = 0.0;
      peVar5 = this->pev;
      *(undefined4 *)&this->field_0x10 = 0;
      peVar5->avelocity[0] = DAT_100ae498;
      peVar5->avelocity[1] = DAT_100ae49c;
      peVar5->avelocity[2] = DAT_100ae4a0;
      return;
    }
    peVar5 = this->pev;
    if (fVar4 < peVar5->speed) {
      peVar5->speed = fVar4;
      return;
    }
    if (peVar5->speed < -fVar4) {
      peVar5->speed = -fVar4;
      return;
    }
  }
  return;
}

/* 1000a6b0  CPendulum::Touch  (352 bytes)
 * undefined Touch()
 */
void __thiscall CPendulum::Touch(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fStack_c;
  
  piVar5 = param_2;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = param_2[1];
  if ((0.0 < *(float *)(iVar1 + 0x1e0)) && (*(float *)(iVar2 + 0x16c) != 0.0)) {
    param_2 = (int *)(*(float *)(iVar1 + 0x1f8) * *(float *)(iVar1 + 0x1e0) * 0.01);
    if ((float)param_2 < 0.0) {
      param_2 = (int *)-(float)param_2;
    }
    (**(code **)(*piVar5 + 0x50))(iVar1,iVar1,param_2,1);
    pfVar6 = (float *)VecBModelOrigin((float *)&stack0xffffffe4,*(int *)(param_1 + 4));
    fVar3 = *(float *)(iVar2 + 8) - *pfVar6;
    fVar7 = *(float *)(iVar2 + 0xc) - pfVar6[1];
    fVar8 = *(float *)(iVar2 + 0x10) - pfVar6[2];
    fVar4 = SQRT(fVar3 * fVar3 + fVar7 * fVar7 + fVar8 * fVar8);
    if (fVar4 == 0.0) {
      fVar3 = 0.0;
      fVar7 = 0.0;
      fVar8 = 1.0;
    }
    else {
      fVar4 = 1.0 / fVar4;
      fVar3 = fVar3 * fVar4;
      fVar7 = fVar7 * fVar4;
      fVar8 = fVar8 * fVar4;
    }
    *(float *)(iVar2 + 0x20) = fVar3 * fStack_c;
    *(float *)(iVar2 + 0x24) = fVar7 * fStack_c;
    *(float *)(iVar2 + 0x28) = fVar8 * fStack_c;
  }
  return;
}

/* 1000a810  CPendulum::RopeTouch  (123 bytes)
 * void RopeTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CPendulum::RopeTouch(class CBaseEntity *) */

void __thiscall CPendulum::RopeTouch(CPendulum *this,CBaseEntity *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
                    /* 0xa810  91  ?RopeTouch@CPendulum@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = (**(code **)(*(int *)param_1 + 0xc0))();
  if (iVar3 == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Not_a_client_1009c038);
    return;
  }
  if (*(edict_t **)(iVar1 + 0x208) != this->pev->enemy) {
    this->pev->enemy = *(edict_t **)(*(int *)(param_1 + 4) + 0x208);
    *(undefined4 *)(iVar1 + 0x20) = DAT_100ae498;
    *(undefined4 *)(iVar1 + 0x24) = DAT_100ae49c;
    uVar2 = DAT_100ae4a0;
    *(undefined4 *)(iVar1 + 0x108) = 0;
    *(undefined4 *)(iVar1 + 0x28) = uVar2;
  }
  return;
}

