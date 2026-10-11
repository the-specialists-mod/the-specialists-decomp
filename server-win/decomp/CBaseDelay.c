/* mp.dll - CBaseDelay (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003e340  CBaseDelay::Save  (48 bytes)
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
  CSave::WriteFields(param_1,(byte_conflict *)s_CBaseDelay_100a26d8,(int)this,0x100a2430,2);
  return;
}

/* 1003e370  CBaseDelay::Restore  (48 bytes)
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
  CRestore::ReadFields(param_1,(byte_conflict *)s_CBaseDelay_100a26d8,(int)this,&DAT_100a2430,2);
  return;
}

/* 1003e3a0  CBaseDelay::KeyValue  (190 bytes)
 * undefined KeyValue(int param_1)
 * called by: CAutoTrigger::KeyValue, CBaseToggle::KeyValue, CBreakable::KeyValue, CGibShooter::KeyValue, CTSPowerUp::KeyValue, CTriggerCamera::KeyValue, CTriggerChangeTarget::KeyValue, CTriggerRelay::KeyValue
 */
void __thiscall CBaseDelay::KeyValue(CBaseDelay *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  CBaseDelay *pCVar5;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_1 + 4);
  pcVar7 = s_delay_100a26e4;
  pbVar2 = pbVar4;
  pCVar5 = this;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1003e3d8:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1003e3dd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar5 = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1003e3d8;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003e3dd:
  if (iVar3 == 0) {
    fVar9 = atof((undefined *)pCVar5,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x54 = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_killtarget_1009c318;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1003e429:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1003e42e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1003e429;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003e42e:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x58 = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 1003e560  CBaseDelay::SUB_UseTargets  (445 bytes)
 * undefined SUB_UseTargets(int * param_1, undefined4 param_2, undefined4 param_3)
 * called by: CAutoTrigger::Think, CBaseButton::ButtonBackHome, CBaseButton::ButtonTouch, CBaseButton::TakeDamage, CBaseButton::TriggerAndWait, CBaseDelay::DelayThink, CBaseDoor::DoorHitBottom, CBaseDoor::DoorHitTop, CBasePlayerItem::DefaultTouch, CBaseTrigger::ActivateMultiTrigger, CBaseTrigger::HurtTouch, CBreakable::BreakableRespawn, ... (19 total)
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
      **(int **)(iVar1 + 4) = (int)s_DelayedUse_100a2730 - (int)gpGlobals->pStringBase;
      *(float *)(*(int *)(iVar1 + 4) + 0x104) = *(float *)&this->field_0x54 + gpGlobals->time;
      *(code **)(iVar1 + 0x10) = DelayThink;
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x180) = param_2;
      *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)&this->field_0x58;
      *(undefined4 *)(iVar1 + 0x54) = 0;
      *(string_t *)(*(int *)(iVar1 + 4) + 0x1c8) = this->pev->target;
      if (param_1 != (int *)0x0) {
        iVar2 = (**(code **)(*param_1 + 0xc0))();
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
                (at_aiconsole,s_KillTarget___s_100a2720,
                 gpGlobals->pStringBase + *(int *)&this->field_0x58);
      for (pEdict = (*g_engfuncs.pfnFindEntityByString)
                              ((edict_t *)0x0,s_targetname_1009c68c,
                               gpGlobals->pStringBase + *(int *)&this->field_0x58);
          pEdict != (edict_t *)0x0;
          pEdict = (*g_engfuncs.pfnFindEntityByString)
                             (pEdict,s_targetname_1009c68c,
                              gpGlobals->pStringBase + *(int *)&this->field_0x58)) {
        iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
        if (iVar1 == 0) break;
        UTIL_Remove(pEdict->pvPrivateData);
        (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_killing__s_100a2714);
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

/* 1003e830  CBaseDelay::DelayThink  (84 bytes)
 * void DelayThink(void)
 */
/* WARNING: Removing unreachable block (ram,0x1003e844) */
/* WARNING: Removing unreachable block (ram,0x1003e857) */
/* public: void __thiscall CBaseDelay::DelayThink(void) */

void __thiscall CBaseDelay::DelayThink(CBaseDelay *this)

{
  edict_t *peVar1;
  int *piVar2;
  
                    /* 0x3e830  32  ?DelayThink@CBaseDelay@@QAEXXZ */
  piVar2 = (int *)0x0;
  peVar1 = this->pev->owner;
  if (peVar1 != (edict_t *)0x0) {
    piVar2 = peVar1->pvPrivateData;
  }
  SUB_UseTargets(this,piVar2,this->pev->button,0);
  (*g_engfuncs.pfnRemoveEntity)(this->pev->pContainingEntity);
  return;
}

