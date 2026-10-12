/* mp.dll - CTSShrapnel (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10046f10  CTSShrapnel::Create  (209 bytes)
 * int * Create(int param_1, int param_2, int param_3, int param_4, float param_5, float param_6, float param_7)
 * called by: TSExplosion
 */
int * __cdecl
CTSShrapnel::Create(int param_1,int param_2,int param_3,int param_4,float param_5,float param_6,
                   float param_7)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)GetClassPtr<CTSShrapnel>(0);
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  (**(code **)(*piVar3 + 0xc))();
  *(int *)piVar3[1] = (int)s_shrapnel_10098618 - (int)gpGlobals->pStringBase;
  iVar4 = piVar3[1];
  piVar3[0x1f] = param_1;
  *(int *)(iVar4 + 8) = param_2;
  *(int *)(iVar4 + 0xc) = param_3;
  *(int *)(iVar4 + 0x10) = param_4;
  iVar4 = piVar3[1];
  fVar1 = *(float *)(param_1 + 0x24);
  fVar2 = *(float *)(param_1 + 0x28);
  *(float *)(iVar4 + 0x20) = param_5 + *(float *)(param_1 + 0x20);
  *(float *)(iVar4 + 0x24) = param_6 + fVar1;
  *(float *)(iVar4 + 0x28) = param_7 + fVar2;
  piVar3[0x20] = param_2;
  piVar3[0x21] = param_3;
  piVar3[0x22] = param_4;
  iVar4 = (*g_engfuncs.pfnRandomLong)(0,2);
  *(int *)(piVar3[1] + 0x114) = iVar4;
  *(undefined4 *)(piVar3[1] + 0x254) = *(undefined4 *)(param_1 + 0x254);
  return piVar3;
}

/* 10046ff0  CTSShrapnel::Spawn  (241 bytes)
 * undefined Spawn()
 */
void __fastcall CTSShrapnel::Spawn(int param_1)

{
  FUN_10046a10(param_1);
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),s_models_shrapnel_mdl_10098624);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x11c) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x120) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 10;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 2;
  FUN_10067970();
  *(code **)(param_1 + 0x10) = FUN_10048fd0;
  *(code **)(param_1 + 0x14) = FUN_10048fc0;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x254) = 0;
  *(float *)(param_1 + 0x78) = gpGlobals->time + 30.0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x250) = 0;
  *(uint *)(*(int *)(param_1 + 4) + 0x250) = *(uint *)(*(int *)(param_1 + 4) + 0x250) | 1;
  return;
}

/* 100470f0  CTSShrapnel::Precache  (26 bytes)
 * undefined Precache()
 */
void CTSShrapnel::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_shrapnel_mdl_10098624);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_knife_knife_hit_wav_10098244);
  return;
}

/* 10047110  CTSShrapnel::BounceTouch  (817 bytes)
 * void BounceTouch(CBaseEntity * param_1)
 */
/* public: virtual void __thiscall CTSShrapnel::BounceTouch(class CBaseEntity *) */

void __thiscall CTSShrapnel::BounceTouch(CTSShrapnel *this,CBaseEntity *param_1)

{
  float fVar1;
  edict_t *peVar2;
  CBaseEntity *pCVar3;
  int iVar4;
  vec_t *pvVar5;
  float fVar6;
  void *this_00;
  entvars_t *peVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 auStack_38 [14];
  
                    /* 0x47110  10  ?BounceTouch@CTSShrapnel@@UAEXPAVCBaseEntity@@@Z */
  pCVar3 = param_1;
  if (*(char *)(*(int *)(param_1 + 4) + 0x118) < '\0') {
    return;
  }
  if ((*(float *)(*(int *)(param_1 + 4) + 0x16c) != 0.0) &&
     (iVar4 = (**(code **)(*(int *)param_1 + 0xa8))(), iVar4 != 0)) {
    peVar7 = *(entvars_t **)&this->field_0x7c;
    FUN_100678a0(auStack_38);
    FUN_1006a2f0();
    param_1 = (CBaseEntity *)peVar7;
    if (peVar7 == (entvars_t *)0x0) {
      param_1 = (CBaseEntity *)this->pev;
    }
    iVar4 = *(int *)pCVar3;
    FUN_10011fc0(this->pev->velocity,(float *)&stack0xffffff8c);
    (**(code **)(iVar4 + 0x34))(param_1,0x42c80000);
    if (peVar7 == (entvars_t *)0x0) {
      peVar7 = this->pev;
    }
    FUN_1006a310(this->pev,peVar7);
    peVar7 = this->pev;
    fVar6 = peVar7->velocity[1];
    fVar1 = peVar7->velocity[2];
    peVar7->velocity[0] = -peVar7->velocity[0] * 0.25;
    peVar7->velocity[1] = -fVar6 * 0.25;
    peVar7->velocity[2] = -fVar1 * 0.25;
    goto LAB_10047421;
  }
  iVar4 = 0xb;
  bVar10 = true;
  pcVar8 = gpGlobals->pStringBase + **(int **)(param_1 + 4);
  pcVar9 = s_worldspawn_10092568;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar10 = *pcVar8 == *pcVar9;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar10);
  if (bVar10) {
LAB_1004729a:
    peVar7 = this->pev;
    fVar6 = peVar7->velocity[0];
    fVar6 = SQRT(peVar7->velocity[2] * peVar7->velocity[2] +
                 peVar7->velocity[1] * peVar7->velocity[1] + fVar6 * fVar6);
    if (fVar6 == 0.0) {
      fStack_50 = 0.0;
      fStack_4c = 0.0;
      fStack_48 = 1.0;
    }
    else {
      fVar6 = 1.0 / fVar6;
      FUN_1000c5f0(&fStack_50,fVar6 * peVar7->velocity[0],fVar6 * peVar7->velocity[1],
                   fVar6 * peVar7->velocity[2]);
    }
    peVar7 = this->pev;
    fStack_3c = peVar7->origin[2] - fStack_48 * 6.0;
    fStack_40 = peVar7->origin[1] - fStack_4c * 6.0;
    fStack_44 = peVar7->origin[0] - fStack_50 * 6.0;
    FUN_100679a0();
    pvVar5 = (vec_t *)UTIL_VecToAngles(&fStack_44,&fStack_50);
    peVar7 = this->pev;
    peVar7->angles[0] = *pvVar5;
    peVar7->angles[1] = pvVar5[1];
    peVar7->angles[2] = pvVar5[2];
    this->pev->angles[2] = 90.0;
    this->pev->solid = 0;
    this->pev->movetype = 5;
    peVar7 = this->pev;
    peVar7->velocity[0] = DAT_1009f4a8;
    peVar7->velocity[1] = DAT_1009f4ac;
    peVar7->velocity[2] = DAT_1009f4b0;
    peVar7 = this->pev;
    pvVar5 = peVar7->avelocity;
    *pvVar5 = DAT_1009f4a8;
    peVar7->avelocity[1] = DAT_1009f4ac;
    fVar6 = DAT_1009f4b0;
  }
  else {
    iVar4 = 10;
    bVar10 = true;
    pcVar8 = gpGlobals->pStringBase + **(int **)(param_1 + 4);
    pcVar9 = s_func_wall_10098638;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar10 = *pcVar8 == *pcVar9;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar10);
    if (bVar10) goto LAB_1004729a;
    peVar7 = this->pev;
    pvVar5 = peVar7->velocity;
    fStack_3c = -peVar7->velocity[2];
    fStack_50 = -*pvVar5 * 0.25;
    fStack_4c = -peVar7->velocity[1] * 0.25;
    *pvVar5 = fStack_50;
    fStack_48 = fStack_3c * 0.25;
    peVar7->velocity[1] = fStack_4c;
    fVar6 = fStack_48;
  }
  pvVar5[2] = fVar6;
  peVar2 = this->pev->pContainingEntity;
  iVar4 = (*g_engfuncs.pfnRandomLong)(0x14,0x1e);
  EMIT_SOUND_DYN(this_00,peVar2,4,s_weapons_knife_knife_hit_wav_10098244,0x3f800000,0x3f4ccccd,0,
                 iVar4 + 100);
LAB_10047421:
  *(code **)&this->field_0x10 = FUN_10048fd0;
  *(float *)&this->field_0x78 = gpGlobals->time + 10.0;
  return;
}

/* 10047450  CTSShrapnel::WaitThink  (398 bytes)
 * void WaitThink(void)
 */
/* public: virtual void __thiscall CTSShrapnel::WaitThink(void) */

void __thiscall CTSShrapnel::WaitThink(CTSShrapnel *this)

{
  vec_t *pvVar1;
  entvars_t *peVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_4;
  
                    /* 0x47450  133  ?WaitThink@CTSShrapnel@@UAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.1;
  peVar2 = this->pev;
  pvVar1 = peVar2->velocity;
  local_4 = SQRT(peVar2->velocity[2] * peVar2->velocity[2] +
                 peVar2->velocity[1] * peVar2->velocity[1] + *pvVar1 * *pvVar1);
  if (SQRT(peVar2->velocity[2] * peVar2->velocity[2] +
           peVar2->velocity[1] * peVar2->velocity[1] + peVar2->velocity[0] * peVar2->velocity[0]) <=
      100.0) {
    if ((local_4 < 100.0) && (peVar2->movetype != 5)) {
      UTIL_Remove((int)this);
    }
  }
  else {
    if (local_4 == 0.0) {
      fVar3 = 0.0;
      fVar5 = 0.0;
      local_4 = 1.0;
    }
    else {
      local_4 = 1.0 / local_4;
      fVar3 = local_4 * *pvVar1;
      fVar5 = local_4 * peVar2->velocity[1];
      local_4 = local_4 * peVar2->velocity[2];
    }
    fVar4 = SQRT(peVar2->velocity[2] * peVar2->velocity[2] +
                 peVar2->velocity[1] * peVar2->velocity[1] + *pvVar1 * *pvVar1) - 1.0;
    *pvVar1 = fVar4 * fVar3;
    peVar2->velocity[1] = fVar5 * fVar4;
    peVar2->velocity[2] = local_4 * fVar4;
  }
  if ((*(float *)&this->field_0x78 == 0.0) || (gpGlobals->time <= *(float *)&this->field_0x78)) {
    if (this->pev->movetype != 5) {
      CTSPhysicObject::WaitThink((CTSPhysicObject *)this);
      return;
    }
  }
  else {
    RemoveEntityFromSlowedArray((int)this);
    UTIL_Remove((int)this);
  }
  return;
}

/* 10048f10  CTSShrapnel::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CTSShrapnel::ObjectCaps(void)

{
  return 0x10;
}

