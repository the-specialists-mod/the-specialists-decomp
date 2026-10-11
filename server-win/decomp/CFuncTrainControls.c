/* mp.dll - CFuncTrainControls (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10031300  CFuncTrainControls::Find  (230 bytes)
 * void Find(void)
 */
/* public: void __thiscall CFuncTrainControls::Find(void) */

void __thiscall CFuncTrainControls::Find(CFuncTrainControls *this)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  void *this_00;
  char *pcVar4;
  edict_t *pEdictStartSearchAfter;
  bool bVar5;
  
                    /* 0x31300  53  ?Find@CFuncTrainControls@@QAEXXZ */
  pEdictStartSearchAfter = (edict_t *)0x0;
  do {
    pEdictStartSearchAfter =
         (*g_engfuncs.pfnFindEntityByString)
                   (pEdictStartSearchAfter,s_targetname_1009c68c,
                    gpGlobals->pStringBase + this->pev->target);
    if (pEdictStartSearchAfter == (edict_t *)0x0) goto LAB_1003139f;
    iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
    if (iVar2 == 0) break;
    pcVar4 = s_func_tracktrain_100a0818;
    pbVar3 = (byte *)(gpGlobals->pStringBase + (pEdictStartSearchAfter->v).classname);
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_1003137e:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10031383;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_1003137e;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_10031383:
  } while (iVar2 != 0);
  if ((pEdictStartSearchAfter != (edict_t *)0x0) &&
     (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter), iVar2 != 0)) {
    this_00 = (void *)FUN_10030fa0((int)pEdictStartSearchAfter);
    FUN_100309b0(this_00,(int)this->pev);
    UTIL_Remove((int *)this);
    return;
  }
LAB_1003139f:
  (*g_engfuncs.pfnAlertMessage)(at_console,s_No_train__s_100a08b0);
  return;
}

/* 100313f0  CFuncTrainControls::Spawn  (122 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CFuncTrainControls::Spawn(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  iVar1 = *(int *)(param_1 + 4);
  UTIL_SetSize(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  *(code **)(param_1 + 0x10) = Find;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time;
  return;
}

