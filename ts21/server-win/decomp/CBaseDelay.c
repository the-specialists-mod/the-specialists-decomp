/* mp.dll - CBaseDelay (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100379a0  CBaseDelay::Save  (48 bytes)
 * undefined Save(void * param_1)
 * called by: CAutoTrigger::Save, CBaseAnimating::Save, CGibShooter::Save, CTriggerCamera::Save, CTriggerChangeTarget::Save, CTriggerRelay::Save
 */
void __thiscall CBaseDelay::Save(CBaseDelay *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_1,(byte_conflict *)s_CBaseDelay_10097408,(int)this,0x10097160,2);
  return;
}

/* 100379d0  CBaseDelay::Restore  (48 bytes)
 * undefined Restore(void * param_1)
 * called by: CAutoTrigger::Restore, CBaseAnimating::Restore, CGibShooter::Restore, CTriggerCamera::Restore, CTriggerChangeTarget::Restore, CTriggerRelay::Restore
 */
void __thiscall CBaseDelay::Restore(CBaseDelay *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_1,(byte_conflict *)s_CBaseDelay_10097408,(int)this,0x10097160,2);
  return;
}

/* 10037a00  CBaseDelay::KeyValue  (122 bytes)
 * undefined KeyValue(int param_1)
 * called by: CAutoTrigger::KeyValue, CBaseToggle::KeyValue, CBreakable::KeyValue, CGibShooter::KeyValue, CTSPowerUp::KeyValue, CTriggerCamera::KeyValue, CTriggerChangeTarget::KeyValue, CTriggerRelay::KeyValue
 */
void __thiscall CBaseDelay::KeyValue(CBaseDelay *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  float10 fVar6;
  
  puVar1 = (undefined1 *)0x6;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_delay_10097414;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x54 = (float)fVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar2 = 0xb;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_killtarget_10091270;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x58 = iVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10037b80  CBaseDelay::SUB_UseTargets  (445 bytes)
 * undefined SUB_UseTargets(int * param_1, undefined4 param_2, undefined4 param_3)
 * called by: CAutoTrigger::Think, CBaseButton::ButtonBackHome, CBaseButton::ButtonTouch, CBaseButton::TakeDamage, CBaseButton::TriggerAndWait, CBaseDelay::DelayThink, CBaseDoor::DoorHitBottom, CBaseDoor::DoorHitTop, CBasePlayerItem::DefaultTouch, CBaseTrigger::ActivateMultiTrigger, CBaseTrigger::HurtTouch, CBreakable::Die, ... (18 total)
 */
void __thiscall
CBaseDelay::SUB_UseTargets(CBaseDelay *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  edict_t *pEdict;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  if ((this->pev->target != 0) || (*(int *)&this->field_0x58 != 0)) {
    if (*(float *)&this->field_0x54 != 0.0) {
      iVar1 = GetClassPtr<CBaseDelay>(0);
      **(int **)(iVar1 + 4) = (int)s_DelayedUse_10097460 - (int)gpGlobals->pStringBase;
      *(float *)(*(int *)(iVar1 + 4) + 0x104) = *(float *)&this->field_0x54 + gpGlobals->time;
      *(code **)(iVar1 + 0x10) = DelayThink;
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x180) = param_2;
      *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)&this->field_0x58;
      *(undefined4 *)(iVar1 + 0x54) = 0;
      *(string_t *)(*(int *)(iVar1 + 4) + 0x1c8) = this->pev->target;
      if (param_1 != (int *)0x0) {
        iVar2 = (**(code **)(*param_1 + 0xa8))();
        if (iVar2 != 0) {
          *(undefined4 *)(*(int *)(iVar1 + 4) + 0x198) = *(undefined4 *)(param_1[1] + 0x208);
          return;
        }
      }
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x198) = 0;
      return;
    }
    if (*(int *)&this->field_0x58 != 0) {
      (*g_engfuncs.pfnAlertMessage)
                (at_aiconsole,s_KillTarget___s_10097450,
                 gpGlobals->pStringBase + *(int *)&this->field_0x58);
      for (pEdict = (*g_engfuncs.pfnFindEntityByString)
                              ((edict_t *)0x0,s_targetname_100915e4,
                               gpGlobals->pStringBase + *(int *)&this->field_0x58);
          pEdict != (edict_t *)0x0;
          pEdict = (*g_engfuncs.pfnFindEntityByString)
                             (pEdict,s_targetname_100915e4,
                              gpGlobals->pStringBase + *(int *)&this->field_0x58)) {
        iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
        if (iVar1 == 0) break;
        UTIL_Remove((int)pEdict->pvPrivateData);
        (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_killing__s_10097444);
      }
    }
    iVar1 = this->pev->target;
    if (iVar1 != 0) {
      FireTargets((int)(gpGlobals->pStringBase + iVar1),in_stack_00000010,this,in_stack_00000014,
                  in_stack_00000018);
    }
  }
  return;
}

/* 10037e50  CBaseDelay::DelayThink  (64 bytes)
 * void DelayThink(void)
 */
/* public: void __thiscall CBaseDelay::DelayThink(void) */

void __thiscall CBaseDelay::DelayThink(CBaseDelay *this)

{
  edict_t *peVar1;
  int *piVar2;
  
                    /* 0x37e50  30  ?DelayThink@CBaseDelay@@QAEXXZ */
  piVar2 = (int *)0x0;
  peVar1 = this->pev->owner;
  if (peVar1 != (edict_t *)0x0) {
    piVar2 = peVar1->pvPrivateData;
  }
  SUB_UseTargets(this,piVar2,this->pev->button,0);
  (*g_engfuncs.pfnRemoveEntity)(this->pev->pContainingEntity);
  return;
}

