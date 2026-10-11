/* mp.dll - unnamed_1002d1d0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002d1d0  FUN_1002d1d0  (32 bytes)
 * undefined FUN_1002d1d0()
 */
undefined4 * __thiscall FUN_1002d1d0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_1008f1a4;
  if ((param_2 & 1) != 0) {
    FUN_1007dd7f(param_1);
  }
  return param_1;
}

/* 1002d5c0  FUN_1002d5c0  (33 bytes)
 * int FUN_1002d5c0(int param_1, int param_2)
 * called by: CFuncTrackTrain::DeadEnd, CPathTrack::LookAhead
 */
int FUN_1002d5c0(int param_1,int param_2)

{
  if ((param_1 == 0) || ((param_2 != 0 && ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0)))) {
    param_1 = 0;
  }
  return param_1;
}

/* 1002d5f0  FUN_1002d5f0  (290 bytes)
 * undefined FUN_1002d5f0(int param_1, int param_2, float * param_3, float param_4)
 * called by: CPathTrack::LookAhead
 */
void FUN_1002d5f0(int param_1,int param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  Vector local_24;
  float local_18;
  float local_14;
  float local_10;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar3 = *(int *)(param_2 + 4);
    iVar4 = *(int *)(param_1 + 4);
    local_18 = *(float *)(iVar3 + 8) - *(float *)(iVar4 + 8);
    local_24.y = *(float *)(iVar3 + 0xc) - *(float *)(iVar4 + 0xc);
    local_10 = *(float *)(iVar3 + 0x10) - *(float *)(iVar4 + 0x10);
    fVar1 = SQRT(local_18 * local_18 + local_24.y * local_24.y + local_10 * local_10);
    if (fVar1 == 0.0) {
      local_24.z = 1.0;
      local_24.x = 0.0;
      local_24.y = 0.0;
    }
    else {
      fVar1 = 1.0 / fVar1;
      local_18 = fVar1 * local_18;
      local_14 = fVar1 * local_24.y;
      local_10 = local_10 * fVar1;
      Vector::Vector(&local_24,&local_18);
    }
    iVar3 = *(int *)(param_2 + 4);
    fVar1 = *(float *)(iVar3 + 0xc);
    fVar2 = *(float *)(iVar3 + 0x10);
    *param_3 = local_24.x * param_4 + *(float *)(iVar3 + 8);
    param_3[1] = local_24.y * param_4 + fVar1;
    param_3[2] = local_24.z * param_4 + fVar2;
  }
  return;
}

/* 1002d740  FUN_1002d740  (30 bytes)
 * int FUN_1002d740(int param_1)
 * called by: CFuncTrackTrain::DeadEnd, CPathTrack::LookAhead
 */
int __fastcall FUN_1002d740(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 100);
  if (((iVar2 == 0) || (uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0x1a0), (uVar1 & 0x8000) == 0)) ||
     ((uVar1 & 4) == 0)) {
    iVar2 = *(int *)(param_1 + 0x60);
  }
  return iVar2;
}

/* 1002d760  FUN_1002d760  (100 bytes)
 * undefined FUN_1002d760(int param_1)
 * called by: CPathTrack::Link
 */
void __thiscall FUN_1002d760(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  if (param_1 != 0) {
    pbVar4 = (byte *)(gpGlobals->pStringBase + *(int *)((int)this + 0x58));
    pbVar2 = (byte *)(gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1cc));
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_1002d7b1:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_1002d7b6;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_1002d7b1;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_1002d7b6:
    if (iVar3 != 0) {
      *(int *)((int)this + 0x60) = param_1;
    }
  }
  return;
}

/* 1002dcb0  FUN_1002dcb0  (105 bytes)
 * undefined4 FUN_1002dcb0(int param_1)
 * called by: CFuncTrackChange::Find, CFuncTrackTrain::Find, CPathTrack::Link
 */
undefined4 __cdecl FUN_1002dcb0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  
  if (param_1 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(param_1 + 0x80);
  }
  pcVar5 = s_path_track_100a010c;
  pbVar2 = (byte *)(gpGlobals->pStringBase + *piVar4);
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1002dd01:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1002dd06;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1002dd01;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002dd06:
  if ((iVar3 == 0) && (param_1 != 0)) {
    return *(undefined4 *)(param_1 + 0x7c);
  }
  return 0;
}

/* 1002e6d0  FUN_1002e6d0  (346 bytes)
 * undefined FUN_1002e6d0(int param_1)
 * called by: PlatSpawnInsideTrigger
 */
void __thiscall FUN_1002e6d0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  *(int *)((int)this + 0x54) = param_1;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x108) = 0;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
  iVar1 = *(int *)((int)this + 0x54);
  local_24 = *(float *)(*(int *)(iVar1 + 4) + 0xdc) + 25.0;
  local_20 = *(float *)(*(int *)(iVar1 + 4) + 0xe0) + 25.0;
  iVar2 = *(int *)(iVar1 + 4);
  local_18 = *(float *)(iVar2 + 0xe8) + 25.0;
  local_8 = *(float *)(iVar2 + 0xec) + 25.0;
  local_10 = *(float *)(iVar2 + 0xf0) + 8.0;
  local_1c = local_10 - ((*(float *)(iVar1 + 0x94) - *(float *)(iVar1 + 0xa0)) + 8.0);
  iVar2 = *(int *)(iVar1 + 4);
  if (*(float *)(iVar2 + 0xf4) <= 50.0) {
    local_24 = (*(float *)(iVar2 + 0xe8) + *(float *)(iVar2 + 0xdc)) * 0.5;
    local_18 = local_24 + 1.0;
  }
  iVar1 = *(int *)(iVar1 + 4);
  local_14 = local_8;
  if (*(float *)(iVar1 + 0xf8) <= 50.0) {
    local_20 = (*(float *)(iVar1 + 0xec) + *(float *)(iVar1 + 0xe0)) * 0.5;
    local_14 = local_20 + 1.0;
  }
  local_4 = local_10;
  UTIL_SetSize(*(int *)((int)this + 4),&local_24,&local_18);
  return;
}

/* 1002e830  FUN_1002e830  (156 bytes)
 * undefined FUN_1002e830()
 */
void __thiscall FUN_1002e830(int param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  pcVar5 = s_player_1009c678;
  pbVar3 = (byte *)(gpGlobals->pStringBase + *(int *)param_2[1]);
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1002e87a:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1002e87f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1002e87a;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1002e87f:
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*param_2 + 0xac))();
    if (iVar4 != 0) {
      piVar2 = *(int **)(param_1 + 0x54);
      if (piVar2[0x1c] == 1) {
        (**(code **)(*piVar2 + 0x114))();
        return;
      }
      if (piVar2[0x1c] == 0) {
        *(float *)(piVar2[1] + 0x104) = *(float *)(piVar2[1] + 0x100) + 1.0;
      }
    }
  }
  return;
}

/* 100300b0  FUN_100300b0  (338 bytes)
 * undefined FUN_100300b0(int param_1)
 * called by: CFuncTrackTrain::Find, CFuncTrackTrain::Next
 */
void __fastcall FUN_100300b0(int param_1)

{
  byte bVar1;
  int iVar2;
  void *this;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iparam2;
  int bparam1;
  int bparam2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(iVar2 + 0x1e8) != 0) {
    lVar4 = __ftol();
    uVar3 = (int)(uint)lVar4 >> 0x1f;
    if (*(int *)(param_1 + 0x84) == 0) {
      EMIT_SOUND_DYN((void *)((int)((((uint)lVar4 ^ uVar3) - uVar3) * 0x8c) / 1000 + 0x3c),
                     *(undefined4 *)(iVar2 + 0x208),3,s_plats_ttrain_start1_wav_100a071c,
                     *(undefined4 *)(param_1 + 0x8c),0x3f4ccccd,0);
      iVar2 = *(int *)(param_1 + 4);
      __ftol();
      this = *(void **)(iVar2 + 0x208);
      EMIT_SOUND_DYN(this,this,6,gpGlobals->pStringBase + *(int *)(iVar2 + 0x1e8),
                     *(undefined4 *)(param_1 + 0x8c),0x3f4ccccd,0);
      *(undefined4 *)(param_1 + 0x84) = 1;
      return;
    }
    bparam2 = 0;
    bparam1 = 0;
    iparam2 = 0;
    lVar4 = __ftol();
    bVar1 = *(byte *)(param_1 + 0x88);
    lVar5 = __ftol();
    (*g_engfuncs.pfnPlaybackEvent)
              (10,*(edict_t **)(iVar2 + 0x208),*(ushort *)(param_1 + 0x98),0.0,
               (float *)&DAT_100ae498,(float *)&DAT_100ae498,0.0,0.0,
               ((ushort)lVar4 & 0x3f | (bVar1 & 7) << 6) << 6 | (uint)lVar5 & 0x3f,iparam2,bparam1,
               bparam2);
  }
  return;
}

/* 10030800  FUN_10030800  (44 bytes)
 * undefined FUN_10030800(float * param_1)
 * called by: CFuncTrackTrain::Next
 */
void __cdecl FUN_10030800(float *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_10030830(*param_1);
  *param_1 = (float)fVar1;
  fVar1 = (float10)FUN_10030830(param_1[1]);
  param_1[1] = (float)fVar1;
  fVar1 = (float10)FUN_10030830(param_1[2]);
  param_1[2] = (float)fVar1;
  return;
}

/* 10030830  FUN_10030830  (69 bytes)
 * undefined FUN_10030830(float param_1)
 * called by: FUN_10030800
 */
void __cdecl FUN_10030830(float param_1)

{
  for (; param_1 < 0.0; param_1 = param_1 + 360.0) {
  }
  for (; 360.0 < param_1; param_1 = param_1 - 360.0) {
  }
  return;
}

/* 100309b0  FUN_100309b0  (202 bytes)
 * undefined FUN_100309b0(int param_1)
 * called by: CFuncTrainControls::Find
 */
void __thiscall FUN_100309b0(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = *(int *)((int)this + 4);
  fVar4 = *(float *)(param_1 + 8) - *(float *)(iVar3 + 0x14);
  fVar5 = *(float *)(param_1 + 0xc) - *(float *)(iVar3 + 0x18);
  fVar6 = *(float *)(param_1 + 0x10) - *(float *)(iVar3 + 0x1c);
  fVar1 = *(float *)(param_1 + 0xe0);
  fVar2 = *(float *)(param_1 + 0xe4);
  *(float *)((int)this + 0x6c) = fVar4 + *(float *)(param_1 + 0xdc);
  *(float *)((int)this + 0x70) = fVar5 + fVar1;
  *(float *)((int)this + 0x74) = fVar6 + fVar2;
  fVar1 = *(float *)(param_1 + 0xec);
  fVar2 = *(float *)(param_1 + 0xf0);
  *(float *)((int)this + 0x78) = fVar4 + *(float *)(param_1 + 0xe8);
  *(float *)((int)this + 0x7c) = fVar5 + fVar1;
  *(float *)((int)this + 0x80) = fVar6 + fVar2;
  return;
}

/* 10030fa0  FUN_10030fa0  (105 bytes)
 * undefined4 FUN_10030fa0(int param_1)
 * called by: CFuncTrackChange::Find, CFuncTrainControls::Find
 */
undefined4 __cdecl FUN_10030fa0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  
  if (param_1 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(param_1 + 0x80);
  }
  pcVar5 = s_func_tracktrain_100a0818;
  pbVar2 = (byte *)(gpGlobals->pStringBase + *piVar4);
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_10030ff1:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_10030ff6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_10030ff1;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10030ff6:
  if ((iVar3 == 0) && (param_1 != 0)) {
    return *(undefined4 *)(param_1 + 0x7c);
  }
  return 0;
}

/* 10032750  FUN_10032750  (76 bytes)
 * undefined FUN_10032750(int param_1)
 * called by: PlatSpawnInsideTrigger
 */
void __cdecl FUN_10032750(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &PTR_DeathNotice_1008f614;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10032a60  FUN_10032a60  (9 bytes)
 * undefined FUN_10032a60(undefined4 * param_1)
 * called by: GetClassPtr<CFuncTrackAuto>
 */
void __fastcall FUN_10032a60(undefined4 *param_1)

{
  *param_1 = &CBaseEntity::vftable;
  return;
}

/* 10033050  FUN_10033050  (262 bytes)
 * undefined FUN_10033050(int param_1)
 * called by: CBasePlayer::PlayerDeathThink, CBasePlayer::StartObserver, CHalfLifeMultiplay::ClientDisconnected, CStripWeapons::Use
 */
void __thiscall FUN_10033050(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uStack00000008;
  int local_4;
  
  if (*(int *)((int)this + 0x9fc) != 0) {
    CBasePlayer::ResetAutoaim((int)this);
    (**(code **)(**(int **)((int)this + 0x9fc) + 0x128))(0);
    *(undefined4 *)((int)this + 0x9fc) = 0;
  }
  *(undefined4 *)((int)this + 0xa04) = 0;
  piVar3 = (int *)((int)this + 0x9e4);
  local_4 = 6;
  do {
    iVar2 = *piVar3;
    *(int *)((int)this + 0x9fc) = iVar2;
    while (iVar2 != 0) {
      iVar2 = (*(int **)((int)this + 0x9fc))[0x1d];
      (**(code **)(**(int **)((int)this + 0x9fc) + 0x138))();
      *(int *)((int)this + 0x9fc) = iVar2;
    }
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined4 *)((int)this + 0x9fc) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0xbc) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0xc0) = 0;
  if (param_1 == 0) {
    puVar1 = (uint *)(*(int *)((int)this + 4) + 0x168);
    *puVar1 = *puVar1 & 0x80000000;
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 4) + 0x168) = 0;
  }
  puVar4 = (undefined4 *)((int)this + 0xa0c);
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  (**(code **)(*(int *)this + 0x164))();
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100d96f0,(float *)0x0,*(edict_t **)(*(int *)((int)this + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnWriteByte)(0);
  uStack00000008 = 0x1003314f;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 100346e0  FUN_100346e0  (31 bytes)
 * undefined4 FUN_100346e0(int param_1)
 * called by: CBasePlayer::PlayerDeathThink
 */
undefined4 __fastcall FUN_100346e0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x9e4);
  do {
    if (*piVar2 != 0) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 6);
  return 0;
}

/* 10034720  FUN_10034720  (205 bytes)
 * undefined FUN_10034720(int param_1)
 * called by: CBasePlayer::ImpulseCommands
 */
void __thiscall FUN_10034720(void *this,int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  void *this_00;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  fVar2 = *(float *)(param_1 + 0x10);
  iVar3 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar3 + 0xc) = uVar1;
  *(float *)(iVar3 + 0x10) = fVar2 + 32.0;
  iVar3 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x198) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x130) = 0;
  *(float *)(*(int *)((int)this + 4) + 0x104) = gpGlobals->time + 0.1;
  this_00 = *(void **)(*(int *)((int)this + 4) + 0x208);
  EMIT_SOUND_DYN(this_00,this_00,2,s_player_sprayer_wav_1009d4ac,0x3f800000,0x3f4ccccd,0);
  return;
}

/* 100347f0  FUN_100347f0  (332 bytes)
 * undefined FUN_100347f0()
 */
void __fastcall FUN_100347f0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [56];
  
  if ((*(int *)(param_1[1] + 0x198) == 0) ||
     (iVar2 = *(int *)(*(int *)(param_1[1] + 0x198) + 0x7c), iVar2 == 0)) {
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_10035960(iVar2);
  }
  iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1[1] + 0x198));
  UTIL_MakeVectors(param_1[1] + 0x50);
  iVar5 = param_1[1];
  fStack_50 = gpGlobals->v_forward[0] * 128.0 + *(float *)(iVar5 + 8);
  fStack_4c = gpGlobals->v_forward[1] * 128.0 + *(float *)(iVar5 + 0xc);
  fStack_48 = gpGlobals->v_forward[2] * 128.0 + *(float *)(iVar5 + 0x10);
  fStack_40 = fStack_4c;
  fStack_3c = fStack_48;
  UTIL_TraceLine((float *)(iVar5 + 8),&fStack_50,1,*(undefined4 *)(iVar5 + 0x198),auStack_38);
  if (iVar2 == -1) {
    FUN_100775d0((int)auStack_38,10);
    UTIL_Remove(param_1);
  }
  else {
    iVar5 = 1;
    lVar4 = __ftol();
    FUN_100776e0((int)auStack_38,iVar3,(int)lVar4,iVar5);
    iVar5 = param_1[1];
    fVar1 = *(float *)(iVar5 + 0x130);
    *(float *)(iVar5 + 0x130) = *(float *)(iVar5 + 0x130) + 1.0;
    if ((float)(iVar2 + -1) <= fVar1) {
      UTIL_Remove(param_1);
    }
  }
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 10034940  FUN_10034940  (156 bytes)
 * undefined FUN_10034940(int param_1)
 * called by: CBasePlayer::CheatImpulseCommands
 */
void __thiscall FUN_10034940(void *this,int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  fVar2 = *(float *)(param_1 + 0x10);
  iVar3 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar3 + 0xc) = uVar1;
  *(float *)(iVar3 + 0x10) = fVar2 + 32.0;
  iVar3 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x198) = *(undefined4 *)(param_1 + 0x208);
  *(code **)((int)this + 0x10) = FUN_100349e0;
  *(float *)(*(int *)((int)this + 4) + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 100349e0  FUN_100349e0  (200 bytes)
 * undefined FUN_100349e0()
 */
void __fastcall FUN_100349e0(int param_1)

{
  int iVar1;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [56];
  
  if (DAT_100ae4a8 != 1) {
    UTIL_MakeVectors(*(int *)(param_1 + 4) + 0x50);
    iVar1 = *(int *)(param_1 + 4);
    fStack_50 = gpGlobals->v_forward[0] * 128.0 + *(float *)(iVar1 + 8);
    fStack_4c = gpGlobals->v_forward[1] * 128.0 + *(float *)(iVar1 + 0xc);
    fStack_48 = gpGlobals->v_forward[2] * 128.0 + *(float *)(iVar1 + 0x10);
    fStack_40 = fStack_4c;
    fStack_3c = fStack_48;
    UTIL_TraceLine((float *)(iVar1 + 8),&fStack_50,1,*(undefined4 *)(iVar1 + 0x198),auStack_38);
    FUN_10077580((int)auStack_38,0xf7);
  }
  *(code **)(param_1 + 0x10) = CBaseEntity::SUB_Remove;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 10034b50  FUN_10034b50  (307 bytes)
 * undefined4 FUN_10034b50(int param_1)
 * called by: CBasePlayer::CheatImpulseCommands
 */
void * __cdecl FUN_10034b50(int param_1)

{
  int iVar1;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  undefined1 local_38 [16];
  float local_28;
  edict_t *local_8;
  
  UTIL_MakeVectors(*(int *)(param_1 + 4) + 0x74);
  iVar1 = *(int *)(param_1 + 4);
  local_50 = *(float *)(iVar1 + 8) + *(float *)(iVar1 + 0x174) + gpGlobals->v_forward[0] * 8192.0;
  local_4c = *(float *)(iVar1 + 0x178) + *(float *)(iVar1 + 0xc) + gpGlobals->v_forward[1] * 8192.0;
  local_48 = *(float *)(iVar1 + 0x17c) + *(float *)(iVar1 + 0x10) + gpGlobals->v_forward[2] * 8192.0
  ;
  local_5c = *(float *)(iVar1 + 8) + *(float *)(iVar1 + 0x174);
  local_58 = *(float *)(iVar1 + 0xc) + *(float *)(iVar1 + 0x178);
  local_54 = *(float *)(iVar1 + 0x10) + *(float *)(iVar1 + 0x17c);
  local_40 = local_58;
  local_3c = local_54;
  UTIL_TraceLine(&local_5c,&local_50,0,*(undefined4 *)(iVar1 + 0x208),local_38);
  if (((local_28 != 1.0) && (local_8 != (edict_t *)0x0)) &&
     (iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(local_8), iVar1 != 0)) {
    if ((local_8 == (edict_t *)0x0) &&
       (local_8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), local_8 == (edict_t *)0x0)) {
      return (void *)0;
    }
    return local_8->pvPrivateData;
  }
  return (void *)0;
}

/* 10035720  FUN_10035720  (140 bytes)
 * undefined FUN_10035720(int * param_1)
 * called by: CBasePlayer::PostThink
 */
void __fastcall FUN_10035720(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_1000e440((uint *)(param_1 + 0x26c));
  if ((CONCAT31(extraout_var,bVar1) == 0) &&
     (((((float)param_1[0x46] <= 0.0 || (iVar2 = param_1[0x27f], iVar2 == 0)) ||
       (*(int *)(iVar2 + 0xbc) == 0)) ||
      ((((*(byte *)(param_1[1] + 0x180) & 0x40) != 0 &&
        (*(int *)(*(int *)(iVar2 + 0xbc) + 0xc) == 1)) &&
       (*(int *)(*(int *)(iVar2 + 0xc0) + 0x10) != 0)))))) {
    (**(code **)(*param_1 + 0x168))();
    if ((int *)param_1[0x27f] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x27f] + 0x134))();
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,32000);
      param_1[0x1f6] = iVar2;
    }
  }
  return;
}

/* 100357b0  FUN_100357b0  (24 bytes)
 * undefined4 FUN_100357b0(int param_1)
 * called by: CBasePlayer::TabulateAmmo, FUN_100268d0
 */
undefined4 __thiscall FUN_100357b0(void *this,int param_1)

{
  if (param_1 == -1) {
    return 0xffffffff;
  }
  return *(undefined4 *)((int)this + param_1 * 4 + 0xa0c);
}

/* 100357d0  FUN_100357d0  (66 bytes)
 * int FUN_100357d0(byte.conflict * param_1)
 * called by: CBasePlayer::GiveAmmo, CBasePlayer::TabulateAmmo, CBasePlayerWeapon::AddToPlayer, FUN_100268d0
 */
int __thiscall FUN_100357d0(void *this,byte_conflict *param_1)

{
  uint uVar1;
  void *extraout_ECX;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 != (byte_conflict *)0x0) {
    iVar3 = 1;
    puVar2 = &DAT_102eed20;
    do {
      if ((byte_conflict *)*puVar2 != (byte_conflict *)0x0) {
        uVar1 = FUN_100887b0(this,param_1,(byte_conflict *)*puVar2);
        this = extraout_ECX;
        if (uVar1 == 0) {
          return iVar3;
        }
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while ((int)puVar2 < 0x102eee18);
  }
  return -1;
}

/* 10035870  FUN_10035870  (41 bytes)
 * undefined FUN_10035870(int param_1)
 * called by: CBasePlayer::Killed, CBasePlayer::Spawn, CTriggerCamera::FollowTarget, CTriggerCamera::Use
 */
void __thiscall FUN_10035870(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (param_1 == 0) {
    *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) | 0x1000;
    return;
  }
  *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) & 0xffffefff;
  return;
}

/* 10035960  FUN_10035960  (7 bytes)
 * undefined4 FUN_10035960(int param_1)
 * called by: FUN_100347f0
 */
undefined4 __fastcall FUN_10035960(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb2c);
}

/* 10035970  FUN_10035970  (132 bytes)
 * undefined4 FUN_10035970(int * param_1)
 * called by: FUN_10026a30, FUN_1007a3b0
 */
undefined4 __thiscall FUN_10035970(void *this,int *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar2 = (**(code **)(*param_1 + 0x154))();
  iVar2 = *(int *)((int)this + iVar2 * 4 + 0x9e4);
  if (iVar2 != 0) {
    do {
      pbVar3 = (byte *)(gpGlobals->pStringBase + **(int **)(iVar2 + 4));
      pbVar5 = (byte *)(gpGlobals->pStringBase + *(int *)param_1[1]);
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_100359cf:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_100359d4;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_100359cf;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_100359d4:
      if (iVar4 == 0) {
        return 1;
      }
      iVar2 = *(int *)(iVar2 + 0x74);
    } while (iVar2 != 0);
  }
  return 0;
}

/* 10035a00  FUN_10035a00  (80 bytes)
 * undefined4 FUN_10035a00(int * param_1)
 * called by: CBasePlayer::AddPlayerItem, FUN_1002be80
 */
undefined4 __thiscall FUN_10035a00(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x11c))();
  if (iVar1 == 0) {
    return 0;
  }
  CBasePlayer::ResetAutoaim((int)this);
  if (*(int **)((int)this + 0x9fc) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x9fc) + 0x128))(0);
  }
  *(int **)((int)this + 0x9fc) = param_1;
  (**(code **)(*param_1 + 0x120))();
  return 1;
}

/* 100360b0  FUN_100360b0  (76 bytes)
 * undefined FUN_100360b0(int param_1)
 * called by: CBasePlayer::ImpulseCommands
 */
void __cdecl FUN_100360b0(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &PTR_DeathNotice_10090054;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10036100  FUN_10036100  (76 bytes)
 * undefined FUN_10036100(int param_1)
 * called by: CBasePlayer::CheatImpulseCommands
 */
void __cdecl FUN_10036100(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &PTR_DeathNotice_10090160;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100362a0  FUN_100362a0  (247 bytes)
 * undefined FUN_100362a0(float * param_1, float * param_2, float * param_3, float * param_4)
 * called by: FUN_10038c50, FUN_10039360, FUN_1003a2d0, PM_PlayerMove
 */
void __cdecl FUN_100362a0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar6 = (float10)fsin((float10)param_1[1] * (float10)0.017453292519943295);
  fVar1 = (float)fVar6;
  fVar6 = (float10)fcos((float10)param_1[1] * (float10)0.017453292519943295);
  fVar7 = (float10)fsin((float10)*param_1 * (float10)0.017453292519943295);
  fVar2 = (float)fVar7;
  fVar7 = (float10)fcos((float10)*param_1 * (float10)0.017453292519943295);
  fVar3 = (float)fVar7;
  fVar7 = (float10)fsin((float10)param_1[2] * (float10)0.017453292519943295);
  fVar4 = (float)fVar7;
  fVar7 = (float10)fcos((float10)param_1[2] * (float10)0.017453292519943295);
  fVar5 = (float)fVar7;
  if (param_2 != (float *)0x0) {
    *param_2 = (float)((float10)fVar3 * fVar6);
    param_2[1] = fVar3 * fVar1;
    param_2[2] = -fVar2;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = (float)((float10)fVar5 * (float10)fVar1 - (float10)fVar4 * (float10)fVar2 * fVar6);
    param_3[1] = (float)(((float10)fVar5 * fVar6 + (float10)fVar4 * (float10)fVar2 * (float10)fVar1)
                        * (float10)-1.0);
    param_3[2] = fVar4 * fVar3 * -1.0;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = (float)((float10)fVar4 * (float10)fVar1 + (float10)fVar5 * (float10)fVar2 * fVar6);
    param_4[1] = (float)((float10)fVar5 * (float10)fVar2 * (float10)fVar1 - (float10)fVar4 * fVar6);
    param_4[2] = fVar5 * fVar3;
    return;
  }
  return;
}

/* 100363a0  FUN_100363a0  (45 bytes)
 * undefined4 FUN_100363a0(int param_1, float * param_2)
 * called by: FUN_10039990
 */
undefined4 __cdecl FUN_100363a0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1 - (int)param_2;
  do {
    if (*(float *)(iVar2 + (int)param_2) != *param_2) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 < 3);
  return 1;
}

/* 100363d0  FUN_100363d0  (49 bytes)
 * undefined FUN_100363d0(float * param_1, float param_2, float * param_3, float * param_4)
 * called by: FUN_10038100, FUN_10038570, FUN_10038c50, FUN_10038d20, FUN_10039360, FUN_10039ca0, FUN_10039dc0
 */
void __cdecl FUN_100363d0(float *param_1,float param_2,float *param_3,float *param_4)

{
  *param_4 = param_2 * *param_3 + *param_1;
  param_4[1] = param_2 * param_3[1] + param_1[1];
  param_4[2] = param_2 * param_3[2] + param_1[2];
  return;
}

/* 10036410  FUN_10036410  (59 bytes)
 * undefined FUN_10036410(float * param_1, float * param_2, float * param_3)
 * called by: FUN_100378a0, FUN_10039360
 */
void __cdecl FUN_10036410(float *param_1,float *param_2,float *param_3)

{
  *param_3 = param_2[2] * param_1[1] - param_1[2] * param_2[1];
  param_3[1] = param_1[2] * *param_2 - *param_1 * param_2[2];
  param_3[2] = *param_1 * param_2[1] - *param_2 * param_1[1];
  return;
}

/* 10036450  FUN_10036450  (34 bytes)
 * float10 FUN_10036450(float * param_1)
 * called by: FUN_10036930, FUN_10037230, FUN_10038d20, FUN_10039d50, FUN_10064a00, FUN_10065a00
 */
float10 __cdecl FUN_10036450(float *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)0.0;
  iVar2 = 3;
  do {
    fVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
    fVar3 = (float10)fVar1 * (float10)fVar1 + fVar3;
  } while (iVar2 != 0);
  return SQRT(fVar3);
}

/* 10036480  FUN_10036480  (78 bytes)
 * undefined FUN_10036480(float * param_1)
 * called by: FUN_10038100, FUN_10038410, FUN_10038d20, FUN_10039360, FUN_10039ca0, FUN_10039dc0, FUN_1003a370, FUN_10064f40, FUN_10065a00
 */
void __cdecl FUN_10036480(float *param_1)

{
  float fVar1;
  
  fVar1 = SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  if (fVar1 != 0.0) {
    fVar1 = 1.0 / fVar1;
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
  }
  return;
}

/* 100364d0  FUN_100364d0  (37 bytes)
 * undefined FUN_100364d0(float * param_1, float param_2, float * param_3)
 * called by: FUN_100378a0, FUN_10038100, FUN_10038410, FUN_10038d20, FUN_10039360, FUN_10039990, FUN_10039d50, FUN_1003a370, FUN_10064f40, FUN_10065a00
 */
void __cdecl FUN_100364d0(float *param_1,float param_2,float *param_3)

{
  *param_3 = param_2 * *param_1;
  param_3[1] = param_2 * param_1[1];
  param_3[2] = param_2 * param_1[2];
  return;
}

/* 10036500  FUN_10036500  (180 bytes)
 * undefined FUN_10036500(int param_1, int param_2)
 * called by: FUN_100365c0
 */
void __cdecl FUN_10036500(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char local_10 [16];
  
  uVar3 = 0xffffffff;
  pcVar5 = (char *)(&DAT_100af31c + param_1 * 4);
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = local_10;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar2 = (&DAT_100b331c)[param_1];
  uVar3 = 0xffffffff;
  pcVar5 = (char *)(&DAT_100af31c + param_2 * 4);
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = (char *)(&DAT_100af31c + param_1 * 4);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  (&DAT_100b331c)[param_1] = (&DAT_100b331c)[param_2];
  uVar3 = 0xffffffff;
  pcVar5 = local_10;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  (&DAT_100b331c)[param_2] = uVar2;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = (char *)(&DAT_100af31c + param_2 * 4);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return;
}

/* 100365c0  FUN_100365c0  (101 bytes)
 * undefined FUN_100365c0(void * param_1)
 * called by: FUN_10036630
 */
void __fastcall FUN_100365c0(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  byte_conflict *pbVar4;
  int iVar5;
  int iVar6;
  byte_conflict *local_4;
  
  if (0 < DAT_100b3724) {
    local_4 = (byte_conflict *)&DAT_100af31c;
    iVar3 = DAT_100b3724;
    iVar6 = 0;
    do {
      iVar1 = iVar6 + 1;
      iVar5 = iVar1;
      pbVar4 = local_4;
      if (iVar1 < iVar3) {
        do {
          uVar2 = FUN_100887b0(param_1,local_4,pbVar4 + 0x10);
          param_1 = extraout_ECX;
          if (0 < (int)uVar2) {
            FUN_10036500(iVar6,iVar5);
            param_1 = extraout_ECX_00;
          }
          iVar5 = iVar5 + 1;
          iVar3 = DAT_100b3724;
          pbVar4 = pbVar4 + 0x10;
        } while (iVar5 < DAT_100b3724);
      }
      local_4 = local_4 + 0x10;
      iVar6 = iVar1;
    } while (iVar1 < iVar3);
  }
  return;
}

/* 10036630  FUN_10036630  (661 bytes)
 * undefined FUN_10036630(void)
 * called by: pfnPM_Init
 */
void FUN_10036630(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  undefined *puVar6;
  undefined *this;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *this_00;
  uint uVar7;
  undefined *extraout_ECX_04;
  void *extraout_ECX_05;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 uStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  char local_200 [512];
  
  if (DAT_100b372c == 0) {
    puVar10 = &DAT_100af31c;
    for (iVar5 = 0x1000; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    puVar10 = (undefined4 *)&DAT_100b331c;
    for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    pcVar9 = local_200;
    for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9 = pcVar9 + 4;
    }
    DAT_100b3724 = 0;
    uVar2 = (**(code **)(DAT_100b3720 + 0x4f5a0))(s_sound_materials_txt_100a13cc);
    uStack_204 = uVar2;
    iVar5 = (**(code **)(DAT_100b3720 + 0x4f5a4))(s_sound_materials_txt_100a13cc,5,0);
    if (iVar5 != 0) {
      uStack_20c = 0;
      iStack_208 = iVar5;
      iVar3 = (**(code **)(DAT_100b3720 + 0x4f5ac))(iVar5,uVar2,&uStack_20c,local_200,0x1ff);
      this = extraout_ECX;
      while ((iVar3 != 0 && (DAT_100b3724 < 0x400))) {
        iVar3 = 0;
        puVar6 = PTR_DAT_100a8118;
        cVar1 = local_200[0];
        while (PTR_DAT_100a8118 = puVar6, cVar1 != '\0') {
          if (DAT_100a8324 < 2) {
            uVar4 = (byte)puVar6[local_200[iVar3] * 2] & 8;
          }
          else {
            uVar4 = FUN_1007e1c6(this,(int)local_200[iVar3],8);
            puVar6 = extraout_ECX_00;
          }
          this = puVar6;
          if (uVar4 == 0) break;
          iVar8 = iVar3 + 1;
          iVar3 = iVar3 + 1;
          puVar6 = PTR_DAT_100a8118;
          cVar1 = local_200[iVar8];
        }
        cVar1 = local_200[iVar3];
        if ((cVar1 != '\0') && (cVar1 != '/')) {
          if (DAT_100a8324 < 2) {
            uVar4 = *(ushort *)(PTR_DAT_100a8118 + cVar1 * 2) & 0x103;
          }
          else {
            uVar4 = FUN_1007e1c6(this,(int)cVar1,0x103);
          }
          if (uVar4 != 0) {
            uVar4 = FUN_1007e08b((int)local_200[iVar3]);
            (&DAT_100b331c)[DAT_100b3724] = (char)uVar4;
            cVar1 = local_200[iVar3 + 1];
            this_00 = extraout_ECX_01;
            while (iVar8 = iVar3 + 1, cVar1 != '\0') {
              if (DAT_100a8324 < 2) {
                this_00 = (void *)(int)cVar1;
                uVar4 = (byte)PTR_DAT_100a8118[(int)this_00 * 2] & 8;
              }
              else {
                uVar4 = FUN_1007e1c6(this_00,(int)cVar1,8);
                this_00 = extraout_ECX_02;
              }
              if (uVar4 == 0) break;
              cVar1 = local_200[iVar3 + 2];
              iVar3 = iVar8;
            }
            if (local_200[iVar3 + 1] != '\0') {
              do {
                if (DAT_100a8324 < 2) {
                  this_00 = (void *)(int)local_200[iVar8];
                  uVar4 = (byte)PTR_DAT_100a8118[(int)this_00 * 2] & 8;
                }
                else {
                  uVar4 = FUN_1007e1c6(this_00,(int)local_200[iVar8],8);
                  this_00 = extraout_ECX_03;
                }
              } while ((uVar4 == 0) &&
                      (iVar5 = iVar8 + 1, iVar8 = iVar8 + 1, local_200[iVar5] != '\0'));
              iVar5 = iStack_208;
              if (local_200[iVar8] != '\0') {
                if (iVar3 + 0x10 <= iVar8) {
                  iVar8 = iVar3 + 0x10;
                }
                uVar4 = 0xffffffff;
                local_200[iVar8] = '\0';
                iVar8 = DAT_100b3724 * 4;
                DAT_100b3724 = DAT_100b3724 + 1;
                pcVar9 = local_200 + iVar3 + 1;
                do {
                  pcVar11 = pcVar9;
                  if (uVar4 == 0) break;
                  uVar4 = uVar4 - 1;
                  pcVar11 = pcVar9 + 1;
                  cVar1 = *pcVar9;
                  pcVar9 = pcVar11;
                } while (cVar1 != '\0');
                uVar4 = ~uVar4;
                pcVar9 = pcVar11 + -uVar4;
                pcVar11 = (char *)(&DAT_100af31c + iVar8);
                for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
                  pcVar9 = pcVar9 + 4;
                  pcVar11 = pcVar11 + 4;
                }
                for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *pcVar11 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                  pcVar11 = pcVar11 + 1;
                }
              }
            }
          }
        }
        iVar3 = (**(code **)(DAT_100b3720 + 0x4f5ac))(iVar5,uStack_204,&uStack_20c,local_200,0x1ff);
        this = extraout_ECX_04;
      }
      (**(code **)(DAT_100b3720 + 0x4f5a8))(iVar5);
      FUN_100365c0(extraout_ECX_05);
      DAT_100b372c = 1;
    }
  }
  return;
}

/* 10036930  FUN_10036930  (1733 bytes)
 * undefined FUN_10036930(undefined4 param_1, undefined4 param_2)
 * called by: FUN_10037230, FUN_1003a030, FUN_100651b0
 */
void __cdecl FUN_10036930(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  float10 fVar4;
  float fStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(uint *)(DAT_100b3720 + 0x98) = (uint)(*(int *)(DAT_100b3720 + 0x98) == 0);
  if (*(int *)(DAT_100b3720 + 0x4f5b0) != 0) {
    iVar2 = (**(code **)(DAT_100b3720 + 0x4f588))(0,1);
    uVar1 = iVar2 + *(int *)(DAT_100b3720 + 0x98) * 2;
    if (((*(uint *)(DAT_100b3720 + 0x208) & 1) == 0) &&
       ((*(uint *)(DAT_100b3720 + 0x208) & 0x200) == 0)) {
      fStack_c = *(float *)(DAT_100b3720 + 0x5c);
      uStack_8 = *(undefined4 *)(DAT_100b3720 + 0x60);
      uStack_4 = 0;
      if ((*(int *)(DAT_100b3720 + 8) == 0) ||
         ((DAT_100b3728 != 0 || (fVar4 = FUN_10036450(&fStack_c), (float10)220.0 < fVar4)))) {
        switch(param_1) {
        case 1:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_metal1_wav_1009d42c,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_metal3_wav_1009d3fc,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_metal2_wav_1009d414,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_metal4_wav_1009d3e4,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 2:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_dirt1_wav_1009d3d0,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_dirt3_wav_1009d3a8,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_dirt2_wav_1009d3bc,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_dirt4_wav_1009d394,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 3:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_duct1_wav_1009d380,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_duct3_wav_1009d358,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_duct2_wav_1009d36c,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_duct4_wav_1009d344,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 4:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_grate1_wav_1009d32c,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_grate3_wav_1009d2fc,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_grate2_wav_1009d314,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_grate4_wav_1009d2e4,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 5:
          iVar2 = (**(code **)(DAT_100b3720 + 0x4f588))(0,4);
          if ((iVar2 == 0) || (uVar1 < 5)) {
            switch(uVar1) {
            case 0:
              (**(code **)(DAT_100b3720 + 0x4f5b4))
                        (4,s_player_pl_tile1_wav_1009d270,param_2,0x3fa00000,0,100);
              return;
            case 1:
              (**(code **)(DAT_100b3720 + 0x4f5b4))
                        (4,s_player_pl_tile3_wav_1009d248,param_2,0x3fa00000,0,100);
              return;
            case 2:
              (**(code **)(DAT_100b3720 + 0x4f5b4))
                        (4,s_player_pl_tile2_wav_1009d25c,param_2,0x3fa00000,0,100);
              return;
            case 3:
              (**(code **)(DAT_100b3720 + 0x4f5b4))
                        (4,s_player_pl_tile4_wav_1009d234,param_2,0x3fa00000,0,100);
              return;
            default:
              (**(code **)(DAT_100b3720 + 0x4f5b4))
                        (4,s_player_pl_tile5_wav_1009d220,param_2,0x3fa00000,0,100);
              return;
            }
          }
          break;
        case 6:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_slosh1_wav_1009d2cc,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_slosh3_wav_1009d29c,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_slosh2_wav_1009d2b4,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_slosh4_wav_1009d284,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 7:
          if (DAT_100b3730 == 0) {
            DAT_100b3730 = 1;
            return;
          }
          bVar3 = DAT_100b3730 == 3;
          DAT_100b3730 = DAT_100b3730 + 1;
          if (bVar3) {
            DAT_100b3730 = 0;
          }
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_wade1_wav_1009d15c,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_wade2_wav_1009d148,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_wade3_wav_1009d134,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_wade4_wav_1009d120,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 8:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_ladder1_wav_1009d1b8,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_ladder3_wav_1009d188,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_ladder2_wav_1009d1a0,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_ladder4_wav_1009d170,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        default:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_step1_wav_1009d480,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_step3_wav_1009d458,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_step2_wav_1009d46c,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100b3720 + 0x4f5b4))
                      (4,s_player_pl_step4_wav_1009d444,param_2,0x3fa00000,0,100);
          }
        }
      }
    }
  }
  return;
}

/* 100370b0  FUN_100370b0  (67 bytes)
 * undefined4 FUN_100370b0(undefined1 param_1)
 * called by: FUN_10037230, FUN_1003a030, FUN_100651b0
 */
undefined4 __cdecl FUN_100370b0(undefined1 param_1)

{
  switch(param_1) {
  case 0x44:
    return 2;
  default:
    return 0;
  case 0x47:
    return 4;
  case 0x4d:
    return 1;
  case 0x53:
    return 6;
  case 0x54:
    return 5;
  case 0x56:
    return 3;
  }
}

/* 10037130  FUN_10037130  (250 bytes)
 * undefined FUN_10037130(void)
 * called by: FUN_10037230
 */
void FUN_10037130(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *(undefined4 *)(DAT_100b3720 + 0x38);
  local_8 = *(undefined4 *)(DAT_100b3720 + 0x3c);
  local_4 = *(undefined4 *)(DAT_100b3720 + 0x40);
  local_18 = *(undefined4 *)(DAT_100b3720 + 0x38);
  local_14 = *(undefined4 *)(DAT_100b3720 + 0x3c);
  local_10 = *(float *)(DAT_100b3720 + 0x40) - 64.0;
  *(undefined1 *)(DAT_100b3720 + 0xf0) = 0;
  *(undefined1 *)(DAT_100b3720 + 0x1f0) = 0x43;
  pcVar2 = (char *)(**(code **)(DAT_100b3720 + 0x4f5b8))
                             (*(undefined4 *)(DAT_100b3720 + 0xe0),&local_c,&local_18);
  if (pcVar2 != (char *)0x0) {
    if ((*pcVar2 == '-') || (*pcVar2 == '+')) {
      pcVar2 = pcVar2 + 2;
    }
    cVar1 = *pcVar2;
    if ((((cVar1 == '{') || (cVar1 == '!')) || (cVar1 == '~')) || (cVar1 == ' ')) {
      pcVar2 = pcVar2 + 1;
    }
    uVar3 = 0xffffffff;
    do {
      pcVar5 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar2 = pcVar5 + -uVar3;
    pcVar5 = (char *)(DAT_100b3720 + 0xf0);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar5 = pcVar5 + 1;
    }
    *(undefined1 *)(DAT_100b3720 + 0xff) = 0;
    cVar1 = pfnPM_FindTextureType((char *)(DAT_100b3720 + 0xf0));
    *(char *)(DAT_100b3720 + 0x1f0) = cVar1;
  }
  return;
}

/* 10037230  FUN_10037230  (806 bytes)
 * undefined FUN_10037230(void)
 * called by: FUN_1003a030, PM_PlayerMove
 */
void FUN_10037230(void)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  longlong lVar8;
  float local_28;
  float local_20;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  if (0 < *(int *)(DAT_100b3720 + 0x94)) {
    return;
  }
  if ((*(uint *)(DAT_100b3720 + 0xb8) & 0x1000) != 0) {
    return;
  }
  FUN_10037130();
  fVar6 = FUN_10036450((float *)(DAT_100b3720 + 0x5c));
  bVar5 = *(int *)(DAT_100b3720 + 0xdc) == 5;
  if (((*(uint *)(DAT_100b3720 + 0xb8) & 0x4000) != 0) || (bVar5)) {
    local_28 = 60.0;
    local_20 = 80.0;
    if (bVar5) goto LAB_100372d3;
  }
  else {
    local_28 = 120.0;
    local_20 = 210.0;
  }
  if (*(int *)(DAT_100b3720 + 0xe0) == -1) {
    return;
  }
LAB_100372d3:
  fVar7 = FUN_10036450((float *)(DAT_100b3720 + 0x5c));
  if (((float10)0.0 < fVar7) && ((local_28 <= (float)fVar6 || (*(int *)(DAT_100b3720 + 0x94) == 0)))
     ) {
    bVar1 = (float)fVar6 < local_20;
    local_18 = *(undefined4 *)(DAT_100b3720 + 0x38);
    local_14 = *(undefined4 *)(DAT_100b3720 + 0x3c);
    local_c = *(undefined4 *)(DAT_100b3720 + 0x38);
    local_8 = *(undefined4 *)(DAT_100b3720 + 0x3c);
    fVar2 = *(float *)(DAT_100b3720 + 0x4f52c + *(int *)(DAT_100b3720 + 0xbc) * 0xc) -
            *(float *)(DAT_100b3720 + 0x4f4fc + *(int *)(DAT_100b3720 + 0xbc) * 0xc);
    local_10 = *(float *)(DAT_100b3720 + 0x40) - fVar2 * 0.3;
    local_4 = *(float *)(DAT_100b3720 + 0x40) - fVar2 * 0.5;
    if (bVar5) {
      uVar4 = 8;
      local_28 = 0.35;
      *(undefined4 *)(DAT_100b3720 + 0x94) = 0x15e;
    }
    else {
      iVar3 = (**(code **)(DAT_100b3720 + 0x4f574))(&local_18,0);
      if (iVar3 == -3) {
        uVar4 = 7;
        local_28 = 0.65;
        *(undefined4 *)(DAT_100b3720 + 0x94) = 600;
      }
      else {
        iVar3 = (**(code **)(DAT_100b3720 + 0x4f574))(&local_c,0);
        if (iVar3 == -3) {
          uVar4 = 6;
          if (bVar1) {
            local_28 = 0.2;
          }
          else {
            local_28 = 0.5;
          }
          *(uint *)(DAT_100b3720 + 0x94) = (-(uint)bVar1 & 100) + 300;
        }
        else {
          uVar4 = FUN_100370b0(*(undefined1 *)(DAT_100b3720 + 0x1f0));
          switch(*(undefined1 *)(DAT_100b3720 + 0x1f0)) {
          case 0x44:
            if (bVar1) {
              local_28 = 0.25;
            }
            else {
              local_28 = 0.55;
            }
            break;
          default:
            if (bVar1) {
              local_28 = 0.2;
            }
            else {
              local_28 = 0.5;
            }
            break;
          case 0x56:
            if (bVar1) {
              local_28 = 0.4;
            }
            else {
              local_28 = 0.7;
            }
          }
          *(uint *)(DAT_100b3720 + 0x94) = (-(uint)bVar1 & 100) + 300;
        }
      }
    }
    iVar3 = DAT_100b3720;
    lVar8 = __ftol();
    *(int *)(iVar3 + 0x94) = (int)lVar8;
    iVar3 = DAT_100b3720;
    lVar8 = __ftol();
    *(int *)(iVar3 + 0x94) = (int)lVar8;
    if ((*(uint *)(DAT_100b3720 + 0xb8) & 0x4000) != 0) {
      local_28 = local_28 * 0.35;
    }
    FUN_10036930(uVar4,local_28);
  }
  return;
}

/* 10037720  FUN_10037720  (159 bytes)
 * byte.conflict FUN_10037720(float * param_1, float * param_2, float * param_3, float param_4)
 * called by: FUN_100378a0, FUN_10039990
 */
byte_conflict __cdecl FUN_10037720(float *param_1,float *param_2,float *param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  
  bVar10 = 0.0 < param_2[2];
  if (param_2[2] == 0.0) {
    bVar10 = bVar10 | 2;
  }
  iVar11 = 3;
  fVar2 = param_1[1];
  fVar3 = param_2[1];
  fVar4 = param_1[2];
  fVar5 = param_2[2];
  fVar6 = *param_1;
  fVar7 = *param_2;
  iVar9 = (int)param_2 - (int)param_3;
  do {
    pfVar1 = (float *)(iVar9 + (int)param_3);
    fVar8 = *(float *)((int)pfVar1 + ((int)param_1 - (int)param_2)) -
            (fVar6 * fVar7 + fVar4 * fVar5 + fVar2 * fVar3) * param_4 * *pfVar1;
    *param_3 = fVar8;
    if ((-0.1 < fVar8) && (fVar8 < 0.1)) {
      *param_3 = 0.0;
    }
    param_3 = param_3 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return bVar10;
}

/* 100377c0  FUN_100377c0  (121 bytes)
 * undefined FUN_100377c0(void)
 * called by: PM_PlayerMove
 */
void FUN_100377c0(void)

{
  float fVar1;
  
  if (*(float *)(DAT_100b3720 + 0xcc) == 0.0) {
    if (*(float *)(DAT_100b3720 + 0xc0) == 0.0) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = *(float *)(DAT_100b3720 + 0xc0);
    }
    *(float *)(DAT_100b3720 + 100) =
         *(float *)(DAT_100b3720 + 100) -
         fVar1 * **(float **)(DAT_100b3720 + 0x4f4f0) * *(float *)(DAT_100b3720 + 0x10) * 0.5;
    *(float *)(DAT_100b3720 + 100) =
         *(float *)(DAT_100b3720 + 0x7c) * *(float *)(DAT_100b3720 + 0x10) +
         *(float *)(DAT_100b3720 + 100);
    *(undefined4 *)(DAT_100b3720 + 0x7c) = 0;
    PM_CheckVelocity();
    return;
  }
  return;
}

/* 10037840  FUN_10037840  (93 bytes)
 * undefined FUN_10037840(void)
 * called by: FUN_10064a00, FUN_10064e60, FUN_10064ef0, FUN_10064f40, FUN_100651b0, PM_PlayerMove
 */
void FUN_10037840(void)

{
  float fVar1;
  
  if (*(float *)(DAT_100b3720 + 0xcc) == 0.0) {
    if (*(float *)(DAT_100b3720 + 0xc0) == 0.0) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = *(float *)(DAT_100b3720 + 0xc0);
    }
    *(float *)(DAT_100b3720 + 100) =
         *(float *)(DAT_100b3720 + 100) -
         **(float **)(DAT_100b3720 + 0x4f4f0) * *(float *)(DAT_100b3720 + 0x10) * fVar1 * 0.5;
    PM_CheckVelocity();
    return;
  }
  return;
}

/* 100378a0  FUN_100378a0  (1245 bytes)
 * uint FUN_100378a0(void)
 * called by: FUN_10038100, FUN_10038410, FUN_10065a00, PM_PlayerMove
 */
uint FUN_100378a0(void)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int aiStackY_168 [12];
  undefined4 uStackY_138;
  undefined1 *puStackY_134;
  uint local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  float local_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  int aiStack_d0 [4];
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float local_8c [18];
  undefined1 local_44 [68];
  
  iVar5 = 0;
  local_108 = *(float *)(DAT_100b3720 + 0x5c);
  local_104 = *(undefined4 *)(DAT_100b3720 + 0x60);
  local_100 = *(undefined4 *)(DAT_100b3720 + 100);
  local_e8 = *(float *)(DAT_100b3720 + 0x5c);
  local_e4 = *(float *)(DAT_100b3720 + 0x60);
  local_e0 = *(float *)(DAT_100b3720 + 100);
  local_10c = *(float *)(DAT_100b3720 + 0x10);
  local_110 = 0;
  local_fc = 0.0;
  local_ec = 0;
  do {
    if (((*(float *)(DAT_100b3720 + 0x5c) == 0.0) && (*(float *)(DAT_100b3720 + 0x60) == 0.0)) &&
       (*(float *)(DAT_100b3720 + 100) == 0.0)) break;
    iVar6 = 3;
    pfVar1 = (float *)(DAT_100b3720 + 0x38);
    pfVar3 = local_8c;
    do {
      iVar6 = iVar6 + -1;
      *pfVar3 = local_10c * pfVar1[9] + *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar3 = pfVar3 + 1;
    } while (iVar6 != 0);
    puStackY_134 = local_44;
    uStackY_138 = 0x10037965;
    piVar2 = (int *)(**(code **)(DAT_100b3720 + 0x4f580))();
    piVar7 = aiStack_d0;
    for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar7 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar7 = piVar7 + 1;
    }
    local_fc = fStack_c0 + local_fc;
    if (aiStack_d0[0] != 0) {
      *(undefined4 *)(DAT_100b3720 + 0x5c) = DAT_100aee7c;
      *(undefined4 *)(DAT_100b3720 + 0x60) = DAT_100aee80;
      *(undefined4 *)(DAT_100b3720 + 100) = DAT_100aee84;
      return 4;
    }
    iVar6 = iVar5;
    if (0.0 < fStack_c0) {
      *(undefined4 *)(DAT_100b3720 + 0x38) = uStack_bc;
      *(undefined4 *)(DAT_100b3720 + 0x3c) = uStack_b8;
      *(undefined4 *)(DAT_100b3720 + 0x40) = uStack_b4;
      local_108 = *(float *)(DAT_100b3720 + 0x5c);
      local_104 = *(undefined4 *)(DAT_100b3720 + 0x60);
      local_100 = *(undefined4 *)(DAT_100b3720 + 100);
      iVar6 = 0;
    }
    if (fStack_c0 == 1.0) break;
    piVar2 = aiStack_d0;
    piVar7 = aiStackY_168;
    for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar7 = piVar7 + 1;
    }
    PM_AddToTouched();
    if (0.7 < fStack_a8) {
      local_110 = local_110 | 1;
    }
    if (fStack_a8 == 0.0) {
      local_110 = local_110 | 2;
    }
    local_10c = local_10c - fStack_c0 * local_10c;
    if (4 < iVar6) {
      *(undefined4 *)(DAT_100b3720 + 0x5c) = DAT_100aee7c;
      *(undefined4 *)(DAT_100b3720 + 0x60) = DAT_100aee80;
      *(undefined4 *)(DAT_100b3720 + 100) = DAT_100aee84;
      break;
    }
    iVar5 = iVar6 + 1;
    local_8c[iVar6 * 3 + 3] = fStack_b0;
    local_8c[iVar6 * 3 + 4] = fStack_ac;
    local_8c[iVar6 * 3 + 5] = fStack_a8;
    if ((*(int *)(DAT_100b3720 + 0xdc) != 3) ||
       ((*(int *)(DAT_100b3720 + 0xe0) != -1 && (*(int *)(DAT_100b3720 + 0xc4) == 0x3f800000)))) {
      iVar6 = 0;
      if (0 < iVar5) {
        pfVar1 = local_8c;
        do {
          pfVar1 = pfVar1 + 3;
          puStackY_134 = (undefined1 *)0x10037bb2;
          FUN_10037720(&local_108,pfVar1,(float *)(DAT_100b3720 + 0x5c),1.0);
          iVar4 = 0;
          pfVar3 = local_8c + 4;
          do {
            if ((iVar4 != iVar6) &&
               (*(float *)(DAT_100b3720 + 0x60) * *pfVar3 +
                pfVar3[-1] * *(float *)(DAT_100b3720 + 0x5c) +
                pfVar3[1] * *(float *)(DAT_100b3720 + 100) < 0.0)) break;
            iVar4 = iVar4 + 1;
            pfVar3 = pfVar3 + 3;
          } while (iVar4 < iVar5);
          if (iVar4 == iVar5) break;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar5);
      }
      if (iVar6 == iVar5) {
        if (iVar5 == 2) {
          FUN_10036410(local_8c + 3,local_8c + 6,&fStack_dc);
          FUN_100364d0(&fStack_dc,
                       fStack_dc * *(float *)(DAT_100b3720 + 0x5c) +
                       fStack_d8 * *(float *)(DAT_100b3720 + 0x60) +
                       fStack_d4 * *(float *)(DAT_100b3720 + 100),(float *)(DAT_100b3720 + 0x5c));
          goto LAB_10037c60;
        }
      }
      else {
LAB_10037c60:
        if (0.0 < local_e8 * *(float *)(DAT_100b3720 + 0x5c) +
                  local_e4 * *(float *)(DAT_100b3720 + 0x60) +
                  local_e0 * *(float *)(DAT_100b3720 + 100)) goto LAB_10037c8a;
      }
      *(undefined4 *)(DAT_100b3720 + 0x5c) = DAT_100aee7c;
      *(undefined4 *)(DAT_100b3720 + 0x60) = DAT_100aee80;
      *(undefined4 *)(DAT_100b3720 + 100) = DAT_100aee84;
      break;
    }
    if (0 < iVar5) {
      pfVar1 = local_8c;
      iVar6 = iVar5;
      do {
        pfVar1 = pfVar1 + 3;
        if (pfVar1[2] <= 0.7) {
          puStackY_134 = (undefined1 *)0x10037b3f;
          FUN_10037720(&local_108,pfVar1,&fStack_f8,
                       (1.0 - *(float *)(DAT_100b3720 + 0xc4)) * 0.01 + 1.0);
        }
        else {
          puStackY_134 = (undefined1 *)0x10037af6;
          FUN_10037720(&local_108,pfVar1,&fStack_f8,1.0);
          local_108 = fStack_f8;
          local_104 = uStack_f4;
          local_100 = uStack_f0;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(float *)(DAT_100b3720 + 0x5c) = fStack_f8;
    *(undefined4 *)(DAT_100b3720 + 0x60) = uStack_f4;
    *(undefined4 *)(DAT_100b3720 + 100) = uStack_f0;
    local_100 = uStack_f0;
    local_108 = fStack_f8;
    local_104 = uStack_f4;
LAB_10037c8a:
    local_ec = local_ec + 1;
  } while (local_ec < 4);
  if (local_fc == 0.0) {
    *(undefined4 *)(DAT_100b3720 + 0x5c) = DAT_100aee7c;
    *(undefined4 *)(DAT_100b3720 + 0x60) = DAT_100aee80;
    *(undefined4 *)(DAT_100b3720 + 100) = DAT_100aee84;
  }
  return local_110;
}

/* 10037d80  FUN_10037d80  (53 bytes)
 * float10 FUN_10037d80(float param_1)
 * called by: FUN_10037dc0
 */
float10 __cdecl FUN_10037d80(float param_1)

{
  if (param_1 < 330.0) {
    return ((float10)param_1 - (float10)210.0) * (float10)0.008333334 * (float10)0.5 + (float10)0.6;
  }
  return (float10)1.1;
}

/* 10037dc0  FUN_10037dc0  (214 bytes)
 * undefined FUN_10037dc0(float * param_1, float param_2, float param_3)
 * called by: FUN_10065a00
 */
void __cdecl FUN_10037dc0(float *param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (((*(int *)(DAT_100b3720 + 0xd0) == 0) && (*(float *)(DAT_100b3720 + 0xcc) == 0.0)) &&
     (fVar1 = param_2 - (*(float *)(DAT_100b3720 + 0x5c) * *param_1 +
                        *(float *)(DAT_100b3720 + 0x60) * param_1[1] +
                        *(float *)(DAT_100b3720 + 100) * param_1[2]), 0.0 < fVar1)) {
    fVar4 = (float10)*(float *)(DAT_100b3720 + 0xc4) * (float10)*(float *)(DAT_100b3720 + 0x10) *
            (float10)param_2 * (float10)param_3;
    if (((*(byte *)(DAT_100b3720 + 0x208) & 0x20) == 0) &&
       ((*(uint *)(DAT_100b3720 + 0xb8) & 0x4000) == 0)) {
      fVar5 = FUN_10037d80(*(float *)(DAT_100b3720 + 500));
      fVar4 = fVar5 * (float10)(float)fVar4;
    }
    if ((float10)fVar1 < fVar4) {
      fVar4 = (float10)fVar1;
    }
    iVar2 = 0x5c;
    do {
      iVar3 = iVar2 + 4;
      *(float *)(iVar2 + DAT_100b3720) =
           (float)(fVar4 * (float10)*(float *)((int)param_1 + iVar2 + -0x5c) +
                  (float10)*(float *)(iVar2 + DAT_100b3720));
      iVar2 = iVar3;
    } while (iVar3 < 0x68);
  }
  return;
}

/* 10037ea0  FUN_10037ea0  (412 bytes)
 * undefined FUN_10037ea0(void)
 * called by: PM_PlayerMove
 */
void FUN_10037ea0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44 [4];
  float fStack_34;
  
  iVar5 = DAT_100b3720;
  if (*(float *)(DAT_100b3720 + 0xcc) == 0.0) {
    pfVar1 = (float *)(DAT_100b3720 + 0x5c);
    fVar3 = SQRT(*(float *)(DAT_100b3720 + 100) * *(float *)(DAT_100b3720 + 100) +
                 *(float *)(DAT_100b3720 + 0x60) * *(float *)(DAT_100b3720 + 0x60) +
                 *(float *)(DAT_100b3720 + 0x5c) * *(float *)(DAT_100b3720 + 0x5c));
    if (0.1 <= fVar3) {
      fVar2 = 0.0;
      if (*(int *)(DAT_100b3720 + 0xe0) != -1) {
        local_5c = (*pfVar1 / fVar3) * 16.0 + *(float *)(DAT_100b3720 + 0x38);
        local_58 = (*(float *)(DAT_100b3720 + 0x60) / fVar3) * 16.0 +
                   *(float *)(DAT_100b3720 + 0x3c);
        local_54 = *(float *)(DAT_100b3720 + 0x4f4fc + *(int *)(DAT_100b3720 + 0xbc) * 0xc) +
                   *(float *)(DAT_100b3720 + 0x40);
        local_48 = local_54 - 34.0;
        local_50 = local_5c;
        local_4c = local_58;
        puVar6 = (undefined4 *)
                 (**(code **)(DAT_100b3720 + 0x4f580))(local_44,&local_5c,&local_50,0,0xffffffff);
        puVar8 = local_44;
        for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        iVar7 = *(int *)(DAT_100b3720 + 0x4f4f0);
        if (fStack_34 == 1.0) {
          fVar2 = *(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x1c);
        }
        else {
          fVar2 = *(float *)(iVar7 + 0x1c);
        }
        fVar4 = fVar3;
        if (fVar3 < *(float *)(iVar7 + 4)) {
          fVar4 = *(float *)(iVar7 + 4);
        }
        fVar2 = fVar4 * *(float *)(DAT_100b3720 + 0x10) *
                fVar2 * *(float *)(DAT_100b3720 + 0xc4) * 0.75;
      }
      fVar2 = fVar3 - fVar2;
      if (fVar2 < 0.0) {
        fVar2 = 0.0;
      }
      fVar2 = fVar2 / fVar3;
      fVar3 = *(float *)(iVar5 + 0x60);
      fVar4 = *(float *)(iVar5 + 100);
      *(float *)(DAT_100b3720 + 0x5c) = fVar2 * *pfVar1;
      *(float *)(DAT_100b3720 + 0x60) = fVar2 * fVar3;
      *(float *)(DAT_100b3720 + 100) = fVar2 * fVar4;
    }
  }
  return;
}

/* 10038040  FUN_10038040  (188 bytes)
 * undefined FUN_10038040(float * param_1, float param_2, float param_3)
 * called by: FUN_10038410
 */
void __cdecl FUN_10038040(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(DAT_100b3720 + 0xd0) == 0) && (*(float *)(DAT_100b3720 + 0xcc) == 0.0)) {
    fVar1 = param_2;
    if (30.0 < param_2) {
      fVar1 = 30.0;
    }
    fVar1 = fVar1 - (*(float *)(DAT_100b3720 + 0x5c) * *param_1 +
                    *(float *)(DAT_100b3720 + 0x60) * param_1[1] +
                    *(float *)(DAT_100b3720 + 100) * param_1[2]);
    if (0.0 < fVar1) {
      fVar2 = *(float *)(DAT_100b3720 + 0xc4) * *(float *)(DAT_100b3720 + 0x10) * param_2 * param_3;
      if (fVar1 < fVar2) {
        fVar2 = fVar1;
      }
      iVar3 = 0x5c;
      do {
        iVar4 = iVar3 + 4;
        *(float *)(iVar3 + DAT_100b3720) =
             fVar2 * *(float *)((int)param_1 + iVar3 + -0x5c) + *(float *)(iVar3 + DAT_100b3720);
        iVar3 = iVar4;
      } while (iVar4 < 0x68);
    }
  }
  return;
}

/* 10038100  FUN_10038100  (769 bytes)
 * undefined FUN_10038100(void)
 * called by: PM_PlayerMove
 */
void FUN_10038100(void)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  float afStackY_dc [9];
  undefined4 uStackY_b8;
  int *piStackY_b4;
  float *pfStackY_b0;
  float *pfStackY_ac;
  undefined4 uStackY_a8;
  undefined4 uStackY_a4;
  float local_88;
  float local_80 [4];
  undefined4 local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44 [5];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pfVar3 = (float *)(DAT_100b3720 + 0x20);
  iVar7 = 3;
  pfVar6 = local_80;
  do {
    pfVar1 = pfVar3 + -3;
    fVar2 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    iVar7 = iVar7 + -1;
    *pfVar6 = fVar2 * *(float *)(DAT_100b3720 + 0x4546c) +
              *pfVar1 * *(float *)(DAT_100b3720 + 0x45468);
    pfVar6 = pfVar6 + 1;
  } while (iVar7 != 0);
  if (((*(float *)(DAT_100b3720 + 0x45468) == 0.0) && (*(float *)(DAT_100b3720 + 0x4546c) == 0.0))
     && (*(float *)(DAT_100b3720 + 0x45470) == 0.0)) {
    local_80[2] = local_80[2] - 60.0;
  }
  else {
    local_80[2] = local_80[2] + *(float *)(DAT_100b3720 + 0x45470);
  }
  local_5c = local_80[0];
  local_58 = local_80[1];
  local_54 = local_80[2];
  fVar9 = (float10)FUN_10036480(&local_5c);
  if ((float10)*(float *)(DAT_100b3720 + 500) < fVar9) {
    FUN_100364d0(local_80,(float)((float10)*(float *)(DAT_100b3720 + 500) / fVar9),local_80);
    fVar9 = (float10)*(float *)(DAT_100b3720 + 500);
  }
  fVar2 = (float)(fVar9 * (float10)0.8);
  *(float *)(DAT_100b3720 + 0x5c) =
       *(float *)(DAT_100b3720 + 0x74) + *(float *)(DAT_100b3720 + 0x5c);
  *(float *)(DAT_100b3720 + 0x60) =
       *(float *)(DAT_100b3720 + 0x78) + *(float *)(DAT_100b3720 + 0x60);
  *(float *)(DAT_100b3720 + 100) = *(float *)(DAT_100b3720 + 0x7c) + *(float *)(DAT_100b3720 + 100);
  local_50 = *(float *)(DAT_100b3720 + 0x5c);
  local_4c = *(undefined4 *)(DAT_100b3720 + 0x60);
  local_48 = *(undefined4 *)(DAT_100b3720 + 100);
  fVar9 = (float10)FUN_10036480(&local_50);
  if (fVar9 == (float10)0.0) {
    local_88 = 0.0;
  }
  else {
    fVar10 = fVar9 - (float10)*(float *)(*(int *)(DAT_100b3720 + 0x4f4f0) + 0x1c) *
                     (float10)*(float *)(DAT_100b3720 + 0xc4) *
                     (float10)*(float *)(DAT_100b3720 + 0x10) * fVar9;
    local_88 = (float)fVar10;
    if (fVar10 < (float10)0.0) {
      local_88 = 0.0;
    }
    FUN_100364d0((float *)(DAT_100b3720 + 0x5c),(float)((float10)local_88 / fVar9),
                 (float *)(DAT_100b3720 + 0x5c));
  }
  if (0.1 <= fVar2) {
    local_88 = fVar2 - local_88;
    if (0.0 < local_88) {
      FUN_10036480(local_80);
      fVar2 = *(float *)(*(int *)(DAT_100b3720 + 0x4f4f0) + 0x10) * *(float *)(DAT_100b3720 + 0xc4)
              * *(float *)(DAT_100b3720 + 0x10) * fVar2;
      if (local_88 < fVar2) {
        fVar2 = local_88;
      }
      iVar7 = 0x5c;
      do {
        iVar4 = iVar7 + 4;
        *(float *)(iVar7 + DAT_100b3720) =
             fVar2 * *(float *)((int)afStackY_dc + iVar7) + *(float *)(iVar7 + DAT_100b3720);
        iVar7 = iVar4;
      } while (iVar4 < 0x68);
    }
    uStackY_a4 = 0x10038358;
    FUN_100363d0((float *)(DAT_100b3720 + 0x38),*(float *)(DAT_100b3720 + 0x10),
                 (float *)(DAT_100b3720 + 0x5c),local_80 + 3);
    local_68 = local_80[3];
    local_64 = local_70;
    uStackY_a4 = 0xffffffff;
    pfStackY_ac = local_80 + 3;
    uStackY_a8 = 0;
    pfStackY_b0 = &local_68;
    piStackY_b4 = local_44;
    local_60 = local_6c + *(float *)(*(int *)(DAT_100b3720 + 0x4f4f0) + 0x30) + 1.0;
    uStackY_b8 = 0x100383a5;
    piVar5 = (int *)(**(code **)(DAT_100b3720 + 0x4f580))();
    piVar8 = local_44;
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar8 = piVar8 + 1;
    }
    if ((local_44[1] == 0) && (local_44[0] == 0)) {
      *(undefined4 *)(DAT_100b3720 + 0x38) = uStack_30;
      *(undefined4 *)(DAT_100b3720 + 0x3c) = uStack_2c;
      *(undefined4 *)(DAT_100b3720 + 0x40) = uStack_28;
      return;
    }
    FUN_100378a0();
  }
  return;
}

/* 10038410  FUN_10038410  (318 bytes)
 * undefined FUN_10038410(void)
 * called by: PM_PlayerMove
 */
void FUN_10038410(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float local_20;
  float local_18 [4];
  undefined4 local_8;
  undefined4 local_4;
  
  fVar3 = *(float *)(DAT_100b3720 + 0x45468);
  fVar4 = *(float *)(DAT_100b3720 + 0x4546c);
  *(undefined4 *)(DAT_100b3720 + 0x1c) = 0;
  *(undefined4 *)(DAT_100b3720 + 0x28) = 0;
  FUN_10036480((float *)(DAT_100b3720 + 0x14));
  FUN_10036480((float *)(DAT_100b3720 + 0x20));
  pfVar5 = (float *)(DAT_100b3720 + 0x14);
  iVar7 = 2;
  pfVar6 = local_18;
  do {
    pfVar1 = pfVar5 + 3;
    fVar2 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    iVar7 = iVar7 + -1;
    *pfVar6 = fVar3 * fVar2 + fVar4 * *pfVar1;
    pfVar6 = pfVar6 + 1;
  } while (iVar7 != 0);
  local_18[2] = 0.0;
  local_18[3] = local_18[0];
  local_8 = local_18[1];
  local_4 = 0;
  fVar8 = (float10)FUN_10036480(local_18 + 3);
  local_20 = (float)fVar8;
  if (*(float *)(DAT_100b3720 + 500) < local_20) {
    FUN_100364d0(local_18,*(float *)(DAT_100b3720 + 500) / local_20,local_18);
    local_20 = *(float *)(DAT_100b3720 + 500);
  }
  FUN_10038040(local_18 + 3,local_20,*(float *)(*(int *)(DAT_100b3720 + 0x4f4f0) + 0x14));
  *(float *)(DAT_100b3720 + 0x5c) =
       *(float *)(DAT_100b3720 + 0x74) + *(float *)(DAT_100b3720 + 0x5c);
  *(float *)(DAT_100b3720 + 0x60) =
       *(float *)(DAT_100b3720 + 0x78) + *(float *)(DAT_100b3720 + 0x60);
  *(float *)(DAT_100b3720 + 100) = *(float *)(DAT_100b3720 + 0x7c) + *(float *)(DAT_100b3720 + 100);
  FUN_100378a0();
  return;
}

/* 10038550  FUN_10038550  (19 bytes)
 * bool FUN_10038550(void)
 * called by: PM_PlayerMove
 */
bool FUN_10038550(void)

{
  return 1 < *(int *)(DAT_100b3720 + 0xe4);
}

/* 10038570  FUN_10038570  (445 bytes)
 * bool FUN_10038570(void)
 * called by: FUN_10038730, FUN_10039990, PM_PlayerMove
 */
bool FUN_10038570(void)

{
  int iVar1;
  int local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = (*(float *)(DAT_100b3720 + (*(int *)(DAT_100b3720 + 0xbc) * 3 + 0x13d49) * 4) +
            *(float *)(DAT_100b3720 + (*(int *)(DAT_100b3720 + 0xbc) * 3 + 0x13d3d) * 4)) * 0.5 +
            *(float *)(DAT_100b3720 + 0x38);
  local_8 = (*(float *)(DAT_100b3720 + 0x4f528 + *(int *)(DAT_100b3720 + 0xbc) * 0xc) +
            *(float *)(DAT_100b3720 + 0x4f4f8 + *(int *)(DAT_100b3720 + 0xbc) * 0xc)) * 0.5 +
            *(float *)(DAT_100b3720 + 0x3c);
  local_4 = *(float *)(DAT_100b3720 + 0x4f4fc + *(int *)(DAT_100b3720 + 0xbc) * 0xc) +
            *(float *)(DAT_100b3720 + 0x40) + 1.0;
  *(undefined4 *)(DAT_100b3720 + 0xe4) = 0;
  *(undefined4 *)(DAT_100b3720 + 0xe8) = 0xffffffff;
  iVar1 = (**(code **)(DAT_100b3720 + 0x4f574))(&local_c,&local_10);
  if ((iVar1 < -2) && (-0xf < iVar1)) {
    *(int *)(DAT_100b3720 + 0xe8) = iVar1;
    *(undefined4 *)(DAT_100b3720 + 0xe4) = 1;
    local_4 = (*(float *)(DAT_100b3720 + 0x4f52c + *(int *)(DAT_100b3720 + 0xbc) * 0xc) +
              *(float *)(DAT_100b3720 + 0x4f4fc + *(int *)(DAT_100b3720 + 0xbc) * 0xc)) * 0.5 +
              *(float *)(DAT_100b3720 + 0x40);
    iVar1 = (**(code **)(DAT_100b3720 + 0x4f574))(&local_c,0);
    if ((iVar1 < -2) && (-0xf < iVar1)) {
      *(undefined4 *)(DAT_100b3720 + 0xe4) = 2;
      local_4 = *(float *)(DAT_100b3720 + 0x88) + *(float *)(DAT_100b3720 + 0x40);
      iVar1 = (**(code **)(DAT_100b3720 + 0x4f574))(&local_c,0);
      if ((iVar1 < -2) && (-0xf < iVar1)) {
        *(undefined4 *)(DAT_100b3720 + 0xe4) = 3;
      }
    }
    if ((local_10 < -8) && (-0xf < local_10)) {
      FUN_100363d0((float *)(DAT_100b3720 + 0x74),(float)*(int *)(DAT_100b3720 + 0xe4) * 50.0,
                   (float *)(&DAT_100a1384 + (local_10 * 3 + 0x1b) * -4),
                   (float *)(DAT_100b3720 + 0x74));
    }
  }
  return 1 < *(int *)(DAT_100b3720 + 0xe4);
}

/* 10038730  FUN_10038730  (294 bytes)
 * undefined FUN_10038730(void)
 * called by: FUN_10039200, FUN_10064a00, FUN_10064c30, FUN_10064de0, FUN_100657a0, PM_PlayerMove
 */
void FUN_10038730(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int aiStack_a0 [12];
  undefined4 uStack_70;
  int *piStack_6c;
  int iStack_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  int local_44 [5];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_1c;
  int iStack_14;
  
  iStack_5c = 0x1003873a;
  FUN_10038570();
  local_50 = *(undefined4 *)(DAT_100b3720 + 0x38);
  iStack_68 = DAT_100b3720 + 0x38;
  local_4c = *(undefined4 *)(DAT_100b3720 + 0x3c);
  local_48 = *(float *)(DAT_100b3720 + 0x40) - 2.0;
  if (180.0 < *(float *)(DAT_100b3720 + 100)) {
    *(undefined4 *)(DAT_100b3720 + 0xe0) = 0xffffffff;
    return;
  }
  iStack_5c = 0xffffffff;
  puStack_64 = &local_50;
  uStack_60 = 0;
  piStack_6c = local_44;
  uStack_70 = 0x10038793;
  piVar1 = (int *)(**(code **)(DAT_100b3720 + 0x4f580))();
  piVar3 = local_44;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  if (0.7 <= fStack_1c) {
    *(int *)(DAT_100b3720 + 0xe0) = iStack_14;
  }
  else {
    *(undefined4 *)(DAT_100b3720 + 0xe0) = 0xffffffff;
  }
  if (*(int *)(DAT_100b3720 + 0xe0) != -1) {
    *(undefined4 *)(DAT_100b3720 + 0xcc) = 0;
    if (((*(int *)(DAT_100b3720 + 0xe4) < 2) && (local_44[1] == 0)) && (local_44[0] == 0)) {
      *(undefined4 *)(DAT_100b3720 + 0x38) = uStack_30;
      *(undefined4 *)(DAT_100b3720 + 0x3c) = uStack_2c;
      *(undefined4 *)(DAT_100b3720 + 0x40) = uStack_28;
    }
  }
  if (0 < iStack_14) {
    iStack_5c = DAT_100b3720 + 0x5c;
    piVar1 = local_44;
    piVar3 = aiStack_a0;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    PM_AddToTouched();
  }
  return;
}

/* 10038860  FUN_10038860  (77 bytes)
 * undefined FUN_10038860(int param_1, int param_2, undefined4 * param_3)
 * called by: FUN_100388d0
 */
void __cdecl FUN_10038860(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 + param_1 * 2;
  iVar2 = *(int *)(&DAT_100af210 + iVar1 * 4);
  *(int *)(&DAT_100af210 + iVar1 * 4) = iVar2 + 1;
  iVar2 = iVar2 % 0x36;
  *param_3 = (&DAT_100aee88)[iVar2 * 3];
  param_3[1] = (&DAT_100aee8c)[iVar2 * 3];
  param_3[2] = (&DAT_100aee90)[iVar2 * 3];
  return;
}

/* 100388b0  FUN_100388b0  (23 bytes)
 * undefined FUN_100388b0(int param_1, int param_2)
 * called by: FUN_100388d0
 */
void __cdecl FUN_100388b0(int param_1,int param_2)

{
  *(undefined4 *)(&DAT_100af210 + (param_2 + param_1 * 2) * 4) = 0;
  return;
}

/* 100388d0  FUN_100388d0  (887 bytes)
 * undefined4 FUN_100388d0(void)
 * called by: PM_PlayerMove
 */
undefined4 FUN_100388d0(void)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 local_44 [68];
  
  iVar4 = (*(code *)DAT_100b3720[0x13d57])(DAT_100b3720 + 0xe,local_44);
  if (iVar4 == -1) {
    FUN_100388b0(*DAT_100b3720,DAT_100b3720[1]);
    return 0;
  }
  fStack_5c = (float)DAT_100b3720[0xe];
  fStack_58 = (float)DAT_100b3720[0xf];
  fStack_54 = (float)DAT_100b3720[0x10];
  if ((DAT_100b3720[1] == 0) && ((iVar4 == 0 || (DAT_100b3720[iVar4 * 0x38 + 0xa0] != 0)))) {
    iVar6 = 0;
    FUN_100388b0(*DAT_100b3720,0);
    FUN_10038860(*DAT_100b3720,DAT_100b3720[1],&fStack_50);
    fStack_68 = fStack_50 + fStack_5c;
    fStack_64 = fStack_4c + fStack_58;
    fStack_60 = fStack_48 + fStack_54;
    iVar5 = (*(code *)DAT_100b3720[0x13d57])(&fStack_68,local_44);
    while( true ) {
      if (iVar5 == -1) {
        FUN_100388b0(*DAT_100b3720,DAT_100b3720[1]);
        DAT_100b3720[0xe] = (int)fStack_68;
        DAT_100b3720[0xf] = (int)fStack_64;
        DAT_100b3720[0x10] = (int)fStack_60;
        return 0;
      }
      iVar6 = iVar6 + 1;
      if (0x35 < iVar6) break;
      FUN_10038860(*DAT_100b3720,DAT_100b3720[1],&fStack_50);
      fStack_68 = fStack_50 + fStack_5c;
      fStack_64 = fStack_4c + fStack_58;
      fStack_60 = fStack_48 + fStack_54;
      iVar5 = (*(code *)DAT_100b3720[0x13d57])(&fStack_68,local_44);
    }
  }
  iVar6 = DAT_100b3720[1];
  fVar7 = (float10)(*(code *)DAT_100b3720[0x13d5b])();
  piVar3 = DAT_100b3720;
  iVar6 = (uint)(iVar6 == 0) + *DAT_100b3720 * 2;
  if (fVar7 - (float10)0.05 <= (float10)*(float *)(&DAT_100af110 + iVar6 * 4)) {
    return 1;
  }
  *(float *)(&DAT_100af110 + iVar6 * 4) = (float)fVar7;
  (*(code *)piVar3[0x13d5c])(iVar4,local_44);
  iVar4 = FUN_10038860(*DAT_100b3720,DAT_100b3720[1],&fStack_50);
  fStack_68 = fStack_50 + fStack_5c;
  fStack_64 = fStack_4c + fStack_58;
  fStack_60 = fStack_48 + fStack_54;
  iVar6 = (*(code *)DAT_100b3720[0x13d57])(&fStack_68,0);
  if (iVar6 == -1) {
    FUN_100388b0(*DAT_100b3720,DAT_100b3720[1]);
    if (0x1a < iVar4) {
LAB_10038b1d:
      DAT_100b3720[0xe] = (int)fStack_68;
      DAT_100b3720[0xf] = (int)fStack_64;
      DAT_100b3720[0x10] = (int)fStack_60;
    }
    return 0;
  }
  if (((*(byte *)((int)DAT_100b3720 + 0x45476) & 7) != 0) &&
     (DAT_100b3720[iVar6 * 0x38 + 0x9c] != 0)) {
    fStack_74 = 0.0;
    do {
      fVar1 = fStack_74 + fStack_54;
      fStack_78 = -8.0;
      do {
        fVar2 = fStack_78 + fStack_5c;
        fStack_7c = -8.0;
        do {
          fStack_64 = fStack_7c + fStack_58;
          fStack_68 = fVar2;
          fStack_60 = fVar1;
          iVar4 = (*(code *)DAT_100b3720[0x13d57])(&fStack_68,0);
          if (iVar4 == -1) goto LAB_10038b1d;
          fStack_7c = fStack_7c + 8.0;
        } while (fStack_7c <= 8.0);
        fStack_78 = fStack_78 + 8.0;
      } while (fStack_78 <= 8.0);
      fStack_74 = fStack_74 + 18.0;
    } while (fStack_74 <= 72.0);
  }
  return 1;
}

/* 10038c50  FUN_10038c50  (200 bytes)
 * undefined FUN_10038c50(float * param_1, int param_2, float * param_3, float * param_4)
 * called by: FUN_10038d20
 */
void __cdecl FUN_10038c50(float *param_1,int param_2,float *param_3,float *param_4)

{
  int iVar1;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];
  
  iVar1 = param_2 * 0xe0 + 0x250 + DAT_100b3720;
  FUN_100362a0(param_1,local_c,(float *)0x0,(float *)0x0);
  local_18 = *(float *)(iVar1 + 0x24);
  local_14 = *(float *)(iVar1 + 0x28);
  local_10 = *(float *)(iVar1 + 0x2c) + 35.0;
  FUN_100363d0(param_3,90.0,local_c,&local_24);
  local_24 = local_18 - local_24;
  local_20 = local_14 - local_20;
  local_1c = local_10 - local_1c;
  iVar1 = (**(code **)(DAT_100b3720 + 0x4f584))(&local_18,&local_24,0,2,param_2);
  FUN_100363d0((float *)(iVar1 + 0x14),4.0,(float *)(iVar1 + 0x20),param_4);
  return;
}

/* 10038d20  FUN_10038d20  (1049 bytes)
 * undefined FUN_10038d20(void)
 * called by: PM_PlayerMove
 */
void FUN_10038d20(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  float10 fVar11;
  float10 fVar12;
  float afStackY_8c [10];
  undefined4 uStackY_64;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30 [3];
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18 [4];
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(int *)(DAT_100b3720 + 0x1fc) == 3) || (*(int *)(DAT_100b3720 + 0x200) == 0)) {
    fVar11 = FUN_10036450((float *)(DAT_100b3720 + 0x5c));
    if ((float10)1.0 <= fVar11) {
      iVar9 = *(int *)(DAT_100b3720 + 0x4f4f0);
      fVar12 = fVar11;
      if (fVar11 < (float10)*(float *)(iVar9 + 4)) {
        fVar12 = (float10)*(float *)(iVar9 + 4);
      }
      fVar12 = fVar11 - fVar12 * (float10)*(float *)(DAT_100b3720 + 0x10) *
                        (float10)*(float *)(iVar9 + 0x1c) * (float10)1.5;
      if (fVar12 < (float10)0.0) {
        fVar12 = (float10)0.0;
      }
      FUN_100364d0((float *)(DAT_100b3720 + 0x5c),(float)(fVar12 / fVar11),
                   (float *)(DAT_100b3720 + 0x5c));
    }
    else {
      *(undefined4 *)(DAT_100b3720 + 0x5c) = DAT_100aee7c;
      *(undefined4 *)(DAT_100b3720 + 0x60) = DAT_100aee80;
      *(undefined4 *)(DAT_100b3720 + 100) = DAT_100aee84;
    }
    fVar3 = *(float *)(DAT_100b3720 + 0x45468);
    fVar4 = *(float *)(DAT_100b3720 + 0x4546c);
    FUN_10036480((float *)(DAT_100b3720 + 0x14));
    FUN_10036480((float *)(DAT_100b3720 + 0x20));
    pfVar5 = (float *)(DAT_100b3720 + 0x14);
    iVar9 = 3;
    pfVar7 = local_18;
    do {
      pfVar1 = pfVar5 + 3;
      fVar2 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      iVar9 = iVar9 + -1;
      *pfVar7 = fVar3 * fVar2 + fVar4 * *pfVar1;
      pfVar7 = pfVar7 + 1;
    } while (iVar9 != 0);
    local_30[2] = local_18[2] + *(float *)(DAT_100b3720 + 0x45470);
    local_30[0] = local_18[0];
    local_30[1] = local_18[1];
    local_18[2] = local_30[2];
    fVar11 = (float10)FUN_10036480(local_30);
    iVar9 = *(int *)(DAT_100b3720 + 0x4f4f0);
    if ((float10)*(float *)(iVar9 + 0xc) < fVar11) {
      FUN_100364d0(local_18,(float)((float10)*(float *)(iVar9 + 0xc) / fVar11),local_18);
      iVar9 = *(int *)(DAT_100b3720 + 0x4f4f0);
      fVar11 = (float10)*(float *)(iVar9 + 0xc);
    }
    fVar12 = fVar11 - ((float10)local_30[0] * (float10)*(float *)(DAT_100b3720 + 0x5c) +
                      (float10)local_30[1] * (float10)*(float *)(DAT_100b3720 + 0x60) +
                      (float10)local_30[2] * (float10)*(float *)(DAT_100b3720 + 100));
    fVar3 = (float)fVar12;
    if ((float10)0.0 < fVar12) {
      fVar11 = (float10)*(float *)(iVar9 + 0x10) * (float10)*(float *)(DAT_100b3720 + 0x10) * fVar11
      ;
      if ((float10)fVar3 < fVar11) {
        fVar11 = (float10)fVar3;
      }
      iVar9 = 0x5c;
      do {
        iVar6 = iVar9 + 4;
        *(float *)(iVar9 + DAT_100b3720) =
             (float)(fVar11 * (float10)*(float *)((int)afStackY_8c + iVar9) +
                    (float10)*(float *)(iVar9 + DAT_100b3720));
        iVar9 = iVar6;
      } while (iVar6 < 0x68);
      uStackY_64 = 0x10039126;
      FUN_100363d0((float *)(DAT_100b3720 + 0x38),*(float *)(DAT_100b3720 + 0x10),
                   (float *)(DAT_100b3720 + 0x5c),(float *)(DAT_100b3720 + 0x38));
      return;
    }
  }
  else {
    iVar9 = *(int *)(DAT_100b3720 + 0x24c);
    iVar6 = 0;
    if (0 < iVar9) {
      piVar10 = (int *)(DAT_100b3720 + 0x2a0);
      do {
        if (*piVar10 == *(int *)(DAT_100b3720 + 0x200)) break;
        iVar6 = iVar6 + 1;
        piVar10 = piVar10 + 0x38;
      } while (iVar6 < iVar9);
    }
    if (iVar6 != iVar9) {
      local_18[3] = (float)DAT_100aee7c;
      local_8 = DAT_100aee80;
      local_4 = DAT_100aee84;
      iVar9 = *(int *)(DAT_100b3720 + 0x1fc);
      if ((iVar9 == 4) && (*(int *)(DAT_100b3720 + 0x204) != 0)) {
        iVar8 = 0;
        if (0 < *(int *)(DAT_100b3720 + 0x24c)) {
          piVar10 = (int *)(DAT_100b3720 + 0x2a0);
          do {
            if (*piVar10 == *(int *)(DAT_100b3720 + 0x204)) break;
            iVar8 = iVar8 + 1;
            piVar10 = piVar10 + 0x38;
          } while (iVar8 < *(int *)(DAT_100b3720 + 0x24c));
        }
      }
      if (iVar9 == 1) {
        iVar9 = iVar6 * 0xe0 + DAT_100b3720;
        local_38 = *(undefined4 *)(iVar9 + 0x2a8);
        local_3c = 10.0 - *(float *)(iVar9 + 0x2a4);
        local_34 = *(undefined4 *)(iVar9 + 0x2ac);
      }
      else if (iVar9 == 5) {
        iVar9 = iVar6 * 0xe0 + DAT_100b3720;
        local_3c = *(float *)(iVar9 + 0x2a4);
        local_38 = *(undefined4 *)(iVar9 + 0x2a8);
        local_34 = *(undefined4 *)(iVar9 + 0x2ac);
      }
      else if (iVar9 != 4) {
        local_3c = *(float *)(DAT_100b3720 + 0x44);
        local_38 = *(undefined4 *)(DAT_100b3720 + 0x48);
        local_34 = *(undefined4 *)(DAT_100b3720 + 0x4c);
      }
      if (*(int *)(DAT_100b3720 + 0x1fc) == 5) {
        iVar9 = iVar6 * 0xe0 + DAT_100b3720;
        local_24 = *(float *)(iVar6 * 0xe0 + 0x274 + DAT_100b3720);
        local_20 = *(undefined4 *)(iVar9 + 0x278);
        local_1c = *(undefined4 *)(iVar9 + 0x27c);
      }
      else {
        uStackY_64 = 0x10038ea7;
        FUN_10038c50(&local_3c,iVar6,local_18 + 3,&local_24);
      }
      *(float *)(DAT_100b3720 + 0x38) = local_24;
      *(undefined4 *)(DAT_100b3720 + 0x3c) = local_20;
      *(undefined4 *)(DAT_100b3720 + 0x40) = local_1c;
      *(float *)(DAT_100b3720 + 0x44) = local_3c;
      *(undefined4 *)(DAT_100b3720 + 0x48) = local_38;
      *(undefined4 *)(DAT_100b3720 + 0x4c) = local_34;
      *(undefined4 *)(DAT_100b3720 + 0x5c) = DAT_100aee7c;
      *(undefined4 *)(DAT_100b3720 + 0x60) = DAT_100aee80;
      *(undefined4 *)(DAT_100b3720 + 100) = DAT_100aee84;
      return;
    }
  }
  return;
}

/* 10039140  FUN_10039140  (31 bytes)
 * float10 FUN_10039140(float param_1, float param_2)
 * called by: FUN_100657a0
 */
float10 __cdecl FUN_10039140(float param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1 * (float10)param_2;
  fVar2 = fVar1 * fVar1 * fVar1;
  return fVar1 * fVar1 * (float10)3.0 - (fVar2 + fVar2);
}

/* 10039160  FUN_10039160  (156 bytes)
 * undefined FUN_10039160(int param_1)
 * called by: FUN_10064a00, FUN_10064c30, FUN_10064de0, FUN_100657a0
 */
void __cdecl FUN_10039160(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (**(code **)(DAT_100b3720 + 0x4f55c))(DAT_100b3720 + 0x38,0);
  if (iVar4 != -1) {
    iVar4 = 0;
    uVar1 = *(undefined4 *)(DAT_100b3720 + 0x38);
    uVar2 = *(undefined4 *)(DAT_100b3720 + 0x3c);
    uVar3 = *(undefined4 *)(DAT_100b3720 + 0x40);
    do {
      *(float *)(DAT_100b3720 + 0x40) = (float)param_1 + *(float *)(DAT_100b3720 + 0x40);
      iVar5 = (**(code **)(DAT_100b3720 + 0x4f55c))(DAT_100b3720 + 0x38,0);
      if (iVar5 == -1) {
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x24);
    *(undefined4 *)(DAT_100b3720 + 0x38) = uVar1;
    *(undefined4 *)(DAT_100b3720 + 0x3c) = uVar2;
    *(undefined4 *)(DAT_100b3720 + 0x40) = uVar3;
  }
  return;
}

/* 10039200  FUN_10039200  (348 bytes)
 * undefined FUN_10039200(void)
 * called by: FUN_100657a0
 */
void FUN_10039200(void)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float local_94 [4];
  int iStack_84;
  undefined1 auStack_44 [68];
  
  pfVar4 = (float *)&stack0xffffff68;
  local_94[0] = *(float *)(DAT_100b3720 + 0x38);
  local_94[1] = (float)*(undefined4 *)(DAT_100b3720 + 0x3c);
  local_94[2] = (float)*(undefined4 *)(DAT_100b3720 + 0x40);
  if (*(int *)(DAT_100b3720 + 0xe0) != -1) {
    pfVar3 = (float *)(DAT_100b3720 + 0x4f4f4);
    iVar5 = 3;
    do {
      pfVar4 = pfVar4 + 1;
      pfVar1 = pfVar3 + 3;
      fVar2 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      iVar5 = iVar5 + -1;
      *pfVar4 = (*pfVar1 - fVar2) + *pfVar4;
    } while (iVar5 != 0);
  }
  pfVar4 = (float *)(**(code **)(DAT_100b3720 + 0x4f580))
                              (local_94 + 3,local_94,local_94,0,0xffffffff);
  pfVar3 = local_94 + 3;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar3 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar3 = pfVar3 + 1;
  }
  if (iStack_84 == 0) {
    *(undefined4 *)(DAT_100b3720 + 0xbc) = 0;
    pfVar4 = (float *)(**(code **)(DAT_100b3720 + 0x4f580))
                                (auStack_44,local_94,local_94,0,0xffffffff);
    pfVar3 = local_94 + 3;
    for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar3 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar3 = pfVar3 + 1;
    }
    if (iStack_84 != 0) {
      *(undefined4 *)(DAT_100b3720 + 0xbc) = 1;
      return;
    }
    *(uint *)(DAT_100b3720 + 0xb8) = *(uint *)(DAT_100b3720 + 0xb8) & 0xffffbfff;
    *(undefined4 *)(DAT_100b3720 + 0x90) = 0;
    *(undefined4 *)(DAT_100b3720 + 0x88) = 0x41e00000;
    *(undefined4 *)(DAT_100b3720 + 0x8c) = 0;
    *(float *)(DAT_100b3720 + 0x38) = local_94[0];
    *(float *)(DAT_100b3720 + 0x3c) = local_94[1];
    *(float *)(DAT_100b3720 + 0x40) = local_94[2];
    FUN_10038730();
  }
  return;
}

/* 10039360  FUN_10039360  (874 bytes)
 * undefined FUN_10039360(int param_1)
 * called by: PM_PlayerMove
 */
void __cdecl FUN_10039360(int param_1)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float afStack_5c [3];
  undefined1 auStack_50 [16];
  float fStack_40;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float afStack_18 [3];
  float afStack_c [3];
  
  if (*(int *)(DAT_100b3720 + 0xdc) != 8) {
    (**(code **)(DAT_100b3720 + 0x4f594))(*(undefined4 *)(param_1 + 0x30),&local_74,afStack_98 + 3);
    fStack_b0 = afStack_98[3] + local_74;
    fStack_ac = fStack_88 + fStack_70;
    fStack_a8 = fStack_84 + fStack_6c;
    FUN_100364d0(&fStack_b0,0.5,&fStack_b0);
    *(undefined4 *)(DAT_100b3720 + 0xdc) = 5;
    uStack_a4 = *(undefined4 *)(DAT_100b3720 + 0x38);
    uStack_a0 = *(undefined4 *)(DAT_100b3720 + 0x3c);
    fStack_9c = (*(float *)(DAT_100b3720 + 0x4f4fc + *(int *)(DAT_100b3720 + 0xbc) * 0xc) - 1.0) +
                *(float *)(DAT_100b3720 + 0x40);
    iVar3 = (**(code **)(DAT_100b3720 + 0x4f574))(&uStack_a4,0);
    *(undefined4 *)(DAT_100b3720 + 0xc0) = 0;
    (**(code **)(DAT_100b3720 + 0x4f59c))(param_1,DAT_100b3720 + 0x38,&fStack_b0,auStack_50);
    if (fStack_40 != 1.0) {
      fStack_c0 = 0.0;
      fStack_c4 = 0.0;
      FUN_100362a0((float *)(DAT_100b3720 + 0x44),afStack_c,afStack_18,(float *)0x0);
      uVar1 = *(ushort *)(DAT_100b3720 + 0x45476);
      if ((uVar1 & 0x10) != 0) {
        fStack_c0 = -200.0;
      }
      if ((uVar1 & 8) != 0) {
        fStack_c0 = fStack_c0 + 200.0;
      }
      if ((uVar1 & 0x200) != 0) {
        fStack_c4 = -200.0;
      }
      if ((uVar1 & 0x400) != 0) {
        fStack_c4 = fStack_c4 + 200.0;
      }
      if ((uVar1 & 2) != 0) {
        *(undefined4 *)(DAT_100b3720 + 0xdc) = 3;
        FUN_100364d0(&fStack_30,270.0,(float *)(DAT_100b3720 + 0x5c));
        return;
      }
      if ((fStack_c0 == 0.0) && (fStack_c4 == 0.0)) {
        *(undefined4 *)(DAT_100b3720 + 0x5c) = 0;
        *(undefined4 *)(DAT_100b3720 + 0x60) = 0;
        *(undefined4 *)(DAT_100b3720 + 100) = 0;
        return;
      }
      FUN_100364d0(afStack_c,fStack_c0,&fStack_bc);
      FUN_100363d0(&fStack_bc,fStack_c4,afStack_18,&fStack_bc);
      afStack_98[0] = 0.0;
      afStack_98[1] = 0.0;
      afStack_98[2] = 1.0;
      FUN_10036410(afStack_98,&fStack_30,afStack_5c);
      FUN_10036480(afStack_5c);
      fVar2 = fStack_30 * fStack_bc + fStack_2c * fStack_b8 + fStack_28 * fStack_b4;
      FUN_100364d0(&fStack_30,fVar2,&fStack_80);
      fStack_68 = fStack_bc - fStack_80;
      fStack_64 = fStack_b8 - fStack_7c;
      fStack_60 = fStack_b4 - fStack_78;
      FUN_10036410(&fStack_30,afStack_5c,afStack_98);
      FUN_100363d0(&fStack_68,-fVar2,afStack_98,(float *)(DAT_100b3720 + 0x5c));
      if ((iVar3 == -2) && (0.0 < fVar2)) {
        FUN_100363d0((float *)(DAT_100b3720 + 0x5c),200.0,&fStack_30,(float *)(DAT_100b3720 + 0x5c))
        ;
      }
    }
  }
  return;
}

/* 100396d0  FUN_100396d0  (197 bytes)
 * int FUN_100396d0(void)
 * called by: PM_PlayerMove
 */
int FUN_100396d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar4 = 0;
  if (0 < *(int *)(DAT_100b3720 + 0x20f50)) {
    iVar5 = 0;
    iVar3 = DAT_100b3720;
    do {
      iVar2 = *(int *)(iVar5 + 0x20f84 + iVar3);
      iVar1 = iVar5 + 0x20f54 + iVar3;
      if (((iVar2 != 0) &&
          (iVar2 = (**(code **)(iVar3 + 0x4f590))(iVar2), iVar3 = DAT_100b3720, iVar2 == 0)) &&
         (*(int *)(iVar1 + 100) == -0x10)) {
        iVar3 = (**(code **)(DAT_100b3720 + 0x4f598))(iVar1,&fStack_c);
        fStack_c = *(float *)(DAT_100b3720 + 0x38) - fStack_c;
        fStack_8 = *(float *)(DAT_100b3720 + 0x3c) - fStack_8;
        fStack_4 = *(float *)(DAT_100b3720 + 0x40) - fStack_4;
        iVar2 = (**(code **)(DAT_100b3720 + 0x4f57c))(iVar3,*(undefined4 *)(iVar3 + 8),&fStack_c);
        iVar3 = DAT_100b3720;
        if (iVar2 != -1) {
          return iVar1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0xe0;
    } while (iVar4 < *(int *)(iVar3 + 0x20f50));
  }
  return 0;
}

/* 100397a0  FUN_100397a0  (179 bytes)
 * undefined FUN_100397a0(void)
 * called by: PM_PlayerMove
 */
void FUN_100397a0(void)

{
  if (10000.0 < *(float *)(DAT_100b3720 + 0xcc)) {
    *(undefined4 *)(DAT_100b3720 + 0xcc) = 0x461c4000;
  }
  if (*(float *)(DAT_100b3720 + 0xcc) != 0.0) {
    *(float *)(DAT_100b3720 + 0xcc) =
         *(float *)(DAT_100b3720 + 0xcc) - (float)*(byte *)(DAT_100b3720 + 0x4545a);
    if ((*(float *)(DAT_100b3720 + 0xcc) < 0.0) || (*(int *)(DAT_100b3720 + 0xe4) == 0)) {
      *(undefined4 *)(DAT_100b3720 + 0xcc) = 0;
      *(uint *)(DAT_100b3720 + 0xb8) = *(uint *)(DAT_100b3720 + 0xb8) & 0xfffff7ff;
    }
    *(undefined4 *)(DAT_100b3720 + 0x5c) = *(undefined4 *)(DAT_100b3720 + 0x68);
    *(undefined4 *)(DAT_100b3720 + 0x60) = *(undefined4 *)(DAT_100b3720 + 0x6c);
  }
  return;
}

/* 10039860  FUN_10039860  (95 bytes)
 * undefined FUN_10039860(void)
 * called by: FUN_10039990
 */
void FUN_10039860(void)

{
  float fVar1;
  
  if (*(float *)(DAT_100b3720 + 0xc0) == 0.0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(DAT_100b3720 + 0xc0);
  }
  *(float *)(DAT_100b3720 + 100) =
       *(float *)(DAT_100b3720 + 100) -
       **(float **)(DAT_100b3720 + 0x4f4f0) * *(float *)(DAT_100b3720 + 0x10) * fVar1;
  *(float *)(DAT_100b3720 + 100) =
       *(float *)(DAT_100b3720 + 0x7c) * *(float *)(DAT_100b3720 + 0x10) +
       *(float *)(DAT_100b3720 + 100);
  *(undefined4 *)(DAT_100b3720 + 0x7c) = 0;
  PM_CheckVelocity();
  return;
}

/* 100398c0  FUN_100398c0  (203 bytes)
 * undefined FUN_100398c0(int * param_1, float * param_2)
 * called by: FUN_10039990
 */
void __cdecl FUN_100398c0(int *param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int aiStack_a0 [12];
  undefined4 uStack_70;
  int *piStack_6c;
  int iStack_68;
  float *pfStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  float local_50;
  float local_4c;
  float local_48;
  int local_44 [4];
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_50 = *param_2 + *(float *)(DAT_100b3720 + 0x38);
  iStack_68 = DAT_100b3720 + 0x38;
  iStack_5c = 0xffffffff;
  uStack_60 = 0;
  local_4c = *(float *)(DAT_100b3720 + 0x3c) + param_2[1];
  local_48 = *(float *)(DAT_100b3720 + 0x40) + param_2[2];
  pfStack_64 = &local_50;
  piStack_6c = local_44;
  uStack_70 = 0x10039903;
  piVar1 = (int *)(**(code **)(DAT_100b3720 + 0x4f580))();
  piVar3 = local_44;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  *(undefined4 *)(DAT_100b3720 + 0x38) = uStack_30;
  *(undefined4 *)(DAT_100b3720 + 0x3c) = uStack_2c;
  *(undefined4 *)(DAT_100b3720 + 0x40) = uStack_28;
  if ((fStack_34 < 1.0) && (local_44[0] == 0)) {
    iStack_5c = DAT_100b3720 + 0x5c;
    piVar1 = local_44;
    piVar3 = aiStack_a0;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    PM_AddToTouched();
  }
  piVar1 = local_44;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *piVar1;
    piVar1 = piVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

/* 10039990  FUN_10039990  (779 bytes)
 * undefined FUN_10039990(void)
 * called by: PM_PlayerMove
 */
void FUN_10039990(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float local_98;
  float local_94 [3];
  int local_88 [4];
  float local_78;
  float local_68 [2];
  float local_60;
  undefined4 local_58;
  int local_44 [17];
  
  FUN_10038570();
  if (0.0 < *(float *)(DAT_100b3720 + 100)) {
    *(undefined4 *)(DAT_100b3720 + 0xe0) = 0xffffffff;
  }
  if (((*(int *)(DAT_100b3720 + 0xe0) == -1) ||
      (iVar1 = FUN_100363a0(DAT_100b3720 + 0x74,(float *)&DAT_100aee7c), iVar1 == 0)) ||
     (iVar1 = FUN_100363a0(DAT_100b3720 + 0x5c,(float *)&DAT_100aee7c), iVar1 == 0)) {
    PM_CheckVelocity();
    iVar1 = *(int *)(DAT_100b3720 + 0xdc);
    if (((iVar1 != 5) && (iVar1 != 0xb)) && (iVar1 != 9)) {
      FUN_10039860();
    }
    *(float *)(DAT_100b3720 + 0x5c) =
         *(float *)(DAT_100b3720 + 0x74) + *(float *)(DAT_100b3720 + 0x5c);
    *(float *)(DAT_100b3720 + 0x60) =
         *(float *)(DAT_100b3720 + 0x78) + *(float *)(DAT_100b3720 + 0x60);
    *(float *)(DAT_100b3720 + 100) =
         *(float *)(DAT_100b3720 + 0x7c) + *(float *)(DAT_100b3720 + 100);
    PM_CheckVelocity();
    FUN_100364d0((float *)(DAT_100b3720 + 0x5c),*(float *)(DAT_100b3720 + 0x10),local_94);
    *(float *)(DAT_100b3720 + 0x5c) =
         *(float *)(DAT_100b3720 + 0x5c) - *(float *)(DAT_100b3720 + 0x74);
    *(float *)(DAT_100b3720 + 0x60) =
         *(float *)(DAT_100b3720 + 0x60) - *(float *)(DAT_100b3720 + 0x78);
    *(float *)(DAT_100b3720 + 100) =
         *(float *)(DAT_100b3720 + 100) - *(float *)(DAT_100b3720 + 0x7c);
    piVar2 = (int *)FUN_100398c0(local_44,local_94);
    piVar3 = local_88;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    PM_CheckVelocity();
    if (local_88[0] != 0) {
      *(undefined4 *)(DAT_100b3720 + 0xe0) = local_58;
      *(undefined4 *)(DAT_100b3720 + 0x5c) = DAT_100aee7c;
      *(undefined4 *)(DAT_100b3720 + 0x60) = DAT_100aee80;
      *(undefined4 *)(DAT_100b3720 + 100) = DAT_100aee84;
      return;
    }
    if (local_78 != 1.0) {
      if (*(int *)(DAT_100b3720 + 0xdc) == 10) {
        local_98 = 2.0 - *(float *)(DAT_100b3720 + 0xc4);
      }
      else {
        local_98 = 2.0;
        if (*(int *)(DAT_100b3720 + 0xdc) != 0xb) {
          local_98 = 1.0;
        }
      }
      FUN_10037720((float *)(DAT_100b3720 + 0x5c),local_68,(float *)(DAT_100b3720 + 0x5c),local_98);
      if (0.7 < local_60) {
        if (*(float *)(DAT_100b3720 + 100) <
            **(float **)(DAT_100b3720 + 0x4f4f0) * *(float *)(DAT_100b3720 + 0x10)) {
          *(undefined4 *)(DAT_100b3720 + 0xe0) = local_58;
          *(undefined4 *)(DAT_100b3720 + 100) = 0;
        }
        if ((*(float *)(DAT_100b3720 + 100) * *(float *)(DAT_100b3720 + 100) +
             *(float *)(DAT_100b3720 + 0x5c) * *(float *)(DAT_100b3720 + 0x5c) +
             *(float *)(DAT_100b3720 + 0x60) * *(float *)(DAT_100b3720 + 0x60) < 900.0) ||
           ((*(int *)(DAT_100b3720 + 0xdc) != 10 && (*(int *)(DAT_100b3720 + 0xdc) != 0xb)))) {
          *(undefined4 *)(DAT_100b3720 + 0xe0) = local_58;
          *(undefined4 *)(DAT_100b3720 + 0x5c) = DAT_100aee7c;
          *(undefined4 *)(DAT_100b3720 + 0x60) = DAT_100aee80;
          *(undefined4 *)(DAT_100b3720 + 100) = DAT_100aee84;
        }
        else {
          FUN_100364d0((float *)(DAT_100b3720 + 0x5c),
                       (1.0 - local_78) * *(float *)(DAT_100b3720 + 0x10) * 0.9,local_94);
          piVar2 = (int *)FUN_100398c0(local_44,local_94);
          piVar3 = local_88;
          for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar3 = *piVar2;
            piVar2 = piVar2 + 1;
            piVar3 = piVar3 + 1;
          }
        }
        *(undefined4 *)(DAT_100b3720 + 0x5c) = *(undefined4 *)(DAT_100b3720 + 0x5c);
        *(undefined4 *)(DAT_100b3720 + 0x60) = *(undefined4 *)(DAT_100b3720 + 0x60);
        *(undefined4 *)(DAT_100b3720 + 100) = *(undefined4 *)(DAT_100b3720 + 100);
      }
    }
    FUN_10038570();
  }
  return;
}

/* 10039ca0  FUN_10039ca0  (174 bytes)
 * undefined FUN_10039ca0(void)
 * called by: PM_PlayerMove
 */
void FUN_10039ca0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float local_c [3];
  
  fVar3 = *(float *)(DAT_100b3720 + 0x45468);
  fVar4 = *(float *)(DAT_100b3720 + 0x4546c);
  FUN_10036480((float *)(DAT_100b3720 + 0x14));
  FUN_10036480((float *)(DAT_100b3720 + 0x20));
  pfVar5 = (float *)(DAT_100b3720 + 0x14);
  iVar7 = 3;
  pfVar6 = local_c;
  do {
    pfVar1 = pfVar5 + 3;
    fVar2 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    iVar7 = iVar7 + -1;
    *pfVar6 = fVar3 * fVar2 + fVar4 * *pfVar1;
    pfVar6 = pfVar6 + 1;
  } while (iVar7 != 0);
  local_c[2] = local_c[2] + *(float *)(DAT_100b3720 + 0x45470);
  FUN_100363d0((float *)(DAT_100b3720 + 0x38),*(float *)(DAT_100b3720 + 0x10),local_c,
               (float *)(DAT_100b3720 + 0x38));
  *(undefined4 *)(DAT_100b3720 + 0x5c) = 0;
  *(undefined4 *)(DAT_100b3720 + 0x60) = 0;
  *(undefined4 *)(DAT_100b3720 + 100) = 0;
  return;
}

/* 10039d50  FUN_10039d50  (97 bytes)
 * undefined FUN_10039d50(void)
 * called by: FUN_100651b0
 */
void FUN_10039d50(void)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = *(float *)(DAT_100b3720 + 500) * 1.7;
  if ((0.0 < fVar1) &&
     (fVar2 = FUN_10036450((float *)(DAT_100b3720 + 0x5c)), (float10)fVar1 < fVar2)) {
    FUN_100364d0((float *)(DAT_100b3720 + 0x5c),(float)(((float10)fVar1 / fVar2) * (float10)0.65),
                 (float *)(DAT_100b3720 + 0x5c));
    return;
  }
  return;
}

/* 10039dc0  FUN_10039dc0  (610 bytes)
 * undefined FUN_10039dc0(void)
 * called by: PM_PlayerMove
 */
void FUN_10039dc0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94 [3];
  undefined4 auStack_88 [4];
  float fStack_78;
  float afStack_68 [2];
  float fStack_60;
  undefined1 local_44 [68];
  
  if ((*(float *)(DAT_100b3720 + 0xcc) == 0.0) && (-180.0 <= *(float *)(DAT_100b3720 + 100))) {
    local_a4 = *(float *)(DAT_100b3720 + 0x5c);
    local_a0 = *(float *)(DAT_100b3720 + 0x60);
    local_9c = 0.0;
    fVar5 = (float10)FUN_10036480(&local_a4);
    local_98 = (float)fVar5;
    local_b0 = *(float *)(DAT_100b3720 + 0x14);
    local_ac = *(float *)(DAT_100b3720 + 0x18);
    local_a8 = 0.0;
    FUN_10036480(&local_b0);
    if ((local_98 == 0.0) ||
       (0.0 <= local_b0 * local_a4 + local_ac * local_a0 + local_a8 * local_9c)) {
      local_bc = *(float *)(DAT_100b3720 + 0x38);
      local_b8 = *(undefined4 *)(DAT_100b3720 + 0x3c);
      local_b4 = *(float *)(DAT_100b3720 + 0x40) + 8.0;
      FUN_100363d0(&local_bc,24.0,&local_b0,local_94);
      iVar1 = *(int *)(DAT_100b3720 + 0xbc);
      *(undefined4 *)(DAT_100b3720 + 0xbc) = 2;
      puVar2 = (undefined4 *)
               (**(code **)(DAT_100b3720 + 0x4f580))(local_44,&local_bc,local_94,0,0xffffffff);
      puVar4 = auStack_88;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      if ((fStack_78 < 1.0) && (ABS(fStack_60) < 0.1)) {
        local_b4 = (*(float *)(DAT_100b3720 + 0x4f52c + iVar1 * 0xc) - 8.0) + local_b4;
        FUN_100363d0(&local_bc,24.0,&local_b0,local_94);
        FUN_100363d0((float *)&DAT_100aee7c,-50.0,afStack_68,(float *)(DAT_100b3720 + 0x68));
        puVar2 = (undefined4 *)
                 (**(code **)(DAT_100b3720 + 0x4f580))(local_44,&local_bc,local_94,0,0xffffffff);
        puVar4 = auStack_88;
        for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        if (fStack_78 == 1.0) {
          *(undefined4 *)(DAT_100b3720 + 0xcc) = 0x44fa0000;
          *(undefined4 *)(DAT_100b3720 + 100) = 0x43610000;
          *(uint *)(DAT_100b3720 + 200) = *(uint *)(DAT_100b3720 + 200) | 2;
          *(uint *)(DAT_100b3720 + 0xb8) = *(uint *)(DAT_100b3720 + 0xb8) | 0x800;
        }
      }
      *(int *)(DAT_100b3720 + 0xbc) = iVar1;
    }
  }
  return;
}

/* 1003a030  FUN_1003a030  (428 bytes)
 * undefined FUN_1003a030(void)
 * called by: PM_PlayerMove
 */
void FUN_1003a030(void)

{
  byte_conflict *pbVar1;
  int iVar2;
  undefined4 uVar3;
  void *this;
  float local_4;
  
  if (*(int *)(DAT_100b3720 + 0xe0) != -1) {
    if ((*(int *)(DAT_100b3720 + 0xd0) == 0) && (350.0 <= *(float *)(DAT_100b3720 + 0x9c))) {
      local_4 = 0.5;
      if (*(int *)(DAT_100b3720 + 0xe4) < 1) {
        if (*(float *)(DAT_100b3720 + 0x9c) <= 680.0) {
          if (*(float *)(DAT_100b3720 + 0x9c) <= 340.0) {
            if (*(float *)(DAT_100b3720 + 0x9c) < 200.0) {
              local_4 = 0.0;
            }
          }
          else {
            pbVar1 = (byte_conflict *)
                     (**(code **)(DAT_100b3720 + 0x4f554))(DAT_100b3720 + 0x4f3f0,&DAT_100a1484);
            iVar2 = atoi(this,pbVar1);
            if (iVar2 == 1) {
              (**(code **)(DAT_100b3720 + 0x4f5b4))
                        (2,s_player_pl_fallpain3_wav_1009d494,0x3f800000,0x3f4ccccd,0,100);
            }
            local_4 = 0.85;
          }
        }
        else {
          (**(code **)(DAT_100b3720 + 0x4f5b4))
                    (2,s_player_pl_fallpain3_wav_1009d494,0x3f800000,0x3f4ccccd,0,100);
          local_4 = 1.0;
        }
      }
      if (0.0 < local_4) {
        *(undefined4 *)(DAT_100b3720 + 0x94) = 0;
        FUN_10037230();
        uVar3 = FUN_100370b0(*(undefined1 *)(DAT_100b3720 + 0x1f0));
        FUN_10036930(uVar3,local_4);
        *(float *)(DAT_100b3720 + 0xa8) = *(float *)(DAT_100b3720 + 0x9c) * 0.013;
        if (8.0 < *(float *)(DAT_100b3720 + 0xa0)) {
          *(undefined4 *)(DAT_100b3720 + 0xa0) = 0x41000000;
        }
      }
    }
    if (*(int *)(DAT_100b3720 + 0xe0) != -1) {
      *(undefined4 *)(DAT_100b3720 + 0x9c) = 0;
    }
  }
  return;
}

/* 1003a1e0  FUN_1003a1e0  (222 bytes)
 * undefined FUN_1003a1e0(void)
 * called by: PM_PlayerMove
 */
void FUN_1003a1e0(void)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_100b3720 + 0xec) == 0) {
    if (*(int *)(DAT_100b3720 + 0xe4) == 0) {
      return;
    }
  }
  else if (*(int *)(DAT_100b3720 + 0xe4) != 0) {
    return;
  }
  uVar1 = (**(code **)(DAT_100b3720 + 0x4f588))(0,3);
  switch(uVar1) {
  case 0:
    (**(code **)(DAT_100b3720 + 0x4f5b4))
              (4,s_player_pl_wade1_wav_1009d15c,0x3f800000,0x3f4ccccd,0,100);
    return;
  case 1:
    (**(code **)(DAT_100b3720 + 0x4f5b4))
              (4,s_player_pl_wade2_wav_1009d148,0x3f800000,0x3f4ccccd,0,100);
    return;
  case 2:
    (**(code **)(DAT_100b3720 + 0x4f5b4))
              (4,s_player_pl_wade3_wav_1009d134,0x3f800000,0x3f4ccccd,0,100);
    return;
  case 3:
    (**(code **)(DAT_100b3720 + 0x4f5b4))
              (4,s_player_pl_wade4_wav_1009d120,0x3f800000,0x3f4ccccd,0,100);
  }
  return;
}

/* 1003a2d0  FUN_1003a2d0  (151 bytes)
 * float10 FUN_1003a2d0(float * param_1, float * param_2, float param_3, float param_4)
 * called by: FUN_100654a0
 */
float10 __cdecl FUN_1003a2d0(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float10 fVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18 [3];
  float local_c [3];
  
  FUN_100362a0(param_1,local_c,&local_24,local_18);
  param_1 = (float *)0xffffffff;
  fVar1 = local_24 * *param_2 + local_20 * param_2[1] + local_1c * param_2[2];
  if (0.0 <= fVar1) {
    param_1 = (float *)0x1;
  }
  fVar2 = ABS((float10)fVar1);
  if (fVar2 < (float10)param_4) {
    return (float10)(int)param_1 * ((fVar2 * (float10)param_3) / (float10)param_4);
  }
  return (float10)(int)param_1 * (float10)param_3;
}

/* 1003a370  FUN_1003a370  (113 bytes)
 * undefined FUN_1003a370(float * param_1)
 * called by: FUN_100654a0
 */
void __cdecl FUN_1003a370(float *param_1)

{
  float10 fVar1;
  
  if (*(int *)(DAT_100b3720 + 0xd0) == 0) {
    fVar1 = (float10)FUN_10036480(param_1);
    fVar1 = fVar1 - (fVar1 * (float10)0.5 + (float10)10.0) *
                    (float10)*(float *)(DAT_100b3720 + 0x20c) *
                    (float10)*(float *)(DAT_100b3720 + 0x10);
    if (fVar1 <= (float10)0.0) {
      fVar1 = (float10)0.0;
    }
    FUN_100364d0(param_1,(float)fVar1,param_1);
    return;
  }
  FUN_100364d0(param_1,0.0,param_1);
  return;
}

/* 1003a3f0  FUN_1003a3f0  (237 bytes)
 * undefined FUN_1003a3f0(void)
 * called by: PM_PlayerMove
 */
void FUN_1003a3f0(void)

{
  if (0 < *(int *)(DAT_100b3720 + 0x94)) {
    *(uint *)(DAT_100b3720 + 0x94) =
         *(int *)(DAT_100b3720 + 0x94) - (uint)*(byte *)(DAT_100b3720 + 0x4545a);
    if (*(int *)(DAT_100b3720 + 0x94) < 0) {
      *(undefined4 *)(DAT_100b3720 + 0x94) = 0;
    }
  }
  if (0.0 < *(float *)(DAT_100b3720 + 0x8c)) {
    *(float *)(DAT_100b3720 + 0x8c) =
         *(float *)(DAT_100b3720 + 0x8c) - (float)*(byte *)(DAT_100b3720 + 0x4545a);
    if (*(float *)(DAT_100b3720 + 0x8c) < 0.0) {
      *(undefined4 *)(DAT_100b3720 + 0x8c) = 0;
    }
  }
  if (0.0 < *(float *)(DAT_100b3720 + 0xac)) {
    *(float *)(DAT_100b3720 + 0xac) =
         *(float *)(DAT_100b3720 + 0xac) - (float)*(byte *)(DAT_100b3720 + 0x4545a);
    if (*(float *)(DAT_100b3720 + 0xac) < 0.0) {
      *(undefined4 *)(DAT_100b3720 + 0xac) = 0;
    }
  }
  return;
}

/* 1003a910  FUN_1003a910  (539 bytes)
 * undefined FUN_1003a910(void)
 * called by: pfnPM_Init
 */
void FUN_1003a910(void)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float local_c [3];
  
  fVar2 = -0.125;
  puVar8 = (undefined4 *)&stack0xfffffff0;
  pfVar10 = (float *)&stack0xfffffff0;
  puVar7 = &DAT_100aee88;
  for (iVar5 = 0xa2; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar5 = 0;
  puVar7 = &DAT_100aee8c;
  do {
    puVar7[-1] = 0;
    *puVar7 = 0;
    puVar7[1] = fVar2;
    fVar2 = fVar2 + 0.125;
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 3;
  } while (fVar2 <= 0.125);
  fVar2 = -0.125;
  pfVar9 = (float *)(&DAT_100aee8c + iVar5 * 3);
  do {
    pfVar9[-1] = 0.0;
    iVar5 = iVar5 + 1;
    *pfVar9 = fVar2;
    fVar2 = fVar2 + 0.125;
    pfVar9[1] = 0.0;
    pfVar9 = pfVar9 + 3;
  } while (fVar2 <= 0.125);
  fVar2 = -0.125;
  puVar7 = &DAT_100aee8c + iVar5 * 3;
  do {
    puVar7[-1] = fVar2;
    fVar2 = fVar2 + 0.125;
    *puVar7 = 0;
    puVar7[1] = 0;
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 3;
  } while (fVar2 <= 0.125);
  fVar2 = -0.125;
  do {
    fVar3 = -0.125;
    do {
      fVar4 = -0.125;
      pfVar9 = (float *)(&DAT_100aee8c + iVar5 * 3);
      do {
        iVar6 = iVar5;
        iVar5 = iVar6 + 1;
        pfVar9[-1] = fVar2;
        *pfVar9 = fVar3;
        pfVar9[1] = fVar4;
        fVar4 = fVar4 + 0.25;
        pfVar9 = pfVar9 + 3;
      } while (fVar4 <= 0.125);
      fVar3 = fVar3 + 0.25;
    } while (fVar3 <= 0.125);
    fVar2 = fVar2 + 0.25;
  } while (fVar2 <= 0.125);
  iVar11 = 3;
  puVar7 = &DAT_100aee8c + iVar5 * 3;
  iVar6 = iVar6 + 4;
  do {
    puVar8 = puVar8 + 1;
    uVar1 = *puVar8;
    puVar7[-1] = 0;
    *puVar7 = 0;
    puVar7[1] = uVar1;
    puVar7 = puVar7 + 3;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  fVar2 = -2.0;
  pfVar9 = (float *)(&DAT_100aee8c + iVar6 * 3);
  do {
    pfVar9[-1] = 0.0;
    iVar6 = iVar6 + 1;
    *pfVar9 = fVar2;
    fVar2 = fVar2 + 2.0;
    pfVar9[1] = 0.0;
    pfVar9 = pfVar9 + 3;
  } while (fVar2 <= 2.0);
  fVar2 = -2.0;
  puVar8 = &DAT_100aee8c + iVar6 * 3;
  do {
    puVar8[-1] = fVar2;
    fVar2 = fVar2 + 2.0;
    *puVar8 = 0;
    puVar8[1] = 0;
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 3;
  } while (fVar2 <= 2.0);
  iVar5 = 3;
  do {
    pfVar10 = pfVar10 + 1;
    fVar2 = *pfVar10;
    fVar3 = -2.0;
    do {
      fVar4 = -2.0;
      pfVar9 = (float *)(&DAT_100aee8c + iVar6 * 3);
      do {
        iVar6 = iVar6 + 1;
        pfVar9[-1] = fVar3;
        *pfVar9 = fVar4;
        pfVar9[1] = fVar2;
        pfVar9 = pfVar9 + 3;
        fVar4 = fVar4 + 2.0;
      } while (fVar4 <= 2.0);
      fVar3 = fVar3 + 2.0;
    } while (fVar3 <= 2.0);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

/* 1003abc0  FUN_1003abc0  (18 bytes)
 * undefined4 * FUN_1003abc0(undefined4 * param_1)
 * called by: InstallGameRules
 */
undefined4 * __fastcall FUN_1003abc0(undefined4 *param_1)

{
  *param_1 = &PTR_RefreshSkillData_10090768;
  CGameRules::RefreshSkillData();
  return param_1;
}

/* 1003abf0  FUN_1003abf0  (39 bytes)
 * undefined FUN_1003abf0()
 */
bool FUN_1003abf0(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x9fc) == (int *)0x0) {
    return true;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x9fc) + 0x124))();
  return iVar1 != 0;
}

/* 1003ac20  FUN_1003ac20  (8 bytes)
 * undefined FUN_1003ac20()
 */
undefined4 FUN_1003ac20(void)

{
  return 1;
}

/* 1003ac30  FUN_1003ac30  (31 bytes)
 * undefined FUN_1003ac30()
 */
float10 FUN_1003ac30(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(param_1 + 0x814) - (float10)680.0;
  *(float *)(param_1 + 0x814) = (float)fVar1;
  return fVar1 * (float10)0.22522523;
}

/* 1003ac50  FUN_1003ac50  (15 bytes)
 * undefined FUN_1003ac50()
 */
bool FUN_1003ac50(void)

{
  return DAT_100ae4b0 == 1;
}

/* 1003ac70  FUN_1003ac70  (9 bytes)
 * undefined FUN_1003ac70()
 */
float10 FUN_1003ac70(void)

{
  return (float10)-1.0;
}

/* 1003ac80  FUN_1003ac80  (8 bytes)
 * undefined FUN_1003ac80()
 */
undefined4 FUN_1003ac80(void)

{
  return 2;
}

/* 1003ac90  FUN_1003ac90  (8 bytes)
 * undefined4 FUN_1003ac90(void)
 * called by: FUN_1003fde0
 */
undefined4 FUN_1003ac90(void)

{
  return 1;
}

/* 1003aca0  FUN_1003aca0  (3 bytes)
 * undefined FUN_1003aca0(void)
 * called by: CHalfLifeMultiplay::PlayerKilled
 */
void FUN_1003aca0(void)

{
  return;
}

/* 1003acb0  FUN_1003acb0  (8 bytes)
 * undefined FUN_1003acb0()
 */
undefined4 FUN_1003acb0(void)

{
  return 6;
}

/* 1003acd0  FUN_1003acd0  (3 bytes)
 * undefined FUN_1003acd0(void)
 * called by: CBaseMonster::TakeDamage
 */
void FUN_1003acd0(void)

{
  return;
}

/* 1003ace0  FUN_1003ace0  (8 bytes)
 * undefined FUN_1003ace0()
 */
undefined4 FUN_1003ace0(void)

{
  return 4;
}

/* 1003acf0  FUN_1003acf0  (8 bytes)
 * undefined FUN_1003acf0()
 */
undefined4 FUN_1003acf0(void)

{
  return 9;
}

/* 1003ad00  FUN_1003ad00  (8 bytes)
 * undefined FUN_1003ad00()
 */
undefined4 FUN_1003ad00(void)

{
  return 0xc;
}

/* 1003ad10  FUN_1003ad10  (5 bytes)
 * undefined4 FUN_1003ad10(void)
 * called by: CBasePlayer::CheatImpulseCommands
 */
undefined4 FUN_1003ad10(void)

{
  return 0;
}

/* 1003ad40  FUN_1003ad40  (5 bytes)
 * undefined FUN_1003ad40()
 */
undefined4 FUN_1003ad40(void)

{
  return 0;
}

/* 1003ad60  FUN_1003ad60  (8 bytes)
 * undefined FUN_1003ad60()
 */
undefined4 FUN_1003ad60(void)

{
  return 1;
}

/* 1003c1f0  FUN_1003c1f0  (102 bytes)
 * undefined FUN_1003c1f0(int param_1, int param_2)
 * called by: SENTENCEG_Init, USENTENCEG_Pick
 */
void __cdecl FUN_1003c1f0(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_100c0530 != 0) {
    if (0x20 < param_2) {
      param_2 = 0x20;
    }
    iVar2 = 0;
    if (0 < param_2) {
      do {
        *(char *)(iVar2 + param_1) = (char)iVar2;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
    }
    iVar2 = param_2 * 4;
    if (0 < iVar2) {
      do {
        iVar3 = (*g_engfuncs.pfnRandomLong)(0,param_2 + -1);
        iVar4 = (*g_engfuncs.pfnRandomLong)(0,param_2 + -1);
        uVar1 = *(undefined1 *)(iVar3 + param_1);
        *(undefined1 *)(iVar3 + param_1) = *(undefined1 *)(iVar4 + param_1);
        iVar2 = iVar2 + -1;
        *(undefined1 *)(iVar4 + param_1) = uVar1;
      } while (iVar2 != 0);
    }
  }
  return;
}

/* 1003cc80  FUN_1003cc80  (145 bytes)
 * undefined4 * FUN_1003cc80(int param_1, int param_2, int * param_3, undefined4 * param_4, int param_5)
 * called by: SENTENCEG_Init, TEXTURETYPE_LoadMapMaterials, TEXTURETYPE_LoadStandardMaterials
 */
undefined4 * __cdecl
FUN_1003cc80(int param_1,int param_2,int *param_3,undefined4 *param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (((param_1 != 0) && (param_4 != (undefined4 *)0x0)) && (iVar2 = *param_3, iVar2 < param_2)) {
    if (param_5 + -1 < param_2 - iVar2) {
      param_2 = iVar2 + -1 + param_5;
    }
    bVar8 = false;
    iVar5 = iVar2;
    while ((iVar5 < param_2 && (!bVar8))) {
      pcVar1 = (char *)(iVar5 + param_1);
      iVar5 = iVar5 + 1;
      bVar8 = *pcVar1 == '\n';
    }
    if (iVar5 != iVar2) {
      uVar4 = iVar5 - iVar2;
      puVar6 = (undefined4 *)(iVar2 + param_1);
      puVar7 = param_4;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      if ((int)uVar4 < param_5) {
        *(undefined1 *)(uVar4 + (int)param_4) = 0;
      }
      *param_3 = iVar5;
      return param_4;
    }
  }
  return (undefined4 *)0x0;
}

/* 1003dc00  FUN_1003dc00  (44 bytes)
 * undefined FUN_1003dc00(undefined4 * param_1)
 * called by: CBasePlayer::Killed
 */
void __fastcall FUN_1003dc00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = DAT_100ae498;
  param_1[1] = DAT_100ae49c;
  uVar1 = DAT_100ae4a0;
  param_1[6] = 0xffffffff;
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

/* 1003df90  FUN_1003df90  (16 bytes)
 * int FUN_1003df90(undefined4 param_1)
 * called by: CBasePlayer::Killed, CBasePlayer::UpdatePlayerSound
 */
int __cdecl FUN_1003df90(edict_t *param_1)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(param_1);
  return iVar1 + -1;
}

/* 1003e000  FUN_1003e000  (41 bytes)
 * undefined FUN_1003e000(int param_1)
 * called by: pfnSpectatorConnect
 */
void __fastcall FUN_1003e000(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4) = 0x4000000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 8;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

/* 1003f370  FUN_1003f370  (55 bytes)
 * undefined FUN_1003f370()
 */
void FUN_1003f370(int param_1)

{
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100d9724,(float *)0x0,*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(g_teamplay);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 1003f3b0  FUN_1003f3b0  (287 bytes)
 * undefined FUN_1003f3b0()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __thiscall FUN_1003f3b0(CHalfLifeTeamplay *param_1,int param_2)

{
  int iVar1;
  char *_Source;
  char *pcVar2;
  char *unaff_EDI;
  
  if ((TSGameRules == '\0') || (TSGameRules == '\x01')) {
    if (DAT_102efbc0 == 0) {
      pcVar2 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(*(int *)(param_2 + 4) + 0x208));
      pcVar2 = (*g_engfuncs.pfnInfoKeyValue)(pcVar2,unaff_EDI);
      _strncpy((char *)(param_2 + 0xb34),pcVar2,0x10);
    }
    else if (*(char *)(param_2 + 0x7a5) == '\0') {
      _strncpy((char *)(param_2 + 0xb34),&DAT_100c0afc,0x10);
    }
    else {
      _strncpy((char *)(param_2 + 0xb34),&DAT_100c0a70,0x10);
    }
  }
  CHalfLifeTeamplay::RecountTeams(param_1,'\x01');
  pcVar2 = (char *)(param_2 + 0xb34);
  if ((*(char *)(param_2 + 0xb34) != '\0') &&
     (iVar1 = (**(code **)(*(int *)param_1 + 0xd0))(), iVar1 != 0)) {
    if (_DAT_1009ec9c == 0.0) {
      return pcVar2;
    }
    _strncpy(pcVar2,(char *)&DAT_100c0548,0x10);
    return pcVar2;
  }
  if (_DAT_1009ec9c == 0.0) {
    _Source = (char *)FUN_10040030((int *)param_1);
    _strncpy(pcVar2,_Source,0x10);
    return pcVar2;
  }
  _strncpy(pcVar2,(char *)&DAT_100c0548,0x10);
  return pcVar2;
}

/* 1003fde0  FUN_1003fde0  (78 bytes)
 * undefined4 FUN_1003fde0(int param_1, int param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1003fde0(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = (**(code **)(*(int *)this + 0xc4))(param_1,param_2);
    if (((iVar1 == 1) && (_DAT_1009ebc4 == 0.0)) && (param_2 != param_1)) {
      return 0;
    }
  }
  uVar2 = FUN_1003ac90();
  return uVar2;
}

/* 1003feb0  FUN_1003feb0  (85 bytes)
 * undefined FUN_1003feb0()
 */
undefined4 __thiscall FUN_1003feb0(int *param_1,undefined4 param_2,edict_t *param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((param_3 == (edict_t *)0x0) &&
     (param_3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), param_3 == (edict_t *)0x0)) {
    return 1;
  }
  piVar1 = param_3->pvPrivateData;
  if (((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xc0))(), iVar2 != 0)) &&
     (iVar2 = (**(code **)(*param_1 + 0xc4))(param_2,piVar1), iVar2 == 1)) {
    return 0;
  }
  return 1;
}

/* 1003ff10  FUN_1003ff10  (56 bytes)
 * undefined FUN_1003ff10()
 */
undefined4 __thiscall FUN_1003ff10(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  if ((param_2 != 0) && (param_2 != param_3)) {
    iVar1 = (**(code **)(*param_1 + 0xc4))(param_2,param_3);
    if (iVar1 == 1) {
      return 0xffffffff;
    }
  }
  return 1;
}

/* 1003ff50  FUN_1003ff50  (34 bytes)
 * undefined FUN_1003ff50()
 */
undefined1 * FUN_1003ff50(int *param_1)

{
  undefined1 *puVar1;
  
  if ((param_1 != (int *)0x0) && (param_1[1] != 0)) {
    puVar1 = (undefined1 *)(**(code **)(*param_1 + 200))();
    return puVar1;
  }
  return &DAT_100a9398;
}

/* 1003ff80  FUN_1003ff80  (76 bytes)
 * int FUN_1003ff80(byte.conflict * param_1)
 */
int __thiscall FUN_1003ff80(void *this,byte_conflict *param_1)

{
  uint uVar1;
  void *extraout_ECX;
  int iVar2;
  byte_conflict *pbVar3;
  
  if (((param_1 != (byte_conflict *)0x0) && (*param_1 != '\0')) && (iVar2 = 0, 0 < DAT_100c07d0)) {
    pbVar3 = (byte_conflict *)&DAT_100c0548;
    do {
      uVar1 = FUN_100887b0(this,pbVar3,param_1);
      if (uVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pbVar3 = pbVar3 + 0x10;
      this = extraout_ECX;
    } while (iVar2 < DAT_100c07d0);
  }
  return -1;
}

/* 1003ffd0  FUN_1003ffd0  (35 bytes)
 * undefined FUN_1003ffd0()
 */
undefined4 * FUN_1003ffd0(int param_1)

{
  if ((-1 < param_1) && (param_1 < DAT_100c07d0)) {
    return &DAT_100c0548 + param_1 * 4;
  }
  return (undefined4 *)&DAT_100a9398;
}

/* 10040000  FUN_10040000  (44 bytes)
 * undefined FUN_10040000()
 */
bool __thiscall FUN_10040000(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[0x85] == 0) {
    return true;
  }
  iVar1 = (**(code **)(*param_1 + 200))(param_2);
  return iVar1 != -1;
}

/* 10040030  FUN_10040030  (169 bytes)
 * undefined4 * FUN_10040030(int * param_1)
 * called by: CHalfLifeTeamplay::ChangePlayerTeam, FUN_1003f3b0
 */
undefined4 * __fastcall FUN_10040030(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_80 [32];
  
  iVar6 = 0x20;
  piVar1 = local_80;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  }
  iVar4 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar1 = (int *)UTIL_PlayerByIndex(iVar4);
      if (piVar1 != (int *)0x0) {
        iVar3 = *param_1;
        uVar2 = (**(code **)(*piVar1 + 200))();
        iVar3 = (**(code **)(iVar3 + 200))(uVar2);
        if (-1 < iVar3) {
          local_80[iVar3] = local_80[iVar3] + 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= gpGlobals->maxClients);
  }
  puVar7 = (undefined4 *)0x0;
  if (0 < DAT_100c07d0) {
    puVar5 = &DAT_100c0548;
    piVar1 = local_80;
    iVar4 = DAT_100c07d0;
    do {
      if (*piVar1 < iVar6) {
        iVar6 = *piVar1;
        puVar7 = puVar5;
      }
      piVar1 = piVar1 + 1;
      puVar5 = puVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return puVar7;
}

/* 10040370  FUN_10040370  (35 bytes)
 * undefined FUN_10040370()
 */
char * FUN_10040370(void)

{
  char *pcVar1;
  
  if (DAT_102efbc0 != 0) {
    return s_The_Specialists__The_One__1009fd98;
  }
  pcVar1 = s_The_Specialists__LMS__1009fdb4;
  if (DAT_102efbc4 == 0) {
    pcVar1 = s_The_Specialists__Teamplay__1009fd7c;
  }
  return pcVar1;
}

/* 10041150  FUN_10041150  (41 bytes)
 * undefined FUN_10041150(int * param_1)
 * called by: CTriggerCDAudio::Touch, CTriggerCDAudio::Use
 */
void __fastcall FUN_10041150(int *param_1)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  PlayCDTrack((int)lVar1);
  param_1[5] = 0;
  UTIL_Remove(param_1);
  return;
}

/* 100412e0  FUN_100412e0  (34 bytes)
 * undefined FUN_100412e0(int * param_1)
 * called by: CTargetCDAudio::Think, CTargetCDAudio::Use
 */
void __fastcall FUN_100412e0(int *param_1)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  PlayCDTrack((int)lVar1);
  UTIL_Remove(param_1);
  return;
}

/* 100424b0  FUN_100424b0  (259 bytes)
 * undefined4 FUN_100424b0(byte.conflict * param_1, int param_2, byte.conflict * param_3, char * param_4, int param_5)
 * called by: CChangeLevel::ChangeList
 */
undefined4 __cdecl
FUN_100424b0(byte_conflict *param_1,int param_2,byte_conflict *param_3,char *param_4,int param_5)

{
  byte_conflict *pbVar1;
  byte_conflict bVar2;
  char cVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte_conflict *pbVar12;
  char *pcVar13;
  byte_conflict *pbVar14;
  bool bVar15;
  
  if ((((param_1 == (byte_conflict *)0x0) || (param_3 == (byte_conflict *)0x0)) ||
      (param_4 == (char *)0x0)) || (param_5 == 0)) {
    return 0;
  }
  iVar9 = 0;
  pbVar10 = param_1;
  if (0 < param_2) {
    do {
      pbVar5 = pbVar10;
      pbVar11 = param_3;
      if (*(int *)(pbVar10 + 0x40) == param_5) {
        do {
          bVar4 = *pbVar5;
          bVar15 = bVar4 < *pbVar11;
          if (bVar4 != *pbVar11) {
LAB_10042519:
            iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_1004251e;
          }
          if (bVar4 == 0) break;
          bVar4 = pbVar5[1];
          bVar15 = bVar4 < pbVar11[1];
          if (bVar4 != pbVar11[1]) goto LAB_10042519;
          pbVar5 = pbVar5 + 2;
          pbVar11 = pbVar11 + 2;
        } while (bVar4 != 0);
        iVar6 = 0;
LAB_1004251e:
        if (iVar6 == 0) {
          return 0;
        }
      }
      iVar9 = iVar9 + 1;
      pbVar10 = pbVar10 + 0x50;
    } while (iVar9 < param_2);
  }
  uVar7 = 0xffffffff;
  pbVar1 = param_1 + param_2 * 0x50;
  do {
    pbVar12 = param_3;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pbVar12 = param_3 + 1;
    bVar2 = *param_3;
    param_3 = pbVar12;
  } while (bVar2 != '\0');
  uVar7 = ~uVar7;
  pbVar12 = pbVar12 + -uVar7;
  pbVar14 = pbVar1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pbVar14 = *(undefined4 *)pbVar12;
    pbVar12 = pbVar12 + 4;
    pbVar14 = pbVar14 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pbVar14 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    pbVar14 = pbVar14 + 1;
  }
  uVar7 = 0xffffffff;
  do {
    pcVar13 = param_4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar13 = param_4 + 1;
    cVar3 = *param_4;
    param_4 = pcVar13;
  } while (cVar3 != '\0');
  uVar7 = ~uVar7;
  pbVar12 = (byte_conflict *)(pcVar13 + -uVar7);
  pbVar14 = pbVar1 + 0x20;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pbVar14 = *(undefined4 *)pbVar12;
    pbVar12 = pbVar12 + 4;
    pbVar14 = pbVar14 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pbVar14 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    pbVar14 = pbVar14 + 1;
  }
  *(int *)(pbVar1 + 0x40) = param_5;
  *(undefined4 *)(pbVar1 + 0x44) = *(undefined4 *)(param_5 + 0x88);
  *(undefined4 *)(pbVar1 + 0x48) = *(undefined4 *)(param_5 + 0x8c);
  *(undefined4 *)(pbVar1 + 0x4c) = *(undefined4 *)(param_5 + 0x90);
  return 1;
}

/* 100425e0  FUN_100425e0  (250 bytes)
 * undefined4 FUN_100425e0(int * param_1, undefined4 param_2)
 * called by: CChangeLevel::ChangeLevelNow, CChangeLevel::ChangeList
 */
/* WARNING: Removing unreachable block (ram,0x10042615) */
/* WARNING: Removing unreachable block (ram,0x10042629) */

undefined4 __cdecl FUN_100425e0(int *param_1,char *param_2)

{
  byte bVar1;
  void *this;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  char *pcVar6;
  bool bVar7;
  edict_t *pEdictStartSearchAfter;
  
  uVar2 = (**(code **)(*param_1 + 0x30))();
  if ((uVar2 & 0x80) != 0) {
    return 1;
  }
  if ((*(int *)(param_1[1] + 0x108) == 0xc) && (iVar3 = *(int *)(param_1[1] + 0x194), iVar3 != 0)) {
    param_1 = *(int **)(iVar3 + 0x7c);
  }
  uVar5 = 1;
  pEdictStartSearchAfter = (edict_t *)0x0;
  do {
    do {
      pEdictStartSearchAfter =
           (*g_engfuncs.pfnFindEntityByString)(pEdictStartSearchAfter,s_targetname_1009c68c,param_2)
      ;
      if ((pEdictStartSearchAfter == (edict_t *)0x0) ||
         (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter), iVar3 == 0)) {
        return uVar5;
      }
      this = pEdictStartSearchAfter->pvPrivateData;
    } while (this == (void *)0x0);
    pcVar6 = s_trigger_transition_100a2dcc;
    pbVar4 = (byte *)(gpGlobals->pStringBase + **(int **)((int)this + 4));
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_100426a4:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_100426a9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_100426a4;
      pbVar4 = pbVar4 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_100426a9:
    if (iVar3 == 0) {
      iVar3 = FUN_1000ece0(this,(int)param_1);
      if (iVar3 != 0) {
        return 1;
      }
      uVar5 = 0;
    }
  } while( true );
}

/* 10043a70  FUN_10043a70  (773 bytes)
 * undefined FUN_10043a70(int param_1)
 * called by: CTriggerCamera::FollowTarget, CTriggerCamera::Use
 */
void __fastcall FUN_10043a70(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float10 fVar7;
  Vector VStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  Vector VStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  Vector VStack_18;
  Vector VStack_c;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    fVar2 = *(float *)(param_1 + 0x80) -
            *(float *)(*(int *)(param_1 + 4) + 0x1f8) * gpGlobals->frametime;
    *(float *)(param_1 + 0x80) = fVar2;
    if (fVar2 <= 0.0) {
      iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x6c) + 4) + 0x1d4);
      if (iVar4 != 0) {
        FireTargets((int)(gpGlobals->pStringBase + iVar4),param_1,param_1,3,0);
        iVar4 = *(int *)(*(int *)(param_1 + 0x6c) + 4);
        if ((*(byte *)(iVar4 + 0x1a0) & 4) != 0) {
          *(undefined4 *)(iVar4 + 0x1d4) = 0;
        }
      }
      iVar4 = (**(code **)(**(int **)(param_1 + 0x6c) + 0xcc))();
      *(int *)(param_1 + 0x6c) = iVar4;
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 4);
        *(undefined4 *)(iVar4 + 0x20) = DAT_100ae498;
        *(undefined4 *)(iVar4 + 0x24) = DAT_100ae49c;
        *(undefined4 *)(iVar4 + 0x28) = DAT_100ae4a0;
      }
      else {
        if (*(float *)(*(int *)(iVar4 + 4) + 0x1f8) != 0.0) {
          *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x1f8);
        }
        iVar4 = *(int *)(iVar4 + 4);
        iVar1 = *(int *)(param_1 + 4);
        fVar2 = *(float *)(iVar4 + 8) - *(float *)(iVar1 + 8);
        VStack_48.y = *(float *)(iVar4 + 0xc) - *(float *)(iVar1 + 0xc);
        VStack_48.z = *(float *)(iVar4 + 0x10) - *(float *)(iVar1 + 0x10);
        fVar3 = SQRT(fVar2 * fVar2 + VStack_48.y * VStack_48.y + VStack_48.z * VStack_48.z);
        *(float *)(param_1 + 0x80) = fVar3;
        if (fVar3 == 0.0) {
          fStack_3c = 0.0;
          fStack_38 = 0.0;
          fStack_34 = 1.0;
          pfVar5 = &fStack_3c;
        }
        else {
          fVar3 = 1.0 / fVar3;
          pfVar5 = (float *)Vector::Vector(&VStack_c,fVar3 * fVar2,VStack_48.y * fVar3,
                                           VStack_48.z * fVar3);
        }
        Vector::Vector(&VStack_48,pfVar5);
        iVar4 = *(int *)(param_1 + 4);
        *(float *)(iVar4 + 0x44) = VStack_48.x;
        *(float *)(iVar4 + 0x48) = VStack_48.y;
        *(float *)(iVar4 + 0x4c) = VStack_48.z;
        fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x6c) + 0x88))();
        *(float *)(param_1 + 0x7c) = (float)(fVar7 + (float10)gpGlobals->time);
      }
    }
    if (*(float *)(param_1 + 0x7c) <= gpGlobals->time) {
      fVar7 = FUN_10077150(*(float *)(param_1 + 0x84),*(float *)(*(int *)(param_1 + 4) + 0x1f8),
                           gpGlobals->frametime * *(float *)(param_1 + 0x8c));
      *(float *)(*(int *)(param_1 + 4) + 0x1f8) = (float)fVar7;
    }
    else {
      fVar7 = FUN_10077150(0.0,*(float *)(*(int *)(param_1 + 4) + 0x1f8),
                           gpGlobals->frametime * *(float *)(param_1 + 0x90));
      *(float *)(*(int *)(param_1 + 4) + 0x1f8) = (float)fVar7;
    }
    fVar2 = gpGlobals->frametime + gpGlobals->frametime;
    iVar4 = *(int *)(param_1 + 4);
    VStack_48.z = 1.0 - fVar2;
    VStack_48.x = VStack_48.z * *(float *)(iVar4 + 0x20);
    VStack_48.y = VStack_48.z * *(float *)(iVar4 + 0x24);
    VStack_48.z = VStack_48.z * *(float *)(iVar4 + 0x28);
    fStack_34 = *(float *)(iVar4 + 0x1f8);
    fStack_3c = fStack_34 * *(float *)(iVar4 + 0x44);
    fStack_38 = fStack_34 * *(float *)(iVar4 + 0x48);
    fStack_34 = fStack_34 * *(float *)(iVar4 + 0x4c);
    Vector::Vector(&VStack_30,&fStack_3c);
    fStack_24 = VStack_30.x * fVar2;
    fStack_20 = VStack_30.y * fVar2;
    fStack_1c = VStack_30.z * fVar2;
    Vector::Vector(&VStack_18,&fStack_24);
    puVar6 = (undefined4 *)
             Vector::Vector(&VStack_48,VStack_18.x + VStack_48.x,VStack_18.y + VStack_48.y,
                            VStack_18.z + VStack_48.z);
    Vector::Vector(&VStack_c,puVar6);
    iVar4 = *(int *)(param_1 + 4);
    *(float *)(iVar4 + 0x20) = VStack_c.x;
    *(float *)(iVar4 + 0x24) = VStack_c.y;
    *(float *)(iVar4 + 0x28) = VStack_c.z;
  }
  return;
}

/* 10044510  FUN_10044510  (170 bytes)
 * undefined4 FUN_10044510(float param_1, float param_2, float param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, float param_7, float param_8)
 * called by: CTSAnimation::Animate, CTSStunt::GoRoll, FUN_100466f0, FUN_10046820, FUN_10069a90, FUN_10069df0, FUN_1006aa30
 */
undefined4 __cdecl
FUN_10044510(float param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,float param_7,float param_8)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_5;
  local_4 = param_6;
  local_c = 0;
  UTIL_MakeVectors(&local_c);
  fVar1 = param_1 * gpGlobals->v_right[0] +
          param_2 * gpGlobals->v_right[1] + param_3 * gpGlobals->v_right[2];
  if (fVar1 < -param_7) {
    return 0;
  }
  if (param_7 < fVar1) {
    return 1;
  }
  uVar2 = 3;
  if (-param_8 <=
      param_1 * gpGlobals->v_forward[0] +
      param_2 * gpGlobals->v_forward[1] + param_3 * gpGlobals->v_forward[2]) {
    uVar2 = 2;
  }
  return uVar2;
}

/* 10044a20  FUN_10044a20  (59 bytes)
 * undefined FUN_10044a20(undefined4 * param_1)
 * called by: CBasePlayer::TSInit
 */
void __fastcall FUN_10044a20(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[4] = 0;
  param_1[0x79] = 0;
  param_1[6] = 1;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  return;
}

/* 100465c0  FUN_100465c0  (45 bytes)
 * undefined FUN_100465c0(float * param_1)
 * called by: CTSAnimation::Animate
 */
void __thiscall FUN_100465c0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((int)this + 4);
  fVar2 = *(float *)((int)this + 8);
  *param_1 = -*(float *)this;
  param_1[1] = -fVar1;
  param_1[2] = -fVar2;
  return;
}

/* 100465f0  FUN_100465f0  (23 bytes)
 * undefined FUN_100465f0(int param_1)
 * called by: CBasePlayer::TakeDamage
 */
void __fastcall FUN_100465f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  return;
}

/* 10046610  FUN_10046610  (33 bytes)
 * undefined FUN_10046610(int param_1)
 * called by: CBasePlayer::TakeDamage
 */
void __fastcall FUN_10046610(int param_1)

{
  *(undefined4 *)(param_1 + 0x1e4) = 1;
  *(undefined4 *)(param_1 + 0x1dc) = 0x3e19999a;
  *(undefined4 *)(param_1 + 0x1e0) = 0x40400000;
  return;
}

/* 10046640  FUN_10046640  (167 bytes)
 * undefined FUN_10046640(void * param_1)
 * called by: CBasePlayer::TraceAttack
 */
void __thiscall FUN_10046640(void *this,void *param_1)

{
  int iVar1;
  
  if ((((*(int *)((int)this + 0x1e4) != 0) && (0.01 <= *(float *)((int)this + 0x1e0))) &&
      (*(float *)((int)this + 0x1dc) <= 0.0)) && (*(int *)((int)param_1 + 0x68) == 0)) {
    *(undefined4 *)((int)this + 0x1dc) = 0x3e19999a;
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,2);
    if (iVar1 == 0) {
      CTSAnimation::SetAnim(param_1,(byte_conflict *)s_normal_die1_100a3088,0x14,0);
    }
    else {
      if (iVar1 == 1) {
        CTSAnimation::SetAnim(param_1,(byte_conflict *)s_normal_die2_100a3094,0x14,0);
        return;
      }
      if (iVar1 == 2) {
        CTSAnimation::SetAnim(param_1,(byte_conflict *)s_normal_die3_100a30a0,0x14,0);
        return;
      }
    }
  }
  return;
}

/* 100466f0  FUN_100466f0  (290 bytes)
 * undefined FUN_100466f0(void * param_1)
 * called by: CTSAnimation::Animate
 */
void __thiscall FUN_100466f0(void *this,void *param_1)

{
  char cVar1;
  byte_conflict bVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte_conflict *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  byte *pbVar14;
  byte_conflict *pbVar15;
  bool bVar16;
  float in_stack_ffffff90;
  float fVar17;
  float in_stack_ffffff9c;
  float in_stack_ffffffa0;
  float in_stack_ffffffa4;
  float fVar18;
  float fVar19;
  byte_conflict local_40 [64];
  
  if (*(char *)((int)param_1 + 0x508) != '\0') {
    fVar19 = 0.3;
    fVar18 = 0.6;
    puVar4 = (undefined4 *)(*(int *)((int)param_1 + 4) + 0x74);
    fVar17 = 2.6111873e-29;
    Vector::Vector((Vector *)&stack0xffffff9c,puVar4);
    Vector::Vector((Vector *)&stack0xffffff90,(undefined4 *)((int)param_1 + 0x4fc));
    iVar5 = FUN_10044510(in_stack_ffffff90,fVar17,(float)puVar4,in_stack_ffffff9c,in_stack_ffffffa0,
                         in_stack_ffffffa4,fVar18,fVar19);
    if ((iVar5 != *(int *)((int)this + 0x14)) && (iVar5 != 2)) {
      uVar8 = 0xffffffff;
      pcVar12 = (char *)(iVar5 * 0x10 + 0x9c + (int)this);
      do {
        pcVar13 = pcVar12;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar12 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pbVar10 = (byte_conflict *)(pcVar13 + -uVar8);
      pbVar15 = local_40;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar15 = *(undefined4 *)pbVar10;
        pbVar10 = pbVar10 + 4;
        pbVar15 = pbVar15 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar15 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        pbVar15 = pbVar15 + 1;
      }
      pbVar11 = &DAT_100a9398;
      pbVar14 = (byte *)((int)param_1 + 0xb44);
      pbVar6 = pbVar14;
      do {
        bVar3 = *pbVar6;
        bVar16 = bVar3 < *pbVar11;
        if (bVar3 != *pbVar11) {
LAB_100467b7:
          iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_100467bc;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar6[1];
        bVar16 = bVar3 < pbVar11[1];
        if (bVar3 != pbVar11[1]) goto LAB_100467b7;
        pbVar6 = pbVar6 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar3 != 0);
      iVar7 = 0;
LAB_100467bc:
      if (iVar7 == 0) {
        pbVar14 = &DAT_1009a3e0;
      }
      uVar8 = 0xffffffff;
      do {
        pbVar6 = pbVar14;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pbVar6 = pbVar14 + 1;
        bVar3 = *pbVar14;
        pbVar14 = pbVar6;
      } while (bVar3 != 0);
      uVar8 = ~uVar8;
      iVar7 = -1;
      pbVar10 = local_40;
      do {
        pbVar15 = pbVar10;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pbVar15 = pbVar10 + 1;
        bVar2 = *pbVar10;
        pbVar10 = pbVar15;
      } while (bVar2 != '\0');
      pbVar14 = pbVar6 + -uVar8;
      pbVar6 = pbVar15 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar6 = *(undefined4 *)pbVar14;
        pbVar14 = pbVar14 + 4;
        pbVar6 = pbVar6 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar6 = *pbVar14;
        pbVar14 = pbVar14 + 1;
        pbVar6 = pbVar6 + 1;
      }
      CTSAnimation::SetAnim(param_1,local_40,0x194,0);
      *(int *)((int)this + 0x14) = iVar5;
    }
  }
  return;
}

/* 10046820  FUN_10046820  (256 bytes)
 * undefined FUN_10046820(void * param_1)
 * called by: CTSAnimation::Animate
 */
void __thiscall FUN_10046820(void *this,void *param_1)

{
  char cVar1;
  byte_conflict bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte_conflict *pbVar10;
  char *pcVar11;
  char *pcVar12;
  byte_conflict *pbVar13;
  bool bVar14;
  int in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000028;
  byte *in_stack_0000002c;
  float in_stack_ffffff90;
  float fVar15;
  undefined4 *puVar16;
  float in_stack_ffffff9c;
  float in_stack_ffffffa0;
  float in_stack_ffffffa4;
  byte_conflict local_40 [64];
  
  pbVar9 = &DAT_100a9398;
  pbVar4 = in_stack_0000002c;
  do {
    bVar3 = *pbVar4;
    bVar14 = bVar3 < *pbVar9;
    if (bVar3 != *pbVar9) {
LAB_1004685a:
      iVar5 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_1004685f;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar4[1];
    bVar14 = bVar3 < pbVar9[1];
    if (bVar3 != pbVar9[1]) goto LAB_1004685a;
    pbVar4 = pbVar4 + 2;
    pbVar9 = pbVar9 + 2;
  } while (bVar3 != 0);
  iVar5 = 0;
LAB_1004685f:
  if (iVar5 != 0) {
    puVar16 = (undefined4 *)&stack0x00000014;
    fVar15 = 2.6112914e-29;
    Vector::Vector((Vector *)&stack0xffffff9c,puVar16);
    Vector::Vector((Vector *)&stack0xffffff90,(undefined4 *)&stack0x00000008);
    iVar5 = FUN_10044510(in_stack_ffffff90,fVar15,(float)puVar16,in_stack_ffffff9c,in_stack_ffffffa0
                         ,in_stack_ffffffa4,in_stack_00000024,in_stack_00000028);
    if (iVar5 != *(int *)((int)this + 0x14)) {
      uVar6 = 0xffffffff;
      pcVar11 = (char *)(iVar5 * 0x10 + in_stack_00000020);
      do {
        pcVar12 = pcVar11;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pbVar10 = (byte_conflict *)(pcVar12 + -uVar6);
      pbVar13 = local_40;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar10;
        pbVar10 = pbVar10 + 4;
        pbVar13 = pbVar13 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar13 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        pbVar13 = pbVar13 + 1;
      }
      uVar6 = 0xffffffff;
      do {
        pbVar4 = in_stack_0000002c;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pbVar4 = in_stack_0000002c + 1;
        bVar3 = *in_stack_0000002c;
        in_stack_0000002c = pbVar4;
      } while (bVar3 != 0);
      uVar6 = ~uVar6;
      iVar8 = -1;
      pbVar10 = local_40;
      do {
        pbVar13 = pbVar10;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pbVar13 = pbVar10 + 1;
        bVar2 = *pbVar10;
        pbVar10 = pbVar13;
      } while (bVar2 != '\0');
      pbVar4 = pbVar4 + -uVar6;
      pbVar9 = pbVar13 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar4;
        pbVar4 = pbVar4 + 4;
        pbVar9 = pbVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar9 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        pbVar9 = pbVar9 + 1;
      }
      CTSAnimation::SetAnim(param_1,local_40,0x194,0);
      *(int *)((int)this + 0x14) = iVar5;
    }
  }
  return;
}

/* 10046f90  FUN_10046f90  (40 bytes)
 * undefined4 FUN_10046f90(int param_1)
 * called by: CTSAnimation::Animate
 */
undefined4 FUN_10046f90(int param_1)

{
  if (param_1 == 0x3a) {
    return 1;
  }
  if ((9 < param_1) && (param_1 < 0x28)) {
    return 1;
  }
  return 0;
}

/* 10047080  FUN_10047080  (12 bytes)
 * undefined4 * FUN_10047080(undefined4 * param_1)
 * called by: FUN_1004d070
 */
undefined4 * __fastcall FUN_10047080(undefined4 *param_1)

{
  CBulletManager::Reset(param_1);
  return param_1;
}

/* 100470c0  FUN_100470c0  (131 bytes)
 * undefined FUN_100470c0(void * param_1)
 * called by: CTSGameRules::Think
 */
void __fastcall FUN_100470c0(void *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined1 local_38 [56];
  
  *(undefined4 *)((int)param_1 + 0x4000) = 0;
  iVar3 = 0;
  pfVar2 = (float *)((int)param_1 + 0x38);
  do {
    if (pfVar2[-0xe] != 0.0) {
      if (*pfVar2 < gpGlobals->time) {
        fVar1 = gpGlobals->time;
        *pfVar2 = fVar1;
        if ((-1 < DAT_100c0fc0) && (DAT_100c0fc0 < 2)) {
          *pfVar2 = 0.1 / (float)(DAT_100c0fc0 + 1) + fVar1;
        }
        FUN_10047280(param_1,iVar3,(float)local_38);
      }
      *(int *)((int)param_1 + 0x4000) = *(int *)((int)param_1 + 0x4000) + 1;
    }
    iVar3 = iVar3 + 1;
    pfVar2 = pfVar2 + 0x10;
  } while (iVar3 < 0x100);
  return;
}

/* 10047260  FUN_10047260  (25 bytes)
 * undefined FUN_10047260(int param_1)
 * called by: FUN_10047280
 */
void __thiscall FUN_10047260(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 * 0x40 + (int)this);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 10047280  FUN_10047280  (1219 bytes)
 * undefined FUN_10047280(int param_1, float param_2)
 * called by: FUN_100470c0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10047280(void *this,int param_1,float param_2)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  edict_t *peVar6;
  undefined *puVar7;
  void *unaff_EBX;
  float *unaff_EBP;
  int unaff_ESI;
  int *piVar8;
  float10 fVar9;
  float10 extraout_ST0;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float local_64;
  float *local_60;
  float *local_5c;
  float fStack_58;
  float *local_54;
  float *local_50;
  void *local_4c;
  Vector local_48;
  float local_3c;
  float local_38;
  float local_34;
  Vector local_30;
  float *local_24;
  float *local_20;
  float local_1c;
  Vector local_18;
  float local_c;
  float local_8;
  float local_4;
  
  piVar8 = (int *)(param_1 * 0x40 + (int)this);
  local_5c = (float *)0x3f800000;
  local_4c = this;
  pfVar5 = (float *)get_ammo_info(piVar8[0xb]);
  piVar2 = (int *)*piVar8;
  local_54 = pfVar5;
  if ((float)piVar2[0x5b] == 0.0) {
    fVar9 = (float10)(**(code **)(*piVar2 + 8))();
    piVar8[0xd] = (int)(float)fVar9;
  }
  else {
    piVar8[0xd] = piVar2[0x5b];
  }
  fVar9 = FUN_10067080((float)piVar8[0xd],*(char *)(*piVar8 + 0x161));
  local_60 = (float *)(float)fVar9;
  local_64 = (float)piVar8[0xe] - gpGlobals->time;
  if (local_64 < 0.001) {
    local_64 = gpGlobals->frametime;
  }
  pfVar1 = (float *)(piVar8 + 7);
  local_34 = (float)(int)pfVar5[9] * 40.0;
  local_3c = local_34 * *pfVar1;
  local_38 = local_34 * (float)piVar8[8];
  local_34 = local_34 * (float)piVar8[9];
  Vector::Vector(&local_30,&local_3c);
  local_24 = (float *)(local_30.x * local_64);
  local_20 = (float *)(local_30.y * local_64);
  local_1c = local_30.z * local_64;
  Vector::Vector(&local_18,&local_24);
  local_c = local_18.x * (float)local_60;
  local_8 = local_18.y * (float)local_60;
  local_4 = local_18.z * (float)local_60;
  Vector::Vector(&local_48,&local_c);
  local_18.x = local_48.x + (float)piVar8[1];
  local_18.y = local_48.y + (float)piVar8[2];
  pfVar5 = (float *)(piVar8 + 1);
  local_18.z = local_48.z + (float)piVar8[3];
  local_8 = local_18.y;
  local_4 = local_18.z;
  FUN_10047770(pfVar5,&local_18,0,*(undefined4 *)(*(int *)(*piVar8 + 4) + 0x208),param_2);
  if (*(float *)((int)param_2 + 0x10) != 1.0) {
    local_50 = (float *)((int)param_2 + 0x14);
    *pfVar5 = *local_50;
    piVar8[2] = *(int *)((int)param_2 + 0x18);
    piVar8[3] = *(int *)((int)param_2 + 0x1c);
    peVar6 = *(edict_t **)((int)param_2 + 0x30);
    if ((peVar6 == (edict_t *)0x0) &&
       (peVar6 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar6 == (edict_t *)0x0)) {
      local_5c = (float *)0x0;
    }
    else {
      local_60 = peVar6->pvPrivateData;
    }
    if (piVar8[0xf] == 2) {
      lVar10 = __ftol();
      fVar9 = FUN_10053030((int)lVar10);
      param_2 = (float)(fVar9 * (float10)(float)piVar8[10]);
    }
    else {
      lVar10 = __ftol();
      fVar9 = FUN_10053030((int)lVar10);
      param_2 = (float)(fVar9 * (float10)(float)piVar8[10]);
      if ((0.0 < (float)DAT_1009ed5c) && (_g_flWeaponCheat != 0.0)) {
        local_5c = DAT_1009ed5c;
      }
    }
    local_64 = 5.74252e-42;
    if (piVar8[0xf] == 1) {
      local_64 = 9.408549e-38;
    }
    DAT_100a32b4 = piVar8[0xc];
    FUN_100796a0();
    fStack_58 = param_2 * (float)local_5c;
    fVar15 = local_64;
    local_64 = *local_60;
    Vector::Vector((Vector *)&stack0xffffff78,pfVar1);
    pfVar4 = local_60;
    (**(code **)((int)local_64 + 0x4c))(*(undefined4 *)(*piVar8 + 4),fStack_58);
    FUN_100796c0(*(undefined4 *)(*piVar8 + 4),*(undefined4 *)(*piVar8 + 4));
    DAT_100a32b4 = -1;
    if ((_g_flWeaponCheat != 0.0) &&
       ((*g_engfuncs.pfnCVarGetFloat)(s_dmgreport_1009ef74), (float10)1.0 < extraout_ST0)) {
      iVar14 = 0;
      iVar13 = 0;
      iVar12 = 0;
      iVar11 = 0;
      puVar7 = UTIL_VarArgs((byte_conflict *)s_damage__f_100a32d8);
      UTIL_ClientPrintAll(3,puVar7,iVar11,iVar12,iVar13,iVar14);
    }
    local_18.y = local_18.y * *(float *)(unaff_ESI + 0x18);
    iVar11 = (**(code **)((int)*pfVar4 + 0xc0))();
    if (iVar11 != 0) {
      local_18.y = local_18.y * 0.5;
    }
    if (((piVar8[0xf] != 2) && (piVar8[0xf] != 1)) && (5.0 < local_18.y)) {
      fVar3 = local_18.y;
      if (48.0 <= local_18.y) {
        fVar3 = 48.0;
      }
      local_30.z = fVar3 * *pfVar1;
      local_64 = local_30.z + *unaff_EBP;
      local_60 = (float *)(fVar3 * (float)piVar8[8] + unaff_EBP[1]);
      local_5c = (float *)(fVar3 * (float)piVar8[9] + unaff_EBP[2]);
      fStack_58 = local_64;
      local_54 = local_60;
      local_50 = local_5c;
      local_24 = local_60;
      local_20 = local_5c;
      iVar11 = FUN_10077360(&local_64);
      if (iVar11 != -2) {
        *pfVar5 = local_64;
        piVar8[4] = (int)local_64;
        piVar8[2] = (int)local_60;
        piVar8[10] = (int)(local_18.y * fVar15);
        piVar8[5] = (int)local_60;
        piVar8[3] = (int)local_5c;
        piVar8[6] = (int)local_5c;
        piVar8[0xf] = 2;
        return;
      }
    }
    FUN_10047260(unaff_EBX,(int)local_18.x);
    return;
  }
  *pfVar5 = local_48.x + *pfVar5;
  piVar8[2] = (int)(local_48.y + (float)piVar8[2]);
  piVar8[3] = (int)(local_48.z + (float)piVar8[3]);
  return;
}

/* 10047760  FUN_10047760  (1 bytes)
 * undefined FUN_10047760()
 */
void FUN_10047760(void)

{
  return;
}

/* 10047770  FUN_10047770  (340 bytes)
 * undefined FUN_10047770(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5)
 * called by: CBasePlayer::ShootBulletsPlayer, FUN_10047280
 */
void __cdecl
FUN_10047770(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 1;
  if (0 < gpGlobals->maxClients) {
    puVar3 = &DAT_100c0824;
    do {
      iVar2 = UTIL_PlayerByIndex(iVar4);
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 4);
        *puVar3 = *(undefined4 *)(iVar1 + 0xd0);
        puVar3[1] = *(undefined4 *)(iVar1 + 0xd4);
        puVar3[2] = *(undefined4 *)(iVar1 + 0xd8);
        *(float *)(*(int *)(iVar2 + 4) + 0xd0) = *(float *)(*(int *)(iVar2 + 4) + 0xd0) + 32.0;
        *(float *)(*(int *)(iVar2 + 4) + 0xd4) = *(float *)(*(int *)(iVar2 + 4) + 0xd4) + 32.0;
        *(float *)(*(int *)(iVar2 + 4) + 0xd8) = *(float *)(*(int *)(iVar2 + 4) + 0xd8) + 32.0;
        *(float *)(*(int *)(iVar2 + 4) + 0xc4) = *(float *)(*(int *)(iVar2 + 4) + 0xc4) - 32.0;
        *(float *)(*(int *)(iVar2 + 4) + 200) = *(float *)(*(int *)(iVar2 + 4) + 200) - 32.0;
        *(float *)(*(int *)(iVar2 + 4) + 0xcc) = *(float *)(*(int *)(iVar2 + 4) + 0xcc) - 32.0;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 3;
    } while (iVar4 <= gpGlobals->maxClients);
  }
  UTIL_TraceLine(param_1,param_2,param_3,param_4,param_5);
  iVar4 = 1;
  if (0 < gpGlobals->maxClients) {
    puVar3 = &DAT_100c0824;
    do {
      iVar2 = UTIL_PlayerByIndex(iVar4);
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 4);
        *(undefined4 *)(iVar2 + 0xd0) = *puVar3;
        *(undefined4 *)(iVar2 + 0xd4) = puVar3[1];
        *(undefined4 *)(iVar2 + 0xd8) = puVar3[2];
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 3;
    } while (iVar4 <= gpGlobals->maxClients);
  }
  return;
}

/* 10048370  FUN_10048370  (1 bytes)
 * undefined FUN_10048370()
 */
void FUN_10048370(void)

{
  return;
}

/* 10048380  FUN_10048380  (1 bytes)
 * undefined FUN_10048380()
 */
void FUN_10048380(void)

{
  return;
}

/* 10048390  FUN_10048390  (1 bytes)
 * undefined FUN_10048390()
 */
void FUN_10048390(void)

{
  return;
}

/* 100483a0  FUN_100483a0  (1 bytes)
 * undefined FUN_100483a0()
 */
void FUN_100483a0(void)

{
  return;
}

/* 100483b0  FUN_100483b0  (1 bytes)
 * undefined FUN_100483b0()
 */
void FUN_100483b0(void)

{
  return;
}

/* 100483c0  FUN_100483c0  (1 bytes)
 * undefined FUN_100483c0()
 */
void FUN_100483c0(void)

{
  return;
}

/* 100483e0  FUN_100483e0  (441 bytes)
 * undefined FUN_100483e0(int param_1, float param_2)
 * called by: CBasePlayer::PlayerDeathThink
 */
void __cdecl FUN_100483e0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  if ((*(byte *)(iVar4 + 0x118) & 0x80) == 0) {
    iVar3 = CBaseEntity::Create(0x100a32fc,(undefined4 *)(iVar4 + 8),(undefined4 *)(iVar4 + 0x50),0)
    ;
    fVar1 = gpGlobals->time;
    iVar4 = *(int *)(iVar3 + 4);
    *(float *)(iVar3 + 0x58) = param_2;
    *(float *)(iVar3 + 0x54) = param_2 + fVar1;
    iVar2 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
    *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0xb8) = *(undefined4 *)(*(int *)(param_1 + 4) + 0xb8);
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0xb4) = *(undefined4 *)(*(int *)(param_1 + 4) + 0xb4);
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x130) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x130);
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x1a8) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a8);
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x108) = 6;
    iVar4 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(iVar3 + 4);
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar4 + 0x24);
    *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar4 + 0x28);
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x1a4) = 0;
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x170) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x170);
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x148) = 1;
    iVar4 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
    *(float *)(*(int *)(iVar3 + 4) + 0x150) = (float)iVar4;
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x154) = 0;
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x158) = 0;
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x15c) = 0x11;
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x14c) = 0x437f0000;
    *(uint *)(*(int *)(iVar3 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x20;
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x128) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x128);
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x134) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x134);
    UTIL_SetOrigin(*(int *)(iVar3 + 4),*(int *)(param_1 + 4) + 8);
    UTIL_SetSize(*(int *)(iVar3 + 4),*(int *)(param_1 + 4) + 0xdc,*(int *)(param_1 + 4) + 0xe8);
  }
  return;
}

/* 100485d0  FUN_100485d0  (177 bytes)
 * undefined FUN_100485d0()
 */
void __fastcall FUN_100485d0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.5;
  if ((float)param_1[0x15] < gpGlobals->time) {
    UTIL_Remove(param_1);
    return;
  }
  fVar1 = (float)param_1[0x16] * 0.6666667;
  fVar2 = fVar1;
  if (fVar1 <= 1.0) {
    fVar2 = 1.0;
  }
  fVar3 = (float)param_1[0x15] - gpGlobals->time;
  if (255.0 <= (fVar3 / fVar2) * 255.0) {
    *(undefined4 *)(param_1[1] + 0x14c) = 0x437f0000;
    return;
  }
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  *(float *)(param_1[1] + 0x14c) = (fVar3 / fVar1) * 255.0;
  return;
}

/* 10048860  FUN_10048860  (203 bytes)
 * undefined FUN_10048860(int param_1)
 * called by: CTSParticle::Spawn
 */
void __fastcall FUN_10048860(int param_1)

{
  if (*(float *)(param_1 + 100) < 0.0) {
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(float *)(param_1 + 0x68) < 0.0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(float *)(param_1 + 0x74) < 0.0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(float *)(param_1 + 0x78) < 0.0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (1.0 < *(float *)(param_1 + 0x74)) {
    *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  }
  if (1.0 < *(float *)(param_1 + 0x78)) {
    *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  }
  if (*(float *)(param_1 + 0x84) < 0.0) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(float *)(param_1 + 0x88) < 0.0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (*(int *)(param_1 + 0x94) < 0) {
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  if (*(int *)(param_1 + 0x98) < 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  return;
}

/* 10048b80  FUN_10048b80  (185 bytes)
 * undefined FUN_10048b80()
 */
void __fastcall FUN_10048b80(int param_1)

{
  int iValue;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  longlong lVar1;
  
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100d97dc,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(3);
  iValue = (*g_engfuncs.pfnRandomLong)(0,30000);
  (*g_engfuncs.pfnWriteLong)(iValue);
  (*g_engfuncs.pfnRandomLong)(-0x2d,0x2d);
  lVar1 = __ftol();
  (*g_engfuncs.pfnWriteLong)((int)lVar1);
  (*g_engfuncs.pfnRandomFloat)(-*(float *)(param_1 + 0x58),*(float *)(param_1 + 0x58));
  (*g_engfuncs.pfnWriteCoord)((float)(extraout_ST0 + (float10)*(float *)(param_1 + 0x54)));
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnRandomFloat)(*(float *)(param_1 + 0x5c) * -0.5,*(float *)(param_1 + 0x5c) * 0.5);
  *(float *)(*(int *)(param_1 + 4) + 0x104) =
       (float)(extraout_ST0_00 + (float10)gpGlobals->time + (float10)*(float *)(param_1 + 0x5c));
  return;
}

/* 100494b0  FUN_100494b0  (104 bytes)
 * undefined FUN_100494b0(int param_1)
 * called by: CTSSlowMotion::ActivateSlow, CTSSlowMotion::WaitThink
 */
void __fastcall FUN_100494b0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0xf0) != 0) {
    FUN_1004e9f0(&TSGameRules,0.0,'\0');
    puVar3 = (undefined4 *)(param_1 + 0x60);
    for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    return;
  }
  piVar2 = (int *)(param_1 + 0x60);
  iVar1 = 0x21;
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 0xc))(0x3f800000,0);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar3 = (undefined4 *)(param_1 + 0x60);
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* 10049520  FUN_10049520  (140 bytes)
 * undefined FUN_10049520(int * param_1)
 * called by: CTSSlowMotion::WaitThink
 */
void __fastcall FUN_10049520(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_c [12];
  
  iVar6 = 0x21;
  piVar7 = param_1 + 0x18;
  do {
    if ((int *)*piVar7 != (int *)0x0) {
      iVar4 = (**(code **)(*(int *)*piVar7 + 0x10))();
      if (iVar4 != 0) {
        pfVar5 = (float *)(**(code **)(*param_1 + 0xf0))(auStack_c);
        iVar4 = ((int *)*piVar7)[1];
        fVar1 = *(float *)(iVar4 + 8) - *pfVar5;
        fVar2 = *(float *)(iVar4 + 0xc) - pfVar5[1];
        fVar3 = *(float *)(iVar4 + 0x10) - pfVar5[2];
        if ((float)param_1[0x39] < SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3)) {
          (**(code **)(*(int *)*piVar7 + 0xc))(0x3f800000,0);
          *piVar7 = 0;
        }
      }
    }
    piVar7 = piVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}

/* 100498a0  FUN_100498a0  (56 bytes)
 * undefined FUN_100498a0(int param_1)
 * called by: CTSSlowMotionPoint::WaitThink
 */
void __fastcall FUN_100498a0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0x21;
  piVar2 = (int *)(param_1 + 0x54);
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 0xc))(0x3f800000,0);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar2 = (int *)(param_1 + 0x54);
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  return;
}

/* 1004ac20  FUN_1004ac20  (279 bytes)
 * undefined FUN_1004ac20(int * param_1)
 * called by: pfnClientDisconnect
 */
void __fastcall FUN_1004ac20(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  iVar3 = param_1[0x17];
  param_1[0x17] = iVar3 + -1;
  if (iVar3 + -1 == param_1[0x18]) {
    pbVar4 = &DAT_100a9398;
    pbVar2 = (byte *)(param_1 + 0x32);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_1004ac6a:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_1004ac6f;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_1004ac6a;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_1004ac6f:
    if (iVar3 != 0) {
      if ((float)param_1[0x15] == 0.0) {
        FireTargets((int)(param_1 + 0x32),0,param_1,3,0);
      }
      else {
        iVar3 = GetClassPtr<CBaseDelay>(0);
        **(int **)(iVar3 + 4) = (int)s_DelayedUse_100a2730 - (int)gpGlobals->pStringBase;
        *(float *)(*(int *)(iVar3 + 4) + 0x104) = (float)param_1[0x15] + gpGlobals->time;
        *(code **)(iVar3 + 0x10) = CBaseDelay::DelayThink;
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x180) = 3;
        *(int *)(iVar3 + 0x58) = param_1[0x16];
        *(undefined4 *)(iVar3 + 0x54) = 0;
        *(int *)(*(int *)(iVar3 + 4) + 0x1c8) = (int)param_1 + (200 - (int)gpGlobals->pStringBase);
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x198) = 0;
      }
      if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
        UTIL_Remove(param_1);
      }
    }
  }
  return;
}

/* 1004b090  FUN_1004b090  (187 bytes)
 * undefined FUN_1004b090(char * param_1)
 * called by: CTSCustomTarget::KeyValue
 */
void __thiscall FUN_1004b090(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  byte_conflict *pbVar7;
  char *pcVar8;
  byte_conflict local_800 [2048];
  
  puVar6 = (undefined4 *)((int)this + 0x54);
  for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar2 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar2 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar2;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar2 + -uVar4;
  pbVar7 = local_800;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pbVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pbVar7 = pbVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pbVar7 = pbVar7 + 1;
  }
  pcVar2 = (char *)FUN_1007e23b(local_800,&DAT_100a2748);
  *(undefined4 *)((int)this + 0x854) = 0;
  do {
    if (((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) ||
       (iVar3 = *(int *)((int)this + 0x854), 0x3f < iVar3)) {
      return;
    }
    *(int *)((int)this + 0x854) = iVar3 + 1;
    uVar4 = 0xffffffff;
    do {
      pcVar8 = pcVar2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar2 = pcVar8 + -uVar4;
    pcVar8 = (char *)(iVar3 * 0x20 + 0x54 + (int)this);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar8 = pcVar8 + 1;
    }
    pcVar2 = (char *)FUN_1007e23b((byte_conflict *)0x0,&DAT_100a2748);
  } while( true );
}

/* 1004c1e0  FUN_1004c1e0  (10 bytes)
 * undefined FUN_1004c1e0()
 */
void FUN_1004c1e0(void)

{
  FUN_1004c1f0();
  FUN_1004c200();
  return;
}

