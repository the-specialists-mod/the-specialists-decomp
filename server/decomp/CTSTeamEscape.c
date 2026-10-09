/* ts_i386.so - CTSTeamEscape (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0008d2f0  CTSTeamEscape::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CTSTeamEscape::Save(CSave &) */

undefined4 __thiscall CTSTeamEscape::Save(CTSTeamEscape *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CTSObjective::Save((CTSObjective *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CTSTeamEscape",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 0008d340  CTSTeamEscape::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CTSTeamEscape::Restore(CRestore &) */

undefined4 __thiscall CTSTeamEscape::Restore(CTSTeamEscape *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CTSObjective::Restore((CTSObjective *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CTSTeamEscape",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 0008d390  CTSTeamEscape::Spawn  (268 bytes)
 * undefined Spawn(void)
 */
/* CTSTeamEscape::Spawn(void) */

void __thiscall CTSTeamEscape::Spawn(CTSTeamEscape *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  this->pev->classname = (int)"ts_teamescape" - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  UTIL_SetSize((int)this->pev,this->pev->mins,this->pev->maxs);
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  this->pev->effects = 0x80;
  this->pev->solid = 1;
  this->pev->flags = 0;
  this->pev->movetype = 5;
  this->field_0x64 = 0;
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = WaitTouch;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = WaitThink;
  this->pev->nextthink = gpGlobals->time + 1.0;
  puVar2 = (undefined4 *)&this->field_0x6c;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)&this->field_0xf0 = 0;
  return;
}

/* 0008d49c  CTSTeamEscape::Precache  (1 bytes)
 * undefined Precache(void)
 */
/* CTSTeamEscape::Precache(void) */

void CTSTeamEscape::Precache(void)

{
  return;
}

/* 0008d4a0  CTSTeamEscape::EnableObjective  (72 bytes)
 * undefined EnableObjective(CTSTeamEscape * this, CTSTeamEscape param_2)
 */
/* CTSTeamEscape::EnableObjective(bool) */

void __thiscall CTSTeamEscape::EnableObjective(void *this,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(char *)((int)this + 100) = param_2;
  puVar2 = (undefined4 *)((int)this + 0x6c);
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0xf0) = 0;
  if (param_2 == '\0') {
    *(undefined4 *)(*(int *)this + 0x10c) = 0;
  }
  else {
    *(undefined4 *)(*(int *)this + 0x10c) = 1;
  }
  return;
}

/* 0008d4ec  CTSTeamEscape::WaitTouch  (431 bytes)
 * undefined WaitTouch(int * param_1)
 */
/* CTSTeamEscape::WaitTouch(CBaseEntity *) */

void __thiscall CTSTeamEscape::WaitTouch(CTSTeamEscape *this,int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined2 uVar8;
  
  if ((this->field_0x64 != '\0') &&
     (iVar3 = (**(code **)(param_1[0x18] + 200))(param_1), iVar3 != 0)) {
    bVar1 = false;
    iVar3 = 0;
    piVar7 = param_1;
    cVar2 = CTSObjective::CanInteract((CTSObjective *)this,(int)param_1);
    uVar8 = (undefined2)((uint)piVar7 >> 0x10);
    if (cVar2 != '\0') {
      if (-1 < *(int *)&this->field_0x68) {
        iVar3 = TSCountPlayers(&DAT_001781c8 + *(int *)&this->field_0x68 * 0x8c,'\x01');
      }
      uVar4 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_1 + 0x208));
      if (uVar4 < 0x21) {
        if (*(int *)(&this->field_0x6c + uVar4 * 4) == 0) {
          *(int *)&this->field_0xf0 = *(int *)&this->field_0xf0 + 1;
        }
        *(int **)(&this->field_0x6c + uVar4 * 4) = param_1;
      }
      iVar6 = 0;
      switch(*(undefined4 *)&this->field_0xf4) {
      case 0:
        iVar6 = 1;
        break;
      case 1:
        iVar6 = iVar3 / 3;
        break;
      case 2:
        iVar6 = (iVar3 / 3) * 2;
        break;
      case 3:
        iVar6 = iVar3;
      }
      if (iVar6 <= *(int *)&this->field_0xf0) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      if (this->pev->target != 0) {
        FireTargets((int)(gpGlobals->pStringBase + this->pev->target),this,this,3,0);
      }
      if (this->pev->message != 0) {
        pcVar5 = gpGlobals->pStringBase + this->pev->message;
        TSHudMessageAll(0,0xff,0,8,0x1e,pcVar5);
        uVar8 = (undefined2)((uint)pcVar5 >> 0x10);
      }
      (*this->vtable[0x45])(this,CONCAT22(uVar8,1));
    }
  }
  return;
}

/* 0008d6b0  CTSTeamEscape::WaitThink  (77 bytes)
 * undefined WaitThink(void)
 */
/* CTSTeamEscape::WaitThink(void) */

void __thiscall CTSTeamEscape::WaitThink(CTSTeamEscape *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  this->pev->nextthink = gpGlobals->time + 1.0;
  puVar2 = (undefined4 *)&this->field_0x6c;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)&this->field_0xf0 = 0;
  return;
}

/* 0008d700  CTSTeamEscape::KeyValue  (97 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSTeamEscape::KeyValue(KeyValueData_s *) */

void __thiscall CTSTeamEscape::KeyValue(CTSTeamEscape *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"escapepercentage");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0xf4 = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    CTSObjective::KeyValue((CTSObjective *)this,param_1);
  }
  return;
}

/* 0008e820  CTSTeamEscape::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CTSTeamEscape::ObjectCaps(void) */

undefined4 CTSTeamEscape::ObjectCaps(void)

{
  return 0x10;
}

