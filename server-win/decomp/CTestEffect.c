/* mp.dll - CTestEffect (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001c380  CTestEffect::Precache  (13 bytes)
 * undefined Precache()
 */
void CTestEffect::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_sprites_lgtning_spr_1009dfe0);
  return;
}

/* 1001c390  CTestEffect::TestThink  (695 bytes)
 * void TestThink(void)
 */
/* public: void __thiscall CTestEffect::TestThink(void) */

void __thiscall CTestEffect::TestThink(CTestEffect *this)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  entvars_t *peVar4;
  edict_t *peVar5;
  CBeam *this_00;
  undefined4 *puVar6;
  Vector *this_01;
  int iVar7;
  undefined1 *puVar8;
  float10 fVar9;
  float10 fVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  vec_t local_74;
  vec_t local_70;
  vec_t local_6c;
  Vector VStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  Vector VStack_50;
  Vector VStack_44;
  undefined1 auStack_38 [20];
  undefined4 auStack_24 [9];
  
                    /* 0x1c390  118  ?TestThink@CTestEffect@@QAEXXZ */
  fVar2 = gpGlobals->time;
  iVar7 = 0;
  fVar3 = *(float *)&this->field_0x124;
  if (*(int *)&this->field_0x60 < 0x18) {
    this_00 = CBeam::BeamCreate(0x1009dfe0,100);
    peVar4 = this->pev;
    local_74 = peVar4->origin[0];
    local_70 = peVar4->origin[1];
    local_6c = peVar4->origin[2];
    fVar9 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar14 = (float)fVar9;
    fVar9 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar13 = (float)fVar9;
    fVar9 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar10 = SQRT((float10)fVar14 * (float10)fVar14 +
                  (float10)fVar13 * (float10)fVar13 + fVar9 * fVar9);
    if (fVar10 == (float10)0.0) {
      fVar14 = 1.0;
      fVar13 = 0.0;
      fVar12 = 0.0;
      this_01 = &VStack_44;
    }
    else {
      fVar10 = (float10)1.0 / fVar10;
      fVar14 = (float)(fVar10 * (float10)fVar14);
      fVar13 = (float)(fVar10 * (float10)fVar13);
      this_01 = &VStack_50;
      fVar12 = (float)(fVar10 * fVar9);
    }
    puVar6 = (undefined4 *)Vector::Vector(this_01,fVar12,fVar13,fVar14);
    Vector::Vector(&VStack_68,puVar6);
    fStack_5c = VStack_68.x * 128.0;
    fStack_58 = VStack_68.y * 128.0;
    peVar5 = this->pev->pContainingEntity;
    fStack_54 = VStack_68.z * 128.0;
    Vector::Vector(&VStack_68,&fStack_5c);
    VStack_50.x = VStack_68.x + local_74;
    VStack_50.y = local_70 + VStack_68.y;
    VStack_50.z = local_6c + VStack_68.z;
    Vector::Vector(&VStack_44,&VStack_50.x);
    UTIL_TraceLine(&local_74,&VStack_44,1,peVar5,auStack_38);
    CBeam::PointsInit(this_00,&local_74,auStack_24);
    this_00->pev->rendercolor[0] = 255.0;
    this_00->pev->rendercolor[1] = 180.0;
    this_00->pev->rendercolor[2] = 100.0;
    this_00->pev->scale = 100.0;
    this_00->pev->animtime = 12.0;
    *(float *)(&this->field_0xc4 + *(int *)&this->field_0x60 * 4) = gpGlobals->time;
    *(CBeam **)(&this->field_0x64 + *(int *)&this->field_0x60 * 4) = this_00;
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  }
  if (fVar2 - fVar3 < 3.0) {
    if (0 < *(int *)&this->field_0x60) {
      puVar8 = &this->field_0xc4;
      do {
        lVar11 = __ftol();
        piVar1 = (int *)(puVar8 + -0x60);
        iVar7 = iVar7 + 1;
        puVar8 = puVar8 + 4;
        *(float *)(*(int *)(*piVar1 + 4) + 0x14c) = (float)(int)lVar11;
      } while (iVar7 < *(int *)&this->field_0x60);
    }
    this->pev->nextthink = gpGlobals->time + 0.1;
    return;
  }
  iVar7 = 0;
  if (0 < *(int *)&this->field_0x60) {
    puVar6 = (undefined4 *)&this->field_0x64;
    do {
      UTIL_Remove((int *)*puVar6);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 < *(int *)&this->field_0x60);
  }
  fVar2 = gpGlobals->time;
  *(undefined4 *)&this->field_0x60 = 0;
  *(float *)&this->field_0x124 = fVar2;
  *(undefined4 *)&this->field_0x10 = 0;
  return;
}

/* 1001c650  CTestEffect::Use  (45 bytes)
 * undefined Use()
 */
void __fastcall CTestEffect::Use(int param_1)

{
  *(code **)(param_1 + 0x10) = TestThink;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  *(float *)(param_1 + 0x124) = gpGlobals->time;
  return;
}

