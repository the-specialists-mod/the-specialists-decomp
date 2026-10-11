/* mp.dll - CTSTeamEscape (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1005d020  CTSTeamEscape::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSTeamEscape::Save(CTSObjective *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CTSObjective::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSTeamEscape_100a5058,(int)param_1,0x100a4d10,1);
  return;
}

/* 1005d050  CTSTeamEscape::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSTeamEscape::Restore(CTSObjective *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CTSObjective::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CTSTeamEscape_100a5058,(int)param_1,&DAT_100a4d10,1);
  return;
}

/* 1005d080  CTSTeamEscape::Spawn  (213 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTSTeamEscape::Spawn(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  **(int **)(param_1 + 4) = (int)s_ts_teamescape_100a5068 - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  iVar1 = *(int *)(param_1 + 4);
  UTIL_SetSize(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 5;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(code **)(param_1 + 0x14) = WaitTouch;
  *(code **)(param_1 + 0x10) = WaitThink;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 1.0;
  puVar2 = (undefined4 *)(param_1 + 0x5c);
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  return;
}

/* 1005d160  CTSTeamEscape::EnableObjective  (63 bytes)
 * undefined EnableObjective()
 */
void __thiscall CTSTeamEscape::EnableObjective(int param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(char *)(param_1 + 0x54) = param_2;
  puVar2 = (undefined4 *)(param_1 + 0x5c);
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (param_2 != '\0') {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  return;
}

/* 1005d1a0  CTSTeamEscape::WaitTouch  (328 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSTeamEscape::WaitTouch(class CBaseEntity *) */

void __thiscall CTSTeamEscape::WaitTouch(CTSTeamEscape *this,CBaseEntity *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x5d1a0  158  ?WaitTouch@CTSTeamEscape@@QAEXPAVCBaseEntity@@@Z */
  if ((this->field_0x54 != '\0') && (iVar2 = (**(code **)(*(int *)param_1 + 0xc0))(), iVar2 != 0)) {
    iVar2 = 0;
    cVar1 = FUN_1005c3d0(this,(int *)param_1);
    if (cVar1 != '\0') {
      if (-1 < *(int *)&this->field_0x58) {
        iVar2 = FUN_10073270(&DAT_100c0a70 + *(int *)&this->field_0x58 * 0x8c,'\x01');
      }
      iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
      if ((-1 < iVar3) && (iVar3 < 0x21)) {
        if (*(int *)(&this->field_0x5c + iVar3 * 4) == 0) {
          *(int *)&this->field_0xe0 = *(int *)&this->field_0xe0 + 1;
        }
        *(CBaseEntity **)(&this->field_0x5c + iVar3 * 4) = param_1;
      }
      iVar3 = 0;
      switch(*(undefined4 *)&this->field_0xe4) {
      case 0:
        iVar3 = 1;
        break;
      case 1:
        iVar3 = iVar2 / 3;
        break;
      case 2:
        iVar3 = (iVar2 / 3) * 2;
        break;
      case 3:
        iVar3 = iVar2;
      }
      if (iVar3 <= *(int *)&this->field_0xe0) {
        iVar2 = this->pev->target;
        if (iVar2 != 0) {
          FireTargets((int)(gpGlobals->pStringBase + iVar2),this,this,3,0);
        }
        iVar2 = this->pev->message;
        if (iVar2 != 0) {
          TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + iVar2);
        }
        (*this->vtable[0x43])(1);
      }
    }
  }
  return;
}

/* 1005d300  CTSTeamEscape::WaitThink  (45 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSTeamEscape::WaitThink(void) */

void __thiscall CTSTeamEscape::WaitThink(CTSTeamEscape *this)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* 0x5d300  145  ?WaitThink@CTSTeamEscape@@QAEXXZ */
  this->pev->nextthink = gpGlobals->time + 1.0;
  puVar2 = (undefined4 *)&this->field_0x5c;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)&this->field_0xe0 = 0;
  return;
}

/* 1005d330  CTSTeamEscape::KeyValue  (114 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSTeamEscape::KeyValue(CTSTeamEscape *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  CTSTeamEscape *this_00;
  char *pcVar6;
  bool bVar7;
  undefined3 uVar5;
  
  pcVar6 = s_escapepercentage_100a5078;
  pbVar2 = *(byte **)(param_1 + 4);
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CTSTeamEscape *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1005d36a:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1005d36f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CTSTeamEscape *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1005d36a;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005d36f:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0xe4 = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_1005c340(this,param_1);
  return;
}

