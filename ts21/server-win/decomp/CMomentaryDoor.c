/* mp.dll - CMomentaryDoor (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100157d0  CMomentaryDoor::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CMomentaryDoor::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CMomentaryDoor_100929a8,(int)param_1,0x100925e8,1);
  return;
}

/* 10015800  CMomentaryDoor::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CMomentaryDoor::Restore(CBaseToggle *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CMomentaryDoor_100929a8,(int)param_1,0x100925e8,1)
  ;
  return;
}

/* 10015830  CMomentaryDoor::Spawn  (412 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CMomentaryDoor::Spawn(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  
  SetMovedir(param_1[1]);
  *(undefined4 *)(param_1[1] + 0x10c) = 4;
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  FUN_100679a0();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  if (*(float *)(param_1[1] + 0x1f8) == 0.0) {
    *(undefined4 *)(param_1[1] + 0x1f8) = 0x42c80000;
  }
  if (*(float *)(param_1[1] + 0x1e0) == 0.0) {
    *(undefined4 *)(param_1[1] + 0x1e0) = 0x40000000;
  }
  iVar4 = param_1[1];
  pfVar1 = (float *)(param_1 + 0x23);
  *pfVar1 = *(float *)(iVar4 + 8);
  param_1[0x24] = *(int *)(iVar4 + 0xc);
  param_1[0x25] = *(int *)(iVar4 + 0x10);
  fVar5 = (ABS((*(float *)(iVar4 + 0xf4) - 2.0) * *(float *)(iVar4 + 0x44)) +
          ABS((*(float *)(iVar4 + 0xf8) - 2.0) * *(float *)(iVar4 + 0x48)) +
          ABS((*(float *)(iVar4 + 0xfc) - 2.0) * *(float *)(iVar4 + 0x4c))) - (float)param_1[0x20];
  fVar2 = *(float *)(iVar4 + 0x48);
  fVar3 = *(float *)(iVar4 + 0x4c);
  param_1[0x26] = (int)(fVar5 * *(float *)(iVar4 + 0x44) + *pfVar1);
  param_1[0x27] = (int)(fVar5 * fVar2 + (float)param_1[0x24]);
  param_1[0x28] = (int)(fVar5 * fVar3 + (float)param_1[0x25]);
  if ((*(byte *)(iVar4 + 0x1a0) & 1) != 0) {
    FUN_100679a0();
    param_1[0x26] = (int)*pfVar1;
    iVar4 = param_1[1];
    param_1[0x27] = param_1[0x24];
    param_1[0x28] = param_1[0x25];
    *pfVar1 = *(float *)(iVar4 + 8);
    param_1[0x24] = *(int *)(iVar4 + 0xc);
    param_1[0x25] = *(int *)(iVar4 + 0x10);
  }
  param_1[5] = 0;
                    /* WARNING: Could not recover jumptable at 0x100159c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

/* 100159d0  CMomentaryDoor::Precache  (257 bytes)
 * undefined Precache(int param_1)
 */
void __fastcall CMomentaryDoor::Precache(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  switch(*(undefined1 *)(param_1 + 0xf0)) {
  case 0:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_common_null_wav_10090f10);
    *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
    return;
  case 1:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove1_wav_10092974);
    pcVar2 = s_doors_doormove1_wav_10092974;
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove2_wav_10092960);
    pcVar2 = s_doors_doormove2_wav_10092960;
    goto LAB_10015aa4;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove3_wav_1009294c);
    pcVar2 = s_doors_doormove3_wav_1009294c;
    break;
  case 4:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove4_wav_10092938);
    pcVar2 = s_doors_doormove4_wav_10092938;
    goto LAB_10015aa4;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove5_wav_10092924);
    pcVar2 = s_doors_doormove5_wav_10092924;
    break;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove6_wav_10092910);
    pcVar2 = s_doors_doormove6_wav_10092910;
    goto LAB_10015aa4;
  case 7:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove7_wav_100928fc);
    pcVar2 = s_doors_doormove7_wav_100928fc;
    break;
  case 8:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove8_wav_100928e8);
    pcVar2 = s_doors_doormove8_wav_100928e8;
LAB_10015aa4:
    iVar1 = (*g_engfuncs.pfnAllocString)(pcVar2);
    *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
    return;
  default:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_common_null_wav_10090f10);
    *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
    return;
  }
  iVar1 = (*g_engfuncs.pfnAllocString)(pcVar2);
  *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
  return;
}

/* 10015b00  CMomentaryDoor::KeyValue  (147 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CMomentaryDoor::KeyValue(CMomentaryDoor *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  longlong lVar7;
  
  pcVar4 = *(char **)(param_1 + 4);
  puVar1 = &DAT_00000008;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_movesnd_10092668;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    lVar7 = __ftol();
    this->field_0xf0 = (char)lVar7;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar2 = 8;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_stopsnd_10092660;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar2 = 0xc;
  bVar6 = true;
  pcVar3 = s_healthvalue_10092654;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *pcVar4 == *pcVar3;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar6);
  if (bVar6) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
  return;
}

/* 10015ba0  CMomentaryDoor::Use  (341 bytes)
 * undefined Use()
 */
void __thiscall
CMomentaryDoor::Use(CBaseToggle *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                   float param_5)

{
  void *this;
  float fVar1;
  float fVar2;
  float in_stack_ffffffd0;
  float in_stack_ffffffd4;
  float in_stack_ffffffd8;
  float fVar3;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (param_4 == 2) {
    if (1.0 < param_5) {
      param_5 = 1.0;
    }
    this = *(void **)(param_1 + 4);
    fStack_c = (*(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x8c)) * param_5;
    fStack_18 = fStack_c + *(float *)(param_1 + 0x8c);
    fStack_14 = (*(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x90)) * param_5 +
                *(float *)(param_1 + 0x90);
    fStack_10 = (*(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x94)) * param_5 +
                *(float *)(param_1 + 0x94);
    fVar3 = fStack_18 - *(float *)((int)this + 8);
    fVar2 = fStack_14 - *(float *)((int)this + 0xc);
    fVar1 = fStack_10 - *(float *)((int)this + 0x10);
    fVar3 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * 10.0;
    if (fVar3 != 0.0) {
      if ((*(float *)((int)this + 0x104) < *(float *)((int)this + 0x100)) ||
         (*(float *)((int)this + 0x104) == 0.0)) {
        in_stack_ffffffd8 = 0.0;
        in_stack_ffffffd4 = 0.8;
        in_stack_ffffffd0 = 1.0;
        EMIT_SOUND_DYN(this,*(undefined4 *)((int)this + 0x208),6,
                       gpGlobals->pStringBase + *(int *)((int)this + 0x1ec),0x3f800000,0x3f4ccccd,0,
                       100);
      }
      FUN_1000a540(&stack0xffffffd0,&fStack_18);
      CBaseToggle::LinearMove(param_1,in_stack_ffffffd0,in_stack_ffffffd4,in_stack_ffffffd8,fVar3);
    }
  }
  return;
}

/* 10015e00  CMomentaryDoor::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CMomentaryDoor::ObjectCaps(void)

{
  return 0;
}

