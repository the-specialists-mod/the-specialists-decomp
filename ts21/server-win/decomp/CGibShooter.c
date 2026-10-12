/* mp.dll - CGibShooter (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10018960  CGibShooter::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CGibShooter::Save(CBaseDelay *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CGibShooter_10092e80,(int)param_1,0x10092b28,7);
  return;
}

/* 10018990  CGibShooter::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CGibShooter::Restore(CBaseDelay *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CGibShooter_10092e80,(int)param_1,0x10092b28,7);
  return;
}

/* 100189d0  CGibShooter::Precache  (51 bytes)
 * undefined Precache()
 */
void __fastcall CGibShooter::Precache(int param_1)

{
  int iVar1;
  
  if (DAT_1009f4b8 == 1) {
    iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_models_germanygibs_mdl_10092e8c);
    *(int *)(param_1 + 0x68) = iVar1;
    return;
  }
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_models_hgibs_mdl_10092508);
  *(int *)(param_1 + 0x68) = iVar1;
  return;
}

/* 10018a10  CGibShooter::KeyValue  (219 bytes)
 * undefined KeyValue(int param_1)
 * called by: CEnvShooter::KeyValue
 */
void __thiscall CGibShooter::KeyValue(CGibShooter *this,int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  float10 fVar7;
  
  pcVar4 = *(char **)(param_1 + 4);
  puVar2 = &DAT_00000008;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = &DAT_10092bf8;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    uVar1 = FUN_1006e1dd(puVar2,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x60 = uVar1;
    *(undefined4 *)&this->field_0x5c = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0xd;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_m_flVelocity_10092ea4;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    fVar7 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x6c = (float)fVar7;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0xd;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_m_flVariance_10092ba4;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    fVar7 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x70 = (float)fVar7;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0xc;
  bVar6 = true;
  pcVar3 = s_m_flGibLife_10092b98;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar4 == *pcVar3;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar6);
  if (bVar6) {
    fVar7 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x74 = (float)fVar7;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
  return;
}

/* 10018af0  CGibShooter::Use  (27 bytes)
 * undefined Use()
 */
void __fastcall CGibShooter::Use(int param_1)

{
  *(code **)(param_1 + 0x10) = ShootThink;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time;
  return;
}

/* 10018b10  CGibShooter::Spawn  (113 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CGibShooter::Spawn(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x10))();
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

/* 10018b90  CGibShooter::CreateGib  (130 bytes)
 * undefined CreateGib()
 */
void * __fastcall CGibShooter::CreateGib(int param_1)

{
  void *this;
  int iVar1;
  float10 extraout_ST0;
  
  (*g_engfuncs.pfnCVarGetFloat)(s_violence_hgibs_10092558);
  if (extraout_ST0 == (float10)0.0) {
    return (void *)0x0;
  }
  this = (void *)FUN_100135e0(0);
  FUN_100114d0(this,s_models_hgibs_mdl_10092508);
  *(undefined4 *)((int)this + 0x54) = 0xf7;
  if (*(int *)(*(int *)(param_1 + 4) + 0x114) < 2) {
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_GibShooter_Body_is_<__1__10092eb4);
  }
  iVar1 = (*g_engfuncs.pfnRandomLong)(1,*(int *)(*(int *)(param_1 + 4) + 0x114) + -1);
  *(int *)(*(int *)((int)this + 4) + 0x114) = iVar1;
  return this;
}

/* 10018c20  CGibShooter::ShootThink  (769 bytes)
 * void ShootThink(void)
 */
/* public: void __thiscall CGibShooter::ShootThink(void) */

void __thiscall CGibShooter::ShootThink(CGibShooter *this)

{
  vec_t *pvVar1;
  vec_t *pvVar2;
  float fVar3;
  entvars_t *peVar4;
  float fVar5;
  int iVar6;
  globalvars_t *pgVar7;
  globalvars_t *pgVar8;
  float *pfVar9;
  int iVar10;
  float10 fVar11;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
                    /* 0x18c20  94  ?ShootThink@CGibShooter@@QAEXXZ */
  this->pev->nextthink = *(float *)&this->field_0x54 + gpGlobals->time;
  pgVar7 = gpGlobals;
  peVar4 = this->pev;
  local_30 = peVar4->movedir[0];
  local_2c = peVar4->movedir[1];
  pvVar1 = gpGlobals->v_right;
  local_28 = peVar4->movedir[2];
  fVar11 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
  pgVar8 = gpGlobals;
  fVar5 = *(float *)&this->field_0x70;
  fStack_14 = (float)(fVar11 * (float10)pgVar7->v_right[1]);
  pvVar2 = gpGlobals->v_forward;
  fStack_10 = (float)(fVar11 * (float10)pgVar7->v_right[2]);
  fStack_4 = fStack_10 * fVar5;
  fStack_24 = (float)((float10)local_30 + fVar11 * (float10)*pvVar1 * (float10)fVar5);
  fStack_20 = local_2c + fStack_14 * fVar5;
  fStack_1c = local_28 + fStack_4;
  fVar11 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
  pgVar7 = gpGlobals;
  fVar5 = *(float *)&this->field_0x70;
  fStack_4 = (float)(fVar11 * (float10)pgVar8->v_forward[2]) * fVar5;
  pvVar1 = gpGlobals->v_up;
  fStack_18 = (float)(fVar11 * (float10)*pvVar2 * (float10)fVar5 + (float10)fStack_24);
  fStack_14 = (float)(fVar11 * (float10)pgVar8->v_forward[1]) * fVar5 + fStack_20;
  fStack_10 = fStack_4 + fStack_1c;
  fVar11 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
  fVar5 = *(float *)&this->field_0x70;
  fStack_20 = (float)(fVar11 * (float10)pgVar7->v_up[1]);
  fStack_1c = (float)(fVar11 * (float10)pgVar7->v_up[2]);
  FUN_1000c5f0(&fStack_c,(float)(fVar11 * (float10)*pvVar1 * (float10)fVar5 + (float10)fStack_18),
               fStack_20 * fVar5 + fStack_14,fStack_1c * fVar5 + fStack_10);
  local_30 = fStack_c;
  local_2c = (float)uStack_8;
  local_28 = fStack_4;
  pfVar9 = (float *)FUN_10011fc0(&local_30,&fStack_c);
  local_2c = pfVar9[1];
  local_30 = *pfVar9;
  local_28 = pfVar9[2];
  iVar10 = (*this->vtable[0x3c])();
  if (iVar10 != 0) {
    peVar4 = this->pev;
    iVar6 = *(int *)(iVar10 + 4);
    *(vec_t *)(iVar6 + 8) = peVar4->origin[0];
    *(vec_t *)(iVar6 + 0xc) = peVar4->origin[1];
    *(vec_t *)(iVar6 + 0x10) = peVar4->origin[2];
    fVar5 = *(float *)&this->field_0x6c;
    FUN_1000c5f0(&fStack_c,fVar5 * local_30,local_2c * fVar5,local_28 * fVar5);
    iVar6 = *(int *)(iVar10 + 4);
    *(float *)(iVar6 + 0x20) = fStack_c;
    *(undefined4 *)(iVar6 + 0x24) = uStack_8;
    *(float *)(iVar6 + 0x28) = fStack_4;
    fVar11 = (float10)(*g_engfuncs.pfnRandomFloat)(100.0,200.0);
    *(float *)(*(int *)(iVar10 + 4) + 0x5c) = (float)fVar11;
    fVar11 = (float10)(*g_engfuncs.pfnRandomFloat)(100.0,300.0);
    *(float *)(*(int *)(iVar10 + 4) + 0x60) = (float)fVar11;
    fVar5 = *(float *)(*(int *)(iVar10 + 4) + 0x104);
    fVar3 = gpGlobals->time;
    fVar11 = (float10)(*g_engfuncs.pfnRandomFloat)(0.95,1.05);
    fVar11 = fVar11 * (float10)*(float *)&this->field_0x74;
    *(float *)(iVar10 + 0x60) = (float)fVar11;
    if (fVar11 < (float10)(fVar5 - fVar3)) {
      *(float *)(*(int *)(iVar10 + 4) + 0x104) = (float)(fVar11 + (float10)gpGlobals->time);
      *(undefined4 *)(iVar10 + 0x60) = 0;
    }
  }
  iVar10 = *(int *)&this->field_0x5c + -1;
  *(int *)&this->field_0x5c = iVar10;
  if (iVar10 < 1) {
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

