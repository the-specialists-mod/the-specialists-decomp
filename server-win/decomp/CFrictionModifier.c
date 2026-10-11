/* mp.dll - CFrictionModifier (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100403b0  CFrictionModifier::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CFrictionModifier::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CFrictionModifier_100a2b48,(int)param_1,0x100a2848,1
                    );
  return;
}

/* 100403e0  CFrictionModifier::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CFrictionModifier::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CFrictionModifier_100a2b48,(int)param_1,&DAT_100a2848,1);
  return;
}

/* 10040410  CFrictionModifier::Spawn  (76 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CFrictionModifier::Spawn(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(code **)(param_1 + 0x14) = ChangeFriction;
  return;
}

/* 10040460  CFrictionModifier::ChangeFriction  (35 bytes)
 * void ChangeFriction(CBaseEntity * param_1)
 */
/* public: void __thiscall CFrictionModifier::ChangeFriction(class CBaseEntity *) */

void __thiscall CFrictionModifier::ChangeFriction(CFrictionModifier *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x40460  25  ?ChangeFriction@CFrictionModifier@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x108);
  if ((iVar1 != 0xb) && (iVar1 != 10)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x120) = *(undefined4 *)&this->field_0x54;
  }
  return;
}

/* 10040490  CFrictionModifier::KeyValue  (116 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CFrictionModifier::KeyValue(CFrictionModifier *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  CFrictionModifier *pCVar4;
  char *pcVar6;
  bool bVar7;
  float10 fVar8;
  undefined3 uVar5;
  
  pcVar6 = s_modifier_100a2b5c;
  pbVar2 = *(byte **)(param_1 + 4);
  pCVar4 = this;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)pCVar4 >> 8);
    pCVar4 = (CFrictionModifier *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100404ca:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_100404cf;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar4 = (CFrictionModifier *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100404ca;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100404cf:
  if (iVar3 == 0) {
    fVar8 = atof((undefined *)pCVar4,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x54 = (float)(fVar8 * (float10)0.01);
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

