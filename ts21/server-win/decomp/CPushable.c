/* mp.dll - CPushable (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001bb90  CPushable::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CPushable::Save(CBreakable *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBreakable::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CPushable_100934e8,(int)param_1,0x10093140,2);
  return;
}

/* 1001bbc0  CPushable::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CPushable::Restore(CBreakable *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBreakable::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CPushable_100934e8,(int)param_1,0x10093140,2);
  return;
}

/* 1001bc00  CPushable::Spawn  (274 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CPushable::Spawn(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(char *)(param_1[1] + 0x1a0) < '\0') {
    CBreakable::Spawn(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x10))();
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
  param_1[0x1f] = (int)(400.0 - *(float *)(iVar1 + 0x120));
  *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) | 0x8000;
  *(undefined4 *)(param_1[1] + 0x120) = 0;
  *(float *)(param_1[1] + 0x10) = *(float *)(param_1[1] + 0x10) + 1.0;
  FUN_100679a0();
  iVar1 = param_1[1];
  lVar2 = __ftol();
  *(int *)(iVar1 + 0x110) = (int)lVar2;
  param_1[0x20] = 0;
  return;
}

/* 1001bd20  CPushable::Precache  (57 bytes)
 * undefined Precache(char * param_1)
 */
void __fastcall CPushable::Precache(char *param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_s_debris_pushbox1_wav_10093160;
  do {
    (*g_engfuncs.pfnPrecacheSound)(*ppuVar1);
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1009316c);
  if (*(char *)(*(int *)(param_1 + 4) + 0x1a0) < '\0') {
    CBreakable::Precache(param_1);
    return;
  }
  return;
}

/* 1001bd60  CPushable::KeyValue  (474 bytes)
 * undefined KeyValue()
 */
void __thiscall CPushable::KeyValue(CBreakable *param_1,int param_2)

{
  int iVar1;
  void *this;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  longlong lVar6;
  
  bVar5 = true;
  this = (void *)0x5;
  pcVar3 = *(char **)(param_2 + 4);
  pcVar4 = &DAT_10093500;
  do {
    if (this == (void *)0x0) break;
    this = (void *)((int)this + -1);
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = FUN_1006e1dd(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = 1;
    if (iVar1 == 0) {
      FUN_10067970();
      return;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        FUN_10067970();
        return;
      }
      FUN_10067970();
      return;
    }
    FUN_10067970();
    return;
  }
  puVar2 = &DAT_00000009;
  bVar5 = true;
  pcVar3 = *(char **)(param_2 + 4);
  pcVar4 = s_buoyancy_100934f4;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    FUN_1006e0fb(puVar2,*(byte_conflict **)(param_2 + 8));
    lVar6 = __ftol();
    param_1->pev->skin = (int)lVar6;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  CBreakable::KeyValue(param_1,param_2);
  return;
}

/* 1001bf40  CPushable::Use  (135 bytes)
 * undefined Use(int * param_1)
 */
void __thiscall CPushable::Use(CPushable *this,int *param_1)

{
  int iVar1;
  
  if ((param_1 == (int *)0x0) || (iVar1 = (**(code **)(*param_1 + 0xa8))(), iVar1 == 0)) {
    if ((char)this->pev->spawnflags < '\0') {
      CBreakable::Use((CBreakable *)this);
    }
    return;
  }
  iVar1 = param_1[1];
  if ((*(float *)(iVar1 + 0x20) == DAT_1009f4a8) &&
     ((*(float *)(iVar1 + 0x24) == DAT_1009f4ac && (*(float *)(iVar1 + 0x28) == DAT_1009f4b0)))) {
    return;
  }
  Move(this,param_1,0);
  return;
}

/* 1001bfd0  CPushable::Touch  (60 bytes)
 * undefined Touch()
 */
void __thiscall CPushable::Touch(CPushable *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 0xb;
  bVar4 = true;
  pcVar2 = gpGlobals->pStringBase + *(int *)param_2[1];
  pcVar3 = s_worldspawn_10092568;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    Move(param_1,param_2,1);
  }
  return;
}

/* 1001c010  CPushable::Move  (614 bytes)
 * undefined Move(int * param_1, int param_2)
 * called by: CPushable::Touch, CPushable::Use
 */
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
  iVar4 = (**(code **)(*param_1 + 0xa8))();
  if ((iVar4 != 0) && ((*(byte *)(iVar5 + 0x180) & 0x20) != 0)) {
    local_c = local_c * 0.3;
    local_8 = local_8 * 0.3;
    local_4 = local_4 * 0.3;
  }
  if ((((*(uint *)(iVar5 + 0x1a4) & 0x200) == 0) || (*(int *)(iVar5 + 0x19c) == 0)) ||
     (peVar1 = this->pev, (entvars_t *)(*(int *)(iVar5 + 0x19c) + 0x80) != peVar1)) {
    iVar4 = (**(code **)(*param_1 + 0xa8))();
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
    if ((param_2 != 0) && (*(float *)&this->field_0x7c < fVar2)) {
      peVar1->velocity[0] = *(float *)&this->field_0x7c * peVar1->velocity[0] * (1.0 / fVar2);
      this->pev->velocity[1] = *(float *)&this->field_0x7c * (1.0 / fVar2) * this->pev->velocity[1];
    }
    if (bVar3) {
      *(float *)(iVar5 + 0x20) = this->pev->velocity[0];
      *(vec_t *)(iVar5 + 0x24) = this->pev->velocity[1];
      if (0.7 < gpGlobals->time - *(float *)&this->field_0x80) {
        *(float *)&this->field_0x80 = gpGlobals->time;
        if ((0.0 < fVar2) && ((this->pev->flags & 0x200U) != 0)) {
          iVar5 = (*g_engfuncs.pfnRandomLong)(0,2);
          *(int *)&this->field_0x78 = iVar5;
          this_00 = this->pev->pContainingEntity;
          EMIT_SOUND_DYN(this_00,this_00,1,(&PTR_s_debris_pushbox1_wav_10093160)[iVar5],0x3f000000,
                         0x3f4ccccd,0,100);
          return;
        }
        EMIT_SOUND_DYN(this->pev,this->pev->pContainingEntity,1,
                       (&PTR_s_debris_pushbox1_wav_10093160)[*(int *)&this->field_0x78],0,0,0x20,100
                      );
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

/* 1001c280  CPushable::TakeDamage  (34 bytes)
 * undefined TakeDamage()
 */
undefined4 __thiscall
CPushable::TakeDamage(CBreakable *param_1,int param_2,int param_3,float param_4,uint param_5)

{
  undefined4 uVar1;
  
  if ((char)param_1->pev->spawnflags < '\0') {
    uVar1 = CBreakable::TakeDamage(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 1;
}

/* 1001c350  CPushable::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CPushable::ObjectCaps(void)

{
  return 0x10;
}

