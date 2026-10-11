/* mp.dll - CRevertSaved (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10035c40  CRevertSaved::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CRevertSaved::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CRevertSaved_100a12f8,(int)param_1,0x100a0be0,2);
  return;
}

/* 10035c70  CRevertSaved::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CRevertSaved::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CRevertSaved_100a12f8,(int)param_1,&DAT_100a0be0,2);
  return;
}

/* 10035ca0  CRevertSaved::KeyValue  (363 bytes)
 * undefined KeyValue()
 */
void __thiscall CRevertSaved::KeyValue(undefined *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined *puVar5;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pcVar7 = s_duration_1009e00c;
  pbVar2 = pbVar4;
  puVar5 = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)puVar5 >> 8);
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10035cd8:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10035cdd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10035cd8;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10035cdd:
  if (iVar3 == 0) {
    fVar9 = atof(puVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x1d8) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_holdtime_1009e024;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)puVar5 >> 8);
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10035d2f:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10035d34;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10035d2f;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10035d34:
  if (iVar3 == 0) {
    fVar9 = atof(puVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x1dc) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_messagetime_100a1314;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)puVar5 >> 8);
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10035d86:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10035d8b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10035d86;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10035d8b:
  if (iVar3 == 0) {
    fVar9 = atof(puVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x54) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_loadtime_100a1308;
  do {
    bVar1 = *pbVar4;
    uVar6 = (undefined3)((uint)puVar5 >> 8);
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10035dd7:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10035ddc;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10035dd7;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10035ddc:
  if (iVar3 == 0) {
    fVar9 = atof(puVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x58) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 10035e10  CRevertSaved::Use  (87 bytes)
 * undefined Use(int param_1)
 */
void __fastcall CRevertSaved::Use(int param_1)

{
  __ftol();
  UTIL_ScreenFadeAll();
  *(float *)(*(int *)(param_1 + 4) + 0x104) = *(float *)(param_1 + 0x54) + gpGlobals->time;
  *(code **)(param_1 + 0x10) = MessageThink;
  return;
}

/* 10035e70  CRevertSaved::MessageThink  (88 bytes)
 * void MessageThink(void)
 */
/* public: void __thiscall CRevertSaved::MessageThink(void) */

void __thiscall CRevertSaved::MessageThink(CRevertSaved *this)

{
  float fVar1;
  
                    /* 0x35e70  71  ?MessageThink@CRevertSaved@@QAEXXZ */
  UTIL_ShowMessageAll(gpGlobals->pStringBase + this->pev->message);
  fVar1 = *(float *)&this->field_0x58 - *(float *)&this->field_0x54;
  if (0.0 < fVar1) {
    this->pev->nextthink = fVar1 + gpGlobals->time;
    *(code **)&this->field_0x10 = LoadThink;
    return;
  }
  LoadThink(this);
  return;
}

/* 10035ed0  CRevertSaved::LoadThink  (34 bytes)
 * void LoadThink(void)
 * called by: CRevertSaved::MessageThink
 */
/* public: void __thiscall CRevertSaved::LoadThink(void) */

void __thiscall CRevertSaved::LoadThink(CRevertSaved *this)

{
                    /* 0x35ed0  65  ?LoadThink@CRevertSaved@@QAEXXZ */
  if (gpGlobals->deathmatch == 0.0) {
    (*g_engfuncs.pfnServerCommand)(s_reload_1009cc58);
  }
  return;
}

