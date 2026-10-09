/* ts_i386.so - CTestEffect (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000bcbc8  CTestEffect::Spawn  (18 bytes)
 * undefined Spawn(void)
 */
/* CTestEffect::Spawn(void) */

void __thiscall CTestEffect::Spawn(CTestEffect *this)

{
  (*this->vtable[10])(this);
  return;
}

/* 000bcbdc  CTestEffect::Precache  (39 bytes)
 * undefined Precache(void)
 */
/* CTestEffect::Precache(void) */

void CTestEffect::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)("sprites/lgtning.spr");
  return;
}

/* 000bcc04  CTestEffect::TestThink  (835 bytes)
 * undefined TestThink(void)
 */
/* CTestEffect::TestThink(void) */

void __thiscall CTestEffect::TestThink(CTestEffect *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  entvars_t *peVar6;
  CBeam *this_00;
  int iVar7;
  int iVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float *pfVar11;
  longdouble lVar12;
  float local_8c [4];
  float local_7c [4];
  vec_t local_6c;
  vec_t local_68;
  vec_t local_64;
  undefined1 local_5c [20];
  undefined4 local_48 [14];
  
  fVar1 = gpGlobals->time;
  fVar2 = *(float *)&this->field_0x134;
  if (*(int *)&this->field_0x70 < 0x18) {
    this_00 = CBeam::BeamCreate(0x10c466,100);
    peVar6 = this->pev;
    local_6c = peVar6->origin[0];
    local_68 = peVar6->origin[1];
    local_64 = peVar6->origin[2];
    lVar12 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar3 = (float)lVar12;
    lVar12 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar4 = (float)lVar12;
    lVar12 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    local_7c[0] = fVar3;
    local_7c[1] = fVar4;
    local_7c[2] = (float)lVar12;
    fVar5 = (float)SQRT(lVar12 * lVar12 +
                        (longdouble)fVar4 * (longdouble)fVar4 +
                        (longdouble)fVar3 * (longdouble)fVar3);
    if (fVar5 == 0.0) {
      local_8c[0] = 0.0;
      local_8c[1] = 0.0;
      local_8c[2] = 1.0;
    }
    else {
      fVar5 = 1.0 / fVar5;
      local_8c[0] = fVar5 * fVar3;
      local_8c[1] = fVar5 * fVar4;
      local_8c[2] = fVar5 * (float)lVar12;
    }
    pfVar9 = local_8c;
    pfVar11 = local_7c;
    for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar11 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar11 = pfVar11 + 1;
    }
    local_8c[0] = local_6c + local_7c[0] * 128.0;
    local_8c[1] = local_68 + local_7c[1] * 128.0;
    local_8c[2] = local_64 + local_7c[2] * 128.0;
    UTIL_TraceLine(&local_6c,local_8c,1,this->pev->pContainingEntity,local_5c);
    CBeam::PointsInit(this_00,&local_6c,local_48);
    this_00->pev->rendercolor[0] = 255.0;
    this_00->pev->rendercolor[1] = 180.0;
    this_00->pev->rendercolor[2] = 100.0;
    this_00->pev->scale = 100.0;
    this_00->pev->animtime = 12.0;
    *(float *)(&this->field_0xd4 + *(int *)&this->field_0x70 * 4) = gpGlobals->time;
    *(CBeam **)(&this->field_0x74 + *(int *)&this->field_0x70 * 4) = this_00;
    *(int *)&this->field_0x70 = *(int *)&this->field_0x70 + 1;
  }
  if (3.0 <= fVar1 - fVar2) {
    iVar7 = 0;
    if (0 < *(int *)&this->field_0x70) {
      puVar10 = (undefined4 *)&this->field_0x74;
      do {
        UTIL_Remove((int *)*puVar10);
        puVar10 = puVar10 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)&this->field_0x70);
    }
    *(float *)&this->field_0x134 = gpGlobals->time;
    *(undefined4 *)&this->field_0x70 = 0;
    *(undefined4 *)&this->field_0xc = 0;
    *(undefined4 *)&this->field_0x10 = 0;
  }
  else {
    iVar7 = 0;
    if (0 < *(int *)&this->field_0x70) {
      iVar8 = 0xd0;
      do {
        *(float *)(**(int **)((int)this + iVar8 + -0x5c) + 0x14c) =
             (float)(int)ROUND(((gpGlobals->time - *(float *)(&this->field_0x4 + iVar8)) /
                               ((*(float *)&this->field_0x134 + 3.0) -
                               *(float *)(&this->field_0x4 + iVar8))) * 255.0);
        iVar8 = iVar8 + 4;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)&this->field_0x70);
    }
    this->pev->nextthink = gpGlobals->time + 0.1;
  }
  return;
}

/* 000bcf4c  CTestEffect::Use  (82 bytes)
 * undefined Use(int * param_1)
 */
/* CTestEffect::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTestEffect::Use(int *param_1)

{
  param_1[3] = -0x10000;
  param_1[4] = (int)TestThink;
  *(float *)(*param_1 + 0x104) = gpGlobals->time + 0.1;
  param_1[0x4d] = (int)gpGlobals->time;
  return;
}

