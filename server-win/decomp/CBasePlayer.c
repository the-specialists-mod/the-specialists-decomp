/* mp.dll - CBasePlayer (72 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10012710  CBasePlayer::BodyTarget  (121 bytes)
 * undefined BodyTarget()
 */
void __fastcall CBasePlayer::BodyTarget(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float unaff_ESI;
  float10 fVar6;
  float *unaff_retaddr;
  undefined1 auStack_c [12];
  
  fVar6 = (float10)(*g_engfuncs.pfnRandomFloat)(0.5,1.1);
  fVar1 = *(float *)(param_1[1] + 0x174);
  fVar2 = *(float *)(param_1[1] + 0x178);
  pfVar5 = (float *)(**(code **)(*param_1 + 0xf0))(auStack_c);
  fVar3 = pfVar5[1];
  fVar4 = pfVar5[2];
  *unaff_retaddr = unaff_ESI + *pfVar5;
  unaff_retaddr[1] = (float)(fVar6 * (float10)fVar1) + fVar3;
  unaff_retaddr[2] = (float)(fVar6 * (float10)fVar2) + fVar4;
  return;
}

/* 10012790  CBasePlayer::StartSneaking  (20 bytes)
 * undefined StartSneaking()
 */
void __fastcall CBasePlayer::StartSneaking(int param_1)

{
  *(float *)(param_1 + 0x9c4) = gpGlobals->time - 1.0;
  return;
}

/* 100127b0  CBasePlayer::StopSneaking  (20 bytes)
 * undefined StopSneaking()
 */
void __fastcall CBasePlayer::StopSneaking(int param_1)

{
  *(float *)(param_1 + 0x9c4) = gpGlobals->time + 30.0;
  return;
}

/* 100127d0  CBasePlayer::IsSneaking  (29 bytes)
 * undefined IsSneaking()
 */
undefined4 __fastcall CBasePlayer::IsSneaking(int param_1)

{
  if (*(float *)(param_1 + 0x9c4) <= gpGlobals->time) {
    return 1;
  }
  return 0;
}

/* 10032f90  CBasePlayer::TakeHealth  (116 bytes)
 * undefined TakeHealth()
 */
undefined4 __thiscall CBasePlayer::TakeHealth(int param_1,float param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(float *)(iVar1 + 0x16c) == 0.0) {
    return 0;
  }
  if (*(float *)(iVar1 + 0x1b0) < *(float *)(iVar1 + 0x160)) {
    return 0;
  }
  *(float *)(iVar1 + 0x160) = param_2 + *(float *)(iVar1 + 0x160);
  if (*(float *)(*(int *)(param_1 + 4) + 0x1b0) < *(float *)(*(int *)(param_1 + 4) + 0x160)) {
    *(float *)(param_1 + 0x728) = gpGlobals->time + 1.0;
  }
  return 1;
}

/* 10033010  CBasePlayer::GetGunPosition  (61 bytes)
 * undefined GetGunPosition()
 */
void __thiscall CBasePlayer::GetGunPosition(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  fVar1 = *(float *)(iVar5 + 0x178);
  fVar2 = *(float *)(iVar5 + 0xc);
  fVar3 = *(float *)(iVar5 + 0x17c);
  fVar4 = *(float *)(iVar5 + 0x10);
  *param_2 = *(float *)(iVar5 + 0x174) + *(float *)(iVar5 + 8);
  param_2[1] = fVar1 + fVar2;
  param_2[2] = fVar3 + fVar4;
  return;
}

/* 10033160  CBasePlayer::TabulateAmmo  (197 bytes)
 * undefined TabulateAmmo(void * param_1)
 * called by: CBasePlayer::GiveAmmo
 */
void __fastcall CBasePlayer::TabulateAmmo(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  
  iVar1 = FUN_100357d0(param_1,&DAT_100a1150);
  uVar2 = FUN_100357b0(param_1,iVar1);
  *(undefined4 *)((int)param_1 + 0x20) = uVar2;
  iVar1 = FUN_100357d0(this,&DAT_100a114c);
  uVar2 = FUN_100357b0(param_1,iVar1);
  *(undefined4 *)((int)param_1 + 0x24) = uVar2;
  iVar1 = FUN_100357d0(this_00,(byte_conflict *)s_ARgrenades_100a1140);
  uVar2 = FUN_100357b0(param_1,iVar1);
  *(undefined4 *)((int)param_1 + 0x3c) = uVar2;
  iVar1 = FUN_100357d0(this_01,(byte_conflict *)s_bolts_100a1138);
  uVar2 = FUN_100357b0(param_1,iVar1);
  *(undefined4 *)((int)param_1 + 0x28) = uVar2;
  iVar1 = FUN_100357d0(this_02,(byte_conflict *)s_buckshot_100a112c);
  uVar2 = FUN_100357b0(param_1,iVar1);
  *(undefined4 *)((int)param_1 + 0x2c) = uVar2;
  iVar1 = FUN_100357d0(this_03,(byte_conflict *)s_rockets_100a1124);
  uVar2 = FUN_100357b0(param_1,iVar1);
  *(undefined4 *)((int)param_1 + 0x30) = uVar2;
  iVar1 = FUN_100357d0(this_04,(byte_conflict *)s_uranium_100a111c);
  uVar2 = FUN_100357b0(param_1,iVar1);
  *(undefined4 *)((int)param_1 + 0x34) = uVar2;
  iVar1 = FUN_100357d0(this_05,(byte_conflict *)s_Hornets_100a1114);
  uVar2 = FUN_100357b0(param_1,iVar1);
  *(undefined4 *)((int)param_1 + 0x38) = uVar2;
  return;
}

/* 10033230  CBasePlayer::WaterMove  (1057 bytes)
 * undefined WaterMove(int * param_1)
 * called by: CBasePlayer::PreThink
 */
/* .so 0xd905c; PreThink call order */

void __fastcall CBasePlayer::WaterMove(int *param_1)

{
  uint uVar1;
  int iVar2;
  edict_t *peVar3;
  int iVar4;
  void *pvVar5;
  void *extraout_ECX;
  void *pvVar6;
  entvars_t *peVar7;
  longlong lVar8;
  char *pcVar9;
  undefined4 uVar10;
  
  pvVar5 = (void *)param_1[1];
  if (*(int *)((int)pvVar5 + 0x108) == 8) {
    return;
  }
  if (*(float *)((int)pvVar5 + 0x160) < 0.0) {
    return;
  }
  if (*(int *)((int)pvVar5 + 0x1c0) == 3) {
    uVar1 = param_1[0x3f];
    *(undefined1 *)(param_1 + 0x41) = 0;
    param_1[0x3f] = uVar1 & 0xfff7ffff;
    if (gpGlobals->time <= *(float *)((int)pvVar5 + 0x1fc)) {
      param_1[0x3f] = uVar1 & 0xfff7bfff;
    }
    else if (*(float *)((int)pvVar5 + 0x200) < gpGlobals->time) {
      *(float *)((int)pvVar5 + 0x1e0) = *(float *)((int)pvVar5 + 0x1e0) + 1.0;
      if (5.0 < *(float *)(param_1[1] + 0x1e0)) {
        *(undefined4 *)(param_1[1] + 0x1e0) = 0x40a00000;
      }
      peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      if (peVar3 == (edict_t *)0x0) {
        peVar7 = (entvars_t *)0x0;
      }
      else {
        peVar7 = &peVar3->v;
      }
      peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      if (peVar3 != (edict_t *)0x0) {
        peVar3 = (edict_t *)&peVar3->v;
      }
      (**(code **)(*param_1 + 0x50))(peVar3,peVar7,*(undefined4 *)(param_1[1] + 0x1e0),0x4000);
      *(float *)(param_1[1] + 0x200) = gpGlobals->time + 1.0;
      lVar8 = __ftol();
      param_1[0x265] = (int)lVar8;
    }
  }
  else {
    if (gpGlobals->time <= *(float *)((int)pvVar5 + 0x1fc)) {
      if (*(float *)((int)pvVar5 + 0x1fc) < gpGlobals->time + 9.0) {
        pvVar5 = *(void **)((int)pvVar5 + 0x208);
        pcVar9 = s_player_pl_wade2_wav_1009d148;
        pvVar6 = pvVar5;
        goto LAB_100332d7;
      }
    }
    else {
      pcVar9 = s_player_pl_wade1_wav_1009d15c;
      pvVar6 = *(void **)((int)pvVar5 + 0x208);
LAB_100332d7:
      EMIT_SOUND_DYN(pvVar5,pvVar6,2,pcVar9,0x3f800000,0x3f4ccccd,0);
    }
    *(float *)(param_1[1] + 0x1fc) = gpGlobals->time + 12.0;
    *(undefined4 *)(param_1[1] + 0x1e0) = 0x40000000;
    if (param_1[0x266] < param_1[0x265]) {
      *(undefined1 *)(param_1 + 0x41) = 0;
      param_1[0x3f] = param_1[0x3f] & 0xffffbfffU | 0x80000;
    }
  }
  iVar2 = param_1[1];
  if (*(int *)(iVar2 + 0x1c0) == 0) {
    if ((*(uint *)(iVar2 + 0x1a4) & 0x10) == 0) {
      return;
    }
    *(uint *)(iVar2 + 0x1a4) = *(uint *)(iVar2 + 0x1a4) & 0xffffffef;
    return;
  }
  lVar8 = __ftol();
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
  if ((iVar2 != 0) || (iVar2 = (*g_engfuncs.pfnRandomLong)(0,0xb), iVar2 < (int)lVar8))
  goto switchD_100334ab_default;
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,3);
  switch(iVar2) {
  case 0:
    pcVar9 = s_player_pl_swim1_wav_1009d20c;
    goto LAB_10033530;
  case 1:
    pvVar5 = *(void **)(param_1[1] + 0x208);
    pcVar9 = s_player_pl_swim2_wav_1009d1f8;
    pvVar6 = extraout_ECX;
    break;
  case 2:
    pvVar6 = (void *)param_1[1];
    pvVar5 = *(void **)((int)pvVar6 + 0x208);
    pcVar9 = s_player_pl_swim3_wav_1009d1e4;
    break;
  case 3:
    pcVar9 = s_player_pl_swim4_wav_1009d1d0;
LAB_10033530:
    pvVar6 = *(void **)(param_1[1] + 0x208);
    pvVar5 = pvVar6;
    break;
  default:
    goto switchD_100334ab_default;
  }
  EMIT_SOUND_DYN(pvVar6,pvVar5,4,pcVar9,0x3f4ccccd,0x3f4ccccd,0);
switchD_100334ab_default:
  iVar2 = param_1[1];
  if (*(int *)(iVar2 + 0x1c4) == -5) {
    if (gpGlobals->time <= *(float *)(iVar2 + 0x1e4)) goto LAB_1003362b;
    peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar3 == (edict_t *)0x0) {
      peVar7 = (entvars_t *)0x0;
    }
    else {
      peVar7 = &peVar3->v;
    }
    peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar3 == (edict_t *)0x0) {
      peVar3 = (edict_t *)0x0;
    }
    else {
      peVar3 = (edict_t *)&peVar3->v;
    }
    iVar2 = *param_1;
    uVar10 = 8;
    iVar4 = *(int *)(param_1[1] + 0x1c0) * 10;
  }
  else {
    if (*(int *)(iVar2 + 0x1c4) != -4) goto LAB_1003362b;
    *(float *)(iVar2 + 0x1e4) = gpGlobals->time + 1.0;
    peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar3 == (edict_t *)0x0) {
      peVar7 = (entvars_t *)0x0;
    }
    else {
      peVar7 = &peVar3->v;
    }
    peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar3 != (edict_t *)0x0) {
      peVar3 = (edict_t *)&peVar3->v;
    }
    iVar2 = *param_1;
    uVar10 = 0x100000;
    iVar4 = *(int *)(param_1[1] + 0x1c0) << 2;
  }
  (**(code **)(iVar2 + 0x50))(peVar3,peVar7,(float)iVar4,uVar10);
LAB_1003362b:
  uVar1 = *(uint *)(param_1[1] + 0x1a4);
  if ((uVar1 & 0x10) == 0) {
    *(uint *)(param_1[1] + 0x1a4) = uVar1 | 0x10;
    *(undefined4 *)(param_1[1] + 0x1e4) = 0;
  }
  return;
}

/* 10033670  CBasePlayer::IsOnLadder  (18 bytes)
 * bool IsOnLadder(int param_1)
 * called by: CBasePlayer::PreThink, CBotNav::Navigate, CTSAnimation::Animate, CTSStunt::GoRoll, CTSStunt::Play, FUN_1005b350, FUN_1006aa30, pfnClientCommand
 */
/* pev->movetype == MOVETYPE_FLY */

bool __fastcall CBasePlayer::IsOnLadder(int param_1)

{
  return *(int *)(*(int *)(param_1 + 4) + 0x108) == 5;
}

/* 10033690  CBasePlayer::PlayerUse  (1061 bytes)
 * undefined PlayerUse(int param_1)
 * called by: CBasePlayer::ImpulseCommands
 */
void __fastcall CBasePlayer::PlayerUse(int param_1)

{
  EHANDLE *this;
  void *this_00;
  float fVar1;
  bool bVar2;
  char cVar3;
  undefined3 extraout_var;
  int *piVar4;
  edict_t *peVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_58;
  float fStack_54;
  float afStack_50 [3];
  float afStack_44 [3];
  undefined1 auStack_38 [16];
  float fStack_28;
  
  if (((*(uint *)(*(int *)(param_1 + 4) + 0x180) | *(uint *)(param_1 + 0x800) |
       *(uint *)(param_1 + 0x804)) & 0x20) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x800) & 0x20) != 0) {
    this = (EHANDLE *)(param_1 + 0x9b0);
    bVar2 = FUN_1000e440((uint *)this);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      piVar4 = (int *)EHANDLE::operator->((uint *)this);
      (**(code **)(*piVar4 + 0xd8))(param_1,param_1,0,0);
      EHANDLE::operator=(this,0);
      return;
    }
    if ((*(uint *)(param_1 + 0x834) & 2) != 0) {
      *(undefined4 *)(param_1 + 0x9a8) = 0xc0;
      *(uint *)(param_1 + 0x834) = *(uint *)(param_1 + 0x834) & 0xfffffffd;
      return;
    }
    peVar5 = *(edict_t **)(*(int *)(param_1 + 4) + 0x19c);
    if (((((peVar5 != (edict_t *)0x0) ||
          (peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar5 != (edict_t *)0x0)) &&
         (piVar4 = peVar5->pvPrivateData, piVar4 != (int *)0x0)) &&
        (((*(byte *)(*(int *)(param_1 + 4) + 0x180) & 2) == 0 &&
         ((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x200) != 0)))) &&
       ((uVar6 = (**(code **)(*piVar4 + 0x30))(), (uVar6 & 0x40) != 0 &&
        (iVar7 = (**(code **)(*piVar4 + 0xa4))(*(undefined4 *)(param_1 + 4)), iVar7 != 0)))) {
      *(uint *)(param_1 + 0x834) = *(uint *)(param_1 + 0x834) | 2;
      iVar7 = *(int *)(piVar4[1] + 0x184);
      lVar11 = __ftol();
      uVar6 = TrainSpeed((int)lVar11,iVar7);
      *(uint *)(param_1 + 0x9a8) = uVar6 | 0xc0;
      this_00 = *(void **)(*(int *)(param_1 + 4) + 0x208);
      EMIT_SOUND_DYN(this_00,this_00,3,s_plats_train_use1_wav_1009d0cc,0x3f4ccccd,0x3f4ccccd,0);
      return;
    }
  }
  piVar4 = (int *)0x0;
  local_90 = 0.7;
  UTIL_MakeVectors(*(int *)(param_1 + 4) + 0x74);
  piVar8 = (int *)FUN_10076410(0,*(int *)(param_1 + 4) + 8,0x42800000);
  if (piVar8 == (int *)0x0) {
    return;
  }
  do {
    uVar6 = (**(code **)(*piVar8 + 0x30))();
    if ((uVar6 & 0x38) != 0) {
      iVar7 = *(int *)(param_1 + 4);
      fStack_74 = *(float *)(iVar7 + 0x174) + *(float *)(iVar7 + 8);
      fStack_70 = *(float *)(iVar7 + 0x178) + *(float *)(iVar7 + 0xc);
      fStack_6c = *(float *)(iVar7 + 0x17c) + *(float *)(iVar7 + 0x10);
      pfVar9 = (float *)VecBModelOrigin(afStack_44,piVar8[1]);
      fStack_9c = *pfVar9 - fStack_74;
      fStack_98 = pfVar9[1] - fStack_70;
      fStack_94 = pfVar9[2] - fStack_6c;
      iVar7 = piVar8[1];
      fStack_8c = *(float *)(iVar7 + 0xf4) * 0.5;
      fStack_88 = *(float *)(iVar7 + 0xf8) * 0.5;
      fStack_84 = *(float *)(iVar7 + 0xfc) * 0.5;
      fStack_7c = fStack_88;
      fStack_78 = fStack_84;
      fStack_68 = fStack_9c;
      fStack_64 = fStack_98;
      fStack_60 = fStack_94;
      fStack_58 = fStack_98;
      fStack_54 = fStack_94;
      pfVar9 = (float *)FUN_10077a50(afStack_50,&fStack_9c,&fStack_8c);
      fStack_9c = *pfVar9;
      fStack_98 = pfVar9[1];
      fStack_94 = pfVar9[2];
      fVar1 = fStack_9c * gpGlobals->v_forward[0] +
              fStack_98 * gpGlobals->v_forward[1] + fStack_94 * gpGlobals->v_forward[2];
      if (local_90 < fVar1) {
        piVar4 = piVar8;
        local_90 = fVar1;
      }
    }
    piVar8 = (int *)FUN_10076410((int)piVar8,*(int *)(param_1 + 4) + 8,0x42800000);
  } while (piVar8 != (int *)0x0);
  if (piVar4 == (int *)0x0) {
    return;
  }
  cVar3 = (**(code **)(*piVar4 + 4))();
  if (cVar3 == '\0') {
    uVar13 = *(undefined4 *)(piVar4[1] + 0x208);
    iVar7 = *(int *)(param_1 + 4);
    fStack_80 = *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0x174);
    fStack_88 = *(float *)(iVar7 + 0x178) + *(float *)(iVar7 + 0xc);
    fStack_84 = *(float *)(iVar7 + 0x17c) + *(float *)(iVar7 + 0x10);
    puVar12 = auStack_38;
    iVar7 = 1;
    fStack_7c = fStack_88;
    fStack_78 = fStack_84;
    uVar10 = (**(code **)(*piVar4 + 0xf0))(afStack_50);
    UTIL_TraceLine(&fStack_80,uVar10,iVar7,uVar13,puVar12);
    if (fStack_28 < 1.0) {
      return;
    }
  }
  uVar6 = (**(code **)(*piVar4 + 0x30))();
  if ((*(byte *)(param_1 + 0x800) & 0x20) != 0) {
    EMIT_SOUND_DYN(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),3,
                   s_common_wpn_select_wav_1009cfb0,0x3ecccccd,0x3f4ccccd,0);
  }
  if (((*(byte *)(*(int *)(param_1 + 4) + 0x180) & 0x20) == 0) || ((uVar6 & 0x10) == 0)) {
    if (((*(byte *)(param_1 + 0x800) & 0x20) == 0) || ((uVar6 & 0x28) == 0)) {
      if ((*(byte *)(param_1 + 0x804) & 0x20) == 0) {
        return;
      }
      uVar6 = (**(code **)(*piVar4 + 0x30))();
      if ((uVar6 & 0x20) == 0) {
        return;
      }
      iVar7 = *piVar4;
      uVar13 = 0;
      goto LAB_10033a9e;
    }
    if ((uVar6 & 0x10) != 0) goto LAB_10033a6c;
  }
  else {
LAB_10033a6c:
    *(uint *)(param_1 + 0x834) = *(uint *)(param_1 + 0x834) | 0x10;
  }
  iVar7 = *piVar4;
  uVar13 = 0x3f800000;
LAB_10033a9e:
  (**(code **)(iVar7 + 0xd8))(param_1,param_1,2,uVar13);
  return;
}

/* 10033ac0  CBasePlayer::Classify  (6 bytes)
 * undefined Classify()
 */
undefined4 CBasePlayer::Classify(void)

{
  return 2;
}

/* 10033ad0  CBasePlayer::AddPoints  (232 bytes)
 * undefined AddPoints(int param_1, int param_2)
 */
void __thiscall CBasePlayer::AddPoints(CBasePlayer *this,int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uStack00000014;
  undefined1 *puStack0000001c;
  
  if ((param_1 < 0) && (param_2 == 0)) {
    if (this->pev->frags < 0.0) {
      return;
    }
    if (this->pev->frags < (float)-param_1) {
      lVar2 = __ftol();
      param_1 = (int)lVar2;
    }
  }
  this->pev->frags = (float)param_1 + this->pev->frags;
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9718,(float *)0x0,(edict_t *)0x0);
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(iVar1);
  lVar2 = __ftol();
  (*g_engfuncs.pfnWriteShort)((int)lVar2);
  (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0xb1c);
  (*g_engfuncs.pfnWriteShort)(0);
  puStack0000001c = &this->field_0xb34;
  iVar1 = (**(code **)(*g_pGameRules + 200))();
  uStack00000014 = 0x10033bab;
  (*g_engfuncs.pfnWriteShort)(iVar1 + 1);
  puStack0000001c = (undefined1 *)0x10033bb4;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10033bc0  CBasePlayer::AddPointsToTeam  (124 bytes)
 * undefined AddPointsToTeam()
 */
void __thiscall CBasePlayer::AddPointsToTeam(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  iVar4 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar2 = (int *)UTIL_PlayerByIndex(iVar4);
      if (((piVar2 != (int *)0x0) && (iVar4 != iVar1)) &&
         (iVar3 = (**(code **)(*g_pGameRules + 0xc4))(param_1,piVar2), iVar3 == 1)) {
        (**(code **)(*piVar2 + 0x74))(param_2,param_3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= gpGlobals->maxClients);
  }
  return;
}

/* 10033c40  CBasePlayer::CheckTimeBasedDamage  (366 bytes)
 * undefined CheckTimeBasedDamage(int * param_1)
 * called by: CBasePlayer::PreThink
 */
void __fastcall CBasePlayer::CheckTimeBasedDamage(int *param_1)

{
  globalvars_t *pgVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  pgVar1 = gpGlobals;
  if (((param_1[0x3f] & 0xffffc000U) != 0) &&
     (lVar7 = __ftol(), uVar5 = (int)(uint)lVar7 >> 0x1f,
     2.0 <= (double)(int)(((uint)lVar7 ^ uVar5) - uVar5))) {
    param_1[0x25b] = (int)pgVar1->time;
    iVar6 = 0;
    do {
      uVar5 = 0x8000 << ((byte)iVar6 & 0x1f);
      if ((param_1[0x3f] & uVar5) != 0) {
        switch(iVar6) {
        case 0:
        case 1:
        case 3:
        case 5:
        case 6:
        case 7:
          uVar2 = 2;
          break;
        case 2:
          (**(code **)(*param_1 + 0x50))(param_1[1],param_1[1],0x40000000,0);
          uVar2 = 5;
          break;
        case 4:
          if (param_1[0x266] < param_1[0x265]) {
            iVar4 = param_1[0x265] - param_1[0x266];
            if (9 < iVar4) {
              iVar4 = 10;
            }
            (**(code **)(*param_1 + 0x54))((float)iVar4,0);
            param_1[0x266] = param_1[0x266] + iVar4;
          }
          uVar2 = 4;
          break;
        default:
          uVar2 = 0;
        }
        if (*(char *)((int)param_1 + iVar6 + 0x100) == '\0') {
          *(undefined1 *)((int)param_1 + iVar6 + 0x100) = uVar2;
        }
        else {
          if (iVar6 == 1) {
            if (*(byte *)((int)param_1 + 0x101) < 2) {
LAB_10033d38:
              if (param_1[0x208] != 0) {
                *(undefined1 *)((int)param_1 + iVar6 + 0x100) = 0;
                param_1[0x208] = param_1[0x208] + -1;
                SetSuitUpdate((CBasePlayer *)param_1,(byte_conflict *)s__HEV_HEAL4_100a1154,0,0);
              }
            }
          }
          else if ((iVar6 == 2) && (*(byte *)((int)param_1 + 0x102) < 5)) goto LAB_10033d38;
          cVar3 = *(char *)((int)param_1 + iVar6 + 0x100);
          if ((cVar3 == '\0') ||
             (cVar3 = cVar3 + -1, *(char *)((int)param_1 + iVar6 + 0x100) = cVar3, cVar3 == '\0')) {
            *(undefined1 *)((int)param_1 + iVar6 + 0x100) = 0;
            param_1[0x3f] = param_1[0x3f] & ~uVar5;
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 8);
  }
  return;
}

/* 10033dd0  CBasePlayer::UpdateGeigerCounter  (165 bytes)
 * undefined UpdateGeigerCounter(int param_1)
 * called by: CBasePlayer::CheckSuitUpdate
 */
void __fastcall CBasePlayer::UpdateGeigerCounter(int param_1)

{
  uint iValue;
  int iVar1;
  longlong lVar2;
  
  if (*(float *)(param_1 + 0x974) <= gpGlobals->time) {
    *(float *)(param_1 + 0x974) = gpGlobals->time + 0.25;
    lVar2 = __ftol();
    iValue = (uint)(byte)lVar2;
    if (iValue != *(uint *)(param_1 + 0x978)) {
      *(uint *)(param_1 + 0x978) = iValue;
      (*g_engfuncs.pfnMessageBegin)
                (1,DAT_100d9754,(float *)0x0,*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
      (*g_engfuncs.pfnWriteByte)(iValue);
      (*g_engfuncs.pfnMessageEnd)();
    }
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,3);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x970) = 0x447a0000;
    }
  }
  return;
}

/* 10033e80  CBasePlayer::CheckSuitUpdate  (307 bytes)
 * undefined CheckSuitUpdate(int param_1)
 * called by: CBasePlayer::PreThink
 */
void __fastcall CBasePlayer::CheckSuitUpdate(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char acStack_14 [20];
  
  iVar6 = *(int *)(param_1 + 0x864);
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x168) & 0x80000000) != 0) {
    UpdateGeigerCounter(param_1);
    iVar3 = (**(code **)(*g_pGameRules + 0x14))();
    if (((iVar3 == 0) && (*(float *)(param_1 + 0x850) <= gpGlobals->time)) &&
       (0.0 < *(float *)(param_1 + 0x850))) {
      iVar3 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x854 + iVar6 * 4);
        if (iVar2 != 0) {
          *(undefined4 *)(param_1 + 0x854 + iVar6 * 4) = 0;
          if (0 < iVar2) {
            uVar4 = 0xffffffff;
            pcVar7 = (char *)&DAT_100a1160;
            goto code_r0x10033f1d;
          }
          EMIT_GROUPID_SUIT(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),-iVar2);
          goto LAB_10033f99;
        }
        iVar6 = iVar6 + 1;
        if (iVar6 == 4) {
          iVar6 = 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      *(undefined4 *)(param_1 + 0x850) = 0;
    }
  }
  return;
  while( true ) {
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
    if (cVar1 == '\0') break;
code_r0x10033f1d:
    pcVar9 = pcVar7;
    if (uVar4 == 0) break;
  }
  uVar4 = ~uVar4;
  pcVar7 = pcVar9 + -uVar4;
  pcVar9 = acStack_14;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = (char *)(&DAT_100b6130 + iVar2 * 4);
  do {
    pcVar9 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar7 = acStack_14;
  do {
    pcVar8 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  pcVar7 = pcVar9 + -uVar4;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  EMIT_SOUND_SUIT(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),acStack_14);
LAB_10033f99:
  *(float *)(param_1 + 0x850) = gpGlobals->time + 3.5;
  return;
}

/* 10033fc0  CBasePlayer::SetSuitUpdate  (377 bytes)
 * undefined SetSuitUpdate(byte.conflict * param_1, int param_2, int param_3)
 * called by: CBasePlayer::CheckTimeBasedDamage, CBasePlayer::Killed, CBasePlayer::StartObserver, CBasePlayer::TakeDamage, CItemAntidote::MyTouch, CItemBattery::MyTouch
 */
void __thiscall
CBasePlayer::SetSuitUpdate(CBasePlayer *this,byte_conflict *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = -1;
  if (((this->pev->weapons & 0x80000000U) != 0) &&
     (iVar1 = (**(code **)(*g_pGameRules + 0x14))(), iVar1 == 0)) {
    if (param_1 == (byte_conflict *)0x0) {
      *(undefined4 *)&this->field_0x854 = 0;
      *(undefined4 *)&this->field_0x858 = 0;
      *(undefined4 *)&this->field_0x85c = 0;
      *(undefined4 *)&this->field_0x860 = 0;
      return;
    }
    if (param_2 == 0) {
      iVar1 = SENTENCEG_Lookup((void *)0x0,(int)param_1,(char *)0x0);
      if (iVar1 < 0) {
        return;
      }
    }
    else {
      iVar1 = SENTENCEG_GetIndex(param_1);
      iVar1 = -iVar1;
    }
    iVar2 = 0;
    piVar3 = (int *)&this->field_0x868;
    do {
      if (iVar1 == *piVar3) {
        if (gpGlobals->time <= *(float *)(&this->field_0x8e8 + iVar2 * 4)) {
          return;
        }
        *(undefined4 *)(&this->field_0x868 + iVar2 * 4) = 0;
        *(undefined4 *)(&this->field_0x8e8 + iVar2 * 4) = 0;
        iVar4 = iVar2;
        break;
      }
      if (*piVar3 == 0) {
        iVar4 = iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 0x20);
    if (param_3 != 0) {
      if (iVar4 < 0) {
        iVar4 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
      }
      *(int *)(&this->field_0x868 + iVar4 * 4) = iVar1;
      *(float *)(&this->field_0x8e8 + iVar4 * 4) = (float)param_3 + gpGlobals->time;
    }
    *(int *)(&this->field_0x854 + *(int *)&this->field_0x864 * 4) = iVar1;
    iVar4 = *(int *)&this->field_0x864 + 1;
    *(int *)&this->field_0x864 = iVar4;
    if (iVar4 == 4) {
      *(undefined4 *)&this->field_0x864 = 0;
    }
    if (*(float *)&this->field_0x850 <= gpGlobals->time) {
      if (*(float *)&this->field_0x850 == 0.0) {
        *(float *)&this->field_0x850 = gpGlobals->time + 0.1;
        return;
      }
      *(float *)&this->field_0x850 = gpGlobals->time + 3.5;
    }
  }
  return;
}

/* 10034140  CBasePlayer::UpdatePlayerSound  (393 bytes)
 * undefined UpdatePlayerSound(int param_1)
 * called by: CBasePlayer::PostThink
 */
void __fastcall CBasePlayer::UpdatePlayerSound(int param_1)

{
  int iVar1;
  uint uVar2;
  globalvars_t *pgVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  
  iVar4 = FUN_1003df90(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  puVar5 = (undefined4 *)CSoundEnt::SoundPointerForIndex(iVar4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[3] = 0;
    iVar1 = *(int *)(param_1 + 4);
    if ((*(uint *)(iVar1 + 0x1a4) & 0x200) != 0) {
      lVar7 = __ftol();
      iVar4 = (int)lVar7;
      if (0x200 < iVar4) {
        iVar4 = 0x200;
      }
    }
    if ((*(byte *)(iVar1 + 0x180) & 2) != 0) {
      iVar4 = iVar4 + 100;
    }
    if (iVar4 < *(int *)(param_1 + 0x7e4)) {
      *(int *)(param_1 + 0x7e0) = *(int *)(param_1 + 0x7e4);
      puVar5[3] = puVar5[3] | 1;
    }
    else {
      *(int *)(param_1 + 0x7e0) = iVar4;
    }
    lVar7 = __ftol();
    iVar4 = *(int *)(param_1 + 0x7e0);
    *(int *)(param_1 + 0x7e4) = (int)lVar7;
    pgVar3 = gpGlobals;
    iVar1 = puVar5[4];
    iVar6 = iVar4;
    if ((iVar4 <= iVar1) && (iVar6 = iVar1, iVar4 < iVar1)) {
      lVar7 = __ftol();
      iVar6 = (int)lVar7;
      if ((int)lVar7 < iVar4) {
        iVar6 = 0;
      }
    }
    if (*(int *)(param_1 + 0x9bc) != 0) {
      iVar6 = 0;
    }
    if (*(float *)(param_1 + 0x7f0) < pgVar3->time) {
      *(undefined4 *)(param_1 + 0x7e8) = 0;
    }
    iVar4 = *(int *)(param_1 + 4);
    *puVar5 = *(undefined4 *)(iVar4 + 8);
    puVar5[1] = *(undefined4 *)(iVar4 + 0xc);
    puVar5[2] = *(undefined4 *)(iVar4 + 0x10);
    uVar2 = *(uint *)(param_1 + 0x7e8);
    puVar5[4] = iVar6;
    puVar5[3] = puVar5[3] | uVar2 | 4;
    lVar7 = __ftol();
    *(int *)(param_1 + 0x7ec) = (int)lVar7;
    if ((int)lVar7 < 0) {
      *(undefined4 *)(param_1 + 0x7ec) = 0;
    }
    return;
  }
  (*g_engfuncs.pfnAlertMessage)(at_console,s_Client_lost_reserved_sound__100a1164);
  return;
}

/* 100342d0  CBasePlayer::Precache  (149 bytes)
 * undefined Precache()
 */
void __fastcall CBasePlayer::Precache(int param_1)

{
  int iVar1;
  char *szFmt;
  
  if ((DAT_100ae740 != 0) && (DAT_100ae744 == 0)) {
    iVar1 = CBaseMonster::ShouldFadeOnDeath();
    if (iVar1 == 0) {
      szFmt = s___Graph_pointers_were_not_set__100a119c;
    }
    else {
      szFmt = s___Graph_Pointers_Set__100a1184;
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,szFmt);
  }
  *(undefined4 *)(param_1 + 0x970) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x978) = 1000;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x99c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9d0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9a8) = 0xc0;
  LinkUserMessages();
  *(undefined4 *)(param_1 + 0x9c8) = 5;
  if (DAT_100a0988 != 0) {
    *(undefined4 *)(param_1 + 0x9a0) = 1;
  }
  return;
}

/* 10034370  CBasePlayer::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CBasePlayer::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_PLAYER_100a11bc,(int)param_1,0x100a0990,0x24);
  return;
}

/* 100343a0  CBasePlayer::Restore  (555 bytes)
 * undefined4 Restore(void * param_1)
 */
undefined4 __thiscall CBasePlayer::Restore(CBasePlayer *this,void *param_1)

{
  entvars_t *peVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  edict_t *pClient;
  char *value;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_10;
  Vector VStack_c;
  
  iVar2 = CBaseToggle::Restore((CBaseToggle *)this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = CRestore::ReadFields
                    (param_1,(byte_conflict *)s_PLAYER_100a11bc,(int)this,&DAT_100a0990,0x24);
  if (*(int *)((int)gpGlobals->pSaveData + 0x52c) == 0) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,s_No_Landmark__s_100a11cc,(int)gpGlobals->pSaveData + 0x530);
    iVar4 = FUN_1004c380((int *)this);
    iVar2 = iVar4;
    if (iVar4 != 0) {
      iVar2 = iVar4 + 0x80;
    }
    uStack_18 = *(undefined4 *)(iVar2 + 8);
    uStack_14 = *(undefined4 *)(iVar2 + 0xc);
    fStack_10 = *(float *)(iVar2 + 0x10) + 1.0;
    Vector::Vector(&VStack_c,&uStack_18);
    peVar1 = this->pev;
    peVar1->origin[0] = VStack_c.x;
    peVar1->origin[1] = VStack_c.y;
    peVar1->origin[2] = VStack_c.z;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 0x80;
    }
    peVar1 = this->pev;
    peVar1->angles[0] = *(vec_t *)(iVar4 + 0x50);
    peVar1->angles[1] = *(vec_t *)(iVar4 + 0x54);
    peVar1->angles[2] = *(vec_t *)(iVar4 + 0x58);
  }
  this->pev->v_angle[2] = 0.0;
  peVar1 = this->pev;
  peVar1->angles[0] = peVar1->v_angle[0];
  peVar1->angles[1] = peVar1->v_angle[1];
  peVar1->angles[2] = peVar1->v_angle[2];
  this->pev->fixangle = 1;
  *(undefined4 *)&this->field_0x130 = 0xf7;
  DAT_100ae48c = this->pev->modelindex;
  if ((this->pev->flags & 0x4000U) == 0) {
    VStack_c.z = 36.0;
    fStack_10 = -36.0;
  }
  else {
    VStack_c.z = 18.0;
    fStack_10 = -18.0;
  }
  VStack_c.y = 16.0;
  VStack_c.x = 16.0;
  uStack_14 = 0xc1800000;
  uStack_18 = 0xc1800000;
  UTIL_SetSize((int)this->pev,&uStack_18,&VStack_c);
  (*g_engfuncs.pfnSetPhysicsKeyValue)(this->pev->pContainingEntity,&DAT_100a11c8,&DAT_1009ce20);
  if (*(int *)&this->field_0x9c0 == 0) {
    value = &DAT_1009f1d8;
    pClient = this->pev->pContainingEntity;
  }
  else {
    value = &DAT_1009ce20;
    pClient = this->pev->pContainingEntity;
  }
  (*g_engfuncs.pfnSetPhysicsKeyValue)(pClient,&DAT_100a11c4,value);
  fStack_10 = 2.5888895e-29;
  CBaseEntity::SUB_DoNothing((CBaseEntity *)this);
  fStack_10 = 2.588891e-29;
  fVar5 = FUN_10076120();
  *(float *)&this->field_0x118 = (float)fVar5;
  return uVar3;
}

/* 100345d0  CBasePlayer::SelectItem  (265 bytes)
 * undefined SelectItem(byte.conflict * param_1)
 * called by: pfnClientCommand
 */
/* .so 0xdade4; ClientCommand "use", m_rgpPlayerItems 0x9e4 */

void __thiscall CBasePlayer::SelectItem(CBasePlayer *this,byte_conflict *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte_conflict *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  int local_4;
  
  pbVar3 = param_1;
  if (param_1 == (byte_conflict *)0x0) {
    return;
  }
  param_1 = &this->field_0x9e4;
  local_4 = 0;
  piVar7 = (int *)0x0;
  do {
    piVar8 = *(int **)param_1;
    if (piVar8 == (int *)0x0) {
LAB_1003465b:
      piVar8 = piVar7;
      if (piVar8 != (int *)0x0) {
        if (piVar8 == *(int **)&this->field_0x9fc) {
          return;
        }
        ResetAutoaim((int)this);
        if (*(int **)&this->field_0x9fc != (int *)0x0) {
          (**(code **)(**(int **)&this->field_0x9fc + 0x128))(0);
        }
        uVar2 = *(undefined4 *)&this->field_0x9fc;
        *(int **)&this->field_0x9fc = piVar8;
        *(undefined4 *)&this->field_0xa04 = uVar2;
        (**(code **)(*piVar8 + 0x120))();
        (**(code **)(**(int **)&this->field_0x9fc + 300))();
        return;
      }
    }
    else if (piVar8 != (int *)0x0) {
      do {
        pbVar4 = (byte *)(gpGlobals->pStringBase + *(int *)piVar8[1]);
        pbVar6 = pbVar3;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_10034641:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_10034646;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_10034641;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_10034646:
        piVar7 = piVar8;
        if (iVar5 == 0) goto LAB_1003465b;
        piVar8 = (int *)piVar8[0x1d];
      } while (piVar8 != (int *)0x0);
    }
    local_4 = local_4 + 1;
    param_1 = param_1 + 4;
    piVar7 = piVar8;
    if (5 < local_4) {
      return;
    }
  } while( true );
}

/* 10034700  CBasePlayer::TeamID  (19 bytes)
 * undefined TeamID()
 */
undefined1 * __fastcall CBasePlayer::TeamID(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_100a9398;
  if (*(int *)(param_1 + 4) != 0) {
    puVar1 = (undefined1 *)(param_1 + 0xb34);
  }
  return puVar1;
}

/* 10034ab0  CBasePlayer::GiveNamedItem  (147 bytes)
 * undefined GiveNamedItem(int param_1)
 * called by: FUN_1002ae80, FUN_10059810
 */
void __thiscall CBasePlayer::GiveNamedItem(CBasePlayer *this,int param_1)

{
  entvars_t *peVar1;
  edict_t *pEdict;
  int iVar2;
  
  pEdict = (*g_engfuncs.pfnCreateNamedEntity)(param_1 - (int)gpGlobals->pStringBase);
  if (pEdict != (edict_t *)0x0) {
    iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
    if (iVar2 != 0) {
      peVar1 = this->pev;
      (pEdict->v).origin[0] = peVar1->origin[0];
      (pEdict->v).origin[1] = peVar1->origin[1];
      (pEdict->v).origin[2] = peVar1->origin[2];
      (pEdict->v).spawnflags = (pEdict->v).spawnflags | 0x40000000;
      pfnSpawn(pEdict);
      pfnTouch(pEdict,this->pev->pContainingEntity);
      return;
    }
  }
  (*g_engfuncs.pfnAlertMessage)(at_console,s_NULL_Ent_in_GiveNamedItem__100a11dc);
  return;
}

/* 10034c90  CBasePlayer::ImpulseCommands  (525 bytes)
 * undefined ImpulseCommands()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CBasePlayer::ImpulseCommands(CBasePlayer *param_1)

{
  int iVar1;
  entvars_t *peVar2;
  void *this;
  uint iValue;
  bool bVar3;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  
  PlayerUse((int)param_1);
  iVar1 = param_1->pev->impulse;
  if (iVar1 == 99) {
    bVar3 = DAT_100d9704 == 0;
    if (bVar3) {
      DAT_100d9704 = (*g_engfuncs.pfnRegUserMsg)(&DAT_100a11f8,1);
    }
    iValue = (uint)bVar3;
    (*g_engfuncs.pfnMessageBegin)(1,DAT_100d9704,(float *)0x0,param_1->pev->pContainingEntity);
    (*g_engfuncs.pfnWriteByte)(iValue);
    (*g_engfuncs.pfnMessageEnd)();
    if (iValue == 0) {
      DAT_100d9704 = 0;
    }
  }
  else {
    if (iVar1 != 0xc9) {
      if (iVar1 == 0xcc) {
        ForceClientDllUpdate((int *)param_1);
        param_1->pev->impulse = 0;
        return;
      }
      CheatImpulseCommands(param_1,iVar1);
      param_1->pev->impulse = 0;
      return;
    }
    if (*(float *)&param_1->field_0xb30 <= gpGlobals->time) {
      UTIL_MakeVectors(param_1->pev->v_angle);
      peVar2 = param_1->pev;
      fStack_50 = peVar2->view_ofs[0] + peVar2->origin[0] + gpGlobals->v_forward[0] * 128.0;
      fStack_4c = peVar2->view_ofs[1] + peVar2->origin[1] + gpGlobals->v_forward[1] * 128.0;
      fStack_48 = peVar2->view_ofs[2] + peVar2->origin[2] + gpGlobals->v_forward[2] * 128.0;
      fStack_44 = peVar2->view_ofs[0] + peVar2->origin[0];
      fStack_40 = peVar2->origin[1] + peVar2->view_ofs[1];
      fStack_3c = peVar2->origin[2] + peVar2->view_ofs[2];
      UTIL_TraceLine(&fStack_44,&fStack_50,1,peVar2->pContainingEntity,auStack_38);
      if (fStack_28 != 1.0) {
        *(float *)&param_1->field_0xb30 = _DAT_1009ec3c + gpGlobals->time;
        this = (void *)FUN_100360b0(0);
        FUN_10034720(this,(int)param_1->pev);
        param_1->pev->impulse = 0;
        return;
      }
    }
  }
  param_1->pev->impulse = 0;
  return;
}

/* 10034ea0  CBasePlayer::CheatImpulseCommands  (1186 bytes)
 * undefined CheatImpulseCommands(undefined4 param_1)
 * called by: CBasePlayer::ImpulseCommands
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CBasePlayer::CheatImpulseCommands(CBasePlayer *this,undefined4 param_1)

{
  int iVar1;
  entvars_t *peVar2;
  int *piVar3;
  int iVar4;
  edict_t *pTextureEntity;
  char *pcVar5;
  undefined4 uVar6;
  void *this_00;
  float local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 auStack_6c [48];
  edict_t *peStack_3c;
  undefined1 local_38 [16];
  float local_28;
  
  if (_g_flWeaponCheat != 0.0) {
    switch(param_1) {
    case 0x66:
      FUN_10012d30((int)this->pev,1,1);
      return;
    case 0x67:
      piVar3 = (int *)FUN_10034b50((int)this);
      if ((piVar3 != (int *)0x0) &&
         (piVar3 = (int *)(**(code **)(*piVar3 + 0x68))(), piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 0x138))();
        return;
      }
      break;
    case 0x68:
      CGlobalState::DumpGlobals((int *)&DAT_102ef3b0);
      return;
    case 0x69:
      if (*(int *)&this->field_0x9bc != 0) {
        (*g_engfuncs.pfnAlertMessage)(at_console,s_Player_is_audible_100a12c0);
        *(undefined4 *)&this->field_0x9bc = 0;
        return;
      }
      (*g_engfuncs.pfnAlertMessage)(at_console,s_Player_is_silent_100a12ac);
      *(undefined4 *)&this->field_0x9bc = 1;
      return;
    case 0x6a:
      iVar4 = FUN_10034b50((int)this);
      if (iVar4 != 0) {
        (*g_engfuncs.pfnAlertMessage)
                  (at_console,s_Classname___s_100a129c,
                   gpGlobals->pStringBase + **(int **)(iVar4 + 4));
        iVar1 = *(int *)(*(int *)(iVar4 + 4) + 0x1cc);
        if (iVar1 == 0) {
          (*g_engfuncs.pfnAlertMessage)(at_console,s___TargetName__No_Targetname_100a1268);
        }
        else {
          (*g_engfuncs.pfnAlertMessage)
                    (at_console,s___Targetname___s_100a1288,gpGlobals->pStringBase + iVar1);
        }
        (*g_engfuncs.pfnAlertMessage)
                  (at_console,s_Model___s_100a125c,
                   gpGlobals->pStringBase + *(int *)(*(int *)(iVar4 + 4) + 0xb8));
        iVar4 = *(int *)(*(int *)(iVar4 + 4) + 4);
        if (iVar4 != 0) {
          (*g_engfuncs.pfnAlertMessage)
                    (at_console,s_Globalname___s_100a124c,gpGlobals->pStringBase + iVar4);
          return;
        }
      }
      break;
    case 0x6b:
      pTextureEntity = (*g_engfuncs.pfnPEntityOfEntIndex)(0);
      peVar2 = this->pev;
      local_b4 = peVar2->view_ofs[0] + peVar2->origin[0];
      local_b0 = peVar2->view_ofs[1] + peVar2->origin[1];
      fStack_ac = peVar2->view_ofs[2] + peVar2->origin[2];
      local_a4 = gpGlobals->v_forward[1] * 1024.0;
      fStack_a0 = gpGlobals->v_forward[2] * 1024.0;
      fStack_90 = gpGlobals->v_forward[0] * 1024.0 + local_b4;
      fStack_8c = local_a4 + local_b0;
      local_88 = fStack_a0 + fStack_ac;
      fStack_98 = local_b0;
      fStack_94 = fStack_ac;
      UTIL_TraceLine(&local_b4,&fStack_90,1,peVar2->pContainingEntity,auStack_6c);
      if (peStack_3c != (edict_t *)0x0) {
        pTextureEntity = peStack_3c;
      }
      pcVar5 = (*g_engfuncs.pfnTraceTexture)(pTextureEntity,&local_b4,&fStack_90);
      if (pcVar5 != (char *)0x0) {
        (*g_engfuncs.pfnAlertMessage)(at_console,s_Texture___s_100a123c,pcVar5);
        return;
      }
      break;
    case 0xc3:
      CBaseEntity::Create(0x100a122c,this->pev->origin,this->pev->angles,0);
      return;
    case 0xc4:
      CBaseEntity::Create(0x100a1218,this->pev->origin,this->pev->angles,0);
      return;
    case 0xc5:
      CBaseEntity::Create(0x100a1204,this->pev->origin,this->pev->angles,0);
      return;
    case 199:
      uVar6 = FUN_1003ad10();
      (*g_engfuncs.pfnAlertMessage)(at_console,&DAT_100a1200,uVar6);
      FUN_1003ad10();
      CXenSpore::Touch();
      return;
    case 0xca:
      UTIL_MakeVectors(this->pev->v_angle);
      peVar2 = this->pev;
      local_a8 = gpGlobals->v_forward[1] * 128.0;
      local_a4 = gpGlobals->v_forward[2] * 128.0;
      local_7c = peVar2->origin[0] + peVar2->view_ofs[0] + gpGlobals->v_forward[0] * 128.0;
      local_b4 = peVar2->view_ofs[1] + peVar2->origin[1] + local_a8;
      local_b0 = peVar2->view_ofs[2] + peVar2->origin[2] + local_a4;
      local_88 = peVar2->view_ofs[0] + peVar2->origin[0];
      local_84 = peVar2->origin[1] + peVar2->view_ofs[1];
      local_80 = peVar2->origin[2] + peVar2->view_ofs[2];
      local_78 = local_b4;
      local_74 = local_b0;
      UTIL_TraceLine(&local_88,&local_7c,1,peVar2->pContainingEntity,local_38);
      if (local_28 != 1.0) {
        this_00 = (void *)FUN_10036100(0);
        FUN_10034940(this_00,(int)this->pev);
      }
    }
  }
  return;
}

/* 100353e0  CBasePlayer::AddPlayerItem  (384 bytes)
 * undefined AddPlayerItem()
 */
undefined4 __thiscall CBasePlayer::AddPlayerItem(void *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar2 = (**(code **)(*param_2 + 0x154))();
  piVar4 = *(int **)((int)param_1 + iVar2 * 4 + 0x9e4);
  if (piVar4 != (int *)0x0) {
    do {
      pbVar3 = (byte *)(gpGlobals->pStringBase + *(int *)piVar4[1]);
      pbVar5 = (byte *)(gpGlobals->pStringBase + *(int *)param_2[1]);
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_10035450:
          iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_10035455;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_10035450;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_10035455:
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*param_2 + 0x114))(piVar4);
        if (iVar2 != 0) {
          (**(code **)(*g_pGameRules + 0x74))(param_1,param_2);
          FUN_10079f40(param_2);
          (**(code **)(*piVar4 + 300))();
          if (*(int **)((int)param_1 + 0x9fc) != (int *)0x0) {
            (**(code **)(**(int **)((int)param_1 + 0x9fc) + 300))();
          }
          (**(code **)(*param_2 + 0x13c))();
          return 0;
        }
        if (DAT_100aee70 == 0) {
          return 0;
        }
        (**(code **)(*param_2 + 0x13c))();
        return 0;
      }
      piVar4 = (int *)piVar4[0x1d];
    } while (piVar4 != (int *)0x0);
  }
  iVar2 = (**(code **)(*param_2 + 0x110))(param_1);
  if (iVar2 == 0) {
    if (DAT_100aee70 != 0) {
      (**(code **)(*param_2 + 0x13c))();
    }
    return 0;
  }
  (**(code **)(*g_pGameRules + 0x74))(param_1,param_2);
  FUN_10079f40(param_2);
  iVar2 = (**(code **)(*param_2 + 0x154))();
  param_2[0x1d] = *(int *)((int)param_1 + iVar2 * 4 + 0x9e4);
  iVar2 = (**(code **)(*param_2 + 0x154))();
  *(int **)((int)param_1 + iVar2 * 4 + 0x9e4) = param_2;
  iVar2 = (**(code **)(*g_pGameRules + 0xc))(param_1,param_2);
  if (iVar2 != 0) {
    FUN_10035a00(param_1,param_2);
  }
  return 1;
}

/* 10035560  CBasePlayer::RemovePlayerItem  (185 bytes)
 * undefined RemovePlayerItem()
 */
undefined4 __thiscall CBasePlayer::RemovePlayerItem(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0x9fc) == param_2) {
    ResetAutoaim(param_1);
    (**(code **)(*param_2 + 0x128))(0);
    *(undefined4 *)(param_2[1] + 0x104) = 0;
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 0x9fc) = 0;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xbc) = 0;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xc0) = 0;
  }
  else if (*(int **)(param_1 + 0xa04) == param_2) {
    *(undefined4 *)(param_1 + 0xa04) = 0;
  }
  iVar3 = (**(code **)(*param_2 + 0x154))();
  piVar1 = *(int **)(param_1 + 0x9e4 + iVar3 * 4);
  if (piVar1 == param_2) {
    iVar3 = (**(code **)(*param_2 + 0x154))();
    *(int *)(param_1 + 0x9e4 + iVar3 * 4) = param_2[0x1d];
    return 1;
  }
  do {
    piVar2 = piVar1;
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)piVar2[0x1d];
  } while ((int *)piVar2[0x1d] != param_2);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  piVar2[0x1d] = param_2[0x1d];
  return 1;
}

/* 10035620  CBasePlayer::GiveAmmo  (196 bytes)
 * undefined GiveAmmo()
 */
int __thiscall
CBasePlayer::GiveAmmo(void *param_1,undefined4 param_2,byte_conflict *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *this;
  void *this_00;
  int unaff_EBP;
  
  if (param_3 != (byte_conflict *)0x0) {
    iVar1 = (**(code **)(*g_pGameRules + 0x9c))(param_1,param_3,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_100357d0(this,param_3);
      if ((-1 < iVar1) && (iVar1 < 0x20)) {
        iVar2 = *(int *)((int)param_1 + iVar1 * 4 + 0xa0c);
        param_4 = param_4 - iVar2;
        if (param_4 <= unaff_EBP) {
          unaff_EBP = param_4;
        }
        if (unaff_EBP < 1) {
          return iVar1;
        }
        *(int *)((int)param_1 + iVar1 * 4 + 0xa0c) = iVar2 + unaff_EBP;
        if (DAT_100d9730 != 0) {
          (*g_engfuncs.pfnMessageBegin)
                    (1,DAT_100d9730,(float *)0x0,*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208));
          iVar2 = FUN_100357d0(this_00,param_3);
          (*g_engfuncs.pfnWriteByte)(iVar2);
          (*g_engfuncs.pfnWriteByte)(unaff_EBP);
          (*g_engfuncs.pfnMessageEnd)();
        }
        TabulateAmmo(param_1);
        return iVar1;
      }
    }
  }
  return -1;
}

/* 100356f0  CBasePlayer::ItemPreFrame  (38 bytes)
 * undefined ItemPreFrame(int param_1)
 * called by: CBasePlayer::PreThink
 */
/* .so 0xdc484; PreThink call order */

void __fastcall CBasePlayer::ItemPreFrame(int param_1)

{
  if ((*(float *)(param_1 + 0x118) <= 0.0) && (*(int **)(param_1 + 0x9fc) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1003570f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x9fc) + 0x130))();
    return;
  }
  return;
}

/* 10035820  CBasePlayer::FBecomeProne  (20 bytes)
 * undefined FBecomeProne()
 */
undefined4 __fastcall CBasePlayer::FBecomeProne(int param_1)

{
  *(uint *)(param_1 + 0x834) = *(uint *)(param_1 + 0x834) | 4;
  return 1;
}

/* 10035840  CBasePlayer::Illumination  (44 bytes)
 * int Illumination(int param_1)
 */
int __fastcall CBasePlayer::Illumination(int param_1)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnGetEntityIllum)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  iVar1 = iVar1 + *(int *)(param_1 + 0x7ec);
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  return iVar1;
}

/* 100358a0  CBasePlayer::ResetAutoaim  (136 bytes)
 * undefined ResetAutoaim(int param_1)
 * called by: CBasePlayer::RemovePlayerItem, CBasePlayer::SelectItem, FUN_10033050, FUN_10035a00
 */
void __fastcall CBasePlayer::ResetAutoaim(int param_1)

{
  if ((*(float *)(param_1 + 0xb0c) != 0.0) || (*(float *)(param_1 + 0xb10) != 0.0)) {
    *(undefined4 *)(param_1 + 0xb0c) = 0;
    *(undefined4 *)(param_1 + 0xb10) = 0;
    *(undefined4 *)(param_1 + 0xb14) = 0;
    (*g_engfuncs.pfnCrosshairAngle)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208),0.0,0.0);
  }
  *(undefined4 *)(param_1 + 0xb18) = 0;
  return;
}

/* 10035930  CBasePlayer::SetCustomDecalFrames  (35 bytes)
 * undefined SetCustomDecalFrames(int param_1)
 * called by: BotSetup, pfnClientPutInServer, pfnPlayerCustomization
 */
/* .so 0xdd488; pl+0xb2c (.so 0xb40) */

void __thiscall CBasePlayer::SetCustomDecalFrames(CBasePlayer *this,int param_1)

{
  if ((0 < param_1) && (param_1 < 8)) {
    *(int *)&this->field_0xb2c = param_1;
    return;
  }
  *(undefined4 *)&this->field_0xb2c = 0xffffffff;
  return;
}

/* 100478d0  CBasePlayer::ShootBulletsPlayer  (2717 bytes)
 * undefined ShootBulletsPlayer(float * param_1, byte.conflict param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12, int param_13, int param_14, int param_15)
 * called by: CBasePlayer::ShootBulletsPlayer, FUN_100556a0, FUN_10055a10, FUN_10055f30
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
CBasePlayer::ShootBulletsPlayer
          (CBasePlayer *this,float *param_1,byte_conflict param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9,float param_10,
          float param_11,float param_12,int param_13,int param_14,int param_15)

{
  edict_t *peVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float10 fVar7;
  float10 extraout_ST0_00;
  longlong lVar8;
  float in_stack_ffffff18;
  float fVar9;
  float in_stack_ffffff24;
  float fVar10;
  entvars_t *in_stack_ffffff30;
  entvars_t *peVar11;
  float fVar12;
  float fVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  Vector VStack_a4;
  Vector VStack_98;
  Vector VStack_8c;
  float fStack_80;
  uint uStack_7c;
  Vector VStack_78;
  Vector VStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  Vector VStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  Vector VStack_30;
  Vector VStack_24;
  Vector VStack_18;
  Vector VStack_c;
  
  if ((DAT_100c0a30 & 1) == 0) {
    DAT_100c0a30 = DAT_100c0a30 | 1;
    FUN_1007dd3e(0x100483c0);
  }
  if ((DAT_100c0a30 & 2) == 0) {
    DAT_100c0a30 = DAT_100c0a30 | 2;
    FUN_1007dd3e(0x100483b0);
  }
  if ((DAT_100c0a30 & 4) == 0) {
    DAT_100c0a30 = DAT_100c0a30 | 4;
    FUN_1007dd3e(0x100483a0);
  }
  if ((DAT_100c0a30 & 8) == 0) {
    DAT_100c0a30 = DAT_100c0a30 | 8;
    FUN_1007dd3e(0x10048390);
  }
  if ((DAT_100c0a30 & 0x10) == 0) {
    DAT_100c0a30 = DAT_100c0a30 | 0x10;
    FUN_1007dd3e(0x10048380);
  }
  if ((DAT_100c0a30 & 0x20) == 0) {
    DAT_100c0a30 = DAT_100c0a30 | 0x20;
    FUN_1007dd3e(0x10048370);
  }
  if (DAT_100c0fc0 == 0) {
    fVar6 = (float10)(*this->vtable[2])();
    DAT_100c09ac = 0;
    if (fVar6 < (float10)0.99) goto LAB_100479d1;
  }
  else {
LAB_100479d1:
    DAT_100c09ac = 1;
  }
  _DAT_100c09d0 = gpGlobals->v_right[0];
  _DAT_100c09d4 = gpGlobals->v_right[1];
  _DAT_100c09d8 = gpGlobals->v_right[2];
  _DAT_100c09b0 = gpGlobals->v_up[0];
  _DAT_100c09b4 = gpGlobals->v_up[1];
  _DAT_100c09b8 = gpGlobals->v_up[2];
  DAT_100c0998 = get_ammo_info(param_14);
  if (DAT_100c09ac == 0) {
    FUN_100796a0();
  }
  iVar17 = param_13;
  DAT_102eed08 = 0x1002;
  DAT_100c09e8 = 0.0;
  _DAT_100c09e0 = 1.0;
  if (param_13 != 2) {
    if (param_2 != '\0') {
      uStack_7c = (uint)param_2;
      iVar18 = param_15 + 1;
      do {
        fVar6 = FUN_10076190(iVar18,-3.1415927,0x40490fdb);
        iVar18 = iVar18 + 1;
        fStack_80 = (float)fVar6;
        peVar11 = (entvars_t *)0x10047d46;
        fVar6 = FUN_10076190(iVar18,0.0,DAT_100c0998[7]);
        fVar7 = (float10)1.0 - fVar6 * fVar6 * fVar6;
        fVar6 = (float10)fcos((float10)fStack_80);
        _DAT_100c09e4 = (float)(fVar7 * fVar6);
        fVar6 = (float10)fsin((float10)fStack_80);
        fVar7 = fVar7 * fVar6;
        _DAT_100c09dc = (float)fVar7;
        fVar7 = fVar7 * (float10)param_10;
        puVar3 = (undefined4 *)
                 Vector::Vector(&VStack_24,(float)(fVar7 * (float10)_DAT_100c09b0),
                                (float)(fVar7 * (float10)_DAT_100c09b4),
                                (float)(fVar7 * (float10)_DAT_100c09b8));
        Vector::Vector(&VStack_30,puVar3);
        Vector::Vector(&VStack_6c,&VStack_30.x);
        fVar13 = _DAT_100c09e4 * param_9;
        puVar3 = (undefined4 *)
                 Vector::Vector(&VStack_c,fVar13 * _DAT_100c09d0,fVar13 * _DAT_100c09d4,
                                fVar13 * _DAT_100c09d8);
        Vector::Vector(&VStack_18,puVar3);
        Vector::Vector(&VStack_98,&VStack_18.x);
        VStack_78.y = param_7 + VStack_98.y;
        VStack_78.z = param_8 + VStack_98.z;
        fStack_3c = VStack_98.x + param_6 + VStack_6c.x;
        fStack_38 = VStack_6c.y + VStack_78.y;
        fStack_34 = VStack_6c.z + VStack_78.z;
        Vector::Vector(&VStack_a4,&fStack_3c);
        _DAT_100c09c0 = VStack_a4.x;
        _DAT_100c09c4 = VStack_a4.y;
        _DAT_100c09c8 = VStack_a4.z;
        fStack_58 = (float)(int)DAT_100c0998[5];
        fStack_60 = VStack_a4.x * fStack_58;
        fStack_5c = VStack_a4.y * fStack_58;
        fStack_58 = VStack_a4.z * fStack_58;
        Vector::Vector(&VStack_48,&fStack_60);
        fStack_54 = VStack_48.x + param_3;
        fStack_50 = param_4 + VStack_48.y;
        fStack_4c = param_5 + VStack_48.z;
        Vector::Vector(&VStack_8c,&fStack_54);
        _DAT_100c0a40 = VStack_8c.z;
        _DAT_100c0a38 = VStack_8c.x;
        _DAT_100c0a3c = VStack_8c.y;
        if (DAT_100c09ac == 0) {
          peVar1 = this->pev->pContainingEntity;
          pfVar14 = (float *)0x0;
          puVar2 = &DAT_100c0a38;
          FUN_10047770(&param_3,&DAT_100c0a38,0,peVar1,&DAT_100c09f0);
          if (_DAT_100c0a00 != 1.0) {
            peVar1 = (edict_t *)DAT_100c0a20;
            if (DAT_100c0a20 == 0) {
              peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
              if (peVar1 != (edict_t *)0x0) goto LAB_10047fb4;
              DAT_100c0a28 = (int *)0x0;
            }
            else {
LAB_10047fb4:
              DAT_100c0a28 = peVar1->pvPrivateData;
            }
            _DAT_100c0a2c =
                 SQRT((param_3 - _DAT_100c0a04) * (param_3 - _DAT_100c0a04) +
                      (param_4 - _DAT_100c0a08) * (param_4 - _DAT_100c0a08) +
                      (param_5 - _DAT_100c0a0c) * (param_5 - _DAT_100c0a0c)) /
                 ((float)(int)DAT_100c0998[8] * 10.0);
            lVar8 = __ftol();
            fVar6 = FUN_10053030((int)lVar8);
            DAT_100c09e8 = (float)(fVar6 * (float10)param_12);
            if ((0.0 < DAT_1009ed5c) && (_g_flWeaponCheat != 0.0)) {
              _DAT_100c09e0 = DAT_1009ed5c;
            }
            if (iVar17 == 1) {
              peVar1 = (edict_t *)&DAT_100c09f0;
              iVar5 = *DAT_100c0a28;
              Vector::Vector((Vector *)&stack0xffffff38,(undefined4 *)&DAT_100c09c0);
              peVar11 = this->pev;
            }
            else {
              peVar1 = (edict_t *)&DAT_100c09f0;
              iVar5 = *DAT_100c0a28;
              Vector::Vector((Vector *)&stack0xffffff38,(undefined4 *)&DAT_100c09c0);
              peVar11 = this->pev;
            }
            (**(code **)(iVar5 + 0x4c))();
            if (_g_flWeaponCheat != 0.0) {
              (*g_engfuncs.pfnCVarGetFloat)(s_dmgreport_1009ef74);
              if ((float10)1.0 < extraout_ST0_00) {
                peVar11 = (entvars_t *)0x0;
                fVar12 = 0.0;
                fVar13 = 0.0;
                in_stack_ffffff24 = 0.0;
                puVar4 = UTIL_VarArgs((byte_conflict *)s_damage__f_100a32d8);
                in_stack_ffffff18 = 2.6131977e-29;
                UTIL_ClientPrintAll(3,puVar4,(int)in_stack_ffffff24,(int)fVar13,(int)fVar12,
                                    (int)peVar11);
              }
            }
            DAT_100c09e8 = DAT_100c09e8 * (float)DAT_100c0998[6];
            iVar5 = (**(code **)(*DAT_100c0a28 + 0xc0))();
            if (iVar5 != 0) {
              DAT_100c09e8 = DAT_100c09e8 * 0.5;
            }
          }
        }
        else {
          peVar1 = (edict_t *)&param_14;
          pfVar14 = &param_12;
          puVar2 = &DAT_100c09c0;
          peVar11 = (entvars_t *)0x10047f5b;
          CBulletManager::FireBullet
                    ((CBulletManager *)&DAT_100c22ac,(int *)this,(int *)&param_3,
                     (int *)&DAT_100c09c0,(int *)pfVar14,(int *)peVar1,iVar17);
        }
        lVar8 = __ftol();
        iVar5 = (int)lVar8;
        puVar4 = &DAT_100c0a04;
        fVar13 = 2.613228e-29;
        Vector::Vector((Vector *)&stack0xffffff3c,(undefined4 *)&DAT_100c0a04);
        Vector::Vector((Vector *)&stack0xffffff30,&param_3);
        FUN_10077c60(peVar11,fVar13,(float)puVar4,puVar2,pfVar14,(float)peVar1,iVar5);
        uStack_7c = uStack_7c - 1;
      } while (uStack_7c != 0);
    }
    if (DAT_100c09ac == 0) {
      FUN_100796c0(this->pev,this->pev);
      if ((iVar17 != 1) && (5.0 < DAT_100c09e8)) {
        fVar13 = DAT_100c09e8 + DAT_100c09e8;
        if (48.0 <= fVar13) {
          fVar13 = 48.0;
        }
        VStack_8c.x = fVar13 * _DAT_100c09c0;
        _DAT_100c09a0 = VStack_8c.x + _DAT_100c0a04;
        _DAT_100c09a4 = _DAT_100c09c4 * fVar13 + _DAT_100c0a08;
        _DAT_100c09a8 = fVar13 * _DAT_100c09c8 + _DAT_100c0a0c;
        VStack_a4.x = _DAT_100c09a0;
        VStack_a4.y = _DAT_100c09a4;
        VStack_a4.z = _DAT_100c09a8;
        VStack_8c.y = _DAT_100c09a4;
        VStack_8c.z = _DAT_100c09a8;
        iVar17 = FUN_10077360(&DAT_100c09a0);
        if (iVar17 != -2) {
          fVar15 = 2.8026e-45;
          fVar13 = _DAT_100c09dc * param_10;
          lVar8 = (ulonglong)(uint)(_DAT_100c09e0 * DAT_100c09e8) << 0x20;
          fVar12 = _DAT_100c09e4 * param_9;
          fVar16 = (float)param_14;
          iVar17 = param_15;
          puVar3 = (undefined4 *)Vector::Vector(&VStack_c,fVar12,fVar13,0);
          fVar10 = 2.6133335e-29;
          Vector::Vector((Vector *)&stack0xffffff30,puVar3);
          puVar2 = &DAT_100c09c0;
          fVar9 = 2.613338e-29;
          Vector::Vector((Vector *)&stack0xffffff24,(undefined4 *)&DAT_100c09c0);
          Vector::Vector((Vector *)&stack0xffffff18,(undefined4 *)&DAT_100c09a0);
          ShootBulletsPlayer(this,&VStack_24.x,'\x01',in_stack_ffffff18,fVar9,(float)puVar2,
                             in_stack_ffffff24,fVar10,(float)puVar3,fVar12,fVar13,(float)lVar8,
                             (float)((ulonglong)lVar8 >> 0x20),(int)fVar15,(int)fVar16,iVar17);
        }
      }
    }
    fVar13 = _DAT_100c09dc * param_10;
    *param_1 = _DAT_100c09e4 * param_9;
    param_1[2] = 0.0;
    param_1[1] = fVar13;
    return;
  }
  VStack_a4.x = param_6 * 4096.0;
  VStack_a4.y = param_7 * 4096.0;
  VStack_a4.z = param_8 * 4096.0;
  Vector::Vector(&VStack_78,&VStack_a4.x);
  VStack_6c.x = VStack_78.x + param_3;
  VStack_6c.y = param_4 + VStack_78.y;
  VStack_6c.z = param_5 + VStack_78.z;
  Vector::Vector(&VStack_98,&VStack_6c.x);
  _DAT_100c0a38 = VStack_98.x;
  _DAT_100c0a3c = VStack_98.y;
  _DAT_100c0a40 = VStack_98.z;
  peVar1 = this->pev->pContainingEntity;
  fVar13 = 0.0;
  puVar2 = &DAT_100c0a38;
  FUN_10047770(&param_3,&DAT_100c0a38,0,peVar1,&DAT_100c09f0);
  if (_DAT_100c0a00 == 1.0) goto LAB_10047c81;
  peVar1 = (edict_t *)DAT_100c0a20;
  if (DAT_100c0a20 == 0) {
    peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar1 != (edict_t *)0x0) goto LAB_10047b58;
    DAT_100c0a28 = (int *)0x0;
  }
  else {
LAB_10047b58:
    DAT_100c0a28 = peVar1->pvPrivateData;
  }
  VStack_98.x = param_3 - _DAT_100c0a04;
  VStack_98.y = param_4 - _DAT_100c0a08;
  VStack_98.z = param_5 - _DAT_100c0a0c;
  Vector::Vector(&VStack_a4,&VStack_98.x);
  _DAT_100c0a2c =
       SQRT(VStack_a4.y * VStack_a4.y + VStack_a4.z * VStack_a4.z + VStack_a4.x * VStack_a4.x) *
       0.0033333334;
  lVar8 = __ftol();
  fVar6 = FUN_10053030((int)lVar8);
  peVar1 = (edict_t *)&DAT_100c09f0;
  DAT_100c09e8 = (float)(fVar6 * (float10)param_12);
  iVar17 = *DAT_100c0a28;
  Vector::Vector((Vector *)&stack0xffffff38,&param_6);
  in_stack_ffffff30 = this->pev;
  (**(code **)(iVar17 + 0x4c))();
  if (_g_flWeaponCheat != 0.0) {
    peVar1 = (edict_t *)0x10047c45;
    (*g_engfuncs.pfnCVarGetFloat)(s_dmgreport_1009ef74);
    if ((float10)1.0 < extraout_ST0) {
      iVar18 = 0;
      iVar17 = 0;
      peVar1 = (edict_t *)0x0;
      fVar13 = 0.0;
      in_stack_ffffff30 = (entvars_t *)0x10047c73;
      puVar2 = UTIL_VarArgs((byte_conflict *)s_damage_piercing___f_100a32e4);
      UTIL_ClientPrintAll(3,puVar2,(int)fVar13,(int)peVar1,iVar17,iVar18);
    }
  }
LAB_10047c81:
  lVar8 = __ftol();
  iVar17 = (int)lVar8;
  puVar4 = &DAT_100c0a04;
  fVar12 = 2.6128442e-29;
  Vector::Vector((Vector *)&stack0xffffff3c,(undefined4 *)&DAT_100c0a04);
  Vector::Vector((Vector *)&stack0xffffff30,&param_3);
  FUN_10077c60(in_stack_ffffff30,fVar12,(float)puVar4,puVar2,fVar13,(float)peVar1,iVar17);
  FUN_100796c0(this->pev,this->pev);
  *param_1 = param_9;
  param_1[1] = param_10;
  param_1[2] = param_11;
  return;
}

/* 1005dd60  CBasePlayer::PlayerDeathThink  (643 bytes)
 * void PlayerDeathThink(void)
 * called by: CBasePlayer::PreThink
 */
/* public: void __thiscall CBasePlayer::PlayerDeathThink(void) */

void __thiscall CBasePlayer::PlayerDeathThink(CBasePlayer *this)

{
  vec_t *pvVar1;
  entvars_t *peVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  Vector VStack_68;
  Vector local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  Vector local_24;
  Vector local_18;
  Vector local_c;
  
                    /* 0x5dd60  83  ?PlayerDeathThink@CBasePlayer@@QAEXXZ */
  peVar2 = this->pev;
  if ((peVar2->flags & 0x200U) != 0) {
    pvVar1 = peVar2->velocity;
    fVar3 = SQRT(peVar2->velocity[2] * peVar2->velocity[2] +
                 peVar2->velocity[1] * peVar2->velocity[1] +
                 peVar2->velocity[0] * peVar2->velocity[0]) - 20.0;
    if (0.0 < fVar3) {
      fVar4 = SQRT(peVar2->velocity[2] * peVar2->velocity[2] +
                   peVar2->velocity[1] * peVar2->velocity[1] + *pvVar1 * *pvVar1);
      if (fVar4 == 0.0) {
        puVar5 = &local_30;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0x3f800000;
      }
      else {
        fVar4 = 1.0 / fVar4;
        VStack_68.z = 2.6400855e-29;
        puVar5 = (undefined4 *)
                 Vector::Vector(&local_18,fVar4 * *pvVar1,fVar4 * peVar2->velocity[1],
                                fVar4 * peVar2->velocity[2]);
      }
      Vector::Vector(&local_3c,puVar5);
      VStack_68.z = 2.640102e-29;
      puVar5 = (undefined4 *)
               Vector::Vector(&local_c,local_3c.x * fVar3,local_3c.y * fVar3,local_3c.z * fVar3);
      Vector::Vector(&local_24,puVar5);
      peVar2 = this->pev;
      peVar2->velocity[0] = local_24.x;
      peVar2->velocity[1] = local_24.y;
      peVar2->velocity[2] = local_24.z;
    }
    else {
      *pvVar1 = DAT_100ae498;
      peVar2->velocity[1] = DAT_100ae49c;
      peVar2->velocity[2] = DAT_100ae4a0;
    }
  }
  iVar6 = FUN_100346e0((int)this);
  if (iVar6 != 0) {
    FUN_10033050(this,1);
  }
  peVar2 = this->pev;
  if (((peVar2->modelindex != 0) && (*(int *)&this->field_0x68 == 0)) && (peVar2->deadflag == 1)) {
    CBaseAnimating::StudioFrameAdvance((int)this,0.0);
    return;
  }
  if ((peVar2->movetype != 0) && ((peVar2->flags & 0x200U) != 0)) {
    peVar2->movetype = 0;
  }
  if (this->pev->deadflag == 1) {
    this->pev->deadflag = 2;
  }
  this->pev->framerate = 0.0;
  this->pev->effects = this->pev->effects | 0x20;
  this->pev->framerate = 0.0;
  peVar2 = this->pev;
  if (peVar2->deadflag == 2) {
    peVar2->deadflag = 3;
    return;
  }
  if (((*(float *)&this->field_0x754 < gpGlobals->time) || ((peVar2->button & 0xffff7fffU) != 0)) &&
     (peVar2->iuser1 == 0)) {
    FUN_100483e0((int)this,10.0);
    Vector::Vector(&VStack_68,this->pev->origin);
    StartObserver(this);
  }
  return;
}

/* 1005dff0  CBasePlayer::Killed  (1522 bytes)
 * undefined Killed(int param_1)
 * called by: CBot::Killed
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CBasePlayer::Killed(CBasePlayer *this,int param_1)

{
  undefined1 *this_00;
  float fVar1;
  float fVar2;
  entvars_t *peVar3;
  bool bVar4;
  int iVar5;
  edict_t *peVar6;
  undefined4 *puVar7;
  undefined3 extraout_var;
  int *piVar8;
  uint uVar9;
  float10 fVar10;
  longlong lVar11;
  float fStack00000008;
  float fStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  int in_stack_00000058;
  float fStack_14;
  float fStack_10;
  
  if (((DAT_100da9d8 != '\0') && (iVar5 = (*g_engfuncs.pfnRandomLong)(0,100), iVar5 < 0x50)) ||
     (iVar5 = (*g_engfuncs.pfnRandomLong)(0,100), iVar5 < 0x32)) {
    (*g_engfuncs.pfnMessageBegin)(4,DAT_100d97d8,(float *)(param_1 + 8),(edict_t *)0x0);
    iVar5 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1 + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar5);
    (*g_engfuncs.pfnWriteByte)(1);
    (*g_engfuncs.pfnMessageEnd)();
  }
  iVar5 = (*g_engfuncs.pfnRandomLong)(0,100);
  if (iVar5 < 0x32) {
    (*g_engfuncs.pfnMessageBegin)(4,DAT_100d97d8,this->pev->origin,(edict_t *)0x0);
    iVar5 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
    (*g_engfuncs.pfnWriteByte)(iVar5);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnMessageEnd)();
  }
  fVar1 = gpGlobals->time;
  *(undefined4 *)&this->field_0x530 = 0xffffffff;
  *(float *)&this->field_0x754 = fVar1 + 3.0;
  ResetArmament((int)this);
  peVar6 = this->pev->pContainingEntity;
  (*g_engfuncs.pfnSetView)(peVar6,peVar6);
  uVar9 = 1;
  FUN_10035870(this,1);
  this->field_0x7a6 = this->field_0x7a6 + '\x01';
  if (DAT_100aee6c != 0) {
    peVar6 = *(edict_t **)(DAT_100aee6c + 0x208);
    if ((peVar6 == (edict_t *)0x0) &&
       (peVar6 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar6 == (edict_t *)0x0)) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = peVar6->pvPrivateData;
    }
    iVar5 = (**(code **)(*piVar8 + 0xc0))();
    if (iVar5 == 0) {
      this->pev->iuser2 = 0;
    }
    else {
      iVar5 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(DAT_100aee6c + 0x208));
      this->pev->iuser2 = iVar5;
      iVar5 = UTIL_PlayerByIndex(this->pev->iuser2);
      *(int *)&this->field_0x748 = iVar5;
    }
  }
  lVar11 = __ftol();
  FUN_1004c260((int)this,(int)lVar11);
  if (*(float *)&this->field_0x75c < 0.0) {
    this->field_0x738 = 1;
  }
  else {
    this->field_0x738 = 0xb;
  }
  if ((*(int *)&this->field_0xf8 == 1) && (DAT_100c0a60 == '\0')) {
    (*this->vtable[3])(0x3ea8f5c3,0);
  }
  this->pev->iuser4 = 0;
  this->pev->iuser4 = this->pev->iuser4 | 2;
  if (*(int **)&this->field_0x9fc != (int *)0x0) {
    (**(code **)(**(int **)&this->field_0x9fc + 0x128))(0);
  }
  FUN_10062560((int)this);
  DropFlag(this,'\0');
  do {
    DropWeapon(this,uVar9,0.0);
    puVar7 = get_weapon_info(uVar9);
    if (puVar7[0x32] != -1) {
      DropWeapon(this,uVar9,0.0);
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x26);
  (**(code **)(*g_pGameRules + 0x68))(this,param_1,DAT_100aee6c);
  this_00 = &this->field_0x9b0;
  bVar4 = FUN_1000e440((uint *)this_00);
  if (CONCAT31(extraout_var,bVar4) != 0) {
    piVar8 = (int *)EHANDLE::operator->((uint *)this_00);
    (**(code **)(*piVar8 + 0xd8))(this,this,0,0);
    EHANDLE::operator=((EHANDLE *)this_00,0);
  }
  iVar5 = FUN_1003df90(this->pev->pContainingEntity);
  puVar7 = (undefined4 *)CSoundEnt::SoundPointerForIndex(iVar5);
  if (puVar7 != (undefined4 *)0x0) {
    FUN_1003dc00(puVar7);
  }
  CTSAnimation::Animate((CTSAnimation *)&this->field_0x278,(int *)this,7);
  *(undefined4 *)&this->field_0xb20 = 0;
  this->pev->modelindex = DAT_100ae48c;
  this->pev->deadflag = 1;
  this->pev->movetype = 6;
  this->pev->flags = this->pev->flags & 0xfffffdff;
  fVar10 = FUN_100145b0((int)this,(float)*(int *)&this->field_0x968);
  if ((float10)500.0 <= fVar10) {
    fStack00000010 = 500.0;
  }
  else {
    fVar10 = FUN_100145b0((int)this,(float)*(int *)&this->field_0x968);
    fStack00000010 = (float)fVar10;
  }
  fStack_10 = SQRT(_DAT_100ae4c0 * _DAT_100ae4c0 +
                   _DAT_100ae4bc * _DAT_100ae4bc + _DAT_100ae4b8 * _DAT_100ae4b8);
  if (fStack_10 == 0.0) {
    fVar1 = 0.0;
    fStack_14 = 0.0;
    fStack_10 = 1.0;
  }
  else {
    fStack_10 = 1.0 / fStack_10;
    fVar1 = _DAT_100ae4b8 * fStack_10;
    fStack_14 = _DAT_100ae4bc * fStack_10;
    fStack_10 = _DAT_100ae4c0 * fStack_10;
  }
  fStack00000010 = -fStack00000010;
  peVar3 = this->pev;
  fVar2 = peVar3->velocity[1];
  fStack00000008 = fStack_10 * fStack00000010 + peVar3->velocity[2];
  peVar3->velocity[0] = fStack00000010 * fVar1 + peVar3->velocity[0];
  peVar3->velocity[1] = fStack_14 * fStack00000010 + fVar2;
  peVar3->velocity[2] = fStack00000008;
  peVar3 = this->pev;
  if (((80.0 < SQRT(peVar3->velocity[1] * peVar3->velocity[1] +
                    peVar3->velocity[0] * peVar3->velocity[0])) ||
      (0x32 < *(int *)&this->field_0x968)) && (*(int *)&this->field_0x45c == 0)) {
    peVar3->velocity[2] = 180.0;
    this->pev->gravity = 0.5;
  }
  SetSuitUpdate(this,(byte_conflict *)0x0,0,0);
  *(undefined4 *)&this->field_0x9cc = 0;
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100d976c,(float *)0x0,this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x9cc);
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9784,(float *)0x0,(edict_t *)0x0);
  iVar5 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(iVar5);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  *(undefined4 *)&this->field_0x9e0 = 0;
  *(undefined4 *)&this->field_0x9dc = 0;
  this->pev->fov = 0.0;
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100d974c,(float *)0x0,this->pev->pContainingEntity);
  uStack00000014 = 0x1005e55b;
  (*g_engfuncs.pfnWriteByte)(0);
  uStack0000001c = 0x1005e564;
  (*g_engfuncs.pfnMessageEnd)();
  peVar3 = this->pev;
  if (((-40.0 <= peVar3->health) || (in_stack_00000058 == 1)) && (in_stack_00000058 != 2)) {
    peVar3->angles[0] = 0.0;
    this->pev->angles[2] = 0.0;
    *(code **)&this->field_0x10 = PlayerDeathThink;
    this->pev->nextthink = gpGlobals->time + 0.1;
    return;
  }
  peVar3->solid = 0;
  uStack0000001c = 0x1005e598;
  (*this->vtable[0x48])();
  this->pev->effects = this->pev->effects | 0x80;
  return;
}

/* 1005e5f0  CBasePlayer::Spawn  (966 bytes)
 * undefined Spawn(int * param_1)
 * called by: CBot::Spawn
 */
void __fastcall CBasePlayer::Spawn(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  float10 fVar6;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  undefined1 *puVar7;
  
  TSInit(param_1);
  *(int *)param_1[1] = (int)s_player_1009c678 - (int)gpGlobals->pStringBase;
  *(undefined4 *)(param_1[1] + 0x160) = 0x42c80000;
  *(undefined4 *)(param_1[1] + 0x1bc) = 0;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x40000000;
  *(undefined4 *)(param_1[1] + 0x10c) = 3;
  *(undefined4 *)(param_1[1] + 0x108) = 3;
  *(undefined4 *)(param_1[1] + 0x1b0) = *(undefined4 *)(param_1[1] + 0x160);
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) & 0x100000;
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 8;
  if (param_1[0x53] != 0) {
    *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 0x2000;
  }
  *(float *)(param_1[1] + 0x1fc) = gpGlobals->time + 12.0;
  *(undefined4 *)(param_1[1] + 0x1e0) = 0x40000000;
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0x170) = 0;
  *(undefined4 *)(param_1[1] + 0x1d8) = 0;
  *(undefined4 *)(param_1[1] + 0x1dc) = 0;
  *(undefined4 *)(param_1[1] + 0x120) = 0x3f800000;
  *(undefined4 *)(param_1[1] + 0x11c) = 0x3f800000;
  param_1[0x267] = -1;
  param_1[0x3f] = 0;
  param_1[0x20d] = 0;
  param_1[0x270] = 0;
  (*g_engfuncs.pfnSetPhysicsKeyValue)(*(edict_t **)(param_1[1] + 0x208),&DAT_100a11c4,&DAT_1009f1d8)
  ;
  (*g_engfuncs.pfnSetPhysicsKeyValue)(*(edict_t **)(param_1[1] + 0x208),&DAT_100a11c8,&DAT_1009ce20)
  ;
  param_1[0x277] = 0;
  *(undefined4 *)(param_1[1] + 0x214) = 0;
  param_1[0x278] = -1;
  param_1[0x2cc] = 0;
  fVar1 = gpGlobals->time;
  param_1[0x20f] = 0;
  param_1[0x25f] = 0;
  param_1[0x4b] = 0x3f000000;
  param_1[0x4c] = 0xf7;
  param_1[0x25d] = (int)(fVar1 + 2.0);
  fVar6 = FUN_10076120();
  param_1[0x46] = (int)(float)fVar6;
  (**(code **)(*param_1 + 0x9c))();
  param_1[0x1fe] = 99;
  param_1[0x1fd] = 0x3f800000;
  param_1[0x205] = 0;
  (**(code **)(*g_pGameRules + 0xd8))(param_1);
  (**(code **)(*g_pGameRules + 0x54))(param_1);
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_player_mdl_1009cc1c);
  DAT_100ae48c = *(undefined4 *)(param_1[1] + 0xb4);
  uVar2 = CBaseAnimating::LookupActivity((CBaseAnimating *)param_1,1);
  *(undefined4 *)(param_1[1] + 0x128) = uVar2;
  (*g_engfuncs.pfnSetView)(*(edict_t **)(param_1[1] + 0x208),*(edict_t **)(param_1[1] + 0x208));
  FUN_10035870(param_1,1);
  if ((*(uint *)(param_1[1] + 0x1a4) & 0x4000) == 0) {
    puVar7 = (undefined1 *)&stack0x00000014;
    uStack00000014 = 0x41800000;
    uStack00000018 = 0x41800000;
    uStack0000001c = 0x42100000;
    uStack00000008 = 0xc1800000;
    uStack0000000c = 0xc1800000;
    uStack00000010 = 0xc2100000;
    puVar5 = (undefined1 *)&stack0x00000008;
  }
  else {
    puVar7 = (undefined1 *)&stack0x00000008;
    uStack00000008 = 0x41800000;
    uStack0000000c = 0x41800000;
    uStack00000010 = 0x41900000;
    uStack00000014 = 0xc1800000;
    uStack00000018 = 0xc1800000;
    uStack0000001c = 0xc1900000;
    puVar5 = (undefined1 *)&stack0x00000014;
  }
  UTIL_SetSize(param_1[1],puVar5,puVar7);
  iVar4 = param_1[1];
  uStack00000008 = 0;
  uStack0000000c = 0;
  *(undefined4 *)(iVar4 + 0x174) = 0;
  uStack00000010 = 0x41e00000;
  *(undefined4 *)(iVar4 + 0x178) = 0;
  *(undefined4 *)(iVar4 + 0x17c) = 0x41e00000;
  (**(code **)(*param_1 + 0x20))();
  uStack00000008 = 0;
  uStack0000000c = 0x42000000;
  uStack00000010 = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0x42000000;
  param_1[0x4f] = 0;
  if (param_1[0x1f7] == -1) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Couldn_t_alloc_player_sound_slot_100a5118);
  }
  param_1[0x26f] = 0;
  param_1[0x281] = 0;
  param_1[0x268] = 1;
  param_1[0x276] = -1;
  param_1[0x26b] = 0;
  param_1[0x280] = 0;
  param_1[0x274] = -1;
  piVar3 = param_1 + 0x2a3;
  iVar4 = 0x20;
  do {
    piVar3[-0x20] = 0;
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  param_1[0x2ca] = 0;
  param_1[0x2c9] = 0;
  (**(code **)(*g_pGameRules + 0x44))(param_1);
  return;
}

/* 1005e9c0  CBasePlayer::TakeDamage  (1510 bytes)
 * undefined TakeDamage()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
CBasePlayer::TakeDamage
          (CBasePlayer *param_1,undefined4 param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  edict_t *peVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  float in_stack_0000002c;
  uint in_stack_00000030;
  float fVar11;
  char *pcVar12;
  int iVar13;
  int in_stack_fffffffc;
  
  uVar9 = (uint)param_5;
  bVar3 = true;
  if (((uint)param_5 & 0x40) != 0) {
    (**(code **)(*g_pGameRules + 0x14))();
  }
  iVar5 = (*param_1->vtable[0x2b])();
  if (iVar5 == 0) {
    return 0.0;
  }
  if (param_4 == 0.0) {
    return 0.0;
  }
  if ((((*(int *)&param_1->field_0xf8 == 6) || (*(int *)&param_1->field_0xf8 == 7)) ||
      (fVar11 = param_1->pev->velocity[1], fVar1 = param_1->pev->velocity[0],
      80.0 <= SQRT(fVar11 * fVar11 + fVar1 * fVar1))) || (80.0 < param_4)) {
    FUN_100465f0((int)&param_1->field_0x278);
  }
  else {
    FUN_10046610((int)&param_1->field_0x278);
  }
  peVar6 = *(edict_t **)((int)param_3 + 0x208);
  if ((peVar6 == (edict_t *)0x0) &&
     (peVar6 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar6 == (edict_t *)0x0)) {
    pvVar7 = (void *)0x0;
  }
  else {
    pvVar7 = peVar6->pvPrivateData;
  }
  iVar5 = (**(code **)(*g_pGameRules + 0x3c))(param_1,pvVar7);
  if (iVar5 == 0) {
    return 0.0;
  }
  lVar10 = __ftol();
  *(int *)&param_1->field_0x968 = (int)lVar10;
  fVar11 = param_3;
  lVar10 = __ftol();
  CBaseMonster::TakeDamage
            ((CBaseMonster *)param_1,in_stack_fffffffc,(int)param_3,(float)(int)lVar10,(uint)fVar11)
  ;
  iVar5 = 0;
  do {
    if (((uint)param_3 & 0x8000 << ((byte)iVar5 & 0x1f)) != 0) {
      (&param_1->field_0x100)[iVar5] = 0;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  (*g_engfuncs.pfnMessageBegin)(9,0x32,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(3);
  iVar5 = (*g_engfuncs.pfnIndexOfEdict)(param_1->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteShort)(iVar5);
  iVar5 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(in_stack_fffffffc + 0x208));
  (*g_engfuncs.pfnWriteShort)(iVar5);
  (*g_engfuncs.pfnWriteLong)(5);
  (*g_engfuncs.pfnMessageEnd)();
  if ((75.0 < param_1->pev->health) || (bVar4 = false, *(int *)&param_1->field_0x968 < 5)) {
    bVar4 = true;
  }
  bVar2 = 0x19 < *(int *)&param_1->field_0x968;
  param_5 = (float)(uint)(param_1->pev->health < 30.0);
  *(uint *)&param_1->field_0xfc = *(uint *)&param_1->field_0xfc | in_stack_00000030;
  *(undefined4 *)&param_1->field_0x99c = 0xffffffff;
  if (param_4 != 0.0) {
    while ((((!bVar4 || ((uVar9 & 0xffffc000) != 0)) && (bVar3)) && (uVar9 != 0))) {
      bVar3 = false;
      if ((uVar9 & 0x80) != 0) {
        if (bVar2) {
          SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DMG4_100a51f0,0,0x1e);
        }
        uVar9 = uVar9 & 0xffffff7f;
        bVar3 = true;
      }
      if ((uVar9 & 0x21) != 0) {
        if (bVar2) {
          pcVar12 = s__HEV_DMG5_100a51e4;
        }
        else {
          pcVar12 = s__HEV_DMG4_100a51f0;
        }
        SetSuitUpdate(param_1,(byte_conflict *)pcVar12,0,0x1e);
        uVar9 = uVar9 & 0xffffffde;
        bVar3 = true;
      }
      if ((uVar9 & 2) != 0) {
        if (5 < *(int *)&param_1->field_0x968) {
          SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DMG6_100a51d8,0,0x1e);
        }
        uVar9 = uVar9 & 0xfffffffd;
        bVar3 = true;
      }
      if ((uVar9 & 4) != 0) {
        if (bVar2) {
          pcVar12 = s__HEV_DMG1_100a51cc;
        }
        else {
          pcVar12 = s__HEV_DMG0_100a51c0;
        }
        SetSuitUpdate(param_1,(byte_conflict *)pcVar12,0,0x1e);
        uVar9 = uVar9 & 0xfffffffb;
        bVar3 = true;
      }
      if ((uVar9 & 0x200) != 0) {
        if (bVar2) {
          SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DMG2_100a51b4,0,0x3c);
        }
        uVar9 = uVar9 & 0xfffffdff;
        bVar3 = true;
      }
      if ((uVar9 & 0x28000) != 0) {
        SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DMG3_100a51a8,0,0x3c);
        uVar9 = uVar9 & 0xfffd7fff;
        bVar3 = true;
      }
      if ((uVar9 & 0x100000) != 0) {
        SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DET1_100a519c,0,0x3c);
        uVar9 = uVar9 & 0xffefffff;
        bVar3 = true;
      }
      if ((uVar9 & 0x10000) != 0) {
        SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DET0_100a5190,0,0x3c);
        uVar9 = uVar9 & 0xfffeffff;
        bVar3 = true;
      }
      if ((uVar9 & 0x40000) != 0) {
        SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DET2_100a5184,0,0x3c);
        uVar9 = uVar9 & 0xfffbffff;
        bVar3 = true;
      }
      if ((uVar9 & 0x100) != 0) {
        uVar9 = uVar9 & 0xfffffeff;
        bVar3 = true;
      }
    }
  }
  if (1.0 <= in_stack_0000002c) {
    UTIL_ScreenFade((int *)param_1);
  }
  if (param_4 == 0.0) {
    return 0.0;
  }
  if (bVar4) goto LAB_1005ef3b;
  if ((bVar2) && (75.0 <= param_3)) {
    SetSuitUpdate(param_1,(byte_conflict *)s__HEV_MED1_100a5178,0,0x708);
    SetSuitUpdate(param_1,(byte_conflict *)s__HEV_HEAL7_100a516c,0,0x708);
  }
  if ((param_5 == 0.0) || (75.0 <= param_3)) goto LAB_1005ef3b;
  if (6.0 <= param_1->pev->health) {
    if (param_1->pev->health < 20.0) {
      pcVar12 = s__HEV_HLTH2_100a5154;
      goto LAB_1005eeff;
    }
  }
  else {
    pcVar12 = s__HEV_HLTH3_100a5160;
LAB_1005eeff:
    SetSuitUpdate(param_1,(byte_conflict *)pcVar12,0,600);
  }
  iVar5 = (*g_engfuncs.pfnRandomLong)(0,3);
  if ((iVar5 == 0) && (param_5 < 50.0)) {
    SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DMG7_100a5148,0,300);
  }
LAB_1005ef3b:
  if (((in_stack_00000030 & 0xffffc000) != 0) && (param_3 < 75.0)) {
    if (50.0 <= param_3) {
      iVar13 = 600;
      iVar5 = 0;
      pcVar12 = s__HEV_HLTH1_100a513c;
    }
    else {
      iVar13 = 3;
      iVar5 = 0;
      iVar8 = (*g_engfuncs.pfnRandomLong)(0,3);
      if (iVar8 != 0) {
        return param_4;
      }
      pcVar12 = s__HEV_DMG7_100a5148;
    }
    SetSuitUpdate(param_1,(byte_conflict *)pcVar12,iVar5,iVar13);
  }
  return param_4;
}

/* 1005efb0  CBasePlayer::TraceAttack  (1506 bytes)
 * undefined TraceAttack(int param_1, float param_2, float param_3, float param_4, float param_5, int param_6, uint param_7)
 * called by: CBot::TraceAttack
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
CBasePlayer::TraceAttack
          (CBasePlayer *this,int param_1,float param_2,float param_3,float param_4,float param_5,
          int param_6,uint param_7)

{
  float fVar1;
  float fVar2;
  entvars_t *peVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *this_00;
  edict_t *extraout_ECX_06;
  edict_t *peVar7;
  float10 extraout_ST0;
  longlong lVar8;
  undefined4 uVar9;
  float in_stack_00000028;
  float in_stack_00000030;
  float in_stack_00000038;
  byte in_stack_00000048;
  edict_t *peVar10;
  char *pcVar11;
  
  if (gpGlobals->time < *(float *)&this->field_0x708) {
    return;
  }
  if ((this->pev->iuser4 & 0x10c10U) != 0) {
    param_2 = param_2 * 0.7;
  }
  if ((gpGlobals->time < *(float *)&this->field_0x510) && ((param_7 & 2) != 0)) {
    param_2 = param_2 * 0.7;
  }
  piVar5 = (int *)GetClassPtr<CBaseEntity>(param_1);
  if ((((piVar5 != (int *)0x0) && (iVar6 = (**(code **)(*piVar5 + 0xc0))(), iVar6 != 0)) &&
      (iVar6 = (**(code **)(*g_pGameRules + 0xc4))(piVar5,this), iVar6 == 1)) &&
     (_DAT_1009ebc4 == 0.0)) {
    return;
  }
  if (this->pev->takedamage == 0.0) {
    return;
  }
  *(undefined4 *)&this->field_0xf8 = *(undefined4 *)(param_6 + 0x34);
  switch(*(undefined4 *)(param_6 + 0x34)) {
  case 1:
    if ((param_7 & 0x8000002) != 0) {
      if ((param_7 & 0x2000000) == 0) {
        param_2 = param_2 + param_2;
      }
      else {
        param_2 = param_2 * 1.5;
      }
      DAT_100da9da = 1;
    }
    break;
  case 6:
  case 7:
    param_2 = param_2 * 0.5;
  }
  if ((((this->pev->armorvalue == 0.0) || ((param_7 & 2) == 0)) ||
      (iVar6 = (*this->vtable[0x2b])(), iVar6 == 0)) ||
     (((iVar6 = *(int *)&this->field_0xf8, iVar6 != 2 && (iVar6 != 3)) &&
      ((iVar6 != 4 && (iVar6 != 5)))))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  iVar6 = (*this->vtable[0x2b])();
  if (iVar6 == 0) {
    FUN_10046640(&this->field_0x278,this);
    peVar3 = this->pev;
    if ((peVar3->flags & 0x200U) == 0) {
      fVar1 = peVar3->velocity[1];
      fVar2 = peVar3->velocity[2];
      peVar3->velocity[0] = param_3 * 50.0 + peVar3->velocity[0];
      peVar3->velocity[1] = param_4 * 50.0 + fVar1;
      peVar3->velocity[2] = param_5 * 50.0 + fVar2;
    }
  }
  if (gpGlobals->time <= *(float *)&this->field_0x73c) goto LAB_1005f508;
  *(float *)&this->field_0x73c = gpGlobals->time + 0.3;
  lVar8 = __ftol();
  (*g_engfuncs.pfnMessageBegin)(4,DAT_100d9798,this->pev->origin,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_6 + 0x14));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_6 + 0x18));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_6 + 0x1c));
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000028);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000030);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000038);
  (*g_engfuncs.pfnWriteByte)((int)lVar8);
  (*g_engfuncs.pfnMessageEnd)();
  if ((in_stack_00000048 & 0x42) != 0) {
    if (param_4._3_1_ == '\0') {
      if (bVar4) {
        peVar7 = this->pev->pContainingEntity;
        iVar6 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        param_1 = iVar6 + 0x5f;
        uVar9 = 0;
        pcVar11 = (char *)0x3fa00000;
        this_00 = extraout_ECX_01;
      }
      else {
        iVar6 = (*g_engfuncs.pfnRandomLong)(0,3);
        switch(iVar6) {
        case 0:
          peVar7 = this->pev->pContainingEntity;
          iVar6 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
          param_3 = (float)(iVar6 + 0x5f);
          param_2 = 0.0;
          param_1 = 0x3fa00000;
          uVar9 = 0x3f800000;
          pcVar11 = s_player_bodyhit1_wav_100a528c;
          this_00 = extraout_ECX_02;
          break;
        case 1:
          peVar7 = this->pev->pContainingEntity;
          iVar6 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
          param_3 = (float)(iVar6 + 0x5f);
          param_2 = 0.0;
          param_1 = 0x3fa00000;
          uVar9 = 0x3f800000;
          pcVar11 = s_player_bodyhit2_wav_100a5278;
          this_00 = extraout_ECX_03;
          break;
        case 2:
          peVar7 = this->pev->pContainingEntity;
          iVar6 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
          param_3 = (float)(iVar6 + 0x5f);
          param_2 = 0.0;
          param_1 = 0x3fa00000;
          uVar9 = 0x3f800000;
          pcVar11 = s_player_bodyhit3_wav_100a5264;
          this_00 = extraout_ECX_04;
          break;
        case 3:
          peVar7 = this->pev->pContainingEntity;
          iVar6 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
          param_3 = (float)(iVar6 + 0x5f);
          param_2 = 0.0;
          param_1 = 0x3fa00000;
          uVar9 = 0x3f800000;
          pcVar11 = s_player_bodyhit4_wav_100a5250;
          this_00 = extraout_ECX_05;
          break;
        default:
          goto switchD_1005f38d_default;
        }
      }
    }
    else {
      iVar6 = (*g_engfuncs.pfnRandomLong)(0,1);
      if (iVar6 == 0) {
        peVar7 = this->pev->pContainingEntity;
        iVar6 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        param_3 = (float)(iVar6 + 0x5f);
        param_2 = 0.0;
        param_1 = 0x3fa00000;
        uVar9 = 0x3f800000;
        pcVar11 = s_player_headshot_wav_100a52a0;
        this_00 = extraout_ECX_00;
      }
      else {
        if (iVar6 != 1) goto switchD_1005f38d_default;
        peVar7 = this->pev->pContainingEntity;
        iVar6 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        param_3 = (float)(iVar6 + 0x5f);
        param_2 = 0.0;
        param_1 = 0x3fa00000;
        uVar9 = 0x3f800000;
        pcVar11 = s_player_headshot2_wav_100a52b4;
        this_00 = extraout_ECX;
      }
    }
    EMIT_SOUND_DYN(this_00,peVar7,4,pcVar11,uVar9,param_1,param_2);
  }
switchD_1005f38d_default:
  iVar6 = (*this->vtable[0x2b])();
  if (iVar6 != 0) {
    iVar6 = (*g_engfuncs.pfnRandomLong)(1,7);
    if (iVar6 == 1) {
      peVar7 = (edict_t *)this->pev;
      peVar10 = (peVar7->v).chain;
      pcVar11 = s_player_pain2_wav_100a5214;
    }
    else if (iVar6 == 2) {
      peVar10 = this->pev->pContainingEntity;
      pcVar11 = s_player_pain3_wav_100a5228;
      peVar7 = extraout_ECX_06;
    }
    else {
      if (iVar6 != 3) goto LAB_1005f508;
      peVar7 = this->pev->pContainingEntity;
      pcVar11 = s_player_pain4_wav_100a523c;
      peVar10 = peVar7;
    }
    EMIT_SOUND_DYN(peVar7,peVar10,2,pcVar11,0x3f800000,0x3fa00000,0);
  }
LAB_1005f508:
  FUN_100796f0(param_1,(int)this,param_2,param_7);
  if ((_g_flWeaponCheat != 0.0) &&
     ((*g_engfuncs.pfnCVarGetFloat)(s_dmgreport_1009ef74), extraout_ST0 != (float10)0.0)) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,s__s_damaged__s___f_hp__100a51fc,
               gpGlobals->pStringBase + *(int *)(param_1 + 0x1d0),
               gpGlobals->pStringBase + this->pev->netname,(double)param_3);
  }
  return;
}

/* 1005f5c0  CBasePlayer::PreThink  (2880 bytes)
 * undefined PreThink()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CBasePlayer::PreThink(CBasePlayer *param_1)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  edict_t *peVar5;
  int *piVar6;
  undefined3 extraout_var;
  undefined *puVar7;
  uint uVar8;
  float10 fVar9;
  longlong lVar10;
  undefined4 uVar11;
  char *pcVar12;
  entvars_t *peVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  vec_t vStack_50;
  vec_t vStack_4c;
  float fStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [16];
  float fStack_2c;
  int iStack_c;
  
  uVar3 = param_1->pev->button;
  uVar8 = *(uint *)&param_1->field_0x7fc ^ uVar3;
  *(uint *)&param_1->field_0x800 = uVar3 & uVar8;
  *(uint *)&param_1->field_0x804 = ~param_1->pev->button & uVar8;
  (**(code **)(*g_pGameRules + 0x48))(param_1);
  if (g_fGameOver != 0) {
    return;
  }
  UTIL_MakeVectors(param_1->pev->v_angle);
  ItemPreFrame((int)param_1);
  WaterMove((int *)param_1);
  (*param_1->vtable[0x59])();
  CheckTimeBasedDamage((int *)param_1);
  CheckSuitUpdate((int)param_1);
  InterpolateSlowMotion(gpGlobals->frametime,&param_1->pev->fuser1,*(float *)&param_1->field_0x154);
  fVar9 = (float10)(*param_1->vtable[2])();
  param_1->pev->framerate = (float)fVar9;
  if ((param_1->pev->flags & 0x200U) != 0) {
    *(float *)&param_1->field_0xb74 = gpGlobals->time;
  }
  fVar9 = (float10)(*param_1->vtable[2])();
  fVar14 = (float)(fVar9 * (float10)gpGlobals->frametime);
  if ((param_1->field_0x710 & 0x10) != 0) {
    fVar14 = fVar14 * 1.5;
  }
  if (*(float *)&param_1->field_0x788 != 0.0) {
    fVar1 = *(float *)&param_1->field_0x788 - fVar14;
    if (fVar1 <= 0.001) {
      fVar1 = 0.001;
    }
    *(float *)&param_1->field_0x788 = fVar1;
  }
  if (*(float *)&param_1->field_0x4c8 != 0.0) {
    fVar1 = *(float *)&param_1->field_0x4c8 - fVar14;
    if (fVar1 <= 0.001) {
      fVar1 = 0.001;
    }
    *(float *)&param_1->field_0x4c8 = fVar1;
  }
  if (*(float *)&param_1->field_0x4d8 != 0.0) {
    fVar1 = *(float *)&param_1->field_0x4d8 - fVar14;
    if (fVar1 <= 0.001) {
      fVar1 = 0.001;
    }
    *(float *)&param_1->field_0x4d8 = fVar1;
  }
  fVar1 = *(float *)&param_1->field_0x794 - fVar14;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)&param_1->field_0x794 = fVar1;
  fVar1 = *(float *)&param_1->field_0x79c - fVar14;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)&param_1->field_0x79c = fVar1;
  fVar1 = *(float *)&param_1->field_0x798 - fVar14;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)&param_1->field_0x798 = fVar1;
  fVar1 = *(float *)&param_1->field_0x7a0 - fVar14 * 5.0;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)&param_1->field_0x7a0 = fVar1;
  CTSStunt::Play((float *)&param_1->field_0x4dc);
  CTSAnimation::UpdateTimers((CTSAnimation *)&param_1->field_0x278,(int *)param_1);
  peVar13 = param_1->pev;
  if (((peVar13->view_ofs[0] == DAT_100ae498) && (peVar13->view_ofs[1] == DAT_100ae49c)) &&
     (peVar13->view_ofs[2] == DAT_100ae4a0)) {
    uVar3 = peVar13->iuser4 | 0x400000;
  }
  else {
    uVar3 = peVar13->iuser4 & 0xffbfffff;
  }
  peVar13->iuser4 = uVar3;
  UpdatePowerUpState((int *)param_1);
  SlowMotionFlow((int *)param_1);
  if (*(float *)&param_1->field_0x728 != 0.0) {
    if (param_1->field_0x7a5 == '\0') {
      peVar13 = param_1->pev;
      if (peVar13->health <= peVar13->max_health) {
        *(undefined4 *)&param_1->field_0x728 = 0;
      }
      else if (*(float *)&param_1->field_0x728 < gpGlobals->time) {
        *(float *)&param_1->field_0x728 = gpGlobals->time + 1.0;
        peVar13->health = peVar13->health - 1.0;
      }
    }
    else if (*(float *)&param_1->field_0x728 < gpGlobals->time) {
      fVar1 = (float)(int)DAT_100c62be * 0.32;
      if (fVar1 < 1.0) {
        fVar1 = 1.0;
      }
      *(float *)&param_1->field_0x728 = 1.0 / fVar1 + gpGlobals->time;
      fVar1 = (float)(int)DAT_100c62be * 0.16 + param_1->pev->health;
      if (150.0 <= fVar1) {
        fVar1 = 150.0;
      }
      param_1->pev->health = fVar1;
    }
  }
  if (*(float *)&param_1->field_0x4c8 != 0.0) {
    uVar3 = param_1->pev->iuser4;
    if (((uVar3 & 1) != 0) && (*(float *)&param_1->field_0x4c8 < 0.01)) {
      param_1->pev->iuser4 = uVar3 & 0xfffffffe;
      *(undefined4 *)&param_1->field_0x4c8 = 0;
    }
  }
  if ((*(float *)&param_1->field_0x4d8 != 0.0) && (*(float *)&param_1->field_0x4d8 < 0.01)) {
    param_1->pev->gravity = 1.0;
    *(undefined4 *)&param_1->field_0x4d8 = 0;
  }
  iVar4 = (*param_1->vtable[0x2b])();
  if (iVar4 != 0) {
    if ((0.0 < *(float *)&param_1->field_0x764) &&
       (fVar1 = *(float *)&param_1->field_0x764 - fVar14 * 0.1,
       *(float *)&param_1->field_0x764 = fVar1, fVar1 < 0.0)) {
      *(undefined4 *)&param_1->field_0x764 = 0;
    }
    if (*(float *)&param_1->field_0x760 < 100.0) {
      if (-0.001 <= *(float *)&param_1->field_0x760) {
        fVar14 = fVar14 * 15.0;
      }
      *(float *)&param_1->field_0x760 = fVar14 + *(float *)&param_1->field_0x760;
      if (100.0 < *(float *)&param_1->field_0x760) {
        *(undefined4 *)&param_1->field_0x760 = 0x42c80000;
      }
    }
  }
  if (*(float *)&param_1->field_0x788 != 0.0) {
    if ((*(float *)&param_1->field_0x788 < 0.01) || (*(float *)&param_1->field_0x78c == 0.0)) {
      *(undefined4 *)&param_1->field_0x788 = 0;
      *(undefined4 *)&param_1->field_0x78c = 0;
      param_1->field_0x790 = 0;
    }
    *(undefined4 *)&param_1->field_0x794 = 0;
  }
  peVar13 = param_1->pev;
  if (peVar13->iuser1 != 0) {
    if (((0.0 < *(float *)&param_1->field_0x75c) &&
        (gpGlobals->time < *(float *)&param_1->field_0x75c)) &&
       (*(float *)&param_1->field_0x740 < gpGlobals->time)) {
      *(float *)&param_1->field_0x740 = gpGlobals->time + 1.0;
      lVar10 = __ftol();
      if ((int)lVar10 < 1) {
        pcVar12 = s_Press_Fire_To_Play__100a5338;
        uVar11 = 0x1e;
      }
      else {
        __ftol();
        pcVar12 = UTIL_VarArgs(&DAT_1009cc60);
        uVar11 = 0x14;
      }
      TSHudMessageOne(0,0,0,0x10,uVar11,pcVar12,(int)peVar13);
    }
    if (*(float *)&param_1->field_0x7a8 != 0.0) {
      if (gpGlobals->time <= *(float *)&param_1->field_0x7a8) {
        if (*(float *)&param_1->field_0x740 < gpGlobals->time) {
          peVar13 = param_1->pev;
          *(float *)&param_1->field_0x740 = gpGlobals->time + 1.0;
          __ftol();
          pcVar12 = UTIL_VarArgs((byte_conflict *)s__i_seconds_left_for_respawn__pre_100a5304);
          TSHudMessageOne(0,0,0,0x10,0x14,pcVar12,(int)peVar13);
        }
      }
      else {
        *(undefined4 *)&param_1->field_0x7a8 = 0;
        *(undefined4 *)&param_1->field_0x75c = 0xbf800000;
        param_1->field_0x738 = 1;
        TSHudMessageOne(0xc3,0x2d,0x2d,0x10,0x14,s_You_have_to_wait_until_the_next_r_1009ce38,
                        (int)param_1->pev);
        CTSGameRules::CallCheckDeads(0x100c0a48);
      }
    }
    Observer_HandleButtons(param_1);
    Observer_Idle(param_1);
    param_1->pev->impulse = 0;
    return;
  }
  CTSStunt::CheckForBreakables((int)&param_1->field_0x4dc);
  peVar13 = param_1->pev;
  if (0 < peVar13->deadflag) {
    PlayerDeathThink(param_1);
    return;
  }
  if ((param_1->field_0x834 & 2) == 0) {
    uVar3 = peVar13->flags & 0xfeffffff;
  }
  else {
    uVar3 = peVar13->flags | 0x1000000;
  }
  peVar13->flags = uVar3;
  if ((param_1->field_0x834 & 2) == 0) {
    if ((param_1->field_0x9a8 & 0x80) != 0) {
      *(undefined4 *)&param_1->field_0x9a8 = 0xc0;
    }
  }
  else {
    peVar5 = param_1->pev->groundentity;
    if ((peVar5 == (edict_t *)0x0) &&
       (peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar5 == (edict_t *)0x0)) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = peVar5->pvPrivateData;
    }
    if (piVar6 == (int *)0x0) {
      peVar13 = param_1->pev;
      vStack_50 = peVar13->origin[0];
      vStack_4c = peVar13->origin[1];
      fStack_48 = peVar13->origin[2] - 38.0;
      UTIL_TraceLine(peVar13->origin,&vStack_50,1,peVar13->pContainingEntity,auStack_3c);
      if ((((fStack_2c == 1.0) || (iStack_c == 0)) ||
          (piVar6 = *(int **)(iStack_c + 0x7c), piVar6 == (int *)0x0)) ||
         ((uVar3 = (**(code **)(*piVar6 + 0x30))(), (uVar3 & 0x40) == 0 ||
          (iVar4 = (**(code **)(*piVar6 + 0xa4))(param_1->pev), iVar4 == 0)))) {
LAB_1005fd9b:
        *(undefined4 *)&param_1->field_0x9a8 = 0xc0;
        *(uint *)&param_1->field_0x834 = *(uint *)&param_1->field_0x834 & 0xfffffffd;
        return;
      }
    }
    else if ((((param_1->pev->flags & 0x200U) == 0) || ((*(byte *)(piVar6[1] + 0x1a0) & 2) != 0)) ||
            ((param_1->pev->button & 0x600U) != 0)) goto LAB_1005fd9b;
    peVar13 = param_1->pev;
    peVar13->velocity[0] = DAT_100ae498;
    peVar13->velocity[1] = DAT_100ae49c;
    peVar13->velocity[2] = DAT_100ae4a0;
    if ((*(uint *)&param_1->field_0x800 & 8) == 0) {
      if ((*(uint *)&param_1->field_0x800 & 0x10) == 0) goto LAB_1005fe71;
      (**(code **)(*piVar6 + 0xd8))(param_1,param_1,2,0xbf800000);
    }
    else {
      (**(code **)(*piVar6 + 0xd8))(param_1,param_1,2,0x3f800000);
    }
    iVar4 = *(int *)(piVar6[1] + 0x184);
    lVar10 = __ftol();
    uVar3 = TrainSpeed((int)lVar10,iVar4);
    *(uint *)&param_1->field_0x9a8 = uVar3 | 0xc0;
  }
LAB_1005fe71:
  if ((param_1->pev->button & 2) != 0) {
    (*param_1->vtable[0x54])();
  }
  if ((((param_1->pev->button & 4) != 0) || ((param_1->pev->flags & 0x4000U) != 0)) ||
     ((param_1->field_0x834 & 8) != 0)) {
    (*param_1->vtable[0x55])();
  }
  if ((param_1->pev->flags & 0x200U) == 0) {
    *(float *)&param_1->field_0x814 = -param_1->pev->velocity[2];
  }
  UpdatePlayerState((int)param_1);
  if ((0.0 < _DAT_1009eda4) && (*(float *)&param_1->field_0x774 < gpGlobals->time)) {
    peVar13 = param_1->pev;
    *(float *)&param_1->field_0x774 = gpGlobals->time + 0.1;
    uStack_44 = 0;
    uStack_40 = 0;
    vStack_50 = peVar13->origin[0];
    vStack_4c = peVar13->origin[1];
    fStack_48 = peVar13->origin[2];
    bVar2 = IsOnLadder((int)param_1);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      uStack_44 = uStack_44 | 1;
    }
    CNodeGraph::AddNode((CNodeGraph *)&g_NodeGraph,&vStack_50,0);
  }
  if ((TSGameRules == '\x03') && (*(float *)&param_1->field_0x780 < gpGlobals->time)) {
    *(float *)&param_1->field_0x780 = gpGlobals->time + 0.5;
    CheckForWires((int *)param_1);
  }
  if ((*(float *)&param_1->field_0x708 < gpGlobals->time) && (param_1->pev->rendermode != 0)) {
    param_1->pev->rendermode = 0;
    param_1->pev->rendercolor[0] = 0.0;
    param_1->pev->rendercolor[1] = 0.0;
    param_1->pev->rendercolor[2] = 0.0;
    param_1->pev->renderamt = 0.0;
    param_1->pev->renderfx = 0;
  }
  if ((*(float *)&param_1->field_0x7b8 != 0.0) &&
     (*(float *)&param_1->field_0x7b8 < gpGlobals->time)) {
    ClientPrint((int)param_1->pev,2,s_You_have_been_kicked_for_some_re_100a52d8,0,0,0,0);
    iVar17 = 0;
    iVar16 = 0;
    iVar15 = 0;
    iVar4 = 0;
    puVar7 = UTIL_VarArgs((byte_conflict *)s__s_kicked__100a52cc);
    UTIL_ClientPrintAll(1,puVar7,iVar4,iVar15,iVar16,iVar17);
    (*g_engfuncs.pfnGetPlayerUserId)(param_1->pev->pContainingEntity);
    pcVar12 = UTIL_VarArgs((byte_conflict *)s_kick___i_100a469c);
    (*g_engfuncs.pfnServerCommand)(pcVar12);
    *(undefined4 *)&param_1->field_0x7b8 = 0;
  }
  EHANDLE::operator=((EHANDLE *)&param_1->field_0x11c,0);
  if ((param_1->field_0x834 & 4) != 0) {
    peVar13 = param_1->pev;
    peVar13->velocity[0] = DAT_100ae498;
    peVar13->velocity[1] = DAT_100ae49c;
    peVar13->velocity[2] = DAT_100ae4a0;
  }
  if ((0.001 < *(float *)&param_1->field_0x838) &&
     (*(float *)&param_1->field_0x838 < gpGlobals->time)) {
    *(undefined4 *)&param_1->field_0x838 = 0;
    param_1->pev->health = 0.0;
    (*param_1->vtable[0x16])(param_1->pev,1);
  }
  return;
}

/* 10060100  CBasePlayer::PostThink  (1551 bytes)
 * undefined PostThink()
 */
void __fastcall CBasePlayer::PostThink(int *param_1)

{
  EHANDLE *this;
  void *this_00;
  undefined4 uVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  int *piVar5;
  edict_t *peVar6;
  int *piVar7;
  void *this_01;
  entvars_t *peVar8;
  float10 fVar9;
  longlong lVar10;
  float fVar11;
  float fStack_14;
  int iStack_10;
  
  if ((g_fGameOver != 0) || (iVar4 = (**(code **)(*param_1 + 0xac))(), iVar4 == 0))
  goto LAB_10060527;
  iVar4 = param_1[1];
  if ((*(uint *)(iVar4 + 0x250) & 0x80000) != 0) {
    *(int *)(iVar4 + 0x50) = param_1[0x133];
    *(int *)(iVar4 + 0x54) = param_1[0x134];
    *(int *)(iVar4 + 0x58) = param_1[0x135];
  }
  this = (EHANDLE *)(param_1 + 0x26c);
  bVar3 = FUN_1000e440((uint *)this);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    piVar5 = (int *)EHANDLE::operator->((uint *)this);
    iVar4 = (**(code **)(*piVar5 + 0xa4))(param_1[1]);
    if ((iVar4 == 0) || (*(int *)(param_1[1] + 0xc0) != 0)) {
      piVar5 = (int *)EHANDLE::operator->((uint *)this);
      (**(code **)(*piVar5 + 0xd8))(param_1,param_1,0,0);
      EHANDLE::operator=(this,0);
    }
    else {
      piVar5 = (int *)EHANDLE::operator->((uint *)this);
      (**(code **)(*piVar5 + 0xd8))(param_1,param_1,2,0x40000000);
    }
  }
  FUN_10035720(param_1);
  this_00 = (void *)param_1[1];
  if ((((*(uint *)((int)this_00 + 0x1a4) & 0x200) != 0) && (0.0 < *(float *)((int)this_00 + 0x160)))
     && (350.0 <= (float)param_1[0x205])) {
    if ((*(int *)((int)this_00 + 0x1c4) != -3) && (680.0 < (float)param_1[0x205])) {
      fVar11 = (float)param_1[0x205];
      param_1[0x205] = (int)(fVar11 - 680.0);
      fVar11 = (fVar11 - 680.0) * 0.22522523;
      if (*(float *)((int)this_00 + 0x160) < fVar11) {
        EMIT_SOUND_DYN(this_00,*(undefined4 *)((int)this_00 + 0x208),3,
                       s_common_bodysplat_wav_1009d078,0x3f800000,0x3f4ccccd,0);
      }
      if (0.0 < fVar11) {
        peVar6 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        if (peVar6 == (edict_t *)0x0) {
          peVar8 = (entvars_t *)0x0;
        }
        else {
          peVar8 = &peVar6->v;
        }
        peVar6 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        if (peVar6 != (edict_t *)0x0) {
          peVar6 = (edict_t *)&peVar6->v;
        }
        (**(code **)(*param_1 + 0x50))(peVar6,peVar8,fVar11,0x1020);
      }
    }
    iVar4 = (**(code **)(*param_1 + 0xac))();
    if (iVar4 != 0) {
      CTSAnimation::Animate((CTSAnimation *)(param_1 + 0x9e),param_1,1);
    }
  }
  if ((*(uint *)(param_1[1] + 0x1a4) & 0x200) != 0) {
    *(undefined4 *)(param_1[1] + 0x11c) = 0x3f800000;
    if ((64.0 < (float)param_1[0x205]) &&
       (iVar4 = (**(code **)(*g_pGameRules + 0x14))(), iVar4 == 0)) {
      fVar11 = 0.2;
      lVar10 = __ftol();
      CSoundEnt::InsertSound(4,(undefined4 *)(param_1[1] + 8),(int)lVar10,fVar11);
    }
    param_1[0x205] = 0;
    if ((*(uint *)(param_1[1] + 0x250) & 0x100000) != 0) {
      UTIL_ScreenShake((float *)(param_1[1] + 8),20.0,0x41f00000,0x3e99999a,512.0);
      *(uint *)(param_1[1] + 0x250) = *(uint *)(param_1[1] + 0x250) & 0xffefffff;
      if ((*(byte *)(param_1[1] + 0x180) & 4) != 0) {
        param_1[0x13a] = (int)(gpGlobals->time + 0.3);
        iVar4 = CTSStunt::GoRoll((int)(param_1 + 0x137));
        if (iVar4 != 0) {
          fVar9 = FUN_10076120();
          param_1[0x46] = (int)(float)(fVar9 + (float10)0.75);
          goto LAB_10060490;
        }
      }
      uVar1 = *(undefined4 *)(param_1[1] + 0x208);
      (*g_engfuncs.pfnRandomLong)(0,0x1f);
      EMIT_SOUND_DYN(this_01,uVar1,4,s_player_superjump_land_wav_100a534c,0x3f800000,0x3f4ccccd,0);
      *(uint *)(param_1[1] + 0x250) = *(uint *)(param_1[1] + 0x250) | 4;
      *(uint *)(param_1[1] + 0x250) = *(uint *)(param_1[1] + 0x250) | 1;
      iVar4 = param_1[1];
      *(undefined4 *)(iVar4 + 0x174) = 0;
      *(undefined4 *)(iVar4 + 0x178) = 0;
      *(undefined4 *)(iVar4 + 0x17c) = 0x41800000;
      param_1[0x138] = 0x3f400000;
      CTSAnimation::Animate((CTSAnimation *)(param_1 + 0x9e),param_1,0x3a);
    }
  }
LAB_10060490:
  iVar4 = (**(code **)(*param_1 + 0xac))();
  if (iVar4 != 0) {
    iVar4 = param_1[1];
    if ((*(float *)(iVar4 + 0x20) == 0.0) && (*(float *)(iVar4 + 0x24) == 0.0)) {
      iVar4 = 6;
    }
    else {
      if ((*(float *)(iVar4 + 0x20) == 0.0) &&
         ((*(float *)(iVar4 + 0x24) == 0.0 && (*(int *)(iVar4 + 0x1c0) < 2)))) goto LAB_100604fa;
      iVar4 = 1;
    }
    CTSAnimation::Animate((CTSAnimation *)(param_1 + 0x9e),param_1,iVar4);
  }
LAB_100604fa:
  CBaseAnimating::StudioFrameAdvance((int)param_1,0.0);
  FUN_10060710(param_1[1]);
  UpdatePlayerSound((int)param_1);
  param_1[0x1ff] = *(int *)(param_1[1] + 0x180);
LAB_10060527:
  fVar9 = (float10)(**(code **)(*param_1 + 8))();
  fStack_14 = (float)(fVar9 * (float10)gpGlobals->frametime);
  if ((*(byte *)(param_1 + 0x1c4) & 0x10) != 0) {
    fStack_14 = fStack_14 * 1.5;
  }
  piVar5 = param_1 + 0x279;
  iStack_10 = 6;
  do {
    for (piVar2 = (int *)*piVar5; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x1d]) {
      piVar7 = (int *)(**(code **)(*piVar2 + 0x150))();
      if ((piVar7 != (int *)0x0) && (iVar4 = (**(code **)(*piVar7 + 400))(), iVar4 != 0)) {
        fVar11 = (float)piVar7[0x23] - fStack_14;
        if (fVar11 <= -1.0) {
          fVar11 = -1.0;
        }
        piVar7[0x23] = (int)fVar11;
        fVar11 = (float)piVar7[0x24] - fStack_14;
        if (fVar11 <= -0.001) {
          fVar11 = -0.001;
        }
        piVar7[0x24] = (int)fVar11;
        fVar11 = (float)piVar7[0x25] - fStack_14;
        if (fVar11 <= -0.001) {
          fVar11 = -0.001;
        }
        piVar7[0x25] = (int)fVar11;
        if (piVar7[0x26] != 0x447a0000) {
          fVar11 = (float)piVar7[0x26] - fStack_14;
          if (fVar11 <= -0.001) {
            fVar11 = -0.001;
          }
          piVar7[0x26] = (int)fVar11;
        }
        iVar4 = piVar7[1];
        if (*(int *)(iVar4 + 0x254) != 0x447a0000) {
          fVar11 = *(float *)(iVar4 + 0x254) - fStack_14;
          if (fVar11 <= -0.001) {
            fVar11 = -0.001;
          }
          *(float *)(iVar4 + 0x254) = fVar11;
        }
      }
    }
    piVar5 = piVar5 + 1;
    iStack_10 = iStack_10 + -1;
  } while (iStack_10 != 0);
  fVar11 = (float)param_1[0x46];
  param_1[0x46] = (int)(fVar11 - fStack_14);
  if (fVar11 - fStack_14 < -0.001) {
    param_1[0x46] = -0x457ced91;
  }
  if ((param_1[0x2dc] != 0x447a0000) &&
     (fVar11 = (float)param_1[0x2dc], param_1[0x2dc] = (int)(fVar11 - fStack_14),
     fVar11 - fStack_14 < -0.001)) {
    param_1[0x2dc] = -0x457ced91;
  }
  if ((param_1[0x2da] != 0x447a0000) &&
     (fVar11 = (float)param_1[0x2da], param_1[0x2da] = (int)(fVar11 - fStack_14),
     fVar11 - fStack_14 < -0.001)) {
    param_1[0x2da] = -0x457ced91;
  }
  return;
}

/* 10060740  CBasePlayer::UpdateClientData  (1809 bytes)
 * undefined UpdateClientData()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CBasePlayer::UpdateClientData(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  if (((float)param_1[0x148] <= gpGlobals->time) && (0.0 <= (float)param_1[0x148])) {
    param_1[0x148] = (int)(gpGlobals->time + 0.1);
    if (param_1[0x268] != 0) {
      param_1[0x268] = 0;
      DAT_100a0988 = 0;
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100d96e4,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)(0);
      (*g_engfuncs.pfnMessageEnd)();
      if (param_1[0x269] == 0) {
        (*g_engfuncs.pfnMessageBegin)(1,DAT_100d96e8,(float *)0x0,*(edict_t **)(param_1[1] + 0x208))
        ;
        (*g_engfuncs.pfnMessageEnd)();
        (**(code **)(*g_pGameRules + 0x2c))();
        CTSGameRules::InitHUD((CTSGameRules *)&TSGameRules,param_1);
        param_1[0x269] = 1;
        iVar3 = (**(code **)(*g_pGameRules + 0x14))();
        if (iVar3 != 0) {
          FireTargets(0x100a537c,param_1,param_1,3,0);
        }
      }
      FireTargets(0x100a5368,param_1,param_1,3,0);
      if ((_DAT_100c0a50 != 0.0) && (DAT_100c0a58 != '\0')) {
        (*g_engfuncs.pfnMessageBegin)(1,DAT_100d9794,(float *)0x0,*(edict_t **)(param_1[1] + 0x208))
        ;
        lVar5 = __ftol();
        (*g_engfuncs.pfnWriteByte)((int)lVar5);
        (*g_engfuncs.pfnWriteByte)(0);
        (*g_engfuncs.pfnMessageEnd)();
      }
      if ((DAT_100c62cd != '\0') && (*(char *)((int)param_1 + 0x73b) != '\0')) {
        (*g_engfuncs.pfnMessageBegin)(1,DAT_100d978c,(float *)0x0,*(edict_t **)(param_1[1] + 0x208))
        ;
        (*g_engfuncs.pfnWriteShort)(0x100);
        (*g_engfuncs.pfnWriteByte)(0);
        (*g_engfuncs.pfnMessageEnd)();
      }
    }
    if (param_1[0x275] != param_1[0x276]) {
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100d973c,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)(param_1[0x275]);
      (*g_engfuncs.pfnMessageEnd)();
      param_1[0x276] = param_1[0x275];
    }
    if ((float)param_1[0x273] != *(float *)(param_1[1] + 0x160)) {
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100d976c,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      lVar5 = __ftol();
      (*g_engfuncs.pfnWriteByte)((int)lVar5);
      (*g_engfuncs.pfnMessageEnd)();
      lVar5 = __ftol();
      param_1[0x273] = (int)lVar5;
    }
    iVar3 = param_1[1];
    if ((float)param_1[0x274] != *(float *)(iVar3 + 0x1bc)) {
      lVar5 = __ftol();
      param_1[0x274] = (int)lVar5;
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100d9770,(float *)0x0,*(edict_t **)(iVar3 + 0x208));
      lVar5 = __ftol();
      (*g_engfuncs.pfnWriteByte)((int)lVar5);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((*(byte *)(param_1 + 0x26a) & 0xc0) != 0) {
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100d9700,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)(param_1[0x26a] & 0xf);
      (*g_engfuncs.pfnMessageEnd)();
      param_1[0x26a] = param_1[0x26a] & 0xffffff3f;
    }
    if ((char)param_1[0x121] != *(char *)((int)param_1 + 0x485)) {
      *(char *)((int)param_1 + 0x485) = (char)param_1[0x121];
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100d9774,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(param_1 + 0x121));
      (*g_engfuncs.pfnMessageEnd)();
    }
    if (param_1[0x14b] != param_1[0x14c]) {
      param_1[0x14c] = param_1[0x14b];
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100d9778,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteShort)(param_1[0x14b]);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if (param_1[0x14d] != param_1[0x14e]) {
      param_1[0x14e] = param_1[0x14d];
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100d977c,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)(param_1[0x14d]);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((param_1[0x1c9] != param_1[0x1c5]) || (param_1[0x1c8] != param_1[0x1c7])) {
      param_1[0x1c9] = param_1[0x1c5];
      param_1[0x1c8] = param_1[0x1c7];
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100d978c,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteShort)(param_1[0x1c5]);
      (*g_engfuncs.pfnWriteByte)(param_1[0x1c7] & (param_1[0x1c7] < 1) - 1);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((param_1[0x1c4] & 8U) == 0) {
      if ((param_1[0x1c4] & 1U) == 0) {
        fVar1 = (float)param_1[0x57];
      }
      else {
        fVar1 = 0.35;
      }
    }
    else {
      fVar1 = 0.225;
    }
    if (fVar1 != (float)param_1[0x56]) {
      param_1[0x56] = (int)fVar1;
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100d97a4,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteCoord)((float)param_1[0x56] * 100.0);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((char)param_1[0x58] != *(char *)((int)param_1 + 0x161)) {
      *(char *)(param_1 + 0x58) = *(char *)((int)param_1 + 0x161);
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100d97c4,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)((int)(char)param_1[0x58]);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((((param_1[0x27f] != 0) && (iVar3 = (**(code **)(*param_1 + 0xac))(), iVar3 != 0)) &&
        (*(int *)(param_1[0x27f] + 0x78) == 0x10)) &&
       (uVar4 = CTSGun::GetActiveItems(param_1[0x27f]), *(byte *)(param_1 + 0x1c3) != uVar4)) {
      uVar4 = CTSGun::GetActiveItems(param_1[0x27f]);
      *(char *)(param_1 + 0x1c3) = (char)uVar4;
      (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9784,(float *)0x0,(edict_t *)0x0);
      iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)(iVar3);
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(param_1 + 0x1c3));
      (*g_engfuncs.pfnMessageEnd)();
    }
    if (*(char *)((int)param_1 + 0x739) != (char)param_1[0x1ce]) {
      *(char *)((int)param_1 + 0x739) = (char)param_1[0x1ce];
      (*g_engfuncs.pfnMessageBegin)(2,DAT_100d97c0,(float *)0x0,(edict_t *)0x0);
      iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)(iVar3);
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(param_1 + 0x1ce));
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((((char)param_1[0x1de] != *(char *)((int)param_1 + 0x77b)) ||
        (*(char *)((int)param_1 + 0x779) != (char)param_1[0x1df])) ||
       (*(char *)((int)param_1 + 0x77a) != *(char *)((int)param_1 + 0x77d))) {
      *(char *)((int)param_1 + 0x77b) = (char)param_1[0x1de];
      *(undefined1 *)(param_1 + 0x1df) = *(undefined1 *)((int)param_1 + 0x779);
      *(undefined1 *)((int)param_1 + 0x77d) = *(undefined1 *)((int)param_1 + 0x77a);
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100d97b4,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(param_1 + 0x1de));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)((int)param_1 + 0x779));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)((int)param_1 + 0x77a));
      (*g_engfuncs.pfnMessageEnd)();
    }
    piVar2 = (int *)param_1[0x27f];
    if ((piVar2 != (int *)0x0) && (piVar2[0x1e] == 0x10)) {
      (**(code **)(*piVar2 + 0x14c))(param_1);
    }
    param_1[0x280] = param_1[0x27f];
    param_1[0x278] = param_1[0x277];
  }
  return;
}

/* 10060e60  CBasePlayer::ForceClientDllUpdate  (203 bytes)
 * undefined ForceClientDllUpdate(int * param_1)
 * called by: CBasePlayer::ImpulseCommands, pfnClientCommand
 */
/* .so 0x92594; ClientCommand "fullupdate" */

void __fastcall CBasePlayer::ForceClientDllUpdate(int *param_1)

{
  int iValue;
  undefined4 uStack00000010;
  
  param_1[0x273] = -1;
  param_1[0x274] = -1;
  param_1[0x14e] = -1;
  param_1[0x14c] = -1;
  *(undefined1 *)(param_1 + 0x58) = 0xff;
  *(undefined1 *)((int)param_1 + 0x485) = 0xff;
  param_1[0x1c9] = 0xff;
  param_1[0x26a] = param_1[0x26a] | 0xc0;
  param_1[0x26b] = 0;
  param_1[0x20b] = 0;
  *(undefined1 *)(param_1 + 0x1c3) = 0;
  param_1[0x1c8] = 0;
  param_1[0x56] = -0x40800000;
  param_1[0x148] = 0;
  (**(code **)(*param_1 + 0x164))();
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100d979c,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
  iValue = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1[1] + 0x208));
  (*g_engfuncs.pfnWriteByte)(iValue);
  (*g_engfuncs.pfnWriteByte)((uint)(*(int *)(param_1[1] + 0x170) == 3));
  uStack00000010 = 0x10060f28;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10060f30  CBasePlayer::Duck  (68 bytes)
 * undefined Duck(int * param_1)
 */
void __fastcall CBasePlayer::Duck(int *param_1)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 0x200) & 4) != 0) &&
     (iVar1 = CTSStunt::GoRoll((int)(param_1 + 0x137)), iVar1 != 0)) {
    return;
  }
  if (((*(byte *)(param_1[1] + 0x180) & 4) != 0) && ((*(uint *)(param_1[1] + 0x1a4) & 0x4000) == 0))
  {
    CTSAnimation::Animate((CTSAnimation *)(param_1 + 0x9e),param_1,5);
  }
  return;
}

/* 10060f80  CBasePlayer::Jump  (244 bytes)
 * undefined Jump()
 */
void __fastcall CBasePlayer::Jump(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (((*(uint *)(param_1[1] + 0x1a4) & 0x800) == 0) && (*(int *)(param_1[1] + 0x1c0) < 2)) {
    iVar2 = FUN_1006a740((int)(param_1 + 0x137));
    if ((iVar2 == 0) && ((*(byte *)(param_1 + 0x200) & 2) != 0)) {
      iVar2 = FUN_1006aa30((float *)(param_1 + 0x137));
      if ((((iVar2 == 0) && ((*(byte *)(param_1 + 0x200) & 2) != 0)) &&
          ((*(uint *)(param_1[1] + 0x1a4) & 0x200) != 0)) && (*(int *)(param_1[1] + 0x19c) != 0)) {
        CTSAnimation::Animate((CTSAnimation *)(param_1 + 0x9e),param_1,4);
        iVar2 = param_1[1];
        iVar1 = *(int *)(iVar2 + 0x19c);
        if (((iVar1 != 0) && (iVar1 != -0x80)) && ((*(byte *)(iVar1 + 0x224) & 4) != 0)) {
          *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x2c) + *(float *)(iVar2 + 0x20);
          *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x30) + *(float *)(iVar2 + 0x24);
          *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x34) + *(float *)(iVar2 + 0x28);
        }
      }
    }
  }
  return;
}

/* 10061080  CBasePlayer::GiveSlowMul  (17 bytes)
 * undefined GiveSlowMul()
 */
/* slot 2: FixedSlowAmt(pev->fuser1) = max(fuser1,0.01); brain think gate > 0.1 */

void __fastcall CBasePlayer::GiveSlowMul(int param_1)

{
  FixedSlowAmt(*(float *)(*(int *)(param_1 + 4) + 0x254));
  return;
}

/* 100610a0  CBasePlayer::InSlow  (32 bytes)
 * undefined InSlow()
 */
undefined4 __fastcall CBasePlayer::InSlow(int param_1)

{
  if ((*(int *)(param_1 + 0x154) == 0x3f800000) && (*(int *)(param_1 + 0x15c) == 0x3f800000)) {
    return 0;
  }
  return 1;
}

/* 100610c0  CBasePlayer::GoSlow  (58 bytes)
 * undefined GoSlow()
 */
void __thiscall CBasePlayer::GoSlow(int param_1,undefined4 param_2,undefined1 param_3)

{
  if (*(int *)(*(int *)(param_1 + 4) + 0x244) == 0) {
    *(undefined4 *)(param_1 + 0x154) = param_2;
  }
  else {
    *(undefined4 *)(param_1 + 0x154) = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x15c) = param_2;
  *(undefined1 *)(param_1 + 0x161) = param_3;
  return;
}

/* 10061100  CBasePlayer::UpdatePlayerState  (47 bytes)
 * undefined UpdatePlayerState(int param_1)
 * called by: CBasePlayer::PreThink
 */
/* .so 0x92a08; stance byte pl+0x484 (.so 0x498) */

void __fastcall CBasePlayer::UpdatePlayerState(int param_1)

{
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x250) & 0x30) != 0) {
    *(undefined1 *)(param_1 + 0x484) = 2;
    return;
  }
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x4000) != 0) {
    *(undefined1 *)(param_1 + 0x484) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x484) = 0;
  return;
}

/* 10061130  CBasePlayer::TSInit  (918 bytes)
 * undefined TSInit(int * param_1)
 * called by: CBasePlayer::Spawn
 */
void __fastcall CBasePlayer::TSInit(int *param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  edict_t *pClient;
  char *pcVar4;
  
  FUN_10044a20(param_1 + 0x9e);
  FUN_10068410(param_1 + 0x137,param_1);
  *(undefined4 *)(param_1[1] + 0x254) = 0x3f800000;
  param_1[0x55] = 0x3f800000;
  param_1[0x57] = 0x3f800000;
  param_1[0x56] = -0x40800000;
  *(undefined1 *)((int)param_1 + 0x161) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0xff;
  *(undefined1 *)(param_1 + 0x121) = 0;
  *(undefined1 *)((int)param_1 + 0x485) = 0xff;
  param_1[0x273] = -1;
  *(undefined4 *)(param_1[1] + 0x250) = 0;
  SetPlayerSpeed((CBasePlayer *)param_1,330.0);
  param_1[0x14d] = 0x51;
  param_1[0x14e] = -1;
  param_1[0x14c] = -1;
  param_1[0x148] = 0;
  param_1[0x1c2] = (int)(gpGlobals->time + 1.0);
  fVar3 = FUN_10076120();
  param_1[0x46] = (int)(float)(fVar3 + (float10)1.0);
  *(undefined4 *)(param_1[1] + 0x14c) = 0x42fa0000;
  *(undefined4 *)(param_1[1] + 0x148) = 1;
  *(undefined4 *)(param_1[1] + 0x150) = 0;
  *(undefined4 *)(param_1[1] + 0x154) = 0;
  *(undefined4 *)(param_1[1] + 0x158) = 0;
  *(undefined4 *)(param_1[1] + 0x15c) = 0xe;
  UTIL_ScreenFade(param_1);
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x1c3) = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0xff;
  param_1[0x1cb] = 0;
  *(undefined1 *)(param_1 + 0x1cc) = 0;
  param_1[0x1cd] = 0;
  *(undefined1 *)(param_1 + 0x1ce) = 0;
  *(undefined1 *)((int)param_1 + 0x739) = 0xff;
  *(undefined1 *)((int)param_1 + 0x73a) = 0;
  if (DAT_100c62cd == '\0') {
    *(undefined1 *)((int)param_1 + 0x73b) = 0;
    pcVar4 = &DAT_1009f1d8;
    pClient = *(edict_t **)(param_1[1] + 0x208);
  }
  else {
    *(undefined1 *)((int)param_1 + 0x73b) = 1;
    pcVar4 = &DAT_1009ce20;
    pClient = *(edict_t **)(param_1[1] + 0x208);
  }
  (*g_engfuncs.pfnSetPhysicsKeyValue)(pClient,&DAT_1009ce1c,pcVar4);
  param_1[0x1cf] = 0;
  param_1[0x1d0] = 0;
  if ((*(int *)(param_1[1] + 0x244) != 0) || (*(int *)(param_1[1] + 0x248) != 0)) {
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100d979c,(float *)0x0,(edict_t *)0x0);
    iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1[1] + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar1);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnMessageEnd)();
    *(undefined4 *)(param_1[1] + 0x248) = 0;
    *(undefined4 *)(param_1[1] + 0x244) = 0;
  }
  param_1[0x132] = 0;
  param_1[0x136] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1dd] = 0;
  *(undefined1 *)(param_1 + 0x1de) = 0;
  *(undefined1 *)((int)param_1 + 0x77b) = 0;
  *(undefined1 *)((int)param_1 + 0x779) = 0;
  *(undefined1 *)(param_1 + 0x1df) = 0;
  *(undefined1 *)((int)param_1 + 0x77a) = 0;
  *(undefined1 *)((int)param_1 + 0x77d) = 0;
  param_1[0x1e0] = 0;
  param_1[0x1d8] = 0x42c80000;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e3] = 0;
  *(undefined1 *)(param_1 + 0x1e4) = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e8] = 0;
  if (*(char *)((int)param_1 + 0x7a5) != '\0') {
    DAT_100c62c0 = 0;
  }
  *(undefined1 *)((int)param_1 + 0x7a5) = 0;
  param_1[0x1ca] = 0;
  piVar2 = param_1 + 0x5c;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x59] = 0;
  piVar2 = param_1 + 0x7d;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  *(undefined1 *)(param_1 + 0x9d) = 0;
  param_1[0x1da] = 0;
  param_1[0x1db] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1d9] = 0;
  param_1[0x1eb] = 0;
  piVar2 = param_1 + 0x1ef;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  pcVar4 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(param_1[1] + 0x208));
  PlayerIsCheating((int)param_1,pcVar4);
  *(undefined4 *)(param_1[1] + 300) = 0;
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  CBaseAnimating::ResetSequenceInfo((int)param_1);
  param_1[0x20e] = 0;
  return;
}

/* 100614d0  CBasePlayer::CheckForWires  (208 bytes)
 * undefined CheckForWires(int * param_1)
 * called by: CBasePlayer::PreThink
 */
/* .so 0x92f08; PreThink, TSGameRules mode 3, +0.5 s */

void __fastcall CBasePlayer::CheckForWires(int *param_1)

{
  byte bVar1;
  char cVar2;
  void *this;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  *(undefined1 *)(param_1 + 0x1de) = 0;
  *(undefined1 *)((int)param_1 + 0x779) = 0;
  *(undefined1 *)((int)param_1 + 0x77a) = 0;
  this = (void *)FUN_10076410(0,param_1[1] + 8,0x42800000);
  do {
    if (this == (void *)0x0) {
      return;
    }
    pcVar5 = s_ts_bomb_100a4fd8;
    pbVar3 = (byte *)(gpGlobals->pStringBase + **(int **)((int)this + 4));
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_10061546:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_1006154b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_10061546;
      pbVar3 = pbVar3 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_1006154b:
    if (((iVar4 == 0) && (*(char *)((int)this + 0x54) != '\0')) &&
       (cVar2 = FUN_1005c3d0(this,param_1), cVar2 != '\0')) {
      *(undefined1 *)(param_1 + 0x1de) = *(undefined1 *)((int)this + 0x6c);
      *(undefined1 *)((int)param_1 + 0x779) = *(undefined1 *)((int)this + 0x6d);
      *(undefined1 *)((int)param_1 + 0x77a) = *(undefined1 *)((int)this + 0x6e);
    }
    this = (void *)FUN_10076410((int)this,param_1[1] + 8,0x42800000);
  } while( true );
}

/* 100615a0  CBasePlayer::CutWire  (200 bytes)
 * undefined CutWire(int param_1)
 * called by: pfnClientCommand
 */
void __thiscall CBasePlayer::CutWire(CBasePlayer *this,int param_1)

{
  byte bVar1;
  int iVar2;
  CTSBomb *this_00;
  byte *pbVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = (*this->vtable[0x2b])();
  if ((iVar2 != 0) && (this->pev->iuser1 == 0)) {
    this->field_0x778 = 0;
    this->field_0x779 = 0;
    this->field_0x77a = 0;
    for (this_00 = (CTSBomb *)FUN_10076410(0,this->pev->origin,0x42800000);
        this_00 != (CTSBomb *)0x0;
        this_00 = (CTSBomb *)FUN_10076410((int)this_00,this->pev->origin,0x42800000)) {
      pcVar4 = s_ts_bomb_100a4fd8;
      pbVar3 = (byte *)(gpGlobals->pStringBase + this_00->pev->classname);
      do {
        bVar1 = *pbVar3;
        bVar5 = bVar1 < (byte)*pcVar4;
        if (bVar1 != *pcVar4) {
LAB_10061631:
          iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_10061636;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar5 = bVar1 < (byte)pcVar4[1];
        if (bVar1 != pcVar4[1]) goto LAB_10061631;
        pbVar3 = pbVar3 + 2;
        pcVar4 = pcVar4 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_10061636:
      if (iVar2 == 0) {
        CTSBomb::CutWire(this_00,param_1,(int)this);
      }
    }
  }
  return;
}

/* 10061670  CBasePlayer::SetPlayerSpeed  (147 bytes)
 * undefined SetPlayerSpeed(float param_1)
 * called by: CBasePlayer::DropFlag, CBasePlayer::DropWeapon, CBasePlayer::PickUpWeapon, CBasePlayer::TSInit, CBasePlayer::TakeArmor, CBasePlayer::TakeFlag, CTSGameRules::SetPlayerTheOne, CTSGun::GrenadeIdle, CTSGun::MultiplyClips, FUN_10056d80, FUN_10057210
 */
/* pl+0x53c = clamp(speed,0,330), SetClientMaxspeed */

void __thiscall CBasePlayer::SetPlayerSpeed(CBasePlayer *this,float param_1)

{
  longlong lVar1;
  
  *(float *)&this->field_0x53c = param_1;
  if (330.0 < param_1) {
    *(undefined4 *)&this->field_0x53c = 0x43a50000;
  }
  if (*(float *)&this->field_0x53c < 0.0) {
    *(undefined4 *)&this->field_0x53c = 0;
  }
  lVar1 = __ftol();
  (*g_engfuncs.pfnSetClientMaxspeed)(this->pev->pContainingEntity,(float)(int)lVar1);
  return;
}

/* 10061710  CBasePlayer::GiveCash  (60 bytes)
 * undefined4 GiveCash(int param_1)
 * called by: CHalfLifeMultiplay::PlayerKilled, CTSGameRules::RestartRound, CTSGameRules::TeamWin, CTSGroundWeapon::GetWeapon, pfnClientCommand, pfnClientPutInServer
 */
/* .so 0x9310c; pl+0x52c clamp 0..30000 */

undefined4 __thiscall CBasePlayer::GiveCash(CBasePlayer *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)&this->field_0x52c + param_1;
  *(int *)&this->field_0x52c = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)&this->field_0x52c = 0;
  }
  if (30000 < *(int *)&this->field_0x52c) {
    *(undefined4 *)&this->field_0x52c = 30000;
  }
  return *(undefined4 *)&this->field_0x52c;
}

/* 10061750  CBasePlayer::PickUpWeapon  (409 bytes)
 * undefined4 PickUpWeapon(int param_1, undefined4 * param_2, uint param_3, char param_4, char param_5)
 * called by: CTSGroundWeapon::GetWeapon, CTSKnife::Use, CTSWorldGun::GetWeapon, FUN_10062470, PlayerAddPowerUp, pfnClientCommand
 */
undefined4 __thiscall
CBasePlayer::PickUpWeapon
          (CBasePlayer *this,int param_1,undefined4 *param_2,uint param_3,char param_4,char param_5)

{
  CTSGun *this_00;
  edict_t *this_01;
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  longlong lVar4;
  
  this_00 = *(CTSGun **)&this->field_0x9fc;
  if (((this_00 != (CTSGun *)0x0) && (*(int *)&this_00->field_0x78 == 0x10)) &&
     ((puVar1 = get_weapon_info(param_1), *(char *)(puVar1 + 0xd2) != '\x04' || (puVar1[0x33] == -1)
      ))) {
    lVar4 = __ftol();
    if ((-1 < (int)lVar4) && (iVar2 = FUN_100544e0(this_00,param_1,param_2,param_3), iVar2 != 0)) {
      if (param_5 != '\0') {
        EHANDLE::operator=((EHANDLE *)(&this_00->field_0x134 + param_1 * 0x38),(int)this);
        iVar2 = puVar1[0x32];
        if ((iVar2 != -1) && ((&this_00->field_0x104)[iVar2 * 0x38] != '\0')) {
          EHANDLE::operator=((EHANDLE *)(&this_00->field_0x134 + iVar2 * 0x38),(int)this);
        }
      }
      *(int *)&this->field_0x534 = (int)lVar4;
      fVar3 = GetSpeedBySlots((int)this);
      SetPlayerSpeed(this,(float)fVar3);
      this_01 = this->pev->pContainingEntity;
      EMIT_SOUND_DYN(this_01,this_01,3,s_items_gunpickup2_wav_1009f7a0,0x3f800000,0x3f4ccccd,0);
      if ((param_4 != '\0') || (*(int *)&this_00->field_0xbc == 0)) {
        iVar2 = puVar1[0x32];
        if ((iVar2 != -1) && ((&this_00->field_0x104)[iVar2 * 0x38] != '\0')) {
          param_1 = iVar2;
        }
        iVar2 = CTSGun::SelectWeapon(this_00,param_1);
        if (iVar2 != 0) {
          (*this_00->vtable[0x48])();
        }
      }
      return 1;
    }
  }
  return 0;
}

/* 100618f0  CBasePlayer::DropFlag  (1157 bytes)
 * undefined DropFlag(char param_1)
 * called by: CBasePlayer::DropWeapon, CBasePlayer::Killed, CBasePlayer::StartObserver, CTSBriefcase::CaptureTouch, TSPlayerDisconnect
 */
void __thiscall CBasePlayer::DropFlag(CBasePlayer *this,char param_1)

{
  entvars_t *peVar1;
  edict_t *e;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  Vector VStack_9c;
  vec_t vStack_90;
  undefined1 auStack_8c [12];
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [12];
  Vector VStack_50;
  undefined1 auStack_44 [12];
  Vector VStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  Vector VStack_c;
  
  if (this->field_0x7bc != '\0') {
    *(int *)&this->field_0x534 = *(int *)&this->field_0x534 + 0x14;
    fVar5 = GetSpeedBySlots((int)this);
    SetPlayerSpeed(this,(float)fVar5);
    if (param_1 == '\0') {
      piVar2 = CTSFlag::CreateFlag((int *)this,(int *)&this->field_0x7bc);
      iVar3 = (*this->vtable[0x2b])();
      if (iVar3 == 0) {
        VStack_9c.x = (float)(*g_engfuncs.pfnRandomLong)(-0x3c,0x3c);
        auStack_8c._4_4_ = (undefined4)(int)VStack_9c.x;
        VStack_9c.z = (float)(*g_engfuncs.pfnRandomLong)(-0xb4,0xb4);
        fStack_7c = (float)(int)VStack_9c.z;
        auStack_78._0_4_ = 0.0;
        auStack_8c._0_4_ = (*g_engfuncs.pfnRandomLong)(0x3c,0xa0);
      }
      else {
        peVar1 = this->pev;
        vStack_90 = peVar1->v_angle[0];
        auStack_8c._0_4_ = peVar1->v_angle[1];
        auStack_8c._4_4_ = peVar1->v_angle[2];
      }
      UTIL_MakeVectors(&vStack_90);
      VStack_38.z = 0.0;
      uStack_2c = 0;
      uStack_28 = 0;
      Vector::Vector((Vector *)(auStack_68 + 8),&VStack_38.z);
      fStack_18 = gpGlobals->v_forward[0] * 16.0;
      fStack_14 = gpGlobals->v_forward[1] * 16.0;
      fStack_10 = gpGlobals->v_forward[2] * 16.0;
      Vector::Vector((Vector *)(auStack_44 + 8),&fStack_18);
      peVar1 = this->pev;
      fStack_24 = peVar1->view_ofs[0] + peVar1->origin[0];
      fStack_20 = peVar1->view_ofs[1] + peVar1->origin[1];
      fStack_1c = peVar1->view_ofs[2] + peVar1->origin[2];
      Vector::Vector((Vector *)(auStack_5c + 8),&fStack_24);
      VStack_50.z = (float)auStack_44._8_4_ + (float)auStack_5c._8_4_;
      auStack_44._0_4_ = VStack_38.x + VStack_50.x;
      auStack_44._4_4_ = VStack_38.y + VStack_50.y;
      Vector::Vector((Vector *)(auStack_8c + 8),&VStack_50.z);
      fStack_6c = (float)auStack_68._8_4_ + (float)auStack_8c._8_4_;
      auStack_68._0_4_ = (float)auStack_5c._0_4_ + fStack_80;
      auStack_68._4_4_ = (float)auStack_5c._4_4_ + fStack_7c;
      Vector::Vector((Vector *)auStack_78,&fStack_6c);
      puVar4 = (undefined4 *)Vector::Vector(&VStack_c,auStack_78._0_4_,auStack_78._4_4_,fStack_70);
      Vector::Vector(&VStack_9c,puVar4);
      iVar3 = piVar2[1];
      *(float *)(iVar3 + 8) = VStack_9c.x;
      *(float *)(iVar3 + 0xc) = VStack_9c.y;
      *(float *)(iVar3 + 0x10) = VStack_9c.z;
      iVar3 = piVar2[1];
      *(undefined4 *)(iVar3 + 0x50) = DAT_100ae498;
      *(undefined4 *)(iVar3 + 0x54) = DAT_100ae49c;
      *(undefined4 *)(iVar3 + 0x58) = DAT_100ae4a0;
      VStack_9c.y = (float)(*g_engfuncs.pfnRandomLong)(-300,300);
      *(float *)(piVar2[1] + 0x60) = (float)(int)VStack_9c.y;
      vStack_90 = (vec_t)(*g_engfuncs.pfnRandomLong)(-300,300);
      *(float *)(piVar2[1] + 100) = (float)(int)vStack_90;
      VStack_50.z = VStack_9c.z * 0.33;
      puVar4 = (undefined4 *)
               Vector::Vector((Vector *)&param_1,VStack_9c.z * gpGlobals->v_forward[0],
                              VStack_9c.z * gpGlobals->v_forward[1],
                              VStack_9c.z * gpGlobals->v_forward[2]);
      Vector::Vector((Vector *)auStack_8c,puVar4);
      peVar1 = this->pev;
      puVar4 = (undefined4 *)
               Vector::Vector(&VStack_38,peVar1->velocity[0] * 0.9,peVar1->velocity[1] * 0.9,
                              peVar1->velocity[2] * 0.9);
      Vector::Vector((Vector *)auStack_68,puVar4);
      puVar4 = (undefined4 *)
               Vector::Vector((Vector *)auStack_44,(float)auStack_8c._0_4_ + (float)auStack_68._0_4_
                              ,(float)auStack_8c._4_4_ + (float)auStack_68._4_4_,
                              (float)auStack_8c._8_4_ + (float)auStack_68._8_4_);
      Vector::Vector((Vector *)auStack_5c,puVar4);
      puVar4 = (undefined4 *)
               Vector::Vector(&VStack_50,auStack_5c._0_4_,auStack_5c._4_4_,
                              (float)auStack_5c._8_4_ + VStack_50.z);
      Vector::Vector((Vector *)(auStack_78 + 4),puVar4);
      iVar3 = piVar2[1];
      *(undefined4 *)(iVar3 + 0x20) = auStack_78._4_4_;
      *(float *)(iVar3 + 0x24) = fStack_70;
      *(float *)(iVar3 + 0x28) = fStack_6c;
      e = this->pev->pContainingEntity;
      (*g_engfuncs.pfnGetPlayerUserId)(e);
      (*g_engfuncs.pfnGetPlayerAuthId)(e);
      (*g_engfuncs.pfnGetPlayerUserId)(e);
      UTIL_LogPrintf((byte_conflict *)s___s<_i><_s><_i>__triggered__drop_100a538c);
      (*g_engfuncs.pfnMessageBegin)(2,DAT_100d97cc,(float *)0x0,(edict_t *)0x0);
      (*g_engfuncs.pfnWriteByte)(2);
      (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x7c4);
      (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x7c8 + 1);
      iVar3 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
      (*g_engfuncs.pfnWriteByte)(iVar3);
      auStack_78._4_4_ = 2.644947e-29;
      (*g_engfuncs.pfnMessageEnd)();
    }
    puVar4 = (undefined4 *)&this->field_0x7bc;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}

/* 10061d80  CBasePlayer::TakeFlag  (440 bytes)
 * undefined4 TakeFlag(undefined4 * param_1)
 * called by: CTSFlag::PlayerTakeFlag
 */
undefined4 __thiscall CBasePlayer::TakeFlag(CBasePlayer *this,undefined4 *param_1)

{
  edict_t *peVar1;
  undefined1 *in_EAX;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  char acStack_3c [60];
  
  iVar2 = *(int *)&this->field_0x534;
  if ((0x13 < iVar2) && (in_EAX = &this->field_0x7bc, this->field_0x7bc == '\0')) {
    puVar5 = (undefined4 *)in_EAX;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *param_1;
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 1;
    }
    *in_EAX = 1;
    *(int *)&this->field_0x534 = iVar2 + -0x14;
    fVar6 = GetSpeedBySlots((int)this);
    SetPlayerSpeed(this,(float)fVar6);
    peVar1 = this->pev->pContainingEntity;
    EMIT_SOUND_DYN(peVar1,peVar1,3,s_items_gunpickup2_wav_1009f7a0,0x3f800000,0x3f4ccccd,0);
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100d97cc,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(1);
    (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x7c4);
    (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x7c8 + 1);
    iVar2 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
    (*g_engfuncs.pfnWriteByte)(iVar2);
    (*g_engfuncs.pfnMessageEnd)();
    iVar2 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
    if (iVar2 != *(int *)&this->field_0x7cc) {
      sprintf(acStack_3c,(byte_conflict *)s__s_picked_up_a_briefcase_contain_100a540c);
      TSHudMessageAll(0,0xff,0,4,0x1e,acStack_3c);
    }
    *(int *)&this->field_0x7cc = iVar2;
    peVar1 = this->pev->pContainingEntity;
    (*g_engfuncs.pfnGetPlayerUserId)(peVar1);
    (*g_engfuncs.pfnGetPlayerAuthId)(peVar1);
    (*g_engfuncs.pfnGetPlayerUserId)(peVar1);
    uVar3 = UTIL_LogPrintf((byte_conflict *)s___s<_i><_s><_i>__triggered__aqui_100a53cc);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return (uint)in_EAX & 0xffffff00;
}

/* 10061f40  CBasePlayer::TakeArmor  (207 bytes)
 * undefined4 TakeArmor(int param_1)
 * called by: CItemBattery::MyTouch, CRecharge::Use, CTSAmmoPack::WaitTouch, FUN_100622f0, PlayerAddPowerUp
 */
undefined4 __thiscall CBasePlayer::TakeArmor(CBasePlayer *this,int param_1)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  uVar1 = *(uint *)&this->field_0x704;
  if (param_1 < 0) {
    if ((uVar1 & 0x10) != 0) {
      *(uint *)&this->field_0x704 = uVar1 & 0xffffffef;
      *(int *)&this->field_0x534 = *(int *)&this->field_0x534 + 10;
      this->pev->armorvalue = 0.0;
    }
  }
  else {
    if ((uVar1 & 0x10) == 0) {
      if (*(int *)&this->field_0x534 < 10) {
        return uVar1 & 0xffffff00;
      }
      *(int *)&this->field_0x534 = *(int *)&this->field_0x534 + -10;
      *(uint *)&this->field_0x704 = uVar1 | 0x10;
      EMIT_SOUND_DYN(this->pev,this->pev->pContainingEntity,3,s_weapons_items_wav_100a544c,
                     0x3f800000,0x3f4ccccd,0);
    }
    fVar2 = (float)param_1 + this->pev->armorvalue;
    if (100.0 <= fVar2) {
      fVar2 = 100.0;
    }
    this->pev->armorvalue = fVar2;
  }
  fVar4 = GetSpeedBySlots((int)this);
  uVar3 = SetPlayerSpeed(this,(float)fVar4);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

/* 10062010  CBasePlayer::ResetArmament  (20 bytes)
 * undefined ResetArmament(int param_1)
 * called by: CBasePlayer::Killed, CBotModuleBuy::Think, CTSGameRules::InitHUD, pfnClientCommand
 */
/* .so 0x93e88; zero pl+0x540..0x6ff */

void __fastcall CBasePlayer::ResetArmament(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x540);
  for (iVar1 = 0x70; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 10062030  CBasePlayer::AddItemToArmament  (63 bytes)
 * undefined AddItemToArmament(undefined4 param_1, undefined4 param_2, undefined1 param_3)
 * called by: CBotModuleBuy::Think, pfnClientCommand
 */
/* .so 0x93ea4; 32 x 12-byte at pl+0x580 */

void __thiscall
CBasePlayer::AddItemToArmament
          (CBasePlayer *this,undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)&this->field_0x580;
  do {
    if (*piVar3 == 0) {
      if (iVar2 < 0x20) {
        puVar1 = (undefined4 *)(&this->field_0x580 + iVar2 * 0xc);
        *puVar1 = param_1;
        puVar1[1] = param_2;
        *(undefined1 *)(puVar1 + 2) = param_3;
      }
      return;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 3;
  } while (iVar2 < 0x20);
  return;
}

/* 10062070  CBasePlayer::AddAmmoToArmament  (27 bytes)
 * undefined AddAmmoToArmament(int param_1, undefined4 param_2)
 * called by: CBotModuleBuy::Think, pfnClientCommand
 */
/* .so 0x93ef4; int[16] at pl+0x540 */

void __thiscall CBasePlayer::AddAmmoToArmament(CBasePlayer *this,int param_1,undefined4 param_2)

{
  if ((-1 < param_1) && (param_1 < 0x10)) {
    *(undefined4 *)(&this->field_0x540 + param_1 * 4) = param_2;
  }
  return;
}

/* 10062100  CBasePlayer::BuyAmmo  (493 bytes)
 * undefined BuyAmmo(uint param_1)
 * called by: FUN_10062090
 */
void __thiscall CBasePlayer::BuyAmmo(CBasePlayer *this,uint param_1)

{
  byte bVar1;
  CTSGun *this_00;
  edict_t *peVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  
  iVar8 = 0;
  this_00 = *(CTSGun **)&this->field_0x9fc;
  if ((this_00 != (CTSGun *)0x0) && (*(int *)&this_00->field_0x78 == 0x10)) {
    if (param_1 == 0xfffffffe) {
      bVar3 = false;
      pcVar7 = &this_00->field_0x91c;
      param_1 = 0x25;
      do {
        if (*pcVar7 != '\0') {
          puVar4 = get_weapon_info(param_1);
          bVar1 = *(byte *)(puVar4 + 2);
          uVar6 = (uint)bVar1;
          if (uVar6 != 0) {
            iVar5 = CBaseMonster::ShouldFadeOnDeath();
            if (iVar5 != 0) {
              puVar4 = get_ammo_info(uVar6);
              iVar8 = *(int *)&this->field_0x52c - puVar4[1];
            }
            if (-1 < iVar8) {
              puVar4 = get_ammo_info(uVar6);
              iVar5 = CTSGun::AddAmmo(this_00,bVar1,puVar4[4]);
              while (iVar5 != 0) {
                iVar5 = CBaseMonster::ShouldFadeOnDeath();
                if (iVar5 != 0) {
                  *(int *)&this->field_0x52c = iVar8;
                  puVar4 = get_ammo_info(uVar6);
                  iVar8 = *(int *)&this->field_0x52c - puVar4[1];
                }
                if (!bVar3) {
                  peVar2 = this->pev->pContainingEntity;
                  EMIT_SOUND_DYN(peVar2,peVar2,3,s_items_9mmclip1_wav_100a5460,0x3f800000,0x3f4ccccd
                                 ,0);
                }
                bVar3 = true;
                if (iVar8 < 0) {
                  return;
                }
                puVar4 = get_ammo_info(uVar6);
                iVar5 = CTSGun::AddAmmo(this_00,bVar1,puVar4[4]);
              }
            }
          }
        }
        param_1 = param_1 - 1;
        pcVar7 = pcVar7 + -0x38;
        if ((int)param_1 < 0) {
          return;
        }
      } while( true );
    }
    if (*(int *)&this_00->field_0xbc != 0) {
      if (param_1 == 0xffffffff) {
        param_1 = (uint)*(byte *)(*(int *)&this_00->field_0xc0 + 8);
      }
      else if (param_1 == 0) {
        return;
      }
      iVar5 = CBaseMonster::ShouldFadeOnDeath();
      if (iVar5 != 0) {
        puVar4 = get_ammo_info(param_1);
        iVar8 = *(int *)&this->field_0x52c - puVar4[1];
        if (iVar8 < 0) {
          return;
        }
      }
      puVar4 = get_ammo_info(param_1);
      iVar5 = CTSGun::AddAmmo(this_00,(byte_conflict)param_1,puVar4[4]);
      if (iVar5 != 0) {
        iVar5 = CBaseMonster::ShouldFadeOnDeath();
        if (iVar5 != 0) {
          *(int *)&this->field_0x52c = iVar8;
        }
        peVar2 = this->pev->pContainingEntity;
        EMIT_SOUND_DYN(peVar2,peVar2,3,s_items_9mmclip1_wav_100a5460,0x3f800000,0x3f4ccccd,0);
      }
    }
  }
  return;
}

/* 10062720  CBasePlayer::DropWeapon  (1837 bytes)
 * undefined DropWeapon(uint param_1, float param_2)
 * called by: CBasePlayer::Killed, CBotModuleAttack::FireWeapon, CTSStunt::CheckForBreakables, FUN_10063920, FUN_10063eb0, pfnClientCommand
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* .so 0x94900 (id, float); bot calls (-1 = current, 0.0) */

void __thiscall CBasePlayer::DropWeapon(CBasePlayer *this,uint param_1,float param_2)

{
  byte bVar1;
  CTSGun *this_00;
  entvars_t *peVar2;
  edict_t *this_01;
  float fVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  char local_54;
  int *local_50;
  float local_44;
  float local_40;
  undefined4 local_3c;
  int local_38 [14];
  
  local_50 = (int *)0x0;
  this_00 = *(CTSGun **)&this->field_0x9fc;
  if (this_00 == (CTSGun *)0x0) {
    return;
  }
  if (*(int *)&this_00->field_0x78 != 0x10) {
    return;
  }
  if (((*(int *)&this_00->field_0xb8 == 0x1d) || (*(int *)&this_00->field_0xb8 < 1)) &&
     (param_1 == 0xfffffffe)) {
    return;
  }
  local_54 = '\x01';
  if (param_1 == 0xfffffffe) {
    *(float *)&this->field_0x7a0 = param_2 + *(float *)&this->field_0x7a0;
    if (*(int *)&this_00->field_0xb8 == 0x22) {
      param_2 = 4.2039e-44;
    }
    else {
      cVar4 = GetWeaponType(*(int *)&this_00->field_0xb8);
      if (cVar4 == '\x03') {
        param_2 = 3.50325e-44;
      }
      else {
        bVar1 = *(byte *)(*(int *)&this_00->field_0xc0 + 0xd0);
        if (bVar1 < 0x32) {
          if (bVar1 < 0x15) {
            param_2 = 2.8026e-44;
          }
          else {
            if (0x31 < bVar1) goto LAB_100627e1;
            param_2 = (float)(uint)bVar1;
          }
        }
        else {
LAB_100627e1:
          param_2 = 7.00649e-44;
        }
      }
    }
    if (*(float *)&this->field_0x7a0 < (float)(int)param_2) {
      return;
    }
    *(undefined4 *)&this->field_0x7a0 = 0;
    param_2 = *(float *)&this_00->field_0xb8;
    local_54 = '\0';
  }
  else if (param_1 < 0x80000000) {
    param_2 = (float)param_1;
  }
  else {
    param_2 = *(float *)&this_00->field_0xb8;
  }
  if (((int)param_2 < 1) || (0x25 < (int)param_2)) {
    if ((param_1 != 0xfffffffe) && (cVar4 = FUN_1004d060((int)this), cVar4 != '\0')) {
      DropFlag(this,'\0');
    }
    return;
  }
  piVar6 = (int *)(&this_00->field_0x104 + (int)param_2 * 0x38);
  if ((&this_00->field_0x104)[(int)param_2 * 0x38] == '\0') {
    return;
  }
  if (param_2 == 3.36312e-44) {
    if (((TSGameRules == '\0') || (TSGameRules == '\x01')) &&
       (iVar5 = (*this->vtable[0x2b])(), iVar5 == 0)) {
      if (*(int *)&this_00->field_0x64c == 1) {
        CTSGun::GrenadeIdle(this_00,1.4013e-45);
      }
      iVar5 = 0;
      if (*(int *)&this_00->field_0x648 < 1) {
        return;
      }
      param_1 = 0;
      do {
        piVar6 = CTSPowerUp::CreatePowerUp(0x20,-1);
        peVar2 = this->pev;
        iVar8 = piVar6[1];
        fVar3 = (float)(int)param_1;
        *(vec_t *)(iVar8 + 8) = peVar2->origin[0];
        iVar5 = iVar5 + 1;
        *(vec_t *)(iVar8 + 0xc) = peVar2->origin[1];
        *(vec_t *)(iVar8 + 0x10) = peVar2->origin[2];
        param_1 = param_1 + 5;
        *(float *)(piVar6[1] + 8) = fVar3 + *(float *)(piVar6[1] + 8);
      } while (iVar5 < *(int *)&this_00->field_0x648);
      return;
    }
    if (*(int *)&this_00->field_0x64c == 1) {
      CTSGun::GrenadeIdle(this_00,1.4013e-45);
      goto LAB_10062d9a;
    }
    if (*(int *)&this_00->field_0x648 < 1) goto LAB_10062d9a;
    piVar6 = (int *)&this_00->field_0x644;
    piVar9 = local_38;
    for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar9 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar9 = piVar9 + 1;
    }
    local_38[1] = 1;
    local_50 = ThrowWeapon(this,0x18,local_38,(float *)0x0,(float *)0x0);
    puVar7 = get_weapon_info(0x18);
    *(uint *)&this->field_0x534 = *(int *)&this->field_0x534 + (uint)*(byte *)(puVar7 + 0x34);
    if (*(int *)&this_00->field_0x648 < 2) {
      CTSGun::DropWeapon(this_00,0x18,local_54);
    }
    else {
      *(int *)&this_00->field_0x648 = *(int *)&this_00->field_0x648 + -1;
      if (local_54 == '\0') {
        CTSGun::HolsterWeapon((int *)this_00);
      }
    }
  }
  else {
    puVar7 = get_weapon_info((int)param_2);
    if (*(char *)(puVar7 + 0x37) != '\0') {
      piVar9 = local_38;
      for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar9 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar9 = piVar9 + 1;
      }
      if (param_1 == 0xfffffffe) {
        local_38[1] = 1;
      }
      local_50 = ThrowWeapon(this,(int)param_2,local_38,(float *)0x0,(float *)0x0);
      puVar7 = get_weapon_info((int)param_2);
      *(uint *)&this->field_0x534 =
           *(int *)&this->field_0x534 + (uint)*(byte *)(puVar7 + 0x34) * local_38[1];
      if (local_38[1] < *(int *)(&this_00->field_0x108 + (int)param_2 * 0x38)) {
        *(int *)(&this_00->field_0x108 + (int)param_2 * 0x38) =
             *(int *)(&this_00->field_0x108 + (int)param_2 * 0x38) - local_38[1];
        if (local_54 == '\0') {
          CTSGun::HolsterWeapon((int *)this_00);
        }
      }
      else {
        CTSGun::DropWeapon(this_00,(int)param_2,local_54);
      }
      EMIT_SOUND_DYN(this->pev,this->pev->pContainingEntity,3,s_weapons_weapondrop_wav_100a5434,
                     0x3f800000,0x3f4ccccd,0);
      goto LAB_10062d9a;
    }
    puVar7 = get_weapon_info((int)param_2);
    if ((*(char *)(puVar7 + 0xd2) == '\x04') &&
       (puVar7 = get_weapon_info((int)param_2), puVar7[0x33] != -1)) {
      puVar7 = get_weapon_info((int)param_2);
      iVar5 = puVar7[0x33];
      piVar6 = (int *)(&this_00->field_0x104 + iVar5 * 0x38);
      piVar9 = local_38;
      for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar9 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar9 = piVar9 + 1;
      }
      local_44 = 0.0;
      local_3c = 0;
      local_38[1] = *(int *)(&this_00->field_0x108 + (int)param_2 * 0x38) / 2;
      iVar8 = 0;
      do {
        local_40 = (float)(int)((-(uint)(iVar8 != 0) & 0xfffffff8) + 4);
        local_50 = ThrowWeapon(this,iVar5,local_38,(float *)0x0,&local_44);
        if ((int)param_1 < 0) {
          fVar3 = _DAT_1009ee1c + _DAT_1009ee1c;
          if ((120.0 <= fVar3) || (10.0 < fVar3)) {
            if (120.0 <= fVar3) {
              fVar3 = 120.0;
            }
          }
          else {
            fVar3 = 10.0;
          }
          local_50[0x2d] = (int)(fVar3 + gpGlobals->time);
          local_50[0x30] = (int)this->pev->pContainingEntity;
        }
        puVar7 = get_weapon_info(iVar5);
        iVar8 = iVar8 + 1;
        *(uint *)&this->field_0x534 = *(int *)&this->field_0x534 + (uint)*(byte *)(puVar7 + 0x34);
      } while (iVar8 < 2);
      CTSGun::DropWeapon(this_00,(int)param_2,local_54);
      CTSGun::DropWeapon(this_00,iVar5,local_54);
    }
    else {
      puVar7 = get_weapon_info((int)param_2);
      if ((puVar7[0x32] == -1) ||
         (puVar7 = get_weapon_info((int)param_2),
         (&this_00->field_0x104)[puVar7[0x32] * 0x38] == '\0')) {
        local_50 = ThrowWeapon(this,(int)param_2,piVar6,(float *)0x0,(float *)0x0);
        puVar7 = get_weapon_info((int)param_2);
        *(uint *)&this->field_0x534 = *(int *)&this->field_0x534 + (uint)*(byte *)(puVar7 + 0x34);
        CTSGun::DropWeapon(this_00,(int)param_2,local_54);
        EMIT_SOUND_DYN(this->pev,this->pev->pContainingEntity,3,s_weapons_weapondrop_wav_100a5434,
                       0x3f800000,0x3f4ccccd,0);
        goto LAB_10062d9a;
      }
      piVar9 = local_38;
      for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar9 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar9 = piVar9 + 1;
      }
      local_38[1] = *(int *)(&this_00->field_0x108 + (int)param_2 * 0x38);
      puVar7 = get_weapon_info((int)param_2);
      *(undefined4 *)(&this_00->field_0x108 + (int)param_2 * 0x38) =
           *(undefined4 *)(&this_00->field_0x124 + puVar7[0x32] * 0x38);
      local_50 = ThrowWeapon(this,(int)param_2,local_38,(float *)0x0,(float *)0x0);
      puVar7 = get_weapon_info((int)param_2);
      *(uint *)&this->field_0x534 = *(int *)&this->field_0x534 + (uint)*(byte *)(puVar7 + 0x34);
      puVar7 = get_weapon_info((int)param_2);
      CTSGun::DropWeapon(this_00,puVar7[0x32],local_54);
      CTSGun::HolsterWeapon((int *)this_00);
      iVar5 = CTSGun::SelectWeapon(this_00,(int)param_2);
      if (iVar5 != 0) {
        (*this_00->vtable[0x48])();
      }
    }
  }
  this_01 = this->pev->pContainingEntity;
  EMIT_SOUND_DYN(this_01,this_01,3,s_weapons_weapondrop_wav_100a5434,0x3f800000,0x3f4ccccd,0);
LAB_10062d9a:
  if ((((int)param_1 < 0) && (param_2 != 4.06377e-44)) && (local_50 != (int *)0x0)) {
    fVar3 = _DAT_1009ee1c + _DAT_1009ee1c;
    if ((120.0 <= fVar3) || (10.0 < fVar3)) {
      if (120.0 <= fVar3) {
        fVar3 = 120.0;
      }
    }
    else {
      fVar3 = 10.0;
    }
    local_50[0x2d] = (int)(fVar3 + gpGlobals->time);
    local_50[0x30] = (int)this->pev->pContainingEntity;
  }
  fVar10 = GetSpeedBySlots((int)this);
  SetPlayerSpeed(this,(float)fVar10);
  return;
}

/* 10062e50  CBasePlayer::ThrowWeapon  (1056 bytes)
 * int * ThrowWeapon(int param_1, int * param_2, float * param_3, float * param_4)
 * called by: CBasePlayer::DropWeapon
 */
int * __thiscall
CBasePlayer::ThrowWeapon(CBasePlayer *this,int param_1,int *param_2,float *param_3,float *param_4)

{
  entvars_t *peVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  Vector *this_00;
  Vector *pVVar6;
  Vector *pVVar7;
  Vector *pVVar8;
  Vector *pVVar9;
  Vector VStack_a0;
  Vector VStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  int iStack_7c;
  Vector VStack_78;
  Vector VStack_6c;
  Vector VStack_60;
  Vector VStack_54;
  Vector VStack_48;
  Vector VStack_3c;
  Vector VStack_30;
  Vector VStack_24;
  Vector VStack_18;
  Vector VStack_c;
  
  iVar3 = (*this->vtable[0x2b])();
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnRandomLong)(-0x3c,0x3c);
    fStack_88 = (float)iVar3;
    iVar3 = (*g_engfuncs.pfnRandomLong)(-0xb4,0xb4);
    fStack_84 = (float)iVar3;
    fStack_80 = 0.0;
    iVar3 = (*g_engfuncs.pfnRandomLong)(0x3c,0xa0);
    fVar2 = (float)iVar3;
  }
  else {
    peVar1 = this->pev;
    fStack_88 = peVar1->v_angle[0];
    fStack_84 = peVar1->v_angle[1];
    fStack_80 = peVar1->v_angle[2];
    if (param_3 != (float *)0x0) {
      VStack_94.x = *param_3 + fStack_88;
      VStack_a0.y = param_3[1];
      VStack_a0.z = param_3[2];
      VStack_94.y = VStack_a0.y + fStack_84;
      VStack_94.z = VStack_a0.z + fStack_80;
      Vector::Vector(&VStack_a0,&VStack_94.x);
      fStack_88 = VStack_a0.x;
      fStack_84 = VStack_a0.y;
      fStack_80 = VStack_a0.z;
    }
    fVar2 = (90.0 - fStack_88) + (90.0 - fStack_88);
  }
  UTIL_MakeVectors(&fStack_88);
  piVar4 = CTSWorldGun::CreateWeapon((int *)this,param_1,param_2);
  VStack_a0.x = 16.0;
  VStack_a0.y = 0.0;
  VStack_a0.z = 0.0;
  if (param_4 != (float *)0x0) {
    VStack_78.x = *param_4 + 16.0;
    VStack_94.y = param_4[1];
    VStack_94.z = param_4[2];
    VStack_78.y = VStack_94.y;
    VStack_78.z = VStack_94.z;
    Vector::Vector(&VStack_94,&VStack_78.x);
    VStack_a0.x = VStack_94.x;
    VStack_a0.y = VStack_94.y;
    VStack_a0.z = VStack_94.z;
  }
  VStack_60.z = VStack_a0.z;
  puVar5 = (undefined4 *)
           Vector::Vector(&VStack_30,VStack_a0.y * gpGlobals->v_right[0],
                          VStack_a0.y * gpGlobals->v_right[1],VStack_a0.y * gpGlobals->v_right[2]);
  Vector::Vector(&VStack_48,puVar5);
  puVar5 = (undefined4 *)
           Vector::Vector(&VStack_a0,VStack_a0.x * gpGlobals->v_forward[0],
                          VStack_a0.x * gpGlobals->v_forward[1],
                          VStack_a0.x * gpGlobals->v_forward[2]);
  Vector::Vector(&VStack_78,puVar5);
  peVar1 = this->pev;
  puVar5 = (undefined4 *)
           Vector::Vector(&VStack_18,peVar1->view_ofs[0] + peVar1->origin[0],
                          peVar1->view_ofs[1] + peVar1->origin[1],
                          peVar1->view_ofs[2] + peVar1->origin[2]);
  Vector::Vector(&VStack_94,puVar5);
  puVar5 = (undefined4 *)
           Vector::Vector(&VStack_24,VStack_78.x + VStack_94.x,VStack_78.y + VStack_94.y,
                          VStack_78.z + VStack_94.z);
  Vector::Vector(&VStack_54,puVar5);
  puVar5 = (undefined4 *)
           Vector::Vector(&VStack_c,VStack_48.x + VStack_54.x,VStack_48.y + VStack_54.y,
                          VStack_48.z + VStack_54.z);
  Vector::Vector(&VStack_3c,puVar5);
  puVar5 = (undefined4 *)
           Vector::Vector(&VStack_60,VStack_3c.x,VStack_3c.y,VStack_3c.z + VStack_60.z);
  Vector::Vector(&VStack_6c,puVar5);
  iVar3 = piVar4[1];
  *(float *)(iVar3 + 8) = VStack_6c.x;
  *(float *)(iVar3 + 0xc) = VStack_6c.y;
  *(float *)(iVar3 + 0x10) = VStack_6c.z;
  iVar3 = piVar4[1];
  *(undefined4 *)(iVar3 + 0x50) = DAT_100ae498;
  *(undefined4 *)(iVar3 + 0x54) = DAT_100ae49c;
  *(undefined4 *)(iVar3 + 0x58) = DAT_100ae4a0;
  iStack_7c = (*g_engfuncs.pfnRandomLong)(-300,300);
  *(float *)(piVar4[1] + 0x60) = (float)iStack_7c;
  iStack_7c = (*g_engfuncs.pfnRandomLong)(-300,300);
  VStack_6c.x = 0.0;
  VStack_6c.y = 0.0;
  *(float *)(piVar4[1] + 100) = (float)iStack_7c;
  VStack_6c.z = fVar2 * 0.33;
  puVar5 = (undefined4 *)
           Vector::Vector(&VStack_c,fVar2 * gpGlobals->v_forward[0],fVar2 * gpGlobals->v_forward[1],
                          fVar2 * gpGlobals->v_forward[2]);
  Vector::Vector(&VStack_60,puVar5);
  pVVar9 = &VStack_6c;
  pVVar8 = &VStack_24;
  pVVar6 = &VStack_60;
  pVVar7 = &VStack_18;
  this_00 = (Vector *)Vector::operator*((Vector *)this->pev->velocity,&VStack_30.x,0.9);
  pVVar6 = (Vector *)Vector::operator+(this_00,&pVVar7->x,&pVVar6->x);
  puVar5 = (undefined4 *)Vector::operator+(pVVar6,&pVVar8->x,&pVVar9->x);
  iVar3 = piVar4[1];
  *(undefined4 *)(iVar3 + 0x20) = *puVar5;
  *(undefined4 *)(iVar3 + 0x24) = puVar5[1];
  *(undefined4 *)(iVar3 + 0x28) = puVar5[2];
  return piVar4;
}

/* 10063270  CBasePlayer::UpdatePowerUpState  (428 bytes)
 * undefined UpdatePowerUpState(int * param_1)
 * called by: CBasePlayer::PreThink
 */
/* .so 0x95748; PreThink order, CreatePowerUp */

void __fastcall CBasePlayer::UpdatePowerUpState(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1[0x1c5] == 0) {
    return;
  }
  uVar1 = param_1[0x1c4];
  if (uVar1 == 0) {
    iVar3 = (**(code **)(*param_1 + 0xac))();
    if (iVar3 != 0) {
      return;
    }
    if (((TSGameRules == '\0') || (TSGameRules == '\x01')) &&
       (((param_1[0x1c5] & 1U) == 0 || (2 < param_1[0x1c7])))) {
      piVar4 = CTSPowerUp::CreatePowerUp(param_1[0x1c5],-1);
      iVar3 = param_1[1];
      iVar2 = piVar4[1];
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
    }
  }
  else {
    if ((uVar1 & 9) == 0) {
      if ((uVar1 & 0x100) != 0) {
        *(undefined4 *)(param_1[1] + 0x11c) = 0x3e19999a;
      }
    }
    else if (((float)param_1[0x1c6] < gpGlobals->time) ||
            (iVar3 = (**(code **)(*param_1 + 0xac))(), iVar3 == 0)) {
      FUN_100642b0(param_1);
    }
    else if ((param_1[0x1c4] & 8U) == 0) {
      if ((param_1[0x1c4] & 1U) != 0) {
        *(undefined1 *)((int)param_1 + 0x161) = 0;
        param_1[0x5b] = 0x3eb33333;
        param_1[0x5a] = 0x3f19999a;
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0x161) = 1;
      param_1[0x5b] = 0x3e666666;
      param_1[0x5a] = 0x3f4ccccd;
    }
    if ((gpGlobals->time <= (float)param_1[0x1c6]) &&
       (iVar3 = (**(code **)(*param_1 + 0xac))(), iVar3 != 0)) {
      return;
    }
    iVar3 = (**(code **)(*param_1 + 0xac))();
    if (((iVar3 == 0) && ((TSGameRules == '\0' || (TSGameRules == '\x01')))) &&
       (((param_1[0x1c4] & 1U) == 0 || (2 < param_1[0x1c7])))) {
      piVar4 = CTSPowerUp::CreatePowerUp(param_1[0x1c4],-1);
      iVar3 = param_1[1];
      iVar2 = piVar4[1];
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
    }
    if ((param_1[0x1c4] & 0x100U) != 0) {
      *(undefined4 *)(param_1[1] + 0x11c) = 0x3f800000;
    }
  }
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c5] = 0;
  return;
}

/* 10063420  CBasePlayer::UsePowerUp  (322 bytes)
 * undefined4 UsePowerUp(int * param_1)
 * called by: CBotModulePowerUp::Think, pfnClientCommand
 */
/* .so 0x95980 (already named) */

undefined4 __fastcall CBasePlayer::UsePowerUp(int *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uStack00000028;
  
  if (*(int *)(param_1[1] + 0x244) != 0) {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0xac))();
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = param_1[0x1c5];
  if (uVar1 == 0) {
    return 0;
  }
  if (param_1[0x1c4] == 0) {
    if ((DAT_100c0a60 != '\0') && ((uVar1 & 9) != 0)) {
      TSHudMessageOne(0xc3,0x2d,0x2d,0x10,0x14,s_You_can_t_use_Slow_Motion_now__100a5474,param_1[1])
      ;
      return 0;
    }
    param_1[0x1c4] = uVar1;
    param_1[0x1c6] = (int)((float)param_1[0x1c7] + gpGlobals->time);
    (*g_engfuncs.pfnMessageBegin)(1,DAT_100d9790,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
    lVar3 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar3);
    (*g_engfuncs.pfnMessageEnd)();
    if ((param_1[0x1c5] & 1U) == 0) {
      if ((param_1[0x1c5] & 8U) == 0) {
        return 1;
      }
      (*g_engfuncs.pfnMessageBegin)(4,DAT_100d97d8,(float *)(param_1[1] + 8),(edict_t *)0x0);
      iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)(iVar2);
      iVar2 = 2;
    }
    else {
      (*g_engfuncs.pfnMessageBegin)(4,DAT_100d97d8,(float *)(param_1[1] + 8),(edict_t *)0x0);
      iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)(iVar2);
      iVar2 = 1;
    }
    (*g_engfuncs.pfnWriteByte)(iVar2);
    uStack00000028 = 0x1006355b;
    (*g_engfuncs.pfnMessageEnd)();
    return 1;
  }
  return 0;
}

/* 10064370  CBasePlayer::SlowMotionFlow  (1590 bytes)
 * undefined SlowMotionFlow(int * param_1)
 * called by: CBasePlayer::PreThink
 */
/* .so 0x96bb0; PreThink order, PlayerByIndex loop */

void __fastcall CBasePlayer::SlowMotionFlow(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  globalvars_t *pgVar4;
  int *piVar5;
  int iVar6;
  char local_69;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [8];
  float fStack_30;
  float fStack_28;
  
  if (((float)param_1[0x5a] != 0.0) && ((float)param_1[0x59] <= gpGlobals->time)) {
    iVar6 = 1;
    local_69 = '\0';
    param_1[0x59] = (int)(gpGlobals->time + 0.5);
    pgVar4 = gpGlobals;
    if (0 < gpGlobals->maxClients) {
      piVar5 = param_1 + 0x5d;
      do {
        if (local_69 != '\0') {
          return;
        }
        if (*piVar5 == 0) {
LAB_10064409:
          piVar2 = (int *)UTIL_PlayerByIndex(iVar6);
          if ((((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0xc0))(), iVar3 != 0)) &&
              (param_1 != piVar2)) &&
             (((float)piVar2[0x5a] == 0.0 || ((float)piVar2[0x5b] != (float)param_1[0x5b])))) {
            iVar3 = piVar2[1];
            iVar1 = param_1[1];
            fStack_50 = *(float *)(iVar3 + 8) + *(float *)(iVar3 + 0x174);
            fStack_4c = *(float *)(iVar3 + 0x178) + *(float *)(iVar3 + 0xc);
            fStack_48 = *(float *)(iVar3 + 0x17c) + *(float *)(iVar3 + 0x10);
            fStack_44 = *(float *)(iVar1 + 8) + *(float *)(iVar1 + 0x174);
            fStack_58 = *(float *)(iVar1 + 0x178) + *(float *)(iVar1 + 0xc);
            fStack_54 = *(float *)(iVar1 + 0x17c) + *(float *)(iVar1 + 0x10);
            fStack_40 = fStack_58;
            fStack_3c = fStack_54;
            FUN_10076f70(&fStack_44,&fStack_50,1,1,*(undefined4 *)(iVar1 + 0x208),auStack_38);
            if (1.0 <= fStack_28) {
              if (((float)piVar2[0x5a] == 0.0) || ((float)param_1[0x5b] <= (float)piVar2[0x5b])) {
                *piVar5 = (int)piVar2;
              }
              else {
                local_69 = '\x01';
                *piVar5 = 0;
              }
            }
          }
        }
        else if (*(float *)(*piVar5 + 0x168) != 0.0) {
          *piVar5 = 0;
          goto LAB_10064409;
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 <= gpGlobals->maxClients);
      pgVar4 = (globalvars_t *)CONCAT31((int3)((uint)gpGlobals >> 8),local_69);
      if (local_69 != '\0') {
        return;
      }
    }
    (**(code **)(*param_1 + 0xc))
              (param_1[0x5a],
               CONCAT31((int3)((uint)pgVar4 >> 8),*(undefined1 *)((int)param_1 + 0x161)));
    iVar6 = 1;
    if (0 < gpGlobals->maxClients) {
      piVar5 = param_1 + 0x5d;
      do {
        piVar2 = (int *)*piVar5;
        if (piVar2 != (int *)0x0) {
          if (((float)piVar2[0x5a] == 0.0) || ((float)piVar2[0x5b] != (float)param_1[0x5b])) {
            (**(code **)(*piVar2 + 0xc))(param_1[0x5b],0);
            *(undefined1 *)(*piVar5 + 0x161) = *(undefined1 *)((int)param_1 + 0x161);
          }
          else {
            *piVar5 = 0;
          }
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 <= gpGlobals->maxClients);
    }
    if ((char)param_1[0x9d] < ' ') {
      piVar5 = (int *)UTIL_FindEntityByClassname(0,s_grenade_100a315c);
      while (((piVar5 != (int *)0x0 && (*(edict_t **)(piVar5[1] + 0x208) != (edict_t *)0x0)) &&
             (iVar6 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar5[1] + 0x208)),
             iVar6 != 0))) {
        iVar6 = FUN_10072bd0(param_1 + 0x7d,0x20,(int)piVar5);
        if (iVar6 == -1) {
          iVar6 = param_1[1];
          fStack_58 = *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0x174);
          fStack_54 = *(float *)(iVar6 + 0x178) + *(float *)(iVar6 + 0xc);
          fStack_50 = *(float *)(iVar6 + 0x17c) + *(float *)(iVar6 + 0x10);
          fStack_48 = fStack_54;
          fStack_44 = fStack_50;
          FUN_10076f70(&fStack_58,piVar5[1] + 8,1,1,*(undefined4 *)(iVar6 + 0x208),&fStack_40);
          if (1.0 <= fStack_30) {
            (**(code **)(*piVar5 + 0xc))(param_1[0x5b],0);
            if ((char)param_1[0x9d] < ' ') {
              param_1[(char)param_1[0x9d] + 0x7d] = (int)piVar5;
              *(char *)(param_1 + 0x9d) = (char)param_1[0x9d] + '\x01';
            }
          }
        }
        piVar5 = (int *)UTIL_FindEntityByClassname((int)piVar5,s_grenade_100a315c);
      }
      piVar5 = (int *)UTIL_FindEntityByClassname(0,&DAT_1009d568);
      while (((piVar5 != (int *)0x0 && (*(edict_t **)(piVar5[1] + 0x208) != (edict_t *)0x0)) &&
             (iVar6 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar5[1] + 0x208)),
             iVar6 != 0))) {
        iVar6 = piVar5[1];
        if ((((*(float *)(iVar6 + 0x20) != DAT_100ae498) ||
             (*(float *)(iVar6 + 0x24) != DAT_100ae49c)) ||
            (*(float *)(iVar6 + 0x28) != DAT_100ae4a0)) &&
           (iVar6 = FUN_10072bd0(param_1 + 0x7d,0x20,(int)piVar5), iVar6 == -1)) {
          iVar6 = param_1[1];
          fStack_58 = *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0x174);
          fStack_54 = *(float *)(iVar6 + 0x178) + *(float *)(iVar6 + 0xc);
          fStack_50 = *(float *)(iVar6 + 0x17c) + *(float *)(iVar6 + 0x10);
          fStack_48 = fStack_54;
          fStack_44 = fStack_50;
          FUN_10076f70(&fStack_58,piVar5[1] + 8,1,1,*(undefined4 *)(iVar6 + 0x208),&fStack_40);
          if (1.0 <= fStack_30) {
            (**(code **)(*piVar5 + 0xc))(param_1[0x5b],0);
            if ((char)param_1[0x9d] < ' ') {
              param_1[(char)param_1[0x9d] + 0x7d] = (int)piVar5;
              *(char *)(param_1 + 0x9d) = (char)param_1[0x9d] + '\x01';
            }
          }
        }
        piVar5 = (int *)UTIL_FindEntityByClassname((int)piVar5,&DAT_1009d568);
      }
      piVar5 = (int *)UTIL_FindEntityByClassname(0,s_WorldGun_1009d570);
      while (((piVar5 != (int *)0x0 && (*(edict_t **)(piVar5[1] + 0x208) != (edict_t *)0x0)) &&
             (iVar6 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar5[1] + 0x208)),
             iVar6 != 0))) {
        iVar6 = piVar5[1];
        if ((((*(float *)(iVar6 + 0x20) != DAT_100ae498) ||
             (*(float *)(iVar6 + 0x24) != DAT_100ae49c)) ||
            (*(float *)(iVar6 + 0x28) != DAT_100ae4a0)) &&
           (iVar6 = FUN_10072bd0(param_1 + 0x7d,0x20,(int)piVar5), iVar6 == -1)) {
          iVar6 = param_1[1];
          fStack_58 = *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0x174);
          fStack_54 = *(float *)(iVar6 + 0x178) + *(float *)(iVar6 + 0xc);
          fStack_50 = *(float *)(iVar6 + 0x17c) + *(float *)(iVar6 + 0x10);
          fStack_48 = fStack_54;
          fStack_44 = fStack_50;
          FUN_10076f70(&fStack_58,piVar5[1] + 8,1,1,*(undefined4 *)(iVar6 + 0x208),&fStack_40);
          if (1.0 <= fStack_30) {
            (**(code **)(*piVar5 + 0xc))(param_1[0x5b],0);
            if ((char)param_1[0x9d] < ' ') {
              param_1[(char)param_1[0x9d] + 0x7d] = (int)piVar5;
              *(char *)(param_1 + 0x9d) = (char)param_1[0x9d] + '\x01';
            }
          }
        }
        piVar5 = (int *)UTIL_FindEntityByClassname((int)piVar5,s_WorldGun_1009d570);
      }
    }
  }
  return;
}

/* 10067c00  CBasePlayer::StartObserver  (769 bytes)
 * undefined StartObserver(void)
 * called by: CBasePlayer::PlayerDeathThink, CHalfLifeTeamplay::ChangePlayerTeam, CTSGameRules::InitHUD, CTSGameRules::RestartRound
 */
void __thiscall CBasePlayer::StartObserver(CBasePlayer *this)

{
  undefined1 *this_00;
  entvars_t *peVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  int *piVar4;
  int iVar5;
  char *sz;
  undefined4 uStack00000058;
  vec_t in_stack_00000070;
  vec_t in_stack_00000074;
  vec_t in_stack_00000078;
  undefined4 uStack00000084;
  
  *(undefined4 *)&this->field_0x530 = *(undefined4 *)&this->field_0x52c;
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100d9778,(float *)0x0,this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0x52c);
  (*g_engfuncs.pfnMessageEnd)();
  *(undefined4 *)&this->field_0x750 = 0;
  this->pev->iuser4 = 0;
  this->pev->fuser1 = 1.0;
  *(undefined4 *)&this->field_0x15c = 0x3f800000;
  *(undefined4 *)&this->field_0x154 = 0x3f800000;
  (*g_engfuncs.pfnMessageBegin)(5,0x17,this->pev->origin,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0x7d);
  uVar3 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(uVar3 & 0xff);
  (*g_engfuncs.pfnMessageEnd)();
  piVar4 = *(int **)&this->field_0x9fc;
  if (piVar4 != (int *)0x0) {
    if (piVar4[0x1e] == 0x10) {
      FUN_10054190((int)piVar4);
      CTSGun::HolsterWeapon(piVar4);
    }
    (**(code **)(**(int **)&this->field_0x9fc + 0x128))();
  }
  DropFlag(this,'\0');
  this_00 = &this->field_0x9b0;
  bVar2 = FUN_1000e440((uint *)this_00);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    piVar4 = (int *)EHANDLE::operator->((uint *)this_00);
    (**(code **)(*piVar4 + 0xd8))();
    EHANDLE::operator=((EHANDLE *)this_00,0);
  }
  SetSuitUpdate(this,(byte_conflict *)0x0,0,0);
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9784,(float *)0x0,(edict_t *)0x0);
  iVar5 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(iVar5);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  *(undefined4 *)&this->field_0x9e0 = 0;
  *(undefined4 *)&this->field_0x9dc = 0;
  this->pev->fov = 0.0;
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100d974c,(float *)0x0,this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  this->pev->effects = 0x80;
  peVar1 = this->pev;
  peVar1->view_ofs[0] = DAT_100ae498;
  peVar1->view_ofs[1] = DAT_100ae49c;
  peVar1->view_ofs[2] = DAT_100ae4a0;
  peVar1 = this->pev;
  peVar1->v_angle[0] = in_stack_00000070;
  peVar1->v_angle[1] = in_stack_00000074;
  peVar1->v_angle[2] = in_stack_00000078;
  peVar1 = this->pev;
  peVar1->angles[0] = peVar1->v_angle[0];
  peVar1->angles[1] = peVar1->v_angle[1];
  peVar1->angles[2] = peVar1->v_angle[2];
  this->pev->fixangle = 1;
  this->pev->solid = 0;
  this->pev->takedamage = 0.0;
  this->pev->movetype = 0;
  *(uint *)&this->field_0x834 = *(uint *)&this->field_0x834 & 0xfffffff7;
  this->pev->flags = this->pev->flags & 0xffffbfff;
  this->pev->deadflag = 3;
  this->pev->health = 1.0;
  *(undefined4 *)&this->field_0x9a0 = 1;
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100d971c,(float *)0x0,(edict_t *)0x0);
  uStack00000058 = 0x10067e6f;
  iVar5 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  uStack00000058 = 0x10067e76;
  (*g_engfuncs.pfnWriteByte)(iVar5);
  sz = (char *)(*this->vtable[0x32])();
  (*g_engfuncs.pfnWriteString)(sz);
  (*g_engfuncs.pfnMessageEnd)();
  FUN_10033050(this,1);
  UTIL_SetOrigin((int)this->pev,&stack0x00000080);
  iVar5 = *(int *)&this->field_0x758;
  if (iVar5 == 0) {
    iVar5 = 2;
  }
  FUN_10068270(this,iVar5);
  uStack00000058 = 0x10067ed3;
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100d979c,(float *)0x0,(edict_t *)0x0);
  iVar5 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(iVar5);
  (*g_engfuncs.pfnWriteByte)(1);
  uStack00000084 = 0x10067efa;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10067f10  CBasePlayer::StopObserver  (194 bytes)
 * undefined StopObserver(int param_1)
 * called by: CBotBrain::Think, pfnClientCommand
 */
/* .so 0x99a14; identical body */

void __fastcall CBasePlayer::StopObserver(int param_1)

{
  int iVar1;
  
  if ((*(float *)(param_1 + 0x75c) <= 0.0) || (*(float *)(param_1 + 0x75c) <= gpGlobals->time)) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x244);
    if ((iVar1 != 0) || (*(int *)(*(int *)(param_1 + 4) + 0x248) != 0)) {
      *(int *)(param_1 + 0x758) = iVar1;
      (*g_engfuncs.pfnMessageBegin)(2,DAT_100d979c,(float *)0x0,(edict_t *)0x0);
      iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
      (*g_engfuncs.pfnWriteByte)(iVar1);
      (*g_engfuncs.pfnWriteByte)(0);
      (*g_engfuncs.pfnMessageEnd)();
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x248) = 0;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x244) = 0;
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x180) = 0;
    *(undefined4 *)(param_1 + 0xb20) = 0;
    respawn(*(int *)(param_1 + 4));
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x104) = 0xbf800000;
  }
  return;
}

/* 10068130  CBasePlayer::Observer_Idle  (102 bytes)
 * undefined Observer_Idle(void * param_1)
 * called by: CBasePlayer::PreThink
 */
/* .so 0x99ca4; PreThink order */

void __fastcall CBasePlayer::Observer_Idle(void *param_1)

{
  int iVar1;
  
  if (((*(float *)((int)param_1 + 0x750) <= gpGlobals->time) &&
      (*(float *)((int)param_1 + 0x750) = gpGlobals->time + 0.5,
      *(int *)(*(int *)((int)param_1 + 4) + 0x244) != 3)) &&
     (*(int **)((int)param_1 + 0x748) != (int *)0x0)) {
    iVar1 = (**(code **)(**(int **)((int)param_1 + 0x748) + 0xac))();
    if ((iVar1 == 0) || (*(int *)(*(int *)(*(int *)((int)param_1 + 0x748) + 4) + 0x244) != 0)) {
      FUN_10067fe0(param_1,'\0');
    }
  }
  return;
}

/* 100681a0  CBasePlayer::Observer_HandleButtons  (202 bytes)
 * undefined Observer_HandleButtons(void * param_1)
 * called by: CBasePlayer::PreThink
 */
/* .so 0x99d34; PreThink order */

void __fastcall CBasePlayer::Observer_HandleButtons(void *param_1)

{
  int iVar1;
  
  if (*(float *)((int)param_1 + 0x74c) <= gpGlobals->time) {
    if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x180) & 2) != 0) {
      iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 0x244);
      if (iVar1 == 3) {
        iVar1 = 2;
      }
      else if (iVar1 == 2) {
        iVar1 = 1;
      }
      else if (iVar1 == 1) {
        iVar1 = 5;
      }
      else {
        iVar1 = 3;
      }
      FUN_10068270(param_1,iVar1);
      *(float *)((int)param_1 + 0x74c) = gpGlobals->time + 0.2;
    }
    if (((*(byte *)(*(int *)((int)param_1 + 4) + 0x180) & 8) != 0) &&
       (*(int *)(*(int *)((int)param_1 + 4) + 0x244) != 3)) {
      FUN_10067fe0(param_1,'\0');
      *(float *)((int)param_1 + 0x74c) = gpGlobals->time + 0.2;
    }
    if (((*(byte *)(*(int *)((int)param_1 + 4) + 0x180) & 0x10) != 0) &&
       (*(int *)(*(int *)((int)param_1 + 4) + 0x244) != 3)) {
      FUN_10067fe0(param_1,'\x01');
      *(float *)((int)param_1 + 0x74c) = gpGlobals->time + 0.2;
    }
  }
  return;
}

