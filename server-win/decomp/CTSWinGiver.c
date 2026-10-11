/* mp.dll - CTSWinGiver (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1005bf10  CTSWinGiver::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSWinGiver::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSWinGiver_100a4f74,(int)param_1,0x100a4c90,4);
  return;
}

/* 1005bf40  CTSWinGiver::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSWinGiver::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CTSWinGiver_100a4f74,(int)param_1,&DAT_100a4c90,4)
  ;
  return;
}

/* 1005bf70  CTSWinGiver::KeyValue  (351 bytes)
 * undefined KeyValue(int param_1)
 * called by: CTSScoreGiver::KeyValue
 */
void __thiscall CTSWinGiver::KeyValue(CTSWinGiver *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  CTSWinGiver *this_00;
  char *pcVar7;
  bool bVar8;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_1 + 4);
  pcVar7 = s_victorycash_100a4f98;
  pbVar2 = pbVar5;
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CTSWinGiver *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1005bfa8:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1005bfad;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CTSWinGiver *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1005bfa8;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005bfad:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x5c = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_defeatcash_100a4f8c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CTSWinGiver *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1005bff9:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1005bffe;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CTSWinGiver *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1005bff9;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005bffe:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x60 = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_winnerteam_100a4d74;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CTSWinGiver *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1005c04a:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1005c04f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CTSWinGiver *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1005c04a;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005c04f:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x64 = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_callsnumber_100a4f80;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CTSWinGiver *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1005c09b:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1005c0a0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this_00 = (CTSWinGiver *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1005c09b;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005c0a0:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x68 = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 1005c0d0  CTSWinGiver::EnableObjective  (11 bytes)
 * undefined EnableObjective()
 */
void __fastcall CTSWinGiver::EnableObjective(int param_1)

{
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  return;
}

/* 1005c0e0  CTSWinGiver::Spawn  (102 bytes)
 * undefined Spawn()
 */
void __fastcall CTSWinGiver::Spawn(int *param_1)

{
  *(int *)param_1[1] = (int)s_ts_wingiver_100a4fa4 - (int)gpGlobals->pStringBase;
  *(undefined4 *)(param_1[1] + 0x118) = 0x80;
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x1a4) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 10.0;
  (**(code **)(*param_1 + 0x34))();
  return;
}

/* 1005c150  CTSWinGiver::Use  (118 bytes)
 * undefined Use(int param_1)
 */
void __fastcall CTSWinGiver::Use(int param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  
  if ((*(char *)(param_1 + 0x58) == '\0') &&
     (iVar1 = *(int *)(param_1 + 0x54) + 1, *(int *)(param_1 + 0x54) = iVar1,
     *(int *)(param_1 + 0x68) <= iVar1)) {
    cVar3 = '\0';
    iVar1 = 1;
    lVar2 = __ftol();
    CTSGameRules::TeamWin
              ((CTSGameRules *)&TSGameRules,*(int *)(param_1 + 100),(int)lVar2,iVar1,cVar3);
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1d4);
    if (iVar1 != 0) {
      TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + iVar1);
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return;
}

