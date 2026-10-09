/* ts_i386.so - CGameScore (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cc4d8  CGameScore::Spawn  (33 bytes)
 * undefined Spawn(void)
 */
/* CGameScore::Spawn(void) */

void __thiscall CGameScore::Spawn(CGameScore *this)

{
  CRulePointEntity::Spawn((CRulePointEntity *)this);
  return;
}

/* 000cc4fc  CGameScore::KeyValue  (104 bytes)
 * int KeyValue(int param_1)
 */
/* CGameScore::KeyValue(KeyValueData_s *) */

int __thiscall CGameScore::KeyValue(CGameScore *this,int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"points");
  if (iVar1 == 0) {
    iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    this->pev->frags = (float)iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = CRuleEntity::KeyValue((CRuleEntity *)this,param_1);
  }
  return iVar1;
}

/* 000cc568  CGameScore::Use  (219 bytes)
 * undefined Use(CRuleEntity * param_1, int param_2)
 */
/* CGameScore::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CGameScore::Use(CRuleEntity *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0xcc573;
  bVar2 = CRuleEntity::CanFireForActivator(param_1,param_2);
  if ((CONCAT31(extraout_var,bVar2) != 0) &&
     (iVar3 = (**(code **)(*(int *)(param_2 + 0x60) + 200))(param_2), iVar3 != 0)) {
    uVar1 = param_1->pev->spawnflags;
    if ((uVar1 & 2) == 0) {
      (**(code **)(*(int *)(param_2 + 0x60) + 0x7c))
                (param_2,(int)ROUND(param_1->pev->frags),param_1->pev->spawnflags & 1,uVar4);
    }
    else {
      (**(code **)(*(int *)(param_2 + 0x60) + 0x80))
                (param_2,(int)ROUND(param_1->pev->frags),uVar1 & 1);
    }
  }
  return;
}

/* 000ce054  CGameScore::Points  (50 bytes)
 * int Points(void)
 */
/* CGameScore::Points(void) */

int __thiscall CGameScore::Points(CGameScore *this)

{
  return (int)ROUND(this->pev->frags);
}

/* 000ce088  CGameScore::AllowNegativeScore  (16 bytes)
 * uint AllowNegativeScore(void)
 */
/* CGameScore::AllowNegativeScore(void) */

uint __thiscall CGameScore::AllowNegativeScore(CGameScore *this)

{
  return this->pev->spawnflags & 1;
}

/* 000ce098  CGameScore::AwardToTeam  (16 bytes)
 * uint AwardToTeam(void)
 */
/* CGameScore::AwardToTeam(void) */

uint __thiscall CGameScore::AwardToTeam(CGameScore *this)

{
  return this->pev->spawnflags & 2;
}

/* 000ce0a8  CGameScore::SetPoints  (17 bytes)
 * undefined SetPoints(int param_1)
 */
/* CGameScore::SetPoints(int) */

void __thiscall CGameScore::SetPoints(CGameScore *this,int param_1)

{
  this->pev->frags = (float)param_1;
  return;
}

