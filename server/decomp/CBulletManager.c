/* ts_i386.so - CBulletManager (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0006ebe0  CBulletManager::CBulletManager  (49 bytes)
 * undefined CBulletManager(void)
 */
/* CBulletManager::CBulletManager(void) */

void __thiscall CBulletManager::CBulletManager(CBulletManager *this)

{
  int iVar1;
  
  iVar1 = 0xff;
  do {
    iVar1 = iVar1 + -0x10;
  } while (iVar1 != -1);
  Reset(this);
  return;
}

/* 0006ec14  CBulletManager::~CBulletManager  (59 bytes)
 * undefined ~CBulletManager(uint param_1)
 */
/* CBulletManager::~CBulletManager(void) */

void __thiscall CBulletManager::~CBulletManager(CBulletManager *this,uint param_1)

{
  Reset(this);
  if ((param_1 & 1) != 0) {
    __builtin_delete(this);
  }
  return;
}

/* 0006ec50  CBulletManager::Reset  (44 bytes)
 * undefined Reset(void)
 */
/* CBulletManager::Reset(void) */

void __thiscall CBulletManager::Reset(CBulletManager *this)

{
  int iVar1;
  CBulletManager *pCVar2;
  
  pCVar2 = this;
  for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = 0;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined4 *)(this + 0x4000) = 0;
  *(undefined4 *)(this + 0x4004) = 0;
  return;
}

/* 0006ec7c  CBulletManager::Think  (294 bytes)
 * undefined Think(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBulletManager::Think(void) */

void __thiscall CBulletManager::Think(CBulletManager *this)

{
  CBulletManager *pCVar1;
  int iVar2;
  int local_60;
  undefined1 local_5c [76];
  
  *(undefined4 *)(this + 0x4000) = 0;
  local_60 = 0;
  iVar2 = 0x30;
  pCVar1 = this + 0x30;
  do {
    if (*(int *)(pCVar1 + -0x30) != 0) {
      if (*(float *)(this + iVar2 + 8) < gpGlobals->time) {
        *(float *)(this + iVar2 + 8) = gpGlobals->time;
        if (_DAT_00178718 < 2) {
          *(float *)(this + iVar2 + 8) =
               0.1 / (float)(int)(_DAT_00178718 + 1) + *(float *)(this + iVar2 + 8);
        }
        UpdateBullet(this,local_60,(int)local_5c);
      }
      *(int *)(this + 0x4000) = *(int *)(this + 0x4000) + 1;
    }
    if (*(int *)(pCVar1 + 0x10) != 0) {
      if (*(float *)(this + iVar2 + 0x48) < gpGlobals->time) {
        *(float *)(this + iVar2 + 0x48) = gpGlobals->time;
        if (_DAT_00178718 < 2) {
          *(float *)(this + iVar2 + 0x48) =
               0.1 / (float)(int)(_DAT_00178718 + 1) + *(float *)(this + iVar2 + 0x48);
        }
        UpdateBullet(this,local_60 + 1,(int)local_5c);
      }
      *(int *)(this + 0x4000) = *(int *)(this + 0x4000) + 1;
    }
    pCVar1 = pCVar1 + 0x80;
    iVar2 = iVar2 + 0x80;
    local_60 = local_60 + 2;
  } while (local_60 < 0x100);
  return;
}

/* 0006eda4  CBulletManager::FireBullet  (406 bytes)
 * undefined FireBullet(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined4 param_6)
 */
/* CBulletManager::FireBullet(CBasePlayer *, Vector &, Vector &, float &, int &, int) */

void __thiscall
CBulletManager::FireBullet
          (CBulletManager *this,int param_1,undefined4 *param_2,undefined4 *param_3,
          undefined4 *param_4,undefined4 *param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  CBulletManager *pCVar4;
  CBulletManager *pCVar5;
  longdouble lVar6;
  int local_14;
  
  local_14 = -1;
  iVar1 = 0;
  if (*(int *)this == 0) {
    local_14 = 0;
    iVar2 = local_14;
  }
  else {
    do {
      iVar1 = iVar1 + 1;
      iVar2 = local_14;
      if (0xff < iVar1) break;
      iVar2 = iVar1;
    } while (*(int *)(this + iVar1 * 0x40) != 0);
  }
  local_14 = iVar2;
  if (local_14 == -1) {
    UTIL_ClientPrintAll(3,"WARNING:cannot create bullet!\n",0,0,0,0);
  }
  else {
    iVar2 = local_14 * 0x40;
    *(int *)(this + iVar2) = param_1;
    pCVar5 = this + iVar2 + 0x1c;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar5 = *param_3;
      param_3 = param_3 + 1;
      pCVar5 = pCVar5 + 4;
    }
    *(undefined4 *)(this + iVar2 + 0x28) = *param_4;
    *(undefined4 *)(this + iVar2 + 0x2c) = *param_5;
    if ((*(int *)(param_1 + 0xa10) == 0) || (*(int *)(*(int *)(param_1 + 0xa10) + 0x88) != 0x10)) {
      *(undefined4 *)(this + local_14 * 0x40 + 0x30) = 0xffffffff;
    }
    else {
      *(undefined4 *)(this + iVar2 + 0x30) = *(undefined4 *)(*(int *)(param_1 + 0xa10) + 200);
    }
    pCVar5 = this + local_14 * 0x40;
    puVar3 = param_2;
    pCVar4 = pCVar5 + 0x10;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pCVar4 = pCVar4 + 4;
    }
    for (iVar1 = 3; pCVar5 = pCVar5 + 4, iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar5 = *param_2;
      param_2 = param_2 + 1;
    }
    if (*(float *)(param_1 + 0x180) == 0.0) {
      lVar6 = (longdouble)(**(code **)(*(int *)(param_1 + 0x60) + 0x10))(param_1);
      *(float *)(this + local_14 * 0x40 + 0x34) = (float)lVar6;
    }
    else {
      *(undefined4 *)(this + local_14 * 0x40 + 0x34) = *(undefined4 *)(param_1 + 0x180);
    }
    *(undefined4 *)(this + local_14 * 0x40 + 0x38) = 0;
    *(undefined4 *)(this + local_14 * 0x40 + 0x3c) = param_6;
    *(int *)(this + 0x4000) = *(int *)(this + 0x4000) + 1;
  }
  return;
}

/* 0006ef40  CBulletManager::DestroyBullet  (27 bytes)
 * undefined DestroyBullet(int param_1)
 */
/* CBulletManager::DestroyBullet(int) */

void __thiscall CBulletManager::DestroyBullet(CBulletManager *this,int param_1)

{
  int iVar1;
  CBulletManager *pCVar2;
  
  pCVar2 = this + param_1 * 0x40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = 0;
    pCVar2 = pCVar2 + 4;
  }
  return;
}

/* 0006ef5c  CBulletManager::UpdateBullet  (1419 bytes)
 * undefined UpdateBullet(int param_1, int param_2)
 */
/* CBulletManager::UpdateBullet(int, TraceResult *) */

void __thiscall CBulletManager::UpdateBullet(CBulletManager *this,int param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  edict_t *peVar3;
  undefined1 *puVar4;
  int iVar5;
  void *pvVar6;
  CBulletManager *pCVar7;
  float *pfVar8;
  float *pfVar9;
  CBulletManager *pCVar10;
  longdouble lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float local_78;
  float local_6c;
  float local_5c [4];
  float local_4c [4];
  float local_3c [4];
  float local_2c [7];
  
  local_78 = 1.0;
  pCVar7 = this + param_1 * 0x40;
  puVar2 = get_ammo_info((uint)*(float *)(pCVar7 + 0x2c));
  if (*(float *)((int)*(float *)pCVar7 + 0x180) == 0.0) {
    lVar11 = (longdouble)
             (**(code **)(*(int *)((int)*(float *)pCVar7 + 0x60) + 0x10))(*(float *)pCVar7);
    *(float *)(pCVar7 + 0x34) = (float)lVar11;
  }
  else {
    *(float *)(pCVar7 + 0x34) = *(float *)((int)*(float *)pCVar7 + 0x180);
  }
  lVar11 = GetBulletVelocityMult(*(float *)(pCVar7 + 0x34),*(char *)((int)*(float *)pCVar7 + 0x175))
  ;
  local_4c[2] = *(float *)(pCVar7 + 0x38) - gpGlobals->time;
  if (local_4c[2] < 0.001) {
    local_4c[2] = gpGlobals->frametime;
  }
  fVar1 = (float)(int)puVar2[9] * 40.0;
  local_5c[0] = fVar1 * *(float *)(pCVar7 + 0x1c);
  local_5c[1] = fVar1 * *(float *)(pCVar7 + 0x20);
  local_5c[2] = fVar1 * *(float *)(pCVar7 + 0x24);
  local_4c[0] = local_4c[2] * fVar1 * *(float *)(pCVar7 + 0x1c);
  local_4c[1] = local_4c[2] * fVar1 * *(float *)(pCVar7 + 0x20);
  local_4c[2] = local_4c[2] * fVar1 * *(float *)(pCVar7 + 0x24);
  local_3c[0] = (float)(lVar11 * (longdouble)local_4c[0]);
  local_3c[1] = (float)(lVar11 * (longdouble)local_4c[1]);
  local_3c[2] = (float)(lVar11 * (longdouble)local_4c[2]);
  pfVar8 = local_3c;
  pfVar9 = local_2c;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar9 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar9 = pfVar9 + 1;
  }
  local_5c[0] = *(float *)(pCVar7 + 4) + local_2c[0];
  local_5c[1] = *(float *)(pCVar7 + 8) + local_2c[1];
  local_5c[2] = *(float *)(pCVar7 + 0xc) + local_2c[2];
  UTIL_TraceLine_Expanded(pCVar7 + 4,local_5c,0,*(undefined4 *)(**(int **)pCVar7 + 0x208),param_2);
  if (*(float *)(param_2 + 0x10) == 1.0) {
    local_5c[0] = *(float *)(pCVar7 + 4) + local_2c[0];
    local_5c[1] = *(float *)(pCVar7 + 8) + local_2c[1];
    local_5c[2] = *(float *)(pCVar7 + 0xc) + local_2c[2];
    pfVar8 = local_5c;
    for (iVar5 = 3; pCVar7 = pCVar7 + 4, iVar5 != 0; iVar5 = iVar5 + -1) {
      *(float *)pCVar7 = *pfVar8;
      pfVar8 = pfVar8 + 1;
    }
  }
  else {
    pfVar8 = (float *)(param_2 + 0x14);
    pCVar10 = pCVar7 + 4;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(float *)pCVar10 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pCVar10 = pCVar10 + 4;
    }
    peVar3 = *(edict_t **)(param_2 + 0x30);
    if (peVar3 == (edict_t *)0x0) {
      peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    pvVar6 = (void *)0x0;
    if (peVar3 != (edict_t *)0x0) {
      pvVar6 = peVar3->pvPrivateData;
    }
    if (*(float *)(pCVar7 + 0x3c) == 2.8026e-45) {
      local_5c[0] = *(float *)(pCVar7 + 0x10) - *(float *)(pCVar7 + 4);
      local_5c[1] = *(float *)(pCVar7 + 0x14) - *(float *)(pCVar7 + 8);
      local_5c[2] = *(float *)(pCVar7 + 0x18) - *(float *)(pCVar7 + 0xc);
      lVar11 = get_range_multipler((int)ROUND(SQRT(local_5c[2] * local_5c[2] +
                                                   local_5c[1] * local_5c[1] +
                                                   local_5c[0] * local_5c[0]) * 0.0033333334 * 10.0)
                                  );
      local_6c = (float)(lVar11 * (longdouble)*(float *)(pCVar7 + 0x28));
    }
    else {
      local_5c[0] = *(float *)(pCVar7 + 0x10) - *(float *)(pCVar7 + 4);
      local_5c[1] = *(float *)(pCVar7 + 0x14) - *(float *)(pCVar7 + 8);
      local_5c[2] = *(float *)(pCVar7 + 0x18) - *(float *)(pCVar7 + 0xc);
      lVar11 = get_range_multipler((int)ROUND((SQRT(local_5c[2] * local_5c[2] +
                                                    local_5c[1] * local_5c[1] +
                                                    local_5c[0] * local_5c[0]) /
                                              ((float)(int)puVar2[8] * 10.0)) * 10.0));
      local_6c = (float)(lVar11 * (longdouble)*(float *)(pCVar7 + 0x28));
      if ((0.0 < (float)damagemult._12_4_) && (g_flWeaponCheat != 0.0)) {
        local_78 = (float)damagemult._12_4_;
      }
    }
    fVar1 = *(float *)(pCVar7 + 0x3c);
    glast_weaponid = *(float *)(pCVar7 + 0x30);
    ClearMultiDamage();
    local_5c[0] = *(float *)(pCVar7 + 0x1c);
    local_5c[1] = *(float *)(pCVar7 + 0x20);
    local_5c[2] = *(float *)(pCVar7 + 0x24);
    (**(code **)(*(int *)((int)pvVar6 + 0x60) + 0x54))
              (pvVar6,**(undefined4 **)pCVar7,local_6c * local_78,local_5c,param_2,
               ((fVar1 == 1.4013e-45) - 1 & 0xfe000000) + 0x2001002);
    ApplyMultiDamage(**(undefined4 **)pCVar7,**(undefined4 **)pCVar7);
    glast_weaponid = -NAN;
    if ((g_flWeaponCheat != 0.0) &&
       (lVar11 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("dmgreport"), (longdouble)1.0 < lVar11))
    {
      iVar14 = 0;
      iVar13 = 0;
      iVar12 = 0;
      iVar5 = 0;
      puVar4 = UTIL_VarArgs("damage:%f\n",(double)(local_6c * local_78));
      UTIL_ClientPrintAll(3,puVar4,iVar5,iVar12,iVar13,iVar14);
    }
    local_6c = local_6c * (float)puVar2[6];
    iVar5 = (**(code **)(*(int *)((int)pvVar6 + 0x60) + 200))(pvVar6);
    if (iVar5 != 0) {
      local_6c = local_6c * 0.5;
    }
    if ((1 < (int)*(float *)(pCVar7 + 0x3c) - 1U) && (5.0 < local_6c)) {
      fVar1 = local_6c;
      if (48.0 < local_6c) {
        fVar1 = 48.0;
      }
      local_3c[0] = fVar1 * *(float *)(pCVar7 + 0x1c);
      local_3c[1] = fVar1 * *(float *)(pCVar7 + 0x20);
      local_3c[2] = fVar1 * *(float *)(pCVar7 + 0x24);
      local_4c[0] = *(float *)(param_2 + 0x14) + fVar1 * *(float *)(pCVar7 + 0x1c);
      local_4c[1] = *(float *)(param_2 + 0x18) + fVar1 * *(float *)(pCVar7 + 0x20);
      local_4c[2] = *(float *)(param_2 + 0x1c) + fVar1 * *(float *)(pCVar7 + 0x24);
      pfVar8 = local_4c;
      pfVar9 = local_5c;
      for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar9 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar9 = pfVar9 + 1;
      }
      iVar5 = UTIL_PointContents(local_5c);
      if (iVar5 != -2) {
        pfVar8 = local_5c;
        pCVar10 = pCVar7;
        for (iVar5 = 3; pCVar10 = pCVar10 + 4, iVar5 != 0; iVar5 = iVar5 + -1) {
          *(float *)pCVar10 = *pfVar8;
          pfVar8 = pfVar8 + 1;
        }
        pfVar8 = local_5c;
        pCVar10 = pCVar7 + 0x10;
        for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(float *)pCVar10 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          pCVar10 = pCVar10 + 4;
        }
        *(float *)(pCVar7 + 0x28) = local_6c * local_78;
        *(float *)(pCVar7 + 0x3c) = 2.8026e-45;
        return;
      }
    }
    DestroyBullet(this,param_1);
  }
  return;
}

/* 0006f4f0  CBulletManager::UpdateBulletTimeSlice  (1 bytes)
 * undefined UpdateBulletTimeSlice(void)
 */
/* CBulletManager::UpdateBulletTimeSlice(float, CBasePlayer *) */

void CBulletManager::UpdateBulletTimeSlice(void)

{
  return;
}

