/* mp.dll - CBreakable (17 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001b050  CBreakable::KeyValue  (461 bytes)
 * undefined KeyValue(int param_1)
 * called by: CPushable::KeyValue
 */
void __thiscall CBreakable::KeyValue(CBreakable *this,int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  
  pcVar6 = *(char **)(param_1 + 4);
  puVar3 = &DAT_0000000a;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_explosion_100934a4;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    uVar1 = FUN_1007e860(puVar3,*(byte_conflict **)(param_1 + 8),
                         (byte_conflict *)s_directed_10093498);
    if (uVar1 == 0) {
      *(undefined4 *)&this->field_0x64 = 1;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    FUN_1007e860(*(void **)(param_1 + 8),*(void **)(param_1 + 8),(byte_conflict *)s_random_10093490)
    ;
    *(undefined4 *)&this->field_0x64 = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = &DAT_00000009;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_material_10093484;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    iVar2 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_1 + 8));
    if ((-1 < iVar2) && (iVar2 < 10)) {
      *(int *)&this->field_0x60 = iVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    *(undefined4 *)&this->field_0x60 = 1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar2 = 10;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_deadmodel_10093478;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar2 = 7;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_shards_10093470;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar2 = 9;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_gibmodel_10093464;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x70 = iVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pvVar4 = (void *)0xc;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_spawnobject_10093458;
  do {
    if (pvVar4 == (void *)0x0) break;
    pvVar4 = (void *)((int)pvVar4 + -1);
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    uVar1 = FUN_1006e1dd(pvVar4,*(byte_conflict **)(param_1 + 8));
    if ((0 < (int)uVar1) && (uVar1 < 0x16)) {
      *(int *)&this->field_0x74 = *(int *)(&DAT_10093050 + uVar1 * 4) - (int)gpGlobals->pStringBase;
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pvVar4 = (void *)0x11;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_explodemagnitude_10093444;
  do {
    if (pvVar4 == (void *)0x0) break;
    pvVar4 = (void *)((int)pvVar4 + -1);
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    iVar2 = FUN_1006e1dd(pvVar4,*(byte_conflict **)(param_1 + 8));
    this->pev->impulse = iVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar2 = 4;
  bVar8 = true;
  pcVar5 = &DAT_10093440;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar8 = *pcVar6 == *pcVar5;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar8);
  if (bVar8) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
  return;
}

/* 1001b230  CBreakable::Save  (48 bytes)
 * undefined Save(void * param_1)
 * called by: CPushable::Save
 */
void __thiscall CBreakable::Save(CBreakable *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_1,(byte_conflict *)s_CBreakable_100934b0,(int)this,0x100930a8,5);
  return;
}

/* 1001b260  CBreakable::Restore  (48 bytes)
 * undefined Restore(void * param_1)
 * called by: CPushable::Restore
 */
void __thiscall CBreakable::Restore(CBreakable *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_1,(byte_conflict *)s_CBreakable_100934b0,(int)this,0x100930a8,5);
  return;
}

/* 1001b290  CBreakable::MaterialSoundList  (109 bytes)
 * undefined * * MaterialSoundList(undefined4 param_1, undefined4 * param_2)
 * called by: CBreakable::MaterialSoundPrecache, CBreakable::MaterialSoundRandom
 */
undefined ** __cdecl CBreakable::MaterialSoundList(undefined4 param_1,undefined4 *param_2)

{
  switch(param_1) {
  case 0:
  case 6:
  case 7:
    *param_2 = 3;
    return &PTR_s_debris_glass1_wav_10093134;
  case 1:
    *param_2 = 3;
    return &PTR_s_debris_wood1_wav_100930f8;
  case 2:
    *param_2 = 3;
    return &PTR_s_debris_metal1_wav_1009311c;
  case 3:
    *param_2 = 6;
    return &PTR_s_debris_flesh1_wav_10093104;
  case 4:
  case 8:
    *param_2 = 3;
    return &PTR_s_debris_concrete1_wav_10093128;
  default:
    *param_2 = 0;
    return (undefined **)0x0;
  }
}

/* 1001b330  CBreakable::MaterialSoundPrecache  (61 bytes)
 * undefined MaterialSoundPrecache(undefined4 param_1)
 * called by: CBaseDoor::Precache, CBreakable::Precache, CEnvShooter::Precache
 */
void __cdecl CBreakable::MaterialSoundPrecache(undefined4 param_1)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  int local_4;
  
  iVar3 = 0;
  local_4 = 0;
  ppuVar2 = MaterialSoundList(param_1,&local_4);
  iVar1 = local_4;
  if (0 < local_4) {
    do {
      (*g_engfuncs.pfnPrecacheSound)(ppuVar2[iVar3]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}

/* 1001b370  CBreakable::MaterialSoundRandom  (84 bytes)
 * undefined MaterialSoundRandom(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: CGib::BounceGibTouch
 */
void __cdecl
CBreakable::MaterialSoundRandom(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  int iVar2;
  void *this;
  int local_4;
  
  local_4 = 0;
  ppuVar1 = MaterialSoundList(param_2,&local_4);
  if (local_4 != 0) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,local_4 + -1);
    EMIT_SOUND_DYN(this,param_1,4,ppuVar1[iVar2],param_3,0x3f800000,0,100);
  }
  return;
}

/* 1001b3d0  CBreakable::Precache  (359 bytes)
 * undefined Precache(char * param_1)
 * called by: CPushable::Precache
 */
void __fastcall CBreakable::Precache(char *param_1)

{
  int iVar1;
  char *s;
  
  s = param_1;
  switch(*(undefined4 *)(param_1 + 0x60)) {
  case 0:
  case 7:
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustglass1_wav_10092750);
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustglass2_wav_10092768);
    s = s_models_glassgibs_mdl_100927ec;
    break;
  case 1:
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustcrate1_wav_10092720);
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustcrate2_wav_10092738);
    s = s_models_woodgibs_mdl_1009278c;
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustmetal1_wav_100926f0);
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustmetal2_wav_10092708);
    s = s_models_metalplategibs_mdl_100927d0;
    break;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustflesh1_wav_100926c0);
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustflesh2_wav_100926d8);
    s = s_models_fleshgibs_mdl_100934d0;
    break;
  case 4:
    s = s_models_cindergibs_mdl_100927b8;
    goto LAB_1001b4b3;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustceiling_wav_10092670);
    s = s_models_ceilinggibs_mdl_100927a0;
    break;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark5_wav_1009137c);
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark6_wav_10091368);
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustmetal1_wav_100926f0);
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustmetal2_wav_10092708);
    s = s_models_computergibs_mdl_10092804;
    break;
  case 8:
    s = s_models_rockgibs_mdl_100934bc;
LAB_1001b4b3:
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustconcrete1_wav_10092688);
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustconcrete2_wav_100926a4);
  }
  MaterialSoundPrecache(*(undefined4 *)(param_1 + 0x60));
  if (*(int *)(param_1 + 0x70) != 0) {
    s = gpGlobals->pStringBase + *(int *)(param_1 + 0x70);
  }
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s);
  *(int *)(param_1 + 0x68) = iVar1;
  if (*(int *)(param_1 + 0x74) != 0) {
    UTIL_PrecacheOther((int)(gpGlobals->pStringBase + *(int *)(param_1 + 0x74)));
  }
  return;
}

/* 1001b700  CBreakable::BreakTouch  (271 bytes)
 * void BreakTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CBreakable::BreakTouch(class CBaseEntity *) */

void __thiscall CBreakable::BreakTouch(CBreakable *this,CBaseEntity *param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  float unaff_EDI;
  
                    /* 0x1b700  12  ?BreakTouch@CBreakable@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  iVar4 = (**(code **)(*(int *)param_1 + 0xa8))();
  if (iVar4 != 0) {
    bVar3 = FUN_1001bb50((int)this);
    if (CONCAT31(extraout_var,bVar3) != 0) {
      if (((this->pev->spawnflags & 2) != 0) &&
         (fVar2 = SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                       *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                       *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)) * 0.01,
         this->pev->health <= fVar2)) {
        *(undefined4 *)&this->field_0x14 = 0;
        (*this->vtable[0xe])(iVar1,iVar1,fVar2,1);
        (**(code **)(*(int *)param_1 + 0x38))(this->pev,this->pev,unaff_EDI * 0.25,4);
      }
      if (((this->pev->spawnflags & 4) != 0) &&
         (fVar2 = this->pev->maxs[2] - 2.0,
         fVar2 < *(float *)(iVar1 + 0xcc) != (fVar2 == *(float *)(iVar1 + 0xcc)))) {
        FUN_1001b560((int)this);
        *(code **)&this->field_0x10 = Die;
        *(undefined4 *)&this->field_0x14 = 0;
        if (*(float *)&this->field_0x54 == 0.0) {
          *(undefined4 *)&this->field_0x54 = 0x3dcccccd;
        }
        this->pev->nextthink = this->pev->ltime + *(float *)&this->field_0x54;
      }
    }
  }
  return;
}

/* 1001b810  CBreakable::Use  (90 bytes)
 * undefined Use(CBreakable * param_1)
 * called by: CPushable::Use
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CBreakable::Use(CBreakable *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_1001bb50((int)param_1);
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1->pev->deadflag == 0)) {
    param_1->pev->angles[1] = *(vec_t *)&param_1->field_0x6c;
    FUN_10066df0();
    _DAT_1009f4c4 = gpGlobals->v_forward[0];
    _DAT_1009f4c8 = gpGlobals->v_forward[1];
    _DAT_1009f4cc = gpGlobals->v_forward[2];
    Die(param_1);
  }
  return;
}

/* 1001b870  CBreakable::TraceAttack  (234 bytes)
 * undefined TraceAttack()
 */
void __thiscall
CBreakable::TraceAttack
          (CBaseEntity *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          float param_5)

{
  int iVar1;
  float10 extraout_ST0;
  char *pcVar2;
  int in_stack_00000020;
  uint in_stack_00000024;
  float in_stack_0000002c;
  undefined4 in_stack_00000034;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  
  fVar5 = 1.4013e-45;
  fVar4 = 0.0;
  fVar3 = 2.5582892e-29;
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,1);
  iVar6 = in_stack_00000020;
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x60) == 6) {
      UTIL_Sparks((undefined4 *)(in_stack_00000020 + 0x14));
      (*g_engfuncs.pfnRandomFloat)(0.7,1.0);
      in_stack_0000002c = (float)extraout_ST0;
      fVar5 = 2.558321e-29;
      iVar1 = (*g_engfuncs.pfnRandomLong)(0,1);
      if (iVar1 == 0) {
        pcVar2 = s_buttons_spark5_wav_1009137c;
      }
      else {
        if (iVar1 != 1) goto LAB_1001b92f;
        pcVar2 = s_buttons_spark6_wav_10091368;
      }
      param_5 = 1.4013e-43;
      param_4 = 0;
      fVar5 = 2.5583415e-29;
      EMIT_SOUND_DYN(*(void **)(*(int *)(param_1 + 4) + 0x208),
                     *(void **)(*(int *)(param_1 + 4) + 0x208),2,pcVar2,in_stack_00000034,0x3f4ccccd
                     ,0,100);
    }
    else if (*(int *)(param_1 + 0x60) == 7) {
      fVar5 = 2.558303e-29;
      (*g_engfuncs.pfnRandomFloat)(0.5,1.5);
      FUN_10068170((undefined4 *)(iVar6 + 0x14));
    }
  }
LAB_1001b92f:
  uVar7 = in_stack_00000024;
  FUN_1000a540(&stack0xffffffec,(undefined4 *)&stack0x00000014);
  CBaseEntity::TraceAttack(param_1,param_4,param_5,fVar3,fVar4,fVar5,iVar6,uVar7);
  return;
}

/* 1001b960  CBreakable::TakeDamage  (488 bytes)
 * undefined4 TakeDamage(int param_1, int param_2, float param_3, uint param_4)
 * called by: CPushable::TakeDamage
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
CBreakable::TakeDamage(CBreakable *this,int param_1,int param_2,float param_3,uint param_4)

{
  float fVar1;
  entvars_t *peVar2;
  bool bVar3;
  undefined3 extraout_var;
  float local_c;
  float local_8;
  float local_4;
  
  peVar2 = this->pev;
  local_c = *(float *)(param_1 + 8) - (peVar2->size[0] * 0.5 + peVar2->absmin[0]);
  local_8 = *(float *)(param_1 + 0xc) - (peVar2->size[1] * 0.5 + peVar2->absmin[1]);
  local_4 = *(float *)(param_1 + 0x10) - (peVar2->size[2] * 0.5 + peVar2->absmin[2]);
  if ((((param_2 == param_1) && ((*(byte *)(param_2 + 0x1a4) & 8) != 0)) &&
      ((peVar2->spawnflags & 0x100U) != 0)) && ((char)param_4 < '\0')) {
    param_3 = peVar2->health;
  }
  bVar3 = FUN_1001bb50((int)this);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    return 0;
  }
  if ((char)param_4 < '\0') {
    param_3 = param_3 + param_3;
  }
  if ((param_4 & 0x20000) != 0) {
    param_3 = param_3 * 0.1;
  }
  fVar1 = SQRT(local_c * local_c + local_8 * local_8 + local_4 * local_4);
  if (fVar1 == 0.0) {
    local_c = 0.0;
    local_8 = 0.0;
    local_4 = 1.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    local_c = local_c * fVar1;
    local_8 = local_8 * fVar1;
    local_4 = local_4 * fVar1;
  }
  _DAT_1009f4c4 = local_c;
  _DAT_1009f4c8 = local_8;
  _DAT_1009f4cc = local_4;
  this->pev->health = this->pev->health - param_3;
  fVar1 = this->pev->health;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_1001b560((int)this);
    return 1;
  }
  DAT_100ac8bc = param_2;
  Die(this);
  DAT_100ac8bc = 0;
  return 0;
}

/* 1001bb60  CBreakable::DamageDecal  (43 bytes)
 * undefined DamageDecal()
 */
int __fastcall CBreakable::DamageDecal(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,2);
    return iVar1 + 0x19;
  }
  if (*(int *)(param_1 + 0x60) == 7) {
    return 0x23;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x148);
  if (iVar1 == 4) {
    return -1;
  }
  if (iVar1 != 0) {
    return 0x23;
  }
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,4);
  return iVar1;
}

/* 1001c360  CBreakable::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CBreakable::ObjectCaps(void)

{
  return 0;
}

/* 100423f0  CBreakable::BreakableRespawn  (76 bytes)
 * undefined BreakableRespawn()
 */
void __thiscall CBreakable::BreakableRespawn(int *param_1,char param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (((*(int *)(iVar1 + 0x170) == 2) || (*(int *)(iVar1 + 0x118) == 0x80)) || (param_2 != '\0')) {
    *(undefined4 *)(iVar1 + 0x170) = 0;
    *(int *)(param_1[1] + 0x160) = param_1[0x17];
    *(undefined4 *)(param_1[1] + 0x118) = 0;
    param_1[4] = 0;
    (**(code **)(*param_1 + 0xc))();
  }
  return;
}

/* 10042440  CBreakable::Spawn  (219 bytes)
 * undefined Spawn(int * param_1)
 * called by: CPushable::Spawn
 */
void __fastcall CBreakable::Spawn(int *param_1)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  
  (**(code **)(*param_1 + 0x10))();
  iVar2 = param_1[1];
  param_1[0x17] = *(int *)(iVar2 + 0x160);
  if ((*(byte *)(iVar2 + 0x1a0) & 1) == 0) {
    *(undefined4 *)(iVar2 + 0x16c) = 0x3f800000;
  }
  else {
    *(undefined4 *)(iVar2 + 0x16c) = 0;
  }
  *(undefined4 *)(param_1[1] + 0x10c) = 4;
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  param_1[0x1b] = *(int *)(param_1[1] + 0x54);
  *(undefined4 *)(param_1[1] + 0x54) = 0;
  if (param_1[0x18] == 0) {
    *(undefined4 *)(param_1[1] + 0x20c) = 1;
  }
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  param_1[5] = (int)BreakTouch;
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
    param_1[5] = 0;
  }
  bVar3 = FUN_1001bb50((int)param_1);
  if ((CONCAT31(extraout_var,bVar3) == 0) && (*(int *)(param_1[1] + 0x148) != 0)) {
    puVar1 = (uint *)(param_1[1] + 0x1a4);
    *puVar1 = *puVar1 | 0x2000000;
  }
  return;
}

/* 10042520  CBreakable::Killed  (27 bytes)
 * undefined Killed()
 */
void __thiscall CBreakable::Killed(CBreakable *param_1,undefined4 param_2)

{
  DAT_100ac8bc = param_2;
  Die(param_1);
  DAT_100ac8bc = 0;
  return;
}

/* 10042540  CBreakable::Die  (1580 bytes)
 * void Die(void)
 * called by: CBreakable::Killed, CBreakable::TakeDamage, CBreakable::Use
 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBreakable::Die(void) */

void __thiscall CBreakable::Die(CBreakable *this)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  entvars_t *peVar6;
  float10 extraout_ST0;
  float10 fVar7;
  longlong lVar8;
  char *pcVar9;
  float fVar10;
  undefined1 *puVar11;
  float in_stack_fffffbcc;
  undefined4 in_stack_fffffbd0;
  int *piVar12;
  float fVar13;
  entvars_t *peVar14;
  float fVar15;
  vec_t *pvVar16;
  edict_t *peVar17;
  float fVar18;
  float fStack_410;
  float fStack_40c;
  float in_stack_fffffbf8;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  char cStack_3e9;
  vec_t vStack_3e8;
  vec_t vStack_3e4;
  float fStack_3e0;
  int iStack_3dc;
  int iStack_3d8;
  vec_t vStack_3d4;
  vec_t vStack_3d0;
  vec_t vStack_3cc;
  float afStack_3c8 [2];
  int aiStack_3c0 [240];
  
                    /* 0x42540  32  ?Die@CBreakable@@QAEXXZ */
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,0x1d);
  iVar2 = iVar2 + 0x5f;
  if ((0x61 < iVar2) && (iVar2 < 0x67)) {
    iVar2 = 100;
  }
  peVar14 = this->pev;
  (*g_engfuncs.pfnRandomFloat)(0.85,1.0);
  lVar8 = __ftol();
  uVar5 = (int)(uint)lVar8 >> 0x1f;
  fVar7 = (float10)(int)(((uint)lVar8 ^ uVar5) - uVar5) * (float10)0.01 + extraout_ST0;
  fVar10 = (float)fVar7;
  if ((float10)1.0 < fVar7) {
    fVar10 = 1.0;
  }
  switch(*(undefined4 *)&this->field_0x60) {
  case 0:
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar4 == 0) {
      pcVar9 = s_debris_bustglass1_wav_10092750;
LAB_10042615:
      EMIT_SOUND_DYN(this->pev,this->pev->pContainingEntity,2,pcVar9,in_stack_fffffbd0,0x3f4ccccd,0,
                     iVar2);
    }
    else if (iVar4 == 1) {
      pcVar9 = s_debris_bustglass2_wav_10092768;
      goto LAB_10042615;
    }
    in_stack_fffffbcc = (float)CONCAT13(1,SUB43(in_stack_fffffbcc,0));
    break;
  case 1:
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar4 == 0) {
      pcVar9 = s_debris_bustcrate1_wav_10092720;
LAB_1004266c:
      EMIT_SOUND_DYN(this->pev,this->pev->pContainingEntity,2,pcVar9,in_stack_fffffbd0,0x3f4ccccd,0,
                     iVar2);
    }
    else if (iVar4 == 1) {
      pcVar9 = s_debris_bustcrate2_wav_10092738;
      goto LAB_1004266c;
    }
    in_stack_fffffbcc = (float)CONCAT13(8,SUB43(in_stack_fffffbcc,0));
    break;
  case 2:
  case 6:
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar4 == 0) {
      pcVar9 = s_debris_bustmetal1_wav_100926f0;
LAB_100426c4:
      EMIT_SOUND_DYN(this->pev,this->pev->pContainingEntity,2,pcVar9,in_stack_fffffbd0,0x3f4ccccd,0,
                     iVar2);
    }
    else if (iVar4 == 1) {
      pcVar9 = s_debris_bustmetal2_wav_10092708;
      goto LAB_100426c4;
    }
    in_stack_fffffbcc = (float)CONCAT13(2,SUB43(in_stack_fffffbcc,0));
    break;
  case 3:
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar4 == 0) {
      pcVar9 = s_debris_bustflesh1_wav_100926c0;
LAB_1004271c:
      EMIT_SOUND_DYN(this->pev,this->pev->pContainingEntity,2,pcVar9,in_stack_fffffbd0,0x3f4ccccd,0,
                     iVar2);
    }
    else if (iVar4 == 1) {
      pcVar9 = s_debris_bustflesh2_wav_100926d8;
      goto LAB_1004271c;
    }
    in_stack_fffffbcc = (float)CONCAT13(4,SUB43(in_stack_fffffbcc,0));
    break;
  case 4:
  case 8:
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar4 == 0) {
      pcVar9 = s_debris_bustconcrete1_wav_10092688;
LAB_10042771:
      EMIT_SOUND_DYN(this->pev,this->pev->pContainingEntity,2,pcVar9,in_stack_fffffbd0,0x3f4ccccd,0,
                     iVar2);
    }
    else if (iVar4 == 1) {
      pcVar9 = s_debris_bustconcrete2_wav_100926a4;
      goto LAB_10042771;
    }
    in_stack_fffffbcc = (float)CONCAT13(0x40,SUB43(in_stack_fffffbcc,0));
    break;
  case 5:
    peVar17 = peVar14->pContainingEntity;
    EMIT_SOUND_DYN(peVar17,peVar17,2,s_debris_bustceiling_wav_10092670,fVar10,0x3f4ccccd,0,iVar2);
  }
  if (*(int *)&this->field_0x64 == 1) {
    fVar10 = _DAT_1009f4c4 * 200.0;
    fVar13 = _DAT_1009f4c8 * 200.0;
    fVar15 = _DAT_1009f4cc * 200.0;
  }
  else {
    fVar10 = 0.0;
    fVar13 = 0.0;
    fVar15 = 0.0;
  }
  if (*(int *)&this->field_0x60 == 0) {
    (*g_engfuncs.pfnMessageBegin)(4,DAT_100cbc84,(float *)&stack0xfffffbe0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteCoord)(fStack_410);
    (*g_engfuncs.pfnWriteCoord)(in_stack_fffffbf8);
    (*g_engfuncs.pfnWriteCoord)(fStack_400);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[0]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[1]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[2]);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnMessageEnd)();
  }
  else {
    (*g_engfuncs.pfnMessageBegin)(4,0x17,(float *)&stack0xfffffbe0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0x6c);
    (*g_engfuncs.pfnWriteCoord)(fStack_40c);
    (*g_engfuncs.pfnWriteCoord)(fStack_404);
    (*g_engfuncs.pfnWriteCoord)(fStack_3fc);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[0]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[1]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[2]);
    (*g_engfuncs.pfnWriteCoord)(fVar10);
    (*g_engfuncs.pfnWriteCoord)(fVar13);
    (*g_engfuncs.pfnWriteCoord)(fVar15);
    (*g_engfuncs.pfnWriteByte)(10);
    (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0x68);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnWriteByte)(0x19);
    (*g_engfuncs.pfnWriteByte)((int)cStack_3e9);
    (*g_engfuncs.pfnMessageEnd)();
  }
  peVar14 = this->pev;
  vStack_3d4 = peVar14->absmin[0];
  vStack_3d0 = peVar14->absmin[1];
  vStack_3e8 = peVar14->absmax[0];
  vStack_3e4 = peVar14->absmax[1];
  vStack_3cc = peVar14->absmax[2];
  fStack_3e0 = peVar14->absmax[2] + 8.0;
  piVar12 = aiStack_3c0 + 1;
  fVar10 = 2.6064928e-29;
  iVar2 = UTIL_EntitiesInBox((int)piVar12,0x100,&vStack_3d4,&vStack_3e8,0x200);
  if ((iVar2 != 0) && (iVar4 = 0, 0 < iVar2)) {
    do {
      iVar1 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      *(uint *)(*(int *)(aiStack_3c0[iVar1] + 4) + 0x1a4) =
           *(uint *)(*(int *)(aiStack_3c0[iVar1] + 4) + 0x1a4) & 0xfffffdff;
      *(undefined4 *)(*(int *)(aiStack_3c0[iVar4] + 4) + 0x19c) = 0;
    } while (iVar4 < iVar2);
  }
  this->pev->solid = 0;
  CBaseDelay::SUB_UseTargets((CBaseDelay *)this,(int *)0x0,3,0);
  this->pev->nextthink = this->pev->ltime + 0.1;
  this->pev->deadflag = 2;
  this->pev->effects = 0x80;
  this->pev->takedamage = 0.0;
  *(code **)&this->field_0x10 = FUN_10015e10;
  if (*(int *)&this->field_0x74 != 0) {
    peVar14 = this->pev;
    peVar17 = peVar14->pContainingEntity;
    pvVar16 = peVar14->angles;
    puVar3 = (undefined4 *)VecBModelOrigin(afStack_3c8,(int)peVar14);
    piVar12 = (int *)0x10042afc;
    CBaseEntity::Create((int)(gpGlobals->pStringBase + *(int *)&this->field_0x74),puVar3,pvVar16,
                        peVar17);
  }
  peVar14 = this->pev;
  iStack_3dc = peVar14->impulse;
  if (0 < iStack_3dc) {
    peVar6 = DAT_100ac8bc;
    if (DAT_100ac8bc == (entvars_t *)0x0) {
      peVar6 = peVar14;
    }
    fVar13 = (float)iStack_3dc;
    fVar15 = (float)iStack_3dc;
    fVar18 = 5.8294e-42;
    puVar11 = &stack0xfffffbcc;
    iStack_3d8 = iStack_3dc;
    (*this->vtable[0x35])();
    TSExplosion((float)puVar11,in_stack_fffffbcc,fVar10,(int)piVar12,(int)peVar14,(float)peVar6,
                fVar15,fVar18,fVar13);
  }
  return;
}

