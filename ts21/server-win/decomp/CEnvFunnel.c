/* mp.dll - CEnvFunnel (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10019da0  CEnvFunnel::Precache  (22 bytes)
 * undefined Precache()
 */
void __fastcall CEnvFunnel::Precache(int param_1)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_flare6_spr_10092f6c);
  *(int *)(param_1 + 0x5c) = iVar1;
  return;
}

/* 10019dd0  CEnvFunnel::Use  (137 bytes)
 * undefined Use()
 */
void __fastcall CEnvFunnel::Use(int param_1)

{
  (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(100);
  (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(param_1 + 4) + 8));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(param_1 + 4) + 0xc));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(param_1 + 4) + 0x10));
  (*g_engfuncs.pfnWriteShort)(*(int *)(param_1 + 0x5c));
  (*g_engfuncs.pfnWriteShort)((uint)((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0));
  (*g_engfuncs.pfnMessageEnd)();
  *(code **)(param_1 + 0x10) = CBaseEntity::SUB_Remove;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time;
  return;
}

/* 10019e60  CEnvFunnel::Spawn  (36 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CEnvFunnel::Spawn(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x118) = 0x80;
  return;
}

