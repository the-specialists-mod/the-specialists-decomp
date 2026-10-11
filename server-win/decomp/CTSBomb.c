/* mp.dll - CTSBomb (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1005c430  CTSBomb::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSBomb::Save(CTSObjective *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CTSObjective::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSBomb_100a4fd0,(int)param_1,0x100a4ce0,2);
  return;
}

/* 1005c460  CTSBomb::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSBomb::Restore(CTSObjective *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CTSObjective::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CTSBomb_100a4fd0,(int)param_1,&DAT_100a4ce0,2);
  return;
}

/* 1005c490  CTSBomb::Spawn  (180 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTSBomb::Spawn(int param_1)

{
  **(int **)(param_1 + 4) = (int)s_ts_bomb_100a4fd8 - (int)gpGlobals->pStringBase;
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
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  return;
}

/* 1005c550  CTSBomb::Precache  (13 bytes)
 * undefined Precache()
 */
void CTSBomb::Precache(void)

{
  (*g_engfuncs.pfnPrecacheSound)(s_misc_beep2_wav_100a4fe0);
  return;
}

/* 1005c560  CTSBomb::SetRandomWires  (81 bytes)
 * undefined SetRandomWires(int param_1)
 * called by: CTSBomb::EnableObjective
 */
void __fastcall CTSBomb::SetRandomWires(int param_1)

{
  char cVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x6c) = 3;
  *(undefined1 *)(param_1 + 0x6d) = 3;
  *(undefined1 *)(param_1 + 0x6e) = 3;
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,2);
  *(undefined1 *)(iVar2 + 0x6c + param_1) = 1;
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,2);
  cVar1 = *(char *)(iVar2 + 0x6c + param_1);
  while (cVar1 == '\x01') {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,2);
    cVar1 = *(char *)(param_1 + 0x6c + iVar2);
  }
  *(undefined1 *)(iVar2 + 0x6c + param_1) = 2;
  return;
}

/* 1005c5c0  CTSBomb::EnableObjective  (221 bytes)
 * undefined EnableObjective()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CTSBomb::EnableObjective(int param_1,char param_2)

{
  float fVar1;
  
  *(char *)(param_1 + 0x54) = param_2;
  *(undefined1 *)(param_1 + 0x6f) = 0;
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
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(float *)(param_1 + 0x5c) = fVar1;
    SetRandomWires(param_1);
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  return;
}

/* 1005c6a0  CTSBomb::CutWire  (271 bytes)
 * undefined CutWire(int param_1, int param_2)
 * called by: CBasePlayer::CutWire
 */
void __thiscall CTSBomb::CutWire(CTSBomb *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if ((((this->field_0x54 != '\0') && (*(int *)&this->field_0x74 != 0)) &&
      (0.0 < *(float *)&this->field_0x5c)) &&
     (((-1 < param_1 && (param_1 < 3)) &&
      ((cVar1 = (&this->field_0x6c)[param_1], cVar1 != '\0' && (param_2 != 0)))))) {
    if (cVar1 == '\x03') {
      (&this->field_0x6c)[param_1] = 0;
      *(undefined4 *)&this->field_0x5c = 0;
      return;
    }
    if (cVar1 == '\x02') {
      this->field_0x6f = 1;
      (&this->field_0x6c)[param_1] = 0;
      *(undefined1 *)(param_2 + 0x778) = this->field_0x6c;
      *(undefined1 *)(param_2 + 0x779) = this->field_0x6d;
      *(undefined1 *)(param_2 + 0x77a) = this->field_0x6e;
      return;
    }
    if (cVar1 == '\x01') {
      (&this->field_0x6c)[param_1] = 0;
      iVar2 = this->pev->target;
      if (iVar2 != 0) {
        FireTargets((int)(gpGlobals->pStringBase + iVar2),this,this,3,0);
      }
      iVar2 = this->pev->message;
      if (iVar2 != 0) {
        TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + iVar2);
      }
      *(undefined4 *)&this->field_0x5c = 0;
      *(undefined4 *)&this->field_0x60 = 0;
      (*this->vtable[0x43])(1);
    }
  }
  return;
}

/* 1005c7b0  CTSBomb::WaitThink  (298 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSBomb::WaitThink(void) */

void __thiscall CTSBomb::WaitThink(CTSBomb *this)

{
  edict_t *peVar1;
  undefined4 *puVar2;
  int iVar3;
  void *this_00;
  float10 extraout_ST0;
  float in_stack_ffffffc4;
  float in_stack_ffffffc8;
  float fVar4;
  undefined1 *puVar5;
  entvars_t *peVar6;
  entvars_t *peVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 in_stack_fffffff4;
  
                    /* 0x5c7b0  132  ?WaitThink@CTSBomb@@QAEXXZ */
  if (this->field_0x6f == '\0') {
    fVar4 = 1.0;
  }
  else {
    fVar4 = 0.1;
  }
  this->pev->nextthink = this->pev->ltime + fVar4;
  if (this->field_0x54 != '\0') {
    fVar4 = *(float *)&this->field_0x5c - 1.0;
    *(float *)&this->field_0x5c = fVar4;
    if (fVar4 <= 0.0) {
      CTSGameRules::RoundTimeLeft(&TSGameRules);
      (*this->vtable[0x43])();
      peVar6 = this->pev;
      fVar10 = 2048.0;
      fVar9 = 5.8294e-42;
      uVar8 = 0x43960000;
      puVar5 = &stack0xfffffff0;
      fVar4 = 2.6383892e-29;
      peVar7 = peVar6;
      puVar2 = (undefined4 *)(*this->vtable[0x3c])();
      Vector::Vector((Vector *)&stack0xffffffc4,puVar2);
      TSExplosion(in_stack_ffffffc4,in_stack_ffffffc8,fVar4,(int)puVar5,(int)peVar6,(float)peVar7,
                  uVar8,fVar9,fVar10);
      return;
    }
    if (*(float *)&this->field_0x60 < gpGlobals->time) {
      if (this->field_0x6f == '\0') {
        fVar4 = 1.0;
      }
      else {
        fVar4 = 0.1;
      }
      *(float *)&this->field_0x60 = gpGlobals->time + fVar4;
      peVar1 = this->pev->pContainingEntity;
      iVar3 = (*g_engfuncs.pfnRandomLong)(0,3);
      iVar3 = iVar3 + 0x62;
      (*g_engfuncs.pfnRandomFloat)(0.92,1.0);
      EMIT_SOUND_DYN(this_00,peVar1,6,s_misc_beep2_wav_100a4fe0,(float)extraout_ST0,iVar3,
                     in_stack_fffffff4);
    }
  }
  return;
}

/* 1005c8e0  CTSBomb::Use  (356 bytes)
 * undefined Use(int * param_1)
 */
void __thiscall CTSBomb::Use(CTSBomb *this,int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (((this->field_0x54 != '\0') && (iVar3 = (**(code **)(*param_1 + 0xc0))(), iVar3 != 0)) &&
     (cVar2 = FUN_1005c3d0(this,param_1), cVar2 != '\0')) {
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
    iVar3 = 0;
    __ftol();
    puVar4 = UTIL_VarArgs((byte_conflict *)s__i_seconds_left_100a4ff0);
    ClientPrint(param_1[1],4,puVar4,iVar3,iVar5,iVar6,iVar7);
    *(float *)&this->field_0x68 = gpGlobals->time;
    if (*(float *)&this->field_0x64 < 0.0) {
      iVar3 = this->pev->target;
      if (iVar3 != 0) {
        FireTargets((int)(gpGlobals->pStringBase + iVar3),this,this,3,0);
      }
      iVar3 = this->pev->message;
      if (iVar3 != 0) {
        TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + iVar3);
      }
      *(undefined4 *)&this->field_0x5c = 0;
      *(undefined4 *)&this->field_0x60 = 0;
      (*this->vtable[0x43])();
    }
  }
  return;
}

/* 1005ca50  CTSBomb::KeyValue  (190 bytes)
 * undefined KeyValue()
 */
void __thiscall CTSBomb::KeyValue(void *param_1,int param_2)

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
  pcVar7 = s_defusetime_100a500c;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1005ca88:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1005ca8d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1005ca88;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005ca8d:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x70) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_cutwires_100a5000;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1005cad9:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1005cade;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1005cad9;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005cade:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x74) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  FUN_1005c340(param_1,param_2);
  return;
}

