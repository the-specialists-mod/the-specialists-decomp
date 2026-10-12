/* mp.dll - CFuncTank (13 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001c370  CFuncTank::Save  (48 bytes)
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
  CSave::WriteFields(param_1,(byte_conflict *)s_CFuncTank_1009386c,(int)this,0x10093508,0x1a);
  return;
}

/* 1001c3a0  CFuncTank::Restore  (48 bytes)
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
  CRestore::ReadFields(param_1,(byte_conflict *)s_CFuncTank_1009386c,(int)this,0x10093508,0x1a);
  return;
}

/* 1001c480  CFuncTank::Spawn  (442 bytes)
 * undefined Spawn()
 */
void __fastcall CFuncTank::Spawn(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  (**(code **)(*param_1 + 0x10))();
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  *(undefined4 *)(param_1[1] + 0x10c) = 4;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  iVar6 = param_1[1];
  param_1[0x1a] = *(int *)(iVar6 + 0x54);
  param_1[0x1e] = *(int *)(iVar6 + 0x50);
  if ((*(byte *)(iVar6 + 0x1a0) & 1) != 0) {
    *(float *)(iVar6 + 0x104) = *(float *)(iVar6 + 0x100) + 1.0;
  }
  (*g_engfuncs.pfnAngleVectors)((float *)(param_1[1] + 0x50),&fStack_3c,&fStack_48,&fStack_54);
  fVar1 = (float)param_1[0x2a];
  iVar6 = param_1[1];
  fVar2 = (float)param_1[0x29];
  fVar3 = (float)param_1[0x28];
  fVar4 = *(float *)(iVar6 + 0xc);
  fVar5 = *(float *)(iVar6 + 0x10);
  param_1[0x30] =
       (int)(fStack_3c * fVar3 + *(float *)(iVar6 + 8) + fStack_48 * fVar2 + fStack_54 * fVar1);
  param_1[0x31] = (int)(fStack_38 * fVar3 + fVar4 + fStack_44 * fVar2 + fStack_50 * fVar1);
  param_1[0x32] = (int)(fStack_34 * fVar3 + fVar5 + fStack_40 * fVar2 + fStack_4c * fVar1);
  if ((float)param_1[0x23] < 0.0 != ((float)param_1[0x23] == 0.0)) {
    param_1[0x23] = 0x3f800000;
  }
  if (5 < (uint)param_1[0x33]) {
    param_1[0x33] = 0;
  }
  *(float *)(iVar6 + 0x14) = *(float *)(iVar6 + 8);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar6 + 0xc);
  *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar6 + 0x10);
  return;
}

/* 1001c640  CFuncTank::Precache  (108 bytes)
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

/* 1001c6b0  CFuncTank::KeyValue  (1072 bytes)
 * undefined KeyValue(int param_1)
 * called by: CFuncTankLaser::KeyValue, CFuncTankMortar::KeyValue
 */
void __thiscall CFuncTank::KeyValue(CFuncTank *this,int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  
  pcVar6 = *(char **)(param_1 + 4);
  puVar2 = &DAT_00000008;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_yawrate_10093960;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x6c) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000009;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_yawrange_10093954;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x70) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0xd;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_yawtolerance_10093944;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x74) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0xb;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_pitchrange_10093938;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x80) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_0000000a;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_pitchrate_1009392c;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x7c) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0xf;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_pitchtolerance_1009391c;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x84) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000009;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_firerate_10093910;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x8c) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000007;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_barrel_10093908;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0xa0) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000008;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_barrely_10093900;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0xa4) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000008;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_barrelz_100938f8;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0xa8) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0xc;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_spritescale_100938ec;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0xac) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar3 = 0xc;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_spritesmoke_100938e0;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)(this + 0xb0) = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar3 = 0xc;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_spriteflash_100938d4;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)(this + 0xb4) = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar3 = 0xc;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_rotatesound_100938c8;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)(*(int *)(this + 4) + 0x1e8) = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0xc;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_persistence_100938bc;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x94) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000007;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_bullet_100938b4;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    uVar1 = FUN_1006e1dd(puVar2,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)(this + 0xb8) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pvVar4 = (void *)0xe;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_bullet_damage_100938a4;
  do {
    if (pvVar4 == (void *)0x0) break;
    pvVar4 = (void *)((int)pvVar4 + -1);
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    uVar1 = FUN_1006e1dd(pvVar4,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)(this + 0xbc) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pvVar4 = (void *)0xb;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_firespread_10093898;
  do {
    if (pvVar4 == (void *)0x0) break;
    pvVar4 = (void *)((int)pvVar4 + -1);
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    uVar1 = FUN_1006e1dd(pvVar4,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)(this + 0xcc) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000009;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_minRange_1009388c;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x98) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000009;
  bVar8 = true;
  pcVar5 = pcVar6;
  pcVar7 = s_maxRange_10093880;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar8 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    fVar9 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x9c) = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar3 = 7;
  bVar8 = true;
  pcVar5 = s_master_10093878;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar8 = *pcVar6 == *pcVar5;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar8);
  if (bVar8) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)(this + 0xd0) = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 1001cae0  CFuncTank::OnControls  (84 bytes)
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

/* 1001cb40  CFuncTank::StartControl  (199 bytes)
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
  (*g_engfuncs.pfnAlertMessage)(at_console,s_using_TANK__10093968);
  *(int *)(this + 0x54) = param_1;
  if (*(int **)(param_1 + 0x968) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x968) + 0x10c))(0);
    *(undefined4 *)(*(int *)(*(int *)(this + 0x54) + 4) + 0xc0) = 0;
    *(undefined4 *)(*(int *)(*(int *)(this + 0x54) + 4) + 0xbc) = 0;
  }
  *(uint *)(*(int *)(this + 0x54) + 0x940) = *(uint *)(*(int *)(this + 0x54) + 0x940) | 1;
  iVar1 = *(int *)(*(int *)(this + 0x54) + 4);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(this + 100) = *(undefined4 *)(iVar1 + 0x10);
  *(float *)(*(int *)(this + 4) + 0x104) = *(float *)(*(int *)(this + 4) + 0x100) + 0.1;
  return 1;
}

/* 1001cc10  CFuncTank::StopControl  (116 bytes)
 * undefined StopControl(int param_1)
 * called by: CFuncTank::Use
 */
void __fastcall CFuncTank::StopControl(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x54) + 0x968);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x104))();
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,s_stopped_using_TANK_10093978);
    *(uint *)(*(int *)(param_1 + 0x54) + 0x940) =
         *(uint *)(*(int *)(param_1 + 0x54) + 0x940) & 0xfffffffe;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    iVar2 = *(int *)(param_1 + 4);
    if ((*(byte *)(iVar2 + 0x1a0) & 1) != 0) {
      *(float *)(iVar2 + 0x104) = *(float *)(iVar2 + 0x100) + 1.0;
    }
  }
  return;
}

/* 1001ce30  CFuncTank::Use  (230 bytes)
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
        FUN_1001dc20((int)this);
        return;
      }
      *(uint *)(iVar2 + 0x1a0) = uVar1 | 1;
      *(float *)(*(int *)(this + 4) + 0x104) = *(float *)(*(int *)(this + 4) + 0x100) + 0.1;
      *(undefined4 *)(this + 0x88) = 0;
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x2c))();
    if (iVar2 == 2) {
      if ((param_4 == 2.0) && (param_3 == 2)) {
        FUN_1001cc90((int *)this);
        return;
      }
      if ((*(int *)(this + 0x54) == 0) && (param_3 != 0)) {
        EHANDLE::operator=((EHANDLE *)(param_1 + 0x247),(int)this);
        StartControl(this,(int)param_1);
        return;
      }
      StopControl((int)this);
      return;
    }
  }
  return;
}

/* 1001cf80  CFuncTank::Think  (101 bytes)
 * undefined Think(int * param_1)
 * called by: CFuncTankLaser::Think
 */
void __fastcall CFuncTank::Think(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x5c) = DAT_1009f4a8;
  *(undefined4 *)(iVar1 + 0x60) = DAT_1009f4ac;
  *(undefined4 *)(iVar1 + 100) = DAT_1009f4b0;
  FUN_1001cff0(param_1);
  if ((ABS(*(float *)(param_1[1] + 0x5c)) <= 1.0) && (ABS(*(float *)(param_1[1] + 0x60)) <= 1.0)) {
    FUN_1001dc20((int)param_1);
    return;
  }
  FUN_1001dbc0((int)param_1);
  return;
}

/* 1001d800  CFuncTank::Fire  (575 bytes)
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

/* 1001e4e0  CFuncTank::UpdateTargetPosition  (33 bytes)
 * undefined UpdateTargetPosition()
 */
undefined4 __thiscall CFuncTank::UpdateTargetPosition(int param_1,undefined4 param_2,int *param_3)

{
  (**(code **)(*param_3 + 0xe0))(param_2,*(int *)(param_1 + 4) + 8);
  return param_2;
}

/* 1001e510  CFuncTank::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CFuncTank::ObjectCaps(void)

{
  return 0;
}

