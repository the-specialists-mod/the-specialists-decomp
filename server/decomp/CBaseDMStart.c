/* ts_i386.so - CBaseDMStart (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e2bb8  CBaseDMStart::KeyValue  (101 bytes)
 * undefined KeyValue(int param_1)
 */
/* CBaseDMStart::KeyValue(KeyValueData_s *) */

void __thiscall CBaseDMStart::KeyValue(CBaseDMStart *this,int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"master");
  if (iVar1 == 0) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->netname = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

/* 000e2c20  CBaseDMStart::IsTriggered  (45 bytes)
 * undefined IsTriggered(undefined4 param_1)
 */
/* CBaseDMStart::IsTriggered(CBaseEntity *) */

void __thiscall CBaseDMStart::IsTriggered(CBaseDMStart *this,undefined4 param_1)

{
  UTIL_IsMasterTriggered(this->pev->netname,param_1);
  return;
}

