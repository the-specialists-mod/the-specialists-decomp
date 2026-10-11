/* mp.dll - CEnvLight (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10029b40  CEnvLight::KeyValue  (444 bytes)
 * undefined KeyValue()
 */
void __thiscall CEnvLight::KeyValue(CLight *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  char acStack_40 [64];
  
  pcVar4 = s__light_1009f89c;
  pbVar2 = *(byte **)(param_2 + 4);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_10029b7d:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_10029b82;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_10029b7d;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10029b82:
  if (iVar3 != 0) {
    CLight::KeyValue(param_1,param_2);
    return;
  }
  iVar3 = sscanf(*(char **)(param_2 + 8),(byte_conflict *)s__d__d__d__d_1009f88c);
  if ((iVar3 != 1) && (iVar3 == 4)) {
    __ftol();
    __ftol();
    __ftol();
  }
  FUN_1007dd90();
  __ftol();
  FUN_1007dd90();
  __ftol();
  FUN_1007dd90();
  __ftol();
  *(undefined4 *)(param_2 + 0xc) = 1;
  sprintf(acStack_40,&DAT_1009ccf4);
  (*g_engfuncs.pfnCVarSetString)(s_sv_skycolor_r_1009f87c,acStack_40);
  sprintf(acStack_40,&DAT_1009ccf4);
  (*g_engfuncs.pfnCVarSetString)(s_sv_skycolor_g_1009f86c,acStack_40);
  sprintf(acStack_40,&DAT_1009ccf4);
  (*g_engfuncs.pfnCVarSetString)(s_sv_skycolor_b_1009f85c,acStack_40);
  return;
}

/* 10029d00  CEnvLight::Spawn  (169 bytes)
 * undefined Spawn()
 */
void __fastcall CEnvLight::Spawn(int param_1)

{
  char acStack_40 [64];
  
  FUN_10076540((float *)(*(int *)(param_1 + 4) + 0x50));
  sprintf(acStack_40,&DAT_1009f8c8);
  (*g_engfuncs.pfnCVarSetString)(s_sv_skyvec_x_1009f8bc,acStack_40);
  sprintf(acStack_40,&DAT_1009f8c8);
  (*g_engfuncs.pfnCVarSetString)(s_sv_skyvec_y_1009f8b0,acStack_40);
  sprintf(acStack_40,&DAT_1009f8c8);
  (*g_engfuncs.pfnCVarSetString)(s_sv_skyvec_z_1009f8a4,acStack_40);
  CLight::Spawn(param_1);
  return;
}

