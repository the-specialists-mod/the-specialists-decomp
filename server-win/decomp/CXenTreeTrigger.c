/* mp.dll - CXenTreeTrigger (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1007c440  CXenTreeTrigger::TriggerCreate  (102 bytes)
 * undefined TriggerCreate(undefined4 param_1, undefined4 * param_2)
 * called by: CXenTree::Spawn
 */
void __cdecl CXenTreeTrigger::TriggerCreate(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = GetClassPtr<CXenTreeTrigger>(0);
  iVar1 = *(int *)(iVar2 + 4);
  *(undefined4 *)(iVar1 + 8) = *param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_2[1];
  *(undefined4 *)(iVar1 + 0x10) = param_2[2];
  **(int **)(iVar2 + 4) = (int)s_xen_ttrigger_100a8040 - (int)gpGlobals->pStringBase;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x198) = param_1;
  return;
}

/* 1007c4b0  CXenTreeTrigger::Touch  (71 bytes)
 * undefined Touch()
 */
/* WARNING: Removing unreachable block (ram,0x1007c4bf) */
/* WARNING: Removing unreachable block (ram,0x1007c4e3) */

void __thiscall CXenTreeTrigger::Touch(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x198);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + 0x7c) + 0xd4))(param_2);
    return;
  }
  return;
}

