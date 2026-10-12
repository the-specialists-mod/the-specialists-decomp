/* mp.dll - CTSKnife (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10048010  CTSKnife::CreateKnife  (235 bytes)
 * int * CreateKnife(int param_1, int param_2, int param_3, int param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, int param_8)
 * called by: FUN_1004c6c0
 */
int * __cdecl
CTSKnife::CreateKnife
          (int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6,
          undefined4 param_7,int param_8)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)GetClassPtr<CTSKnife>(0);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar2[0x24] = param_8;
  (**(code **)(*piVar2 + 0xc))();
  *(int *)piVar2[1] = (int)&DAT_100983c4 - (int)gpGlobals->pStringBase;
  iVar1 = piVar2[1];
  piVar2[0x1f] = *(int *)(*(int *)(param_1 + 4) + 0x208);
  *(int *)(iVar1 + 8) = param_2;
  *(int *)(iVar1 + 0xc) = param_3;
  *(int *)(iVar1 + 0x10) = param_4;
  FUN_100679a0();
  iVar1 = piVar2[1];
  *(undefined4 *)(iVar1 + 0x20) = param_5;
  *(undefined4 *)(iVar1 + 0x24) = param_6;
  *(undefined4 *)(iVar1 + 0x28) = param_7;
  piVar2[0x21] = param_2;
  *(undefined1 *)((int)piVar2 + 0x81) = 0;
  piVar2[0x22] = param_3;
  piVar2[0x23] = param_4;
  if (*(float *)(param_1 + 0x168) != 0.0) {
    *(undefined4 *)(piVar2[1] + 0x254) = *(undefined4 *)(param_1 + 0x168);
    return piVar2;
  }
  *(undefined4 *)(piVar2[1] + 0x254) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x254);
  return piVar2;
}

/* 10048100  CTSKnife::Spawn  (296 bytes)
 * undefined Spawn()
 */
void __fastcall CTSKnife::Spawn(int param_1)

{
  float fVar1;
  edict_t *e;
  
  FUN_10046a10(param_1);
  e = *(edict_t **)(*(int *)(param_1 + 4) + 0x208);
  if (*(int *)(param_1 + 0x90) == 6) {
    (*g_engfuncs.pfnSetModel)(e,s_models_w_knife_mdl_1008f8e4);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x11c) = 0x3f666666;
  }
  else {
    (*g_engfuncs.pfnSetModel)(e,s_models_w_sealknife_mdl_100900c8);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x11c) = 0x3e800000;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x120) = 0x3f4ccccd;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 10;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 2;
  FUN_10067970();
  *(code **)(param_1 + 0x10) = FUN_10048fd0;
  *(code **)(param_1 + 0x14) = FUN_10048fc0;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x254) = 0;
  fVar1 = gpGlobals->time;
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(float *)(param_1 + 0x78) = fVar1 + 30.0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x250) = 0;
  *(uint *)(*(int *)(param_1 + 4) + 0x250) = *(uint *)(*(int *)(param_1 + 4) + 0x250) | 1;
  return;
}

/* 10048230  CTSKnife::WaitTouch  (181 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSKnife::WaitTouch(class CBaseEntity *) */

void __thiscall CTSKnife::WaitTouch(CTSKnife *this,CBaseEntity *param_1)

{
  float fVar1;
  float fVar2;
  entvars_t *peVar3;
  
                    /* 0x48230  143  ?WaitTouch@CTSKnife@@QAEXPAVCBaseEntity@@@Z */
  peVar3 = this->pev;
  if ((peVar3->flags & 0x200U) != 0) {
    fVar1 = peVar3->velocity[1];
    fVar2 = peVar3->velocity[2];
    peVar3->velocity[0] = peVar3->velocity[0] * 0.5;
    peVar3->velocity[1] = fVar1 * 0.5;
    peVar3->velocity[2] = fVar2 * 0.5;
    peVar3 = this->pev;
    if (SQRT(peVar3->velocity[2] * peVar3->velocity[2] +
             peVar3->velocity[1] * peVar3->velocity[1] + peVar3->velocity[0] * peVar3->velocity[0])
        < 32.0) {
      peVar3->angles[0] = 0.0;
      this->pev->angles[2] = 0.0;
      peVar3 = this->pev;
      peVar3->velocity[0] = DAT_1009f4a8;
      peVar3->velocity[1] = DAT_1009f4ac;
      peVar3->velocity[2] = DAT_1009f4b0;
    }
  }
  return;
}

/* 100482f0  CTSKnife::Use  (144 bytes)
 * undefined Use(int * param_1)
 */
void __thiscall CTSKnife::Use(CTSKnife *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((((this->field_0x80 == '\0') && (iVar1 = (**(code **)(*param_1 + 0xa8))(), iVar1 != 0)) &&
      (iVar1 = (**(code **)(*param_1 + 0x94))(), iVar1 != 0)) &&
     (-1 < *(char *)(param_1[1] + 0x118))) {
    if (gpGlobals->time < *(float *)&this->field_0x78) {
      if (*(int *)&this->field_0x90 == 6) {
        uVar2 = 0x19;
      }
      else {
        uVar2 = 0x23;
      }
      iVar1 = CBasePlayer::PickUpWeapon((CBasePlayer *)param_1,uVar2,(undefined4 *)0x0,0,'\0');
      if (iVar1 == 0) {
        return;
      }
    }
    *(float *)&this->field_0x78 = gpGlobals->time;
    RemoveEntityFromSlowedArray((int)this);
    UTIL_Remove((int)this);
  }
  return;
}

/* 10048380  CTSKnife::BounceTouch  (2273 bytes)
 * void BounceTouch(CBaseEntity * param_1)
 */
/* public: virtual void __thiscall CTSKnife::BounceTouch(class CBaseEntity *) */

void __thiscall CTSKnife::BounceTouch(CTSKnife *this,CBaseEntity *param_1)

{
  edict_t *peVar1;
  int iVar2;
  vec_t *pvVar3;
  void *this_00;
  void *this_01;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *pvVar4;
  entvars_t *peVar5;
  char *pcVar6;
  entvars_t *peVar7;
  char *pcVar8;
  bool bVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_54;
  undefined4 uStack_50;
  float in_stack_ffffffbc;
  float fStack_40;
  float fStack_3c;
  undefined4 local_38 [9];
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
                    /* 0x48380  9  ?BounceTouch@CTSKnife@@UAEXPAVCBaseEntity@@@Z */
  this->pev->nextthink = gpGlobals->time + 0.1;
  if (*(int *)(*(int *)(param_1 + 4) + 0x208) == *(int *)&this->field_0x7c) {
    return;
  }
  if (*(char *)(*(int *)(param_1 + 4) + 0x118) < '\0') {
    return;
  }
  peVar5 = this->pev;
  if (SQRT(peVar5->velocity[1] * peVar5->velocity[1] +
           peVar5->velocity[0] * peVar5->velocity[0] + peVar5->velocity[2] * peVar5->velocity[2]) <
      700.0) {
    this->field_0x80 = 0;
  }
  fVar11 = *(float *)&this->field_0x84 - peVar5->origin[0];
  fVar12 = *(float *)&this->field_0x88 - peVar5->origin[1];
  fVar13 = *(float *)&this->field_0x8c - peVar5->origin[2];
  fVar11 = SQRT(fVar12 * fVar12 + fVar13 * fVar13 + fVar11 * fVar11);
  if (*(int *)&this->field_0x90 == 6) {
    if (512.0 <= fVar11) {
      local_54 = 80.0 - (fVar11 - 512.0) * 0.0006510417 * 80.0;
      if (local_54 <= 50.0) goto LAB_1004848b;
    }
    else {
      local_54 = 80.0;
    }
  }
  else {
LAB_1004848b:
    local_54 = 50.0;
  }
  if ((*(float *)(*(int *)(param_1 + 4) + 0x16c) != 0.0) &&
     (iVar2 = (**(code **)(*(int *)param_1 + 0xa8))(), iVar2 != 0)) {
    if (*(int *)&this->field_0x7c == 0) {
      peVar5 = (entvars_t *)0x0;
    }
    else {
      peVar5 = (entvars_t *)(*(int *)&this->field_0x7c + 0x80);
    }
    FUN_100678a0(local_38);
    FUN_1006a2f0();
    peVar7 = peVar5;
    if (peVar5 == (entvars_t *)0x0) {
      peVar7 = this->pev;
    }
    iVar2 = *(int *)param_1;
    FUN_10011fc0(this->pev->velocity,(float *)&stack0xffffff88);
    (**(code **)(iVar2 + 0x34))(peVar7,local_54);
    if (peVar5 == (entvars_t *)0x0) {
      peVar5 = this->pev;
    }
    FUN_1006a310(this->pev,peVar5);
    peVar5 = this->pev;
    fVar11 = peVar5->velocity[1];
    fVar12 = peVar5->velocity[2];
    peVar5->velocity[0] = -peVar5->velocity[0] * 0.25;
    pvVar4 = (void *)(-fVar12 * 0.25);
    peVar5->velocity[1] = -fVar11 * 0.25;
    peVar5->velocity[2] = (vec_t)pvVar4;
    EMIT_SOUND_DYN(pvVar4,this->pev->pContainingEntity,4,s_weapons_knife_knife_hitbody_wav_10098644,
                   0x3f800000,0x3f4ccccd,0,100);
    goto LAB_10048c0d;
  }
  iVar2 = 0xb;
  bVar9 = true;
  pcVar6 = gpGlobals->pStringBase + **(int **)(param_1 + 4);
  pcVar8 = s_worldspawn_10092568;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar9 = *pcVar6 == *pcVar8;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  } while (bVar9);
  if (bVar9) {
    FUN_100678a0(local_38);
    peVar5 = this->pev;
    if (100.0 <= SQRT(peVar5->velocity[2] * peVar5->velocity[2] +
                      peVar5->velocity[1] * peVar5->velocity[1] +
                      peVar5->velocity[0] * peVar5->velocity[0])) {
      fVar11 = (fStack_10 + fStack_14) * 0.0 + fStack_c;
      fVar12 = SQRT(peVar5->velocity[2] * peVar5->velocity[2] +
                    peVar5->velocity[1] * peVar5->velocity[1] +
                    peVar5->velocity[0] * peVar5->velocity[0]);
      if (fVar12 == 0.0) {
        fVar14 = 1.0;
        fVar13 = 0.0;
        fVar12 = 0.0;
      }
      else {
        fVar12 = 1.0 / fVar12;
        fVar14 = fVar12 * peVar5->velocity[2];
        fVar13 = fVar12 * peVar5->velocity[1];
        fVar12 = fVar12 * peVar5->velocity[0];
      }
      FUN_1000c5f0(&stack0xffffffbc,fVar12,fVar13,fVar14);
      if ((-(in_stack_ffffffbc * fStack_14 + fStack_40 * fStack_10 + fStack_3c * fStack_c) < 0.4) &&
         (fVar11 <= 0.98)) {
        iVar2 = FUN_10067c90();
        if (iVar2 != -3) {
          (*g_engfuncs.pfnMessageBegin)(4,DAT_100cbc84,this->pev->origin,(edict_t *)0x0);
          (*g_engfuncs.pfnWriteCoord)(this->pev->origin[0]);
          (*g_engfuncs.pfnWriteCoord)(this->pev->origin[1]);
          (*g_engfuncs.pfnWriteCoord)(this->pev->origin[2]);
          uStack_50 = 0x100488c7;
          (*g_engfuncs.pfnWriteCoord)(-this->pev->angles[0]);
          (*g_engfuncs.pfnWriteCoord)(-this->pev->angles[1]);
          (*g_engfuncs.pfnWriteCoord)(-this->pev->angles[2]);
          (*g_engfuncs.pfnWriteByte)(2);
          (*g_engfuncs.pfnMessageEnd)();
        }
        peVar1 = this->pev->pContainingEntity;
        (*g_engfuncs.pfnRandomFloat)(0.0,10.0);
        lVar10 = __ftol();
        EMIT_SOUND_DYN(this_01,peVar1,4,s_weapons_knife_knife_hit_wav_10098244,0x3f800000,0x3f4ccccd
                       ,0,(int)lVar10);
        peVar5 = this->pev;
        fVar11 = peVar5->velocity[1];
        fVar12 = peVar5->velocity[2];
        peVar5->velocity[0] = peVar5->velocity[0] * 0.5;
        peVar5->velocity[1] = fVar11 * 0.5;
        peVar5->velocity[2] = fVar12 * 0.5;
        return;
      }
      fVar11 = SQRT(peVar5->velocity[2] * peVar5->velocity[2] +
                    peVar5->velocity[1] * peVar5->velocity[1] +
                    peVar5->velocity[0] * peVar5->velocity[0]);
      if (fVar11 == 0.0) {
        uStack_50 = 0;
      }
      else {
        fVar11 = 1.0 / fVar11;
        FUN_1000c5f0(&uStack_50,fVar11 * peVar5->velocity[0],fVar11 * peVar5->velocity[1],
                     fVar11 * peVar5->velocity[2]);
      }
      FUN_100679a0();
      pvVar3 = (vec_t *)UTIL_VecToAngles((undefined4 *)&stack0xffffffbc,&uStack_50);
      peVar5 = this->pev;
      peVar5->angles[0] = *pvVar3;
      peVar5->angles[1] = pvVar3[1];
      peVar5->angles[2] = pvVar3[2];
      this->pev->angles[2] = 90.0;
      this->pev->solid = 0;
      this->pev->movetype = 5;
      peVar5 = this->pev;
      peVar5->velocity[0] = 0.0;
      peVar5->velocity[1] = 0.0;
      peVar5->velocity[2] = 0.0;
      peVar5 = this->pev;
      pvVar3 = peVar5->avelocity;
      *pvVar3 = DAT_1009f4a8;
      peVar5->avelocity[1] = DAT_1009f4ac;
      fVar12 = DAT_1009f4b0;
      goto LAB_10048b45;
    }
    fVar11 = SQRT(peVar5->velocity[2] * peVar5->velocity[2] +
                  peVar5->velocity[1] * peVar5->velocity[1] +
                  peVar5->velocity[0] * peVar5->velocity[0]);
    if (fVar11 == 0.0) {
      fVar13 = 1.0;
      fVar12 = 0.0;
      fVar11 = 0.0;
    }
    else {
      fVar11 = 1.0 / fVar11;
      fVar13 = fVar11 * peVar5->velocity[2];
      fVar12 = fVar11 * peVar5->velocity[1];
      fVar11 = fVar11 * peVar5->velocity[0];
    }
    FUN_1000c5f0(&uStack_50,fVar11,fVar12,fVar13);
    FUN_100679a0();
    pvVar3 = (vec_t *)UTIL_VecToAngles((undefined4 *)&stack0xffffffbc,&uStack_50);
    peVar5 = this->pev;
    peVar5->angles[0] = *pvVar3;
    peVar5->angles[1] = pvVar3[1];
    peVar5->angles[2] = pvVar3[2];
    this->pev->angles[2] = 90.0;
    this->pev->solid = 0;
    this->pev->movetype = 5;
    peVar5 = this->pev;
    peVar5->velocity[0] = 0.0;
    peVar5->velocity[1] = 0.0;
    peVar5->velocity[2] = 0.0;
    peVar5 = this->pev;
    peVar5->avelocity[0] = DAT_1009f4a8;
    peVar5->avelocity[1] = DAT_1009f4ac;
    peVar5->avelocity[2] = DAT_1009f4b0;
    peVar1 = this->pev->pContainingEntity;
    (*g_engfuncs.pfnRandomFloat)(-10.0,0.0);
    lVar10 = __ftol();
    EMIT_SOUND_DYN(this_00,peVar1,4,s_weapons_knife_knife_hit_wav_10098244,0x3f800000,0x3f4ccccd,0,
                   (int)lVar10);
  }
  else {
    iVar2 = 6;
    bVar9 = true;
    pcVar6 = gpGlobals->pStringBase + **(int **)(param_1 + 4);
    pcVar8 = &DAT_100983c4;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar9 = *pcVar6 == *pcVar8;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar9);
    if (bVar9) {
      return;
    }
    peVar5 = this->pev;
    pvVar3 = peVar5->velocity;
    fVar11 = peVar5->velocity[1];
    fVar12 = peVar5->velocity[2];
    *pvVar3 = -*pvVar3 * 0.25;
    fVar12 = -fVar12 * 0.25;
    peVar5->velocity[1] = -fVar11 * 0.25;
LAB_10048b45:
    pvVar3[2] = fVar12;
  }
  iVar2 = FUN_10067c90();
  pvVar4 = extraout_ECX;
  if (iVar2 != -3) {
    (*g_engfuncs.pfnMessageBegin)(4,DAT_100cbc84,this->pev->origin,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteCoord)(this->pev->origin[0]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->origin[1]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->origin[2]);
    uStack_50 = 0x10048bb3;
    (*g_engfuncs.pfnWriteCoord)(-this->pev->angles[0]);
    (*g_engfuncs.pfnWriteCoord)(-this->pev->angles[1]);
    (*g_engfuncs.pfnWriteCoord)(-this->pev->angles[2]);
    (*g_engfuncs.pfnWriteByte)(2);
    (*g_engfuncs.pfnMessageEnd)();
    pvVar4 = extraout_ECX_00;
  }
  EMIT_SOUND_DYN(pvVar4,this->pev->pContainingEntity,4,s_weapons_knife_knife_hit_wav_10098244,
                 0x3f800000,0x3f4ccccd,0,100);
LAB_10048c0d:
  *(code **)&this->field_0x14 = WaitTouch;
  *(code **)&this->field_0x10 = FUN_10048fd0;
  this->field_0x80 = 0;
  this->pev->nextthink = gpGlobals->time + 0.1;
  this->pev->gravity = 0.75;
  *(float *)&this->field_0x78 = gpGlobals->time + 10.0;
  return;
}

/* 10048c70  CTSKnife::WaitThink  (592 bytes)
 * void WaitThink(void)
 */
/* public: virtual void __thiscall CTSKnife::WaitThink(void) */

void __thiscall CTSKnife::WaitThink(CTSKnife *this)

{
  entvars_t *peVar1;
  float fVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  vec_t **ppvVar5;
  float fVar6;
  vec_t *pvStack_74;
  float *pfStack_70;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float fStack_28;
  edict_t *peStack_8;
  
                    /* 0x48c70  129  ?WaitThink@CTSKnife@@UAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.1;
  if ((*(float *)&this->field_0x78 != 0.0) && (*(float *)&this->field_0x78 < gpGlobals->time)) {
    RemoveEntityFromSlowedArray((int)this);
    UTIL_Remove((int)this);
    return;
  }
  peVar1 = this->pev;
  if (SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
           peVar1->velocity[1] * peVar1->velocity[1] + peVar1->velocity[0] * peVar1->velocity[0]) <=
      64.0) goto LAB_10048ea6;
  fVar2 = SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
               peVar1->velocity[1] * peVar1->velocity[1] + peVar1->velocity[0] * peVar1->velocity[0]
              );
  if (fVar2 == 0.0) {
    local_50 = 0.0;
    local_4c = 0.0;
    local_48 = 1.0;
  }
  else {
    fVar2 = 1.0 / fVar2;
    pfStack_70 = (float *)0x10048d77;
    FUN_1000c5f0(&local_50,fVar2 * peVar1->velocity[0],fVar2 * peVar1->velocity[1],
                 fVar2 * peVar1->velocity[2]);
  }
  pvStack_74 = peVar1->origin;
  pfStack_70 = &local_44;
  local_3c = local_48 * 64.0 + peVar1->origin[2];
  local_40 = local_4c * 64.0 + peVar1->origin[1];
  local_44 = local_50 * 64.0 + *pvStack_74;
  FUN_10067850();
  if (1.0 <= fStack_28) goto LAB_10048ea6;
  if (peStack_8 == (edict_t *)0x0) {
    peStack_8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peStack_8 != (edict_t *)0x0) goto LAB_10048dfd;
    piVar4 = (int *)0x0;
  }
  else {
LAB_10048dfd:
    piVar4 = peStack_8->pvPrivateData;
  }
  iVar3 = (**(code **)(*piVar4 + 0xa8))();
  if (iVar3 == 0) {
    peVar1 = this->pev;
    fVar2 = SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
                 peVar1->velocity[1] * peVar1->velocity[1] +
                 peVar1->velocity[0] * peVar1->velocity[0]) * 0.1;
    if (*(float *)(piVar4[1] + 0x160) <= fVar2) {
      FUN_1006a2f0();
      iVar3 = *piVar4;
      ppvVar5 = &pvStack_74;
      fVar6 = 64.0;
      this_00 = (void *)FUN_10011fc0(this->pev->velocity,&local_44);
      FUN_10014e80(this_00,(float *)ppvVar5,fVar6);
      (**(code **)(iVar3 + 0x34))(this->pev,fVar2);
      FUN_1006a310(this->pev,this->pev);
    }
  }
LAB_10048ea6:
  if (this->pev->movetype != 5) {
    CTSPhysicObject::WaitThink((CTSPhysicObject *)this);
  }
  return;
}

/* 10048fe0  CTSKnife::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CTSKnife::ObjectCaps(void)

{
  return 0x10;
}

