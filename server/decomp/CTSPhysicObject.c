/* ts_i386.so - CTSPhysicObject (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0007ba54  CTSPhysicObject::Spawn  (103 bytes)
 * undefined Spawn(void)
 */
/* CTSPhysicObject::Spawn(void) */

void __thiscall CTSPhysicObject::Spawn(CTSPhysicObject *this)

{
  entvars_t *peVar1;
  int iVar2;
  undefined4 *puVar3;
  CTSPhysicObject *pCVar4;
  undefined4 *puVar5;
  
  peVar1 = this->pev;
  *(undefined4 *)&this[1].field_0x20 = 0x3f800000;
  peVar1->fuser1 = 1.0;
  puVar3 = &g_vecZero;
  pCVar4 = this + 1;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->pev = (entvars_t *)*puVar3;
    puVar3 = puVar3 + 1;
    pCVar4 = (CTSPhysicObject *)&pCVar4->field_0x4;
  }
  puVar3 = &g_vecZero;
  puVar5 = (undefined4 *)&this[1].field_0xc;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)&this[1].field_0x18 = 0;
  *(undefined4 *)&this[1].field_0x1c = 0;
  return;
}

/* 0007babc  CTSPhysicObject::Precache  (1 bytes)
 * undefined Precache(void)
 */
/* CTSPhysicObject::Precache(void) */

void CTSPhysicObject::Precache(void)

{
  return;
}

/* 0007bac0  CTSPhysicObject::SavePhysics  (529 bytes)
 * undefined SavePhysics(void)
 */
/* CTSPhysicObject::SavePhysics(void) */

void __thiscall CTSPhysicObject::SavePhysics(CTSPhysicObject *this)

{
  float fVar1;
  bool bVar2;
  entvars_t *peVar3;
  int iVar4;
  vec_t *pvVar5;
  float *pfVar6;
  CTSPhysicObject *pCVar7;
  vec_t *pvVar8;
  float local_2c [7];
  
  if (*(float *)&this[1].field_0x20 != this->pev->fuser1) {
    bVar2 = false;
    if ((((float)this[1].pev == g_vecZero) && (*(float *)&this[1].field_0x4 == DAT_00190ef0)) &&
       (*(float *)&this[1].field_0x8 == DAT_00190ef4)) {
      bVar2 = true;
    }
    if (!bVar2) {
      fVar1 = this->pev->fuser1;
      local_2c[0] = fVar1 * (float)this[1].pev;
      local_2c[1] = fVar1 * *(float *)&this[1].field_0x4;
      local_2c[2] = fVar1 * *(float *)&this[1].field_0x8;
      pfVar6 = local_2c;
      pvVar5 = this->pev->velocity;
      for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pvVar5 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pvVar5 = pvVar5 + 1;
      }
      pfVar6 = local_2c;
      pvVar5 = this->pev->avelocity;
      for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pvVar5 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pvVar5 = pvVar5 + 1;
      }
      peVar3 = this->pev;
      fVar1 = *(float *)&this[1].field_0x18;
      goto LAB_0007bcaa;
    }
  }
  bVar2 = false;
  if ((((float)this[1].pev == g_vecZero) && (*(float *)&this[1].field_0x4 == DAT_00190ef0)) &&
     (*(float *)&this[1].field_0x8 == DAT_00190ef4)) {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  pvVar5 = this->pev->velocity;
  pCVar7 = this + 1;
  for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar7->pev = (entvars_t *)*pvVar5;
    pvVar5 = pvVar5 + 1;
    pCVar7 = (CTSPhysicObject *)&pCVar7->field_0x4;
  }
  pvVar5 = this->pev->avelocity;
  pvVar8 = (vec_t *)&this[1].field_0xc;
  for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pvVar8 = *pvVar5;
    pvVar5 = pvVar5 + 1;
    pvVar8 = pvVar8 + 1;
  }
  peVar3 = this->pev;
  *(float *)&this[1].field_0x18 = peVar3->gravity;
  fVar1 = peVar3->fuser1;
  local_2c[0] = fVar1 * peVar3->velocity[0];
  local_2c[1] = fVar1 * peVar3->velocity[1];
  local_2c[2] = fVar1 * peVar3->velocity[2];
  pfVar6 = local_2c;
  pvVar5 = peVar3->velocity;
  for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pvVar5 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pvVar5 = pvVar5 + 1;
  }
  pfVar6 = local_2c;
  pvVar5 = this->pev->avelocity;
  for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pvVar5 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pvVar5 = pvVar5 + 1;
  }
  peVar3 = this->pev;
  fVar1 = peVar3->gravity;
LAB_0007bcaa:
  peVar3->gravity = fVar1 * peVar3->fuser1 * peVar3->fuser1;
  *(float *)&this[1].field_0x20 = this->pev->fuser1;
  return;
}

/* 0007bcd4  CTSPhysicObject::RestorePhysycs  (196 bytes)
 * undefined RestorePhysycs(void)
 */
/* CTSPhysicObject::RestorePhysycs(void) */

void __thiscall CTSPhysicObject::RestorePhysycs(CTSPhysicObject *this)

{
  bool bVar1;
  int iVar2;
  CTSPhysicObject *pCVar3;
  vec_t *pvVar4;
  undefined4 *puVar5;
  vec_t *pvVar6;
  undefined4 *puVar7;
  
  bVar1 = false;
  if ((((float)this[1].pev == g_vecZero) && (*(float *)&this[1].field_0x4 == DAT_00190ef0)) &&
     (*(float *)&this[1].field_0x8 == DAT_00190ef4)) {
    bVar1 = true;
  }
  if (!bVar1) {
    pCVar3 = this + 1;
    pvVar4 = this->pev->velocity;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pvVar4 = (vec_t)pCVar3->pev;
      pCVar3 = (CTSPhysicObject *)&pCVar3->field_0x4;
      pvVar4 = pvVar4 + 1;
    }
    pvVar4 = (vec_t *)&this[1].field_0xc;
    pvVar6 = this->pev->avelocity;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pvVar6 = *pvVar4;
      pvVar4 = pvVar4 + 1;
      pvVar6 = pvVar6 + 1;
    }
    this->pev->gravity = *(float *)&this[1].field_0x18;
    puVar5 = &g_vecZero;
    pCVar3 = this + 1;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar3->pev = (entvars_t *)*puVar5;
      puVar5 = puVar5 + 1;
      pCVar3 = (CTSPhysicObject *)&pCVar3->field_0x4;
    }
    puVar5 = &g_vecZero;
    puVar7 = (undefined4 *)&this[1].field_0xc;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x20 = 0;
  }
  return;
}

/* 0007bd98  CTSPhysicObject::WaitThink  (58 bytes)
 * undefined WaitThink(void)
 */
/* CTSPhysicObject::WaitThink(void) */

void __thiscall CTSPhysicObject::WaitThink(CTSPhysicObject *this)

{
  int iVar1;
  
  iVar1 = (*this->vtable[6])(this);
  if (iVar1 == 0) {
    (*this->vtable[0x47])(this);
  }
  else {
    (*this->vtable[0x46])(this);
  }
  return;
}

