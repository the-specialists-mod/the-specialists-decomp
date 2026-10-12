/* mp.dll - CTriggerCDAudio (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003a510  CTriggerCDAudio::Touch  (30 bytes)
 * undefined Touch(int * param_1)
 */
void __thiscall CTriggerCDAudio::Touch(CTriggerCDAudio *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xa8))();
  if (iVar1 != 0) {
    FUN_1003a5d0((int)this);
  }
  return;
}

/* 1003a540  CTriggerCDAudio::Use  (8 bytes)
 * undefined Use()
 */
void __fastcall CTriggerCDAudio::Use(int param_1)

{
  FUN_1003a5d0(param_1);
  return;
}

