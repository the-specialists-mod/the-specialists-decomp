/* mp.dll - CAutoTrigger (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10040520  CAutoTrigger::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CAutoTrigger::Save(CBaseDelay *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CAutoTrigger_100a2b68,(int)param_1,0x100a2858,2);
  return;
}

/* 10040550  CAutoTrigger::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CAutoTrigger::Restore(CBaseDelay *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CAutoTrigger_100a2b68,(int)param_1,&DAT_100a2858,2);
  return;
}

/* 10040580  CAutoTrigger::KeyValue  (236 bytes)
 * undefined KeyValue()
 */
void __thiscall CAutoTrigger::KeyValue(CBaseDelay *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  void **ppvVar4;
  byte *pbVar5;
  CBaseDelay *this;
  char *pcVar7;
  bool bVar8;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar7 = s_globalstate_1009c2e4;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100405b8:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100405bd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100405b8;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100405bd:
  if (iVar3 == 0) {
    ppvVar4 = (void **)(*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    param_1[1].vtable = ppvVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_triggerstate_1009f9d4;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1004060a:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1004060f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1004060a;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1004060f:
  if (iVar3 != 0) {
    CBaseDelay::KeyValue(param_1,param_2);
    return;
  }
  iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
  if (iVar3 != 0) {
    if (iVar3 != 2) {
      param_1[1].pev = (entvars_t *)0x1;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    param_1[1].pev = (entvars_t *)0x3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  param_1[1].pev = (entvars_t *)0x0;
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

/* 10040670  CAutoTrigger::Spawn  (5 bytes)
 * undefined Spawn()
 */
/* Identical-code folding: also CAutoTrigger::Spawn, CTestEffect::Spawn */

void __fastcall CAutoTrigger::Spawn(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10040672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}

/* 10040680  CAutoTrigger::Precache  (23 bytes)
 * undefined Precache()
 */
void __fastcall CAutoTrigger::Precache(int param_1)

{
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 100406a0  CAutoTrigger::Think  (63 bytes)
 * undefined Think(int * param_1)
 */
void __fastcall CAutoTrigger::Think(int *param_1)

{
  int iVar1;
  
  if ((param_1[0x17] != 0) && (iVar1 = FUN_1007b1d0(&DAT_102ef3b0,param_1[0x17]), iVar1 != 1)) {
    return;
  }
  CBaseDelay::SUB_UseTargets((CBaseDelay *)param_1,param_1,param_1[0x18],0);
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
    UTIL_Remove(param_1);
  }
  return;
}

