/* mp.dll - CFuncTankLaser (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100221c0  CFuncTankLaser::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CFuncTankLaser::Save(CFuncTank *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CFuncTank::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CFuncTankLaser_1009ea94,(int)param_1,0x1009e7b0,2);
  return;
}

/* 100221f0  CFuncTankLaser::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CFuncTankLaser::Restore(CFuncTank *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CFuncTank::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CFuncTankLaser_1009ea94,(int)param_1,&DAT_1009e7b0,2);
  return;
}

/* 10022220  CFuncTankLaser::Activate  (49 bytes)
 * undefined Activate(int * param_1)
 */
void __fastcall CFuncTankLaser::Activate(int *param_1)

{
  int iVar1;
  
  iVar1 = GetLaser((int)param_1);
  if (iVar1 == 0) {
    UTIL_Remove(param_1);
    (*g_engfuncs.pfnAlertMessage)(at_error,s_Laser_tank_with_no_env_laser__1009eaa4);
    return;
  }
  CLaser::TurnOff(param_1[0x35]);
  return;
}

/* 10022260  CFuncTankLaser::KeyValue  (118 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CFuncTankLaser::KeyValue(CFuncTankLaser *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar4 = s_laserentity_1009eac4;
  pbVar2 = *(byte **)(param_1 + 4);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_1002229a:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_1002229f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_1002229a;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002229f:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->message = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CFuncTank::KeyValue((CFuncTank *)this,param_1);
  return;
}

/* 100222e0  CFuncTankLaser::GetLaser  (230 bytes)
 * int GetLaser(int param_1)
 * called by: CFuncTankLaser::Activate, CFuncTankLaser::Fire
 */
int __fastcall CFuncTankLaser::GetLaser(int param_1)

{
  byte bVar1;
  void *pvVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  edict_t *pEdictStartSearchAfter;
  
  iVar4 = *(int *)(param_1 + 0xd4);
  if (iVar4 == 0) {
    pcVar3 = gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1d4);
    pEdictStartSearchAfter = (edict_t *)0x0;
    while( true ) {
      pEdictStartSearchAfter =
           (*g_engfuncs.pfnFindEntityByString)(pEdictStartSearchAfter,s_targetname_1009c68c,pcVar3);
      if (pEdictStartSearchAfter == (edict_t *)0x0) break;
      iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
      if (iVar4 == 0) break;
      pcVar3 = s_env_laser_1009ead0;
      pbVar5 = (byte *)(gpGlobals->pStringBase + (pEdictStartSearchAfter->v).classname);
      do {
        bVar1 = *pbVar5;
        bVar6 = bVar1 < (byte)*pcVar3;
        if (bVar1 != *pcVar3) {
LAB_10022374:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_10022379;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar6 = bVar1 < (byte)pcVar3[1];
        if (bVar1 != pcVar3[1]) goto LAB_10022374;
        pbVar5 = pbVar5 + 2;
        pcVar3 = pcVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_10022379:
      if (iVar4 == 0) {
        if (pEdictStartSearchAfter == (edict_t *)0x0) {
          pEdictStartSearchAfter = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
          if (pEdictStartSearchAfter == (edict_t *)0x0) {
            *(undefined4 *)(param_1 + 0xd4) = 0;
            break;
          }
        }
        pvVar2 = pEdictStartSearchAfter->pvPrivateData;
        *(void **)(param_1 + 0xd4) = pvVar2;
        return (int)pvVar2;
      }
      pcVar3 = gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1d4);
    }
    iVar4 = *(int *)(param_1 + 0xd4);
  }
  return iVar4;
}

/* 100223d0  CFuncTankLaser::Think  (47 bytes)
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

/* 10022400  CFuncTankLaser::Fire  (317 bytes)
 * undefined Fire()
 */
void __thiscall CFuncTankLaser::Fire(CFuncTank *param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [56];
  
  if ((*(float *)(param_1 + 0x88) == 0.0) || (iVar2 = GetLaser((int)param_1), iVar2 == 0)) {
    CFuncTank::Fire(param_1,param_2);
  }
  else {
    FUN_10076540((float *)(*(int *)(param_1 + 4) + 0x50));
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
    if (iVar2 != 0) {
      if (0 < iVar2) {
        do {
          iVar1 = *(int *)(*(int *)(param_1 + 0xd4) + 4);
          *(float *)(iVar1 + 8) = *param_2;
          *(float *)(iVar1 + 0xc) = param_2[1];
          *(float *)(iVar1 + 0x10) = param_2[2];
          FUN_10021d90(param_1,param_2,param_3,
                       (float *)(&DAT_100a93e8 + *(int *)(param_1 + 0xcc) * 0xc),auStack_38);
          *(float *)(param_1 + 0xd8) = gpGlobals->time;
          CLaser::TurnOn(*(int *)(param_1 + 0xd4));
          *(float *)(*(int *)(*(int *)(param_1 + 0xd4) + 4) + 0x1e4) = gpGlobals->time - 1.0;
          FUN_1001b200(*(void **)(param_1 + 0xd4),(int)auStack_38);
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

