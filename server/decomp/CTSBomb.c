/* ts_i386.so - CTSBomb (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0008c3d0  CTSBomb::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CTSBomb::Save(CSave &) */

undefined4 __thiscall CTSBomb::Save(CTSBomb *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CTSObjective::Save((CTSObjective *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CTSBomb",(int)this,(int *)m_SaveData,2);
  }
  return uVar2;
}

/* 0008c420  CTSBomb::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CTSBomb::Restore(CRestore &) */

undefined4 __thiscall CTSBomb::Restore(CTSBomb *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CTSObjective::Restore((CTSObjective *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CTSBomb",(int)this,(int)m_SaveData,2);
  }
  return uVar2;
}

/* 0008c470  CTSBomb::Spawn  (255 bytes)
 * undefined Spawn(void)
 */
/* CTSBomb::Spawn(void) */

void __thiscall CTSBomb::Spawn(CTSBomb *this)

{
  this->pev->classname = (int)"ts_bomb" - (int)gpGlobals->pStringBase;
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
  *(undefined4 *)&this->field_0x70 = 0;
  *(undefined4 *)&this->field_0x78 = 0;
  *(undefined4 *)&this->field_0x74 = 0;
  this->field_0x7c = 0;
  this->field_0x7d = 0;
  this->field_0x7e = 0;
  this->field_0x7f = 0;
  return;
}

/* 0008c570  CTSBomb::Precache  (40 bytes)
 * undefined Precache(void)
 */
/* CTSBomb::Precache(void) */

void CTSBomb::Precache(void)

{
  (*g_engfuncs.pfnPrecacheSound)("misc/beep2.wav");
  return;
}

/* 0008c598  CTSBomb::SetRandomWires  (110 bytes)
 * undefined SetRandomWires(void)
 */
/* CTSBomb::SetRandomWires(void) */

void __thiscall CTSBomb::SetRandomWires(CTSBomb *this)

{
  int iVar1;
  
  this->field_0x7c = 3;
  this->field_0x7d = 3;
  this->field_0x7e = 3;
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,2);
  (&this->field_0x7c)[iVar1] = 1;
  do {
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,2);
  } while ((&this->field_0x7c)[iVar1] == '\x01');
  (&this->field_0x7c)[iVar1] = 2;
  return;
}

/* 0008c608  CTSBomb::EnableObjective  (257 bytes)
 * undefined EnableObjective(CTSBomb * this, CTSBomb param_2)
 */
/* CTSBomb::EnableObjective(bool) */

void __thiscall CTSBomb::EnableObjective(void *this,char param_2)

{
  *(char *)((int)this + 100) = param_2;
  *(undefined1 *)((int)this + 0x7f) = 0;
  if (param_2 == '\0') {
    *(undefined4 *)(*(int *)this + 0x118) = 0x80;
    *(undefined4 *)(*(int *)this + 0x10c) = 0;
    *(undefined4 *)(*(int *)this + 0x1a4) = 0;
    *(undefined4 *)(*(int *)this + 0x108) = 0;
    *(undefined4 *)((int)this + 0x6c) = 0;
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
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
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
    SetRandomWires(this);
  }
  return;
}

/* 0008c70c  CTSBomb::CutWire  (339 bytes)
 * undefined CutWire(uint param_1, int param_2)
 */
/* CTSBomb::CutWire(int, CBasePlayer *) */

void __thiscall CTSBomb::CutWire(CTSBomb *this,uint param_1,int param_2)

{
  if ((((this->field_0x64 != '\0') && (*(int *)&this->field_0x84 != 0)) &&
      (0.0 < *(float *)&this->field_0x6c)) && (param_1 < 3)) {
    if (((&this->field_0x7c)[param_1] != '\0') && (param_2 != 0)) {
      if ((&this->field_0x7c)[param_1] == '\x03') {
        (&this->field_0x7c)[param_1] = 0;
        *(undefined4 *)&this->field_0x6c = 0;
      }
      else if ((&this->field_0x7c)[param_1] == '\x02') {
        this->field_0x7f = 1;
        (&this->field_0x7c)[param_1] = 0;
        *(undefined1 *)(param_2 + 0x78c) = this->field_0x7c;
        *(undefined1 *)(param_2 + 0x78d) = this->field_0x7d;
        *(undefined1 *)(param_2 + 0x78e) = this->field_0x7e;
      }
      else if ((&this->field_0x7c)[param_1] == '\x01') {
        (&this->field_0x7c)[param_1] = 0;
        if (this->pev->target != 0) {
          FireTargets((int)(gpGlobals->pStringBase + this->pev->target),this,this,3,0);
        }
        if (this->pev->message != 0) {
          TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + this->pev->message);
        }
        *(undefined4 *)&this->field_0x6c = 0;
        *(undefined4 *)&this->field_0x70 = 0;
        (*this->vtable[0x45])(this,1);
      }
    }
  }
  return;
}

/* 0008c860  CTSBomb::WaitThink  (319 bytes)
 * undefined WaitThink(void)
 */
/* CTSBomb::WaitThink(void) */

void __thiscall CTSBomb::WaitThink(CTSBomb *this)

{
  edict_t *peVar1;
  int iVar2;
  longdouble lVar3;
  undefined4 uVar4;
  undefined4 in_stack_ffffffc8;
  undefined2 uVar6;
  undefined4 uVar5;
  float fVar7;
  float local_2c [8];
  
  uVar6 = (undefined2)((uint)in_stack_ffffffc8 >> 0x10);
  if (this->field_0x7f == '\0') {
    fVar7 = 1.0;
  }
  else {
    fVar7 = 0.1;
  }
  this->pev->nextthink = this->pev->ltime + fVar7;
  if (this->field_0x64 != '\0') {
    *(float *)&this->field_0x6c = *(float *)&this->field_0x6c - 1.0;
    if (0.0 < *(float *)&this->field_0x6c) {
      if (*(float *)&this->field_0x70 < gpGlobals->time) {
        if (this->field_0x7f == '\0') {
          fVar7 = 1.0;
        }
        else {
          fVar7 = 0.1;
        }
        *(float *)&this->field_0x70 = gpGlobals->time + fVar7;
        peVar1 = this->pev->pContainingEntity;
        fVar7 = 0.5;
        iVar2 = (*g_engfuncs.pfnRandomLong)(0,3);
        iVar2 = iVar2 + 0x62;
        uVar5 = 0;
        uVar4 = 0x3fa00000;
        lVar3 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.92,1.0);
        EMIT_SOUND_DYN((int)peVar1,6,"misc/beep2.wav",(float)lVar3,uVar4,uVar5,iVar2,fVar7);
      }
    }
    else {
      CTSGameRules::RoundTimeLeft((CTSGameRules *)&TSGameRules);
      (*this->vtable[0x45])(this,CONCAT22(uVar6,1));
      (*this->vtable[0x3e])(local_2c,this);
      TSExplosion(local_2c,this->pev,this->pev,300.0,0x1040,2048.0,4096.0);
    }
  }
  return;
}

/* 0008c9a4  CTSBomb::Use  (449 bytes)
 * undefined Use(CTSObjective * param_1, int * param_2)
 */
/* CTSBomb::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTSBomb::Use(CTSObjective *param_1,int *param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  
  if (((*(char *)&param_1[1].pev != '\0') &&
      (iVar3 = (**(code **)(param_2[0x18] + 200))(param_2), iVar3 != 0)) &&
     (cVar2 = CTSObjective::CanInteract(param_1,(int)param_2), cVar2 != '\0')) {
    if (*(float *)&param_1[1].field_0x14 == 0.0) {
      *(float *)&param_1[1].field_0x14 = gpGlobals->time;
    }
    if (gpGlobals->time - *(float *)&param_1[1].field_0x14 < 0.5) {
      if (*(float *)&param_1[1].field_0x10 == 0.0) {
        fVar1 = (float)*(int *)&param_1[1].field_0x1c;
      }
      else {
        fVar1 = *(float *)&param_1[1].field_0x10 -
                (gpGlobals->time - *(float *)&param_1[1].field_0x14);
      }
      *(float *)&param_1[1].field_0x10 = fVar1;
    }
    iVar9 = 0;
    iVar7 = 0;
    iVar6 = 0;
    iVar3 = 0;
    fVar1 = *(float *)&param_1[1].field_0x10;
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    puVar4 = UTIL_VarArgs("%i seconds left",(int)ROUND(fVar1));
    ClientPrint(*param_2,4,puVar4,iVar3,iVar6,iVar7,iVar9);
    uVar8 = (undefined2)((uint)iVar7 >> 0x10);
    *(float *)&param_1[1].field_0x14 = gpGlobals->time;
    if (*(float *)&param_1[1].field_0x10 < 0.0) {
      if (param_1->pev->target != 0) {
        FireTargets((int)(gpGlobals->pStringBase + param_1->pev->target),param_1,param_1,3,0);
      }
      if (param_1->pev->message != 0) {
        pcVar5 = gpGlobals->pStringBase + param_1->pev->message;
        TSHudMessageAll(0,0xff,0,8,0x1e,pcVar5);
        uVar8 = (undefined2)((uint)pcVar5 >> 0x10);
      }
      *(undefined4 *)&param_1[1].field_0x8 = 0;
      *(undefined4 *)&param_1[1].field_0xc = 0;
      (*param_1->vtable[0x45])(param_1,CONCAT22(uVar8,1));
    }
  }
  return;
}

/* 0008cb68  CTSBomb::KeyValue  (154 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSBomb::KeyValue(KeyValueData_s *) */

void __thiscall CTSBomb::KeyValue(CTSBomb *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"defusetime");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0x80 = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"cutwires");
    if (iVar1 == 0) {
      uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      *(undefined4 *)&this->field_0x84 = uVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      CTSObjective::KeyValue((CTSObjective *)this,param_1);
    }
  }
  return;
}

/* 0008e738  CTSBomb::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CTSBomb::ObjectCaps(void) */

undefined4 CTSBomb::ObjectCaps(void)

{
  return 0x10;
}

