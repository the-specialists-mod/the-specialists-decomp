/* mp.dll - CEnvBeverage (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001d370  CEnvBeverage::Precache  (26 bytes)
 * undefined Precache()
 */
void CEnvBeverage::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_can_mdl_1009e090);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_g_bounce3_wav_1009e078);
  return;
}

/* 1001d3a0  CEnvBeverage::Use  (165 bytes)
 * undefined Use(int param_1)
 */
void __fastcall CEnvBeverage::Use(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if ((*(float *)(iVar2 + 0x164) == 0.0) && (0.0 < *(float *)(iVar2 + 0x160))) {
    iVar1 = CBaseEntity::Create(0x1009e0a0,(undefined4 *)(iVar2 + 8),(undefined4 *)(iVar2 + 0x50),
                                *(undefined4 *)(iVar2 + 0x208));
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x110);
    if (iVar2 == 6) {
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,5);
      *(int *)(*(int *)(iVar1 + 4) + 0x110) = iVar2;
    }
    else {
      *(int *)(*(int *)(iVar1 + 4) + 0x110) = iVar2;
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x164) = 0x3f800000;
    *(float *)(*(int *)(param_1 + 4) + 0x160) = *(float *)(*(int *)(param_1 + 4) + 0x160) - 1.0;
  }
  return;
}

/* 1001d450  CEnvBeverage::Spawn  (75 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CEnvBeverage::Spawn(int *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x118) = 0x80;
  *(undefined4 *)(param_1[1] + 0x164) = 0;
  if (*(float *)(param_1[1] + 0x160) == 0.0) {
    *(undefined4 *)(param_1[1] + 0x160) = 0x41200000;
  }
  return;
}

