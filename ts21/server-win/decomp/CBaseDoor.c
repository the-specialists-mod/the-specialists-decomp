/* mp.dll - CBaseDoor (17 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10013640  CBaseDoor::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CBaseDoor::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CBaseDoor_10092620,(int)param_1,0x10092578,7);
  return;
}

/* 10013670  CBaseDoor::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CBaseDoor::Restore(CBaseToggle *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CBaseDoor_10092620,(int)param_1,0x10092578,7);
  return;
}

/* 100138c0  CBaseDoor::KeyValue  (664 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CBaseDoor::KeyValue(CBaseDoor *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  void *this_00;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  float10 fVar7;
  longlong lVar8;
  
  pcVar4 = *(char **)(param_1 + 4);
  puVar2 = (undefined1 *)0x5;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = &DAT_10090ec0;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    lVar8 = __ftol();
    this->pev->skin = (int)lVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000008;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_movesnd_10092668;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    lVar8 = __ftol();
    this->field_0x11e = (char)lVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000008;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_stopsnd_10092660;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    lVar8 = __ftol();
    this->field_0x11f = (char)lVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0xc;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_healthvalue_10092654;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    lVar8 = __ftol();
    this->field_0x11d = (char)lVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0xd;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_locked_sound_10091414;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    lVar8 = __ftol();
    this->field_0x144 = (char)lVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0x10;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_locked_sentence_10091404;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    lVar8 = __ftol();
    this->field_0x145 = (char)lVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0xf;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_unlocked_sound_100913f4;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    lVar8 = __ftol();
    this->field_0x146 = (char)lVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0x12;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_unlocked_sentence_100913e0;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    lVar8 = __ftol();
    this->field_0x147 = (char)lVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0xb;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_WaveHeight_10092648;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    fVar7 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    this->pev->scale = (float)(fVar7 * (float10)0.125);
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_0000000a;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_maxdamage_1009263c;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    iVar1 = FUN_1006e1dd(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0xf8 = (float)iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  this_00 = (void *)0xd;
  bVar6 = true;
  pcVar3 = s_doormaterial_1009262c;
  do {
    if (this_00 == (void *)0x0) break;
    this_00 = (void *)((int)this_00 + -1);
    bVar6 = *pcVar4 == *pcVar3;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar6);
  if (!bVar6) {
    CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
    return;
  }
  iVar1 = FUN_1006e1dd(this_00,*(byte_conflict **)(param_1 + 8));
  if ((-1 < iVar1) && (iVar1 < 10)) {
    *(int *)&this->field_0xfc = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)&this->field_0xfc = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 10013b80  CBaseDoor::BreakableRespawn  (208 bytes)
 * undefined BreakableRespawn(char param_1)
 */
void __thiscall CBaseDoor::BreakableRespawn(CBaseDoor *this,char param_1)

{
  entvars_t *peVar1;
  
  peVar1 = this->pev;
  if (((peVar1->deadflag == 2) || (peVar1->effects == 0x80)) || (param_1 != '\0')) {
    peVar1->deadflag = 0;
    this->pev->effects = 0;
    peVar1 = this->pev;
    peVar1->origin[0] = *(vec_t *)&this->field_0x104;
    peVar1->origin[1] = *(vec_t *)&this->field_0x108;
    peVar1->origin[2] = *(vec_t *)&this->field_0x10c;
    FUN_100679a0();
    peVar1 = this->pev;
    peVar1->angles[0] = *(vec_t *)&this->field_0x110;
    peVar1->angles[1] = *(vec_t *)&this->field_0x114;
    peVar1->angles[2] = *(vec_t *)&this->field_0x118;
    peVar1 = this->pev;
    peVar1->avelocity[0] = DAT_1009f4a8;
    peVar1->avelocity[1] = DAT_1009f4ac;
    peVar1->avelocity[2] = DAT_1009f4b0;
    peVar1 = this->pev;
    peVar1->velocity[0] = DAT_1009f4a8;
    peVar1->velocity[1] = DAT_1009f4ac;
    peVar1->velocity[2] = DAT_1009f4b0;
    *(undefined4 *)&this->field_0x14 = 0;
    *(undefined4 *)&this->field_0x10 = 0;
    (*this->vtable[3])();
  }
  return;
}

/* 10013c50  CBaseDoor::TraceAttack  (1299 bytes)
 * undefined TraceAttack(undefined4 param_1, float param_2)
 */
void __thiscall CBaseDoor::TraceAttack(CBaseDoor *this,undefined4 param_1,float param_2)

{
  edict_t *peVar1;
  entvars_t *peVar2;
  float fVar3;
  float flValue;
  int iVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  float10 extraout_ST0;
  float fStack0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 uStack00000028;
  float fStack00000034;
  char in_stack_0000003b;
  undefined4 in_stack_0000003c;
  char *pcVar8;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (gpGlobals->time < *(float *)&this->field_0xf4) {
    return;
  }
  if (this->pev->takedamage == 0.0) {
    return;
  }
  if ((in_stack_0000001c & 0x6000040) == 0) {
    return;
  }
  iVar5 = 0xb;
  bVar7 = true;
  pcVar8 = gpGlobals->pStringBase + this->pev->classname;
  pcVar6 = s_func_water_10092780;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar8 == *pcVar6;
    pcVar8 = pcVar8 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    return;
  }
  if ((in_stack_0000001c & 0x40) == 0) {
    fVar3 = 1.0;
  }
  else {
    fVar3 = 2.0;
  }
  fVar3 = fVar3 * param_2 + *(float *)&this->field_0xf0;
  *(float *)&this->field_0xf0 = fVar3;
  if (fVar3 < *(float *)&this->field_0xf8) {
    return;
  }
  if (((this->field_0x11c == '\0') &&
      (iVar5 = (*g_engfuncs.pfnRandomLong)(0,100),
      (int)((-(uint)((in_stack_0000001c & 0x2000000) != 0) & 0xffffffec) + 0x32) < iVar5)) &&
     (*(int *)&this->field_0x70 == 1)) {
    this->field_0x11c = 1;
    *(float *)&this->field_0xf4 = gpGlobals->time + 0.1;
    return;
  }
  iVar5 = (*g_engfuncs.pfnRandomLong)(0,0x1d);
  iVar5 = iVar5 + 0x5f;
  if ((0x61 < iVar5) && (iVar5 < 0x67)) {
    iVar5 = 100;
  }
  (*g_engfuncs.pfnRandomFloat)(0.85,1.0);
  fStack00000034 = (float)extraout_ST0;
  if ((float10)1.0 < extraout_ST0) {
    fStack00000034 = 1.0;
  }
  switch(*(undefined4 *)&this->field_0xfc) {
  case 0:
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar4 == 0) {
      pcVar8 = s_debris_bustglass1_wav_10092750;
    }
    else {
      if (iVar4 != 1) break;
      pcVar8 = s_debris_bustglass2_wav_10092768;
    }
    peVar1 = this->pev->pContainingEntity;
    EMIT_SOUND_DYN(peVar1,peVar1,2,pcVar8,in_stack_0000003c,0x3f4ccccd,0,iVar5);
    break;
  case 1:
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar4 == 0) {
      pcVar8 = s_debris_bustcrate1_wav_10092720;
    }
    else {
      if (iVar4 != 1) break;
      pcVar8 = s_debris_bustcrate2_wav_10092738;
    }
    peVar1 = this->pev->pContainingEntity;
    EMIT_SOUND_DYN(peVar1,peVar1,2,pcVar8,in_stack_0000003c,0x3f4ccccd,0,iVar5);
    break;
  case 2:
  case 6:
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar4 == 0) {
      pcVar8 = s_debris_bustmetal1_wav_100926f0;
    }
    else {
      if (iVar4 != 1) break;
      pcVar8 = s_debris_bustmetal2_wav_10092708;
    }
    peVar1 = this->pev->pContainingEntity;
    EMIT_SOUND_DYN(peVar1,peVar1,2,pcVar8,in_stack_0000003c,0x3f4ccccd,0,iVar5);
    break;
  case 3:
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar4 == 0) {
      pcVar8 = s_debris_bustflesh1_wav_100926c0;
    }
    else {
      if (iVar4 != 1) break;
      pcVar8 = s_debris_bustflesh2_wav_100926d8;
    }
    peVar1 = this->pev->pContainingEntity;
    EMIT_SOUND_DYN(peVar1,peVar1,2,pcVar8,in_stack_0000003c,0x3f4ccccd,0,iVar5);
    break;
  case 4:
  case 8:
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar4 == 0) {
      pcVar8 = s_debris_bustconcrete1_wav_10092688;
    }
    else {
      if (iVar4 != 1) break;
      pcVar8 = s_debris_bustconcrete2_wav_100926a4;
    }
    peVar1 = this->pev->pContainingEntity;
    EMIT_SOUND_DYN(peVar1,peVar1,2,pcVar8,in_stack_0000003c,0x3f4ccccd,0,iVar5);
    break;
  case 5:
    peVar1 = this->pev->pContainingEntity;
    EMIT_SOUND_DYN(peVar1,peVar1,2,s_debris_bustceiling_wav_10092670,fStack00000034,0x3f4ccccd,0,
                   iVar5);
  }
  peVar2 = this->pev;
  fStack0000000c = (peVar2->maxs[0] + peVar2->mins[0]) * 0.5;
  fStack_c = fStack0000000c + peVar2->origin[0];
  fVar3 = (peVar2->maxs[1] + peVar2->mins[1]) * 0.5 + peVar2->origin[1];
  flValue = (peVar2->maxs[2] + peVar2->mins[2]) * 0.5 + peVar2->origin[2];
  fStack_8 = fVar3;
  fStack_4 = flValue;
  if (*(int *)&this->field_0xfc == 0) {
    (*g_engfuncs.pfnMessageBegin)(4,DAT_100cbc84,&fStack_c,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteCoord)(fVar3);
    (*g_engfuncs.pfnWriteCoord)(fStack0000000c);
    (*g_engfuncs.pfnWriteCoord)(in_stack_00000014);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[0]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[1]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[2]);
    (*g_engfuncs.pfnWriteByte)(0);
  }
  else {
    (*g_engfuncs.pfnMessageBegin)(4,0x17,&fStack_c,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0x6c);
    (*g_engfuncs.pfnWriteCoord)(flValue);
    (*g_engfuncs.pfnWriteCoord)(in_stack_00000010);
    (*g_engfuncs.pfnWriteCoord)(in_stack_00000018);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[0]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[1]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[2]);
    (*g_engfuncs.pfnWriteCoord)(0.0);
    (*g_engfuncs.pfnWriteCoord)(0.0);
    (*g_engfuncs.pfnWriteCoord)(0.0);
    (*g_engfuncs.pfnWriteByte)(10);
    (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0x100);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnWriteByte)(0x19);
    (*g_engfuncs.pfnWriteByte)((int)in_stack_0000003b);
  }
  uStack00000028 = 0x10014127;
  (*g_engfuncs.pfnMessageEnd)();
  this->pev->solid = 0;
  this->pev->effects = 0x80;
  this->pev->takedamage = 0.0;
  this->pev->deadflag = 2;
  *(undefined4 *)&this->field_0x14 = 0;
  *(code **)&this->field_0x10 = FUN_10015e10;
  return;
}

/* 10014190  CBaseDoor::Spawn  (577 bytes)
 * undefined Spawn()
 */
void __fastcall CBaseDoor::Spawn(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  
  iVar6 = param_1[1];
  param_1[0x41] = *(int *)(iVar6 + 8);
  param_1[0x42] = *(int *)(iVar6 + 0xc);
  param_1[0x43] = *(int *)(iVar6 + 0x10);
  param_1[0x44] = *(int *)(iVar6 + 0x50);
  param_1[0x45] = *(int *)(iVar6 + 0x54);
  iVar4 = *(int *)(iVar6 + 0x58);
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x46] = iVar4;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if ((float)param_1[0x3e] <= 0.0) {
    *(undefined4 *)(iVar6 + 0x16c) = 0;
  }
  else {
    *(undefined4 *)(iVar6 + 0x16c) = 0x3f800000;
  }
  (**(code **)(*param_1 + 0x10))();
  SetMovedir(param_1[1]);
  iVar6 = param_1[1];
  if (*(int *)(iVar6 + 0x110) == 0) {
    if ((*(byte *)(iVar6 + 0x1a0) & 8) == 0) {
      *(undefined4 *)(iVar6 + 0x10c) = 4;
    }
    else {
      *(undefined4 *)(iVar6 + 0x10c) = 0;
    }
  }
  else {
    *(undefined4 *)(iVar6 + 0x10c) = 0;
    *(uint *)(param_1[1] + 0x1a0) = *(uint *)(param_1[1] + 0x1a0) | 0x80000000;
  }
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  FUN_100679a0();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  if (*(float *)(param_1[1] + 0x1f8) == 0.0) {
    *(undefined4 *)(param_1[1] + 0x1f8) = 0x42c80000;
  }
  iVar6 = param_1[1];
  pfVar1 = (float *)(param_1 + 0x23);
  *pfVar1 = *(float *)(iVar6 + 8);
  param_1[0x24] = *(int *)(iVar6 + 0xc);
  param_1[0x25] = *(int *)(iVar6 + 0x10);
  fVar5 = (ABS((*(float *)(iVar6 + 0xf4) - 2.0) * *(float *)(iVar6 + 0x44)) +
          ABS((*(float *)(iVar6 + 0xf8) - 2.0) * *(float *)(iVar6 + 0x48)) +
          ABS((*(float *)(iVar6 + 0xfc) - 2.0) * *(float *)(iVar6 + 0x4c))) - (float)param_1[0x20];
  fVar2 = *(float *)(iVar6 + 0x48);
  fVar3 = *(float *)(iVar6 + 0x4c);
  param_1[0x26] = (int)(fVar5 * *(float *)(iVar6 + 0x44) + *pfVar1);
  param_1[0x27] = (int)(fVar5 * fVar2 + (float)param_1[0x24]);
  param_1[0x28] = (int)(fVar5 * fVar3 + (float)param_1[0x25]);
  if ((*(byte *)(iVar6 + 0x1a0) & 1) != 0) {
    FUN_100679a0();
    param_1[0x26] = (int)*pfVar1;
    iVar6 = param_1[1];
    param_1[0x27] = param_1[0x24];
    param_1[0x28] = param_1[0x25];
    *pfVar1 = *(float *)(iVar6 + 8);
    param_1[0x24] = *(int *)(iVar6 + 0xc);
    param_1[0x25] = *(int *)(iVar6 + 0x10);
  }
  param_1[0x1c] = 1;
  if ((*(uint *)(iVar6 + 0x1a0) & 0x100) != 0) {
    param_1[5] = 0;
    return;
  }
  param_1[5] = (int)DoorTouch;
  return;
}

/* 100143e0  CBaseDoor::SetToggleState  (52 bytes)
 * undefined SetToggleState()
 */
void CBaseDoor::SetToggleState(int param_1)

{
  if (param_1 == 0) {
    FUN_100679a0();
    return;
  }
  FUN_100679a0();
  return;
}

/* 10014420  CBaseDoor::Precache  (1366 bytes)
 * undefined Precache(int param_1)
 */
void __fastcall CBaseDoor::Precache(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *s;
  
  switch(*(undefined1 *)(param_1 + 0x11e)) {
  case 0:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_common_null_wav_10090f10);
    *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
    goto LAB_1001454a;
  case 1:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove1_wav_10092974);
    pcVar2 = s_doors_doormove1_wav_10092974;
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove2_wav_10092960);
    pcVar2 = s_doors_doormove2_wav_10092960;
    goto LAB_1001451f;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove3_wav_1009294c);
    pcVar2 = s_doors_doormove3_wav_1009294c;
    break;
  case 4:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove4_wav_10092938);
    pcVar2 = s_doors_doormove4_wav_10092938;
    goto LAB_1001451f;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove5_wav_10092924);
    pcVar2 = s_doors_doormove5_wav_10092924;
    break;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove6_wav_10092910);
    pcVar2 = s_doors_doormove6_wav_10092910;
    goto LAB_1001451f;
  case 7:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove7_wav_100928fc);
    pcVar2 = s_doors_doormove7_wav_100928fc;
    break;
  case 8:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove8_wav_100928e8);
    pcVar2 = s_doors_doormove8_wav_100928e8;
    goto LAB_1001451f;
  case 9:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove9_wav_100928d4);
    pcVar2 = s_doors_doormove9_wav_100928d4;
    break;
  case 10:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove10_wav_100928bc);
    pcVar2 = s_doors_doormove10_wav_100928bc;
LAB_1001451f:
    iVar1 = (*g_engfuncs.pfnAllocString)(pcVar2);
    *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
    goto LAB_1001454a;
  default:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_common_null_wav_10090f10);
    *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
    goto LAB_1001454a;
  }
  iVar1 = (*g_engfuncs.pfnAllocString)(pcVar2);
  *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
LAB_1001454a:
  switch(*(undefined1 *)(param_1 + 0x11f)) {
  case 0:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_common_null_wav_10090f10);
    *(int *)(*(int *)(param_1 + 4) + 0x1f0) = iVar1;
    goto LAB_10014646;
  case 1:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doorstop1_wav_100928a8);
    pcVar2 = s_doors_doorstop1_wav_100928a8;
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doorstop2_wav_10092894);
    pcVar2 = s_doors_doorstop2_wav_10092894;
    goto LAB_1001461b;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doorstop3_wav_10092880);
    pcVar2 = s_doors_doorstop3_wav_10092880;
    break;
  case 4:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doorstop4_wav_1009286c);
    pcVar2 = s_doors_doorstop4_wav_1009286c;
    goto LAB_1001461b;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doorstop5_wav_10092858);
    pcVar2 = s_doors_doorstop5_wav_10092858;
    break;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doorstop6_wav_10092844);
    pcVar2 = s_doors_doorstop6_wav_10092844;
    goto LAB_1001461b;
  case 7:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doorstop7_wav_10092830);
    pcVar2 = s_doors_doorstop7_wav_10092830;
    break;
  case 8:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doorstop8_wav_1009281c);
    pcVar2 = s_doors_doorstop8_wav_1009281c;
LAB_1001461b:
    iVar1 = (*g_engfuncs.pfnAllocString)(pcVar2);
    *(int *)(*(int *)(param_1 + 4) + 0x1f0) = iVar1;
    goto LAB_10014646;
  default:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_common_null_wav_10090f10);
    *(int *)(*(int *)(param_1 + 4) + 0x1f0) = iVar1;
    goto LAB_10014646;
  }
  iVar1 = (*g_engfuncs.pfnAllocString)(pcVar2);
  *(int *)(*(int *)(param_1 + 4) + 0x1f0) = iVar1;
LAB_10014646:
  if (*(byte *)(param_1 + 0x144) != 0) {
    pcVar2 = ButtonSound((uint)*(byte *)(param_1 + 0x144));
    (*g_engfuncs.pfnPrecacheSound)(pcVar2);
    iVar1 = (*g_engfuncs.pfnAllocString)(pcVar2);
    *(int *)(param_1 + 0x120) = iVar1;
  }
  if (*(byte *)(param_1 + 0x146) != 0) {
    pcVar2 = ButtonSound((uint)*(byte *)(param_1 + 0x146));
    (*g_engfuncs.pfnPrecacheSound)(pcVar2);
    iVar1 = (*g_engfuncs.pfnAllocString)(pcVar2);
    *(int *)(param_1 + 0x128) = iVar1;
  }
  switch(*(undefined1 *)(param_1 + 0x145)) {
  case 1:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_10091364);
    *(int *)(param_1 + 0x124) = iVar1;
    break;
  case 2:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_10091360);
    *(int *)(param_1 + 0x124) = iVar1;
    break;
  case 3:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_1009135c);
    *(int *)(param_1 + 0x124) = iVar1;
    break;
  case 4:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_NFIRE_10091354);
    *(int *)(param_1 + 0x124) = iVar1;
    break;
  case 5:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_NCHEM_1009134c);
    *(int *)(param_1 + 0x124) = iVar1;
    break;
  case 6:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_10091344);
    *(int *)(param_1 + 0x124) = iVar1;
    break;
  case 7:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_1009133c);
    *(int *)(param_1 + 0x124) = iVar1;
    break;
  case 8:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_10091338);
    *(int *)(param_1 + 0x124) = iVar1;
    break;
  case 9:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_10091334);
    *(int *)(param_1 + 0x124) = iVar1;
    break;
  default:
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  switch(*(undefined1 *)(param_1 + 0x147)) {
  case 1:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_10091330);
    *(int *)(param_1 + 300) = iVar1;
    break;
  case 2:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_1009132c);
    *(int *)(param_1 + 300) = iVar1;
    break;
  case 3:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_10091328);
    *(int *)(param_1 + 300) = iVar1;
    break;
  case 4:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_EFIRE_10091320);
    *(int *)(param_1 + 300) = iVar1;
    break;
  case 5:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_ECHEM_10091318);
    *(int *)(param_1 + 300) = iVar1;
    break;
  case 6:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_10091310);
    *(int *)(param_1 + 300) = iVar1;
    break;
  case 7:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_10091308);
    *(int *)(param_1 + 300) = iVar1;
    break;
  case 8:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_10091304);
    *(int *)(param_1 + 300) = iVar1;
    break;
  default:
    *(undefined4 *)(param_1 + 300) = 0;
  }
  if (*(float *)(param_1 + 0xf8) <= 0.0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    return;
  }
  switch(*(undefined4 *)(param_1 + 0xfc)) {
  case 0:
  case 7:
    pcVar2 = s_models_glassgibs_mdl_100927ec;
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustglass1_wav_10092750);
    s = s_debris_bustglass2_wav_10092768;
    break;
  default:
    pcVar2 = s_models_woodgibs_mdl_1009278c;
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustcrate1_wav_10092720);
    s = s_debris_bustcrate2_wav_10092738;
    break;
  case 2:
    pcVar2 = s_models_metalplategibs_mdl_100927d0;
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustmetal1_wav_100926f0);
    s = s_debris_bustmetal2_wav_10092708;
    break;
  case 4:
    pcVar2 = s_models_cindergibs_mdl_100927b8;
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustconcrete1_wav_10092688);
    s = s_debris_bustconcrete2_wav_100926a4;
    break;
  case 5:
    pcVar2 = s_models_ceilinggibs_mdl_100927a0;
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustceiling_wav_10092670);
    goto LAB_1001494a;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark5_wav_1009137c);
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark6_wav_10091368);
    pcVar2 = s_models_computergibs_mdl_10092804;
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustmetal1_wav_100926f0);
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustmetal2_wav_10092708);
    goto LAB_1001494a;
  }
  (*g_engfuncs.pfnPrecacheSound)(s);
LAB_1001494a:
  CBreakable::MaterialSoundPrecache(*(undefined4 *)(param_1 + 0xfc));
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(pcVar2);
  *(int *)(param_1 + 0x100) = iVar1;
  return;
}

/* 10014a30  CBaseDoor::DoorTouch  (296 bytes)
 * void DoorTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CBaseDoor::DoorTouch(class CBaseEntity *) */

void __thiscall CBaseDoor::DoorTouch(CBaseDoor *this,CBaseEntity *param_1)

{
  float fVar1;
  entvars_t *peVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
                    /* 0x14a30  37  ?DoorTouch@CBaseDoor@@QAEXPAVCBaseEntity@@@Z */
  iVar4 = 7;
  bVar7 = true;
  pcVar5 = gpGlobals->pStringBase + **(int **)(param_1 + 4);
  pcVar6 = s_player_100915d0;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar7 = *pcVar5 == *pcVar6;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    if (*(int *)&this->field_0xec != 0) {
      iVar4 = UTIL_IsMasterTriggered(*(int *)&this->field_0xec,param_1);
      if (iVar4 == 0) {
        PlayLockSounds((int)this->pev,(int *)&this->field_0x120,1,0.0);
      }
    }
    if (this->pev->targetname != 0) {
      PlayLockSounds((int)this->pev,(int *)&this->field_0x120,1,0.0);
      return;
    }
    EHANDLE::operator=((EHANDLE *)&this->field_0xc4,(int)param_1);
    iVar4 = *(int *)(param_1 + 4);
    peVar2 = this->pev;
    fVar3 = peVar2->speed;
    if (SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
             *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
             *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20)) <= peVar2->speed) {
      fVar1 = peVar2->speed;
    }
    else {
      fVar1 = SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
                   *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                   *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20));
    }
    peVar2->speed = fVar1;
    iVar4 = DoorActivate(this);
    if (iVar4 != 0) {
      *(undefined4 *)&this->field_0x14 = 0;
    }
    this->pev->speed = fVar3;
  }
  return;
}

/* 10014b60  CBaseDoor::Use  (54 bytes)
 * undefined Use()
 */
void __thiscall CBaseDoor::Use(CBaseDoor *param_1,int param_2)

{
  EHANDLE::operator=((EHANDLE *)&param_1->field_0xc4,param_2);
  if ((*(int *)&param_1->field_0x70 == 1) ||
     (((param_1->pev->spawnflags & 0x20) != 0 && (*(int *)&param_1->field_0x70 == 0)))) {
    DoorActivate(param_1);
  }
  return;
}

/* 10014ba0  CBaseDoor::DoorActivate  (219 bytes)
 * undefined4 DoorActivate(CBaseDoor * param_1)
 * called by: CBaseDoor::DoorTouch, CBaseDoor::Use
 */
undefined4 __fastcall CBaseDoor::DoorActivate(CBaseDoor *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined3 extraout_var;
  int *piVar5;
  
  if (param_1->field_0x11c != '\0') {
    return 0;
  }
  if ((char)param_1->pev->effects < '\0') {
    return 0;
  }
  puVar1 = &param_1->field_0xc4;
  uVar3 = FUN_1000c1d0((uint *)puVar1);
  iVar4 = UTIL_IsMasterTriggered(*(int *)&param_1->field_0xec,uVar3);
  if (iVar4 == 0) {
    return 0;
  }
  if (((param_1->pev->spawnflags & 0x20) != 0) && (*(int *)&param_1->field_0x70 == 0)) {
    DoorGoDown(param_1);
    return 1;
  }
  bVar2 = FUN_1000c210((uint *)puVar1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    piVar5 = (int *)FUN_1000c220((uint *)puVar1);
    iVar4 = (**(code **)(*piVar5 + 0xa8))();
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_1000c220((uint *)puVar1);
      (**(code **)(*piVar5 + 0x3c))((float)(byte)param_1->field_0x11d,0);
    }
  }
  PlayLockSounds((int)param_1->pev,(int *)&param_1->field_0x120,0,0.0);
  DoorGoUp(param_1);
  return 1;
}

/* 10014c80  CBaseDoor::DoorGoUp  (512 bytes)
 * void DoorGoUp(void)
 * called by: CBaseDoor::Blocked, CBaseDoor::DoorActivate
 */
/* public: void __thiscall CBaseDoor::DoorGoUp(void) */

void __thiscall CBaseDoor::DoorGoUp(CBaseDoor *this)

{
  entvars_t *peVar1;
  undefined3 extraout_var;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  float in_stack_ffffffbc;
  float in_stack_ffffffc0;
  float in_stack_ffffffc4;
  float fVar6;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_c;
  
                    /* 0x14c80  34  ?DoorGoUp@CBaseDoor@@QAEXXZ */
  peVar1 = this->pev;
  if (-1 < peVar1->spawnflags) {
    in_stack_ffffffc4 = 0.0;
    in_stack_ffffffc0 = 0.8;
    in_stack_ffffffbc = 1.0;
    EMIT_SOUND_DYN(gpGlobals->pStringBase + peVar1->noise1,peVar1->pContainingEntity,6,
                   gpGlobals->pStringBase + peVar1->noise1,0x3f800000,0x3f4ccccd,0,100);
  }
  *(undefined4 *)&this->field_0x70 = 2;
  *(code **)&this->field_0xcc = DoorHitTop;
  iVar2 = 0x13;
  bVar5 = true;
  pcVar3 = gpGlobals->pStringBase + this->pev->classname;
  pcVar4 = s_func_door_rotating_10092988;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    local_28 = 1.0;
    bVar5 = FUN_1000c210((uint *)&this->field_0xc4);
    if (CONCAT31(extraout_var,bVar5) != 0) {
      iVar2 = FUN_1000c220((uint *)&this->field_0xc4);
      peVar1 = this->pev;
      iVar2 = *(int *)(iVar2 + 4);
      if (((peVar1->spawnflags & 0x10) == 0) && (peVar1->movedir[1] != 0.0)) {
        local_18 = *(float *)(iVar2 + 8) - peVar1->origin[0];
        local_14 = *(float *)(iVar2 + 0xc) - peVar1->origin[1];
        fVar6 = SQRT(*(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28) +
                     *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
                     *(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20));
        if (fVar6 == 0.0) {
          local_24 = 0.0;
          local_20 = 0.0;
          local_1c = 0x3f800000;
        }
        else {
          fVar6 = 1.0 / fVar6;
          in_stack_ffffffc4 = fVar6 * *(float *)(iVar2 + 0x24);
          in_stack_ffffffc0 = fVar6 * *(float *)(iVar2 + 0x20);
          in_stack_ffffffbc = 2.550072e-29;
          FUN_1000c5f0(&local_24,in_stack_ffffffc0,in_stack_ffffffc4,
                       fVar6 * *(float *)(iVar2 + 0x28));
        }
        local_c = local_24 * 10.0 + *(float *)(iVar2 + 8);
        if (local_18 * ((local_20 * 10.0 + *(float *)(iVar2 + 0xc)) - this->pev->origin[1]) -
            (local_c - this->pev->origin[0]) * local_14 < 0.0) {
          local_28 = -1.0;
        }
      }
    }
    fVar6 = this->pev->speed;
    FUN_10014e80(&this->field_0xb0,(float *)&stack0xffffffbc,local_28);
    CBaseToggle::AngularMove
              ((CBaseToggle *)this,in_stack_ffffffbc,in_stack_ffffffc0,in_stack_ffffffc4,fVar6);
    return;
  }
  fVar6 = this->pev->speed;
  FUN_1000a540(&stack0xffffffbc,(undefined4 *)&this->field_0x98);
  CBaseToggle::LinearMove
            ((CBaseToggle *)this,in_stack_ffffffbc,in_stack_ffffffc0,in_stack_ffffffc4,fVar6);
  return;
}

/* 10014eb0  CBaseDoor::DoorHitTop  (289 bytes)
 * void DoorHitTop(void)
 */
/* public: void __thiscall CBaseDoor::DoorHitTop(void) */

void __thiscall CBaseDoor::DoorHitTop(CBaseDoor *this)

{
  entvars_t *peVar1;
  undefined4 uVar2;
  int *piVar3;
  CBaseDoor *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
                    /* 0x14eb0  36  ?DoorHitTop@CBaseDoor@@QAEXXZ */
  peVar1 = this->pev;
  if (-1 < peVar1->spawnflags) {
    EMIT_SOUND_DYN(gpGlobals->pStringBase + peVar1->noise1,peVar1->pContainingEntity,6,
                   gpGlobals->pStringBase + peVar1->noise1,0,0,0x20,100);
    EMIT_SOUND_DYN(gpGlobals->pStringBase + this->pev->noise2,this->pev->pContainingEntity,6,
                   gpGlobals->pStringBase + this->pev->noise2,0x3f800000,0x3f4ccccd,0,100);
  }
  peVar1 = this->pev;
  *(undefined4 *)&this->field_0x70 = 0;
  if ((peVar1->spawnflags & 0x20U) == 0) {
    peVar1->nextthink = peVar1->ltime + *(float *)&this->field_0x7c;
    *(code **)&this->field_0x10 = DoorGoDown;
    if (*(int *)&this->field_0x7c == -0x40800000) {
      this->pev->nextthink = -1.0;
    }
  }
  else if ((peVar1->spawnflags & 0x100U) == 0) {
    *(code **)&this->field_0x14 = DoorTouch;
  }
  if ((this->pev->netname != 0) && ((this->pev->spawnflags & 1) != 0)) {
    uVar6 = 0;
    uVar5 = 3;
    pCVar4 = this;
    uVar2 = FUN_1000c1d0((uint *)&this->field_0xc4);
    FireTargets((int)(gpGlobals->pStringBase + this->pev->netname),uVar2,pCVar4,uVar5,uVar6);
  }
  uVar5 = 0;
  uVar2 = 3;
  piVar3 = (int *)FUN_1000c1d0((uint *)&this->field_0xc4);
  CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar3,uVar2,uVar5);
  return;
}

/* 10014fe0  CBaseDoor::DoorGoDown  (185 bytes)
 * void DoorGoDown(void)
 * called by: CBaseDoor::Blocked, CBaseDoor::DoorActivate
 */
/* public: void __thiscall CBaseDoor::DoorGoDown(void) */

void __thiscall CBaseDoor::DoorGoDown(CBaseDoor *this)

{
  entvars_t *peVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  float in_stack_ffffffe4;
  float in_stack_ffffffe8;
  float in_stack_ffffffec;
  float fVar6;
  
                    /* 0x14fe0  33  ?DoorGoDown@CBaseDoor@@QAEXXZ */
  peVar1 = this->pev;
  if (-1 < peVar1->spawnflags) {
    in_stack_ffffffec = 0.0;
    in_stack_ffffffe8 = 0.8;
    in_stack_ffffffe4 = 1.0;
    EMIT_SOUND_DYN(gpGlobals->pStringBase + peVar1->noise1,peVar1->pContainingEntity,6,
                   gpGlobals->pStringBase + peVar1->noise1,0x3f800000,0x3f4ccccd,0,100);
  }
  *(undefined4 *)&this->field_0x70 = 3;
  *(code **)&this->field_0xcc = DoorHitBottom;
  fVar6 = this->pev->speed;
  iVar2 = 0x13;
  bVar5 = true;
  pcVar3 = gpGlobals->pStringBase + this->pev->classname;
  pcVar4 = s_func_door_rotating_10092988;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    FUN_1000a540(&stack0xffffffe4,(undefined4 *)&this->field_0xa4);
    CBaseToggle::AngularMove
              ((CBaseToggle *)this,in_stack_ffffffe4,in_stack_ffffffe8,in_stack_ffffffec,fVar6);
    return;
  }
  FUN_1000a540(&stack0xffffffe4,(undefined4 *)&this->field_0x8c);
  CBaseToggle::LinearMove
            ((CBaseToggle *)this,in_stack_ffffffe4,in_stack_ffffffe8,in_stack_ffffffec,fVar6);
  return;
}

/* 100150a0  CBaseDoor::DoorHitBottom  (246 bytes)
 * void DoorHitBottom(void)
 */
/* public: void __thiscall CBaseDoor::DoorHitBottom(void) */

void __thiscall CBaseDoor::DoorHitBottom(CBaseDoor *this)

{
  entvars_t *peVar1;
  int *piVar2;
  CBaseDoor *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
                    /* 0x150a0  35  ?DoorHitBottom@CBaseDoor@@QAEXXZ */
  peVar1 = this->pev;
  if (-1 < peVar1->spawnflags) {
    EMIT_SOUND_DYN(gpGlobals->pStringBase + peVar1->noise1,peVar1->pContainingEntity,6,
                   gpGlobals->pStringBase + peVar1->noise1,0,0,0x20,100);
    EMIT_SOUND_DYN(gpGlobals->pStringBase + this->pev->noise2,this->pev->pContainingEntity,6,
                   gpGlobals->pStringBase + this->pev->noise2,0x3f800000,0x3f4ccccd,0,100);
  }
  *(undefined4 *)&this->field_0x70 = 1;
  if ((this->pev->spawnflags & 0x100U) == 0) {
    *(code **)&this->field_0x14 = DoorTouch;
  }
  else {
    *(undefined4 *)&this->field_0x14 = 0;
  }
  uVar5 = 0;
  uVar4 = 3;
  piVar2 = (int *)FUN_1000c1d0((uint *)&this->field_0xc4);
  CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar2,uVar4,uVar5);
  if ((this->pev->netname != 0) && ((this->pev->spawnflags & 1) == 0)) {
    uVar6 = 0;
    uVar5 = 3;
    pCVar3 = this;
    uVar4 = FUN_1000c1d0((uint *)&this->field_0xc4);
    FireTargets((int)(gpGlobals->pStringBase + this->pev->netname),uVar4,pCVar3,uVar5,uVar6);
  }
  return;
}

/* 100151a0  CBaseDoor::Blocked  (579 bytes)
 * undefined Blocked()
 */
void __thiscall CBaseDoor::Blocked(CBaseDoor *param_1,int *param_2)

{
  entvars_t *peVar1;
  entvars_t *peVar2;
  edict_t *peVar3;
  int iVar4;
  CBaseDoor *this;
  vec_t *pvVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  edict_t *peStack_8;
  
  peVar1 = param_1->pev;
  peStack_8 = (edict_t *)0x0;
  if (peVar1->dmg != 0.0) {
    (**(code **)(*param_2 + 0x38))(peVar1,peVar1,peVar1->dmg,1);
  }
  if (0.0 <= *(float *)&param_1->field_0x7c) {
    if (*(int *)&param_1->field_0x70 == 3) {
      DoorGoUp(param_1);
    }
    else {
      DoorGoDown(param_1);
    }
  }
  if (param_1->pev->targetname == 0) {
    return;
  }
LAB_10015218:
  do {
    peStack_8 = (*g_engfuncs.pfnFindEntityByString)
                          (peStack_8,s_targetname_100915e4,
                           gpGlobals->pStringBase + param_1->pev->targetname);
    peVar3 = peStack_8;
    if (peStack_8 != (edict_t *)0x0) {
      peVar3 = (edict_t *)&peStack_8->v;
    }
  } while (peVar3 == (edict_t *)param_1->pev);
  if (peStack_8 == (edict_t *)0x0) {
    return;
  }
  iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peStack_8);
  if (iVar4 == 0) {
    return;
  }
  peVar1 = &peStack_8->v;
  iVar4 = 10;
  bVar8 = true;
  pcVar6 = gpGlobals->pStringBase + peVar1->classname;
  pcVar7 = s_func_door_1009299c;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar8 = *pcVar6 == *pcVar7;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (!bVar8) goto code_r0x10015297;
  goto LAB_100152af;
code_r0x10015297:
  iVar4 = 0x13;
  bVar8 = true;
  pcVar6 = gpGlobals->pStringBase + peVar1->classname;
  pcVar7 = s_func_door_rotating_10092988;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar8 = *pcVar6 == *pcVar7;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
LAB_100152af:
    this = (CBaseDoor *)GetClassPtr<CBaseDoor>((int)peVar1);
    if (0.0 <= *(float *)&this->field_0x7c) {
      peVar1 = param_1->pev;
      peVar2 = this->pev;
      if ((((peVar2->velocity[0] == peVar1->velocity[0]) &&
           (peVar2->velocity[1] == peVar1->velocity[1])) &&
          (peVar2->velocity[2] == peVar1->velocity[2])) &&
         (((peVar2->avelocity[0] == peVar1->velocity[0] &&
           (peVar2->avelocity[1] == peVar1->velocity[1])) &&
          (peVar2->avelocity[2] == peVar1->velocity[2])))) {
        iVar4 = 10;
        bVar8 = true;
        pcVar6 = gpGlobals->pStringBase + (peStack_8->v).classname;
        pcVar7 = s_func_door_1009299c;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar8 = *pcVar6 == *pcVar7;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        } while (bVar8);
        if (bVar8) {
          peVar2->origin[0] = peVar1->origin[0];
          peVar2->origin[1] = peVar1->origin[1];
          peVar2->origin[2] = peVar1->origin[2];
          pvVar5 = this->pev->velocity;
        }
        else {
          peVar2->angles[0] = peVar1->angles[0];
          peVar2->angles[1] = peVar1->angles[1];
          peVar2->angles[2] = peVar1->angles[2];
          pvVar5 = this->pev->avelocity;
        }
        *pvVar5 = DAT_1009f4a8;
        pvVar5[1] = DAT_1009f4ac;
        pvVar5[2] = DAT_1009f4b0;
      }
      if (*(int *)&this->field_0x70 == 3) {
        DoorGoUp(this);
      }
      else {
        DoorGoDown(this);
      }
    }
  }
  goto LAB_10015218;
}

/* 10015d50  CBaseDoor::ObjectCaps  (16 bytes)
 * undefined ObjectCaps()
 */
uint __fastcall CBaseDoor::ObjectCaps(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 4) + 0x1a0) >> 5 & 8;
}

