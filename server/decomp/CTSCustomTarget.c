/* ts_i386.so - CTSCustomTarget (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00072fb4  CTSCustomTarget::KeyValue  (197 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSCustomTarget::KeyValue(KeyValueData_s *) */

void __thiscall CTSCustomTarget::KeyValue(CTSCustomTarget *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"targets");
  if (iVar1 == 0) {
    GetTargets(this,*(char **)(param_1 + 8));
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"triggermethod");
    if (iVar1 == 0) {
      uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      *(undefined4 *)&this->field_0x868 = uVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"accumulate");
      if (iVar1 == 0) {
        uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
        *(undefined4 *)&this->field_0x86c = uVar2;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
  }
  return;
}

/* 00073080  CTSCustomTarget::Spawn  (129 bytes)
 * undefined Spawn(void)
 */
/* CTSCustomTarget::Spawn(void) */

void __thiscall CTSCustomTarget::Spawn(CTSCustomTarget *this)

{
  int *piVar1;
  
  this->pev->classname = (int)"ts_customtarget" - (int)gpGlobals->pStringBase;
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 0x80;
  this->pev->solid = 0;
  this->pev->movetype = 5;
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  *(undefined4 *)&this->field_0x870 = 0;
  *(undefined4 *)&this->field_0x874 = 0;
  return;
}

/* 00073104  CTSCustomTarget::GetTargets  (182 bytes)
 * undefined GetTargets(char * param_1)
 */
/* CTSCustomTarget::GetTargets(char *) */

void __thiscall CTSCustomTarget::GetTargets(CTSCustomTarget *this,char *param_1)

{
  char *__src;
  int iVar1;
  undefined4 *puVar2;
  char local_81c [2060];
  
  puVar2 = (undefined4 *)&this->field_0x64;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  strcpy(local_81c,param_1);
  __src = strtok(local_81c,";");
  *(undefined4 *)&this->field_0x864 = 0;
  if ((__src != (char *)0x0) && (*__src != '\0')) {
    while( true ) {
      iVar1 = *(int *)&this->field_0x864;
      *(int *)&this->field_0x864 = *(int *)&this->field_0x864 + 1;
      strcpy(&this->field_0x64 + iVar1 * 0x20,__src);
      __src = strtok((char *)0x0,";");
      if (__src == (char *)0x0) break;
      if (*__src == '\0') {
        return;
      }
      if (0x3f < *(int *)&this->field_0x864) {
        return;
      }
    }
  }
  return;
}

/* 000731bc  CTSCustomTarget::FireTarget  (136 bytes)
 * undefined FireTarget(int param_1)
 */
/* CTSCustomTarget::FireTarget(int) */

void __thiscall CTSCustomTarget::FireTarget(CTSCustomTarget *this,int param_1)

{
  CTSCustomTarget *pCVar1;
  int iVar2;
  
  if ((param_1 < 0) || (*(int *)&this->field_0x864 <= param_1)) {
    iVar2 = 0;
    pCVar1 = this;
    if (0 < *(int *)&this->field_0x864) {
      do {
        if (pCVar1 != (CTSCustomTarget *)0xffffff9c) {
          FireTargets((int)&pCVar1->field_0x64,this,this,3,0);
        }
        iVar2 = iVar2 + 1;
        pCVar1 = (CTSCustomTarget *)&pCVar1->field_0x20;
      } while (iVar2 < *(int *)&this->field_0x864);
    }
  }
  else if (&this->pev + param_1 * 8 != (entvars_t **)0xffffff9c) {
    FireTargets((int)(&this->pev + param_1 * 8 + 0x19),this,this,3,0);
  }
  return;
}

/* 00073244  CTSCustomTarget::Use  (234 bytes)
 * undefined Use(CTSCustomTarget * param_1)
 */
/* CTSCustomTarget::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTSCustomTarget::Use(CTSCustomTarget *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)&param_1->field_0x870 + 1;
  *(int *)&param_1->field_0x870 = iVar1;
  if (*(int *)&param_1->field_0x86c <= iVar1) {
    *(undefined4 *)&param_1->field_0x870 = 0;
    if (param_1->pev->message != 0) {
      TSHudMessageAll(0,0xff,0,1,0x1e,gpGlobals->pStringBase + param_1->pev->message);
    }
    iVar1 = *(int *)&param_1->field_0x868;
    if (iVar1 == 1) {
      iVar1 = (*g_engfuncs.pfnRandomLong)(0,*(int *)&param_1->field_0x864 + -1);
    }
    else {
      if ((1 < iVar1) && (iVar1 == 2)) {
        iVar1 = *(int *)&param_1->field_0x874;
        *(int *)&param_1->field_0x874 = *(int *)&param_1->field_0x874 + 1;
        FireTarget(param_1,iVar1);
        if (*(int *)&param_1->field_0x874 < *(int *)&param_1->field_0x864) {
          return;
        }
        *(undefined4 *)&param_1->field_0x874 = 0;
        return;
      }
      iVar1 = -1;
    }
    FireTarget(param_1,iVar1);
  }
  return;
}

/* 00073d54  CTSCustomTarget::CTSCustomTarget  (85 bytes)
 * undefined CTSCustomTarget(void)
 */
/* CTSCustomTarget::CTSCustomTarget(void) */

void __thiscall CTSCustomTarget::CTSCustomTarget(CTSCustomTarget *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  this->vtable = (void **)CBaseEntity_virtual_table;
  this->vtable = (void **)CTSCustomTarget_virtual_table;
  *(undefined4 *)&this->field_0x874 = 0;
  *(undefined4 *)&this->field_0x870 = 0;
  *(undefined4 *)&this->field_0x864 = 0;
  puVar2 = (undefined4 *)&this->field_0x64;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

