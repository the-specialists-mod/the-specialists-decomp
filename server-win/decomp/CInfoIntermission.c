/* mp.dll - CInfoIntermission (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10035f00  CInfoIntermission::Spawn  (100 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CInfoIntermission::Spawn(int param_1)

{
  int iVar1;
  
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x74) = DAT_100ae498;
  *(undefined4 *)(iVar1 + 0x78) = DAT_100ae49c;
  *(undefined4 *)(iVar1 + 0x7c) = DAT_100ae4a0;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 2.0;
  return;
}

/* 10035f70  CInfoIntermission::Think  (290 bytes)
 * undefined Think()
 */
void __fastcall CInfoIntermission::Think(int param_1)

{
  float fVar1;
  edict_t *pEdict;
  int iVar2;
  undefined4 *puVar3;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  float fStack_8;
  float fStack_4;
  
  pEdict = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,s_targetname_1009c68c,
                      gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1c8));
  if (pEdict != (edict_t *)0x0) {
    iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 4);
      fStack_18 = (pEdict->v).origin[0] - *(float *)(iVar2 + 8);
      fStack_14 = (pEdict->v).origin[1] - *(float *)(iVar2 + 0xc);
      fStack_10 = (pEdict->v).origin[2] - *(float *)(iVar2 + 0x10);
      fVar1 = SQRT(fStack_18 * fStack_18 + fStack_14 * fStack_14 + fStack_10 * fStack_10);
      if (fVar1 == 0.0) {
        fStack_18 = 0.0;
        fStack_14 = 0.0;
        fStack_10 = 1.0;
      }
      else {
        fVar1 = 1.0 / fVar1;
        fStack_18 = fStack_18 * fVar1;
        fStack_14 = fStack_14 * fVar1;
        fStack_10 = fStack_10 * fVar1;
        fStack_8 = fStack_14;
        fStack_4 = fStack_10;
      }
      puVar3 = (undefined4 *)UTIL_VecToAngles(&uStack_c,&fStack_18);
      iVar2 = *(int *)(param_1 + 4);
      *(undefined4 *)(iVar2 + 0x74) = *puVar3;
      *(undefined4 *)(iVar2 + 0x78) = puVar3[1];
      *(undefined4 *)(iVar2 + 0x7c) = puVar3[2];
      *(float *)(*(int *)(param_1 + 4) + 0x74) = -*(float *)(*(int *)(param_1 + 4) + 0x74);
    }
  }
  return;
}

