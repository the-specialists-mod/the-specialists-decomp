/* mp.dll - CFuncTank (12 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100201b0  CFuncTank::Save  (48 bytes)
 * undefined Save(void * param_1)
 * called by: CFuncTankLaser::Save
 */
void __thiscall CFuncTank::Save(CFuncTank *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_1,(byte_conflict *)s_CFuncTank_1009e974,(int)this,0x1009e610,0x1a);
  return;
}

/* 100201e0  CFuncTank::Restore  (48 bytes)
 * undefined Restore(void * param_1)
 * called by: CFuncTankLaser::Restore
 */
void __thiscall CFuncTank::Restore(CFuncTank *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_1,(byte_conflict *)s_CFuncTank_1009e974,(int)this,&DAT_1009e610,0x1a);
  return;
}

/* 100202c0  CFuncTank::Spawn  (624 bytes)
 * undefined Spawn()
 */
void __fastcall CFuncTank::Spawn(int *param_1)

{
  float fVar1;
  int iVar2;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  Vector VStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  Vector VStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  Vector VStack_60;
  Vector VStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  Vector VStack_24;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  Vector VStack_c;
  
  (**(code **)(*param_1 + 0x20))();
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  *(undefined4 *)(param_1[1] + 0x10c) = 4;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  iVar2 = param_1[1];
  param_1[0x1a] = *(int *)(iVar2 + 0x54);
  param_1[0x1e] = *(int *)(iVar2 + 0x50);
  if ((*(byte *)(iVar2 + 0x1a0) & 1) != 0) {
    *(float *)(iVar2 + 0x104) = *(float *)(iVar2 + 0x100) + 1.0;
  }
  (*g_engfuncs.pfnAngleVectors)((float *)(param_1[1] + 0x50),&fStack_78,&fStack_90,&fStack_30);
  fVar1 = (float)param_1[0x2a];
  fStack_40 = (float)param_1[0x29];
  fStack_48 = fStack_90 * fStack_40;
  fStack_44 = fStack_8c * fStack_40;
  fStack_40 = fStack_88 * fStack_40;
  Vector::Vector(&VStack_9c,&fStack_48);
  fStack_10 = (float)param_1[0x28];
  fStack_18 = fStack_78 * fStack_10;
  fStack_14 = fStack_74 * fStack_10;
  fStack_10 = fStack_70 * fStack_10;
  Vector::Vector(&VStack_60,&fStack_18);
  iVar2 = param_1[1];
  fStack_a8 = VStack_60.x + *(float *)(iVar2 + 8);
  fStack_a4 = VStack_60.y + *(float *)(iVar2 + 0xc);
  fStack_a0 = VStack_60.z + *(float *)(iVar2 + 0x10);
  Vector::Vector(&VStack_84,&fStack_a8);
  fStack_6c = VStack_9c.x + VStack_84.x;
  fStack_68 = VStack_9c.y + VStack_84.y;
  fStack_64 = VStack_9c.z + VStack_84.z;
  Vector::Vector(&VStack_54,&fStack_6c);
  fStack_3c = VStack_54.x + fStack_30 * fVar1;
  fStack_38 = VStack_54.y + fStack_2c * fVar1;
  fStack_34 = VStack_54.z + fStack_28 * fVar1;
  Vector::Vector(&VStack_c,&fStack_3c);
  Vector::Vector(&VStack_24,&VStack_c.x);
  param_1[0x30] = (int)VStack_24.x;
  param_1[0x31] = (int)VStack_24.y;
  param_1[0x32] = (int)VStack_24.z;
  if ((float)param_1[0x23] <= 0.0) {
    param_1[0x23] = 0x3f800000;
  }
  if (5 < (uint)param_1[0x33]) {
    param_1[0x33] = 0;
  }
  iVar2 = param_1[1];
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar2 + 8);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar2 + 0x10);
  return;
}

/* 10020530  CFuncTank::Precache  (108 bytes)
 * undefined Precache(int param_1)
 * called by: CFuncTankRocket::Precache
 */
void __fastcall CFuncTank::Precache(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xb0) != 0) {
    (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + *(int *)(param_1 + 0xb0));
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + *(int *)(param_1 + 0xb4));
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1e8);
  if (iVar1 != 0) {
    (*g_engfuncs.pfnPrecacheSound)(gpGlobals->pStringBase + iVar1);
  }
  return;
}

/* 100205a0  CFuncTank::KeyValue  (1786 bytes)
 * undefined KeyValue(int param_1)
 * called by: CFuncTankLaser::KeyValue, CFuncTankMortar::KeyValue
 */
void __thiscall CFuncTank::KeyValue(CFuncTank *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  CFuncTank *this_00;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_1 + 4);
  pcVar7 = s_yawrate_1009ea68;
  pbVar2 = pbVar5;
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100205d8:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100205dd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100205d8;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100205dd:
  if (iVar3 == 0) {
    fVar9 = atof(this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x6c) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_yawrange_1009ea5c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10020629:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1002062e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10020629;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002062e:
  if (iVar3 == 0) {
    fVar9 = atof(this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x70) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_yawtolerance_1009ea4c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002067a:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1002067f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002067a;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002067f:
  if (iVar3 == 0) {
    fVar9 = atof(this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x74) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_pitchrange_1009ea40;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100206cb:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100206d0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100206cb;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100206d0:
  if (iVar3 == 0) {
    fVar9 = atof(this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x80) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_pitchrate_1009ea34;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002071f:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10020724;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002071f;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10020724:
  if (iVar3 == 0) {
    fVar9 = atof(this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x7c) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_pitchtolerance_1009ea24;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10020770:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10020775;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10020770;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10020775:
  if (iVar3 == 0) {
    fVar9 = atof(this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x84) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_firerate_1009ea18;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100207c4:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100207c9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100207c4;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100207c9:
  if (iVar3 == 0) {
    fVar9 = atof(this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x8c) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_barrel_1009ea10;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10020818:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1002081d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10020818;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002081d:
  if (iVar3 == 0) {
    fVar9 = atof(this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0xa0) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_barrely_1009ea08;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002086c:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10020871;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002086c;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10020871:
  if (iVar3 == 0) {
    fVar9 = atof(this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0xa4) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_barrelz_1009ea00;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100208c0:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100208c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100208c0;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100208c5:
  if (iVar3 == 0) {
    fVar9 = atof(this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0xa8) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_spritescale_1009e9f4;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10020914:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10020919;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10020914;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10020919:
  if (iVar3 == 0) {
    fVar9 = atof(this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0xac) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_spritesmoke_1009e9e8;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10020968:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1002096d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10020968;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002096d:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)(this + 0xb0) = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_spriteflash_1009e9dc;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100209bd:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100209c2;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100209bd;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100209c2:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)(this + 0xb4) = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_rotatesound_1009e9d0;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10020a12:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10020a17;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10020a12;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10020a17:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)(*(int *)(this + 4) + 0x1e8) = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_persistence_1009e9c4;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10020a6a:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10020a6f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10020a6a;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10020a6f:
  if (iVar3 == 0) {
    fVar9 = atof(this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x94) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_bullet_1009e9bc;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10020abe:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10020ac3;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10020abe;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10020ac3:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)(this + 0xb8) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_bullet_damage_1009e9ac;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10020b12:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10020b17;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10020b12;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10020b17:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)(this + 0xbc) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_firespread_1009e9a0;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10020b66:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10020b6b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10020b66;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10020b6b:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)(this + 0xcc) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_minRange_1009e994;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10020bba:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10020bbf;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10020bba;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10020bbf:
  if (iVar3 == 0) {
    fVar9 = atof(this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x98) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_maxRange_1009e988;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10020c0e:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10020c13;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CFuncTank *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10020c0e;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10020c13:
  if (iVar3 == 0) {
    fVar9 = atof(this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x9c) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_master_1009e980;
  do {
    bVar1 = *pbVar5;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10020c62:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10020c67;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10020c62;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10020c67:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)(this + 0xd0) = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10020ca0  CFuncTank::OnControls  (84 bytes)
 * undefined OnControls()
 */
undefined4 __thiscall CFuncTank::OnControls(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 0x20) != 0) &&
     (fVar1 = *(float *)(param_1 + 0x5c) - *(float *)(param_2 + 8),
     fVar3 = *(float *)(param_1 + 0x60) - *(float *)(param_2 + 0xc),
     fVar2 = *(float *)(param_1 + 100) - *(float *)(param_2 + 0x10),
     SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) < 30.0)) {
    return 1;
  }
  return 0;
}

/* 10020d00  CFuncTank::StartControl  (199 bytes)
 * undefined4 StartControl(int param_1)
 * called by: CFuncTank::Use
 */
undefined4 __thiscall CFuncTank::StartControl(CFuncTank *this,int param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0x54) != 0) {
    return 0;
  }
  if (*(int *)(this + 0xd0) != 0) {
    iVar1 = UTIL_IsMasterTriggered(*(int *)(this + 0xd0),param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  (*g_engfuncs.pfnAlertMessage)(at_console,s_using_TANK__1009ea70);
  *(int *)(this + 0x54) = param_1;
  if (*(int **)(param_1 + 0x9fc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x9fc) + 0x128))(0);
    *(undefined4 *)(*(int *)(*(int *)(this + 0x54) + 4) + 0xc0) = 0;
    *(undefined4 *)(*(int *)(*(int *)(this + 0x54) + 4) + 0xbc) = 0;
  }
  *(uint *)(*(int *)(this + 0x54) + 0x9d4) = *(uint *)(*(int *)(this + 0x54) + 0x9d4) | 1;
  iVar1 = *(int *)(*(int *)(this + 0x54) + 4);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(this + 100) = *(undefined4 *)(iVar1 + 0x10);
  *(float *)(*(int *)(this + 4) + 0x104) = *(float *)(*(int *)(this + 4) + 0x100) + 0.1;
  return 1;
}

/* 10020dd0  CFuncTank::StopControl  (116 bytes)
 * undefined StopControl(int param_1)
 * called by: CFuncTank::Use
 */
void __fastcall CFuncTank::StopControl(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x54) + 0x9fc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x120))();
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,s_stopped_using_TANK_1009ea80);
    *(uint *)(*(int *)(param_1 + 0x54) + 0x9d4) =
         *(uint *)(*(int *)(param_1 + 0x54) + 0x9d4) & 0xfffffffe;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    iVar2 = *(int *)(param_1 + 4);
    if ((*(byte *)(iVar2 + 0x1a0) & 1) != 0) {
      *(float *)(iVar2 + 0x104) = *(float *)(iVar2 + 0x100) + 1.0;
    }
  }
  return;
}

/* 100210a0  CFuncTank::Use  (230 bytes)
 * undefined Use(int * param_1, undefined4 param_2, int param_3, float param_4)
 */
void __thiscall
CFuncTank::Use(CFuncTank *this,int *param_1,undefined4 param_2,int param_3,float param_4)

{
  uint uVar1;
  int iVar2;
  
  if ((*(uint *)(*(int *)(this + 4) + 0x1a0) & 0x20) == 0) {
    iVar2 = CBaseEntity::ShouldToggle(param_3,*(uint *)(*(int *)(this + 4) + 0x1a0) & 1);
    if (iVar2 != 0) {
      iVar2 = *(int *)(this + 4);
      uVar1 = *(uint *)(iVar2 + 0x1a0);
      if ((uVar1 & 1) != 0) {
        *(uint *)(iVar2 + 0x1a0) = uVar1 & 0xfffffffe;
        *(undefined4 *)(this + 0x88) = 0;
        FUN_10022010((int)this);
        return;
      }
      *(uint *)(iVar2 + 0x1a0) = uVar1 | 1;
      *(float *)(*(int *)(this + 4) + 0x104) = *(float *)(*(int *)(this + 4) + 0x100) + 0.1;
      *(undefined4 *)(this + 0x88) = 0;
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x44))();
    if (iVar2 == 2) {
      if ((param_4 == 2.0) && (param_3 == 2)) {
        FUN_10020e50((int *)this);
        return;
      }
      if ((*(int *)(this + 0x54) == 0) && (param_3 != 0)) {
        EHANDLE::operator=((EHANDLE *)(param_1 + 0x26c),(int)this);
        StartControl(this,(int)param_1);
        return;
      }
      StopControl((int)this);
      return;
    }
  }
  return;
}

/* 100211f0  CFuncTank::Think  (99 bytes)
 * undefined Think(int * param_1)
 * called by: CFuncTankLaser::Think
 */
void __fastcall CFuncTank::Think(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x5c) = DAT_100ae498;
  *(undefined4 *)(iVar1 + 0x60) = DAT_100ae49c;
  *(undefined4 *)(iVar1 + 100) = DAT_100ae4a0;
  FUN_10021260(param_1);
  if ((ABS(*(float *)(param_1[1] + 0x5c)) <= 1.0) && (ABS(*(float *)(param_1[1] + 0x60)) <= 1.0)) {
    FUN_10022010((int)param_1);
    return;
  }
  FUN_10021fb0((int)param_1);
  return;
}

/* 10021b50  CFuncTank::Fire  (575 bytes)
 * undefined Fire(undefined4 * param_1)
 * called by: CFuncTankGun::Fire, CFuncTankLaser::Fire, CFuncTankMortar::Fire, CFuncTankRocket::Fire
 */
void __thiscall CFuncTank::Fire(CFuncTank *this,undefined4 *param_1)

{
  void *pvVar1;
  float10 fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(float *)(this + 0x88) != 0.0) {
    if (*(int *)(this + 0xb0) != 0) {
      pvVar1 = CSprite::SpriteCreate
                         ((int)(gpGlobals->pStringBase + *(int *)(this + 0xb0)),param_1,1);
      fVar2 = (float10)(*g_engfuncs.pfnRandomFloat)(15.0,20.0);
      *(code **)((int)pvVar1 + 0x10) = CSprite::AnimateUntilDead;
      *(float *)(*(int *)((int)pvVar1 + 4) + 0x138) = (float)fVar2;
      *(float *)(*(int *)((int)pvVar1 + 4) + 0x1e4) =
           (float)((float10)*(float *)((int)pvVar1 + 0x58) / fVar2 + (float10)gpGlobals->time);
      *(float *)(*(int *)((int)pvVar1 + 4) + 0x104) = gpGlobals->time;
      lVar3 = __ftol();
      lVar4 = __ftol();
      lVar5 = __ftol();
      *(undefined4 *)(*(int *)((int)pvVar1 + 4) + 0x148) = 4;
      *(float *)(*(int *)((int)pvVar1 + 4) + 0x150) = (float)(int)lVar5;
      *(float *)(*(int *)((int)pvVar1 + 4) + 0x154) = (float)(int)lVar4;
      *(float *)(*(int *)((int)pvVar1 + 4) + 0x158) = (float)(int)lVar3;
      *(undefined4 *)(*(int *)((int)pvVar1 + 4) + 0x14c) = 0x437f0000;
      *(undefined4 *)(*(int *)((int)pvVar1 + 4) + 0x15c) = 0;
      fVar2 = (float10)(*g_engfuncs.pfnRandomFloat)(40.0,80.0);
      *(float *)(*(int *)((int)pvVar1 + 4) + 0x28) = (float)fVar2;
      *(undefined4 *)(*(int *)((int)pvVar1 + 4) + 0x144) = *(undefined4 *)(this + 0xac);
    }
    if (*(int *)(this + 0xb4) != 0) {
      pvVar1 = CSprite::SpriteCreate
                         ((int)(gpGlobals->pStringBase + *(int *)(this + 0xb4)),param_1,1);
      *(code **)((int)pvVar1 + 0x10) = CSprite::AnimateUntilDead;
      *(undefined4 *)(*(int *)((int)pvVar1 + 4) + 0x138) = 0x42700000;
      *(float *)(*(int *)((int)pvVar1 + 4) + 0x1e4) =
           *(float *)((int)pvVar1 + 0x58) * 0.016666668 + gpGlobals->time;
      *(float *)(*(int *)((int)pvVar1 + 4) + 0x104) = gpGlobals->time;
      *(undefined4 *)(*(int *)((int)pvVar1 + 4) + 0x148) = 5;
      *(undefined4 *)(*(int *)((int)pvVar1 + 4) + 0x150) = 0x437f0000;
      *(undefined4 *)(*(int *)((int)pvVar1 + 4) + 0x154) = 0x437f0000;
      *(undefined4 *)(*(int *)((int)pvVar1 + 4) + 0x158) = 0x437f0000;
      *(undefined4 *)(*(int *)((int)pvVar1 + 4) + 0x14c) = 0x437f0000;
      *(undefined4 *)(*(int *)((int)pvVar1 + 4) + 0x15c) = 0xe;
      *(undefined4 *)(*(int *)((int)pvVar1 + 4) + 0x144) = *(undefined4 *)(this + 0xac);
      *(float *)(*(int *)((int)pvVar1 + 4) + 0x104) =
           *(float *)(*(int *)((int)pvVar1 + 4) + 0x104) + 0.1;
    }
    CBaseEntity::SUB_UseTargets((CBaseEntity *)this,this,3,0);
    *(float *)(this + 0x88) = gpGlobals->time;
    return;
  }
  *(float *)(this + 0x88) = gpGlobals->time;
  return;
}

/* 100229b0  CFuncTank::UpdateTargetPosition  (57 bytes)
 * undefined UpdateTargetPosition()
 */
undefined4 * __thiscall CFuncTank::UpdateTargetPosition(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_c [8];
  undefined4 *puStack_4;
  
  puVar1 = (undefined4 *)(**(code **)(*param_3 + 0xfc))(auStack_c,*(int *)(param_1 + 4) + 8);
  *puStack_4 = *puVar1;
  puStack_4[1] = puVar1[1];
  puStack_4[2] = puVar1[2];
  return puStack_4;
}

