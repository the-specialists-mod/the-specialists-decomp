/* ts_i386.so - CTSHack (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0008cc2c  CTSHack::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CTSHack::Save(CSave &) */

undefined4 __thiscall CTSHack::Save(CTSHack *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CTSObjective::Save((CTSObjective *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CTSHack",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 0008cc7c  CTSHack::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CTSHack::Restore(CRestore &) */

undefined4 __thiscall CTSHack::Restore(CTSHack *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CTSObjective::Restore((CTSObjective *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CTSHack",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 0008cccc  CTSHack::Spawn  (232 bytes)
 * undefined Spawn(void)
 */
/* CTSHack::Spawn(void) */

void __thiscall CTSHack::Spawn(CTSHack *this)

{
  this->pev->classname = (int)"ts_hack" - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  this->pev->effects = 0x80;
  this->pev->solid = 0;
  this->pev->flags = 0;
  this->pev->movetype = 0;
  this->field_0x64 = 0;
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = WaitThink;
  this->pev->nextthink = this->pev->ltime + 1.0;
  *(undefined4 *)&this->field_0x6c = 0;
  *(undefined4 *)&this->field_0x74 = 0;
  *(undefined4 *)&this->field_0x70 = 0;
  return;
}

/* 0008cdb4  CTSHack::Precache  (1 bytes)
 * undefined Precache(void)
 */
/* CTSHack::Precache(void) */

void CTSHack::Precache(void)

{
  return;
}

/* 0008cdb8  CTSHack::EnableObjective  (245 bytes)
 * undefined EnableObjective(CTSHack * this, CTSHack param_2)
 */
/* CTSHack::EnableObjective(bool) */

void __thiscall CTSHack::EnableObjective(void *this,char param_2)

{
  *(char *)((int)this + 100) = param_2;
  if (param_2 == '\0') {
    *(undefined4 *)(*(int *)this + 0x118) = 0x80;
    *(undefined4 *)(*(int *)this + 0x10c) = 0;
    *(undefined4 *)(*(int *)this + 0x1a4) = 0;
    *(undefined4 *)(*(int *)this + 0x108) = 0;
    *(undefined4 *)((int)this + 0x6c) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  else {
    *(uint *)(*(int *)this + 0x118) = *(uint *)(*(int *)this + 0x118) & 0xffffff7f;
    *(undefined4 *)(*(int *)this + 0x10c) = 4;
    *(undefined4 *)(*(int *)this + 0x108) = 7;
    *(uint *)(*(int *)this + 0x1a4) = *(uint *)(*(int *)this + 0x1a4) | 0x2000000;
    (*g_engfuncs.pfnSetModel)
              (*(edict_t **)(*(int *)this + 0x208),
               gpGlobals->pStringBase + *(int *)(*(int *)this + 0xb8));
    *(float *)((int)this + 0x6c) = DAT_001781a8 - gpGlobals->time;
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  return;
}

/* 0008ceb0  CTSHack::WaitThink  (98 bytes)
 * undefined WaitThink(void)
 */
/* CTSHack::WaitThink(void) */

void __thiscall CTSHack::WaitThink(CTSHack *this)

{
  this->pev->nextthink = this->pev->ltime + 1.0;
  if ((this->field_0x64 != '\0') &&
     (*(float *)&this->field_0x6c = *(float *)&this->field_0x6c - 1.0,
     *(float *)&this->field_0x6c <= 0.0)) {
    (*this->vtable[0x45])(this,1);
  }
  return;
}

/* 0008cf14  CTSHack::Use  (689 bytes)
 * undefined Use(CTSObjective * param_1, int * param_2)
 */
/* CTSHack::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTSHack::Use(CTSObjective *param_1,int *param_2)

{
  edict_t *peVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  longdouble lVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined2 uVar11;
  int iVar12;
  float fVar13;
  
  if (((*(char *)&param_1[1].pev != '\0') &&
      (iVar3 = (**(code **)(param_2[0x18] + 200))(param_2), iVar3 != 0)) &&
     (cVar2 = CTSObjective::CanInteract(param_1,(int)param_2), cVar2 != '\0')) {
    if (*(float *)&param_1[1].field_0x10 == 0.0) {
      *(float *)&param_1[1].field_0x10 = gpGlobals->time;
    }
    if (gpGlobals->time - *(float *)&param_1[1].field_0x10 < 0.5) {
      if (*(float *)&param_1[1].field_0xc == 0.0) {
        if (*(int *)&param_1[1].field_0x18 < 0x1e) {
          iVar3 = *(int *)&param_1[1].field_0x18;
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          fVar13 = (float)iVar3;
        }
        else {
          fVar13 = 30.0;
        }
      }
      else {
        fVar13 = *(float *)&param_1[1].field_0xc -
                 (gpGlobals->time - *(float *)&param_1[1].field_0x10);
      }
      *(float *)&param_1[1].field_0xc = fVar13;
    }
    if (*(float *)&param_1[1].field_0x14 < gpGlobals->time) {
      *(float *)&param_1[1].field_0x14 = gpGlobals->time + 1.0;
      peVar1 = param_1->pev->pContainingEntity;
      fVar13 = 0.5;
      iVar3 = (*g_engfuncs.pfnRandomLong)(0,3);
      iVar3 = iVar3 + 0x62;
      uVar9 = 0;
      uVar7 = 0x3fa00000;
      lVar6 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.92,1.0);
      EMIT_SOUND_DYN((int)peVar1,6,"misc/hacking.wav",(float)lVar6,uVar7,uVar9,iVar3,fVar13);
    }
    iVar12 = 0;
    iVar10 = 0;
    iVar8 = 0;
    iVar3 = 0;
    fVar13 = *(float *)&param_1[1].field_0xc;
    if (fVar13 < 0.0) {
      fVar13 = 0.0;
    }
    puVar4 = UTIL_VarArgs("%i seconds left",(int)ROUND(fVar13));
    ClientPrint(*param_2,4,puVar4,iVar3,iVar8,iVar10,iVar12);
    uVar11 = (undefined2)((uint)iVar10 >> 0x10);
    *(float *)&param_1[1].field_0x10 = gpGlobals->time;
    if (*(float *)&param_1[1].field_0xc < 0.0) {
      if (param_1->pev->target != 0) {
        FireTargets((int)(gpGlobals->pStringBase + param_1->pev->target),param_1,param_1,3,0);
      }
      if (param_1->pev->message != 0) {
        pcVar5 = gpGlobals->pStringBase + param_1->pev->message;
        TSHudMessageAll(0,0xff,0,8,0x1e,pcVar5);
        uVar11 = (undefined2)((uint)pcVar5 >> 0x10);
      }
      *(undefined4 *)&param_1[1].field_0x8 = 0;
      (*param_1->vtable[0x45])(param_1,CONCAT22(uVar11,1));
      peVar1 = param_1->pev->pContainingEntity;
      fVar13 = 0.5;
      iVar3 = (*g_engfuncs.pfnRandomLong)(0,3);
      iVar3 = iVar3 + 0x62;
      uVar9 = 0;
      uVar7 = 0x3fa00000;
      lVar6 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.92,1.0);
      EMIT_SOUND_DYN((int)peVar1,6,"misc/hacked.wav",(float)lVar6,uVar7,uVar9,iVar3,fVar13);
    }
  }
  return;
}

/* 0008d1c8  CTSHack::KeyValue  (94 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSHack::KeyValue(KeyValueData_s *) */

void __thiscall CTSHack::KeyValue(CTSHack *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"hackingtime");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0x7c = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    CTSObjective::KeyValue((CTSObjective *)this,param_1);
  }
  return;
}

/* 0008e788  CTSHack::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CTSHack::ObjectCaps(void) */

undefined4 CTSHack::ObjectCaps(void)

{
  return 0x10;
}

