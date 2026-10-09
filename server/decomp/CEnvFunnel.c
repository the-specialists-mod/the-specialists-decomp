/* ts_i386.so - CEnvFunnel (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000bdcfc  CEnvFunnel::Precache  (48 bytes)
 * undefined Precache(void)
 */
/* CEnvFunnel::Precache(void) */

void __thiscall CEnvFunnel::Precache(CEnvFunnel *this)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnPrecacheModel)("sprites/flare6.spr");
  *(int *)&this->field_0x6c = iVar1;
  return;
}

/* 000bdd50  CEnvFunnel::Use  (208 bytes)
 * undefined Use(int * param_1)
 */
/* CEnvFunnel::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CEnvFunnel::Use(int *param_1)

{
  (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(100);
  (*g_engfuncs.pfnWriteCoord)(*(float *)(*param_1 + 8));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(*param_1 + 0xc));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(*param_1 + 0x10));
  (*g_engfuncs.pfnWriteShort)(param_1[0x1b]);
  if ((*(byte *)(*param_1 + 0x1a0) & 1) == 0) {
    (*g_engfuncs.pfnWriteShort)(0);
  }
  else {
    (*g_engfuncs.pfnWriteShort)(1);
  }
  (*g_engfuncs.pfnMessageEnd)();
  param_1[3] = -0x10000;
  param_1[4] = (int)CBaseEntity::SUB_Remove;
  *(float *)(*param_1 + 0x104) = gpGlobals->time;
  return;
}

/* 000bde24  CEnvFunnel::Spawn  (44 bytes)
 * undefined Spawn(void)
 */
/* CEnvFunnel::Spawn(void) */

void __thiscall CEnvFunnel::Spawn(CEnvFunnel *this)

{
  (*this->vtable[10])(this);
  this->pev->solid = 0;
  this->pev->effects = 0x80;
  return;
}

