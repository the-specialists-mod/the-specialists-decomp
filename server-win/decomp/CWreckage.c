/* mp.dll - CWreckage (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10027950  CWreckage::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CWreckage::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CWreckage_1009f60c,(int)param_1,0x1009f558,1);
  return;
}

/* 10027980  CWreckage::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CWreckage::Restore(CBaseToggle *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CWreckage_1009f60c,(int)param_1,&DAT_1009f558,1);
  return;
}

/* 100279c0  CWreckage::Spawn  (170 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CWreckage::Spawn(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x16c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 != 0) {
    (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + iVar1);
    (*g_engfuncs.pfnSetModel)
              (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
               gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  }
  lVar2 = __ftol();
  *(int *)(param_1 + 0x150) = (int)lVar2;
  return;
}

/* 10027a70  CWreckage::Precache  (36 bytes)
 * undefined Precache()
 */
void __fastcall CWreckage::Precache(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 != 0) {
    (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + iVar1);
  }
  return;
}

/* 10027aa0  CWreckage::Think  (358 bytes)
 * undefined Think()
 */
void __thiscall CWreckage::Think(int *param_1)

{
  float *pfVar1;
  int iVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float in_stack_0000001c;
  float in_stack_00000028;
  undefined4 in_stack_0000002c;
  float in_stack_00000030;
  float in_stack_00000038;
  
  CBaseAnimating::StudioFrameAdvance((int)param_1,0.0);
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.2;
  iVar2 = param_1[1];
  pfVar1 = (float *)(iVar2 + 0x1e4);
  if (*(float *)(iVar2 + 0x1e4) != 0.0) {
    if (*pfVar1 < gpGlobals->time) {
      UTIL_Remove(param_1);
      return;
    }
    iVar2 = param_1[1];
    (*g_engfuncs.pfnRandomFloat)(0.0,*pfVar1 - (float)param_1[0x54]);
    if ((float10)*(float *)(iVar2 + 0x1e4) - (float10)gpGlobals->time < extraout_ST0) {
      return;
    }
  }
  (*g_engfuncs.pfnRandomFloat)(*(float *)(iVar2 + 0xc4),*(float *)(iVar2 + 0xd0));
  (*g_engfuncs.pfnRandomFloat)(*(float *)(param_1[1] + 200),*(float *)(param_1[1] + 0xd4));
  (*g_engfuncs.pfnRandomFloat)(*(float *)(param_1[1] + 0xcc),*(float *)(param_1[1] + 0xd8));
  in_stack_0000001c = (float)extraout_ST0_00;
  (*g_engfuncs.pfnMessageBegin)(4,0x17,(float *)&stack0x00000014,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(5);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000028);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000030);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000038);
  (*g_engfuncs.pfnWriteShort)((int)DAT_102eecfa);
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,0x31);
  (*g_engfuncs.pfnWriteByte)(iVar2 + 0x32);
  in_stack_0000002c = 0x10027bed;
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,3);
  (*g_engfuncs.pfnWriteByte)(iVar2 + 8);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

