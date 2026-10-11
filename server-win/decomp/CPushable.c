/* mp.dll - CPushable (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001f8a0  CPushable::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CPushable::Save(CBreakable *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBreakable::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CPushable_1009e5f0,(int)param_1,0x1009e238,2);
  return;
}

/* 1001f8d0  CPushable::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CPushable::Restore(CBreakable *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBreakable::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CPushable_1009e5f0,(int)param_1,&DAT_1009e238,2);
  return;
}

/* 1001f910  CPushable::Spawn  (276 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CPushable::Spawn(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1[1] + 0x1a0) & 0x80) == 0) {
    (**(code **)(*param_1 + 0x20))();
  }
  else {
    CBreakable::Spawn(param_1);
  }
  *(undefined4 *)(param_1[1] + 0x108) = 0xd;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  if (399.0 < *(float *)(param_1[1] + 0x120)) {
    *(undefined4 *)(param_1[1] + 0x120) = 0x43c78000;
  }
  iVar1 = param_1[1];
  param_1[0x43] = (int)(400.0 - *(float *)(iVar1 + 0x120));
  *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) | 0x8000;
  *(undefined4 *)(param_1[1] + 0x120) = 0;
  *(float *)(param_1[1] + 0x10) = *(float *)(param_1[1] + 0x10) + 1.0;
  UTIL_SetOrigin(param_1[1],param_1[1] + 8);
  iVar1 = param_1[1];
  lVar2 = __ftol();
  *(int *)(iVar1 + 0x110) = (int)lVar2;
  param_1[0x44] = 0;
  return;
}

/* 1001fa30  CPushable::Precache  (54 bytes)
 * undefined Precache(char * param_1)
 */
void __fastcall CPushable::Precache(char *param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_s_debris_pushbox1_wav_1009e258;
  do {
    (*g_engfuncs.pfnPrecacheSound)(*ppuVar1);
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1009e264);
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 0x80) != 0) {
    CBreakable::Precache(param_1);
  }
  return;
}

/* 1001fa70  CPushable::KeyValue  (559 bytes)
 * undefined KeyValue()
 */
void __thiscall CPushable::KeyValue(CBreakable *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  CBreakable *this;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  longlong lVar9;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  Vector VStack_c;
  undefined3 uVar5;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pbVar6 = &DAT_1009e608;
  pbVar2 = pbVar4;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (CBreakable *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_1001faab:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001fab0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBreakable *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_1001faab;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001fab0:
  if (iVar3 == 0) {
    iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = 1;
    if (iVar3 == 0) {
      uStack_24 = 0x41000000;
      uStack_20 = 0x41000000;
      uStack_1c = 0x41000000;
      uStack_18 = 0xc1000000;
      uStack_14 = 0xc1000000;
      uStack_10 = 0xc1000000;
      UTIL_SetSize((int)param_1->pev,&uStack_18,&uStack_24);
      return;
    }
    if (iVar3 != 2) {
      if (iVar3 != 3) {
        uStack_6c = 0x41800000;
        uStack_68 = 0x41800000;
        uStack_64 = 0x42100000;
        uStack_60 = 0xc1800000;
        uStack_5c = 0xc1800000;
        uStack_58 = 0xc2100000;
        UTIL_SetSize((int)param_1->pev,&uStack_60,&uStack_6c);
        return;
      }
      uStack_54 = 0x41800000;
      uStack_50 = 0x41800000;
      uStack_4c = 0x41900000;
      uStack_48 = 0xc1800000;
      uStack_44 = 0xc1800000;
      uStack_40 = 0xc1900000;
      UTIL_SetSize((int)param_1->pev,&uStack_48,&uStack_54);
      return;
    }
    uStack_3c = 0x42000000;
    uStack_38 = 0x42000000;
    uStack_34 = 0x42100000;
    Vector::Vector(&VStack_c,&uStack_3c);
    uStack_30 = 0xc2000000;
    uStack_2c = 0xc2000000;
    uStack_28 = 0xc2100000;
    UTIL_SetSize((int)param_1->pev,&uStack_30,&VStack_c);
    return;
  }
  pcVar7 = s_buoyancy_1009e5fc;
  do {
    bVar1 = *pbVar4;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (CBreakable *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001fc59:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001fc5e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    this = (CBreakable *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001fc59;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001fc5e:
  if (iVar3 == 0) {
    atof((undefined *)this,*(byte_conflict **)(param_2 + 8));
    lVar9 = __ftol();
    param_1->pev->skin = (int)lVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  CBreakable::KeyValue(param_1,param_2);
  return;
}

/* 1001fca0  CPushable::Use  (134 bytes)
 * undefined Use(int * param_1, int param_2)
 */
void __thiscall CPushable::Use(CPushable *this,int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 == (int *)0x0) || (iVar1 = (**(code **)(*param_1 + 0xc0))(), iVar1 == 0)) {
    if ((this->pev->spawnflags & 0x80) != 0) {
      CBreakable::Use((CBreakable *)this,(int)param_1,param_2);
    }
    return;
  }
  iVar1 = param_1[1];
  if ((*(float *)(iVar1 + 0x20) == DAT_100ae498) &&
     ((*(float *)(iVar1 + 0x24) == DAT_100ae49c && (*(float *)(iVar1 + 0x28) == DAT_100ae4a0)))) {
    return;
  }
  Move(this,param_1,0);
  return;
}

/* 1001fd30  CPushable::Touch  (100 bytes)
 * undefined Touch()
 */
void __thiscall CPushable::Touch(CPushable *param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar4 = s_worldspawn_1009d64c;
  pbVar2 = (byte *)(gpGlobals->pStringBase + *(int *)param_2[1]);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_1001fd7a:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_1001fd7f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_1001fd7a;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001fd7f:
  if (iVar3 != 0) {
    Move(param_1,param_2,1);
  }
  return;
}

/* 1001fda0  CPushable::Move  (631 bytes)
 * undefined Move(int * param_1, int param_2)
 * called by: CPushable::Touch, CPushable::Use
 */
/* WARNING: Removing unreachable block (ram,0x1001fe29) */

void __thiscall CPushable::Move(CPushable *this,int *param_1,int param_2)

{
  entvars_t *peVar1;
  edict_t *this_00;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float local_c;
  float local_8;
  float local_4;
  
  iVar5 = param_1[1];
  local_c = *(float *)(iVar5 + 0x20);
  local_8 = *(float *)(iVar5 + 0x24);
  local_4 = *(float *)(iVar5 + 0x28);
  iVar4 = (**(code **)(*param_1 + 0xc0))();
  if ((iVar4 != 0) && ((*(byte *)(iVar5 + 0x180) & 0x20) != 0)) {
    local_c = local_c * 0.3;
    local_8 = local_8 * 0.3;
    local_4 = local_4 * 0.3;
  }
  if ((((*(uint *)(iVar5 + 0x1a4) & 0x200) == 0) || (*(int *)(iVar5 + 0x19c) == 0)) ||
     (peVar1 = this->pev, (entvars_t *)(*(int *)(iVar5 + 0x19c) + 0x80) != peVar1)) {
    iVar4 = (**(code **)(*param_1 + 0xc0))();
    if (iVar4 == 0) {
      fVar2 = 0.25;
      bVar3 = false;
    }
    else {
      if ((param_2 != 0) && ((*(byte *)(iVar5 + 0x180) & 0x28) == 0)) {
        return;
      }
      bVar3 = true;
      if ((*(uint *)(iVar5 + 0x1a4) & 0x200) == 0) {
        if (this->pev->waterlevel < 1) {
          return;
        }
        fVar2 = 0.1;
      }
      else {
        fVar2 = 1.0;
      }
    }
    this->pev->velocity[0] = local_c * fVar2 + this->pev->velocity[0];
    this->pev->velocity[1] = local_8 * fVar2 + this->pev->velocity[1];
    peVar1 = this->pev;
    fVar2 = SQRT(peVar1->velocity[0] * peVar1->velocity[0] +
                 peVar1->velocity[1] * peVar1->velocity[1]);
    if ((param_2 != 0) && (*(float *)&this->field_0x10c < fVar2)) {
      peVar1->velocity[0] = (*(float *)&this->field_0x10c * peVar1->velocity[0]) / fVar2;
      this->pev->velocity[1] = (*(float *)&this->field_0x10c * this->pev->velocity[1]) / fVar2;
    }
    if (bVar3) {
      *(float *)(iVar5 + 0x20) = this->pev->velocity[0];
      *(vec_t *)(iVar5 + 0x24) = this->pev->velocity[1];
      if (0.7 < gpGlobals->time - *(float *)&this->field_0x110) {
        *(float *)&this->field_0x110 = gpGlobals->time;
        if ((0.0 < fVar2) && ((this->pev->flags & 0x200U) != 0)) {
          iVar5 = (*g_engfuncs.pfnRandomLong)(0,2);
          *(int *)&this->field_0x108 = iVar5;
          this_00 = this->pev->pContainingEntity;
          EMIT_SOUND_DYN(this_00,this_00,1,(&PTR_s_debris_pushbox1_wav_1009e258)[iVar5],0x3f000000,
                         0x3f4ccccd,0);
          return;
        }
        EMIT_SOUND_DYN(this->pev,this->pev->pContainingEntity,1,
                       (&PTR_s_debris_pushbox1_wav_1009e258)[*(int *)&this->field_0x108],0,0,0x20);
        return;
      }
    }
  }
  else if (0 < peVar1->waterlevel) {
    peVar1->velocity[2] = local_4 * 0.1 + peVar1->velocity[2];
    return;
  }
  return;
}

/* 10020020  CPushable::TakeDamage  (48 bytes)
 * undefined TakeDamage()
 */
undefined4 __thiscall
CPushable::TakeDamage(CBreakable *param_1,int param_2,int param_3,float param_4,uint param_5)

{
  undefined4 uVar1;
  
  if ((param_1->pev->spawnflags & 0x80) != 0) {
    uVar1 = CBreakable::TakeDamage(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 1;
}

