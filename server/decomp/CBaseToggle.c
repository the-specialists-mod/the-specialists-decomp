/* ts_i386.so - CBaseToggle (13 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e3494  CBaseToggle::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CBaseToggle::Save(CSave &) */

undefined4 __thiscall CBaseToggle::Save(CBaseToggle *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseAnimating::Save((CBaseAnimating *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CBaseToggle",(int)this,(int *)m_SaveData,0x13);
  }
  return uVar2;
}

/* 000e34e4  CBaseToggle::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CBaseToggle::Restore(CRestore &) */

undefined4 __thiscall CBaseToggle::Restore(CBaseToggle *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseAnimating::Restore((CBaseAnimating *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CBaseToggle",(int)this,(int)m_SaveData,0x13);
  }
  return uVar2;
}

/* 000e3534  CBaseToggle::KeyValue  (284 bytes)
 * undefined KeyValue(int param_1)
 */
/* CBaseToggle::KeyValue(KeyValueData_s *) */

void __thiscall CBaseToggle::KeyValue(CBaseToggle *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"lip");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this[1].field_0x2c = (float)lVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"wait");
    if (iVar1 == 0) {
      lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      *(float *)&this[1].field_0x28 = (float)lVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"master");
      if (iVar1 == 0) {
        iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
        *(int *)&this[2].field_0x38 = iVar1;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(param_1 + 4),"distance");
        if (iVar1 == 0) {
          lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
          *(float *)&this[1].field_0x24 = (float)lVar2;
          *(undefined4 *)(param_1 + 0xc) = 1;
        }
        else {
          CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
        }
      }
    }
  }
  return;
}

/* 000e3658  CBaseToggle::LinearMove  (290 bytes)
 * undefined LinearMove(float * param_1, float param_2)
 */
/* CBaseToggle::LinearMove(Vector, float) */

void __thiscall CBaseToggle::LinearMove(CBaseToggle *this,float *param_1,float param_2)

{
  entvars_t *peVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  vec_t *pvVar6;
  float local_4c [7];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  pfVar4 = param_1;
  pfVar5 = (float *)&this[2].field_0x1c;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  peVar1 = this->pev;
  bVar2 = false;
  if (((*param_1 == peVar1->origin[0]) && (param_1[1] == peVar1->origin[1])) &&
     (param_1[2] == peVar1->origin[2])) {
    bVar2 = true;
  }
  if (bVar2) {
    LinearMoveDone(this);
  }
  else {
    peVar1 = this->pev;
    local_2c = *param_1 - peVar1->origin[0];
    local_28 = param_1[1] - peVar1->origin[1];
    local_24 = param_1[2] - peVar1->origin[2];
    local_30 = SQRT(local_24 * local_24 + local_28 * local_28 + local_2c * local_2c);
    local_30 = local_30 / param_2;
    this->pev->nextthink = local_30 + this->pev->ltime;
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = LinearMoveDone;
    local_4c[0] = local_2c / local_30;
    local_4c[1] = local_28 / local_30;
    local_4c[2] = local_24 / local_30;
    pfVar4 = local_4c;
    pvVar6 = this->pev->velocity;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar6 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pvVar6 = pvVar6 + 1;
    }
  }
  return;
}

/* 000e377c  CBaseToggle::LinearMoveDone  (147 bytes)
 * undefined LinearMoveDone(void)
 */
/* CBaseToggle::LinearMoveDone(void) */

void __thiscall CBaseToggle::LinearMoveDone(CBaseToggle *this)

{
  int iVar1;
  code *pcVar2;
  vec_t *pvVar3;
  vec_t *pvVar4;
  
  UTIL_SetOrigin((int)this->pev,&this[2].field_0x1c);
  pvVar3 = (vec_t *)&g_vecZero;
  pvVar4 = this->pev->velocity;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar4 = *pvVar3;
    pvVar3 = pvVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  this->pev->nextthink = -1.0;
  if (*(short *)&this[2].field_0x16 != 0) {
    if (*(short *)&this[2].field_0x16 < 0) {
      pcVar2 = *(code **)&this[2].field_0x18;
    }
    else {
      pcVar2 = *(code **)(*(int *)((int)&this->pev + (int)*(short *)&this[2].field_0x18) + -4 +
                         *(short *)&this[2].field_0x16 * 4);
    }
    (*pcVar2)((int)&this->pev + (int)*(short *)&this[2].field_0x14);
  }
  return;
}

/* 000e3814  CBaseToggle::IsLockedByMaster  (85 bytes)
 * undefined4 IsLockedByMaster(void)
 */
/* CBaseToggle::IsLockedByMaster(void) */

undefined4 __thiscall CBaseToggle::IsLockedByMaster(CBaseToggle *this)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)&this[2].field_0x38 != 0) {
    uVar1 = _((EHANDLE *)&this[2].field_0xc);
    iVar2 = UTIL_IsMasterTriggered(*(int *)&this[2].field_0x38,uVar1);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

/* 000e386c  CBaseToggle::AngularMove  (290 bytes)
 * undefined AngularMove(float * param_1, float param_2)
 */
/* CBaseToggle::AngularMove(Vector, float) */

void __thiscall CBaseToggle::AngularMove(CBaseToggle *this,float *param_1,float param_2)

{
  entvars_t *peVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  vec_t *pvVar6;
  float local_4c [7];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  pfVar4 = param_1;
  pfVar5 = (float *)&this[2].field_0x28;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  peVar1 = this->pev;
  bVar2 = false;
  if (((*param_1 == peVar1->angles[0]) && (param_1[1] == peVar1->angles[1])) &&
     (param_1[2] == peVar1->angles[2])) {
    bVar2 = true;
  }
  if (bVar2) {
    AngularMoveDone(this);
  }
  else {
    peVar1 = this->pev;
    local_2c = *param_1 - peVar1->angles[0];
    local_28 = param_1[1] - peVar1->angles[1];
    local_24 = param_1[2] - peVar1->angles[2];
    local_30 = SQRT(local_24 * local_24 + local_28 * local_28 + local_2c * local_2c);
    local_30 = local_30 / param_2;
    this->pev->nextthink = local_30 + this->pev->ltime;
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = AngularMoveDone;
    local_4c[0] = local_2c / local_30;
    local_4c[1] = local_28 / local_30;
    local_4c[2] = local_24 / local_30;
    pfVar4 = local_4c;
    pvVar6 = this->pev->avelocity;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar6 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pvVar6 = pvVar6 + 1;
    }
  }
  return;
}

/* 000e3990  CBaseToggle::AngularMoveDone  (134 bytes)
 * undefined AngularMoveDone(void)
 */
/* CBaseToggle::AngularMoveDone(void) */

void __thiscall CBaseToggle::AngularMoveDone(CBaseToggle *this)

{
  int iVar1;
  code *pcVar2;
  vec_t *pvVar3;
  vec_t *pvVar4;
  
  pvVar3 = (vec_t *)&this[2].field_0x28;
  pvVar4 = this->pev->angles;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar4 = *pvVar3;
    pvVar3 = pvVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  pvVar3 = (vec_t *)&g_vecZero;
  pvVar4 = this->pev->avelocity;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar4 = *pvVar3;
    pvVar3 = pvVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  this->pev->nextthink = -1.0;
  if (*(short *)&this[2].field_0x16 != 0) {
    if (*(short *)&this[2].field_0x16 < 0) {
      pcVar2 = *(code **)&this[2].field_0x18;
    }
    else {
      pcVar2 = *(code **)(*(int *)((int)&this->pev + (int)*(short *)&this[2].field_0x18) + -4 +
                         *(short *)&this[2].field_0x16 * 4);
    }
    (*pcVar2)((int)&this->pev + (int)*(short *)&this[2].field_0x14);
  }
  return;
}

/* 000e3a18  CBaseToggle::AxisValue  (31 bytes)
 * longdouble AxisValue(byte.conflict param_1, float * param_2)
 */
/* CBaseToggle::AxisValue(int, Vector const &) */

longdouble CBaseToggle::AxisValue(byte_conflict param_1,float *param_2)

{
  if ((param_1 & 0x40) != 0) {
    return (longdouble)param_2[2];
  }
  if ((char)param_1 < '\0') {
    return (longdouble)*param_2;
  }
  return (longdouble)param_2[1];
}

/* 000e3a38  CBaseToggle::AxisDir  (125 bytes)
 * undefined AxisDir(int param_1)
 */
/* CBaseToggle::AxisDir(entvars_s *) */

void CBaseToggle::AxisDir(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_1c [4];
  
  if ((*(byte *)(param_1 + 0x1a0) & 0x40) == 0) {
    if (*(char *)(param_1 + 0x1a0) < '\0') {
      local_1c[2] = 0;
      local_1c[0] = 0x3f800000;
      local_1c[1] = 0;
      goto LAB_000e3aa1;
    }
    local_1c[2] = 0;
    local_1c[1] = 0x3f800000;
    local_1c[0] = 0;
  }
  else {
    local_1c[1] = 0;
    local_1c[2] = 0x3f800000;
    local_1c[0] = 0;
  }
LAB_000e3aa1:
  puVar2 = local_1c;
  puVar3 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* 000e3ab8  CBaseToggle::AxisDelta  (43 bytes)
 * longdouble AxisDelta(byte.conflict param_1, float * param_2, float * param_3)
 */
/* CBaseToggle::AxisDelta(int, Vector const &, Vector const &) */

longdouble CBaseToggle::AxisDelta(byte_conflict param_1,float *param_2,float *param_3)

{
  if ((param_1 & 0x40) != 0) {
    return (longdouble)param_2[2] - (longdouble)param_3[2];
  }
  if ((char)param_1 < '\0') {
    return (longdouble)*param_2 - (longdouble)*param_3;
  }
  return (longdouble)param_2[1] - (longdouble)param_3[1];
}

/* 000e3da0  CBaseToggle::GetToggleState  (11 bytes)
 * undefined4 GetToggleState(void)
 */
/* CBaseToggle::GetToggleState(void) */

undefined4 __thiscall CBaseToggle::GetToggleState(CBaseToggle *this)

{
  return *(undefined4 *)&this[1].field_0x1c;
}

/* 000e3dac  CBaseToggle::GetDelay  (11 bytes)
 * longdouble GetDelay(CBaseToggle * this)
 */
/* CBaseToggle::GetDelay(void) */

longdouble __thiscall CBaseToggle::GetDelay(CBaseToggle *this)

{
  return (longdouble)*(float *)&this[1].field_0x28;
}

