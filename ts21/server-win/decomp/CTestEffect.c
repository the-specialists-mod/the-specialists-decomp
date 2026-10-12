/* mp.dll - CTestEffect (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10019170  CTestEffect::Spawn  (5 bytes)
 * undefined Spawn()
 */
void __fastcall CTestEffect::Spawn(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10019172. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

/* 10019180  CTestEffect::Precache  (13 bytes)
 * undefined Precache()
 */
void CTestEffect::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_sprites_lgtning_spr_10092ee8);
  return;
}

/* 10019190  CTestEffect::TestThink  (634 bytes)
 * void TestThink(void)
 */
/* public: void __thiscall CTestEffect::TestThink(void) */

void __thiscall CTestEffect::TestThink(CTestEffect *this)

{
  float fVar1;
  float fVar2;
  entvars_t *peVar3;
  CBeam *this_00;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  float10 fVar7;
  float10 fVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  vec_t local_5c;
  vec_t local_58;
  vec_t local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_3c;
  undefined4 auStack_24 [9];
  
                    /* 0x19190  111  ?TestThink@CTestEffect@@QAEXXZ */
  fVar1 = gpGlobals->time;
  fVar2 = *(float *)&this->field_0x124;
  iVar4 = 0;
  if (*(int *)&this->field_0x60 < 0x18) {
    this_00 = CBeam::BeamCreate(0x10092ee8,100);
    peVar3 = this->pev;
    local_5c = peVar3->origin[0];
    local_58 = peVar3->origin[1];
    local_54 = peVar3->origin[2];
    fVar7 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar12 = (float)fVar7;
    fVar7 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar11 = (float)fVar7;
    fVar7 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar8 = SQRT((float10)fVar12 * (float10)fVar12 +
                 (float10)fVar11 * (float10)fVar11 + fVar7 * fVar7);
    if (fVar8 == (float10)0.0) {
      fVar12 = 1.0;
      fVar11 = 0.0;
      fVar10 = 0.0;
    }
    else {
      fVar8 = (float10)1.0 / fVar8;
      fVar12 = (float)((float10)fVar12 * fVar8);
      fVar11 = (float)((float10)fVar11 * fVar8);
      fVar10 = (float)(fVar8 * fVar7);
    }
    FUN_1000c5f0(&fStack_50,fVar10,fVar11,fVar12);
    fStack_3c = fStack_48 * 128.0;
    fStack_50 = fStack_50 * 128.0 + local_5c;
    fStack_4c = local_58 + fStack_4c * 128.0;
    fStack_48 = local_54 + fStack_3c;
    FUN_10067850();
    CBeam::PointsInit(this_00,&local_5c,auStack_24);
    this_00->pev->rendercolor[0] = 255.0;
    this_00->pev->rendercolor[1] = 180.0;
    this_00->pev->rendercolor[2] = 100.0;
    this_00->pev->scale = 100.0;
    this_00->pev->animtime = 12.0;
    *(float *)(&this->field_0xc4 + *(int *)&this->field_0x60 * 4) = gpGlobals->time;
    *(CBeam **)(&this->field_0x64 + *(int *)&this->field_0x60 * 4) = this_00;
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  }
  if (3.0 <= fVar1 - fVar2) {
    iVar4 = 0;
    if (0 < *(int *)&this->field_0x60) {
      piVar5 = (int *)&this->field_0x64;
      do {
        UTIL_Remove(*piVar5);
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar4 < *(int *)&this->field_0x60);
    }
    fVar1 = gpGlobals->time;
    *(undefined4 *)&this->field_0x60 = 0;
    *(float *)&this->field_0x124 = fVar1;
    *(undefined4 *)&this->field_0x10 = 0;
    return;
  }
  if (0 < *(int *)&this->field_0x60) {
    puVar6 = &this->field_0xc4;
    do {
      lVar9 = __ftol();
      piVar5 = (int *)(puVar6 + -0x60);
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 4;
      *(float *)(*(int *)(*piVar5 + 4) + 0x14c) = (float)(int)lVar9;
    } while (iVar4 < *(int *)&this->field_0x60);
  }
  this->pev->nextthink = gpGlobals->time + 0.1;
  return;
}

/* 10019410  CTestEffect::Use  (45 bytes)
 * undefined Use()
 */
void __fastcall CTestEffect::Use(int param_1)

{
  *(code **)(param_1 + 0x10) = TestThink;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  *(float *)(param_1 + 0x124) = gpGlobals->time;
  return;
}

