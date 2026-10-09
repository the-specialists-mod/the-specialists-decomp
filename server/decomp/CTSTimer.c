/* ts_i386.so - CTSTimer (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00072d50  CTSTimer::KeyValue  (92 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSTimer::KeyValue(KeyValueData_s *) */

void __thiscall CTSTimer::KeyValue(CTSTimer *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"duration");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0x64 = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

/* 00072db0  CTSTimer::Spawn  (144 bytes)
 * undefined Spawn(void)
 */
/* CTSTimer::Spawn(void) */

void __thiscall CTSTimer::Spawn(CTSTimer *this)

{
  int *piVar1;
  
  this->pev->classname = (int)"ts_timer" - (int)gpGlobals->pStringBase;
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 0x80;
  this->pev->solid = 0;
  this->pev->movetype = 5;
  this->field_0x68 = 0;
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  if ((this->pev->spawnflags & 1) == 0) {
    ToggleTimer(this);
  }
  else {
    *(undefined4 *)&this->field_0xc = 0;
    *(undefined4 *)&this->field_0x10 = 0;
  }
  return;
}

/* 00072e44  CTSTimer::ToggleTimer  (113 bytes)
 * undefined ToggleTimer(void)
 */
/* CTSTimer::ToggleTimer(void) */

void __thiscall CTSTimer::ToggleTimer(CTSTimer *this)

{
  if (*(int *)&this->field_0x64 < 1) {
    *(undefined4 *)&this->field_0xc = 0;
    *(undefined4 *)&this->field_0x10 = 0;
    this->field_0x68 = 0;
  }
  else {
    this->field_0x68 = this->field_0x68 ^ 1;
    if (this->field_0x68 == '\0') {
      *(undefined4 *)&this->field_0xc = 0;
      *(undefined4 *)&this->field_0x10 = 0;
    }
    else {
      *(undefined4 *)&this->field_0xc = 0xffff0000;
      *(code **)&this->field_0x10 = WaitThink;
      this->pev->nextthink = (float)*(int *)&this->field_0x64 + gpGlobals->time;
    }
  }
  return;
}

/* 00072eb8  CTSTimer::WaitThink  (180 bytes)
 * undefined WaitThink(void)
 */
/* CTSTimer::WaitThink(void) */

void __thiscall CTSTimer::WaitThink(CTSTimer *this)

{
  if (this->pev->target != 0) {
    FireTargets((int)(gpGlobals->pStringBase + this->pev->target),this,this,3,0);
  }
  if (this->pev->message != 0) {
    TSHudMessageAll(0,0xff,0,1,0x1e,gpGlobals->pStringBase + this->pev->message);
  }
  if ((this->pev->spawnflags & 1) != 0) {
    *(undefined4 *)&this->field_0xc = 0;
    *(undefined4 *)&this->field_0x10 = 0;
  }
  this->pev->nextthink = (float)*(int *)&this->field_0x64 + gpGlobals->time;
  return;
}

/* 00072f6c  CTSTimer::Use  (33 bytes)
 * undefined Use(CTSTimer * param_1)
 */
/* CTSTimer::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTSTimer::Use(CTSTimer *param_1)

{
  ToggleTimer(param_1);
  return;
}

/* 00073ce0  CTSTimer::CTSTimer  (44 bytes)
 * undefined CTSTimer(void)
 */
/* CTSTimer::CTSTimer(void) */

void __thiscall CTSTimer::CTSTimer(CTSTimer *this)

{
  this->vtable = (void **)CBaseEntity_virtual_table;
  this->vtable = (void **)CTSTimer_virtual_table;
  *(undefined4 *)&this->field_0x64 = 0;
  return;
}

