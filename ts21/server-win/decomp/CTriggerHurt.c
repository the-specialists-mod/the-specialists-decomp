/* mp.dll - CTriggerHurt (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003a760  CTriggerHurt::Spawn  (136 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTriggerHurt::Spawn(int param_1)

{
  float10 fVar1;
  
  CBaseTrigger::InitTrigger(param_1);
  *(code **)(param_1 + 0x14) = CBaseTrigger::HurtTouch;
  if (*(int *)(*(int *)(param_1 + 4) + 0x1cc) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    *(code **)(param_1 + 0x18) = CBaseTrigger::ToggleUse;
  }
  if ((*(uint *)(param_1 + 0xe8) & 0x40000) != 0) {
    *(code **)(param_1 + 0x10) = RadiationThink;
    fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,0.5);
    *(float *)(*(int *)(param_1 + 4) + 0x104) = (float)(fVar1 + (float10)gpGlobals->time);
  }
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  }
  FUN_100679a0();
  return;
}

/* 1003a7f0  CTriggerHurt::RadiationThink  (577 bytes)
 * void RadiationThink(void)
 */
/* public: void __thiscall CTriggerHurt::RadiationThink(void) */

void __thiscall CTriggerHurt::RadiationThink(CTriggerHurt *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  entvars_t *peVar5;
  vec_t vVar6;
  vec_t vVar7;
  vec_t vVar8;
  vec_t vVar9;
  vec_t vVar10;
  vec_t vVar11;
  edict_t *pEdict;
  int iVar12;
  
                    /* 0x3a7f0  79  ?RadiationThink@CTriggerHurt@@QAEXXZ */
  peVar5 = this->pev;
  fVar1 = peVar5->absmax[1];
  fVar2 = peVar5->absmin[1];
  fVar3 = peVar5->absmax[2];
  fVar4 = peVar5->absmin[2];
  vVar6 = peVar5->origin[0];
  vVar7 = peVar5->origin[1];
  vVar8 = peVar5->origin[2];
  vVar9 = peVar5->view_ofs[0];
  vVar10 = peVar5->view_ofs[1];
  vVar11 = peVar5->view_ofs[2];
  peVar5->origin[0] = (peVar5->absmax[0] + peVar5->absmin[0]) * 0.5;
  peVar5->origin[1] = (fVar1 + fVar2) * 0.5;
  peVar5->origin[2] = (fVar3 + fVar4) * 0.5;
  peVar5 = this->pev;
  fVar1 = peVar5->view_ofs[1];
  fVar2 = peVar5->view_ofs[2];
  peVar5->view_ofs[0] = peVar5->view_ofs[0] * 0.0;
  peVar5->view_ofs[1] = fVar1 * 0.0;
  peVar5->view_ofs[2] = fVar2 * 0.0;
  pEdict = (*g_engfuncs.pfnFindClientInPVS)(this->pev->pContainingEntity);
  peVar5 = this->pev;
  peVar5->origin[0] = vVar6;
  peVar5->origin[1] = vVar7;
  peVar5->origin[2] = vVar8;
  peVar5 = this->pev;
  peVar5->view_ofs[0] = vVar9;
  peVar5->view_ofs[1] = vVar10;
  peVar5->view_ofs[2] = vVar11;
  if ((pEdict != (edict_t *)0x0) &&
     (iVar12 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar12 != 0)) {
    iVar12 = GetClassPtr<CBasePlayer>((int)&pEdict->v);
    peVar5 = this->pev;
    fVar3 = (peVar5->absmax[0] + peVar5->absmin[0]) * 0.5 -
            ((pEdict->v).absmin[0] + (pEdict->v).absmax[0]) * 0.5;
    fVar1 = (peVar5->absmax[1] + peVar5->absmin[1]) * 0.5 -
            ((pEdict->v).absmax[1] + (pEdict->v).absmin[1]) * 0.5;
    fVar2 = (peVar5->absmax[2] + peVar5->absmin[2]) * 0.5 -
            ((pEdict->v).absmax[2] + (pEdict->v).absmin[2]) * 0.5;
    fVar1 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
    if (fVar1 < *(float *)(iVar12 + 0x8e0) != (fVar1 == *(float *)(iVar12 + 0x8e0))) {
      *(float *)(iVar12 + 0x8e0) = fVar1;
    }
  }
  this->pev->nextthink = gpGlobals->time + 0.25;
  return;
}

