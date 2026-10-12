/* mp.dll - CFrictionModifier (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10039940  CFrictionModifier::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CFrictionModifier::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CFrictionModifier_10097898,(int)param_1,0x10097598,1
                    );
  return;
}

/* 10039970  CFrictionModifier::Restore  (48 bytes)
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
            (param_2,(byte_conflict *)s_CFrictionModifier_10097898,(int)param_1,0x10097598,1);
  return;
}

/* 100399a0  CFrictionModifier::Spawn  (76 bytes)
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

/* 100399f0  CFrictionModifier::ChangeFriction  (35 bytes)
 * void ChangeFriction(CBaseEntity * param_1)
 */
/* public: void __thiscall CFrictionModifier::ChangeFriction(class CBaseEntity *) */

void __thiscall CFrictionModifier::ChangeFriction(CFrictionModifier *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x399f0  23  ?ChangeFriction@CFrictionModifier@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x108);
  if ((iVar1 != 0xb) && (iVar1 != 10)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x120) = *(undefined4 *)&this->field_0x54;
  }
  return;
}

/* 10039a20  CFrictionModifier::KeyValue  (78 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CFrictionModifier::KeyValue(CFrictionModifier *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  float10 fVar5;
  
  iVar1 = 9;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_modifier_100978ac;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    fVar5 = FUN_1006e0fb(*(undefined1 **)(param_1 + 8),*(undefined1 **)(param_1 + 8));
    *(float *)&this->field_0x54 = (float)(fVar5 * (float10)0.01);
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 1003ce20  CFrictionModifier::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CFrictionModifier::ObjectCaps(void)

{
  return 0;
}

