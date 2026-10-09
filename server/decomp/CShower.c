/* ts_i386.so - CShower (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000bf750  CShower::Spawn  (399 bytes)
 * undefined Spawn(void)
 */
/* CShower::Spawn(void) */

void __thiscall CShower::Spawn(CShower *this)

{
  int *piVar1;
  entvars_t *peVar2;
  entvars_t *peVar3;
  int iVar4;
  float *pfVar5;
  vec_t *pvVar6;
  vec_t *pvVar7;
  longdouble lVar8;
  float local_2c [7];
  
  peVar2 = this->pev;
  lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(200.0,300.0);
  peVar3 = this->pev;
  local_2c[0] = (float)(lVar8 * (longdouble)peVar3->angles[0]);
  local_2c[1] = (float)(lVar8 * (longdouble)peVar3->angles[1]);
  local_2c[2] = (float)(lVar8 * (longdouble)peVar3->angles[2]);
  pfVar5 = local_2c;
  pvVar6 = peVar2->velocity;
  for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pvVar6 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pvVar6 = pvVar6 + 1;
  }
  lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-100.0,100.0);
  this->pev->velocity[0] = (float)(lVar8 + (longdouble)this->pev->velocity[0]);
  lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-100.0,100.0);
  this->pev->velocity[1] = (float)(lVar8 + (longdouble)this->pev->velocity[1]);
  peVar2 = this->pev;
  if (peVar2->velocity[2] < 0.0) {
    this->pev->velocity[2] = this->pev->velocity[2] - 200.0;
  }
  else {
    peVar2->velocity[2] = peVar2->velocity[2] + 200.0;
  }
  this->pev->movetype = 10;
  this->pev->gravity = 0.5;
  this->pev->nextthink = gpGlobals->time + 0.1;
  this->pev->solid = 0;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/grenade.mdl");
  UTIL_SetSize((int)this->pev,&g_vecZero,&g_vecZero);
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 0x80;
  lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.5,1.5);
  this->pev->speed = (float)lVar8;
  pvVar6 = (vec_t *)&g_vecZero;
  pvVar7 = this->pev->angles;
  for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pvVar7 = *pvVar6;
    pvVar6 = pvVar6 + 1;
    pvVar7 = pvVar7 + 1;
  }
  return;
}

/* 000bf8e4  CShower::Think  (129 bytes)
 * undefined Think(void)
 */
/* CShower::Think(void) */

void __thiscall CShower::Think(CShower *this)

{
  int *piVar1;
  
  UTIL_Sparks(this->pev->origin);
  this->pev->speed = this->pev->speed - 0.1;
  if (this->pev->speed <= 0.0) {
    UTIL_Remove((int *)this);
  }
  else {
    this->pev->nextthink = gpGlobals->time + 0.1;
  }
  piVar1 = &this->pev->flags;
  *piVar1 = *piVar1 & 0xfffffdff;
  return;
}

/* 000bf968  CShower::Touch  (137 bytes)
 * undefined Touch(int * param_1)
 */
/* CShower::Touch(CBaseEntity *) */

void CShower::Touch(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float local_1c [4];
  
  iVar2 = *param_1;
  if ((*(byte *)(iVar2 + 0x1a5) & 2) == 0) {
    iVar2 = *param_1;
    fVar1 = 0.6;
  }
  else {
    fVar1 = 0.1;
  }
  local_1c[0] = fVar1 * *(float *)(iVar2 + 0x20);
  local_1c[1] = fVar1 * *(float *)(iVar2 + 0x24);
  local_1c[2] = fVar1 * *(float *)(iVar2 + 0x28);
  pfVar4 = local_1c;
  puVar5 = (undefined4 *)(iVar2 + 0x20);
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = *param_1;
  if (*(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
      *(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20) < 10.0) {
    *(undefined4 *)(iVar2 + 0x1f8) = 0;
  }
  return;
}

/* 000c0320  CShower::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CShower::ObjectCaps(void) */

undefined4 CShower::ObjectCaps(void)

{
  return 0x80000000;
}

