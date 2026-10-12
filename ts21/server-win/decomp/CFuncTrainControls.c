/* mp.dll - CFuncTrainControls (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10028d30  CFuncTrainControls::Find  (193 bytes)
 * void Find(void)
 */
/* public: void __thiscall CFuncTrainControls::Find(void) */

void __thiscall CFuncTrainControls::Find(CFuncTrainControls *this)

{
  int iVar1;
  void *this_00;
  edict_t *pEdictStartSearchAfter;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  entvars_t *peVar5;
  
                    /* 0x28d30  49  ?Find@CFuncTrainControls@@QAEXXZ */
  pEdictStartSearchAfter = (edict_t *)0x0;
  do {
    pEdictStartSearchAfter =
         (*g_engfuncs.pfnFindEntityByString)
                   (pEdictStartSearchAfter,s_targetname_100915e4,
                    gpGlobals->pStringBase + this->pev->target);
    if (pEdictStartSearchAfter == (edict_t *)0x0) goto LAB_10028daa;
    iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
    if (iVar1 == 0) break;
    iVar1 = 0x10;
    bVar4 = true;
    pcVar2 = gpGlobals->pStringBase + (pEdictStartSearchAfter->v).classname;
    pcVar3 = s_func_tracktrain_100954c8;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
  } while (!bVar4);
  if ((pEdictStartSearchAfter != (edict_t *)0x0) &&
     (iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter), iVar1 != 0)) {
    peVar5 = this->pev;
    this_00 = (void *)FUN_10028a00((int)pEdictStartSearchAfter);
    FUN_10028470(this_00,(int)peVar5);
    UTIL_Remove((int)this);
    return;
  }
LAB_10028daa:
  (*g_engfuncs.pfnAlertMessage)(at_console,s_No_train__s_10095560);
  return;
}

/* 10028e00  CFuncTrainControls::Spawn  (122 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CFuncTrainControls::Spawn(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  FUN_10067970();
  FUN_100679a0();
  *(code **)(param_1 + 0x10) = Find;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time;
  return;
}

/* 1002a210  CFuncTrainControls::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CFuncTrainControls::ObjectCaps(void)

{
  return 0;
}

