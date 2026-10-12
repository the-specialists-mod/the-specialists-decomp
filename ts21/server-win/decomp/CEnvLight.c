/* mp.dll - CEnvLight (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10021c70  CEnvLight::KeyValue  (399 bytes)
 * undefined KeyValue()
 */
void __thiscall CEnvLight::KeyValue(CLight *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  char acStack_40 [64];
  
  iVar1 = 7;
  bVar4 = true;
  pcVar2 = *(char **)(param_2 + 4);
  pcVar3 = s__light_100945b4;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = FUN_1006ea8e(*(char **)(param_2 + 8),(byte_conflict *)s__d__d__d__d_100945a4);
    if ((iVar1 != 1) && (iVar1 == 4)) {
      __ftol();
      __ftol();
      __ftol();
    }
    FUN_1006eba0();
    __ftol();
    FUN_1006eba0();
    __ftol();
    FUN_1006eba0();
    __ftol();
    *(undefined4 *)(param_2 + 0xc) = 1;
    FUN_1006e69a(acStack_40,&DAT_100945a0);
    (*g_engfuncs.pfnCVarSetString)(s_sv_skycolor_r_10094590,acStack_40);
    FUN_1006e69a(acStack_40,&DAT_100945a0);
    (*g_engfuncs.pfnCVarSetString)(s_sv_skycolor_g_10094580,acStack_40);
    FUN_1006e69a(acStack_40,&DAT_100945a0);
    (*g_engfuncs.pfnCVarSetString)(s_sv_skycolor_b_10094570,acStack_40);
    return;
  }
  CLight::KeyValue(param_1,param_2);
  return;
}

/* 10021e00  CEnvLight::Spawn  (169 bytes)
 * undefined Spawn()
 */
void __fastcall CEnvLight::Spawn(int param_1)

{
  char acStack_40 [64];
  
  FUN_10066e00((float *)(*(int *)(param_1 + 4) + 0x50));
  FUN_1006e69a(acStack_40,&DAT_100945e0);
  (*g_engfuncs.pfnCVarSetString)(s_sv_skyvec_x_100945d4,acStack_40);
  FUN_1006e69a(acStack_40,&DAT_100945e0);
  (*g_engfuncs.pfnCVarSetString)(s_sv_skyvec_y_100945c8,acStack_40);
  FUN_1006e69a(acStack_40,&DAT_100945e0);
  (*g_engfuncs.pfnCVarSetString)(s_sv_skyvec_z_100945bc,acStack_40);
  CLight::Spawn(param_1);
  return;
}

