/* ts_i386.so - CTSAnimation (14 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0006b0c8  CTSAnimation::CTSAnimation  (597 bytes)
 * undefined CTSAnimation(void)
 */
/* CTSAnimation::CTSAnimation(void) */

void __thiscall CTSAnimation::CTSAnimation(CTSAnimation *this)

{
  int iVar1;
  CTSAnimation *pCVar2;
  char *pcVar3;
  undefined4 *puVar4;
  CTSAnimation *pCVar5;
  
  pcVar3 = "jump_left_";
  pCVar2 = this + 0x1c;
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined2 *)pCVar2 = *(undefined2 *)pcVar3;
  pCVar2[2] = *(CTSAnimation *)(pcVar3 + 2);
  pcVar3 = "jump_right_";
  pCVar2 = this + 0x2c;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pCVar2 = pCVar2 + 4;
  }
  pcVar3 = "jump_forward_";
  pCVar2 = this + 0x3c;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined2 *)pCVar2 = *(undefined2 *)pcVar3;
  pcVar3 = "jump_forward_";
  pCVar2 = this + 0x4c;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined2 *)pCVar2 = *(undefined2 *)pcVar3;
  *(undefined4 *)(this + 0x5c) = 0x65766964;
  *(undefined4 *)(this + 0x60) = 0x5f6c5f;
  *(undefined4 *)(this + 0x6c) = 0x65766964;
  *(undefined4 *)(this + 0x70) = 0x5f725f;
  *(undefined4 *)(this + 0x7c) = 0x65766964;
  *(undefined4 *)(this + 0x80) = 0x5f665f;
  *(undefined4 *)(this + 0x8c) = 0x65766964;
  *(undefined4 *)(this + 0x90) = 0x5f625f;
  pCVar2 = (CTSAnimation *)"slide_l_";
  pCVar5 = this + 0x9c;
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar5 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar5 = pCVar5 + 4;
  }
  *pCVar5 = *pCVar2;
  pCVar2 = (CTSAnimation *)"slide_r_";
  pCVar5 = this + 0xac;
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar5 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar5 = pCVar5 + 4;
  }
  *pCVar5 = *pCVar2;
  pCVar2 = (CTSAnimation *)"slide_f_";
  pCVar5 = this + 0xbc;
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar5 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar5 = pCVar5 + 4;
  }
  *pCVar5 = *pCVar2;
  pCVar2 = (CTSAnimation *)"slide_b_";
  pCVar5 = this + 0xcc;
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar5 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar5 = pCVar5 + 4;
  }
  *pCVar5 = *pCVar2;
  pcVar3 = "slide_l_end";
  pCVar2 = this + 0xdc;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pCVar2 = pCVar2 + 4;
  }
  pcVar3 = "slide_r_end";
  pCVar2 = this + 0xec;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pCVar2 = pCVar2 + 4;
  }
  pcVar3 = "slide_f_end";
  pCVar2 = this + 0xfc;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pCVar2 = pCVar2 + 4;
  }
  pcVar3 = "slide_b_end";
  pCVar2 = this + 0x10c;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pCVar2 = pCVar2 + 4;
  }
  pcVar3 = "dive_l_end";
  pCVar2 = this + 0x11c;
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined2 *)pCVar2 = *(undefined2 *)pcVar3;
  pCVar2[2] = *(CTSAnimation *)(pcVar3 + 2);
  pcVar3 = "dive_r_end";
  pCVar2 = this + 300;
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined2 *)pCVar2 = *(undefined2 *)pcVar3;
  pCVar2[2] = *(CTSAnimation *)(pcVar3 + 2);
  pcVar3 = "dive_f_end";
  pCVar2 = this + 0x13c;
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined2 *)pCVar2 = *(undefined2 *)pcVar3;
  pCVar2[2] = *(CTSAnimation *)(pcVar3 + 2);
  pcVar3 = "dive_b_end";
  pCVar2 = this + 0x14c;
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined2 *)pCVar2 = *(undefined2 *)pcVar3;
  pCVar2[2] = *(CTSAnimation *)(pcVar3 + 2);
  puVar4 = &DAT_0010674f;
  pCVar2 = this + 0x15c;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined2 *)pCVar2 = *(undefined2 *)puVar4;
  pCVar2[2] = *(CTSAnimation *)((int)puVar4 + 2);
  puVar4 = &DAT_00106756;
  pCVar2 = this + 0x16c;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined2 *)pCVar2 = *(undefined2 *)puVar4;
  pCVar2[2] = *(CTSAnimation *)((int)puVar4 + 2);
  puVar4 = &DAT_0010675d;
  pCVar2 = this + 0x17c;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined2 *)pCVar2 = *(undefined2 *)puVar4;
  pCVar2[2] = *(CTSAnimation *)((int)puVar4 + 2);
  puVar4 = &DAT_00106764;
  pCVar2 = this + 0x18c;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined2 *)pCVar2 = *(undefined2 *)puVar4;
  pCVar2[2] = *(CTSAnimation *)((int)puVar4 + 2);
  puVar4 = &DAT_0010674f;
  pCVar2 = this + 0x19c;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined2 *)pCVar2 = *(undefined2 *)puVar4;
  pCVar2[2] = *(CTSAnimation *)((int)puVar4 + 2);
  puVar4 = &DAT_00106756;
  pCVar2 = this + 0x1ac;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined2 *)pCVar2 = *(undefined2 *)puVar4;
  pCVar2[2] = *(CTSAnimation *)((int)puVar4 + 2);
  pcVar3 = "roll_f_high";
  pCVar2 = this + 0x1bc;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pCVar2 = pCVar2 + 4;
  }
  puVar4 = &DAT_00106764;
  pCVar2 = this + 0x1cc;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined2 *)pCVar2 = *(undefined2 *)puVar4;
  pCVar2[2] = *(CTSAnimation *)((int)puVar4 + 2);
  return;
}

/* 0006b320  CTSAnimation::Init  (90 bytes)
 * undefined Init(void)
 */
/* CTSAnimation::Init(void) */

void __thiscall CTSAnimation::Init(CTSAnimation *this)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x18) = 1;
  this[0x1e8] = (CTSAnimation)0x0;
  return;
}

/* 0006b37c  CTSAnimation::UpdateTimers  (238 bytes)
 * undefined UpdateTimers(int param_1)
 */
/* CTSAnimation::UpdateTimers(CBasePlayer *) */

void __thiscall CTSAnimation::UpdateTimers(CTSAnimation *this,int param_1)

{
  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;
  
  lVar1 = (longdouble)(**(code **)(*(int *)(param_1 + 0x60) + 0x10))(param_1);
  lVar1 = lVar1 * (longdouble)gpGlobals->frametime;
  lVar2 = (longdouble)*(float *)(this + 0x1e0) - lVar1;
  if (lVar2 < (longdouble)0.0) {
    lVar2 = (longdouble)0.0;
  }
  *(float *)(this + 0x1e0) = (float)lVar2;
  lVar2 = (longdouble)*(float *)(this + 0x1dc) - lVar1;
  if (lVar2 < (longdouble)0.0) {
    lVar2 = (longdouble)0.0;
  }
  *(float *)(this + 0x1dc) = (float)lVar2;
  lVar2 = (longdouble)*(float *)(this + 0xc) - lVar1;
  if (lVar2 < (longdouble)0.0) {
    lVar2 = (longdouble)0.0;
  }
  *(float *)(this + 0xc) = (float)lVar2;
  lVar2 = (longdouble)*(float *)(this + 0x10) - lVar1;
  if (lVar2 < (longdouble)0.0) {
    lVar2 = (longdouble)0.0;
  }
  *(float *)(this + 0x10) = (float)lVar2;
  if (-0.001 <= *(float *)(this + 8)) {
    lVar3 = (longdouble)0.0;
    lVar2 = (longdouble)*(float *)(this + 8) - lVar1;
    if ((longdouble)*(float *)(this + 8) - lVar1 < lVar3) goto LAB_0006b464;
  }
  else {
    lVar3 = lVar1 + (longdouble)*(float *)(this + 8);
    lVar2 = (longdouble)0.0;
    if (lVar3 <= (longdouble)0.0) goto LAB_0006b464;
  }
  lVar3 = lVar2;
LAB_0006b464:
  *(float *)(this + 8) = (float)lVar3;
  return;
}

/* 0006b470  CTSAnimation::Animate  (7218 bytes)
 * undefined Animate(CBasePlayer * param_1, int param_2)
 */
/* CTSAnimation::Animate(CBasePlayer *, int) */

void __thiscall CTSAnimation::Animate(CTSAnimation *this,CBasePlayer *param_1,int param_2)

{
  undefined1 *__src;
  float fVar1;
  float fVar2;
  entvars_t *peVar3;
  bool bVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  byte_conflict *pbVar6;
  CTSAnimation *pCVar7;
  byte *pbVar8;
  CTSAnimation *pCVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  char *pcVar14;
  undefined1 auStack_9c [4];
  byte *local_98;
  char local_91;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_60;
  CTSAnimation local_5c [4];
  char local_58 [72];
  
  if (param_2 < 0) {
    return;
  }
  fVar1 = param_1->pev->velocity[0];
  fVar2 = param_1->pev->velocity[1];
  local_90 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  if (((param_1->pev->flags & 0x200) == 0) && (iVar5 = (*param_1->vtable[0x2d])(), iVar5 != 0)) {
    if ((*(int *)this == 4) &&
       ((96.0 < local_90 &&
        (bVar4 = IsInCloseCombat(this,param_2), CONCAT31(extraout_var,bVar4) == 0)))) {
      peVar3 = param_1->pev;
      local_60 = SQRT(peVar3->velocity[2] * peVar3->velocity[2] +
                      peVar3->velocity[1] * peVar3->velocity[1] +
                      peVar3->velocity[0] * peVar3->velocity[0]);
      if (local_60 == 0.0) {
        local_74 = 1.0;
        local_7c = 0.0;
        local_78 = 0.0;
      }
      else {
        local_74 = 1.0 / local_60;
        local_7c = local_74 * peVar3->velocity[0];
        local_78 = local_74 * peVar3->velocity[1];
        local_74 = local_74 * peVar3->velocity[2];
      }
      peVar3 = param_1->pev;
      local_8c = peVar3->v_angle[0];
      local_88 = peVar3->v_angle[1];
      local_84 = peVar3->v_angle[2];
      BlendAnimationsByDir
                (this,(CBaseAnimating *)param_1,&local_7c,&local_8c,(int)(this + 0x1c),0.6,0.3,
                 &param_1->field_0xb58);
    }
    if (param_2 == 2) {
      local_8c = *(float *)&param_1->field_0x510;
      local_88 = *(float *)&param_1->field_0x514;
      local_84 = *(float *)&param_1->field_0x518;
      peVar3 = param_1->pev;
      local_7c = peVar3->v_angle[0];
      local_78 = peVar3->v_angle[1];
      local_74 = peVar3->v_angle[2];
      iVar5 = 1;
      bVar4 = true;
      bVar11 = false;
      pbVar8 = &param_1->field_0xb58;
      pbVar10 = &DAT_00106657;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar11 = *pbVar8 < *pbVar10;
        bVar4 = *pbVar8 == *pbVar10;
        pbVar8 = pbVar8 + 1;
        pbVar10 = pbVar10 + 1;
      } while (bVar4);
      pbVar6 = "akimbo";
      if ((!bVar11 && !bVar4) != bVar11) {
        pbVar6 = &param_1->field_0xb58;
      }
      BlendAnimationsByDir
                (this,(CBaseAnimating *)param_1,&local_8c,&local_7c,(int)(this + 0x5c),0.6,0.3,
                 pbVar6);
    }
  }
  local_91 = '\0';
  bVar4 = IsInCloseCombat(this,*(int *)this);
  if (CONCAT31(extraout_var_00,bVar4) == 0) {
    switch(*(undefined4 *)this) {
    case 3:
      iVar5 = (*param_1->vtable[0x2d])();
      if (((iVar5 != 0) && (param_2 != 4)) &&
         (((param_2 != 0x39 && (((param_2 != 0x2a && (param_2 != 0x2b)) && (param_2 != 0x29)))) &&
          (((param_2 != 0 && (param_2 != 8)) &&
           ((param_2 != 9 &&
            (bVar4 = CBasePlayer::IsOnLadder(param_1), CONCAT31(extraout_var_07,bVar4) == 0))))))))
      {
        BlendAnimationsForSlide(this,(CBaseAnimating *)param_1);
        return;
      }
      break;
    case 4:
      if (((((*(int *)&param_1->field_0x78 == 0) && (param_2 != 4)) &&
           (((param_2 != 0x28 && ((param_2 != 0x2f && (param_2 != 0x30)))) && (param_2 != 0x31))))
          && (((param_2 != 0x37 && (param_2 != 0x38)) && (param_2 != 0x36)))) &&
         (((param_2 != 0x32 && (iVar5 = (*param_1->vtable[0x2d])(), iVar5 != 0)) &&
          ((param_1->pev->flags & 0x200) == 0)))) {
        bVar4 = IsInCloseCombat(this,param_2);
        iVar5 = CONCAT31(extraout_var_09,bVar4);
joined_r0x0006bf4f:
        if (iVar5 == 0) {
          return;
        }
      }
      break;
    case 7:
      goto switchD_0006b7ce_caseD_7;
    case 0x28:
      if ((((*(int *)&param_1->field_0x78 == 0) && (iVar5 = (*param_1->vtable[0x2d])(), iVar5 != 0))
          && (param_2 != 0x29)) && (param_2 != 0x2e)) {
        bVar4 = param_2 == 3;
LAB_0006bdba:
        if (!bVar4) {
          bVar4 = CBasePlayer::IsOnLadder(param_1);
          iVar5 = CONCAT31(extraout_var_08,bVar4);
          goto joined_r0x0006bf4f;
        }
      }
      break;
    case 0x29:
    case 0x2e:
    case 0x2f:
      if (((*(int *)&param_1->field_0x78 == 0) && (iVar5 = (*param_1->vtable[0x2d])(), iVar5 != 0))
         && ((param_1->pev->iuser4 & 4) != 0)) {
        return;
      }
      break;
    case 0x2a:
    case 0x2b:
      UTIL_MakeVectors(param_1->pev->v_angle);
      bVar4 = false;
      peVar3 = param_1->pev;
      local_60 = SQRT(peVar3->velocity[2] * peVar3->velocity[2] +
                      peVar3->velocity[1] * peVar3->velocity[1] +
                      peVar3->velocity[0] * peVar3->velocity[0]);
      if (local_60 == 0.0) {
LAB_0006bc5d:
        iVar5 = (*param_1->vtable[0x2d])();
        if ((((iVar5 != 0) && (param_2 != 0x2a)) && (param_2 != 0x2b)) &&
           (((param_2 != 3 && (param_2 != 0x29)) &&
            (bVar11 = CBasePlayer::IsOnLadder(param_1), CONCAT31(extraout_var_06,bVar11) == 0)))) {
          bVar4 = true;
        }
      }
      else {
        peVar3 = param_1->pev;
        local_84 = SQRT(peVar3->velocity[2] * peVar3->velocity[2] +
                        peVar3->velocity[1] * peVar3->velocity[1] +
                        peVar3->velocity[0] * peVar3->velocity[0]);
        if (local_84 == 0.0) {
          local_84 = 1.0;
          local_8c = 0.0;
          local_88 = 0.0;
        }
        else {
          local_84 = 1.0 / local_84;
          local_8c = local_84 * peVar3->velocity[0];
          local_88 = local_84 * peVar3->velocity[1];
          local_84 = local_84 * peVar3->velocity[2];
        }
        local_60 = SQRT(gpGlobals->v_right[2] * gpGlobals->v_right[2] +
                        gpGlobals->v_right[1] * gpGlobals->v_right[1] +
                        gpGlobals->v_right[0] * gpGlobals->v_right[0]);
        if (local_60 == 0.0) {
          local_74 = 1.0;
          local_7c = 0.0;
          local_78 = 0.0;
        }
        else {
          local_74 = 1.0 / local_60;
          local_7c = local_74 * gpGlobals->v_right[0];
          local_78 = local_74 * gpGlobals->v_right[1];
          local_74 = local_74 * gpGlobals->v_right[2];
        }
        if (local_84 * local_74 + local_88 * local_78 + local_8c * local_7c != 0.0)
        goto LAB_0006bc5d;
      }
      if (bVar4) {
        return;
      }
      break;
    case 0x30:
      if ((*(int *)&param_1->field_0x78 == 0) && (iVar5 = (*param_1->vtable[0x2d])(), iVar5 != 0)) {
        return;
      }
      break;
    case 0x31:
      if ((*(int *)&param_1->field_0x78 == 0) && (iVar5 = (*param_1->vtable[0x2d])(), iVar5 != 0)) {
        bVar4 = (param_1->pev->iuser4 & 4) == 0;
        goto LAB_0006bdba;
      }
      break;
    case 0x32:
      if ((((*(int *)&param_1->field_0x78 == 0) && (iVar5 = (*param_1->vtable[0x2d])(), iVar5 != 0))
          && (bVar4 = CBasePlayer::IsOnLadder(param_1), CONCAT31(extraout_var_02,bVar4) == 0)) &&
         ((param_2 != 0x29 && (param_2 != 0x2e)))) {
        return;
      }
      break;
    case 0x36:
      if ((*(int *)&param_1->field_0x78 == 0) && (iVar5 = (*param_1->vtable[0x2d])(), iVar5 != 0)) {
        return;
      }
      *(undefined4 *)&param_1->field_0x520 = 0;
      break;
    case 0x37:
      if ((*(int *)&param_1->field_0x78 == 0) &&
         (((((iVar5 = (*param_1->vtable[0x2d])(), iVar5 != 0 && ((param_1->pev->iuser4 & 4) != 0))
            && (bVar4 = CBasePlayer::IsOnLadder(param_1), CONCAT31(extraout_var_03,bVar4) == 0)) &&
           ((param_2 != 0x37 && (param_2 != 0x38)))) && (param_2 != 0x28)))) {
LAB_0006ba51:
        if ((param_1->pev->flags & 0x200) == 0) {
          return;
        }
      }
      break;
    case 0x38:
      if ((((*(int *)&param_1->field_0x78 == 0) && (iVar5 = (*param_1->vtable[0x2d])(), iVar5 != 0))
          && ((param_1->pev->iuser4 & 4) != 0)) &&
         (((bVar4 = CBasePlayer::IsOnLadder(param_1), CONCAT31(extraout_var_04,bVar4) == 0 &&
           (param_2 != 0x37)) &&
          ((param_2 != 0x38 &&
           ((param_2 != 0x28 &&
            (bVar4 = IsInCloseCombat(this,param_2), CONCAT31(extraout_var_05,bVar4) == 0))))))))
      goto LAB_0006ba51;
      break;
    case 0x39:
      if (((*(int *)&param_1->field_0x78 == 0) && (param_2 != 0x39)) &&
         (((((param_2 != 0x28 && (((param_2 != 0x2f && (param_2 != 0x30)) && (param_2 != 0x31)))) &&
            (((param_2 != 0x37 && (param_2 != 0x38)) && (param_2 != 0x36)))) &&
           ((param_2 != 0x32 && (iVar5 = (*param_1->vtable[0x2d])(), iVar5 != 0)))) &&
          ((param_1->pev->flags & 0x200) == 0)))) {
        bVar4 = IsInCloseCombat(this,param_2);
        iVar5 = CONCAT31(extraout_var_10,bVar4);
        goto joined_r0x0006bf4f;
      }
    }
  }
  else if ((((((*(int *)&param_1->field_0x78 == 0) &&
              (bVar4 = IsInCloseCombat(this,param_2), CONCAT31(extraout_var_01,bVar4) == 0)) &&
             (iVar5 = (*param_1->vtable[0x2d])(), iVar5 != 0)) &&
            (((param_2 != 0x28 && (param_2 != 0x2f)) &&
             ((param_2 != 0x30 && ((param_2 != 0x36 && (param_2 != 0x32)))))))) && (param_2 != 0x31)
           ) && ((((param_2 != 0x37 && (param_2 != 0x38)) && (param_2 != 0x39)) &&
                 ((this[0x1e8] == (CTSAnimation)0x0 || ((param_1->pev->flags & 0x200) == 0)))))) {
    iVar5 = GaitCloseCombat(this,*(int *)this,(int *)param_1);
    if (iVar5 == 0) {
      return;
    }
    local_91 = '\x01';
  }
  if (local_91 != '\0') goto switchD_0006bfba_caseD_2;
  bVar4 = IsInCloseCombat(this,param_2);
  if (CONCAT31(extraout_var_11,bVar4) != 0) {
    HandleCloseCombat(this,(CBaseAnimating *)param_1,param_2);
    goto switchD_0006bfba_caseD_2;
  }
  switch(param_2) {
  case 0:
  case 8:
  case 9:
    if ((param_1->pev->flags & 0x200) == 0) {
      return;
    }
    if ((param_1->pev->iuser4 & 0x20) == 0) {
      *(undefined4 *)(this + 0xc) = 0x40000000;
      if ((param_1->pev->flags & 0x4000) == 0) {
        pcVar14 = "shoot_";
        pCVar7 = local_5c;
        for (iVar5 = 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pCVar7 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pCVar7 = pCVar7 + 4;
        }
        *(undefined2 *)pCVar7 = *(undefined2 *)pcVar14;
        pCVar7[2] = *(CTSAnimation *)(pcVar14 + 2);
      }
      else {
        pcVar14 = "crouch_shoot_";
        pCVar7 = local_5c;
        for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pCVar7 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pCVar7 = pCVar7 + 4;
        }
        *(undefined2 *)pCVar7 = *(undefined2 *)pcVar14;
      }
      __src = &param_1->field_0xb58;
      strcat((char *)local_5c,__src);
      if ((((0.001 < *(float *)(this + 8)) && ((param_1->pev->flags & 0x4000) == 0)) &&
          (param_1->pev->fov == 0.0)) &&
         ((iVar5 = strncmp(__src,"one",3), iVar5 == 0 ||
          (iVar5 = strncmp(__src,"two",3), iVar5 == 0)))) {
        strcat((char *)local_5c,"2");
        *(undefined4 *)(this + 0xc) = 0;
      }
      if (param_2 != 0) {
        pcVar14 = "slide_b_right";
        if (param_2 != 9) {
          pcVar14 = "slide_b_left";
        }
        strcat((char *)local_5c,pcVar14 + 7);
      }
      uVar13 = 0x92;
    }
    else {
      if (param_1->field_0x51c == '\0') {
        pCVar7 = (CTSAnimation *)"slide_f_";
        pCVar9 = local_5c;
        for (iVar5 = 2; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pCVar9 = *(undefined4 *)pCVar7;
          pCVar7 = pCVar7 + 4;
          pCVar9 = pCVar9 + 4;
        }
        *pCVar9 = *pCVar7;
      }
      else {
        local_8c = *(float *)&param_1->field_0x510;
        local_88 = *(float *)&param_1->field_0x514;
        local_84 = *(float *)&param_1->field_0x518;
        peVar3 = param_1->pev;
        local_7c = peVar3->v_angle[0];
        local_78 = peVar3->v_angle[1];
        local_74 = peVar3->v_angle[2];
        iVar5 = GetDirection(&local_8c,(int)&local_7c,0.6,0.3);
        if ((iVar5 != *(int *)(this + 0x14)) && (iVar5 != 2)) {
          *(int *)(this + 0x14) = iVar5;
        }
        strcpy((char *)local_5c,(char *)(this + *(int *)(this + 0x14) * 0x10 + 0x9c));
      }
      strcat((char *)local_5c,&param_1->field_0xb58);
      strcat((char *)local_5c,"_shoot");
      if (param_2 != 0) {
        pcVar14 = "slide_b_right";
        if (param_2 != 9) {
          pcVar14 = "slide_b_left";
        }
        strcat((char *)local_5c,pcVar14 + 7);
      }
      uVar13 = 0x94;
    }
    goto LAB_0006ce80;
  case 1:
  case 6:
    if (((param_1->pev->flags & 0x200) == 0) &&
       (bVar4 = CBasePlayer::IsOnLadder(param_1), CONCAT31(extraout_var_12,bVar4) == 0)) {
      return;
    }
    bVar11 = false;
    bVar4 = false;
    iVar5 = 1;
    pbVar8 = &param_1->field_0x478;
    pbVar10 = &DAT_00106657;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar4 = *pbVar8 < *pbVar10;
      bVar11 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + 1;
      pbVar10 = pbVar10 + 1;
    } while (bVar11);
    bVar12 = (!bVar4 && !bVar11) < bVar4;
    if ((!bVar4 && !bVar11) == bVar4) {
      iVar5 = 1;
      bVar4 = true;
      pbVar8 = &param_1->field_0xb58;
      pbVar10 = &DAT_00106657;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar12 = *pbVar8 < *pbVar10;
        bVar4 = *pbVar8 == *pbVar10;
        pbVar8 = pbVar8 + 1;
        pbVar10 = pbVar10 + 1;
      } while (bVar4);
      if ((!bVar12 && !bVar4) == bVar12) break;
      if (((((*(int *)this == 0) || (*(int *)this == 8)) || (*(int *)this == 9)) ||
          ((*(int *)this == 0x34 || (*(int *)this == 0x33)))) && (*(int *)&param_1->field_0x78 == 0)
         ) {
        param_2 = *(int *)this;
        break;
      }
      if ((param_1->pev->flags & 0x4000) == 0) {
        if ((0.01 <= *(float *)(this + 0xc)) || (pcVar14 = "idle_", param_1->pev->fov != 0.0)) {
          pcVar14 = "aim_";
        }
      }
      else if ((0.01 <= *(float *)(this + 0xc)) ||
              (pcVar14 = "duck_idle_", param_1->pev->fov != 0.0)) {
        pcVar14 = "crouch_aim_";
      }
      strcpy((char *)local_5c,pcVar14);
      strcat((char *)local_5c,&param_1->field_0xb58);
      uVar13 = 0x12;
      goto LAB_0006cfe1;
    }
    uVar13 = 0x12;
    pcVar14 = &param_1->field_0x478;
    goto LAB_0006cfea;
  case 3:
    if ((((*(int *)this != 0) && (*(int *)this != 8)) && (*(int *)this != 9)) ||
       (*(int *)&param_1->field_0x78 != 0)) {
      if (param_1->field_0x51c == '\0') {
        pCVar7 = (CTSAnimation *)"slide_f_";
        pCVar9 = local_5c;
        for (iVar5 = 2; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pCVar9 = *(undefined4 *)pCVar7;
          pCVar7 = pCVar7 + 4;
          pCVar9 = pCVar9 + 4;
        }
        *pCVar9 = *pCVar7;
      }
      else {
        local_8c = *(float *)&param_1->field_0x510;
        local_88 = *(float *)&param_1->field_0x514;
        local_84 = *(float *)&param_1->field_0x518;
        peVar3 = param_1->pev;
        local_7c = peVar3->v_angle[0];
        local_78 = peVar3->v_angle[1];
        local_74 = peVar3->v_angle[2];
        iVar5 = GetDirection(&local_8c,(int)&local_7c,0.6,0.3);
        if ((iVar5 != *(int *)(this + 0x14)) && (iVar5 != 2)) {
          *(int *)(this + 0x14) = iVar5;
        }
        strcpy((char *)local_5c,(char *)(this + *(int *)(this + 0x14) * 0x10 + 0x9c));
      }
      bVar4 = auStack_9c < (undefined1 *)0x8;
      goto LAB_0006c776;
    }
    break;
  case 4:
    uVar13 = param_1->pev->iuser4;
    if ((uVar13 & 0x20) != 0) {
      return;
    }
    bVar4 = false;
    bVar11 = (uVar13 & 4) == 0;
    if (!bVar11) {
      return;
    }
    iVar5 = 1;
    pbVar8 = &param_1->field_0xb58;
    pbVar10 = &DAT_00106657;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar4 = *pbVar8 < *pbVar10;
      bVar11 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + 1;
      pbVar10 = pbVar10 + 1;
    } while (bVar11);
    if ((!bVar4 && !bVar11) == bVar4) {
      pcVar14 = "standard_jump";
      pCVar7 = local_5c;
      for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pCVar7 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pCVar7 = pCVar7 + 4;
      }
      *(undefined2 *)pCVar7 = *(undefined2 *)pcVar14;
    }
    else {
      peVar3 = param_1->pev;
      local_60 = SQRT(peVar3->velocity[2] * peVar3->velocity[2] +
                      peVar3->velocity[1] * peVar3->velocity[1] +
                      peVar3->velocity[0] * peVar3->velocity[0]);
      if (local_60 == 0.0) {
        local_84 = 1.0;
        local_8c = 0.0;
        local_88 = 0.0;
      }
      else {
        local_84 = 1.0 / local_60;
        local_8c = local_84 * peVar3->velocity[0];
        local_88 = local_84 * peVar3->velocity[1];
        local_84 = local_84 * peVar3->velocity[2];
      }
      peVar3 = param_1->pev;
      local_7c = peVar3->v_angle[0];
      local_78 = peVar3->v_angle[1];
      local_74 = peVar3->v_angle[2];
      iVar5 = GetDirection(&local_8c,(int)&local_7c,0.6,0.3);
      *(int *)(this + 0x14) = iVar5;
      strcpy((char *)local_5c,(char *)(this + iVar5 * 0x10 + 0x1c));
      strcat((char *)local_5c,&param_1->field_0xb58);
    }
    uVar13 = 0x94;
    goto LAB_0006ce80;
  case 5:
    if (*(int *)(this + 4) == 0) {
      SetAnim(this,(CBaseAnimating *)param_1,"goduck",0x94,0);
      *(undefined4 *)(this + 4) = 1;
    }
    break;
  case 7:
    if (*(int *)(this + 0x1e4) == 0) {
      if ((80.0 <= local_90) || (0x32 < *(int *)&param_1->field_0x97c)) {
        if (*(int *)&param_1->field_0x97c < 0x33) {
          peVar3 = param_1->pev;
          local_60 = SQRT(peVar3->velocity[2] * peVar3->velocity[2] +
                          peVar3->velocity[1] * peVar3->velocity[1] +
                          peVar3->velocity[0] * peVar3->velocity[0]);
          if (local_60 == 0.0) {
            local_84 = 1.0;
            local_8c = 0.0;
            local_88 = 0.0;
          }
          else {
            local_84 = 1.0 / local_60;
            local_8c = local_84 * peVar3->velocity[0];
            local_88 = local_84 * peVar3->velocity[1];
            local_84 = local_84 * peVar3->velocity[2];
          }
          peVar3 = param_1->pev;
          local_7c = peVar3->v_angle[0];
          local_78 = peVar3->v_angle[1];
          local_74 = peVar3->v_angle[2];
        }
        else {
          local_8c = -g_vecAttackDir;
          local_88 = -DAT_00190ee4;
          local_84 = -DAT_00190ee8;
          peVar3 = param_1->pev;
          local_7c = peVar3->v_angle[0];
          local_78 = peVar3->v_angle[1];
          local_74 = peVar3->v_angle[2];
        }
        iVar5 = GetDirection(&local_8c,(int)&local_7c,0.6,0.3);
        if (iVar5 == 2) {
          uVar13 = 0x14;
          pcVar14 = "forward_die";
        }
        else {
          if (iVar5 != 3) goto LAB_0006ca14;
          if ((*(int *)&param_1->field_0x10c == 1) &&
             (iVar5 = (*g_engfuncs.pfnRandomLong)(0,100), 0x1e < iVar5)) {
            uVar13 = 0x14;
            pcVar14 = "die_spinback";
          }
          else {
            iVar5 = (*g_engfuncs.pfnRandomLong)(0,1);
            if (iVar5 == 0) {
              uVar13 = 0x14;
              pcVar14 = "leg_die";
            }
            else {
              if (iVar5 != 1) break;
              uVar13 = 0x14;
              pcVar14 = "die_back";
            }
          }
        }
      }
      else {
LAB_0006ca14:
        uVar13 = 0x14;
        pcVar14 = "die_spin";
      }
    }
    else {
      iVar5 = (*g_engfuncs.pfnRandomLong)(0,2);
      if (iVar5 != 1) {
        if (iVar5 < 2) {
          if (iVar5 == 0) {
            uVar13 = 0x14;
            pcVar14 = "normal_die1";
            goto LAB_0006cfea;
          }
        }
        else if (iVar5 == 2) {
          uVar13 = 0x14;
          pcVar14 = "normal_die3";
          goto LAB_0006cfea;
        }
        break;
      }
      uVar13 = 0x14;
      pcVar14 = "normal_die2";
    }
    goto LAB_0006cfea;
  case 0x28:
    peVar3 = param_1->pev;
    local_60 = SQRT(peVar3->velocity[2] * peVar3->velocity[2] +
                    peVar3->velocity[1] * peVar3->velocity[1] +
                    peVar3->velocity[0] * peVar3->velocity[0]);
    if (local_60 == 0.0) {
      local_84 = 1.0;
      local_8c = 0.0;
      local_88 = 0.0;
    }
    else {
      local_84 = 1.0 / local_60;
      local_8c = local_84 * peVar3->velocity[0];
      local_88 = local_84 * peVar3->velocity[1];
      local_84 = local_84 * peVar3->velocity[2];
    }
    peVar3 = param_1->pev;
    local_7c = peVar3->v_angle[0];
    local_78 = peVar3->v_angle[1];
    local_74 = peVar3->v_angle[2];
    iVar5 = GetDirection(&local_8c,(int)&local_7c,0.6,0.3);
    *(int *)(this + 0x14) = iVar5;
    strcpy((char *)local_5c,(char *)(this + iVar5 * 0x10 + 0x5c));
    bVar4 = (undefined1 *)0xfffffff7 < &stack0xffffff54;
LAB_0006c776:
    bVar11 = &stack0x00000000 == (undefined1 *)0xa4;
    iVar5 = 1;
    pbVar8 = &param_1->field_0xb58;
    pbVar10 = &DAT_00106657;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar4 = *pbVar8 < *pbVar10;
      bVar11 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + 1;
      pbVar10 = pbVar10 + 1;
    } while (bVar11);
    pcVar14 = "akimbo";
    if ((!bVar4 && !bVar11) != bVar4) {
      pcVar14 = &param_1->field_0xb58;
    }
    strcat((char *)local_5c,pcVar14);
    uVar13 = 0x94;
LAB_0006cfe1:
    pcVar14 = (char *)local_5c;
    goto LAB_0006cfea;
  case 0x29:
    iVar5 = *(int *)(this + 0x14) * 0x10 + 0xdc;
    goto LAB_0006c502;
  case 0x2a:
  case 0x2b:
    if (param_1->field_0x51c == '\0') {
      pCVar7 = (CTSAnimation *)"slide_f_";
      pCVar9 = local_5c;
      for (iVar5 = 2; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pCVar9 = *(undefined4 *)pCVar7;
        pCVar7 = pCVar7 + 4;
        pCVar9 = pCVar9 + 4;
      }
      *pCVar9 = *pCVar7;
      bVar4 = auStack_9c < (undefined1 *)0x8;
      bVar11 = &stack0x00000000 == (undefined1 *)0xa4;
      iVar5 = 1;
      pbVar8 = &param_1->field_0xb58;
      pbVar10 = &DAT_00106657;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar4 = *pbVar8 < *pbVar10;
        bVar11 = *pbVar8 == *pbVar10;
        pbVar8 = pbVar8 + 1;
        pbVar10 = pbVar10 + 1;
      } while (bVar11);
      pcVar14 = "akimbo";
      if ((!bVar4 && !bVar11) != bVar4) {
        pcVar14 = &param_1->field_0xb58;
      }
      strcat((char *)local_5c,pcVar14);
      pcVar14 = "slide_b_left";
      if (param_2 != 0x2a) {
        pcVar14 = "slide_b_right";
      }
      strcat((char *)local_5c,pcVar14 + 7);
    }
    else {
      pcVar14 = "slide_b_left";
      if (param_2 != 0x2a) {
        pcVar14 = "slide_b_right";
      }
      strcpy((char *)local_5c,pcVar14);
    }
    uVar13 = 0x14;
    goto LAB_0006ce80;
  case 0x2e:
    local_8c = *(float *)&param_1->field_0x510;
    local_88 = *(float *)&param_1->field_0x514;
    local_84 = *(float *)&param_1->field_0x518;
    peVar3 = param_1->pev;
    local_7c = peVar3->v_angle[0];
    local_78 = peVar3->v_angle[1];
    local_74 = peVar3->v_angle[2];
    iVar5 = GetDirection(&local_8c,(int)&local_7c,0.6,0.3);
    iVar5 = iVar5 * 0x10 + 0x11c;
    goto LAB_0006c502;
  case 0x2f:
    local_8c = *(float *)&param_1->field_0x510;
    local_88 = *(float *)&param_1->field_0x514;
    local_84 = *(float *)&param_1->field_0x518;
    peVar3 = param_1->pev;
    local_7c = peVar3->v_angle[0];
    local_78 = peVar3->v_angle[1];
    local_74 = peVar3->v_angle[2];
    iVar5 = GetDirection(&local_8c,(int)&local_7c,0.6,0.3);
    iVar5 = iVar5 * 0x10 + 0x15c;
LAB_0006c502:
    pcVar14 = (char *)(this + iVar5);
LAB_0006c505:
    SetAnim(this,(CBaseAnimating *)param_1,pcVar14,0x94,0);
    *(undefined4 *)(this + 8) = 0x40400000;
    break;
  case 0x30:
    local_8c = *(float *)&param_1->field_0x510;
    local_88 = *(float *)&param_1->field_0x514;
    local_84 = *(float *)&param_1->field_0x518;
    peVar3 = param_1->pev;
    local_7c = peVar3->v_angle[0];
    local_78 = peVar3->v_angle[1];
    local_74 = peVar3->v_angle[2];
    iVar5 = GetDirection(&local_8c,(int)&local_7c,0.6,0.3);
    pcVar14 = (char *)(this + iVar5 * 0x10 + 0x19c);
    uVar13 = 0x94;
    goto LAB_0006cfea;
  case 0x31:
    local_8c = *(float *)&param_1->field_0x510;
    local_88 = *(float *)&param_1->field_0x514;
    local_84 = *(float *)&param_1->field_0x518;
    peVar3 = param_1->pev;
    local_7c = peVar3->v_angle[0];
    local_78 = peVar3->v_angle[1];
    local_74 = peVar3->v_angle[2];
    iVar5 = GetDirection(&local_8c,(int)&local_7c,0.6,0.3);
    switch(iVar5) {
    case 0:
      pcVar14 = "wheel_l";
      break;
    case 1:
      pcVar14 = "wheel_r";
      break;
    default:
      pcVar14 = "wheel_f";
      break;
    case 3:
      pcVar14 = "wheel_b";
    }
    SetAnim(this,(CBaseAnimating *)param_1,pcVar14,0x94,0);
    *(undefined4 *)(this + 8) = 0x40400000;
    break;
  case 0x32:
    local_8c = *(float *)&param_1->field_0x510;
    local_88 = *(float *)&param_1->field_0x514;
    local_84 = *(float *)&param_1->field_0x518;
    peVar3 = param_1->pev;
    local_7c = peVar3->v_angle[0];
    local_78 = peVar3->v_angle[1];
    local_74 = peVar3->v_angle[2];
    iVar5 = GetDirection(&local_8c,(int)&local_7c,0.6,0.3);
    pcVar14 = "lowwheel_f";
    if ((iVar5 != 2) && (pcVar14 = "lowwheel_l", iVar5 != 0)) {
      pcVar14 = "lowwheel_r";
    }
    goto LAB_0006c505;
  case 0x33:
  case 0x34:
    if ((param_1->pev->flags & 0x200) == 0) {
      return;
    }
    bVar4 = false;
    bVar11 = (param_1->pev->iuser4 & 0x30U) == 0;
    if (!bVar11) {
      return;
    }
    iVar5 = 1;
    pbVar8 = &param_1->field_0xb58;
    pbVar10 = &DAT_00106657;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar4 = *pbVar8 < *pbVar10;
      bVar11 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + 1;
      pbVar10 = pbVar10 + 1;
    } while (bVar11);
    if ((!bVar4 && !bVar11) == bVar4) {
      return;
    }
    if (param_2 == 0x33) {
      local_5c[0] = 'r';
      local_5c[1] = 'e';
      local_5c[2] = 'l';
      local_5c[3] = 'o';
    }
    else {
      local_5c[0] = 'd';
      local_5c[1] = 'r';
      local_5c[2] = 'a';
      local_5c[3] = 'w';
    }
    local_58[0] = '_';
    local_58[1] = '\0';
    strcat((char *)local_5c,&param_1->field_0xb58);
    SetAnim(this,(CBaseAnimating *)param_1,(char *)local_5c,0x92,0);
    *(undefined4 *)(this + 0xc) = 0x40000000;
    break;
  case 0x35:
    if ((param_1->pev->flags & 0x200) == 0) {
      return;
    }
    if ((param_1->pev->iuser4 & 0x30U) != 0) {
      return;
    }
    SetAnim(this,(CBaseAnimating *)param_1,"grenade",0x92,0);
    *(undefined4 *)(this + 0xc) = 0x40000000;
    *(undefined4 *)(this + 0x10) = 0x3f800000;
    break;
  case 0x36:
    uVar13 = 0x94;
    pcVar14 = "bullettime";
    goto LAB_0006cfea;
  case 0x37:
    SetAnim(this,(CBaseAnimating *)param_1,"walljump_end",0x94,0);
    *(undefined4 *)(this + 8) = 0x40400000;
    break;
  case 0x38:
    pcVar14 = "walljump_climb";
    goto LAB_0006c505;
  case 0x39:
    uVar13 = param_1->pev->iuser4;
    if ((uVar13 & 0x20) != 0) {
      return;
    }
    bVar4 = false;
    bVar11 = (uVar13 & 4) == 0;
    if (!bVar11) {
      return;
    }
    iVar5 = 1;
    pbVar8 = &param_1->field_0xb58;
    pbVar10 = &DAT_00106657;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar4 = *pbVar8 < *pbVar10;
      bVar11 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + 1;
      pbVar10 = pbVar10 + 1;
    } while (bVar11);
    if ((!bVar4 && !bVar11) == bVar4) {
      pcVar14 = "morfy_jump";
      pCVar7 = local_5c;
      for (iVar5 = 2; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pCVar7 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pCVar7 = pCVar7 + 4;
      }
      *(undefined2 *)pCVar7 = *(undefined2 *)pcVar14;
      pCVar7[2] = *(CTSAnimation *)(pcVar14 + 2);
    }
    else {
      pcVar14 = "morfy_jump_guns";
      pCVar7 = local_5c;
      for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pCVar7 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pCVar7 = pCVar7 + 4;
      }
    }
    uVar13 = 0x94;
LAB_0006ce80:
    pcVar14 = (char *)local_5c;
LAB_0006cfea:
    SetAnim(this,(CBaseAnimating *)param_1,pcVar14,uVar13,0);
  }
switchD_0006bfba_caseD_2:
  if (local_91 == '\0') {
    *(int *)this = param_2;
  }
  if ((((((param_2 != 4) && (param_2 != 0x39)) && (param_2 != 5)) &&
       ((param_2 != 7 && (param_2 != 0x29)))) && (param_2 != 0x2e)) &&
     (((param_2 != 0x2f && (param_2 != 0x30)) &&
      ((param_2 != 0x36 &&
       (((bVar4 = IsInCloseCombat(this,param_2), CONCAT31(extraout_var_13,bVar4) == 0 ||
         (iVar5 = GaitCloseCombat(this,param_2,(int *)param_1), iVar5 != 0)) &&
        ((param_1->pev->iuser4 & 0x30c30U) == 0)))))))) {
    if ((param_1->pev->flags & 0x4000) == 0) {
      if (local_90 <= 180.0) {
        bVar4 = false;
        bVar11 = 0.0 < local_90;
        if (local_90 <= 0.0) {
          iVar5 = 1;
          pbVar8 = &param_1->field_0x478;
          pbVar10 = &DAT_00106657;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar4 = *pbVar8 < *pbVar10;
            bVar11 = *pbVar8 == *pbVar10;
            pbVar8 = pbVar8 + 1;
            pbVar10 = pbVar10 + 1;
          } while (bVar11);
          bVar12 = (!bVar4 && !bVar11) < bVar4;
          if ((!bVar4 && !bVar11) == bVar4) {
            iVar5 = 1;
            bVar4 = true;
            pbVar8 = &param_1->field_0xb58;
            pbVar10 = &DAT_00106657;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar12 = *pbVar8 < *pbVar10;
              bVar4 = *pbVar8 == *pbVar10;
              pbVar8 = pbVar8 + 1;
              pbVar10 = pbVar10 + 1;
            } while (bVar4);
            if ((!bVar12 && !bVar4) == bVar12) {
              pcVar14 = "combat_idle_low";
              if (0.01 <= *(float *)(this + 0xc)) {
                pcVar14 = "combat_idle";
              }
            }
            else {
              local_5c[0] = 'i';
              local_5c[1] = 'd';
              local_5c[2] = 'l';
              local_5c[3] = 'e';
              local_58[0] = '_';
              local_58[1] = '\0';
              pcVar14 = (char *)local_5c;
              strcat(pcVar14,&param_1->field_0xb58);
            }
          }
          else {
            pcVar14 = &param_1->field_0x478;
          }
        }
        else {
          pcVar14 = "walk2";
        }
      }
      else {
        pcVar14 = &DAT_001068be;
      }
    }
    else {
      *(undefined4 *)(this + 4) = 0;
      if (local_90 == 0.0) {
        pcVar14 = "crouch_idle";
      }
      else {
        pcVar14 = "crawl";
      }
    }
    iVar5 = CBaseAnimating::LookupSequence((CBaseAnimating *)param_1,pcVar14);
    param_1->pev->gaitsequence = iVar5;
    bVar4 = (undefined1 *)0xffffffef < &stack0xffffff54;
    bVar11 = &stack0x00000000 == (undefined1 *)0x9c;
    local_98 = &DAT_00106657;
    iVar5 = 1;
    pbVar8 = &param_1->field_0x478;
    pbVar10 = local_98;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar4 = *pbVar8 < *pbVar10;
      bVar11 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + 1;
      pbVar10 = pbVar10 + 1;
    } while (bVar11);
    bVar12 = (!bVar4 && !bVar11) < bVar4;
    if ((!bVar4 && !bVar11) == bVar4) {
      iVar5 = 1;
      bVar4 = true;
      pbVar8 = &param_1->field_0xb58;
      pbVar10 = local_98;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar12 = *pbVar8 < *pbVar10;
        bVar4 = *pbVar8 == *pbVar10;
        pbVar8 = pbVar8 + 1;
        pbVar10 = pbVar10 + 1;
      } while (bVar4);
      if (((((!bVar12 && !bVar4) == bVar12) &&
           (iVar5 = GaitCloseCombat(this,param_2,(int *)param_1), iVar5 == 0)) &&
          ((*(float *)(this + 0xc) < 0.01 || (*(int *)&param_1->field_0x78 != 0)))) &&
         (peVar3 = param_1->pev, peVar3->sequence != peVar3->gaitsequence)) {
        peVar3->sequence = peVar3->gaitsequence;
        param_1->pev->frame = 0.0;
        CBaseAnimating::ResetSequenceInfo((CBaseAnimating *)param_1);
      }
    }
  }
switchD_0006b7ce_caseD_7:
  return;
}

/* 0006d2f0  CTSAnimation::DisableBulletDance  (35 bytes)
 * undefined DisableBulletDance(int param_1)
 */
/* CTSAnimation::DisableBulletDance(CBasePlayer *) */

void CTSAnimation::DisableBulletDance(int param_1)

{
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  return;
}

/* 0006d314  CTSAnimation::EnableBulletDance  (35 bytes)
 * undefined EnableBulletDance(int param_1)
 */
/* CTSAnimation::EnableBulletDance(CBasePlayer *) */

void CTSAnimation::EnableBulletDance(int param_1)

{
  *(undefined4 *)(param_1 + 0x1e4) = 1;
  *(undefined4 *)(param_1 + 0x1dc) = 0x3e19999a;
  *(undefined4 *)(param_1 + 0x1e0) = 0x40400000;
  return;
}

/* 0006d338  CTSAnimation::BulletDance  (197 bytes)
 * undefined BulletDance(CBaseAnimating * param_1)
 */
/* CTSAnimation::BulletDance(CBasePlayer *) */

void __thiscall CTSAnimation::BulletDance(CTSAnimation *this,CBaseAnimating *param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (*(int *)(this + 0x1e4) == 0) {
    return;
  }
  if (*(float *)(this + 0x1e0) < 0.01) {
    return;
  }
  if (0.0 < *(float *)(this + 0x1dc)) {
    return;
  }
  if (*(int *)&param_1[1].field_0x14 == 0) {
    *(undefined4 *)(this + 0x1dc) = 0x3e19999a;
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,2);
    if (iVar1 == 1) {
      pcVar2 = "normal_die2";
    }
    else if (iVar1 < 2) {
      if (iVar1 != 0) {
        return;
      }
      pcVar2 = "normal_die1";
    }
    else {
      if (iVar1 != 2) {
        return;
      }
      pcVar2 = "normal_die3";
    }
    SetAnim(this,param_1,pcVar2,0x14,0);
    return;
  }
  return;
}

/* 0006d400  CTSAnimation::BlendAnimationsForSlide  (310 bytes)
 * undefined BlendAnimationsForSlide(CBaseAnimating * param_1)
 */
/* CTSAnimation::BlendAnimationsForSlide(CBasePlayer *) */

void __thiscall CTSAnimation::BlendAnimationsForSlide(CTSAnimation *this,CBaseAnimating *param_1)

{
  entvars_t *peVar1;
  int iVar2;
  int iVar3;
  char *__src;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  vec_t local_7c;
  vec_t local_78;
  vec_t local_74;
  void **local_6c;
  entvars_t *local_68;
  undefined4 local_64;
  char local_5c [76];
  
  if (param_1[0xd].field_0x8 != '\0') {
    local_6c = param_1[0xc].vtable;
    local_68 = param_1[0xd].pev;
    local_64 = *(undefined4 *)&param_1[0xd].field_0x4;
    peVar1 = param_1->pev;
    local_7c = peVar1->v_angle[0];
    local_78 = peVar1->v_angle[1];
    local_74 = peVar1->v_angle[2];
    iVar2 = GetDirection((float *)&local_6c,(int)&local_7c,0.6,0.3);
    if ((iVar2 != *(int *)(this + 0x14)) && (iVar2 != 2)) {
      strcpy(local_5c,(char *)(this + iVar2 * 0x10 + 0x9c));
      bVar6 = (CBaseAnimating *)0xfffff4a7 < param_1;
      bVar7 = &param_1[0x1d].field_0x4 == (undefined1 *)0x0;
      iVar3 = 1;
      pbVar4 = &param_1[0x1d].field_0x4;
      pbVar5 = &DAT_00106657;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *pbVar4 < *pbVar5;
        bVar7 = *pbVar4 == *pbVar5;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
      } while (bVar7);
      __src = "akimbo";
      if ((!bVar6 && !bVar7) != bVar6) {
        __src = &param_1[0x1d].field_0x4;
      }
      strcat(local_5c,__src);
      SetAnim(this,param_1,local_5c,0x194,0);
      *(int *)(this + 0x14) = iVar2;
    }
  }
  return;
}

/* 0006d538  CTSAnimation::BlendAnimationsByDir  (247 bytes)
 * undefined BlendAnimationsByDir(CBaseAnimating * param_1, float * param_2, undefined4 * param_3, int param_4, float param_5, float param_6, byte.conflict * param_7)
 */
/* CTSAnimation::BlendAnimationsByDir(CBasePlayer *, Vector, Vector, char (*)[15], float, float,
   char const *) */

void __thiscall
CTSAnimation::BlendAnimationsByDir
          (CTSAnimation *this,CBaseAnimating *param_1,float *param_2,undefined4 *param_3,int param_4
          ,float param_5,float param_6,byte_conflict *param_7)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_6c;
  float local_68;
  float local_64;
  char local_5c [76];
  
  bVar4 = false;
  bVar5 = false;
  iVar1 = 1;
  pbVar2 = param_7;
  pbVar3 = &DAT_00106657;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pbVar2 < *pbVar3;
    bVar5 = *pbVar2 == *pbVar3;
    pbVar2 = pbVar2 + 1;
    pbVar3 = pbVar3 + 1;
  } while (bVar5);
  if ((!bVar4 && !bVar5) != bVar4) {
    local_6c = *param_2;
    local_68 = param_2[1];
    local_64 = param_2[2];
    local_7c = *param_3;
    local_78 = param_3[1];
    local_74 = param_3[2];
    iVar1 = GetDirection(&local_6c,(int)&local_7c,param_5,param_6);
    if (iVar1 != *(int *)(this + 0x14)) {
      strcpy(local_5c,(char *)(iVar1 * 0x10 + param_4));
      strcat(local_5c,(char *)param_7);
      SetAnim(this,param_1,local_5c,0x194,0);
      *(int *)(this + 0x14) = iVar1;
    }
  }
  return;
}

/* 0006d630  CTSAnimation::BlendJumpAnimations  (414 bytes)
 * undefined BlendJumpAnimations(CBaseAnimating * param_1)
 */
/* CTSAnimation::BlendJumpAnimations(CBasePlayer *) */

void __thiscall CTSAnimation::BlendJumpAnimations(CTSAnimation *this,CBaseAnimating *param_1)

{
  entvars_t *peVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  bool bVar9;
  vec_t local_8c;
  vec_t local_88;
  vec_t local_84;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  char local_5c [2];
  char acStack_5a [74];
  
  bVar8 = (CBaseAnimating *)0xfffff4a7 < param_1;
  bVar9 = &param_1[0x1d].field_0x4 == (undefined1 *)0x0;
  iVar2 = 1;
  pbVar4 = &param_1[0x1d].field_0x4;
  pbVar6 = &DAT_00106657;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar8 = *pbVar4 < *pbVar6;
    bVar9 = *pbVar4 == *pbVar6;
    pbVar4 = pbVar4 + 1;
    pbVar6 = pbVar6 + 1;
  } while (bVar9);
  if ((!bVar8 && !bVar9) != bVar8) {
    peVar1 = param_1->pev;
    local_70 = SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
                    peVar1->velocity[1] * peVar1->velocity[1] +
                    peVar1->velocity[0] * peVar1->velocity[0]);
    if (local_70 == 0.0) {
      local_64 = 1.0;
      local_6c = 0.0;
      local_68 = 0.0;
    }
    else {
      local_64 = 1.0 / local_70;
      local_6c = local_64 * peVar1->velocity[0];
      local_68 = local_64 * peVar1->velocity[1];
      local_64 = local_64 * peVar1->velocity[2];
    }
    peVar1 = param_1->pev;
    local_8c = peVar1->v_angle[0];
    local_88 = peVar1->v_angle[1];
    local_84 = peVar1->v_angle[2];
    iVar2 = GetDirection(&local_6c,(int)&local_8c,0.6,0.3);
    if (iVar2 != *(int *)(this + 0x14)) {
      switch(iVar2) {
      case 0:
        pcVar5 = "jump_left_";
        pcVar7 = local_5c;
        for (iVar3 = 2; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar7 = pcVar7 + 4;
        }
        *(undefined2 *)pcVar7 = *(undefined2 *)pcVar5;
        pcVar7[2] = pcVar5[2];
        break;
      case 1:
        pcVar5 = "jump_right_";
        pcVar7 = local_5c;
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar7 = pcVar7 + 4;
        }
        break;
      case 2:
      case 3:
      case 4:
        pcVar5 = "jump_forward_";
        pcVar7 = local_5c;
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar7 = pcVar7 + 4;
        }
        *(undefined2 *)pcVar7 = *(undefined2 *)pcVar5;
      }
      strcat(local_5c,&param_1[0x1d].field_0x4);
      SetAnim(this,param_1,local_5c,0x194,0);
      *(int *)(this + 0x14) = iVar2;
    }
  }
  return;
}

/* 0006d7e4  CTSAnimation::SetAnim  (225 bytes)
 * undefined4 SetAnim(undefined4 this, CBaseAnimating * param_2, char * param_3, uint param_4, int param_5)
 */
/* CTSAnimation::SetAnim(CBasePlayer *, char const *, int, int) */

undefined4 __thiscall
CTSAnimation::SetAnim
          (undefined4 this,CBaseAnimating *param_2,char *param_3,uint param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = CBaseAnimating::LookupSequence(param_2,param_3);
  uVar2 = uVar2 & (uVar2 == 0xffffffff) - 1;
  if ((param_2->pev->sequence == uVar2) && (-1 < (char)param_4)) {
    uVar3 = 0;
  }
  else {
    if ((param_4 & 0x10) == 0) {
      piVar1 = &param_2->pev->effects;
      *piVar1 = *piVar1 | 0x20;
    }
    else {
      piVar1 = &param_2->pev->effects;
      *piVar1 = *piVar1 & 0xffffffdf;
    }
    if ((param_4 & 4) == 0) {
      if ((param_4 & 1) != 0) {
        param_2->pev->gaitsequence = uVar2;
        return 1;
      }
    }
    else {
      param_2->pev->gaitsequence = 0;
    }
    param_2->pev->sequence = uVar2;
    if ((param_4 & 0x20) == 0) {
      if ((param_4 & 0x100) == 0) {
        param_2->pev->frame = 0.0;
      }
    }
    else {
      param_2->pev->frame = (float)param_5;
    }
    CBaseAnimating::ResetSequenceInfo(param_2);
    uVar3 = 1;
  }
  return uVar3;
}

/* 0006d8d0  CTSAnimation::HandleCloseCombat  (831 bytes)
 * undefined HandleCloseCombat(CBaseAnimating * param_1, int param_2)
 */
/* CTSAnimation::HandleCloseCombat(CBasePlayer *, int) */

void __thiscall
CTSAnimation::HandleCloseCombat(CTSAnimation *this,CBaseAnimating *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  char local_5c [76];
  
  pcVar2 = local_5c;
  pcVar3 = local_5c;
  switch(param_2) {
  case 10:
    pcVar2 = "circfront";
    goto LAB_0006daa2;
  case 0xb:
    pcVar2 = "circkick";
    iVar1 = 2;
    break;
  case 0xc:
    pcVar2 = "circkicklow";
    goto LAB_0006db9e;
  case 0xd:
    pcVar2 = "circback";
    iVar1 = 2;
    pcVar3 = local_5c;
    break;
  case 0xe:
    local_5c[0] = 'l';
    local_5c[1] = 'a';
    local_5c[2] = 't';
    local_5c[3] = 'b';
    local_5c[4] = 'a';
    local_5c[5] = 'c';
    local_5c[6] = 'k';
    local_5c[7] = '\0';
    goto switchD_0006d902_caseD_15;
  case 0xf:
    pcVar2 = "circspin";
    iVar1 = 2;
    pcVar3 = local_5c;
    break;
  case 0x10:
    pcVar2 = "sidekick";
    iVar1 = 2;
    pcVar3 = local_5c;
    break;
  case 0x11:
    pcVar2 = "backkick";
    iVar1 = 2;
    pcVar3 = local_5c;
    break;
  case 0x12:
    local_5c[0] = 'a';
    local_5c[1] = 'i';
    local_5c[2] = 'r';
    local_5c[3] = 'k';
    local_5c[4] = 'i';
    local_5c[5] = 'c';
    local_5c[6] = 'k';
    local_5c[7] = '\0';
    goto switchD_0006d902_caseD_15;
  case 0x13:
    pcVar2 = "airkick2";
    iVar1 = 2;
    pcVar3 = local_5c;
    break;
  case 0x14:
    pcVar2 = "duckkick";
    iVar1 = 2;
    pcVar3 = local_5c;
    break;
  default:
    goto switchD_0006d902_caseD_15;
  case 0x16:
    pcVar2 = "punchleft";
LAB_0006daa2:
    pcVar3 = local_5c;
    for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = (char *)((int)pcVar3 + 4);
    }
    *(undefined2 *)pcVar3 = *(undefined2 *)pcVar2;
    goto switchD_0006d902_caseD_15;
  case 0x17:
    pcVar3 = "punchright";
    iVar1 = 2;
    goto LAB_0006dc56;
  case 0x18:
    pcVar2 = "punchair";
    iVar1 = 2;
    pcVar3 = local_5c;
    break;
  case 0x19:
    pcVar2 = "uppercut";
    iVar1 = 2;
    pcVar3 = local_5c;
    break;
  case 0x1d:
    pcVar3 = "knife1";
    iVar1 = 1;
    pcVar2 = local_5c;
    goto LAB_0006dc56;
  case 0x1e:
    pcVar3 = "knife2";
    iVar1 = 1;
    pcVar2 = local_5c;
    goto LAB_0006dc56;
  case 0x1f:
    pcVar3 = "knife3";
    iVar1 = 1;
    pcVar2 = local_5c;
    goto LAB_0006dc56;
  case 0x20:
    iVar1 = 3;
    pcVar2 = "knife_launch";
    pcVar3 = local_5c;
    break;
  case 0x21:
    local_5c[0] = 'k';
    local_5c[1] = 'a';
    local_5c[2] = 't';
    local_5c[3] = 'a';
    local_5c[4] = 'n';
    local_5c[5] = 'a';
    local_5c[6] = '1';
    local_5c[7] = '\0';
    goto switchD_0006d902_caseD_15;
  case 0x22:
    local_5c[0] = 'k';
    local_5c[1] = 'a';
    local_5c[2] = 't';
    local_5c[3] = 'a';
    local_5c[4] = 'n';
    local_5c[5] = 'a';
    local_5c[6] = '2';
    local_5c[7] = '\0';
    goto switchD_0006d902_caseD_15;
  case 0x23:
    local_5c[0] = 'k';
    local_5c[1] = 'a';
    local_5c[2] = 't';
    local_5c[3] = 'a';
    local_5c[4] = 'n';
    local_5c[5] = 'a';
    local_5c[6] = '3';
    local_5c[7] = '\0';
    goto switchD_0006d902_caseD_15;
  case 0x24:
    pcVar3 = "katana_air";
    iVar1 = 2;
    pcVar2 = local_5c;
    goto LAB_0006dc56;
  case 0x25:
    pcVar2 = "katana_duck";
LAB_0006db9e:
    pcVar3 = local_5c;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = (char *)((int)pcVar3 + 4);
    }
    goto switchD_0006d902_caseD_15;
  case 0x26:
    iVar1 = strncmp(&param_1[0xb].field_0x2c,"kat",3);
    if (iVar1 == 0) {
      pcVar2 = "katana_block";
LAB_0006dc12:
      pcVar3 = local_5c;
      for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar3 = pcVar3 + 4;
      }
      *pcVar3 = *pcVar2;
    }
    else {
      iVar1 = strncmp(&param_1[0xb].field_0x2c,"kni",3);
      if (iVar1 != 0) {
        pcVar2 = "kungfu_block";
        goto LAB_0006dc12;
      }
      pcVar2 = "knife_block";
      pcVar3 = local_5c;
      for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar3 = (char *)((int)pcVar3 + 4);
      }
    }
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,1);
    pcVar2 = "1";
    if (iVar1 == 0) {
      pcVar2 = "2";
    }
    goto LAB_0006dc7d;
  case 0x27:
    pcVar2 = "stock_";
    pcVar3 = local_5c;
    for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = (char *)((int)pcVar3 + 4);
    }
    *(undefined2 *)pcVar3 = *(undefined2 *)pcVar2;
    *(char *)((int)pcVar3 + 2) = pcVar2[2];
    pcVar2 = &param_1[0x1d].field_0x4;
LAB_0006dc7d:
    strcat(local_5c,pcVar2);
    goto switchD_0006d902_caseD_15;
  case 0x3a:
    iVar1 = 3;
    pcVar3 = "superjump_land";
    pcVar2 = local_5c;
LAB_0006dc56:
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar2 = (char *)((int)pcVar2 + 4);
    }
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar3;
    *(char *)((int)pcVar2 + 2) = pcVar3[2];
    goto switchD_0006d902_caseD_15;
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
switchD_0006d902_caseD_15:
  iVar1 = GaitCloseCombat(this,param_2,(int *)param_1);
  if (iVar1 == 0) {
    uVar4 = 0x14;
  }
  else {
    uVar4 = 0x12;
  }
  SetAnim(this,param_1,local_5c,uVar4 | 0x80,0);
  *(undefined4 *)(this + 0xc) = 0x40000000;
  *(undefined4 *)(this + 8) = 0x40400000;
  this[0x1e8] = (CTSAnimation)0x0;
  return;
}

/* 0006dcf4  CTSAnimation::IsInCloseCombat  (30 bytes)
 * bool IsInCloseCombat(undefined4 this, int param_2)
 */
/* CTSAnimation::IsInCloseCombat(int) */

bool __thiscall CTSAnimation::IsInCloseCombat(undefined4 this,int param_2)

{
  if (param_2 == 0x3a) {
    return true;
  }
  return param_2 - 10U < 0x1e;
}

/* 0006dd14  CTSAnimation::GaitCloseCombat  (178 bytes)
 * undefined4 GaitCloseCombat(undefined4 this, int param_2, int * param_3)
 */
/* CTSAnimation::GaitCloseCombat(int, CBasePlayer *) */

undefined4 __thiscall CTSAnimation::GaitCloseCombat(undefined4 this,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0x25) &&
     (((*(byte *)(*param_3 + 0x1a5) & 0x40) != 0 || ((*(byte *)(*param_3 + 0x180) & 4) != 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((((param_2 != 0x24) && ((param_2 != 0x23 && (param_2 != 0x3a)))) &&
        (((uVar2 = 0, param_2 - 0x16U < 2 ||
          (((param_2 - 0x21U < 5 || (param_2 == 0x19)) || (param_2 == 0x26)))) ||
         ((param_2 == 0x27 || (param_2 - 0x1dU < 4)))))) &&
       ((iVar1 = *param_3, (*(byte *)(iVar1 + 0x1a5) & 0x40) != 0 ||
        (120.0 < SQRT(*(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                      *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)))))) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

