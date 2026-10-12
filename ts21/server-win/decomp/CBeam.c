/* mp.dll - CBeam (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100161b0  CBeam::Spawn  (18 bytes)
 * undefined Spawn()
 */
void __fastcall CBeam::Spawn(int *param_1)

{
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
                    /* WARNING: Could not recover jumptable at 0x100161bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

/* 100161d0  CBeam::Precache  (67 bytes)
 * undefined Precache(void * param_1)
 * called by: CLightning::Precache
 */
void __fastcall CBeam::Precache(void *param_1)

{
  edict_t *peVar1;
  uint uVar2;
  
  peVar1 = *(edict_t **)(*(int *)((int)param_1 + 4) + 0x198);
  if (peVar1 != (edict_t *)0x0) {
    uVar2 = (*g_engfuncs.pfnIndexOfEdict)(peVar1);
    FUN_10016220(param_1,uVar2);
  }
  peVar1 = *(edict_t **)(*(int *)((int)param_1 + 4) + 0x194);
  if (peVar1 != (edict_t *)0x0) {
    uVar2 = (*g_engfuncs.pfnIndexOfEdict)(peVar1);
    FUN_10016270(param_1,uVar2);
  }
  return;
}

/* 10016350  CBeam::BeamCreate  (58 bytes)
 * void * BeamCreate(int param_1, int param_2)
 * called by: CTestEffect::TestThink
 */
void * __cdecl CBeam::BeamCreate(int param_1,int param_2)

{
  CBeam *this;
  
  this = (CBeam *)GetClassPtr<CBeam>(0);
  this->pev->classname = (int)&DAT_10092d48 - (int)gpGlobals->pStringBase;
  BeamInit(this,param_1,param_2);
  return this;
}

/* 10016390  CBeam::BeamInit  (190 bytes)
 * undefined BeamInit(int param_1, int param_2)
 * called by: CBeam::BeamCreate
 */
void __thiscall CBeam::BeamInit(CBeam *this,int param_1,int param_2)

{
  int iVar1;
  
  this->pev->flags = this->pev->flags | 0x20000000;
  this->pev->rendercolor[0] = 255.0;
  this->pev->rendercolor[1] = 255.0;
  this->pev->rendercolor[2] = 255.0;
  this->pev->renderamt = 255.0;
  this->pev->body = 0;
  this->pev->frame = 0.0;
  this->pev->animtime = 0.0;
  this->pev->model = param_1 - (int)gpGlobals->pStringBase;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)((char *)param_1);
  this->pev->modelindex = iVar1;
  this->pev->scale = (float)param_2;
  this->pev->skin = 0;
  this->pev->sequence = 0;
  this->pev->rendermode = 0;
  return;
}

/* 10016450  CBeam::PointsInit  (114 bytes)
 * undefined PointsInit(undefined4 * param_1, undefined4 * param_2)
 * called by: CLaser::Spawn, CTestEffect::TestThink
 */
void __thiscall CBeam::PointsInit(CBeam *this,undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  entvars_t *peVar2;
  
  this->pev->rendermode = this->pev->rendermode & 0xf0;
  peVar2 = this->pev;
  peVar2->origin[0] = (vec_t)*param_1;
  peVar2->origin[1] = (vec_t)param_1[1];
  peVar2->origin[2] = (vec_t)param_1[2];
  peVar2 = this->pev;
  peVar2->angles[0] = (vec_t)*param_2;
  peVar2->angles[1] = (vec_t)param_2[1];
  peVar2->angles[2] = (vec_t)param_2[2];
  this->pev->sequence = this->pev->sequence & 0xfff;
  piVar1 = &this->pev->skin;
  *piVar1 = *piVar1 & 0xfff;
  RelinkBeam((int)this);
  return;
}

/* 10016640  CBeam::RelinkBeam  (378 bytes)
 * undefined RelinkBeam(int param_1)
 * called by: CBeam::PointsInit, CLightning::BeamUpdateVars, FUN_10016550, FUN_100165d0, FUN_10017220
 */
void __fastcall CBeam::RelinkBeam(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  
  pfVar3 = (float *)FUN_100162c0(param_1);
  pfVar4 = (float *)FUN_10016300(param_1);
  if (*pfVar4 <= *pfVar3) {
    fVar1 = *pfVar4;
  }
  else {
    fVar1 = *pfVar3;
  }
  *(float *)(*(int *)(param_1 + 4) + 0xdc) = fVar1;
  if (pfVar4[1] <= pfVar3[1]) {
    fVar1 = pfVar4[1];
  }
  else {
    fVar1 = pfVar3[1];
  }
  *(float *)(*(int *)(param_1 + 4) + 0xe0) = fVar1;
  if (pfVar4[2] <= pfVar3[2]) {
    fVar1 = pfVar4[2];
  }
  else {
    fVar1 = pfVar3[2];
  }
  *(float *)(*(int *)(param_1 + 4) + 0xe4) = fVar1;
  if (*pfVar3 <= *pfVar4) {
    fVar1 = *pfVar4;
  }
  else {
    fVar1 = *pfVar3;
  }
  *(float *)(*(int *)(param_1 + 4) + 0xe8) = fVar1;
  if (pfVar3[1] <= pfVar4[1]) {
    fVar1 = pfVar4[1];
  }
  else {
    fVar1 = pfVar3[1];
  }
  *(float *)(*(int *)(param_1 + 4) + 0xec) = fVar1;
  if (pfVar3[2] <= pfVar4[2]) {
    fVar1 = pfVar4[2];
  }
  else {
    fVar1 = pfVar3[2];
  }
  *(float *)(*(int *)(param_1 + 4) + 0xf0) = fVar1;
  iVar2 = *(int *)(param_1 + 4);
  *(float *)(iVar2 + 0xdc) = *(float *)(iVar2 + 0xdc) - *(float *)(iVar2 + 8);
  *(float *)(iVar2 + 0xe0) = *(float *)(iVar2 + 0xe0) - *(float *)(iVar2 + 0xc);
  *(float *)(iVar2 + 0xe4) = *(float *)(iVar2 + 0xe4) - *(float *)(iVar2 + 0x10);
  iVar2 = *(int *)(param_1 + 4);
  *(float *)(iVar2 + 0xe8) = *(float *)(iVar2 + 0xe8) - *(float *)(iVar2 + 8);
  *(float *)(iVar2 + 0xec) = *(float *)(iVar2 + 0xec) - *(float *)(iVar2 + 0xc);
  *(float *)(iVar2 + 0xf0) = *(float *)(iVar2 + 0xf0) - *(float *)(iVar2 + 0x10);
  FUN_10067970();
  FUN_100679a0();
  return;
}

/* 100167c0  CBeam::TriggerTouch  (71 bytes)
 * void TriggerTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CBeam::TriggerTouch(class CBaseEntity *) */

void __thiscall CBeam::TriggerTouch(CBeam *this,CBaseEntity *param_1)

{
  edict_t *peVar1;
  
                    /* 0x167c0  119  ?TriggerTouch@CBeam@@QAEXPAVCBaseEntity@@@Z */
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a4) & 0x28) != 0) {
    peVar1 = this->pev->owner;
    if (peVar1 != (edict_t *)0x0) {
      (**(code **)(*(int *)peVar1->pvPrivateData + 0xc0))(param_1,this,3,0);
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Firing_targets____10092d50);
  }
  return;
}

/* 1001a2b0  CBeam::ObjectCaps  (21 bytes)
 * undefined ObjectCaps()
 */
undefined4 __fastcall CBeam::ObjectCaps(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((char)((uint)*(undefined4 *)(*(int *)(param_1 + 4) + 0x1a0) >> 8) < '\0') {
    uVar1 = 0x80000000;
  }
  return uVar1;
}

/* 1001a2d0  CBeam::Center  (85 bytes)
 * undefined Center()
 */
void __thiscall CBeam::Center(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  
  pfVar5 = (float *)FUN_100162c0(param_1);
  pfVar6 = (float *)FUN_10016300(param_1);
  fVar1 = pfVar6[1];
  fVar2 = pfVar5[1];
  fVar3 = pfVar6[2];
  fVar4 = pfVar5[2];
  *param_2 = (*pfVar6 + *pfVar5) * 0.5;
  param_2[1] = (fVar1 + fVar2) * 0.5;
  param_2[2] = (fVar3 + fVar4) * 0.5;
  return;
}

