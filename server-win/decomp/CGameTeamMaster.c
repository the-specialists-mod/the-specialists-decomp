/* mp.dll - CGameTeamMaster (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002a5d0  CGameTeamMaster::KeyValue  (235 bytes)
 * undefined KeyValue()
 */
void __thiscall CGameTeamMaster::KeyValue(CRuleEntity *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  CRuleEntity *this;
  char *pcVar7;
  bool bVar8;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar7 = s_teamindex_1009f9e4;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CRuleEntity *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002a608:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1002a60d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CRuleEntity *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002a608;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002a60d:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_triggerstate_1009f9d4;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CRuleEntity *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002a659:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1002a65e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this = (CRuleEntity *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002a659;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002a65e:
  if (iVar3 != 0) {
    CRuleEntity::KeyValue(param_1,param_2);
    return;
  }
  iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
  if (iVar3 != 0) {
    if (iVar3 != 2) {
      *(undefined4 *)(param_1 + 0x5c) = 1;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x5c) = 3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

/* 1002a6c0  CGameTeamMaster::Use  (149 bytes)
 * undefined Use()
 */
void __thiscall
CGameTeamMaster::Use
          (CGameTeamMaster *param_1,int *param_2,undefined4 param_3,int param_4,float param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = CRuleEntity::CanFireForActivator((CRuleEntity *)param_1,param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (param_4 == 2) {
      if (param_5 < 0.0) {
        *(undefined4 *)&param_1->field_0x58 = 0xffffffff;
        return;
      }
      iVar3 = *g_pGameRules;
      uVar2 = (**(code **)(*param_2 + 200))();
      uVar2 = (**(code **)(iVar3 + 200))(uVar2);
      *(undefined4 *)&param_1->field_0x58 = uVar2;
      return;
    }
    iVar3 = TeamMatch(param_1,param_2);
    if (iVar3 != 0) {
      CBaseEntity::SUB_UseTargets
                ((CBaseEntity *)param_1,param_2,*(undefined4 *)&param_1->field_0x5c,param_5);
      if ((param_1->pev->spawnflags & 1) != 0) {
        UTIL_Remove((int *)param_1);
      }
    }
  }
  return;
}

/* 1002a760  CGameTeamMaster::IsTriggered  (13 bytes)
 * undefined IsTriggered()
 */
void __thiscall CGameTeamMaster::IsTriggered(CGameTeamMaster *param_1,int *param_2)

{
  TeamMatch(param_1,param_2);
  return;
}

/* 1002a770  CGameTeamMaster::TeamID  (29 bytes)
 * undefined TeamID()
 */
undefined1 * __fastcall CGameTeamMaster::TeamID(int param_1)

{
  undefined1 *puVar1;
  
  if (*(int *)(param_1 + 0x58) < 0) {
    return &DAT_100a9398;
  }
  puVar1 = (undefined1 *)(**(code **)(*g_pGameRules + 0xcc))(*(int *)(param_1 + 0x58));
  return puVar1;
}

/* 1002a790  CGameTeamMaster::TeamMatch  (75 bytes)
 * undefined4 TeamMatch(int * param_1)
 * called by: CGameTeamMaster::IsTriggered, CGameTeamMaster::Use
 */
undefined4 __thiscall CGameTeamMaster::TeamMatch(CGameTeamMaster *this,int *param_1)

{
  byte_conflict *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if ((*(int *)&this->field_0x58 < 0) && ((this->pev->spawnflags & 2) != 0)) {
    return 1;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  pbVar1 = (byte_conflict *)(*this->vtable[0x32])();
  pcVar2 = (char *)(**(code **)(*param_1 + 200))();
  uVar3 = UTIL_TeamsMatch(pcVar2,pbVar1);
  return uVar3;
}

