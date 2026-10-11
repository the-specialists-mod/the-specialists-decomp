/* mp.dll - CGibShooter (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001b9e0  CGibShooter::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CGibShooter::Save(CBaseDelay *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CGibShooter_1009df78,(int)param_1,0x1009dc20,7);
  return;
}

/* 1001ba10  CGibShooter::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CGibShooter::Restore(CBaseDelay *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CGibShooter_1009df78,(int)param_1,&DAT_1009dc20,7)
  ;
  return;
}

/* 1001ba50  CGibShooter::Precache  (51 bytes)
 * undefined Precache()
 */
void __fastcall CGibShooter::Precache(int param_1)

{
  int iVar1;
  
  if (DAT_100ae4a8 == 1) {
    iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_models_germanygibs_mdl_1009df84);
    *(int *)(param_1 + 0x68) = iVar1;
    return;
  }
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_models_hgibs_mdl_1009d5ec);
  *(int *)(param_1 + 0x68) = iVar1;
  return;
}

/* 1001ba90  CGibShooter::KeyValue  (355 bytes)
 * undefined KeyValue(int param_1)
 * called by: CEnvShooter::KeyValue
 */
void __thiscall CGibShooter::KeyValue(CGibShooter *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  CGibShooter *this_00;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  float10 fVar10;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_1 + 4);
  pbVar7 = &DAT_1009dcf0;
  pbVar2 = pbVar5;
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CGibShooter *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_1001bac8:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1001bacd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CGibShooter *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_1001bac8;
    pbVar2 = pbVar2 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001bacd:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x60 = uVar4;
    *(undefined4 *)&this->field_0x5c = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_flVelocity_1009df9c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CGibShooter *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1001bb1c:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1001bb21;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CGibShooter *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1001bb1c;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001bb21:
  if (iVar3 == 0) {
    fVar10 = atof((undefined *)this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x6c = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_flVariance_1009dc9c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CGibShooter *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1001bb6d:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1001bb72;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CGibShooter *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1001bb6d;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001bb72:
  if (iVar3 == 0) {
    fVar10 = atof((undefined *)this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x70 = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_m_flGibLife_1009dc90;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CGibShooter *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1001bbbe:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1001bbc3;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this_00 = (CGibShooter *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1001bbbe;
    pbVar5 = pbVar5 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001bbc3:
  if (iVar3 == 0) {
    fVar10 = atof((undefined *)this_00,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x74 = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
  return;
}

/* 1001bc00  CGibShooter::Use  (27 bytes)
 * undefined Use()
 */
void __fastcall CGibShooter::Use(int param_1)

{
  *(code **)(param_1 + 0x10) = ShootThink;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time;
  return;
}

/* 1001bc20  CGibShooter::Spawn  (113 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CGibShooter::Spawn(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x20))();
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x118) = 0x80;
  if ((float)param_1[0x15] == 0.0) {
    param_1[0x15] = 0x3dcccccd;
  }
  if ((float)param_1[0x1d] == 0.0) {
    param_1[0x1d] = 0x41c80000;
  }
  SetMovedir(param_1[1]);
  iVar1 = (*g_engfuncs.pfnModelFrames)(param_1[0x1a]);
  *(int *)(param_1[1] + 0x114) = iVar1;
  return;
}

/* 1001bca0  CGibShooter::CreateGib  (130 bytes)
 * undefined CreateGib()
 */
void * __fastcall CGibShooter::CreateGib(int param_1)

{
  void *this;
  int iVar1;
  float10 extraout_ST0;
  
  (*g_engfuncs.pfnCVarGetFloat)(s_violence_hgibs_1009d63c);
  if (extraout_ST0 == (float10)0.0) {
    return (void *)0x0;
  }
  this = (void *)FUN_10015970(0);
  FUN_10013d40(this,s_models_hgibs_mdl_1009d5ec);
  *(undefined4 *)((int)this + 0x54) = 0xf7;
  if (*(int *)(*(int *)(param_1 + 4) + 0x114) < 2) {
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_GibShooter_Body_is_<__1__1009dfac);
  }
  iVar1 = (*g_engfuncs.pfnRandomLong)(1,*(int *)(*(int *)(param_1 + 4) + 0x114) + -1);
  *(int *)(*(int *)((int)this + 4) + 0x114) = iVar1;
  return this;
}

/* 1001bd30  CGibShooter::ShootThink  (964 bytes)
 * void ShootThink(void)
 */
/* public: void __thiscall CGibShooter::ShootThink(void) */

void __thiscall CGibShooter::ShootThink(CGibShooter *this)

{
  vec_t *pvVar1;
  float fVar2;
  float fVar3;
  entvars_t *peVar4;
  int iVar5;
  globalvars_t *pgVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int iVar9;
  float10 fVar10;
  Vector local_54;
  Vector VStack_48;
  Vector VStack_3c;
  Vector VStack_30;
  Vector VStack_24;
  Vector VStack_18;
  Vector VStack_c;
  
                    /* 0x1bd30  101  ?ShootThink@CGibShooter@@QAEXXZ */
  this->pev->nextthink = *(float *)&this->field_0x54 + gpGlobals->time;
  pgVar6 = gpGlobals;
  peVar4 = this->pev;
  local_54.x = peVar4->movedir[0];
  local_54.y = peVar4->movedir[1];
  pvVar1 = gpGlobals->v_right;
  local_54.z = peVar4->movedir[2];
  fVar10 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
  VStack_48.x = (float)(fVar10 * (float10)*pvVar1);
  VStack_48.y = (float)(fVar10 * (float10)pgVar6->v_right[1]);
  VStack_48.z = (float)(fVar10 * (float10)pgVar6->v_right[2]);
  Vector::Vector(&VStack_3c,&VStack_48.x);
  VStack_30.z = *(float *)&this->field_0x70;
  VStack_30.x = VStack_3c.x * VStack_30.z;
  VStack_30.y = VStack_3c.y * VStack_30.z;
  VStack_30.z = VStack_3c.z * VStack_30.z;
  Vector::Vector(&VStack_24,&VStack_30.x);
  VStack_18.x = VStack_24.x + local_54.x;
  VStack_18.y = local_54.y + VStack_24.y;
  VStack_18.z = local_54.z + VStack_24.z;
  Vector::Vector(&VStack_c,&VStack_18.x);
  pgVar6 = gpGlobals;
  local_54.x = VStack_c.x;
  local_54.y = VStack_c.y;
  local_54.z = VStack_c.z;
  pvVar1 = gpGlobals->v_forward;
  fVar10 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
  VStack_c.x = (float)(fVar10 * (float10)*pvVar1);
  VStack_c.y = (float)(fVar10 * (float10)pgVar6->v_forward[1]);
  VStack_c.z = (float)(fVar10 * (float10)pgVar6->v_forward[2]);
  Vector::Vector(&VStack_18,&VStack_c.x);
  VStack_24.z = *(float *)&this->field_0x70;
  VStack_24.x = VStack_18.x * VStack_24.z;
  VStack_24.y = VStack_18.y * VStack_24.z;
  VStack_24.z = VStack_18.z * VStack_24.z;
  Vector::Vector(&VStack_30,&VStack_24.x);
  VStack_3c.x = VStack_30.x + local_54.x;
  VStack_3c.y = local_54.y + VStack_30.y;
  VStack_3c.z = local_54.z + VStack_30.z;
  Vector::Vector(&VStack_48,&VStack_3c.x);
  pgVar6 = gpGlobals;
  local_54.x = VStack_48.x;
  local_54.y = VStack_48.y;
  local_54.z = VStack_48.z;
  pvVar1 = gpGlobals->v_up;
  fVar10 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
  VStack_c.x = (float)(fVar10 * (float10)*pvVar1);
  VStack_c.y = (float)(fVar10 * (float10)pgVar6->v_up[1]);
  VStack_c.z = (float)(fVar10 * (float10)pgVar6->v_up[2]);
  Vector::Vector(&VStack_18,&VStack_c.x);
  fVar2 = *(float *)&this->field_0x70;
  puVar7 = (undefined4 *)
           Vector::Vector(&VStack_3c,VStack_18.x * fVar2,VStack_18.y * fVar2,VStack_18.z * fVar2);
  Vector::Vector(&VStack_24,puVar7);
  puVar7 = (undefined4 *)
           Vector::Vector(&VStack_48,VStack_24.x + local_54.x,local_54.y + VStack_24.y,
                          local_54.z + VStack_24.z);
  Vector::Vector(&VStack_30,puVar7);
  local_54.x = VStack_30.x;
  local_54.y = VStack_30.y;
  local_54.z = VStack_30.z;
  pfVar8 = (float *)FUN_100148f0(&local_54,&VStack_c.x);
  local_54.x = *pfVar8;
  local_54.y = pfVar8[1];
  local_54.z = pfVar8[2];
  iVar9 = (*this->vtable[0x43])();
  if (iVar9 != 0) {
    peVar4 = this->pev;
    iVar5 = *(int *)(iVar9 + 4);
    *(vec_t *)(iVar5 + 8) = peVar4->origin[0];
    *(vec_t *)(iVar5 + 0xc) = peVar4->origin[1];
    *(vec_t *)(iVar5 + 0x10) = peVar4->origin[2];
    puVar7 = (undefined4 *)Vector::operator*(&local_54,&VStack_c.x,*(float *)&this->field_0x6c);
    iVar5 = *(int *)(iVar9 + 4);
    *(undefined4 *)(iVar5 + 0x20) = *puVar7;
    *(undefined4 *)(iVar5 + 0x24) = puVar7[1];
    *(undefined4 *)(iVar5 + 0x28) = puVar7[2];
    fVar10 = (float10)(*g_engfuncs.pfnRandomFloat)(100.0,200.0);
    *(float *)(*(int *)(iVar9 + 4) + 0x5c) = (float)fVar10;
    fVar10 = (float10)(*g_engfuncs.pfnRandomFloat)(100.0,300.0);
    *(float *)(*(int *)(iVar9 + 4) + 0x60) = (float)fVar10;
    fVar2 = *(float *)(*(int *)(iVar9 + 4) + 0x104);
    fVar3 = gpGlobals->time;
    fVar10 = (float10)(*g_engfuncs.pfnRandomFloat)(0.95,1.05);
    fVar10 = fVar10 * (float10)*(float *)&this->field_0x74;
    *(float *)(iVar9 + 0x60) = (float)fVar10;
    if (fVar10 < (float10)(fVar2 - fVar3)) {
      *(float *)(*(int *)(iVar9 + 4) + 0x104) = (float)(fVar10 + (float10)gpGlobals->time);
      *(undefined4 *)(iVar9 + 0x60) = 0;
    }
  }
  iVar9 = *(int *)&this->field_0x5c + -1;
  *(int *)&this->field_0x5c = iVar9;
  if (iVar9 < 1) {
    peVar4 = this->pev;
    if ((peVar4->spawnflags & 1) != 0) {
      *(undefined4 *)&this->field_0x10 = 0;
      *(undefined4 *)&this->field_0x5c = *(undefined4 *)&this->field_0x60;
      peVar4->nextthink = gpGlobals->time;
      return;
    }
    *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
    peVar4->nextthink = gpGlobals->time;
  }
  return;
}

