/* ts_i386.so - CButtonTarget (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000aa254  CButtonTarget::Spawn  (128 bytes)
 * undefined Spawn(void)
 */
/* CButtonTarget::Spawn(void) */

void __thiscall CButtonTarget::Spawn(CButtonTarget *this)

{
  this->pev->movetype = 7;
  this->pev->solid = 4;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  this->pev->takedamage = 1.0;
  if ((this->pev->spawnflags & 2) != 0) {
    this->pev->frame = 1.0;
  }
  return;
}

/* 000aa2d4  CButtonTarget::Use  (157 bytes)
 * undefined Use(CBaseEntity * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 */
/* CButtonTarget::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CButtonTarget::Use(CBaseEntity *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = CBaseEntity::ShouldToggle(param_1,param_4,(int)ROUND(param_1->pev->frame));
  if (iVar1 != 0) {
    param_1->pev->frame = 1.0 - param_1->pev->frame;
    CBaseEntity::SUB_UseTargets(param_1,param_2,(uint)(param_1->pev->frame != 0.0),0);
  }
  return;
}

/* 000aa374  CButtonTarget::ObjectCaps  (27 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CButtonTarget::ObjectCaps(void) */

undefined4 __thiscall CButtonTarget::ObjectCaps(CButtonTarget *this)

{
  if ((this->pev->spawnflags & 1) != 0) {
    return 8;
  }
  return 0;
}

/* 000aa394  CButtonTarget::TakeDamage  (97 bytes)
 * undefined4 TakeDamage(int param_1, undefined4 param_2, int param_3)
 */
/* CButtonTarget::TakeDamage(entvars_s *, entvars_s *, float, int) */

undefined4 CButtonTarget::TakeDamage(int param_1,undefined4 param_2,int param_3)

{
  edict_t *peVar1;
  void *pvVar2;
  
  peVar1 = *(edict_t **)(param_3 + 0x208);
  if (peVar1 == (edict_t *)0x0) {
    peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  pvVar2 = (void *)0x0;
  if (peVar1 != (edict_t *)0x0) {
    pvVar2 = peVar1->pvPrivateData;
  }
  (**(code **)(*(int *)(param_1 + 0x60) + 0xe0))(param_1,pvVar2,param_1,3,0);
  return 1;
}

