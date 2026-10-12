/* mp.dll - CPendulum (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10008350  CPendulum::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CPendulum::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CPendulum_10090f70,(int)param_1,0x10090db0,8);
  return;
}

/* 10008380  CPendulum::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CPendulum::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CPendulum_10090f70,(int)param_1,0x10090db0,8);
  return;
}

/* 100083b0  CPendulum::KeyValue  (127 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CPendulum::KeyValue(CPendulum *this,int param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  float10 fVar5;
  
  puVar1 = &DAT_00000009;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_distance_10090f84;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    fVar5 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x58 = (float)fVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = (undefined1 *)0x5;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = &DAT_10090f7c;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    fVar5 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x60 = (float)(fVar5 * (float10)0.001);
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10008430  CPendulum::Spawn  (400 bytes)
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
  FUN_100679a0();
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

/* 100085c0  CPendulum::PendulumUse  (242 bytes)
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
  
                    /* 0x85c0  76  ?PendulumUse@CPendulum@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
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
  peVar4->avelocity[0] = DAT_1009f4a8;
  peVar4->avelocity[1] = DAT_1009f4ac;
  peVar4->avelocity[2] = DAT_1009f4b0;
  return;
}

/* 100086c0  CPendulum::Stop  (74 bytes)
 * void Stop(void)
 */
/* public: void __thiscall CPendulum::Stop(void) */

void __thiscall CPendulum::Stop(CPendulum *this)

{
  entvars_t *peVar1;
  
                    /* 0x86c0  105  ?Stop@CPendulum@@QAEXXZ */
  peVar1 = this->pev;
  peVar1->angles[0] = *(vec_t *)&this->field_0x78;
  peVar1->angles[1] = *(vec_t *)&this->field_0x7c;
  peVar1->angles[2] = *(vec_t *)&this->field_0x80;
  this->pev->speed = 0.0;
  *(undefined4 *)&this->field_0x10 = 0;
  peVar1 = this->pev;
  peVar1->avelocity[0] = DAT_1009f4a8;
  peVar1->avelocity[1] = DAT_1009f4ac;
  peVar1->avelocity[2] = DAT_1009f4b0;
  return;
}

/* 10008710  CPendulum::Blocked  (13 bytes)
 * undefined Blocked()
 */
void __fastcall CPendulum::Blocked(int param_1)

{
  *(float *)(param_1 + 0x5c) = gpGlobals->time;
  return;
}

/* 10008720  CPendulum::Swing  (441 bytes)
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
  
                    /* 0x8720  109  ?Swing@CPendulum@@QAEXXZ */
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
    if (30.0 <= fVar4) {
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
    else {
      peVar5 = this->pev;
      peVar5->angles[0] = *(vec_t *)&this->field_0x6c;
      peVar5->angles[1] = *(vec_t *)&this->field_0x70;
      peVar5->angles[2] = *(vec_t *)&this->field_0x74;
      this->pev->speed = 0.0;
      peVar5 = this->pev;
      *(undefined4 *)&this->field_0x10 = 0;
      peVar5->avelocity[0] = DAT_1009f4a8;
      peVar5->avelocity[1] = DAT_1009f4ac;
      peVar5->avelocity[2] = DAT_1009f4b0;
    }
  }
  return;
}

/* 100088e0  CPendulum::Touch  (326 bytes)
 * undefined Touch()
 */
void __thiscall CPendulum::Touch(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  float *pfVar7;
  float afStack_1c [2];
  float fStack_14;
  float fStack_c;
  
  piVar6 = param_2;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = param_2[1];
  if ((*(float *)(iVar1 + 0x1e0) < 0.0 == (*(float *)(iVar1 + 0x1e0) == 0.0)) &&
     (*(float *)(iVar2 + 0x16c) != 0.0)) {
    param_2 = (int *)(*(float *)(iVar1 + 0x1f8) * *(float *)(iVar1 + 0x1e0) * 0.01);
    if ((float)param_2 < 0.0) {
      param_2 = (int *)-(float)param_2;
    }
    (**(code **)(*piVar6 + 0x38))(iVar1,iVar1,param_2,1);
    pfVar7 = (float *)VecBModelOrigin(afStack_1c,*(int *)(param_1 + 4));
    fVar3 = *(float *)(iVar2 + 8) - *pfVar7;
    fVar5 = *(float *)(iVar2 + 0xc) - pfVar7[1];
    fStack_14 = *(float *)(iVar2 + 0x10) - pfVar7[2];
    fVar4 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fStack_14 * fStack_14);
    if (fVar4 == 0.0) {
      fVar3 = 0.0;
      fVar5 = 0.0;
      fStack_14 = 1.0;
    }
    else {
      fVar4 = 1.0 / fVar4;
      fVar3 = fVar3 * fVar4;
      fVar5 = fVar5 * fVar4;
      fStack_14 = fStack_14 * fVar4;
    }
    *(float *)(iVar2 + 0x20) = fVar3 * fStack_c;
    *(float *)(iVar2 + 0x24) = fVar5 * fStack_c;
    *(float *)(iVar2 + 0x28) = fStack_14 * fStack_c;
  }
  return;
}

/* 10008a30  CPendulum::RopeTouch  (123 bytes)
 * void RopeTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CPendulum::RopeTouch(class CBaseEntity *) */

void __thiscall CPendulum::RopeTouch(CPendulum *this,CBaseEntity *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
                    /* 0x8a30  85  ?RopeTouch@CPendulum@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = (**(code **)(*(int *)param_1 + 0xa8))();
  if (iVar3 == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Not_a_client_10090f90);
    return;
  }
  if (*(edict_t **)(iVar1 + 0x208) != this->pev->enemy) {
    this->pev->enemy = *(edict_t **)(*(int *)(param_1 + 4) + 0x208);
    *(undefined4 *)(iVar1 + 0x20) = DAT_1009f4a8;
    *(undefined4 *)(iVar1 + 0x24) = DAT_1009f4ac;
    uVar2 = DAT_1009f4b0;
    *(undefined4 *)(iVar1 + 0x108) = 0;
    *(undefined4 *)(iVar1 + 0x28) = uVar2;
  }
  return;
}

/* 100091c0  CPendulum::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CPendulum::ObjectCaps(void)

{
  return 0;
}

