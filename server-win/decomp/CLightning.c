/* mp.dll - CLightning (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100195e0  CLightning::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CLightning::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CLightning_1009de5c,(int)param_1,0x1009dae0,0xd);
  return;
}

/* 10019610  CLightning::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CLightning::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CLightning_1009de5c,(int)param_1,&DAT_1009dae0,0xd);
  return;
}

/* 10019640  CLightning::Spawn  (275 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CLightning::Spawn(int *param_1)

{
  int iVar1;
  
  if (param_1[0x1f] == 0) {
    param_1[4] = (int)CBaseEntity::SUB_Remove;
    return;
  }
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  (**(code **)(*param_1 + 0x20))();
  *(float *)(param_1[1] + 0x1e4) = gpGlobals->time;
  if (((float)param_1[0x18] == 0.0) && (iVar1 = param_1[1], (*(byte *)(iVar1 + 0x1a0) & 8) == 0)) {
    param_1[4] = 0;
    if (0.0 < *(float *)(iVar1 + 0x1e0)) {
      param_1[4] = (int)DamageThink;
      *(float *)(iVar1 + 0x104) = gpGlobals->time + 0.1;
    }
    iVar1 = param_1[1];
    if (*(int *)(iVar1 + 0x1cc) != 0) {
      if ((*(byte *)(iVar1 + 0x1a0) & 1) == 0) {
        *(undefined4 *)(iVar1 + 0x118) = 0x80;
        param_1[0x15] = 0;
        *(undefined4 *)(param_1[1] + 0x104) = 0;
        param_1[6] = (int)ToggleUse;
        return;
      }
      param_1[0x15] = 1;
      param_1[6] = (int)ToggleUse;
      return;
    }
  }
  else {
    iVar1 = param_1[1];
    param_1[0x15] = 0;
    if ((*(int *)(iVar1 + 0x1cc) == 0) ||
       ((param_1[6] = (int)StrikeUse, *(int *)(iVar1 + 0x1cc) == 0 ||
        ((*(byte *)(iVar1 + 0x1a0) & 1) != 0)))) {
      param_1[4] = (int)StrikeThink;
      *(float *)(iVar1 + 0x104) = gpGlobals->time + 1.0;
    }
  }
  return;
}

/* 10019760  CLightning::Precache  (39 bytes)
 * undefined Precache()
 */
void __fastcall CLightning::Precache(void *param_1)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + *(int *)((int)param_1 + 0x7c));
  *(int *)((int)param_1 + 0x78) = iVar1;
  CBeam::Precache(param_1);
  return;
}

/* 10019790  CLightning::Activate  (560 bytes)
 * undefined Activate()
 */
void __fastcall CLightning::Activate(void *param_1)

{
  edict_t *pEdict;
  edict_t *peVar1;
  edict_t *peVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  
  if ((*(float *)((int)param_1 + 0x60) != 0.0) ||
     ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 8) != 0)) {
    return;
  }
  pEdict = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,s_targetname_1009c68c,
                      gpGlobals->pStringBase + *(int *)((int)param_1 + 0x58));
  peVar1 = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,s_targetname_1009c68c,
                      gpGlobals->pStringBase + *(int *)((int)param_1 + 0x5c));
  peVar2 = pEdict;
  if (pEdict == (edict_t *)0x0) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar2 != (edict_t *)0x0) goto LAB_1001aa5b;
    pvVar4 = (void *)0x0;
  }
  else {
LAB_1001aa5b:
    pvVar4 = peVar2->pvPrivateData;
  }
  iVar3 = FUN_10019c80((int)pvVar4);
  peVar2 = peVar1;
  if (peVar1 == (edict_t *)0x0) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar2 != (edict_t *)0x0) goto LAB_1001aa82;
    pvVar4 = (void *)0x0;
  }
  else {
LAB_1001aa82:
    pvVar4 = peVar2->pvPrivateData;
  }
  iVar5 = FUN_10019c80((int)pvVar4);
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x110) = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x128) = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x148) = 0;
  *(uint *)(*(int *)((int)param_1 + 4) + 0x1a4) =
       *(uint *)(*(int *)((int)param_1 + 4) + 0x1a4) | 0x20000000;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0xb8) = *(undefined4 *)((int)param_1 + 0x7c);
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0xb4) = *(undefined4 *)((int)param_1 + 0x78);
  uVar6 = 2;
  peVar2 = peVar1;
  if (iVar3 == 0) {
    if (iVar5 != 0) {
      uVar6 = 1;
      peVar2 = pEdict;
      pEdict = peVar1;
    }
  }
  else if (iVar5 == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  *(uint *)(*(int *)((int)param_1 + 4) + 0x148) =
       *(uint *)(*(int *)((int)param_1 + 4) + 0x148) & 0xf0 | uVar6;
  if (((uVar6 == 0) || (uVar6 == 1)) || (uVar6 == 3)) {
    iVar3 = *(int *)((int)param_1 + 4);
    *(vec_t *)(iVar3 + 8) = (pEdict->v).origin[0];
    *(vec_t *)(iVar3 + 0xc) = (pEdict->v).origin[1];
    *(vec_t *)(iVar3 + 0x10) = (pEdict->v).origin[2];
    if ((uVar6 == 0) || (uVar6 == 3)) {
      iVar3 = *(int *)((int)param_1 + 4);
      *(vec_t *)(iVar3 + 0x50) = (peVar2->v).origin[0];
      *(vec_t *)(iVar3 + 0x54) = (peVar2->v).origin[1];
      *(vec_t *)(iVar3 + 0x58) = (peVar2->v).origin[2];
      goto LAB_1001ab96;
    }
  }
  else {
    uVar6 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
    FUN_10019080(param_1,uVar6);
  }
  uVar6 = (*g_engfuncs.pfnIndexOfEdict)(peVar2);
  FUN_100190d0(param_1,uVar6);
LAB_1001ab96:
  CBeam::RelinkBeam((int)param_1);
  *(float *)(*(int *)((int)param_1 + 4) + 0x144) = (float)*(int *)((int)param_1 + 100);
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x114) = *(undefined4 *)((int)param_1 + 0x68);
  *(float *)(*(int *)((int)param_1 + 4) + 0x130) = (float)*(int *)((int)param_1 + 0x80);
  *(float *)(*(int *)((int)param_1 + 4) + 0x134) = (float)*(int *)((int)param_1 + 0x70);
  iVar3 = *(int *)((int)param_1 + 4);
  if ((*(uint *)(iVar3 + 0x1a0) & 0x80) != 0) {
    *(uint *)(iVar3 + 0x148) = *(uint *)(iVar3 + 0x148) & 0xf | 0x40;
    return;
  }
  if ((*(uint *)(iVar3 + 0x1a0) & 0x100) != 0) {
    *(uint *)(iVar3 + 0x148) = (uint)((byte)*(undefined4 *)(iVar3 + 0x148) & 0xf | 0x80);
  }
  return;
}

/* 100197c0  CLightning::KeyValue  (933 bytes)
 * undefined KeyValue()
 */
void __thiscall CLightning::KeyValue(undefined *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined *this;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  float10 fVar10;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar7 = s_LightningStart_1009dedc;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100197f8:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100197fd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100197f8;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100197fd:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x58) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_LightningEnd_1009decc;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001984a:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1001984f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001984a;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001984f:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x5c) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pbVar8 = &DAT_1009dec4;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_1001989c:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100198a1;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_1001989c;
    pbVar2 = pbVar2 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100198a1:
  if (iVar3 == 0) {
    fVar10 = atof(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x60) = (float)fVar10;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_BoltWidth_1009deb8;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100198ed:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100198f2;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100198ed;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100198f2:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_NoiseAmplitude_1009dea8;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001993e:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10019943;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001993e;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10019943:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x68) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_TextureScroll_1009de98;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001998f:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10019994;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001998f;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10019994:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x70) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_StrikeTime_1009de8c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100199e0:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100199e5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100199e0;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100199e5:
  if (iVar3 == 0) {
    fVar10 = atof(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x74) = (float)fVar10;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_texture_1009de84;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10019a31:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10019a36;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10019a31;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10019a36:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x7c) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_framestart_1009de78;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10019a83:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10019a88;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10019a83;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10019a88:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x80) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_Radius_1009de70;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10019ad7:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10019adc;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10019ad7;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10019adc:
  if (iVar3 == 0) {
    fVar10 = atof(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x84) = (float)fVar10;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_damage_1009de68;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10019b2b:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10019b30;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10019b2b;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10019b30:
  if (iVar3 == 0) {
    fVar10 = atof(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x1e0) = (float)fVar10;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 10019b70  CLightning::ToggleUse  (174 bytes)
 * void ToggleUse(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CLightning::ToggleUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CLightning::ToggleUse
          (CLightning *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4
          )

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
                    /* 0x19b70  121  ?ToggleUse@CLightning@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar1 = CBaseEntity::ShouldToggle(param_3,*(int *)&this->field_0x54);
  if (iVar1 != 0) {
    if (*(int *)&this->field_0x54 != 0) {
      *(undefined4 *)&this->field_0x54 = 0;
      this->pev->effects = this->pev->effects | 0x80;
      this->pev->nextthink = 0.0;
      return;
    }
    *(undefined4 *)&this->field_0x54 = 1;
    this->pev->effects = this->pev->effects & 0xffffff7f;
    puVar2 = (undefined4 *)FUN_10019160((int)this);
    puVar3 = (undefined4 *)FUN_10019120((int)this);
    FUN_10019590(this,puVar3,puVar2);
    if (0.0 < this->pev->dmg) {
      this->pev->nextthink = gpGlobals->time;
      this->pev->dmgtime = gpGlobals->time;
    }
  }
  return;
}

/* 10019c20  CLightning::StrikeUse  (89 bytes)
 * void StrikeUse(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CLightning::StrikeUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CLightning::StrikeUse
          (CLightning *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4
          )

{
  int iVar1;
  
                    /* 0x19c20  115  ?StrikeUse@CLightning@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar1 = CBaseEntity::ShouldToggle(param_3,*(int *)&this->field_0x54);
  if (iVar1 != 0) {
    if (*(int *)&this->field_0x54 == 0) {
      *(code **)&this->field_0x10 = StrikeThink;
      this->pev->nextthink = gpGlobals->time + 0.1;
    }
    else {
      *(undefined4 *)&this->field_0x54 = 0;
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if ((this->pev->spawnflags & 2) == 0) {
      *(undefined4 *)&this->field_0x18 = 0;
    }
  }
  return;
}

/* 10019d60  CLightning::StrikeThink  (962 bytes)
 * void StrikeThink(void)
 */
/* public: void __thiscall CLightning::StrikeThink(void) */

void __thiscall CLightning::StrikeThink(CLightning *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 extraout_ST0;
  longlong lVar5;
  undefined4 uStack00000004;
  
                    /* 0x19d60  114  ?StrikeThink@CLightning@@QAEXXZ */
  if (*(float *)&this->field_0x60 != 0.0) {
    if ((this->pev->spawnflags & 4) == 0) {
      this->pev->nextthink =
           *(float *)&this->field_0x74 + *(float *)&this->field_0x60 + gpGlobals->time;
    }
    else {
      (*g_engfuncs.pfnRandomFloat)(0.0,*(float *)&this->field_0x74);
      this->pev->nextthink =
           (float)(extraout_ST0 + (float10)*(float *)&this->field_0x60 + (float10)gpGlobals->time);
    }
  }
  *(undefined4 *)&this->field_0x54 = 1;
  if (*(int *)&this->field_0x5c == 0) {
    if (*(int *)&this->field_0x58 == 0) {
      FUN_1001a3c0(this);
      return;
    }
    iVar1 = FUN_10019530(gpGlobals->pStringBase + *(int *)&this->field_0x58);
    if (iVar1 == 0) {
      (*g_engfuncs.pfnAlertMessage)
                (at_console,s_env_beam__unknown_entity___s__1009df14,
                 gpGlobals->pStringBase + *(int *)&this->field_0x58);
      return;
    }
    FUN_1001a810(this,(float *)(*(int *)(iVar1 + 4) + 8));
    return;
  }
  iVar2 = FUN_10019530(gpGlobals->pStringBase + *(int *)&this->field_0x58);
  iVar1 = FUN_10019530(gpGlobals->pStringBase + *(int *)&this->field_0x5c);
  if (iVar2 == 0) {
    return;
  }
  if (iVar1 != 0) {
    iVar3 = FUN_10019c80(iVar2);
    if (((iVar3 != 0) || (iVar3 = FUN_10019c80(iVar1), iVar3 != 0)) &&
       ((this->pev->spawnflags & 8) != 0)) {
      return;
    }
    (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
    iVar4 = FUN_10019c80(iVar2);
    iVar3 = iVar2;
    if ((iVar4 == 0) && (iVar4 = FUN_10019c80(iVar1), iVar4 == 0)) {
      if ((this->pev->spawnflags & 8) == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = 0x18;
      }
      (*g_engfuncs.pfnWriteByte)(iVar4);
      iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(iVar2 + 4) + 0x208));
      (*g_engfuncs.pfnWriteShort)(iVar2);
      iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(iVar1 + 4) + 0x208));
      (*g_engfuncs.pfnWriteShort)(iVar2);
    }
    else {
      iVar4 = FUN_10019c80(iVar1);
      if (iVar4 == 0) {
        iVar3 = iVar1;
        iVar1 = iVar2;
      }
      iVar2 = FUN_10019c80(iVar3);
      if (iVar2 == 0) {
        (*g_engfuncs.pfnWriteByte)(1);
        iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(iVar3 + 4) + 0x208));
        (*g_engfuncs.pfnWriteShort)(iVar2);
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar1 + 4) + 8));
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar1 + 4) + 0xc));
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar1 + 4) + 0x10));
      }
      else {
        (*g_engfuncs.pfnWriteByte)(0);
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar3 + 4) + 8));
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar3 + 4) + 0xc));
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar3 + 4) + 0x10));
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar1 + 4) + 8));
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar1 + 4) + 0xc));
        (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(iVar1 + 4) + 0x10));
      }
    }
    (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0x78);
    (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x80);
    lVar5 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar5);
    lVar5 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar5);
    (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x64);
    (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x68);
    lVar5 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar5);
    lVar5 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar5);
    lVar5 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar5);
    lVar5 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar5);
    (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x70);
    (*g_engfuncs.pfnMessageEnd)();
    FUN_10019590(this,(undefined4 *)(*(int *)(iVar3 + 4) + 8),
                 (undefined4 *)(*(int *)(iVar1 + 4) + 8));
    if (0.0 < this->pev->dmg) {
      uStack00000004 = 0x1001a0e7;
      UTIL_TraceLine(*(int *)(iVar3 + 4) + 8,*(int *)(iVar1 + 4) + 8,0,0,&stack0x00000028);
      this->pev->dmg = this->pev->dmg;
      this->pev->dmgtime = gpGlobals->time - 1.0;
      FUN_1001a130(this,(int)&stack0x00000028);
    }
    return;
  }
  return;
}

/* 1001a240  CLightning::DamageThink  (78 bytes)
 * void DamageThink(void)
 */
/* public: void __thiscall CLightning::DamageThink(void) */

void __thiscall CLightning::DamageThink(CLightning *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_38 [56];
  
                    /* 0x1a240  28  ?DamageThink@CLightning@@QAEXXZ */
  puVar5 = local_38;
  uVar4 = 0;
  iVar3 = 0;
  this->pev->nextthink = gpGlobals->time + 0.1;
  iVar1 = FUN_10019160((int)this);
  iVar2 = FUN_10019120((int)this);
  UTIL_TraceLine(iVar2,iVar1,iVar3,uVar4,puVar5);
  FUN_1001a130(this,(int)local_38);
  return;
}

