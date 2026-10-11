/* mp.dll - CTSShrapnel (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10050620  CTSShrapnel::Spawn  (268 bytes)
 * undefined Spawn()
 */
void __fastcall CTSShrapnel::Spawn(int param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  CTSPhysicObject::Spawn(param_1);
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),s_models_shrapnel_mdl_100a4388);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x11c) = 0x3f800000;
  uStack_c = 0;
  uStack_8 = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x120) = 0x3f800000;
  uStack_4 = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 10;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 2;
  UTIL_SetSize(*(int *)(param_1 + 4),&uStack_c,&uStack_18);
  *(code **)(param_1 + 0x10) = FUN_10052e90;
  *(code **)(param_1 + 0x14) = FUN_10052ea0;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x254) = 0x3f800000;
  *(float *)(param_1 + 0x78) = gpGlobals->time + 30.0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x250) = 0;
  *(uint *)(*(int *)(param_1 + 4) + 0x250) = *(uint *)(*(int *)(param_1 + 4) + 0x250) | 4;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  return;
}

/* 10050730  CTSShrapnel::Precache  (26 bytes)
 * undefined Precache()
 */
void CTSShrapnel::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_shrapnel_mdl_100a4388);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_knife_knife_hit_wav_100a36e4);
  return;
}

/* 10050750  CTSShrapnel::BounceTouch  (1204 bytes)
 * void BounceTouch(CBaseEntity * param_1)
 */
/* public: virtual void __thiscall CTSShrapnel::BounceTouch(class CBaseEntity *) */

void __thiscall CTSShrapnel::BounceTouch(CTSShrapnel *this,CBaseEntity *param_1)

{
  byte bVar1;
  edict_t *peVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  vec_t *pvVar7;
  Vector *this_00;
  void *this_01;
  entvars_t *peVar8;
  vec_t unaff_EBP;
  vec_t unaff_ESI;
  char *pcVar9;
  vec_t unaff_EDI;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_b0 [12];
  Vector VStack_a4;
  Vector VStack_98;
  Vector VStack_8c;
  entvars_t *peStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  Vector VStack_58;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  Vector VStack_44;
  undefined4 auStack_38 [14];
  
                    /* 0x50750  11  ?BounceTouch@CTSShrapnel@@UAEXPAVCBaseEntity@@@Z */
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x118) & 0x80) != 0) {
    return;
  }
  if ((*(float *)(*(int *)(param_1 + 4) + 0x16c) != 0.0) &&
     (iVar3 = (**(code **)(*(int *)param_1 + 0xc0))(), iVar3 != 0)) {
    peVar8 = *(entvars_t **)&this->field_0x7c;
    puVar4 = (undefined4 *)FUN_10077040(auStack_38);
    uStack_7c = *puVar4;
    uStack_78 = puVar4[1];
    uStack_74 = puVar4[2];
    uStack_70 = puVar4[3];
    uStack_6c = puVar4[4];
    uStack_68 = puVar4[5];
    uStack_64 = puVar4[6];
    uStack_60 = puVar4[7];
    uStack_5c = puVar4[8];
    Vector::Vector(&VStack_58,puVar4 + 9);
    uStack_4c = puVar4[0xc];
    uStack_48 = puVar4[0xd];
    FUN_100796a0();
    peStack_80 = peVar8;
    if (peVar8 == (entvars_t *)0x0) {
      peStack_80 = this->pev;
    }
    iVar3 = *(int *)param_1;
    puVar4 = (undefined4 *)FUN_100148f0(this->pev->velocity,&VStack_a4.x);
    Vector::Vector((Vector *)&stack0xffffff2c,puVar4);
    (**(code **)(iVar3 + 0x4c))(peStack_80,0x42c80000);
    if (peVar8 == (entvars_t *)0x0) {
      peVar8 = this->pev;
    }
    FUN_100796c0(this->pev,peVar8);
    Vector::Vector((Vector *)(auStack_b0 + 8),(undefined4 *)&stack0xffffff34);
    auStack_b0._0_4_ = VStack_a4.x * 0.25;
    auStack_b0._4_4_ = VStack_a4.y * 0.25;
    Vector::Vector((Vector *)&stack0xffffff40,(undefined4 *)&stack0xffffff4c);
    peVar8 = this->pev;
    peVar8->velocity[0] = unaff_EDI;
    peVar8->velocity[1] = unaff_ESI;
    peVar8->velocity[2] = unaff_EBP;
    goto LAB_10050be0;
  }
  pcVar9 = s_worldspawn_1009d64c;
  pbVar6 = (byte *)(gpGlobals->pStringBase + **(int **)(param_1 + 4));
  pbVar5 = pbVar6;
  do {
    bVar1 = *pbVar5;
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_10050933:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10050938;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_10050933;
    pbVar5 = pbVar5 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10050938:
  if (iVar3 == 0) {
LAB_10050a08:
    peVar8 = this->pev;
    fVar11 = peVar8->velocity[0];
    fVar11 = SQRT(peVar8->velocity[2] * peVar8->velocity[2] +
                  peVar8->velocity[1] * peVar8->velocity[1] + fVar11 * fVar11);
    if (fVar11 == 0.0) {
      fVar13 = 1.0;
      fVar12 = 0.0;
      fVar11 = 0.0;
      this_00 = &VStack_a4;
    }
    else {
      fVar11 = 1.0 / fVar11;
      fVar13 = fVar11 * peVar8->velocity[2];
      fVar12 = fVar11 * peVar8->velocity[1];
      fVar11 = fVar11 * peVar8->velocity[0];
      this_00 = &VStack_98;
    }
    puVar4 = (undefined4 *)Vector::Vector(this_00,fVar11,fVar12,fVar13);
    Vector::Vector((Vector *)auStack_b0,puVar4);
    VStack_a4.x = (float)auStack_b0._0_4_ * 6.0;
    VStack_8c.x = (float)auStack_b0._0_4_;
    VStack_a4.y = (float)auStack_b0._4_4_ * 6.0;
    VStack_8c.z = (float)auStack_b0._8_4_;
    VStack_a4.z = (float)auStack_b0._8_4_ * 6.0;
    VStack_8c.y = (float)auStack_b0._4_4_;
    Vector::Vector(&VStack_98,&VStack_a4.x);
    peVar8 = this->pev;
    puVar4 = (undefined4 *)
             Vector::Vector(&VStack_44,peVar8->origin[0] - VStack_98.x,
                            peVar8->origin[1] - VStack_98.y,peVar8->origin[2] - VStack_98.z);
    Vector::Vector((Vector *)auStack_b0,puVar4);
    UTIL_SetOrigin((int)this->pev,auStack_b0);
    pvVar7 = (vec_t *)UTIL_VecToAngles(&VStack_44.x,&VStack_8c);
    peVar8 = this->pev;
    peVar8->angles[0] = *pvVar7;
    peVar8->angles[1] = pvVar7[1];
    peVar8->angles[2] = pvVar7[2];
    this->pev->angles[2] = 90.0;
    this->pev->solid = 0;
    this->pev->movetype = 5;
    peVar8 = this->pev;
    peVar8->velocity[0] = DAT_100ae498;
    peVar8->velocity[1] = DAT_100ae49c;
    peVar8->velocity[2] = DAT_100ae4a0;
    peVar8 = this->pev;
    pvVar7 = peVar8->avelocity;
    *pvVar7 = DAT_100ae498;
    peVar8->avelocity[1] = DAT_100ae49c;
    VStack_98.z = DAT_100ae4a0;
  }
  else {
    pcVar9 = s_func_wall_100a439c;
    do {
      bVar1 = *pbVar6;
      bVar10 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) {
LAB_1005096f:
        iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_10050974;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar10 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_1005096f;
      pbVar6 = pbVar6 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_10050974:
    if (iVar3 == 0) goto LAB_10050a08;
    peVar8 = this->pev;
    puVar4 = (undefined4 *)
             Vector::Vector(&VStack_8c,-peVar8->velocity[0],-peVar8->velocity[1],
                            -peVar8->velocity[2]);
    Vector::Vector(&VStack_a4,puVar4);
    puVar4 = (undefined4 *)
             Vector::Vector((Vector *)auStack_b0,VStack_a4.x * 0.25,VStack_a4.y * 0.25,
                            VStack_a4.z * 0.25);
    Vector::Vector(&VStack_98,puVar4);
    peVar8 = this->pev;
    pvVar7 = peVar8->velocity;
    *pvVar7 = VStack_98.x;
    peVar8->velocity[1] = VStack_98.y;
  }
  pvVar7[2] = VStack_98.z;
  peVar2 = this->pev->pContainingEntity;
  (*g_engfuncs.pfnRandomLong)(0x14,0x1e);
  EMIT_SOUND_DYN(this_01,peVar2,4,s_weapons_knife_knife_hit_wav_100a36e4,0x3f800000,0x3f4ccccd,0);
LAB_10050be0:
  *(code **)&this->field_0x10 = FUN_10052e90;
  *(float *)&this->field_0x78 = gpGlobals->time + 10.0;
  return;
}

/* 10050c10  CTSShrapnel::WaitThink  (440 bytes)
 * void WaitThink(void)
 */
/* public: virtual void __thiscall CTSShrapnel::WaitThink(void) */

void __thiscall CTSShrapnel::WaitThink(CTSShrapnel *this)

{
  entvars_t *peVar1;
  float fVar2;
  float fVar3;
  Vector local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
                    /* 0x50c10  142  ?WaitThink@CTSShrapnel@@UAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.1;
  peVar1 = this->pev;
  fVar2 = SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
               peVar1->velocity[1] * peVar1->velocity[1] + peVar1->velocity[0] * peVar1->velocity[0]
              );
  if (SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
           peVar1->velocity[1] * peVar1->velocity[1] + peVar1->velocity[0] * peVar1->velocity[0]) <=
      100.0) {
    if ((fVar2 < 100.0) && (peVar1->movetype != 5)) {
      UTIL_Remove((int *)this);
    }
  }
  else {
    fVar3 = SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
                 peVar1->velocity[1] * peVar1->velocity[1] +
                 peVar1->velocity[0] * peVar1->velocity[0]);
    if (fVar3 == 0.0) {
      local_30.z = 1.0;
      local_30.x = 0.0;
      local_30.y = 0.0;
    }
    else {
      fVar3 = 1.0 / fVar3;
      local_18 = fVar3 * peVar1->velocity[0];
      local_14 = fVar3 * peVar1->velocity[1];
      local_10 = fVar3 * peVar1->velocity[2];
      Vector::Vector(&local_30,&local_18);
    }
    local_1c = fVar2 - 1.0;
    peVar1 = this->pev;
    local_24 = local_1c * local_30.x;
    local_20 = local_30.y * local_1c;
    local_1c = local_30.z * local_1c;
    peVar1->velocity[0] = local_24;
    peVar1->velocity[1] = local_20;
    peVar1->velocity[2] = local_1c;
    local_8 = local_20;
    local_4 = local_1c;
  }
  if ((*(float *)&this->field_0x78 != 0.0) && (*(float *)&this->field_0x78 < gpGlobals->time)) {
    RemoveEntityFromSlowedArray((int)this);
    UTIL_Remove((int *)this);
    return;
  }
  if (this->pev->movetype != 5) {
    CTSPhysicObject::WaitThink((CTSPhysicObject *)this);
  }
  return;
}

