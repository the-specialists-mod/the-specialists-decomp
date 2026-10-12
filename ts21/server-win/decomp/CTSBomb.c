/* mp.dll - CTSBomb (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10050f50  CTSBomb::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSBomb::Save(CTSObjective *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CTSObjective::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSBomb_10099094,(int)param_1,0x10098da0,2);
  return;
}

/* 10050f80  CTSBomb::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSBomb::Restore(CTSObjective *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CTSObjective::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CTSBomb_10099094,(int)param_1,0x10098da0,2);
  return;
}

/* 10050fb0  CTSBomb::Spawn  (180 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTSBomb::Spawn(int param_1)

{
  **(int **)(param_1 + 4) = (int)s_ts_bomb_100982ec - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  FUN_100679a0();
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(code **)(param_1 + 0x10) = WaitThink;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = *(float *)(*(int *)(param_1 + 4) + 0x100) + 1.0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  return;
}

/* 10051070  CTSBomb::Precache  (13 bytes)
 * undefined Precache()
 */
void CTSBomb::Precache(void)

{
  (*g_engfuncs.pfnPrecacheSound)(s_misc_beep2_wav_1009909c);
  return;
}

/* 100512c0  CTSBomb::WaitThink  (272 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSBomb::WaitThink(void) */

void __thiscall CTSBomb::WaitThink(CTSBomb *this)

{
  edict_t *peVar1;
  int iVar2;
  void *this_00;
  float10 extraout_ST0;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 *puVar3;
  float in_stack_ffffffd4;
  float in_stack_ffffffd8;
  int in_stack_ffffffdc;
  entvars_t *peVar4;
  entvars_t *peVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
                    /* 0x512c0  125  ?WaitThink@CTSBomb@@QAEXXZ */
  if (this->field_0x6f == '\0') {
    fVar7 = 1.0;
  }
  else {
    fVar7 = 0.1;
  }
  this->pev->nextthink = this->pev->ltime + fVar7;
  if (this->field_0x54 != '\0') {
    fVar7 = *(float *)&this->field_0x5c - 1.0;
    *(float *)&this->field_0x5c = fVar7;
    if (fVar7 < 0.0 != (fVar7 == 0.0)) {
      CTSGameRules::RoundTimeLeft(&DAT_100ac8c0);
      (*this->vtable[0x3d])();
      peVar4 = this->pev;
      fVar8 = 2048.0;
      fVar7 = 5.8294e-42;
      uVar6 = 0x43960000;
      puVar3 = &stack0xffffffd4;
      peVar5 = peVar4;
      (*this->vtable[0x35])();
      TSExplosion((float)puVar3,in_stack_ffffffd4,in_stack_ffffffd8,in_stack_ffffffdc,(int)peVar4,
                  (float)peVar5,uVar6,fVar7,fVar8);
      return;
    }
    if (*(float *)&this->field_0x60 < gpGlobals->time) {
      if (this->field_0x6f == '\0') {
        fVar7 = 1.0;
      }
      else {
        fVar7 = 0.1;
      }
      *(float *)&this->field_0x60 = gpGlobals->time + fVar7;
      peVar1 = this->pev->pContainingEntity;
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,3);
      iVar2 = iVar2 + 0x62;
      (*g_engfuncs.pfnRandomFloat)(0.92,1.0);
      EMIT_SOUND_DYN(this_00,peVar1,6,s_misc_beep2_wav_1009909c,(float)extraout_ST0,iVar2,
                     in_stack_00000004,in_stack_00000008);
    }
  }
  return;
}

/* 10051430  CTSBomb::Use  (358 bytes)
 * undefined Use(int * param_1)
 */
void __thiscall CTSBomb::Use(CTSBomb *this,int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (((this->field_0x54 != '\0') && (iVar2 = (**(code **)(*param_1 + 0xa8))(), iVar2 != 0)) &&
     (uVar3 = FUN_100513d0(this,param_1), (char)uVar3 != '\0')) {
    if (*(float *)&this->field_0x68 == 0.0) {
      *(float *)&this->field_0x68 = gpGlobals->time;
    }
    fVar1 = gpGlobals->time - *(float *)&this->field_0x68;
    if (fVar1 < 0.5) {
      if (*(float *)&this->field_0x64 == 0.0) {
        fVar1 = (float)*(int *)&this->field_0x70;
      }
      else {
        fVar1 = *(float *)&this->field_0x64 - fVar1;
      }
      *(float *)&this->field_0x64 = fVar1;
    }
    iVar7 = 0;
    iVar6 = 0;
    iVar5 = 0;
    iVar2 = 0;
    __ftol();
    puVar4 = UTIL_VarArgs((byte_conflict *)s__i_seconds_left_100990ac);
    FUN_100675b0(param_1[1],4,puVar4,iVar2,iVar5,iVar6,iVar7);
    *(float *)&this->field_0x68 = gpGlobals->time;
    if (*(float *)&this->field_0x64 < 0.0) {
      iVar2 = this->pev->target;
      if (iVar2 != 0) {
        FireTargets((int)(gpGlobals->pStringBase + iVar2),this,this,3,0);
      }
      iVar2 = this->pev->message;
      if (iVar2 != 0) {
        TSHudMessageAll(0,0xff,0,1,0x1e,gpGlobals->pStringBase + iVar2);
      }
      *(undefined4 *)&this->field_0x5c = 0;
      *(undefined4 *)&this->field_0x60 = 0;
      (*this->vtable[0x3d])();
    }
  }
  return;
}

/* 100515a0  CTSBomb::KeyValue  (122 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSBomb::KeyValue(CTSBomb *this,int param_1)

{
  undefined4 uVar1;
  void *this_00;
  undefined1 *this_01;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  this_00 = (void *)0xb;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_defusetime_100990c8;
  do {
    if (this_00 == (void *)0x0) break;
    this_00 = (void *)((int)this_00 + -1);
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    uVar1 = FUN_1006e1dd(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x70 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  this_01 = &DAT_00000009;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_cutwires_100990bc;
  do {
    if (this_01 == (undefined1 *)0x0) break;
    this_01 = this_01 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    uVar1 = FUN_1006e1dd(this_01,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x74 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_10050ec0(this,param_1);
  return;
}

/* 10052070  CTSBomb::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CTSBomb::ObjectCaps(void)

{
  return 0x10;
}

