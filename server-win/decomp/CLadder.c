/* mp.dll - CLadder (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100429a0  CLadder::Precache  (101 bytes)
 * undefined Precache(int param_1)
 */
void __fastcall CLadder::Precache(int param_1)

{
  float10 fVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 0xfffffff0;
  fVar1 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_showtriggers_1009bf70);
  if (fVar1 == (float10)0.0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x148) = 2;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x14c) = 0;
  }
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) & 0xffffff7f;
  return;
}

/* 10042a10  CLadder::Spawn  (65 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CLadder::Spawn(int *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  return;
}

/* 10042a70  CLadder::KeyValue  (13 bytes)
 * undefined KeyValue()
 */
/* Identical-code folding: also CLadder::KeyValue, CTriggerPush::KeyValue */

void __thiscall CLadder::KeyValue(CBaseTrigger *param_1,int param_2)

{
  CBaseTrigger::KeyValue(param_1,param_2);
  return;
}

