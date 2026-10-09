/* ts_i386.so - CRotButton (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a9248  CRotButton::Spawn  (577 bytes)
 * undefined Spawn(void)
 */
/* CRotButton::Spawn(void) */

void __thiscall CRotButton::Spawn(CRotButton *this)

{
  float fVar1;
  entvars_t *peVar2;
  char *s;
  int iVar3;
  vec_t *pvVar4;
  float *pfVar5;
  vec_t *pvVar6;
  float *pfVar7;
  float local_2c [7];
  
  s = ButtonSound(*(undefined4 *)&this->field_0x138);
  (*g_engfuncs.pfnPrecacheSound)(s);
  iVar3 = (*g_engfuncs.pfnAllocString)(s);
  this->pev->noise = iVar3;
  CBaseToggle::AxisDir((int)this->pev);
  peVar2 = this->pev;
  if ((peVar2->spawnflags & 2) != 0) {
    local_2c[0] = peVar2->movedir[0] * -1.0;
    local_2c[1] = peVar2->movedir[1] * -1.0;
    local_2c[2] = peVar2->movedir[2] * -1.0;
    pfVar5 = local_2c;
    pvVar4 = peVar2->movedir;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar4 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pvVar4 = pvVar4 + 1;
    }
  }
  this->pev->movetype = 7;
  if ((this->pev->spawnflags & 1) == 0) {
    this->pev->solid = 4;
  }
  else {
    this->pev->solid = 0;
  }
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  if (this->pev->speed == 0.0) {
    this->pev->speed = 40.0;
  }
  if (*(float *)&this->field_0x8c == 0.0) {
    *(undefined4 *)&this->field_0x8c = 0x3f800000;
  }
  if (0.0 < this->pev->health) {
    this->pev->takedamage = 1.0;
  }
  *(undefined4 *)&this->field_0x80 = 1;
  pvVar4 = this->pev->angles;
  pvVar6 = (vec_t *)&this->field_0xb4;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pvVar6 = *pvVar4;
    pvVar4 = pvVar4 + 1;
    pvVar6 = pvVar6 + 1;
  }
  peVar2 = this->pev;
  fVar1 = *(float *)&this->field_0x88;
  local_2c[0] = peVar2->angles[0] + fVar1 * peVar2->movedir[0];
  local_2c[1] = peVar2->angles[1] + fVar1 * peVar2->movedir[1];
  local_2c[2] = peVar2->angles[2] + fVar1 * peVar2->movedir[2];
  pfVar5 = local_2c;
  pfVar7 = (float *)&this->field_0xc0;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar7 = pfVar7 + 1;
  }
  *(uint *)&this->field_0x104 = (uint)(*(float *)&this->field_0x8c == -1.0);
  *(undefined4 *)&this->field_0x108 = 1;
  if ((this->pev->spawnflags & 0x100) == 0) {
    *(undefined4 *)&this->field_0x14 = 0;
    *(undefined4 *)&this->field_0x18 = 0;
    *(undefined4 *)&this->field_0x1c = 0xffff0000;
    *(code **)&this->field_0x20 = CBaseButton::ButtonUse;
  }
  else {
    *(undefined4 *)&this->field_0x14 = 0xffff0000;
    *(code **)&this->field_0x18 = CBaseButton::ButtonTouch;
  }
  return;
}

