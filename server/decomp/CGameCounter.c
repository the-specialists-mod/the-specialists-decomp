/* ts_i386.so - CGameCounter (12 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cd24c  CGameCounter::Spawn  (86 bytes)
 * undefined Spawn(void)
 */
/* CGameCounter::Spawn(void) */

void __thiscall CGameCounter::Spawn(CGameCounter *this)

{
  this->pev->dmg = (float)(int)ROUND(this->pev->frags);
  CRulePointEntity::Spawn((CRulePointEntity *)this);
  return;
}

/* 000cd2a4  CGameCounter::Use  (316 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, undefined4 param_3, float param_4)
 */
/* CGameCounter::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void __thiscall
CGameCounter::Use(CGameCounter *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
                 float param_4)

{
  entvars_t *peVar1;
  bool bVar2;
  undefined3 extraout_var;
  
  bVar2 = CRuleEntity::CanFireForActivator((CRuleEntity *)this,param_1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    switch(param_3) {
    case 0:
      this->pev->frags = this->pev->frags - 1.0;
      break;
    case 1:
    case 3:
      this->pev->frags = this->pev->frags + 1.0;
      break;
    case 2:
      this->pev->frags = (float)(int)ROUND(param_4);
    }
    if ((int)ROUND(this->pev->frags) == (int)ROUND(this->pev->health)) {
      CBaseEntity::SUB_UseTargets((CBaseEntity *)this,param_1,3,0);
      if ((this->pev->spawnflags & 1) != 0) {
        UTIL_Remove((int *)this);
      }
      peVar1 = this->pev;
      if ((peVar1->spawnflags & 2) != 0) {
        peVar1->frags = peVar1->dmg;
      }
    }
  }
  return;
}

/* 000ce3a0  CGameCounter::RemoveOnFire  (22 bytes)
 * bool RemoveOnFire(void)
 */
/* CGameCounter::RemoveOnFire(void) */

bool __thiscall CGameCounter::RemoveOnFire(CGameCounter *this)

{
  return (this->pev->spawnflags & 1) != 0;
}

/* 000ce3b8  CGameCounter::ResetOnFire  (18 bytes)
 * uint ResetOnFire(void)
 */
/* CGameCounter::ResetOnFire(void) */

uint __thiscall CGameCounter::ResetOnFire(CGameCounter *this)

{
  return (uint)this->pev->spawnflags >> 1 & 1;
}

/* 000ce3cc  CGameCounter::CountUp  (39 bytes)
 * undefined CountUp(void)
 */
/* CGameCounter::CountUp(void) */

void __thiscall CGameCounter::CountUp(CGameCounter *this)

{
  this->pev->frags = this->pev->frags + 1.0;
  return;
}

/* 000ce3f4  CGameCounter::CountDown  (39 bytes)
 * undefined CountDown(void)
 */
/* CGameCounter::CountDown(void) */

void __thiscall CGameCounter::CountDown(CGameCounter *this)

{
  this->pev->frags = this->pev->frags - 1.0;
  return;
}

/* 000ce41c  CGameCounter::ResetCount  (19 bytes)
 * undefined ResetCount(void)
 */
/* CGameCounter::ResetCount(void) */

void __thiscall CGameCounter::ResetCount(CGameCounter *this)

{
  this->pev->frags = this->pev->dmg;
  return;
}

/* 000ce430  CGameCounter::CountValue  (50 bytes)
 * int CountValue(void)
 */
/* CGameCounter::CountValue(void) */

int __thiscall CGameCounter::CountValue(CGameCounter *this)

{
  return (int)ROUND(this->pev->frags);
}

/* 000ce464  CGameCounter::LimitValue  (50 bytes)
 * int LimitValue(void)
 */
/* CGameCounter::LimitValue(void) */

int __thiscall CGameCounter::LimitValue(CGameCounter *this)

{
  return (int)ROUND(this->pev->health);
}

/* 000ce498  CGameCounter::HitLimit  (99 bytes)
 * bool HitLimit(void)
 */
/* CGameCounter::HitLimit(void) */

bool __thiscall CGameCounter::HitLimit(CGameCounter *this)

{
  return (int)ROUND(this->pev->frags) == (int)ROUND(this->pev->health);
}

/* 000ce4fc  CGameCounter::SetCountValue  (17 bytes)
 * undefined SetCountValue(int param_1)
 */
/* CGameCounter::SetCountValue(int) */

void __thiscall CGameCounter::SetCountValue(CGameCounter *this,int param_1)

{
  this->pev->frags = (float)param_1;
  return;
}

/* 000ce510  CGameCounter::SetInitialValue  (17 bytes)
 * undefined SetInitialValue(int param_1)
 */
/* CGameCounter::SetInitialValue(int) */

void __thiscall CGameCounter::SetInitialValue(CGameCounter *this,int param_1)

{
  this->pev->dmg = (float)param_1;
  return;
}

