/* ts_i386.so - CGamePlayerHurt (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cd16c  CGamePlayerHurt::Use  (186 bytes)
 * undefined Use(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
/* CGamePlayerHurt::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void __thiscall
CGamePlayerHurt::Use
          (CGamePlayerHurt *this,int param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  entvars_t *peVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  bVar2 = CRuleEntity::CanFireForActivator((CRuleEntity *)this,param_1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x60) + 200))(param_1);
    if (iVar3 != 0) {
      if (0.0 <= this->pev->dmg) {
        peVar1 = this->pev;
        (**(code **)(*(int *)(param_1 + 0x60) + 0x58))(param_1,peVar1,peVar1,peVar1->dmg,0);
      }
      else {
        (**(code **)(*(int *)(param_1 + 0x60) + 0x5c))(param_1,-this->pev->dmg,0);
      }
    }
    CBaseEntity::SUB_UseTargets((CBaseEntity *)this,param_1,param_3,param_4);
    if ((this->pev->spawnflags & 1) != 0) {
      UTIL_Remove((int *)this);
    }
  }
  return;
}

/* 000ce340  CGamePlayerHurt::RemoveOnFire  (22 bytes)
 * bool RemoveOnFire(void)
 */
/* CGamePlayerHurt::RemoveOnFire(void) */

bool __thiscall CGamePlayerHurt::RemoveOnFire(CGamePlayerHurt *this)

{
  return (this->pev->spawnflags & 1) != 0;
}

