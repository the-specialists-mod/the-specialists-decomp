/* mp.dll - CGameTeamMaster (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10022530  CGameTeamMaster::KeyValue  (167 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CGameTeamMaster::KeyValue(CGameTeamMaster *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *this_00;
  void *this_01;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  this_00 = &DAT_0000000a;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_teamindex_100946fc;
  do {
    if (this_00 == (undefined1 *)0x0) break;
    this_00 = this_00 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    uVar1 = FUN_1006e1dd(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x58 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  this_01 = (void *)0xd;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_triggerstate_100946ec;
  do {
    if (this_01 == (void *)0x0) break;
    this_01 = (void *)((int)this_01 + -1);
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    CRuleEntity::KeyValue((CRuleEntity *)this,param_1);
    return;
  }
  iVar2 = FUN_1006e1dd(this_01,*(byte_conflict **)(param_1 + 8));
  if (iVar2 != 0) {
    if (iVar2 != 2) {
      *(undefined4 *)&this->field_0x5c = 1;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    *(undefined4 *)&this->field_0x5c = 3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)&this->field_0x5c = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 100225e0  CGameTeamMaster::Use  (149 bytes)
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
      iVar3 = *DAT_1009f494;
      uVar2 = (**(code **)(*param_2 + 0xb0))();
      uVar2 = (**(code **)(iVar3 + 0xcc))(uVar2);
      *(undefined4 *)&param_1->field_0x58 = uVar2;
      return;
    }
    iVar3 = TeamMatch(param_1,param_2);
    if (iVar3 != 0) {
      CBaseEntity::SUB_UseTargets
                ((CBaseEntity *)param_1,param_2,*(undefined4 *)&param_1->field_0x5c,param_5);
      if ((param_1->pev->spawnflags & 1) != 0) {
        UTIL_Remove((int)param_1);
      }
    }
  }
  return;
}

/* 10022690  CGameTeamMaster::TeamID  (29 bytes)
 * undefined TeamID()
 */
undefined1 * __fastcall CGameTeamMaster::TeamID(int param_1)

{
  undefined1 *puVar1;
  
  if (*(int *)(param_1 + 0x58) < 0) {
    return &DAT_1009f428;
  }
  puVar1 = (undefined1 *)(**(code **)(*DAT_1009f494 + 0xd0))(*(int *)(param_1 + 0x58));
  return puVar1;
}

/* 100226b0  CGameTeamMaster::TeamMatch  (75 bytes)
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
  pbVar1 = (byte_conflict *)(*this->vtable[0x2c])();
  pcVar2 = (char *)(**(code **)(*param_1 + 0xb0))();
  uVar3 = UTIL_TeamsMatch(pcVar2,pbVar1);
  return uVar3;
}

/* 10022fc0  CGameTeamMaster::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CGameTeamMaster::ObjectCaps(void)

{
  return 0x82;
}

