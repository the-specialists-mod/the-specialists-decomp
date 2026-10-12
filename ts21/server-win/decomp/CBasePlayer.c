/* mp.dll - CBasePlayer (50 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000fc90  CBasePlayer::BodyTarget  (111 bytes)
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
  pfVar5 = (float *)(**(code **)(*param_1 + 0xd4))(auStack_c);
  fVar3 = pfVar5[2];
  fVar4 = pfVar5[1];
  *unaff_retaddr = unaff_ESI + *pfVar5;
  unaff_retaddr[1] = (float)(fVar6 * (float10)fVar1) + fVar4;
  unaff_retaddr[2] = (float)(fVar6 * (float10)fVar2) + fVar3;
  return;
}

/* 1000fd00  CBasePlayer::StartSneaking  (20 bytes)
 * undefined StartSneaking()
 */
void __fastcall CBasePlayer::StartSneaking(int param_1)

{
  *(float *)(param_1 + 0x930) = gpGlobals->time - 1.0;
  return;
}

/* 1000fd20  CBasePlayer::StopSneaking  (20 bytes)
 * undefined StopSneaking()
 */
void __fastcall CBasePlayer::StopSneaking(int param_1)

{
  *(float *)(param_1 + 0x930) = gpGlobals->time + 30.0;
  return;
}

/* 1000fd40  CBasePlayer::IsSneaking  (29 bytes)
 * undefined IsSneaking()
 */
undefined4 __fastcall CBasePlayer::IsSneaking(int param_1)

{
  if (*(float *)(param_1 + 0x930) < gpGlobals->time !=
      (*(float *)(param_1 + 0x930) == gpGlobals->time)) {
    return 1;
  }
  return 0;
}

/* 1000fd60  CBasePlayer::IsAlive  (43 bytes)
 * undefined IsAlive()
 */
undefined4 __fastcall CBasePlayer::IsAlive(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 4) + 0x170) == 0) &&
     (0.0 < *(float *)(*(int *)(param_1 + 4) + 0x160))) {
    return 1;
  }
  return 0;
}

/* 1000fd90  CBasePlayer::ShouldFadeOnDeath  (3 bytes)
 * undefined ShouldFadeOnDeath()
 */
undefined4 CBasePlayer::ShouldFadeOnDeath(void)

{
  return 0;
}

/* 1000fda0  CBasePlayer::IsPlayer  (6 bytes)
 * undefined IsPlayer()
 */
undefined4 CBasePlayer::IsPlayer(void)

{
  return 1;
}

/* 1000fdb0  CBasePlayer::IsNetClient  (6 bytes)
 * undefined IsNetClient()
 */
undefined4 CBasePlayer::IsNetClient(void)

{
  return 1;
}

/* 1000fdc0  CBasePlayer::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CBasePlayer::ObjectCaps(void)

{
  return 0;
}

/* 1002ab20  CBasePlayer::TakeHealth  (13 bytes)
 * undefined TakeHealth()
 */
void __thiscall CBasePlayer::TakeHealth(CBaseMonster *param_1,float param_2,uint param_3)

{
  CBaseMonster::TakeHealth(param_1,param_2,param_3);
  return;
}

/* 1002ab30  CBasePlayer::GetGunPosition  (47 bytes)
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

/* 1002ae90  CBasePlayer::TabulateAmmo  (197 bytes)
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
  
  iVar1 = FUN_1002d8f0(param_1,&DAT_10095e5c);
  uVar2 = FUN_1002d8d0(param_1,iVar1);
  *(undefined4 *)((int)param_1 + 0x20) = uVar2;
  iVar1 = FUN_1002d8f0(this,&DAT_10095e58);
  uVar2 = FUN_1002d8d0(param_1,iVar1);
  *(undefined4 *)((int)param_1 + 0x24) = uVar2;
  iVar1 = FUN_1002d8f0(this_00,(byte_conflict *)s_ARgrenades_10095e4c);
  uVar2 = FUN_1002d8d0(param_1,iVar1);
  *(undefined4 *)((int)param_1 + 0x3c) = uVar2;
  iVar1 = FUN_1002d8f0(this_01,(byte_conflict *)s_bolts_10095e44);
  uVar2 = FUN_1002d8d0(param_1,iVar1);
  *(undefined4 *)((int)param_1 + 0x28) = uVar2;
  iVar1 = FUN_1002d8f0(this_02,(byte_conflict *)s_buckshot_10095e38);
  uVar2 = FUN_1002d8d0(param_1,iVar1);
  *(undefined4 *)((int)param_1 + 0x2c) = uVar2;
  iVar1 = FUN_1002d8f0(this_03,(byte_conflict *)s_rockets_10095e30);
  uVar2 = FUN_1002d8d0(param_1,iVar1);
  *(undefined4 *)((int)param_1 + 0x30) = uVar2;
  iVar1 = FUN_1002d8f0(this_04,(byte_conflict *)s_uranium_10095e28);
  uVar2 = FUN_1002d8d0(param_1,iVar1);
  *(undefined4 *)((int)param_1 + 0x34) = uVar2;
  iVar1 = FUN_1002d8f0(this_05,(byte_conflict *)s_Hornets_10095e20);
  uVar2 = FUN_1002d8d0(param_1,iVar1);
  *(undefined4 *)((int)param_1 + 0x38) = uVar2;
  return;
}

/* 1002b500  CBasePlayer::PlayerUse  (1006 bytes)
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
  longlong lVar10;
  undefined4 uVar11;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float afStack_50 [3];
  float afStack_44 [3];
  undefined1 auStack_38 [16];
  float fStack_28;
  
  if (((*(uint *)(*(int *)(param_1 + 4) + 0x180) | *(uint *)(param_1 + 0x770) |
       *(uint *)(param_1 + 0x774)) & 0x20) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x770) & 0x20) != 0) {
    this = (EHANDLE *)(param_1 + 0x91c);
    bVar2 = FUN_1000c210((uint *)this);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      piVar4 = (int *)FUN_1000c220((uint *)this);
      (**(code **)(*piVar4 + 0xc0))(param_1,param_1,0,0);
      EHANDLE::operator=(this,0);
      return;
    }
    if ((*(uint *)(param_1 + 0x7a4) & 2) != 0) {
      *(undefined4 *)(param_1 + 0x914) = 0xc0;
      *(uint *)(param_1 + 0x7a4) = *(uint *)(param_1 + 0x7a4) & 0xfffffffd;
      return;
    }
    peVar5 = *(edict_t **)(*(int *)(param_1 + 4) + 0x19c);
    if (((((peVar5 != (edict_t *)0x0) ||
          (peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar5 != (edict_t *)0x0)) &&
         (piVar4 = peVar5->pvPrivateData, piVar4 != (int *)0x0)) &&
        (((*(byte *)(*(int *)(param_1 + 4) + 0x180) & 2) == 0 &&
         ((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x200) != 0)))) &&
       ((uVar6 = (**(code **)(*piVar4 + 0x20))(), (uVar6 & 0x40) != 0 &&
        (iVar7 = (**(code **)(*piVar4 + 0x8c))(*(undefined4 *)(param_1 + 4)), iVar7 != 0)))) {
      *(uint *)(param_1 + 0x7a4) = *(uint *)(param_1 + 0x7a4) | 2;
      iVar7 = *(int *)(piVar4[1] + 0x184);
      lVar10 = __ftol();
      uVar6 = FUN_1002aa20((int)lVar10,iVar7);
      *(uint *)(param_1 + 0x914) = uVar6 | 0xc0;
      this_00 = *(void **)(*(int *)(param_1 + 4) + 0x208);
      EMIT_SOUND_DYN(this_00,this_00,3,s_plats_train_use1_wav_10091f7c,0x3f4ccccd,0x3f4ccccd,0,100);
      return;
    }
  }
  piVar4 = (int *)0x0;
  local_78 = 0.7;
  FUN_10066df0();
  piVar8 = (int *)FUN_10066c30(0,*(int *)(param_1 + 4) + 8,0x42800000);
  if (piVar8 == (int *)0x0) {
    return;
  }
  do {
    uVar6 = (**(code **)(*piVar8 + 0x20))();
    if ((uVar6 & 0x38) != 0) {
      iVar7 = *(int *)(param_1 + 4);
      fStack_5c = *(float *)(iVar7 + 0x174) + *(float *)(iVar7 + 8);
      fStack_58 = *(float *)(iVar7 + 0x178) + *(float *)(iVar7 + 0xc);
      fStack_54 = *(float *)(iVar7 + 0x17c) + *(float *)(iVar7 + 0x10);
      pfVar9 = (float *)VecBModelOrigin(afStack_44,piVar8[1]);
      fStack_84 = *pfVar9 - fStack_5c;
      fStack_80 = pfVar9[1] - fStack_58;
      fStack_7c = pfVar9[2] - fStack_54;
      iVar7 = piVar8[1];
      fStack_6c = *(float *)(iVar7 + 0xfc) * 0.5;
      fStack_70 = *(float *)(iVar7 + 0xf8) * 0.5;
      fStack_74 = *(float *)(iVar7 + 0xf4) * 0.5;
      fStack_68 = fStack_84;
      fStack_64 = fStack_80;
      fStack_60 = fStack_7c;
      pfVar9 = (float *)FUN_10068320(afStack_50,&fStack_84,&fStack_74);
      fStack_84 = *pfVar9;
      fStack_80 = pfVar9[1];
      fStack_7c = pfVar9[2];
      fVar1 = fStack_84 * gpGlobals->v_forward[0] +
              fStack_80 * gpGlobals->v_forward[1] + fStack_7c * gpGlobals->v_forward[2];
      if (local_78 < fVar1) {
        piVar4 = piVar8;
        local_78 = fVar1;
      }
    }
    piVar8 = (int *)FUN_10066c30((int)piVar8,*(int *)(param_1 + 4) + 8,0x42800000);
  } while (piVar8 != (int *)0x0);
  if (piVar4 == (int *)0x0) {
    return;
  }
  cVar3 = (**(code **)(*piVar4 + 4))();
  if (cVar3 == '\0') {
    iVar7 = *(int *)(param_1 + 4);
    fStack_6c = *(float *)(iVar7 + 0x17c) + *(float *)(iVar7 + 0x10);
    fStack_70 = *(float *)(iVar7 + 0x178) + *(float *)(iVar7 + 0xc);
    fStack_74 = *(float *)(iVar7 + 0x174) + *(float *)(iVar7 + 8);
    (**(code **)(*piVar4 + 0xd4))(afStack_50,1,*(undefined4 *)(piVar4[1] + 0x208),auStack_38);
    FUN_10067850();
    if (fStack_28 < 1.0) {
      return;
    }
  }
  uVar6 = (**(code **)(*piVar4 + 0x20))();
  if ((*(byte *)(param_1 + 0x770) & 0x20) != 0) {
    EMIT_SOUND_DYN(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),3,
                   s_common_wpn_select_wav_10091e48,0x3ecccccd,0x3f4ccccd,0,100);
  }
  if (((*(byte *)(*(int *)(param_1 + 4) + 0x180) & 0x20) == 0) || ((uVar6 & 0x10) == 0)) {
    if (((*(byte *)(param_1 + 0x770) & 0x20) == 0) || ((uVar6 & 0x28) == 0)) {
      if ((*(byte *)(param_1 + 0x774) & 0x20) == 0) {
        return;
      }
      uVar6 = (**(code **)(*piVar4 + 0x20))();
      if ((uVar6 & 0x20) == 0) {
        return;
      }
      uVar11 = 0;
      goto LAB_1002b8d4;
    }
    if ((uVar6 & 0x10) != 0) goto LAB_1002b8a8;
  }
  else {
LAB_1002b8a8:
    *(uint *)(param_1 + 0x7a4) = *(uint *)(param_1 + 0x7a4) | 0x10;
  }
  uVar11 = 0x3f800000;
LAB_1002b8d4:
  (**(code **)(*piVar4 + 0xc0))(param_1,param_1,2,uVar11);
  return;
}

/* 1002b940  CBasePlayer::Classify  (6 bytes)
 * undefined Classify()
 */
undefined4 CBasePlayer::Classify(void)

{
  return 2;
}

/* 1002b950  CBasePlayer::AddPoints  (234 bytes)
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
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbbf4,(float *)0x0,(edict_t *)0x0);
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(iVar1);
  lVar2 = __ftol();
  (*g_engfuncs.pfnWriteShort)((int)lVar2);
  (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0xa88);
  (*g_engfuncs.pfnWriteShort)(0);
  puStack0000001c = &this->field_0xaa0;
  iVar1 = (**(code **)(*DAT_1009f494 + 0xcc))();
  uStack00000014 = 0x1002ba2d;
  (*g_engfuncs.pfnWriteShort)(iVar1 + 1);
  puStack0000001c = (undefined1 *)0x1002ba36;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 1002ba40  CBasePlayer::AddPointsToTeam  (124 bytes)
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
         (iVar3 = (**(code **)(*DAT_1009f494 + 200))(param_1,piVar2), iVar3 == 1)) {
        (**(code **)(*piVar2 + 0x5c))(param_2,param_3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= gpGlobals->maxClients);
  }
  return;
}

/* 1002bac0  CBasePlayer::CheckTimeBasedDamage  (366 bytes)
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
    param_1[0x237] = (int)pgVar1->time;
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
          (**(code **)(*param_1 + 0x38))(param_1[1],param_1[1],0x40000000,0);
          uVar2 = 5;
          break;
        case 4:
          if (param_1[0x241] < param_1[0x240]) {
            iVar4 = param_1[0x240] - param_1[0x241];
            if (9 < iVar4) {
              iVar4 = 10;
            }
            (**(code **)(*param_1 + 0x3c))((float)iVar4,0);
            param_1[0x241] = param_1[0x241] + iVar4;
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
LAB_1002bbb8:
              if (param_1[0x1e4] != 0) {
                *(undefined1 *)((int)param_1 + iVar6 + 0x100) = 0;
                param_1[0x1e4] = param_1[0x1e4] + -1;
                SetSuitUpdate((CBasePlayer *)param_1,(byte_conflict *)s__HEV_HEAL4_10095e74,0,0);
              }
            }
          }
          else if ((iVar6 == 2) && (*(byte *)((int)param_1 + 0x102) < 5)) goto LAB_1002bbb8;
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

/* 1002bc50  CBasePlayer::UpdateGeigerCounter  (165 bytes)
 * undefined UpdateGeigerCounter(int param_1)
 * called by: CBasePlayer::CheckSuitUpdate
 */
void __fastcall CBasePlayer::UpdateGeigerCounter(int param_1)

{
  uint iValue;
  int iVar1;
  longlong lVar2;
  
  if (*(float *)(param_1 + 0x8e4) <= gpGlobals->time) {
    *(float *)(param_1 + 0x8e4) = gpGlobals->time + 0.25;
    lVar2 = __ftol();
    iValue = (uint)(byte)lVar2;
    if (iValue != *(uint *)(param_1 + 0x8e8)) {
      *(uint *)(param_1 + 0x8e8) = iValue;
      (*g_engfuncs.pfnMessageBegin)
                (1,DAT_100cbc30,(float *)0x0,*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
      (*g_engfuncs.pfnWriteByte)(iValue);
      (*g_engfuncs.pfnMessageEnd)();
    }
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,3);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x8e0) = 0x447a0000;
    }
  }
  return;
}

/* 1002bd00  CBasePlayer::CheckSuitUpdate  (287 bytes)
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
  
  iVar6 = *(int *)(param_1 + 0x7d4);
  if (*(int *)(*(int *)(param_1 + 4) + 0x168) < 0) {
    UpdateGeigerCounter(param_1);
    iVar3 = (**(code **)(*DAT_1009f494 + 0x18))();
    if (((iVar3 == 0) && (*(float *)(param_1 + 0x7c0) <= gpGlobals->time)) &&
       (0.0 < *(float *)(param_1 + 0x7c0))) {
      iVar3 = 0;
      while (iVar2 = *(int *)(param_1 + 0x7c4 + iVar6 * 4), iVar2 == 0) {
        iVar6 = iVar6 + 1;
        if (iVar6 == 4) {
          iVar6 = 0;
        }
        iVar3 = iVar3 + 1;
        if (3 < iVar3) {
          *(undefined4 *)(param_1 + 0x7c0) = 0;
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x7c4 + iVar6 * 4) = 0;
      if (iVar2 < 1) {
        EMIT_GROUPID_SUIT(*(void **)(*(int *)(param_1 + 4) + 0x208),-iVar2);
      }
      else {
        iVar6 = 0;
        do {
          cVar1 = (&DAT_10095e80)[iVar6];
          acStack_14[iVar6] = cVar1;
          iVar6 = iVar6 + 1;
        } while (cVar1 != '\0');
        uVar4 = 0xffffffff;
        pcVar7 = &DAT_100a4938 + iVar2 * 0x10;
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
      }
      *(float *)(param_1 + 0x7c0) = gpGlobals->time + 3.5;
      return;
    }
  }
  return;
}

/* 1002be20  CBasePlayer::SetSuitUpdate  (375 bytes)
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
  if ((this->pev->weapons < 0) && (iVar1 = (**(code **)(*DAT_1009f494 + 0x18))(), iVar1 == 0)) {
    if (param_1 == (byte_conflict *)0x0) {
      *(undefined4 *)&this->field_0x7c4 = 0;
      *(undefined4 *)&this->field_0x7c8 = 0;
      *(undefined4 *)&this->field_0x7cc = 0;
      *(undefined4 *)&this->field_0x7d0 = 0;
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
    piVar3 = (int *)&this->field_0x7d8;
    do {
      if (iVar1 == *piVar3) {
        if (gpGlobals->time <= *(float *)(&this->field_0x858 + iVar2 * 4)) {
          return;
        }
        *(undefined4 *)(&this->field_0x7d8 + iVar2 * 4) = 0;
        *(undefined4 *)(&this->field_0x858 + iVar2 * 4) = 0;
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
      *(int *)(&this->field_0x7d8 + iVar4 * 4) = iVar1;
      *(float *)(&this->field_0x858 + iVar4 * 4) = (float)param_3 + gpGlobals->time;
    }
    *(int *)(&this->field_0x7c4 + *(int *)&this->field_0x7d4 * 4) = iVar1;
    iVar4 = *(int *)&this->field_0x7d4 + 1;
    *(int *)&this->field_0x7d4 = iVar4;
    if (iVar4 == 4) {
      *(undefined4 *)&this->field_0x7d4 = 0;
    }
    if (*(float *)&this->field_0x7c0 < gpGlobals->time !=
        (*(float *)&this->field_0x7c0 == gpGlobals->time)) {
      if (*(float *)&this->field_0x7c0 == 0.0) {
        *(float *)&this->field_0x7c0 = gpGlobals->time + 0.1;
        return;
      }
      *(float *)&this->field_0x7c0 = gpGlobals->time + 3.5;
    }
  }
  return;
}

/* 1002bfa0  CBasePlayer::UpdatePlayerSound  (395 bytes)
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
  
  iVar4 = FUN_100375d0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
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
    if (iVar4 < *(int *)(param_1 + 0x754)) {
      *(int *)(param_1 + 0x750) = *(int *)(param_1 + 0x754);
      puVar5[3] = puVar5[3] | 1;
    }
    else {
      *(int *)(param_1 + 0x750) = iVar4;
    }
    lVar7 = __ftol();
    iVar4 = *(int *)(param_1 + 0x750);
    *(int *)(param_1 + 0x754) = (int)lVar7;
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
    if (*(int *)(param_1 + 0x928) != 0) {
      iVar6 = 0;
    }
    if (*(float *)(param_1 + 0x760) < pgVar3->time) {
      *(undefined4 *)(param_1 + 0x758) = 0;
    }
    iVar4 = *(int *)(param_1 + 4);
    *puVar5 = *(undefined4 *)(iVar4 + 8);
    puVar5[1] = *(undefined4 *)(iVar4 + 0xc);
    puVar5[2] = *(undefined4 *)(iVar4 + 0x10);
    uVar2 = *(uint *)(param_1 + 0x758);
    puVar5[4] = iVar6;
    puVar5[3] = puVar5[3] | uVar2 | 4;
    lVar7 = __ftol();
    *(int *)(param_1 + 0x75c) = (int)lVar7;
    if ((int)lVar7 < 0) {
      *(undefined4 *)(param_1 + 0x75c) = 0;
    }
    return;
  }
  (*g_engfuncs.pfnAlertMessage)(at_console,s_Client_lost_reserved_sound__10095e84);
  return;
}

/* 1002c1a0  CBasePlayer::Precache  (149 bytes)
 * undefined Precache()
 */
void __fastcall CBasePlayer::Precache(int param_1)

{
  int iVar1;
  char *szFmt;
  
  if ((DAT_1009f74c != 0) && (DAT_1009f750 == 0)) {
    iVar1 = CGraph::FSetGraphPointers();
    if (iVar1 == 0) {
      szFmt = s___Graph_pointers_were_not_set__10095ebc;
    }
    else {
      szFmt = s___Graph_Pointers_Set__10095ea4;
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,szFmt);
  }
  *(undefined4 *)(param_1 + 0x8e0) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x8e8) = 1000;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x908) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x93c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x914) = 0xc0;
  LinkUserMessages();
  *(undefined4 *)(param_1 + 0x934) = 5;
  if (DAT_10095638 != 0) {
    *(undefined4 *)(param_1 + 0x90c) = 1;
  }
  return;
}

/* 1002c240  CBasePlayer::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CBasePlayer::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_PLAYER_10095edc,(int)param_1,0x10095640,0x26);
  return;
}

/* 1002c280  CBasePlayer::Restore  (528 bytes)
 * undefined Restore()
 */
undefined4 __thiscall CBasePlayer::Restore(CBaseToggle *param_1,CRestore *param_2)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  edict_t *pClient;
  char *value;
  
  iVar4 = CBaseToggle::Restore(param_1,param_2);
  if (iVar4 == 0) {
    return 0;
  }
  uVar5 = CRestore::ReadFields
                    (param_2,(byte_conflict *)s_PLAYER_10095edc,(int)param_1,0x10095640,0x26);
  if (*(int *)((int)gpGlobals->pSaveData + 0x52c) == 0) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,s_No_Landmark__s_10095ee8,(int)gpGlobals->pSaveData + 0x530);
    iVar4 = FUN_10042f50((int *)param_1);
    if (iVar4 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar4 + 0x80;
    }
    uVar1 = *(undefined4 *)(iVar6 + 0xc);
    fVar2 = *(float *)(iVar6 + 0x10);
    iVar3 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar6 + 8);
    *(undefined4 *)(iVar3 + 0xc) = uVar1;
    *(float *)(iVar3 + 0x10) = fVar2 + 1.0;
    if (iVar4 != 0) {
      iVar4 = iVar4 + 0x80;
    }
    iVar6 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar6 + 0x50) = *(undefined4 *)(iVar4 + 0x50);
    *(undefined4 *)(iVar6 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)(iVar6 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x7c) = 0;
  iVar4 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(iVar4 + 0x74);
  *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(iVar4 + 0x78);
  *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(iVar4 + 0x7c);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xa0) = 1;
  *(undefined4 *)(param_1 + 0x130) = 0xf7;
  DAT_1009f4a0 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xb4);
  FUN_10067970();
  (*g_engfuncs.pfnSetPhysicsKeyValue)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),&DAT_10095ee4,&DAT_10091ce0);
  if (*(int *)(param_1 + 0x92c) == 0) {
    value = &DAT_10094014;
    pClient = *(edict_t **)(*(int *)(param_1 + 4) + 0x208);
  }
  else {
    value = &DAT_10091ce0;
    pClient = *(edict_t **)(*(int *)(param_1 + 4) + 0x208);
  }
  (*g_engfuncs.pfnSetPhysicsKeyValue)(pClient,&DAT_10094510,value);
  fVar7 = FUN_10066590();
  *(float *)(param_1 + 0x118) = (float)fVar7;
  return uVar5;
}

/* 1002c6e0  CBasePlayer::TeamID  (19 bytes)
 * undefined TeamID()
 */
undefined1 * __fastcall CBasePlayer::TeamID(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_1009f428;
  if (*(int *)(param_1 + 4) != 0) {
    puVar1 = (undefined1 *)(param_1 + 0xaa0);
  }
  return puVar1;
}

/* 1002ca50  CBasePlayer::GiveNamedItem  (147 bytes)
 * undefined GiveNamedItem(int param_1)
 * called by: FUN_10022d10, FUN_1004f350, pfnClientCommand
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
  (*g_engfuncs.pfnAlertMessage)(at_console,s_NULL_Ent_in_GiveNamedItem__10095ef8);
  return;
}

/* 1002cd60  CBasePlayer::ImpulseCommands  (493 bytes)
 * undefined ImpulseCommands()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CBasePlayer::ImpulseCommands(CBasePlayer *param_1)

{
  int iVar1;
  void *this;
  uint iValue;
  bool bVar2;
  float fStack_28;
  
  PlayerUse((int)param_1);
  iVar1 = param_1->pev->impulse;
  switch(iVar1) {
  case 99:
    bVar2 = DAT_100cbbe0 == 0;
    if (bVar2) {
      DAT_100cbbe0 = (*g_engfuncs.pfnRegUserMsg)(&DAT_10095f14,1);
    }
    iValue = (uint)bVar2;
    (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbbe0,(float *)0x0,param_1->pev->pContainingEntity);
    (*g_engfuncs.pfnWriteByte)(iValue);
    (*g_engfuncs.pfnMessageEnd)();
    if (iValue == 0) {
      DAT_100cbbe0 = iValue;
      param_1->pev->impulse = 0;
      return;
    }
    break;
  case 100:
    break;
  default:
    CheatImpulseCommands(param_1,iVar1);
    break;
  case 0xc9:
    if (*(float *)&param_1->field_0xa9c <= gpGlobals->time) {
      FUN_10066df0();
      FUN_10067850();
      if (fStack_28 != 1.0) {
        *(float *)&param_1->field_0xa9c = _DAT_10093b08 + gpGlobals->time;
        this = (void *)FUN_1002ed80(0);
        FUN_1002c700(this,(int)param_1->pev);
        param_1->pev->impulse = 0;
        return;
      }
    }
    break;
  case 0xcc:
    FUN_10054fa0((int *)param_1);
    param_1->pev->impulse = 0;
    return;
  }
  param_1->pev->impulse = 0;
  return;
}

/* 1002cfd0  CBasePlayer::CheatImpulseCommands  (1181 bytes)
 * undefined CheatImpulseCommands(undefined4 param_1)
 * called by: CBasePlayer::ImpulseCommands
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CBasePlayer::CheatImpulseCommands(CBasePlayer *this,undefined4 param_1)

{
  int iVar1;
  entvars_t *peVar2;
  int *piVar3;
  edict_t *pTextureEntity;
  char *pcVar4;
  undefined4 uVar5;
  void *this_00;
  int iVar6;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  edict_t *peStack_3c;
  float fStack_28;
  
  if (_DAT_102e0100 != 0.0) {
    switch(param_1) {
    case 0x66:
      FUN_100105b0((int)this->pev,1,1);
      return;
    case 0x67:
      piVar3 = (int *)FUN_1002caf0();
      if ((piVar3 != (int *)0x0) &&
         (piVar3 = (int *)(**(code **)(*piVar3 + 0x50))(), piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 0x11c))();
        return;
      }
      break;
    case 0x68:
      CGlobalState::DumpGlobals((int *)&DAT_102e00f4);
      return;
    case 0x69:
      if (*(int *)&this->field_0x928 != 0) {
        (*g_engfuncs.pfnAlertMessage)(at_console,s_Player_is_audible_10095fdc);
        *(undefined4 *)&this->field_0x928 = 0;
        return;
      }
      (*g_engfuncs.pfnAlertMessage)(at_console,s_Player_is_silent_10095fc8);
      *(undefined4 *)&this->field_0x928 = 1;
      return;
    case 0x6a:
      iVar6 = FUN_1002caf0();
      if (iVar6 != 0) {
        (*g_engfuncs.pfnAlertMessage)
                  (at_console,s_Classname___s_10095fb8,
                   gpGlobals->pStringBase + **(int **)(iVar6 + 4));
        iVar1 = *(int *)(*(int *)(iVar6 + 4) + 0x1cc);
        if (iVar1 == 0) {
          (*g_engfuncs.pfnAlertMessage)(at_console,s___TargetName__No_Targetname_10095f84);
        }
        else {
          (*g_engfuncs.pfnAlertMessage)
                    (at_console,s___Targetname___s_10095fa4,gpGlobals->pStringBase + iVar1);
        }
        (*g_engfuncs.pfnAlertMessage)
                  (at_console,s_Model___s_10095f78,
                   gpGlobals->pStringBase + *(int *)(*(int *)(iVar6 + 4) + 0xb8));
        iVar6 = *(int *)(*(int *)(iVar6 + 4) + 4);
        if (iVar6 != 0) {
          (*g_engfuncs.pfnAlertMessage)
                    (at_console,s_Globalname___s_10095f68,gpGlobals->pStringBase + iVar6);
          return;
        }
      }
      break;
    case 0x6b:
      pTextureEntity = (*g_engfuncs.pfnPEntityOfEntIndex)(0);
      peVar2 = this->pev;
      fStack_88 = peVar2->view_ofs[2] + peVar2->origin[2];
      fStack_8c = peVar2->view_ofs[1] + peVar2->origin[1];
      fStack_90 = peVar2->view_ofs[0] + peVar2->origin[0];
      fStack_9c = gpGlobals->v_forward[0] * 1024.0 + fStack_90;
      fStack_98 = gpGlobals->v_forward[1] * 1024.0 + fStack_8c;
      fStack_94 = gpGlobals->v_forward[2] * 1024.0 + fStack_88;
      FUN_10067850();
      if (peStack_3c != (edict_t *)0x0) {
        pTextureEntity = peStack_3c;
      }
      pcVar4 = (*g_engfuncs.pfnTraceTexture)(pTextureEntity,&fStack_90,&fStack_9c);
      if (pcVar4 != (char *)0x0) {
        (*g_engfuncs.pfnAlertMessage)(at_console,s_Texture___s_10095f58,pcVar4);
        return;
      }
      break;
    case 0xc3:
      CBaseEntity::Create(0x10095f48,this->pev->origin,this->pev->angles,0);
      return;
    case 0xc4:
      CBaseEntity::Create(0x10095f34,this->pev->origin,this->pev->angles,0);
      return;
    case 0xc5:
      CBaseEntity::Create(0x10095f20,this->pev->origin,this->pev->angles,0);
      return;
    case 199:
      uVar5 = FUN_10023260();
      (*g_engfuncs.pfnAlertMessage)(at_console,&DAT_10095f1c,uVar5);
      FUN_10023260();
      FUN_10023250();
      return;
    case 0xca:
      FUN_10066df0();
      peVar2 = this->pev;
      fStack_98 = gpGlobals->v_forward[2] * 128.0;
      fStack_88 = peVar2->origin[0] + peVar2->view_ofs[0] + gpGlobals->v_forward[0] * 128.0;
      fStack_84 = peVar2->view_ofs[1] + peVar2->origin[1] + gpGlobals->v_forward[1] * 128.0;
      fStack_80 = peVar2->view_ofs[2] + peVar2->origin[2] + fStack_98;
      fStack_74 = peVar2->view_ofs[2] + peVar2->origin[2];
      fStack_78 = peVar2->view_ofs[1] + peVar2->origin[1];
      fStack_7c = peVar2->view_ofs[0] + peVar2->origin[0];
      FUN_10067850();
      if (fStack_28 != 1.0) {
        this_00 = (void *)FUN_1002ede0(0);
        FUN_1002c900(this_00,(int)this->pev);
        return;
      }
      break;
    case 0xcb:
      iVar6 = FUN_1002caf0();
      if ((iVar6 != 0) && (*(float *)(*(int *)(iVar6 + 4) + 0x16c) != 0.0)) {
        *(code **)(iVar6 + 0x10) = CBaseEntity::SUB_Remove;
      }
    }
  }
  return;
}

/* 1002d510  CBasePlayer::AddPlayerItem  (355 bytes)
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
  
  iVar2 = (**(code **)(*param_2 + 0x138))();
  piVar4 = *(int **)((int)param_1 + iVar2 * 4 + 0x950);
  if (piVar4 != (int *)0x0) {
    do {
      pbVar3 = (byte *)(gpGlobals->pStringBase + *(int *)piVar4[1]);
      pbVar5 = (byte *)(gpGlobals->pStringBase + *(int *)param_2[1]);
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_1002d580:
          iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_1002d585;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_1002d580;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_1002d585:
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*param_2 + 0xf8))(piVar4);
        if (iVar2 != 0) {
          (**(code **)(*DAT_1009f494 + 0x78))(param_1,param_2);
          FUN_1006abf0(param_2);
          (**(code **)(*piVar4 + 0x110))();
          if (*(int **)((int)param_1 + 0x968) != (int *)0x0) {
            (**(code **)(**(int **)((int)param_1 + 0x968) + 0x110))();
          }
          (**(code **)(*param_2 + 0x120))();
          return 0;
        }
        goto LAB_1002d656;
      }
      piVar4 = (int *)piVar4[0x1d];
    } while (piVar4 != (int *)0x0);
  }
  iVar2 = (**(code **)(*param_2 + 0xf4))(param_1);
  if (iVar2 != 0) {
    (**(code **)(*DAT_1009f494 + 0x78))(param_1,param_2);
    FUN_1006abf0(param_2);
    iVar2 = (**(code **)(*param_2 + 0x138))();
    param_2[0x1d] = *(int *)((int)param_1 + iVar2 * 4 + 0x950);
    iVar2 = (**(code **)(*param_2 + 0x138))();
    *(int **)((int)param_1 + iVar2 * 4 + 0x950) = param_2;
    iVar2 = (**(code **)(*DAT_1009f494 + 0x10))(param_1,param_2);
    if (iVar2 != 0) {
      FUN_1002e7b0(param_1,param_2);
    }
    return 1;
  }
LAB_1002d656:
  if (DAT_1009fe78 != 0) {
    (**(code **)(*param_2 + 0x120))();
  }
  return 0;
}

/* 1002d680  CBasePlayer::RemovePlayerItem  (181 bytes)
 * undefined RemovePlayerItem()
 */
undefined4 __thiscall CBasePlayer::RemovePlayerItem(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0x968) == param_2) {
    ResetAutoaim(param_1);
    (**(code **)(*param_2 + 0x10c))(0);
    *(undefined4 *)(param_2[1] + 0x104) = 0;
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 0x968) = 0;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xbc) = 0;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xc0) = 0;
  }
  else if (*(int **)(param_1 + 0x970) == param_2) {
    *(undefined4 *)(param_1 + 0x970) = 0;
  }
  iVar3 = (**(code **)(*param_2 + 0x138))();
  piVar1 = *(int **)(param_1 + 0x950 + iVar3 * 4);
  if (piVar1 == param_2) {
    iVar3 = (**(code **)(*param_2 + 0x138))();
    *(int *)(param_1 + 0x950 + iVar3 * 4) = param_2[0x1d];
    return 1;
  }
  do {
    piVar2 = piVar1;
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)piVar2[0x1d];
  } while ((int *)piVar2[0x1d] != param_2);
  piVar2[0x1d] = param_2[0x1d];
  return 1;
}

/* 1002d740  CBasePlayer::GiveAmmo  (196 bytes)
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
    iVar1 = (**(code **)(*DAT_1009f494 + 0xa0))(param_1,param_3,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_1002d8f0(this,param_3);
      if ((-1 < iVar1) && (iVar1 < 0x20)) {
        iVar2 = *(int *)((int)param_1 + iVar1 * 4 + 0x978);
        param_4 = param_4 - iVar2;
        if (param_4 <= unaff_EBP) {
          unaff_EBP = param_4;
        }
        if (unaff_EBP < 1) {
          return iVar1;
        }
        *(int *)((int)param_1 + iVar1 * 4 + 0x978) = iVar2 + unaff_EBP;
        if (DAT_100cbc0c != 0) {
          (*g_engfuncs.pfnMessageBegin)
                    (1,DAT_100cbc0c,(float *)0x0,*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208));
          iVar2 = FUN_1002d8f0(this_00,param_3);
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

/* 1002d930  CBasePlayer::FBecomeProne  (20 bytes)
 * undefined FBecomeProne()
 */
undefined4 __fastcall CBasePlayer::FBecomeProne(int param_1)

{
  *(uint *)(param_1 + 0x7a4) = *(uint *)(param_1 + 0x7a4) | 4;
  return 1;
}

/* 1002d990  CBasePlayer::Illumination  (44 bytes)
 * int Illumination(int param_1)
 */
int __fastcall CBasePlayer::Illumination(int param_1)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnGetEntityIllum)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  iVar1 = iVar1 + *(int *)(param_1 + 0x75c);
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  return iVar1;
}

/* 1002e2d0  CBasePlayer::ResetAutoaim  (136 bytes)
 * undefined ResetAutoaim(int param_1)
 * called by: CBasePlayer::RemovePlayerItem, FUN_1002ad70, FUN_1002c530, FUN_1002c640, FUN_1002e7b0
 */
void __fastcall CBasePlayer::ResetAutoaim(int param_1)

{
  if ((*(float *)(param_1 + 0xa78) != 0.0) || (*(float *)(param_1 + 0xa7c) != 0.0)) {
    *(undefined4 *)(param_1 + 0xa78) = 0;
    *(undefined4 *)(param_1 + 0xa7c) = 0;
    *(undefined4 *)(param_1 + 0xa80) = 0;
    (*g_engfuncs.pfnCrosshairAngle)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208),0.0,0.0);
  }
  *(undefined4 *)(param_1 + 0xa84) = 0;
  return;
}

/* 1003fd40  CBasePlayer::ShootBulletsPlayer  (2362 bytes)
 * undefined ShootBulletsPlayer(float * param_1, byte.conflict param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12, uint param_13, int param_14, int param_15)
 * called by: CBasePlayer::ShootBulletsPlayer, FUN_1004b050, FUN_1004b400, FUN_1004b8c0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
CBasePlayer::ShootBulletsPlayer
          (CBasePlayer *this,float *param_1,byte_conflict param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9,float param_10,
          float param_11,float param_12,uint param_13,int param_14,int param_15)

{
  edict_t *peVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar5;
  float10 extraout_ST0_01;
  longlong lVar6;
  undefined3 in_stack_00000009;
  float in_stack_ffffff74;
  float fVar7;
  undefined *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_stack_ffffff8c;
  CBasePlayer *in_stack_ffffff90;
  entvars_t *in_stack_ffffff94;
  float fVar12;
  uint uVar13;
  float fStack_c;
  float fStack_8;
  float local_4;
  
  if ((DAT_100ac8a8 & 1) == 0) {
    DAT_100ac8a8 = DAT_100ac8a8 | 1;
    FUN_1006ee3b(FUN_100406d0);
  }
  if ((DAT_100ac8a8 & 2) == 0) {
    DAT_100ac8a8 = DAT_100ac8a8 | 2;
    FUN_1006ee3b(FUN_100406c0);
  }
  if ((DAT_100ac8a8 & 4) == 0) {
    DAT_100ac8a8 = DAT_100ac8a8 | 4;
    FUN_1006ee3b(FUN_100406b0);
  }
  if ((DAT_100ac8a8 & 8) == 0) {
    DAT_100ac8a8 = DAT_100ac8a8 | 8;
    FUN_1006ee3b(FUN_100406a0);
  }
  if ((DAT_100ac8a8 & 0x10) == 0) {
    DAT_100ac8a8 = DAT_100ac8a8 | 0x10;
    FUN_1006ee3b(FUN_10040690);
  }
  if ((DAT_100ac8a8 & 0x20) == 0) {
    DAT_100ac8a8 = DAT_100ac8a8 | 0x20;
    FUN_1006ee3b(FUN_10040680);
  }
  if ((DAT_100aca80 != 0) || (DAT_100ac830 = 0, this->pev->fuser1 != 0.0)) {
    DAT_100ac830 = 1;
  }
  _DAT_100ac84c = gpGlobals->v_right[0];
  _DAT_100ac850 = gpGlobals->v_right[1];
  _DAT_100ac854 = gpGlobals->v_right[2];
  _DAT_100ac834 = gpGlobals->v_up[0];
  _DAT_100ac838 = gpGlobals->v_up[1];
  _DAT_100ac83c = gpGlobals->v_up[2];
  DAT_100ac820 = FUN_100491c0(param_14);
  if (DAT_100ac830 == 0) {
    FUN_1006a2f0();
  }
  uVar13 = param_13;
  DAT_102dfa50 = 0x1002;
  DAT_100ac864 = 0.0;
  _DAT_100ac85c = 1.0;
  if (param_13 == 2) {
    local_4 = param_8 * 4096.0;
    _DAT_100ac8ac = param_6 * 4096.0 + param_3;
    _DAT_100ac8b0 = param_4 + param_7 * 4096.0;
    _DAT_100ac8b4 = param_5 + local_4;
    FUN_10067850();
    if (_DAT_100ac878 != 1.0) {
      peVar1 = (edict_t *)DAT_100ac898;
      if ((DAT_100ac898 == 0) &&
         (peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar1 == (edict_t *)0x0)) {
        DAT_100ac8a0 = (int *)0x0;
      }
      else {
        DAT_100ac8a0 = peVar1->pvPrivateData;
      }
      _DAT_100ac8a4 =
           SQRT((param_6 - _DAT_100ac884) * (param_6 - _DAT_100ac884) +
                (param_4 - _DAT_100ac87c) * (param_4 - _DAT_100ac87c) +
                (param_5 - _DAT_100ac880) * (param_5 - _DAT_100ac880)) * 0.0033333334;
      lVar6 = __ftol();
      fVar4 = FUN_10049270((int)lVar6);
      DAT_100ac864 = (float)(fVar4 * (float10)(float)param_13);
      iVar3 = *DAT_100ac8a0;
      FUN_1000a540(&stack0xffffff98,&param_7);
      (**(code **)(iVar3 + 0x34))();
    }
    FUN_1006a310(this->pev,this->pev);
    *param_1 = param_9;
    param_1[1] = param_10;
    param_1[2] = param_11;
    return;
  }
  if (param_2 != '\0') {
    param_13 = (uint)param_2;
    iVar3 = param_15 + 4;
    do {
      if ((this->pev->flags & 0x2000U) == 0) {
        fVar4 = FUN_10066640(iVar3 + -3,-0.5,0x3f000000);
        fVar5 = FUN_10066640(iVar3 + -2,-0.5,0x3f000000);
        in_stack_ffffff8c = 0.5;
        _DAT_100ac860 = (float)(fVar5 + (float10)(float)fVar4);
        fVar4 = FUN_10066640(iVar3 + -1,-0.5,0x3f000000);
        _param_2 = (float)fVar4;
        in_stack_ffffff74 = 2.6033605e-29;
        fVar4 = FUN_10066640(iVar3,-0.5,0x3f000000);
        _DAT_100ac858 = (float)(fVar4 + (float10)_param_2);
        _DAT_100ac8b8 =
             (float)((float10)_DAT_100ac860 * (float10)_DAT_100ac860 +
                    (fVar4 + (float10)_param_2) * (float10)_DAT_100ac858);
      }
      else {
        do {
          (*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
          (*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
          _DAT_100ac860 = (float)(extraout_ST0 + (float10)fStack_8);
          (*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
          (*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
          _DAT_100ac858 = (float)(extraout_ST0_00 + (float10)_param_2);
          fVar4 = (float10)_DAT_100ac860 * (float10)_DAT_100ac860 +
                  (extraout_ST0_00 + (float10)_param_2) * (float10)_DAT_100ac858;
          _DAT_100ac8b8 = (float)fVar4;
        } while ((float10)1.0 < fVar4);
      }
      fVar12 = _DAT_100ac858 * param_10;
      fVar10 = _DAT_100ac860 * param_9;
      _DAT_100ac840 = _DAT_100ac84c * fVar10 + param_6 + _DAT_100ac834 * fVar12;
      _DAT_100ac844 = param_7 + fVar10 * _DAT_100ac850 + fVar12 * _DAT_100ac838;
      _DAT_100ac848 = param_8 + fVar10 * _DAT_100ac854 + fVar12 * _DAT_100ac83c;
      fVar12 = (float)(int)DAT_100ac820[5];
      fStack_8 = _DAT_100ac844 * fVar12;
      local_4 = _DAT_100ac848 * fVar12;
      _DAT_100ac8ac = _DAT_100ac840 * fVar12 + param_3;
      _DAT_100ac8b0 = param_4 + fStack_8;
      _DAT_100ac8b4 = param_5 + local_4;
      in_stack_ffffff94 = (entvars_t *)&param_3;
      if (DAT_100ac830 == 0) {
        in_stack_ffffff90 = (CBasePlayer *)0x10040319;
        FUN_10067850();
        if (_DAT_100ac878 != 1.0) {
          peVar1 = (edict_t *)DAT_100ac898;
          if ((DAT_100ac898 == 0) &&
             (peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar1 == (edict_t *)0x0)) {
            DAT_100ac8a0 = (int *)0x0;
          }
          else {
            DAT_100ac8a0 = peVar1->pvPrivateData;
          }
          _DAT_100ac8a4 =
               SQRT((param_4 - _DAT_100ac880) * (param_4 - _DAT_100ac880) +
                    (param_5 - _DAT_100ac884) * (param_5 - _DAT_100ac884) +
                    (param_3 - _DAT_100ac87c) * (param_3 - _DAT_100ac87c)) /
               ((float)(int)DAT_100ac820[8] * 10.0);
          lVar6 = __ftol();
          fVar4 = FUN_10049270((int)lVar6);
          DAT_100ac864 = (float)fVar4;
          DAT_100ac864 = (float)(int)DAT_100ac820[7] * DAT_100ac864 * param_12;
          if ((0.0 < DAT_10093be4) && (_DAT_102e0100 != 0.0)) {
            _DAT_100ac85c = DAT_10093be4;
          }
          (*g_engfuncs.pfnRandomFloat)(0.0,0.05);
          _DAT_100ac85c = (float)(extraout_ST0_01 + (float10)_DAT_100ac85c);
          if (uVar13 == 1) {
            iVar2 = *DAT_100ac8a0;
            FUN_1000a540(&stack0xffffff9c,(undefined4 *)&DAT_100ac840);
            in_stack_ffffff94 = this->pev;
          }
          else {
            iVar2 = *DAT_100ac8a0;
            FUN_1000a540(&stack0xffffff9c,(undefined4 *)&DAT_100ac840);
            in_stack_ffffff94 = this->pev;
          }
          (**(code **)(iVar2 + 0x34))();
          DAT_100ac864 = DAT_100ac864 * (float)DAT_100ac820[6];
          in_stack_ffffff90 = (CBasePlayer *)0x100404c4;
          iVar2 = (**(code **)(*DAT_100ac8a0 + 0xa8))();
          if (iVar2 != 0) {
            DAT_100ac864 = DAT_100ac864 * 0.5;
          }
        }
      }
      else {
        in_stack_ffffff8c = 2.6034697e-29;
        in_stack_ffffff90 = this;
        CBulletManager::FireBullet
                  ((CBulletManager *)&DAT_100add74,(int)this,(int *)in_stack_ffffff94,
                   (int *)&DAT_100ac840,(int *)&param_12,&param_14,uVar13);
      }
      iVar3 = iVar3 + 1;
      param_13 = param_13 - 1;
    } while (param_13 != 0);
  }
  if (((DAT_100ac830 == 0) && (FUN_1006a310(this->pev,this->pev), uVar13 != 1)) &&
     (5.0 < DAT_100ac864)) {
    fVar12 = DAT_100ac864;
    if (48.0 <= DAT_100ac864) {
      fVar12 = 48.0;
    }
    fStack_8 = _DAT_100ac844 * fVar12;
    local_4 = _DAT_100ac848 * fVar12;
    _DAT_100ac824 = _DAT_100ac840 * fVar12 + _DAT_100ac87c;
    _DAT_100ac828 = fStack_8 + _DAT_100ac880;
    _DAT_100ac82c = local_4 + _DAT_100ac884;
    iVar3 = FUN_10067c90();
    if (iVar3 != -2) {
      fVar12 = _DAT_100ac85c * DAT_100ac864;
      uVar13 = 2;
      fVar10 = _DAT_100ac858 * param_10;
      fVar11 = 0.0;
      fVar9 = _DAT_100ac860 * param_9;
      iVar3 = param_14;
      iVar2 = param_15;
      FUN_1000c5f0(&stack0xffffff8c,fVar9,fVar10,0);
      puVar8 = &DAT_100ac840;
      fVar7 = 2.6037155e-29;
      FUN_1000a540(&stack0xffffff80,(undefined4 *)&DAT_100ac840);
      FUN_1000a540(&stack0xffffff74,(undefined4 *)&DAT_100ac824);
      ShootBulletsPlayer(this,&fStack_c,'\x01',in_stack_ffffff74,fVar7,(float)puVar8,fVar9,fVar10,
                         fVar11,in_stack_ffffff8c,(float)in_stack_ffffff90,(float)in_stack_ffffff94,
                         fVar12,uVar13,iVar3,iVar2);
    }
  }
  fVar12 = _DAT_100ac858 * param_10;
  *param_1 = _DAT_100ac860 * param_9;
  param_1[2] = 0.0;
  param_1[1] = fVar12;
  return;
}

/* 10052140  CBasePlayer::PlayerDeathThink  (585 bytes)
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
  int iVar5;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x52140  78  ?PlayerDeathThink@CBasePlayer@@QAEXXZ */
  peVar2 = this->pev;
  if ((peVar2->flags & 0x200U) != 0) {
    pvVar1 = peVar2->velocity;
    fVar3 = SQRT(peVar2->velocity[2] * peVar2->velocity[2] +
                 peVar2->velocity[1] * peVar2->velocity[1] +
                 peVar2->velocity[0] * peVar2->velocity[0]) - 20.0;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      fVar4 = SQRT(peVar2->velocity[2] * peVar2->velocity[2] +
                   peVar2->velocity[1] * peVar2->velocity[1] + *pvVar1 * *pvVar1);
      if (fVar4 == 0.0) {
        local_10 = 1.0;
        local_18 = 0.0;
        local_14 = 0.0;
      }
      else {
        fVar4 = 1.0 / fVar4;
        uStack_30 = 0x10052220;
        FUN_1000c5f0(&local_18,fVar4 * *pvVar1,fVar4 * peVar2->velocity[1],
                     fVar4 * peVar2->velocity[2]);
      }
      local_c = local_18 * fVar3;
      peVar2 = this->pev;
      local_8 = local_14 * fVar3;
      peVar2->velocity[0] = local_c;
      local_4 = local_10 * fVar3;
      peVar2->velocity[1] = local_8;
      peVar2->velocity[2] = local_4;
    }
    else {
      *pvVar1 = DAT_1009f4a8;
      peVar2->velocity[1] = DAT_1009f4ac;
      peVar2->velocity[2] = DAT_1009f4b0;
    }
  }
  iVar5 = FUN_1002c6b0((int)this);
  if (iVar5 != 0) {
    FUN_1002ad70(this,1);
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
  if (((gpGlobals->time < *(float *)&this->field_0x6e0 ==
        (gpGlobals->time == *(float *)&this->field_0x6e0)) || ((peVar2->button & 0xffff7fffU) != 0))
     && (peVar2->iuser1 == 0)) {
    FUN_100406f0((int)this,10.0);
    FUN_1000a540(auStack_38,this->pev->origin);
    StartObserver(this);
  }
  return;
}

/* 10052390  CBasePlayer::Killed  (1448 bytes)
 * undefined Killed(undefined4 param_1)
 * called by: FUN_1005de40
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CBasePlayer::Killed(CBasePlayer *this,undefined4 param_1)

{
  undefined1 *this_00;
  float fVar1;
  float fVar2;
  entvars_t *peVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  edict_t *peVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined3 extraout_var;
  int *piVar10;
  uint uVar11;
  float10 fVar12;
  longlong lVar13;
  undefined4 uStack00000008;
  undefined4 uStack00000010;
  int in_stack_00000040;
  char cVar14;
  float fVar15;
  float fStack_1c;
  
  *(float *)&this->field_0x6e0 = gpGlobals->time + 3.0;
  FUN_10042c90((int)this);
  *(undefined4 *)&this->field_0x4bc = 0xffffffff;
  FUN_10055950((int)this);
  this->field_0x732 = this->field_0x732 + '\x01';
  if (DAT_1009fe74 != 0) {
    peVar7 = *(edict_t **)(DAT_1009fe74 + 0x208);
    if ((peVar7 == (edict_t *)0x0) &&
       (peVar7 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar7 == (edict_t *)0x0)) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = peVar7->pvPrivateData;
    }
    iVar8 = (**(code **)(*piVar10 + 0xa8))();
    if (iVar8 == 0) {
      this->pev->iuser2 = 0;
    }
    else {
      iVar8 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(DAT_1009fe74 + 0x208));
      this->pev->iuser2 = iVar8;
      iVar8 = UTIL_PlayerByIndex(this->pev->iuser2);
      *(int *)&this->field_0x6d4 = iVar8;
    }
  }
  if ((DAT_100ac8c0 == '\0') || (DAT_100ac8c0 == '\x01')) {
    cVar14 = '\0';
    lVar13 = __ftol();
    FUN_10042d50((int)this,(int)lVar13,cVar14);
    if (0.0 < this->pev->armorvalue) {
      piVar10 = CTSPowerUp::CreatePowerUp(0x80,-1);
      peVar3 = this->pev;
      iVar8 = piVar10[1];
      *(vec_t *)(iVar8 + 8) = peVar3->origin[0];
      *(vec_t *)(iVar8 + 0xc) = peVar3->origin[1];
      *(vec_t *)(iVar8 + 0x10) = peVar3->origin[2];
      piVar10[0x1f] = (int)this->pev->armorvalue;
    }
  }
  else {
    cVar14 = '\0';
    lVar13 = __ftol();
    FUN_10042d50((int)this,(int)lVar13,cVar14);
  }
  if (*(float *)&this->field_0x6e8 < 0.0) {
    this->field_0x6c4 = 1;
  }
  else {
    this->field_0x6c4 = 0xb;
  }
  if ((*(int *)&this->field_0xf8 == 1) && (DAT_100ac8d4 == '\0')) {
    this->pev->fuser1 = 0.33;
    *(undefined4 *)&this->field_0x158 = 0x3ea8f5c3;
  }
  this->pev->iuser4 = 0;
  this->pev->iuser4 = this->pev->iuser4 | 2;
  if (*(int **)&this->field_0x968 != (int *)0x0) {
    (**(code **)(**(int **)&this->field_0x968 + 0x10c))(0);
  }
  FUN_10055ef0((int)this);
  uVar11 = 1;
  do {
    FUN_10056080(this,uVar11);
    puVar9 = get_weapon_info(uVar11);
    if (*(short *)((int)puVar9 + 0xc6) != -1) {
      FUN_10056080(this,uVar11);
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40);
  (**(code **)(*DAT_1009f494 + 0x6c))(this,param_1,DAT_1009fe74);
  this_00 = &this->field_0x91c;
  bVar6 = FUN_1000c210((uint *)this_00);
  if (CONCAT31(extraout_var,bVar6) != 0) {
    piVar10 = (int *)FUN_1000c220((uint *)this_00);
    (**(code **)(*piVar10 + 0xc0))(this,this,0,0);
    EHANDLE::operator=((EHANDLE *)this_00,0);
  }
  iVar8 = FUN_100375d0(this->pev->pContainingEntity);
  puVar9 = (undefined4 *)CSoundEnt::SoundPointerForIndex(iVar8);
  if (puVar9 != (undefined4 *)0x0) {
    FUN_100371e0(puVar9);
  }
  CTSAnimation::Animate((CTSAnimation *)&this->field_0x274,(int *)this,7);
  *(undefined4 *)&this->field_0xa8c = 0;
  this->pev->modelindex = DAT_1009f4a0;
  this->pev->deadflag = 1;
  this->pev->movetype = 6;
  this->pev->flags = this->pev->flags & 0xfffffdff;
  fVar12 = FUN_10011cb0((int)this,(float)*(int *)&this->field_0x8d8);
  if ((float10)500.0 <= fVar12) {
    fVar15 = 500.0;
  }
  else {
    fVar12 = FUN_10011cb0((int)this,(float)*(int *)&this->field_0x8d8);
    fVar15 = (float)fVar12;
  }
  fStack_1c = SQRT(_DAT_1009f4c4 * _DAT_1009f4c4 +
                   _DAT_1009f4cc * _DAT_1009f4cc + _DAT_1009f4c8 * _DAT_1009f4c8);
  if (fStack_1c == 0.0) {
    fVar4 = 0.0;
    fVar5 = 0.0;
    fStack_1c = 1.0;
  }
  else {
    fStack_1c = 1.0 / fStack_1c;
    fVar4 = _DAT_1009f4c4 * fStack_1c;
    fVar5 = _DAT_1009f4c8 * fStack_1c;
    fStack_1c = _DAT_1009f4cc * fStack_1c;
  }
  fVar15 = -fVar15;
  peVar3 = this->pev;
  fVar1 = peVar3->velocity[1];
  fVar2 = peVar3->velocity[2];
  peVar3->velocity[0] = fVar4 * fVar15 + peVar3->velocity[0];
  peVar3->velocity[1] = fVar5 * fVar15 + fVar1;
  peVar3->velocity[2] = fStack_1c * fVar15 + fVar2;
  peVar3 = this->pev;
  if (((80.0 < SQRT(peVar3->velocity[1] * peVar3->velocity[1] +
                    peVar3->velocity[0] * peVar3->velocity[0])) ||
      (0x32 < *(int *)&this->field_0x8d8)) && (*(int *)&this->field_0x418 == 0)) {
    peVar3->velocity[2] = 180.0;
    this->pev->gravity = 0.5;
  }
  SetSuitUpdate(this,(byte_conflict *)0x0,0,0);
  *(undefined4 *)&this->field_0x938 = 0;
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc48,(float *)0x0,this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x938);
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc60,(float *)0x0,(edict_t *)0x0);
  iVar8 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(iVar8);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  *(undefined4 *)&this->field_0x94c = 0;
  *(undefined4 *)&this->field_0x948 = 0;
  this->pev->fov = 0.0;
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc28,(float *)0x0,this->pev->pContainingEntity);
  uStack00000008 = 0x100528b3;
  (*g_engfuncs.pfnWriteByte)(0);
  uStack00000010 = 0x100528bc;
  (*g_engfuncs.pfnMessageEnd)();
  peVar3 = this->pev;
  if (((-40.0 <= peVar3->health) || (in_stack_00000040 == 1)) && (in_stack_00000040 != 2)) {
    peVar3->angles[0] = 0.0;
    this->pev->angles[2] = 0.0;
    *(code **)&this->field_0x10 = PlayerDeathThink;
    this->pev->nextthink = gpGlobals->time + 0.1;
    return;
  }
  peVar3->solid = 0;
  uStack00000010 = 0x100528f0;
  (*this->vtable[0x41])();
  this->pev->effects = this->pev->effects | 0x80;
  return;
}

/* 10052940  CBasePlayer::Spawn  (937 bytes)
 * undefined Spawn(int * param_1)
 * called by: FUN_1005def0
 */
void __fastcall CBasePlayer::Spawn(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  
  TSInit(param_1);
  *(int *)param_1[1] = (int)s_player_100915d0 - (int)gpGlobals->pStringBase;
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
  param_1[0x242] = -1;
  param_1[0x3f] = 0;
  param_1[0x1e9] = 0;
  param_1[0x24b] = 0;
  (*g_engfuncs.pfnSetPhysicsKeyValue)(*(edict_t **)(param_1[1] + 0x208),&DAT_10094510,&DAT_10094014)
  ;
  (*g_engfuncs.pfnSetPhysicsKeyValue)(*(edict_t **)(param_1[1] + 0x208),&DAT_10095ee4,&DAT_10091ce0)
  ;
  param_1[0x252] = 0;
  *(undefined4 *)(param_1[1] + 0x214) = 0;
  param_1[0x253] = -1;
  param_1[0x2a7] = 0;
  fVar1 = gpGlobals->time;
  param_1[0x1eb] = 0;
  param_1[0x23b] = 0;
  param_1[0x4b] = 0x3f000000;
  param_1[0x4c] = 0xf7;
  param_1[0x239] = (int)(fVar1 + 2.0);
  fVar5 = FUN_10066590();
  param_1[0x46] = (int)(float)fVar5;
  (**(code **)(*param_1 + 0x84))();
  param_1[0x1da] = 99;
  param_1[0x1d9] = 0x3f800000;
  param_1[0x1e1] = 0;
  (**(code **)(*DAT_1009f494 + 0xdc))(param_1);
  (**(code **)(*DAT_1009f494 + 0x58))(param_1);
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_player_mdl_10091af4);
  DAT_1009f4a0 = *(undefined4 *)(param_1[1] + 0xb4);
  uVar2 = CBaseAnimating::LookupActivity((CBaseAnimating *)param_1,1);
  *(undefined4 *)(param_1[1] + 0x128) = uVar2;
  if ((*(uint *)(param_1[1] + 0x1a4) & 0x4000) == 0) {
    uStack0000000c = 0x41800000;
    uStack00000010 = 0x41800000;
    uStack00000014 = 0x42100000;
    uStack00000004 = 0xc1800000;
    uStack00000008 = 0xc2100000;
  }
  else {
    uStack00000004 = 0x41800000;
    uStack00000008 = 0x41900000;
    uStack0000000c = 0xc1800000;
    uStack00000010 = 0xc1800000;
    uStack00000014 = 0xc1900000;
  }
  FUN_10067970();
  iVar4 = param_1[1];
  uStack00000004 = 0;
  *(undefined4 *)(iVar4 + 0x174) = 0;
  uStack00000008 = 0x41e00000;
  *(undefined4 *)(iVar4 + 0x178) = 0;
  *(undefined4 *)(iVar4 + 0x17c) = 0x41e00000;
  (**(code **)(*param_1 + 0x10))();
  uStack00000004 = 0x42000000;
  uStack00000008 = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0x42000000;
  param_1[0x4f] = 0;
  if (param_1[0x1d3] == -1) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Couldn_t_alloc_player_sound_slot_10099144);
  }
  param_1[0x24a] = 0;
  param_1[0x25c] = 0;
  param_1[0x243] = 1;
  param_1[0x251] = -1;
  param_1[0x246] = 0;
  param_1[0x25b] = 0;
  param_1[0x24f] = -1;
  piVar3 = param_1 + 0x27e;
  iVar4 = 0x20;
  do {
    piVar3[-0x20] = 0;
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  param_1[0x2a5] = 0;
  param_1[0x2a4] = 0;
  (**(code **)(*DAT_1009f494 + 0x48))(param_1);
  return;
}

/* 10052cf0  CBasePlayer::TakeDamage  (1556 bytes)
 * undefined TakeDamage()
 */
float __thiscall
CBasePlayer::TakeDamage
          (CBasePlayer *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  entvars_t *peVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  edict_t *peVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  float in_stack_0000002c;
  uint in_stack_00000030;
  float fVar12;
  char *pcVar13;
  int iVar14;
  int in_stack_fffffffc;
  
  uVar10 = (uint)param_5;
  bVar4 = true;
  if (((uint)param_5 & 0x40) != 0) {
    (**(code **)(*DAT_1009f494 + 0x18))();
  }
  iVar6 = (*param_1->vtable[0x25])();
  if (iVar6 == 0) {
    return 0.0;
  }
  if (param_4 == 0.0) {
    return 0.0;
  }
  if ((((*(int *)&param_1->field_0xf8 == 6) || (*(int *)&param_1->field_0xf8 == 7)) ||
      (fVar12 = param_1->pev->velocity[1], fVar1 = param_1->pev->velocity[0],
      80.0 <= SQRT(fVar12 * fVar12 + fVar1 * fVar1))) || (param_4 < 80.0 == (param_4 == 80.0))) {
    FUN_1003ede0((int)&param_1->field_0x274);
  }
  else {
    FUN_1003ee00(&param_1->field_0x274,(int)param_1);
  }
  peVar7 = *(edict_t **)((int)param_3 + 0x208);
  if ((peVar7 == (edict_t *)0x0) &&
     (peVar7 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar7 == (edict_t *)0x0)) {
    pvVar8 = (void *)0x0;
  }
  else {
    pvVar8 = peVar7->pvPrivateData;
  }
  iVar6 = (**(code **)(*DAT_1009f494 + 0x40))(param_1,pvVar8);
  if (iVar6 == 0) {
    return 0.0;
  }
  lVar11 = __ftol();
  peVar2 = param_1->pev;
  *(int *)&param_1->field_0x8d8 = (int)lVar11;
  if (((peVar2->armorvalue != 0.0) && (((uint)param_3 & 0x40e0) == 0)) &&
     ((iVar6 = *(int *)&param_1->field_0xf8, iVar6 == 2 ||
      (((iVar6 == 3 || (iVar6 == 4)) || (iVar6 == 5)))))) {
    if (param_2 < peVar2->armorvalue == (param_2 == peVar2->armorvalue)) {
      peVar2->armorvalue = 0.0;
    }
    else {
      peVar2->armorvalue = peVar2->armorvalue - param_2;
    }
  }
  fVar12 = param_3;
  lVar11 = __ftol();
  CBaseMonster::TakeDamage
            ((CBaseMonster *)param_1,in_stack_fffffffc,(int)param_3,(float)(int)lVar11,(uint)fVar12)
  ;
  iVar6 = 0;
  do {
    if (((uint)param_3 & 0x8000 << ((byte)iVar6 & 0x1f)) != 0) {
      (&param_1->field_0x100)[iVar6] = 0;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  (*g_engfuncs.pfnMessageBegin)(9,0x32,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(3);
  iVar6 = (*g_engfuncs.pfnIndexOfEdict)(param_1->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteShort)(iVar6);
  iVar6 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(in_stack_fffffffc + 0x208));
  (*g_engfuncs.pfnWriteShort)(iVar6);
  (*g_engfuncs.pfnWriteLong)(5);
  (*g_engfuncs.pfnMessageEnd)();
  if ((75.0 < param_1->pev->health) || (bVar5 = false, *(int *)&param_1->field_0x8d8 < 5)) {
    bVar5 = true;
  }
  bVar3 = 0x19 < *(int *)&param_1->field_0x8d8;
  param_5 = (float)(uint)(param_1->pev->health < 30.0);
  *(uint *)&param_1->field_0xfc = *(uint *)&param_1->field_0xfc | in_stack_00000030;
  *(undefined4 *)&param_1->field_0x908 = 0xffffffff;
  if (param_4 != 0.0) {
    while (((!bVar5 || ((uVar10 & 0xffffc000) != 0)) && ((bVar4 && (uVar10 != 0))))) {
      bVar4 = false;
      if ((char)uVar10 < '\0') {
        if (bVar3) {
          SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DMG4_1009921c,0,0x1e);
        }
        uVar10 = uVar10 & 0xffffff7f;
        bVar4 = true;
      }
      if ((uVar10 & 0x21) != 0) {
        if (bVar3) {
          pcVar13 = s__HEV_DMG5_10099210;
        }
        else {
          pcVar13 = s__HEV_DMG4_1009921c;
        }
        SetSuitUpdate(param_1,(byte_conflict *)pcVar13,0,0x1e);
        uVar10 = uVar10 & 0xffffffde;
        bVar4 = true;
      }
      if ((uVar10 & 2) != 0) {
        if (5 < *(int *)&param_1->field_0x8d8) {
          SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DMG6_10099204,0,0x1e);
        }
        uVar10 = uVar10 & 0xfffffffd;
        bVar4 = true;
      }
      if ((uVar10 & 4) != 0) {
        if (bVar3) {
          pcVar13 = s__HEV_DMG1_100991f8;
        }
        else {
          pcVar13 = s__HEV_DMG0_100991ec;
        }
        SetSuitUpdate(param_1,(byte_conflict *)pcVar13,0,0x1e);
        uVar10 = uVar10 & 0xfffffffb;
        bVar4 = true;
      }
      if ((uVar10 & 0x200) != 0) {
        if (bVar3) {
          SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DMG2_100991e0,0,0x3c);
        }
        uVar10 = uVar10 & 0xfffffdff;
        bVar4 = true;
      }
      if ((uVar10 & 0x28000) != 0) {
        SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DMG3_100991d4,0,0x3c);
        uVar10 = uVar10 & 0xfffd7fff;
        bVar4 = true;
      }
      if ((uVar10 & 0x100000) != 0) {
        SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DET1_100991c8,0,0x3c);
        uVar10 = uVar10 & 0xffefffff;
        bVar4 = true;
      }
      if ((uVar10 & 0x10000) != 0) {
        SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DET0_100991bc,0,0x3c);
        uVar10 = uVar10 & 0xfffeffff;
        bVar4 = true;
      }
      if ((uVar10 & 0x40000) != 0) {
        SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DET2_100991b0,0,0x3c);
        uVar10 = uVar10 & 0xfffbffff;
        bVar4 = true;
      }
      if ((uVar10 & 0x100) != 0) {
        uVar10 = uVar10 & 0xfffffeff;
        bVar4 = true;
      }
    }
  }
  param_1->pev->punchangle[0] = param_1->pev->punchangle[0] - 3.0;
  if (1.0 <= in_stack_0000002c) {
    UTIL_ScreenFade((int *)param_1);
  }
  if (param_4 == 0.0) {
    return 0.0;
  }
  if (bVar5) goto LAB_10053299;
  if ((bVar3) && (75.0 <= param_3)) {
    SetSuitUpdate(param_1,(byte_conflict *)s__HEV_MED1_100991a4,0,0x708);
    SetSuitUpdate(param_1,(byte_conflict *)s__HEV_HEAL7_10099198,0,0x708);
  }
  if ((param_5 == 0.0) || (75.0 <= param_3)) goto LAB_10053299;
  if (6.0 <= param_1->pev->health) {
    if (param_1->pev->health < 20.0) {
      pcVar13 = s__HEV_HLTH2_10099180;
      goto LAB_1005325d;
    }
  }
  else {
    pcVar13 = s__HEV_HLTH3_1009918c;
LAB_1005325d:
    SetSuitUpdate(param_1,(byte_conflict *)pcVar13,0,600);
  }
  iVar6 = (*g_engfuncs.pfnRandomLong)(0,3);
  if ((iVar6 == 0) && (param_5 < 50.0)) {
    SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DMG7_10099174,0,300);
  }
LAB_10053299:
  if (((in_stack_00000030 & 0xffffc000) != 0) && (param_3 < 75.0)) {
    if (50.0 <= param_3) {
      iVar14 = 600;
      iVar6 = 0;
      pcVar13 = s__HEV_HLTH1_10099168;
    }
    else {
      iVar14 = 3;
      iVar6 = 0;
      iVar9 = (*g_engfuncs.pfnRandomLong)(0,3);
      if (iVar9 != 0) {
        return param_4;
      }
      pcVar13 = s__HEV_DMG7_10099174;
    }
    SetSuitUpdate(param_1,(byte_conflict *)pcVar13,iVar6,iVar14);
  }
  return param_4;
}

/* 10053310  CBasePlayer::TraceAttack  (1184 bytes)
 * undefined TraceAttack()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
CBasePlayer::TraceAttack
          (int *param_1,int param_2,float param_3,float param_4,float param_5,float param_6,
          int param_7,uint param_8,undefined4 param_9,undefined4 param_10,float param_11,
          undefined4 param_12,float param_13,undefined4 param_14,float param_15)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *pvVar4;
  void *extraout_ECX_06;
  undefined4 uVar5;
  longlong lVar6;
  byte in_stack_00000048;
  void *pvVar7;
  char *pcVar8;
  uint3 in_stack_ffffffe4;
  float in_stack_ffffffe8;
  char *in_stack_ffffffec;
  float in_stack_fffffff0;
  char *pcVar9;
  
  if (gpGlobals->time < (float)param_1[0x1a5]) {
    return;
  }
  pcVar8 = (char *)(uint)in_stack_ffffffe4;
  if ((*(uint *)(param_1[1] + 0x250) & 0x10c10) != 0) {
    param_3 = param_3 * 0.7;
  }
  piVar2 = (int *)FUN_10057cc0(param_2);
  if ((((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0xa8))(), iVar3 != 0)) &&
      (iVar3 = (**(code **)(*DAT_1009f494 + 200))(piVar2,param_1), iVar3 == 1)) &&
     (_DAT_10093a90 == 0.0)) {
    return;
  }
  if (*(float *)(param_1[1] + 0x16c) == 0.0) {
    return;
  }
  param_1[0x3e] = *(int *)(param_7 + 0x34);
  switch(*(undefined4 *)(param_7 + 0x34)) {
  case 1:
    if ((param_8 & 2) != 0) {
      param_3 = param_3 + param_3;
      pcVar8 = (char *)CONCAT13(1,(int3)pcVar8);
    }
    break;
  case 6:
  case 7:
    param_3 = param_3 * 0.5;
  }
  if ((((*(float *)(param_1[1] + 0x1bc) == 0.0) || ((param_8 & 2) == 0)) ||
      (iVar3 = (**(code **)(*param_1 + 0x94))(), iVar3 == 0)) ||
     (((iVar3 = param_1[0x3e], iVar3 != 2 && (iVar3 != 3)) && ((iVar3 != 4 && (iVar3 != 5)))))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar3 = (**(code **)(*param_1 + 0x94))();
  if (iVar3 == 0) {
    FUN_1003ee50(param_1 + 0x9d,param_1);
    iVar3 = param_1[1];
    if ((*(uint *)(iVar3 + 0x1a4) & 0x200) == 0) {
      in_stack_ffffffe8 = param_4 * 50.0 + *(float *)(iVar3 + 0x20);
      in_stack_ffffffec = (char *)(param_5 * 50.0 + *(float *)(iVar3 + 0x24));
      in_stack_fffffff0 = param_6 * 50.0 + *(float *)(iVar3 + 0x28);
      *(float *)(iVar3 + 0x20) = in_stack_ffffffe8;
      *(char **)(iVar3 + 0x24) = in_stack_ffffffec;
      *(float *)(iVar3 + 0x28) = in_stack_fffffff0;
    }
  }
  if (gpGlobals->time <= (float)param_1[0x1b2]) goto LAB_10053792;
  param_1[0x1b2] = (int)(gpGlobals->time + 0.3);
  (*g_engfuncs.pfnMessageBegin)(4,DAT_100cbc74,(float *)(param_1[1] + 8),(edict_t *)0x0);
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_7 + 0x14));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_7 + 0x18));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_7 + 0x1c));
  (*g_engfuncs.pfnWriteCoord)(param_11);
  (*g_engfuncs.pfnWriteCoord)(param_13);
  (*g_engfuncs.pfnWriteCoord)(param_15);
  lVar6 = __ftol();
  (*g_engfuncs.pfnWriteByte)((int)lVar6);
  (*g_engfuncs.pfnMessageEnd)();
  if ((in_stack_00000048 & 0x42) != 0) {
    if (param_5._3_1_ == '\0') {
      if (bVar1) {
        uVar5 = *(undefined4 *)(param_1[1] + 0x208);
        (*g_engfuncs.pfnRandomLong)(0,0x1f);
        pcVar9 = (char *)0x3fa00000;
        in_stack_fffffff0 = 1.0;
        in_stack_ffffffec = s_player_kevlarhit_wav_100987ac;
        pvVar4 = extraout_ECX_01;
      }
      else {
        iVar3 = (*g_engfuncs.pfnRandomLong)(0,3);
        switch(iVar3) {
        case 0:
          uVar5 = *(undefined4 *)(param_1[1] + 0x208);
          (*g_engfuncs.pfnRandomLong)(0,0x1f);
          pcVar9 = s_player_bodyhit1_wav_100992a0;
          pvVar4 = extraout_ECX_02;
          break;
        case 1:
          uVar5 = *(undefined4 *)(param_1[1] + 0x208);
          (*g_engfuncs.pfnRandomLong)(0,0x1f);
          pcVar9 = s_player_bodyhit2_wav_1009928c;
          pvVar4 = extraout_ECX_03;
          break;
        case 2:
          uVar5 = *(undefined4 *)(param_1[1] + 0x208);
          (*g_engfuncs.pfnRandomLong)(0,0x1f);
          pcVar9 = s_player_bodyhit3_wav_10099278;
          pvVar4 = extraout_ECX_04;
          break;
        case 3:
          uVar5 = *(undefined4 *)(param_1[1] + 0x208);
          (*g_engfuncs.pfnRandomLong)(0,0x1f);
          pcVar9 = s_player_bodyhit4_wav_10099264;
          pvVar4 = extraout_ECX_05;
          break;
        default:
          goto switchD_1005364d_default;
        }
      }
    }
    else {
      iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
      if (iVar3 == 0) {
        uVar5 = *(undefined4 *)(param_1[1] + 0x208);
        (*g_engfuncs.pfnRandomLong)(0,0x1f);
        pcVar9 = s_player_headshot_wav_100992b4;
        pvVar4 = extraout_ECX_00;
      }
      else {
        if (iVar3 != 1) goto switchD_1005364d_default;
        uVar5 = *(undefined4 *)(param_1[1] + 0x208);
        (*g_engfuncs.pfnRandomLong)(0,0x1f);
        pcVar9 = s_player_headshot2_wav_100992c8;
        pvVar4 = extraout_ECX;
      }
    }
    EMIT_SOUND_DYN(pvVar4,uVar5,4,pcVar8,in_stack_ffffffe8,in_stack_ffffffec,in_stack_fffffff0,
                   pcVar9);
  }
switchD_1005364d_default:
  iVar3 = (**(code **)(*param_1 + 0x94))();
  if (iVar3 != 0) {
    iVar3 = (*g_engfuncs.pfnRandomLong)(1,7);
    if (iVar3 == 1) {
      pvVar4 = (void *)param_1[1];
      pvVar7 = *(void **)((int)pvVar4 + 0x208);
      pcVar8 = s_player_pain2_wav_10099228;
    }
    else if (iVar3 == 2) {
      pvVar7 = *(void **)(param_1[1] + 0x208);
      pcVar8 = s_player_pain3_wav_1009923c;
      pvVar4 = extraout_ECX_06;
    }
    else {
      if (iVar3 != 3) goto LAB_10053792;
      pvVar4 = *(void **)(param_1[1] + 0x208);
      pcVar8 = s_player_pain4_wav_10099250;
      pvVar7 = pvVar4;
    }
    EMIT_SOUND_DYN(pvVar4,pvVar7,2,pcVar8,0x3f800000,0x3fa00000,0,100);
  }
LAB_10053792:
  FUN_1006a340(param_2,(int)param_1,param_3,param_8);
  return;
}

/* 100537e0  CBasePlayer::PreThink  (2462 bytes)
 * undefined PreThink()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CBasePlayer::PreThink(CBasePlayer *param_1)

{
  int iVar1;
  edict_t *peVar2;
  int *piVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  longlong lVar8;
  undefined4 uVar9;
  char *pcVar10;
  entvars_t *peVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  float fStack_2c;
  int iStack_c;
  
  uVar6 = param_1->pev->button;
  uVar5 = *(uint *)&param_1->field_0x76c ^ uVar6;
  *(uint *)&param_1->field_0x770 = uVar6 & uVar5;
  *(uint *)&param_1->field_0x774 = ~param_1->pev->button & uVar5;
  (**(code **)(*DAT_1009f494 + 0x4c))(param_1);
  if (DAT_1009f4a4 != 0) {
    return;
  }
  FUN_10066df0();
  FUN_1002d810((int)param_1);
  FUN_1002af60((int *)param_1);
  if ((DAT_1009f494 == (int *)0x0) || (iVar1 = (**(code **)(*DAT_1009f494 + 0xc))(), iVar1 == 0)) {
    uVar6 = *(uint *)&param_1->field_0x940 | 2;
  }
  else {
    uVar6 = *(uint *)&param_1->field_0x940 & 0xfffffffd;
  }
  *(uint *)&param_1->field_0x940 = uVar6;
  (*param_1->vtable[0x52])();
  CheckTimeBasedDamage((int *)param_1);
  CheckSuitUpdate((int)param_1);
  peVar11 = param_1->pev;
  if ((peVar11->fuser1 == 0.0) || (0.1 <= peVar11->fuser1)) {
    fVar7 = (float10)FUN_100551c0((int)param_1);
    param_1->pev->framerate = (float)((float10)1.0 / fVar7);
  }
  else {
    peVar11->framerate = 0.0;
  }
  if ((param_1->pev->flags & 0x200U) != 0) {
    *(float *)&param_1->field_0xae0 = gpGlobals->time;
  }
  FUN_1005acf0((float *)&param_1->field_0x468);
  FUN_100568e0((int *)param_1);
  FUN_100576d0((int *)param_1);
  if (*(float *)&param_1->field_0x6b4 != 0.0) {
    peVar11 = param_1->pev;
    if (peVar11->health <= 100.0) {
      *(undefined4 *)&param_1->field_0x6b4 = 0;
    }
    else if (*(float *)&param_1->field_0x6b4 < gpGlobals->time) {
      *(float *)&param_1->field_0x6b4 = gpGlobals->time + 1.0;
      peVar11->health = peVar11->health - 1.0;
    }
  }
  if (*(float *)&param_1->field_0x460 != 0.0) {
    uVar6 = param_1->pev->iuser4;
    if (((uVar6 & 1) != 0) && (*(float *)&param_1->field_0x460 < gpGlobals->time)) {
      param_1->pev->iuser4 = uVar6 & 0xfffffffe;
      *(undefined4 *)&param_1->field_0x460 = 0;
    }
  }
  if ((*(float *)&param_1->field_0x464 != 0.0) &&
     (*(float *)&param_1->field_0x464 < gpGlobals->time)) {
    param_1->pev->gravity = 1.0;
    *(undefined4 *)&param_1->field_0x464 = 0;
  }
  iVar1 = (*param_1->vtable[0x25])();
  if (iVar1 != 0) {
    if ((0.0 < *(float *)&param_1->field_0x6f4) &&
       (*(float *)&param_1->field_0x6f0 <= gpGlobals->time)) {
      fVar12 = gpGlobals->time - *(float *)&param_1->field_0x6f0;
      fVar7 = (float10)FUN_100551c0((int)param_1);
      fVar7 = (float10)*(float *)&param_1->field_0x6f4 - ((float10)fVar12 / fVar7) * (float10)0.1;
      *(float *)&param_1->field_0x6f4 = (float)fVar7;
      if (fVar7 < (float10)0.0) {
        *(undefined4 *)&param_1->field_0x6f4 = 0;
      }
    }
    if (*(float *)&param_1->field_0x6ec < 100.0) {
      fVar12 = gpGlobals->time - *(float *)&param_1->field_0x6f0;
      fVar7 = (float10)FUN_100551c0((int)param_1);
      fVar7 = ((float10)fVar12 / fVar7) * (float10)15.0 + (float10)*(float *)&param_1->field_0x6ec;
      *(float *)&param_1->field_0x6ec = (float)fVar7;
      if ((float10)100.0 < fVar7) {
        *(undefined4 *)&param_1->field_0x6ec = 0x42c80000;
      }
    }
  }
  if ((*(float *)&param_1->field_0x718 != 0.0) &&
     ((*(float *)&param_1->field_0x718 < gpGlobals->time || (*(float *)&param_1->field_0x71c == 0.0)
      ))) {
    *(undefined4 *)&param_1->field_0x718 = 0;
    *(undefined4 *)&param_1->field_0x71c = 0;
    param_1->field_0x720 = 0;
  }
  peVar11 = param_1->pev;
  *(float *)&param_1->field_0x6f0 = gpGlobals->time;
  if (peVar11->iuser1 != 0) {
    if ((peVar11->button & 1) != 0) {
      if ((*(float *)&param_1->field_0x6e8 < 0.0) &&
         (*(float *)&param_1->field_0x6cc < gpGlobals->time)) {
        *(float *)&param_1->field_0x6cc = gpGlobals->time + 1.0;
        TSHudMessageOne(0xc3,0x2d,0x2d,0x10,0x14,s_You_have_to_wait_until_the_next_r_10099360,
                        (int)peVar11);
      }
      if ((0.0 < *(float *)&param_1->field_0x6e8) &&
         (*(float *)&param_1->field_0x6e8 < gpGlobals->time)) {
        *(undefined4 *)&param_1->field_0x6e8 = 0;
        FUN_1005a700((int)param_1);
        param_1->pev->impulse = 0;
        return;
      }
    }
    if (((0.0 < *(float *)&param_1->field_0x6e8) &&
        (gpGlobals->time < *(float *)&param_1->field_0x6e8)) &&
       (*(float *)&param_1->field_0x6cc < gpGlobals->time)) {
      *(float *)&param_1->field_0x6cc = gpGlobals->time + 1.0;
      lVar8 = __ftol();
      if ((int)lVar8 < 1) {
        peVar11 = param_1->pev;
        pcVar10 = s_Press_Fire_To_Play__1009934c;
        uVar9 = 0x1e;
      }
      else {
        peVar11 = param_1->pev;
        __ftol();
        pcVar10 = UTIL_VarArgs(&DAT_10091cc8);
        uVar9 = 0x14;
      }
      TSHudMessageOne(0,0,0,0x10,uVar9,pcVar10,(int)peVar11);
    }
    if (*(float *)&param_1->field_0x734 != 0.0) {
      if (gpGlobals->time <= *(float *)&param_1->field_0x734) {
        if (*(float *)&param_1->field_0x6cc < gpGlobals->time) {
          peVar11 = param_1->pev;
          *(float *)&param_1->field_0x6cc = gpGlobals->time + 1.0;
          __ftol();
          pcVar10 = UTIL_VarArgs((byte_conflict *)s__i_seconds_left_for_respawn__pre_10099318);
          TSHudMessageOne(0,0,0,0x11,0x14,pcVar10,(int)peVar11);
        }
      }
      else {
        *(undefined4 *)&param_1->field_0x734 = 0;
        *(undefined4 *)&param_1->field_0x6e8 = 0xbf800000;
        param_1->field_0x6c4 = 1;
        TSHudMessageOne(0xc3,0x2d,0x2d,0x10,0x14,s_You_have_to_wait_until_the_next_r_10099360,
                        (int)param_1->pev);
        FUN_10045910(0x100ac8c0);
      }
    }
    FUN_1005aa00(param_1);
    FUN_1005a930(param_1);
    param_1->pev->impulse = 0;
    return;
  }
  FUN_1005c680((int)&param_1->field_0x468);
  peVar11 = param_1->pev;
  if (0 < peVar11->deadflag) {
    PlayerDeathThink(param_1);
    return;
  }
  if ((param_1->field_0x7a4 & 2) == 0) {
    uVar6 = peVar11->flags & 0xfeffffff;
  }
  else {
    uVar6 = peVar11->flags | 0x1000000;
  }
  peVar11->flags = uVar6;
  if ((param_1->field_0x7a4 & 2) == 0) {
    if ((char)param_1->field_0x914 < '\0') {
      *(undefined4 *)&param_1->field_0x914 = 0xc0;
    }
  }
  else {
    peVar2 = param_1->pev->groundentity;
    if ((peVar2 == (edict_t *)0x0) &&
       (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 == (edict_t *)0x0)) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = peVar2->pvPrivateData;
    }
    if (piVar3 == (int *)0x0) {
      FUN_10067850();
      if ((((fStack_2c == 1.0) || (iStack_c == 0)) ||
          (piVar3 = *(int **)(iStack_c + 0x7c), piVar3 == (int *)0x0)) ||
         ((uVar6 = (**(code **)(*piVar3 + 0x20))(), (uVar6 & 0x40) == 0 ||
          (iVar1 = (**(code **)(*piVar3 + 0x8c))(param_1->pev), iVar1 == 0)))) {
LAB_10053e5b:
        *(undefined4 *)&param_1->field_0x914 = 0xc0;
        *(uint *)&param_1->field_0x7a4 = *(uint *)&param_1->field_0x7a4 & 0xfffffffd;
        return;
      }
    }
    else if ((((param_1->pev->flags & 0x200U) == 0) || ((*(byte *)(piVar3[1] + 0x1a0) & 2) != 0)) ||
            ((param_1->pev->button & 0x600U) != 0)) goto LAB_10053e5b;
    peVar11 = param_1->pev;
    peVar11->velocity[0] = DAT_1009f4a8;
    peVar11->velocity[1] = DAT_1009f4ac;
    peVar11->velocity[2] = DAT_1009f4b0;
    if ((*(uint *)&param_1->field_0x770 & 8) == 0) {
      if ((*(uint *)&param_1->field_0x770 & 0x10) == 0) goto LAB_10053f31;
      (**(code **)(*piVar3 + 0xc0))(param_1,param_1,2,0xbf800000);
    }
    else {
      (**(code **)(*piVar3 + 0xc0))(param_1,param_1,2,0x3f800000);
    }
    iVar1 = *(int *)(piVar3[1] + 0x184);
    lVar8 = __ftol();
    uVar6 = FUN_1002aa20((int)lVar8,iVar1);
    *(uint *)&param_1->field_0x914 = uVar6 | 0xc0;
  }
LAB_10053f31:
  if ((param_1->pev->button & 2) != 0) {
    (*param_1->vtable[0x4d])();
  }
  if ((((param_1->pev->button & 4) != 0) || ((param_1->pev->flags & 0x4000U) != 0)) ||
     ((param_1->field_0x7a4 & 8) != 0)) {
    (*param_1->vtable[0x4e])();
  }
  if ((param_1->pev->flags & 0x200U) == 0) {
    *(float *)&param_1->field_0x784 = -param_1->pev->velocity[2];
  }
  FUN_100552c0((int)param_1);
  if ((0.0 < _DAT_10093c34) && (*(float *)&param_1->field_0x704 < gpGlobals->time)) {
    *(float *)&param_1->field_0x704 = gpGlobals->time + 0.1;
    FUN_1002b380((int)param_1);
    FUN_10062bb0(&DAT_100d9068,(float *)&stack0xffffffb0,0);
  }
  if ((DAT_100ac8c0 == '\x03') && (*(float *)&param_1->field_0x710 < gpGlobals->time)) {
    *(float *)&param_1->field_0x710 = gpGlobals->time + 0.5;
    FUN_10055650((int *)param_1);
  }
  if ((*(float *)&param_1->field_0x694 < gpGlobals->time) && (param_1->pev->rendermode != 0)) {
    param_1->pev->rendermode = 0;
    param_1->pev->rendercolor[0] = 0.0;
    param_1->pev->rendercolor[1] = 0.0;
    param_1->pev->rendercolor[2] = 0.0;
    param_1->pev->renderamt = 0.0;
    param_1->pev->renderfx = 0;
  }
  if ((*(float *)&param_1->field_0x744 != 0.0) &&
     (*(float *)&param_1->field_0x744 < gpGlobals->time)) {
    FUN_100675b0((int)param_1->pev,2,s_You_have_been_kicked_for_some_re_100992ec,0,0,0,0);
    iVar14 = 0;
    iVar13 = 0;
    fVar12 = 0.0;
    iVar1 = 0;
    puVar4 = UTIL_VarArgs((byte_conflict *)s__s_kicked__100992e0);
    UTIL_ClientPrintAll(1,puVar4,iVar1,(int)fVar12,iVar13,iVar14);
    (*g_engfuncs.pfnGetPlayerUserId)(param_1->pev->pContainingEntity);
    pcVar10 = UTIL_VarArgs((byte_conflict *)s_kick___i_10098a64);
    (*g_engfuncs.pfnServerCommand)(pcVar10);
    *(undefined4 *)&param_1->field_0x744 = 0;
  }
  EHANDLE::operator=((EHANDLE *)&param_1->field_0x11c,0);
  if ((param_1->field_0x7a4 & 4) != 0) {
    peVar11 = param_1->pev;
    peVar11->velocity[0] = DAT_1009f4a8;
    peVar11->velocity[1] = DAT_1009f4ac;
    peVar11->velocity[2] = DAT_1009f4b0;
  }
  return;
}

/* 10054180  CBasePlayer::PostThink  (1544 bytes)
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
  float10 fVar10;
  longlong lVar11;
  float fVar12;
  int iStack_c;
  
  if ((DAT_1009f4a4 != 0) || (iVar4 = (**(code **)(*param_1 + 0x94))(), iVar4 == 0))
  goto LAB_1005459d;
  this = (EHANDLE *)(param_1 + 0x247);
  bVar3 = FUN_1000c210((uint *)this);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    piVar5 = (int *)FUN_1000c220((uint *)this);
    iVar4 = (**(code **)(*piVar5 + 0x8c))(param_1[1]);
    if ((iVar4 == 0) || (*(int *)(param_1[1] + 0xc0) != 0)) {
      piVar5 = (int *)FUN_1000c220((uint *)this);
      (**(code **)(*piVar5 + 0xc0))(param_1,param_1,0,0);
      EHANDLE::operator=(this,0);
    }
    else {
      piVar5 = (int *)FUN_1000c220((uint *)this);
      (**(code **)(*piVar5 + 0xc0))(param_1,param_1,2,0x40000000);
    }
  }
  FUN_1002d840(param_1);
  this_00 = (void *)param_1[1];
  if ((((*(uint *)((int)this_00 + 0x1a4) & 0x200) != 0) && (0.0 < *(float *)((int)this_00 + 0x160)))
     && (350.0 <= (float)param_1[0x1e1])) {
    if ((*(int *)((int)this_00 + 0x1c4) != -3) && (680.0 < (float)param_1[0x1e1])) {
      fVar12 = (float)param_1[0x1e1];
      param_1[0x1e1] = (int)(fVar12 - 680.0);
      fVar12 = (fVar12 - 680.0) * 0.22522523;
      if (*(float *)((int)this_00 + 0x160) < fVar12) {
        EMIT_SOUND_DYN(this_00,*(undefined4 *)((int)this_00 + 0x208),3,
                       s_common_bodysplat_wav_10091f10,0x3f800000,0x3f4ccccd,0,100);
      }
      if (0.0 < fVar12) {
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
        (**(code **)(*param_1 + 0x38))(peVar6,peVar8,fVar12,0x1020);
      }
    }
    iVar4 = (**(code **)(*param_1 + 0x94))();
    if (iVar4 != 0) {
      CTSAnimation::Animate((CTSAnimation *)(param_1 + 0x9d),param_1,1);
    }
  }
  if ((*(uint *)(param_1[1] + 0x1a4) & 0x200) != 0) {
    *(undefined4 *)(param_1[1] + 0x11c) = 0x3f800000;
    if ((64.0 < (float)param_1[0x1e1]) &&
       (iVar4 = (**(code **)(*DAT_1009f494 + 0x18))(), iVar4 == 0)) {
      fVar12 = 0.2;
      lVar11 = __ftol();
      CSoundEnt::InsertSound(4,(undefined4 *)(param_1[1] + 8),(int)lVar11,fVar12);
    }
    param_1[0x1e1] = 0;
    if ((*(uint *)(param_1[1] + 0x250) & 0x80000) != 0) {
      UTIL_ScreenShake((float *)(param_1[1] + 8),20.0,0x41f00000,0x3e99999a,512.0);
      *(uint *)(param_1[1] + 0x250) = *(uint *)(param_1[1] + 0x250) & 0xfff7ffff;
      if ((*(byte *)(param_1[1] + 0x180) & 4) != 0) {
        param_1[0x11e] = (int)(gpGlobals->time + 0.3);
        iVar4 = CTSStunt::GoRoll((int)(param_1 + 0x11a));
        if (iVar4 != 0) {
          fVar9 = (float10)FUN_100551c0((int)param_1);
          fVar10 = FUN_10066590();
          param_1[0x46] = (int)(float)(fVar10 + (float10)(double)(fVar9 * (float10)0.75));
          goto LAB_10054506;
        }
      }
      uVar1 = *(undefined4 *)(param_1[1] + 0x208);
      iVar4 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
      EMIT_SOUND_DYN(this_01,uVar1,4,s_player_superjump_land_wav_10099388,0x3f800000,0x3f4ccccd,0,
                     iVar4 + 0x5f);
      *(uint *)(param_1[1] + 0x250) = *(uint *)(param_1[1] + 0x250) | 4;
      *(uint *)(param_1[1] + 0x250) = *(uint *)(param_1[1] + 0x250) | 1;
      iVar4 = param_1[1];
      *(undefined4 *)(iVar4 + 0x174) = 0;
      *(undefined4 *)(iVar4 + 0x178) = 0;
      *(undefined4 *)(iVar4 + 0x17c) = 0x41800000;
      fVar9 = (float10)FUN_100551c0((int)param_1);
      param_1[0x11c] = (int)(float)(fVar9 * (float10)0.75 + (float10)gpGlobals->time);
      CTSAnimation::Animate((CTSAnimation *)(param_1 + 0x9d),param_1,0x39);
    }
  }
LAB_10054506:
  iVar4 = (**(code **)(*param_1 + 0x94))();
  if (iVar4 != 0) {
    iVar4 = param_1[1];
    if ((*(float *)(iVar4 + 0x20) == 0.0) && (*(float *)(iVar4 + 0x24) == 0.0)) {
      iVar4 = 6;
    }
    else {
      if ((*(float *)(iVar4 + 0x20) == 0.0) &&
         ((*(float *)(iVar4 + 0x24) == 0.0 && (*(int *)(iVar4 + 0x1c0) < 2)))) goto LAB_10054570;
      iVar4 = 1;
    }
    CTSAnimation::Animate((CTSAnimation *)(param_1 + 0x9d),param_1,iVar4);
  }
LAB_10054570:
  CBaseAnimating::StudioFrameAdvance((int)param_1,0.0);
  FUN_10054790(param_1[1]);
  UpdatePlayerSound((int)param_1);
  param_1[0x1db] = *(int *)(param_1[1] + 0x180);
LAB_1005459d:
  piVar5 = param_1 + 0x254;
  iStack_c = 6;
  do {
    for (piVar2 = (int *)*piVar5; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x1d]) {
      piVar7 = (int *)(**(code **)(*piVar2 + 0x134))();
      if ((piVar7 != (int *)0x0) && (iVar4 = (**(code **)(*piVar7 + 0x174))(), iVar4 != 0)) {
        fVar12 = (float)piVar7[0x23] - gpGlobals->frametime;
        if (fVar12 <= -1.0) {
          fVar12 = -1.0;
        }
        piVar7[0x23] = (int)fVar12;
        fVar12 = (float)piVar7[0x24] - gpGlobals->frametime;
        if (fVar12 <= -0.001) {
          fVar12 = -0.001;
        }
        piVar7[0x24] = (int)fVar12;
        fVar12 = (float)piVar7[0x25] - gpGlobals->frametime;
        if (fVar12 <= -0.001) {
          fVar12 = -0.001;
        }
        piVar7[0x25] = (int)fVar12;
        if (piVar7[0x26] != 0x447a0000) {
          fVar12 = (float)piVar7[0x26] - gpGlobals->frametime;
          if (fVar12 <= -0.001) {
            fVar12 = -0.001;
          }
          piVar7[0x26] = (int)fVar12;
        }
        iVar4 = piVar7[1];
        if (*(int *)(iVar4 + 0x254) != 0x447a0000) {
          fVar12 = *(float *)(iVar4 + 0x254) - gpGlobals->frametime;
          if (fVar12 <= -0.001) {
            fVar12 = -0.001;
          }
          *(float *)(iVar4 + 0x254) = fVar12;
        }
      }
    }
    piVar5 = piVar5 + 1;
    iStack_c = iStack_c + -1;
  } while (iStack_c != 0);
  fVar12 = (float)param_1[0x46] - gpGlobals->frametime;
  param_1[0x46] = (int)fVar12;
  if (fVar12 < -0.001) {
    param_1[0x46] = -0x457ced91;
  }
  if ((param_1[0x2b7] != 0x447a0000) &&
     (fVar12 = (float)param_1[0x2b7] - gpGlobals->frametime, param_1[0x2b7] = (int)fVar12,
     fVar12 < -0.001)) {
    param_1[0x2b7] = -0x457ced91;
  }
  if ((param_1[0x2b5] != 0x447a0000) &&
     (fVar12 = (float)param_1[0x2b5] - gpGlobals->frametime, param_1[0x2b5] = (int)fVar12,
     fVar12 < -0.001)) {
    param_1[0x2b5] = -0x457ced91;
  }
  return;
}

/* 100547c0  CBasePlayer::UpdateClientData  (2003 bytes)
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
  
  if (((float)param_1[299] <= gpGlobals->time) && (0.0 <= (float)param_1[299])) {
    param_1[299] = (int)(gpGlobals->time + 0.1);
    if (param_1[0x243] != 0) {
      param_1[0x243] = 0;
      DAT_10095638 = 0;
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbbc0,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)(0);
      (*g_engfuncs.pfnMessageEnd)();
      if (param_1[0x244] == 0) {
        (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbbc4,(float *)0x0,*(edict_t **)(param_1[1] + 0x208))
        ;
        (*g_engfuncs.pfnMessageEnd)();
        (**(code **)(*DAT_1009f494 + 0x30))();
        param_1[0x244] = 1;
        iVar3 = (**(code **)(*DAT_1009f494 + 0x18))();
        if (iVar3 != 0) {
          FireTargets(0x100993b8,param_1,param_1,3,0);
        }
      }
      FireTargets(0x100993a4,param_1,param_1,3,0);
      if (_DAT_100ac8c8 != 0.0) {
        (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc70,(float *)0x0,*(edict_t **)(param_1[1] + 0x208))
        ;
        lVar5 = __ftol();
        (*g_engfuncs.pfnWriteByte)((int)lVar5);
        (*g_engfuncs.pfnWriteByte)(0);
        (*g_engfuncs.pfnMessageEnd)();
      }
      if ((_DAT_10093d38 != 0.0) && (*(char *)((int)param_1 + 0x6c7) != '\0')) {
        (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc68,(float *)0x0,*(edict_t **)(param_1[1] + 0x208))
        ;
        (*g_engfuncs.pfnWriteShort)(0x100);
        (*g_engfuncs.pfnWriteByte)(0);
        (*g_engfuncs.pfnMessageEnd)();
      }
    }
    if (param_1[0x250] != param_1[0x251]) {
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc18,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)(param_1[0x250]);
      (*g_engfuncs.pfnMessageEnd)();
      param_1[0x251] = param_1[0x250];
    }
    iVar3 = param_1[1];
    if ((float)param_1[0x24e] != *(float *)(iVar3 + 0x160)) {
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc48,(float *)0x0,*(edict_t **)(iVar3 + 0x208));
      lVar5 = __ftol();
      (*g_engfuncs.pfnWriteByte)((int)lVar5);
      (*g_engfuncs.pfnMessageEnd)();
      iVar3 = param_1[1];
      lVar5 = __ftol();
      param_1[0x24e] = (int)lVar5;
    }
    if ((float)param_1[0x24f] != *(float *)(iVar3 + 0x1bc)) {
      lVar5 = __ftol();
      param_1[0x24f] = (int)lVar5;
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc4c,(float *)0x0,*(edict_t **)(iVar3 + 0x208));
      lVar5 = __ftol();
      (*g_engfuncs.pfnWriteByte)((int)lVar5);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if (((float)param_1[0x1d9] != 0.0) &&
       ((float)param_1[0x1d9] < gpGlobals->time != ((float)param_1[0x1d9] == gpGlobals->time))) {
      uVar4 = FUN_1002cc10((int)param_1);
      iVar3 = param_1[0x1da];
      if (uVar4 == 0) {
        if (iVar3 < 100) {
          fVar1 = gpGlobals->time;
          param_1[0x1da] = iVar3 + 1;
          param_1[0x1d9] = (int)(fVar1 + 0.2);
        }
        else {
          param_1[0x1d9] = 0;
        }
      }
      else if (iVar3 != 0) {
        fVar1 = gpGlobals->time;
        param_1[0x1da] = iVar3 + -1;
        param_1[0x1d9] = (int)(fVar1 + 1.2);
        if (iVar3 + -1 == 0) {
          FUN_1002ccd0((int)param_1);
        }
      }
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbbbc,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)(param_1[0x1da]);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((*(byte *)(param_1 + 0x245) & 0xc0) != 0) {
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbbdc,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)(param_1[0x245] & 0xf);
      (*g_engfuncs.pfnMessageEnd)();
      param_1[0x245] = param_1[0x245] & 0xffffff3f;
    }
    if ((char)param_1[0x107] != *(char *)((int)param_1 + 0x41d)) {
      *(char *)((int)param_1 + 0x41d) = (char)param_1[0x107];
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc50,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(param_1 + 0x107));
      (*g_engfuncs.pfnMessageEnd)();
    }
    if (param_1[0x12e] != param_1[0x12f]) {
      param_1[0x12f] = param_1[0x12e];
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc54,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteShort)(param_1[0x12e]);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if (param_1[0x130] != param_1[0x131]) {
      param_1[0x131] = param_1[0x130];
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc58,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)(param_1[0x130]);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((param_1[0x1ac] != param_1[0x1a8]) || (param_1[0x1ab] != param_1[0x1aa])) {
      param_1[0x1ac] = param_1[0x1a8];
      param_1[0x1ab] = param_1[0x1aa];
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc68,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteShort)(param_1[0x1a8]);
      (*g_engfuncs.pfnWriteByte)(param_1[0x1aa] & (param_1[0x1aa] < 1) - 1);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((param_1[0x1a7] & 8U) == 0) {
      if ((param_1[0x1a7] & 1U) == 0) {
        fVar1 = (float)param_1[0x56];
      }
      else {
        fVar1 = 0.35;
      }
    }
    else {
      fVar1 = 0.15;
    }
    if (fVar1 != (float)param_1[0x55]) {
      param_1[0x55] = (int)fVar1;
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc80,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteCoord)((float)param_1[0x55] * 100.0);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((char)param_1[0x57] != *(char *)((int)param_1 + 0x15d)) {
      *(char *)(param_1 + 0x57) = *(char *)((int)param_1 + 0x15d);
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbca4,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)((int)(char)param_1[0x57]);
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((((param_1[0x25a] != 0) && (iVar3 = (**(code **)(*param_1 + 0x94))(), iVar3 != 0)) &&
        (*(int *)(param_1[0x25a] + 0x78) == 0x10)) &&
       (uVar4 = FUN_1004a680(param_1[0x25a]), *(byte *)(param_1 + 0x1a6) != uVar4)) {
      uVar4 = FUN_1004a680(param_1[0x25a]);
      *(char *)(param_1 + 0x1a6) = (char)uVar4;
      (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc60,(float *)0x0,(edict_t *)0x0);
      iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)(iVar3);
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(param_1 + 0x1a6));
      (*g_engfuncs.pfnMessageEnd)();
    }
    if (*(char *)((int)param_1 + 0x6c5) != (char)param_1[0x1b1]) {
      *(char *)((int)param_1 + 0x6c5) = (char)param_1[0x1b1];
      (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbca0,(float *)0x0,(edict_t *)0x0);
      iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)(iVar3);
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(param_1 + 0x1b1));
      (*g_engfuncs.pfnMessageEnd)();
    }
    if ((((char)param_1[0x1c2] != *(char *)((int)param_1 + 0x70b)) ||
        (*(char *)((int)param_1 + 0x709) != (char)param_1[0x1c3])) ||
       (*(char *)((int)param_1 + 0x70a) != *(char *)((int)param_1 + 0x70d))) {
      *(char *)((int)param_1 + 0x70b) = (char)param_1[0x1c2];
      *(undefined1 *)(param_1 + 0x1c3) = *(undefined1 *)((int)param_1 + 0x709);
      *(undefined1 *)((int)param_1 + 0x70d) = *(undefined1 *)((int)param_1 + 0x70a);
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc90,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(param_1 + 0x1c2));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)((int)param_1 + 0x709));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)((int)param_1 + 0x70a));
      (*g_engfuncs.pfnMessageEnd)();
    }
    piVar2 = (int *)param_1[0x25a];
    if ((piVar2 != (int *)0x0) && (piVar2[0x1e] == 0x10)) {
      (**(code **)(*piVar2 + 0x130))(param_1);
    }
    param_1[0x25b] = param_1[0x25a];
    param_1[0x253] = param_1[0x252];
  }
  return;
}

/* 10055090  CBasePlayer::Duck  (66 bytes)
 * undefined Duck(int * param_1)
 */
void __fastcall CBasePlayer::Duck(int *param_1)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 0x1dc) & 4) != 0) &&
     (iVar1 = CTSStunt::GoRoll((int)(param_1 + 0x11a)), iVar1 != 0)) {
    return;
  }
  if (((*(byte *)(param_1[1] + 0x180) & 4) != 0) && ((*(uint *)(param_1[1] + 0x1a4) & 0x4000) == 0))
  {
    CTSAnimation::Animate((CTSAnimation *)(param_1 + 0x9d),param_1,5);
  }
  return;
}

/* 100550e0  CBasePlayer::Jump  (224 bytes)
 * undefined Jump()
 */
void __fastcall CBasePlayer::Jump(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (((*(uint *)(param_1[1] + 0x1a4) & 0x800) == 0) && (*(int *)(param_1[1] + 0x1c0) < 2)) {
    iVar2 = FUN_1005cd00((int)(param_1 + 0x11a));
    if ((iVar2 == 0) && ((*(byte *)(param_1 + 0x1dc) & 2) != 0)) {
      iVar2 = FUN_1005d0e0((float *)(param_1 + 0x11a));
      if ((((iVar2 == 0) && ((*(byte *)(param_1 + 0x1dc) & 2) != 0)) &&
          ((*(uint *)(param_1[1] + 0x1a4) & 0x200) != 0)) && (*(int *)(param_1[1] + 0x19c) != 0)) {
        CTSAnimation::Animate((CTSAnimation *)(param_1 + 0x9d),param_1,4);
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

/* 100552f0  CBasePlayer::TSInit  (863 bytes)
 * undefined TSInit(int * param_1)
 * called by: CBasePlayer::Spawn
 */
void __fastcall CBasePlayer::TSInit(int *param_1)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  float10 fVar5;
  
  FUN_1003d870(param_1 + 0x9d);
  FUN_1005acb0(param_1 + 0x11a,param_1);
  *(undefined4 *)(param_1[1] + 0x254) = 0;
  param_1[0x56] = 0;
  param_1[0x55] = -0x40800000;
  *(undefined1 *)((int)param_1 + 0x15d) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0xff;
  *(undefined1 *)(param_1 + 0x107) = 0;
  *(undefined1 *)((int)param_1 + 0x41d) = 0xff;
  param_1[0x24e] = -1;
  *(undefined4 *)(param_1[1] + 0x250) = 0;
  FUN_100557b0(param_1,310.0);
  param_1[0x130] = 0x51;
  param_1[0x131] = -1;
  FUN_10042c90((int)param_1);
  param_1[0x12f] = -1;
  param_1[299] = 0;
  param_1[0x1a5] = (int)(gpGlobals->time + 1.0);
  fVar5 = FUN_10066590();
  param_1[0x46] = (int)(float)(fVar5 + (float10)1.0);
  *(undefined4 *)(param_1[1] + 0x14c) = 0x42fa0000;
  *(undefined4 *)(param_1[1] + 0x148) = 1;
  *(undefined4 *)(param_1[1] + 0x150) = 0;
  *(undefined4 *)(param_1[1] + 0x154) = 0;
  *(undefined4 *)(param_1[1] + 0x158) = 0;
  *(undefined4 *)(param_1[1] + 0x15c) = 0xe;
  UTIL_ScreenFade(param_1);
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x1a6) = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0xff;
  if ((DAT_100ac8c0 == '\x03') || (DAT_100ac8c0 == '\x02')) {
    param_1[0x1a8] = 1;
    param_1[0x1aa] = 3;
  }
  param_1[0x1ae] = 0;
  *(undefined1 *)(param_1 + 0x1af) = 0;
  param_1[0x1b0] = 0;
  *(undefined1 *)(param_1 + 0x1b1) = 0;
  *(undefined1 *)((int)param_1 + 0x6c5) = 0xff;
  *(undefined1 *)((int)param_1 + 0x6c6) = 0;
  *(undefined1 *)((int)param_1 + 0x6c7) = 0;
  (*g_engfuncs.pfnSetPhysicsKeyValue)(*(edict_t **)(param_1[1] + 0x208),&DAT_10091cdc,&DAT_10094014)
  ;
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  if ((*(int *)(param_1[1] + 0x244) != 0) || (*(int *)(param_1[1] + 0x248) != 0)) {
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc78,(float *)0x0,(edict_t *)0x0);
    iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1[1] + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar2);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnMessageEnd)();
    *(undefined4 *)(param_1[1] + 0x248) = 0;
    *(undefined4 *)(param_1[1] + 0x244) = 0;
  }
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1cd] = 0;
  param_1[0x1c1] = 0;
  *(undefined1 *)(param_1 + 0x1c2) = 0;
  *(undefined1 *)((int)param_1 + 0x70b) = 0;
  *(undefined1 *)((int)param_1 + 0x709) = 0;
  *(undefined1 *)(param_1 + 0x1c3) = 0;
  *(undefined1 *)((int)param_1 + 0x70a) = 0;
  *(undefined1 *)((int)param_1 + 0x70d) = 0;
  param_1[0x1c4] = 0;
  param_1[0x1bb] = 0x42c80000;
  fVar1 = gpGlobals->time;
  param_1[0x1c5] = 0;
  param_1[0x1bc] = (int)fVar1;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  if (*(char *)((int)param_1 + 0x731) != '\0') {
    DAT_100b1d8e = 0;
  }
  *(undefined1 *)((int)param_1 + 0x731) = 0;
  param_1[0x1ad] = 0;
  piVar4 = param_1 + 0x5b;
  for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x58] = 0;
  piVar4 = param_1 + 0x7c;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x9c) = 0;
  param_1[0x1be] = 0;
  param_1[0x1bf] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1ce] = 0;
  pcVar3 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(param_1[1] + 0x208));
  FUN_10064a20((int)param_1,pcVar3);
  return;
}

/* 10055830  CBasePlayer::PickUpWeapon  (283 bytes)
 * undefined4 PickUpWeapon(uint param_1, undefined4 * param_2, uint param_3, char param_4)
 * called by: CTSKnife::Use, CTSWorldGun::GetWeapon, FUN_10055e00, FUN_10066250, PlayerAddPowerUp, pfnClientCommand
 */
undefined4 __thiscall
CBasePlayer::PickUpWeapon
          (CBasePlayer *this,uint param_1,undefined4 *param_2,uint param_3,char param_4)

{
  int *this_00;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  this_00 = *(int **)&this->field_0x968;
  if ((this_00 != (int *)0x0) && (this_00[0x1e] == 0x10)) {
    puVar1 = get_weapon_info(param_1);
    iVar3 = *(int *)&this->field_0x4c0 - (uint)*(byte *)((int)puVar1 + 0xca);
    if (-1 < iVar3) {
      iVar2 = FUN_1004a040(this_00,param_1,param_2,param_3);
      if (iVar2 != 0) {
        *(int *)&this->field_0x4c0 = iVar3;
        fVar4 = FUN_100436e0((int)this);
        FUN_100557b0(this,(float)fVar4);
        EMIT_SOUND_DYN(this->pev,this->pev->pContainingEntity,3,s_items_gunpickup2_wav_10094490,
                       0x3f800000,0x3f4ccccd,0,100);
        if ((param_4 != '\0') || (this_00[0x2f] == 0)) {
          puVar1 = get_weapon_info(param_1);
          if (*(short *)((int)puVar1 + 0xc6) != -1) {
            puVar1 = get_weapon_info(param_1);
            if ((char)this_00[*(short *)((int)puVar1 + 0xc6) * 0xc + 0x41] != '\0') {
              puVar1 = get_weapon_info(param_1);
              param_1 = (uint)*(short *)((int)puVar1 + 0xc6);
            }
          }
          iVar3 = FUN_1004a4c0(this_00,param_1);
          if (iVar3 != 0) {
            (**(code **)(*this_00 + 0x104))();
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

/* 100564d0  CBasePlayer::ThrowWeapon  (949 bytes)
 * undefined ThrowWeapon(undefined1 param_1, int * param_2, float * param_3, float * param_4)
 * called by: FUN_10056080
 */
void __thiscall
CBasePlayer::ThrowWeapon
          (CBasePlayer *this,undefined1 param_1,int *param_2,float *param_3,float *param_4)

{
  entvars_t *peVar1;
  float fVar2;
  globalvars_t *pgVar3;
  int iVar4;
  int *piVar5;
  void *this_00;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  float fStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
  iVar4 = (*this->vtable[0x25])();
  if (iVar4 == 0) {
    (*g_engfuncs.pfnRandomLong)(-0x3c,0x3c);
    (*g_engfuncs.pfnRandomLong)(-0xb4,0xb4);
    iVar4 = (*g_engfuncs.pfnRandomLong)(0x3c,0xa0);
    fVar2 = (float)iVar4;
  }
  else {
    peVar1 = this->pev;
    fStack_54 = peVar1->v_angle[0];
    if (param_3 != (float *)0x0) {
      fStack_54 = *param_3 + fStack_54;
      fStack_4 = param_3[2];
      fStack_44 = param_3[1] + peVar1->v_angle[1];
      fStack_40 = fStack_4 + peVar1->v_angle[2];
      fStack_48 = fStack_54;
    }
    fVar2 = (90.0 - fStack_54) + (90.0 - fStack_54);
  }
  FUN_10066df0();
  piVar5 = CTSWorldGun::CreateWeapon((int)this,param_1,param_2);
  pgVar3 = gpGlobals;
  fStack_48 = 16.0;
  fStack_44 = 0.0;
  fStack_40 = 0.0;
  if (param_4 != (float *)0x0) {
    fStack_44 = param_4[1];
    fStack_48 = *param_4 + 16.0;
    fStack_40 = param_4[2];
    fStack_3c = fStack_48;
    fStack_38 = fStack_44;
    fStack_34 = fStack_40;
  }
  fStack_4 = fStack_40;
  FUN_1000c5f0(&fStack_30,fStack_44 * gpGlobals->v_right[0],fStack_44 * gpGlobals->v_right[1],
               fStack_44 * gpGlobals->v_right[2]);
  FUN_1000c5f0(&fStack_3c,fStack_48 * pgVar3->v_forward[0],fStack_48 * pgVar3->v_forward[1],
               fStack_48 * pgVar3->v_forward[2]);
  peVar1 = this->pev;
  FUN_1000c5f0(&fStack_48,peVar1->view_ofs[0] + peVar1->origin[0],
               peVar1->view_ofs[1] + peVar1->origin[1],peVar1->view_ofs[2] + peVar1->origin[2]);
  FUN_1000c5f0(&fStack_24,fStack_3c + fStack_48,fStack_38 + fStack_44,fStack_34 + fStack_40);
  FUN_1000c5f0(&fStack_18,fStack_30 + fStack_24,fStack_2c + fStack_20,fStack_28 + fStack_1c);
  FUN_1000c5f0(&fStack_c,fStack_18,uStack_14,fStack_10 + fStack_4);
  iVar4 = piVar5[1];
  *(float *)(iVar4 + 8) = fStack_c;
  *(undefined4 *)(iVar4 + 0xc) = uStack_8;
  *(float *)(iVar4 + 0x10) = fStack_4;
  iVar4 = piVar5[1];
  *(undefined4 *)(iVar4 + 0x50) = DAT_1009f4a8;
  *(undefined4 *)(iVar4 + 0x54) = DAT_1009f4ac;
  *(undefined4 *)(iVar4 + 0x58) = DAT_1009f4b0;
  iVar4 = (*g_engfuncs.pfnRandomLong)(-300,300);
  *(float *)(piVar5[1] + 0x60) = (float)iVar4;
  iVar4 = (*g_engfuncs.pfnRandomLong)(-300,300);
  fStack_c = 0.0;
  uStack_8 = 0;
  *(float *)(piVar5[1] + 100) = (float)iVar4;
  fStack_4 = fVar2 * 0.33;
  FUN_1000c5f0(&fStack_18,fVar2 * gpGlobals->v_forward[0],fVar2 * gpGlobals->v_forward[1],
               fVar2 * gpGlobals->v_forward[2]);
  peVar1 = this->pev;
  FUN_1000c5f0(&fStack_24,peVar1->velocity[0] * 0.9,peVar1->velocity[1] * 0.9,
               peVar1->velocity[2] * 0.9);
  pfVar8 = &fStack_c;
  pfVar7 = &fStack_30;
  this_00 = (void *)FUN_1000c610(&fStack_24,&fStack_3c,&fStack_18);
  puVar6 = (undefined4 *)FUN_1000c610(this_00,pfVar7,pfVar8);
  iVar4 = piVar5[1];
  *(undefined4 *)(iVar4 + 0x20) = *puVar6;
  *(undefined4 *)(iVar4 + 0x24) = puVar6[1];
  *(undefined4 *)(iVar4 + 0x28) = puVar6[2];
  return;
}

/* 10056a90  CBasePlayer::UsePowerUp  (193 bytes)
 * undefined4 UsePowerUp(int * param_1)
 * called by: FUN_10056890, FUN_1005fd90, pfnClientCommand
 */
undefined4 __fastcall CBasePlayer::UsePowerUp(int *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uStack0000000c;
  
  if (*(int *)(param_1[1] + 0x244) == 0) {
    iVar2 = (**(code **)(*param_1 + 0x94))();
    if (((iVar2 != 0) && (uVar1 = param_1[0x1a8], uVar1 != 0)) && (param_1[0x1a7] == 0)) {
      if ((DAT_100ac8d4 == '\0') || ((uVar1 & 9) == 0)) {
        param_1[0x1a7] = uVar1;
        param_1[0x1a9] = (int)((float)param_1[0x1aa] + gpGlobals->time);
        (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc6c,(float *)0x0,*(edict_t **)(param_1[1] + 0x208))
        ;
        lVar3 = __ftol();
        (*g_engfuncs.pfnWriteByte)((int)lVar3);
        uStack0000000c = 0x10056b4a;
        (*g_engfuncs.pfnMessageEnd)();
        return 1;
      }
      TSHudMessageOne(0xc3,0x2d,0x2d,0x10,0x14,s_You_can_t_use_Slow_Motion_now__10099408,param_1[1])
      ;
    }
  }
  return 0;
}

/* 1005a400  CBasePlayer::StartObserver  (766 bytes)
 * undefined StartObserver(void)
 * called by: CBasePlayer::PlayerDeathThink, CTSGameRules::RestartRound, FUN_10038cb0, FUN_100451c0
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
  undefined4 uStack0000005c;
  vec_t in_stack_00000070;
  vec_t in_stack_00000074;
  vec_t in_stack_00000078;
  undefined4 uStack0000008c;
  
  FUN_10042c90((int)this);
  *(undefined4 *)&this->field_0x4bc = *(undefined4 *)&this->field_0x4b8;
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc54,(float *)0x0,this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0x4b8);
  (*g_engfuncs.pfnMessageEnd)();
  *(undefined4 *)&this->field_0x6dc = 0;
  this->pev->iuser4 = 0;
  this->pev->fuser1 = 0.0;
  *(undefined4 *)&this->field_0x158 = 0;
  (*g_engfuncs.pfnMessageBegin)(5,0x17,this->pev->origin,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0x7d);
  uVar3 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(uVar3 & 0xff);
  (*g_engfuncs.pfnMessageEnd)();
  iVar5 = *(int *)&this->field_0x968;
  if (iVar5 != 0) {
    if (*(int *)(iVar5 + 0x78) == 0x10) {
      FUN_10049d30(iVar5);
      FUN_1004d7a0(*(int *)&this->field_0x968);
    }
    (**(code **)(**(int **)&this->field_0x968 + 0x10c))();
  }
  this_00 = &this->field_0x91c;
  bVar2 = FUN_1000c210((uint *)this_00);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    piVar4 = (int *)FUN_1000c220((uint *)this_00);
    (**(code **)(*piVar4 + 0xc0))();
    EHANDLE::operator=((EHANDLE *)this_00,0);
  }
  SetSuitUpdate(this,(byte_conflict *)0x0,0,0);
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc60,(float *)0x0,(edict_t *)0x0);
  iVar5 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(iVar5);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  *(undefined4 *)&this->field_0x94c = 0;
  *(undefined4 *)&this->field_0x948 = 0;
  this->pev->fov = 0.0;
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc28,(float *)0x0,this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  this->pev->effects = 0x80;
  peVar1 = this->pev;
  peVar1->view_ofs[0] = DAT_1009f4a8;
  peVar1->view_ofs[1] = DAT_1009f4ac;
  peVar1->view_ofs[2] = DAT_1009f4b0;
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
  *(uint *)&this->field_0x7a4 = *(uint *)&this->field_0x7a4 & 0xfffffff7;
  this->pev->flags = this->pev->flags & 0xffffbfff;
  this->pev->deadflag = 3;
  this->pev->health = 1.0;
  *(undefined4 *)&this->field_0x90c = 1;
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbbf8,(float *)0x0,(edict_t *)0x0);
  uStack0000005c = 0x1005a66b;
  iVar5 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  uStack0000005c = 0x1005a672;
  (*g_engfuncs.pfnWriteByte)(iVar5);
  sz = (char *)(*this->vtable[0x2c])();
  (*g_engfuncs.pfnWriteString)(sz);
  (*g_engfuncs.pfnMessageEnd)();
  FUN_1002ad70(this,1);
  FUN_100679a0();
  in_stack_00000070 = *(vec_t *)&this->field_0x6e4;
  if (in_stack_00000070 == 0.0) {
    in_stack_00000070 = 2.8026e-45;
  }
  FUN_1005aad0(this,(int)in_stack_00000070);
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc78,(float *)0x0,(edict_t *)0x0);
  iVar5 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteByte)(iVar5);
  (*g_engfuncs.pfnWriteByte)(1);
  uStack0000008c = 0x1005a6f9;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

