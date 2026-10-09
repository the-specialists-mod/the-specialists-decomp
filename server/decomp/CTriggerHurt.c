/* ts_i386.so - CTriggerHurt (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e6f60  CTriggerHurt::Spawn  (218 bytes)
 * undefined Spawn(void)
 */
/* CTriggerHurt::Spawn(void) */

void __thiscall CTriggerHurt::Spawn(CTriggerHurt *this)

{
  longdouble lVar1;
  
  CBaseTrigger::InitTrigger((CBaseTrigger *)this);
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = CBaseTrigger::HurtTouch;
  if (this->pev->targetname == 0) {
    *(undefined4 *)&this->field_0x1c = 0;
    *(undefined4 *)&this->field_0x20 = 0;
  }
  else {
    *(undefined4 *)&this->field_0x1c = 0xffff0000;
    *(code **)&this->field_0x20 = CBaseTrigger::ToggleUse;
  }
  if ((this->field_0xfe & 4) != 0) {
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = RadiationThink;
    lVar1 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.0,0.5);
    this->pev->nextthink = (float)(lVar1 + (longdouble)gpGlobals->time);
  }
  if ((this->pev->spawnflags & 2) != 0) {
    this->pev->solid = 0;
  }
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  return;
}

/* 000e703c  CTriggerHurt::RadiationThink  (810 bytes)
 * undefined RadiationThink(void)
 */
/* CTriggerHurt::RadiationThink(void) */

void __thiscall CTriggerHurt::RadiationThink(CTriggerHurt *this)

{
  entvars_t *peVar1;
  bool bVar2;
  float fVar3;
  edict_t *pEdict;
  CBasePlayer *pCVar4;
  int iVar5;
  vec_t *pvVar6;
  uint uVar7;
  float *pfVar8;
  vec_t *pvVar9;
  float *pfVar10;
  float local_8c [4];
  float local_7c [4];
  vec_t local_6c [4];
  vec_t local_5c [4];
  float local_4c [4];
  float local_3c [4];
  float local_2c [7];
  
  pvVar6 = this->pev->origin;
  pvVar9 = local_5c;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar9 = *pvVar6;
    pvVar6 = pvVar6 + 1;
    pvVar9 = pvVar9 + 1;
  }
  pvVar6 = this->pev->view_ofs;
  pvVar9 = local_6c;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar9 = *pvVar6;
    pvVar6 = pvVar6 + 1;
    pvVar9 = pvVar9 + 1;
  }
  peVar1 = this->pev;
  local_8c[0] = peVar1->absmin[0] + peVar1->absmax[0];
  local_8c[1] = peVar1->absmin[1] + peVar1->absmax[1];
  local_8c[2] = peVar1->absmin[2] + peVar1->absmax[2];
  local_7c[0] = local_8c[0] * 0.5;
  local_7c[1] = local_8c[1] * 0.5;
  local_7c[2] = local_8c[2] * 0.5;
  pfVar8 = local_7c;
  pvVar6 = peVar1->origin;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar6 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pvVar6 = pvVar6 + 1;
  }
  peVar1 = this->pev;
  local_8c[0] = peVar1->view_ofs[0] * 0.0;
  local_8c[1] = peVar1->view_ofs[1] * 0.0;
  local_8c[2] = peVar1->view_ofs[2] * 0.0;
  pfVar8 = local_8c;
  pvVar6 = peVar1->view_ofs;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar6 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pvVar6 = pvVar6 + 1;
  }
  pEdict = (*g_engfuncs.pfnFindClientInPVS)(this->pev->pContainingEntity);
  pvVar6 = local_5c;
  pvVar9 = this->pev->origin;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar9 = *pvVar6;
    pvVar6 = pvVar6 + 1;
    pvVar9 = pvVar9 + 1;
  }
  pvVar6 = local_6c;
  pvVar9 = this->pev->view_ofs;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar9 = *pvVar6;
    pvVar6 = pvVar6 + 1;
    pvVar9 = pvVar9 + 1;
  }
  bVar2 = false;
  if ((pEdict == (edict_t *)0x0) ||
     (iVar5 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar5 == 0)) {
    bVar2 = true;
  }
  if (!bVar2) {
    pCVar4 = GetClassPtr<CBasePlayer>((pEdict == (edict_t *)0x0) - 1 & (uint)&pEdict->v);
    uVar7 = (uint)&pEdict->v & (pEdict == (edict_t *)0x0) - 1;
    peVar1 = this->pev;
    local_7c[0] = peVar1->absmin[0] + peVar1->absmax[0];
    local_7c[1] = peVar1->absmin[1] + peVar1->absmax[1];
    local_7c[2] = peVar1->absmin[2] + peVar1->absmax[2];
    local_8c[0] = local_7c[0] * 0.5;
    local_8c[1] = local_7c[1] * 0.5;
    local_8c[2] = local_7c[2] * 0.5;
    pfVar8 = local_8c;
    pfVar10 = local_2c;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar10 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar10 = pfVar10 + 1;
    }
    local_7c[0] = *(float *)(uVar7 + 0xc4) + *(float *)(uVar7 + 0xd0);
    local_7c[1] = *(float *)(uVar7 + 200) + *(float *)(uVar7 + 0xd4);
    local_7c[2] = *(float *)(uVar7 + 0xcc) + *(float *)(uVar7 + 0xd8);
    local_8c[0] = local_7c[0] * 0.5;
    local_8c[1] = local_7c[1] * 0.5;
    local_8c[2] = local_7c[2] * 0.5;
    pfVar8 = local_8c;
    pfVar10 = local_3c;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar10 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar10 = pfVar10 + 1;
    }
    local_8c[0] = local_2c[0] - local_3c[0];
    local_8c[1] = local_2c[1] - local_3c[1];
    local_8c[2] = local_2c[2] - local_3c[2];
    pfVar8 = local_8c;
    pfVar10 = local_4c;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar10 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar10 = pfVar10 + 1;
    }
    fVar3 = SQRT(local_4c[2] * local_4c[2] + local_4c[1] * local_4c[1] + local_4c[0] * local_4c[0]);
    if (fVar3 <= *(float *)&pCVar4->field_0x984) {
      *(float *)&pCVar4->field_0x984 = fVar3;
    }
  }
  this->pev->nextthink = gpGlobals->time + 0.25;
  return;
}

