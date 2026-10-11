/* mp.dll - CGlow (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001b300  CGlow::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CGlow::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CGlow_1009df5c,(int)param_1,0x1009dbe0,2);
  return;
}

/* 1001b330  CGlow::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CGlow::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CGlow_1009df5c,(int)param_1,&DAT_1009dbe0,2);
  return;
}

/* 1001b360  CGlow::Spawn  (244 bytes)
 * undefined Spawn()
 */
void __fastcall CGlow::Spawn(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0;
  (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  iVar1 = (*g_engfuncs.pfnModelFrames)(*(int *)(*(int *)(param_1 + 4) + 0xb4));
  *(float *)(param_1 + 0x58) = (float)iVar1 - 1.0;
  if ((float)iVar1 - 1.0 <= 1.0) {
    *(float *)(param_1 + 0x54) = gpGlobals->time;
    return;
  }
  if (*(float *)(*(int *)(param_1 + 4) + 0x138) != 0.0) {
    *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
    *(float *)(param_1 + 0x54) = gpGlobals->time;
    return;
  }
  *(float *)(param_1 + 0x54) = gpGlobals->time;
  return;
}

/* 1001b460  CGlow::Think  (69 bytes)
 * undefined Think()
 */
void __fastcall CGlow::Think(int param_1)

{
  Animate(param_1);
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  *(float *)(param_1 + 0x54) = gpGlobals->time;
  return;
}

/* 1001b4b0  CGlow::Animate  (48 bytes)
 * undefined Animate(int param_1)
 * called by: CGlow::Think
 */
void __fastcall CGlow::Animate(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (0.0 < *(float *)(param_1 + 0x58)) {
    iVar1 = *(int *)(param_1 + 4);
    fVar2 = (float10)FUN_1007dc8a(param_1);
    *(float *)(iVar1 + 0x130) = (float)fVar2;
  }
  return;
}

