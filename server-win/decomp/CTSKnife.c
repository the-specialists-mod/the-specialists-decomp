/* mp.dll - CTSKnife (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003acc0  CTSKnife::ShouldCollide  (8 bytes)
 * undefined ShouldCollide()
 */
undefined4 CTSKnife::ShouldCollide(void)

{
  return 1;
}

/* 10051c50  CTSKnife::CreateKnife  (243 bytes)
 * int * CreateKnife(int * param_1, int param_2, int param_3, int param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, int param_8)
 * called by: FUN_10056d80, FUN_10057210
 */
int * __cdecl
CTSKnife::CreateKnife
          (int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6,
          undefined4 param_7,int param_8)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  piVar2 = (int *)GetClassPtr<CTSKnife>(0);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar2[0x24] = param_8;
  (**(code **)(*piVar2 + 0x1c))();
  *(int *)piVar2[1] = (int)&DAT_1009d568 - (int)gpGlobals->pStringBase;
  iVar1 = piVar2[1];
  piVar2[0x1f] = *(int *)(param_1[1] + 0x208);
  *(int *)(iVar1 + 8) = param_2;
  *(int *)(iVar1 + 0xc) = param_3;
  *(int *)(iVar1 + 0x10) = param_4;
  UTIL_SetOrigin(piVar2[1],piVar2[1] + 8);
  iVar1 = piVar2[1];
  *(undefined4 *)(iVar1 + 0x20) = param_5;
  *(undefined4 *)(iVar1 + 0x24) = param_6;
  *(undefined4 *)(iVar1 + 0x28) = param_7;
  piVar2[0x21] = param_2;
  *(undefined1 *)((int)piVar2 + 0x82) = 0;
  piVar2[0x22] = param_3;
  piVar2[0x23] = param_4;
  if ((float)param_1[0x5b] != 0.0) {
    (**(code **)(*piVar2 + 0xc))(param_1[0x5b],0);
    return piVar2;
  }
  iVar1 = *piVar2;
  fVar3 = (float10)(**(code **)(*param_1 + 8))(0);
  (**(code **)(iVar1 + 0xc))((float)fVar3);
  return piVar2;
}

/* 10051d50  CTSKnife::GetDescription  (41 bytes)
 * char * GetDescription(int param_1)
 * called by: CHalfLifeMultiplay::PlayerKilled, TSGetPointsForFrag
 */
char * __fastcall CTSKnife::GetDescription(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 == 6) {
    return s_Throwing_Combat_Knife_100a43a8;
  }
  if (iVar1 != 7) {
    if (iVar1 != 8) {
      return &DAT_100a9398;
    }
    return s_Throwing_Katana_100a43d4;
  }
  return s_Throwing_Seal_Knife_100a43c0;
}

/* 10051d80  CTSKnife::Spawn  (362 bytes)
 * undefined Spawn()
 */
void __fastcall CTSKnife::Spawn(int param_1)

{
  float fVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  CTSPhysicObject::Spawn(param_1);
  if (*(int *)(param_1 + 0x90) == 8) {
    (*g_engfuncs.pfnSetModel)
              (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),s_models_w_katana_mdl_1009a960);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x11c) = 0x3f59999a;
  }
  else if (*(int *)(param_1 + 0x90) == 6) {
    (*g_engfuncs.pfnSetModel)
              (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),s_models_w_knife_mdl_1009a594);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x11c) = 0x3f400000;
  }
  else {
    (*g_engfuncs.pfnSetModel)
              (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),s_models_w_sealknife_mdl_1009b168);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x11c) = 0x3e99999a;
  }
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x120) = 0x3f4ccccd;
  uStack_c = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 10;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 2;
  uStack_8 = 0;
  uStack_4 = 0;
  UTIL_SetSize(*(int *)(param_1 + 4),&uStack_c,&uStack_18);
  *(code **)(param_1 + 0x10) = FUN_10052e90;
  *(code **)(param_1 + 0x14) = FUN_10052ea0;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x254) = 0x3f800000;
  fVar1 = gpGlobals->time;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(float *)(param_1 + 0x78) = fVar1 + 30.0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x250) = 0;
  *(uint *)(*(int *)(param_1 + 4) + 0x250) = *(uint *)(*(int *)(param_1 + 4) + 0x250) | 1;
  return;
}

/* 10051ef0  CTSKnife::WaitTouch  (197 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSKnife::WaitTouch(class CBaseEntity *) */

void __thiscall CTSKnife::WaitTouch(CTSKnife *this,CBaseEntity *param_1)

{
  float fVar1;
  float fVar2;
  entvars_t *peVar3;
  
                    /* 0x51ef0  155  ?WaitTouch@CTSKnife@@QAEXPAVCBaseEntity@@@Z */
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
      peVar3->velocity[0] = DAT_100ae498;
      peVar3->velocity[1] = DAT_100ae49c;
      peVar3->velocity[2] = DAT_100ae4a0;
    }
  }
  return;
}

/* 10051fc0  CTSKnife::Use  (195 bytes)
 * undefined Use(int * param_1)
 */
void __thiscall CTSKnife::Use(CTSKnife *this,int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 extraout_var;
  
  if ((((this->field_0x80 == '\0') && (iVar2 = (**(code **)(*param_1 + 0xc0))(), iVar2 != 0)) &&
      (iVar2 = (**(code **)(*param_1 + 0xac))(), iVar2 != 0)) &&
     ((*(byte *)(param_1[1] + 0x118) & 0x80) == 0)) {
    if ((this->field_0x81 != '\0') &&
       (uVar1 = KungFu((int)param_1), CONCAT31(extraout_var,uVar1) == 0)) {
      return;
    }
    if (gpGlobals->time < *(float *)&this->field_0x78) {
      if (*(int *)&this->field_0x90 == 8) {
        iVar2 = 0x22;
      }
      else if (*(int *)&this->field_0x90 == 6) {
        iVar2 = 0x19;
      }
      else {
        iVar2 = 0x23;
      }
      iVar2 = CBasePlayer::PickUpWeapon((CBasePlayer *)param_1,iVar2,(undefined4 *)0x0,0,'\0','\0');
      if (iVar2 == 0) {
        return;
      }
    }
    *(float *)&this->field_0x78 = gpGlobals->time;
    RemoveEntityFromSlowedArray((int)this);
    UTIL_Remove((int *)this);
  }
  return;
}

/* 10052090  CTSKnife::BounceTouch  (2683 bytes)
 * void BounceTouch(CBaseEntity * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall CTSKnife::BounceTouch(class CBaseEntity *) */

void __thiscall CTSKnife::BounceTouch(CTSKnife *this,CBaseEntity *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  vec_t *pvVar5;
  Vector *pVVar6;
  byte *pbVar7;
  void *this_00;
  void *this_01;
  edict_t *peVar8;
  entvars_t *peVar9;
  entvars_t *peVar10;
  bool bVar11;
  float10 extraout_ST0;
  float10 fVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  edict_t *peVar17;
  int iVar18;
  char *pcVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_a4;
  Vector VStack_94;
  Vector VStack_88;
  undefined1 auStack_7c [12];
  vec_t vStack_70;
  Vector VStack_6c;
  Vector VStack_60;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  Vector VStack_30;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 auStack_1c [7];
  
                    /* 0x52090  10  ?BounceTouch@CTSKnife@@UAEXPAVCBaseEntity@@@Z */
  this->pev->nextthink = gpGlobals->time + 0.1;
  if (*(int *)(*(int *)(param_1 + 4) + 0x208) == *(int *)&this->field_0x7c) {
    return;
  }
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x118) & 0x80) != 0) {
    return;
  }
  peVar9 = this->pev;
  if (SQRT(peVar9->velocity[2] * peVar9->velocity[2] +
           peVar9->velocity[1] * peVar9->velocity[1] + peVar9->velocity[0] * peVar9->velocity[0]) <
      700.0) {
    this->field_0x80 = 0;
  }
  Vector::Vector((Vector *)&local_a4,(undefined4 *)&stack0xffffff50);
  if (*(int *)&this->field_0x90 == 8) {
    VStack_94.z = 150.0;
  }
  else {
    VStack_94.z = 100.0;
    if (*(int *)&this->field_0x90 != 6) {
      VStack_94.z = 50.0;
    }
  }
  if ((_g_flWeaponCheat != 0.0) &&
     ((*g_engfuncs.pfnCVarGetFloat)(s_dmgreport_1009ef74), (float10)1.0 < extraout_ST0)) {
    iVar18 = 0;
    iVar16 = 0;
    iVar15 = 0;
    iVar14 = 0;
    puVar2 = UTIL_VarArgs((byte_conflict *)s__debug__f_100a4404);
    UTIL_ClientPrintAll(3,puVar2,iVar14,iVar15,iVar16,iVar18);
  }
  this->field_0x81 = 0;
  if ((*(float *)(*(int *)(param_1 + 4) + 0x16c) != 0.0) &&
     (iVar14 = (**(code **)(*(int *)param_1 + 0xc0))(), iVar14 != 0)) {
    if (*(int *)&this->field_0x7c == 0) {
      peVar9 = (entvars_t *)0x0;
    }
    else {
      peVar9 = (entvars_t *)(*(int *)&this->field_0x7c + 0x80);
    }
    puVar3 = (undefined4 *)FUN_10077040(auStack_1c);
    uStack_54 = *puVar3;
    uStack_50 = puVar3[1];
    uStack_4c = puVar3[2];
    uStack_48 = puVar3[3];
    uStack_44 = puVar3[4];
    uStack_40 = puVar3[5];
    uStack_3c = puVar3[6];
    uStack_38 = puVar3[7];
    uStack_34 = puVar3[8];
    Vector::Vector(&VStack_30,puVar3 + 9);
    uStack_24 = puVar3[0xc];
    uStack_20 = puVar3[0xd];
    FUN_100796a0();
    peVar10 = peVar9;
    if (peVar9 == (entvars_t *)0x0) {
      peVar10 = this->pev;
    }
    iVar14 = *(int *)param_1;
    puVar3 = (undefined4 *)FUN_100148f0(this->pev->velocity,&VStack_88.x);
    Vector::Vector((Vector *)&stack0xffffff48,puVar3);
    (**(code **)(iVar14 + 0x4c))(peVar10,vStack_70);
    if (peVar9 == (entvars_t *)0x0) {
      peVar9 = this->pev;
    }
    FUN_100796c0(this->pev,peVar9);
    peVar9 = this->pev;
    VStack_94.x = -peVar9->velocity[0];
    VStack_94.y = -peVar9->velocity[1];
    VStack_94.z = -peVar9->velocity[2];
    Vector::Vector(&VStack_60,&VStack_94.x);
    VStack_6c.x = VStack_60.x * 0.25;
    VStack_6c.y = VStack_60.y * 0.25;
    VStack_6c.z = VStack_60.z * 0.25;
    Vector::Vector((Vector *)auStack_7c,&VStack_6c.x);
    peVar9 = this->pev;
    peVar9->velocity[0] = (vec_t)auStack_7c._0_4_;
    peVar9->velocity[1] = (vec_t)auStack_7c._4_4_;
    pcVar19 = s_weapons_knife_knife_hitbody_wav_100a43e4;
    peVar9->velocity[2] = (vec_t)auStack_7c._8_4_;
    peVar8 = this->pev->pContainingEntity;
    peVar17 = peVar8;
    goto LAB_10052aae;
  }
  if (*(int *)&this->field_0x90 == 8) {
    this->field_0x81 = 1;
  }
  pcVar19 = s_worldspawn_1009d64c;
  pbVar7 = (byte *)(gpGlobals->pStringBase + **(int **)(param_1 + 4));
  pbVar4 = pbVar7;
  do {
    bVar1 = *pbVar4;
    bVar11 = bVar1 < (byte)*pcVar19;
    if (bVar1 != *pcVar19) {
LAB_100523d2:
      iVar14 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_100523d7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar11 = bVar1 < (byte)pcVar19[1];
    if (bVar1 != pcVar19[1]) goto LAB_100523d2;
    pbVar4 = pbVar4 + 2;
    pcVar19 = pcVar19 + 2;
  } while (bVar1 != 0);
  iVar14 = 0;
LAB_100523d7:
  if (iVar14 == 0) {
    puVar3 = (undefined4 *)FUN_10077040(auStack_1c);
    uStack_54 = *puVar3;
    uStack_50 = puVar3[1];
    uStack_4c = puVar3[2];
    uStack_48 = puVar3[3];
    uStack_44 = puVar3[4];
    uStack_40 = puVar3[5];
    uStack_3c = puVar3[6];
    uStack_38 = puVar3[7];
    uStack_34 = puVar3[8];
    Vector::Vector(&VStack_30,puVar3 + 9);
    uStack_24 = puVar3[0xc];
    peVar9 = this->pev;
    uStack_20 = puVar3[0xd];
    if (100.0 <= SQRT(peVar9->velocity[2] * peVar9->velocity[2] +
                      peVar9->velocity[1] * peVar9->velocity[1] +
                      peVar9->velocity[0] * peVar9->velocity[0])) {
      bVar11 = VStack_30.z <= 0.98;
      fVar20 = SQRT(peVar9->velocity[2] * peVar9->velocity[2] +
                    peVar9->velocity[1] * peVar9->velocity[1] +
                    peVar9->velocity[0] * peVar9->velocity[0]);
      if (fVar20 == 0.0) {
        fVar22 = 1.0;
        fVar21 = 0.0;
        fVar20 = 0.0;
        pVVar6 = &VStack_88;
      }
      else {
        fVar20 = 1.0 / fVar20;
        fVar22 = fVar20 * peVar9->velocity[2];
        fVar21 = fVar20 * peVar9->velocity[1];
        fVar20 = fVar20 * peVar9->velocity[0];
        pVVar6 = (Vector *)auStack_7c;
      }
      puVar3 = (undefined4 *)Vector::Vector(pVVar6,fVar20,fVar21,fVar22);
      Vector::Vector(&VStack_94,puVar3);
      if ((-(VStack_94.x * VStack_30.x + VStack_94.y * VStack_30.y + VStack_94.z * VStack_30.z) <
           0.4) && (bVar11)) {
        iVar14 = FUN_10077360(this->pev->origin);
        if (iVar14 != -3) {
          UTIL_Sparks(this->pev->origin);
        }
        peVar8 = this->pev->pContainingEntity;
        (*g_engfuncs.pfnRandomFloat)(0.0,10.0);
        local_a4 = 2.6260043e-29;
        lVar13 = __ftol();
        local_a4 = (float)lVar13;
        EMIT_SOUND_DYN(this_01,peVar8,4,s_weapons_knife_knife_hit_wav_100a36e4,0x3f800000,0x3f4ccccd
                       ,0);
        peVar9 = this->pev;
        VStack_88.z = peVar9->velocity[0] * 0.5;
        auStack_7c._0_4_ = peVar9->velocity[1] * 0.5;
        auStack_7c._4_4_ = peVar9->velocity[2] * 0.5;
        local_a4 = 2.6260305e-29;
        Vector::Vector((Vector *)(auStack_7c + 8),&VStack_88.z);
        peVar9 = this->pev;
        peVar9->velocity[0] = (vec_t)auStack_7c._8_4_;
        peVar9->velocity[1] = vStack_70;
        peVar9->velocity[2] = VStack_6c.x;
        return;
      }
      peVar9 = this->pev;
      fVar12 = Vector::Length(peVar9->velocity);
      if (fVar12 == (float10)0.0) {
        VStack_88.x = 0.0;
        VStack_88.y = 0.0;
        VStack_88.z = 1.0;
        pVVar6 = &VStack_88;
      }
      else {
        fVar12 = (float10)1.0 / fVar12;
        pVVar6 = (Vector *)
                 Vector::Vector(&VStack_6c,(float)(fVar12 * (float10)peVar9->velocity[0]),
                                (float)(fVar12 * (float10)peVar9->velocity[1]),
                                (float)(fVar12 * (float10)peVar9->velocity[2]));
      }
      Vector::Vector(&VStack_94,&pVVar6->x);
      auStack_7c._0_4_ = VStack_94.x;
      auStack_7c._4_4_ = VStack_94.y;
      auStack_7c._8_4_ = VStack_94.z;
      puVar3 = (undefined4 *)
               Vector::Vector(&VStack_60,VStack_94.x * 6.0,VStack_94.y * 6.0,VStack_94.z * 6.0);
      Vector::Vector(&VStack_88,puVar3);
      peVar9 = this->pev;
      puVar3 = (undefined4 *)
               Vector::Vector(&VStack_94,peVar9->origin[0] - VStack_88.x,
                              peVar9->origin[1] - VStack_88.y,peVar9->origin[2] - VStack_88.z);
      Vector::Vector(&VStack_6c,puVar3);
      UTIL_SetOrigin((int)this->pev,&VStack_6c);
      pvVar5 = (vec_t *)UTIL_VecToAngles(&VStack_88.x,auStack_7c);
      peVar9 = this->pev;
      VStack_94.x = 0.0;
      VStack_94.y = 0.0;
      peVar9->angles[0] = *pvVar5;
      VStack_94.z = 0.0;
      peVar9->angles[1] = pvVar5[1];
      peVar9->angles[2] = pvVar5[2];
      this->pev->angles[2] = 90.0;
      this->pev->solid = 0;
      this->pev->movetype = 5;
      peVar9 = this->pev;
      peVar9->velocity[0] = 0.0;
      peVar9->velocity[1] = 0.0;
      peVar9->velocity[2] = 0.0;
      peVar9 = this->pev;
      pvVar5 = peVar9->avelocity;
      *pvVar5 = DAT_100ae498;
      peVar9->avelocity[1] = DAT_100ae49c;
      fVar20 = DAT_100ae4a0;
      goto LAB_10052a64;
    }
    fVar20 = SQRT(peVar9->velocity[2] * peVar9->velocity[2] +
                  peVar9->velocity[1] * peVar9->velocity[1] +
                  peVar9->velocity[0] * peVar9->velocity[0]);
    if (fVar20 == 0.0) {
      fVar22 = 1.0;
      fVar21 = 0.0;
      fVar20 = 0.0;
      pVVar6 = (Vector *)auStack_7c;
    }
    else {
      fVar20 = 1.0 / fVar20;
      fVar22 = fVar20 * peVar9->velocity[2];
      fVar21 = fVar20 * peVar9->velocity[1];
      fVar20 = fVar20 * peVar9->velocity[0];
      pVVar6 = &VStack_6c;
    }
    puVar3 = (undefined4 *)Vector::Vector(pVVar6,fVar20,fVar21,fVar22);
    Vector::Vector(&VStack_94,puVar3);
    auStack_7c._0_4_ = VStack_94.x * 6.0;
    VStack_88.x = VStack_94.x;
    auStack_7c._4_4_ = VStack_94.y * 6.0;
    VStack_88.y = VStack_94.y;
    auStack_7c._8_4_ = VStack_94.z * 6.0;
    VStack_88.z = VStack_94.z;
    Vector::Vector(&VStack_6c,(undefined4 *)auStack_7c);
    peVar9 = this->pev;
    VStack_60.x = peVar9->origin[0] - VStack_6c.x;
    VStack_60.y = peVar9->origin[1] - VStack_6c.y;
    VStack_60.z = peVar9->origin[2] - VStack_6c.z;
    Vector::Vector(&VStack_94,&VStack_60.x);
    UTIL_SetOrigin((int)this->pev,&VStack_94);
    pvVar5 = (vec_t *)UTIL_VecToAngles((undefined4 *)auStack_7c,&VStack_88);
    peVar9 = this->pev;
    VStack_94.x = 0.0;
    VStack_94.y = 0.0;
    peVar9->angles[0] = *pvVar5;
    VStack_94.z = 0.0;
    peVar9->angles[1] = pvVar5[1];
    peVar9->angles[2] = pvVar5[2];
    this->pev->angles[2] = 90.0;
    this->pev->solid = 0;
    this->pev->movetype = 5;
    peVar9 = this->pev;
    peVar9->velocity[0] = 0.0;
    peVar9->velocity[1] = 0.0;
    peVar9->velocity[2] = 0.0;
    peVar9 = this->pev;
    peVar9->avelocity[0] = DAT_100ae498;
    peVar9->avelocity[1] = DAT_100ae49c;
    peVar9->avelocity[2] = DAT_100ae4a0;
    peVar8 = this->pev->pContainingEntity;
    (*g_engfuncs.pfnRandomFloat)(-10.0,0.0);
    local_a4 = 2.6259137e-29;
    lVar13 = __ftol();
    local_a4 = (float)lVar13;
    EMIT_SOUND_DYN(this_00,peVar8,4,s_weapons_knife_knife_hit_wav_100a36e4,0x3f800000,0x3f4ccccd,0);
  }
  else {
    pbVar4 = &DAT_1009d568;
    do {
      bVar1 = *pbVar7;
      bVar11 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_100529d0:
        iVar14 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_100529d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar11 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_100529d0;
      pbVar7 = pbVar7 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar14 = 0;
LAB_100529d5:
    if (iVar14 == 0) {
      return;
    }
    peVar9 = this->pev;
    puVar3 = (undefined4 *)
             Vector::Vector(&VStack_6c,-peVar9->velocity[0],-peVar9->velocity[1],
                            -peVar9->velocity[2]);
    Vector::Vector(&VStack_88,puVar3);
    puVar3 = (undefined4 *)
             Vector::Vector(&VStack_60,VStack_88.x * 0.25,VStack_88.y * 0.25,VStack_88.z * 0.25);
    Vector::Vector((Vector *)auStack_7c,puVar3);
    peVar9 = this->pev;
    pvVar5 = peVar9->velocity;
    *pvVar5 = (vec_t)auStack_7c._0_4_;
    peVar9->velocity[1] = (vec_t)auStack_7c._4_4_;
    fVar20 = (float)auStack_7c._8_4_;
LAB_10052a64:
    pvVar5[2] = fVar20;
  }
  iVar14 = FUN_10077360(this->pev->origin);
  if (iVar14 != -3) {
    UTIL_Sparks(this->pev->origin);
  }
  peVar8 = (edict_t *)this->pev;
  peVar17 = (peVar8->v).chain;
  pcVar19 = s_weapons_knife_knife_hit_wav_100a36e4;
LAB_10052aae:
  EMIT_SOUND_DYN(peVar8,peVar17,4,pcVar19,0x3f800000,0x3f4ccccd,0);
  *(code **)&this->field_0x14 = WaitTouch;
  *(code **)&this->field_0x10 = FUN_10052e90;
  this->field_0x80 = 0;
  this->pev->nextthink = gpGlobals->time + 0.1;
  this->pev->gravity = 0.75;
  *(float *)&this->field_0x78 = gpGlobals->time + 10.0;
  return;
}

/* 10052b10  CTSKnife::WaitThink  (656 bytes)
 * void WaitThink(void)
 */
/* public: virtual void __thiscall CTSKnife::WaitThink(void) */

void __thiscall CTSKnife::WaitThink(CTSKnife *this)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  int iVar4;
  Vector *this_00;
  Vector *pVVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Vector local_8c;
  float local_80;
  float local_7c;
  float local_78;
  Vector local_74;
  float local_68;
  float local_64;
  float local_60;
  Vector local_5c;
  Vector local_50;
  Vector local_44;
  undefined1 local_38 [16];
  float local_28;
  edict_t *local_8;
  
                    /* 0x52b10  138  ?WaitThink@CTSKnife@@UAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.1;
  if ((*(float *)&this->field_0x78 != 0.0) && (*(float *)&this->field_0x78 < gpGlobals->time)) {
    RemoveEntityFromSlowedArray((int)this);
    UTIL_Remove((int *)this);
    return;
  }
  peVar1 = this->pev;
  if (SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
           peVar1->velocity[1] * peVar1->velocity[1] + peVar1->velocity[0] * peVar1->velocity[0]) <=
      64.0) goto LAB_10052d83;
  peVar2 = peVar1->pContainingEntity;
  fVar7 = SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
               peVar1->velocity[1] * peVar1->velocity[1] + peVar1->velocity[0] * peVar1->velocity[0]
              );
  if (fVar7 == 0.0) {
    fVar9 = 1.0;
    fVar8 = 0.0;
    fVar7 = 0.0;
    pVVar5 = &local_44;
  }
  else {
    fVar7 = 1.0 / fVar7;
    fVar9 = fVar7 * peVar1->velocity[2];
    fVar8 = fVar7 * peVar1->velocity[1];
    fVar7 = fVar7 * peVar1->velocity[0];
    pVVar5 = &local_50;
  }
  puVar3 = (undefined4 *)Vector::Vector(pVVar5,fVar7,fVar8,fVar9);
  Vector::Vector(&local_8c,puVar3);
  local_68 = local_8c.x * 64.0;
  local_64 = local_8c.y * 64.0;
  local_60 = local_8c.z * 64.0;
  Vector::Vector(&local_74,&local_68);
  peVar1 = this->pev;
  local_80 = local_74.x + peVar1->origin[0];
  local_7c = local_74.y + peVar1->origin[1];
  local_78 = local_74.z + peVar1->origin[2];
  Vector::Vector(&local_5c,&local_80);
  UTIL_TraceLine(this->pev->origin,&local_5c,0,peVar2,local_38);
  if (1.0 <= local_28) goto LAB_10052d83;
  if (local_8 == (edict_t *)0x0) {
    local_8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (local_8 != (edict_t *)0x0) goto LAB_10052cd2;
    piVar6 = (int *)0x0;
  }
  else {
LAB_10052cd2:
    piVar6 = local_8->pvPrivateData;
  }
  iVar4 = (**(code **)(*piVar6 + 0xc0))();
  if (iVar4 == 0) {
    peVar1 = this->pev;
    fVar7 = SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
                 peVar1->velocity[1] * peVar1->velocity[1] +
                 peVar1->velocity[0] * peVar1->velocity[0]) * 0.1;
    if (*(float *)(piVar6[1] + 0x160) <= fVar7) {
      FUN_100796a0();
      iVar4 = *piVar6;
      pVVar5 = &local_50;
      fVar8 = 64.0;
      this_00 = (Vector *)FUN_100148f0(this->pev->velocity,&local_44.x);
      puVar3 = (undefined4 *)Vector::operator*(this_00,&pVVar5->x,fVar8);
      Vector::Vector((Vector *)&stack0xffffff50,puVar3);
      (**(code **)(iVar4 + 0x4c))(this->pev,fVar7);
      FUN_100796c0(this->pev,this->pev);
    }
  }
LAB_10052d83:
  if (this->pev->movetype != 5) {
    CTSPhysicObject::WaitThink((CTSPhysicObject *)this);
  }
  return;
}

