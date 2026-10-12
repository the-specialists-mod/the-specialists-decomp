/* mp.dll - unnamed_1004bff0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1004bff0  FUN_1004bff0  (1 bytes)
 * undefined FUN_1004bff0()
 */
void FUN_1004bff0(void)

{
  return;
}

/* 1004c000  FUN_1004c000  (1 bytes)
 * undefined FUN_1004c000()
 */
void FUN_1004c000(void)

{
  return;
}

/* 1004c010  FUN_1004c010  (1 bytes)
 * undefined FUN_1004c010()
 */
void FUN_1004c010(void)

{
  return;
}

/* 1004c020  FUN_1004c020  (112 bytes)
 * undefined FUN_1004c020(int * param_1)
 * called by: CTSGun::PrimaryAttack, CTSGun::SecondaryAttack
 */
void __fastcall FUN_1004c020(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = param_1[0x2f];
  if (((iVar1 != 0) && (*(int *)(iVar1 + 8) == 0)) && (0 < *(int *)(iVar1 + 4))) {
    if (*(int *)(iVar1 + 0x28) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)*(short *)(*(int *)(iVar1 + 0x28) + 0x26);
    }
    (**(code **)(*param_1 + 0x150))(iVar1,1,0);
    *(undefined4 *)(param_1[0x2f] + 8) = 1;
    fVar2 = FUN_10066590();
    param_1[0x24] = (int)(float)(fVar2 + (float10)0.7);
    param_1[0x23] = (int)(float)(fVar2 + (float10)0.7);
    fVar2 = FUN_10066590();
    param_1[0x26] = (int)(float)(fVar2 + (float10)0.7);
  }
  return;
}

/* 1004c090  FUN_1004c090  (1578 bytes)
 * undefined FUN_1004c090(int param_1)
 * called by: CTSGun::PrimaryAttack
 */
void __fastcall FUN_1004c090(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 *puVar7;
  void *this;
  float *pfVar8;
  undefined4 uVar9;
  uint uVar10;
  void *this_00;
  undefined2 extraout_var;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  float10 fVar14;
  float10 fVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined1 auStack_a4 [4];
  undefined4 uStack_a0;
  float fVar18;
  float fStack_64;
  float fStack_60;
  int iStack_5c;
  float fStack_58;
  double dStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float afStack_40 [7];
  float fStack_24;
  edict_t *peStack_4;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    return;
  }
  FUN_10066df0();
  iVar12 = *(int *)(*(int *)(param_1 + 0x70) + 4);
  if ((*(uint *)(iVar12 + 0x250) & 0x30c20) != 0) {
    return;
  }
  fVar18 = SQRT(*(float *)(iVar12 + 0x28) * *(float *)(iVar12 + 0x28) +
                *(float *)(iVar12 + 0x24) * *(float *)(iVar12 + 0x24) +
                *(float *)(iVar12 + 0x20) * *(float *)(iVar12 + 0x20));
  if (fVar18 <= 100.0) {
LAB_1004c194:
    iVar12 = 2;
  }
  else {
    fVar2 = SQRT(*(float *)(iVar12 + 0x20) * *(float *)(iVar12 + 0x20) +
                 *(float *)(iVar12 + 0x28) * *(float *)(iVar12 + 0x28) +
                 *(float *)(iVar12 + 0x24) * *(float *)(iVar12 + 0x24));
    if (fVar2 == 0.0) {
      fVar3 = 0.0;
      fVar4 = 0.0;
      fVar2 = 1.0;
    }
    else {
      fVar2 = 1.0 / fVar2;
      fVar3 = fVar2 * *(float *)(iVar12 + 0x20);
      fVar4 = fVar2 * *(float *)(iVar12 + 0x24);
      fVar2 = fVar2 * *(float *)(iVar12 + 0x28);
    }
    iVar12 = 3;
    if (-0.5 < fVar3 * gpGlobals->v_forward[0] +
               fVar4 * gpGlobals->v_forward[1] + fVar2 * gpGlobals->v_forward[2]) goto LAB_1004c194;
  }
  fStack_60 = 6.72623e-44;
  fStack_64 = 4.90454e-44;
  if (fVar18 <= 100.0) {
    fStack_64 = 9.80909e-44;
  }
  if ((*(int *)(param_1 + 0xdb0) < 1) || (2 < *(int *)(param_1 + 0xdb0))) {
    iVar6 = (*g_engfuncs.pfnRandomLong)(1,2);
    *(int *)(param_1 + 0xdb0) = iVar6;
  }
  if (*(int *)(param_1 + 0xdb0) == 1) {
    *(undefined4 *)(param_1 + 0xdb0) = 2;
    iVar6 = 0x1d;
  }
  else if (*(int *)(param_1 + 0xdb0) == 2) {
    *(undefined4 *)(param_1 + 0xdb0) = 1;
    iVar6 = 0x1e;
  }
  else {
    iVar6 = dStack_54._0_4_;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x70) + 4);
  if (iVar12 == 3) {
    iStack_5c = -100;
    *(uint *)(iVar1 + 0x250) = *(uint *)(iVar1 + 0x250) | 1;
    fStack_60 = 1.0;
    fStack_58 = 7.56701e-44;
    iVar6 = 0x1f;
    fVar14 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
    *(float *)(*(int *)(param_1 + 0x70) + 0x470) =
         (float)(fVar14 * (float10)3.0 + (float10)gpGlobals->time);
  }
  else if ((*(uint *)(iVar1 + 0x1a4) & 0x200) == 0) {
    iVar6 = 0x20;
  }
  else if (((*(byte *)(iVar1 + 0x180) & 4) != 0) ||
          ((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x4000) != 0)) {
    dStack_54 = 0.0;
    *(uint *)(iVar1 + 0x250) = *(uint *)(iVar1 + 0x250) | 4;
    uStack_4c = 0x41800000;
    iVar12 = *(int *)(*(int *)(param_1 + 0x70) + 4);
    iStack_5c = 0x5a;
    fStack_60 = 1.0;
    iVar6 = 0x21;
    *(uint *)(iVar12 + 0x250) = *(uint *)(iVar12 + 0x250) | 1;
    iVar12 = *(int *)(*(int *)(param_1 + 0x70) + 4);
    *(undefined4 *)(iVar12 + 0x174) = 0;
    *(undefined4 *)(iVar12 + 0x178) = 0;
    *(undefined4 *)(iVar12 + 0x17c) = 0x41800000;
    fVar14 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
    *(float *)(*(int *)(param_1 + 0x70) + 0x470) =
         (float)(fVar14 * (float10)3.0 + (float10)gpGlobals->time);
  }
  CTSAnimation::Animate
            ((CTSAnimation *)(*(int **)(param_1 + 0x70) + 0x9d),*(int **)(param_1 + 0x70),iVar6);
  dStack_54 = (double)(fStack_60 * 5.0);
  fVar14 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
  if ((float10)dStack_54 <= fVar14 * (float10)fStack_60 * (float10)0.5) {
    fVar14 = (float10)dStack_54;
  }
  else {
    fVar14 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
    fVar14 = fVar14 * (float10)fStack_60 * (float10)0.5;
  }
  *(float *)(*(int *)(param_1 + 0x70) + 0x72c) = (float)(fVar14 + (float10)gpGlobals->time);
  puVar7 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x70) + 0x144))();
  uStack_4c = *puVar7;
  uStack_48 = puVar7[1];
  uStack_44 = puVar7[2];
  lVar16 = __ftol();
  pfVar8 = afStack_40;
  fStack_58 = (float)((uint)(-1 < (int)lVar16) * 2 + -1);
  fVar18 = (float)(int)fStack_58;
  this = (void *)FUN_10014e80(gpGlobals->v_forward,&fStack_58,(float)iStack_5c);
  pfVar8 = (float *)FUN_10014e80(this,pfVar8,fVar18);
  FUN_1000c610(&uStack_4c,(float *)&stack0xffffff78,pfVar8);
  FUN_1000a540(&stack0xffffff6c,&uStack_4c);
  FUN_10056dd0();
  if (fStack_24 < 1.0) {
    if ((peStack_4 == (edict_t *)0x0) &&
       (peStack_4 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peStack_4 == (edict_t *)0x0)) {
      piVar13 = (int *)0x0;
    }
    else {
      piVar13 = peStack_4->pvPrivateData;
    }
    iVar12 = (**(code **)(*piVar13 + 0x94))();
    if ((iVar12 != 0) && (-1 < *(char *)(piVar13[1] + 0x118))) {
      uVar5 = FUN_10043720(*(int *)(param_1 + 0x70),piVar13);
      if ((char)uVar5 == '\0') {
        FUN_1006a2f0();
        iVar12 = *piVar13;
        FUN_1000a540(&stack0xffffff78,gpGlobals->v_forward);
        (**(code **)(iVar12 + 0x34))();
        uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x70) + 4);
        FUN_1006a310(uVar9,uVar9);
        iVar12 = (**(code **)(*piVar13 + 0xa8))();
        if (iVar12 != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0xbc) + 8) = 1;
          *(undefined4 *)(*(int *)(param_1 + 4) + 0x114) = 1;
          uVar9 = *(undefined4 *)(piVar13[1] + 0x208);
          iVar12 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
          EMIT_SOUND_DYN(this_00,uVar9,4,s_weapons_katana_hit_body_wav_100987dc,0x3f800000,
                         0x3f4ccccd,0,iVar12 + 0x5f);
        }
      }
      goto LAB_1004c5e0;
    }
  }
  fVar14 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
  if ((float10)3.0 <= fVar14 * (float10)0.3) {
    fVar14 = (float10)3.0;
  }
  else {
    fVar14 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
    fVar14 = fVar14 * (float10)0.3;
  }
  *(float *)(*(int *)(param_1 + 0x70) + 0x718) = (float)(fVar14 + (float10)gpGlobals->time);
  *(float *)(*(int *)(param_1 + 0x70) + 0x71c) = (float)(int)lVar16;
  *(undefined1 *)(*(int *)(param_1 + 0x70) + 0x720) = 2;
LAB_1004c5e0:
  iVar12 = *(int *)(param_1 + 0x70);
  uStack_a0 = 0x1004c605;
  FUN_1004abf0(&stack0xffffff68,&DAT_1009f4a8);
  FUN_1004abf0(auStack_a4,&DAT_1009f4a8);
  uVar11 = CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0xd14));
  uVar17 = 0;
  uVar9 = FUN_1004ac10(iVar12);
  FUN_10048ff0(iVar12,1,uVar9,uVar11,uVar17);
  uVar10 = FUN_10042c40(*(int *)(param_1 + 0x70));
  if (uVar10 == 0) {
    fVar18 = 1.0;
  }
  else {
    fVar18 = 0.5;
  }
  uVar10 = FUN_10042c10(*(int *)(param_1 + 0x70));
  if (uVar10 == 0) {
    fVar14 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
    fVar14 = fVar14 * (float10)(fStack_64 * fVar18);
  }
  else {
    fVar14 = (float10)(fStack_64 * fVar18) * (float10)6.6666665;
  }
  fVar15 = FUN_10066590();
  fVar15 = (float10)(float)fVar14 * (float10)0.7 + fVar15;
  *(float *)(param_1 + 0x90) = (float)fVar15;
  *(float *)(param_1 + 0x8c) = (float)fVar15;
  fVar14 = FUN_10066590();
  *(float *)(param_1 + 0x98) = (float)(fVar14 + (float10)3.0);
  return;
}

/* 1004c6c0  FUN_1004c6c0  (1876 bytes)
 * undefined FUN_1004c6c0(int * param_1)
 * called by: CTSGun::PrimaryAttack, CTSGun::SecondaryAttack
 */
void __fastcall FUN_1004c6c0(int *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined2 extraout_var;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *this;
  void *this_00;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined1 auStack_a8 [4];
  undefined4 uStack_a4;
  int in_stack_ffffff68;
  int iVar12;
  float *pfVar13;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  edict_t *peStack_4;
  
  if (param_1[0x2f] == 0) {
    return;
  }
  uVar2 = FUN_10042c40(param_1[0x1c]);
  if (uVar2 == 0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = 0.5;
  }
  fVar1 = *(float *)(param_1[0x30] + 0x18) * fVar1;
  uVar2 = FUN_10042c10(param_1[0x1c]);
  if (uVar2 == 0) {
    fVar9 = (float10)FUN_100551c0(param_1[0x1c]);
    fVar9 = fVar9 * (float10)fVar1;
  }
  else {
    fVar9 = (float10)fVar1 * (float10)6.6666665;
  }
  fVar10 = FUN_10066590();
  fVar10 = (float10)(float)fVar9 * (float10)0.7 + fVar10;
  param_1[0x24] = (int)(float)fVar10;
  param_1[0x23] = (int)(float)fVar10;
  fVar9 = FUN_10066590();
  param_1[0x26] = (int)(float)(fVar9 + (float10)3.0);
  FUN_10066df0();
  iVar3 = param_1[0x1c];
  if (*(char *)(param_1[0x2f] + 0x24) != '\0') {
    iVar12 = *(int *)(iVar3 + 4);
    uVar5 = *(undefined4 *)(iVar12 + 0x208);
    fStack_50 = *(float *)(iVar12 + 0x174) + *(float *)(iVar12 + 8) + gpGlobals->v_forward[0] * 32.0
                + gpGlobals->v_right[0];
    fStack_4c = *(float *)(iVar12 + 0x178) + *(float *)(iVar12 + 0xc) +
                gpGlobals->v_forward[1] * 32.0 + gpGlobals->v_right[1];
    fStack_48 = *(float *)(iVar12 + 0x17c) + *(float *)(iVar12 + 0x10) +
                gpGlobals->v_forward[2] * 32.0 + gpGlobals->v_right[2];
    fStack_3c = gpGlobals->v_right[2];
    iVar3 = *(int *)(iVar3 + 4);
    fStack_58 = *(float *)(iVar3 + 0x178) + *(float *)(iVar3 + 0xc);
    fStack_54 = *(float *)(iVar3 + 0x17c) + *(float *)(iVar3 + 0x10);
    fStack_68 = *(float *)(iVar3 + 0x174) + *(float *)(iVar3 + 8) + gpGlobals->v_right[0];
    fStack_64 = fStack_58 + gpGlobals->v_right[1];
    pfVar4 = &fStack_50;
    uVar6 = 0;
    uStack_60 = (double)CONCAT44(uStack_60._4_4_,fStack_54 + fStack_3c);
    FUN_10067850();
    fStack_50 = fStack_24;
    fStack_48 = (float)uStack_1c;
    iVar3 = *(int *)(param_1[0x30] + 0x20);
    fStack_68 = gpGlobals->v_forward[0] * 1300.0;
    fStack_4c = (float)uStack_20;
    fStack_64 = gpGlobals->v_forward[1] * 1300.0;
    fStack_54 = gpGlobals->v_forward[2] * 1300.0;
    pfVar13 = &fStack_68;
    iVar12 = 0x1004cc16;
    fStack_58 = fStack_64;
    uStack_60._0_4_ = fStack_54;
    uStack_60._4_4_ = fStack_68;
    FUN_1000a540(&stack0xffffff74,pfVar13);
    FUN_1000a540(&stack0xffffff68,&fStack_50);
    piVar8 = CTSKnife::CreateKnife
                       (param_1[0x1c],in_stack_ffffff68,iVar12,(int)pfVar13,pfVar4,uVar6,uVar5,iVar3
                       );
    if (piVar8 != (int *)0x0) {
      iVar3 = piVar8[1];
      fVar1 = *(float *)(iVar3 + 0x20);
      fStack_68 = SQRT(*(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28) +
                       *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) + fVar1 * fVar1);
      if (fStack_68 == 0.0) {
        fStack_68 = 0.0;
        fStack_64 = 0.0;
        uStack_60._0_4_ = 1.0;
      }
      else {
        fStack_68 = 1.0 / fStack_68;
        uStack_60._0_4_ = fStack_68 * *(float *)(iVar3 + 0x28);
        fStack_64 = fStack_68 * *(float *)(iVar3 + 0x24);
        fStack_68 = fStack_68 * *(float *)(iVar3 + 0x20);
      }
      puVar7 = (undefined4 *)UTIL_VecToAngles(&uStack_44,&fStack_68);
      iVar3 = piVar8[1];
      *(undefined4 *)(iVar3 + 0x50) = *puVar7;
      *(undefined4 *)(iVar3 + 0x54) = puVar7[1];
      *(undefined4 *)(iVar3 + 0x58) = puVar7[2];
      *(undefined4 *)(piVar8[1] + 0x58) = 0x42b40000;
      if (*(int *)(param_1[0x30] + 0x20) == 6) {
        *(undefined4 *)(piVar8[1] + 0x5c) = 0xc4a28000;
      }
      else {
        *(undefined4 *)(piVar8[1] + 0x5c) = 0xc4a28000;
      }
    }
    piVar8 = (int *)param_1[0x1c];
    if (((*(uint *)(piVar8[1] + 0x250) & 0x30c30) == 0) &&
       ((*(uint *)(piVar8[1] + 0x1a4) & 0x200) != 0)) {
      CTSAnimation::Animate((CTSAnimation *)(piVar8 + 0x9d),piVar8,0x1c);
    }
    uVar5 = *(undefined4 *)(*(int *)(param_1[0x1c] + 4) + 0x208);
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(this_00,uVar5,4,s_weapons_knife_knife_miss_wav_100987f8,0x3f800000,0x3f4ccccd,0,
                   iVar3 + 0x5f);
    uVar2 = FUN_10042c20(param_1[0x1c]);
    if (uVar2 == 0) {
      *(uint *)(param_1[0x1c] + 0x4c0) =
           *(int *)(param_1[0x1c] + 0x4c0) + (uint)*(byte *)(param_1[0x30] + 0xca);
      fVar9 = FUN_100436e0(param_1[0x1c]);
      FUN_100557b0((void *)param_1[0x1c],(float)fVar9);
      *(int *)(param_1[0x2f] + 4) = *(int *)(param_1[0x2f] + 4) + -1;
    }
    if (*(int *)(param_1[0x2f] + 4) < 1) {
      FUN_10049fb0(param_1,(uint)*(byte *)(param_1 + 0x2e),'\x01');
      return;
    }
    (**(code **)(*param_1 + 0x150))();
    fVar9 = FUN_10066590();
    param_1[0x26] = (int)(float)(fVar9 + (float10)2.0);
    return;
  }
  if ((*(uint *)(*(int *)(iVar3 + 4) + 0x250) & 0x10c20) != 0) {
    return;
  }
  iVar3 = (*g_engfuncs.pfnRandomLong)(0,2);
  piVar8 = (int *)param_1[0x1c];
  if ((*(uint *)(piVar8[1] + 0x1a4) & 0x200) != 0) {
    CTSAnimation::Animate((CTSAnimation *)(piVar8 + 0x9d),piVar8,iVar3 + 0x19);
  }
  iVar3 = param_1[0x30];
  uStack_60 = (double)(*(float *)(iVar3 + 0x18) * 5.0);
  fVar9 = (float10)FUN_100551c0(param_1[0x1c]);
  if ((float10)uStack_60 <= fVar9 * (float10)*(float *)(iVar3 + 0x18) * (float10)0.5) {
    fVar9 = (float10)uStack_60;
  }
  else {
    fVar9 = (float10)FUN_100551c0(param_1[0x1c]);
    fVar9 = fVar9 * (float10)*(float *)(param_1[0x30] + 0x18) * (float10)0.5;
  }
  *(float *)(param_1[0x1c] + 0x728) = (float)(fVar9 + (float10)gpGlobals->time);
  pfVar4 = (float *)(**(code **)(*(int *)param_1[0x1c] + 0x144))();
  fStack_58 = *pfVar4;
  fStack_54 = pfVar4[1];
  fStack_50 = pfVar4[2];
  pfVar4 = (float *)FUN_10014e80(gpGlobals->v_forward,&fStack_40,38.0);
  FUN_1000c610(&fStack_58,(float *)&stack0xffffff74,pfVar4);
  FUN_1000a540(&stack0xffffff68,&fStack_58);
  FUN_10056dd0();
  if (fStack_24 < 1.0) {
    if ((peStack_4 == (edict_t *)0x0) &&
       (peStack_4 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peStack_4 == (edict_t *)0x0)) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = peStack_4->pvPrivateData;
    }
    iVar3 = (**(code **)(*piVar8 + 0x94))();
    if ((iVar3 != 0) && (-1 < *(char *)(piVar8[1] + 0x118))) {
      uVar5 = FUN_10043870(param_1[0x1c],piVar8);
      if ((char)uVar5 == '\0') {
        FUN_1006a2f0();
        iVar3 = *piVar8;
        FUN_1000a540(&stack0xffffff74,gpGlobals->v_forward);
        (**(code **)(iVar3 + 0x34))();
        FUN_1006a310(*(undefined4 *)(param_1[0x1c] + 4),*(undefined4 *)(param_1[0x1c] + 4));
        iVar3 = (**(code **)(*piVar8 + 0xa8))();
        if (iVar3 != 0) {
          *(undefined4 *)(param_1[0x2f] + 8) = 1;
          *(undefined4 *)(param_1[1] + 0x114) = 1;
          uVar5 = *(undefined4 *)(piVar8[1] + 0x208);
          iVar3 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
          EMIT_SOUND_DYN(this,uVar5,4,s_weapons_knife_knife_hitbody_wav_10098644,0x3f800000,
                         0x3f4ccccd,0,iVar3 + 0x5f);
        }
      }
      goto LAB_1004ca1a;
    }
  }
  fVar9 = (float10)FUN_100551c0(param_1[0x1c]);
  if ((float10)3.0 <= fVar9 * (float10)0.3) {
    fVar9 = (float10)3.0;
  }
  else {
    fVar9 = (float10)FUN_100551c0(param_1[0x1c]);
    fVar9 = fVar9 * (float10)0.3;
  }
  *(float *)(param_1[0x1c] + 0x718) = (float)(fVar9 + (float10)gpGlobals->time);
  *(float *)(param_1[0x1c] + 0x71c) = fStack_68;
  *(undefined1 *)(param_1[0x1c] + 0x720) = 1;
LAB_1004ca1a:
  iVar3 = param_1[0x1c];
  uStack_a4 = 0x1004ca47;
  FUN_1004abf0(&stack0xffffff64,&DAT_1009f4a8);
  FUN_1004abf0(auStack_a8,&DAT_1009f4a8);
  uVar5 = CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 0xd12));
  uVar11 = 0;
  uVar6 = FUN_1004ac10(iVar3);
  FUN_10048ff0(iVar3,1,uVar6,uVar5,uVar11);
  return;
}

/* 1004ce20  FUN_1004ce20  (125 bytes)
 * undefined4 FUN_1004ce20(int param_1, undefined4 param_2)
 * called by: CTSGun::Reload
 */
undefined4 __thiscall FUN_1004ce20(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float unaff_retaddr;
  
  iVar1 = *(int *)((int)this + 0xbc);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = *(int *)((int)this + (uint)*(byte *)(*(int *)((int)this + 0xc0) + 8) * 4 + 0xc4);
  if (iVar2 < 1) {
    return 0;
  }
  iVar3 = param_1 - *(int *)(iVar1 + 4);
  if (iVar2 <= iVar3) {
    iVar3 = iVar2;
  }
  if (iVar3 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0xc) = 1;
  (**(code **)(*(int *)this + 0x150))(param_2,1,0);
  fVar4 = FUN_10066590();
  *(float *)(*(int *)((int)this + 0x70) + 0x118) = (float)(fVar4 + (float10)unaff_retaddr);
  return 1;
}

/* 1004cea0  FUN_1004cea0  (575 bytes)
 * undefined FUN_1004cea0(int * param_1)
 * called by: CTSGun::Reload
 */
void __fastcall FUN_1004cea0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  void *this;
  float10 fVar5;
  
  iVar3 = param_1[0x2f];
  iVar1 = *(int *)(iVar3 + 8);
  if (iVar1 == 0) {
    if ((0 < param_1[*(byte *)(param_1[0x30] + 8) + 0x31]) &&
       (*(int *)(iVar3 + 4) < *(int *)(param_1[0x30] + 4))) {
      *(undefined4 *)(*(int *)(param_1[0x1c] + 4) + 0x214) = 0;
      if (*(int *)(*(int *)(param_1[0x1c] + 4) + 0xbc) == 0) {
        *(int *)(*(int *)(param_1[0x1c] + 4) + 0xbc) =
             (param_1[0x30] - (int)gpGlobals->pStringBase) + 0x12a;
      }
      *(undefined4 *)(param_1[0x2f] + 8) = 1;
      if (*(int *)(param_1[0x2f] + 0x28) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)*(short *)(*(int *)(param_1[0x2f] + 0x28) + 0x10);
      }
      (**(code **)(*param_1 + 0x150))(iVar3,1,0);
      fVar5 = FUN_10066590();
      *(float *)(param_1[0x1c] + 0x118) = (float)(fVar5 + (float10)0.3);
      fVar5 = FUN_10066590();
      param_1[0x26] = (int)(float)(fVar5 + (float10)0.3);
      fVar5 = FUN_10066590();
      param_1[0x23] = (int)(float)(fVar5 + (float10)0.3);
      fVar5 = FUN_10066590();
      param_1[0x24] = (int)(float)(fVar5 + (float10)0.3);
      return;
    }
  }
  else if (iVar1 == 1) {
    fVar5 = FUN_10066590();
    if ((float10)(float)param_1[0x26] <= fVar5) {
      uVar4 = (uint)*(byte *)(param_1[0x30] + 8);
      if ((0 < param_1[uVar4 + 0x31]) && (*(int *)(param_1[0x2f] + 4) < *(int *)(param_1[0x30] + 4))
         ) {
        param_1[uVar4 + 0x31] = param_1[uVar4 + 0x31] + -1;
        *(int *)(param_1[0x2f] + 4) = *(int *)(param_1[0x2f] + 4) + 1;
        uVar2 = *(undefined4 *)(*(int *)(param_1[0x1c] + 4) + 0x208);
        iVar3 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        EMIT_SOUND_DYN(this,uVar2,3,s_weapons_insert_shell_wav_10098818,0x3f800000,0x3f4ccccd,0,
                       iVar3 + 0x55);
        if (*(int *)(param_1[0x2f] + 0x28) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)*(short *)(*(int *)(param_1[0x2f] + 0x28) + 0x12);
        }
        (**(code **)(*param_1 + 0x150))(iVar3,1,0);
        fVar5 = FUN_10066590();
        param_1[0x26] = (int)(float)(fVar5 + (float10)*(float *)(param_1[0x30] + 0x14));
        return;
      }
      *(undefined4 *)(param_1[0x2f] + 8) = 2;
      return;
    }
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined1 *)(param_1[0x2f] + 0x24) = 0;
    if (*(int *)(param_1[0x2f] + 0x28) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)*(short *)(*(int *)(param_1[0x2f] + 0x28) + 0x14);
    }
    (**(code **)(*param_1 + 0x150))(iVar3,1,0);
    fVar5 = FUN_10066590();
    *(float *)(param_1[0x1c] + 0x118) = (float)(fVar5 + (float10)0.3);
    fVar5 = FUN_10066590();
    param_1[0x26] = (int)(float)(fVar5 + (float10)3.0);
  }
  return;
}

/* 1004d7a0  FUN_1004d7a0  (277 bytes)
 * undefined FUN_1004d7a0(int param_1)
 * called by: CBasePlayer::StartObserver, CTSGun::Deploy, CTSGun::Holster, FUN_10049fb0, FUN_1004a4c0, FUN_10056080
 */
void __fastcall FUN_1004d7a0(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  float10 fVar5;
  
  *(int *)(*(int *)(param_1 + 0x70) + 0x970) = param_1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0xbc) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0xc0) = 0;
  pcVar4 = &DAT_1009f428;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x214) = 0;
  pcVar2 = (char *)(*(int *)(param_1 + 0x70) + 0xab0);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  fVar5 = FUN_10066590();
  *(float *)(*(int *)(param_1 + 0x70) + 0x118) = (float)(fVar5 + (float10)0.5);
  fVar5 = FUN_10066590();
  iVar3 = *(int *)(param_1 + 0x70);
  *(float *)(param_1 + 0x98) = (float)(fVar5 + (float10)3.0);
  if ((*(float *)(iVar3 + 0x718) != 0.0) && (*(char *)(iVar3 + 0x720) != '\0')) {
    *(undefined4 *)(iVar3 + 0x718) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x71c) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x70) + 0x720) = 0;
  }
  if ((*(int **)(param_1 + 0x70) != (int *)0x0) &&
     (iVar3 = (**(code **)(**(int **)(param_1 + 0x70) + 0x94))(), iVar3 == 0)) {
    return;
  }
  if ((*(int *)(param_1 + 0xbc) != 0) && (*(int *)(param_1 + 0xc0) != 0)) {
    if (*(char *)(*(int *)(param_1 + 0xc0) + 0x360) == '\x02') {
      CTSGun::GrenadeIdle((CTSGun *)param_1,(int *)0x1);
    }
    *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0xc) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xbc) + 8) = 0;
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xdac) = 0;
  *(undefined4 *)(param_1 + 0xda8) = 0;
  *(undefined4 *)(param_1 + 0xdb0) = 0;
  return;
}

/* 1004dc40  FUN_1004dc40  (40 bytes)
 * undefined FUN_1004dc40(int param_1)
 * called by: CTSGun::WeaponIdle
 */
void __fastcall FUN_1004dc40(int param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_10066590();
  if ((float10)*(float *)(param_1 + 0x98) <= fVar1) {
    fVar1 = FUN_10066590();
    *(float *)(param_1 + 0x98) = (float)(fVar1 + (float10)3.0);
  }
  return;
}

/* 1004dc70  FUN_1004dc70  (401 bytes)
 * undefined FUN_1004dc70(int param_1)
 * called by: CTSGun::Reload
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004dc70(int param_1)

{
  int iVar1;
  void *this;
  float fVar2;
  float10 fVar3;
  
  _DAT_100b2230 = 0.6;
  iVar1 = *(int *)(param_1 + 0x70);
  fVar3 = FUN_10066590();
  if (((((float10)*(float *)(iVar1 + 0x118) <= fVar3) &&
       (fVar3 = FUN_10066590(), (float10)*(float *)(param_1 + 0x8c) <= fVar3)) &&
      (fVar3 = FUN_10066590(), (float10)*(float *)(param_1 + 0x90) <= fVar3)) &&
     (fVar3 = FUN_10066590(), (float10)*(float *)(param_1 + 0x94) <= fVar3)) {
    this = *(void **)(*(int *)(param_1 + 0x70) + 4);
    if ((*(uint *)((int)this + 0x250) & 0x70c30) == 0) {
      if (1.0 < gpGlobals->time - *(float *)(*(int *)(param_1 + 0x70) + 0x724)) {
        EMIT_SOUND_DYN(this,*(undefined4 *)((int)this + 0x208),2,s_player_block_wav_10098834,
                       0x3f800000,0x3f4ccccd,0,100);
      }
      fVar2 = _DAT_100b2230 * 5.0;
      fVar3 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
      if ((float10)fVar2 <= fVar3 * (float10)_DAT_100b2230 * (float10)0.5) {
        fVar3 = (float10)fVar2;
      }
      else {
        fVar3 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
        fVar3 = fVar3 * (float10)_DAT_100b2230 * (float10)0.5;
      }
      *(float *)(*(int *)(param_1 + 0x70) + 0x724) = (float)(fVar3 + (float10)gpGlobals->time);
      fVar2 = _DAT_100b2230 * 5.0;
      fVar3 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
      if (fVar3 * (float10)_DAT_100b2230 * (float10)0.5 < (float10)fVar2) {
        fVar3 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
        fVar2 = (float)(fVar3 * (float10)_DAT_100b2230 * (float10)0.5);
      }
      fVar3 = FUN_10066590();
      *(float *)(param_1 + 0x90) = (float)(fVar3 + (float10)fVar2);
      *(float *)(param_1 + 0x8c) = (float)(fVar3 + (float10)fVar2);
    }
  }
  return;
}

/* 1004de10  FUN_1004de10  (3165 bytes)
 * undefined FUN_1004de10(int param_1)
 * called by: CTSGun::PrimaryAttack, CTSGun::SecondaryAttack
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004de10(int param_1)

{
  int iVar1;
  float fVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  void *this;
  float *pfVar6;
  float fVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined2 extraout_var;
  undefined4 uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  longlong lVar14;
  float fVar15;
  undefined1 *puVar16;
  float fVar17;
  float *pfVar18;
  undefined1 auStack_64 [8];
  int iStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  float local_30;
  float local_2c;
  float local_28;
  int iStack_24;
  float afStack_10 [2];
  undefined4 uStack_8;
  float fStack_4;
  
  if ((DAT_100b2240 & 1) == 0) {
    DAT_100b2240 = DAT_100b2240 | 1;
    FUN_1006ee3b(FUN_1004eaa0);
  }
  if ((DAT_100b2240 & 2) == 0) {
    DAT_100b2240 = DAT_100b2240 | 2;
    FUN_1006ee3b(FUN_1004ea90);
  }
  if ((DAT_100b2240 & 4) == 0) {
    DAT_100b2240 = DAT_100b2240 | 4;
    FUN_1006ee3b(FUN_1004ea80);
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x70) + 4);
  _DAT_100b1e90 = 0.6;
  DAT_100bbe9c = 0;
  DAT_100b1e54 = 0;
  iVar1 = *(int *)(param_1 + 0x70);
  local_30 = 0.0;
  fVar7 = SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
               *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
               *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20));
  fVar11 = FUN_10066590();
  if (fVar11 < (float10)*(float *)(iVar1 + 0x118)) {
    return;
  }
  fVar11 = FUN_10066590();
  if (fVar11 < (float10)*(float *)(param_1 + 0x8c)) {
    return;
  }
  fVar11 = FUN_10066590();
  if (fVar11 < (float10)*(float *)(param_1 + 0x90)) {
    return;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x70) + 4);
  if ((*(uint *)(iVar4 + 0x250) & 0x70c30) != 0) {
    return;
  }
  local_28 = 0.0;
  if (fVar7 <= 100.0) {
LAB_1004dff8:
    local_2c = 2.8026e-45;
  }
  else {
    FUN_10066df0();
    iVar4 = *(int *)(*(int *)(param_1 + 0x70) + 4);
    fVar15 = SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
                  *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                  *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20));
    if (fVar15 == 0.0) {
      fVar17 = 0.0;
      fVar2 = 0.0;
      fVar15 = 1.0;
    }
    else {
      fVar15 = 1.0 / fVar15;
      fVar17 = fVar15 * *(float *)(iVar4 + 0x20);
      fVar2 = fVar15 * *(float *)(iVar4 + 0x24);
      fVar15 = fVar15 * *(float *)(iVar4 + 0x28);
    }
    local_2c = 4.2039e-45;
    local_28 = fVar17 * gpGlobals->v_forward[0] +
               fVar2 * gpGlobals->v_forward[1] + fVar15 * gpGlobals->v_forward[2];
    if (-0.5 < local_28) goto LAB_1004dff8;
  }
  uVar9 = *(uint *)(iVar4 + 0x180);
  if ((uVar9 & 1) != 0) {
    DAT_100b1e54 = 1;
    iVar4 = *(int *)(*(int *)(param_1 + 0x70) + 4);
    if ((*(byte *)(iVar4 + 0x250) & 0x10) == 0) {
      if ((*(uint *)(iVar4 + 0x1a4) & 0x200) != 0) {
        if (*(int *)(param_1 + 0xda8) < 5) {
          fVar11 = (float10)10.0;
          *(int *)(param_1 + 0xda8) = *(int *)(param_1 + 0xda8) + 1;
          DAT_100bbe9c = 0x16;
          _DAT_100b1e90 = 0.15;
        }
        else {
          fVar11 = (float10)fVar7 * (float10)0.06666666666666667;
          _DAT_100b1e90 = 0.2;
          *(undefined4 *)(param_1 + 0xda8) = 0;
          DAT_100bbe9c = 0x17;
          if (((float10)20.0 < fVar11) || ((float10)10.0 <= fVar11)) {
            if ((float10)20.0 < fVar11) {
              fVar11 = (float10)20.0;
            }
          }
          else {
            fVar11 = (float10)10.0;
          }
        }
        goto LAB_1004e2cc;
      }
      DAT_100bbe9c = 0x18;
    }
    fVar11 = (float10)fVar7 * (float10)0.1;
    _DAT_100b1e90 = 0.3;
    if (((float10)30.0 < fVar11) || ((float10)10.0 <= fVar11)) {
      if ((float10)30.0 < fVar11) {
        fVar11 = (float10)30.0;
      }
    }
    else {
      fVar11 = (float10)10.0;
    }
    goto LAB_1004e2cc;
  }
  if ((uVar9 & 0x800) == 0) {
LAB_1004e2c8:
    fVar11 = (float10)local_30;
LAB_1004e2cc:
    if (DAT_100b1e54 == 0) goto LAB_1004e9ff;
  }
  else {
    if ((*(uint *)(iVar4 + 0x250) & 0xc00) == 0) {
      if (((*(uint *)(iVar4 + 0x1a4) & 0x200) != 0) &&
         (((uVar9 & 4) != 0 || ((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x4000) != 0)))) {
        DAT_100b1e54 = 2;
        DAT_100bbe9c = 0x14;
        _DAT_100b1e90 = 1.0;
        iStack_24 = 0;
        iVar4 = *(int *)(*(int *)(param_1 + 0x70) + 4);
        local_30 = 6.72623e-44;
        *(uint *)(iVar4 + 0x250) = *(uint *)(iVar4 + 0x250) | 4;
        iVar4 = *(int *)(*(int *)(param_1 + 0x70) + 4);
        *(uint *)(iVar4 + 0x250) = *(uint *)(iVar4 + 0x250) | 1;
        iVar4 = *(int *)(*(int *)(param_1 + 0x70) + 4);
        *(undefined4 *)(iVar4 + 0x174) = 0;
        *(undefined4 *)(iVar4 + 0x178) = 0;
        *(undefined4 *)(iVar4 + 0x17c) = 0x41800000;
        fVar11 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
        *(float *)(*(int *)(param_1 + 0x70) + 0x470) =
             (float)(fVar11 * (float10)3.0 + (float10)gpGlobals->time);
        goto LAB_1004e2c8;
      }
      DAT_100b1e54 = (int)local_2c;
      if (local_2c == 4.2039e-45) {
        fVar11 = (float10)fVar7 * (float10)0.3030303;
        DAT_100bbe9c = 0x11;
        if (((float10)90.0 < fVar11) || ((float10)10.0 <= fVar11)) {
          if ((float10)90.0 < fVar11) {
            fVar11 = (float10)90.0;
          }
        }
        else {
          fVar11 = (float10)10.0;
        }
        _DAT_100b1e90 = 0.9;
        iStack_24 = 3;
        goto LAB_1004e2dd;
      }
      DAT_100b1e54 = 2;
      iVar4 = *(int *)(*(int *)(param_1 + 0x70) + 4);
      uVar9 = *(uint *)(iVar4 + 0x1a4) & 0x200;
      if ((((uVar9 == 0) && (270.0 < fVar7)) && ((*(byte *)(iVar4 + 0x180) & 4) != 0)) &&
         (0.5 < local_28)) {
        *(undefined4 *)(param_1 + 0xdac) = 0;
        _DAT_100b1e90 = 0.9;
        DAT_100bbe9c = 0x10;
        iStack_24 = 0;
        iVar4 = *(int *)(*(int *)(param_1 + 0x70) + 4);
        local_30 = 6.72623e-44;
        *(uint *)(iVar4 + 0x250) = *(uint *)(iVar4 + 0x250) | 4;
        iVar4 = *(int *)(*(int *)(param_1 + 0x70) + 4);
        *(undefined4 *)(iVar4 + 0x174) = 0;
        *(undefined4 *)(iVar4 + 0x178) = 0;
        *(undefined4 *)(iVar4 + 0x17c) = 0x41800000;
        fVar11 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
        *(float *)(*(int *)(param_1 + 0x70) + 0x470) =
             (float)(fVar11 * (float10)3.0 + (float10)gpGlobals->time);
        goto LAB_1004e2c8;
      }
      if ((uVar9 != 0) || (fVar7 <= 200.0)) {
        if (((*(uint *)(*(int *)(param_1 + 0x70) + 0x770) & 0x800) == 0) &&
           (*(int *)(param_1 + 0xdac) < 3)) {
          fVar11 = (float10)10.0;
          uVar8 = 0xb;
          *(int *)(param_1 + 0xdac) = *(int *)(param_1 + 0xdac) + 1;
          _DAT_100b1e90 = 0.25;
          local_30 = 6.72623e-44;
          if (*(int *)(param_1 + 0xdb0) == 0xb) {
            DAT_100bbe9c = 0xc;
          }
          else {
            if (*(int *)(param_1 + 0xdb0) != 0xc) {
              uStack_54 = 0x1004e6e0;
              iVar4 = (*g_engfuncs.pfnRandomLong)(0,1);
              if (iVar4 == 0) {
LAB_1004e640:
                local_30 = 6.72623e-44;
                DAT_100bbe9c = uVar8;
              }
              else if (iVar4 == 1) {
                DAT_100bbe9c = 0xc;
              }
              goto LAB_1004e2c8;
            }
            DAT_100bbe9c = 0xb;
          }
        }
        else {
          _DAT_100b1e90 = 0.5;
          iVar4 = *(int *)(param_1 + 0xdb0);
          *(undefined4 *)(param_1 + 0xdac) = 0;
          if (iVar4 == 0xf) {
switchD_1004e772_caseD_2:
            DAT_100bbe9c = 10;
          }
          else if (iVar4 == 10) {
switchD_1004e772_caseD_0:
            DAT_100bbe9c = 0xe;
          }
          else if (iVar4 == 0xe) {
switchD_1004e772_caseD_1:
            DAT_100bbe9c = 0xd;
          }
          else {
            if (iVar4 != 0xd) {
              uStack_54 = 0x1004e76a;
              iVar4 = (*g_engfuncs.pfnRandomLong)(0,3);
              switch(iVar4) {
              case 0:
                goto switchD_1004e772_caseD_0;
              case 1:
                goto switchD_1004e772_caseD_1;
              case 2:
                goto switchD_1004e772_caseD_2;
              case 3:
                break;
              default:
                goto switchD_1004e772_default;
              }
            }
            DAT_100bbe9c = 0xf;
          }
switchD_1004e772_default:
          fVar11 = (float10)local_2c * (float10)0.06666666666666667;
          if (((float10)20.0 < fVar11) || ((float10)10.0 <= fVar11)) {
            if ((float10)20.0 < fVar11) {
              fVar11 = (float10)20.0;
            }
          }
          else {
            fVar11 = (float10)10.0;
          }
        }
      }
      else {
        fVar11 = (float10)fVar7 * (float10)0.1;
        *(undefined4 *)(param_1 + 0xdac) = 0;
        if (((float10)30.0 < fVar11) || ((float10)10.0 <= fVar11)) {
          if ((float10)30.0 < fVar11) {
            fVar11 = (float10)30.0;
          }
        }
        else {
          fVar11 = (float10)10.0;
        }
        _DAT_100b1e90 = 0.7;
        iVar4 = *(int *)(param_1 + 0xdb0);
        uVar8 = 0xf;
        local_30 = 6.72623e-44;
        if (iVar4 == 0xf) {
          DAT_100bbe9c = 0x13;
        }
        else if (iVar4 == 0x13) {
          DAT_100bbe9c = 0x12;
        }
        else {
          if (iVar4 != 0x12) {
            uStack_54 = 0x1004e62e;
            iVar4 = (*g_engfuncs.pfnRandomLong)(0,2);
            if (iVar4 == 0) {
              DAT_100bbe9c = 0x13;
            }
            else if (iVar4 == 1) {
              DAT_100bbe9c = 0x12;
            }
            else if (iVar4 == 2) goto LAB_1004e640;
            goto LAB_1004e2c8;
          }
          DAT_100bbe9c = 0xf;
        }
      }
      goto LAB_1004e2cc;
    }
    fVar11 = (float10)fVar7 * (float10)0.1;
    DAT_100b1e54 = 2;
    _DAT_100b1e90 = 1.0;
    if (((float10)30.0 < fVar11) || ((float10)10.0 <= fVar11)) {
      if ((float10)30.0 < fVar11) {
        fVar11 = (float10)30.0;
      }
      iStack_24 = 2;
    }
    else {
      fVar11 = (float10)10.0;
      iStack_24 = 2;
    }
  }
LAB_1004e2dd:
  *(undefined4 *)(param_1 + 0xdb0) = DAT_100bbe9c;
  iVar4 = *(int *)(param_1 + 0x70);
  if (*(char *)(iVar4 + 0x731) == '\0') {
    *(float *)(iVar4 + 0x6ec) = *(float *)(iVar4 + 0x6ec) - (float)(fVar11 * (float10)0.9);
    if (*(float *)(*(int *)(param_1 + 0x70) + 0x6ec) < 0.0) {
      *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x6ec) = 0;
    }
  }
  uStack_54 = 0x1004e35d;
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100cbc3c,(float *)0x0,
             *(edict_t **)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208));
  lVar14 = __ftol();
  (*g_engfuncs.pfnWriteByte)((int)lVar14);
  (*g_engfuncs.pfnMessageEnd)();
  FUN_10042c30(*(int *)(param_1 + 0x70));
  if (iStack_24 == 3) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x70) + 4);
    uStack_8 = *(undefined4 *)(iVar4 + 0x74);
    fStack_4 = *(float *)(iVar4 + 0x78);
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x70) + 4);
    uStack_8 = *(undefined4 *)(iVar4 + 0x74);
    fStack_4 = *(float *)(iVar4 + 0x78);
  }
  FUN_10066df0();
  puVar3 = &stack0x00000004;
  puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x70) + 0x144))();
  _DAT_100b1da4 = *puVar5;
  _DAT_100b1da8 = puVar5[1];
  _DAT_100b1dac = puVar5[2];
  uStack_54 = DAT_100bbe9c;
  iStack_5c = (uint)(iStack_24 != 3) * 2 + 1;
  puStack_58 = puVar3;
  FUN_1000a540(&stack0xffffff98,gpGlobals->v_forward);
  pfVar18 = afStack_10;
  fVar7 = (float)(int)((uint)(iStack_24 != 3) * 2 + -1);
  this = (void *)FUN_10014e80(gpGlobals->v_forward,&fStack_4,(float)(int)local_28);
  fVar17 = 2.621187e-29;
  pfVar6 = (float *)FUN_10014e80(this,pfVar18,fVar7);
  puVar16 = &stack0xffffff8c;
  fVar15 = 2.6211922e-29;
  FUN_1000c610(&DAT_100b1da4,(float *)&stack0xffffff8c,pfVar6);
  FUN_1000a540(&stack0xffffff80,(undefined4 *)&DAT_100b1da4);
  fVar7 = FUN_10056f20(*(int **)(param_1 + 0x70),fVar15,puVar16,pfVar6,fVar17,(float)pfVar18,fVar7);
  if (fVar7 == 0.0) {
    fVar11 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
    if ((float10)3.0 <= fVar11 * (float10)0.3) {
      fVar11 = (float10)3.0;
    }
    else {
      fVar11 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
      fVar11 = fVar11 * (float10)0.3;
    }
    *(float *)(*(int *)(param_1 + 0x70) + 0x718) = (float)(fVar11 + (float10)gpGlobals->time);
    if (iStack_24 == 3) {
      puVar3 = (undefined1 *)-(float)puVar3;
    }
    *(undefined1 **)(*(int *)(param_1 + 0x70) + 0x71c) = puVar3;
    *(undefined1 *)(*(int *)(param_1 + 0x70) + 0x720) = 0;
  }
  if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x250) & 1) == 0) {
    fVar11 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
    FUN_10056b60(*(void **)(param_1 + 0x70),(float)(fVar11 * (float10)_DAT_100b1e90 * (float10)0.9))
    ;
  }
  iVar4 = *(int *)(param_1 + 0x70);
  uStack_54 = 0;
  puStack_58 = (undefined1 *)0x0;
  FUN_1004abf0(auStack_64,&DAT_1009f4a8);
  FUN_1004abf0(&stack0xffffff90,&DAT_1009f4a8);
  uVar10 = CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0xd0c));
  fVar7 = 0.0;
  uVar8 = FUN_1004ac10(iVar4);
  FUN_10048ff0(iVar4,1,uVar8,uVar10,fVar7);
LAB_1004e9ff:
  fVar12 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
  fVar11 = (float10)_DAT_100b1e90;
  fVar13 = FUN_10066590();
  fVar13 = fVar13 + (float10)(float)(fVar12 * fVar11);
  *(float *)(param_1 + 0x90) = (float)fVar13;
  *(float *)(param_1 + 0x8c) = (float)fVar13;
  fVar12 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
  fVar11 = (float10)_DAT_100b1e90;
  fVar13 = FUN_10066590();
  *(float *)(param_1 + 0x98) = (float)(fVar13 + (float10)(float)(fVar12 * fVar11));
  fVar11 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
  *(float *)(*(int *)(param_1 + 0x70) + 0x474) =
       (float)(fVar11 * (float10)_DAT_100b1e90 + (float10)gpGlobals->time);
  return;
}

/* 1004ea80  FUN_1004ea80  (1 bytes)
 * undefined FUN_1004ea80()
 */
void FUN_1004ea80(void)

{
  return;
}

/* 1004ea90  FUN_1004ea90  (1 bytes)
 * undefined FUN_1004ea90()
 */
void FUN_1004ea90(void)

{
  return;
}

/* 1004eaa0  FUN_1004eaa0  (1 bytes)
 * undefined FUN_1004eaa0()
 */
void FUN_1004eaa0(void)

{
  return;
}

/* 1004ec80  FUN_1004ec80  (76 bytes)
 * undefined1 FUN_1004ec80(int param_1)
 * called by: FUN_1004ecd0
 */
undefined1 __cdecl FUN_1004ec80(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0x22) {
    return 3;
  }
  if (param_1 == 0x21) {
    return 1;
  }
  if (param_1 == 0x10) {
    return 9;
  }
  if (param_1 == 10) {
    return 8;
  }
  if (param_1 == 0x1e) {
    return 8;
  }
  if (param_1 == 8) {
    return 8;
  }
  if (param_1 == 0x15) {
    return 8;
  }
  puVar1 = get_weapon_info(param_1);
  return *(undefined1 *)(puVar1 + 0xd8);
}

/* 1004ecd0  FUN_1004ecd0  (100 bytes)
 * undefined4 FUN_1004ecd0(int param_1, uint param_2)
 * called by: FUN_10055e00
 */
undefined4 __cdecl FUN_1004ecd0(int param_1,uint param_2)

{
  char cVar1;
  undefined3 uVar2;
  
  if ((0 < param_1) && (param_1 < 0x40)) {
    if (param_2 == 0) {
      return CONCAT31((int3)((uint)param_1 >> 8),1);
    }
    cVar1 = FUN_1004ec80(param_1);
    param_1 = (int)cVar1 - 1;
    uVar2 = (undefined3)((uint)param_1 >> 8);
    switch(param_1) {
    case 0:
      if ((param_2 & 0x10) == 0) {
        return CONCAT31(uVar2,1);
      }
      break;
    case 2:
      if ((param_2 & 1) == 0) {
        return CONCAT31(uVar2,1);
      }
      break;
    case 5:
    case 6:
      if ((param_2 & 8) == 0) {
        return CONCAT31(uVar2,1);
      }
      break;
    case 7:
      if ((param_2 & 2) == 0) {
        return CONCAT31(uVar2,1);
      }
      break;
    case 8:
      if ((param_2 & 4) == 0) {
        return CONCAT31(uVar2,1);
      }
    }
  }
  return param_1 & 0xffffff00;
}

/* 1004ede0  FUN_1004ede0  (1384 bytes)
 * undefined FUN_1004ede0(int param_1, int * param_2, int * param_3)
 * called by: CHalfLifeTeamplay::DeathNotice
 */
void FUN_1004ede0(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  edict_t *e;
  edict_t *peVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  bool bVar12;
  int *in_stack_00000010;
  int *in_stack_00000014;
  int in_stack_0000001c;
  int in_stack_0000002c;
  int in_stack_00000058;
  char acStack_1c [16];
  undefined4 uStack_c;
  
  if (param_2[0x82] == 0) {
    (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  iVar10 = 0;
  pcVar11 = s_world_100989c0;
  if ((*(byte *)(param_2 + 0x69) & 8) == 0) {
    iVar5 = in_stack_00000010[0x73];
    if (iVar5 == 0) {
      iVar5 = *in_stack_00000010;
      pcVar11 = gpGlobals->pStringBase;
    }
    else {
      pcVar11 = gpGlobals->pStringBase;
    }
    pcVar11 = pcVar11 + iVar5;
  }
  else {
    iVar10 = (*g_engfuncs.pfnIndexOfEdict)((edict_t *)param_2[0x82]);
    if (in_stack_00000014 != (int *)0x0) {
      if (in_stack_00000014 == param_2) {
        peVar2 = (edict_t *)param_2[0x82];
        if (peVar2 == (edict_t *)0x0) {
          peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
          if (peVar2 != (edict_t *)0x0) goto LAB_1004ee52;
          pvVar3 = (void *)0x0;
        }
        else {
LAB_1004ee52:
          pvVar3 = peVar2->pvPrivateData;
        }
        if (DAT_100ac81c == 0) {
          if (DAT_100cbf11 == '\0') {
            iVar5 = *(int *)((int)pvVar3 + 0x968);
            if (((iVar5 != 0) && (*(int *)(iVar5 + 0x78) == 0x10)) && (*(int *)(iVar5 + 0xbc) != 0))
            {
              if (DAT_100cbf12 == '\0') {
                puVar4 = get_weapon_info((uint)*(byte *)(iVar5 + 0xb8));
                pcVar11 = (char *)(puVar4 + 0x11);
              }
              else {
                pcVar11 = s_Stock_100989b0;
              }
            }
          }
          else {
            pcVar11 = s_Kung_Fu_100989b8;
          }
        }
        else {
          puVar4 = get_weapon_info(DAT_100ac81c);
          pcVar11 = (char *)(puVar4 + 0x11);
        }
      }
      else {
        pcVar11 = gpGlobals->pStringBase + *in_stack_00000014;
      }
    }
  }
  iVar5 = _strncmp(pcVar11,s_weapon__10091ccc,7);
  if (iVar5 == 0) {
    pcVar11 = pcVar11 + 7;
  }
  else {
    iVar5 = _strncmp(pcVar11,s_monster__100989a4,8);
    if (iVar5 == 0) {
      pcVar11 = pcVar11 + 8;
    }
    else {
      iVar5 = _strncmp(pcVar11,s_func__1009899c,5);
      if (iVar5 == 0) {
        pcVar11 = pcVar11 + 5;
      }
    }
  }
  iVar5 = 6;
  bVar12 = true;
  pcVar7 = pcVar11;
  pcVar6 = &DAT_100983c4;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar12 = *pcVar7 == *pcVar6;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar12);
  if (bVar12) {
    pcVar11 = s_Throwing_Knife_1009898c;
  }
  else {
    iVar5 = 9;
    bVar12 = true;
    pcVar7 = pcVar11;
    pcVar6 = s_shrapnel_10098618;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar12 = *pcVar7 == *pcVar6;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar12);
    if (bVar12) {
      pcVar11 = s_Shrapnel_10098980;
    }
    else {
      iVar5 = 8;
      bVar12 = true;
      pcVar7 = pcVar11;
      pcVar6 = s_grenade_10097ea4;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar12 = *pcVar7 == *pcVar6;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar12);
      if (bVar12) {
        pcVar11 = s_M61_Grenade_1008fb24;
      }
    }
  }
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbbf0,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(iVar10);
  iVar10 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(in_stack_0000001c + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(iVar10);
  (*g_engfuncs.pfnWriteString)(pcVar11);
  (*g_engfuncs.pfnMessageEnd)();
  iVar10 = -(int)pcVar11;
  do {
    cVar1 = *pcVar11;
    pcVar11[(int)(acStack_1c + iVar10)] = cVar1;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  iVar10 = -1;
  uVar9 = 0;
  pcVar11 = acStack_1c;
  do {
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  if (iVar10 != -2) {
    do {
      cVar1 = acStack_1c[uVar9];
      if ((cVar1 < 'A') || ('Z' < cVar1)) {
        if (cVar1 == ' ') {
          acStack_1c[uVar9] = '_';
        }
      }
      else {
        acStack_1c[uVar9] = cVar1 + ' ';
      }
      uVar8 = 0xffffffff;
      uVar9 = uVar9 + 1;
      pcVar11 = acStack_1c;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
    } while (uVar9 < ~uVar8 - 1);
  }
  peVar2 = *(edict_t **)(*(int *)(in_stack_0000001c + 4) + 0x208);
  if (*(int *)(in_stack_0000001c + 4) == in_stack_0000002c) {
    if (DAT_1009f498 == 0) {
      (*g_engfuncs.pfnGetPlayerUserId)(peVar2);
      (*g_engfuncs.pfnGetPlayerAuthId)(peVar2);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar2);
      pcVar11 = s___s<_i><_s><_i>__committed_suici_10098920;
    }
    else {
      pcVar7 = acStack_1c;
      pcVar6 = (*g_engfuncs.pfnGetInfoKeyBuffer)(peVar2);
      pcVar11 = (char *)0x1004f070;
      (*g_engfuncs.pfnInfoKeyValue)(pcVar6,pcVar7);
      (*g_engfuncs.pfnGetPlayerAuthId)(peVar2);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar2);
    }
  }
  else {
    if ((*(byte *)(in_stack_0000002c + 0x1a4) & 8) != 0) {
      e = *(edict_t **)(in_stack_0000002c + 0x208);
      pcVar11 = acStack_1c;
      if (DAT_1009f498 == 0) {
        (*g_engfuncs.pfnGetPlayerUserId)(peVar2);
        (*g_engfuncs.pfnGetPlayerAuthId)(peVar2);
        (*g_engfuncs.pfnGetPlayerUserId)(peVar2);
        (*g_engfuncs.pfnGetPlayerUserId)(e);
        (*g_engfuncs.pfnGetPlayerAuthId)(e);
        (*g_engfuncs.pfnGetPlayerUserId)(e);
        FUN_10068840((byte_conflict *)s___s<_i><_s><_i>__killed___s<_i><_100988b8);
      }
      else {
        pcVar7 = (*g_engfuncs.pfnGetInfoKeyBuffer)(peVar2);
        (*g_engfuncs.pfnInfoKeyValue)(pcVar7,pcVar11);
        (*g_engfuncs.pfnGetPlayerAuthId)(peVar2);
        (*g_engfuncs.pfnGetPlayerUserId)(peVar2);
        pcVar7 = gpGlobals->pStringBase + *(int *)(*(int *)(in_stack_0000001c + 4) + 0x1d0);
        pcVar11 = (*g_engfuncs.pfnGetInfoKeyBuffer)(e);
        (*g_engfuncs.pfnInfoKeyValue)(pcVar11,pcVar7);
        (*g_engfuncs.pfnGetPlayerAuthId)(e);
        (*g_engfuncs.pfnGetPlayerUserId)(e);
        FUN_10068840((byte_conflict *)s___s<_i><_s><_s>__killed___s<_i><_100988ec);
      }
      goto LAB_1004f2d5;
    }
    if (DAT_1009f498 == 0) {
      (*g_engfuncs.pfnGetPlayerUserId)(peVar2);
      (*g_engfuncs.pfnGetPlayerAuthId)(peVar2);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar2);
      pcVar11 = s___s<_i><_s><_i>__committed_suici_10098848;
    }
    else {
      pcVar7 = acStack_1c;
      pcVar6 = (*g_engfuncs.pfnGetInfoKeyBuffer)(peVar2);
      pcVar11 = (char *)0x1004f254;
      (*g_engfuncs.pfnInfoKeyValue)(pcVar6,pcVar7);
      (*g_engfuncs.pfnGetPlayerAuthId)(peVar2);
      (*g_engfuncs.pfnGetPlayerUserId)(peVar2);
    }
  }
  FUN_10068840((byte_conflict *)pcVar11);
LAB_1004f2d5:
  (*g_engfuncs.pfnMessageBegin)(9,0x32,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(3);
  iVar10 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(in_stack_0000001c + 4) + 0x208));
  (*g_engfuncs.pfnWriteShort)(iVar10);
  if (in_stack_00000058 == 0) {
    peVar2 = *(edict_t **)(in_stack_0000002c + 0x208);
  }
  else {
    peVar2 = *(edict_t **)(in_stack_00000058 + 0x208);
  }
  uStack_c = 0x1004f323;
  iVar10 = (*g_engfuncs.pfnIndexOfEdict)(peVar2);
  uStack_c = 0x1004f32a;
  (*g_engfuncs.pfnWriteShort)(iVar10);
  (*g_engfuncs.pfnWriteLong)(0x27);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 1004f350  FUN_1004f350  (112 bytes)
 * undefined FUN_1004f350()
 */
void FUN_1004f350(CBasePlayer *param_1)

{
  int *piVar1;
  
  piVar1 = &param_1->pev->weapons;
  *piVar1 = *piVar1 | 0x80000000;
  piVar1 = (int *)UTIL_FindEntityByClassname(0,s_game_player_equip_100989c8);
  if (piVar1 != (int *)0x0) {
    do {
      (**(code **)(*piVar1 + 0xbc))(param_1);
      piVar1 = (int *)UTIL_FindEntityByClassname((int)piVar1,s_game_player_equip_100989c8);
    } while (piVar1 != (int *)0x0);
    return;
  }
  CBasePlayer::GiveNamedItem(param_1,0x100986dc);
  FUN_100559d0(param_1);
  *(undefined4 *)&param_1->field_0x4b4 = *(undefined4 *)&param_1->field_0x4b8;
  return;
}

/* 1004f3c0  FUN_1004f3c0  (1046 bytes)
 * uint FUN_1004f3c0(undefined4 param_1, int * param_2, int * param_3, uint param_4)
 * called by: CHalfLifeMultiplay::PlayerKilled
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_1004f3c0(undefined4 param_1,int *param_2,int *param_3,uint param_4)

{
  char cVar1;
  edict_t *peVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  undefined4 *puVar6;
  char *pcVar7;
  byte bVar8;
  bool bVar9;
  uint local_88;
  int *local_84;
  char acStack_80 [64];
  char acStack_40 [64];
  
  if ((DAT_100ac8c0 != '\0') && (DAT_100ac8c0 != '\x01')) {
    return param_4;
  }
  if ((int)param_4 < 0) {
    return param_4;
  }
  local_88 = param_4 & 0xff;
  peVar2 = (edict_t *)param_2[0x82];
  if ((peVar2 == (edict_t *)0x0) &&
     (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 == (edict_t *)0x0)) {
    local_84 = (int *)0x0;
  }
  else {
    local_84 = peVar2->pvPrivateData;
  }
  acStack_80[0] = '\0';
  acStack_40[0] = '\0';
  if (((_DAT_102e00fc != 0.0) && (iVar3 = (**(code **)(*local_84 + 0xa8))(), iVar3 != 0)) &&
     (*(char *)((int)local_84 + 0x731) == '\0')) {
    return 0;
  }
  if ((*(byte *)(param_2 + 0x69) & 8) == 0) goto LAB_1004f74a;
  pcVar7 = acStack_40;
  pcVar4 = gpGlobals->pStringBase + param_2[0x74];
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (param_3 != (int *)0x0) {
    if (param_3 != param_2) {
      iVar3 = 6;
      bVar9 = true;
      pcVar7 = gpGlobals->pStringBase + *param_3;
      pcVar4 = &DAT_100983c4;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar9 = *pcVar7 == *pcVar4;
        pcVar7 = pcVar7 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar9);
      if (!bVar9) {
        return param_4 & 0xff;
      }
      iVar3 = 0;
      do {
        cVar1 = s_Throwing_Knife_1009898c[iVar3];
        acStack_80[iVar3] = cVar1;
        iVar3 = iVar3 + 1;
      } while (cVar1 != '\0');
      goto LAB_1004f545;
    }
    peVar2 = (edict_t *)param_2[0x82];
    if ((peVar2 == (edict_t *)0x0) &&
       (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 == (edict_t *)0x0)) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = peVar2->pvPrivateData;
    }
    if (DAT_100ac81c == 0) {
      iVar3 = *(int *)((int)pvVar5 + 0x968);
      if (iVar3 == 0) {
        if (DAT_100cbf11 != '\0') {
          iVar3 = 0;
          do {
            cVar1 = (&DAT_10098a2c)[iVar3];
            acStack_80[iVar3] = cVar1;
            iVar3 = iVar3 + 1;
          } while (cVar1 != '\0');
          goto LAB_1004f545;
        }
      }
      else if (*(int *)(iVar3 + 0x78) == 0x10) {
        if ((*(int *)(iVar3 + 0xbc) == 0) || (DAT_100cbf11 != '\0')) {
          iVar3 = 0;
          do {
            cVar1 = (&DAT_10098a2c)[iVar3];
            acStack_80[iVar3] = cVar1;
            iVar3 = iVar3 + 1;
          } while (cVar1 != '\0');
        }
        else {
          puVar6 = get_weapon_info((uint)*(byte *)(iVar3 + 0xb8));
          if (*(char *)(puVar6 + 0xd8) != '\n') goto LAB_1004f54b;
          iVar3 = 0;
          do {
            cVar1 = s_Katana_1008f8dc[iVar3];
            acStack_80[iVar3] = cVar1;
            iVar3 = iVar3 + 1;
          } while (cVar1 != '\0');
        }
LAB_1004f545:
        param_4 = 2;
        local_88 = 2;
      }
    }
  }
LAB_1004f54b:
  if ((param_2[0x94] & 0x10c10U) == 0) {
    if ((((param_2[0x94] & 0x20U) == 0) || (1.0 <= (float)param_2[0x48])) ||
       (SQRT((float)param_2[10] * (float)param_2[10] +
             (float)param_2[9] * (float)param_2[9] + (float)param_2[8] * (float)param_2[8]) <= 80.0)
       ) {
      if (acStack_80[0] != '\0') {
        iVar3 = -1;
        pcVar7 = acStack_80;
        do {
          pcVar4 = pcVar7;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar4 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar4;
        } while (cVar1 != '\0');
        *(undefined4 *)(pcVar4 + -1) = DAT_100989f0;
        *(undefined4 *)(pcVar4 + 3) = DAT_100989f4;
      }
    }
    else {
      iVar3 = (**(code **)(*local_84 + 0xa8))();
      if (iVar3 != 0) {
        bVar8 = (char)param_4 + 1;
        param_4 = (uint)bVar8;
        local_88 = (uint)bVar8;
      }
      if ((byte)param_4 < 2) {
        return local_88;
      }
      if (acStack_80[0] == '\0') {
        iVar3 = 0;
        do {
          cVar1 = s_Sliding_style__100989f8[iVar3];
          acStack_80[iVar3] = cVar1;
          iVar3 = iVar3 + 1;
        } while (cVar1 != '\0');
      }
      else {
        iVar3 = -1;
        pcVar7 = acStack_80;
        do {
          pcVar4 = pcVar7;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar4 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar4;
        } while (cVar1 != '\0');
        *(undefined4 *)(pcVar4 + -1) = s___Sliding_style__10098a08._0_4_;
        *(undefined4 *)(pcVar4 + 3) = s___Sliding_style__10098a08._4_4_;
        *(undefined4 *)(pcVar4 + 7) = s___Sliding_style__10098a08._8_4_;
        *(undefined4 *)(pcVar4 + 0xb) = s___Sliding_style__10098a08._12_4_;
        *(undefined2 *)(pcVar4 + 0xf) = s___Sliding_style__10098a08._16_2_;
      }
    }
  }
  else {
    iVar3 = (**(code **)(*local_84 + 0xa8))();
    if (iVar3 != 0) {
      bVar8 = (char)param_4 + 2;
      param_4 = (uint)bVar8;
      local_88 = (uint)bVar8;
    }
    if ((byte)param_4 < 2) {
      return local_88;
    }
    if (acStack_80[0] == '\0') {
      iVar3 = 0;
      do {
        cVar1 = s_Stuntman_style__10098a1c[iVar3];
        acStack_80[iVar3] = cVar1;
        iVar3 = iVar3 + 1;
      } while (cVar1 != '\0');
    }
    else {
      iVar3 = -1;
      pcVar7 = acStack_80;
      do {
        pcVar4 = pcVar7;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar4 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar4;
      } while (cVar1 != '\0');
      *(undefined4 *)(pcVar4 + -1) = s___Stuntman_style__10098a34._0_4_;
      *(undefined4 *)(pcVar4 + 3) = s___Stuntman_style__10098a34._4_4_;
      *(undefined4 *)(pcVar4 + 7) = s___Stuntman_style__10098a34._8_4_;
      *(undefined4 *)(pcVar4 + 0xb) = s___Stuntman_style__10098a34._12_4_;
      *(undefined2 *)(pcVar4 + 0xf) = s___Stuntman_style__10098a34._16_2_;
      pcVar4[0x11] = s___Stuntman_style__10098a34[0x12];
    }
  }
LAB_1004f74a:
  if (1 < (byte)param_4) {
    if (local_84 != (int *)0x0) {
      (**(code **)(*local_84 + 0xa8))();
    }
    pcVar7 = UTIL_VarArgs((byte_conflict *)s__i_frags_for__s___s_100989dc);
    TSHudMessageAll(0,0xff,0,1,0x1e,pcVar7);
  }
  return local_88;
}

/* 100500f0  FUN_100500f0  (73 bytes)
 * undefined4 FUN_100500f0(int param_1)
 */
undefined4 FUN_100500f0(int param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  
  bVar3 = FUN_1002b380(param_1);
  if ((CONCAT31(extraout_var,bVar3) == 0) &&
     (fVar1 = *(float *)(*(int *)(param_1 + 4) + 0x24),
     fVar2 = *(float *)(*(int *)(param_1 + 4) + 0x20), SQRT(fVar1 * fVar1 + fVar2 * fVar2) <= 220.0)
     ) {
    return 0;
  }
  return 1;
}

/* 10050710  FUN_10050710  (116 bytes)
 * undefined FUN_10050710(int param_1)
 * called by: FUN_10045150
 */
void __fastcall FUN_10050710(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 4;
  piVar2 = (int *)(param_1 + 0x54);
  do {
    if (*piVar2 != 0) {
      TSHudMessageAll(0,0xff,0,1,0x1e,gpGlobals->pStringBase + *piVar2);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  piVar2 = (int *)(param_1 + 100);
  iVar1 = 8;
  do {
    if (*piVar2 != 0) {
      FireTargets((int)(gpGlobals->pStringBase + *piVar2),param_1,param_1,3,0);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

/* 10050c90  FUN_10050c90  (9 bytes)
 * undefined FUN_10050c90(int param_1)
 * called by: CTSWinGiver::Spawn, FUN_100449b0
 */
void __fastcall FUN_10050c90(int param_1)

{
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  return;
}

/* 10050ec0  FUN_10050ec0  (72 bytes)
 * undefined FUN_10050ec0(int param_1)
 * called by: CTSBomb::KeyValue, CTSHack::KeyValue, CTSTeamEscape::KeyValue
 */
void __thiscall FUN_10050ec0(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = 0xd;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_attackerteam_10099084;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    uVar1 = FUN_1006e1dd(*(void **)(param_1 + 8),*(void **)(param_1 + 8));
    *(undefined4 *)((int)this + 0x58) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10050f10  FUN_10050f10  (33 bytes)
 * undefined FUN_10050f10()
 */
void __thiscall FUN_10050f10(int param_1,char param_2)

{
  if (param_2 != '\0') {
    *(undefined1 *)(param_1 + 0x54) = 0;
    FUN_10046690(&DAT_100ac8c0,param_1);
    return;
  }
  *(undefined1 *)(param_1 + 0x54) = 1;
  return;
}

/* 10051080  FUN_10051080  (61 bytes)
 * undefined FUN_10051080(int param_1)
 * called by: CTSObjective::Freeze
 */
void __fastcall FUN_10051080(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x6c) = 3;
  *(undefined1 *)(param_1 + 0x6d) = 3;
  *(undefined1 *)(param_1 + 0x6e) = 3;
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,2);
  *(undefined1 *)(iVar1 + 0x6c + param_1) = 1;
  do {
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,2);
  } while (*(char *)(param_1 + 0x6c + iVar1) == '\x01');
  *(undefined1 *)(iVar1 + 0x6c + param_1) = 2;
  return;
}

/* 100511a0  FUN_100511a0  (273 bytes)
 * undefined FUN_100511a0(int param_1, int param_2)
 * called by: FUN_10055700
 */
void __thiscall FUN_100511a0(void *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if ((((*(char *)((int)this + 0x54) != '\0') && (*(int *)((int)this + 0x74) != 0)) &&
      (*(float *)((int)this + 0x5c) < 0.0 == (*(float *)((int)this + 0x5c) == 0.0))) &&
     (((-1 < param_1 && (param_1 < 3)) &&
      ((cVar1 = *(char *)(param_1 + 0x6c + (int)this), cVar1 != '\0' && (param_2 != 0)))))) {
    if (cVar1 == '\x03') {
      *(undefined1 *)(param_1 + 0x6c + (int)this) = 0;
      *(undefined4 *)((int)this + 0x5c) = 0;
      return;
    }
    if (cVar1 == '\x02') {
      *(undefined1 *)((int)this + 0x6f) = 1;
      *(undefined1 *)(param_1 + 0x6c + (int)this) = 0;
      *(undefined1 *)(param_2 + 0x708) = *(undefined1 *)((int)this + 0x6c);
      *(undefined1 *)(param_2 + 0x709) = *(undefined1 *)((int)this + 0x6d);
      *(undefined1 *)(param_2 + 0x70a) = *(undefined1 *)((int)this + 0x6e);
      return;
    }
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x6c + (int)this) = 0;
      iVar2 = *(int *)(*(int *)((int)this + 4) + 0x1c8);
      if (iVar2 != 0) {
        FireTargets((int)(gpGlobals->pStringBase + iVar2),this,this,3,0);
      }
      iVar2 = *(int *)(*(int *)((int)this + 4) + 0x1d4);
      if (iVar2 != 0) {
        TSHudMessageAll(0,0xff,0,1,0x1e,gpGlobals->pStringBase + iVar2);
      }
      *(undefined4 *)((int)this + 0x5c) = 0;
      *(undefined4 *)((int)this + 0x60) = 0;
      (**(code **)(*(int *)this + 0xf4))(1);
    }
  }
  return;
}

/* 100513d0  FUN_100513d0  (91 bytes)
 * undefined4 FUN_100513d0(int * param_1)
 * called by: CTSBomb::Use, CTSHack::Use, CTSTeamEscape::WaitTouch, FUN_10055650
 */
undefined4 __thiscall FUN_100513d0(void *this,int *param_1)

{
  byte_conflict *pbVar1;
  uint uVar2;
  void *this_00;
  void *this_01;
  
  uVar2 = *(uint *)((int)this + 0x58);
  if (uVar2 == 0) {
    pbVar1 = (byte_conflict *)(**(code **)(*param_1 + 0xb0))();
    uVar2 = FUN_1007e860(this_00,(byte_conflict *)s_Specialists_10097488,pbVar1);
    if (uVar2 == 0) {
      return 1;
    }
  }
  if (*(int *)((int)this + 0x58) == 1) {
    pbVar1 = (byte_conflict *)(**(code **)(*param_1 + 0xb0))();
    uVar2 = FUN_1007e860(this_01,(byte_conflict *)s_Mercenary_1009747c,pbVar1);
    if (uVar2 == 0) {
      return 1;
    }
  }
  return uVar2 & 0xffffff00;
}

/* 10054790  FUN_10054790  (35 bytes)
 * undefined FUN_10054790(int param_1)
 * called by: CBasePlayer::PostThink
 */
void __cdecl FUN_10054790(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x160);
  if (NAN(fVar1) || fVar1 < 0.0 == (fVar1 == 0.0)) {
    *(undefined4 *)(param_1 + 0xb4) = DAT_1009f4a0;
  }
  return;
}

/* 10054fa0  FUN_10054fa0  (109 bytes)
 * undefined FUN_10054fa0(int * param_1)
 * called by: CBasePlayer::ImpulseCommands
 */
void __fastcall FUN_10054fa0(int *param_1)

{
  param_1[0x24e] = -1;
  param_1[0x245] = param_1[0x245] | 0xc0;
  param_1[0x24f] = -1;
  param_1[0x131] = -1;
  param_1[0x12f] = -1;
  *(undefined1 *)(param_1 + 0x57) = 0xff;
  param_1[0x246] = 0;
  param_1[0x1e7] = 0;
  *(undefined1 *)((int)param_1 + 0x41d) = 0xff;
  *(undefined1 *)(param_1 + 0x1a6) = 0;
  param_1[0x1ac] = 0xff;
  param_1[0x1ab] = 0;
  param_1[0x55] = -0x40800000;
                    /* WARNING: Could not recover jumptable at 0x10055007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))();
  return;
}

/* 100551c0  FUN_100551c0  (17 bytes)
 * undefined FUN_100551c0(int param_1)
 * called by: CBasePlayer::PostThink, CBasePlayer::PreThink, CTSAnimation::Animate, CTSAnimation::HandleCloseCombat, CTSGun::AlternateAttack, CTSStunt::GoRoll, FUN_1003ee00, FUN_1003ee50, FUN_100439e0, FUN_10049a50, FUN_1004ab60, FUN_1004b050, ... (41 total)
 */
void __fastcall FUN_100551c0(int param_1)

{
  FUN_1005a3d0(*(float *)(*(int *)(param_1 + 4) + 0x254));
  return;
}

/* 100551e0  FUN_100551e0  (50 bytes)
 * undefined4 FUN_100551e0(int param_1)
 * called by: CTSSlowMotion::WaitTouch, CTSSlowMotionPoint::WaitThink, FUN_100410a0, FUN_100455f0
 */
undefined4 __fastcall FUN_100551e0(int param_1)

{
  if ((*(float *)(*(int *)(param_1 + 4) + 0x254) == 0.0) && (*(float *)(param_1 + 0x158) == 0.0)) {
    return 0;
  }
  return 1;
}

/* 10055220  FUN_10055220  (159 bytes)
 * undefined FUN_10055220(float param_1, undefined1 param_2)
 * called by: CTSSlowMotion::WaitTouch, CTSSlowMotionPoint::WaitThink, FUN_10041030, FUN_100410a0, FUN_10041420, FUN_100455f0, FUN_10057610, FUN_100576d0
 */
void __thiscall FUN_10055220(void *this,float param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if (*(int *)(iVar2 + 0x244) == 0) {
    *(float *)(iVar2 + 0x254) = param_1;
  }
  else {
    *(undefined4 *)(iVar2 + 0x254) = 0;
  }
  *(float *)((int)this + 0x158) = param_1;
  *(undefined1 *)((int)this + 0x15d) = param_2;
  if (param_1 == 0.0) {
    if (1.0 <= *(float *)((int)this + 0x118)) {
      uVar1 = 0x3f800000;
    }
    else {
      uVar1 = *(undefined4 *)((int)this + 0x118);
    }
    iVar2 = *(int *)((int)this + 0x968);
    *(undefined4 *)((int)this + 0x118) = uVar1;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x78) == 0x10)) {
      *(undefined4 *)(iVar2 + 0x90) = uVar1;
      *(undefined4 *)(*(int *)((int)this + 0x968) + 0x8c) =
           *(undefined4 *)(*(int *)((int)this + 0x968) + 0x90);
      return;
    }
  }
  return;
}

/* 100552c0  FUN_100552c0  (47 bytes)
 * undefined FUN_100552c0(int param_1)
 * called by: CBasePlayer::PreThink
 */
void __fastcall FUN_100552c0(int param_1)

{
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x250) & 0x30) != 0) {
    *(undefined1 *)(param_1 + 0x41c) = 2;
    return;
  }
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x4000) != 0) {
    *(undefined1 *)(param_1 + 0x41c) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x41c) = 0;
  return;
}

/* 10055650  FUN_10055650  (168 bytes)
 * undefined FUN_10055650(int * param_1)
 * called by: CBasePlayer::PreThink
 */
void __fastcall FUN_10055650(int *param_1)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  *(undefined1 *)(param_1 + 0x1c2) = 0;
  *(undefined1 *)((int)param_1 + 0x709) = 0;
  *(undefined1 *)((int)param_1 + 0x70a) = 0;
  this = (void *)FUN_10066c30(0,param_1[1] + 8,0x42800000);
  do {
    if (this == (void *)0x0) {
      return;
    }
    iVar2 = 8;
    bVar5 = true;
    pcVar3 = gpGlobals->pStringBase + **(int **)((int)this + 4);
    pcVar4 = s_ts_bomb_100982ec;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (((bVar5) && (*(char *)((int)this + 0x54) != '\0')) &&
       (uVar1 = FUN_100513d0(this,param_1), (char)uVar1 != '\0')) {
      *(undefined1 *)(param_1 + 0x1c2) = *(undefined1 *)((int)this + 0x6c);
      *(undefined1 *)((int)param_1 + 0x709) = *(undefined1 *)((int)this + 0x6d);
      *(undefined1 *)((int)param_1 + 0x70a) = *(undefined1 *)((int)this + 0x6e);
    }
    this = (void *)FUN_10066c30((int)this,param_1[1] + 8,0x42800000);
  } while( true );
}

/* 10055700  FUN_10055700  (163 bytes)
 * undefined FUN_10055700(int param_1)
 * called by: pfnClientCommand
 */
void __thiscall FUN_10055700(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = (**(code **)(*(int *)this + 0x94))();
  if ((iVar1 != 0) && (*(int *)(*(int *)((int)this + 4) + 0x244) == 0)) {
    *(undefined1 *)((int)this + 0x708) = 0;
    *(undefined1 *)((int)this + 0x709) = 0;
    *(undefined1 *)((int)this + 0x70a) = 0;
    for (this_00 = (void *)FUN_10066c30(0,*(int *)((int)this + 4) + 8,0x42800000);
        this_00 != (void *)0x0;
        this_00 = (void *)FUN_10066c30((int)this_00,*(int *)((int)this + 4) + 8,0x42800000)) {
      iVar1 = 8;
      bVar4 = true;
      pcVar2 = gpGlobals->pStringBase + **(int **)((int)this_00 + 4);
      pcVar3 = s_ts_bomb_100982ec;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *pcVar2 == *pcVar3;
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        FUN_100511a0(this_00,param_1,(int)this);
      }
    }
  }
  return;
}

/* 100557b0  FUN_100557b0  (117 bytes)
 * undefined FUN_100557b0(float param_1)
 * called by: CBasePlayer::PickUpWeapon, CBasePlayer::TSInit, CTSGun::GrenadeIdle, FUN_1004c6c0, FUN_10056080
 */
void __thiscall FUN_100557b0(void *this,float param_1)

{
  longlong lVar1;
  
  *(float *)((int)this + 0x4c8) = param_1;
  if (310.0 < param_1) {
    *(undefined4 *)((int)this + 0x4c8) = 0x439b0000;
  }
  if (*(float *)((int)this + 0x4c8) < 0.0) {
    *(undefined4 *)((int)this + 0x4c8) = 0;
  }
  lVar1 = __ftol();
  (*g_engfuncs.pfnSetClientMaxspeed)
            (*(edict_t **)(*(int *)((int)this + 4) + 0x208),(float)(int)lVar1);
  return;
}

/* 10055950  FUN_10055950  (20 bytes)
 * undefined FUN_10055950(int param_1)
 * called by: CBasePlayer::Killed, FUN_100451c0, FUN_1005f320, pfnClientCommand
 */
void __fastcall FUN_10055950(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x4cc);
  for (iVar1 = 0x70; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 10055970  FUN_10055970  (63 bytes)
 * undefined FUN_10055970(undefined4 param_1, undefined4 param_2, undefined1 param_3)
 * called by: FUN_1005f320, pfnClientCommand
 */
void __thiscall FUN_10055970(void *this,undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)((int)this + 0x50c);
  do {
    if (*piVar3 == 0) {
      if (iVar2 < 0x20) {
        puVar1 = (undefined4 *)((int)this + iVar2 * 0xc + 0x50c);
        *puVar1 = param_1;
        puVar1[1] = param_2;
        *(undefined1 *)(puVar1 + 2) = param_3;
      }
      return;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 3;
  } while (iVar2 < 0x20);
  return;
}

/* 100559b0  FUN_100559b0  (27 bytes)
 * undefined FUN_100559b0(int param_1, undefined4 param_2)
 * called by: FUN_1005f320, pfnClientCommand
 */
void __thiscall FUN_100559b0(void *this,int param_1,undefined4 param_2)

{
  if ((-1 < param_1) && (param_1 < 0x10)) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x4cc) = param_2;
  }
  return;
}

/* 100559d0  FUN_100559d0  (107 bytes)
 * undefined FUN_100559d0(void * param_1)
 * called by: FUN_1004f350
 */
void __fastcall FUN_100559d0(void *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0x20;
  puVar2 = (uint *)((int)param_1 + 0x50c);
  do {
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((char)puVar2[2] == '\0') {
        FUN_10055e00(param_1,uVar1,puVar2[1]);
      }
      else {
        FUN_10055c30(param_1,uVar1);
      }
    }
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = 0;
  piVar4 = (int *)((int)param_1 + 0x4cc);
  do {
    if ((0 < *piVar4) && (iVar3 = 0, 0 < *piVar4)) {
      do {
        FUN_10055a40(param_1,uVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *piVar4);
    }
    uVar1 = uVar1 + 1;
    piVar4 = piVar4 + 1;
  } while ((int)uVar1 < 0x10);
  return;
}

/* 10055a40  FUN_10055a40  (483 bytes)
 * undefined FUN_10055a40(uint param_1)
 * called by: FUN_100559d0
 */
void __thiscall FUN_10055a40(void *this,uint param_1)

{
  byte bVar1;
  void *pvVar2;
  void *this_00;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined3 extraout_var;
  int iVar6;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = 0;
  pvVar2 = *(void **)((int)this + 0x968);
  if ((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 0x78) == 0x10)) {
    if (param_1 == 0xfffffffe) {
      bVar4 = false;
      pcVar7 = (char *)((int)pvVar2 + 0xcd4);
      param_1 = 0x3f;
      do {
        if (*pcVar7 != '\0') {
          puVar5 = get_weapon_info(param_1);
          bVar1 = *(byte *)(puVar5 + 2);
          uVar8 = (uint)bVar1;
          if (uVar8 != 0) {
            bVar3 = FUN_100435f0();
            if (CONCAT31(extraout_var,bVar3) != 0) {
              puVar5 = FUN_100491c0(uVar8);
              iVar9 = *(int *)((int)this + 0x4b8) - puVar5[1];
            }
            if (-1 < iVar9) {
              puVar5 = FUN_100491c0(uVar8);
              iVar6 = FUN_10049f40(pvVar2,bVar1,puVar5[4]);
              while (iVar6 != 0) {
                bVar3 = FUN_100435f0();
                if (CONCAT31(extraout_var_00,bVar3) != 0) {
                  *(int *)((int)this + 0x4b8) = iVar9;
                  puVar5 = FUN_100491c0(uVar8);
                  iVar9 = *(int *)((int)this + 0x4b8) - puVar5[1];
                }
                if (!bVar4) {
                  this_00 = *(void **)(*(int *)((int)this + 4) + 0x208);
                  EMIT_SOUND_DYN(this_00,this_00,3,s_items_9mmclip1_wav_100993c8,0x3f800000,
                                 0x3f4ccccd,0,100);
                }
                bVar4 = true;
                if (iVar9 < 0) {
                  return;
                }
                puVar5 = FUN_100491c0(uVar8);
                iVar6 = FUN_10049f40(pvVar2,bVar1,puVar5[4]);
              }
            }
          }
        }
        param_1 = param_1 - 1;
        pcVar7 = pcVar7 + -0x30;
        if ((int)param_1 < 0) {
          return;
        }
      } while( true );
    }
    if (*(int *)((int)pvVar2 + 0xbc) != 0) {
      if (param_1 == 0xffffffff) {
        param_1 = (uint)*(byte *)(*(int *)((int)pvVar2 + 0xc0) + 8);
      }
      else if (param_1 == 0) {
        return;
      }
      bVar4 = FUN_100435f0();
      if (CONCAT31(extraout_var_01,bVar4) != 0) {
        puVar5 = FUN_100491c0(param_1);
        iVar9 = *(int *)((int)this + 0x4b8) - puVar5[1];
        if (iVar9 < 0) {
          return;
        }
      }
      puVar5 = FUN_100491c0(param_1);
      iVar6 = FUN_10049f40(pvVar2,(byte_conflict)param_1,puVar5[4]);
      if (iVar6 != 0) {
        bVar4 = FUN_100435f0();
        if (CONCAT31(extraout_var_02,bVar4) != 0) {
          *(int *)((int)this + 0x4b8) = iVar9;
        }
        pvVar2 = *(void **)(*(int *)((int)this + 4) + 0x208);
        EMIT_SOUND_DYN(pvVar2,pvVar2,3,s_items_9mmclip1_wav_100993c8,0x3f800000,0x3f4ccccd,0,100);
      }
    }
  }
  return;
}

/* 10055c30  FUN_10055c30  (455 bytes)
 * undefined FUN_10055c30(uint param_1)
 * called by: FUN_100559d0
 */
void __thiscall FUN_10055c30(void *this,uint param_1)

{
  void *pvVar1;
  uint uVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  int iVar4;
  undefined3 extraout_var_05;
  void *this_00;
  int iVar5;
  
  iVar5 = 0;
  pvVar1 = *(void **)((int)this + 0x968);
  bVar3 = FUN_100435f0();
  if (CONCAT31(extraout_var,bVar3) != 0) {
    iVar5 = *(int *)((int)this + 0x4b8);
  }
  if ((param_1 & 0x10) == 0) {
    if ((param_1 & 0x20) == 0) {
      if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 0x78) == 0x10)) {
        bVar3 = FUN_100435f0();
        if (CONCAT31(extraout_var_04,bVar3) != 0) {
          if ((param_1 & 1) != 0) {
            iVar5 = iVar5 + -900;
          }
          if ((param_1 & 2) != 0) {
            iVar5 = iVar5 + -800;
          }
          if ((param_1 & 4) != 0) {
            iVar5 = iVar5 + -500;
          }
          if ((param_1 & 8) != 0) {
            iVar5 = iVar5 + -0x708;
          }
        }
        if (-1 < iVar5) {
          iVar4 = FUN_10049e50(pvVar1,param_1);
          if (iVar4 != 0) {
            bVar3 = FUN_100435f0();
            if (CONCAT31(extraout_var_05,bVar3) != 0) {
              *(int *)((int)this + 0x4b8) = iVar5;
            }
          }
        }
      }
    }
    else if ((DAT_100ac8c0 != '\0') && (DAT_100ac8c0 != '\x01')) {
      bVar3 = FUN_100435f0();
      if (CONCAT31(extraout_var_02,bVar3) != 0) {
        iVar5 = iVar5 + -700;
      }
      uVar2 = *(uint *)(*(int *)((int)this + 4) + 0x250);
      if (((uVar2 & 0x200) == 0) && (-1 < iVar5)) {
        *(uint *)(*(int *)((int)this + 4) + 0x250) = uVar2 | 0x200;
        bVar3 = FUN_100435f0();
        if (CONCAT31(extraout_var_03,bVar3) != 0) {
          *(int *)((int)this + 0x4b8) = iVar5;
        }
        *(uint *)((int)this + 0x690) = *(uint *)((int)this + 0x690) | 0x20;
        EMIT_SOUND_DYN(this_00,*(undefined4 *)(*(int *)((int)this + 4) + 0x208),3,
                       s_weapons_items_wav_100993dc,0x3f800000,0x3f4ccccd,0,100);
        return;
      }
    }
  }
  else if ((DAT_100ac8c0 != '\0') && (DAT_100ac8c0 != '\x01')) {
    bVar3 = FUN_100435f0();
    if (CONCAT31(extraout_var_00,bVar3) != 0) {
      iVar5 = iVar5 + -0x76c;
    }
    if ((*(float *)(*(int *)((int)this + 4) + 0x1bc) < 100.0) && (-1 < iVar5)) {
      *(undefined4 *)(*(int *)((int)this + 4) + 0x1bc) = 0x42c80000;
      bVar3 = FUN_100435f0();
      if (CONCAT31(extraout_var_01,bVar3) != 0) {
        *(int *)((int)this + 0x4b8) = iVar5;
      }
      *(uint *)((int)this + 0x690) = *(uint *)((int)this + 0x690) | 0x10;
      pvVar1 = *(void **)(*(int *)((int)this + 4) + 0x208);
      EMIT_SOUND_DYN(pvVar1,pvVar1,3,s_weapons_items_wav_100993dc,0x3f800000,0x3f4ccccd,0,100);
      return;
    }
  }
  return;
}

/* 10055e00  FUN_10055e00  (236 bytes)
 * undefined FUN_10055e00(uint param_1, uint param_2)
 * called by: FUN_100559d0
 */
void __thiscall FUN_10055e00(void *this,uint param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  undefined4 *puVar3;
  undefined3 extraout_var_00;
  int iVar4;
  undefined3 extraout_var_01;
  int iVar5;
  
  iVar5 = 0;
  if (((*(int *)((int)this + 0x968) != 0) && (*(int *)(*(int *)((int)this + 0x968) + 0x78) == 0x10))
     && (uVar2 = FUN_1004ecd0(param_1,DAT_100b1d84), (char)uVar2 == '\0')) {
    if ((DAT_100ac8c0 == '\0') || (DAT_100ac8c0 == '\x01')) {
      if (param_1 == 0x18) {
        return;
      }
    }
    else if (param_1 == 0x18) {
      if (1 < *(byte *)((int)this + 0x68c)) {
        return;
      }
      *(byte *)((int)this + 0x68c) = *(byte *)((int)this + 0x68c) + 1;
    }
    bVar1 = FUN_100435f0();
    if (CONCAT31(extraout_var,bVar1) != 0) {
      puVar3 = get_weapon_info(param_1);
      iVar5 = *(int *)((int)this + 0x4b8) - puVar3[0x34];
    }
    bVar1 = FUN_100435f0();
    if (CONCAT31(extraout_var_00,bVar1) != 0) {
      if ((param_2 & 1) != 0) {
        iVar5 = iVar5 + -900;
      }
      if ((param_2 & 2) != 0) {
        iVar5 = iVar5 + -800;
      }
      if ((param_2 & 4) != 0) {
        iVar5 = iVar5 + -500;
      }
      if ((param_2 & 8) != 0) {
        iVar5 = iVar5 + -0x708;
      }
    }
    if (((-1 < iVar5) &&
        (iVar4 = CBasePlayer::PickUpWeapon(this,param_1,(undefined4 *)0x0,param_2,'\x01'),
        iVar4 != 0)) && (bVar1 = FUN_100435f0(), CONCAT31(extraout_var_01,bVar1) != 0)) {
      *(int *)((int)this + 0x4b8) = iVar5;
    }
  }
  return;
}

/* 10055ef0  FUN_10055ef0  (395 bytes)
 * undefined FUN_10055ef0(int param_1)
 * called by: CBasePlayer::Killed
 */
void __fastcall FUN_10055ef0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  iVar10 = *(int *)(param_1 + 0x968);
  if ((iVar10 != 0) && (*(int *)(iVar10 + 0x78) == 0x10)) {
    bVar7 = false;
    iVar8 = 0;
    piVar9 = (int *)(iVar10 + 0xc4);
    do {
      if (bVar7) goto LAB_10055f37;
      if (0 < *piVar9) {
        bVar7 = true;
      }
      iVar8 = iVar8 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar8 < 0x10);
    if (bVar7) {
LAB_10055f37:
      (*g_engfuncs.pfnRandomLong)(-100,100);
      (*g_engfuncs.pfnRandomLong)(-100,100);
      FUN_10066df0();
      piVar9 = CTSAmmoPack::CreateAmmoPack((int *)(iVar10 + 0xc4));
      fVar1 = gpGlobals->v_right[1];
      fVar2 = gpGlobals->v_right[2];
      iVar10 = piVar9[1];
      fVar3 = gpGlobals->v_forward[1];
      fVar4 = gpGlobals->v_forward[2];
      iVar8 = *(int *)(param_1 + 4);
      fVar5 = *(float *)(iVar8 + 0xc);
      fVar6 = *(float *)(iVar8 + 0x10);
      *(float *)(iVar10 + 8) =
           gpGlobals->v_forward[0] * 8.0 + *(float *)(iVar8 + 8) + gpGlobals->v_right[0] * 8.0;
      *(float *)(iVar10 + 0xc) = fVar3 * 8.0 + fVar5 + fVar1 * 8.0;
      *(float *)(iVar10 + 0x10) = fVar4 * 8.0 + fVar6 + fVar2 * 8.0;
      iVar10 = piVar9[1];
      *(undefined4 *)(iVar10 + 0x50) = DAT_1009f4a8;
      *(undefined4 *)(iVar10 + 0x54) = DAT_1009f4ac;
      *(undefined4 *)(iVar10 + 0x58) = DAT_1009f4b0;
      iVar10 = (*g_engfuncs.pfnRandomLong)(-300,300);
      *(float *)(piVar9[1] + 0x60) = (float)iVar10;
      iVar10 = (*g_engfuncs.pfnRandomLong)(-300,300);
      *(float *)(piVar9[1] + 100) = (float)iVar10;
    }
  }
  return;
}

/* 10056080  FUN_10056080  (1098 bytes)
 * undefined FUN_10056080(uint param_1)
 * called by: CBasePlayer::Killed, FUN_10056f20, FUN_100572a0, FUN_1005c680, FUN_1005ee60, pfnClientCommand
 */
void __thiscall FUN_10056080(void *this,uint param_1)

{
  short sVar1;
  CTSGun *this_00;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  void *this_01;
  int *piVar6;
  int *piVar7;
  float10 fVar8;
  void *pvVar9;
  undefined1 uVar10;
  char local_48;
  float local_3c;
  float local_38;
  undefined4 local_34;
  int local_30 [12];
  
  this_00 = *(CTSGun **)((int)this + 0x968);
  if (this_00 == (CTSGun *)0x0) {
    return;
  }
  if (*(int *)&this_00->field_0x78 != 0x10) {
    return;
  }
  local_48 = '\x01';
  if (param_1 == 0xfffffffe) {
    cVar2 = '\0';
LAB_100560be:
    local_48 = cVar2;
    param_1 = (uint)(byte)this_00->field_0xb8;
  }
  else {
    cVar2 = '\x01';
    if ((int)param_1 < 0) goto LAB_100560be;
  }
  if (param_1 == 0) {
    return;
  }
  if (0x3f < (int)param_1) {
    return;
  }
  piVar6 = (int *)(&this_00->field_0x104 + param_1 * 0x30);
  if ((&this_00->field_0x104)[param_1 * 0x30] == '\0') {
    return;
  }
  if (param_1 == 0x18) {
    if (*(int *)&this_00->field_0x58c == 1) {
      CTSGun::GrenadeIdle(this_00,(int *)0x1);
      goto LAB_100564b0;
    }
    if (*(int *)&this_00->field_0x588 < 1) goto LAB_100564b0;
    piVar6 = (int *)&this_00->field_0x584;
    piVar7 = local_30;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    local_30[1] = 1;
    CBasePlayer::ThrowWeapon(this,0x18,local_30,(float *)0x0,(float *)0x0);
    puVar3 = get_weapon_info(0x18);
    *(uint *)((int)this + 0x4c0) = *(int *)((int)this + 0x4c0) + (uint)*(byte *)((int)puVar3 + 0xca)
    ;
    if (*(int *)&this_00->field_0x588 < 2) {
      FUN_10049fb0(this_00,0x18,local_48);
    }
    else {
      *(int *)&this_00->field_0x588 = *(int *)&this_00->field_0x588 + -1;
      if (local_48 == '\0') {
        FUN_1004d7a0((int)this_00);
      }
    }
LAB_1005642f:
    this_01 = *(void **)(*(int *)((int)this + 4) + 0x208);
    pvVar9 = this_01;
  }
  else {
    puVar3 = get_weapon_info(param_1);
    uVar10 = (undefined1)param_1;
    if (*(char *)(puVar3 + 0x35) != '\0') {
      piVar7 = local_30;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      local_30[1] = 1;
      CBasePlayer::ThrowWeapon(this,uVar10,local_30,(float *)0x0,(float *)0x0);
      puVar3 = get_weapon_info(param_1);
      *(uint *)((int)this + 0x4c0) =
           *(int *)((int)this + 0x4c0) + (uint)*(byte *)((int)puVar3 + 0xca);
      if (*(int *)(&this_00->field_0x108 + param_1 * 0x30) < 2) {
        FUN_10049fb0(this_00,param_1,local_48);
      }
      else {
        *(int *)(&this_00->field_0x108 + param_1 * 0x30) =
             *(int *)(&this_00->field_0x108 + param_1 * 0x30) + -1;
        if (local_48 == '\0') {
          FUN_1004d7a0((int)this_00);
        }
      }
      goto LAB_1005642f;
    }
    puVar3 = get_weapon_info(param_1);
    if ((*(char *)(puVar3 + 0xd8) == '\x04') &&
       (puVar3 = get_weapon_info(param_1), *(short *)(puVar3 + 0x32) != -1)) {
      puVar3 = get_weapon_info(param_1);
      sVar1 = *(short *)(puVar3 + 0x32);
      uVar4 = (uint)sVar1;
      piVar6 = (int *)(&this_00->field_0x104 + uVar4 * 0x30);
      piVar7 = local_30;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      local_3c = 0.0;
      local_34 = 0;
      local_30[1] = *(int *)(&this_00->field_0x108 + param_1 * 0x30) / 2;
      iVar5 = 0;
      do {
        local_38 = (float)(int)((uint)(iVar5 == 0) * 8 + -4);
        CBasePlayer::ThrowWeapon(this,(char)sVar1,local_30,(float *)0x0,&local_3c);
        puVar3 = get_weapon_info(uVar4);
        iVar5 = iVar5 + 1;
        *(uint *)((int)this + 0x4c0) =
             *(int *)((int)this + 0x4c0) + (uint)*(byte *)((int)puVar3 + 0xca);
      } while (iVar5 < 2);
      FUN_10049fb0(this_00,param_1,local_48);
      FUN_10049fb0(this_00,uVar4,local_48);
      goto LAB_1005642f;
    }
    puVar3 = get_weapon_info(param_1);
    if ((*(short *)((int)puVar3 + 0xc6) != -1) &&
       (puVar3 = get_weapon_info(param_1),
       (&this_00->field_0x104)[*(short *)((int)puVar3 + 0xc6) * 0x30] != '\0')) {
      piVar7 = local_30;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      local_30[1] = *(int *)(&this_00->field_0x108 + param_1 * 0x30);
      puVar3 = get_weapon_info(param_1);
      *(undefined4 *)(&this_00->field_0x108 + param_1 * 0x30) =
           *(undefined4 *)(&this_00->field_0x124 + *(short *)((int)puVar3 + 0xc6) * 0x30);
      CBasePlayer::ThrowWeapon(this,uVar10,local_30,(float *)0x0,(float *)0x0);
      puVar3 = get_weapon_info(param_1);
      *(uint *)((int)this + 0x4c0) =
           *(int *)((int)this + 0x4c0) + (uint)*(byte *)((int)puVar3 + 0xca);
      puVar3 = get_weapon_info(param_1);
      FUN_10049fb0(this_00,(int)*(short *)((int)puVar3 + 0xc6),local_48);
      FUN_1004d7a0((int)this_00);
      iVar5 = FUN_1004a4c0(this_00,param_1);
      if (iVar5 != 0) {
        (*this_00->vtable[0x41])();
      }
      goto LAB_1005642f;
    }
    CBasePlayer::ThrowWeapon(this,uVar10,piVar6,(float *)0x0,(float *)0x0);
    puVar3 = get_weapon_info(param_1);
    *(uint *)((int)this + 0x4c0) = *(int *)((int)this + 0x4c0) + (uint)*(byte *)((int)puVar3 + 0xca)
    ;
    FUN_10049fb0(this_00,param_1,local_48);
    this_01 = *(void **)((int)this + 4);
    pvVar9 = *(void **)((int)this_01 + 0x208);
  }
  EMIT_SOUND_DYN(this_01,pvVar9,3,s_weapons_weapondrop_wav_100993f0,0x3f800000,0x3f4ccccd,0,100);
LAB_100564b0:
  fVar8 = FUN_100436e0((int)this);
  FUN_100557b0(this,(float)fVar8);
  return;
}

/* 10056890  FUN_10056890  (77 bytes)
 * undefined FUN_10056890(int * param_1)
 */
void __fastcall FUN_10056890(int *param_1)

{
  if ((*(int *)(param_1[1] + 0x244) == 0) && ((*(byte *)(param_1 + 0x1dc) & 0x20) != 0)) {
    if (gpGlobals->time <= (float)param_1[0x54]) {
      CBasePlayer::UsePowerUp(param_1);
    }
    param_1[0x54] = (int)(gpGlobals->time + 0.3);
  }
  return;
}

/* 100568e0  FUN_100568e0  (428 bytes)
 * undefined FUN_100568e0(int * param_1)
 * called by: CBasePlayer::PreThink
 */
void __fastcall FUN_100568e0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1[0x1a8] == 0) {
    return;
  }
  uVar1 = param_1[0x1a7];
  if (uVar1 == 0) {
    iVar3 = (**(code **)(*param_1 + 0x94))();
    if (iVar3 != 0) {
      return;
    }
    if (((DAT_100ac8c0 == '\0') || (DAT_100ac8c0 == '\x01')) &&
       (((param_1[0x1a8] & 1U) == 0 || (4 < param_1[0x1aa])))) {
      piVar4 = CTSPowerUp::CreatePowerUp(param_1[0x1a8],-1);
      iVar3 = param_1[1];
      iVar2 = piVar4[1];
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
    }
  }
  else {
    if ((uVar1 & 9) == 0) {
      if ((uVar1 & 0x100) != 0) {
        *(undefined4 *)(param_1[1] + 0x11c) = 0x3e19999a;
      }
    }
    else if (((float)param_1[0x1a9] < gpGlobals->time) ||
            (iVar3 = (**(code **)(*param_1 + 0x94))(), iVar3 == 0)) {
      FUN_10057610(param_1);
    }
    else if ((param_1[0x1a7] & 8U) == 0) {
      if ((param_1[0x1a7] & 1U) != 0) {
        *(undefined1 *)((int)param_1 + 0x15d) = 0;
        param_1[0x5a] = 0x3eb33333;
        param_1[0x59] = 0x3f0ccccd;
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0x15d) = 1;
      param_1[0x5a] = 0x3e19999a;
      param_1[0x59] = 0x3f19999a;
    }
    if ((gpGlobals->time <= (float)param_1[0x1a9]) &&
       (iVar3 = (**(code **)(*param_1 + 0x94))(), iVar3 != 0)) {
      return;
    }
    iVar3 = (**(code **)(*param_1 + 0x94))();
    if (((iVar3 == 0) && ((DAT_100ac8c0 == '\0' || (DAT_100ac8c0 == '\x01')))) &&
       (((param_1[0x1a7] & 1U) == 0 || (4 < param_1[0x1aa])))) {
      piVar4 = CTSPowerUp::CreatePowerUp(param_1[0x1a7],-1);
      iVar3 = param_1[1];
      iVar2 = piVar4[1];
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
    }
    if ((param_1[0x1a7] & 0x100U) != 0) {
      *(undefined4 *)(param_1[1] + 0x11c) = 0x3f800000;
    }
  }
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  return;
}

/* 10056b60  FUN_10056b60  (42 bytes)
 * undefined FUN_10056b60(float param_1)
 * called by: FUN_1004de10
 */
void __thiscall FUN_10056b60(void *this,float param_1)

{
  uint *puVar1;
  
  if ((*(uint *)(*(int *)((int)this + 4) + 0x1a4) & 0x200) != 0) {
    *(float *)((int)this + 0x460) = param_1 + gpGlobals->time;
    puVar1 = (uint *)(*(int *)((int)this + 4) + 0x250);
    *puVar1 = *puVar1 | 1;
  }
  return;
}

/* 10056bd0  FUN_10056bd0  (500 bytes)
 * undefined FUN_10056bd0(float * param_1, undefined4 * param_2, float param_3, int param_4)
 * called by: FUN_10056dd0
 */
void __cdecl FUN_10056bd0(float *param_1,undefined4 *param_2,float param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float local_64;
  int local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float fStack_3c;
  undefined4 local_38 [4];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  pfVar4 = param_1;
  local_64 = param_3;
  local_60 = param_4;
  param_3 = 1e+06;
  local_44 = ((float)param_2[5] - *param_1) + ((float)param_2[5] - *param_1);
  local_40 = ((float)param_2[6] - param_1[1]) + ((float)param_2[6] - param_1[1]);
  local_5c = local_44 + *param_1;
  local_58 = local_40 + param_1[1];
  local_54 = ((float)param_2[7] - param_1[2]) + ((float)param_2[7] - param_1[2]) + param_1[2];
  local_50 = local_5c;
  local_4c = local_58;
  local_48 = local_54;
  FUN_10067850();
  if (1.0 <= fStack_28) {
    param_1 = (float *)0x0;
    do {
      pfVar1 = (float *)(&local_64)[(int)param_1];
      param_4 = 0;
      do {
        fVar2 = (&local_64)[param_4];
        iVar5 = 0;
        do {
          local_44 = local_5c + *pfVar1;
          local_40 = local_58 + *(float *)((int)fVar2 + 4);
          fStack_3c = local_54 + *(float *)((int)(&local_64)[iVar5] + 8);
          FUN_10067850();
          if ((fStack_28 < 1.0) &&
             (fVar3 = SQRT((fStack_24 - *pfVar4) * (fStack_24 - *pfVar4) +
                           (fStack_20 - pfVar4[1]) * (fStack_20 - pfVar4[1]) +
                           (fStack_1c - pfVar4[2]) * (fStack_1c - pfVar4[2])), fVar3 < param_3)) {
            puVar7 = local_38;
            puVar8 = param_2;
            for (iVar6 = 0xe; param_3 = fVar3, iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 2);
        param_4 = param_4 + 1;
      } while (param_4 < 2);
      param_1 = (float *)((int)param_1 + 1);
    } while ((int)param_1 < 2);
    return;
  }
  puVar7 = local_38;
  for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_2 = *puVar7;
    puVar7 = puVar7 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

/* 10056dd0  FUN_10056dd0  (321 bytes)
 * undefined FUN_10056dd0(void)
 * called by: FUN_1004c090, FUN_1004c6c0, FUN_10056f20, FUN_100572a0
 */
void FUN_10056dd0(void)

{
  edict_t *peVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_stack_0000001c;
  int in_stack_00000020;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_10067850();
  if ((float)in_stack_0000001c[4] < 1.0) {
    return;
  }
  FUN_10067870();
  if ((float)in_stack_0000001c[4] < 1.0) {
    peVar1 = (edict_t *)in_stack_0000001c[0xc];
    if ((((peVar1 != (edict_t *)0x0) ||
         (peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar1 != (edict_t *)0x0)) &&
        (peVar1->pvPrivateData != (int *)0x0)) &&
       (iVar2 = (**(code **)(*(int *)peVar1->pvPrivateData + 0x98))(), iVar2 == 0)) {
      return;
    }
    if (in_stack_00000020 == 3) {
      uStack_30 = 0x41800000;
      uStack_2c = 0x41800000;
      uStack_28 = 0x41900000;
      puVar4 = &uStack_30;
      uStack_18 = 0xc1800000;
      uStack_14 = 0xc1800000;
      uStack_10 = 0xc1900000;
      puVar3 = &uStack_18;
    }
    else {
      uStack_24 = 0x41800000;
      uStack_20 = 0x41800000;
      uStack_1c = 0x42100000;
      puVar4 = &uStack_24;
      uStack_c = 0xc1800000;
      uStack_8 = 0xc1800000;
      uStack_4 = 0xc2100000;
      puVar3 = &uStack_c;
    }
    FUN_10056bd0((float *)&stack0x00000004,in_stack_0000001c,(float)puVar3,(int)puVar4);
    return;
  }
  return;
}

/* 10056f20  FUN_10056f20  (882 bytes)
 * float FUN_10056f20(int * param_1, float param_2, undefined4 param_3, undefined4 param_4, float param_5, float param_6, float param_7)
 * called by: FUN_1004de10, FUN_1005cd00
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
FUN_10056f20(int *param_1,float param_2,float param_3,undefined4 param_4,float param_5,float param_6
            ,float param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  void *this;
  int *this_00;
  float in_stack_0000001c;
  float in_stack_00000030;
  int *piStack00000034;
  char in_stack_00000038;
  char cStack0000003c;
  char in_stack_00000040;
  char cStack00000044;
  undefined1 auStack_34 [12];
  float local_28;
  edict_t *local_8;
  
  if (in_stack_00000030 != -NAN) {
    CTSAnimation::Animate((CTSAnimation *)(param_1 + 0x9d),param_1,(int)in_stack_00000030);
  }
  FUN_1000a540(&stack0xffffffa4,&param_5);
  FUN_1000a540(&stack0xffffff98,&param_2);
  FUN_10056dd0();
  if (1.0 <= local_28) {
    return 0.0;
  }
  if ((local_8 == (edict_t *)0x0) &&
     (local_8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), local_8 == (edict_t *)0x0)) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = local_8->pvPrivateData;
  }
  if (this_00 != (int *)0x0) {
    iVar5 = this_00[1];
    if (*(float *)(iVar5 + 0x16c) == 0.0) {
      return 0.0;
    }
    if ((*(uint *)(iVar5 + 0x1a4) & 0x2000000) == 0) {
      if (*(char *)(iVar5 + 0x118) < '\0') {
        return 0.0;
      }
      piStack00000034 = this_00;
      iVar5 = (**(code **)(*this_00 + 0xa8))();
      if (iVar5 == 0) {
        if (cStack0000003c != '\0') {
          return 0.0;
        }
      }
      else if (((cStack00000044 != '\0') || (_DAT_10093a90 == 0.0)) &&
              (iVar5 = (**(code **)(*DAT_1009f494 + 200))(), iVar5 == 1)) {
        return 0.0;
      }
      iVar5 = (**(code **)(*this_00 + 0xa8))();
      if (iVar5 != 0) {
        uVar6 = FUN_100439e0(param_1,this_00,in_stack_00000030,auStack_34);
        if ((char)uVar6 != '\0') {
          return 0.0;
        }
        if (((in_stack_00000038 != '\0') && ((float)this_00[0x1a5] < gpGlobals->time)) &&
           (*(char *)((int)this_00 + 0x731) == '\0')) {
          FUN_10056080(this_00,0xfffffffe);
        }
        if ((in_stack_00000040 != '\0') && (30.0 < in_stack_00000030)) {
          iVar5 = param_1[1];
          iVar1 = this_00[1];
          _cStack0000003c =
               SQRT(*(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28) +
                    *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                    *(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20));
          fVar2 = *(float *)(iVar1 + 8) - *(float *)(iVar5 + 8);
          fVar4 = *(float *)(iVar1 + 0xc) - *(float *)(iVar5 + 0xc);
          in_stack_0000001c = *(float *)(iVar1 + 0x10) - *(float *)(iVar5 + 0x10);
          fVar3 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + in_stack_0000001c * in_stack_0000001c);
          if (fVar3 == 0.0) {
            fVar2 = 0.0;
            fVar4 = 0.0;
            in_stack_0000001c = 1.0;
          }
          else {
            _cStack00000044 = 1.0 / fVar3;
            fVar2 = fVar2 * _cStack00000044;
            fVar4 = fVar4 * _cStack00000044;
            in_stack_0000001c = in_stack_0000001c * _cStack00000044;
          }
          param_3 = fVar2 * _cStack0000003c;
          param_6 = param_3 + *(float *)(iVar1 + 0x20);
          param_7 = fVar4 * _cStack0000003c + *(float *)(iVar1 + 0x24);
          in_stack_0000001c = in_stack_0000001c * _cStack0000003c + *(float *)(iVar1 + 0x28);
          *(float *)(iVar1 + 0x20) = param_6;
          *(float *)(iVar1 + 0x24) = param_7;
          *(float *)(iVar1 + 0x28) = in_stack_0000001c;
          *(undefined4 *)(this_00[1] + 0x28) = 0x436b0000;
        }
        uVar6 = *(undefined4 *)(this_00[1] + 0x208);
        iVar5 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        EMIT_SOUND_DYN(this,uVar6,4,s_player_kungfuhit_wav_10098260,0x3f800000,0x3f4ccccd,0,
                       iVar5 + 0x5f);
      }
      DAT_100cbf11 = 1;
      FUN_1006a2f0();
      iVar5 = *this_00;
      FUN_1000a540(&stack0xffffffa8,(undefined4 *)&stack0x00000020);
      (**(code **)(iVar5 + 0x34))();
      FUN_1006a310(param_1[1],param_1[1]);
      DAT_100cbf11 = 0;
      return param_7;
    }
    return 0.0;
  }
  return 0.0;
}

/* 100572a0  FUN_100572a0  (878 bytes)
 * int * FUN_100572a0(float param_1, undefined4 param_2, undefined4 param_3, float param_4, float param_5, float param_6)
 * called by: CTSGun::AlternateAttack
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall
FUN_100572a0(void *this,float param_1,undefined4 param_2,undefined4 param_3,float param_4,
            float param_5,float param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  void *this_00;
  int *this_01;
  float in_stack_0000002c;
  int in_stack_00000030;
  char in_stack_00000034;
  float in_stack_00000038;
  char in_stack_0000003c;
  float in_stack_00000040;
  char in_stack_00000044;
  undefined4 uStack_6c;
  int *local_38 [4];
  float local_28;
  edict_t *local_8;
  
  if (in_stack_00000030 != -1) {
    CTSAnimation::Animate((CTSAnimation *)((int)this + 0x274),this,in_stack_00000030);
  }
  FUN_1000a540(&stack0xffffffa0,&param_4);
  FUN_1000a540(&uStack_6c,&param_1);
  FUN_10056dd0();
  if (1.0 <= local_28) {
    return (int *)0x0;
  }
  if ((local_8 == (edict_t *)0x0) &&
     (local_8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), local_8 == (edict_t *)0x0)) {
    this_01 = (int *)0x0;
  }
  else {
    this_01 = local_8->pvPrivateData;
  }
  if (this_01 != (int *)0x0) {
    iVar6 = this_01[1];
    if (*(float *)(iVar6 + 0x16c) == 0.0) {
      return (int *)0x0;
    }
    if ((*(uint *)(iVar6 + 0x1a4) & 0x2000000) == 0) {
      if (*(char *)(iVar6 + 0x118) < '\0') {
        return (int *)0x0;
      }
      local_38[0] = this_01;
      iVar6 = (**(code **)(*this_01 + 0xa8))();
      if (iVar6 == 0) {
        if (in_stack_0000003c != '\0') {
          return (int *)0x0;
        }
      }
      else if (((in_stack_00000044 != '\0') || (_DAT_10093a90 == 0.0)) &&
              (iVar6 = (**(code **)(*DAT_1009f494 + 200))(), iVar6 == 1)) {
        return (int *)0x0;
      }
      iVar6 = (**(code **)(*this_01 + 0xa8))();
      if (iVar6 != 0) {
        uVar7 = FUN_100439e0(this,this_01,in_stack_0000002c,local_38);
        if ((char)uVar7 != '\0') {
          return (int *)0x0;
        }
        if (((in_stack_00000034 != '\0') && ((float)this_01[0x1a5] < gpGlobals->time)) &&
           (*(char *)((int)this_01 + 0x731) == '\0')) {
          FUN_10056080(this_01,0xfffffffe);
        }
        if ((in_stack_0000003c != '\0') && (30.0 < in_stack_0000002c)) {
          iVar6 = *(int *)((int)this + 4);
          iVar1 = this_01[1];
          in_stack_00000038 =
               SQRT(*(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28) +
                    *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                    *(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20));
          fVar2 = *(float *)(iVar1 + 8) - *(float *)(iVar6 + 8);
          fVar5 = *(float *)(iVar1 + 0xc) - *(float *)(iVar6 + 0xc);
          fVar4 = *(float *)(iVar1 + 0x10) - *(float *)(iVar6 + 0x10);
          fVar3 = SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4);
          if (fVar3 == 0.0) {
            fVar2 = 0.0;
            fVar5 = 0.0;
            param_6 = 1.0;
          }
          else {
            in_stack_00000040 = 1.0 / fVar3;
            fVar2 = fVar2 * in_stack_00000040;
            fVar5 = fVar5 * in_stack_00000040;
            param_6 = fVar4 * in_stack_00000040;
          }
          param_1 = fVar2 * in_stack_00000038;
          param_4 = param_1 + *(float *)(iVar1 + 0x20);
          param_5 = fVar5 * in_stack_00000038 + *(float *)(iVar1 + 0x24);
          param_6 = param_6 * in_stack_00000038 + *(float *)(iVar1 + 0x28);
          *(float *)(iVar1 + 0x20) = param_4;
          *(float *)(iVar1 + 0x24) = param_5;
          *(float *)(iVar1 + 0x28) = param_6;
          *(undefined4 *)(this_01[1] + 0x28) = 0x436b0000;
        }
        uVar7 = *(undefined4 *)(this_01[1] + 0x208);
        iVar6 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        uStack_6c = 0x100575b8;
        EMIT_SOUND_DYN(this_00,uVar7,4,s_player_kungfuhit_wav_10098260,0x3f800000,0x3f4ccccd,0,
                       iVar6 + 0x5f);
      }
      DAT_100cbf12 = 1;
      FUN_1006a2f0();
      iVar6 = *this_01;
      FUN_1000a540(&stack0xffffffa0,(undefined4 *)&stack0x0000001c);
      uStack_6c = 0x100575ec;
      (**(code **)(iVar6 + 0x34))();
      FUN_1006a310(*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 4));
      DAT_100cbf12 = 0;
      return (int *)0x0;
    }
    return (int *)0x0;
  }
  return (int *)0x0;
}

/* 10057610  FUN_10057610  (178 bytes)
 * undefined FUN_10057610(void * param_1)
 * called by: FUN_100568e0
 */
void __fastcall FUN_10057610(void *param_1)

{
  void *this;
  int *piVar1;
  int iVar2;
  
  FUN_10055220(param_1,0.0,0);
  *(undefined4 *)((int)param_1 + 0x168) = 0;
  *(undefined4 *)((int)param_1 + 0x164) = 0;
  *(undefined1 *)((int)param_1 + 0x15d) = 0;
  iVar2 = 1;
  if (0 < gpGlobals->maxClients) {
    piVar1 = (int *)((int)param_1 + 0x170);
    do {
      this = (void *)*piVar1;
      if (this != (void *)0x0) {
        if (*(float *)((int)this + 0x164) == 0.0) {
          FUN_10055220(this,0.0,0);
          *(undefined1 *)(*piVar1 + 0x15d) = 0;
        }
        *piVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 <= gpGlobals->maxClients);
  }
  iVar2 = 0;
  if ('\0' < *(char *)((int)param_1 + 0x270)) {
    piVar1 = (int *)((int)param_1 + 0x1f0);
    do {
      if (*piVar1 != 0) {
        *(undefined4 *)(*(int *)(*piVar1 + 4) + 0x254) = 0;
        *piVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(char *)((int)param_1 + 0x270));
  }
  *(undefined1 *)((int)param_1 + 0x270) = 0;
  return;
}

/* 100576d0  FUN_100576d0  (1516 bytes)
 * undefined FUN_100576d0(int * param_1)
 * called by: CBasePlayer::PreThink
 */
void __fastcall FUN_100576d0(int *param_1)

{
  int iVar1;
  void *this;
  edict_t *peVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  
  if (((float)param_1[0x59] != 0.0) && ((float)param_1[0x58] <= gpGlobals->time)) {
    iVar6 = 1;
    bVar3 = false;
    param_1[0x58] = (int)(gpGlobals->time + 0.5);
    if (0 < gpGlobals->maxClients) {
      piVar7 = param_1 + 0x5c;
      do {
        if (bVar3) {
          return;
        }
        if (*piVar7 == 0) {
LAB_1005776b:
          piVar4 = (int *)UTIL_PlayerByIndex(iVar6);
          if ((((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 0xa8))(), iVar5 != 0)) &&
              (param_1 != piVar4)) &&
             (((float)piVar4[0x59] == 0.0 || ((float)piVar4[0x5a] != (float)param_1[0x5a])))) {
            iVar5 = piVar4[1];
            iVar1 = param_1[1];
            fStack_48 = *(float *)(iVar5 + 0x17c) + *(float *)(iVar5 + 0x10);
            fStack_4c = *(float *)(iVar5 + 0x178) + *(float *)(iVar5 + 0xc);
            fStack_50 = *(float *)(iVar5 + 8) + *(float *)(iVar5 + 0x174);
            fStack_3c = *(float *)(iVar1 + 0x17c) + *(float *)(iVar1 + 0x10);
            fStack_40 = *(float *)(iVar1 + 0x178) + *(float *)(iVar1 + 0xc);
            fStack_44 = *(float *)(iVar1 + 0x174) + *(float *)(iVar1 + 8);
            FUN_10067810(&fStack_44,&fStack_50,1,1,*(undefined4 *)(iVar1 + 0x208),auStack_38);
            if (1.0 <= fStack_28) {
              if (((float)piVar4[0x59] == 0.0) || ((float)param_1[0x5a] <= (float)piVar4[0x5a])) {
                *piVar7 = (int)piVar4;
              }
              else {
                bVar3 = true;
                *piVar7 = 0;
              }
            }
          }
        }
        else if (*(float *)(*piVar7 + 0x164) != 0.0) {
          *piVar7 = 0;
          goto LAB_1005776b;
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar6 <= gpGlobals->maxClients);
      if (bVar3) {
        return;
      }
    }
    FUN_10055220(param_1,(float)param_1[0x59],*(undefined1 *)((int)param_1 + 0x15d));
    iVar6 = 1;
    if (0 < gpGlobals->maxClients) {
      piVar7 = param_1 + 0x5c;
      do {
        this = (void *)*piVar7;
        if (this != (void *)0x0) {
          if ((*(float *)((int)this + 0x164) == 0.0) ||
             (*(float *)((int)this + 0x168) != (float)param_1[0x5a])) {
            FUN_10055220(this,(float)param_1[0x5a],0);
            *(undefined1 *)(*piVar7 + 0x15d) = *(undefined1 *)((int)param_1 + 0x15d);
          }
          else {
            *piVar7 = 0;
          }
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar6 <= gpGlobals->maxClients);
    }
    if ((char)param_1[0x9c] < ' ') {
      iVar6 = UTIL_FindEntityByClassname(0,s_grenade_10097ea4);
      while (((iVar6 != 0 &&
              (peVar2 = *(edict_t **)(*(int *)(iVar6 + 4) + 0x208), peVar2 != (edict_t *)0x0)) &&
             (iVar5 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2), iVar5 != 0))) {
        iVar5 = FUN_10063ca0((int)(param_1 + 0x7c),0x20,iVar6);
        if (iVar5 == -1) {
          iVar5 = param_1[1];
          fStack_3c = *(float *)(iVar5 + 0x17c) + *(float *)(iVar5 + 0x10);
          fStack_40 = *(float *)(iVar5 + 0x178) + *(float *)(iVar5 + 0xc);
          fStack_44 = *(float *)(iVar5 + 8) + *(float *)(iVar5 + 0x174);
          FUN_10067810(&fStack_44,*(int *)(iVar6 + 4) + 8,1,1,*(undefined4 *)(iVar5 + 0x208),
                       auStack_38);
          if (1.0 <= fStack_28) {
            *(int *)(*(int *)(iVar6 + 4) + 0x254) = param_1[0x5a];
            if ((char)param_1[0x9c] < ' ') {
              param_1[(char)param_1[0x9c] + 0x7c] = iVar6;
              *(char *)(param_1 + 0x9c) = (char)param_1[0x9c] + '\x01';
            }
          }
        }
        iVar6 = UTIL_FindEntityByClassname(iVar6,s_grenade_10097ea4);
      }
      iVar6 = UTIL_FindEntityByClassname(0,&DAT_100983c4);
      while (((iVar6 != 0 &&
              (peVar2 = *(edict_t **)(*(int *)(iVar6 + 4) + 0x208), peVar2 != (edict_t *)0x0)) &&
             (iVar5 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2), iVar5 != 0))) {
        iVar5 = *(int *)(iVar6 + 4);
        if ((((*(float *)(iVar5 + 0x20) != DAT_1009f4a8) ||
             (*(float *)(iVar5 + 0x24) != DAT_1009f4ac)) ||
            (*(float *)(iVar5 + 0x28) != DAT_1009f4b0)) &&
           (iVar5 = FUN_10063ca0((int)(param_1 + 0x7c),0x20,iVar6), iVar5 == -1)) {
          iVar5 = param_1[1];
          fStack_3c = *(float *)(iVar5 + 0x17c) + *(float *)(iVar5 + 0x10);
          fStack_40 = *(float *)(iVar5 + 0x178) + *(float *)(iVar5 + 0xc);
          fStack_44 = *(float *)(iVar5 + 0x174) + *(float *)(iVar5 + 8);
          FUN_10067810(&fStack_44,*(int *)(iVar6 + 4) + 8,1,1,*(undefined4 *)(iVar5 + 0x208),
                       auStack_38);
          if (1.0 <= fStack_28) {
            *(int *)(*(int *)(iVar6 + 4) + 0x254) = param_1[0x5a];
            if ((char)param_1[0x9c] < ' ') {
              param_1[(char)param_1[0x9c] + 0x7c] = iVar6;
              *(char *)(param_1 + 0x9c) = (char)param_1[0x9c] + '\x01';
            }
          }
        }
        iVar6 = UTIL_FindEntityByClassname(iVar6,&DAT_100983c4);
      }
      iVar6 = UTIL_FindEntityByClassname(0,s_WorldGun_100983b8);
      while (((iVar6 != 0 &&
              (peVar2 = *(edict_t **)(*(int *)(iVar6 + 4) + 0x208), peVar2 != (edict_t *)0x0)) &&
             (iVar5 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2), iVar5 != 0))) {
        iVar5 = *(int *)(iVar6 + 4);
        if ((((*(float *)(iVar5 + 0x20) != DAT_1009f4a8) ||
             (*(float *)(iVar5 + 0x24) != DAT_1009f4ac)) ||
            (*(float *)(iVar5 + 0x28) != DAT_1009f4b0)) &&
           (iVar5 = FUN_10063ca0((int)(param_1 + 0x7c),0x20,iVar6), iVar5 == -1)) {
          iVar5 = param_1[1];
          fStack_3c = *(float *)(iVar5 + 0x17c) + *(float *)(iVar5 + 0x10);
          fStack_40 = *(float *)(iVar5 + 0x178) + *(float *)(iVar5 + 0xc);
          fStack_44 = *(float *)(iVar5 + 0x174) + *(float *)(iVar5 + 8);
          FUN_10067810(&fStack_44,*(int *)(iVar6 + 4) + 8,1,1,*(undefined4 *)(iVar5 + 0x208),
                       auStack_38);
          if (1.0 <= fStack_28) {
            *(int *)(*(int *)(iVar6 + 4) + 0x254) = param_1[0x5a];
            if ((char)param_1[0x9c] < ' ') {
              param_1[(char)param_1[0x9c] + 0x7c] = iVar6;
              *(char *)(param_1 + 0x9c) = (char)param_1[0x9c] + '\x01';
            }
          }
        }
        iVar6 = UTIL_FindEntityByClassname(iVar6,s_WorldGun_100983b8);
      }
    }
  }
  return;
}

/* 10057cc0  FUN_10057cc0  (76 bytes)
 * undefined FUN_10057cc0(int param_1)
 * called by: CBasePlayer::TraceAttack
 */
void __cdecl FUN_10057cc0(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &PTR_BreakableRespawn_10085788;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10057d10  FUN_10057d10  (86 bytes)
 * undefined FUN_10057d10(float * param_1, float param_2)
 * called by: FUN_100581d0, FUN_10058270, FUN_100582d0, FUN_10058680
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10057d10(float *param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = FUN_1002fbf0((int)param_1);
  _DAT_100cbdfc = (float)fVar1;
  if ((fVar1 != (float10)0.0) && (param_2 < _DAT_100cbdfc)) {
    _DAT_100cbd34 = param_2 / _DAT_100cbdfc;
    *param_1 = _DAT_100cbd34 * *param_1;
    param_1[1] = _DAT_100cbd34 * param_1[1];
  }
  return;
}

/* 10057d70  FUN_10057d70  (558 bytes)
 * undefined FUN_10057d70(void)
 * called by: FUN_10058400
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10057d70(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined1 local_44 [68];
  
  if ((-60.0 <= *(float *)(DAT_100a1f2c + 0x44)) && (*(float *)(DAT_100a1f2c + 0x44) <= 60.0)) {
    DAT_100cbe90 = *(float *)(DAT_100a1f2c + 0x44) < -30.0;
    DAT_100cbd24 = *(int *)(DAT_100a1f2c + 0xbc);
    *(undefined4 *)(DAT_100a1f2c + 0xbc) = 2;
    _DAT_100cbcb4 = *(float *)(DAT_100a1f2c + 0x38);
    _DAT_100cbcb8 = *(float *)(DAT_100a1f2c + 0x3c);
    _DAT_100cbcbc =
         (float)(-(DAT_100cbe90 != '\0') & 0x28) + *(float *)(DAT_100a1f2c + 0x88) +
         *(float *)(DAT_100a1f2c + 0x40);
    _DAT_100cbd28 = *(float *)(DAT_100a1f2c + 0x14) * 64.0 + _DAT_100cbcb4;
    _DAT_100cbd2c = *(float *)(DAT_100a1f2c + 0x18) * 64.0 + _DAT_100cbcb8;
    _DAT_100cbd30 = _DAT_100cbcbc;
    puVar1 = (undefined4 *)
             (**(code **)(DAT_100a1f2c + 0x4f580))
                       (local_44,&DAT_100cbcb4,&DAT_100cbd28,0,0xffffffff);
    puVar3 = &DAT_100cbd60;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    if (_DAT_100cbd70 == 1.0) {
      _DAT_100cbcbc =
           *(float *)(DAT_100a1f2c + 0x4f4fc + DAT_100cbd24 * 0xc) + *(float *)(DAT_100a1f2c + 0x40)
      ;
      _DAT_100cbd28 = *(float *)(DAT_100a1f2c + 0x14) * 32.0 + _DAT_100cbcb4;
      _DAT_100cbd2c = *(float *)(DAT_100a1f2c + 0x18) * 32.0 + _DAT_100cbcb8;
      _DAT_100cbd30 = _DAT_100cbcbc;
      *(undefined4 *)(DAT_100a1f2c + 0xbc) = 2;
      puVar1 = (undefined4 *)
               (**(code **)(DAT_100a1f2c + 0x4f580))
                         (local_44,&DAT_100cbcb4,&DAT_100cbd28,0,0xffffffff);
      puVar3 = &DAT_100cbd60;
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      }
      if ((_DAT_100cbd70 != 1.0) &&
         (fVar4 = FUN_1002fbf0(DAT_100a1f2c + 0x5c),
         fVar4 < (float10)*(float *)(DAT_100a1f2c + 500) * (float10)0.5)) {
        *(undefined4 *)(DAT_100a1f2c + 0xe0) = 0xffffffff;
        *(float *)(DAT_100a1f2c + 100) =
             *(float *)(DAT_100a1f2c + 0x10) * 16.0 * 100.0 + *(float *)(DAT_100a1f2c + 100);
        FUN_100310f0();
      }
    }
    *(int *)(DAT_100a1f2c + 0xbc) = DAT_100cbd24;
    FUN_10032900(1);
    FUN_10031f40();
    return;
  }
  return;
}

/* 10057fa0  FUN_10057fa0  (425 bytes)
 * undefined FUN_10057fa0(void)
 * called by: FUN_10058400
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10057fa0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_44 [68];
  
  iVar5 = DAT_100a1f2c;
  DAT_100cbcc0 = *(undefined4 *)(DAT_100a1f2c + 0x38);
  DAT_100cbcc4 = *(undefined4 *)(DAT_100a1f2c + 0x3c);
  _DAT_100cbcc8 = *(undefined4 *)(DAT_100a1f2c + 0x40);
  if (*(int *)(DAT_100a1f2c + 0xe0) != -1) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 * 4;
      iVar2 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      _DAT_100cbcb0 = iVar3;
      *(float *)(&DAT_100cbcbc + iVar3 * 4) =
           (*(float *)(iVar5 + 0x4f500 + iVar1) - *(float *)(iVar5 + 0x4f4f4 + iVar2)) +
           *(float *)(&DAT_100cbcbc + iVar3 * 4);
    } while (iVar3 < 3);
  }
  puVar4 = (undefined4 *)
           (**(code **)(iVar5 + 0x4f580))(local_44,&DAT_100cbcc0,&DAT_100cbcc0,0,0xffffffff);
  iVar5 = DAT_100a1f2c;
  puVar6 = &DAT_100cbdb8;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  if ((*(byte *)(iVar5 + 0x45476) & 4) != 0) {
    *(undefined4 *)(iVar5 + 0xbc) = 1;
    *(undefined4 *)(DAT_100a1f2c + 0x88) = 0x41800000;
    *(uint *)(DAT_100a1f2c + 0x208) = *(uint *)(DAT_100a1f2c + 0x208) & 0xfffffff7;
    return;
  }
  if (DAT_100cbdbc != 0) {
    *(undefined4 *)(iVar5 + 0xbc) = 1;
    *(uint *)(DAT_100a1f2c + 0xb8) = *(uint *)(DAT_100a1f2c + 0xb8) | 0x4000;
    return;
  }
  *(undefined4 *)(iVar5 + 0xbc) = 0;
  puVar4 = (undefined4 *)
           (**(code **)(DAT_100a1f2c + 0x4f580))(local_44,&DAT_100cbcc0,&DAT_100cbcc0,0,0xffffffff);
  puVar6 = &DAT_100cbdb8;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  if (DAT_100cbdbc != 0) {
    *(undefined4 *)(DAT_100a1f2c + 0xbc) = 1;
    return;
  }
  *(undefined4 *)(DAT_100a1f2c + 0x88) = 0x41e00000;
  *(undefined4 *)(DAT_100a1f2c + 0x38) = DAT_100cbcc0;
  *(undefined4 *)(DAT_100a1f2c + 0x3c) = DAT_100cbcc4;
  *(undefined4 *)(DAT_100a1f2c + 0x40) = _DAT_100cbcc8;
  FUN_10032900(1);
  FUN_10031f40();
  *(uint *)(DAT_100a1f2c + 0x208) = *(uint *)(DAT_100a1f2c + 0x208) & 0xfffffff7;
  return;
}

/* 10058150  FUN_10058150  (127 bytes)
 * undefined FUN_10058150(void)
 * called by: FUN_10058400
 */
void FUN_10058150(void)

{
  if (*(int *)(DAT_100a1f2c + 0xbc) != 1) {
    *(undefined4 *)(DAT_100a1f2c + 0xbc) = 1;
    *(uint *)(DAT_100a1f2c + 0xb8) = *(uint *)(DAT_100a1f2c + 0xb8) | 0x4000;
    if (*(int *)(DAT_100a1f2c + 0xe0) != -1) {
      DAT_100cbe98 = 0;
      do {
        *(float *)(DAT_100a1f2c + 0x38 + DAT_100cbe98 * 4) =
             *(float *)(DAT_100a1f2c + 0x38 + DAT_100cbe98 * 4) -
             (*(float *)(DAT_100a1f2c + 0x4f500 + DAT_100cbe98 * 4) -
             *(float *)(DAT_100a1f2c + 0x4f4f4 + DAT_100cbe98 * 4));
        DAT_100cbe98 = DAT_100cbe98 + 1;
      } while (DAT_100cbe98 < 3);
      FUN_10032900(1);
      FUN_10031f40();
      return;
    }
  }
  return;
}

/* 100581d0  FUN_100581d0  (153 bytes)
 * undefined FUN_100581d0(void)
 * called by: FUN_10058400
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100581d0(void)

{
  *(undefined4 *)(DAT_100a1f2c + 0xe0) = 0xffffffff;
  if ((*(uint *)(DAT_100a1f2c + 0x208) & 0x1000) != 0) {
    _DAT_100cbd44 = 170.0;
    DAT_100cbdb4 = 0;
    do {
      *(float *)(DAT_100a1f2c + 0x5c + DAT_100cbdb4 * 4) =
           -(_DAT_100cbd44 * *(float *)(DAT_100a1f2c + 0x14 + DAT_100cbdb4 * 4));
      DAT_100cbdb4 = DAT_100cbdb4 + 1;
    } while (DAT_100cbdb4 < 2);
    *(undefined4 *)(DAT_100a1f2c + 100) = 0x438d6bde;
    *(uint *)(DAT_100a1f2c + 0x208) = *(uint *)(DAT_100a1f2c + 0x208) & 0xffffefff;
  }
  FUN_100310f0();
  FUN_10057d10((float *)(DAT_100a1f2c + 0x5c),
               *(float *)(DAT_100a1f2c + 500) + *(float *)(DAT_100a1f2c + 500));
  return;
}

/* 10058270  FUN_10058270  (96 bytes)
 * undefined FUN_10058270(void)
 * called by: FUN_10058400
 */
void FUN_10058270(void)

{
  *(undefined4 *)(DAT_100a1f2c + 0xe0) = 0xffffffff;
  if ((char)((uint)*(undefined4 *)(DAT_100a1f2c + 0x208) >> 8) < '\0') {
    *(undefined4 *)(DAT_100a1f2c + 100) = 0x439aeb59;
    *(uint *)(DAT_100a1f2c + 0x208) = *(uint *)(DAT_100a1f2c + 0x208) & 0xffff7fff;
  }
  FUN_100310f0();
  FUN_10057d10((float *)(DAT_100a1f2c + 0x5c),
               *(float *)(DAT_100a1f2c + 500) + *(float *)(DAT_100a1f2c + 500));
  return;
}

/* 100582d0  FUN_100582d0  (298 bytes)
 * undefined FUN_100582d0(void)
 * called by: FUN_10058400
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100582d0(void)

{
  uint uVar1;
  
  if ((*(uint *)(DAT_100a1f2c + 0x208) & 0x100) == 0) {
    if ((*(uint *)(DAT_100a1f2c + 0x208) & 0x40) == 0) {
      _DAT_100cbd58 = 100;
      DAT_100cbcd0 = 10;
      uVar1 = *(uint *)(DAT_100a1f2c + 0x208) & 0xffffff7f;
    }
    else {
      _DAT_100cbd58 = 0x5a;
      DAT_100cbcd0 = 0x32;
      uVar1 = *(uint *)(DAT_100a1f2c + 0x208) & 0xffffffbf;
    }
  }
  else {
    _DAT_100cbd58 = 0x5a;
    DAT_100cbcd0 = 0x19;
    uVar1 = *(uint *)(DAT_100a1f2c + 0x208) & 0xfffffeff;
  }
  *(uint *)(DAT_100a1f2c + 0x208) = uVar1;
  DAT_100cbda8 = *(undefined4 *)(DAT_100a1f2c + 0x5c);
  DAT_100cbdac = *(undefined4 *)(DAT_100a1f2c + 0x60);
  _DAT_100cbdb0 = *(undefined4 *)(DAT_100a1f2c + 100);
  FUN_1002fc10((float *)&DAT_100cbda8);
  *(undefined4 *)(DAT_100a1f2c + 0xe0) = 0xffffffff;
  DAT_100cbe9c = 0;
  do {
    *(float *)(DAT_100a1f2c + 0x5c + DAT_100cbe9c * 4) =
         (float)_DAT_100cbd58 * (float)(&DAT_100cbda8)[DAT_100cbe9c] +
         *(float *)(DAT_100a1f2c + 0x5c + DAT_100cbe9c * 4);
    DAT_100cbe9c = DAT_100cbe9c + 1;
  } while (DAT_100cbe9c < 2);
  *(float *)(DAT_100a1f2c + 100) = SQRT((float)(DAT_100cbcd0 * 0x640));
  FUN_100310f0();
  FUN_10057d10((float *)(DAT_100a1f2c + 0x5c),
               *(float *)(DAT_100a1f2c + 500) + *(float *)(DAT_100a1f2c + 500));
  return;
}

/* 10058400  FUN_10058400  (286 bytes)
 * undefined FUN_10058400(void)
 * called by: PM_PlayerMove
 */
void FUN_10058400(void)

{
  if (((*(byte *)(DAT_100a1f2c + 0x45476) & 2) != 0) && (*(int *)(DAT_100a1f2c + 0xe0) == -1)) {
    FUN_10057d70();
  }
  if ((*(byte *)(DAT_100a1f2c + 0x208) & 1) != 0) {
    *(float *)(DAT_100a1f2c + 0x45468) = *(float *)(DAT_100a1f2c + 0x45468) * 0.1;
    *(float *)(DAT_100a1f2c + 0x4546c) = *(float *)(DAT_100a1f2c + 0x4546c) * 0.1;
    *(float *)(DAT_100a1f2c + 0x45470) = *(float *)(DAT_100a1f2c + 0x45470) * 0.1;
  }
  if ((*(byte *)(DAT_100a1f2c + 0x208) & 0x20) != 0) {
    *(float *)(DAT_100a1f2c + 0x45468) = *(float *)(DAT_100a1f2c + 0x45468) * 0.0;
    *(float *)(DAT_100a1f2c + 0x4546c) = *(float *)(DAT_100a1f2c + 0x4546c) * 0.3;
    *(float *)(DAT_100a1f2c + 0x45470) = *(float *)(DAT_100a1f2c + 0x45470) * 0.3;
  }
  if ((*(uint *)(DAT_100a1f2c + 0x208) & 0x1c0) != 0) {
    FUN_100582d0();
  }
  if ((*(uint *)(DAT_100a1f2c + 0x208) & 0x7000) != 0) {
    FUN_100581d0();
  }
  if ((char)((uint)*(undefined4 *)(DAT_100a1f2c + 0x208) >> 8) < '\0') {
    FUN_10058270();
  }
  if ((*(byte *)(DAT_100a1f2c + 0x208) & 4) != 0) {
    FUN_10058150();
  }
  if ((*(byte *)(DAT_100a1f2c + 0x208) & 8) != 0) {
    FUN_10057fa0();
    return;
  }
  return;
}

/* 10058680  FUN_10058680  (964 bytes)
 * undefined FUN_10058680(void)
 * called by: PM_PlayerMove
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058680(void)

{
  undefined4 uVar1;
  byte_conflict *pbVar2;
  int iVar3;
  void *this;
  undefined4 uVar4;
  
  if (*(int *)(DAT_100a1f2c + 0xd0) != 0) {
    *(uint *)(DAT_100a1f2c + 200) = *(uint *)(DAT_100a1f2c + 200) | 2;
    return;
  }
  if ((*(uint *)(DAT_100a1f2c + 0x208) & 0x34) != 0) {
    return;
  }
  if ((*(uint *)(DAT_100a1f2c + 0x208) & 0x30c00) != 0) {
    return;
  }
  if (*(float *)(DAT_100a1f2c + 0xcc) != 0.0) {
    *(float *)(DAT_100a1f2c + 0xcc) =
         *(float *)(DAT_100a1f2c + 0xcc) - (float)*(byte *)(DAT_100a1f2c + 0x4545a);
    if (0.0 <= *(float *)(DAT_100a1f2c + 0xcc)) {
      return;
    }
    *(undefined4 *)(DAT_100a1f2c + 0xcc) = 0;
    return;
  }
  if (1 < *(int *)(DAT_100a1f2c + 0xe4)) {
    *(undefined4 *)(DAT_100a1f2c + 0xe0) = 0xffffffff;
    if (*(int *)(DAT_100a1f2c + 0xe8) == -3) {
      *(undefined4 *)(DAT_100a1f2c + 100) = 0x42c80000;
    }
    else if (*(int *)(DAT_100a1f2c + 0xe8) == -4) {
      *(undefined4 *)(DAT_100a1f2c + 100) = 0x42a00000;
    }
    else {
      *(undefined4 *)(DAT_100a1f2c + 100) = 0x42480000;
    }
    if (*(float *)(DAT_100a1f2c + 0xac) < 0.0 == (*(float *)(DAT_100a1f2c + 0xac) == 0.0)) {
      return;
    }
    *(undefined4 *)(DAT_100a1f2c + 0xac) = 0x447a0000;
    uVar1 = (**(code **)(DAT_100a1f2c + 0x4f588))(0,3);
    switch(uVar1) {
    case 0:
      (**(code **)(DAT_100a1f2c + 0x4f5b4))
                (4,s_player_pl_wade1_wav_1009200c,0x3f800000,0x3f4ccccd,0,100);
      return;
    case 1:
      (**(code **)(DAT_100a1f2c + 0x4f5b4))
                (4,s_player_pl_wade2_wav_10091ff8,0x3f800000,0x3f4ccccd,0,100);
      return;
    case 2:
      (**(code **)(DAT_100a1f2c + 0x4f5b4))
                (4,s_player_pl_wade3_wav_10091fe4,0x3f800000,0x3f4ccccd,0,100);
      return;
    case 3:
      (**(code **)(DAT_100a1f2c + 0x4f5b4))
                (4,s_player_pl_wade4_wav_10091fd0,0x3f800000,0x3f4ccccd,0,100);
      return;
    default:
      return;
    }
  }
  if (*(int *)(DAT_100a1f2c + 0xe0) == -1) {
    *(uint *)(DAT_100a1f2c + 200) = *(uint *)(DAT_100a1f2c + 200) | 2;
    return;
  }
  if ((*(byte *)(DAT_100a1f2c + 200) & 2) != 0) {
    return;
  }
  *(undefined4 *)(DAT_100a1f2c + 0xe0) = 0xffffffff;
  FUN_100334f0();
  uVar4 = 0x3f800000;
  uVar1 = FUN_100309a0(*(undefined1 *)(DAT_100a1f2c + 0x1f0));
  FUN_10030220(uVar1,uVar4);
  pbVar2 = (byte_conflict *)
           (**(code **)(DAT_100a1f2c + 0x4f554))(DAT_100a1f2c + 0x4f3f0,&DAT_10091cdc);
  iVar3 = FUN_1006e1dd(this,pbVar2);
  DAT_100cbd54 = (uint)(iVar3 == 1);
  if ((((*(int *)(DAT_100a1f2c + 0x90) == 0) && ((*(uint *)(DAT_100a1f2c + 0xb8) & 0x4000) == 0)) ||
      (iVar3 != 1)) ||
     (((*(byte *)(DAT_100a1f2c + 0x45476) & 4) == 0 || (*(float *)(DAT_100a1f2c + 0x8c) <= 0.0)))) {
    DAT_100cbd54 = 0;
  }
  else {
    DAT_100cbd48 = *(undefined4 *)(DAT_100a1f2c + 0x5c);
    DAT_100cbd4c = *(undefined4 *)(DAT_100a1f2c + 0x60);
    _DAT_100cbd50 = *(undefined4 *)(DAT_100a1f2c + 100);
    FUN_1002fc10((float *)&DAT_100cbd48);
    DAT_100cbe94 = 0;
    do {
      *(float *)(DAT_100a1f2c + 0x5c + DAT_100cbe94 * 4) =
           (float)(&DAT_100cbd48)[DAT_100cbe94] * 100.0 +
           *(float *)(DAT_100a1f2c + 0x5c + DAT_100cbe94 * 4);
      DAT_100cbe94 = DAT_100cbe94 + 1;
    } while (DAT_100cbe94 < 2);
    *(undefined4 *)(DAT_100a1f2c + 100) = 0x43c80000;
    *(uint *)(DAT_100a1f2c + 0x208) = *(uint *)(DAT_100a1f2c + 0x208) | 0x100000;
    if (DAT_100cbd54 != 0) goto LAB_10058a31;
  }
  if ((*(byte *)(DAT_100a1f2c + 0x45477) & 6) != 0) {
    DAT_100cbd48 = *(undefined4 *)(DAT_100a1f2c + 0x5c);
    DAT_100cbd4c = *(undefined4 *)(DAT_100a1f2c + 0x60);
    _DAT_100cbd50 = *(undefined4 *)(DAT_100a1f2c + 100);
    FUN_1002fc10((float *)&DAT_100cbd48);
    DAT_100cbe94 = 0;
    do {
      *(float *)(DAT_100a1f2c + 0x5c + DAT_100cbe94 * 4) =
           (float)(&DAT_100cbd48)[DAT_100cbe94] * 100.0 +
           *(float *)(DAT_100a1f2c + 0x5c + DAT_100cbe94 * 4);
      DAT_100cbe94 = DAT_100cbe94 + 1;
    } while (DAT_100cbe94 < 2);
    FUN_10057d10((float *)(DAT_100a1f2c + 0x5c),*(float *)(DAT_100a1f2c + 500));
  }
  *(undefined4 *)(DAT_100a1f2c + 100) = 0x436ca4a8;
LAB_10058a31:
  FUN_100310f0();
  *(uint *)(DAT_100a1f2c + 200) = *(uint *)(DAT_100a1f2c + 200) | 2;
  return;
}

/* 10058a60  FUN_10058a60  (770 bytes)
 * undefined FUN_10058a60(void)
 * called by: PM_PlayerMove
 */
void FUN_10058a60(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  float10 fVar5;
  float local_c;
  float local_8;
  float local_4;
  
  fVar3 = SQRT((float)DAT_100a1f2c[0x1151c] * (float)DAT_100a1f2c[0x1151c] +
               (float)DAT_100a1f2c[0x1151a] * (float)DAT_100a1f2c[0x1151a] +
               (float)DAT_100a1f2c[0x1151b] * (float)DAT_100a1f2c[0x1151b]);
  fVar1 = (float)DAT_100a1f2c[0x7e];
  if (fVar1 != 0.0) {
    if ((float)DAT_100a1f2c[0x7d] <= fVar1) {
      fVar1 = (float)DAT_100a1f2c[0x7d];
    }
    DAT_100a1f2c[0x7d] = (int)fVar1;
  }
  if (((fVar3 != 0.0) && ((float)DAT_100a1f2c[0x7d] < fVar3)) &&
     (fVar3 = (float)DAT_100a1f2c[0x7d] / fVar3, 0 < DAT_100a1f2c[0x7f])) {
    DAT_100a1f2c[0x1151a] = (int)(fVar3 * (float)DAT_100a1f2c[0x1151a]);
    DAT_100a1f2c[0x1151b] = (int)(fVar3 * (float)DAT_100a1f2c[0x1151b]);
    DAT_100a1f2c[0x1151c] = (int)(fVar3 * (float)DAT_100a1f2c[0x1151c]);
  }
  if ((((DAT_100a1f2c[0x2e] & 0x1001000U) != 0) || (DAT_100a1f2c[0x34] != 0)) ||
     (((DAT_100a1f2c[0x82] & 0x10U) != 0 || ((DAT_100a1f2c[0x82] & 0x10c00U) != 0)))) {
    DAT_100a1f2c[0x1151a] = 0;
    DAT_100a1f2c[0x1151b] = 0;
    DAT_100a1f2c[0x1151c] = 0;
  }
  if ((DAT_100a1f2c[0x82] & 0x80000U) != 0) {
    DAT_100a1f2c[0x1151a] = (int)((float)DAT_100a1f2c[0x1151a] * 0.5);
    DAT_100a1f2c[0x1151b] = (int)((float)DAT_100a1f2c[0x1151b] * 0.25);
    DAT_100a1f2c[0x1151c] = (int)((float)DAT_100a1f2c[0x1151c] * 0.25);
    if ((*(byte *)((int)DAT_100a1f2c + 0x45476) & 2) == 0) {
      DAT_100a1f2c[0x30] = 0x3f800000;
    }
    else if (0.0 <= (float)DAT_100a1f2c[0x19]) {
      DAT_100a1f2c[0x30] = 0x3e99999a;
    }
    else {
      DAT_100a1f2c[0x30] = 0x3f400000;
    }
  }
  FUN_10033b10((float *)(DAT_100a1f2c + 0x28));
  if ((DAT_100a1f2c[0x34] == 0) && ((*(byte *)(DAT_100a1f2c + 0x82) & 2) == 0)) {
    local_c = (float)DAT_100a1f2c[0x11517] + (float)DAT_100a1f2c[0x28];
    local_8 = (float)DAT_100a1f2c[0x11518] + (float)DAT_100a1f2c[0x29];
    local_4 = (float)DAT_100a1f2c[0x11519] + (float)DAT_100a1f2c[0x2a];
    fVar5 = FUN_10033a80(&local_c,(float *)(DAT_100a1f2c + 0x17),
                         *(float *)(DAT_100a1f2c[0x13d3c] + 100),
                         *(float *)(DAT_100a1f2c[0x13d3c] + 0x68));
    DAT_100a1f2c[0x13] = (int)(float)(fVar5 * (float10)4.0);
    DAT_100a1f2c[0x11] = (int)local_c;
    DAT_100a1f2c[0x12] = (int)local_8;
    piVar4 = DAT_100a1f2c;
    iVar2 = *DAT_100a1f2c;
    if ((-1 < iVar2) && (iVar2 < 0x20)) {
      *(int *)(&DAT_100cbe10 + iVar2 * 4) = DAT_100a1f2c[0x12];
    }
  }
  else {
    iVar2 = *DAT_100a1f2c;
    piVar4 = DAT_100a1f2c;
    if ((-1 < iVar2) && (iVar2 < 0x20)) {
      DAT_100a1f2c[0x12] = *(int *)(&DAT_100cbe10 + iVar2 * 4);
      piVar4 = DAT_100a1f2c;
    }
  }
  if (piVar4[0x34] != 0) {
    piVar4[0x22] = -0x3f000000;
    piVar4 = DAT_100a1f2c;
  }
  if (180.0 < (float)piVar4[0x12]) {
    piVar4[0x12] = (int)((float)piVar4[0x12] - 360.0);
  }
  return;
}

/* 10058d70  FUN_10058d70  (603 bytes)
 * undefined FUN_10058d70(void)
 * called by: PM_PlayerMove
 */
void FUN_10058d70(void)

{
  ushort uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  
  uVar1 = *(ushort *)(DAT_100a1f2c + 0x45476);
  uVar2 = *(uint *)(DAT_100a1f2c + 200);
  if ((uVar1 & 4) == 0) {
    uVar6 = uVar2 & 0xfffffffb;
  }
  else {
    uVar6 = uVar2 | 4;
  }
  *(uint *)(DAT_100a1f2c + 200) = uVar6;
  if (((*(uint *)(DAT_100a1f2c + 0x208) & 0x3c) == 0) &&
     ((*(uint *)(DAT_100a1f2c + 0x208) & 0x30c00) == 0)) {
    if ((*(int *)(DAT_100a1f2c + 0x204) == 0) && (*(int *)(DAT_100a1f2c + 0xd0) == 0)) {
      if ((*(uint *)(DAT_100a1f2c + 0xb8) & 0x4000) != 0) {
        *(float *)(DAT_100a1f2c + 0x45468) = *(float *)(DAT_100a1f2c + 0x45468) * 0.333;
        *(float *)(DAT_100a1f2c + 0x4546c) = *(float *)(DAT_100a1f2c + 0x4546c) * 0.333;
        *(float *)(DAT_100a1f2c + 0x45470) = *(float *)(DAT_100a1f2c + 0x45470) * 0.333;
      }
      uVar5 = *(ushort *)(DAT_100a1f2c + 0x45476) & 4;
      if (((uVar5 != 0) || (*(int *)(DAT_100a1f2c + 0x90) != 0)) ||
         ((*(uint *)(DAT_100a1f2c + 0xb8) & 0x4000) != 0)) {
        if (uVar5 == 0) goto LAB_10058fb9;
        if ((((uVar2 ^ uVar1) & (uint)uVar1 & 4) != 0) &&
           ((*(uint *)(DAT_100a1f2c + 0xb8) & 0x4000) == 0)) {
          *(undefined4 *)(DAT_100a1f2c + 0x8c) = 0x447a0000;
          *(undefined4 *)(DAT_100a1f2c + 0x90) = 1;
        }
        fVar3 = *(float *)(DAT_100a1f2c + 0x8c) * 0.001;
        fVar4 = 1.0 - fVar3;
        if (fVar4 < 0.0) {
          fVar4 = 0.0;
        }
        if (*(int *)(DAT_100a1f2c + 0x90) != 0) {
          if ((fVar3 < 0.6 == (fVar3 == 0.6)) && (*(int *)(DAT_100a1f2c + 0xe0) != -1)) {
            fVar9 = FUN_100328e0(fVar4,2.5);
            *(float *)(DAT_100a1f2c + 0x88) =
                 (float)(fVar9 * (float10)-2.0 + ((float10)1.0 - fVar9) * (float10)28.0);
            return;
          }
          *(undefined4 *)(DAT_100a1f2c + 0xbc) = 1;
          *(undefined4 *)(DAT_100a1f2c + 0x88) = 0x41800000;
          *(uint *)(DAT_100a1f2c + 0xb8) = *(uint *)(DAT_100a1f2c + 0xb8) | 0x4000;
          *(undefined4 *)(DAT_100a1f2c + 0x90) = 0;
          if (*(int *)(DAT_100a1f2c + 0xe0) != -1) {
            iVar7 = 0x38;
            do {
              iVar8 = iVar7 + 4;
              *(float *)(iVar7 + DAT_100a1f2c) =
                   *(float *)(iVar7 + DAT_100a1f2c) -
                   (*(float *)(iVar7 + 0x4f4c8 + DAT_100a1f2c) -
                   *(float *)(iVar7 + 0x4f4bc + DAT_100a1f2c));
              iVar7 = iVar8;
            } while (iVar8 < 0x44);
            FUN_10032900(1);
            FUN_10031f40();
            return;
          }
        }
      }
    }
    else if ((*(uint *)(DAT_100a1f2c + 0xb8) & 0x4000) != 0) {
LAB_10058fb9:
      FUN_100329a0();
      return;
    }
  }
  return;
}

/* 10058fd0  FUN_10058fd0  (1331 bytes)
 * undefined FUN_10058fd0(void)
 * called by: PM_PlayerMove
 */
void FUN_10058fd0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float afStack_a8 [5];
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int aiStack_88 [4];
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_60;
  undefined1 local_44 [68];
  
  local_e4 = *(float *)(DAT_100a1f2c + 0x45468);
  if (local_e4 < 0.0) {
    local_e4 = local_e4 * 0.8;
  }
  afStack_a8[4] = *(float *)(DAT_100a1f2c + 0x4546c);
  *(undefined4 *)(DAT_100a1f2c + 0x1c) = 0;
  *(undefined4 *)(DAT_100a1f2c + 0x28) = 0;
  FUN_1002fc10((float *)(DAT_100a1f2c + 0x14));
  FUN_1002fc10((float *)(DAT_100a1f2c + 0x20));
  iVar4 = 0;
  pfVar6 = (float *)(DAT_100a1f2c + 0x14);
  do {
    pfVar1 = pfVar6 + 3;
    fVar2 = *pfVar6;
    iVar4 = iVar4 + 1;
    pfVar6 = pfVar6 + 1;
    afStack_a8[iVar4] = local_e4 * fVar2 + afStack_a8[4] * *pfVar1;
  } while (iVar4 < 2);
  afStack_a8[3] = 0.0;
  local_94 = afStack_a8[1];
  local_90 = afStack_a8[2];
  local_8c = 0;
  fVar9 = (float10)FUN_1002fc10(&local_94);
  local_e4 = (float)fVar9;
  if (*(float *)(DAT_100a1f2c + 500) < local_e4) {
    FUN_1002fc80(afStack_a8 + 1,*(float *)(DAT_100a1f2c + 500) / local_e4,afStack_a8 + 1);
    local_e4 = *(float *)(DAT_100a1f2c + 500);
  }
  *(undefined4 *)(DAT_100a1f2c + 100) = 0;
  FUN_100315f0(&local_94,local_e4,*(float *)(*(int *)(DAT_100a1f2c + 0x4f4f0) + 0x10));
  *(undefined4 *)(DAT_100a1f2c + 100) = 0;
  *(float *)(DAT_100a1f2c + 0x5c) =
       *(float *)(DAT_100a1f2c + 0x74) + *(float *)(DAT_100a1f2c + 0x5c);
  *(float *)(DAT_100a1f2c + 0x60) =
       *(float *)(DAT_100a1f2c + 0x78) + *(float *)(DAT_100a1f2c + 0x60);
  *(float *)(DAT_100a1f2c + 100) = *(float *)(DAT_100a1f2c + 0x7c) + *(float *)(DAT_100a1f2c + 100);
  fVar9 = FUN_1002fbf0(DAT_100a1f2c + 0x5c);
  if ((float10)1.0 <= fVar9) {
    iVar4 = *(int *)(DAT_100a1f2c + 0xe0);
    local_e0 = *(float *)(DAT_100a1f2c + 0x5c) * *(float *)(DAT_100a1f2c + 0x10) +
               *(float *)(DAT_100a1f2c + 0x38);
    local_dc = *(float *)(DAT_100a1f2c + 0x60) * *(float *)(DAT_100a1f2c + 0x10) +
               *(float *)(DAT_100a1f2c + 0x3c);
    local_d8 = *(float *)(DAT_100a1f2c + 0x40);
    piVar5 = (int *)(**(code **)(DAT_100a1f2c + 0x4f580))
                              (local_44,(float *)(DAT_100a1f2c + 0x38),&local_e0,0,0xffffffff);
    piVar8 = aiStack_88;
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar8 = piVar8 + 1;
    }
    if (fStack_78 == 1.0) {
      *(undefined4 *)(DAT_100a1f2c + 0x38) = uStack_74;
      *(undefined4 *)(DAT_100a1f2c + 0x3c) = uStack_70;
      *(undefined4 *)(DAT_100a1f2c + 0x40) = uStack_6c;
      return;
    }
    if (((iVar4 == -1) && (*(int *)(DAT_100a1f2c + 0xe4) == 0)) ||
       (*(float *)(DAT_100a1f2c + 0xcc) != 0.0)) {
      return;
    }
    fStack_d4 = *(float *)(DAT_100a1f2c + 0x38);
    fStack_d0 = *(float *)(DAT_100a1f2c + 0x3c);
    uStack_cc = *(undefined4 *)(DAT_100a1f2c + 0x40);
    uStack_b0 = *(undefined4 *)(DAT_100a1f2c + 0x5c);
    uStack_ac = *(undefined4 *)(DAT_100a1f2c + 0x60);
    afStack_a8[0] = *(float *)(DAT_100a1f2c + 100);
    FUN_10031150();
    fStack_c8 = *(float *)(DAT_100a1f2c + 0x38);
    fStack_c4 = *(float *)(DAT_100a1f2c + 0x3c);
    uStack_c0 = *(undefined4 *)(DAT_100a1f2c + 0x40);
    uStack_bc = *(undefined4 *)(DAT_100a1f2c + 0x5c);
    uStack_b8 = *(undefined4 *)(DAT_100a1f2c + 0x60);
    uStack_b4 = *(undefined4 *)(DAT_100a1f2c + 100);
    *(float *)(DAT_100a1f2c + 0x38) = fStack_d4;
    *(float *)(DAT_100a1f2c + 0x3c) = fStack_d0;
    *(undefined4 *)(DAT_100a1f2c + 0x40) = uStack_cc;
    *(undefined4 *)(DAT_100a1f2c + 0x5c) = uStack_b0;
    *(undefined4 *)(DAT_100a1f2c + 0x60) = uStack_ac;
    *(float *)(DAT_100a1f2c + 100) = afStack_a8[0];
    local_e0 = *(float *)(DAT_100a1f2c + 0x38);
    local_dc = *(float *)(DAT_100a1f2c + 0x3c);
    local_d8 = *(float *)(DAT_100a1f2c + 0x40) + *(float *)(*(int *)(DAT_100a1f2c + 0x4f4f0) + 0x30)
    ;
    piVar5 = (int *)(**(code **)(DAT_100a1f2c + 0x4f580))
                              (local_44,DAT_100a1f2c + 0x38,&local_e0,0,0xffffffff);
    piVar8 = aiStack_88;
    for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar8 = piVar8 + 1;
    }
    if ((aiStack_88[1] == 0) && (aiStack_88[0] == 0)) {
      *(undefined4 *)(DAT_100a1f2c + 0x38) = uStack_74;
      *(undefined4 *)(DAT_100a1f2c + 0x3c) = uStack_70;
      *(undefined4 *)(DAT_100a1f2c + 0x40) = uStack_6c;
    }
    FUN_10031150();
    local_e0 = *(float *)(DAT_100a1f2c + 0x38);
    local_dc = *(float *)(DAT_100a1f2c + 0x3c);
    local_d8 = *(float *)(DAT_100a1f2c + 0x40) - *(float *)(*(int *)(DAT_100a1f2c + 0x4f4f0) + 0x30)
    ;
    piVar5 = (int *)(**(code **)(DAT_100a1f2c + 0x4f580))
                              (local_44,DAT_100a1f2c + 0x38,&local_e0,0,0xffffffff);
    piVar8 = aiStack_88;
    for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar8 = piVar8 + 1;
    }
    if (0.7 <= fStack_60) {
      if ((aiStack_88[1] == 0) && (aiStack_88[0] == 0)) {
        *(undefined4 *)(DAT_100a1f2c + 0x38) = uStack_74;
        *(undefined4 *)(DAT_100a1f2c + 0x3c) = uStack_70;
        *(undefined4 *)(DAT_100a1f2c + 0x40) = uStack_6c;
      }
      *(undefined4 *)(DAT_100a1f2c + 0x2c) = *(undefined4 *)(DAT_100a1f2c + 0x38);
      *(undefined4 *)(DAT_100a1f2c + 0x30) = *(undefined4 *)(DAT_100a1f2c + 0x3c);
      *(undefined4 *)(DAT_100a1f2c + 0x34) = *(undefined4 *)(DAT_100a1f2c + 0x40);
      fVar3 = *(float *)(DAT_100a1f2c + 0x30) - fStack_d0;
      fVar2 = *(float *)(DAT_100a1f2c + 0x2c) - fStack_d4;
      if ((fStack_c4 - fStack_d0) * (fStack_c4 - fStack_d0) +
          (fStack_c8 - fStack_d4) * (fStack_c8 - fStack_d4) <= fVar3 * fVar3 + fVar2 * fVar2) {
        *(undefined4 *)(DAT_100a1f2c + 100) = uStack_b4;
        return;
      }
    }
    *(float *)(DAT_100a1f2c + 0x38) = fStack_c8;
    *(float *)(DAT_100a1f2c + 0x3c) = fStack_c4;
    *(undefined4 *)(DAT_100a1f2c + 0x40) = uStack_c0;
    *(undefined4 *)(DAT_100a1f2c + 0x5c) = uStack_bc;
    *(undefined4 *)(DAT_100a1f2c + 0x60) = uStack_b8;
    *(undefined4 *)(DAT_100a1f2c + 100) = uStack_b4;
    return;
  }
  *(undefined4 *)(DAT_100a1f2c + 0x5c) = 0;
  *(undefined4 *)(DAT_100a1f2c + 0x60) = 0;
  *(undefined4 *)(DAT_100a1f2c + 100) = 0;
  return;
}

/* 10059510  FUN_10059510  (805 bytes)
 * float * FUN_10059510(float * param_1, float * param_2)
 * called by: FUN_10059840
 */
float * __cdecl FUN_10059510(float *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  int iStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  int iStack_6c;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float afStack_50 [7];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_c [12];
  
  local_80 = 0.0;
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,0x10);
  iVar3 = 1;
  iVar1 = iVar1 * 0x16;
  do {
    iStack_7c = iVar1;
    iStack_6c = (*g_engfuncs.pfnRandomLong)(0x80,0x400);
    fVar4 = (float10)fcos((float10)iStack_7c * (float10)0.017453292519943295);
    fStack_88 = (float)fVar4;
    fVar4 = (float10)fsin((float10)iStack_7c * (float10)0.017453292519943295);
    fVar5 = SQRT((float10)fStack_88 * (float10)fStack_88 +
                 fVar4 * fVar4 + (float10)local_80 * (float10)local_80);
    if (fVar5 == (float10)0.0) {
      fVar8 = 1.0;
      fVar7 = 0.0;
      fVar6 = 0.0;
    }
    else {
      fVar5 = (float10)1.0 / fVar5;
      fVar8 = (float)((float10)local_80 * fVar5);
      fVar7 = (float)(fVar5 * fVar4);
      fVar6 = (float)(fVar5 * (float10)fStack_88);
    }
    FUN_1000c5f0(&fStack_94,fVar6,fVar7,fVar8);
    fVar8 = (float)iStack_6c;
    fStack_64 = fStack_90 * fVar8;
    fStack_88 = fStack_94;
    fStack_84 = fStack_90;
    fStack_60 = fStack_8c * fVar8;
    fStack_5c = fStack_94 * fVar8 + *param_2;
    local_80 = fStack_8c;
    fStack_58 = fStack_64 + param_2[1];
    fStack_54 = fStack_60 + param_2[2];
    FUN_10067850();
    if (1.0 <= fStack_34) {
      FUN_1000c5f0(&fStack_78,fStack_94 * 64.0,fStack_90 * 64.0,fStack_8c * 64.0);
      FUN_1000c5f0(afStack_50,fStack_30 - fStack_78,fStack_2c - fStack_74,fStack_28 - fStack_70);
      iVar2 = FUN_10067c90();
      if (iVar2 != -2) {
        FUN_1000c5f0(afStack_50,fStack_94 * 64.0,fStack_90 * 64.0,fStack_8c * 64.0);
        FUN_10011f90(&fStack_30,param_1,afStack_50);
        return param_1;
      }
    }
    else {
      FUN_1000c5f0(auStack_c,fStack_30 - fStack_94 * 64.0,fStack_2c - fStack_90 * 64.0,
                   fStack_28 - fStack_8c * 64.0);
      iVar2 = FUN_10067c90();
      if (iVar2 != -2) {
        FUN_1000c5f0(&fStack_78,fStack_94 * 64.0,fStack_90 * 64.0,fStack_8c * 64.0);
        FUN_1000c5f0(param_1,fStack_30 - fStack_78,fStack_2c - fStack_74,fStack_28 - fStack_70);
        return param_1;
      }
    }
    iVar1 = iVar1 + 0x16;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x11);
  iStack_7c = iVar1;
  FUN_1000a540(param_1,param_2);
  return param_1;
}

/* 10059840  FUN_10059840  (392 bytes)
 * undefined4 FUN_10059840(byte.conflict param_1)
 * called by: GameDLLInit
 */
undefined4 FUN_10059840(byte_conflict param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int lHigh;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  bool bVar11;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float afStack_d0 [3];
  char local_c4 [64];
  int aiStack_84 [32];
  undefined4 uStack_4;
  
  iVar3 = 0;
  do {
    cVar1 = s_info_player_deathmatch_1009712c[iVar3];
    local_c4[iVar3] = cVar1;
    iVar3 = iVar3 + 1;
  } while (cVar1 != '\0');
  lHigh = 0;
  iVar3 = UTIL_FindEntityByClassname(0,local_c4);
  if (iVar3 != 0) {
    do {
      if (0x1f < lHigh) break;
      aiStack_84[lHigh] = iVar3;
      lHigh = lHigh + 1;
      iVar3 = UTIL_FindEntityByClassname(iVar3,local_c4);
    } while (iVar3 != 0);
    if (lHigh != 0) {
      do {
        lHigh = lHigh + -1;
        if (lHigh < 0) {
          return 0;
        }
        iVar3 = (*g_engfuncs.pfnRandomLong)(0,lHigh);
        pfVar4 = FUN_10059510(afStack_d0,(float *)(*(int *)(aiStack_84[iVar3] + 4) + 8));
        fStack_dc = *pfVar4;
        fStack_d8 = pfVar4[1];
        fStack_d4 = pfVar4[2];
        bVar2 = true;
        iVar5 = FUN_10066c30(0,&fStack_dc,0x43000000);
        if (iVar5 == 0) {
LAB_100598f2:
          piVar6 = CTSPowerUp::CreatePowerUp(1 << (param_1 & 0x1f),-1);
          iVar3 = piVar6[1];
          *(float *)(iVar3 + 8) = fStack_dc;
          *(float *)(iVar3 + 0xc) = fStack_d8;
          *(float *)(iVar3 + 0x10) = fStack_d4;
          return 1;
        }
        do {
          if (!bVar2) goto LAB_10059987;
          iVar7 = 0xb;
          bVar11 = true;
          pcVar8 = gpGlobals->pStringBase + **(int **)(iVar5 + 4);
          pcVar9 = s_ts_powerup_10098278;
          do {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            bVar11 = *pcVar8 == *pcVar9;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          } while (bVar11);
          if (bVar11) {
            bVar2 = false;
          }
          iVar5 = FUN_10066c30(iVar5,&fStack_dc,0x43000000);
        } while (iVar5 != 0);
        if (bVar2) goto LAB_100598f2;
LAB_10059987:
        uStack_4 = 0;
        if (iVar3 < 0x1f) {
          piVar6 = aiStack_84 + iVar3 + 1;
          piVar10 = aiStack_84 + iVar3;
          for (iVar5 = 0x1f - iVar3; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar10 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar10 = piVar10 + 1;
          }
        }
      } while (!bVar2);
    }
  }
  return 0;
}

/* 1005a3b0  FUN_1005a3b0  (29 bytes)
 * float10 FUN_1005a3b0(float param_1)
 * called by: CM61Grenade::WaitThink, FUN_1005a3d0
 */
float10 __cdecl FUN_1005a3b0(float param_1)

{
  if (param_1 < 0.1) {
    return (float10)0.1;
  }
  return (float10)param_1;
}

/* 1005a3d0  FUN_1005a3d0  (44 bytes)
 * float10 FUN_1005a3d0(float param_1)
 * called by: FUN_100551c0
 */
float10 __cdecl FUN_1005a3d0(float param_1)

{
  float10 fVar1;
  
  if (param_1 != 0.0) {
    fVar1 = FUN_1005a3b0(param_1);
    return (float10)1.0 / fVar1;
  }
  return (float10)1.0;
}

/* 1005a700  FUN_1005a700  (198 bytes)
 * undefined FUN_1005a700(int param_1)
 * called by: CBasePlayer::PreThink
 */
void __fastcall FUN_1005a700(int param_1)

{
  int iVar1;
  
  if ((*(float *)(param_1 + 0x6e8) <= 0.0) || (*(float *)(param_1 + 0x6e8) <= gpGlobals->time)) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x244);
    if ((iVar1 != 0) || (*(int *)(*(int *)(param_1 + 4) + 0x248) != 0)) {
      *(int *)(param_1 + 0x6e4) = iVar1;
      (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc78,(float *)0x0,(edict_t *)0x0);
      iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
      (*g_engfuncs.pfnWriteByte)(iVar1);
      (*g_engfuncs.pfnWriteByte)(0);
      (*g_engfuncs.pfnMessageEnd)();
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x248) = 0;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x244) = 0;
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x180) = 0;
    *(undefined4 *)(param_1 + 0xa8c) = 0;
    FUN_1000ce00(*(int *)(param_1 + 4));
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x104) = 0xbf800000;
  }
  return;
}

/* 1005a7d0  FUN_1005a7d0  (343 bytes)
 * undefined FUN_1005a7d0(char param_1)
 * called by: FUN_1005a930, FUN_1005aa00, FUN_1005aad0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1005a7d0(void *this,char param_1)

{
  edict_t *pEdict;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x6d4) == 0) {
    pEdict = *(edict_t **)(*(int *)((int)this + 4) + 0x208);
  }
  else {
    pEdict = *(edict_t **)(*(int *)(*(int *)((int)this + 0x6d4) + 4) + 0x208);
  }
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
  *(undefined4 *)((int)this + 0x6d4) = 0;
  iVar4 = iVar1;
  while( true ) {
    iVar4 = iVar4 + (uint)(param_1 == '\0') * 2 + -1;
    if (gpGlobals->maxClients < iVar4) {
      iVar4 = 1;
    }
    else if (iVar4 < 1) {
      iVar4 = gpGlobals->maxClients;
    }
    piVar2 = (int *)UTIL_PlayerByIndex(iVar4);
    if (((((piVar2 != (int *)0x0) && (piVar2 != this)) && (*(int *)(piVar2[1] + 0x244) == 0)) &&
        ((-1 < *(char *)(piVar2[1] + 0x118) && (iVar3 = (**(code **)(*piVar2 + 0x94))(), iVar3 != 0)
         ))) && ((((DAT_100ac8c0 != '\x03' && ((DAT_100ac8c0 != '\x02' && (_DAT_10093ce8 == 0.0))))
                  || (*(float *)((int)this + 0x6e8) < 0.0)) ||
                 (iVar3 = (**(code **)(*DAT_1009f494 + 200))(this,piVar2), iVar3 == 1)))) break;
    if (iVar4 == iVar1) {
LAB_1005a8d4:
      if (*(int *)((int)this + 0x6d4) == 0) {
        FUN_1005aad0(this,3);
        return;
      }
      iVar4 = (*g_engfuncs.pfnIndexOfEdict)
                        (*(edict_t **)(*(int *)(*(int *)((int)this + 0x6d4) + 4) + 0x208));
      *(int *)(*(int *)((int)this + 4) + 0x248) = iVar4;
      FUN_100679a0();
      return;
    }
  }
  *(int **)((int)this + 0x6d4) = piVar2;
  goto LAB_1005a8d4;
}

/* 1005a930  FUN_1005a930  (207 bytes)
 * undefined FUN_1005a930(void * param_1)
 * called by: CBasePlayer::PreThink
 */
void __fastcall FUN_1005a930(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(*(int *)((int)param_1 + 4) + 0x244) == 5) {
    iVar3 = UTIL_PlayerByIndex(*(int *)(*(int *)((int)param_1 + 4) + 0x248));
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 4);
      iVar2 = *(int *)((int)param_1 + 4);
      *(undefined4 *)(iVar2 + 0x174) = *(undefined4 *)(iVar1 + 0x174);
      *(undefined4 *)(iVar2 + 0x178) = *(undefined4 *)(iVar1 + 0x178);
      *(undefined4 *)(iVar2 + 0x17c) = *(undefined4 *)(iVar1 + 0x17c);
      *(undefined4 *)(*(int *)((int)param_1 + 4) + 0xbc) =
           *(undefined4 *)(*(int *)(iVar3 + 4) + 0xbc);
      *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x218) =
           *(undefined4 *)(*(int *)(iVar3 + 4) + 0x218);
    }
  }
  if (((*(float *)((int)param_1 + 0x6dc) <= gpGlobals->time) &&
      (*(float *)((int)param_1 + 0x6dc) = gpGlobals->time + 0.5,
      *(int *)(*(int *)((int)param_1 + 4) + 0x244) != 3)) &&
     (*(int **)((int)param_1 + 0x6d4) != (int *)0x0)) {
    iVar3 = (**(code **)(**(int **)((int)param_1 + 0x6d4) + 0x94))();
    if ((iVar3 == 0) || (*(int *)(*(int *)(*(int *)((int)param_1 + 0x6d4) + 4) + 0x244) != 0)) {
      FUN_1005a7d0(param_1,'\0');
    }
  }
  return;
}

/* 1005aa00  FUN_1005aa00  (195 bytes)
 * undefined FUN_1005aa00(void * param_1)
 * called by: CBasePlayer::PreThink
 */
void __fastcall FUN_1005aa00(void *param_1)

{
  int iVar1;
  
  if (*(float *)((int)param_1 + 0x6d8) <= gpGlobals->time) {
    if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x180) & 2) != 0) {
      iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 0x244);
      if (iVar1 == 3) {
        iVar1 = 2;
      }
      else if (iVar1 == 2) {
        iVar1 = 1;
      }
      else {
        iVar1 = 3;
      }
      FUN_1005aad0(param_1,iVar1);
      *(float *)((int)param_1 + 0x6d8) = gpGlobals->time + 0.2;
    }
    if (((*(byte *)(*(int *)((int)param_1 + 4) + 0x180) & 8) != 0) &&
       (*(int *)(*(int *)((int)param_1 + 4) + 0x244) != 3)) {
      FUN_1005a7d0(param_1,'\0');
      *(float *)((int)param_1 + 0x6d8) = gpGlobals->time + 0.2;
    }
    if (((*(byte *)(*(int *)((int)param_1 + 4) + 0x180) & 0x10) != 0) &&
       (*(int *)(*(int *)((int)param_1 + 4) + 0x244) != 3)) {
      FUN_1005a7d0(param_1,'\x01');
      *(float *)((int)param_1 + 0x6d8) = gpGlobals->time + 0.2;
    }
  }
  return;
}

/* 1005aad0  FUN_1005aad0  (469 bytes)
 * undefined FUN_1005aad0(int param_1)
 * called by: CBasePlayer::StartObserver, FUN_1005a7d0, FUN_1005aa00
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1005aad0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (param_1 != *(int *)(iVar1 + 0x244)) {
    while( true ) {
      *(undefined4 *)(iVar1 + 0x174) = DAT_1009f4a8;
      *(undefined4 *)(iVar1 + 0x178) = DAT_1009f4ac;
      *(undefined4 *)(iVar1 + 0x17c) = DAT_1009f4b0;
      *(undefined4 *)(*(int *)((int)this + 4) + 0xbc) = 0;
      if (param_1 == 3) break;
      if (param_1 == 5) {
        if ((*(int *)((int)this + 0x6d4) != 0) ||
           (FUN_1005a7d0(this,'\0'), *(int *)((int)this + 0x6d4) != 0)) {
          *(undefined4 *)(*(int *)((int)this + 4) + 0x244) = 5;
LAB_1005ac7f:
          iVar1 = (*g_engfuncs.pfnIndexOfEdict)
                            (*(edict_t **)(*(int *)(*(int *)((int)this + 0x6d4) + 4) + 0x208));
          *(int *)(*(int *)((int)this + 4) + 0x248) = iVar1;
          return;
        }
      }
      else if (param_1 == 1) {
        if ((*(int *)((int)this + 0x6d4) != 0) ||
           (FUN_1005a7d0(this,'\0'), *(int *)((int)this + 0x6d4) != 0)) {
          *(undefined4 *)(*(int *)((int)this + 4) + 0x244) = 1;
          iVar1 = (*g_engfuncs.pfnIndexOfEdict)
                            (*(edict_t **)(*(int *)(*(int *)((int)this + 0x6d4) + 4) + 0x208));
          *(int *)(*(int *)((int)this + 4) + 0x248) = iVar1;
          return;
        }
      }
      else {
        if (param_1 != 2) {
          return;
        }
        if ((*(int *)((int)this + 0x6d4) != 0) ||
           (FUN_1005a7d0(this,'\0'), *(int *)((int)this + 0x6d4) != 0)) {
          *(undefined4 *)(*(int *)((int)this + 4) + 0x244) = 2;
          goto LAB_1005ac7f;
        }
      }
      iVar1 = *(int *)((int)this + 4);
      param_1 = 3;
      if (*(int *)(iVar1 + 0x244) == 3) {
        return;
      }
    }
    *(undefined4 *)(*(int *)((int)this + 4) + 0x244) = 3;
    *(undefined4 *)(*(int *)((int)this + 4) + 0x248) = 0;
    (*g_engfuncs.pfnSetClientMaxspeed)(*(edict_t **)(*(int *)((int)this + 4) + 0x208),420.0);
    if ((((DAT_100ac8c0 == '\x03') || (DAT_100ac8c0 == '\x02')) || (_DAT_10093ce8 != 0.0)) &&
       (0.0 <= *(float *)((int)this + 0x6e8))) {
      (*g_engfuncs.pfnSetClientMaxspeed)(*(edict_t **)(*(int *)((int)this + 4) + 0x208),1.0);
      return;
    }
  }
  return;
}

/* 1005acb0  FUN_1005acb0  (54 bytes)
 * undefined FUN_1005acb0(undefined4 param_1)
 * called by: CBasePlayer::TSInit
 */
void __thiscall FUN_1005acb0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = param_1;
  return;
}

/* 1005acf0  FUN_1005acf0  (958 bytes)
 * undefined FUN_1005acf0(float * param_1)
 * called by: CBasePlayer::PreThink
 */
void __fastcall FUN_1005acf0(float *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  void *this;
  
  iVar4 = (**(code **)(*(int *)param_1[0x10] + 0x94))();
  if ((iVar4 != 0) && (iVar4 = *(int *)((int)param_1[0x10] + 4), *(int *)(iVar4 + 0x244) == 0)) {
    if ((*(uint *)(iVar4 + 0x250) & 0x100000) != 0) {
      *(uint *)(iVar4 + 0x250) = *(uint *)(iVar4 + 0x250) | 0x80000;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xffefffff;
      CTSAnimation::Animate((CTSAnimation *)((int *)param_1[0x10] + 0x9d),(int *)param_1[0x10],0x38)
      ;
      uVar1 = *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x208);
      iVar4 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
      EMIT_SOUND_DYN(this,uVar1,4,s_player_airwheel_wav_100994b0,0x3f800000,0x3f4ccccd,0,
                     iVar4 + 0x5f);
    }
    if ((*(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x1a4) & 0x200) != 0) {
      param_1[0xf] = 0.0;
      param_1[6] = 0.0;
    }
    bVar3 = FUN_1002b380((int)param_1[0x10]);
    if (CONCAT31(extraout_var,bVar3) == 0) {
      iVar4 = *(int *)((int)param_1[0x10] + 4);
      if (*(int *)(iVar4 + 0x1c0) != 3) {
        if ((param_1[2] != 0.0) &&
           ((param_1[2] < gpGlobals->time || (*(int *)((int)param_1[0x10] + 0x68) != 0)))) {
          *(uint *)(iVar4 + 0x250) = *(uint *)(iVar4 + 0x250) & 0xfffbffff;
          *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
               *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffffffb;
          *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
               *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffffffe;
          param_1[2] = 0.0;
          *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x120) = 0x3f800000;
          iVar4 = *(int *)((int)param_1[0x10] + 4);
          if ((*(uint *)(iVar4 + 0x1a4) & 0x4000) == 0) {
            *(undefined4 *)(iVar4 + 0x174) = 0;
            *(undefined4 *)(iVar4 + 0x178) = 0;
            *(undefined4 *)(iVar4 + 0x17c) = 0x41e00000;
          }
          else {
            *(undefined4 *)(iVar4 + 0x174) = 0;
            *(undefined4 *)(iVar4 + 0x178) = 0;
            *(undefined4 *)(iVar4 + 0x17c) = 0x41800000;
          }
        }
        if ((*(byte *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0x10) != 0) {
          FUN_1005c020((int)param_1);
        }
        if ((*(byte *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0x20) != 0) {
          FUN_1005c1f0((int)param_1);
        }
        if ((*(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xc00) != 0) {
          FUN_1005c040((int)param_1);
        }
        if ((*(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0x10000) != 0) {
          FUN_1005bd80(param_1);
        }
        if ((*(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0x20000) != 0) {
          FUN_1005bec0(param_1);
        }
        uVar2 = *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x180);
        if (((uVar2 & 0x4000) == 0) && ((uVar2 & 2) == 0)) {
          return;
        }
        FUN_1005b9f0(param_1);
        return;
      }
    }
    *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
         *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfff7ffff;
    uVar2 = *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250);
    if ((uVar2 & 0x70c31) != 0) {
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) = uVar2 & 0xfffbffff;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffffffb;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffffffe;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xffffffef;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xffffffdf;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffffbff;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffff7ff;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffeffff;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffdffff;
      iVar4 = *(int *)((int)param_1[0x10] + 4);
      *(undefined4 *)(iVar4 + 0x174) = 0;
      *(undefined4 *)(iVar4 + 0x178) = 0;
      *(undefined4 *)(iVar4 + 0x17c) = 0x41e00000;
      *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x120) = 0x3f800000;
      *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f800000;
      param_1[2] = 0.0;
      *(undefined4 *)((int)param_1[0x10] + 0x274) = 0xffffffff;
      CTSAnimation::Animate((CTSAnimation *)((int *)param_1[0x10] + 0x9d),(int *)param_1[0x10],1);
    }
  }
  return;
}

/* 1005b0b0  FUN_1005b0b0  (88 bytes)
 * bool FUN_1005b0b0(int param_1)
 * called by: FUN_1005b550, FUN_1005b7a0, FUN_1005b9f0, FUN_1005d0e0
 */
bool __fastcall FUN_1005b0b0(int param_1)

{
  float fVar1;
  
  if ((DAT_100ac8c0 == '\0') || (DAT_100ac8c0 == '\x01')) {
    return 0x51 - *(int *)(*(int *)(param_1 + 0x40) + 0x4c0) < 0x16;
  }
  if ((0x51 - *(int *)(*(int *)(param_1 + 0x40) + 0x4c0) < 0x16) &&
     (fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1bc),
     fVar1 < 0.0 != (fVar1 == 0.0))) {
    return true;
  }
  return false;
}

/* 1005b110  FUN_1005b110  (25 bytes)
 * bool FUN_1005b110(int param_1)
 * called by: FUN_1005b550, FUN_1005b9f0
 */
bool __fastcall FUN_1005b110(int param_1)

{
  return 0x51 - *(int *)(*(int *)(param_1 + 0x40) + 0x4c0) < 0x2a;
}

/* 1005b130  FUN_1005b130  (25 bytes)
 * bool FUN_1005b130(int param_1)
 * called by: FUN_1005b9f0, FUN_1005d0e0
 */
bool __fastcall FUN_1005b130(int param_1)

{
  return 0x51 - *(int *)(*(int *)(param_1 + 0x40) + 0x4c0) < 0x48;
}

/* 1005b150  FUN_1005b150  (7 bytes)
 * float10 FUN_1005b150(void)
 * called by: FUN_1005b9f0, FUN_1005d0e0
 */
float10 FUN_1005b150(void)

{
  return (float10)0.0;
}

/* 1005b160  FUN_1005b160  (442 bytes)
 * undefined FUN_1005b160(float * param_1)
 * called by: FUN_1005b9f0
 */
void __fastcall FUN_1005b160(float *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  void *this;
  float10 fVar5;
  float10 fVar6;
  longlong lVar7;
  float in_stack_00000008;
  
  if (*(float *)(*(int *)((int)param_1[0x10] + 4) + 0x254) != 0.0) {
    FUN_10066df0();
    fVar1 = gpGlobals->v_forward[1];
    fVar2 = gpGlobals->v_forward[2];
    param_1[9] = -gpGlobals->v_forward[0];
    param_1[10] = -fVar1;
    *(undefined1 *)(param_1 + 0xc) = 1;
    param_1[0xb] = -fVar2;
    fVar5 = (float10)FUN_100551c0((int)param_1[0x10]);
    *param_1 = (float)(fVar5 * (float10)0.55 + (float10)gpGlobals->time);
    (*g_engfuncs.pfnMessageBegin)
              (1,DAT_100cbc64,(float *)0x0,*(edict_t **)(*(int *)((int)param_1[0x10] + 4) + 0x208));
    lVar7 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar7);
    (*g_engfuncs.pfnMessageEnd)();
    *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
         *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 4;
    *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
         *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x20;
    *(undefined4 *)((int)param_1[0x10] + 0x288) = 3;
    param_1[0xe] = in_stack_00000008 + gpGlobals->time;
    iVar4 = *(int *)((int)param_1[0x10] + 4);
    *(undefined4 *)(iVar4 + 0x174) = DAT_1009f4a8;
    *(undefined4 *)(iVar4 + 0x178) = DAT_1009f4ac;
    *(undefined4 *)(iVar4 + 0x17c) = DAT_1009f4b0;
    fVar1 = param_1[0x10];
    fVar5 = FUN_10066590();
    if ((float10)*(float *)((int)fVar1 + 0x118) < fVar5) {
      fVar5 = (float10)FUN_100551c0((int)param_1[0x10]);
      fVar6 = FUN_10066590();
      *(float *)((int)param_1[0x10] + 0x118) =
           (float)(fVar6 + (float10)(double)(fVar5 * (float10)0.55));
    }
    CTSAnimation::Animate((CTSAnimation *)((int *)param_1[0x10] + 0x9d),(int *)param_1[0x10],0x35);
    uVar3 = *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x208);
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(this,uVar3,4,s_player_land_wav_100994c4,0x3f800000,0x3f4ccccd,0,iVar4 + 0x5f);
  }
  return;
}

/* 1005b320  FUN_1005b320  (546 bytes)
 * undefined FUN_1005b320(float * param_1)
 * called by: FUN_1005b9f0, FUN_1005bec0
 */
void __fastcall FUN_1005b320(float *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  void *this;
  float10 fVar5;
  longlong lVar6;
  
  FUN_10066df0();
  fVar1 = gpGlobals->v_forward[1];
  fVar2 = gpGlobals->v_forward[2];
  param_1[9] = -gpGlobals->v_forward[0];
  param_1[10] = -fVar1;
  param_1[0xb] = -fVar2;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfff7ffff;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 4;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x1000;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x10000;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffdffff;
  iVar4 = *(int *)((int)param_1[0x10] + 4);
  *(undefined4 *)(iVar4 + 0x174) = DAT_1009f4a8;
  *(undefined4 *)(iVar4 + 0x178) = DAT_1009f4ac;
  *(undefined4 *)(iVar4 + 0x17c) = DAT_1009f4b0;
  CTSAnimation::Animate((CTSAnimation *)((int *)param_1[0x10] + 0x9d),(int *)param_1[0x10],0x36);
  *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f400000;
  fVar1 = param_1[0xf] + 0.35;
  param_1[0xf] = fVar1;
  if (fVar1 <= 0.5) {
    fVar1 = 0.5;
  }
  fVar5 = (float10)FUN_100551c0((int)param_1[0x10]);
  if ((float10)10.0 <= fVar5 * (float10)fVar1) {
    fVar5 = (float10)10.0;
  }
  else if (param_1[0xf] <= 0.5) {
    fVar5 = (float10)FUN_100551c0((int)param_1[0x10]);
    fVar5 = fVar5 * (float10)0.5;
  }
  else {
    fVar1 = param_1[0xf];
    fVar5 = (float10)FUN_100551c0((int)param_1[0x10]);
    fVar5 = fVar5 * (float10)fVar1;
  }
  *param_1 = (float)(fVar5 + (float10)gpGlobals->time);
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100cbc64,(float *)0x0,*(edict_t **)(*(int *)((int)param_1[0x10] + 4) + 0x208));
  lVar6 = __ftol();
  (*g_engfuncs.pfnWriteByte)((int)lVar6);
  (*g_engfuncs.pfnMessageEnd)();
  uVar3 = *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x208);
  iVar4 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
  EMIT_SOUND_DYN(this,uVar3,4,s_player_airwheel_wav_100994b0,0x3f800000,0x3f4ccccd,0,iVar4 + 0x5f);
  return;
}

/* 1005b550  FUN_1005b550  (591 bytes)
 * undefined FUN_1005b550(float * param_1)
 * called by: FUN_1005b9f0
 */
void __fastcall FUN_1005b550(float *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar5;
  void *this;
  float10 fVar6;
  longlong lVar7;
  
  FUN_10066df0();
  fVar1 = gpGlobals->v_forward[1];
  fVar2 = gpGlobals->v_forward[2];
  param_1[9] = -gpGlobals->v_forward[0];
  param_1[10] = -fVar1;
  param_1[0xb] = -fVar2;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfff7ffff;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 4;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x8000;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x20000;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffeffff;
  iVar5 = *(int *)((int)param_1[0x10] + 4);
  *(undefined4 *)(iVar5 + 0x174) = DAT_1009f4a8;
  *(undefined4 *)(iVar5 + 0x178) = DAT_1009f4ac;
  *(undefined4 *)(iVar5 + 0x17c) = DAT_1009f4b0;
  CTSAnimation::Animate((CTSAnimation *)((int *)param_1[0x10] + 0x9d),(int *)param_1[0x10],0x37);
  *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f800000;
  bVar4 = FUN_1005b0b0((int)param_1);
  if (CONCAT31(extraout_var,bVar4) == 0) {
    bVar4 = FUN_1005b110((int)param_1);
    if (CONCAT31(extraout_var_00,bVar4) == 0) {
      fVar1 = param_1[0xf] + 0.75;
    }
    else {
      fVar1 = param_1[0xf] + 0.5;
    }
  }
  else {
    fVar1 = param_1[0xf] + 0.3;
  }
  param_1[0xf] = fVar1;
  if (param_1[0xf] <= 0.5) {
    fVar1 = 0.5;
  }
  else {
    fVar1 = param_1[0xf];
  }
  fVar6 = (float10)FUN_100551c0((int)param_1[0x10]);
  if ((float10)10.0 <= fVar6 * (float10)fVar1) {
    fVar6 = (float10)10.0;
  }
  else if (param_1[0xf] <= 0.5) {
    fVar6 = (float10)FUN_100551c0((int)param_1[0x10]);
    fVar6 = fVar6 * (float10)0.5;
  }
  else {
    fVar1 = param_1[0xf];
    fVar6 = (float10)FUN_100551c0((int)param_1[0x10]);
    fVar6 = fVar6 * (float10)fVar1;
  }
  *param_1 = (float)(fVar6 + (float10)gpGlobals->time);
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100cbc64,(float *)0x0,*(edict_t **)(*(int *)((int)param_1[0x10] + 4) + 0x208));
  lVar7 = __ftol();
  (*g_engfuncs.pfnWriteByte)((int)lVar7);
  (*g_engfuncs.pfnMessageEnd)();
  uVar3 = *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x208);
  iVar5 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
  EMIT_SOUND_DYN(this,uVar3,4,s_player_airwheel_wav_100994b0,0x3f800000,0x3f4ccccd,0,iVar5 + 0x5f);
  return;
}

/* 1005b7a0  FUN_1005b7a0  (237 bytes)
 * uint FUN_1005b7a0(int param_1)
 * called by: FUN_1005b9f0, FUN_1005bec0
 */
uint __fastcall FUN_1005b7a0(int param_1)

{
  float fVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  uint uVar3;
  ushort uVar4;
  undefined4 uStack_28;
  undefined4 uStack_c;
  
  bVar2 = FUN_1005b0b0(param_1);
  uVar3 = 0;
  if (CONCAT31(extraout_var,bVar2) != 0) {
    FUN_10066df0();
    FUN_10067850();
    uVar3 = CONCAT22(extraout_var_00,
                     (ushort)(uStack_28 < 1.0) << 8 | (ushort)NAN(uStack_28) << 10 |
                     (ushort)(uStack_28 == 1.0) << 0xe);
    if (uStack_28 < 1.0) {
      uVar3 = CONCAT22(extraout_var_00,
                       (ushort)(uStack_c < 0.5) << 8 | (ushort)NAN(uStack_c) << 10 |
                       (ushort)(uStack_c == 0.5) << 0xe);
      if (((uStack_c < 0.5) &&
          (uVar3 = (uint)(ushort)((ushort)(uStack_c < -0.5) << 8 | (ushort)(uStack_c == -0.5) << 0xe
                                 ), uStack_c >= -0.5 && (uStack_c == -0.5) == 0)) &&
         (fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x28),
         uVar4 = (ushort)(fVar1 < -370.0) << 8 | (ushort)(fVar1 == -370.0) << 0xe,
         uVar3 = (uint)uVar4, fVar1 >= -370.0 && (fVar1 == -370.0) == 0)) {
        return CONCAT31((uint3)(byte)(uVar4 >> 8),1);
      }
    }
  }
  return uVar3;
}

/* 1005b890  FUN_1005b890  (337 bytes)
 * uint FUN_1005b890(int param_1)
 * called by: FUN_1005b9f0
 */
uint __fastcall FUN_1005b890(int param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 extraout_var;
  uint uVar5;
  ushort uVar6;
  float fStack_28;
  float fStack_c;
  edict_t *peStack_8;
  
  uVar5 = *(uint *)(param_1 + 0x40);
  if ((*(uint *)(*(int *)(uVar5 + 4) + 0x250) & 0x20000) == 0) {
    if ((*(byte *)(uVar5 + 0x770) & 2) == 0) goto LAB_1005b8ce;
    fVar1 = *(float *)(param_1 + 0x18);
    fVar2 = gpGlobals->time;
    uVar5 = CONCAT22((short)(uVar5 >> 0x10),
                     (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                     (ushort)(fVar1 == fVar2) << 0xe);
    if (fVar1 < fVar2) {
      *(float *)(param_1 + 0x18) = gpGlobals->time + 0.3;
      goto LAB_1005b8ce;
    }
  }
  FUN_10066df0();
  FUN_10067850();
  uVar5 = CONCAT22(extraout_var,
                   (ushort)(fStack_28 < 1.0) << 8 | (ushort)NAN(fStack_28) << 10 |
                   (ushort)(fStack_28 == 1.0) << 0xe);
  if (fStack_28 >= 1.0) goto LAB_1005b8ce;
  if (peStack_8 == (edict_t *)0x0) {
    peStack_8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peStack_8 != (edict_t *)0x0) goto LAB_1005b979;
  }
  else {
LAB_1005b979:
    if (peStack_8->pvPrivateData != (int *)0x0) {
      uVar5 = (**(code **)(*(int *)peStack_8->pvPrivateData + 0xa8))();
      if (uVar5 != 0) goto LAB_1005b8ce;
    }
  }
  uVar5 = (uint)(ushort)((ushort)(fStack_c < 0.5) << 8 | (ushort)NAN(fStack_c) << 10 |
                        (ushort)(fStack_c == 0.5) << 0xe);
  if (((fStack_c < 0.5) &&
      (uVar5 = (uint)(ushort)((ushort)(fStack_c < -0.5) << 8 | (ushort)(fStack_c == -0.5) << 0xe),
      fStack_c < -0.5 == 0 && (fStack_c == -0.5) == 0)) &&
     (fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x28),
     uVar3 = (ushort)(fVar1 < -370.0), uVar4 = (ushort)(fVar1 == -370.0),
     uVar6 = uVar3 << 8 | uVar4 << 0xe, uVar5 = (uint)uVar6, uVar3 == 0 && uVar4 == 0)) {
    return CONCAT31((uint3)(byte)(uVar6 >> 8),1);
  }
LAB_1005b8ce:
  return uVar5 & 0xffffff00;
}

/* 1005b9f0  FUN_1005b9f0  (902 bytes)
 * undefined FUN_1005b9f0(float * param_1)
 * called by: FUN_1005acf0
 */
void __fastcall FUN_1005b9f0(float *param_1)

{
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar5;
  void *this;
  float10 fVar6;
  longlong lVar7;
  float fStack00000008;
  float fStack0000000c;
  float fStack00000010;
  double dVar8;
  
  if ((*param_1 <= gpGlobals->time) && (param_1[2] <= gpGlobals->time)) {
    iVar5 = *(int *)((int)param_1[0x10] + 4);
    uVar4 = *(uint *)(iVar5 + 0x250);
    if ((uVar4 & 0xc30) == 0) {
      if (((*(byte *)(iVar5 + 0x180) & 2) == 0) || ((uVar4 & 0x80000) != 0)) {
        if (((*(uint *)((int)param_1[0x10] + 0x770) & 0x4000) != 0) &&
           (uVar4 = FUN_1005b7a0((int)param_1), (char)uVar4 != '\0')) {
          FUN_1005b320(param_1);
          return;
        }
      }
      else {
        uVar4 = FUN_1005b890((int)param_1);
        if ((char)uVar4 != '\0') {
          FUN_1005b550(param_1);
          return;
        }
      }
      fVar1 = param_1[0x10];
      if (((*(uint *)((int)fVar1 + 0x770) & 0x4000) != 0) &&
         (iVar5 = *(int *)((int)fVar1 + 4), (*(uint *)(iVar5 + 0x250) & 0xb0000) == 0)) {
        if ((*(uint *)(iVar5 + 0x1a4) & 0x200) == 0) {
          if (*(float *)(iVar5 + 0x28) < -680.0) {
            return;
          }
          dVar8 = (double)(gpGlobals->time - *(float *)((int)fVar1 + 0xae0));
          fVar6 = (float10)FUN_100551c0((int)fVar1);
          if (fVar6 * (float10)0.7 < (float10)dVar8) {
            return;
          }
        }
        iVar5 = *(int *)((int)param_1[0x10] + 4);
        if (SQRT(*(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                 *(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20)) < 80.0) {
          FUN_1005b160(param_1);
          return;
        }
        if ((-10.0 <= *(float *)(iVar5 + 0x74)) ||
           (bVar3 = FUN_1005b0b0((int)param_1), CONCAT31(extraout_var,bVar3) == 0)) {
          if ((10.0 < *(float *)(iVar5 + 0x74)) ||
             (bVar3 = FUN_1005b110((int)param_1), CONCAT31(extraout_var_00,bVar3) == 0)) {
            *(uint *)(iVar5 + 0x250) = *(uint *)(iVar5 + 0x250) | 0x80;
            bVar3 = FUN_1005b130((int)param_1);
            if (CONCAT31(extraout_var_01,bVar3) == 0) {
              *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x120) = 0x3f666666;
              *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f800000;
            }
            else {
              *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x120) = 0x3e800000;
              *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f400000;
            }
          }
          else {
            *(uint *)(iVar5 + 0x250) = *(uint *)(iVar5 + 0x250) | 0x100;
            *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f400000;
          }
        }
        else {
          *(uint *)(iVar5 + 0x250) = *(uint *)(iVar5 + 0x250) | 0x40;
          *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f400000;
        }
        *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
             *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 4;
        *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
             *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x10;
        iVar5 = *(int *)((int)param_1[0x10] + 4);
        *(undefined4 *)(iVar5 + 0x174) = DAT_1009f4a8;
        *(undefined4 *)(iVar5 + 0x178) = DAT_1009f4ac;
        *(undefined4 *)(iVar5 + 0x17c) = DAT_1009f4b0;
        CTSAnimation::Animate
                  ((CTSAnimation *)((int *)param_1[0x10] + 0x9d),(int *)param_1[0x10],0x28);
        fVar6 = FUN_1005b150();
        *param_1 = (float)(fVar6 + (float10)gpGlobals->time);
        (*g_engfuncs.pfnMessageBegin)
                  (1,DAT_100cbc64,(float *)0x0,
                   *(edict_t **)(*(int *)((int)param_1[0x10] + 4) + 0x208));
        lVar7 = __ftol();
        (*g_engfuncs.pfnWriteByte)((int)lVar7);
        (*g_engfuncs.pfnMessageEnd)();
        iVar5 = *(int *)((int)param_1[0x10] + 4);
        fVar1 = *(float *)(iVar5 + 0x20);
        fStack00000010 =
             SQRT(*(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28) +
                  *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) + fVar1 * fVar1);
        if (fStack00000010 == 0.0) {
          fStack00000008 = 0.0;
          fStack0000000c = 0.0;
          fStack00000010 = 1.0;
        }
        else {
          fStack00000010 = 1.0 / fStack00000010;
          fStack00000008 = fStack00000010 * *(float *)(iVar5 + 0x20);
          fStack0000000c = fStack00000010 * *(float *)(iVar5 + 0x24);
          fStack00000010 = fStack00000010 * *(float *)(iVar5 + 0x28);
        }
        param_1[9] = fStack00000008;
        param_1[10] = fStack0000000c;
        param_1[0xb] = fStack00000010;
        uVar2 = *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x208);
        iVar5 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        EMIT_SOUND_DYN(this,uVar2,4,s_player_dive_wav_100994d4,0x3f800000,0x3f4ccccd,0,iVar5 + 0x5f)
        ;
      }
    }
  }
  return;
}

/* 1005bd80  FUN_1005bd80  (309 bytes)
 * undefined FUN_1005bd80(float * param_1)
 * called by: FUN_1005acf0
 */
void __fastcall FUN_1005bd80(float *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  float10 fVar3;
  longlong lVar4;
  
  iVar2 = *(int *)((int)param_1[0x10] + 4);
  if ((*(uint *)(iVar2 + 0x1a4) & 0x200) != 0) {
    if ((*(uint *)(iVar2 + 0x250) & 0x10000) != 0) {
      *(uint *)(iVar2 + 0x250) = *(uint *)(iVar2 + 0x250) & 0xfffeffff;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 1;
      *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x120) = 0x3f000000;
      iVar2 = *(int *)((int)param_1[0x10] + 4);
      *(undefined4 *)(iVar2 + 0x174) = DAT_1009f4a8;
      *(undefined4 *)(iVar2 + 0x178) = DAT_1009f4ac;
      *(undefined4 *)(iVar2 + 0x17c) = DAT_1009f4b0;
      fVar3 = (float10)FUN_100551c0((int)param_1[0x10]);
      param_1[2] = (float)(fVar3 * (float10)0.5 + (float10)gpGlobals->time);
      if (*param_1 < gpGlobals->time) {
        *param_1 = gpGlobals->time;
        (*g_engfuncs.pfnMessageBegin)
                  (1,DAT_100cbc64,(float *)0x0,
                   *(edict_t **)(*(int *)((int)param_1[0x10] + 4) + 0x208));
        lVar4 = __ftol();
        (*g_engfuncs.pfnWriteByte)((int)lVar4);
        (*g_engfuncs.pfnMessageEnd)();
      }
    }
    *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f800000;
    uVar1 = *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x208);
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(this,uVar1,4,s_player_land_wav_100994c4,0x3f800000,0x3f4ccccd,0,iVar2 + 0x5f);
  }
  return;
}

/* 1005bec0  FUN_1005bec0  (339 bytes)
 * undefined FUN_1005bec0(float * param_1)
 * called by: FUN_1005acf0
 */
void __fastcall FUN_1005bec0(float *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  void *this;
  float10 fVar4;
  longlong lVar5;
  
  iVar2 = *(int *)((int)param_1[0x10] + 4);
  if ((*(uint *)(iVar2 + 0x1a4) & 0x200) == 0) {
    if ((*(uint *)((int)param_1[0x10] + 0x770) & 0x4000) != 0) {
      uVar3 = FUN_1005b7a0((int)param_1);
      if ((char)uVar3 != '\0') {
        FUN_1005b320(param_1);
        return;
      }
    }
  }
  else {
    if ((*(uint *)(iVar2 + 0x250) & 0x20000) != 0) {
      *(uint *)(iVar2 + 0x250) = *(uint *)(iVar2 + 0x250) & 0xfffdffff;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 1;
      *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x120) = 0x3f000000;
      iVar2 = *(int *)((int)param_1[0x10] + 4);
      *(undefined4 *)(iVar2 + 0x174) = DAT_1009f4a8;
      *(undefined4 *)(iVar2 + 0x178) = DAT_1009f4ac;
      *(undefined4 *)(iVar2 + 0x17c) = DAT_1009f4b0;
      fVar4 = (float10)FUN_100551c0((int)param_1[0x10]);
      param_1[2] = (float)(fVar4 * (float10)0.5 + (float10)gpGlobals->time);
      if (*param_1 < gpGlobals->time) {
        *param_1 = gpGlobals->time;
        (*g_engfuncs.pfnMessageBegin)
                  (1,DAT_100cbc64,(float *)0x0,
                   *(edict_t **)(*(int *)((int)param_1[0x10] + 4) + 0x208));
        lVar5 = __ftol();
        (*g_engfuncs.pfnWriteByte)((int)lVar5);
        (*g_engfuncs.pfnMessageEnd)();
      }
    }
    *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f800000;
    uVar1 = *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x208);
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(this,uVar1,4,s_player_land_wav_100994c4,0x3f800000,0x3f4ccccd,0,iVar2 + 0x5f);
  }
  return;
}

/* 1005c020  FUN_1005c020  (27 bytes)
 * undefined FUN_1005c020(int param_1)
 * called by: FUN_1005acf0
 */
void __fastcall FUN_1005c020(int param_1)

{
  FUN_1005c4e0(param_1);
  CTSAnimation::Animate
            ((CTSAnimation *)(*(int **)(param_1 + 0x40) + 0x9d),*(int **)(param_1 + 0x40),2);
  return;
}

/* 1005c040  FUN_1005c040  (430 bytes)
 * undefined FUN_1005c040(int param_1)
 * called by: FUN_1005acf0
 */
void __fastcall FUN_1005c040(int param_1)

{
  float *pfVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  void *this;
  float10 fVar6;
  float in_stack_ffffffcc;
  float fVar7;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 4);
  if ((*(uint *)(iVar5 + 0x1a4) & 0x200) != 0) {
    uVar2 = *(uint *)(iVar5 + 0x250);
    if ((uVar2 & 0x400) == 0) {
      *(uint *)(iVar5 + 0x250) = uVar2 & 0xfffff7ff;
      iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(uint *)(iVar5 + 0x250) = *(uint *)(iVar5 + 0x250) | 0x20;
      pfVar1 = (float *)(param_1 + 0x24);
      iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(undefined4 *)(iVar5 + 0x174) = DAT_1009f4a8;
      *(undefined4 *)(iVar5 + 0x178) = DAT_1009f4ac;
      *(undefined4 *)(iVar5 + 0x17c) = DAT_1009f4b0;
      *pfVar1 = *pfVar1 * -1.0;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) * -1.0;
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) * -1.0;
      puVar4 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x74);
      fVar7 = 2.6378665e-29;
      FUN_1000a540(&stack0xffffffd8,puVar4);
      FUN_1000a540(&stack0xffffffcc,pfVar1);
      iVar5 = FUN_1003d5c0(in_stack_ffffffcc,fVar7,(float)puVar4);
      if (iVar5 == 2) {
        *(undefined1 *)(param_1 + 0x30) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x30) = 1;
      }
      *(int *)(*(int *)(param_1 + 0x40) + 0x288) = iVar5;
    }
    else {
      *(uint *)(iVar5 + 0x250) = uVar2 & 0xfffffbff;
      iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(uint *)(iVar5 + 0x250) = *(uint *)(iVar5 + 0x250) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x120) = 0x3e800000;
      iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(undefined4 *)(iVar5 + 0x174) = DAT_1009f4a8;
      *(undefined4 *)(iVar5 + 0x178) = DAT_1009f4ac;
      *(undefined4 *)(iVar5 + 0x17c) = DAT_1009f4b0;
      fVar6 = (float10)FUN_100551c0(*(int *)(param_1 + 0x40));
      *(float *)(param_1 + 8) = (float)(fVar6 * (float10)0.5 + (float10)gpGlobals->time);
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x11c) = 0x3f800000;
    uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x208);
    iVar5 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(this,uVar3,4,s_player_land_wav_100994c4,0x3f800000,0x3f4ccccd,0,iVar5 + 0x5f);
  }
  return;
}

/* 1005c1f0  FUN_1005c1f0  (739 bytes)
 * undefined FUN_1005c1f0(int param_1)
 * called by: FUN_1005acf0
 */
void __fastcall FUN_1005c1f0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float10 fVar4;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 4);
  if ((*(uint *)(iVar1 + 0x1a4) & 0x200) != 0) {
    if ((*(byte *)(iVar1 + 0x180) & 0x10) != 0) {
      *(undefined4 *)(iVar1 + 0x120) = 0x3f800000;
    }
    piVar2 = *(int **)(param_1 + 0x40);
    iVar1 = piVar2[1];
    uVar3 = *(uint *)(iVar1 + 0x180);
    if (((uVar3 & 0x4002) != 0) && (*(float *)(param_1 + 0x38) < gpGlobals->time)) {
      *(uint *)(iVar1 + 0x250) = *(uint *)(iVar1 + 0x250) | 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(uint *)(iVar1 + 0x250) = *(uint *)(iVar1 + 0x250) & 0xffffffdf;
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(undefined4 *)(iVar1 + 0x174) = 0;
      *(undefined4 *)(iVar1 + 0x178) = 0;
      *(undefined4 *)(iVar1 + 0x17c) = 0x41e00000;
      fVar4 = (float10)FUN_100551c0(*(int *)(param_1 + 0x40));
      *(float *)(param_1 + 8) = (float)(fVar4 + (float10)gpGlobals->time);
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x68) = 1;
      CTSAnimation::Animate
                ((CTSAnimation *)(*(int **)(param_1 + 0x40) + 0x9d),*(int **)(param_1 + 0x40),0x29);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x120) = 0x3f800000;
      return;
    }
    if (((uVar3 & 0x200) != 0) && (*(float *)(param_1 + 0x38) < gpGlobals->time)) {
      CTSAnimation::Animate((CTSAnimation *)(piVar2 + 0x9d),piVar2,0x2a);
      FUN_10066df0();
      local_4 = SQRT(gpGlobals->v_forward[2] * gpGlobals->v_forward[2] +
                     gpGlobals->v_forward[1] * gpGlobals->v_forward[1] +
                     gpGlobals->v_forward[0] * gpGlobals->v_forward[0]);
      if (local_4 == 0.0) {
        local_c = 0.0;
        local_8 = 0.0;
        local_4 = 1.0;
      }
      else {
        local_4 = 1.0 / local_4;
        local_c = local_4 * gpGlobals->v_forward[0];
        local_8 = local_4 * gpGlobals->v_forward[1];
        local_4 = local_4 * gpGlobals->v_forward[2];
      }
      *(float *)(param_1 + 0x24) = local_c;
      *(float *)(param_1 + 0x28) = local_8;
      *(float *)(param_1 + 0x2c) = local_4;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x120) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x288) = 2;
      return;
    }
    if (((uVar3 & 0x400) != 0) && (*(float *)(param_1 + 0x38) < gpGlobals->time)) {
      CTSAnimation::Animate((CTSAnimation *)(piVar2 + 0x9d),piVar2,0x2b);
      FUN_10066df0();
      local_4 = SQRT(gpGlobals->v_forward[2] * gpGlobals->v_forward[2] +
                     gpGlobals->v_forward[1] * gpGlobals->v_forward[1] +
                     gpGlobals->v_forward[0] * gpGlobals->v_forward[0]);
      if (local_4 == 0.0) {
        local_c = 0.0;
        local_8 = 0.0;
        local_4 = 1.0;
      }
      else {
        local_4 = 1.0 / local_4;
        local_c = local_4 * gpGlobals->v_forward[0];
        local_8 = local_4 * gpGlobals->v_forward[1];
        local_4 = local_4 * gpGlobals->v_forward[2];
      }
      *(float *)(param_1 + 0x24) = local_c;
      *(float *)(param_1 + 0x28) = local_8;
      *(float *)(param_1 + 0x2c) = local_4;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x120) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x288) = 2;
      return;
    }
    CTSAnimation::Animate((CTSAnimation *)(piVar2 + 0x9d),piVar2,3);
  }
  return;
}

/* 1005c4e0  FUN_1005c4e0  (414 bytes)
 * undefined FUN_1005c4e0(int param_1)
 * called by: FUN_1005c020
 */
void __fastcall FUN_1005c4e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  undefined4 *puVar3;
  float10 fVar4;
  float in_stack_ffffffdc;
  float fVar5;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 4);
  if (((*(uint *)(iVar2 + 0x1a4) & 0x200) != 0) && ((*(uint *)(iVar2 + 0x250) & 0x10) != 0)) {
    *(uint *)(iVar2 + 0x250) = *(uint *)(iVar2 + 0x250) & 0xffffffef;
    if ((*(uint *)(iVar2 + 0x180) & 0x4002) == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(uint *)(iVar2 + 0x250) = *(uint *)(iVar2 + 0x250) | 0x20;
      iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(undefined4 *)(iVar2 + 0x174) = DAT_1009f4a8;
      *(undefined4 *)(iVar2 + 0x178) = DAT_1009f4ac;
      *(undefined4 *)(iVar2 + 0x17c) = DAT_1009f4b0;
      puVar3 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x74);
      fVar5 = 2.6382183e-29;
      FUN_1000a540(&stack0xffffffe8,puVar3);
      FUN_1000a540(&stack0xffffffdc,(undefined4 *)(param_1 + 0x24));
      iVar2 = FUN_1003d5c0(in_stack_ffffffdc,fVar5,(float)puVar3);
      if (iVar2 == 2) {
        *(undefined1 *)(param_1 + 0x30) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x30) = 1;
      }
      *(int *)(*(int *)(param_1 + 0x40) + 0x288) = iVar2;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(uint *)(iVar2 + 0x250) = *(uint *)(iVar2 + 0x250) | 0x40000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(uint *)(iVar2 + 0x250) = *(uint *)(iVar2 + 0x250) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x120) = 0x3f000000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(undefined4 *)(iVar2 + 0x174) = DAT_1009f4a8;
      *(undefined4 *)(iVar2 + 0x178) = DAT_1009f4ac;
      *(undefined4 *)(iVar2 + 0x17c) = DAT_1009f4b0;
      fVar4 = (float10)FUN_100551c0(*(int *)(param_1 + 0x40));
      *(float *)(param_1 + 8) = (float)(fVar4 * (float10)0.75 + (float10)gpGlobals->time);
      CTSAnimation::Animate
                ((CTSAnimation *)(*(int **)(param_1 + 0x40) + 0x9d),*(int **)(param_1 + 0x40),0x2e);
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x11c) = 0x3f800000;
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x208);
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(this,uVar1,4,s_player_land_wav_100994c4,0x3f800000,0x3f4ccccd,0,iVar2 + 0x5f);
  }
  return;
}

/* 1005c680  FUN_1005c680  (1657 bytes)
 * undefined FUN_1005c680(int param_1)
 * called by: CBasePlayer::PreThink
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1005c680(int param_1)

{
  int iVar1;
  int *this;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *this_00;
  float unaff_EBX;
  char *pcVar9;
  float fStack_64;
  int iStack_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_44;
  float local_40;
  float local_3c [5];
  float fStack_28;
  edict_t *peStack_8;
  
  if (*(int *)(param_1 + 0x1c) == -0x40800000) {
    return;
  }
  if (gpGlobals->time < *(float *)(param_1 + 0x1c)) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x40);
  *(float *)(param_1 + 0x1c) = gpGlobals->time;
  iVar1 = *(int *)(iVar6 + 4);
  if (((*(uint *)(iVar1 + 0x1a4) & 0x200) != 0) && (*(float *)(iVar6 + 0x718) == 0.0)) {
    *(undefined4 *)(iVar6 + 0x714) = 0;
    return;
  }
  if ((SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
            *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
            *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)) < 64.0) &&
     (*(float *)(iVar6 + 0x718) == 0.0)) {
    return;
  }
  if (*(float *)(iVar6 + 0x718) == 0.0) {
    iVar6 = *(int *)(iVar6 + 4);
    fVar3 = SQRT(*(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28) +
                 *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                 *(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20));
    if (fVar3 == 0.0) {
      local_5c = 0.0;
      local_58 = 0.0;
      local_54 = 1.0;
    }
    else {
      fVar3 = 1.0 / fVar3;
      FUN_1000c5f0(&local_5c,fVar3 * *(float *)(iVar6 + 0x20),fVar3 * *(float *)(iVar6 + 0x24),
                   fVar3 * *(float *)(iVar6 + 0x28));
    }
    local_50 = local_5c * 64.0;
    local_4c = local_58 * 64.0;
    iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 4);
    local_3c[0] = local_54 * 64.0 + *(float *)(iVar6 + 0x10);
    local_40 = local_4c + *(float *)(iVar6 + 0xc);
    local_44 = local_50 + *(float *)(iVar6 + 8);
  }
  else {
    FUN_10066df0();
    iStack_60 = -0x20;
    if (0.0 <= *(float *)(*(int *)(param_1 + 0x40) + 0x71c)) {
      iStack_60 = 0x20;
    }
    fVar3 = (float)iStack_60;
    iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 4);
    local_54 = fVar3 * gpGlobals->v_forward[2] + *(float *)(iVar6 + 0x10);
    local_58 = fVar3 * gpGlobals->v_forward[1] + *(float *)(iVar6 + 0xc);
    local_5c = fVar3 * gpGlobals->v_forward[0] + *(float *)(iVar6 + 8);
  }
  FUN_10067870();
  if (1.0 <= fStack_28) {
    return;
  }
  if ((peStack_8 == (edict_t *)0x0) &&
     (peStack_8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peStack_8 == (edict_t *)0x0)) {
    return;
  }
  this = peStack_8->pvPrivateData;
  if (this == (int *)0x0) {
    return;
  }
  iVar6 = (**(code **)(*this + 0xa8))();
  if ((iVar6 != 0) && (*(float *)(*(int *)(param_1 + 0x40) + 0x718) == 0.0)) {
    return;
  }
  iVar6 = this[1];
  if (*(float *)(iVar6 + 0x16c) == 0.0) {
    return;
  }
  if ((*(uint *)(iVar6 + 0x1a4) & 0x2000000) != 0) {
    return;
  }
  if (*(char *)(iVar6 + 0x118) < '\0') {
    return;
  }
  iVar7 = (**(code **)(**(int **)(param_1 + 0x40) + 0x94))();
  iVar6 = *(int *)(param_1 + 0x40);
  iVar1 = *(int *)(iVar6 + 4);
  if (iVar7 == 0) {
    fStack_64 = SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                     *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                     *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20));
  }
  else {
    fStack_64 = SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                     *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                     *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)) * 0.1;
  }
  if (*(int **)(iVar6 + 0x714) == this) {
    return;
  }
  if (*(float *)(iVar6 + 0x718) != 0.0) {
    if (*(char *)(iVar6 + 0x720) == '\0') {
      DAT_100cbf11 = 1;
    }
    iVar6 = *(int *)(param_1 + 0x40);
    fStack_64 = ABS(*(float *)(iVar6 + 0x71c));
    *(float *)(iVar6 + 0x71c) = *(float *)(iVar6 + 0x71c) * 0.5;
    if (*(float *)(*(int *)(param_1 + 0x40) + 0x71c) < 5.0) {
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x71c) = 0;
    }
    iVar6 = (**(code **)(*this + 0xa8))();
    if (iVar6 != 0) {
      if ((_DAT_10093a90 == 0.0) && (iVar6 = (**(code **)(*DAT_1009f494 + 200))(), iVar6 == 1))
      goto LAB_1005cce1;
      piVar2 = *(int **)(param_1 + 0x40);
      if ((char)piVar2[0x1c8] == '\0') {
        uVar8 = FUN_100439e0(piVar2,this,unaff_EBX,local_3c);
        if ((char)uVar8 != '\0') goto LAB_1005cce1;
        if (((15.0 < unaff_EBX) && ((float)this[0x1a5] < gpGlobals->time)) &&
           (*(char *)((int)this + 0x731) == '\0')) {
          FUN_10056080(this,0xfffffffe);
        }
        if (30.0 < unaff_EBX) {
          iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 4);
          iVar1 = this[1];
          fStack_64 = SQRT(*(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28) +
                           *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                           *(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20));
          local_54 = *(float *)(iVar1 + 8) - *(float *)(iVar6 + 8);
          fVar4 = *(float *)(iVar1 + 0xc) - *(float *)(iVar6 + 0xc);
          local_40 = *(float *)(iVar1 + 0x10) - *(float *)(iVar6 + 0x10);
          fVar3 = SQRT(local_54 * local_54 + fVar4 * fVar4 + local_40 * local_40);
          if (fVar3 == 0.0) {
            local_54 = 0.0;
            fVar4 = 0.0;
            local_40 = 1.0;
          }
          else {
            fVar3 = 1.0 / fVar3;
            local_54 = local_54 * fVar3;
            fVar4 = fVar4 * fVar3;
            local_40 = local_40 * fVar3;
          }
          local_54 = local_54 * fStack_64;
          local_5c = fVar4 * fStack_64 + *(float *)(iVar1 + 0x24);
          local_58 = local_40 * fStack_64 + *(float *)(iVar1 + 0x28);
          *(float *)(iVar1 + 0x20) = local_54 + *(float *)(iVar1 + 0x20);
          *(float *)(iVar1 + 0x24) = local_5c;
          *(float *)(iVar1 + 0x28) = local_58;
          *(undefined4 *)(this[1] + 0x28) = 0x436b0000;
        }
        uVar8 = *(undefined4 *)(this[1] + 0x208);
        iVar6 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        iVar6 = iVar6 + 0x5f;
        pcVar9 = s_player_kungfuhit_wav_10098260;
        this_00 = extraout_ECX;
      }
      else if ((char)piVar2[0x1c8] == '\x02') {
        uVar5 = FUN_10043720((int)piVar2,this);
        if ((char)uVar5 != '\0') goto LAB_1005cce1;
        uVar8 = *(undefined4 *)(this[1] + 0x208);
        iVar6 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        iVar6 = iVar6 + 0x5f;
        pcVar9 = s_weapons_katana_hit_body_wav_100987dc;
        this_00 = extraout_ECX_00;
      }
      else {
        uVar8 = FUN_10043870((int)piVar2,this);
        if ((char)uVar8 != '\0') goto LAB_1005cce1;
        uVar8 = *(undefined4 *)(this[1] + 0x208);
        iVar6 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        iVar6 = iVar6 + 0x5f;
        pcVar9 = s_weapons_knife_knife_hitbody_wav_10098644;
        this_00 = extraout_ECX_01;
      }
      EMIT_SOUND_DYN(this_00,uVar8,4,pcVar9,0x3f800000,0x3f4ccccd,0,iVar6);
    }
  }
  FUN_1006a2f0();
  iVar6 = *this;
  FUN_1000a540(&stack0xffffff78,(undefined4 *)(param_1 + 0x24));
  (**(code **)(iVar6 + 0x34))(*(undefined4 *)(*(int *)(param_1 + 0x40) + 4),fStack_64);
  uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 4);
  FUN_1006a310(uVar8,uVar8);
LAB_1005cce1:
  DAT_100cbf11 = 0;
  *(int **)(*(int *)(param_1 + 0x40) + 0x714) = this;
  return;
}

/* 1005cd00  FUN_1005cd00  (929 bytes)
 * undefined4 FUN_1005cd00(int param_1)
 * called by: CBasePlayer::Jump
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1005cd00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined3 extraout_var;
  float *pfVar6;
  void *this;
  float10 fVar7;
  float fVar8;
  undefined1 *puVar9;
  float fVar10;
  double *pdVar11;
  float fVar12;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  double dStack_8;
  
  if ((DAT_100cbf10 & 1) == 0) {
    DAT_100cbf10 = DAT_100cbf10 | 1;
    FUN_1006ee3b(FUN_1005d0d0);
  }
  if ((DAT_100cbf10 & 2) == 0) {
    DAT_100cbf10 = DAT_100cbf10 | 2;
    FUN_1006ee3b(FUN_1005d0c0);
  }
  if ((DAT_100cbf10 & 4) == 0) {
    DAT_100cbf10 = DAT_100cbf10 | 4;
    FUN_1006ee3b(FUN_1005d0b0);
  }
  if (*(float *)(param_1 + 8) <= gpGlobals->time) {
    iVar5 = *(int *)(param_1 + 0x40);
    if (((((*(uint *)(*(int *)(iVar5 + 4) + 0x250) & 0x30c30) == 0) &&
         ((*(uint *)(*(int *)(iVar5 + 4) + 0x1a4) & 0x4000) == 0)) &&
        (*(float *)(param_1 + 0xc) <= gpGlobals->time)) &&
       (((iVar1 = *(int *)(iVar5 + 0x968), iVar1 == 0 || (*(int *)(iVar1 + 0x78) != 0x10)) ||
        (*(int *)(iVar1 + 0xbc) != 0)))) {
      fVar7 = (float10)FUN_100551c0(iVar5);
      *(float *)(param_1 + 0xc) = (float)(fVar7 * (float10)0.7 + (float10)gpGlobals->time);
      FUN_10066df0();
      puVar4 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x40) + 0x144))();
      _DAT_100cbf04 = *puVar4;
      _DAT_100cbf08 = puVar4[1];
      _DAT_100cbf0c = puVar4[2];
      _DAT_100cbef8 = 2;
      iVar5 = (*g_engfuncs.pfnRandomLong)(0,2);
      if (iVar5 == 0) {
        DAT_100cbee0 = 10;
      }
      else if (iVar5 == 1) {
        DAT_100cbee0 = 0xe;
      }
      else if (iVar5 == 2) {
        DAT_100cbee0 = 0xd;
      }
      iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      if ((20.0 < SQRT(*(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28) +
                       *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                       *(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20)) * 0.06666667) ||
         (10.0 <= SQRT(*(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28) +
                       *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                       *(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20)) * 0.06666667)) {
        if (SQRT(*(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28) +
                 *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                 *(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20)) * 0.06666667 <= 20.0) {
          DAT_100cbed8 = SQRT(*(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28) +
                              *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                              *(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20)) * 0.06666667;
        }
        else {
          DAT_100cbed8 = 20.0;
        }
      }
      else {
        DAT_100cbed8 = 10.0;
      }
      uVar3 = FUN_10042c30(*(int *)(param_1 + 0x40));
      if (CONCAT31(extraout_var,uVar3) == 0) {
        fVar8 = 1.0;
      }
      else {
        fVar8 = 2.0;
      }
      DAT_100cbed8 = fVar8 * DAT_100cbed8;
      FUN_1000a540(auStack_38,gpGlobals->v_forward);
      pdVar11 = &dStack_8;
      fVar12 = 48.0;
      fVar10 = 2.638974e-29;
      pfVar6 = (float *)FUN_10014e80(gpGlobals->v_forward,(float *)pdVar11,48.0);
      puVar9 = &stack0xffffffbc;
      fVar8 = 2.638979e-29;
      FUN_1000c610(&DAT_100cbf04,(float *)&stack0xffffffbc,pfVar6);
      FUN_1000a540(&stack0xffffffb0,(undefined4 *)&DAT_100cbf04);
      fVar8 = FUN_10056f20(*(int **)(param_1 + 0x40),fVar8,puVar9,pfVar6,fVar10,(float)pdVar11,
                           fVar12);
      if (fVar8 != 0.0) {
        CTSAnimation::Animate
                  ((CTSAnimation *)(*(int **)(param_1 + 0x40) + 0x9d),*(int **)(param_1 + 0x40),
                   DAT_100cbee0);
        iVar5 = *(int *)(param_1 + 0x40);
        fVar7 = FUN_10066590();
        if ((float10)*(float *)(iVar5 + 0x118) < fVar7) {
          fVar7 = (float10)FUN_100551c0(*(int *)(param_1 + 0x40));
          dStack_8 = (double)(fVar7 * (float10)0.7);
          fVar7 = FUN_10066590();
          *(float *)(*(int *)(param_1 + 0x40) + 0x118) = (float)(fVar7 + (float10)dStack_8);
        }
        uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x208);
        iVar5 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        uStack_30 = 0x1005d08b;
        EMIT_SOUND_DYN(this,uVar2,4,s_player_closecombat_wav_100987c4,0x3f800000,0x3f4ccccd,0,
                       iVar5 + 0x5f);
        return 1;
      }
    }
  }
  return 0;
}

/* 1005d0b0  FUN_1005d0b0  (1 bytes)
 * undefined FUN_1005d0b0()
 */
void FUN_1005d0b0(void)

{
  return;
}

/* 1005d0c0  FUN_1005d0c0  (1 bytes)
 * undefined FUN_1005d0c0()
 */
void FUN_1005d0c0(void)

{
  return;
}

/* 1005d0d0  FUN_1005d0d0  (1 bytes)
 * undefined FUN_1005d0d0()
 */
void FUN_1005d0d0(void)

{
  return;
}

/* 1005d0e0  FUN_1005d0e0  (1307 bytes)
 * undefined4 FUN_1005d0e0(float * param_1)
 * called by: CBasePlayer::Jump
 */
undefined4 __fastcall FUN_1005d0e0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  void *this;
  void *this_00;
  undefined4 *puVar8;
  int iVar9;
  float10 fVar10;
  longlong lVar11;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  float in_stack_ffffffc0;
  float fVar12;
  float local_c;
  float local_4;
  
  fVar12 = *(float *)(*(int *)((int)param_1[0x10] + 4) + 0x24);
  fVar1 = *(float *)(*(int *)((int)param_1[0x10] + 4) + 0x20);
  DAT_100cbedc = gpGlobals->time <= param_1[5] && *param_1 <= gpGlobals->time;
  if ((*(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xb0c30) != 0) {
    DAT_100cbedc = '\0';
  }
  if (gpGlobals->time < param_1[2]) {
    DAT_100cbedc = '\0';
  }
  bVar6 = FUN_1002b380((int)param_1[0x10]);
  if (CONCAT31(extraout_var,bVar6) != 0) {
    DAT_100cbedc = '\0';
  }
  fVar4 = param_1[0x10];
  if (((*(uint *)(*(int *)((int)fVar4 + 4) + 0x1a4) & 0x200) != 0) ||
     (fVar2 = gpGlobals->time, fVar3 = *(float *)((int)fVar4 + 0xae0),
     fVar10 = (float10)FUN_100551c0((int)fVar4), (float10)(fVar2 - fVar3) <= fVar10 * (float10)0.7))
  {
    if (DAT_100cbedc != '\0') {
      if (80.0 <= SQRT(fVar12 * fVar12 + fVar1 * fVar1)) {
        iVar9 = *(int *)((int)param_1[0x10] + 4);
        fVar12 = *(float *)(iVar9 + 0x20);
        local_4 = SQRT(*(float *)(iVar9 + 0x28) * *(float *)(iVar9 + 0x28) +
                       *(float *)(iVar9 + 0x24) * *(float *)(iVar9 + 0x24) + fVar12 * fVar12);
        if (local_4 == 0.0) {
          local_c = 0.0;
          fVar12 = 0.0;
          local_4 = 1.0;
        }
        else {
          local_4 = 1.0 / local_4;
          local_c = local_4 * *(float *)(iVar9 + 0x20);
          fVar12 = local_4 * *(float *)(iVar9 + 0x24);
          local_4 = local_4 * *(float *)(iVar9 + 0x28);
        }
        param_1[9] = local_c;
        param_1[10] = fVar12;
        param_1[0xb] = local_4;
        puVar8 = (undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x74);
        fVar12 = 2.639209e-29;
        FUN_1000a540(&stack0xffffffcc,puVar8);
        FUN_1000a540(&stack0xffffffc0,param_1 + 9);
        iVar9 = FUN_1003d5c0(in_stack_ffffffc0,fVar12,(float)puVar8);
      }
      else {
        FUN_10066df0();
        iVar9 = 3;
        fVar12 = gpGlobals->v_forward[1];
        fVar1 = gpGlobals->v_forward[2];
        param_1[9] = -gpGlobals->v_forward[0];
        param_1[10] = -fVar12;
        param_1[0xb] = -fVar1;
      }
      DAT_100cbefc = iVar9;
      bVar6 = FUN_1005b0b0((int)param_1);
      if ((CONCAT31(extraout_var_00,bVar6) != 0) &&
         ((iVar9 == 3 || (*(float *)(*(int *)((int)param_1[0x10] + 4) + 0x74) < -10.0)))) {
        *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
             *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 4;
        *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
             *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x400;
        iVar9 = *(int *)((int)param_1[0x10] + 4);
        *(undefined4 *)(iVar9 + 0x174) = DAT_1009f4a8;
        *(undefined4 *)(iVar9 + 0x178) = DAT_1009f4ac;
        *(undefined4 *)(iVar9 + 0x17c) = DAT_1009f4b0;
        CTSAnimation::Animate
                  ((CTSAnimation *)((int *)param_1[0x10] + 0x9d),(int *)param_1[0x10],0x30);
        *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
             *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x100;
        *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f400000;
        fVar10 = FUN_1005b150();
        *param_1 = (float)(fVar10 + (float10)gpGlobals->time);
        (*g_engfuncs.pfnMessageBegin)
                  (1,DAT_100cbc64,(float *)0x0,
                   *(edict_t **)(*(int *)((int)param_1[0x10] + 4) + 0x208));
        lVar11 = __ftol();
        (*g_engfuncs.pfnWriteByte)((int)lVar11);
        (*g_engfuncs.pfnMessageEnd)();
        uVar5 = *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x208);
        iVar9 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        EMIT_SOUND_DYN(this,uVar5,4,s_player_airwheel_wav_100994b0,0x3f800000,0x3f4ccccd,0,
                       iVar9 + 0x5f);
        param_1[5] = 0.0;
        if (DAT_100cbefc == 3) {
          uVar7 = FUN_10042c30((int)param_1[0x10]);
          uStack00000008 = 0;
          uStack0000000c = 0x40000000;
          if (CONCAT31(extraout_var_01,uVar7) == 0) {
            uStack0000000c = 0x3ff00000;
          }
          fVar10 = (float10)FUN_100551c0((int)param_1[0x10]);
          *(float *)((int)param_1[0x10] + 0x718) =
               (float)(fVar10 * (float10)0.3 + (float10)gpGlobals->time);
          *(float *)((int)param_1[0x10] + 0x71c) =
               (float)((float10)(double)CONCAT44(uStack0000000c,uStack00000008) * (float10)15.0);
          *(undefined1 *)((int)param_1[0x10] + 0x720) = 0;
        }
        return 1;
      }
      bVar6 = FUN_1005b130((int)param_1);
      if ((CONCAT31(extraout_var_02,bVar6) != 0) && (iVar9 != 3)) {
        *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
             *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 4;
        *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
             *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x800;
        iVar9 = *(int *)((int)param_1[0x10] + 4);
        *(undefined4 *)(iVar9 + 0x174) = DAT_1009f4a8;
        *(undefined4 *)(iVar9 + 0x178) = DAT_1009f4ac;
        *(undefined4 *)(iVar9 + 0x17c) = DAT_1009f4b0;
        CTSAnimation::Animate
                  ((CTSAnimation *)((int *)param_1[0x10] + 0x9d),(int *)param_1[0x10],0x31);
        *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
             *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x80;
        *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f400000;
        if (DAT_100cbefc == 2) {
          *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x120) = 0x3e800000;
        }
        fVar10 = FUN_1005b150();
        *param_1 = (float)(fVar10 + (float10)gpGlobals->time);
        (*g_engfuncs.pfnMessageBegin)
                  (1,DAT_100cbc64,(float *)0x0,
                   *(edict_t **)(*(int *)((int)param_1[0x10] + 4) + 0x208));
        lVar11 = __ftol();
        (*g_engfuncs.pfnWriteByte)((int)lVar11);
        (*g_engfuncs.pfnMessageEnd)();
        uVar5 = *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x208);
        iVar9 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        EMIT_SOUND_DYN(this_00,uVar5,4,s_player_airwheel_wav_100994b0,0x3f800000,0x3f4ccccd,0,
                       iVar9 + 0x5f);
        param_1[5] = 0.0;
        return 1;
      }
    }
  }
  else {
    DAT_100cbedc = '\0';
  }
  param_1[5] = gpGlobals->time + 0.3;
  return 0;
}

/* 1005d870  FUN_1005d870  (79 bytes)
 * undefined4 FUN_1005d870(int param_1)
 * called by: pfnStartFrame
 */
undefined4 __cdecl FUN_1005d870(int param_1)

{
  uint uVar1;
  edict_t *peVar2;
  undefined4 uVar3;
  
  if ((0 < param_1) && (param_1 <= gpGlobals->maxClients)) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntIndex)(param_1);
    if (((peVar2 != (edict_t *)0x0) && (peVar2->free == 0)) &&
       ((uVar1 = (peVar2->v).flags, (uVar1 & 0x2000) != 0 || ((uVar1 & 8) != 0)))) {
      uVar3 = GetClassPtr<CBasePlayer>((int)&peVar2->v);
      return uVar3;
    }
  }
  return 0;
}

/* 1005d8c0  FUN_1005d8c0  (325 bytes)
 * undefined FUN_1005d8c0(int param_1, char * param_2, char * param_3)
 * called by: FUN_1005da10, FUN_1005dc30
 */
void __cdecl FUN_1005d8c0(int param_1,char *param_2,char *param_3)

{
  int *this;
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *unaff_ESI;
  char *in_stack_00000010;
  char *pcVar4;
  double dVar5;
  char *value;
  
  value = (char *)0x0;
  this = (int *)FUN_1005e450(param_1 + 0x80);
  this[0x53] = 1;
  this[0x97f] = (int)param_3;
  dVar5 = (double)(float)param_3;
  pcVar1 = gpGlobals->pStringBase + *(int *)(this[1] + 0x1d0);
  pcVar4 = s__s_connected_with_skill__f_100994e4;
  pcVar2 = UTIL_VarArgs((byte_conflict *)s__s_connected_with_skill__f_100994e4);
  (*g_engfuncs.pfnAlertMessage)(at_console,pcVar2,pcVar4,pcVar1,dVar5);
  FUN_1002e360(this,-1);
  (**(code **)(*this + 0xc))();
  iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(this[1] + 0x208));
  pcVar1 = (*g_engfuncs.pfnGetInfoKeyBuffer)((edict_t *)param_1);
  (*g_engfuncs.pfnSetClientKeyValue)(iVar3,pcVar1,in_stack_00000010,unaff_ESI);
  iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(this[1] + 0x208));
  pcVar2 = &DAT_10091ce0;
  pcVar1 = (*g_engfuncs.pfnGetInfoKeyBuffer)((edict_t *)param_1);
  (*g_engfuncs.pfnSetClientKeyValue)(iVar3,pcVar1,pcVar2,value);
  if (*param_2 != '\0') {
    (**(code **)(*DAT_1009f494 + 0xd8))();
  }
  (**(code **)(*DAT_1009f494 + 0x4c))();
  return;
}

/* 1005da10  FUN_1005da10  (507 bytes)
 * undefined FUN_1005da10(char * param_1, char * param_2, char * param_3)
 * called by: FUN_1001e6c0
 */
void __cdecl FUN_1005da10(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  edict_t *peVar5;
  uint uVar6;
  float10 extraout_ST0;
  char *in_stack_00000010;
  char *in_stack_00000014;
  float in_stack_00000018;
  char acStack_58 [4];
  char acStack_54 [28];
  char acStack_38 [56];
  
  if (*param_2 == '\0') {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,6);
    switch(iVar2) {
    case 0:
      iVar2 = 0;
      do {
        cVar1 = *(char *)((int)&DAT_10093df8 + iVar2);
        acStack_58[iVar2] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
      break;
    case 1:
      iVar2 = 0;
      do {
        cVar1 = (&DAT_100982c0)[iVar2];
        acStack_58[iVar2] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
      break;
    case 2:
      iVar2 = 0;
      do {
        cVar1 = s_gordon_10093e10[iVar2];
        acStack_58[iVar2] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
      break;
    case 3:
      iVar2 = 0;
      do {
        cVar1 = s_hitman_10099570[iVar2];
        acStack_58[iVar2] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
      break;
    case 4:
      iVar2 = 0;
      do {
        cVar1 = s_castor_10099568[iVar2];
        acStack_58[iVar2] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
      break;
    case 5:
      iVar2 = 0;
      do {
        cVar1 = s_agent_10099560[iVar2];
        acStack_58[iVar2] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
      break;
    case 6:
      iVar2 = 0;
      do {
        cVar1 = s_laurence_10099554[iVar2];
        acStack_58[iVar2] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
    }
  }
  else {
    iVar2 = -0xc - (int)param_2;
    do {
      cVar1 = *param_2;
      param_2[(int)(acStack_54 + iVar2)] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
  }
  if ((float)in_stack_00000014 < 0.0 == ((float)in_stack_00000014 == 0.0)) {
    if ((3.0 <= (float)in_stack_00000014) || (0.1 < (float)in_stack_00000014)) {
      in_stack_00000010 = in_stack_00000014;
      if (3.0 <= (float)in_stack_00000014) {
        in_stack_00000010 = (char *)0x40400000;
      }
    }
    else {
      in_stack_00000010 = (char *)0x3dcccccd;
    }
  }
  else {
    (*g_engfuncs.pfnRandomFloat)(0.1,1.0);
    in_stack_00000018 = (float)extraout_ST0;
  }
  acStack_38[0] = '\0';
  if (*param_3 == '\0') {
    FUN_1005e380((int)acStack_38,&stack0x00000010);
  }
  else {
    iVar2 = -(int)param_3;
    do {
      cVar1 = *param_3;
      param_3[(int)(acStack_38 + iVar2)] = cVar1;
      param_3 = param_3 + 1;
    } while (cVar1 != '\0');
  }
  uVar6 = 0xffffffff;
  pcVar4 = acStack_38;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pvVar3 = operator_new(~uVar6 - 1);
  pcVar4 = acStack_38;
  do {
    cVar1 = *pcVar4;
    pcVar4[(int)pvVar3 - (int)acStack_38] = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  peVar5 = (*g_engfuncs.pfnCreateFakeClient)(acStack_38);
  if (peVar5 != (edict_t *)0x0) {
    (peVar5->v).netname = (int)pvVar3 - (int)gpGlobals->pStringBase;
    FUN_1005d8c0((int)peVar5,acStack_54,in_stack_00000014);
    return;
  }
  pcVar4 = UTIL_VarArgs((byte_conflict *)s_Could_not_find_any_free_client_s_10099500);
  (*g_engfuncs.pfnAlertMessage)(at_console,pcVar4);
  return;
}

/* 1005dc30  FUN_1005dc30  (378 bytes)
 * undefined FUN_1005dc30(char * param_1)
 * called by: FUN_1001e660
 */
void __cdecl FUN_1005dc30(char *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  edict_t *peVar5;
  uint uVar6;
  float10 extraout_ST0;
  float fStack00000014;
  char *in_stack_00000018;
  char acStack_4c [28];
  char acStack_30 [48];
  
  if (*param_1 == '\0') {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,6);
    switch(iVar2) {
    case 0:
      iVar2 = 0;
      do {
        cVar1 = *(char *)((int)&DAT_10093df8 + iVar2);
        acStack_4c[iVar2 + -0xc] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
      break;
    case 1:
      iVar2 = 0;
      do {
        cVar1 = (&DAT_100982c0)[iVar2];
        acStack_4c[iVar2 + -0xc] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
      break;
    case 2:
      iVar2 = 0;
      do {
        cVar1 = s_gordon_10093e10[iVar2];
        acStack_4c[iVar2 + -0xc] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
      break;
    case 3:
      iVar2 = 0;
      do {
        cVar1 = s_hitman_10099570[iVar2];
        acStack_4c[iVar2 + -0xc] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
      break;
    case 4:
      iVar2 = 0;
      do {
        cVar1 = s_castor_10099568[iVar2];
        acStack_4c[iVar2 + -0xc] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
      break;
    case 5:
      iVar2 = 0;
      do {
        cVar1 = s_agent_10099560[iVar2];
        acStack_4c[iVar2 + -0xc] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
      break;
    case 6:
      iVar2 = 0;
      do {
        cVar1 = s_laurence_10099554[iVar2];
        acStack_4c[iVar2 + -0xc] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
    }
  }
  else {
    iVar2 = -0x14 - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[(int)(acStack_4c + iVar2)] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  (*g_engfuncs.pfnRandomFloat)(0.1,1.0);
  fStack00000014 = (float)extraout_ST0;
  acStack_30[0] = '\0';
  FUN_1005e380((int)acStack_30,&stack0x00000014);
  uVar6 = 0xffffffff;
  pcVar4 = acStack_30;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pvVar3 = operator_new(~uVar6 - 1);
  pcVar4 = acStack_30;
  do {
    cVar1 = *pcVar4;
    pcVar4[(int)pvVar3 - (int)acStack_30] = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  peVar5 = (*g_engfuncs.pfnCreateFakeClient)(acStack_30);
  if (peVar5 != (edict_t *)0x0) {
    (peVar5->v).netname = (int)pvVar3 - (int)gpGlobals->pStringBase;
    FUN_1005d8c0((int)peVar5,acStack_4c,in_stack_00000018);
    return;
  }
  pcVar4 = UTIL_VarArgs((byte_conflict *)s_Could_not_find_any_free_client_s_10099500);
  (*g_engfuncs.pfnAlertMessage)(at_console,pcVar4);
  return;
}

/* 1005ddd0  FUN_1005ddd0  (107 bytes)
 * undefined FUN_1005ddd0(int param_1)
 * called by: CHalfLifeMultiplay::PlayerKilled
 */
void __thiscall FUN_1005ddd0(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  float10 fVar5;
  
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,100);
  if (0x5a < iVar2) {
    pcVar3 = gpGlobals->pStringBase + *(int *)(param_1 + 0x1d0);
    pcVar4 = (char *)((int)this + 0x23f5);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    *(undefined4 *)((int)this + 0x2438) = 0;
    fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(0.5,2.0);
    *(float *)((int)this + 0x23d8) = (float)(fVar5 + (float10)gpGlobals->time);
  }
  return;
}

/* 1005de40  FUN_1005de40  (163 bytes)
 * undefined FUN_1005de40()
 */
void __thiscall FUN_1005de40(CBasePlayer *param_1,int param_2)

{
  char cVar1;
  edict_t *peVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  float10 fVar6;
  
  CBasePlayer::Killed(param_1,param_2);
  peVar2 = *(edict_t **)(param_2 + 0x208);
  if ((peVar2 == (edict_t *)0x0) &&
     (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 == (edict_t *)0x0)) {
    return;
  }
  if (((peVar2->pvPrivateData != (int *)0x0) &&
      (iVar3 = (**(code **)(*(int *)peVar2->pvPrivateData + 0x2c))(), iVar3 == 2)) &&
     (iVar3 = (*g_engfuncs.pfnRandomLong)(0,100), 0x5a < iVar3)) {
    pcVar5 = &param_1[3].field_0x349;
    pcVar4 = gpGlobals->pStringBase + *(int *)(param_2 + 0x1d0);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    *(undefined4 *)&param_1[3].field_0x38c = 2;
    fVar6 = (float10)(*g_engfuncs.pfnRandomFloat)(0.5,2.0);
    *(float *)&param_1[3].field_0x32c = (float)(fVar6 + (float10)gpGlobals->time);
  }
  return;
}

/* 1005def0  FUN_1005def0  (22 bytes)
 * undefined FUN_1005def0(int * param_1)
 */
void __fastcall FUN_1005def0(int *param_1)

{
  FUN_10061220(param_1 + 0x2b9);
  CBasePlayer::Spawn(param_1);
  return;
}

/* 1005df10  FUN_1005df10  (51 bytes)
 * undefined FUN_1005df10()
 * called by: FUN_1005fe40
 */
undefined4 * FUN_1005df10(int param_1)

{
  int iVar1;
  
  if (*(int *)(&DAT_100d905c + param_1 * 4) < 1) {
    return (undefined4 *)&DAT_1009f428;
  }
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,*(int *)(&DAT_100d905c + param_1 * 4) + -1);
  return &DAT_100cd05c + (iVar1 + param_1 * 0x100) * 0x10;
}

/* 1005df50  FUN_1005df50  (559 bytes)
 * undefined FUN_1005df50(void)
 * called by: FUN_1005e180
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005df50(void)

{
  char cVar1;
  int iVar2;
  FILE *pFVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  void *this;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  char acStack_640 [64];
  char local_600 [256];
  char acStack_500 [256];
  char acStack_400 [1024];
  
  (*g_engfuncs.pfnGetGameDir)(local_600);
  iVar6 = -1;
  iVar2 = 0;
  pcVar4 = local_600;
  do {
    pcVar5 = pcVar4;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  *(undefined2 *)(pcVar5 + -1) = DAT_100995a4;
  puVar8 = &DAT_100cd05c;
  for (iVar6 = 0x3000; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  _DAT_100d905c = 0;
  _DAT_100d9060 = 0;
  _DAT_100d9064 = 0;
  do {
    pcVar4 = local_600 + iVar2;
    acStack_500[iVar2] = *pcVar4;
    iVar2 = iVar2 + 1;
  } while (*pcVar4 != '\0');
  iVar2 = -1;
  pcVar4 = acStack_500;
  do {
    pcVar5 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar5 + -1) = s_bot_say_txt_10099598._0_4_;
  *(undefined4 *)(pcVar5 + 3) = s_bot_say_txt_10099598._4_4_;
  *(undefined4 *)(pcVar5 + 7) = s_bot_say_txt_10099598._8_4_;
  pFVar3 = (FILE *)FUN_1006f2ff(acStack_500,&DAT_10099594);
  iVar2 = -1;
  if (pFVar3 != (FILE *)0x0) {
    pcVar4 = FUN_1006f26c(acStack_400,0x400,(undefined4 *)pFVar3);
    while (pcVar4 != (char *)0x0) {
      FUN_1006ea8e(acStack_400,&DAT_10091bec);
      iVar6 = 8;
      bVar10 = true;
      pcVar4 = acStack_640;
      pcVar5 = s_offense_1009958c;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar10 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar10);
      if (bVar10) {
        iVar2 = 0;
      }
      else {
        iVar6 = 9;
        bVar10 = true;
        pcVar4 = acStack_640;
        pcVar5 = s_freetime_10099580;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar10 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar10);
        if (bVar10) {
          iVar2 = 1;
        }
        else {
          iVar6 = 7;
          bVar10 = true;
          pcVar4 = acStack_640;
          pcVar5 = s_killed_10099578;
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar10 = *pcVar4 == *pcVar5;
            pcVar4 = pcVar4 + 1;
            pcVar5 = pcVar5 + 1;
          } while (bVar10);
          if (bVar10) {
            iVar2 = 2;
          }
          else if (iVar2 != -1) {
            iVar6 = iVar2 * 0x100;
            pcVar4 = acStack_400;
            pcVar5 = (char *)(&DAT_100cd05c + (*(int *)(&DAT_100d905c + iVar2 * 4) + iVar6) * 0x10);
            do {
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
              *pcVar5 = cVar1;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            uVar7 = 0xffffffff;
            pcVar4 = (char *)(&DAT_100cd05c + (*(int *)(&DAT_100d905c + iVar2 * 4) + iVar6) * 0x10);
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
            iVar9 = ~uVar7 - 2;
            while ((-1 < iVar9 &&
                   (this = (void *)(int)*(char *)((int)&DAT_100cd05c +
                                                 iVar9 + (*(int *)(&DAT_100d905c + iVar2 * 4) +
                                                         iVar6) * 0x40),
                   uVar7 = FUN_1006e8a7(this,(int)this), uVar7 == 0))) {
              iVar9 = iVar9 + -1;
            }
            while (iVar9 = iVar9 + 1, iVar9 < 0x40) {
              *(undefined1 *)
               ((int)&DAT_100cd05c + iVar9 + (*(int *)(&DAT_100d905c + iVar2 * 4) + iVar6) * 0x40) =
                   0;
            }
            if ((*(char *)(&DAT_100cd05c + (*(int *)(&DAT_100d905c + iVar2 * 4) + iVar6) * 0x10) !=
                 '\0') &&
               (iVar6 = *(int *)(&DAT_100d905c + iVar2 * 4) + 1,
               *(int *)(&DAT_100d905c + iVar2 * 4) = iVar6, 0x3f < iVar6)) break;
          }
        }
      }
      pcVar4 = FUN_1006f26c(acStack_400,0x400,(undefined4 *)pFVar3);
    }
    FUN_1006f1ef(pFVar3);
  }
  return;
}

/* 1005e180  FUN_1005e180  (502 bytes)
 * undefined FUN_1005e180(void)
 * called by: FUN_10044810
 */
void FUN_1005e180(void)

{
  char cVar1;
  int iVar2;
  FILE *pFVar3;
  char *pcVar4;
  char *pcVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  void *this;
  undefined4 *puVar9;
  char acStack_700 [256];
  char acStack_600 [256];
  char local_500 [256];
  char acStack_400 [1024];
  
  (*g_engfuncs.pfnGetGameDir)(local_500);
  iVar7 = -1;
  iVar2 = 0;
  pcVar4 = local_500;
  do {
    pcVar5 = pcVar4;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  *(undefined2 *)(pcVar5 + -1) = DAT_100995a4;
  puVar9 = &DAT_100cbf18;
  for (iVar7 = 0x3454; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  do {
    pcVar4 = local_500 + iVar2;
    acStack_700[iVar2] = *pcVar4;
    iVar2 = iVar2 + 1;
  } while (*pcVar4 != '\0');
  iVar2 = -1;
  pcVar4 = acStack_700;
  do {
    pcVar5 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar5 + -1) = s_bots_txt_100995ac._0_4_;
  *(undefined4 *)(pcVar5 + 3) = s_bots_txt_100995ac._4_4_;
  pcVar5[7] = s_bots_txt_100995ac[8];
  pFVar3 = (FILE *)FUN_1006f2ff(acStack_700,&DAT_10099594);
  if (pFVar3 != (FILE *)0x0) {
    pcVar4 = FUN_1006f26c(acStack_400,0x400,(undefined4 *)pFVar3);
    while (pcVar4 != (char *)0x0) {
      pcVar4 = acStack_400;
      pcVar5 = (char *)(&DAT_100cbf18 + DAT_100cd018 * 0x10);
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      uVar8 = 0xffffffff;
      pcVar4 = (char *)(&DAT_100cbf18 + DAT_100cd018 * 0x10);
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar2 = ~uVar8 - 2;
      while ((-1 < iVar2 &&
             (this = (void *)(int)*(char *)((int)&DAT_100cbf18 + iVar2 + DAT_100cd018 * 0x40),
             uVar8 = FUN_1006e8a7(this,(int)this), uVar8 == 0))) {
        iVar2 = iVar2 + -1;
      }
      while (iVar2 = iVar2 + 1, iVar2 < 0x40) {
        *(undefined1 *)((int)&DAT_100cbf18 + iVar2 + DAT_100cd018 * 0x40) = 0;
      }
      if (*(char *)(&DAT_100cbf18 + DAT_100cd018 * 0x10) != '\0') {
        puVar6 = FUN_1006ead0(&DAT_100cbf18 + DAT_100cd018 * 0x10,&DAT_100995a8);
        if (puVar6 != (uint *)0x0) {
          pcVar4 = (char *)((int)puVar6 + 2);
          acStack_600[0] = '\0';
          iVar2 = -(int)pcVar4;
          do {
            cVar1 = *pcVar4;
            pcVar4[(int)(acStack_600 + iVar2)] = cVar1;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          FUN_1006ea8e(acStack_600,&DAT_100945e0);
          pcVar4 = &DAT_1009f428;
          do {
            cVar1 = *pcVar4;
            *(char *)((int)(puVar6 + -0x4027d0a) + (int)pcVar4) = cVar1;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
        }
        DAT_100cd018 = DAT_100cd018 + 1;
        if (0x3f < DAT_100cd018) break;
      }
      pcVar4 = FUN_1006f26c(acStack_400,0x400,(undefined4 *)pFVar3);
    }
    FUN_1006f1ef(pFVar3);
  }
  FUN_1005df50();
  return;
}

/* 1005e380  FUN_1005e380  (207 bytes)
 * undefined FUN_1005e380(int param_1, undefined4 * param_2)
 * called by: FUN_1005da10, FUN_1005dc30
 */
void __cdecl FUN_1005e380(int param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (DAT_100cd018 < 1) {
    pcVar2 = &DAT_100995b8;
    do {
      cVar1 = *pcVar2;
      pcVar2[param_1 + -0x100995b8] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  }
  while( true ) {
    iVar5 = -1;
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,DAT_100cd018 + -1);
    for (iVar4 = iVar3; (iVar3 < DAT_100cd018 || (-1 < iVar4)); iVar4 = iVar4 + -1) {
      if (iVar5 != -1) goto LAB_1005e406;
      if ((-1 < iVar4) && (*(char *)((int)&DAT_100cd01c + iVar4) == '\0')) {
        iVar5 = iVar4;
      }
      if ((iVar3 < DAT_100cd018) && (*(char *)((int)&DAT_100cd01c + iVar3) == '\0')) {
        iVar5 = iVar3;
      }
      iVar3 = iVar3 + 1;
    }
    if (iVar5 != -1) break;
    puVar6 = &DAT_100cd01c;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
  }
LAB_1005e406:
  *(undefined1 *)((int)&DAT_100cd01c + iVar5) = 1;
  pcVar2 = (char *)(&DAT_100cbf18 + iVar5 * 0x10);
  iVar4 = param_1 - (int)pcVar2;
  do {
    cVar1 = *pcVar2;
    pcVar2[iVar4] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (0.0 < *(float *)(&DAT_100ccf18 + iVar5 * 4)) {
    *param_2 = *(undefined4 *)(&DAT_100ccf18 + iVar5 * 4);
  }
  return;
}

/* 1005e450  FUN_1005e450  (346 bytes)
 * undefined FUN_1005e450(int param_1)
 * called by: FUN_1005d8c0
 */
void __cdecl FUN_1005e450(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  code *pcStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  pcStack_8 = FUN_1007ffa1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((param_1 == 0) &&
     (ExceptionList = &pvStack_c, peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0
     )) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x2600),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBaseMonster::vftable;
    pcStack_8 = (code *)puVar3;
    CTSAnimation::CTSAnimation((int)(puVar3 + 0x9d));
    *puVar3 = &CBasePlayer::vftable;
    FUN_100067f0(puVar3 + 0x2d4,0xc,0x200,FUN_1005e5b0);
    puVar3[0x8d6] = &PTR_FUN_100893b0;
    puVar3[0x8d9] = &PTR_FUN_100893ac;
    puVar3[0x8dc] = &PTR_FUN_100893a8;
    puVar3[0x8df] = &PTR_FUN_100893a0;
    puVar3[0x8e6] = DAT_1009f4a8;
    puVar3[0x8e7] = DAT_1009f4ac;
    puVar3[0x8e8] = DAT_1009f4b0;
    puVar3[0x8e9] = &PTR_FUN_10089398;
    puVar3[0x8eb] = &PTR_FUN_10089390;
    puVar3[0x8ed] = &PTR_FUN_10089388;
    puVar3[0x8ef] = &PTR_FUN_10089380;
    puVar3[0x8f2] = &PTR_FUN_10089378;
    puVar3[0x8f5] = &PTR_FUN_10089370;
    *puVar3 = &PTR_BreakableRespawn_10089220;
    puVar3[1] = param_1;
    ExceptionList = pvStack_4;
    return;
  }
  iRam00000004 = peVar1;
  ExceptionList = pvStack_c;
  return;
}

/* 1005e5b0  FUN_1005e5b0  (3 bytes)
 * undefined FUN_1005e5b0()
 */
undefined4 __fastcall FUN_1005e5b0(undefined4 param_1)

{
  return param_1;
}

/* 1005e5c0  FUN_1005e5c0  (1 bytes)
 * undefined FUN_1005e5c0()
 */
void FUN_1005e5c0(void)

{
  return;
}

/* 1005e5d0  FUN_1005e5d0  (3 bytes)
 * undefined FUN_1005e5d0()
 */
undefined4 FUN_1005e5d0(void)

{
  return 0;
}

/* 1005e5e0  FUN_1005e5e0  (959 bytes)
 * undefined FUN_1005e5e0()
 */
void __thiscall FUN_1005e5e0(int param_1,float *param_2,void *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  uint uVar7;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  if (gpGlobals->time < *(float *)(param_1 + 4)) {
    return;
  }
  fVar6 = (float10)FUN_100551c0((int)param_2);
  if ((float10)1.0 <= (fVar6 * (float10)0.1) / (float10)*(float *)((int)param_3 + 0x1b18)) {
    fVar6 = (float10)1.0;
  }
  else {
    fVar6 = (float10)FUN_100551c0((int)param_2);
    fVar6 = (fVar6 * (float10)0.1) / (float10)*(float *)((int)param_3 + 0x1b18);
  }
  *(float *)(param_1 + 4) = (float)((float10)gpGlobals->time + fVar6);
  FUN_1005ed60(param_2,param_3);
  if (*(int *)((int)param_3 + 0x190c) == 0) {
    return;
  }
  iVar4 = FUN_100616a0((int)param_3);
  if (iVar4 == 0) {
    FUN_100613b0(param_3,4);
    iVar4 = (**(code **)(**(int **)((int)param_3 + 0x190c) + 0x94))();
    if (iVar4 != 0) {
      iVar4 = *(int *)(*(int *)((int)param_3 + 0x190c) + 4);
      *(undefined4 *)((int)param_3 + 0x19e0) = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)((int)param_3 + 0x19e4) = *(undefined4 *)(iVar4 + 0xc);
      uVar2 = *(undefined4 *)(iVar4 + 0x10);
      *(undefined4 *)((int)param_3 + 0x190c) = 0;
      *(undefined4 *)((int)param_3 + 0x19e8) = uVar2;
    }
    FUN_1005f230(param_2,param_3);
    return;
  }
  if (*(float *)((int)param_3 + 0x1b18) <= 0.5) {
    fVar1 = 0.5;
  }
  else {
    fVar1 = *(float *)((int)param_3 + 0x1b18);
  }
  iStack_4 = (*g_engfuncs.pfnRandomLong)(-0x20,0x20);
  fStack_14 = (float)iStack_4;
  iStack_4 = (*g_engfuncs.pfnRandomLong)(-0x20,0x20);
  fStack_10 = (float)iStack_4;
  iStack_4 = (*g_engfuncs.pfnRandomLong)(-0x10,0x20);
  fVar1 = 1.0 / fVar1;
  iVar4 = *(int *)(*(int *)((int)param_3 + 0x190c) + 4);
  fStack_14 = fStack_14 * fVar1 + *(float *)(iVar4 + 8);
  fStack_1c = fStack_10 * fVar1 + *(float *)(iVar4 + 0xc);
  fStack_18 = fVar1 * (float)iStack_4 + *(float *)(iVar4 + 0x10);
  fStack_10 = fStack_1c;
  fStack_c = fStack_18;
  FUN_100616b0(param_3,param_2);
  iVar4 = FUN_1005ee10(param_2,param_3);
  if (iVar4 == 0) {
    puVar5 = (undefined4 *)
             FUN_1005e9a0(&fStack_1c,param_2,param_3,
                          *(int *)(*(int *)((int)param_3 + 0x190c) + 4) + 8,
                          *(int *)((int)param_3 + 0x190c));
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    *(undefined4 *)((int)param_3 + 0x18fc) = *puVar5;
    *(undefined4 *)((int)param_3 + 0x1900) = uVar2;
    *(undefined1 *)((int)param_3 + 0x1908) = 1;
    *(undefined4 *)((int)param_3 + 0x1904) = uVar3;
    FUN_10061390(param_3,1);
    if (gpGlobals->time <= *(float *)(param_1 + 0x10)) goto LAB_1005e904;
    fStack_c = (float)(*g_engfuncs.pfnRandomLong)(5,10);
    *(float *)(param_1 + 0x10) = (float)(int)fStack_c + gpGlobals->time;
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,100);
    if (0x46 < iVar4) {
      fVar6 = (float10)(*g_engfuncs.pfnRandomFloat)(0.9,1.6);
      FUN_100613e0(param_3,4,(float)fVar6);
      goto LAB_1005e904;
    }
    uVar7 = 8;
  }
  else {
    *(undefined1 *)((int)param_3 + 0x1908) = 1;
    uVar7 = 1;
    iVar4 = *(int *)(*(int *)((int)param_3 + 0x190c) + 4);
    *(undefined4 *)((int)param_3 + 0x18fc) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)((int)param_3 + 0x1900) = *(undefined4 *)(iVar4 + 0xc);
    *(undefined4 *)((int)param_3 + 0x1904) = *(undefined4 *)(iVar4 + 0x10);
  }
  FUN_10061390(param_3,uVar7);
LAB_1005e904:
  FUN_1005ee60(param_2,param_3,uStack_8);
  if ((fStack_14 < 128.0) && (*(float *)(param_1 + 0x18) < gpGlobals->time)) {
    FUN_100613e0(param_3,2,0.6);
    fVar6 = (float10)FUN_100551c0((int)param_2);
    if ((float10)10.0 <= fVar6 / (float10)*(float *)((int)param_3 + 0x1b18)) {
      fVar6 = (float10)10.0;
    }
    else {
      fVar6 = (float10)FUN_100551c0((int)param_2);
      fVar6 = fVar6 / (float10)*(float *)((int)param_3 + 0x1b18);
    }
    *(float *)(param_1 + 0x18) = (float)((float10)gpGlobals->time + fVar6);
  }
  if (param_2[0x1a8] != 0.0) {
    FUN_10061390(param_3,0x200);
  }
  return;
}

/* 1005e9a0  FUN_1005e9a0  (955 bytes)
 * undefined FUN_1005e9a0()
 * called by: FUN_1005e5e0
 */
void __thiscall FUN_1005e9a0(int param_1,float *param_2,int param_3,int param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  longlong lVar8;
  int iStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 uStack_68;
  float fStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (gpGlobals->time < *(float *)(param_1 + 0x14)) {
    *param_2 = *(float *)(param_1 + 0x1c);
    param_2[1] = *(float *)(param_1 + 0x20);
    param_2[2] = *(float *)(param_1 + 0x24);
    return;
  }
  iStack_5c = param_1;
  fVar7 = (float10)FUN_100551c0(param_3);
  if ((float10)7.0 <= (fVar7 * (float10)3.0) / (float10)*(float *)(param_4 + 0x1b18)) {
    fVar7 = (float10)7.0;
  }
  else {
    fVar7 = (float10)FUN_100551c0(param_3);
    fVar7 = (fVar7 * (float10)3.0) / (float10)*(float *)(param_4 + 0x1b18);
  }
  iStack_58 = 0x2d;
  *(float *)(param_1 + 0x14) = (float)((float10)gpGlobals->time + fVar7);
  iVar6 = 8;
  iStack_78 = (*g_engfuncs.pfnRandomLong)(0,8);
  iStack_78 = iStack_78 * 0x2d;
  uStack_68._0_4_ = 0x400;
  fStack_74 = *param_5;
  fStack_70 = param_5[1];
  fStack_6c = param_5[2];
  iVar5 = *(int *)(param_3 + 4);
  fVar2 = *param_5 - *(float *)(iVar5 + 8);
  fVar4 = param_5[1] - *(float *)(iVar5 + 0xc);
  fVar3 = param_5[2] - *(float *)(iVar5 + 0x10);
  if (1024.0 < SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3)) {
    fStack_60 = param_5[2] - *(float *)(iVar5 + 0x10);
    iVar6 = 4;
    iStack_58 = 0x16;
    uStack_68 = (double)CONCAT44(param_5[1] - *(float *)(iVar5 + 0xc),
                                 *param_5 - *(float *)(iVar5 + 8));
    iVar5 = UTIL_VecToAngles(&fStack_50,&uStack_68);
    FUN_100668f0(*(float *)(iVar5 + 4));
    lVar8 = __ftol();
    iStack_78 = (int)lVar8;
    uStack_68._0_4_ = 0x800;
  }
  iVar5 = 0;
  iStack_54 = 1;
  if (iVar6 != 0) {
    uStack_68 = (double)(int)uStack_68;
    do {
      iVar1 = *(int *)(param_3 + 4);
      fVar7 = (float10)fcos((float10)iStack_78 * (float10)0.017453292519943295);
      fStack_44 = (float)(fVar7 * (float10)uStack_68);
      fVar7 = (float10)fsin((float10)iStack_78 * (float10)0.017453292519943295);
      fStack_40 = (float)(fVar7 * (float10)uStack_68);
      uStack_48 = *(undefined4 *)(iVar1 + 0x10);
      fStack_4c = fStack_40 + *(float *)(iVar1 + 0xc);
      fStack_50 = fStack_44 + *(float *)(iVar1 + 8);
      FUN_10067850();
      fVar4 = fStack_1c;
      fVar3 = fStack_20;
      fVar2 = fStack_24;
      FUN_10067850();
      if (1.0 <= fStack_28) {
        FUN_10067850();
        if (1.0 <= fStack_28) {
          lVar8 = __ftol();
          if (iVar5 < (int)lVar8) {
            fStack_74 = fVar2;
            fStack_70 = fVar3;
            fStack_6c = fVar4;
            iVar5 = (int)lVar8;
          }
        }
      }
      else {
        FUN_10067850();
        if (1.0 <= fStack_28) {
          *(float *)(iStack_5c + 0x1c) = fVar2;
          *(float *)(iStack_5c + 0x20) = fVar3;
          *(float *)(iStack_5c + 0x24) = fVar4;
          *param_2 = fVar2;
          param_2[1] = fVar3;
          param_2[2] = fVar4;
          return;
        }
      }
      iStack_78 = iStack_78 + iStack_58;
      iStack_54 = iStack_54 + 1;
    } while (iStack_54 <= iVar6);
  }
  *(float *)(iStack_5c + 0x1c) = fStack_74;
  *(float *)(iStack_5c + 0x20) = fStack_70;
  *(float *)(iStack_5c + 0x24) = fStack_6c;
  *param_2 = fStack_74;
  param_2[1] = fStack_70;
  param_2[2] = fStack_6c;
  return;
}

/* 1005ed60  FUN_1005ed60  (172 bytes)
 * undefined FUN_1005ed60()
 * called by: FUN_1005e5e0
 */
void __thiscall FUN_1005ed60(int param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  iVar7 = (int)param_3;
  if ((*(int *)((int)param_3 + 0x190c) == 0) || (*(float *)(param_1 + 0xc) <= gpGlobals->time)) {
    param_3 = 9999.0;
    piVar9 = (int *)(iVar7 + 0x195c);
    *(float *)(param_1 + 0xc) = gpGlobals->time + 3.0;
    iVar8 = 0x10;
    do {
      iVar1 = *piVar9;
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 4);
        iVar3 = *(int *)(param_2 + 4);
        fVar4 = *(float *)(iVar2 + 8) - *(float *)(iVar3 + 8);
        fVar5 = *(float *)(iVar2 + 0xc) - *(float *)(iVar3 + 0xc);
        fVar6 = *(float *)(iVar2 + 0x10) - *(float *)(iVar3 + 0x10);
        fVar4 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6);
        if (fVar4 < param_3) {
          *(int *)(iVar7 + 0x190c) = iVar1;
          param_3 = fVar4;
        }
      }
      piVar9 = piVar9 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}

/* 1005ee10  FUN_1005ee10  (71 bytes)
 * undefined FUN_1005ee10()
 * called by: FUN_1005e5e0
 */
undefined4 FUN_1005ee10(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x968);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(iVar2 + 0x78) != 0x10) {
    return 0;
  }
  if (((*(int *)(iVar2 + 0xbc) != 0) &&
      (cVar1 = *(char *)(*(int *)(iVar2 + 0xc0) + 0x360), cVar1 != '\x03')) && (cVar1 != '\n')) {
    return 0;
  }
  return 1;
}

/* 1005ee60  FUN_1005ee60  (973 bytes)
 * undefined FUN_1005ee60()
 * called by: FUN_1005e5e0
 */
void __thiscall FUN_1005ee60(int param_1,void *param_2,void *param_3,float param_4)

{
  char cVar1;
  void *this;
  int iVar2;
  float10 fVar3;
  
  if (gpGlobals->time < *(float *)(param_1 + 8)) {
    return;
  }
  this = *(void **)((int)param_2 + 0x968);
  if (this == (void *)0x0) {
    return;
  }
  if (*(int *)((int)this + 0x78) != 0x10) {
    return;
  }
  iVar2 = *(int *)((int)this + 0xbc);
  if (iVar2 == 0) {
    if (param_4 < 128.0) {
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,100);
      if (iVar2 < 0x51) {
        FUN_100613e0(param_3,0x800,0.3);
        FUN_10061450(param_3,1);
        iVar2 = (*g_engfuncs.pfnRandomLong)(0,100);
        if (0x50 < iVar2) {
          iVar2 = (*g_engfuncs.pfnRandomLong)(0,100);
          if (0x32 < iVar2) {
            FUN_100613e0(param_3,2,0.1);
          }
          FUN_100613e0(param_3,4,0.1);
        }
      }
      else {
        FUN_100613e0(param_3,1,0.3);
        FUN_10061450(param_3,0x800);
      }
      *(float *)(param_1 + 8) = gpGlobals->time + 0.9;
      return;
    }
    if (256.0 < param_4) {
      FUN_1004a410(this,0);
      fVar3 = (float10)FUN_100551c0((int)param_2);
      if (((fVar3 * (float10)0.3) / (float10)*(float *)((int)param_3 + 0x1b18) <= (float10)0.3) ||
         (fVar3 = (float10)FUN_100551c0((int)param_2),
         (fVar3 * (float10)0.3) / (float10)*(float *)((int)param_3 + 0x1b18) < (float10)3.0)) {
        fVar3 = (float10)FUN_100551c0((int)param_2);
        if ((fVar3 * (float10)0.3) / (float10)*(float *)((int)param_3 + 0x1b18) <= (float10)0.3) {
          fVar3 = (float10)0.3;
        }
        else {
          fVar3 = (float10)FUN_100551c0((int)param_2);
          fVar3 = (fVar3 * (float10)0.3) / (float10)*(float *)((int)param_3 + 0x1b18);
        }
      }
      else {
        fVar3 = (float10)3.0;
      }
      *(float *)(param_1 + 8) = (float)((float10)gpGlobals->time + fVar3);
      return;
    }
    return;
  }
  cVar1 = *(char *)(*(int *)((int)this + 0xc0) + 0x360);
  if (cVar1 == '\x02') {
    FUN_100613e0(param_3,1,0.1);
    *(float *)(param_1 + 8) = gpGlobals->time + 1.0;
    return;
  }
  if (cVar1 == '\n') {
    if (param_4 < 128.0) {
      FUN_100613e0(param_3,1,0.5);
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,100);
      if (0x50 < iVar2) {
        FUN_100613e0(param_3,4,0.1);
      }
    }
    *(float *)(param_1 + 8) = gpGlobals->time + 0.5;
    return;
  }
  if (cVar1 == '\x03') {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,100);
    if ((0x46 < iVar2) || (128.0 < param_4)) {
      FUN_100613e0(param_3,0x800,0.1);
      FUN_10061450(param_3,1);
    }
    else {
      FUN_100613e0(param_3,1,0.1);
    }
    *(float *)(param_1 + 8) = gpGlobals->time + 0.3;
    return;
  }
  if (0 < *(int *)(iVar2 + 4)) {
    if ((*(char *)(iVar2 + 2) != '\0') && (*(char *)(iVar2 + 2) != '\x03')) {
      fVar3 = (float10)(*g_engfuncs.pfnRandomFloat)(0.1,0.2);
      *(float *)(param_1 + 8) = (float)fVar3;
      FUN_100613e0(param_3,1,(float)fVar3);
      *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + gpGlobals->time;
      return;
    }
    fVar3 = (float10)(*g_engfuncs.pfnRandomFloat)(0.3,1.7);
    *(float *)(param_1 + 8) = (float)fVar3;
    FUN_100613e0(param_3,1,(float)fVar3);
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + gpGlobals->time + 0.3;
    return;
  }
  FUN_10061450(param_3,1);
  if (*(int *)((int)this + (uint)*(byte *)(*(int *)((int)this + 0xc0) + 8) * 4 + 0xc4) < 1) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,100);
    if (iVar2 < 0x33) {
      FUN_10056080(param_2,0xffffffff);
    }
    else {
      FUN_1004a410(this,(uint)*(byte *)((int)this + 0xb8));
    }
  }
  else {
    FUN_100613e0(param_3,0x2000,0.1);
  }
  *(float *)(param_1 + 8) = gpGlobals->time + 1.0;
  return;
}

/* 1005f230  FUN_1005f230  (30 bytes)
 * undefined FUN_1005f230()
 * called by: FUN_1005e5e0
 */
void FUN_1005f230(undefined4 param_1,void *param_2)

{
  FUN_10061450(param_2,0x800);
  FUN_10061450(param_2,1);
  return;
}

/* 1005f250  FUN_1005f250  (203 bytes)
 * uint FUN_1005f250(int param_1)
 * called by: FUN_1005f320
 */
uint __cdecl FUN_1005f250(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,100);
  if (0x32 < iVar1) {
    puVar2 = get_weapon_info(param_1);
    if ((*(byte *)(puVar2 + 0x36) & 1) != 0) {
      puVar2 = get_weapon_info(param_1);
      if ((*(byte *)(puVar2 + 0x37) & 1) == 0) {
        uVar3 = 1;
      }
    }
  }
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,100);
  if (0x32 < iVar1) {
    puVar2 = get_weapon_info(param_1);
    if ((*(byte *)(puVar2 + 0x36) & 2) != 0) {
      puVar2 = get_weapon_info(param_1);
      if ((*(byte *)(puVar2 + 0x37) & 2) == 0) {
        uVar3 = uVar3 | 2;
      }
    }
  }
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,100);
  if (0x4b < iVar1) {
    puVar2 = get_weapon_info(param_1);
    if ((*(byte *)(puVar2 + 0x36) & 8) != 0) {
      puVar2 = get_weapon_info(param_1);
      if ((*(byte *)(puVar2 + 0x37) & 8) == 0) {
        uVar3 = uVar3 | 8;
      }
    }
  }
  return uVar3;
}

/* 1005f320  FUN_1005f320  (899 bytes)
 * undefined FUN_1005f320()
 */
void FUN_1005f320(void *param_1,void *param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  
  fVar4 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,1.0);
  fVar1 = (float)fVar4;
  FUN_10055950((int)param_1);
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,5);
  if (iVar2 == 2) {
    iVar2 = 10;
    if (fVar1 <= 0.75) {
      iVar2 = 1;
    }
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_10055970(param_1,0x23,0,0);
    }
  }
  else if (iVar2 == 3) {
    FUN_10055970(param_1,0x22,0,0);
  }
  else {
    iVar2 = 5;
    if (fVar1 <= 0.75) {
      iVar2 = 1;
    }
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_10055970(param_1,0x19,0,0);
    }
  }
  if (fVar1 <= 0.1) {
    iVar2 = 9;
    do {
      FUN_10055970(param_1,0x19,0,0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    goto LAB_1005f588;
  }
  iVar2 = (*g_engfuncs.pfnRandomLong)(1,9);
  switch(iVar2) {
  case 1:
    uVar6 = 0;
    uVar3 = FUN_1005f250(1);
    uVar5 = 1;
    goto LAB_1005f40e;
  case 2:
    uVar6 = 0;
    uVar3 = FUN_1005f250(9);
    FUN_10055970(param_1,9,uVar3,uVar6);
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar2 != 0) {
      FUN_10055970(param_1,9,0,0);
    }
    FUN_100559b0(param_1,2,10);
    break;
  case 3:
    uVar6 = 0;
    uVar3 = FUN_1005f250(0xc);
    FUN_10055970(param_1,0xc,uVar3,uVar6);
    FUN_100559b0(param_1,5,10);
    break;
  case 4:
    uVar6 = 0;
    uVar3 = FUN_1005f250(0xe);
    FUN_10055970(param_1,0xe,uVar3,uVar6);
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar2 != 0) {
      FUN_10055970(param_1,0xe,0,0);
    }
    FUN_100559b0(param_1,7,10);
    break;
  case 5:
    uVar6 = 0;
    uVar3 = FUN_1005f250(8);
    uVar5 = 8;
LAB_1005f40e:
    FUN_10055970(param_1,uVar5,uVar3,uVar6);
    FUN_100559b0(param_1,1,10);
    break;
  case 6:
    uVar6 = 0;
    uVar3 = FUN_1005f250(0x15);
    FUN_10055970(param_1,0x15,uVar3,uVar6);
    FUN_100559b0(param_1,2,10);
    break;
  case 7:
    uVar6 = 0;
    uVar3 = FUN_1005f250(0x16);
    FUN_10055970(param_1,0x16,uVar3,uVar6);
    FUN_100559b0(param_1,9,10);
    break;
  case 8:
    uVar6 = 0;
    uVar3 = FUN_1005f250(0x1c);
    FUN_10055970(param_1,0x1c,uVar3,uVar6);
    FUN_100559b0(param_1,10,10);
    break;
  case 9:
    uVar6 = 0;
    uVar3 = FUN_1005f250(0x1f);
    FUN_10055970(param_1,0x1f,uVar3,uVar6);
    FUN_100559b0(param_1,0xc,10);
  }
LAB_1005f588:
  if ((0.4 < fVar1) && (fVar1 < 0.7)) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(1,6);
    switch(iVar2) {
    case 1:
      uVar6 = 0;
      uVar3 = FUN_1005f250(3);
      FUN_10055970(param_1,3,uVar3,uVar6);
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,1);
      if (iVar2 != 0) {
        FUN_10055970(param_1,3,0,0);
      }
      iVar2 = 1;
      break;
    case 2:
      uVar6 = 0;
      uVar3 = FUN_1005f250(6);
      FUN_10055970(param_1,6,uVar3,uVar6);
      iVar2 = 1;
      break;
    case 3:
      uVar6 = 0;
      uVar3 = FUN_1005f250(7);
      FUN_10055970(param_1,7,uVar3,uVar6);
      iVar2 = 1;
      break;
    case 4:
      uVar6 = 0;
      uVar3 = FUN_1005f250(0x11);
      FUN_10055970(param_1,0x11,uVar3,uVar6);
      iVar2 = 1;
      break;
    case 5:
      uVar6 = 0;
      uVar3 = FUN_1005f250(0x13);
      FUN_10055970(param_1,0x13,uVar3,uVar6);
      iVar2 = 7;
      break;
    case 6:
      uVar6 = 0;
      uVar3 = FUN_1005f250(0x17);
      FUN_10055970(param_1,0x17,uVar3,uVar6);
      iVar2 = 2;
      break;
    default:
      goto switchD_1005f5cb_default;
    }
    goto LAB_1005f7ff;
  }
  if (fVar1 < 0.7) goto switchD_1005f5cb_default;
  iVar2 = (*g_engfuncs.pfnRandomLong)(1,0xb);
  switch(iVar2) {
  case 1:
    uVar6 = 0;
    uVar3 = FUN_1005f250(4);
    FUN_10055970(param_1,4,uVar3,uVar6);
    iVar2 = 3;
    break;
  case 2:
    uVar6 = 0;
    uVar3 = FUN_1005f250(0xb);
    FUN_10055970(param_1,0xb,uVar3,uVar6);
    iVar2 = 3;
    break;
  case 3:
    uVar6 = 0;
    uVar3 = FUN_1005f250(0x14);
    FUN_10055970(param_1,0x14,uVar3,uVar6);
    iVar2 = 3;
    break;
  case 4:
    uVar6 = 0;
    uVar3 = FUN_1005f250(0xd);
    FUN_10055970(param_1,0xd,uVar3,uVar6);
    iVar2 = 6;
    break;
  case 5:
    uVar6 = 0;
    uVar3 = FUN_1005f250(5);
    uVar5 = 5;
    goto LAB_1005f7f4;
  case 6:
    uVar6 = 0;
    uVar3 = FUN_1005f250(0xf);
    uVar5 = 0xf;
    goto LAB_1005f7f4;
  case 7:
    uVar6 = 0;
    uVar3 = FUN_1005f250(0x1a);
    FUN_10055970(param_1,0x1a,uVar3,uVar6);
    iVar2 = 3;
    break;
  case 8:
    uVar6 = 0;
    uVar3 = FUN_1005f250(0x1b);
    uVar5 = 0x1b;
    goto LAB_1005f7f4;
  case 9:
    uVar6 = 0;
    uVar3 = FUN_1005f250(0x21);
    FUN_10055970(param_1,0x21,uVar3,uVar6);
    iVar2 = 3;
    break;
  case 10:
    uVar6 = 0;
    uVar3 = FUN_1005f250(0x12);
    FUN_10055970(param_1,0x12,uVar3,uVar6);
    iVar2 = 8;
    break;
  case 0xb:
    uVar6 = 0;
    uVar3 = FUN_1005f250(0x20);
    uVar5 = 0x20;
LAB_1005f7f4:
    FUN_10055970(param_1,uVar5,uVar3,uVar6);
    iVar2 = 4;
    break;
  default:
    goto switchD_1005f5cb_default;
  }
LAB_1005f7ff:
  FUN_100559b0(param_1,iVar2,10);
switchD_1005f5cb_default:
  FUN_100613b0(param_2,0x10);
  return;
}

/* 1005f890  FUN_1005f890  (500 bytes)
 * undefined FUN_1005f890()
 */
void __thiscall FUN_1005f890(int param_1,int *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_c [12];
  
  iVar2 = param_3;
  if (*(float *)(param_1 + 4) <= gpGlobals->time) {
    fVar8 = (float10)FUN_100551c0((int)param_2);
    if ((float10)0.7 <= (fVar8 * (float10)0.1) / (float10)*(float *)(param_3 + 0x1b18)) {
      fVar8 = (float10)0.7;
    }
    else {
      fVar8 = (float10)FUN_100551c0((int)param_2);
      fVar8 = (fVar8 * (float10)0.1) / (float10)*(float *)(param_3 + 0x1b18);
    }
    *(float *)(param_1 + 4) = (float)((float10)gpGlobals->time + fVar8);
    puVar4 = (undefined4 *)(param_3 + 0x195c);
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(param_3 + 0x19dc) = 0;
    param_3 = 1;
    if (0 < gpGlobals->maxClients) {
      do {
        piVar3 = (int *)UTIL_PlayerByIndex(param_3);
        bVar1 = false;
        if ((piVar3 != (int *)0x0) && (iVar6 = (**(code **)(*piVar3 + 0xa8))(), iVar6 != 0)) {
          iVar6 = 0;
          puVar4 = (undefined4 *)(iVar2 + 0x199c);
          do {
            if (bVar1) goto LAB_1005fa5d;
            if (((int *)puVar4[-0x10] == piVar3) || ((int *)*puVar4 == piVar3)) {
              bVar1 = true;
            }
            iVar6 = iVar6 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar6 < 0x10);
          if ((((!bVar1) && (piVar3 != param_2)) &&
              (iVar6 = (**(code **)(*piVar3 + 0x94))(), iVar6 != 0)) &&
             ((*(int *)(piVar3[1] + 0x244) == 0 && (-1 < *(char *)(piVar3[1] + 0x118))))) {
            iVar6 = (**(code **)(*piVar3 + 0xd8))(auStack_c);
            uStack_18 = *(undefined4 *)(iVar6 + 4);
            uStack_14 = *(undefined4 *)(iVar6 + 8);
            iVar6 = (**(code **)(*param_2 + 300))(&stack0xffffffe4);
            if ((iVar6 != 0) && (iVar6 = (**(code **)(*param_2 + 0xe8))(&uStack_18), iVar6 != 0)) {
              piVar7 = (int *)(iVar2 + 0x195c);
              iVar6 = 0x10;
              do {
                iVar5 = (**(code **)(*DAT_1009f494 + 200))(param_2,piVar3);
                if (iVar5 == 1) {
                  if (piVar7[0x10] == 0) {
                    piVar7[0x10] = (int)piVar3;
                  }
                }
                else if (*piVar7 == 0) {
                  *piVar7 = (int)piVar3;
                  *(undefined4 *)(iVar2 + 0x19dc) = 1;
                }
                piVar7 = piVar7 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
          }
        }
LAB_1005fa5d:
        param_3 = param_3 + 1;
      } while (param_3 <= gpGlobals->maxClients);
    }
  }
  return;
}

/* 1005fa90  FUN_1005fa90  (426 bytes)
 * undefined FUN_1005fa90()
 */
void __thiscall FUN_1005fa90(int param_1,int param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 auStack_c [3];
  
  if (gpGlobals->time < *(float *)(param_1 + 4)) {
    return;
  }
  fVar2 = (float10)FUN_100551c0(param_2);
  if ((float10)5.0 <= (fVar2 + fVar2) / (float10)*(float *)(param_3 + 0x1b18)) {
    fVar2 = (float10)5.0;
  }
  else {
    fVar2 = (float10)FUN_100551c0(param_2);
    fVar2 = (fVar2 + fVar2) / (float10)*(float *)(param_3 + 0x1b18);
  }
  *(float *)(param_1 + 4) = (float)((float10)gpGlobals->time + fVar2);
  if ((*(char *)(param_3 + 0x1910) == '\0') ||
     (((*(float *)(param_3 + 0x18fc) == DAT_1009f4a8 &&
       (*(float *)(param_3 + 0x1900) == DAT_1009f4ac)) &&
      (*(float *)(param_3 + 0x1904) == DAT_1009f4b0)))) {
    fStack_20 = *(float *)(*(int *)(param_2 + 4) + 0x78);
    uStack_1c = *(undefined4 *)(*(int *)(param_2 + 4) + 0x7c);
    uStack_24 = 0;
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,1);
    iVar1 = (-(uint)(iVar1 != 0) & 0x166) - 0xb3;
  }
  else {
    if (*(char *)(param_3 + 0x1910) != '\x01') goto LAB_1005fc04;
    iVar1 = *(int *)(param_2 + 4);
    fStack_10 = *(float *)(param_3 + 0x1904) - *(float *)(iVar1 + 0x10);
    fStack_14 = *(float *)(param_3 + 0x1900) - *(float *)(iVar1 + 0xc);
    fStack_18 = *(float *)(param_3 + 0x18fc) - *(float *)(iVar1 + 8);
    iVar1 = UTIL_VecToAngles(auStack_c,&fStack_18);
    fStack_20 = *(float *)(iVar1 + 4);
    uStack_1c = *(undefined4 *)(iVar1 + 8);
    uStack_24 = 0;
    iVar1 = (*g_engfuncs.pfnRandomLong)(-0x3c,0x3c);
  }
  fStack_20 = (float)iVar1 + fStack_20;
LAB_1005fc04:
  FUN_10060090(param_2,param_3,&uStack_24);
  fVar2 = (float10)(*g_engfuncs.pfnRandomFloat)(2.0,4.0);
  *(float *)(param_3 + 0x1b14) = (float)(fVar2 * (float10)30.0);
  return;
}

/* 1005fc40  FUN_1005fc40  (325 bytes)
 * undefined FUN_1005fc40()
 */
void __thiscall FUN_1005fc40(int param_1,int param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  if (*(float *)(param_1 + 4) <= gpGlobals->time) {
    fVar4 = (float10)FUN_100551c0(param_2);
    if ((float10)1.0 <= (fVar4 * (float10)0.5) / (float10)*(float *)((int)param_3 + 0x1b18)) {
      fVar4 = (float10)1.0;
    }
    else {
      fVar4 = (float10)FUN_100551c0(param_2);
      fVar4 = (fVar4 * (float10)0.5) / (float10)*(float *)((int)param_3 + 0x1b18);
    }
    *(float *)(param_1 + 4) = (float)((float10)gpGlobals->time + fVar4);
    if (*(char *)(param_1 + 8) == '\0') {
      iVar3 = (*g_engfuncs.pfnRandomLong)(1,2);
      *(char *)(param_1 + 8) = (char)iVar3;
      *(undefined1 *)(param_1 + 9) = 0;
    }
    uVar2 = *(uint *)(*(int *)(param_2 + 4) + 0x250);
    if ((uVar2 & 0xc30) == 0) {
      cVar1 = *(char *)(param_1 + 8);
      if (cVar1 == '\x01') {
        FUN_100613e0(param_3,0x4000,0.1);
        return;
      }
      if (cVar1 == '\x02') {
        if (((*(uint *)(*(int *)(param_2 + 4) + 0x1a4) & 0x200) == 0) &&
           (*(char *)(param_1 + 9) != '\0')) {
          FUN_100613e0(param_3,2,0.1);
          return;
        }
        FUN_100613e0(param_3,2,0.1);
        *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
        *(float *)(param_1 + 4) = gpGlobals->time + 0.2;
        return;
      }
      if (cVar1 == '\x04') {
        *(undefined1 *)(param_1 + 8) = 0;
        FUN_100613b0(param_3,8);
        return;
      }
    }
    else if (((uVar2 & 0x10) == 0) && ((uVar2 & 0x20) != 0)) {
      FUN_100613e0(param_3,2,0.1);
      *(undefined1 *)(param_1 + 8) = 4;
    }
  }
  return;
}

/* 1005fd90  FUN_1005fd90  (169 bytes)
 * undefined FUN_1005fd90()
 */
void __thiscall FUN_1005fd90(int param_1,int *param_2,void *param_3)

{
  float10 fVar1;
  
  if (*(float *)(param_1 + 4) <= gpGlobals->time) {
    fVar1 = (float10)FUN_100551c0((int)param_2);
    if ((float10)3.0 <= (fVar1 * (float10)0.5) / (float10)*(float *)((int)param_3 + 0x1b18)) {
      fVar1 = (float10)3.0;
    }
    else {
      fVar1 = (float10)FUN_100551c0((int)param_2);
      fVar1 = (fVar1 * (float10)0.5) / (float10)*(float *)((int)param_3 + 0x1b18);
    }
    *(float *)(param_1 + 4) = (float)((float10)gpGlobals->time + fVar1);
    if ((param_2[0x1a8] != 0) && (param_2[0x1a7] == 0)) {
      CBasePlayer::UsePowerUp(param_2);
    }
    if (param_2[0x1a7] != 0) {
      FUN_100613b0(param_3,0x200);
      *(undefined1 *)(param_1 + 8) = 0;
    }
  }
  return;
}

/* 1005fe40  FUN_1005fe40  (341 bytes)
 * undefined FUN_1005fe40()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1005fe40(int param_1,undefined4 param_2,void *param_3)

{
  byte_conflict *pbVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  float10 fVar6;
  undefined8 uStack_88;
  char acStack_80 [128];
  
  if (_DAT_10093c84 == 0.0) {
    return;
  }
  if ((gpGlobals->time < *(float *)(param_1 + 4)) && (*(char *)((int)param_3 + 0x1958) == '\0')) {
    return;
  }
  if ((*(float *)((int)param_3 + 0x1b18) <= 0.5) || (*(float *)((int)param_3 + 0x1b18) < 1.0)) {
    if (0.5 < *(float *)((int)param_3 + 0x1b18)) {
      uStack_88 = (double)*(float *)((int)param_3 + 0x1b18);
      goto LAB_1005feec;
    }
    uStack_88._4_4_ = 0x3fe00000;
  }
  else {
    uStack_88._4_4_ = 0x3ff00000;
  }
  uStack_88 = (double)((ulonglong)uStack_88._4_4_ << 0x20);
LAB_1005feec:
  fVar6 = (float10)(*g_engfuncs.pfnRandomFloat)(60.0,180.0);
  *(float *)(param_1 + 4) = (float)(fVar6 * (float10)uStack_88 + (float10)gpGlobals->time);
  pbVar1 = (byte_conflict *)
           FUN_1005df10(*(undefined4 *)((int)param_3 + 0x1954),(undefined1 *)((int)param_3 + 0x1911)
                       );
  FUN_1006e69a(acStack_80,pbVar1);
  iVar2 = 1;
  bVar5 = true;
  pcVar3 = acStack_80;
  pcVar4 = &DAT_1009f428;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    FUN_100604a0(param_2,acStack_80);
  }
  FUN_100613b0(param_3,0x400);
  if (*(int *)((int)param_3 + 0x1954) != 1) {
    *(undefined4 *)((int)param_3 + 0x1954) = 1;
  }
  *(undefined1 *)((int)param_3 + 0x1911) = 0;
  *(undefined1 *)((int)param_3 + 0x1958) = 0;
  return;
}

/* 1005ffc0  FUN_1005ffc0  (11 bytes)
 * undefined FUN_1005ffc0(undefined4 * param_1)
 * called by: FUN_10061220
 */
void __fastcall FUN_1005ffc0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

/* 10060000  FUN_10060000  (20 bytes)
 * bool FUN_10060000(int param_1)
 * called by: FUN_100605f0, FUN_10060950, FUN_10061020
 */
bool FUN_10060000(int param_1)

{
  return *(int *)(param_1 + 0x50c) == 0;
}

/* 10060020  FUN_10060020  (102 bytes)
 * undefined FUN_10060020(int param_1, undefined4 param_2)
 * called by: FUN_10060090
 */
void FUN_10060020(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xac) = param_2;
  iVar1 = *(int *)(param_1 + 4);
  if (180.0 < *(float *)(iVar1 + 0xac)) {
    *(float *)(iVar1 + 0xac) = *(float *)(iVar1 + 0xac) - 360.0;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (*(float *)(iVar1 + 0xac) < -180.0) {
    *(float *)(iVar1 + 0xac) = *(float *)(iVar1 + 0xac) + 360.0;
  }
  return;
}

/* 10060090  FUN_10060090  (138 bytes)
 * undefined FUN_10060090(int param_1, undefined4 param_2, undefined4 * param_3)
 * called by: FUN_1005fa90, FUN_100616b0
 */
void FUN_10060090(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x74) = *param_3;
  *(undefined4 *)(iVar1 + 0x78) = param_3[1];
  *(undefined4 *)(iVar1 + 0x7c) = param_3[2];
  iVar1 = *(int *)(param_1 + 4);
  *(float *)(iVar1 + 0x74) = *(float *)(iVar1 + 0x68) + *(float *)(iVar1 + 0x74);
  *(float *)(iVar1 + 0x78) = *(float *)(iVar1 + 0x6c) + *(float *)(iVar1 + 0x78);
  *(float *)(iVar1 + 0x7c) = *(float *)(iVar1 + 0x70) + *(float *)(iVar1 + 0x7c);
  *(float *)(*(int *)(param_1 + 4) + 0x50) = *(float *)(*(int *)(param_1 + 4) + 0x74) * -0.33333334;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x58) = 0;
  FUN_10060020(param_1,param_3[1]);
  return;
}

/* 10060120  FUN_10060120  (303 bytes)
 * float10 FUN_10060120(float param_1, float param_2)
 * called by: FUN_100603d0
 */
float10 FUN_10060120(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  
  fVar4 = param_1;
  iVar1 = *(int *)((int)param_1 + 4);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x170) != 0)) {
    return (float10)0.0;
  }
  fVar5 = FUN_100668f0(*(float *)(iVar1 + 0x54));
  fVar2 = *(float *)(*(int *)((int)param_1 + 4) + 0xac);
  if (fVar5 == (float10)fVar2) {
    return (float10)0.0;
  }
  fVar3 = param_2 * gpGlobals->frametime * 10.0;
  param_1 = (float)((float10)fVar2 - fVar5);
  if ((float10)fVar2 <= fVar5) {
    if (param_1 < -180.0 != (param_1 == -180.0)) {
      param_1 = param_1 + 360.0;
    }
  }
  else if (180.0 <= param_1) {
    param_1 = param_1 - 360.0;
  }
  if (param_1 <= 0.0) {
    fVar2 = -fVar3;
    if (param_1 < -fVar3) goto LAB_1006020b;
  }
  else {
    fVar2 = fVar3;
    if (fVar3 < param_1) goto LAB_1006020b;
  }
  fVar2 = param_1;
LAB_1006020b:
  param_1 = fVar2;
  fVar5 = FUN_100668f0((float)((float10)param_1 + fVar5));
  *(float *)(*(int *)((int)fVar4 + 4) + 0x54) = (float)fVar5;
  iVar1 = *(int *)((int)fVar4 + 4);
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar1 + 0x54);
  return (float10)param_1;
}

/* 100603d0  FUN_100603d0  (203 bytes)
 * undefined FUN_100603d0(float param_1, int param_2)
 * called by: FUN_100614e0
 */
void __thiscall FUN_100603d0(void *this,float param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_10060120(param_1,*(float *)(param_2 + 0x1b14));
  iVar1 = *(int *)this;
  if (*(float *)((int)this + 4) < gpGlobals->time == (*(float *)((int)this + 4) == gpGlobals->time))
  {
    *(int *)this = iVar1 + 1;
  }
  else {
    *(float *)((int)this + 4) = gpGlobals->time + 0.5;
    if (0 < iVar1) {
      *(float *)((int)this + 8) = 450.0 / (float)iVar1;
    }
    *(undefined4 *)this = 0;
  }
  if (*(float *)((int)this + 8) < 5.0) {
    *(undefined4 *)((int)this + 8) = 0x40a00000;
  }
  if (100.0 < *(float *)((int)this + 8)) {
    *(undefined4 *)((int)this + 8) = 0x42c80000;
  }
  iVar1 = *(int *)((int)param_1 + 4);
  lVar2 = __ftol();
  (*g_engfuncs.pfnRunPlayerMove)
            (*(edict_t **)(iVar1 + 0x208),(float *)(iVar1 + 0x74),*(float *)(param_2 + 0x19f8),
             *(float *)(param_2 + 0x19fc),0.0,*(ushort *)(iVar1 + 0x180),'\0',(byte_conflict)lVar2);
  return;
}

/* 100604a0  FUN_100604a0  (329 bytes)
 * undefined FUN_100604a0()
 * called by: FUN_1005fe40
 */
void FUN_100604a0(int param_1,char *param_2)

{
  char cVar1;
  edict_t *pEdict;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char acStack_80 [12];
  undefined4 uStack_74;
  char acStack_68 [103];
  undefined1 uStack_1;
  
  if (param_2 != (char *)0x0) {
    pEdict = *(edict_t **)(*(int *)(param_1 + 4) + 0x208);
    FUN_1006e69a(acStack_80,(byte_conflict *)s__c_s__10091bd4);
    uVar3 = 0xffffffff;
    do {
      pcVar6 = param_2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar8 = acStack_80;
    do {
      pcVar7 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -uVar3;
    pcVar8 = pcVar7 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    iVar4 = -1;
    pcVar6 = acStack_80;
    do {
      pcVar8 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    *(undefined2 *)(pcVar8 + -1) = DAT_10091bd0;
    uStack_1 = 0;
    piVar2 = (int *)UTIL_FindEntityByClassname(0,s_player_100915d0);
    while (((piVar2 != (int *)0x0 && (*(edict_t **)(piVar2[1] + 0x208) != (edict_t *)0x0)) &&
           (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar2[1] + 0x208)),
           iVar4 != 0))) {
      if (((piVar2[1] != 0) && (*(edict_t **)(piVar2[1] + 0x208) != pEdict)) &&
         (iVar4 = (**(code **)(*piVar2 + 0xac))(), iVar4 != 0)) {
        (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc20,(float *)0x0,*(edict_t **)(piVar2[1] + 0x208));
        iVar4 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
        (*g_engfuncs.pfnWriteByte)(iVar4);
        (*g_engfuncs.pfnWriteString)(acStack_68);
        uStack_74 = 0x100605c5;
        (*g_engfuncs.pfnMessageEnd)();
      }
      piVar2 = (int *)UTIL_FindEntityByClassname((int)piVar2,s_player_100915d0);
    }
  }
  return;
}

/* 100605f0  FUN_100605f0  (850 bytes)
 * undefined FUN_100605f0()
 */
void __thiscall FUN_100605f0(int param_1,int *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined3 extraout_var;
  float10 fVar9;
  undefined4 uVar10;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  if (gpGlobals->time < *(float *)(param_1 + 4)) {
    return;
  }
  fVar9 = (float10)FUN_100551c0((int)param_2);
  if ((float10)1.0 <= fVar9 * (float10)0.1) {
    fVar9 = (float10)1.0;
  }
  else {
    fVar9 = (float10)FUN_100551c0((int)param_2);
    fVar9 = fVar9 * (float10)0.1;
  }
  *(float *)(param_1 + 4) = (float)((float10)gpGlobals->time + fVar9);
  iVar5 = (**(code **)(*param_2 + 0x94))();
  if ((iVar5 == 0) || (*(int *)(param_2[1] + 0x244) != 0)) {
    bVar4 = FUN_10060000((int)param_2);
    if (CONCAT31(extraout_var,bVar4) == 0) {
      uVar10 = 0x100;
    }
    else {
      uVar10 = 0x10;
    }
    FUN_10061380(param_3,uVar10);
    FUN_10061390(param_3,0x400);
    return;
  }
  FUN_10061390(param_3,0x40);
  FUN_10061390(param_3,0x400);
  iVar5 = FUN_100616a0((int)param_3);
  if (iVar5 != 0) {
    FUN_10061390(param_3,4);
    FUN_100613b0(param_3,0x80);
    return;
  }
  if (((*(float *)((int)param_3 + 0x19e0) != DAT_1009f4a8) ||
      (*(float *)((int)param_3 + 0x19e4) != DAT_1009f4ac)) ||
     (*(float *)((int)param_3 + 0x19e8) != DAT_1009f4b0)) {
    *(float *)((int)param_3 + 0x18fc) = *(float *)((int)param_3 + 0x19e0);
    *(undefined4 *)((int)param_3 + 0x1900) = *(undefined4 *)((int)param_3 + 0x19e4);
    *(undefined4 *)((int)param_3 + 0x1904) = *(undefined4 *)((int)param_3 + 0x19e8);
    *(float *)((int)param_3 + 0x19e0) = DAT_1009f4a8;
    *(float *)((int)param_3 + 0x19e4) = DAT_1009f4ac;
    *(float *)((int)param_3 + 0x19e8) = DAT_1009f4b0;
    FUN_10061390(param_3,1);
    *(undefined1 *)((int)param_3 + 0x1910) = 1;
    FUN_10061390(param_3,0x80);
    return;
  }
  if (((*(float *)((int)param_3 + 0x18fc) != DAT_1009f4a8) ||
      (*(float *)((int)param_3 + 0x1900) != DAT_1009f4ac)) ||
     ((*(float *)((int)param_3 + 0x1904) != DAT_1009f4b0 ||
      (gpGlobals->time <= *(float *)(param_1 + 8))))) goto LAB_100608b4;
  iVar5 = (*g_engfuncs.pfnRandomLong)(0,4);
  if (iVar5 == 0) {
    piVar6 = (int *)FUN_100649c0(s_ts_dmhill_100981a4);
    if (piVar6 == (int *)0x0) goto LAB_100608ca;
    pfVar7 = (float *)(**(code **)(*piVar6 + 0xd4))(auStack_18);
    iVar5 = param_2[1];
    fVar1 = *(float *)(iVar5 + 8) - *pfVar7;
    fVar2 = *(float *)(iVar5 + 0xc) - pfVar7[1];
    fVar3 = *(float *)(iVar5 + 0x10) - pfVar7[2];
    if (64.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3)) {
      puVar8 = (undefined4 *)(**(code **)(*piVar6 + 0xd4))(auStack_c);
      *(undefined4 *)((int)param_3 + 0x18fc) = *puVar8;
      *(undefined4 *)((int)param_3 + 0x1900) = puVar8[1];
      *(undefined4 *)((int)param_3 + 0x1904) = puVar8[2];
      FUN_10061390(param_3,1);
    }
LAB_1006089c:
    fVar1 = gpGlobals->time;
  }
  else if ((iVar5 == 2) && (iVar5 = FUN_100649c0(s_ts_powerup_10098278), iVar5 != 0)) {
    iVar5 = *(int *)(iVar5 + 4);
    *(undefined4 *)((int)param_3 + 0x18fc) = *(undefined4 *)(iVar5 + 8);
    *(undefined4 *)((int)param_3 + 0x1900) = *(undefined4 *)(iVar5 + 0xc);
    *(undefined4 *)((int)param_3 + 0x1904) = *(undefined4 *)(iVar5 + 0x10);
    FUN_10061390(param_3,1);
    fVar1 = gpGlobals->time;
  }
  else {
LAB_100608ca:
    iVar5 = FUN_100649c0(s_info_player_deathmatch_1009712c);
    if (iVar5 == 0) goto LAB_1006089c;
    iVar5 = *(int *)(iVar5 + 4);
    *(undefined4 *)((int)param_3 + 0x18fc) = *(undefined4 *)(iVar5 + 8);
    *(undefined4 *)((int)param_3 + 0x1900) = *(undefined4 *)(iVar5 + 0xc);
    *(undefined4 *)((int)param_3 + 0x1904) = *(undefined4 *)(iVar5 + 0x10);
    FUN_10061390(param_3,1);
    fVar1 = gpGlobals->time;
  }
  *(float *)(param_1 + 8) = fVar1 + 3.0;
  *(undefined1 *)((int)param_3 + 0x1910) = 0;
LAB_100608b4:
  FUN_10061390(param_3,0x80);
  return;
}

/* 10060950  FUN_10060950  (846 bytes)
 * undefined FUN_10060950()
 */
void __thiscall FUN_10060950(int param_1,int *param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  byte_conflict *pbVar3;
  uint uVar4;
  undefined3 extraout_var;
  void *this;
  void *this_00;
  int iVar5;
  float10 fVar6;
  char *pcVar7;
  undefined4 uVar8;
  int aiStack_80 [32];
  
  if (*(float *)(param_1 + 4) <= gpGlobals->time) {
    fVar6 = (float10)FUN_100551c0((int)param_2);
    if ((float10)1.0 <= fVar6 * (float10)0.1) {
      fVar6 = (float10)1.0;
    }
    else {
      fVar6 = (float10)FUN_100551c0((int)param_2);
      fVar6 = fVar6 * (float10)0.1;
    }
    *(float *)(param_1 + 4) = (float)((float10)gpGlobals->time + fVar6);
    iVar2 = (**(code **)(*param_2 + 0x94))();
    if ((iVar2 != 0) && (*(int *)(param_2[1] + 0x244) == 0)) {
      FUN_10061390(param_3,0x40);
      FUN_10061390(param_3,0x400);
      iVar2 = FUN_100616a0((int)param_3);
      if (iVar2 != 0) {
        FUN_10061390(param_3,4);
        FUN_100613b0(param_3,0x80);
        return;
      }
      if (((*(float *)((int)param_3 + 0x19e0) != DAT_1009f4a8) ||
          (*(float *)((int)param_3 + 0x19e4) != DAT_1009f4ac)) ||
         (*(float *)((int)param_3 + 0x19e8) != DAT_1009f4b0)) {
        *(float *)((int)param_3 + 0x18fc) = *(float *)((int)param_3 + 0x19e0);
        *(undefined4 *)((int)param_3 + 0x1900) = *(undefined4 *)((int)param_3 + 0x19e4);
        *(undefined4 *)((int)param_3 + 0x1904) = *(undefined4 *)((int)param_3 + 0x19e8);
        *(float *)((int)param_3 + 0x19e0) = DAT_1009f4a8;
        *(float *)((int)param_3 + 0x19e4) = DAT_1009f4ac;
        *(float *)((int)param_3 + 0x19e8) = DAT_1009f4b0;
        FUN_10061390(param_3,1);
        FUN_10061390(param_3,0x80);
        return;
      }
      if (((*(float *)((int)param_3 + 0x18fc) != DAT_1009f4a8) ||
          (*(float *)((int)param_3 + 0x1900) != DAT_1009f4ac)) ||
         ((*(float *)((int)param_3 + 0x1904) != DAT_1009f4b0 ||
          (gpGlobals->time <= *(float *)(param_1 + 8))))) {
        *(undefined1 *)((int)param_3 + 0x1910) = 1;
        FUN_10061390(param_3,0x80);
        return;
      }
      iVar2 = 0;
      iVar5 = 0;
      if (DAT_100acb90 == 0) {
        while( true ) {
          pcVar7 = s_Specialists_10097488;
          pbVar3 = (byte_conflict *)(**(code **)(*param_2 + 0xb0))();
          uVar4 = FUN_1007e860(this,pbVar3,(byte_conflict *)pcVar7);
          pcVar7 = s_info_player_start_1009821c;
          if (uVar4 == 0) {
            pcVar7 = s_info_player_deathmatch_1009712c;
          }
          iVar2 = UTIL_FindEntityByClassname(iVar2,pcVar7);
          if ((iVar2 == 0) || (0x1f < iVar5)) break;
          aiStack_80[iVar5] = iVar2;
          iVar5 = iVar5 + 1;
        }
      }
      else {
        while( true ) {
          pcVar7 = s_Specialists_10097488;
          pbVar3 = (byte_conflict *)(**(code **)(*param_2 + 0xb0))();
          uVar4 = FUN_1007e860(this_00,pbVar3,(byte_conflict *)pcVar7);
          pcVar7 = s_info_player_start_1009821c;
          if (uVar4 != 0) {
            pcVar7 = s_info_player_deathmatch_1009712c;
          }
          iVar2 = UTIL_FindEntityByClassname(iVar2,pcVar7);
          if ((iVar2 == 0) || (0x1f < iVar5)) break;
          aiStack_80[iVar5] = iVar2;
          iVar5 = iVar5 + 1;
        }
      }
      if (iVar5 != 0) {
        iVar2 = (*g_engfuncs.pfnRandomLong)(0,iVar5 + -1);
        iVar2 = *(int *)(aiStack_80[iVar2] + 4);
        *(undefined4 *)((int)param_3 + 0x18fc) = *(undefined4 *)(iVar2 + 8);
        *(undefined4 *)((int)param_3 + 0x1900) = *(undefined4 *)(iVar2 + 0xc);
        *(undefined4 *)((int)param_3 + 0x1904) = *(undefined4 *)(iVar2 + 0x10);
        FUN_10061390(param_3,1);
        *(float *)(param_1 + 8) = gpGlobals->time + 3.0;
        *(undefined1 *)((int)param_3 + 0x1910) = 0;
        FUN_10061390(param_3,0x80);
        return;
      }
      *(float *)(param_1 + 8) = gpGlobals->time + 3.0;
      *(undefined1 *)((int)param_3 + 0x1910) = 0;
      FUN_10061390(param_3,0x80);
      return;
    }
    bVar1 = FUN_10060000((int)param_2);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      uVar8 = 0x100;
    }
    else {
      uVar8 = 0x10;
    }
    FUN_10061380(param_3,uVar8);
    FUN_10061390(param_3,0x400);
  }
  return;
}

/* 10061020  FUN_10061020  (505 bytes)
 * undefined FUN_10061020()
 */
void __thiscall FUN_10061020(int param_1,int *param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  float10 fVar3;
  undefined4 uVar4;
  
  if (*(float *)(param_1 + 4) <= gpGlobals->time) {
    fVar3 = (float10)FUN_100551c0((int)param_2);
    if ((float10)1.0 <= fVar3 * (float10)0.1) {
      fVar3 = (float10)1.0;
    }
    else {
      fVar3 = (float10)FUN_100551c0((int)param_2);
      fVar3 = fVar3 * (float10)0.1;
    }
    *(float *)(param_1 + 4) = (float)((float10)gpGlobals->time + fVar3);
    iVar2 = (**(code **)(*param_2 + 0x94))();
    if ((iVar2 != 0) && (*(int *)(param_2[1] + 0x244) == 0)) {
      FUN_10061390(param_3,0x40);
      FUN_10061390(param_3,0x400);
      iVar2 = FUN_100616a0((int)param_3);
      if (iVar2 != 0) {
        FUN_10061390(param_3,4);
        FUN_100613b0(param_3,0x80);
        return;
      }
      if (((*(float *)((int)param_3 + 0x19e0) == DAT_1009f4a8) &&
          (*(float *)((int)param_3 + 0x19e4) == DAT_1009f4ac)) &&
         (*(float *)((int)param_3 + 0x19e8) == DAT_1009f4b0)) {
        if (((*(float *)((int)param_3 + 0x18fc) == DAT_1009f4a8) &&
            (*(float *)((int)param_3 + 0x1900) == DAT_1009f4ac)) &&
           ((*(float *)((int)param_3 + 0x1904) == DAT_1009f4b0 &&
            (*(float *)(param_1 + 8) < gpGlobals->time)))) {
          *(float *)(param_1 + 8) = gpGlobals->time + 3.0;
          *(undefined1 *)((int)param_3 + 0x1910) = 0;
          FUN_10061390(param_3,0x80);
          return;
        }
        *(undefined1 *)((int)param_3 + 0x1910) = 1;
        FUN_10061390(param_3,0x80);
        return;
      }
      *(float *)((int)param_3 + 0x18fc) = *(float *)((int)param_3 + 0x19e0);
      *(undefined4 *)((int)param_3 + 0x1900) = *(undefined4 *)((int)param_3 + 0x19e4);
      *(undefined4 *)((int)param_3 + 0x1904) = *(undefined4 *)((int)param_3 + 0x19e8);
      *(float *)((int)param_3 + 0x19e0) = DAT_1009f4a8;
      *(float *)((int)param_3 + 0x19e4) = DAT_1009f4ac;
      *(float *)((int)param_3 + 0x19e8) = DAT_1009f4b0;
      FUN_10061390(param_3,1);
      FUN_10061390(param_3,0x80);
      return;
    }
    bVar1 = FUN_10060000((int)param_2);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      uVar4 = 0x100;
    }
    else {
      uVar4 = 0x10;
    }
    FUN_10061380(param_3,uVar4);
    FUN_10061390(param_3,0x400);
  }
  return;
}

/* 10061220  FUN_10061220  (330 bytes)
 * undefined FUN_10061220(undefined4 * param_1)
 * called by: FUN_1005def0
 */
void __fastcall FUN_10061220(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined8 local_8;
  
  puVar2 = param_1 + 0x67e;
  for (iVar1 = 0x48; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x63e;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)((int)param_1 + 0x1911) = 0;
  param_1[0x655] = 1;
  if (((float)param_1[0x6c6] <= 0.5) || ((float)param_1[0x6c6] < 1.0)) {
    if (0.5 < (float)param_1[0x6c6]) {
      local_8 = (double)(float)param_1[0x6c6];
      goto LAB_100612b6;
    }
    local_8._4_4_ = 0x3fe00000;
  }
  else {
    local_8._4_4_ = 0x3ff00000;
  }
  local_8 = (double)((ulonglong)local_8._4_4_ << 0x20);
LAB_100612b6:
  fVar3 = (float10)(*g_engfuncs.pfnRandomFloat)(60.0,180.0);
  param_1[0x63d] = (float)(fVar3 * (float10)local_8 + (float10)gpGlobals->time);
  FUN_10061790(param_1 + 5);
  param_1[0x678] = DAT_1009f4a8;
  param_1[0x679] = DAT_1009f4ac;
  param_1[0x67a] = DAT_1009f4b0;
  param_1[0x67b] = DAT_1009f4a8;
  param_1[0x67c] = DAT_1009f4ac;
  param_1[0x67d] = DAT_1009f4b0;
  FUN_1005ffc0(param_1);
  if ((DAT_100ac8c0 != '\0') && (DAT_100ac8c0 != '\x01')) {
    if (DAT_100ac8c0 == '\x02') {
      param_1[4] = param_1 + 0x620;
      return;
    }
    param_1[4] = param_1 + 0x623;
    return;
  }
  param_1[4] = param_1 + 0x61d;
  return;
}

/* 10061370  FUN_10061370  (15 bytes)
 * uint FUN_10061370(uint param_1)
 * called by: FUN_100614e0
 */
uint __thiscall FUN_10061370(void *this,uint param_1)

{
  return *(uint *)((int)this + 0x18f8) & param_1;
}

/* 10061380  FUN_10061380  (13 bytes)
 * undefined FUN_10061380(undefined4 param_1)
 * called by: FUN_100605f0, FUN_10060950, FUN_10061020
 */
void __thiscall FUN_10061380(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x18f8) = param_1;
  return;
}

/* 10061390  FUN_10061390  (21 bytes)
 * undefined FUN_10061390(uint param_1)
 * called by: FUN_1005e5e0, FUN_100605f0, FUN_10060950, FUN_10061020
 */
void __thiscall FUN_10061390(void *this,uint param_1)

{
  *(uint *)((int)this + 0x18f8) = *(uint *)((int)this + 0x18f8) | param_1;
  return;
}

/* 100613b0  FUN_100613b0  (23 bytes)
 * undefined FUN_100613b0(uint param_1)
 * called by: FUN_1005e5e0, FUN_1005f320, FUN_1005fc40, FUN_1005fd90, FUN_1005fe40, FUN_100605f0, FUN_10060950, FUN_10061020, FUN_100614e0, FUN_10061b70
 */
void __thiscall FUN_100613b0(void *this,uint param_1)

{
  *(uint *)((int)this + 0x18f8) = *(uint *)((int)this + 0x18f8) & ~param_1;
  return;
}

/* 100613e0  FUN_100613e0  (105 bytes)
 * undefined FUN_100613e0(int param_1, float param_2)
 * called by: FUN_1005e5e0, FUN_1005ee60, FUN_1005fc40, FUN_100614e0, FUN_10061b70
 */
void __thiscall FUN_100613e0(void *this,int param_1,float param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar1 = 0;
  piVar2 = (int *)((int)this + 0x1a0c);
  while( true ) {
    if ((*piVar2 == 0) && (iVar3 == -1)) {
      iVar3 = iVar1;
    }
    if (*piVar2 == param_1) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
    if (0x1f < iVar1) {
      if (iVar3 != -1) {
        *(int *)((int)this + iVar3 * 8 + 0x1a0c) = param_1;
        *(float *)((int)this + iVar3 * 8 + 0x1a08) = param_2 + gpGlobals->time;
      }
      return;
    }
  }
  *(float *)((int)this + iVar1 * 8 + 0x1a08) = param_2 + gpGlobals->time;
  return;
}

/* 10061450  FUN_10061450  (56 bytes)
 * undefined FUN_10061450(int param_1)
 * called by: FUN_1005ee60, FUN_1005f230, FUN_10061b70
 */
void __thiscall FUN_10061450(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this + 0x1a0c);
  do {
    if (*piVar2 == param_1) {
      *(undefined4 *)((int)this + iVar1 * 8 + 0x1a0c) = 0;
      *(undefined4 *)((int)this + iVar1 * 8 + 0x1a08) = 0;
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 0x20);
  return;
}

/* 10061490  FUN_10061490  (76 bytes)
 * undefined FUN_10061490(int param_1)
 * called by: FUN_100614e0
 */
void __fastcall FUN_10061490(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1a00) = 0;
  puVar1 = (uint *)(param_1 + 0x1a0c);
  iVar2 = 0x20;
  do {
    if (*puVar1 != 0) {
      if (gpGlobals->time <= (float)puVar1[-1]) {
        *(uint *)(param_1 + 0x1a00) = *(uint *)(param_1 + 0x1a00) | *puVar1;
      }
      else {
        *puVar1 = 0;
        puVar1[-1] = 0;
      }
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

/* 100614e0  FUN_100614e0  (439 bytes)
 * undefined FUN_100614e0(float * param_1)
 * called by: pfnStartFrame
 */
void __thiscall FUN_100614e0(void *this,float *param_1)

{
  uint uVar1;
  int iVar2;
  void *this_00;
  
  FUN_10061490((int)this);
  *(undefined4 *)((int)this + 0x1b14) = 0x41f00000;
  if ((*(float *)((int)param_1[1] + 0x254) == 0.0) || (0.1 <= *(float *)((int)param_1[1] + 0x254)))
  {
    (**(code **)**(undefined4 **)((int)this + 0x10))(param_1,this);
    uVar1 = FUN_10061370(this,0x10);
    if (uVar1 != 0) {
      (**(code **)(*(int *)((int)this + 0x18c0) + 4))(param_1,this);
    }
    uVar1 = FUN_10061370(this,0x100);
    if (uVar1 != 0) {
      FUN_100613e0(this,1,0.1);
      FUN_10061770(this_00,0,0);
    }
    uVar1 = FUN_10061370(this,0x40);
    if (uVar1 != 0) {
      (**(code **)(*(int *)((int)this + 0x18c8) + 4))(param_1,this);
    }
    uVar1 = FUN_10061370(this,4);
    if (uVar1 != 0) {
      (**(code **)(*(int *)((int)this + 0x1898) + 4))(param_1,this);
    }
    uVar1 = FUN_10061370(this,0x80);
    if (uVar1 != 0) {
      (**(code **)(*(int *)((int)this + 0x18d0) + 4))(param_1,this);
    }
    uVar1 = FUN_10061370(this,8);
    if (uVar1 != 0) {
      (**(code **)(*(int *)((int)this + 0x18d8) + 4))(param_1,this);
    }
    uVar1 = FUN_10061370(this,0x200);
    if (uVar1 != 0) {
      (**(code **)(*(int *)((int)this + 0x18e4) + 4))(param_1,this);
    }
    uVar1 = FUN_10061370(this,0x400);
    if (uVar1 != 0) {
      (**(code **)(*(int *)((int)this + 0x18f0) + 4))(param_1,this);
    }
    uVar1 = FUN_10061370(this,1);
    if (uVar1 != 0) {
      iVar2 = FUN_10061b70((void *)((int)this + 0x14),param_1,this,(float *)((int)this + 0x18fc));
      if ((iVar2 == 0) || (iVar2 == 1)) {
        FUN_100613b0(this,1);
        *(float *)((int)this + 0x18fc) = DAT_1009f4a8;
        *(undefined4 *)((int)this + 0x1900) = DAT_1009f4ac;
        *(undefined4 *)((int)this + 0x1904) = DAT_1009f4b0;
      }
    }
  }
  *(undefined4 *)((int)param_1[1] + 0x180) = *(undefined4 *)((int)this + 0x1a00);
  FUN_100603d0(this,(float)param_1,(int)this);
  return;
}

/* 100616a0  FUN_100616a0  (7 bytes)
 * undefined4 FUN_100616a0(int param_1)
 * called by: FUN_1005e5e0, FUN_100605f0, FUN_10060950, FUN_10061020
 */
undefined4 __fastcall FUN_100616a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x19dc);
}

/* 100616b0  FUN_100616b0  (192 bytes)
 * undefined FUN_100616b0(float * param_1)
 * called by: FUN_1005e5e0, FUN_10061b70
 */
void __thiscall FUN_100616b0(void *this,float *param_1)

{
  float *pfVar1;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  undefined1 local_c [12];
  
  pfVar1 = (float *)(**(code **)((int)*param_1 + 0x144))(local_c);
  fStack_1c = *param_1 - *pfVar1;
  fStack_18 = param_1[1] - pfVar1[1];
  fStack_14 = param_1[2] - pfVar1[2];
  pfVar1 = (float *)UTIL_VecToAngles(&uStack_10,&fStack_1c);
  fStack_28 = *pfVar1;
  fStack_24 = pfVar1[1];
  fStack_20 = pfVar1[2];
  if (180.0 <= fStack_28) {
    fStack_28 = fStack_28 - 360.0;
  }
  if (fStack_28 < -180.0 != (fStack_28 == -180.0)) {
    fStack_28 = fStack_28 + 360.0;
  }
  fStack_28 = -fStack_28;
  FUN_10060090((int)param_1,this,&fStack_28);
  return;
}

