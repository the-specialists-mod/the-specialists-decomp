/* ts_i386.so - CFuncWall (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a50ac  CFuncWall::Spawn  (132 bytes)
 * undefined Spawn(void)
 */
/* CFuncWall::Spawn(void) */

void __thiscall CFuncWall::Spawn(CFuncWall *this)

{
  int *piVar1;
  int iVar2;
  vec_t *pvVar3;
  vec_t *pvVar4;
  
  pvVar3 = (vec_t *)&g_vecZero;
  pvVar4 = this->pev->angles;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar4 = *pvVar3;
    pvVar3 = pvVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  this->pev->movetype = 7;
  this->pev->solid = 4;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  piVar1 = &this->pev->flags;
  *piVar1 = *piVar1 | 0x2000000;
  return;
}

/* 000a5130  CFuncWall::Use  (110 bytes)
 * undefined Use(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 */
/* CFuncWall::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CFuncWall::Use(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = CBaseEntity::ShouldToggle(param_1,param_4,(int)ROUND(*(float *)(*param_1 + 0x130)));
  if (iVar1 != 0) {
    *(float *)(*param_1 + 0x130) = 1.0 - *(float *)(*param_1 + 0x130);
  }
  return;
}

/* 000a73bc  CFuncWall::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CFuncWall::ObjectCaps(void) */

undefined4 CFuncWall::ObjectCaps(void)

{
  return 0;
}

