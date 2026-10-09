/* ts_i386.so - CGamePlayerZone (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000ccdf0  CGamePlayerZone::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CGamePlayerZone::Save(CSave &) */

undefined4 __thiscall CGamePlayerZone::Save(CGamePlayerZone *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CRuleEntity::Save((CRuleEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CGamePlayerZone",(int)this,(int *)m_SaveData,4);
  }
  return uVar2;
}

/* 000cce40  CGamePlayerZone::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CGamePlayerZone::Restore(CRestore &) */

undefined4 __thiscall CGamePlayerZone::Restore(CGamePlayerZone *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CRuleEntity::Restore((CRuleEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CGamePlayerZone",(int)this,(int)m_SaveData,4);
  }
  return uVar2;
}

/* 000cce90  CGamePlayerZone::KeyValue  (263 bytes)
 * undefined KeyValue(int param_1)
 */
/* CGamePlayerZone::KeyValue(KeyValueData_s *) */

void __thiscall CGamePlayerZone::KeyValue(CGamePlayerZone *this,int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"intarget");
  if (iVar1 == 0) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x68 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"outtarget");
    if (iVar1 == 0) {
      iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
      *(int *)&this->field_0x6c = iVar1;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"incount");
      if (iVar1 == 0) {
        iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
        *(int *)&this->field_0x70 = iVar1;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(param_1 + 4),"outcount");
        if (iVar1 == 0) {
          iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
          *(int *)&this->field_0x74 = iVar1;
          *(undefined4 *)(param_1 + 0xc) = 1;
        }
        else {
          CRuleEntity::KeyValue((CRuleEntity *)this,param_1);
        }
      }
    }
  }
  return;
}

/* 000ccfa0  CGamePlayerZone::Use  (421 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
/* CGamePlayerZone::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void __thiscall
CGamePlayerZone::Use
          (CGamePlayerZone *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int local_64;
  int local_60;
  undefined1 local_5c [4];
  int local_58;
  
  local_60 = 0;
  local_64 = 0;
  bVar1 = CRuleEntity::CanFireForActivator((CRuleEntity *)this,param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar5 = 1;
    if (0 < gpGlobals->maxClients) {
      do {
        piVar2 = (int *)UTIL_PlayerByIndex(iVar5);
        if (piVar2 != (int *)0x0) {
          uVar4 = 1;
          if ((*(byte *)(*piVar2 + 0x1a5) & 0x40) != 0) {
            uVar4 = 3;
          }
          UTIL_TraceModel(*piVar2 + 8,*piVar2 + 8,uVar4,this->pev->pContainingEntity,local_5c);
          if (local_58 == 0) {
            local_64 = local_64 + 1;
            if (*(int *)&this->field_0x6c != 0) {
              pcVar3 = gpGlobals->pStringBase + *(int *)&this->field_0x6c;
              goto LAB_000cd0ba;
            }
          }
          else {
            local_60 = local_60 + 1;
            if (*(int *)&this->field_0x68 != 0) {
              pcVar3 = gpGlobals->pStringBase + *(int *)&this->field_0x68;
LAB_000cd0ba:
              FireTargets((int)pcVar3,piVar2,param_1,param_3,param_4);
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= gpGlobals->maxClients);
    }
    if (*(int *)&this->field_0x70 != 0) {
      FireTargets((int)(gpGlobals->pStringBase + *(int *)&this->field_0x70),param_1,this,2,
                  (float)local_60);
    }
    if (*(int *)&this->field_0x74 != 0) {
      FireTargets((int)(gpGlobals->pStringBase + *(int *)&this->field_0x74),param_1,this,2,
                  (float)local_64);
    }
  }
  return;
}

