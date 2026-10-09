/* ts_i386.so - CTSPlayerAmount (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000729c0  CTSPlayerAmount::KeyValue  (179 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSPlayerAmount::KeyValue(KeyValueData_s *) */

void __thiscall CTSPlayerAmount::KeyValue(CTSPlayerAmount *this,int param_1)

{
  int iVar1;
  char *__dest;
  undefined4 uVar2;
  char *__src;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"connecttarget");
  if (iVar1 == 0) {
    __src = *(char **)(param_1 + 8);
    __dest = &this->field_0x74;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"disconnecttarget");
    if (iVar1 != 0) {
      iVar1 = strcmp(*(char **)(param_1 + 4),"clients");
      if (iVar1 == 0) {
        uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
        *(undefined4 *)&this->field_0x70 = uVar2;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      return;
    }
    __src = *(char **)(param_1 + 8);
    __dest = &this->field_0xd8;
  }
  strcpy(__dest,__src);
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 00072a78  CTSPlayerAmount::Spawn  (116 bytes)
 * undefined Spawn(void)
 */
/* CTSPlayerAmount::Spawn(void) */

void __thiscall CTSPlayerAmount::Spawn(CTSPlayerAmount *this)

{
  int *piVar1;
  
  this->pev->classname = (int)"ts_playeramount" - (int)gpGlobals->pStringBase;
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 0x80;
  this->pev->solid = 0;
  this->pev->movetype = 5;
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  *(undefined4 *)&this->field_0x6c = 0;
  return;
}

/* 00072aec  CTSPlayerAmount::ClientConnect  (279 bytes)
 * undefined ClientConnect(void)
 */
/* CTSPlayerAmount::ClientConnect(void) */

void __thiscall CTSPlayerAmount::ClientConnect(CTSPlayerAmount *this)

{
  int iVar1;
  CBaseDelay *pCVar2;
  
  iVar1 = *(int *)&this->field_0x6c + 1;
  *(int *)&this->field_0x6c = iVar1;
  if (iVar1 == *(int *)&this->field_0x70) {
    iVar1 = strcmp(&this->field_0x74,"");
    if (iVar1 != 0) {
      if (*(float *)&this->field_0x64 == 0.0) {
        FireTargets((int)&this->field_0x74,0,this,3,0);
      }
      else {
        pCVar2 = GetClassPtr<CBaseDelay>(0);
        pCVar2->pev->classname = (int)"DelayedUse" - (int)gpGlobals->pStringBase;
        pCVar2->pev->nextthink = gpGlobals->time + *(float *)&this->field_0x64;
        *(undefined4 *)&pCVar2->field_0xc = 0xffff0000;
        *(code **)&pCVar2->field_0x10 = CBaseDelay::DelayThink;
        pCVar2->pev->button = 3;
        *(undefined4 *)&pCVar2->field_0x68 = *(undefined4 *)&this->field_0x68;
        *(undefined4 *)&pCVar2->field_0x64 = 0;
        pCVar2->pev->target = (int)this + (0x74 - (int)gpGlobals->pStringBase);
        pCVar2->pev->owner = (edict_t *)0x0;
      }
      if ((this->pev->spawnflags & 1) != 0) {
        UTIL_Remove((int *)this);
      }
    }
  }
  return;
}

/* 00072c08  CTSPlayerAmount::ClientDisconnect  (288 bytes)
 * undefined ClientDisconnect(void)
 */
/* CTSPlayerAmount::ClientDisconnect(void) */

void __thiscall CTSPlayerAmount::ClientDisconnect(CTSPlayerAmount *this)

{
  int iVar1;
  CBaseDelay *pCVar2;
  
  iVar1 = *(int *)&this->field_0x6c + -1;
  *(int *)&this->field_0x6c = iVar1;
  if (iVar1 == *(int *)&this->field_0x70) {
    iVar1 = strcmp(&this->field_0xd8,"");
    if (iVar1 != 0) {
      if (*(float *)&this->field_0x64 == 0.0) {
        FireTargets((int)&this->field_0xd8,0,this,3,0);
      }
      else {
        pCVar2 = GetClassPtr<CBaseDelay>(0);
        pCVar2->pev->classname = (int)"DelayedUse" - (int)gpGlobals->pStringBase;
        pCVar2->pev->nextthink = gpGlobals->time + *(float *)&this->field_0x64;
        *(undefined4 *)&pCVar2->field_0xc = 0xffff0000;
        *(code **)&pCVar2->field_0x10 = CBaseDelay::DelayThink;
        pCVar2->pev->button = 3;
        *(undefined4 *)&pCVar2->field_0x68 = *(undefined4 *)&this->field_0x68;
        *(undefined4 *)&pCVar2->field_0x64 = 0;
        pCVar2->pev->target = (int)this + (0xd8 - (int)gpGlobals->pStringBase);
        pCVar2->pev->owner = (edict_t *)0x0;
      }
      if ((this->pev->spawnflags & 1) != 0) {
        UTIL_Remove((int *)this);
      }
    }
  }
  return;
}

