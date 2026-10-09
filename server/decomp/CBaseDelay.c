/* ts_i386.so - CBaseDelay (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e2dbc  CBaseDelay::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CBaseDelay::Save(CSave &) */

undefined4 __thiscall CBaseDelay::Save(CBaseDelay *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CBaseDelay",(int)this,(int *)m_SaveData,2);
  }
  return uVar2;
}

/* 000e2e0c  CBaseDelay::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CBaseDelay::Restore(CRestore &) */

undefined4 __thiscall CBaseDelay::Restore(CBaseDelay *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CBaseDelay",(int)this,(int)m_SaveData,2);
  }
  return uVar2;
}

/* 000e2e5c  CBaseDelay::KeyValue  (153 bytes)
 * undefined KeyValue(int param_1)
 */
/* CBaseDelay::KeyValue(KeyValueData_s *) */

void __thiscall CBaseDelay::KeyValue(CBaseDelay *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"delay");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this->field_0x64 = (float)lVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"killtarget");
    if (iVar1 == 0) {
      iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
      *(int *)&this->field_0x68 = iVar1;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

/* 000e3074  CBaseDelay::SUB_UseTargets  (604 bytes)
 * undefined SUB_UseTargets(int * param_1, undefined4 param_2, undefined4 param_3)
 */
/* CBaseDelay::SUB_UseTargets(CBaseEntity *, USE_TYPE, float) */

void __thiscall
CBaseDelay::SUB_UseTargets(CBaseDelay *this,int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  CBaseDelay *pCVar2;
  int iVar3;
  edict_t *pEdict;
  edict_t *peVar4;
  int *piVar5;
  
  if ((this->pev->target != 0) || (*(int *)&this->field_0x68 != 0)) {
    if (*(float *)&this->field_0x64 == 0.0) {
      if (*(int *)&this->field_0x68 != 0) {
        (*g_engfuncs.pfnAlertMessage)
                  (at_aiconsole,"KillTarget: %s\n",
                   gpGlobals->pStringBase + *(int *)&this->field_0x68);
        pEdict = (*g_engfuncs.pfnFindEntityByString)
                           ((edict_t *)0x0,"targetname",
                            gpGlobals->pStringBase + *(int *)&this->field_0x68);
        while( true ) {
          bVar1 = false;
          if ((pEdict == (edict_t *)0x0) ||
             (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar3 == 0)) {
            bVar1 = true;
          }
          if (bVar1) break;
          peVar4 = pEdict;
          if (pEdict == (edict_t *)0x0) {
            peVar4 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
          }
          piVar5 = (int *)0x0;
          if (peVar4 != (edict_t *)0x0) {
            piVar5 = peVar4->pvPrivateData;
          }
          UTIL_Remove(piVar5);
          (*g_engfuncs.pfnAlertMessage)
                    (at_aiconsole,"killing %s\n",gpGlobals->pStringBase + (pEdict->v).classname);
          pEdict = (*g_engfuncs.pfnFindEntityByString)
                             (pEdict,"targetname",gpGlobals->pStringBase + *(int *)&this->field_0x68
                             );
        }
      }
      if (this->pev->target != 0) {
        FireTargets((int)(gpGlobals->pStringBase + this->pev->target),param_1,this,param_2,param_3);
      }
    }
    else {
      pCVar2 = GetClassPtr<CBaseDelay>(0);
      pCVar2->pev->classname = (int)"DelayedUse" - (int)gpGlobals->pStringBase;
      pCVar2->pev->nextthink = gpGlobals->time + *(float *)&this->field_0x64;
      *(undefined4 *)&pCVar2->field_0xc = 0xffff0000;
      *(code **)&pCVar2->field_0x10 = DelayThink;
      pCVar2->pev->button = param_2;
      *(undefined4 *)&pCVar2->field_0x68 = *(undefined4 *)&this->field_0x68;
      *(undefined4 *)&pCVar2->field_0x64 = 0;
      pCVar2->pev->target = this->pev->target;
      if ((param_1 != (int *)0x0) &&
         (iVar3 = (**(code **)(param_1[0x18] + 200))(param_1), iVar3 != 0)) {
        pCVar2->pev->owner = *(edict_t **)(*param_1 + 0x208);
        return;
      }
      pCVar2->pev->owner = (edict_t *)0x0;
    }
  }
  return;
}

/* 000e341c  CBaseDelay::DelayThink  (120 bytes)
 * undefined DelayThink(void)
 */
/* WARNING: Removing unreachable block (ram,0x000e3449) */
/* CBaseDelay::DelayThink(void) */

void __thiscall CBaseDelay::DelayThink(CBaseDelay *this)

{
  edict_t *peVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  if (this->pev->owner != (edict_t *)0x0) {
    peVar1 = this->pev->owner;
    piVar2 = (int *)0x0;
    if (peVar1 != (edict_t *)0x0) {
      piVar2 = peVar1->pvPrivateData;
    }
  }
  SUB_UseTargets(this,piVar2,this->pev->button,0);
  (*g_engfuncs.pfnRemoveEntity)(this->pev->pContainingEntity);
  return;
}

