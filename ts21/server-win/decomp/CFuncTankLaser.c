/* mp.dll - CFuncTankLaser (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001ddc0  CFuncTankLaser::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CFuncTankLaser::Save(CFuncTank *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CFuncTank::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CFuncTankLaser_1009398c,(int)param_1,0x100936a8,2);
  return;
}

/* 1001ddf0  CFuncTankLaser::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CFuncTankLaser::Restore(CFuncTank *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CFuncTank::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CFuncTankLaser_1009398c,(int)param_1,0x100936a8,2)
  ;
  return;
}

/* 1001de20  CFuncTankLaser::Activate  (48 bytes)
 * undefined Activate(int param_1)
 */
void __fastcall CFuncTankLaser::Activate(int param_1)

{
  int iVar1;
  
  iVar1 = GetLaser(param_1);
  if (iVar1 == 0) {
    UTIL_Remove(param_1);
    (*g_engfuncs.pfnAlertMessage)(at_error,s_Laser_tank_with_no_env_laser__1009399c);
    return;
  }
  CLaser::TurnOff(*(int *)(param_1 + 0xd4));
  return;
}

/* 1001de50  CFuncTankLaser::KeyValue  (80 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CFuncTankLaser::KeyValue(CFuncTankLaser *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 0xc;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_laserentity_100939bc;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->message = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CFuncTank::KeyValue((CFuncTank *)this,param_1);
  return;
}

/* 1001dea0  CFuncTankLaser::GetLaser  (155 bytes)
 * int GetLaser(int param_1)
 * called by: CFuncTankLaser::Activate, CFuncTankLaser::Fire
 */
int __fastcall CFuncTankLaser::GetLaser(int param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  edict_t *pEdictStartSearchAfter;
  
  iVar2 = *(int *)(param_1 + 0xd4);
  if (iVar2 == 0) {
    pcVar1 = gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1d4);
    pEdictStartSearchAfter = (edict_t *)0x0;
    while( true ) {
      pEdictStartSearchAfter =
           (*g_engfuncs.pfnFindEntityByString)(pEdictStartSearchAfter,s_targetname_100915e4,pcVar1);
      if (pEdictStartSearchAfter == (edict_t *)0x0) break;
      iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
      if (iVar2 == 0) break;
      iVar2 = 10;
      bVar4 = true;
      pcVar1 = gpGlobals->pStringBase + (pEdictStartSearchAfter->v).classname;
      pcVar3 = s_env_laser_100939c8;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar4 = *pcVar1 == *pcVar3;
        pcVar1 = pcVar1 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        *(void **)(param_1 + 0xd4) = pEdictStartSearchAfter->pvPrivateData;
        break;
      }
      pcVar1 = gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1d4);
    }
    iVar2 = *(int *)(param_1 + 0xd4);
  }
  return iVar2;
}

/* 1001df40  CFuncTankLaser::Think  (48 bytes)
 * undefined Think(int * param_1)
 */
void __fastcall CFuncTankLaser::Think(int *param_1)

{
  if ((param_1[0x35] != 0) && ((float)param_1[0x36] < gpGlobals->time)) {
    CLaser::TurnOff(param_1[0x35]);
  }
  CFuncTank::Think(param_1);
  return;
}

/* 1001df70  CFuncTankLaser::Fire  (317 bytes)
 * undefined Fire()
 */
void __thiscall CFuncTankLaser::Fire(CFuncTank *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [56];
  
  if ((*(float *)(param_1 + 0x88) == 0.0) || (iVar2 = GetLaser((int)param_1), iVar2 == 0)) {
    CFuncTank::Fire(param_1,param_2);
  }
  else {
    FUN_10066e00((float *)(*(int *)(param_1 + 4) + 0x50));
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
    if (iVar2 != 0) {
      if (0 < iVar2) {
        do {
          iVar1 = *(int *)(*(int *)(param_1 + 0xd4) + 4);
          *(undefined4 *)(iVar1 + 8) = *param_2;
          *(undefined4 *)(iVar1 + 0xc) = param_2[1];
          *(undefined4 *)(iVar1 + 0x10) = param_2[2];
          FUN_1001da40();
          *(float *)(param_1 + 0xd8) = gpGlobals->time;
          CLaser::TurnOn(*(int *)(param_1 + 0xd4));
          *(float *)(*(int *)(*(int *)(param_1 + 0xd4) + 4) + 0x1e4) = gpGlobals->time - 1.0;
          FUN_10018120(*(void **)(param_1 + 0xd4),(int)auStack_38);
          iVar2 = iVar2 + -1;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xd4) + 4) + 0x104) = 0;
        } while (iVar2 != 0);
      }
      CFuncTank::Fire(param_1,param_2);
      return;
    }
  }
  return;
}

