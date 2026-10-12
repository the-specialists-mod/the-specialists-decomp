/* mp.dll - CTSObjective (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10050e60  CTSObjective::Save  (48 bytes)
 * undefined Save(void * param_1)
 * called by: CTSBomb::Save, CTSHack::Save, CTSTeamEscape::Save
 */
void __thiscall CTSObjective::Save(CTSObjective *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_1,(byte_conflict *)s_CTSObjective_10099074,(int)this,0x10098d90,1);
  return;
}

/* 10050e90  CTSObjective::Restore  (48 bytes)
 * undefined Restore(void * param_1)
 * called by: CTSBomb::Restore, CTSHack::Restore, CTSTeamEscape::Restore
 */
void __thiscall CTSObjective::Restore(CTSObjective *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_1,(byte_conflict *)s_CTSObjective_10099074,(int)this,0x10098d90,1);
  return;
}

/* 100510c0  CTSObjective::Freeze  (221 bytes)
 * undefined Freeze()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CTSObjective::Freeze(int param_1,char param_2)

{
  float fVar1;
  
  *(char *)(param_1 + 0x54) = param_2;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  if (param_2 != '\0') {
    *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) & 0xffffff7f
    ;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 4;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
    *(uint *)(*(int *)(param_1 + 4) + 0x1a4) = *(uint *)(*(int *)(param_1 + 4) + 0x1a4) | 0x2000000;
    (*g_engfuncs.pfnSetModel)
              (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
               gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
    fVar1 = _DAT_100ac8c8 - gpGlobals->time;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(float *)(param_1 + 0x5c) = fVar1;
    FUN_10051080(param_1);
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  return;
}

/* 10051750  CTSObjective::Freeze  (211 bytes)
 * undefined Freeze()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CTSObjective::Freeze(int param_1,char param_2)

{
  float fVar1;
  
  *(char *)(param_1 + 0x54) = param_2;
  if (param_2 != '\0') {
    *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) & 0xffffff7f
    ;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 4;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
    *(uint *)(*(int *)(param_1 + 4) + 0x1a4) = *(uint *)(*(int *)(param_1 + 4) + 0x1a4) | 0x2000000;
    (*g_engfuncs.pfnSetModel)
              (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
               gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
    fVar1 = _DAT_100ac8c8 - gpGlobals->time;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(float *)(param_1 + 0x5c) = fVar1;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}

/* 10051d10  CTSObjective::Freeze  (63 bytes)
 * undefined Freeze()
 */
void __thiscall CTSObjective::Freeze(int param_1,char param_2)

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

