/* mp.dll - CBaseDoor (17 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100159c0  CBaseDoor::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CBaseDoor::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CBaseDoor_1009d708,(int)param_1,0x1009d660,7);
  return;
}

/* 100159f0  CBaseDoor::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CBaseDoor::Restore(CBaseToggle *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CBaseDoor_1009d708,(int)param_1,&DAT_1009d660,7);
  return;
}

/* 10015c40  CBaseDoor::KeyValue  (1153 bytes)
 * undefined KeyValue()
 */
void __thiscall CBaseDoor::KeyValue(CBaseToggle *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  CBaseToggle *this;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  longlong lVar10;
  undefined3 uVar5;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pbVar6 = &DAT_1009bf68;
  pbVar2 = pbVar4;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_10015c78:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10015c7d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_10015c78;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10015c7d:
  if (iVar3 == 0) {
    atof(this,*(byte_conflict **)(param_2 + 8));
    lVar10 = __ftol();
    *(int *)(*(int *)(param_1 + 4) + 0x110) = (int)lVar10;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_movesnd_1009d75c;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10015cd4:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10015cd9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10015cd4;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10015cd9:
  if (iVar3 == 0) {
    atof(this,*(byte_conflict **)(param_2 + 8));
    lVar10 = __ftol();
    param_1[0x12a] = SUB81(lVar10,0);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_stopsnd_1009d754;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10015d2d:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10015d32;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10015d2d;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10015d32:
  if (iVar3 == 0) {
    atof(this,*(byte_conflict **)(param_2 + 8));
    lVar10 = __ftol();
    param_1[299] = SUB81(lVar10,0);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_healthvalue_1009d748;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10015d86:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10015d8b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10015d86;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10015d8b:
  if (iVar3 == 0) {
    atof(this,*(byte_conflict **)(param_2 + 8));
    lVar10 = __ftol();
    param_1[0x129] = SUB81(lVar10,0);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_locked_sound_1009c4bc;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10015ddf:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10015de4;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10015ddf;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10015de4:
  if (iVar3 == 0) {
    atof(this,*(byte_conflict **)(param_2 + 8));
    lVar10 = __ftol();
    param_1[0x150] = SUB81(lVar10,0);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_locked_sentence_1009c4ac;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10015e38:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10015e3d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10015e38;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10015e3d:
  if (iVar3 == 0) {
    atof(this,*(byte_conflict **)(param_2 + 8));
    lVar10 = __ftol();
    param_1[0x151] = SUB81(lVar10,0);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_unlocked_sound_1009c49c;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10015e91:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10015e96;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10015e91;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10015e96:
  if (iVar3 == 0) {
    atof(this,*(byte_conflict **)(param_2 + 8));
    lVar10 = __ftol();
    param_1[0x152] = SUB81(lVar10,0);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_unlocked_sentence_1009c488;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10015eea:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10015eef;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10015eea;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10015eef:
  if (iVar3 == 0) {
    atof(this,*(byte_conflict **)(param_2 + 8));
    lVar10 = __ftol();
    param_1[0x153] = SUB81(lVar10,0);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_WaveHeight_1009d73c;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10015f43:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10015f48;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10015f43;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10015f48:
  if (iVar3 == 0) {
    fVar9 = atof(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x144) = (float)(fVar9 * (float10)0.125);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_maxdamage_1009d730;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10015fa0:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10015fa5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10015fa0;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10015fa5:
  if (iVar3 == 0) {
    iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x104) = (float)iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_doormaterial_1009d720;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10015ffc:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10016001;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10015ffc;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10016001:
  if (iVar3 == 0) {
    iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
    if ((-1 < iVar3) && (iVar3 < 10)) {
      *(int *)(param_1 + 0x108) = iVar3;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x108) = 1;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_respawntime_1009d714;
  do {
    bVar1 = *pbVar4;
    uVar5 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001606a:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001606f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    this = (CBaseToggle *)CONCAT31(uVar5,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001606a;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001606f:
  if (iVar3 == 0) {
    iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0xf8) = (float)iVar3;
    if ((float)iVar3 < 0.0) {
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  CBaseToggle::KeyValue(param_1,param_2);
  return;
}

/* 100160e0  CBaseDoor::BreakableRespawn  (390 bytes)
 * undefined BreakableRespawn()
 */
void __thiscall CBaseDoor::BreakableRespawn(int *param_1,char param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  uint *puVar4;
  int iStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = param_1[1];
  if (((*(int *)(iVar3 + 0x170) == 2) || (*(int *)(iVar3 + 0x118) == 0x80)) || (param_2 != '\0')) {
    fStack_c = *(float *)(iVar3 + 0xc4);
    uStack_8 = *(undefined4 *)(iVar3 + 200);
    uStack_4 = *(undefined4 *)(iVar3 + 0xcc);
    fStack_18 = *(float *)(iVar3 + 0xd0);
    uStack_14 = *(undefined4 *)(iVar3 + 0xd4);
    uStack_10 = *(undefined4 *)(iVar3 + 0xd8);
    iVar3 = UTIL_EntitiesInBox(&iStack_1c,1,&fStack_c,&fStack_18,0x2008);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1[1] + 0x170) = 0;
      *(undefined4 *)(param_1[1] + 0x118) = 0;
      iVar3 = param_1[1];
      *(int *)(iVar3 + 8) = param_1[0x44];
      *(int *)(iVar3 + 0xc) = param_1[0x45];
      *(int *)(iVar3 + 0x10) = param_1[0x46];
      UTIL_SetOrigin(param_1[1],param_1[1] + 8);
      iVar3 = param_1[1];
      *(int *)(iVar3 + 0x50) = param_1[0x47];
      *(int *)(iVar3 + 0x54) = param_1[0x48];
      *(int *)(iVar3 + 0x58) = param_1[0x49];
      iVar3 = param_1[1];
      *(undefined4 *)(iVar3 + 0x5c) = DAT_100ae498;
      *(undefined4 *)(iVar3 + 0x60) = DAT_100ae49c;
      *(undefined4 *)(iVar3 + 100) = DAT_100ae4a0;
      iVar3 = param_1[1];
      *(undefined4 *)(iVar3 + 0x20) = DAT_100ae498;
      *(undefined4 *)(iVar3 + 0x24) = DAT_100ae49c;
      *(undefined4 *)(iVar3 + 0x28) = DAT_100ae4a0;
      param_1[5] = 0;
      param_1[4] = 0;
      (**(code **)(*param_1 + 0x1c))();
    }
    else {
      puVar4 = (uint *)(param_1 + 0x3c);
      bVar2 = FUN_1000e440(puVar4);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        fVar1 = gpGlobals->time;
        iVar3 = EHANDLE::operator->(puVar4);
        *(float *)(*(int *)(iVar3 + 4) + 0x104) = fVar1 + 5.0;
        iVar3 = EHANDLE::operator->(puVar4);
        *(code **)(iVar3 + 0x10) = CInfoBreakable::RespawnThink;
        return;
      }
    }
  }
  return;
}

/* 10016270  CBaseDoor::TraceAttack  (1899 bytes)
 * undefined TraceAttack()
 */
void __thiscall CBaseDoor::TraceAttack(int param_1,undefined4 param_2,float param_3,float param_4)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float flValue;
  float flValue_00;
  byte *pbVar5;
  int iVar6;
  undefined3 extraout_var;
  char *pcVar7;
  bool bVar8;
  float10 extraout_ST0;
  float unaff_retaddr;
  uint in_stack_0000001c;
  float in_stack_00000020;
  uint in_stack_00000024;
  float in_stack_00000028;
  float in_stack_00000030;
  uint in_stack_00000034;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (gpGlobals->time < *(float *)(param_1 + 0x100)) {
    return;
  }
  if ((float)(*(int **)(param_1 + 4))[0x5b] == 0.0) {
    return;
  }
  if ((in_stack_0000001c & 0x6000040) == 0) {
    return;
  }
  pcVar7 = s_func_water_1009d874;
  pbVar5 = (byte *)(gpGlobals->pStringBase + **(int **)(param_1 + 4));
  do {
    bVar4 = *pbVar5;
    bVar8 = bVar4 < (byte)*pcVar7;
    if (bVar4 != *pcVar7) {
LAB_100162f3:
      iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100162f8;
    }
    if (bVar4 == 0) break;
    bVar4 = pbVar5[1];
    bVar8 = bVar4 < (byte)pcVar7[1];
    if (bVar4 != pcVar7[1]) goto LAB_100162f3;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar4 != 0);
  iVar6 = 0;
LAB_100162f8:
  if (iVar6 == 0) {
    return;
  }
  if ((in_stack_0000001c & 0x40) == 0) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = 2.0;
  }
  fVar2 = fVar2 * param_3 + *(float *)(param_1 + 0xfc);
  *(float *)(param_1 + 0xfc) = fVar2;
  if (fVar2 < *(float *)(param_1 + 0x104)) {
    return;
  }
  if (((*(char *)(param_1 + 0x128) == '\0') &&
      (iVar6 = (*g_engfuncs.pfnRandomLong)(0,100),
      (int)((-(uint)((in_stack_00000024 & 0x2000000) != 0) & 0xffffffec) + 0x32) < iVar6)) &&
     (*(int *)(param_1 + 0x70) == 1)) {
    *(undefined1 *)(param_1 + 0x128) = 1;
    *(float *)(param_1 + 0x100) = gpGlobals->time + 0.1;
    return;
  }
  (*g_engfuncs.pfnRandomLong)(0,0x1d);
  (*g_engfuncs.pfnRandomFloat)(0.85,1.0);
  fStack_1c = (float)extraout_ST0;
  if ((float10)1.0 < extraout_ST0) {
    fStack_1c = 1.0;
  }
  switch(*(undefined4 *)(param_1 + 0x108)) {
  case 0:
    iVar6 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar6 == 0) {
      pcVar7 = s_debris_bustglass1_wav_1009d844;
    }
    else {
      if (iVar6 != 1) break;
      pcVar7 = s_debris_bustglass2_wav_1009d85c;
    }
    EMIT_SOUND_DYN(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),2,
                   pcVar7,fStack_14,0x3f4ccccd,0);
    break;
  case 1:
    iVar6 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar6 == 0) {
      pcVar7 = s_debris_bustcrate1_wav_1009d814;
    }
    else {
      if (iVar6 != 1) break;
      pcVar7 = s_debris_bustcrate2_wav_1009d82c;
    }
    EMIT_SOUND_DYN(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),2,
                   pcVar7,fStack_14,0x3f4ccccd,0);
    break;
  case 2:
  case 6:
    iVar6 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar6 == 0) {
      pcVar7 = s_debris_bustmetal1_wav_1009d7e4;
    }
    else {
      if (iVar6 != 1) break;
      pcVar7 = s_debris_bustmetal2_wav_1009d7fc;
    }
    EMIT_SOUND_DYN(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),2,
                   pcVar7,fStack_14,0x3f4ccccd,0);
    break;
  case 3:
    iVar6 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar6 == 0) {
      pcVar7 = s_debris_bustflesh1_wav_1009d7b4;
    }
    else {
      if (iVar6 != 1) break;
      pcVar7 = s_debris_bustflesh2_wav_1009d7cc;
    }
    EMIT_SOUND_DYN(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),2,
                   pcVar7,fStack_14,0x3f4ccccd,0);
    break;
  case 4:
  case 8:
    iVar6 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar6 == 0) {
      pcVar7 = s_debris_bustconcrete1_wav_1009d77c;
    }
    else {
      if (iVar6 != 1) break;
      pcVar7 = s_debris_bustconcrete2_wav_1009d798;
    }
    EMIT_SOUND_DYN(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),2,
                   pcVar7,fStack_14,0x3f4ccccd,0);
    break;
  case 5:
    EMIT_SOUND_DYN(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),2,
                   s_debris_bustceiling_wav_1009d764,fStack_1c,0x3f4ccccd,0);
  }
  iVar6 = *(int *)(param_1 + 4);
  fStack_18 = (*(float *)(iVar6 + 0xdc) + *(float *)(iVar6 + 0xe8)) * 0.5 + *(float *)(iVar6 + 8);
  fStack_14 = (*(float *)(iVar6 + 0xec) + *(float *)(iVar6 + 0xe0)) * 0.5 + *(float *)(iVar6 + 0xc);
  fStack_10 = (*(float *)(iVar6 + 0xf0) + *(float *)(iVar6 + 0xe4)) * 0.5 + *(float *)(iVar6 + 0x10)
  ;
  fVar2 = fStack_18 - *(float *)(in_stack_0000001c + 8);
  fStack_8 = fStack_14 - *(float *)(in_stack_0000001c + 0xc);
  fStack_4 = fStack_10 - *(float *)(in_stack_0000001c + 0x10);
  fVar3 = SQRT(fVar2 * fVar2 + fStack_8 * fStack_8 + fStack_4 * fStack_4);
  if (fVar3 == 0.0) {
    fVar2 = 0.0;
    fStack_8 = 0.0;
    fStack_4 = 1.0;
  }
  else {
    fVar3 = 1.0 / fVar3;
    fVar2 = fVar3 * fVar2;
    fStack_8 = fStack_8 * fVar3;
    fStack_4 = fStack_4 * fVar3;
  }
  fVar3 = fStack_8 * in_stack_00000020;
  flValue = fStack_4 * in_stack_00000020;
  flValue_00 = (float)(byte)((-((in_stack_00000034 & 0x2000000) != 0) & 7U) + 1);
  fStack_c = (fVar2 * in_stack_00000020 + fVar2 * in_stack_00000020) * flValue_00;
  fStack_8 = (fVar3 + fVar3) * flValue_00;
  fStack_4 = (flValue + flValue) * flValue_00;
  if (*(int *)(param_1 + 0x108) == 0) {
    (*g_engfuncs.pfnMessageBegin)(4,DAT_100d97a8,&fStack_18,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteCoord)(fStack_8);
    (*g_engfuncs.pfnWriteCoord)(unaff_retaddr);
    (*g_engfuncs.pfnWriteCoord)(flValue);
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(param_1 + 4) + 0xf4));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(param_1 + 4) + 0xf8));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(param_1 + 4) + 0xfc));
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnWriteCoord)(0.0);
    (*g_engfuncs.pfnWriteCoord)(0.0);
    (*g_engfuncs.pfnWriteCoord)(0.0);
    (*g_engfuncs.pfnWriteCoord)(0.0);
    (*g_engfuncs.pfnWriteCoord)(0.0);
    (*g_engfuncs.pfnWriteCoord)(0.0);
    (*g_engfuncs.pfnWriteLong)(0);
    (*g_engfuncs.pfnWriteCoord)(0.0);
  }
  else {
    (*g_engfuncs.pfnMessageBegin)(4,0x17,&fStack_18,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0x6c);
    (*g_engfuncs.pfnWriteCoord)(fStack_4);
    (*g_engfuncs.pfnWriteCoord)(fVar3);
    (*g_engfuncs.pfnWriteCoord)(param_4);
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(param_1 + 4) + 0xf4));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(param_1 + 4) + 0xf8));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(param_1 + 4) + 0xfc));
    (*g_engfuncs.pfnWriteCoord)(flValue_00);
    (*g_engfuncs.pfnWriteCoord)(in_stack_00000028);
    (*g_engfuncs.pfnWriteCoord)(in_stack_00000030);
    (*g_engfuncs.pfnWriteByte)(10);
    (*g_engfuncs.pfnWriteShort)(*(int *)(param_1 + 0x10c));
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnWriteByte)(0x19);
    (*g_engfuncs.pfnWriteByte)((int)in_stack_00000028._3_1_);
  }
  (*g_engfuncs.pfnMessageEnd)();
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x16c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x170) = 2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0.0 <= *(float *)(param_1 + 0xf8)) {
    puVar1 = (uint *)(param_1 + 0xf0);
    bVar8 = FUN_1000e440(puVar1);
    if (CONCAT31(extraout_var,bVar8) != 0) {
      if (*(float *)(param_1 + 0xf8) == 0.0) {
        fVar2 = 30.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0xf8);
      }
      fVar3 = gpGlobals->time;
      iVar6 = EHANDLE::operator->(puVar1);
      *(float *)(*(int *)(iVar6 + 4) + 0x104) = fVar2 + fVar3;
      iVar6 = EHANDLE::operator->(puVar1);
      *(code **)(iVar6 + 0x10) = CInfoBreakable::RespawnThink;
    }
  }
  return;
}

/* 10016a00  CBaseDoor::Spawn  (724 bytes)
 * undefined Spawn()
 */
void __fastcall CBaseDoor::Spawn(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  EHANDLE *this;
  int iVar3;
  float fVar4;
  bool bVar5;
  undefined3 extraout_var;
  undefined4 *puVar6;
  int iVar7;
  undefined3 extraout_var_00;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar7 = param_1[1];
  param_1[0x44] = *(int *)(iVar7 + 8);
  param_1[0x45] = *(int *)(iVar7 + 0xc);
  param_1[0x46] = *(int *)(iVar7 + 0x10);
  param_1[0x47] = *(int *)(iVar7 + 0x50);
  param_1[0x48] = *(int *)(iVar7 + 0x54);
  iVar3 = *(int *)(iVar7 + 0x58);
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x49] = iVar3;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  if ((float)param_1[0x41] <= 0.0) {
    *(undefined4 *)(iVar7 + 0x16c) = 0;
  }
  else {
    *(undefined4 *)(iVar7 + 0x16c) = 0x3f800000;
  }
  (**(code **)(*param_1 + 0x20))();
  SetMovedir(param_1[1]);
  iVar7 = param_1[1];
  if (*(int *)(iVar7 + 0x110) == 0) {
    if ((*(byte *)(iVar7 + 0x1a0) & 8) == 0) {
      *(undefined4 *)(iVar7 + 0x10c) = 4;
    }
    else {
      *(undefined4 *)(iVar7 + 0x10c) = 0;
    }
  }
  else {
    *(undefined4 *)(iVar7 + 0x10c) = 0;
    *(uint *)(param_1[1] + 0x1a0) = *(uint *)(param_1[1] + 0x1a0) | 0x80000000;
  }
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  UTIL_SetOrigin(param_1[1],param_1[1] + 8);
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  if (*(float *)(param_1[1] + 0x1f8) == 0.0) {
    *(undefined4 *)(param_1[1] + 0x1f8) = 0x42c80000;
  }
  iVar7 = param_1[1];
  pfVar1 = (float *)(param_1 + 0x23);
  pfVar2 = (float *)(param_1 + 0x26);
  *pfVar1 = *(float *)(iVar7 + 8);
  param_1[0x24] = *(int *)(iVar7 + 0xc);
  param_1[0x25] = *(int *)(iVar7 + 0x10);
  fVar4 = (ABS((*(float *)(iVar7 + 0xf4) - 2.0) * *(float *)(iVar7 + 0x44)) +
          ABS((*(float *)(iVar7 + 0xf8) - 2.0) * *(float *)(iVar7 + 0x48)) +
          ABS((*(float *)(iVar7 + 0xfc) - 2.0) * *(float *)(iVar7 + 0x4c))) - (float)param_1[0x20];
  fStack_8 = fVar4 * *(float *)(iVar7 + 0x48) + (float)param_1[0x24];
  fStack_4 = fVar4 * *(float *)(iVar7 + 0x4c) + (float)param_1[0x25];
  *pfVar2 = fVar4 * *(float *)(iVar7 + 0x44) + *pfVar1;
  param_1[0x27] = (int)fStack_8;
  param_1[0x28] = (int)fStack_4;
  if ((*(byte *)(iVar7 + 0x1a0) & 1) != 0) {
    UTIL_SetOrigin(iVar7,pfVar2);
    *pfVar2 = *pfVar1;
    iVar7 = param_1[1];
    param_1[0x27] = param_1[0x24];
    param_1[0x28] = param_1[0x25];
    *pfVar1 = *(float *)(iVar7 + 8);
    param_1[0x24] = *(int *)(iVar7 + 0xc);
    param_1[0x25] = *(int *)(iVar7 + 0x10);
  }
  param_1[0x1c] = 1;
  if ((*(uint *)(iVar7 + 0x1a0) & 0x100) == 0) {
    param_1[5] = (int)DoorTouch;
  }
  else {
    param_1[5] = 0;
  }
  if (0.0 <= (float)param_1[0x3e]) {
    this = (EHANDLE *)(param_1 + 0x3c);
    bVar5 = FUN_1000e440((uint *)this);
    if (CONCAT31(extraout_var,bVar5) == 0) {
      iVar7 = param_1[1];
      uVar10 = *(undefined4 *)(iVar7 + 0x208);
      puVar9 = (undefined4 *)(iVar7 + 0x50);
      puVar6 = (undefined4 *)VecBModelOrigin(&fStack_c,iVar7);
      iVar7 = CBaseEntity::Create(0x100a36bc,puVar6,puVar9,uVar10);
      EHANDLE::operator=(this,iVar7);
    }
    bVar5 = FUN_1000e440((uint *)this);
    if (CONCAT31(extraout_var_00,bVar5) != 0) {
      uVar8 = EHANDLE::Get((uint *)this);
      if (uVar8 != 0) {
        EHANDLE::operator=((EHANDLE *)(*(int *)(uVar8 + 0x7c) + 0x54),(int)param_1);
        return;
      }
      EHANDLE::operator=((EHANDLE *)0x54,(int)param_1);
    }
  }
  return;
}

/* 10016ce0  CBaseDoor::SetToggleState  (52 bytes)
 * undefined SetToggleState()
 */
void __thiscall CBaseDoor::SetToggleState(int param_1,int param_2)

{
  if (param_2 == 0) {
    UTIL_SetOrigin(*(int *)(param_1 + 4),param_1 + 0x98);
    return;
  }
  UTIL_SetOrigin(*(int *)(param_1 + 4),param_1 + 0x8c);
  return;
}

/* 10016d20  CBaseDoor::Precache  (1433 bytes)
 * undefined Precache(int param_1)
 */
void __fastcall CBaseDoor::Precache(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *s;
  
  switch(*(undefined1 *)(param_1 + 0x12a)) {
  case 0:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_common_null_wav_1009bfb8);
    *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
    goto LAB_10016e71;
  case 1:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove1_wav_1009da68);
    iVar1 = (*g_engfuncs.pfnAllocString)(s_doors_doormove1_wav_1009da68);
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove2_wav_1009da54);
    pcVar2 = s_doors_doormove2_wav_1009da54;
    goto LAB_10016e46;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove3_wav_1009da40);
    iVar1 = (*g_engfuncs.pfnAllocString)(s_doors_doormove3_wav_1009da40);
    break;
  case 4:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove4_wav_1009da2c);
    pcVar2 = s_doors_doormove4_wav_1009da2c;
    goto LAB_10016e46;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove5_wav_1009da18);
    iVar1 = (*g_engfuncs.pfnAllocString)(s_doors_doormove5_wav_1009da18);
    break;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove6_wav_1009da04);
    pcVar2 = s_doors_doormove6_wav_1009da04;
    goto LAB_10016e46;
  case 7:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove7_wav_1009d9f0);
    iVar1 = (*g_engfuncs.pfnAllocString)(s_doors_doormove7_wav_1009d9f0);
    break;
  case 8:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove8_wav_1009d9dc);
    pcVar2 = s_doors_doormove8_wav_1009d9dc;
    goto LAB_10016e46;
  case 9:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove9_wav_1009d9c8);
    iVar1 = (*g_engfuncs.pfnAllocString)(s_doors_doormove9_wav_1009d9c8);
    break;
  case 10:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove10_wav_1009d9b0);
    pcVar2 = s_doors_doormove10_wav_1009d9b0;
LAB_10016e46:
    iVar1 = (*g_engfuncs.pfnAllocString)(pcVar2);
    *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
    goto LAB_10016e71;
  default:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_common_null_wav_1009bfb8);
  }
  *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
LAB_10016e71:
  switch(*(undefined1 *)(param_1 + 299)) {
  case 0:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_common_null_wav_1009bfb8);
    *(int *)(*(int *)(param_1 + 4) + 0x1f0) = iVar1;
    goto LAB_10016f8b;
  case 1:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doorstop1_wav_1009d99c);
    iVar1 = (*g_engfuncs.pfnAllocString)(s_doors_doorstop1_wav_1009d99c);
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doorstop2_wav_1009d988);
    pcVar2 = s_doors_doorstop2_wav_1009d988;
    goto LAB_10016f60;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doorstop3_wav_1009d974);
    iVar1 = (*g_engfuncs.pfnAllocString)(s_doors_doorstop3_wav_1009d974);
    break;
  case 4:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doorstop4_wav_1009d960);
    pcVar2 = s_doors_doorstop4_wav_1009d960;
    goto LAB_10016f60;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doorstop5_wav_1009d94c);
    iVar1 = (*g_engfuncs.pfnAllocString)(s_doors_doorstop5_wav_1009d94c);
    break;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doorstop6_wav_1009d938);
    pcVar2 = s_doors_doorstop6_wav_1009d938;
    goto LAB_10016f60;
  case 7:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doorstop7_wav_1009d924);
    iVar1 = (*g_engfuncs.pfnAllocString)(s_doors_doorstop7_wav_1009d924);
    break;
  case 8:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doorstop8_wav_1009d910);
    pcVar2 = s_doors_doorstop8_wav_1009d910;
LAB_10016f60:
    iVar1 = (*g_engfuncs.pfnAllocString)(pcVar2);
    *(int *)(*(int *)(param_1 + 4) + 0x1f0) = iVar1;
    goto LAB_10016f8b;
  default:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_common_null_wav_1009bfb8);
  }
  *(int *)(*(int *)(param_1 + 4) + 0x1f0) = iVar1;
LAB_10016f8b:
  if (*(byte *)(param_1 + 0x150) != 0) {
    pcVar2 = ButtonSound((uint)*(byte *)(param_1 + 0x150));
    (*g_engfuncs.pfnPrecacheSound)(pcVar2);
    iVar1 = (*g_engfuncs.pfnAllocString)(pcVar2);
    *(int *)(param_1 + 300) = iVar1;
  }
  if (*(byte *)(param_1 + 0x152) != 0) {
    pcVar2 = ButtonSound((uint)*(byte *)(param_1 + 0x152));
    (*g_engfuncs.pfnPrecacheSound)(pcVar2);
    iVar1 = (*g_engfuncs.pfnAllocString)(pcVar2);
    *(int *)(param_1 + 0x134) = iVar1;
  }
  switch(*(undefined1 *)(param_1 + 0x151)) {
  case 1:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_1009c40c);
    *(int *)(param_1 + 0x130) = iVar1;
    break;
  case 2:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_1009c408);
    *(int *)(param_1 + 0x130) = iVar1;
    break;
  case 3:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_1009c404);
    *(int *)(param_1 + 0x130) = iVar1;
    break;
  case 4:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_NFIRE_1009c3fc);
    *(int *)(param_1 + 0x130) = iVar1;
    break;
  case 5:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_NCHEM_1009c3f4);
    *(int *)(param_1 + 0x130) = iVar1;
    break;
  case 6:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_1009c3ec);
    *(int *)(param_1 + 0x130) = iVar1;
    break;
  case 7:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_1009c3e4);
    *(int *)(param_1 + 0x130) = iVar1;
    break;
  case 8:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_1009c3e0);
    *(int *)(param_1 + 0x130) = iVar1;
    break;
  case 9:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_1009c3dc);
    *(int *)(param_1 + 0x130) = iVar1;
    break;
  default:
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  switch(*(undefined1 *)(param_1 + 0x153)) {
  case 1:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_1009c3d8);
    *(int *)(param_1 + 0x138) = iVar1;
    break;
  case 2:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_1009c3d4);
    *(int *)(param_1 + 0x138) = iVar1;
    break;
  case 3:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_1009c3d0);
    *(int *)(param_1 + 0x138) = iVar1;
    break;
  case 4:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_EFIRE_1009c3c8);
    *(int *)(param_1 + 0x138) = iVar1;
    break;
  case 5:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_ECHEM_1009c3c0);
    *(int *)(param_1 + 0x138) = iVar1;
    break;
  case 6:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_1009c3b8);
    *(int *)(param_1 + 0x138) = iVar1;
    break;
  case 7:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_1009c3b0);
    *(int *)(param_1 + 0x138) = iVar1;
    break;
  case 8:
    iVar1 = (*g_engfuncs.pfnAllocString)(&DAT_1009c3ac);
    *(int *)(param_1 + 0x138) = iVar1;
    break;
  default:
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  if (*(float *)(param_1 + 0x104) <= 0.0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x108)) {
  case 0:
  case 7:
    pcVar2 = s_models_glassgibs_mdl_1009d8e0;
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustglass1_wav_1009d844);
    s = s_debris_bustglass2_wav_1009d85c;
    break;
  default:
    pcVar2 = s_models_woodgibs_mdl_1009d880;
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustcrate1_wav_1009d814);
    s = s_debris_bustcrate2_wav_1009d82c;
    break;
  case 2:
    pcVar2 = s_models_metalplategibs_mdl_1009d8c4;
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustmetal1_wav_1009d7e4);
    s = s_debris_bustmetal2_wav_1009d7fc;
    break;
  case 4:
    pcVar2 = s_models_cindergibs_mdl_1009d8ac;
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustconcrete1_wav_1009d77c);
    s = s_debris_bustconcrete2_wav_1009d798;
    break;
  case 5:
    pcVar2 = s_models_ceilinggibs_mdl_1009d894;
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustceiling_wav_1009d764);
    goto LAB_1001728d;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark5_wav_1009c424);
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark6_wav_1009c410);
    pcVar2 = s_models_computergibs_mdl_1009d8f8;
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustmetal1_wav_1009d7e4);
    (*g_engfuncs.pfnPrecacheSound)(s_debris_bustmetal2_wav_1009d7fc);
    goto LAB_1001728d;
  }
  (*g_engfuncs.pfnPrecacheSound)(s);
LAB_1001728d:
  CBreakable::MaterialSoundPrecache(*(undefined4 *)(param_1 + 0x108));
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(pcVar2);
  *(int *)(param_1 + 0x10c) = iVar1;
  return;
}

/* 10017370  CBaseDoor::DoorTouch  (332 bytes)
 * void DoorTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CBaseDoor::DoorTouch(class CBaseEntity *) */

void __thiscall CBaseDoor::DoorTouch(CBaseDoor *this,CBaseEntity *param_1)

{
  float fVar1;
  byte bVar2;
  entvars_t *peVar3;
  float fVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  
                    /* 0x17370  39  ?DoorTouch@CBaseDoor@@QAEXPAVCBaseEntity@@@Z */
  pcVar7 = s_player_1009c678;
  pbVar5 = (byte *)(gpGlobals->pStringBase + **(int **)(param_1 + 4));
  do {
    bVar2 = *pbVar5;
    bVar8 = bVar2 < (byte)*pcVar7;
    if (bVar2 != *pcVar7) {
LAB_100173b8:
      iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100173bd;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar8 = bVar2 < (byte)pcVar7[1];
    if (bVar2 != pcVar7[1]) goto LAB_100173b8;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar2 != 0);
  iVar6 = 0;
LAB_100173bd:
  if (iVar6 == 0) {
    if (*(int *)&this->field_0xec != 0) {
      iVar6 = UTIL_IsMasterTriggered(*(int *)&this->field_0xec,param_1);
      if (iVar6 == 0) {
        PlayLockSounds((int)this->pev,(int *)&this->field_0x12c,1,0.0);
      }
    }
    if (this->pev->targetname != 0) {
      PlayLockSounds((int)this->pev,(int *)&this->field_0x12c,1,0.0);
      return;
    }
    EHANDLE::operator=((EHANDLE *)&this->field_0xc4,(int)param_1);
    iVar6 = *(int *)(param_1 + 4);
    peVar3 = this->pev;
    fVar4 = peVar3->speed;
    if (SQRT(*(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28) +
             *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
             *(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20)) <= peVar3->speed) {
      fVar1 = peVar3->speed;
    }
    else {
      fVar1 = SQRT(*(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28) +
                   *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                   *(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20));
    }
    peVar3->speed = fVar1;
    iVar6 = DoorActivate(this);
    if (iVar6 != 0) {
      *(undefined4 *)&this->field_0x14 = 0;
    }
    this->pev->speed = fVar4;
  }
  return;
}

/* 100174c0  CBaseDoor::Use  (54 bytes)
 * undefined Use()
 */
void __thiscall CBaseDoor::Use(CBaseDoor *param_1,int param_2)

{
  EHANDLE::operator=((EHANDLE *)&param_1->field_0xc4,param_2);
  if ((*(int *)&param_1->field_0x70 == 1) ||
     (((param_1->pev->spawnflags & 0x20) != 0 && (*(int *)&param_1->field_0x70 == 0)))) {
    DoorActivate(param_1);
  }
  return;
}

/* 10017500  CBaseDoor::DoorActivate  (218 bytes)
 * undefined4 DoorActivate(CBaseDoor * param_1)
 * called by: CBaseDoor::DoorTouch, CBaseDoor::Use
 */
undefined4 __fastcall CBaseDoor::DoorActivate(CBaseDoor *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined3 extraout_var;
  int *piVar5;
  
  if (param_1->field_0x128 != '\0') {
    return 0;
  }
  if ((param_1->pev->effects & 0x80) != 0) {
    return 0;
  }
  puVar1 = &param_1->field_0xc4;
  uVar3 = EHANDLE::operator->((uint *)puVar1);
  iVar4 = UTIL_IsMasterTriggered(*(int *)&param_1->field_0xec,uVar3);
  if (iVar4 == 0) {
    return 0;
  }
  if (((param_1->pev->spawnflags & 0x20) != 0) && (*(int *)&param_1->field_0x70 == 0)) {
    DoorGoDown(param_1);
    return 1;
  }
  bVar2 = FUN_1000e440((uint *)puVar1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    piVar5 = (int *)EHANDLE::operator->((uint *)puVar1);
    iVar4 = (**(code **)(*piVar5 + 0xc0))();
    if (iVar4 != 0) {
      piVar5 = (int *)EHANDLE::operator->((uint *)puVar1);
      (**(code **)(*piVar5 + 0x54))((float)(byte)param_1->field_0x129,0);
    }
  }
  PlayLockSounds((int)param_1->pev,(int *)&param_1->field_0x12c,0,0.0);
  DoorGoUp(param_1);
  return 1;
}

/* 100175e0  CBaseDoor::DoorGoUp  (708 bytes)
 * void DoorGoUp(void)
 * called by: CBaseDoor::Blocked, CBaseDoor::DoorActivate
 */
/* public: void __thiscall CBaseDoor::DoorGoUp(void) */

void __thiscall CBaseDoor::DoorGoUp(CBaseDoor *this)

{
  byte bVar1;
  entvars_t *peVar2;
  byte *pbVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 *puVar5;
  Vector *pVVar6;
  char *pcVar7;
  bool bVar8;
  float in_stack_ffffff64;
  float in_stack_ffffff68;
  float fVar9;
  float in_stack_ffffff6c;
  float fVar10;
  float fVar11;
  float local_7c;
  Vector local_78;
  float local_6c;
  float local_68;
  float local_64;
  Vector local_60;
  float local_54;
  float local_50;
  float local_4c;
  Vector local_48;
  float local_3c;
  float local_38;
  float local_34;
  Vector local_30;
  Vector local_24;
  Vector local_18;
  Vector local_c;
  
                    /* 0x175e0  36  ?DoorGoUp@CBaseDoor@@QAEXXZ */
  peVar2 = this->pev;
  if ((peVar2->spawnflags & 0x80000000U) == 0) {
    in_stack_ffffff6c = 1.4013e-43;
    in_stack_ffffff68 = 0.0;
    in_stack_ffffff64 = 0.8;
    EMIT_SOUND_DYN(gpGlobals->pStringBase + peVar2->noise1,peVar2->pContainingEntity,6,
                   gpGlobals->pStringBase + peVar2->noise1,0x3f800000,0x3f4ccccd,0);
  }
  *(undefined4 *)&this->field_0x70 = 2;
  *(code **)&this->field_0xcc = DoorHitTop;
  pcVar7 = s_func_door_rotating_1009da7c;
  pbVar3 = (byte *)(gpGlobals->pStringBase + this->pev->classname);
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10017683:
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10017688;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10017683;
    pbVar3 = pbVar3 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_10017688:
  if (iVar4 == 0) {
    local_7c = 1.0;
    bVar8 = FUN_1000e440((uint *)&this->field_0xc4);
    if (CONCAT31(extraout_var,bVar8) != 0) {
      iVar4 = EHANDLE::operator->((uint *)&this->field_0xc4);
      peVar2 = this->pev;
      iVar4 = *(int *)(iVar4 + 4);
      if (((peVar2->spawnflags & 0x10) == 0) && (peVar2->movedir[1] != 0.0)) {
        local_78.x = *(float *)(iVar4 + 8) - peVar2->origin[0];
        local_78.y = *(float *)(iVar4 + 0xc) - peVar2->origin[1];
        local_78.z = *(float *)(iVar4 + 0x10) - peVar2->origin[2];
        Vector::Vector(&local_30,&local_78.x);
        fVar9 = SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
                     *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                     *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20));
        if (fVar9 == 0.0) {
          fVar11 = 1.0;
          fVar10 = 0.0;
          fVar9 = 0.0;
          pVVar6 = &local_18;
        }
        else {
          fVar9 = 1.0 / fVar9;
          fVar11 = fVar9 * *(float *)(iVar4 + 0x28);
          fVar10 = fVar9 * *(float *)(iVar4 + 0x24);
          pVVar6 = &local_c;
          fVar9 = fVar9 * *(float *)(iVar4 + 0x20);
        }
        puVar5 = (undefined4 *)Vector::Vector(pVVar6,fVar9,fVar10,fVar11);
        Vector::Vector(&local_78,puVar5);
        local_6c = local_78.x * 10.0;
        local_68 = local_78.y * 10.0;
        local_64 = local_78.z * 10.0;
        Vector::Vector(&local_60,&local_6c);
        local_54 = local_60.x + *(float *)(iVar4 + 8);
        local_50 = local_60.y + *(float *)(iVar4 + 0xc);
        local_4c = local_60.z + *(float *)(iVar4 + 0x10);
        Vector::Vector(&local_48,&local_54);
        peVar2 = this->pev;
        local_3c = local_48.x - peVar2->origin[0];
        local_38 = local_48.y - peVar2->origin[1];
        local_34 = local_48.z - peVar2->origin[2];
        Vector::Vector(&local_24,&local_3c);
        if (local_24.y * local_30.x - local_30.y * local_24.x < 0.0) {
          local_7c = -1.0;
        }
      }
    }
    fVar9 = this->pev->speed;
    pVVar6 = &local_c;
    fVar10 = 2.5533507e-29;
    puVar5 = (undefined4 *)Vector::operator*((Vector *)&this->field_0xb0,&pVVar6->x,local_7c);
    Vector::Vector((Vector *)&stack0xffffff64,puVar5);
    CBaseToggle::AngularMove((CBaseToggle *)this,fVar10,(float)pVVar6,local_7c,fVar9);
    return;
  }
  fVar9 = this->pev->speed;
  Vector::Vector((Vector *)&stack0xffffff64,(undefined4 *)&this->field_0x98);
  CBaseToggle::LinearMove
            ((CBaseToggle *)this,in_stack_ffffff64,in_stack_ffffff68,in_stack_ffffff6c,fVar9);
  return;
}

/* 100178b0  CBaseDoor::DoorHitTop  (301 bytes)
 * void DoorHitTop(void)
 */
/* public: void __thiscall CBaseDoor::DoorHitTop(void) */

void __thiscall CBaseDoor::DoorHitTop(CBaseDoor *this)

{
  entvars_t *peVar1;
  undefined4 uVar2;
  int *piVar3;
  CBaseDoor *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
                    /* 0x178b0  38  ?DoorHitTop@CBaseDoor@@QAEXXZ */
  peVar1 = this->pev;
  if ((peVar1->spawnflags & 0x80000000U) == 0) {
    EMIT_SOUND_DYN(gpGlobals->pStringBase + peVar1->noise1,peVar1->pContainingEntity,6,
                   gpGlobals->pStringBase + peVar1->noise1,0,0,0x20);
    EMIT_SOUND_DYN(gpGlobals->pStringBase + this->pev->noise2,this->pev->pContainingEntity,6,
                   gpGlobals->pStringBase + this->pev->noise2,0x3f800000,0x3f4ccccd,0);
  }
  peVar1 = this->pev;
  *(undefined4 *)&this->field_0x70 = 0;
  if ((peVar1->spawnflags & 0x20U) == 0) {
    peVar1->nextthink = peVar1->ltime + *(float *)&this->field_0x7c;
    *(code **)&this->field_0x10 = DoorGoDown;
    if (*(int *)&this->field_0x7c == -0x40800000) {
      this->pev->nextthink = -1.0;
    }
  }
  else if ((peVar1->spawnflags & 0x100U) == 0) {
    *(code **)&this->field_0x14 = DoorTouch;
  }
  if ((this->pev->netname != 0) && ((this->pev->spawnflags & 1) != 0)) {
    uVar6 = 0;
    uVar5 = 3;
    pCVar4 = this;
    uVar2 = EHANDLE::operator->((uint *)&this->field_0xc4);
    FireTargets((int)(gpGlobals->pStringBase + this->pev->netname),uVar2,pCVar4,uVar5,uVar6);
  }
  uVar5 = 0;
  uVar2 = 3;
  piVar3 = (int *)EHANDLE::operator->((uint *)&this->field_0xc4);
  CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar3,uVar2,uVar5);
  return;
}

/* 100179e0  CBaseDoor::DoorGoDown  (234 bytes)
 * void DoorGoDown(void)
 * called by: CBaseDoor::Blocked, CBaseDoor::DoorActivate
 */
/* public: void __thiscall CBaseDoor::DoorGoDown(void) */

void __thiscall CBaseDoor::DoorGoDown(CBaseDoor *this)

{
  byte bVar1;
  entvars_t *peVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  float in_stack_ffffffe0;
  float in_stack_ffffffe4;
  float in_stack_ffffffe8;
  float fVar7;
  
                    /* 0x179e0  35  ?DoorGoDown@CBaseDoor@@QAEXXZ */
  peVar2 = this->pev;
  if ((peVar2->spawnflags & 0x80000000U) == 0) {
    in_stack_ffffffe8 = 1.4013e-43;
    in_stack_ffffffe4 = 0.0;
    in_stack_ffffffe0 = 0.8;
    EMIT_SOUND_DYN(gpGlobals->pStringBase + peVar2->noise1,peVar2->pContainingEntity,6,
                   gpGlobals->pStringBase + peVar2->noise1,0x3f800000,0x3f4ccccd,0);
  }
  *(undefined4 *)&this->field_0x70 = 3;
  *(code **)&this->field_0xcc = DoorHitBottom;
  pcVar5 = s_func_door_rotating_1009da7c;
  pbVar3 = (byte *)(gpGlobals->pStringBase + this->pev->classname);
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_10017a80:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_10017a85;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_10017a80;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_10017a85:
  fVar7 = this->pev->speed;
  if (iVar4 == 0) {
    Vector::Vector((Vector *)&stack0xffffffe0,(undefined4 *)&this->field_0xa4);
    CBaseToggle::AngularMove
              ((CBaseToggle *)this,in_stack_ffffffe0,in_stack_ffffffe4,in_stack_ffffffe8,fVar7);
    return;
  }
  Vector::Vector((Vector *)&stack0xffffffe0,(undefined4 *)&this->field_0x8c);
  CBaseToggle::LinearMove
            ((CBaseToggle *)this,in_stack_ffffffe0,in_stack_ffffffe4,in_stack_ffffffe8,fVar7);
  return;
}

/* 10017ad0  CBaseDoor::DoorHitBottom  (258 bytes)
 * void DoorHitBottom(void)
 */
/* public: void __thiscall CBaseDoor::DoorHitBottom(void) */

void __thiscall CBaseDoor::DoorHitBottom(CBaseDoor *this)

{
  entvars_t *peVar1;
  int *piVar2;
  CBaseDoor *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
                    /* 0x17ad0  37  ?DoorHitBottom@CBaseDoor@@QAEXXZ */
  peVar1 = this->pev;
  if ((peVar1->spawnflags & 0x80000000U) == 0) {
    EMIT_SOUND_DYN(gpGlobals->pStringBase + peVar1->noise1,peVar1->pContainingEntity,6,
                   gpGlobals->pStringBase + peVar1->noise1,0,0,0x20);
    EMIT_SOUND_DYN(gpGlobals->pStringBase + this->pev->noise2,this->pev->pContainingEntity,6,
                   gpGlobals->pStringBase + this->pev->noise2,0x3f800000,0x3f4ccccd,0);
  }
  *(undefined4 *)&this->field_0x70 = 1;
  if ((this->pev->spawnflags & 0x100U) == 0) {
    *(code **)&this->field_0x14 = DoorTouch;
  }
  else {
    *(undefined4 *)&this->field_0x14 = 0;
  }
  uVar5 = 0;
  uVar4 = 3;
  piVar2 = (int *)EHANDLE::operator->((uint *)&this->field_0xc4);
  CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar2,uVar4,uVar5);
  if ((this->pev->netname != 0) && ((this->pev->spawnflags & 1) == 0)) {
    uVar6 = 0;
    uVar5 = 3;
    pCVar3 = this;
    uVar4 = EHANDLE::operator->((uint *)&this->field_0xc4);
    FireTargets((int)(gpGlobals->pStringBase + this->pev->netname),uVar4,pCVar3,uVar5,uVar6);
  }
  return;
}

/* 10017be0  CBaseDoor::Blocked  (712 bytes)
 * undefined Blocked()
 */
void __thiscall CBaseDoor::Blocked(CBaseDoor *param_1,int *param_2)

{
  byte bVar1;
  entvars_t *peVar2;
  entvars_t *peVar3;
  edict_t *peVar4;
  int iVar5;
  byte *pbVar6;
  CBaseDoor *this;
  entvars_t *peVar7;
  char *pcVar8;
  bool bVar9;
  edict_t *peStack_8;
  
  peVar7 = param_1->pev;
  peStack_8 = (edict_t *)0x0;
  if (peVar7->dmg != 0.0) {
    (**(code **)(*param_2 + 0x50))(peVar7,peVar7,peVar7->dmg,1);
  }
  if (0.0 <= *(float *)&param_1->field_0x7c) {
    if (*(int *)&param_1->field_0x70 == 3) {
      DoorGoUp(param_1);
    }
    else {
      DoorGoDown(param_1);
    }
  }
  if (param_1->pev->targetname == 0) {
    return;
  }
LAB_10017c62:
  do {
    peStack_8 = (*g_engfuncs.pfnFindEntityByString)
                          (peStack_8,s_targetname_1009c68c,
                           gpGlobals->pStringBase + param_1->pev->targetname);
    peVar4 = peStack_8;
    if (peStack_8 != (edict_t *)0x0) {
      peVar4 = (edict_t *)&peStack_8->v;
    }
  } while (peVar4 == (edict_t *)param_1->pev);
  if (peStack_8 == (edict_t *)0x0) {
    return;
  }
  iVar5 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peStack_8);
  if (iVar5 == 0) {
    return;
  }
  peVar7 = &peStack_8->v;
  pcVar8 = s_func_door_1009da90;
  pbVar6 = (byte *)(gpGlobals->pStringBase + (peStack_8->v).classname);
  do {
    bVar1 = *pbVar6;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10017d01:
      iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10017d06;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10017d01;
    pbVar6 = pbVar6 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_10017d06:
  if (iVar5 != 0) goto code_r0x10017d0a;
  goto LAB_10017d46;
code_r0x10017d0a:
  pcVar8 = s_func_door_rotating_1009da7c;
  pbVar6 = (byte *)(gpGlobals->pStringBase + peVar7->classname);
  do {
    bVar1 = *pbVar6;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10017d39:
      iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10017d3e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10017d39;
    pbVar6 = pbVar6 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_10017d3e:
  if (iVar5 == 0) {
LAB_10017d46:
    this = (CBaseDoor *)GetClassPtr<CBaseDoor>((int)peVar7);
    if (0.0 <= *(float *)&this->field_0x7c) {
      peVar2 = this->pev;
      peVar3 = param_1->pev;
      if ((((peVar2->velocity[0] == peVar3->velocity[0]) &&
           (peVar2->velocity[1] == peVar3->velocity[1])) &&
          (peVar2->velocity[2] == peVar3->velocity[2])) &&
         (((peVar2->avelocity[0] == peVar3->velocity[0] &&
           (peVar2->avelocity[1] == peVar3->velocity[1])) &&
          (peVar2->avelocity[2] == peVar3->velocity[2])))) {
        pcVar8 = s_func_door_1009da90;
        pbVar6 = (byte *)(gpGlobals->pStringBase + peVar7->classname);
        do {
          bVar1 = *pbVar6;
          bVar9 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_10017e0e:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_10017e13;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar9 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_10017e0e;
          pbVar6 = pbVar6 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_10017e13:
        if (iVar5 == 0) {
          peVar2->origin[0] = peVar3->origin[0];
          peVar2->origin[1] = peVar3->origin[1];
          peVar2->origin[2] = peVar3->origin[2];
          peVar7 = this->pev;
          peVar7->velocity[0] = DAT_100ae498;
          peVar7->velocity[1] = DAT_100ae49c;
          peVar7->velocity[2] = DAT_100ae4a0;
        }
        else {
          peVar2->angles[0] = peVar3->angles[0];
          peVar2->angles[1] = peVar3->angles[1];
          peVar2->angles[2] = peVar3->angles[2];
          peVar7 = this->pev;
          peVar7->avelocity[0] = DAT_100ae498;
          peVar7->avelocity[1] = DAT_100ae49c;
          peVar7->avelocity[2] = DAT_100ae4a0;
        }
      }
      if (*(int *)&this->field_0x70 == 3) {
        DoorGoUp(this);
      }
      else {
        DoorGoDown(this);
      }
    }
  }
  goto LAB_10017c62;
}

/* 10018b00  CBaseDoor::ObjectCaps  (16 bytes)
 * undefined ObjectCaps()
 */
uint __fastcall CBaseDoor::ObjectCaps(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 4) + 0x1a0) >> 5 & 8;
}

