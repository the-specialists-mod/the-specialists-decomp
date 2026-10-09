/* ts_i386.so - CTSObjectiveManager (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0008b3cc  CTSObjectiveManager::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CTSObjectiveManager::Save(CSave &) */

undefined4 __thiscall CTSObjectiveManager::Save(CTSObjectiveManager *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CTSObjectiveManager",(int)this,(int *)m_SaveData,0xd);
  }
  return uVar2;
}

/* 0008b41c  CTSObjectiveManager::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CTSObjectiveManager::Restore(CRestore &) */

undefined4 __thiscall CTSObjectiveManager::Restore(CTSObjectiveManager *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CTSObjectiveManager",(int)this,(int)m_SaveData,0xd);
  }
  return uVar2;
}

/* 0008b46c  CTSObjectiveManager::KeyValue  (824 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSObjectiveManager::KeyValue(KeyValueData_s *) */

void __thiscall CTSObjectiveManager::KeyValue(CTSObjectiveManager *this,int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"objptargeta");
  if (iVar1 == 0) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x74 = iVar1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"objptargetb");
    if (iVar1 == 0) {
      iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
      *(int *)&this->field_0x78 = iVar1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"objptargetc");
      if (iVar1 == 0) {
        iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
        *(int *)&this->field_0x7c = iVar1;
      }
      else {
        iVar1 = strcmp(*(char **)(param_1 + 4),"objptargetd");
        if (iVar1 == 0) {
          iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
          *(int *)&this->field_0x80 = iVar1;
        }
        else {
          iVar1 = strcmp(*(char **)(param_1 + 4),"objptargete");
          if (iVar1 == 0) {
            iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
            *(int *)&this->field_0x84 = iVar1;
          }
          else {
            iVar1 = strcmp(*(char **)(param_1 + 4),"objptargetf");
            if (iVar1 == 0) {
              iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
              *(int *)&this->field_0x88 = iVar1;
            }
            else {
              iVar1 = strcmp(*(char **)(param_1 + 4),"objptargetg");
              if (iVar1 == 0) {
                iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
                *(int *)&this->field_0x8c = iVar1;
              }
              else {
                iVar1 = strcmp(*(char **)(param_1 + 4),"objptargeth");
                if (iVar1 == 0) {
                  iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
                  *(int *)&this->field_0x90 = iVar1;
                }
                else {
                  iVar1 = strcmp(*(char **)(param_1 + 4),"messagea");
                  if (iVar1 == 0) {
                    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
                    *(int *)&this->field_0x64 = iVar1;
                  }
                  else {
                    iVar1 = strcmp(*(char **)(param_1 + 4),"messageb");
                    if (iVar1 == 0) {
                      iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
                      *(int *)&this->field_0x68 = iVar1;
                    }
                    else {
                      iVar1 = strcmp(*(char **)(param_1 + 4),"messagec");
                      if (iVar1 == 0) {
                        iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
                        *(int *)&this->field_0x6c = iVar1;
                      }
                      else {
                        iVar1 = strcmp(*(char **)(param_1 + 4),"messaged");
                        if (iVar1 == 0) {
                          iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
                          *(int *)&this->field_0x70 = iVar1;
                        }
                        else {
                          iVar1 = strcmp(*(char **)(param_1 + 4),"targetontimeleft");
                          if (iVar1 == 0) {
                            iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
                            *(int *)&this->field_0x94 = iVar1;
                          }
                          else {
                            iVar1 = strcmp(*(char **)(param_1 + 4),"targetonspecdead");
                            if (iVar1 == 0) {
                              iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
                              *(int *)&this->field_0x98 = iVar1;
                            }
                            else {
                              iVar1 = strcmp(*(char **)(param_1 + 4),"targetonmercdead");
                              if (iVar1 != 0) {
                                *(undefined4 *)(param_1 + 0xc) = 0;
                                return;
                              }
                              iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
                              *(int *)&this->field_0x9c = iVar1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 0008b7bc  CTSObjectiveManager::Spawn  (147 bytes)
 * undefined Spawn(void)
 */
/* CTSObjectiveManager::Spawn(void) */

void __thiscall CTSObjectiveManager::Spawn(CTSObjectiveManager *this)

{
  this->pev->classname = (int)"ts_objective_manager" - (int)gpGlobals->pStringBase;
  this->pev->effects = 0x80;
  this->pev->solid = 0;
  this->pev->flags = 0;
  this->pev->movetype = 0;
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  this->pev->nextthink = gpGlobals->time + 10.0;
  return;
}

/* 0008b850  CTSObjectiveManager::Reset  (422 bytes)
 * undefined Reset(void)
 */
/* CTSObjectiveManager::Reset(void) */

void __thiscall CTSObjectiveManager::Reset(CTSObjectiveManager *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int local_14;
  
  if (*(int *)&this->field_0x64 != 0) {
    TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + *(int *)&this->field_0x64);
  }
  if (*(int *)&this->field_0x68 != 0) {
    TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + *(int *)&this->field_0x68);
  }
  if (*(int *)&this->field_0x6c != 0) {
    TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + *(int *)&this->field_0x6c);
  }
  if (*(int *)&this->field_0x70 != 0) {
    TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + *(int *)&this->field_0x70);
  }
  local_14 = 0;
  puVar1 = &this->field_0x70;
  puVar2 = puVar1;
  do {
    if (*(int *)(puVar1 + 4) != 0) {
      FireTargets((int)(gpGlobals->pStringBase + *(int *)(puVar2 + 4)),this,this,3,0);
    }
    if (*(int *)(puVar1 + 8) != 0) {
      FireTargets((int)(gpGlobals->pStringBase + *(int *)(puVar2 + 8)),this,this,3,0);
    }
    if (*(int *)(puVar1 + 0xc) != 0) {
      FireTargets((int)(gpGlobals->pStringBase + *(int *)(puVar2 + 0xc)),this,this,3,0);
    }
    if (*(int *)(puVar1 + 0x10) != 0) {
      FireTargets((int)(gpGlobals->pStringBase + *(int *)(puVar2 + 0x10)),this,this,3,0);
    }
    puVar2 = puVar2 + 0x10;
    puVar1 = puVar1 + 0x10;
    local_14 = local_14 + 4;
  } while (local_14 < 8);
  return;
}

