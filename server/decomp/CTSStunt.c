/* ts_i386.so - CTSStunt (25 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00099fbc  CTSStunt::Init  (85 bytes)
 * undefined Init(undefined4 param_1)
 */
/* CTSStunt::Init(CBasePlayer *) */

void __thiscall CTSStunt::Init(CTSStunt *this,undefined4 param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x2c] = (CTSStunt)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = param_1;
  return;
}

/* 0009a014  CTSStunt::Play  (1127 bytes)
 * undefined Play(void)
 */
/* CTSStunt::Play(void) */

void __thiscall CTSStunt::Play(CTSStunt *this)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longdouble lVar7;
  longdouble lVar8;
  float fVar9;
  undefined4 local_2c [7];
  
  lVar7 = (longdouble)
          (**(code **)(*(int *)(*(int *)(this + 0x40) + 0x60) + 0x10))(*(int *)(this + 0x40));
  lVar7 = lVar7 * (longdouble)gpGlobals->frametime;
  if (*(float *)(this + 4) != 0.0) {
    lVar8 = (longdouble)*(float *)(this + 4) - lVar7;
    if (lVar8 < (longdouble)0.001) {
      lVar8 = (longdouble)0.001;
    }
    *(float *)(this + 4) = (float)lVar8;
  }
  lVar8 = (longdouble)*(float *)this - lVar7;
  if (lVar8 < (longdouble)0.0) {
    lVar8 = (longdouble)0.0;
  }
  *(float *)this = (float)lVar8;
  lVar8 = (longdouble)*(float *)(this + 8) - lVar7;
  if (lVar8 < (longdouble)0.0) {
    lVar8 = (longdouble)0.0;
  }
  *(float *)(this + 8) = (float)lVar8;
  lVar7 = (longdouble)*(float *)(this + 0x30) - lVar7;
  if (lVar7 < (longdouble)0.0) {
    lVar7 = (longdouble)0.0;
  }
  *(float *)(this + 0x30) = (float)lVar7;
  iVar3 = (**(code **)(*(int *)(*(int *)(this + 0x40) + 0x60) + 0xb4))(*(int *)(this + 0x40));
  if ((iVar3 != 0) && (iVar3 = **(int **)(this + 0x40), *(int *)(iVar3 + 0x244) == 0)) {
    if ((*(uint *)(iVar3 + 0x250) & 0x200000) != 0) {
      *(uint *)(iVar3 + 0x250) = *(uint *)(iVar3 + 0x250) | 0x100000;
      *(uint *)(**(int **)(this + 0x40) + 0x250) =
           *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xffdfffff;
      CTSAnimation::Animate
                ((CTSAnimation *)(*(int *)(this + 0x40) + 0x28c),*(CBasePlayer **)(this + 0x40),0x39
                );
      iVar3 = *(int *)(**(int **)(this + 0x40) + 0x208);
      fVar9 = 0.5;
      iVar4 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
      EMIT_SOUND_DYN(iVar3,4,"player/airwheel.wav",0x3f800000,0x3f4ccccd,0,iVar4 + 0x5f,fVar9);
    }
    if ((*(byte *)(**(int **)(this + 0x40) + 0x1a5) & 2) != 0) {
      *(undefined4 *)(this + 0x38) = 0;
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0x3c) = 0;
    }
    bVar2 = CBasePlayer::IsOnLadder(*(CBasePlayer **)(this + 0x40));
    if ((CONCAT31(extraout_var,bVar2) == 0) && (*(int *)(**(int **)(this + 0x40) + 0x1c0) != 3)) {
      if ((*(float *)(this + 4) != 0.0) &&
         ((*(float *)(this + 4) < 0.01 || (*(int *)(*(int *)(this + 0x40) + 0x78) != 0)))) {
        *(uint *)(**(int **)(this + 0x40) + 0x250) =
             *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xfffbffff;
        *(uint *)(**(int **)(this + 0x40) + 0x250) =
             *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xfff7ffff;
        *(uint *)(**(int **)(this + 0x40) + 0x250) =
             *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xfffffffb;
        *(uint *)(**(int **)(this + 0x40) + 0x250) =
             *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xfffffffe;
        *(uint *)(**(int **)(this + 0x40) + 0x250) =
             *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xfffffffd;
        *(undefined4 *)(this + 4) = 0;
        *(undefined4 *)(*(int *)(this + 0x40) + 0x4dc) = 0;
        *(undefined4 *)(**(int **)(this + 0x40) + 0x120) = 0x3f800000;
        iVar3 = **(int **)(this + 0x40);
        if ((*(byte *)(iVar3 + 0x1a5) & 0x40) == 0) {
          iVar3 = **(int **)(this + 0x40);
          local_2c[0] = 0;
          local_2c[1] = 0;
          local_2c[2] = 0x41e00000;
        }
        else {
          local_2c[0] = 0;
          local_2c[1] = 0;
          local_2c[2] = 0x41800000;
        }
        local_2c[1] = 0;
        puVar5 = local_2c;
        puVar6 = (undefined4 *)(iVar3 + 0x174);
        for (iVar4 = 3; local_2c[0] = local_2c[1], iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      if ((*(byte *)(**(int **)(this + 0x40) + 0x250) & 0x10) != 0) {
        HandleDive(this);
      }
      if ((*(byte *)(**(int **)(this + 0x40) + 0x250) & 0x20) != 0) {
        HandleSlide(this);
      }
      if ((*(uint *)(**(int **)(this + 0x40) + 0x250) & 0xc00) != 0) {
        HandleWheel(this);
      }
      if ((*(byte *)(**(int **)(this + 0x40) + 0x252) & 1) != 0) {
        HandleWallJump(this);
      }
      if ((*(byte *)(**(int **)(this + 0x40) + 0x252) & 2) != 0) {
        HandleWallClimb(this);
      }
      if ((*(uint *)(**(int **)(this + 0x40) + 0x180) & 0x4002) != 0) {
        HandleStunt(this);
      }
    }
    else {
      *(uint *)(**(int **)(this + 0x40) + 0x250) =
           *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xffefffff;
      uVar1 = *(uint *)(**(int **)(this + 0x40) + 0x250);
      if ((uVar1 & 0x70c31) != 0) {
        *(uint *)(**(int **)(this + 0x40) + 0x250) = uVar1 & 0xfffbffff;
        *(uint *)(**(int **)(this + 0x40) + 0x250) =
             *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xfffffffb;
        *(uint *)(**(int **)(this + 0x40) + 0x250) =
             *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xfffffffe;
        *(uint *)(**(int **)(this + 0x40) + 0x250) =
             *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xffffffef;
        *(uint *)(**(int **)(this + 0x40) + 0x250) =
             *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xffffffdf;
        *(uint *)(**(int **)(this + 0x40) + 0x250) =
             *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xfffffbff;
        *(uint *)(**(int **)(this + 0x40) + 0x250) =
             *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xfffff7ff;
        *(uint *)(**(int **)(this + 0x40) + 0x250) =
             *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xfffeffff;
        *(uint *)(**(int **)(this + 0x40) + 0x250) =
             *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xfffdffff;
        local_2c[0] = 0;
        local_2c[1] = 0;
        local_2c[2] = 0x41e00000;
        puVar5 = local_2c;
        puVar6 = (undefined4 *)(**(int **)(this + 0x40) + 0x174);
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        *(undefined4 *)(**(int **)(this + 0x40) + 0x120) = 0x3f800000;
        *(undefined4 *)(**(int **)(this + 0x40) + 0x11c) = 0x3f800000;
        *(undefined4 *)(this + 4) = 0;
        *(undefined4 *)(*(int *)(this + 0x40) + 0x4dc) = 0;
        *(undefined4 *)(*(int *)(this + 0x40) + 0x28c) = 0xffffffff;
        CTSAnimation::Animate
                  ((CTSAnimation *)(*(int *)(this + 0x40) + 0x28c),*(CBasePlayer **)(this + 0x40),1)
        ;
      }
    }
  }
  return;
}

/* 0009a480  CTSStunt::SlotBonus  (20 bytes)
 * undefined4 SlotBonus(void)
 */
/* CTSStunt::SlotBonus(void) */

undefined4 CTSStunt::SlotBonus(void)

{
  return 0;
}

/* 0009a494  CTSStunt::CanDiveHigh  (85 bytes)
 * bool CanDiveHigh(void)
 */
/* CTSStunt::CanDiveHigh(void) */

bool __thiscall CTSStunt::CanDiveHigh(CTSStunt *this)

{
  bool bVar1;
  int iVar2;
  
  if (*(char *)(*(int *)(this + 0x40) + 0x7b9) == '\0') {
    iVar2 = SlotBonus();
    bVar1 = (-iVar2 - *(int *)(*(int *)(this + 0x40) + 0x548)) + 0x51 < 0x2a;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

/* 0009a4ec  CTSStunt::CanDiveMedium  (85 bytes)
 * bool CanDiveMedium(void)
 */
/* CTSStunt::CanDiveMedium(void) */

bool __thiscall CTSStunt::CanDiveMedium(CTSStunt *this)

{
  bool bVar1;
  int iVar2;
  
  if (*(char *)(*(int *)(this + 0x40) + 0x7b9) == '\0') {
    iVar2 = SlotBonus();
    bVar1 = (-iVar2 - *(int *)(*(int *)(this + 0x40) + 0x548)) + 0x51 < 0x34;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

/* 0009a544  CTSStunt::CanDiveLow  (85 bytes)
 * bool CanDiveLow(void)
 */
/* CTSStunt::CanDiveLow(void) */

bool __thiscall CTSStunt::CanDiveLow(CTSStunt *this)

{
  bool bVar1;
  int iVar2;
  
  if (*(char *)(*(int *)(this + 0x40) + 0x7b9) == '\0') {
    iVar2 = SlotBonus();
    bVar1 = (-iVar2 - *(int *)(*(int *)(this + 0x40) + 0x548)) + 0x51 < 0x3e;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

/* 0009a59c  CTSStunt::NextDive  (21 bytes)
 * longdouble NextDive(void)
 */
/* CTSStunt::NextDive(void) */

longdouble CTSStunt::NextDive(void)

{
  return (longdouble)0.0;
}

/* 0009a5b4  CTSStunt::GoBulletTime  (543 bytes)
 * undefined GoBulletTime(void)
 */
/* CTSStunt::GoBulletTime(void) */

void __thiscall CTSStunt::GoBulletTime(CTSStunt *this)

{
  int iVar1;
  int iVar2;
  vec_t *pvVar3;
  undefined4 *puVar4;
  CTSStunt *pCVar5;
  undefined4 *puVar6;
  longdouble lVar7;
  float fVar8;
  vec_t local_2c [7];
  
  lVar7 = (longdouble)
          (**(code **)(*(int *)(*(int *)(this + 0x40) + 0x60) + 0x10))(*(int *)(this + 0x40));
  if (lVar7 <= (longdouble)0.99) {
    UTIL_MakeVectors(**(int **)(this + 0x40) + 0x74);
    local_2c[0] = -gpGlobals->v_forward[0];
    local_2c[1] = -gpGlobals->v_forward[1];
    local_2c[2] = -gpGlobals->v_forward[2];
    pvVar3 = local_2c;
    pCVar5 = this + 0x20;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(vec_t *)pCVar5 = *pvVar3;
      pvVar3 = pvVar3 + 1;
      pCVar5 = pCVar5 + 4;
    }
    this[0x2c] = (CTSStunt)0x1;
    *(undefined4 *)this = 0x3f0ccccd;
    *(float *)(this + 0x34) = gpGlobals->time + 0.55;
    (*g_engfuncs.pfnMessageBegin)
              (1,gmsgTSNextStunt,(float *)0x0,*(edict_t **)(**(int **)(this + 0x40) + 0x208));
    (*g_engfuncs.pfnWriteByte)((int)ROUND(*(float *)this * 10.0));
    (*g_engfuncs.pfnMessageEnd)();
    *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 4;
    *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x20;
    *(undefined4 *)(*(int *)(this + 0x40) + 0x2a0) = 3;
    *(undefined4 *)(this + 0x30) = 0x3f0ccccd;
    puVar4 = &g_vecZero;
    puVar6 = (undefined4 *)(**(int **)(this + 0x40) + 0x174);
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    CTSAnimation::Animate
              ((CTSAnimation *)(*(int *)(this + 0x40) + 0x28c),*(CBasePlayer **)(this + 0x40),0x36);
    iVar2 = *(int *)(**(int **)(this + 0x40) + 0x208);
    fVar8 = 0.5;
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(iVar2,4,"player/land.wav",0x3f800000,0x3f4ccccd,0,iVar1 + 0x5f,fVar8);
    (*g_engfuncs.pfnMessageBegin)
              (4,gmsgTSMotionBlur,(float *)(**(int **)(this + 0x40) + 8),(edict_t *)0x0);
    iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(**(int **)(this + 0x40) + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar2);
    (*g_engfuncs.pfnWriteByte)(2);
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 0009a7d4  CTSStunt::GoWallJump  (584 bytes)
 * undefined GoWallJump(void)
 */
/* CTSStunt::GoWallJump(void) */

void __thiscall CTSStunt::GoWallJump(CTSStunt *this)

{
  int iVar1;
  int iVar2;
  vec_t *pvVar3;
  undefined4 *puVar4;
  CTSStunt *pCVar5;
  undefined4 *puVar6;
  longdouble lVar7;
  float fVar8;
  vec_t local_2c [7];
  
  UTIL_MakeVectors(**(int **)(this + 0x40) + 0x74);
  local_2c[0] = -gpGlobals->v_forward[0];
  local_2c[1] = -gpGlobals->v_forward[1];
  local_2c[2] = -gpGlobals->v_forward[2];
  pvVar3 = local_2c;
  pCVar5 = this + 0x20;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(vec_t *)pCVar5 = *pvVar3;
    pvVar3 = pvVar3 + 1;
    pCVar5 = pCVar5 + 4;
  }
  *(uint *)(**(int **)(this + 0x40) + 0x250) =
       *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xffefffff;
  *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 4;
  *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x1000;
  *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x10000;
  *(uint *)(**(int **)(this + 0x40) + 0x250) =
       *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xfffdffff;
  puVar4 = &g_vecZero;
  puVar6 = (undefined4 *)(**(int **)(this + 0x40) + 0x174);
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  CTSAnimation::Animate
            ((CTSAnimation *)(*(int *)(this + 0x40) + 0x28c),*(CBasePlayer **)(this + 0x40),0x37);
  *(undefined4 *)(**(int **)(this + 0x40) + 0x11c) = 0x3f400000;
  *(float *)(this + 0x38) = *(float *)(this + 0x38) + 0.35;
  fVar8 = *(float *)(this + 0x38);
  if (fVar8 < 0.5) {
    fVar8 = 0.5;
  }
  *(float *)this = fVar8;
  (*g_engfuncs.pfnMessageBegin)
            (1,gmsgTSNextStunt,(float *)0x0,*(edict_t **)(**(int **)(this + 0x40) + 0x208));
  (*g_engfuncs.pfnWriteByte)((int)ROUND(*(float *)this * 10.0));
  (*g_engfuncs.pfnMessageEnd)();
  iVar2 = *(int *)(**(int **)(this + 0x40) + 0x208);
  fVar8 = 0.5;
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
  EMIT_SOUND_DYN(iVar2,4,"player/airwheel.wav",0x3f800000,0x3f4ccccd,0,iVar1 + 0x5f,fVar8);
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,10);
  lVar7 = (longdouble)
          (**(code **)(*(int *)(*(int *)(this + 0x40) + 0x60) + 0x10))(*(int *)(this + 0x40));
  if ((longdouble)5.0 < lVar7 * (longdouble)10.0 + (longdouble)iVar2) {
    (*g_engfuncs.pfnMessageBegin)
              (4,gmsgTSMotionBlur,(float *)(**(int **)(this + 0x40) + 8),(edict_t *)0x0);
    iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(**(int **)(this + 0x40) + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar2);
    (*g_engfuncs.pfnWriteByte)(2);
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 0009aa1c  CTSStunt::GoWallClimb  (500 bytes)
 * undefined GoWallClimb(void)
 */
/* CTSStunt::GoWallClimb(void) */

void __thiscall CTSStunt::GoWallClimb(CTSStunt *this)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  int iVar3;
  vec_t *pvVar4;
  undefined4 *puVar5;
  CTSStunt *pCVar6;
  undefined4 *puVar7;
  float fVar8;
  vec_t local_2c [7];
  
  UTIL_MakeVectors(**(int **)(this + 0x40) + 0x74);
  local_2c[0] = -gpGlobals->v_forward[0];
  local_2c[1] = -gpGlobals->v_forward[1];
  local_2c[2] = -gpGlobals->v_forward[2];
  pvVar4 = local_2c;
  pCVar6 = this + 0x20;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(vec_t *)pCVar6 = *pvVar4;
    pvVar4 = pvVar4 + 1;
    pCVar6 = pCVar6 + 4;
  }
  *(uint *)(**(int **)(this + 0x40) + 0x250) =
       *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xffefffff;
  *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 4;
  *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x8000;
  *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x20000;
  *(uint *)(**(int **)(this + 0x40) + 0x250) =
       *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xfffeffff;
  puVar5 = &g_vecZero;
  puVar7 = (undefined4 *)(**(int **)(this + 0x40) + 0x174);
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  CTSAnimation::Animate
            ((CTSAnimation *)(*(int *)(this + 0x40) + 0x28c),*(CBasePlayer **)(this + 0x40),0x38);
  *(undefined4 *)(**(int **)(this + 0x40) + 0x11c) = 0x3f800000;
  bVar1 = CanDiveHigh(this);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = CanDiveMedium(this);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      fVar8 = 0.75;
    }
    else {
      fVar8 = 0.5;
    }
  }
  else {
    fVar8 = 0.3;
  }
  *(float *)(this + 0x38) = fVar8 + *(float *)(this + 0x38);
  fVar8 = *(float *)(this + 0x38);
  if (fVar8 < 0.5) {
    fVar8 = 0.5;
  }
  *(float *)this = fVar8;
  (*g_engfuncs.pfnMessageBegin)
            (1,gmsgTSNextStunt,(float *)0x0,*(edict_t **)(**(int **)(this + 0x40) + 0x208));
  (*g_engfuncs.pfnWriteByte)((int)ROUND(*(float *)this * 10.0));
  (*g_engfuncs.pfnMessageEnd)();
  iVar3 = *(int *)(**(int **)(this + 0x40) + 0x208);
  fVar8 = 0.5;
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
  EMIT_SOUND_DYN(iVar3,4,"player/airwheel.wav",0x3f800000,0x3f4ccccd,0,iVar2 + 0x5f,fVar8);
  *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
  return;
}

/* 0009ac14  CTSStunt::CheckForWallJump  (302 bytes)
 * uint CheckForWallJump(void)
 */
/* CTSStunt::CheckForWallJump(void) */

uint __thiscall CTSStunt::CheckForWallJump(CTSStunt *this)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  undefined4 uVar5;
  uint uVar6;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_5c [16];
  float local_4c;
  float local_30;
  
  bVar4 = CanDiveHigh(this);
  uVar6 = 0;
  if (CONCAT31(extraout_var,bVar4) != 0) {
    UTIL_MakeVectors(**(int **)(this + 0x40) + 0x74);
    iVar2 = **(int **)(this + 0x40);
    local_6c = *(float *)(iVar2 + 8) + gpGlobals->v_forward[0] * 48.0;
    local_68 = *(float *)(iVar2 + 0xc) + gpGlobals->v_forward[1] * 48.0;
    local_64 = *(float *)(iVar2 + 0x10) + gpGlobals->v_forward[2] * 48.0;
    UTIL_TraceLine(**(int **)(this + 0x40) + 8,&local_6c,1,*(undefined4 *)(iVar2 + 0x208),local_5c);
    uVar6 = CONCAT22(extraout_var_00,
                     (ushort)(local_4c < 1.0) << 8 | (ushort)NAN(local_4c) << 10 |
                     (ushort)(local_4c == 1.0) << 0xe);
    if (local_4c < 1.0 != 0) {
      bVar4 = false;
      uVar5 = CONCAT22(extraout_var_00,
                       (ushort)(local_30 < 0.5) << 8 | (ushort)NAN(local_30) << 10 |
                       (ushort)(local_30 == 0.5) << 0xe);
      if ((local_30 < 0.5 != 0) &&
         (uVar5 = CONCAT22(extraout_var_00,
                           (ushort)(local_30 < -0.5) << 8 | (ushort)NAN(local_30) << 10 |
                           (ushort)(local_30 == -0.5) << 0xe),
         local_30 < -0.5 == 0 && (local_30 == -0.5) == 0)) {
        bVar4 = true;
      }
      bVar3 = false;
      if (bVar4) {
        fVar1 = *(float *)(**(int **)(this + 0x40) + 0x28);
        uVar5 = CONCAT22((short)((uint)(**(int **)(this + 0x40) + 0x20) >> 0x10),
                         (ushort)(fVar1 < -370.0) << 8 | (ushort)NAN(fVar1) << 10 |
                         (ushort)(fVar1 == -370.0) << 0xe);
        if (fVar1 < -370.0 == 0 && (fVar1 == -370.0) == 0) {
          bVar3 = true;
        }
      }
      uVar6 = CONCAT31((int3)((uint)uVar5 >> 8),1);
      if (bVar3) {
        return uVar6;
      }
    }
  }
  return uVar6 & 0xffffff00;
}

/* 0009ad44  CTSStunt::CheckForWallDive  (295 bytes)
 * uint CheckForWallDive(void)
 */
/* CTSStunt::CheckForWallDive(void) */

uint __thiscall CTSStunt::CheckForWallDive(CTSStunt *this)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined2 extraout_var;
  undefined4 uVar5;
  uint uVar6;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_5c [16];
  float local_4c;
  float local_30;
  
  uVar6 = **(uint **)(this + 0x40);
  if ((*(byte *)(uVar6 + 0x1a5) & 2) == 0) {
    UTIL_MakeVectors(uVar6 + 0x74);
    iVar2 = **(int **)(this + 0x40);
    local_6c = *(float *)(iVar2 + 8) - gpGlobals->v_forward[0] * 48.0;
    local_68 = *(float *)(iVar2 + 0xc) - gpGlobals->v_forward[1] * 48.0;
    local_64 = *(float *)(iVar2 + 0x10) - gpGlobals->v_forward[2] * 48.0;
    UTIL_TraceLine(**(int **)(this + 0x40) + 8,&local_6c,1,*(undefined4 *)(iVar2 + 0x208),local_5c);
    uVar6 = CONCAT22(extraout_var,
                     (ushort)(local_4c < 1.0) << 8 | (ushort)NAN(local_4c) << 10 |
                     (ushort)(local_4c == 1.0) << 0xe);
    if (local_4c < 1.0 != 0) {
      bVar3 = false;
      uVar5 = CONCAT22(extraout_var,
                       (ushort)(local_30 < 0.5) << 8 | (ushort)NAN(local_30) << 10 |
                       (ushort)(local_30 == 0.5) << 0xe);
      if ((local_30 < 0.5 != 0) &&
         (uVar5 = CONCAT22(extraout_var,
                           (ushort)(local_30 < -0.5) << 8 | (ushort)NAN(local_30) << 10 |
                           (ushort)(local_30 == -0.5) << 0xe),
         local_30 < -0.5 == 0 && (local_30 == -0.5) == 0)) {
        bVar3 = true;
      }
      bVar4 = false;
      if (bVar3) {
        fVar1 = *(float *)(**(int **)(this + 0x40) + 0x28);
        uVar5 = CONCAT22((short)((uint)(**(int **)(this + 0x40) + 0x20) >> 0x10),
                         (ushort)(fVar1 < -370.0) << 8 | (ushort)NAN(fVar1) << 10 |
                         (ushort)(fVar1 == -370.0) << 0xe);
        if (fVar1 < -370.0 == 0 && (fVar1 == -370.0) == 0) {
          bVar4 = true;
        }
      }
      uVar6 = CONCAT31((int3)((uint)uVar5 >> 8),1);
      if (bVar4) {
        return uVar6;
      }
    }
  }
  return uVar6 & 0xffffff00;
}

/* 0009ae6c  CTSStunt::CheckForWallClimb  (402 bytes)
 * uint CheckForWallClimb(void)
 */
/* CTSStunt::CheckForWallClimb(void) */

uint __thiscall CTSStunt::CheckForWallClimb(CTSStunt *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined2 extraout_var;
  uint uVar6;
  undefined4 uVar7;
  void *pvVar9;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 local_5c [16];
  float local_4c;
  float local_30;
  edict_t *local_2c;
  undefined2 uVar8;
  
  uVar6 = **(uint **)(this + 0x40);
  if ((*(byte *)(uVar6 + 0x252) & 2) == 0) {
    if (((*(uint **)(this + 0x40))[0x205] & 2) == 0) goto LAB_0009aff5;
    fVar1 = *(float *)(this + 0x14);
    fVar2 = gpGlobals->time;
    uVar6 = CONCAT22(0x19,(ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                          (ushort)(fVar1 == fVar2) << 0xe);
    if (fVar1 < fVar2 != 0) {
      *(float *)(this + 0x14) = gpGlobals->time + 0.3;
      goto LAB_0009aff5;
    }
  }
  UTIL_MakeVectors(**(int **)(this + 0x40) + 0x74);
  iVar3 = **(int **)(this + 0x40);
  local_7c = *(float *)(iVar3 + 8) + gpGlobals->v_forward[0] * 54.0;
  local_78 = *(float *)(iVar3 + 0xc) + gpGlobals->v_forward[1] * 54.0;
  local_74 = *(float *)(iVar3 + 0x10) + gpGlobals->v_forward[2] * 54.0;
  UTIL_TraceLine(**(int **)(this + 0x40) + 8,&local_7c,0,*(undefined4 *)(iVar3 + 0x208),local_5c);
  uVar6 = CONCAT22(extraout_var,
                   (ushort)(local_4c < 1.0) << 8 | (ushort)NAN(local_4c) << 10 |
                   (ushort)(local_4c == 1.0) << 0xe);
  if (local_4c < 1.0 != 0) {
    if (local_2c == (edict_t *)0x0) {
      local_2c = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    pvVar9 = (void *)0x0;
    if (local_2c != (edict_t *)0x0) {
      pvVar9 = local_2c->pvPrivateData;
    }
    if (pvVar9 != (void *)0x0) {
      uVar6 = (**(code **)(*(int *)((int)pvVar9 + 0x60) + 200))(pvVar9);
      local_2c = (edict_t *)0x0;
      if (uVar6 != 0) goto LAB_0009aff5;
    }
    bVar4 = false;
    uVar8 = (undefined2)((uint)local_2c >> 0x10);
    uVar7 = CONCAT22(uVar8,(ushort)(local_30 < 0.5) << 8 | (ushort)NAN(local_30) << 10 |
                           (ushort)(local_30 == 0.5) << 0xe);
    if ((local_30 < 0.5 != 0) &&
       (uVar7 = CONCAT22(uVar8,(ushort)(local_30 < -0.5) << 8 | (ushort)NAN(local_30) << 10 |
                               (ushort)(local_30 == -0.5) << 0xe),
       local_30 < -0.5 == 0 && (local_30 == -0.5) == 0)) {
      bVar4 = true;
    }
    bVar5 = false;
    if (bVar4) {
      fVar1 = *(float *)(**(int **)(this + 0x40) + 0x28);
      uVar7 = CONCAT22((short)((uint)(**(int **)(this + 0x40) + 0x20) >> 0x10),
                       (ushort)(fVar1 < -370.0) << 8 | (ushort)NAN(fVar1) << 10 |
                       (ushort)(fVar1 == -370.0) << 0xe);
      if (fVar1 < -370.0 == 0 && (fVar1 == -370.0) == 0) {
        bVar5 = true;
      }
    }
    uVar6 = CONCAT31((int3)((uint)uVar7 >> 8),1);
    if (bVar5) {
      return uVar6;
    }
  }
LAB_0009aff5:
  return uVar6 & 0xffffff00;
}

/* 0009b000  CTSStunt::HandleStunt  (412 bytes)
 * undefined HandleStunt(void)
 */
/* CTSStunt::HandleStunt(void) */

void __thiscall CTSStunt::HandleStunt(CTSStunt *this)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  longdouble lVar6;
  
  if (0.0 < *(float *)this) {
    return;
  }
  if (0.0 < *(float *)(this + 4)) {
    return;
  }
  if ((*(uint *)(**(int **)(this + 0x40) + 0x250) & 0xc30) != 0) {
    return;
  }
  (*(int **)(this + 0x40))[0x1e7] = 0;
  *(undefined4 *)(*(int *)(this + 0x40) + 0x7a0) = 0;
  *(undefined1 *)(*(int *)(this + 0x40) + 0x7a4) = 0;
  if ((*(byte *)(**(int **)(this + 0x40) + 0x180) & 2) == 0) {
    if ((*(byte *)(*(int *)(this + 0x40) + 0x815) & 0x40) != 0) {
      uVar5 = CheckForWallJump(this);
      if ((char)uVar5 != '\0') {
        GoWallJump(this);
        return;
      }
      uVar5 = CheckForWallDive(this);
      if ((char)uVar5 != '\0') {
        *(uint *)(**(int **)(this + 0x40) + 0x250) =
             *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x800000;
        goto LAB_0009b188;
      }
    }
  }
  else {
    uVar5 = CheckForWallClimb(this);
    if ((char)uVar5 != '\0') {
      GoWallClimb(this);
      return;
    }
  }
  piVar3 = *(int **)(this + 0x40);
  if ((*(byte *)((int)piVar3 + 0x815) & 0x40) == 0) {
    return;
  }
  iVar4 = *piVar3;
  if ((*(uint *)(iVar4 + 0x250) & 0x130000) != 0) {
    return;
  }
  if ((*(byte *)(iVar4 + 0x1a5) & 2) == 0) {
    if (*(float *)(iVar4 + 0x28) < -680.0) {
      return;
    }
    fVar1 = gpGlobals->time;
    fVar2 = (float)piVar3[0x2e2];
    lVar6 = (longdouble)(**(code **)(piVar3[0x18] + 0x10))(piVar3);
    if ((longdouble)0.7 / lVar6 < (longdouble)(fVar1 - fVar2)) {
      return;
    }
  }
  fVar1 = *(float *)(**(int **)(this + 0x40) + 0x20);
  fVar2 = *(float *)(**(int **)(this + 0x40) + 0x24);
  if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 80.0) {
    GoBulletTime(this);
    return;
  }
LAB_0009b188:
  GoDive(this);
  return;
}

/* 0009b1a0  CTSStunt::GoDive  (855 bytes)
 * undefined GoDive(void)
 */
/* CTSStunt::GoDive(void) */

void __thiscall CTSStunt::GoDive(CTSStunt *this)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  vec_t *pvVar5;
  float *pfVar6;
  undefined4 *puVar7;
  CTSStunt *pCVar8;
  undefined2 in_FPUControlWord;
  longdouble lVar9;
  float fVar10;
  float local_3c [6];
  int local_24;
  undefined2 local_20;
  undefined2 uStack_1e;
  
  if ((-10.0 <= *(float *)(**(int **)(this + 0x40) + 0x74)) ||
     (bVar1 = CanDiveHigh(this), CONCAT31(extraout_var,bVar1) == 0)) {
    if ((10.0 < *(float *)(**(int **)(this + 0x40) + 0x74)) ||
       (bVar1 = CanDiveMedium(this), CONCAT31(extraout_var_00,bVar1) == 0)) {
      *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x80
      ;
      bVar1 = CanDiveLow(this);
      if (CONCAT31(extraout_var_01,bVar1) == 0) {
        *(undefined4 *)(**(int **)(this + 0x40) + 0x120) = 0x3f666666;
        *(undefined4 *)(**(int **)(this + 0x40) + 0x11c) = 0x3f800000;
        goto LAB_0009b282;
      }
      *(undefined4 *)(**(int **)(this + 0x40) + 0x120) = 0x3e800000;
    }
    else {
      *(uint *)(**(int **)(this + 0x40) + 0x250) =
           *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x100;
    }
  }
  else {
    *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x40;
  }
  *(undefined4 *)(**(int **)(this + 0x40) + 0x11c) = 0x3f400000;
LAB_0009b282:
  *(uint *)(**(int **)(this + 0x40) + 0x250) =
       *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xffefffff;
  *(uint *)(**(int **)(this + 0x40) + 0x250) =
       *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xffff7fff;
  *(uint *)(**(int **)(this + 0x40) + 0x250) =
       *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xfffdffff;
  *(uint *)(**(int **)(this + 0x40) + 0x250) =
       *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xfffeffff;
  *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 4;
  *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x10;
  puVar4 = &g_vecZero;
  puVar7 = (undefined4 *)(**(int **)(this + 0x40) + 0x174);
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  CTSAnimation::Animate
            ((CTSAnimation *)(*(int *)(this + 0x40) + 0x28c),*(CBasePlayer **)(this + 0x40),0x28);
  lVar9 = NextDive();
  *(float *)this = (float)lVar9;
  (*g_engfuncs.pfnMessageBegin)
            (1,gmsgTSNextStunt,(float *)0x0,*(edict_t **)(**(int **)(this + 0x40) + 0x208));
  _local_20 = CONCAT22(uStack_1e,in_FPUControlWord);
  local_24 = (int)ROUND(*(float *)this * 10.0);
  (*g_engfuncs.pfnWriteByte)(local_24);
  (*g_engfuncs.pfnMessageEnd)();
  iVar3 = (*g_engfuncs.pfnRandomLong)(0,10);
  lVar9 = (longdouble)
          (**(code **)(*(int *)(*(int *)(this + 0x40) + 0x60) + 0x10))(*(int *)(this + 0x40));
  if ((longdouble)8.0 < lVar9 * (longdouble)10.0 + (longdouble)iVar3) {
    (*g_engfuncs.pfnMessageBegin)
              (4,gmsgTSMotionBlur,(float *)(**(int **)(this + 0x40) + 8),(edict_t *)0x0);
    iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(**(int **)(this + 0x40) + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar3);
    (*g_engfuncs.pfnWriteByte)(2);
    (*g_engfuncs.pfnMessageEnd)();
  }
  if ((*(byte *)(**(int **)(this + 0x40) + 0x252) & 0x80) == 0) {
    iVar3 = **(int **)(this + 0x40);
    fVar10 = SQRT(*(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28) +
                  *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                  *(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20));
    if (fVar10 == 0.0) {
      local_3c[0] = 0.0;
      local_3c[1] = 0.0;
      local_3c[2] = 1.0;
    }
    else {
      fVar10 = 1.0 / fVar10;
      local_3c[0] = fVar10 * *(float *)(iVar3 + 0x20);
      local_3c[1] = fVar10 * *(float *)(iVar3 + 0x24);
      local_3c[2] = fVar10 * *(float *)(iVar3 + 0x28);
    }
    pfVar6 = local_3c;
    pCVar8 = this + 0x20;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(float *)pCVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pCVar8 = pCVar8 + 4;
    }
  }
  else {
    UTIL_MakeVectors(**(int **)(this + 0x40) + 0x74);
    pvVar5 = gpGlobals->v_forward;
    pCVar8 = this + 0x20;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(vec_t *)pCVar8 = *pvVar5;
      pvVar5 = pvVar5 + 1;
      pCVar8 = pCVar8 + 4;
    }
  }
  iVar3 = *(int *)(**(int **)(this + 0x40) + 0x208);
  fVar10 = 0.5;
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
  EMIT_SOUND_DYN(iVar3,4,"player/dive.wav",0x3f800000,0x3f4ccccd,0,iVar2 + 0x5f,fVar10);
  return;
}

/* 0009b4fc  CTSStunt::HandleWallJump  (328 bytes)
 * undefined HandleWallJump(void)
 */
/* CTSStunt::HandleWallJump(void) */

void __thiscall CTSStunt::HandleWallJump(CTSStunt *this)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  
  iVar2 = **(int **)(this + 0x40);
  if ((*(byte *)(iVar2 + 0x1a5) & 2) != 0) {
    if ((*(uint *)(iVar2 + 0x250) & 0x10000) != 0) {
      *(uint *)(iVar2 + 0x250) = *(uint *)(iVar2 + 0x250) & 0xfffeffff;
      *(undefined4 *)(**(int **)(this + 0x40) + 0x120) = 0x3f000000;
      puVar3 = &g_vecZero;
      puVar4 = (undefined4 *)(**(int **)(this + 0x40) + 0x174);
      for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(this + 4) = 0x3e866666;
      if (*(float *)this < 0.01) {
        *(undefined4 *)this = 0;
        (*g_engfuncs.pfnMessageBegin)
                  (1,gmsgTSNextStunt,(float *)0x0,*(edict_t **)(**(int **)(this + 0x40) + 0x208));
        (*g_engfuncs.pfnWriteByte)((int)ROUND(*(float *)this * 10.0));
        (*g_engfuncs.pfnMessageEnd)();
      }
    }
    *(undefined4 *)(**(int **)(this + 0x40) + 0x11c) = 0x3f800000;
    iVar2 = *(int *)(**(int **)(this + 0x40) + 0x208);
    fVar5 = 0.5;
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(iVar2,4,"player/land.wav",0x3f800000,0x3f4ccccd,0,iVar1 + 0x5f,fVar5);
  }
  return;
}

/* 0009b644  CTSStunt::HandleWallClimb  (412 bytes)
 * undefined HandleWallClimb(void)
 */
/* CTSStunt::HandleWallClimb(void) */

void __thiscall CTSStunt::HandleWallClimb(CTSStunt *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  
  iVar3 = **(int **)(this + 0x40);
  if ((*(byte *)(iVar3 + 0x1a5) & 2) == 0) {
    if ((*(byte *)(*(int *)(this + 0x40) + 0x815) & 0x40) != 0) {
      uVar2 = CheckForWallJump(this);
      if ((char)uVar2 == '\0') {
        uVar2 = CheckForWallDive(this);
        if ((char)uVar2 != '\0') {
          *(uint *)(**(int **)(this + 0x40) + 0x250) =
               *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x800000;
          GoDive(this);
        }
      }
      else {
        GoWallJump(this);
      }
    }
  }
  else {
    if ((*(uint *)(iVar3 + 0x250) & 0x20000) != 0) {
      *(uint *)(iVar3 + 0x250) = *(uint *)(iVar3 + 0x250) & 0xfffdffff;
      *(undefined4 *)(**(int **)(this + 0x40) + 0x120) = 0x3f000000;
      puVar4 = &g_vecZero;
      puVar5 = (undefined4 *)(**(int **)(this + 0x40) + 0x174);
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined4 *)(this + 4) = 0x3e866666;
      if (*(float *)this < 0.01) {
        *(undefined4 *)this = 0;
        (*g_engfuncs.pfnMessageBegin)
                  (1,gmsgTSNextStunt,(float *)0x0,*(edict_t **)(**(int **)(this + 0x40) + 0x208));
        (*g_engfuncs.pfnWriteByte)((int)ROUND(*(float *)this * 10.0));
        (*g_engfuncs.pfnMessageEnd)();
      }
    }
    *(undefined4 *)(**(int **)(this + 0x40) + 0x11c) = 0x3f800000;
    iVar3 = *(int *)(**(int **)(this + 0x40) + 0x208);
    fVar6 = 0.5;
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(iVar3,4,"player/land.wav",0x3f800000,0x3f4ccccd,0,iVar1 + 0x5f,fVar6);
  }
  return;
}

/* 0009b7e4  CTSStunt::HandleDive  (58 bytes)
 * undefined HandleDive(void)
 */
/* CTSStunt::HandleDive(void) */

void __thiscall CTSStunt::HandleDive(CTSStunt *this)

{
  Landing(this);
  CTSAnimation::Animate
            ((CTSAnimation *)(*(int *)(this + 0x40) + 0x28c),*(CBasePlayer **)(this + 0x40),2);
  return;
}

/* 0009b820  CTSStunt::HandleWheel  (467 bytes)
 * undefined HandleWheel(void)
 */
/* CTSStunt::HandleWheel(void) */

void __thiscall CTSStunt::HandleWheel(CTSStunt *this)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 *puVar5;
  CTSStunt *pCVar6;
  float fVar7;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_2c [7];
  
  iVar2 = **(int **)(this + 0x40);
  if ((*(byte *)(iVar2 + 0x1a5) & 2) != 0) {
    if ((*(uint *)(iVar2 + 0x250) & 0x400) == 0) {
      *(uint *)(**(int **)(this + 0x40) + 0x250) =
           *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xfffff7ff;
      *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x20
      ;
      puVar3 = &g_vecZero;
      puVar5 = (undefined4 *)(**(int **)(this + 0x40) + 0x174);
      for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      local_2c[0] = *(float *)(this + 0x20) * -1.0;
      local_2c[1] = *(float *)(this + 0x24) * -1.0;
      local_2c[2] = *(float *)(this + 0x28) * -1.0;
      pfVar4 = local_2c;
      pCVar6 = this + 0x20;
      for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(float *)pCVar6 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pCVar6 = pCVar6 + 4;
      }
      local_2c[0] = *(float *)(this + 0x20);
      local_2c[1] = *(float *)(this + 0x24);
      local_2c[2] = *(float *)(this + 0x28);
      iVar2 = **(int **)(this + 0x40);
      local_3c = *(undefined4 *)(iVar2 + 0x74);
      local_38 = *(undefined4 *)(iVar2 + 0x78);
      local_34 = *(undefined4 *)(iVar2 + 0x7c);
      iVar2 = GetDirection(local_2c,(int)&local_3c,0.6,0.3);
      this[0x2c] = (CTSStunt)(iVar2 != 2);
      *(int *)(*(int *)(this + 0x40) + 0x2a0) = iVar2;
    }
    else {
      *(uint *)(iVar2 + 0x250) = *(uint *)(iVar2 + 0x250) & 0xfffffbff;
      *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 1;
      *(undefined4 *)(**(int **)(this + 0x40) + 0x120) = 0x3e800000;
      puVar3 = &g_vecZero;
      puVar5 = (undefined4 *)(**(int **)(this + 0x40) + 0x174);
      for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined4 *)(this + 4) = 0x3ec00000;
    }
    *(undefined4 *)(**(int **)(this + 0x40) + 0x11c) = 0x3f800000;
    iVar2 = *(int *)(**(int **)(this + 0x40) + 0x208);
    fVar7 = 0.5;
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(iVar2,4,"player/land.wav",0x3f800000,0x3f4ccccd,0,iVar1 + 0x5f,fVar7);
  }
  return;
}

/* 0009b9f8  CTSStunt::HandleSlide  (497 bytes)
 * undefined HandleSlide(void)
 */
/* CTSStunt::HandleSlide(void) */

void __thiscall CTSStunt::HandleSlide(CTSStunt *this)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  vec_t *pvVar4;
  undefined4 *puVar5;
  CTSStunt *pCVar6;
  undefined4 local_2c [7];
  
  iVar2 = **(int **)(this + 0x40);
  if ((*(byte *)(iVar2 + 0x1a5) & 2) != 0) {
    if ((*(byte *)(iVar2 + 0x180) & 0x10) != 0) {
      *(undefined4 *)(iVar2 + 0x120) = 0x3f800000;
    }
    if (((*(uint *)(**(int **)(this + 0x40) + 0x180) & 0x4006) == 0) ||
       (0.01 <= *(float *)(this + 0x30))) {
      if (((*(byte *)(**(int **)(this + 0x40) + 0x181) & 2) == 0) ||
         (0.01 <= *(float *)(this + 0x30))) {
        if (((*(byte *)(**(int **)(this + 0x40) + 0x181) & 4) == 0) ||
           (0.01 <= *(float *)(this + 0x30))) {
          CTSAnimation::Animate
                    ((CTSAnimation *)(*(int *)(this + 0x40) + 0x28c),*(CBasePlayer **)(this + 0x40),
                     3);
        }
        else {
          CTSAnimation::Animate
                    ((CTSAnimation *)(*(int *)(this + 0x40) + 0x28c),*(CBasePlayer **)(this + 0x40),
                     0x2b);
          UTIL_MakeVectors(**(int **)(this + 0x40) + 0x74);
          pvVar4 = gpGlobals->v_forward;
          pCVar6 = this + 0x20;
          for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(vec_t *)pCVar6 = *pvVar4;
            pvVar4 = pvVar4 + 1;
            pCVar6 = pCVar6 + 4;
          }
          *(undefined4 *)(**(int **)(this + 0x40) + 0x120) = 0x3f800000;
          this[0x2c] = (CTSStunt)0x0;
          *(undefined4 *)(*(int *)(this + 0x40) + 0x2a0) = 2;
        }
      }
      else {
        CTSAnimation::Animate
                  ((CTSAnimation *)(*(int *)(this + 0x40) + 0x28c),*(CBasePlayer **)(this + 0x40),
                   0x2a);
        UTIL_MakeVectors(**(int **)(this + 0x40) + 0x74);
        pvVar4 = gpGlobals->v_forward;
        pCVar6 = this + 0x20;
        for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(vec_t *)pCVar6 = *pvVar4;
          pvVar4 = pvVar4 + 1;
          pCVar6 = pCVar6 + 4;
        }
        *(undefined4 *)(**(int **)(this + 0x40) + 0x120) = 0x3f800000;
        this[0x2c] = (CTSStunt)0x0;
        *(undefined4 *)(*(int *)(this + 0x40) + 0x2a0) = 2;
      }
    }
    else {
      puVar1 = (uint *)(**(int **)(this + 0x40) + 0x250);
      *puVar1 = *puVar1 | 1;
      *(uint *)(**(int **)(this + 0x40) + 0x250) =
           *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xffffffdf;
      local_2c[0] = 0;
      local_2c[1] = 0;
      local_2c[2] = 0x41e00000;
      puVar3 = local_2c;
      puVar5 = (undefined4 *)(**(int **)(this + 0x40) + 0x174);
      for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined4 *)(this + 4) = 0x3f400000;
      *(undefined4 *)(*(int *)(this + 0x40) + 0x78) = 1;
      CTSAnimation::Animate
                ((CTSAnimation *)(*(int *)(this + 0x40) + 0x28c),*(CBasePlayer **)(this + 0x40),0x29
                );
      *(undefined4 *)(**(int **)(this + 0x40) + 0x120) = 0x3f800000;
    }
  }
  return;
}

/* 0009bbf4  CTSStunt::Landing  (421 bytes)
 * undefined Landing(void)
 */
/* CTSStunt::Landing(void) */

void __thiscall CTSStunt::Landing(CTSStunt *this)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar2 = **(int **)(this + 0x40);
  if (((*(byte *)(iVar2 + 0x1a5) & 2) != 0) && ((*(uint *)(iVar2 + 0x250) & 0x10) != 0)) {
    if ((*(uint *)(iVar2 + 0x180) & 0x4006) == 0) {
      *(uint *)(**(int **)(this + 0x40) + 0x250) =
           *(uint *)(**(int **)(this + 0x40) + 0x250) & 0xffffffef;
      *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x20
      ;
      puVar3 = &g_vecZero;
      puVar4 = (undefined4 *)(**(int **)(this + 0x40) + 0x174);
      for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      local_2c = *(float *)(this + 0x20);
      local_28 = *(undefined4 *)(this + 0x24);
      local_24 = *(undefined4 *)(this + 0x28);
      iVar2 = **(int **)(this + 0x40);
      local_3c = *(undefined4 *)(iVar2 + 0x74);
      local_38 = *(undefined4 *)(iVar2 + 0x78);
      local_34 = *(undefined4 *)(iVar2 + 0x7c);
      iVar2 = GetDirection(&local_2c,(int)&local_3c,0.6,0.3);
      this[0x2c] = (CTSStunt)(iVar2 != 2);
      *(int *)(*(int *)(this + 0x40) + 0x2a0) = iVar2;
    }
    else {
      *(uint *)(iVar2 + 0x250) = *(uint *)(iVar2 + 0x250) & 0xffffffef;
      *(uint *)(**(int **)(this + 0x40) + 0x250) =
           *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x40000;
      *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 1;
      *(undefined4 *)(**(int **)(this + 0x40) + 0x120) = 0x3f000000;
      puVar3 = &g_vecZero;
      puVar4 = (undefined4 *)(**(int **)(this + 0x40) + 0x174);
      for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(this + 4) = 0x3f100000;
      CTSAnimation::Animate
                ((CTSAnimation *)(*(int *)(this + 0x40) + 0x28c),*(CBasePlayer **)(this + 0x40),0x2e
                );
    }
    *(undefined4 *)(**(int **)(this + 0x40) + 0x11c) = 0x3f800000;
    iVar2 = *(int *)(**(int **)(this + 0x40) + 0x208);
    fVar5 = 0.5;
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(iVar2,4,"player/land.wav",0x3f800000,0x3f4ccccd,0,iVar1 + 0x5f,fVar5);
  }
  return;
}

/* 0009bd9c  CTSStunt::CheckForBreakables  (2178 bytes)
 * undefined CheckForBreakables(void)
 */
/* CTSStunt::CheckForBreakables(void) */

void __thiscall CTSStunt::CheckForBreakables(CTSStunt *this)

{
  int *piVar1;
  entvars_t *peVar2;
  float fVar3;
  bool bVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  float *pfVar9;
  CBasePlayer *this_00;
  vec_t *pvVar10;
  edict_t *peVar11;
  vec_t *pvVar12;
  float fVar13;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  vec_t local_9c;
  float local_98;
  float local_94;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_60;
  undefined1 local_5c [16];
  float local_4c;
  edict_t *local_2c;
  
  if (*(float *)(this + 0x18) == -1.0) {
    return;
  }
  if (gpGlobals->time < *(float *)(this + 0x18)) {
    return;
  }
  *(float *)(this + 0x18) = gpGlobals->time;
  piVar1 = *(int **)(this + 0x40);
  if (((*(byte *)(*piVar1 + 0x1a5) & 2) != 0) && ((float)piVar1[0x1e7] == 0.0)) {
    piVar1[0x1e6] = 0;
    return;
  }
  iVar6 = **(int **)(this + 0x40);
  local_60 = SQRT(*(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28) +
                  *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                  *(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20));
  if ((local_60 < 64.0) && (*(float *)(*(int *)(this + 0x40) + 0x79c) == 0.0)) {
    return;
  }
  if ((float)(*(int **)(this + 0x40))[0x1e7] == 0.0) {
    iVar6 = **(int **)(this + 0x40);
    uVar7 = *(undefined4 *)(iVar6 + 0x208);
    local_60 = SQRT(*(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28) +
                    *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                    *(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20));
    if (local_60 == 0.0) {
      local_94 = 1.0;
      local_9c = 0.0;
      local_98 = 0.0;
    }
    else {
      local_94 = 1.0 / local_60;
      local_9c = local_94 * *(float *)(iVar6 + 0x20);
      local_98 = local_94 * *(float *)(iVar6 + 0x24);
      local_94 = local_94 * *(float *)(iVar6 + 0x28);
    }
    local_7c = local_9c * 64.0;
    local_78 = local_98 * 64.0;
    local_74 = local_94 * 64.0;
    pfVar9 = &local_8c;
    local_8c = *(float *)(iVar6 + 8) + local_7c;
    local_88 = *(float *)(iVar6 + 0xc) + local_78;
    local_84 = *(float *)(iVar6 + 0x10) + local_74;
  }
  else {
    UTIL_MakeVectors(**(int **)(this + 0x40) + 0x74);
    iVar6 = **(int **)(this + 0x40);
    uVar7 = *(undefined4 *)(iVar6 + 0x208);
    if (0.0 <= (float)(*(int **)(this + 0x40))[0x1e8]) {
      local_84 = 32.0;
    }
    else {
      local_84 = -32.0;
    }
    local_8c = local_84 * gpGlobals->v_forward[0];
    local_88 = local_84 * gpGlobals->v_forward[1];
    local_84 = local_84 * gpGlobals->v_forward[2];
    pfVar9 = &local_7c;
    local_7c = *(float *)(iVar6 + 8) + local_8c;
    local_78 = *(float *)(iVar6 + 0xc) + local_88;
    local_74 = *(float *)(iVar6 + 0x10) + local_84;
  }
  UTIL_TraceHull(**(int **)(this + 0x40) + 8,pfVar9,0,3,uVar7,local_5c);
  if (1.0 <= local_4c) {
    return;
  }
  if (local_2c == (edict_t *)0x0) {
    local_2c = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  this_00 = (CBasePlayer *)0x0;
  if (local_2c != (edict_t *)0x0) {
    this_00 = local_2c->pvPrivateData;
  }
  if (this_00 == (CBasePlayer *)0x0) {
    return;
  }
  iVar6 = (*this_00->vtable[0x32])(this_00);
  if ((iVar6 != 0) && (*(float *)(*(int *)(this + 0x40) + 0x79c) == 0.0)) {
    return;
  }
  peVar2 = this_00->pev;
  if (peVar2->takedamage == 0.0) {
    return;
  }
  if ((peVar2->flags & 0x2000000) != 0) {
    return;
  }
  if ((char)peVar2->effects < '\0') {
    return;
  }
  iVar6 = (**(code **)(*(int *)(*(int *)(this + 0x40) + 0x60) + 0xb4))(*(int *)(this + 0x40));
  if (iVar6 == 0) {
    iVar6 = **(int **)(this + 0x40);
    local_b0 = SQRT(*(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28) +
                    *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                    *(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20));
  }
  else {
    iVar6 = **(int **)(this + 0x40);
    local_60 = SQRT(*(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28) +
                    *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                    *(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20));
    local_b0 = local_60 * 0.1;
  }
  iVar6 = *(int *)(this + 0x40);
  if (*(CBasePlayer **)(iVar6 + 0x798) == this_00) {
    return;
  }
  local_b4 = 0x1080;
  bVar4 = true;
  if (*(float *)(iVar6 + 0x79c) == 0.0) goto LAB_0009c59e;
  if (*(char *)(iVar6 + 0x7a4) == '\0') {
    glast_closecombat = 1;
    local_b4 = 0x4001080;
  }
  local_b0 = ABS(*(float *)(*(int *)(this + 0x40) + 0x7a0));
  *(float *)(*(int *)(this + 0x40) + 0x7a0) = *(float *)(*(int *)(this + 0x40) + 0x7a0) * 0.5;
  if (*(float *)(*(int *)(this + 0x40) + 0x7a0) < 5.0) {
    *(undefined4 *)(*(int *)(this + 0x40) + 0x7a0) = 0;
  }
  iVar6 = (*this_00->vtable[0x32])(this_00);
  if ((iVar6 == 0) || (local_b0 <= 0.0)) goto LAB_0009c59e;
  if (((float)friendlyfire._12_4_ == 0.0) &&
     (iVar6 = (**(code **)(*g_pGameRules + 0xcc))(g_pGameRules,*(undefined4 *)(this + 0x40),this_00)
     , iVar6 == 1)) {
LAB_0009c4ca:
    bVar4 = false;
  }
  else {
    if (*(char *)(*(int *)(this + 0x40) + 0x7a4) == '\0') {
      uVar7 = VictimKungfuHold(*(CBasePlayer **)(this + 0x40),this_00);
      if ((char)uVar7 == '\0') {
        if (*(float *)&this_00->field_0x71c < gpGlobals->time) {
          CBasePlayer::DropWeapon(this_00,0xfffffffe,local_b0);
        }
        if (30.0 < local_b0) {
          iVar6 = **(int **)(this + 0x40);
          fVar13 = SQRT(*(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28) +
                        *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                        *(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20));
          peVar2 = this_00->pev;
          iVar6 = **(int **)(this + 0x40);
          local_ac = peVar2->origin[0] - *(float *)(iVar6 + 8);
          local_a8 = peVar2->origin[1] - *(float *)(iVar6 + 0xc);
          local_a4 = peVar2->origin[2] - *(float *)(iVar6 + 0x10);
          local_60 = SQRT(local_a4 * local_a4 + local_a8 * local_a8 + local_ac * local_ac);
          if (local_60 == 0.0) {
            local_7c = 0.0;
            local_78 = 0.0;
            local_74 = 1.0;
          }
          else {
            fVar3 = 1.0 / local_60;
            local_7c = fVar3 * local_ac;
            local_78 = fVar3 * local_a8;
            local_74 = fVar3 * local_a4;
          }
          local_8c = fVar13 * local_7c;
          local_88 = fVar13 * local_78;
          local_84 = fVar13 * local_74;
          local_9c = peVar2->velocity[0] + fVar13 * local_7c;
          local_98 = peVar2->velocity[1] + fVar13 * local_78;
          local_94 = peVar2->velocity[2] + fVar13 * local_74;
          pvVar10 = &local_9c;
          pvVar12 = peVar2->velocity;
          for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pvVar12 = *pvVar10;
            pvVar10 = pvVar10 + 1;
            pvVar12 = pvVar12 + 1;
          }
          this_00->pev->velocity[2] = 235.0;
        }
        peVar11 = this_00->pev->pContainingEntity;
        fVar13 = 0.5;
        iVar6 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        iVar6 = iVar6 + 0x5f;
        pcVar8 = "player/kungfuhit.wav";
        goto LAB_0009c50e;
      }
      goto LAB_0009c4ca;
    }
    if (*(char *)(*(int *)(this + 0x40) + 0x7a4) != '\x02') {
      uVar5 = VictimKnifeHold(*(CBasePlayer **)(this + 0x40),(int *)this_00);
      if ((char)uVar5 == '\0') {
        peVar11 = this_00->pev->pContainingEntity;
        fVar13 = 0.5;
        iVar6 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        iVar6 = iVar6 + 0x5f;
        pcVar8 = "weapons/knife/knife_hitbody.wav";
        goto LAB_0009c50e;
      }
      goto LAB_0009c4ca;
    }
    uVar5 = VictimKatanaHold(*(CBasePlayer **)(this + 0x40),(int *)this_00);
    if ((char)uVar5 != '\0') goto LAB_0009c4ca;
    peVar11 = this_00->pev->pContainingEntity;
    fVar13 = 0.5;
    iVar6 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
    iVar6 = iVar6 + 0x5f;
    pcVar8 = "weapons/katana/hit-body.wav";
LAB_0009c50e:
    EMIT_SOUND_DYN((int)peVar11,4,pcVar8,0x3f800000,0x3f4ccccd,0,iVar6,fVar13);
  }
  piVar1 = *(int **)(this + 0x40);
  if (((piVar1[0x284] != 0) && (20.0 < local_b0)) && (*(int *)(piVar1[0x284] + 200) == 0)) {
    iVar6 = *piVar1;
    peVar2 = this_00->pev;
    local_ac = *(float *)(iVar6 + 8) - peVar2->origin[0];
    local_a8 = *(float *)(iVar6 + 0xc) - peVar2->origin[1];
    local_a4 = *(float *)(iVar6 + 0x10) - peVar2->origin[2];
    CBasePlayer::PunchScreen();
  }
LAB_0009c59e:
  if (bVar4) {
    ClearMultiDamage();
    local_ac = g_vecZero;
    local_a8 = (float)DAT_00190ef0;
    local_a4 = (float)DAT_00190ef4;
    (*this_00->vtable[0x15])
              (this_00,**(undefined4 **)(this + 0x40),local_b0,&local_ac,local_5c,local_b4);
    ApplyMultiDamage(**(undefined4 **)(this + 0x40),**(undefined4 **)(this + 0x40));
  }
  glast_closecombat = 0;
  *(CBasePlayer **)(*(int *)(this + 0x40) + 0x798) = this_00;
  return;
}

/* 0009c630  CTSStunt::CloseAttack  (908 bytes)
 * undefined4 CloseAttack(void)
 */
/* CTSStunt::CloseAttack(void) */

undefined4 __thiscall CTSStunt::CloseAttack(CTSStunt *this)

{
  undefined1 uVar1;
  float fVar2;
  undefined3 extraout_var;
  CBasePlayer *pCVar3;
  int iVar4;
  int iVar5;
  longdouble lVar6;
  float fVar7;
  vec_t local_80;
  vec_t local_7c;
  vec_t local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  
  if (0.0 < *(float *)(this + 4)) {
    return 0;
  }
  if ((*(uint *)(**(int **)(this + 0x40) + 0x250) & 0x30c30) != 0) {
    return 0;
  }
  if ((*(byte *)(**(int **)(this + 0x40) + 0x1a5) & 0x40) != 0) {
    return 0;
  }
  if (0.0 < *(float *)(this + 8)) {
    return 0;
  }
  iVar4 = *(int *)(*(int *)(this + 0x40) + 0xa10);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 0x88) == 0x10)) && (*(int *)(iVar4 + 0xcc) == 0)) {
    return 0;
  }
  UTIL_MakeVectors(**(int **)(this + 0x40) + 0x74);
  (**(code **)(*(int *)(*(int *)(this + 0x40) + 0x60) + 0x168))(&local_2c,*(int *)(this + 0x40));
  iVar4 = **(int **)(this + 0x40);
  if (SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
           *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
           *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20)) * 0.06666667 <= 20.0) {
    iVar4 = **(int **)(this + 0x40);
    local_34 = SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
                    *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                    *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20));
    if (local_34 * 0.06666667 < 10.0) {
      fVar2 = 10.0;
      goto LAB_0009c7e6;
    }
  }
  iVar4 = **(int **)(this + 0x40);
  local_34 = SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
                  *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                  *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20));
  if (20.0 < local_34 * 0.06666667) {
    fVar2 = 20.0;
  }
  else {
    iVar4 = **(int **)(this + 0x40);
    fVar2 = SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
                 *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                 *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20)) * 0.06666667;
    local_34 = fVar2;
  }
LAB_0009c7e6:
  uVar1 = KungFu(*(int *)(this + 0x40));
  fVar7 = fVar2;
  if (CONCAT31(extraout_var,uVar1) != 0) {
    fVar7 = fVar2 + fVar2;
  }
  *(undefined4 *)(*(int *)(this + 0x40) + 0x7a8) = 0;
  local_50 = local_30;
  local_4c = local_2c;
  local_48 = local_28;
  local_70 = gpGlobals->v_forward[0] * 48.0;
  local_6c = gpGlobals->v_forward[1] * 48.0;
  local_68 = gpGlobals->v_forward[2] * 48.0;
  local_60 = local_30 + local_70;
  local_5c = local_6c + local_2c;
  local_58 = local_28 + local_68;
  local_80 = gpGlobals->v_forward[0];
  local_7c = gpGlobals->v_forward[1];
  local_78 = gpGlobals->v_forward[2];
  pCVar3 = CBasePlayer::CloseCombatAttack
                     (*(CBasePlayer **)(this + 0x40),&local_50,&local_60,&local_80,3,fVar7,-1,'\x01'
                      ,'\0','\x01','\x01');
  if (pCVar3 == (CBasePlayer *)0x0) {
    return 0;
  }
  iVar4 = (*g_engfuncs.pfnRandomLong)(0,2);
  iVar5 = 0xe;
  if ((iVar4 != 1) && ((iVar4 < 2 || (iVar5 = 0xd, iVar4 != 2)))) {
    iVar5 = 10;
  }
  *(undefined4 *)(this + 8) = 0x3f333333;
  CTSAnimation::Animate
            ((CTSAnimation *)(*(int *)(this + 0x40) + 0x28c),*(CBasePlayer **)(this + 0x40),iVar5);
  iVar4 = *(int *)(this + 0x40);
  lVar6 = UTIL_WeaponTimeBase();
  if ((longdouble)*(float *)(iVar4 + 300) < lVar6) {
    lVar6 = UTIL_WeaponTimeBase();
    *(float *)(*(int *)(this + 0x40) + 300) = (float)(lVar6 + (longdouble)0.35);
  }
  iVar4 = *(int *)(**(int **)(this + 0x40) + 0x208);
  fVar7 = 0.5;
  iVar5 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
  EMIT_SOUND_DYN(iVar4,4,"player/closecombat.wav",0x3f800000,0x3f4ccccd,0,iVar5 + 0x5f,fVar7);
  CBasePlayer::UpdateMeleeBar(*(CBasePlayer **)(this + 0x40),fVar2 * 1.5);
  return 1;
}

/* 0009c9bc  CTSStunt::GoWheel  (1577 bytes)
 * undefined4 GoWheel(void)
 */
/* CTSStunt::GoWheel(void) */

undefined4 __thiscall CTSStunt::GoWheel(CTSStunt *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar11;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar12;
  float *pfVar13;
  undefined4 *puVar14;
  CTSStunt *pCVar15;
  undefined4 *puVar16;
  longdouble lVar17;
  float fVar18;
  int local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_3c [7];
  float local_20;
  
  fVar18 = *(float *)(**(int **)(this + 0x40) + 0x20);
  fVar1 = *(float *)(**(int **)(this + 0x40) + 0x24);
  fVar2 = *(float *)this;
  fVar3 = *(float *)(this + 0x10);
  fVar4 = gpGlobals->time;
  uVar7 = *(uint *)(**(int **)(this + 0x40) + 0x250);
  fVar5 = *(float *)(this + 4);
  bVar9 = CBasePlayer::IsOnLadder(*(CBasePlayer **)(this + 0x40));
  bVar9 = *(float *)(this + 8) <= 0.0 &&
          (CONCAT31(extraout_var,bVar9) == 0 &&
          (fVar5 <= 0.0 && ((uVar7 & 0x130c30) == 0 && (fVar4 <= fVar3 && fVar2 <= 0.0))));
  piVar8 = *(int **)(this + 0x40);
  if (((*(byte *)(*piVar8 + 0x1a5) & 2) == 0) &&
     (fVar2 = gpGlobals->time, fVar3 = (float)piVar8[0x2e2],
     lVar17 = (longdouble)(**(code **)(piVar8[0x18] + 0x10))(piVar8),
     (longdouble)0.7 / lVar17 < (longdouble)(fVar2 - fVar3))) {
    bVar9 = false;
  }
  if (bVar9) {
    if (80.0 <= SQRT(fVar1 * fVar1 + fVar18 * fVar18)) {
      iVar12 = **(int **)(this + 0x40);
      local_20 = SQRT(*(float *)(iVar12 + 0x28) * *(float *)(iVar12 + 0x28) +
                      *(float *)(iVar12 + 0x24) * *(float *)(iVar12 + 0x24) +
                      *(float *)(iVar12 + 0x20) * *(float *)(iVar12 + 0x20));
      if (local_20 == 0.0) {
        local_3c[0] = 0.0;
        local_3c[1] = 0.0;
        local_3c[2] = 1.0;
      }
      else {
        fVar18 = 1.0 / local_20;
        local_3c[0] = fVar18 * *(float *)(iVar12 + 0x20);
        local_3c[1] = fVar18 * *(float *)(iVar12 + 0x24);
        local_3c[2] = fVar18 * *(float *)(iVar12 + 0x28);
      }
      pfVar13 = local_3c;
      pCVar15 = this + 0x20;
      for (iVar12 = 3; iVar12 != 0; iVar12 = iVar12 + -1) {
        *(float *)pCVar15 = *pfVar13;
        pfVar13 = pfVar13 + 1;
        pCVar15 = pCVar15 + 4;
      }
      local_3c[0] = *(float *)(this + 0x20);
      local_3c[1] = *(float *)(this + 0x24);
      local_3c[2] = *(float *)(this + 0x28);
      iVar12 = **(int **)(this + 0x40);
      local_4c = *(undefined4 *)(iVar12 + 0x74);
      local_48 = *(undefined4 *)(iVar12 + 0x78);
      local_44 = *(undefined4 *)(iVar12 + 0x7c);
      local_58 = GetDirection(local_3c,(int)&local_4c,0.6,0.3);
    }
    else {
      UTIL_MakeVectors(**(int **)(this + 0x40) + 0x74);
      local_3c[0] = -gpGlobals->v_forward[0];
      local_3c[1] = -gpGlobals->v_forward[1];
      local_3c[2] = -gpGlobals->v_forward[2];
      pfVar13 = local_3c;
      pCVar15 = this + 0x20;
      for (iVar12 = 3; iVar12 != 0; iVar12 = iVar12 + -1) {
        *(float *)pCVar15 = *pfVar13;
        pfVar13 = pfVar13 + 1;
        pCVar15 = pCVar15 + 4;
      }
      local_58 = 3;
    }
    iVar12 = (*g_engfuncs.pfnRandomLong)(0,10);
    lVar17 = (longdouble)
             (**(code **)(*(int *)(*(int *)(this + 0x40) + 0x60) + 0x10))(*(int *)(this + 0x40));
    if ((longdouble)7.0 < lVar17 * (longdouble)10.0 + (longdouble)iVar12) {
      (*g_engfuncs.pfnMessageBegin)
                (4,gmsgTSMotionBlur,(float *)(**(int **)(this + 0x40) + 8),(edict_t *)0x0);
      iVar12 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(**(int **)(this + 0x40) + 0x208));
      (*g_engfuncs.pfnWriteByte)(iVar12);
      (*g_engfuncs.pfnWriteByte)(2);
      (*g_engfuncs.pfnMessageEnd)();
    }
    bVar9 = CanDiveHigh(this);
    if ((CONCAT31(extraout_var_00,bVar9) != 0) &&
       ((local_58 == 3 || (*(float *)(**(int **)(this + 0x40) + 0x74) < -10.0)))) {
      *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 4;
      *(uint *)(**(int **)(this + 0x40) + 0x250) =
           *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x400;
      puVar14 = &g_vecZero;
      puVar16 = (undefined4 *)(**(int **)(this + 0x40) + 0x174);
      for (iVar12 = 3; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar16 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
      }
      CTSAnimation::Animate
                ((CTSAnimation *)(*(int *)(this + 0x40) + 0x28c),*(CBasePlayer **)(this + 0x40),0x31
                );
      *(uint *)(**(int **)(this + 0x40) + 0x250) =
           *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x100;
      *(undefined4 *)(**(int **)(this + 0x40) + 0x11c) = 0x3f400000;
      lVar17 = NextDive();
      *(float *)this = (float)lVar17;
      (*g_engfuncs.pfnMessageBegin)
                (1,gmsgTSNextStunt,(float *)0x0,*(edict_t **)(**(int **)(this + 0x40) + 0x208));
      (*g_engfuncs.pfnWriteByte)((int)ROUND(*(float *)this * 10.0));
      (*g_engfuncs.pfnMessageEnd)();
      iVar12 = *(int *)(**(int **)(this + 0x40) + 0x208);
      fVar18 = 0.5;
      iVar11 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
      EMIT_SOUND_DYN(iVar12,4,"player/airwheel.wav",0x3f800000,0x3f4ccccd,0,iVar11 + 0x5f,fVar18);
      *(undefined4 *)(this + 0x10) = 0;
      if (local_58 == 3) {
        CBasePlayer::UpdateMeleeBar(*(CBasePlayer **)(this + 0x40),22.5);
        uVar6 = 0x41700000;
        uVar10 = KungFu(*(int *)(this + 0x40));
        if (CONCAT31(extraout_var_01,uVar10) != 0) {
          uVar6 = 0x41f00000;
        }
        *(undefined4 *)(*(int *)(this + 0x40) + 0x79c) = 0x3e99999a;
        *(undefined4 *)(*(int *)(this + 0x40) + 0x7a0) = uVar6;
        *(undefined1 *)(*(int *)(this + 0x40) + 0x7a4) = 0;
        *(undefined4 *)(*(int *)(this + 0x40) + 0x7a8) = 0;
      }
      return 1;
    }
    bVar9 = CanDiveLow(this);
    if ((CONCAT31(extraout_var_02,bVar9) != 0) && (local_58 != 3)) {
      *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 4;
      *(uint *)(**(int **)(this + 0x40) + 0x250) =
           *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x800;
      puVar14 = &g_vecZero;
      puVar16 = (undefined4 *)(**(int **)(this + 0x40) + 0x174);
      for (iVar12 = 3; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar16 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
      }
      CTSAnimation::Animate
                ((CTSAnimation *)(*(int *)(this + 0x40) + 0x28c),*(CBasePlayer **)(this + 0x40),0x32
                );
      *(uint *)(**(int **)(this + 0x40) + 0x250) = *(uint *)(**(int **)(this + 0x40) + 0x250) | 0x80
      ;
      *(undefined4 *)(**(int **)(this + 0x40) + 0x11c) = 0x3f400000;
      if (local_58 == 2) {
        *(undefined4 *)(**(int **)(this + 0x40) + 0x120) = 0x3e800000;
      }
      lVar17 = NextDive();
      *(float *)this = (float)lVar17;
      (*g_engfuncs.pfnMessageBegin)
                (1,gmsgTSNextStunt,(float *)0x0,*(edict_t **)(**(int **)(this + 0x40) + 0x208));
      (*g_engfuncs.pfnWriteByte)((int)ROUND(*(float *)this * 10.0));
      (*g_engfuncs.pfnMessageEnd)();
      iVar12 = *(int *)(**(int **)(this + 0x40) + 0x208);
      fVar18 = 0.5;
      iVar11 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
      EMIT_SOUND_DYN(iVar12,4,"player/airwheel.wav",0x3f800000,0x3f4ccccd,0,iVar11 + 0x5f,fVar18);
      *(undefined4 *)(this + 0x10) = 0;
      return 1;
    }
  }
  *(float *)(this + 0x10) = gpGlobals->time + 0.3;
  return 0;
}

/* 0009cfe8  CTSStunt::GoRoll  (1028 bytes)
 * undefined4 GoRoll(int param_1)
 */
/* CTSStunt::GoRoll(int) */

undefined4 CTSStunt::GoRoll(int param_1)

{
  uint *puVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  longdouble lVar10;
  float fVar11;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  undefined1 local_8c [64];
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_3c [7];
  float local_20;
  
  roll_1266 = '\x01';
  if ((*(byte *)(**(int **)(param_1 + 0x40) + 0x1a5) & 2) == 0) {
    if (*(float *)(param_1 + 0xc) < gpGlobals->time) {
      roll_1266 = '\0';
      return 0;
    }
  }
  else if (*(float *)(param_1 + 0xc) < gpGlobals->time) {
    roll_1266 = '\0';
  }
  fVar11 = *(float *)(**(int **)(param_1 + 0x40) + 0x20);
  fVar2 = *(float *)(**(int **)(param_1 + 0x40) + 0x24);
  local_20 = SQRT(fVar2 * fVar2 + fVar11 * fVar11);
  if (local_20 < 80.0) {
    roll_1266 = '\0';
  }
  if ((*(uint *)(**(int **)(param_1 + 0x40) + 0x250) & 0x130c30) != 0) {
    roll_1266 = '\0';
  }
  if (0.0 < *(float *)(param_1 + 4)) {
    roll_1266 = '\0';
  }
  bVar3 = CBasePlayer::IsOnLadder(*(CBasePlayer **)(param_1 + 0x40));
  if (CONCAT31(extraout_var,bVar3) != 0) {
    roll_1266 = '\0';
  }
  if (0.0 < *(float *)(param_1 + 8)) {
    roll_1266 = '\0';
  }
  if (roll_1266 == '\0') {
    *(float *)(param_1 + 0xc) = gpGlobals->time + 0.3;
    return 0;
  }
  iVar5 = **(int **)(param_1 + 0x40);
  local_20 = SQRT(*(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28) +
                  *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                  *(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20));
  if (local_20 == 0.0) {
    local_3c[0] = 0.0;
    local_3c[1] = 0.0;
    local_3c[2] = 1.0;
  }
  else {
    fVar11 = 1.0 / local_20;
    local_3c[0] = fVar11 * *(float *)(iVar5 + 0x20);
    local_3c[1] = fVar11 * *(float *)(iVar5 + 0x24);
    local_3c[2] = fVar11 * *(float *)(iVar5 + 0x28);
  }
  pfVar6 = local_3c;
  pfVar8 = (float *)(param_1 + 0x20);
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar8 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar8 = pfVar8 + 1;
  }
  local_3c[0] = *(float *)(param_1 + 0x20);
  local_3c[1] = *(float *)(param_1 + 0x24);
  local_3c[2] = *(float *)(param_1 + 0x28);
  iVar5 = **(int **)(param_1 + 0x40);
  local_4c = *(undefined4 *)(iVar5 + 0x74);
  local_48 = *(undefined4 *)(iVar5 + 0x78);
  local_44 = *(float *)(iVar5 + 0x7c);
  direction_1267 = GetDirection(local_3c,(int)&local_4c,0.6,0.3);
  *(undefined4 *)(**(int **)(param_1 + 0x40) + 0x120) = 0x3e99999a;
  puVar1 = (uint *)(**(int **)(param_1 + 0x40) + 0x250);
  *puVar1 = *puVar1 & 0xffefffff;
  puVar1 = (uint *)(**(int **)(param_1 + 0x40) + 0x250);
  *puVar1 = *puVar1 | 0x40005;
  puVar7 = &g_vecZero;
  puVar9 = (undefined4 *)(**(int **)(param_1 + 0x40) + 0x174);
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(param_1 + 4) = 0x3f400000;
  CTSAnimation::Animate
            ((CTSAnimation *)(*(int *)(param_1 + 0x40) + 0x28c),*(CBasePlayer **)(param_1 + 0x40),
             0x2f);
  iVar5 = **(int **)(param_1 + 0x40);
  if ((*(byte *)(iVar5 + 0x252) & 8) == 0) {
    iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0x208);
    fVar11 = 0.5;
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(iVar5,4,"player/land.wav",0x3f800000,0x3f4ccccd,0,iVar4 + 0x5f,fVar11);
  }
  else {
    local_4c = *(undefined4 *)(iVar5 + 8);
    local_48 = *(undefined4 *)(iVar5 + 0xc);
    local_44 = *(float *)(iVar5 + 0x10) - 4000.0;
    UTIL_TraceLine(**(int **)(param_1 + 0x40) + 8,&local_4c,1,1,
                   *(undefined4 *)(**(int **)(param_1 + 0x40) + 0x208),local_8c);
    iVar5 = **(int **)(param_1 + 0x40);
    local_3c[0] = *(float *)(iVar5 + 8);
    local_3c[1] = *(float *)(iVar5 + 0xc);
    local_3c[2] = *(float *)(iVar5 + 0x10);
    local_9c = local_4c;
    local_98 = local_48;
    local_94 = local_44;
    TEXTURETYPE_PlaySound((int)local_8c,local_3c,&local_9c,0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar5 = (*g_engfuncs.pfnRandomLong)(0,10);
  lVar10 = (longdouble)
           (**(code **)(*(int *)(*(int *)(param_1 + 0x40) + 0x60) + 0x10))(*(int *)(param_1 + 0x40))
  ;
  if ((longdouble)9.0 < lVar10 * (longdouble)10.0 + (longdouble)iVar5) {
    (*g_engfuncs.pfnMessageBegin)
              (4,gmsgTSMotionBlur,(float *)(**(int **)(param_1 + 0x40) + 8),(edict_t *)0x0);
    iVar5 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(**(int **)(param_1 + 0x40) + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar5);
    (*g_engfuncs.pfnWriteByte)(2);
    (*g_engfuncs.pfnMessageEnd)();
  }
  return 1;
}

