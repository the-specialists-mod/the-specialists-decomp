/* mp.dll - CTSGun (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10049cb0  CTSGun::Spawn  (115 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CTSGun::Spawn(int *param_1)

{
  FUN_10049d30((int)param_1);
  *(int *)param_1[1] = (int)s_weapon_tsgun_100986dc - (int)gpGlobals->pStringBase;
  (**(code **)(*param_1 + 0x10))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_w_glock18_mdl_1008f69c);
  param_1[0x29] = 1;
  param_1[0x2d] = 1;
  param_1[0x1e] = 0x10;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x364] = 0;
  param_1[0x365] = 0;
  FUN_1006aa00((int)param_1);
  return;
}

/* 10049d90  CTSGun::Precache  (191 bytes)
 * undefined Precache()
 */
void __fastcall CTSGun::Precache(int param_1)

{
  ushort uVar1;
  
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_fire_sc_10098788);
  *(ushort *)(param_1 + 0xd04) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_coldcock_sc_10098774);
  *(ushort *)(param_1 + 0xd06) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_firelinked_sc_1009875c);
  *(ushort *)(param_1 + 0xd0e) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_empty_sc_1009874c);
  *(ushort *)(param_1 + 0xd08) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_pump_sc_1009873c);
  *(ushort *)(param_1 + 0xd0a) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_closecombat_sc_10098724);
  *(ushort *)(param_1 + 0xd0c) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_reload_sc_10098710);
  *(ushort *)(param_1 + 0xd10) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_knife_sc_10098700);
  *(ushort *)(param_1 + 0xd12) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_katana_sc_100986ec);
  *(ushort *)(param_1 + 0xd14) = uVar1;
  return;
}

/* 1004a530  CTSGun::Deploy  (326 bytes)
 * undefined4 Deploy(void * param_1)
 */
undefined4 __fastcall CTSGun::Deploy(void *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(byte *)((int)param_1 + 0xb8) == 0) {
    FUN_1004d7a0((int)param_1);
    return 1;
  }
  uVar3 = (uint)*(byte *)((int)param_1 + 0xb8);
  *(undefined4 *)((int)param_1 + 0xd8c) = 0;
  iVar5 = uVar3 * 0x30 + 0x104 + (int)param_1;
  *(int *)((int)param_1 + 0xbc) = iVar5;
  *(undefined4 **)((int)param_1 + 0xc0) = &DAT_100bbea8 + uVar3 * 0xfd;
  *(uint *)(iVar5 + 0x28) = uVar3 * 0x3f4 + 0x100bc112;
  iVar5 = *(int *)((int)param_1 + 0xbc);
  iVar4 = FUN_100490f0((uint)*(byte *)((int)param_1 + 0xb8),*(uint *)(iVar5 + 0x10));
  *(int *)(iVar5 + 0x18) = iVar4;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x114) =
       *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 0x18);
  *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 8) = 0;
  *(undefined1 *)(*(int *)((int)param_1 + 0xbc) + 0x2c) = 0;
  iVar5 = *(int *)(*(int *)((int)param_1 + 0xbc) + 0x28);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)*(short *)(iVar5 + 4);
  }
  iVar2 = *(int *)((int)param_1 + 0xc0);
  iVar4 = iVar2 + 0x1aa;
  if ((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) {
    iVar4 = iVar2 + 0x16a;
  }
  FUN_10064ba0(param_1,iVar2 + 0x12a,iVar4,iVar5,(char *)(iVar2 + 0x22a),0,
               *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x114));
  CTSAnimation::Animate
            ((CTSAnimation *)(*(int **)((int)param_1 + 0x70) + 0x9d),*(int **)((int)param_1 + 0x70),
             0x33);
  cVar1 = *(char *)(*(byte *)((int)param_1 + 0xb8) + 0x41e + *(int *)((int)param_1 + 0x70));
  if ('\0' < cVar1) {
    *(char *)(*(int *)((int)param_1 + 0xbc) + 2) = cVar1 + -1;
    return 1;
  }
  *(char *)(*(byte *)((int)param_1 + 0xb8) + 0x41e + *(int *)((int)param_1 + 0x70)) =
       *(char *)(*(int *)((int)param_1 + 0xbc) + 2) + '\x01';
  return 1;
}

/* 1004a800  CTSGun::SecondaryAttack  (583 bytes)
 * undefined SecondaryAttack()
 */
void __fastcall CTSGun::SecondaryAttack(int *param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = param_1[0x2f];
  if (iVar4 == 0) {
    if ((*(uint *)(param_1[0x1c] + 0x770) & 0x800) != 0) {
      FUN_1004de10((int)param_1);
      return;
    }
  }
  else {
    iVar1 = param_1[0x30];
    if (*(char *)(iVar1 + 0x360) == '\x02') {
      *(undefined1 *)(iVar4 + 0x24) = 1;
      FUN_1004c020(param_1);
      return;
    }
    if (*(char *)(iVar1 + 0x360) == '\x03') {
      if ((*(uint *)(param_1[0x1c] + 0x770) & 0x800) != 0) {
        *(undefined1 *)(iVar4 + 0x24) = 1;
        FUN_1004c6c0(param_1);
        return;
      }
    }
    else if (*(char *)(iVar4 + 2) == '\x04') {
      if (((*(uint *)(param_1[0x1c] + 0x770) & 0x800) != 0) ||
         (uVar3 = FUN_10042c40(param_1[0x1c]), uVar3 != 0)) {
        FUN_1004ac20(param_1);
        return;
      }
    }
    else {
      if (*(char *)(iVar4 + 2) == '\x05') {
        FUN_1004ac20(param_1);
        return;
      }
      if ((*(byte *)(iVar4 + 0x10) & 8) == 0) {
        if (*(char *)(iVar4 + 0x2c) == '\0') {
          if (*(short *)(iVar1 + 0x2a4) != -1) {
            *(undefined1 *)(iVar4 + 0x2c) = 1;
            if (*(int *)(param_1[0x2f] + 0x28) == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = (int)*(short *)(*(int *)(param_1[0x2f] + 0x28) + 0xe);
            }
            (**(code **)(*param_1 + 0x150))(iVar4,1,*(undefined4 *)(param_1[1] + 0x114));
            *(int *)(param_1[0x2f] + 0x28) = param_1[0x30] + 0x2a4;
          }
        }
        else if (*(short *)(iVar1 + 0x2a4) != -1) {
          *(undefined1 *)(iVar4 + 0x2c) = 0;
          if (*(int *)(param_1[0x2f] + 0x28) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = (int)*(short *)(*(int *)(param_1[0x2f] + 0x28) + 0xe);
          }
          (**(code **)(*param_1 + 0x150))(iVar4,1,*(undefined4 *)(param_1[1] + 0x114));
          *(int *)(param_1[0x2f] + 0x28) = param_1[0x30] + 0x26a;
        }
      }
      else {
        iVar4 = *(int *)(param_1[0x1c] + 4);
        if (*(float *)(iVar4 + 0x214) == 0.0) {
          if ((*(int *)(iVar1 + 0x3c) != 0) &&
             (*(float *)(iVar4 + 0x214) = (float)*(int *)(iVar1 + 0x3c),
             *(int *)(param_1[0x30] + 0x3c) < 0x28)) {
            *(undefined4 *)(*(int *)(param_1[0x1c] + 4) + 0xbc) = 0;
          }
        }
        else if ((*(int *)(iVar1 + 0x40) == 0) ||
                (fVar2 = (float)*(int *)(iVar1 + 0x40), fVar2 == *(float *)(iVar4 + 0x214))) {
          *(undefined4 *)(iVar4 + 0x214) = 0;
          if (*(int *)(*(int *)(param_1[0x1c] + 4) + 0xbc) == 0) {
            *(int *)(*(int *)(param_1[0x1c] + 4) + 0xbc) =
                 (param_1[0x30] - (int)gpGlobals->pStringBase) + 0x12a;
          }
        }
        else {
          *(float *)(iVar4 + 0x214) = fVar2;
        }
      }
      fVar5 = FUN_10066590();
      param_1[0x24] = (int)(float)(fVar5 + (float10)0.3);
      fVar5 = FUN_10066590();
      param_1[0x26] = (int)(float)(fVar5 + (float10)1.0);
    }
  }
  return;
}

/* 1004aa50  CTSGun::PrimaryAttack  (227 bytes)
 * undefined PrimaryAttack(int * param_1)
 */
void __fastcall CTSGun::PrimaryAttack(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[0x2f];
  if (iVar2 == 0) {
    if ((*(byte *)(param_1[0x1c] + 0x770) & 1) != 0) {
      FUN_1004de10((int)param_1);
      return;
    }
  }
  else {
    cVar1 = *(char *)(param_1[0x30] + 0x360);
    if (cVar1 == '\x02') {
      *(undefined1 *)(iVar2 + 0x24) = 0;
      FUN_1004c020(param_1);
      return;
    }
    if (cVar1 == '\x03') {
      if ((*(byte *)(param_1[0x1c] + 0x770) & 1) != 0) {
        *(undefined1 *)(iVar2 + 0x24) = 0;
        FUN_1004c6c0(param_1);
        return;
      }
    }
    else {
      if (cVar1 != '\n') {
        cVar1 = *(char *)(iVar2 + 2);
        if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
          if (((*(byte *)(param_1[0x1c] + 0x770) & 1) == 0) &&
             (uVar3 = FUN_10042c40(param_1[0x1c]), uVar3 == 0)) {
            return;
          }
        }
        else if ((cVar1 != '\0') && (cVar1 != '\x05')) {
          if (cVar1 != '\x02') {
            if (cVar1 != '\x03') {
              return;
            }
            if ((*(byte *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 1) == 0) {
              return;
            }
            FUN_1004ac20(param_1);
            return;
          }
          if ((*(byte *)(param_1[0x1c] + 0x770) & 1) == 0) {
            return;
          }
          if (*(int *)(iVar2 + 8) != 0) {
            return;
          }
          *(undefined4 *)(iVar2 + 8) = 3;
          return;
        }
        FUN_1004ac20(param_1);
        return;
      }
      if ((*(byte *)(param_1[0x1c] + 0x770) & 1) != 0) {
        FUN_1004c090((int)param_1);
        return;
      }
    }
  }
  return;
}

/* 1004ab40  CTSGun::AlternateAttack  (767 bytes)
 * undefined AlternateAttack()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CTSGun::AlternateAttack(CTSGun *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined4 uVar6;
  undefined4 uVar7;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  float10 fVar8;
  float fVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  float fVar12;
  float *pfVar13;
  float fVar14;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  char *pcVar15;
  
  if ((*(int *)&param_1->field_0xbc != 0) &&
     (*(char *)(*(int *)&param_1->field_0xc0 + 0x10) != '\0')) {
    if ((DAT_100b1ddc & 1) == 0) {
      DAT_100b1ddc = DAT_100b1ddc | 1;
      FUN_1006ee3b(FUN_1004b040);
    }
    if ((DAT_100b1ddc & 2) == 0) {
      DAT_100b1ddc = DAT_100b1ddc | 2;
      FUN_1006ee3b(FUN_1004b030);
    }
    if ((DAT_100b1ddc & 4) == 0) {
      DAT_100b1ddc = DAT_100b1ddc | 4;
      FUN_1006ee3b(FUN_1004b020);
    }
    if (*(int *)&param_1->field_0xbc != 0) {
      DAT_100b1dc0 = -1;
      FUN_10066df0();
      if ((*(int *)&param_1->field_0xbc != 0) && (*(int *)&param_1->field_0xc0 != 0)) {
        if (*(char *)(*(int *)&param_1->field_0xc0 + 0x360) == '\x02') {
          GrenadeIdle(param_1,(int *)0x1);
        }
        *(undefined4 *)(*(int *)&param_1->field_0xbc + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_1->field_0xbc + 8) = 0;
      }
      _DAT_100b2228 = 0.725;
      uVar1 = FUN_10042c10(*(int *)&param_1->field_0x70);
      if (uVar1 == 0) {
        fVar8 = (float10)FUN_100551c0(*(int *)&param_1->field_0x70);
        fVar8 = fVar8 * (float10)_DAT_100b2228;
      }
      else {
        fVar8 = (float10)_DAT_100b2228 * (float10)6.6666665;
      }
      _DAT_100b2228 = (float)fVar8;
      fVar8 = FUN_10066590();
      fVar8 = fVar8 + (float10)_DAT_100b2228;
      *(float *)&param_1->field_0x94 = (float)fVar8;
      *(float *)&param_1->field_0x90 = (float)fVar8;
      *(float *)&param_1->field_0x8c = (float)fVar8;
      fVar8 = FUN_10066590();
      *(float *)&param_1->field_0x98 = (float)(fVar8 + (float10)2.0);
      puVar2 = (undefined4 *)(**(code **)(**(int **)&param_1->field_0x70 + 0x144))();
      _DAT_100bbe90 = *puVar2;
      _DAT_100bbe94 = puVar2[1];
      _DAT_100bbe98 = puVar2[2];
      _DAT_100b1e5c = gpGlobals->v_forward[0];
      _DAT_100b1e60 = gpGlobals->v_forward[1];
      _DAT_100b1e64 = gpGlobals->v_forward[2];
      FUN_1000a540(auStack_40,gpGlobals->v_forward);
      pfVar13 = (float *)&stack0xfffffff0;
      fVar14 = 38.0;
      fVar12 = 2.6167177e-29;
      pfVar3 = (float *)FUN_10014e80(gpGlobals->v_forward,pfVar13,38.0);
      puVar10 = &stack0xffffffb4;
      fVar9 = 2.6167228e-29;
      FUN_1000c610(&DAT_100bbe90,(float *)&stack0xffffffb4,pfVar3);
      FUN_1000a540(&stack0xffffffa8,(undefined4 *)&DAT_100bbe90);
      piVar4 = FUN_100572a0(*(void **)&param_1->field_0x70,fVar9,puVar10,pfVar3,fVar12,
                            (float)pfVar13,fVar14);
      if (piVar4 == (int *)0x0) {
        uVar6 = *(undefined4 *)(*(int *)(*(int *)&param_1->field_0x70 + 4) + 0x208);
        iVar5 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        iVar5 = iVar5 + 0x5f;
        pcVar15 = s_player_closecombat_wav_100987c4;
        this = extraout_ECX;
      }
      else {
        uVar6 = *(undefined4 *)(*(int *)(*(int *)&param_1->field_0x70 + 4) + 0x208);
        iVar5 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        iVar5 = iVar5 + 0x3c;
        pcVar15 = s_player_kevlarhit_wav_100987ac;
        this = extraout_ECX_00;
      }
      uStack_38 = 0x1004af78;
      EMIT_SOUND_DYN(this,uVar6,4,pcVar15,0x3f800000,0x3f4ccccd,0,iVar5);
      (*param_1->vtable[0x54])();
      iVar5 = *(int *)&param_1->field_0x70;
      FUN_1004abf0(auStack_40,&DAT_1009f4a8);
      FUN_1004abf0(&stack0xffffffb4,&DAT_1009f4a8);
      uVar6 = CONCAT22(extraout_var,*(undefined2 *)&param_1->field_0xd06);
      uVar11 = 0;
      uVar7 = FUN_1004ac10(iVar5);
      FUN_10048ff0(iVar5,1,uVar7,uVar6,uVar11);
      if (-1 < DAT_100b1dc0) {
        CTSAnimation::Animate
                  ((CTSAnimation *)(*(int **)&param_1->field_0x70 + 0x9d),
                   *(int **)&param_1->field_0x70,DAT_100b1dc0);
      }
    }
    return;
  }
  return;
}

/* 1004d0e0  CTSGun::Reload  (382 bytes)
 * undefined Reload(int * param_1)
 */
void __fastcall CTSGun::Reload(int *param_1)

{
  char cVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined4 uVar5;
  undefined4 uVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined1 auStack_2c [12];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  
  iVar4 = param_1[0x2f];
  if (iVar4 == 0) {
    FUN_1004dc70((int)param_1);
    return;
  }
  iVar2 = param_1[0x30];
  cVar1 = *(char *)(iVar2 + 0x360);
  if (cVar1 == '\x02') {
    return;
  }
  if (cVar1 == '\x03') {
    return;
  }
  if ((cVar1 == '\x01') && (*(short *)(iVar2 + 200) != 0x24)) {
    FUN_1004cea0(param_1);
    return;
  }
  if (param_1[*(byte *)(iVar2 + 8) + 0x31] < 1) {
    return;
  }
  if (*(int *)(iVar4 + 8) != 0) {
    return;
  }
  if (((char)param_1[0x2e] == '!') && (0 < *(int *)(iVar4 + 4))) {
    if (*(int *)(iVar4 + 0x28) != 0) {
      sVar3 = *(short *)(*(int *)(iVar4 + 0x28) + 0x10);
      goto LAB_1004d175;
    }
  }
  else if (*(int *)(iVar4 + 0x28) != 0) {
    sVar3 = *(short *)(*(int *)(iVar4 + 0x28) + 2);
    goto LAB_1004d175;
  }
  sVar3 = 0;
LAB_1004d175:
  uStack_18 = 0x1004d188;
  iVar4 = FUN_1004ce20(param_1,*(int *)(iVar2 + 4),(int)sVar3);
  if (iVar4 != 0) {
    fVar7 = FUN_10066590();
    param_1[0x26] = (int)(float)(fVar7 + (float10)5.0);
    *(undefined4 *)(*(int *)(param_1[0x1c] + 4) + 0x214) = 0;
    if (*(int *)(*(int *)(param_1[0x1c] + 4) + 0xbc) == 0) {
      *(int *)(*(int *)(param_1[0x1c] + 4) + 0xbc) =
           (param_1[0x30] - (int)gpGlobals->pStringBase) + 0x12a;
    }
    uStack_18 = (uint)*(byte *)(param_1 + 0x2e);
    iVar4 = param_1[0x1c];
    uStack_1c = 0;
    uStack_20 = 0;
    uStack_34 = 0x1004d204;
    FUN_1004abf0(auStack_2c,&DAT_1009f4a8);
    FUN_1004abf0(auStack_38,&DAT_1009f4a8);
    uVar5 = CONCAT22(extraout_var,(short)param_1[0x344]);
    uVar8 = 0;
    uVar6 = FUN_1004ac10(iVar4);
    FUN_10048ff0(iVar4,1,uVar6,uVar5,uVar8);
    CTSAnimation::Animate((CTSAnimation *)((int *)param_1[0x1c] + 0x9d),(int *)param_1[0x1c],0x32);
    if (*(short *)(param_1[0x30] + 200) == 0x24) {
      *(undefined1 *)(param_1[0x2f] + 0x24) = 0;
    }
  }
  return;
}

/* 1004d260  CTSGun::GrenadeIdle  (1024 bytes)
 * undefined GrenadeIdle(int * param_1)
 * called by: CTSGun::AlternateAttack, CTSGun::WeaponIdle, FUN_1004d7a0, FUN_10056080
 */
void __thiscall CTSGun::GrenadeIdle(CTSGun *this,int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float10 fVar5;
  undefined1 auStack_54 [8];
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar4 = param_1;
  iVar1 = *(int *)&this->field_0xbc;
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 8) == 1) {
    iVar1 = *(int *)(*(int *)&this->field_0x70 + 4);
    if (((*(uint *)(iVar1 + 0x180) & 0x801) != 0) && (param_1 == (int *)0x0)) {
      return;
    }
    fVar2 = *(float *)(iVar1 + 0x74);
    if (0.0 <= fVar2) {
      fVar3 = 1.1111112;
    }
    else {
      fVar3 = 0.8888889;
    }
    param_1 = (int *)((90.0 - (fVar2 * fVar3 - 10.0)) * 7.0);
    if (750.0 < (float)param_1) {
      param_1 = (int *)0x443b8000;
    }
    FUN_10066df0();
    iVar1 = *(int *)(*(int *)&this->field_0x70 + 4);
    if (*(char *)(*(int *)&this->field_0xbc + 0x24) == '\0') {
      fStack_18 = *(float *)(iVar1 + 0x174) + *(float *)(iVar1 + 8);
      fStack_14 = *(float *)(iVar1 + 0x178) + *(float *)(iVar1 + 0xc);
      fStack_10 = *(float *)(iVar1 + 0x17c) + *(float *)(iVar1 + 0x10);
      fStack_8 = (float)param_1 * gpGlobals->v_forward[1];
      fStack_1c = (float)param_1 * gpGlobals->v_forward[2];
      fStack_c = (float)param_1 * gpGlobals->v_forward[0] + *(float *)(iVar1 + 0x20);
    }
    else {
      fStack_18 = *(float *)(iVar1 + 8);
      fStack_14 = *(float *)(iVar1 + 0xc);
      fStack_10 = *(float *)(iVar1 + 0x10);
      fVar2 = (float)param_1 * 0.6666667;
      fStack_8 = fVar2 * gpGlobals->v_forward[1];
      fStack_1c = fVar2 * gpGlobals->v_forward[2];
      fStack_c = fVar2 * gpGlobals->v_forward[0] + *(float *)(iVar1 + 0x20);
    }
    fStack_14 = fStack_14 + gpGlobals->v_forward[1] * 16.0;
    fStack_18 = fStack_18 + gpGlobals->v_forward[0] * 16.0;
    fStack_10 = fStack_10 + gpGlobals->v_forward[2] * 16.0;
    fStack_8 = fStack_8 + *(float *)(iVar1 + 0x24);
    fStack_4 = fStack_1c + *(float *)(iVar1 + 0x28);
    if (*(int *)(*(int *)&this->field_0xc0 + 0x20) == 4) {
      fStack_48 = fStack_c;
      FUN_1000a540(auStack_54,&fStack_18);
      param_1 = CM61Grenade::CreateGrenade(*(int *)&this->field_0x70,0x40400000);
    }
    if (*(char *)(*(int *)&this->field_0xbc + 0x24) == '\0') {
      if (param_1 != (int *)0x0) {
        *(undefined4 *)(param_1[1] + 0x5c) = 0x43480000;
      }
    }
    else if (param_1 != (int *)0x0) {
      *(undefined4 *)(param_1[1] + 0x120) = 0x3ecccccd;
      *(undefined4 *)(param_1[1] + 0x60) = 0x44160000;
      *(undefined4 *)(param_1[1] + 0x5c) = 0xc2c80000;
    }
    iVar1 = *(int *)(*(int *)&this->field_0xbc + 0x28);
    if (iVar1 == 0) {
      fStack_48 = 0.0;
    }
    else {
      fStack_48 = (float)(int)*(short *)(iVar1 + ((*(char *)(*(int *)&this->field_0xbc + 0x24) !=
                                                  '\0') + 0x14) * 2);
    }
    uStack_4c = 0x1004d516;
    (*this->vtable[0x54])();
    fStack_48 = 2.6196616e-29;
    CTSAnimation::Animate
              ((CTSAnimation *)(*(int **)&this->field_0x70 + 0x9d),*(int **)&this->field_0x70,0x34);
    fVar5 = FUN_10066590();
    *(float *)&this->field_0x90 = (float)(fVar5 + (float10)0.5);
    *(float *)&this->field_0x8c = (float)(fVar5 + (float10)0.5);
    fVar5 = FUN_10066590();
    *(float *)&this->field_0x98 = (float)(fVar5 + (float10)0.5);
    if (*(int *)(*(int *)&this->field_0xbc + 4) == 1) {
      *(undefined4 *)(*(int *)(*(int *)&this->field_0x70 + 4) + 0xc0) = 0;
    }
    if (piVar4 == (int *)0x0) {
      *(undefined4 *)(*(int *)&this->field_0xbc + 8) = 2;
    }
    else {
      *(undefined4 *)(*(int *)&this->field_0xbc + 8) = 0;
    }
    *(int *)(*(int *)&this->field_0xbc + 4) = *(int *)(*(int *)&this->field_0xbc + 4) + -1;
    if (piVar4 == (int *)0x0) {
      return;
    }
  }
  else {
    if (*(int *)(iVar1 + 8) != 2) {
      fVar5 = FUN_10066590();
      *(float *)&this->field_0x98 = (float)(fVar5 + (float10)3.0);
      return;
    }
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  *(uint *)(*(int *)&this->field_0x70 + 0x4c0) =
       *(int *)(*(int *)&this->field_0x70 + 0x4c0) +
       (uint)*(byte *)(*(int *)&this->field_0xc0 + 0xca);
  fVar5 = FUN_100436e0(*(int *)&this->field_0x70);
  FUN_100557b0(*(void **)&this->field_0x70,(float)fVar5);
  if (*(int *)(*(int *)&this->field_0xbc + 4) < 1) {
    fStack_48 = 2.619753e-29;
    FUN_10049fb0(this,(uint)(byte)this->field_0xb8,'\x01');
    return;
  }
  iVar1 = *(int *)(*(int *)&this->field_0xbc + 0x28);
  if (iVar1 == 0) {
    fStack_48 = 0.0;
  }
  else {
    fStack_48 = (float)(int)*(short *)(iVar1 + 4);
  }
  uStack_4c = 0x1004d62b;
  (*this->vtable[0x54])();
  uStack_4c = 0x1004d630;
  fVar5 = FUN_10066590();
  *(float *)&this->field_0x98 = (float)(fVar5 + (float10)2.0);
  return;
}

/* 1004d660  CTSGun::WeaponIdle  (299 bytes)
 * undefined WeaponIdle(int * param_1)
 */
void __fastcall CTSGun::WeaponIdle(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = param_1[0x2f];
  if (iVar1 == 0) {
    FUN_1004dc40((int)param_1);
    return;
  }
  param_1[0x29] = *(int *)(iVar1 + 4);
  if (*(char *)(iVar1 + 0x2c) == '\0') {
    *(int *)(iVar1 + 0x28) = param_1[0x30] + 0x26a;
  }
  else {
    *(int *)(iVar1 + 0x28) = param_1[0x30] + 0x2a4;
  }
  if ((*(char *)(param_1[0x30] + 0x360) == '\x01') && (*(int *)(param_1[0x2f] + 8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1004d6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x164))();
    return;
  }
  iVar1 = param_1[0x2f];
  if ((*(char *)(iVar1 + 2) == '\x02') &&
     ((float)param_1[0x23] < 0.0 != ((float)param_1[0x23] == 0.0))) {
    if (*(int *)(iVar1 + 8) < 1) {
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    else {
      FUN_1004ac20(param_1);
      *(int *)(param_1[0x2f] + 8) = *(int *)(param_1[0x2f] + 8) + -1;
    }
  }
  fVar2 = FUN_10066590();
  if ((float10)(float)param_1[0x26] <= fVar2) {
    if (*(char *)(param_1[0x30] + 0x360) == '\x02') {
      GrenadeIdle((CTSGun *)param_1,(int *)0x0);
      return;
    }
    if (*(int *)(param_1[0x2f] + 4) < 1) {
                    /* WARNING: Could not recover jumptable at 0x1004d747. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x164))();
      return;
    }
    fVar2 = FUN_10066590();
    param_1[0x26] = (int)(float)(fVar2 + (float10)3.0);
    if (*(short **)(param_1[0x2f] + 0x28) == (short *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)**(short **)(param_1[0x2f] + 0x28);
    }
    (**(code **)(*param_1 + 0x150))(iVar1,0,*(undefined4 *)(param_1[1] + 0x114));
  }
  return;
}

/* 1004d790  CTSGun::Holster  (8 bytes)
 * undefined Holster()
 */
void __fastcall CTSGun::Holster(int param_1)

{
  FUN_1004d7a0(param_1);
  return;
}

/* 1004d8c0  CTSGun::UpdateClientData  (783 bytes)
 * undefined UpdateClientData()
 */
undefined4 __thiscall CTSGun::UpdateClientData(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  if (gpGlobals->time < *(float *)(param_1 + 0xd8c)) {
    return 0;
  }
  DAT_100b2218 = '\0';
  *(float *)(param_1 + 0xd8c) = gpGlobals->time + 0.1;
  DAT_100bbea0 = 0x3f;
  do {
    cVar1 = *(char *)(DAT_100bbea0 * 0x30 + 0x104 + param_1);
    if (*(char *)(DAT_100bbea0 + 0xd4c + param_1) != cVar1) {
      *(char *)(DAT_100bbea0 + 0xd4c + param_1) = cVar1;
      (*g_engfuncs.pfnMessageBegin)
                (1,DAT_100cbc5c,(float *)0x0,*(edict_t **)(*(int *)(param_2 + 4) + 0x208));
      (*g_engfuncs.pfnWriteByte)(DAT_100bbea0);
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(DAT_100bbea0 * 0x30 + 0x104 + param_1));
      (*g_engfuncs.pfnMessageEnd)();
    }
    DAT_100bbea0 = DAT_100bbea0 + -1;
  } while (-1 < DAT_100bbea0);
  puVar2 = *(undefined4 **)(param_1 + 0xbc);
  if (puVar2 == (undefined4 *)0x0) {
    if (*(char *)(param_1 + 0xb8) != *(char *)(param_1 + 0xd16)) {
      *(char *)(param_1 + 0xd16) = *(char *)(param_1 + 0xb8);
      (*g_engfuncs.pfnMessageBegin)
                (1,DAT_100cbc40,(float *)0x0,*(edict_t **)(*(int *)(param_2 + 4) + 0x208));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(param_1 + 0xb8));
      lVar6 = __ftol();
      (*g_engfuncs.pfnWriteByte)((int)lVar6);
      (*g_engfuncs.pfnWriteShort)(0);
      (*g_engfuncs.pfnWriteByte)(0);
      (*g_engfuncs.pfnWriteByte)(0);
      (*g_engfuncs.pfnMessageEnd)();
    }
    return 0;
  }
  if (*(char *)(param_1 + 0xb8) != *(char *)(param_1 + 0xd16)) {
    DAT_100b2218 = '\x01';
    puVar2 = *(undefined4 **)(param_1 + 0xbc);
    *(undefined1 *)(param_1 + 0xd16) = *(undefined1 *)(param_1 + 0xb8);
    puVar4 = puVar2;
    puVar5 = (undefined4 *)(param_1 + 0xd18);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)(param_1 + 0xd48) =
         *(undefined4 *)(param_1 + 0xc4 + (uint)*(byte *)(*(int *)(param_1 + 0xc0) + 8) * 4);
  }
  if (*(int *)(param_1 + 0xd48) !=
      *(int *)(param_1 + 0xc4 + (uint)*(byte *)(*(int *)(param_1 + 0xc0) + 8) * 4)) {
    DAT_100b2218 = '\x01';
    puVar2 = *(undefined4 **)(param_1 + 0xbc);
    puVar4 = puVar2;
    puVar5 = (undefined4 *)(param_1 + 0xd18);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)(param_1 + 0xd48) =
         *(undefined4 *)(param_1 + 0xc4 + (uint)*(byte *)(*(int *)(param_1 + 0xc0) + 8) * 4);
  }
  if (*(char *)(param_1 + 0xd1a) != *(char *)((int)puVar2 + 2)) {
    DAT_100b2218 = '\x01';
    puVar2 = *(undefined4 **)(param_1 + 0xbc);
    puVar4 = puVar2;
    puVar5 = (undefined4 *)(param_1 + 0xd18);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if (*(int *)(param_1 + 0xd28) != puVar2[4]) {
    DAT_100b2218 = '\x01';
    puVar2 = *(undefined4 **)(param_1 + 0xbc);
    puVar4 = puVar2;
    puVar5 = (undefined4 *)(param_1 + 0xd18);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if (DAT_100b2218 != '\0') {
    (*g_engfuncs.pfnMessageBegin)
              (1,DAT_100cbc40,(float *)0x0,*(edict_t **)(*(int *)(param_2 + 4) + 0x208));
    (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(param_1 + 0xb8));
    (*g_engfuncs.pfnWriteByte)(*(int *)(param_1 + 0xd1c));
    (*g_engfuncs.pfnWriteShort)(*(int *)(param_1 + 0xd48));
    (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(param_1 + 0xd1a));
    (*g_engfuncs.pfnWriteByte)(*(int *)(param_1 + 0xd28));
    (*g_engfuncs.pfnMessageEnd)();
    return 1;
  }
  if (*(int *)(param_1 + 0xd1c) != puVar2[1]) {
    (*g_engfuncs.pfnMessageBegin)
              (1,DAT_100cbc44,(float *)0x0,*(edict_t **)(*(int *)(param_2 + 4) + 0x208));
    (*g_engfuncs.pfnWriteByte)(*(int *)(*(int *)(param_1 + 0xbc) + 4));
    (*g_engfuncs.pfnMessageEnd)();
    *(undefined4 *)(param_1 + 0xd1c) = *(undefined4 *)(*(int *)(param_1 + 0xbc) + 4);
  }
  return 1;
}

/* 1004dbd0  CTSGun::GetItemInfo  (99 bytes)
 * undefined GetItemInfo()
 */
undefined4 __thiscall CTSGun::GetItemInfo(int param_1,undefined4 *param_2)

{
  param_2[6] = gpGlobals->pStringBase + **(int **)(param_1 + 4);
  param_2[3] = 0xffffffff;
  param_2[5] = 0xffffffff;
  param_2[7] = 0xffffffff;
  param_2[2] = 0;
  param_2[4] = 0;
  *param_2 = 1;
  param_2[1] = 2;
  param_2[9] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x10;
  param_2[8] = 0x10;
  param_2[10] = 1;
  return 1;
}

/* 1004edb0  CTSGun::iItemSlot  (6 bytes)
 * undefined iItemSlot()
 */
undefined4 CTSGun::iItemSlot(void)

{
  return 2;
}

/* 1004edc0  CTSGun::UseDecrement  (6 bytes)
 * undefined UseDecrement()
 */
undefined4 CTSGun::UseDecrement(void)

{
  return 1;
}

/* 1004edd0  CTSGun::ShouldWeaponIdle  (6 bytes)
 * undefined ShouldWeaponIdle()
 */
undefined4 CTSGun::ShouldWeaponIdle(void)

{
  return 1;
}

