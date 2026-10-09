/* ts_i386.so - CFuncIllusionary (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a54b0  CFuncIllusionary::KeyValue  (139 bytes)
 * undefined KeyValue(int param_1)
 */
/* CFuncIllusionary::KeyValue(KeyValueData_s *) */

void __thiscall CFuncIllusionary::KeyValue(CFuncIllusionary *this,int param_1)

{
  entvars_t *peVar1;
  int iVar2;
  longdouble lVar3;
  
  iVar2 = strcmp(*(char **)(param_1 + 4),"skin");
  if (iVar2 == 0) {
    peVar1 = this->pev;
    lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    peVar1->skin = (int)ROUND(lVar3);
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
  }
  return;
}

/* 000a553c  CFuncIllusionary::Spawn  (110 bytes)
 * undefined Spawn(void)
 */
/* CFuncIllusionary::Spawn(void) */

void __thiscall CFuncIllusionary::Spawn(CFuncIllusionary *this)

{
  int iVar1;
  vec_t *pvVar2;
  vec_t *pvVar3;
  
  pvVar2 = (vec_t *)&g_vecZero;
  pvVar3 = this->pev->angles;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  this->pev->movetype = 0;
  this->pev->solid = 0;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  return;
}

/* 000a749c  CFuncIllusionary::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CFuncIllusionary::ObjectCaps(void) */

undefined4 CFuncIllusionary::ObjectCaps(void)

{
  return 0;
}

