/* mp.dll - CTSHack (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10051630  CTSHack::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSHack::Save(CTSObjective *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CTSObjective::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSHack_100990d4,(int)param_1,0x10098dc0,1);
  return;
}

/* 10051660  CTSHack::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSHack::Restore(CTSObjective *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CTSObjective::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CTSHack_100990d4,(int)param_1,0x10098dc0,1);
  return;
}

/* 10051690  CTSHack::Spawn  (165 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTSHack::Spawn(int param_1)

{
  **(int **)(param_1 + 4) = (int)s_ts_hack_100982e4 - (int)gpGlobals->pStringBase;
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
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

/* 10051740  CTSHack::Precache  (1 bytes)
 * undefined Precache()
 */
void CTSHack::Precache(void)

{
  return;
}

/* 10051830  CTSHack::WaitThink  (64 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSHack::WaitThink(void) */

void __thiscall CTSHack::WaitThink(CTSHack *this)

{
  float fVar1;
  
                    /* 0x51830  128  ?WaitThink@CTSHack@@QAEXXZ */
  this->pev->nextthink = this->pev->ltime + 1.0;
  if (this->field_0x54 != '\0') {
    fVar1 = *(float *)&this->field_0x5c - 1.0;
    *(float *)&this->field_0x5c = fVar1;
    if (!NAN(fVar1) && fVar1 < 0.0 != (fVar1 == 0.0)) {
      (*this->vtable[0x3d])(1);
    }
  }
  return;
}

/* 10051870  CTSHack::Use  (580 bytes)
 * undefined Use(int * param_1)
 */
void __thiscall CTSHack::Use(CTSHack *this,int *param_1)

{
  edict_t *peVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  void *this_00;
  void *this_01;
  undefined4 unaff_EBX;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined4 unaff_retaddr;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (this->field_0x54 == '\0') {
    return;
  }
  iVar3 = (**(code **)(*param_1 + 0xa8))();
  if (iVar3 == 0) {
    return;
  }
  uVar4 = FUN_100513d0(this,param_1);
  if ((char)uVar4 == '\0') {
    return;
  }
  if (*(float *)&this->field_0x64 == 0.0) {
    *(float *)&this->field_0x64 = gpGlobals->time;
  }
  fVar2 = gpGlobals->time - *(float *)&this->field_0x64;
  if (0.5 <= fVar2) goto LAB_1005192d;
  if (*(float *)&this->field_0x60 == 0.0) {
    iVar3 = *(int *)&this->field_0x6c;
    if (iVar3 < 2) {
LAB_10051907:
      fVar2 = 1.0;
    }
    else if (iVar3 < 0x1e) {
      if (iVar3 < 2) goto LAB_10051907;
      fVar2 = (float)iVar3;
    }
    else {
      fVar2 = 30.0;
    }
  }
  else {
    fVar2 = *(float *)&this->field_0x60 - fVar2;
  }
  *(float *)&this->field_0x60 = fVar2;
LAB_1005192d:
  if (*(float *)&this->field_0x68 < gpGlobals->time) {
    *(float *)&this->field_0x68 = gpGlobals->time + 1.0;
    peVar1 = this->pev->pContainingEntity;
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,3);
    iVar3 = iVar3 + 0x62;
    (*g_engfuncs.pfnRandomFloat)(0.92,1.0);
    EMIT_SOUND_DYN(this_00,peVar1,6,s_misc_hacking_wav_100990ec,(float)extraout_ST0,iVar3,unaff_EBX,
                   unaff_retaddr);
  }
  iVar8 = 0;
  iVar7 = 0;
  iVar6 = 0;
  iVar3 = 0;
  __ftol();
  puVar5 = UTIL_VarArgs((byte_conflict *)s__i_seconds_left_100990ac);
  FUN_100675b0(param_1[1],4,puVar5,iVar3,iVar6,iVar7,iVar8);
  *(float *)&this->field_0x64 = gpGlobals->time;
  if (*(float *)&this->field_0x60 < 0.0) {
    iVar3 = this->pev->target;
    if (iVar3 != 0) {
      FireTargets((int)(gpGlobals->pStringBase + iVar3),this,this,3,0);
    }
    iVar3 = this->pev->message;
    if (iVar3 != 0) {
      TSHudMessageAll(0,0xff,0,1,0x1e,gpGlobals->pStringBase + iVar3);
    }
    *(undefined4 *)&this->field_0x5c = 0;
    (*this->vtable[0x3d])();
    peVar1 = this->pev->pContainingEntity;
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,3);
    iVar3 = iVar3 + 0x62;
    (*g_engfuncs.pfnRandomFloat)(0.92,1.0);
    EMIT_SOUND_DYN(this_01,peVar1,6,s_misc_hacked_wav_100990dc,(float)extraout_ST0_00,iVar3,
                   in_stack_00000018,in_stack_0000001c);
  }
  return;
}

/* 10051ac0  CTSHack::KeyValue  (73 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSHack::KeyValue(CTSHack *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = 0xc;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_hackingtime_10099100;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    uVar1 = FUN_1006e1dd(*(void **)(param_1 + 8),*(void **)(param_1 + 8));
    *(undefined4 *)&this->field_0x6c = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_10050ec0(this,param_1);
  return;
}

/* 100520d0  CTSHack::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CTSHack::ObjectCaps(void)

{
  return 0x10;
}

