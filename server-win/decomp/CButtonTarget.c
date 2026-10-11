/* mp.dll - CButtonTarget (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000d540  CButtonTarget::Spawn  (101 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CButtonTarget::Spawn(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 4;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x16c) = 0x3f800000;
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0x3f800000;
  }
  return;
}

/* 1000d5b0  CButtonTarget::Use  (115 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, int param_3)
 */
void __thiscall
CButtonTarget::Use(CButtonTarget *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  iVar1 = CBaseEntity::ShouldToggle(param_3,(int)lVar2);
  if (iVar1 != 0) {
    this->pev->frame = 1.0 - this->pev->frame;
    if (this->pev->frame != 0.0) {
      CBaseEntity::SUB_UseTargets((CBaseEntity *)this,param_1,1,0);
      return;
    }
    CBaseEntity::SUB_UseTargets((CBaseEntity *)this,param_1,0,0);
  }
  return;
}

/* 1000d630  CButtonTarget::ObjectCaps  (17 bytes)
 * undefined ObjectCaps()
 */
int __fastcall CButtonTarget::ObjectCaps(int param_1)

{
  return ((int)*(char *)(*(int *)(param_1 + 4) + 0x1a0) & 1U) << 3;
}

/* 1000d650  CButtonTarget::TakeDamage  (63 bytes)
 * undefined TakeDamage()
 */
undefined4 __thiscall CButtonTarget::TakeDamage(int *param_1,undefined4 param_2,int param_3)

{
  edict_t *peVar1;
  void *pvVar2;
  
  peVar1 = *(edict_t **)(param_3 + 0x208);
  if (peVar1 == (edict_t *)0x0) {
    peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar1 == (edict_t *)0x0) {
      pvVar2 = (void *)0x0;
      goto LAB_1000d676;
    }
  }
  pvVar2 = peVar1->pvPrivateData;
LAB_1000d676:
  (**(code **)(*param_1 + 0xd8))(pvVar2,param_1,3,0);
  return 1;
}

