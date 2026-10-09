/* ts_i386.so - CBlood (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000bcfc4  CBlood::Spawn  (83 bytes)
 * undefined Spawn(void)
 */
/* CBlood::Spawn(void) */

void __thiscall CBlood::Spawn(CBlood *this)

{
  this->pev->solid = 0;
  this->pev->movetype = 0;
  this->pev->effects = 0;
  this->pev->frame = 0.0;
  SetMovedir((int)this->pev);
  return;
}

/* 000bd018  CBlood::KeyValue  (175 bytes)
 * undefined KeyValue(int param_1)
 */
/* CBlood::KeyValue(KeyValueData_s *) */

void __thiscall CBlood::KeyValue(CBlood *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"color");
  if (iVar1 == 0) {
    iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    if (iVar1 == 1) {
      this->pev->impulse = 0xc3;
    }
    else {
      this->pev->impulse = 0xf7;
    }
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"amount");
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      return;
    }
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    this->pev->dmg = (float)lVar2;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 000bd0cc  CBlood::Direction  (82 bytes)
 * float * Direction(float * param_1, int * param_2)
 */
/* CBlood::Direction(void) */

float * CBlood::Direction(float *param_1,int *param_2)

{
  int iVar1;
  
  if ((*(byte *)(*param_2 + 0x1a0) & 1) == 0) {
    iVar1 = *param_2;
    *param_1 = *(float *)(iVar1 + 0x44);
    param_1[1] = *(float *)(iVar1 + 0x48);
    param_1[2] = *(float *)(iVar1 + 0x4c);
  }
  else {
    UTIL_RandomBloodVector(param_1);
  }
  return param_1;
}

/* 000bd120  CBlood::BloodPosition  (328 bytes)
 * float * BloodPosition(float * param_1, int * param_2, int * param_3)
 */
/* CBlood::BloodPosition(CBaseEntity *) */

float * CBlood::BloodPosition(float *param_1,int *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  edict_t *peVar8;
  longdouble lVar9;
  longdouble lVar10;
  longdouble lVar11;
  
  if ((*(byte *)(*param_2 + 0x1a0) & 4) != 0) {
    if ((param_3 == (int *)0x0) || (iVar7 = (**(code **)(param_3[0x18] + 200))(param_3), iVar7 == 0)
       ) {
      peVar8 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
    }
    else {
      peVar8 = *(edict_t **)(*param_3 + 0x208);
    }
    if (peVar8 != (edict_t *)0x0) {
      fVar1 = (peVar8->v).origin[0];
      fVar2 = (peVar8->v).view_ofs[0];
      fVar3 = (peVar8->v).origin[1];
      fVar4 = (peVar8->v).view_ofs[1];
      fVar5 = (peVar8->v).origin[2];
      fVar6 = (peVar8->v).view_ofs[2];
      lVar9 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-10.0,10.0);
      lVar10 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-10.0,10.0);
      lVar11 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-10.0,10.0);
      *param_1 = fVar1 + fVar2 + (float)lVar9;
      param_1[1] = fVar3 + fVar4 + (float)lVar10;
      param_1[2] = fVar5 + fVar6 + (float)lVar11;
      return param_1;
    }
  }
  iVar7 = *param_2;
  *param_1 = *(float *)(iVar7 + 8);
  param_1[1] = *(float *)(iVar7 + 0xc);
  param_1[2] = *(float *)(iVar7 + 0x10);
  return param_1;
}

/* 000bd26c  CBlood::Use  (551 bytes)
 * undefined Use(int * param_1, int * param_2)
 */
/* CBlood::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CBlood::Use(int *param_1,int *param_2)

{
  float fVar1;
  uint uVar2;
  undefined2 in_FPUControlWord;
  float *pfVar3;
  int iVar4;
  float local_9c;
  float fStack_98;
  float fStack_94;
  undefined1 local_8c [16];
  float fStack_7c;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float fStack_38;
  float fStack_34;
  int local_24;
  undefined2 local_20;
  undefined2 uStack_1e;
  
  if ((*(byte *)(*param_1 + 0x1a0) & 2) == 0) {
    _local_20 = CONCAT22(uStack_1e,in_FPUControlWord);
    iVar4 = (int)ROUND(*(float *)(*param_1 + 0x1e0));
    uVar2 = *(uint *)(*param_1 + 0x184);
    pfVar3 = &local_4c;
    local_24 = iVar4;
    Direction(pfVar3,param_1);
    BloodPosition(&local_3c,param_1,param_2);
    UTIL_BloodDrips(&local_3c,pfVar3,uVar2,iVar4);
  }
  else {
    _local_20 = CONCAT22(uStack_1e,in_FPUControlWord);
    iVar4 = (int)ROUND(*(float *)(*param_1 + 0x1e0));
    uVar2 = *(uint *)(*param_1 + 0x184);
    if (uVar2 == 0xf7) {
      uVar2 = 0x46;
    }
    pfVar3 = &local_3c;
    local_24 = iVar4;
    Direction(pfVar3,param_1);
    BloodPosition(&local_4c,param_1,param_2);
    UTIL_BloodStream(&local_4c,pfVar3,uVar2,iVar4);
  }
  if ((*(byte *)(*param_1 + 0x1a0) & 8) != 0) {
    Direction(&local_4c,param_1);
    BloodPosition(&local_3c,param_1,param_2);
    fVar1 = *(float *)(*param_1 + 0x1e0);
    local_9c = local_3c + fVar1 * local_4c * 2.0;
    fStack_98 = fStack_38 + fVar1 * local_48 * 2.0;
    fStack_94 = fStack_34 + fVar1 * local_44 * 2.0;
    UTIL_TraceLine(&local_3c,&local_9c,1,0,local_8c);
    if (fStack_7c != 1.0) {
      UTIL_BloodDecalTrace((int)local_8c,*(int *)(*param_1 + 0x184));
    }
  }
  return;
}

/* 000bf45c  CBlood::Color  (13 bytes)
 * undefined4 Color(void)
 */
/* CBlood::Color(void) */

int __thiscall CBlood::Color(CBlood *this)

{
  return this->pev->impulse;
}

/* 000bf46c  CBlood::BloodAmount  (13 bytes)
 * longdouble BloodAmount(CBlood * this)
 */
/* CBlood::BloodAmount(void) */

longdouble __thiscall CBlood::BloodAmount(CBlood *this)

{
  return (longdouble)this->pev->dmg;
}

/* 000bf47c  CBlood::SetColor  (17 bytes)
 * undefined SetColor(undefined4 param_1)
 */
/* CBlood::SetColor(int) */

void __thiscall CBlood::SetColor(CBlood *this,int param_1)

{
  this->pev->impulse = param_1;
  return;
}

/* 000bf490  CBlood::SetBloodAmount  (17 bytes)
 * undefined SetBloodAmount(undefined4 param_1)
 */
/* CBlood::SetBloodAmount(float) */

void __thiscall CBlood::SetBloodAmount(CBlood *this,float param_1)

{
  this->pev->dmg = param_1;
  return;
}

