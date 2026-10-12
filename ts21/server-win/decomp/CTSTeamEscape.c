/* mp.dll - CTSTeamEscape (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10051bc0  CTSTeamEscape::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSTeamEscape::Save(CTSObjective *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CTSObjective::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSTeamEscape_10099120,(int)param_1,0x10098dd0,1);
  return;
}

/* 10051bf0  CTSTeamEscape::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSTeamEscape::Restore(CTSObjective *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CTSObjective::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CTSTeamEscape_10099120,(int)param_1,0x10098dd0,1);
  return;
}

/* 10051c20  CTSTeamEscape::Spawn  (213 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTSTeamEscape::Spawn(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  **(int **)(param_1 + 4) = (int)s_ts_teamescape_100982d4 - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  FUN_10067970();
  FUN_100679a0();
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

/* 10051d00  CTSTeamEscape::Precache  (1 bytes)
 * undefined Precache()
 */
void CTSTeamEscape::Precache(void)

{
  return;
}

/* 10051d50  CTSTeamEscape::WaitTouch  (321 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSTeamEscape::WaitTouch(class CBaseEntity *) */

void __thiscall CTSTeamEscape::WaitTouch(CTSTeamEscape *this,CBaseEntity *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
                    /* 0x51d50  146  ?WaitTouch@CTSTeamEscape@@QAEXPAVCBaseEntity@@@Z */
  if ((this->field_0x54 != '\0') && (iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(), iVar1 != 0)) {
    uVar2 = FUN_100513d0(this,(int *)param_1);
    if ((char)uVar2 != '\0') {
      if (*(int *)&this->field_0x58 == 0) {
        pcVar4 = s_Specialists_10097488;
      }
      else {
        pcVar4 = s_Mercenary_1009747c;
      }
      iVar1 = FUN_10064230((byte_conflict *)pcVar4,'\x01');
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
        iVar3 = iVar1 / 3;
        break;
      case 2:
        iVar3 = (iVar1 / 3) * 2;
        break;
      case 3:
        iVar3 = iVar1;
      }
      if (iVar3 <= *(int *)&this->field_0xe0) {
        iVar1 = this->pev->target;
        if (iVar1 != 0) {
          FireTargets((int)(gpGlobals->pStringBase + iVar1),this,this,3,0);
        }
        iVar1 = this->pev->message;
        if (iVar1 != 0) {
          TSHudMessageAll(0,0xff,0,1,0x1e,gpGlobals->pStringBase + iVar1);
        }
        (*this->vtable[0x3d])(1);
      }
    }
  }
  return;
}

/* 10051eb0  CTSTeamEscape::WaitThink  (45 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSTeamEscape::WaitThink(void) */

void __thiscall CTSTeamEscape::WaitThink(CTSTeamEscape *this)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* 0x51eb0  136  ?WaitThink@CTSTeamEscape@@QAEXXZ */
  this->pev->nextthink = gpGlobals->time + 1.0;
  puVar2 = (undefined4 *)&this->field_0x5c;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)&this->field_0xe0 = 0;
  return;
}

/* 10051ee0  CTSTeamEscape::KeyValue  (76 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSTeamEscape::KeyValue(CTSTeamEscape *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = 0x11;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_escapepercentage_10099130;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    uVar1 = FUN_1006e1dd(*(void **)(param_1 + 8),*(void **)(param_1 + 8));
    *(undefined4 *)&this->field_0xe4 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_10050ec0(this,param_1);
  return;
}

/* 10052130  CTSTeamEscape::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CTSTeamEscape::ObjectCaps(void)

{
  return 0x10;
}

