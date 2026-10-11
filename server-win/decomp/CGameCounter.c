/* mp.dll - CGameCounter (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002ac40  CGameCounter::Spawn  (44 bytes)
 * undefined Spawn()
 */
void __fastcall CGameCounter::Spawn(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  lVar2 = __ftol();
  *(float *)(iVar1 + 0x1e0) = (float)(int)lVar2;
  CRulePointEntity::Spawn(param_1);
  return;
}

/* 1002ac70  CGameCounter::Use  (195 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall
CGameCounter::Use(CGameCounter *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  bool bVar2;
  undefined3 extraout_var;
  entvars_t *peVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar2 = CRuleEntity::CanFireForActivator((CRuleEntity *)this,param_1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return;
  }
  switch(param_3) {
  case 0:
    peVar3 = this->pev;
    fVar1 = peVar3->frags - 1.0;
    break;
  case 1:
  case 3:
    peVar3 = this->pev;
    fVar1 = peVar3->frags + 1.0;
    break;
  case 2:
    lVar4 = __ftol();
    peVar3 = this->pev;
    fVar1 = (float)(int)lVar4;
    break;
  default:
    goto switchD_1002ac8f_default;
  }
  peVar3->frags = fVar1;
switchD_1002ac8f_default:
  lVar4 = __ftol();
  lVar5 = __ftol();
  if ((int)lVar4 == (int)lVar5) {
    CBaseEntity::SUB_UseTargets((CBaseEntity *)this,param_1,3,0);
    if ((this->pev->spawnflags & 1) != 0) {
      UTIL_Remove((int *)this);
    }
    peVar3 = this->pev;
    if ((peVar3->spawnflags & 2) != 0) {
      peVar3->frags = peVar3->dmg;
    }
  }
  return;
}

