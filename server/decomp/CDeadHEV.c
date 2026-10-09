/* ts_i386.so - CDeadHEV (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000dda14  CDeadHEV::KeyValue  (97 bytes)
 * undefined KeyValue(int param_1)
 */
/* CDeadHEV::KeyValue(KeyValueData_s *) */

void __thiscall CDeadHEV::KeyValue(CDeadHEV *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"pose");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0x164 = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    CBaseMonster::KeyValue((CBaseMonster *)this,param_1);
  }
  return;
}

/* 000dda9c  CDeadHEV::Spawn  (239 bytes)
 * undefined Spawn(void)
 */
/* CDeadHEV::Spawn(void) */

void __thiscall CDeadHEV::Spawn(CDeadHEV *this)

{
  int iVar1;
  
  (*g_engfuncs.pfnPrecacheModel)("models/player.mdl");
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/player.mdl");
  this->pev->effects = 0;
  this->pev->yaw_speed = 8.0;
  this->pev->sequence = 0;
  this->pev->body = 1;
  *(undefined4 *)&this->field_0x144 = 0xf7;
  iVar1 = CBaseAnimating::LookupSequence
                    ((CBaseAnimating *)this,*(char **)(m_szPoses + *(int *)&this->field_0x164 * 4));
  this->pev->sequence = iVar1;
  if (this->pev->sequence == -1) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"Dead hevsuit with bad pose\n");
    this->pev->sequence = 0;
    this->pev->effects = 1;
  }
  this->pev->health = 8.0;
  (*this->vtable[0x51])(this);
  return;
}

/* 000de5ac  CDeadHEV::Classify  (6 bytes)
 * undefined4 Classify(void)
 */
/* CDeadHEV::Classify(void) */

undefined4 CDeadHEV::Classify(void)

{
  return 4;
}

