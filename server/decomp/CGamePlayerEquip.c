/* ts_i386.so - CGamePlayerEquip (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cd494  CGamePlayerEquip::KeyValue  (219 bytes)
 * undefined KeyValue(int param_1)
 */
/* CGamePlayerEquip::KeyValue(KeyValueData_s *) */

void __thiscall CGamePlayerEquip::KeyValue(CGamePlayerEquip *this,int param_1)

{
  int iVar1;
  int iVar2;
  char local_9c [140];
  
  CRuleEntity::KeyValue((CRuleEntity *)this,param_1);
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = 0;
    iVar2 = 0xe0;
    do {
      if (*(int *)((int)this + iVar2 + -0x78) == 0) {
        UTIL_StripToken(*(char **)(param_1 + 4),(int)local_9c);
        iVar1 = (*g_engfuncs.pfnAllocString)(local_9c);
        *(int *)((int)this + iVar2 + -0x78) = iVar1;
        iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
        *(int *)(&this->field_0x8 + iVar2) = iVar1;
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        *(int *)(&this->field_0x8 + iVar2) = iVar1;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x20);
  }
  return;
}

/* 000cd570  CGamePlayerEquip::Touch  (68 bytes)
 * undefined Touch(CBasePlayer * param_1)
 */
/* CGamePlayerEquip::Touch(CBaseEntity *) */

void __thiscall CGamePlayerEquip::Touch(CGamePlayerEquip *this,CBasePlayer *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = CRuleEntity::CanFireForActivator((CRuleEntity *)this,param_1);
  if ((CONCAT31(extraout_var,bVar1) != 0) && ((this->pev->spawnflags & 1) == 0)) {
    EquipPlayer(this,param_1);
  }
  return;
}

/* 000cd5b4  CGamePlayerEquip::EquipPlayer  (356 bytes)
 * undefined EquipPlayer(CBasePlayer * param_1)
 */
/* CGamePlayerEquip::EquipPlayer(CBaseEntity *) */

void __thiscall CGamePlayerEquip::EquipPlayer(CGamePlayerEquip *this,CBasePlayer *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  CGamePlayerEquip *local_28;
  CGamePlayerEquip *local_24;
  int local_20;
  int local_18;
  CBasePlayer *local_14;
  
  local_14 = (CBasePlayer *)0x0;
  iVar2 = (*param_1->vtable[0x32])(param_1);
  if (iVar2 != 0) {
    local_14 = param_1;
  }
  if (local_14 != (CBasePlayer *)0x0) {
    local_18 = 0;
    local_20 = 0;
    local_28 = this;
    local_24 = this;
    do {
      if (*(int *)&local_28->field_0x68 == 0) {
        return;
      }
      iVar3 = 0;
      iVar2 = local_20;
      if (0 < *(int *)&local_24->field_0xe8) {
        do {
          CBasePlayer::GiveNamedItem
                    (local_14,(int)(gpGlobals->pStringBase + *(int *)(&this->field_0x68 + iVar2)));
          iVar3 = iVar3 + 1;
          piVar1 = (int *)(&this->field_0xe8 + iVar2);
          iVar2 = local_18 << 2;
        } while (iVar3 < *piVar1);
      }
      iVar2 = local_20 + 4;
      if (*(int *)&local_28->field_0x6c == 0) {
        return;
      }
      iVar3 = 0;
      if (0 < *(int *)&local_24->field_0xec) {
        do {
          CBasePlayer::GiveNamedItem
                    (local_14,(int)(gpGlobals->pStringBase + *(int *)(&this->field_0x68 + iVar2)));
          iVar3 = iVar3 + 1;
          piVar1 = (int *)(&this->field_0xe8 + iVar2);
          iVar2 = (local_18 + 1) * 4;
        } while (iVar3 < *piVar1);
      }
      local_24 = (CGamePlayerEquip *)&local_24->field_0x8;
      local_28 = (CGamePlayerEquip *)&local_28->field_0x8;
      local_20 = local_20 + 8;
      local_18 = local_18 + 2;
    } while (local_18 < 0x20);
  }
  return;
}

/* 000cd718  CGamePlayerEquip::Use  (37 bytes)
 * undefined Use(CGamePlayerEquip * param_1, CBasePlayer * param_2)
 */
/* CGamePlayerEquip::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CGamePlayerEquip::Use(CGamePlayerEquip *param_1,CBasePlayer *param_2)

{
  EquipPlayer(param_1,param_2);
  return;
}

/* 000ce5cc  CGamePlayerEquip::UseOnly  (22 bytes)
 * bool UseOnly(void)
 */
/* CGamePlayerEquip::UseOnly(void) */

bool __thiscall CGamePlayerEquip::UseOnly(CGamePlayerEquip *this)

{
  return (this->pev->spawnflags & 1) != 0;
}

