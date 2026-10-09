/* ts_i386.so - CXenTreeTrigger (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f5918  CXenTreeTrigger::TriggerCreate  (114 bytes)
 * undefined TriggerCreate(undefined4 param_1, undefined4 * param_2)
 */
/* CXenTreeTrigger::TriggerCreate(edict_s *, Vector const &) */

void CXenTreeTrigger::TriggerCreate(edict_t *param_1,undefined4 *param_2)

{
  CXenTreeTrigger *pCVar1;
  int iVar2;
  vec_t *pvVar3;
  
  pCVar1 = GetClassPtr<CXenTreeTrigger>(0);
  pvVar3 = pCVar1->pev->origin;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar3 = (vec_t)*param_2;
    param_2 = param_2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  pCVar1->pev->classname = (int)"xen_ttrigger" - (int)gpGlobals->pStringBase;
  pCVar1->pev->solid = 1;
  pCVar1->pev->movetype = 0;
  pCVar1->pev->owner = param_1;
  return;
}

/* 000f598c  CXenTreeTrigger::Touch  (96 bytes)
 * undefined Touch(undefined4 param_1)
 */
/* WARNING: Removing unreachable block (ram,0x000f59b3) */
/* CXenTreeTrigger::Touch(CBaseEntity *) */

void __thiscall CXenTreeTrigger::Touch(CXenTreeTrigger *this,undefined4 param_1)

{
  edict_t *peVar1;
  void *pvVar2;
  
  if (this->pev->owner != (edict_t *)0x0) {
    peVar1 = this->pev->owner;
    pvVar2 = (void *)0x0;
    if (peVar1 != (edict_t *)0x0) {
      pvVar2 = peVar1->pvPrivateData;
    }
    (**(code **)(*(int *)((int)pvVar2 + 0x60) + 0xdc))(pvVar2,param_1);
  }
  return;
}

