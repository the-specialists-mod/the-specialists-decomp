/* mp.dll - CTriggerHurt (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10041310  CTriggerHurt::Spawn  (136 bytes)
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
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  return;
}

/* 100413a0  CTriggerHurt::RadiationThink  (751 bytes)
 * void RadiationThink(void)
 */
/* public: void __thiscall CTriggerHurt::RadiationThink(void) */

void __thiscall CTriggerHurt::RadiationThink(CTriggerHurt *this)

{
  entvars_t *peVar1;
  vec_t vVar2;
  vec_t vVar3;
  edict_t *pEdict;
  int iVar4;
  float10 fVar5;
  Vector local_54;
  Vector local_48;
  Vector local_3c;
  Vector local_30;
  Vector local_24;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  vec_t local_4;
  
                    /* 0x413a0  84  ?RadiationThink@CTriggerHurt@@QAEXXZ */
  peVar1 = this->pev;
  local_48.x = peVar1->absmax[0] + peVar1->absmin[0];
  vVar2 = peVar1->origin[0];
  vVar3 = peVar1->origin[1];
  local_4 = peVar1->origin[2];
  local_48.y = peVar1->absmax[1] + peVar1->absmin[1];
  local_54.x = peVar1->view_ofs[0];
  local_54.y = peVar1->view_ofs[1];
  local_48.z = peVar1->absmax[2] + peVar1->absmin[2];
  local_54.z = peVar1->view_ofs[2];
  Vector::Vector(&local_3c,&local_48.x);
  local_30.x = local_3c.x * 0.5;
  local_30.y = local_3c.y * 0.5;
  local_30.z = local_3c.z * 0.5;
  Vector::Vector(&local_24,&local_30.x);
  peVar1 = this->pev;
  peVar1->origin[0] = local_24.x;
  peVar1->origin[1] = local_24.y;
  peVar1->origin[2] = local_24.z;
  local_24.x = 0.0;
  local_24.y = 0.0;
  local_24.z = 0.0;
  Vector::Vector(&local_30,&local_24.x);
  peVar1 = this->pev;
  peVar1->view_ofs[0] = local_30.x;
  peVar1->view_ofs[1] = local_30.y;
  peVar1->view_ofs[2] = local_30.z;
  pEdict = (*g_engfuncs.pfnFindClientInPVS)(this->pev->pContainingEntity);
  peVar1 = this->pev;
  peVar1->origin[0] = vVar2;
  peVar1->origin[1] = vVar3;
  peVar1->origin[2] = local_4;
  peVar1 = this->pev;
  peVar1->view_ofs[0] = local_54.x;
  peVar1->view_ofs[1] = local_54.y;
  peVar1->view_ofs[2] = local_54.z;
  if ((pEdict != (edict_t *)0x0) &&
     (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar4 != 0)) {
    iVar4 = GetClassPtr<CBasePlayer>((int)&pEdict->v);
    peVar1 = this->pev;
    local_24.x = peVar1->absmax[0] + peVar1->absmin[0];
    local_24.y = peVar1->absmax[1] + peVar1->absmin[1];
    local_24.z = peVar1->absmax[2] + peVar1->absmin[2];
    Vector::Vector(&local_30,&local_24.x);
    local_3c.x = local_30.x * 0.5;
    local_3c.y = local_30.y * 0.5;
    local_3c.z = local_30.z * 0.5;
    Vector::Vector(&local_48,&local_3c.x);
    local_24.x = (pEdict->v).absmax[0] + (pEdict->v).absmin[0];
    local_24.y = (pEdict->v).absmax[1] + (pEdict->v).absmin[1];
    local_24.z = (pEdict->v).absmax[2] + (pEdict->v).absmin[2];
    Vector::Vector(&local_30,&local_24.x);
    local_3c.x = local_30.x * 0.5;
    local_3c.y = local_30.y * 0.5;
    local_3c.z = local_30.z * 0.5;
    Vector::Vector(&local_54,&local_3c.x);
    local_24.x = local_48.x - local_54.x;
    local_24.y = local_48.y - local_54.y;
    local_24.z = local_48.z - local_54.z;
    Vector::Vector(&local_30,&local_24.x);
    fStack_18 = local_30.x;
    fStack_14 = local_30.y;
    fStack_10 = local_30.z;
    fVar5 = Vector::Length(&fStack_18);
    if (fVar5 <= (float10)*(float *)(iVar4 + 0x970)) {
      *(float *)(iVar4 + 0x970) = (float)fVar5;
    }
  }
  this->pev->nextthink = gpGlobals->time + 0.25;
  return;
}

