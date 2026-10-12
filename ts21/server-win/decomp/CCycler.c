/* mp.dll - CCycler (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001fa50  CCycler::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CCycler::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CCycler_10094264,(int)param_1,0x100941f8,1);
  return;
}

/* 1001fa80  CCycler::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CCycler::Restore(CBaseToggle *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CCycler_10094264,(int)param_1,0x100941f8,1);
  return;
}

/* 1001fb50  CCycler::GenericCyclerSpawn  (165 bytes)
 * undefined GenericCyclerSpawn(char * param_1)
 * called by: CCyclerProbe::Spawn, CGenericCycler::Spawn
 */
void __thiscall CCycler::GenericCyclerSpawn(CCycler *this,char *param_1)

{
  int iVar1;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    **(int **)(this + 4) = (int)s_cycler_100942ac - (int)gpGlobals->pStringBase;
    (*g_engfuncs.pfnPrecacheModel)(param_1);
    (*g_engfuncs.pfnSetModel)(*(edict_t **)(*(int *)(this + 4) + 0x208),param_1);
    FUN_1001fc00((int *)this);
    FUN_10067970();
    return;
  }
  iVar1 = *(int *)(this + 4);
  (*g_engfuncs.pfnAlertMessage)
            (at_error,s_cycler_at___0f___0f__0_f_missing_10094280,(double)*(float *)(iVar1 + 8),
             (double)*(float *)(iVar1 + 0xc),(double)*(float *)(iVar1 + 0x10));
  (*g_engfuncs.pfnRemoveEntity)(*(edict_t **)(*(int *)(this + 4) + 0x208));
  return;
}

/* 1001fcd0  CCycler::Think  (144 bytes)
 * undefined Think()
 */
void __fastcall CCycler::Think(int param_1)

{
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  if (*(int *)(param_1 + 0x150) != 0) {
    CBaseAnimating::StudioFrameAdvance(param_1,0.0);
  }
  if ((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x6c) == 0)) {
    *(float *)(*(int *)(param_1 + 4) + 0x134) = gpGlobals->time;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(float *)(param_1 + 100) = gpGlobals->time;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0;
    if (*(int *)(param_1 + 0x150) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0;
    }
  }
  return;
}

/* 1001fd60  CCycler::Use  (55 bytes)
 * undefined Use()
 */
void __fastcall CCycler::Use(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x150) == 0);
  *(uint *)(param_1 + 0x150) = uVar1;
  if (uVar1 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0x3f800000;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0;
  return;
}

/* 1001fda0  CCycler::TakeDamage  (175 bytes)
 * undefined4 TakeDamage(int param_1)
 */
undefined4 __fastcall CCycler::TakeDamage(int param_1)

{
  if (*(int *)(param_1 + 0x150) != 0) {
    *(int *)(*(int *)(param_1 + 4) + 0x128) = *(int *)(*(int *)(param_1 + 4) + 0x128) + 1;
    CBaseAnimating::ResetSequenceInfo(param_1);
    if (*(float *)(param_1 + 0x5c) == 0.0) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x128) = 0;
      CBaseAnimating::ResetSequenceInfo(param_1);
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0;
    return 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0x3f800000;
  CBaseAnimating::StudioFrameAdvance(param_1,0.1);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0;
  (*g_engfuncs.pfnAlertMessage)
            (at_console,s_sequence___d__frame___0f_100942b4,
             *(undefined4 *)(*(int *)(param_1 + 4) + 0x128),
             (double)*(float *)(*(int *)(param_1 + 4) + 0x130));
  return 0;
}

/* 10020600  CCycler::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CCycler::ObjectCaps(void)

{
  return 10;
}

/* 10020610  CCycler::IsAlive  (3 bytes)
 * undefined IsAlive()
 */
undefined4 CCycler::IsAlive(void)

{
  return 0;
}

