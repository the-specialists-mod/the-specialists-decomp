/* mp.dll - CGamePlayerHurt (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002aba0  CGamePlayerHurt::Use  (141 bytes)
 * undefined Use(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
void __thiscall
CGamePlayerHurt::Use
          (CGamePlayerHurt *this,int *param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  entvars_t *peVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  bVar2 = CRuleEntity::CanFireForActivator((CRuleEntity *)this,param_1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    iVar3 = (**(code **)(*param_1 + 0xc0))();
    if (iVar3 != 0) {
      peVar1 = this->pev;
      if (0.0 <= peVar1->dmg) {
        (**(code **)(*param_1 + 0x50))(peVar1,peVar1,peVar1->dmg,0);
      }
      else {
        (**(code **)(*param_1 + 0x54))(-peVar1->dmg,0);
      }
    }
    CBaseEntity::SUB_UseTargets((CBaseEntity *)this,param_1,param_3,param_4);
    if ((this->pev->spawnflags & 1) != 0) {
      UTIL_Remove((int *)this);
    }
  }
  return;
}

