/* mp.dll - CTSHack (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1005cb20  CTSHack::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSHack::Save(CTSObjective *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CTSObjective::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSHack_100a5018,(int)param_1,0x100a4d00,1);
  return;
}

/* 1005cb50  CTSHack::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSHack::Restore(CTSObjective *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CTSObjective::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CTSHack_100a5018,(int)param_1,&DAT_100a4d00,1);
  return;
}

/* 1005cb80  CTSHack::Spawn  (165 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTSHack::Spawn(int param_1)

{
  **(int **)(param_1 + 4) = (int)s_ts_hack_100a5020 - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
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

/* 1005cc30  CTSHack::EnableObjective  (211 bytes)
 * undefined EnableObjective()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CTSHack::EnableObjective(int param_1,char param_2)

{
  float fVar1;
  
  *(char *)(param_1 + 0x54) = param_2;
  if (param_2 != '\0') {
    *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) & 0xffffff7f
    ;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 4;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
    *(uint *)(*(int *)(param_1 + 4) + 0x1a4) = *(uint *)(*(int *)(param_1 + 4) + 0x1a4) | 0x2000000;
    (*g_engfuncs.pfnSetModel)
              (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
               gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
    fVar1 = _DAT_100c0a50 - gpGlobals->time;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(float *)(param_1 + 0x5c) = fVar1;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}

/* 1005cd10  CTSHack::WaitThink  (64 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSHack::WaitThink(void) */

void __thiscall CTSHack::WaitThink(CTSHack *this)

{
  float fVar1;
  
                    /* 0x5cd10  137  ?WaitThink@CTSHack@@QAEXXZ */
  this->pev->nextthink = this->pev->ltime + 1.0;
  if ((this->field_0x54 != '\0') &&
     (fVar1 = *(float *)&this->field_0x5c - 1.0, *(float *)&this->field_0x5c = fVar1, fVar1 <= 0.0))
  {
    (*this->vtable[0x43])(1);
  }
  return;
}

/* 1005cd50  CTSHack::Use  (588 bytes)
 * undefined Use(int * param_1)
 */
void __thiscall CTSHack::Use(CTSHack *this,int *param_1)

{
  edict_t *peVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  void *this_00;
  void *this_01;
  undefined4 unaff_ESI;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined4 in_stack_00000014;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (this->field_0x54 == '\0') {
    return;
  }
  iVar4 = (**(code **)(*param_1 + 0xc0))();
  if (iVar4 == 0) {
    return;
  }
  cVar3 = FUN_1005c3d0(this,param_1);
  if (cVar3 == '\0') {
    return;
  }
  if (*(float *)&this->field_0x64 == 0.0) {
    *(float *)&this->field_0x64 = gpGlobals->time;
  }
  fVar2 = gpGlobals->time - *(float *)&this->field_0x64;
  if (0.5 <= fVar2) goto LAB_1005ce0d;
  if (*(float *)&this->field_0x60 == 0.0) {
    iVar4 = *(int *)&this->field_0x6c;
    if (iVar4 < 2) {
LAB_1005cde7:
      fVar2 = 1.0;
    }
    else if (iVar4 < 0x1e) {
      if (iVar4 < 2) goto LAB_1005cde7;
      fVar2 = (float)iVar4;
    }
    else {
      fVar2 = 30.0;
    }
  }
  else {
    fVar2 = *(float *)&this->field_0x60 - fVar2;
  }
  *(float *)&this->field_0x60 = fVar2;
LAB_1005ce0d:
  if (*(float *)&this->field_0x68 < gpGlobals->time) {
    *(float *)&this->field_0x68 = gpGlobals->time + 1.0;
    peVar1 = this->pev->pContainingEntity;
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,3);
    iVar4 = iVar4 + 0x62;
    (*g_engfuncs.pfnRandomFloat)(0.92,1.0);
    EMIT_SOUND_DYN(this_00,peVar1,6,s_misc_hacking_wav_100a5038,(float)extraout_ST0,iVar4,unaff_ESI)
    ;
  }
  iVar8 = 0;
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  __ftol();
  puVar5 = UTIL_VarArgs((byte_conflict *)s__i_seconds_left_100a4ff0);
  ClientPrint(param_1[1],4,puVar5,iVar4,iVar6,iVar7,iVar8);
  *(float *)&this->field_0x64 = gpGlobals->time;
  if (*(float *)&this->field_0x60 < 0.0) {
    iVar4 = this->pev->target;
    if (iVar4 != 0) {
      FireTargets((int)(gpGlobals->pStringBase + iVar4),this,this,3,0);
    }
    iVar4 = this->pev->message;
    if (iVar4 != 0) {
      TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + iVar4);
    }
    *(undefined4 *)&this->field_0x5c = 0;
    (*this->vtable[0x43])();
    peVar1 = this->pev->pContainingEntity;
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,3);
    iVar4 = iVar4 + 0x62;
    (*g_engfuncs.pfnRandomFloat)(0.92,1.0);
    EMIT_SOUND_DYN(this_01,peVar1,6,s_misc_hacked_wav_100a5028,(float)extraout_ST0_00,iVar4,
                   in_stack_00000014);
  }
  return;
}

/* 1005cfa0  CTSHack::KeyValue  (111 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSHack::KeyValue(CTSHack *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  CTSHack *this_00;
  char *pcVar6;
  bool bVar7;
  undefined3 uVar5;
  
  pcVar6 = s_hackingtime_100a504c;
  pbVar2 = *(byte **)(param_1 + 4);
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CTSHack *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1005cfda:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1005cfdf;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CTSHack *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1005cfda;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005cfdf:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x6c = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_1005c340(this,param_1);
  return;
}

