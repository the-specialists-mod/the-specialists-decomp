/* ts_i386.so - CFuncPlatRot (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000d2f70  CFuncPlatRot::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CFuncPlatRot::Save(CSave &) */

undefined4 __thiscall CFuncPlatRot::Save(CFuncPlatRot *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CFuncPlat::Save((CFuncPlat *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CFuncPlatRot",(int)this,(int *)m_SaveData,2);
  }
  return uVar2;
}

/* 000d2fc0  CFuncPlatRot::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CFuncPlatRot::Restore(CRestore &) */

undefined4 __thiscall CFuncPlatRot::Restore(CFuncPlatRot *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CFuncPlat::Restore((CFuncPlat *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CFuncPlatRot",(int)this,(int)m_SaveData,2);
  }
  return uVar2;
}

/* 000d3010  CFuncPlatRot::SetupRotation  (278 bytes)
 * undefined SetupRotation(void)
 */
/* CFuncPlatRot::SetupRotation(void) */

void __thiscall CFuncPlatRot::SetupRotation(CFuncPlatRot *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  vec_t *pvVar4;
  undefined4 *puVar5;
  vec_t *pvVar6;
  undefined4 local_2c [7];
  
  if (*(float *)&this->field_0xf0 == 0.0) {
    puVar3 = &g_vecZero;
    puVar2 = puVar3;
    puVar5 = (undefined4 *)&this->field_0x120;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = (undefined4 *)&this->field_0x114;
    iVar1 = 3;
  }
  else {
    CBaseToggle::AxisDir((int)this->pev);
    pvVar4 = this->pev->angles;
    pvVar6 = (vec_t *)&this->field_0x120;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pvVar6 = *pvVar4;
      pvVar4 = pvVar4 + 1;
      pvVar6 = pvVar6 + 1;
    }
    iVar1 = 3;
    puVar3 = local_2c;
    puVar2 = (undefined4 *)&this->field_0x114;
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  if (this->pev->targetname != 0) {
    pvVar4 = (vec_t *)&this->field_0x114;
    pvVar6 = this->pev->angles;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pvVar6 = *pvVar4;
      pvVar4 = pvVar4 + 1;
      pvVar6 = pvVar6 + 1;
    }
  }
  return;
}

/* 000d3128  CFuncPlatRot::Spawn  (44 bytes)
 * undefined Spawn(void)
 */
/* CFuncPlatRot::Spawn(void) */

void __thiscall CFuncPlatRot::Spawn(CFuncPlatRot *this)

{
  CFuncPlat::Spawn((CFuncPlat *)this);
  SetupRotation(this);
  return;
}

/* 000d3154  CFuncPlatRot::GoDown  (69 bytes)
 * undefined GoDown(void)
 */
/* CFuncPlatRot::GoDown(void) */

void __thiscall CFuncPlatRot::GoDown(CFuncPlatRot *this)

{
  CFuncPlat::GoDown((CFuncPlat *)this);
  RotMove(this,(float *)&this->field_0x120,this->pev->nextthink - this->pev->ltime);
  return;
}

/* 000d319c  CFuncPlatRot::HitBottom  (86 bytes)
 * undefined HitBottom(void)
 */
/* CFuncPlatRot::HitBottom(void) */

void __thiscall CFuncPlatRot::HitBottom(CFuncPlatRot *this)

{
  int iVar1;
  vec_t *pvVar2;
  vec_t *pvVar3;
  
  CFuncPlat::HitBottom((CFuncPlat *)this);
  pvVar2 = (vec_t *)&g_vecZero;
  pvVar3 = this->pev->avelocity;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  pvVar2 = (vec_t *)&this->field_0x120;
  pvVar3 = this->pev->angles;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  return;
}

/* 000d31f4  CFuncPlatRot::GoUp  (69 bytes)
 * undefined GoUp(void)
 */
/* CFuncPlatRot::GoUp(void) */

void __thiscall CFuncPlatRot::GoUp(CFuncPlatRot *this)

{
  CFuncPlat::GoUp((CFuncPlat *)this);
  RotMove(this,(float *)&this->field_0x114,this->pev->nextthink - this->pev->ltime);
  return;
}

/* 000d323c  CFuncPlatRot::HitTop  (86 bytes)
 * undefined HitTop(void)
 */
/* CFuncPlatRot::HitTop(void) */

void __thiscall CFuncPlatRot::HitTop(CFuncPlatRot *this)

{
  int iVar1;
  vec_t *pvVar2;
  vec_t *pvVar3;
  
  CFuncPlat::HitTop((CFuncPlat *)this);
  pvVar2 = (vec_t *)&g_vecZero;
  pvVar3 = this->pev->avelocity;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  pvVar2 = (vec_t *)&this->field_0x114;
  pvVar3 = this->pev->angles;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  return;
}

/* 000d3294  CFuncPlatRot::RotMove  (185 bytes)
 * undefined RotMove(float * param_1, float param_2)
 */
/* CFuncPlatRot::RotMove(Vector &, float) */

void __thiscall CFuncPlatRot::RotMove(CFuncPlatRot *this,float *param_1,float param_2)

{
  entvars_t *peVar1;
  int iVar2;
  float *pfVar3;
  vec_t *pvVar4;
  float local_3c [4];
  float local_2c [7];
  
  peVar1 = this->pev;
  local_2c[0] = *param_1 - peVar1->angles[0];
  local_2c[1] = param_1[1] - peVar1->angles[1];
  local_2c[2] = param_1[2] - peVar1->angles[2];
  if (param_2 < 0.1) {
    pfVar3 = local_2c;
    pvVar4 = this->pev->avelocity;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pvVar4 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pvVar4 = pvVar4 + 1;
    }
    this->pev->nextthink = this->pev->ltime + 1.0;
  }
  else {
    local_3c[0] = local_2c[0] / param_2;
    local_3c[1] = local_2c[1] / param_2;
    local_3c[2] = local_2c[2] / param_2;
    pfVar3 = local_3c;
    pvVar4 = this->pev->avelocity;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pvVar4 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pvVar4 = pvVar4 + 1;
    }
  }
  return;
}

