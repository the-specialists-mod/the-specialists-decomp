/* mp.dll - CTriggerCDAudio (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10041090  CTriggerCDAudio::Touch  (30 bytes)
 * undefined Touch(int * param_1)
 */
void __thiscall CTriggerCDAudio::Touch(CTriggerCDAudio *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xc0))();
  if (iVar1 != 0) {
    FUN_10041150((int *)this);
  }
  return;
}

/* 100410c0  CTriggerCDAudio::Use  (8 bytes)
 * undefined Use()
 */
void __fastcall CTriggerCDAudio::Use(int *param_1)

{
  FUN_10041150(param_1);
  return;
}

