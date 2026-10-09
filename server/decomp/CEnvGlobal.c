/* ts_i386.so - CEnvGlobal (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a7590  CEnvGlobal::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CEnvGlobal::Save(CSave &) */

undefined4 __thiscall CEnvGlobal::Save(CEnvGlobal *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CEnvGlobal",(int)this,(int *)m_SaveData,3);
  }
  return uVar2;
}

/* 000a75e0  CEnvGlobal::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CEnvGlobal::Restore(CRestore &) */

undefined4 __thiscall CEnvGlobal::Restore(CEnvGlobal *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CEnvGlobal",(int)this,(int)m_SaveData,3);
  }
  return uVar2;
}

/* 000a7654  CEnvGlobal::KeyValue  (186 bytes)
 * undefined KeyValue(int param_1)
 */
/* CEnvGlobal::KeyValue(KeyValueData_s *) */

void __thiscall CEnvGlobal::KeyValue(CEnvGlobal *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  iVar1 = strcmp(*(char **)(param_1 + 4),"globalstate");
  if (iVar1 == 0) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x64 = iVar1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"triggermode");
    if (iVar1 == 0) {
      uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      *(undefined4 *)&this->field_0x68 = uVar2;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"initialstate");
      if (iVar1 == 0) {
        uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
        *(undefined4 *)&this->field_0x6c = uVar2;
      }
      else {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
  }
  return;
}

/* 000a7714  CEnvGlobal::Spawn  (113 bytes)
 * undefined Spawn(void)
 */
/* CEnvGlobal::Spawn(void) */

void __thiscall CEnvGlobal::Spawn(CEnvGlobal *this)

{
  char *pcVar1;
  
  if (*(int *)&this->field_0x64 == 0) {
    (*g_engfuncs.pfnRemoveEntity)(this->pev->pContainingEntity);
  }
  else if (((this->pev->spawnflags & 1) != 0) &&
          (pcVar1 = CGlobalState::Find((CGlobalState *)&gGlobalState,*(int *)&this->field_0x64),
          pcVar1 == (char *)0x0)) {
    CGlobalState::EntityAdd
              ((CGlobalState *)&gGlobalState,*(int *)&this->field_0x64,gpGlobals->mapname,
               *(undefined4 *)&this->field_0x6c);
  }
  return;
}

/* 000a7788  CEnvGlobal::Use  (185 bytes)
 * undefined Use(int param_1)
 */
/* CEnvGlobal::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CEnvGlobal::Use(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar1 = CGlobalState::EntityGetState((CGlobalState *)&gGlobalState,*(int *)(param_1 + 100));
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 0:
    iVar3 = 0;
    break;
  case 1:
    iVar3 = 1;
    break;
  case 2:
    iVar3 = 2;
    break;
  default:
    iVar3 = 0;
    if ((iVar1 != 1) && (iVar3 = 1, iVar1 != 0)) {
      iVar3 = iVar1;
    }
  }
  pcVar2 = CGlobalState::Find((CGlobalState *)&gGlobalState,*(int *)(param_1 + 100));
  if (pcVar2 == (char *)0x0) {
    CGlobalState::EntityAdd
              ((CGlobalState *)&gGlobalState,*(int *)(param_1 + 100),gpGlobals->mapname,iVar3);
  }
  else {
    CGlobalState::EntitySetState((CGlobalState *)&gGlobalState,*(int *)(param_1 + 100),iVar3);
  }
  return;
}

