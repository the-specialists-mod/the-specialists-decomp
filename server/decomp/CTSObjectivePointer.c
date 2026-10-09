/* ts_i386.so - CTSObjectivePointer (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0008ba1c  CTSObjectivePointer::KeyValue  (290 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSObjectivePointer::KeyValue(KeyValueData_s *) */

void __thiscall CTSObjectivePointer::KeyValue(CTSObjectivePointer *this,int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"objmsgspec");
  if (iVar1 == 0) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x64 = iVar1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"objmsgmerc");
    if (iVar1 == 0) {
      iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
      *(int *)&this->field_0x68 = iVar1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"objmsgteam3");
      if (iVar1 == 0) {
        iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
        *(int *)&this->field_0x6c = iVar1;
      }
      else {
        iVar1 = strcmp(*(char **)(param_1 + 4),"objmsgteam4");
        if (iVar1 == 0) {
          iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
          *(int *)&this->field_0x70 = iVar1;
        }
        else {
          iVar1 = strcmp(*(char **)(param_1 + 4),"objmsgall");
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0xc) = 0;
            return;
          }
          iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
          *(int *)&this->field_0x74 = iVar1;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 0008bb44  CTSObjectivePointer::Spawn  (147 bytes)
 * undefined Spawn(void)
 */
/* CTSObjectivePointer::Spawn(void) */

void __thiscall CTSObjectivePointer::Spawn(CTSObjectivePointer *this)

{
  this->pev->classname = (int)"ts_objective_ptr" - (int)gpGlobals->pStringBase;
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

/* 0008bbd8  CTSObjectivePointer::Use  (351 bytes)
 * undefined Use(int * param_1)
 */
/* CTSObjectivePointer::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTSObjectivePointer::Use(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  edict_t *peVar4;
  int *piVar5;
  edict_t *pEdictStartSearchAfter;
  void *pvVar6;
  uint uVar7;
  undefined2 uVar8;
  
  pEdictStartSearchAfter = (edict_t *)0x0;
  if (*(int *)(*param_1 + 0x1c8) != 0) {
    while( true ) {
      uVar8 = 0x10;
      pEdictStartSearchAfter =
           (*g_engfuncs.pfnFindEntityByString)
                     (pEdictStartSearchAfter,"targetname",
                      gpGlobals->pStringBase + *(int *)(*param_1 + 0x1c8));
      bVar1 = false;
      if ((pEdictStartSearchAfter == (edict_t *)0x0) ||
         (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter), iVar3 == 0)) {
        bVar1 = true;
      }
      if (bVar1) break;
      peVar4 = pEdictStartSearchAfter;
      if (pEdictStartSearchAfter == (edict_t *)0x0) {
        peVar4 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      pvVar6 = (void *)0x0;
      if (peVar4 != (edict_t *)0x0) {
        pvVar6 = peVar4->pvPrivateData;
      }
      uVar7 = 0xffffffff;
      cVar2 = (**(code **)(*(int *)((int)pvVar6 + 0x60) + 0x1c))(pvVar6);
      if (cVar2 != '\0') {
        (**(code **)(*(int *)((int)pvVar6 + 0x60) + 0x20))(pvVar6,CONCAT22(uVar8,1));
        uVar7 = CTSGameRules::AddObjectiveInList
                          ((CTSGameRules *)&TSGameRules,(int)pvVar6,param_1 + 0x19);
      }
      if ((uVar7 != 0xffffffff) && (0 < gpGlobals->maxClients)) {
        iVar3 = 1;
        do {
          piVar5 = (int *)UTIL_PlayerByIndex(iVar3);
          if (piVar5 != (int *)0x0) {
            CTSGameRules::SendObjectiveToHud((CTSGameRules *)&TSGameRules,uVar7,piVar5);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 <= gpGlobals->maxClients);
      }
    }
  }
  return;
}

