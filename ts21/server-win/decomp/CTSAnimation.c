/* mp.dll - CTSAnimation (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003d650  CTSAnimation::CTSAnimation  (538 bytes)
 * undefined CTSAnimation(int param_1)
 * called by: FUN_1005e450, GetClassPtr<CBasePlayer>
 */
void __fastcall CTSAnimation::CTSAnimation(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = s_jump_left__10097cc4;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097ca8] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_jump_right__10097cb8;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097c8c] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_jump_forward__10097ca8;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097c6c] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_jump_forward__10097ca8;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097c5c] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_10097ca0;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097c44] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_dive_r__10097c98;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097c2c] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_10097c90;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097c14] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_dive_b__10097c88;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097bfc] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_slide_l__10097c7c;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097be0] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_slide_r__10097c70;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097bc4] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_slide_f__10097c64;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097ba8] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_slide_b__10097c58;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097b8c] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_slide_l_end_10097c4c;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097b70] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_slide_r_end_10097c40;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097b54] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_slide_f_end_10097c34;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097b38] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_slide_b_end_10097c28;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097b1c] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_dive_l_end_10097c1c;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097b00] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_dive_r_end_10097c10;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097ae4] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_dive_f_end_10097c04;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097ac8] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_dive_b_end_10097bf8;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097aac] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_10097bf0;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097a94] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_10097be8;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097a7c] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_10097be0;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097a64] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_10097bd8;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 + -0x10097a4c] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return;
}

/* 1003d8b0  CTSAnimation::Animate  (5126 bytes)
 * undefined Animate(int * param_1, int param_2)
 * called by: CBasePlayer::Duck, CBasePlayer::Jump, CBasePlayer::Killed, CBasePlayer::PostThink, CTSGun::AlternateAttack, CTSGun::Deploy, CTSGun::GrenadeIdle, CTSGun::Reload, CTSStunt::GoRoll, FUN_100439e0, FUN_1004ac20, FUN_1004c090, ... (25 total)
 */
void __thiscall CTSAnimation::Animate(CTSAnimation *this,int *param_1,int param_2)

{
  char cVar1;
  CTSAnimation CVar2;
  float fVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  int iVar5;
  int *piVar6;
  undefined3 extraout_var_04;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  CTSAnimation *pCVar12;
  CTSAnimation *pCVar13;
  char *pcVar14;
  CTSAnimation *pCVar15;
  bool bVar16;
  float10 fVar17;
  float in_stack_ffffff84;
  undefined4 *in_stack_ffffff8c;
  float fVar18;
  undefined4 uStack_68;
  int iVar19;
  char *pcVar20;
  CTSAnimation aCStack_40 [64];
  
  iVar4 = param_1[1];
  fVar3 = SQRT(*(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
               *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20));
  if (((*(uint *)(iVar4 + 0x1a4) & 0x200) == 0) &&
     (iVar4 = (**(code **)(*param_1 + 0x94))(), iVar4 != 0)) {
    if ((*(int *)this == 4) && ((96.0 < fVar3 && (iVar4 = FUN_1003f650(param_2), iVar4 == 0)))) {
      in_stack_ffffff8c = (undefined4 *)(param_1[1] + 0x74);
      FUN_1000a540(&stack0xffffff90,in_stack_ffffff8c);
      FUN_10011fc0((void *)(param_1[1] + 0x20),(float *)&stack0xffffff84);
      FUN_1003f030(this,param_1);
    }
    if (param_2 == 2) {
      iVar4 = 1;
      piVar6 = param_1 + 0x2ac;
      pcVar20 = &DAT_1009f428;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar20;
        iVar5 = *piVar6;
        piVar6 = (int *)((int)piVar6 + 1);
        pcVar20 = pcVar20 + 1;
      } while ((char)iVar5 == cVar1);
      in_stack_ffffff8c = (undefined4 *)(param_1[1] + 0x74);
      FUN_1000a540(&stack0xffffff90,in_stack_ffffff8c);
      FUN_1000a540(&stack0xffffff84,param_1 + 0x123);
      FUN_1003f030(this,param_1);
    }
  }
  iVar4 = FUN_1003f650(*(int *)this);
  if (iVar4 == 0) {
    switch(*(undefined4 *)this) {
    case 3:
      iVar4 = (**(code **)(*param_1 + 0x94))();
      if (((((iVar4 != 0) && (param_2 != 4)) &&
           ((param_2 != 0x38 && (((param_2 != 0x2a && (param_2 != 0x2b)) && (param_2 != 0x29))))))
          && ((param_2 != 0 && (param_2 != 8)))) &&
         ((param_2 != 9 &&
          (bVar16 = FUN_1002b380((int)param_1), CONCAT31(extraout_var_03,bVar16) == 0)))) {
        FUN_1003ef10(this,param_1);
        return;
      }
      break;
    case 4:
      if ((((param_1[0x1a] == 0) && (param_2 != 4)) &&
          ((param_2 != 0x28 && ((param_2 != 0x2f && (param_2 != 0x30)))))) &&
         ((param_2 != 0x36 &&
          ((((param_2 != 0x37 && (param_2 != 0x35)) && (param_2 != 0x31)) &&
           ((iVar4 = (**(code **)(*param_1 + 0x94))(), iVar4 != 0 &&
            ((*(uint *)(param_1[1] + 0x1a4) & 0x200) == 0)))))))) {
        uVar8 = FUN_1003f650(param_2);
joined_r0x1003db9d:
        if (uVar8 == 0) {
          s__shoot_10097d58[0] = (char)s__shoot_10097d58._0_4_;
          s__shoot_10097d58[1] = SUB41(s__shoot_10097d58._0_4_,1);
          s__shoot_10097d58[2] = SUB41(s__shoot_10097d58._0_4_,2);
          s__shoot_10097d58[3] = SUB41(s__shoot_10097d58._0_4_,3);
          s__shoot_10097d58[4] = (char)s__shoot_10097d58._4_2_;
          s__shoot_10097d58[5] = SUB21(s__shoot_10097d58._4_2_,1);
          return;
        }
      }
      break;
    case 5:
      if (((((param_1[0x1a] == 0) && ((*(byte *)(param_1[1] + 0x180) & 4) != 0)) &&
           (((*(uint *)(param_1[1] + 0x1a4) & 0x4000) == 0 &&
            ((param_2 != 0x2f && (param_2 != 0x28)))))) && (param_2 != 4)) &&
         (((param_2 != 0x38 && (param_2 != 0x14)) && (param_2 != 0x21)))) {
        iVar4 = (**(code **)(*param_1 + 0x94))();
        bVar16 = iVar4 == 0;
LAB_1003de67:
        if (!bVar16) {
          return;
        }
      }
      break;
    case 7:
      return;
    case 0x28:
      if ((((param_1[0x1a] == 0) && (iVar4 = (**(code **)(*param_1 + 0x94))(), iVar4 != 0)) &&
          (param_2 != 0x29)) && (param_2 != 0x2e)) {
        bVar16 = param_2 == 3;
LAB_1003dacd:
        if (!bVar16) {
          bVar16 = FUN_1002b380((int)param_1);
          uVar8 = CONCAT31(extraout_var_00,bVar16);
          goto joined_r0x1003db9d;
        }
      }
      break;
    case 0x29:
    case 0x2e:
      if ((param_1[0x1a] == 0) && (iVar4 = (**(code **)(*param_1 + 0x94))(), iVar4 != 0)) {
        bVar16 = (*(byte *)(param_1[1] + 0x250) & 4) == 0;
        goto LAB_1003de67;
      }
      break;
    case 0x2a:
    case 0x2b:
      if (((((*(uint *)(param_1[1] + 0x180) & 0x600) != 0) &&
           (iVar4 = (**(code **)(*param_1 + 0x94))(), iVar4 != 0)) && (param_2 != 0x2a)) &&
         ((param_2 != 0x2b && (param_2 != 3)))) {
        bVar16 = param_2 == 0x29;
        goto LAB_1003dacd;
      }
      break;
    case 0x2f:
      if ((param_1[0x1a] == 0) && (iVar4 = (**(code **)(*param_1 + 0x94))(), iVar4 != 0)) {
        bVar16 = (*(byte *)(param_1[1] + 0x250) & 4) == 0;
        goto LAB_1003de67;
      }
      break;
    case 0x30:
      if ((param_1[0x1a] == 0) && (iVar4 = (**(code **)(*param_1 + 0x94))(), iVar4 != 0)) {
        bVar16 = (*(byte *)(param_1[1] + 0x250) & 4) == 0;
        goto LAB_1003dacd;
      }
      break;
    case 0x31:
      if ((((param_1[0x1a] == 0) && (iVar4 = (**(code **)(*param_1 + 0x94))(), iVar4 != 0)) &&
          (bVar16 = FUN_1002b380((int)param_1), CONCAT31(extraout_var,bVar16) == 0)) &&
         (param_2 != 0x29)) {
        bVar16 = param_2 == 0x2e;
        goto LAB_1003de67;
      }
      break;
    case 0x35:
      if ((param_1[0x1a] == 0) && (iVar4 = (**(code **)(*param_1 + 0x94))(), iVar4 != 0)) {
        return;
      }
      param_1[0x127] = 0;
      param_1[0x128] = 0;
      break;
    case 0x36:
      if (((param_1[0x1a] == 0) && (iVar4 = (**(code **)(*param_1 + 0x94))(), iVar4 != 0)) &&
         (((*(byte *)(param_1[1] + 0x250) & 4) != 0 &&
          ((bVar16 = FUN_1002b380((int)param_1), CONCAT31(extraout_var_01,bVar16) == 0 &&
           (param_2 != 0x36)))))) {
        bVar16 = param_2 == 0x37;
        goto LAB_1003de67;
      }
      break;
    case 0x37:
      if ((((param_1[0x1a] == 0) && (iVar4 = (**(code **)(*param_1 + 0x94))(), iVar4 != 0)) &&
          ((*(byte *)(param_1[1] + 0x250) & 4) != 0)) &&
         (((bVar16 = FUN_1002b380((int)param_1), CONCAT31(extraout_var_02,bVar16) == 0 &&
           (param_2 != 0x36)) && ((param_2 != 0x37 && (iVar4 = FUN_1003f650(param_2), iVar4 == 0))))
         )) {
        uVar8 = *(uint *)(param_1[1] + 0x1a4) & 0x200;
        goto joined_r0x1003db9d;
      }
      break;
    case 0x38:
      if ((((((param_1[0x1a] == 0) && (param_2 != 0x38)) && (param_2 != 0x28)) &&
           ((param_2 != 0x2f && (param_2 != 0x30)))) &&
          (((param_2 != 0x36 && ((param_2 != 0x37 && (param_2 != 0x35)))) && (param_2 != 0x31)))) &&
         ((iVar4 = (**(code **)(*param_1 + 0x94))(), iVar4 != 0 &&
          ((*(uint *)(param_1[1] + 0x1a4) & 0x200) == 0)))) {
        uVar8 = FUN_1003f650(param_2);
        goto joined_r0x1003db9d;
      }
    }
  }
  else if ((((param_1[0x1a] == 0) && (iVar4 = FUN_1003f650(param_2), iVar4 == 0)) &&
           ((iVar4 = (**(code **)(*param_1 + 0x94))(), iVar4 != 0 &&
            (((param_2 != 0x28 && (param_2 != 0x2f)) && (param_2 != 0x35)))))) &&
          (((param_2 != 0x31 && (param_2 != 0x30)) && ((param_2 != 0x36 && (param_2 != 0x37)))))) {
    bVar16 = param_2 == 0x38;
    goto LAB_1003de67;
  }
  iVar5 = FUN_1003f650(param_2);
  iVar4 = param_2;
  if (iVar5 != 0) {
    HandleCloseCombat(this,param_1,param_2);
    goto switchD_1003de98_caseD_2;
  }
  switch(param_2) {
  case 0:
  case 8:
  case 9:
    iVar5 = param_1[1];
    if ((*(uint *)(iVar5 + 0x1a4) & 0x200) == 0) {
      return;
    }
    if ((*(byte *)(iVar5 + 0x250) & 0x20) == 0) {
      iVar19 = 0;
      if ((*(uint *)(iVar5 + 0x1a4) & 0x4000) == 0) {
        do {
          CVar2 = *(CTSAnimation *)(s_shoot__10097d40 + iVar19);
          aCStack_40[iVar19] = CVar2;
          iVar19 = iVar19 + 1;
        } while (CVar2 != (CTSAnimation)0x0);
      }
      else {
        do {
          CVar2 = *(CTSAnimation *)(s_crouch_shoot__10097d48 + iVar19);
          aCStack_40[iVar19] = CVar2;
          iVar19 = iVar19 + 1;
        } while (CVar2 != (CTSAnimation)0x0);
      }
      uVar8 = 0xffffffff;
      piVar6 = param_1 + 0x2ac;
      do {
        piVar11 = piVar6;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        piVar11 = (int *)((int)piVar6 + 1);
        iVar5 = *piVar6;
        piVar6 = piVar11;
      } while ((char)iVar5 != '\0');
      uVar8 = ~uVar8;
      iVar5 = -1;
      pCVar13 = aCStack_40;
      do {
        pCVar12 = pCVar13;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pCVar12 = pCVar13 + 1;
        CVar2 = *pCVar13;
        pCVar13 = pCVar12;
      } while (CVar2 != (CTSAnimation)0x0);
      pCVar13 = (CTSAnimation *)((int)piVar11 - uVar8);
      pCVar12 = pCVar12 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pCVar12 = *(undefined4 *)pCVar13;
        pCVar13 = pCVar13 + 4;
        pCVar12 = pCVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pCVar12 = *pCVar13;
        pCVar13 = pCVar13 + 1;
        pCVar12 = pCVar12 + 1;
      }
      iVar5 = _strncmp((char *)(param_1 + 0x2ac),&DAT_10097d3c,3);
      if (((iVar5 == 0) && (fVar3 < 180.0)) && ((*(uint *)(param_1[1] + 0x1a4) & 0x4000) == 0)) {
        iVar5 = -1;
        pCVar13 = aCStack_40;
        do {
          pCVar12 = pCVar13;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pCVar12 = pCVar13 + 1;
          CVar2 = *pCVar13;
          pCVar13 = pCVar12;
        } while (CVar2 != (CTSAnimation)0x0);
        *(undefined2 *)(pCVar12 + -1) = DAT_10097d38;
      }
      if (param_2 != 0) {
        pcVar20 = s__right_10097df4;
        if (param_2 != 9) {
          pcVar20 = &DAT_10097dfc;
        }
        uVar8 = 0xffffffff;
        do {
          pcVar14 = pcVar20;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar14 = pcVar20 + 1;
          cVar1 = *pcVar20;
          pcVar20 = pcVar14;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pCVar13 = (CTSAnimation *)(pcVar14 + -uVar8);
        goto LAB_1003e959;
      }
      goto LAB_1003e96f;
    }
    if ((char)param_1[0x126] == '\0') {
      iVar5 = 0;
      do {
        CVar2 = *(CTSAnimation *)(s_slide_f__10097c64 + iVar5);
        aCStack_40[iVar5] = CVar2;
        iVar5 = iVar5 + 1;
      } while (CVar2 != (CTSAnimation)0x0);
      uVar8 = 0xffffffff;
      piVar6 = param_1 + 0x2ac;
      do {
        piVar11 = piVar6;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        piVar11 = (int *)((int)piVar6 + 1);
        iVar5 = *piVar6;
        piVar6 = piVar11;
      } while ((char)iVar5 != '\0');
      uVar8 = ~uVar8;
      pCVar13 = (CTSAnimation *)((int)piVar11 - uVar8);
    }
    else {
      puVar10 = (undefined4 *)(iVar5 + 0x74);
      fVar18 = 2.6013524e-29;
      FUN_1000a540(&uStack_68,puVar10);
      FUN_1000a540(&stack0xffffff8c,param_1 + 0x123);
      iVar5 = FUN_1003d5c0((float)in_stack_ffffff8c,fVar18,(float)puVar10);
      if ((iVar5 != *(int *)(this + 0x14)) && (iVar5 != 2)) {
        *(int *)(this + 0x14) = iVar5;
      }
      pCVar13 = this + *(int *)(this + 0x14) * 0x10 + 0x9c;
      iVar5 = -(int)pCVar13;
      do {
        CVar2 = *pCVar13;
        pCVar13[(int)(aCStack_40 + iVar5)] = CVar2;
        pCVar13 = pCVar13 + 1;
      } while (CVar2 != (CTSAnimation)0x0);
      uVar8 = 0xffffffff;
      piVar6 = param_1 + 0x2ac;
      do {
        piVar11 = piVar6;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        piVar11 = (int *)((int)piVar6 + 1);
        iVar5 = *piVar6;
        piVar6 = piVar11;
      } while ((char)iVar5 != '\0');
      uVar8 = ~uVar8;
      pCVar13 = (CTSAnimation *)((int)piVar11 - uVar8);
    }
    iVar5 = -1;
    pCVar12 = aCStack_40;
    do {
      pCVar15 = pCVar12;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pCVar15 = pCVar12 + 1;
      CVar2 = *pCVar12;
      pCVar12 = pCVar15;
    } while (CVar2 != (CTSAnimation)0x0);
    pCVar12 = pCVar15 + -1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pCVar12 = *(undefined4 *)pCVar13;
      pCVar13 = pCVar13 + 4;
      pCVar12 = pCVar12 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pCVar12 = *pCVar13;
      pCVar13 = pCVar13 + 1;
      pCVar12 = pCVar12 + 1;
    }
    iVar5 = -1;
    pCVar13 = aCStack_40;
    do {
      pCVar12 = pCVar13;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pCVar12 = pCVar13 + 1;
      CVar2 = *pCVar13;
      pCVar13 = pCVar12;
    } while (CVar2 != (CTSAnimation)0x0);
    *(undefined4 *)(pCVar12 + -1) = s__shoot_10097d58._0_4_;
    *(undefined2 *)(pCVar12 + 3) = s__shoot_10097d58._4_2_;
    pCVar12[5] = (CTSAnimation)s__shoot_10097d58[6];
    if (param_2 == 0) goto LAB_1003e865;
    pcVar20 = s__right_10097df4;
    if (param_2 != 9) {
      pcVar20 = &DAT_10097dfc;
    }
    uVar8 = 0xffffffff;
    do {
      pcVar14 = pcVar20;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar14;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pCVar13 = (CTSAnimation *)(pcVar14 + -uVar8);
    goto LAB_1003e84f;
  case 1:
  case 6:
    if (((*(uint *)(param_1[1] + 0x1a4) & 0x200) == 0) &&
       (bVar16 = FUN_1002b380((int)param_1), CONCAT31(extraout_var_04,bVar16) == 0)) {
      return;
    }
    iVar5 = 1;
    bVar16 = true;
    piVar6 = param_1 + 0x2ac;
    pcVar20 = &DAT_1009f428;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar16 = (char)*piVar6 == *pcVar20;
      piVar6 = (int *)((int)piVar6 + 1);
      pcVar20 = pcVar20 + 1;
    } while (bVar16);
    if ((!bVar16) &&
       (((((iVar4 = *(int *)this, iVar4 != 0 && (iVar4 != 8)) && (iVar4 != 9)) &&
         ((iVar4 != 0x33 && (iVar4 != 0x32)))) || (param_1[0x1a] != 0)))) {
      if ((*(uint *)(param_1[1] + 0x1a4) & 0x4000) == 0) {
        pCVar13 = (CTSAnimation *)&DAT_10097d18;
        if (gpGlobals->time <= *(float *)(this + 0xc)) {
          pCVar13 = (CTSAnimation *)&DAT_10097d10;
        }
        pCVar12 = aCStack_40;
        do {
          CVar2 = *pCVar13;
          pCVar13 = pCVar13 + 1;
          *pCVar12 = CVar2;
          pCVar12 = pCVar12 + 1;
        } while (CVar2 != (CTSAnimation)0x0);
      }
      else {
        pcVar20 = s_duck_idle__10097d2c;
        if (gpGlobals->time <= *(float *)(this + 0xc)) {
          pcVar20 = s_crouch_aim__10097d20;
        }
        pCVar13 = aCStack_40;
        do {
          CVar2 = (CTSAnimation)*pcVar20;
          pcVar20 = pcVar20 + 1;
          *pCVar13 = CVar2;
          pCVar13 = pCVar13 + 1;
        } while (CVar2 != (CTSAnimation)0x0);
      }
      uVar8 = 0xffffffff;
      piVar6 = param_1 + 0x2ac;
      do {
        piVar11 = piVar6;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        piVar11 = (int *)((int)piVar6 + 1);
        iVar4 = *piVar6;
        piVar6 = piVar11;
      } while ((char)iVar4 != '\0');
      uVar8 = ~uVar8;
      iVar4 = -1;
      pCVar13 = aCStack_40;
      do {
        pCVar12 = pCVar13;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pCVar12 = pCVar13 + 1;
        CVar2 = *pCVar13;
        pCVar13 = pCVar12;
      } while (CVar2 != (CTSAnimation)0x0);
      pCVar13 = (CTSAnimation *)((int)piVar11 - uVar8);
      pCVar12 = pCVar12 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pCVar12 = *(undefined4 *)pCVar13;
        pCVar13 = pCVar13 + 4;
        pCVar12 = pCVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pCVar12 = *pCVar13;
        pCVar13 = pCVar13 + 1;
        pCVar12 = pCVar12 + 1;
      }
      uStack_68 = 0x1003ea9c;
      SetAnim(param_1,(byte_conflict *)aCStack_40,0x12,0);
      iVar4 = param_2;
    }
    break;
  case 3:
    iVar5 = *(int *)this;
    if ((((iVar5 != 0) && (iVar5 != 8)) && (iVar5 != 9)) || (param_1[0x1a] != 0)) {
      if ((char)param_1[0x126] == '\0') {
        iVar5 = 0;
        do {
          CVar2 = *(CTSAnimation *)(s_slide_f__10097c64 + iVar5);
          aCStack_40[iVar5] = CVar2;
          iVar5 = iVar5 + 1;
        } while (CVar2 != (CTSAnimation)0x0);
        piVar6 = param_1 + 0x2ac;
        iVar5 = 1;
        bVar16 = true;
        piVar11 = piVar6;
        pcVar20 = &DAT_1009f428;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar16 = (char)*piVar11 == *pcVar20;
          piVar11 = (int *)((int)piVar11 + 1);
          pcVar20 = pcVar20 + 1;
        } while (bVar16);
        if (bVar16) {
          piVar6 = (int *)&DAT_1008f320;
        }
        uVar8 = 0xffffffff;
        do {
          piVar11 = piVar6;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          piVar11 = (int *)((int)piVar6 + 1);
          iVar5 = *piVar6;
          piVar6 = piVar11;
        } while ((char)iVar5 != '\0');
        uVar8 = ~uVar8;
        pCVar13 = (CTSAnimation *)((int)piVar11 - uVar8);
      }
      else {
        puVar10 = (undefined4 *)(param_1[1] + 0x74);
        fVar18 = 2.6010126e-29;
        FUN_1000a540(&uStack_68,puVar10);
        FUN_1000a540(&stack0xffffff8c,param_1 + 0x123);
        iVar5 = FUN_1003d5c0((float)in_stack_ffffff8c,fVar18,(float)puVar10);
        if ((iVar5 != *(int *)(this + 0x14)) && (iVar5 != 2)) {
          *(int *)(this + 0x14) = iVar5;
        }
        pCVar13 = this + *(int *)(this + 0x14) * 0x10 + 0x9c;
        iVar5 = -(int)pCVar13;
        do {
          CVar2 = *pCVar13;
          pCVar13[(int)(aCStack_40 + iVar5)] = CVar2;
          pCVar13 = pCVar13 + 1;
        } while (CVar2 != (CTSAnimation)0x0);
        piVar6 = param_1 + 0x2ac;
        iVar5 = 1;
        bVar16 = true;
        piVar11 = piVar6;
        pcVar20 = &DAT_1009f428;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar16 = (char)*piVar11 == *pcVar20;
          piVar11 = (int *)((int)piVar11 + 1);
          pcVar20 = pcVar20 + 1;
        } while (bVar16);
        if (bVar16) {
          piVar6 = (int *)&DAT_1008f320;
        }
        uVar8 = 0xffffffff;
        do {
          piVar11 = piVar6;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          piVar11 = (int *)((int)piVar6 + 1);
          iVar5 = *piVar6;
          piVar6 = piVar11;
        } while ((char)iVar5 != '\0');
        uVar8 = ~uVar8;
        pCVar13 = (CTSAnimation *)((int)piVar11 - uVar8);
      }
      goto LAB_1003e84f;
    }
    break;
  case 4:
    if ((*(byte *)(param_1[1] + 0x250) & 0x24) != 0) {
      return;
    }
    iVar5 = 1;
    bVar16 = true;
    piVar6 = param_1 + 0x2ac;
    pcVar20 = &DAT_1009f428;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar16 = (char)*piVar6 == *pcVar20;
      piVar6 = (int *)((int)piVar6 + 1);
      pcVar20 = pcVar20 + 1;
    } while (bVar16);
    if (!bVar16) {
      puVar10 = (undefined4 *)(param_1[1] + 0x74);
      fVar18 = 2.6012615e-29;
      FUN_1000a540(&uStack_68,puVar10);
      FUN_10011fc0((void *)(param_1[1] + 0x20),(float *)&stack0xffffff8c);
      iVar5 = FUN_1003d5c0((float)in_stack_ffffff8c,fVar18,(float)puVar10);
      *(int *)(this + 0x14) = iVar5;
      pCVar13 = this + iVar5 * 0x10 + 0x1c;
      iVar5 = -(int)pCVar13;
      do {
        CVar2 = *pCVar13;
        pCVar13[(int)(aCStack_40 + iVar5)] = CVar2;
        pCVar13 = pCVar13 + 1;
      } while (CVar2 != (CTSAnimation)0x0);
      uVar8 = 0xffffffff;
      piVar6 = param_1 + 0x2ac;
      do {
        piVar11 = piVar6;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        piVar11 = (int *)((int)piVar6 + 1);
        iVar5 = *piVar6;
        piVar6 = piVar11;
      } while ((char)iVar5 != '\0');
      uVar8 = ~uVar8;
      pCVar13 = (CTSAnimation *)((int)piVar11 - uVar8);
      goto LAB_1003e84f;
    }
    iVar5 = 0;
    do {
      CVar2 = *(CTSAnimation *)(s_standard_jump_10097d7c + iVar5);
      aCStack_40[iVar5] = CVar2;
      iVar5 = iVar5 + 1;
    } while (CVar2 != (CTSAnimation)0x0);
    goto LAB_1003e865;
  case 5:
    if (*(int *)(this + 4) == 0) {
      uStack_68 = 0x1003e5ee;
      SetAnim(param_1,(byte_conflict *)s_goduck_10097d8c,0x94,0);
      *(undefined4 *)(this + 4) = 1;
    }
    break;
  case 7:
    if (*(int *)(this + 0x1a4) == 0) {
      if (80.0 <= fVar3) {
        if (0x32 < param_1[0x236]) goto LAB_1003e4c6;
        puVar10 = (undefined4 *)(param_1[1] + 0x74);
        fVar18 = 2.6011646e-29;
        FUN_1000a540(&uStack_68,puVar10);
        FUN_10011fc0((void *)(param_1[1] + 0x20),(float *)&stack0xffffff8c);
      }
      else {
        if (param_1[0x236] < 0x33) {
          uStack_68 = 0x1003e4bd;
          SetAnim(param_1,(byte_conflict *)s_die_spin_10097dc4,0x14,0);
          break;
        }
LAB_1003e4c6:
        puVar10 = (undefined4 *)(param_1[1] + 0x74);
        fVar18 = 2.6011517e-29;
        FUN_1000a540(&uStack_68,puVar10);
        FUN_1003edc0(&DAT_1009f4c4,(float *)&stack0xffffff8c);
      }
      iVar5 = FUN_1003d5c0((float)in_stack_ffffff8c,fVar18,(float)puVar10);
      if (iVar5 == 2) {
        uStack_68 = 0x1003e539;
        SetAnim(param_1,(byte_conflict *)s_forward_die_10097db8,0x14,0);
      }
      else if (iVar5 == 3) {
        if ((param_1[0x3e] == 1) && (iVar5 = (*g_engfuncs.pfnRandomLong)(0,100), 0x1e < iVar5)) {
          SetAnim(param_1,(byte_conflict *)s_die_spinback_10097da8,0x14,0);
        }
        else {
          iVar5 = (*g_engfuncs.pfnRandomLong)(0,1);
          if (iVar5 == 0) {
            SetAnim(param_1,(byte_conflict *)s_leg_die_10097d94,0x14,0);
          }
          else if (iVar5 == 1) {
            SetAnim(param_1,(byte_conflict *)s_die_back_10097d9c,0x14,0);
          }
        }
      }
      else {
        uStack_68 = 0x1003e5ca;
        SetAnim(param_1,(byte_conflict *)s_die_spin_10097dc4,0x14,0);
      }
    }
    else {
      iVar5 = (*g_engfuncs.pfnRandomLong)(0,2);
      if (iVar5 == 0) {
        SetAnim(param_1,(byte_conflict *)s_normal_die1_10097dd0,0x14,0);
      }
      else if (iVar5 == 1) {
        SetAnim(param_1,(byte_conflict *)s_normal_die2_10097ddc,0x14,0);
      }
      else if (iVar5 == 2) {
        SetAnim(param_1,(byte_conflict *)s_normal_die3_10097de8,0x14,0);
      }
    }
    break;
  case 0x28:
    puVar10 = (undefined4 *)(param_1[1] + 0x74);
    fVar18 = 2.6010605e-29;
    FUN_1000a540(&uStack_68,puVar10);
    FUN_10011fc0((void *)(param_1[1] + 0x20),(float *)&stack0xffffff8c);
    iVar5 = FUN_1003d5c0((float)in_stack_ffffff8c,fVar18,(float)puVar10);
    *(int *)(this + 0x14) = iVar5;
    pCVar13 = this + iVar5 * 0x10 + 0x5c;
    iVar5 = -(int)pCVar13;
    do {
      CVar2 = *pCVar13;
      pCVar13[(int)(aCStack_40 + iVar5)] = CVar2;
      pCVar13 = pCVar13 + 1;
    } while (CVar2 != (CTSAnimation)0x0);
    iVar5 = 1;
    bVar16 = true;
    piVar6 = param_1 + 0x2ac;
    pcVar20 = &DAT_1009f428;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar16 = (char)*piVar6 == *pcVar20;
      piVar6 = (int *)((int)piVar6 + 1);
      pcVar20 = pcVar20 + 1;
    } while (bVar16);
    piVar6 = (int *)&DAT_1008f320;
    if (!bVar16) {
      piVar6 = param_1 + 0x2ac;
    }
    uVar8 = 0xffffffff;
    do {
      piVar11 = piVar6;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      piVar11 = (int *)((int)piVar6 + 1);
      iVar5 = *piVar6;
      piVar6 = piVar11;
    } while ((char)iVar5 != '\0');
    uVar8 = ~uVar8;
    pCVar13 = (CTSAnimation *)((int)piVar11 - uVar8);
LAB_1003e84f:
    iVar5 = -1;
    pCVar12 = aCStack_40;
    do {
      pCVar15 = pCVar12;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pCVar15 = pCVar12 + 1;
      CVar2 = *pCVar12;
      pCVar12 = pCVar15;
    } while (CVar2 != (CTSAnimation)0x0);
    pCVar12 = pCVar15 + -1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pCVar12 = *(undefined4 *)pCVar13;
      pCVar13 = pCVar13 + 4;
      pCVar12 = pCVar12 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pCVar12 = *pCVar13;
      pCVar13 = pCVar13 + 1;
      pCVar12 = pCVar12 + 1;
    }
LAB_1003e865:
    uStack_68 = 0x1003e879;
    SetAnim(param_1,(byte_conflict *)aCStack_40,0x94,0);
    break;
  case 0x29:
    uStack_68 = 0x1003e18f;
    SetAnim(param_1,(byte_conflict *)(this + *(int *)(this + 0x14) * 0x10 + 0xdc),0x94,0);
    break;
  case 0x2a:
  case 0x2b:
    if ((char)param_1[0x126] == '\0') {
      iVar5 = 0;
      do {
        CVar2 = *(CTSAnimation *)(s_slide_f__10097c64 + iVar5);
        aCStack_40[iVar5] = CVar2;
        iVar5 = iVar5 + 1;
      } while (CVar2 != (CTSAnimation)0x0);
      piVar6 = param_1 + 0x2ac;
      iVar5 = 1;
      bVar16 = true;
      piVar11 = piVar6;
      pcVar20 = &DAT_1009f428;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar16 = (char)*piVar11 == *pcVar20;
        piVar11 = (int *)((int)piVar11 + 1);
        pcVar20 = pcVar20 + 1;
      } while (bVar16);
      if (bVar16) {
        piVar6 = (int *)&DAT_1008f320;
      }
      uVar8 = 0xffffffff;
      do {
        piVar11 = piVar6;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        piVar11 = (int *)((int)piVar6 + 1);
        iVar5 = *piVar6;
        piVar6 = piVar11;
      } while ((char)iVar5 != '\0');
      uVar8 = ~uVar8;
      iVar5 = -1;
      pCVar13 = aCStack_40;
      do {
        pCVar12 = pCVar13;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pCVar12 = pCVar13 + 1;
        CVar2 = *pCVar13;
        pCVar13 = pCVar12;
      } while (CVar2 != (CTSAnimation)0x0);
      pCVar13 = (CTSAnimation *)((int)piVar11 - uVar8);
      pCVar12 = pCVar12 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pCVar12 = *(undefined4 *)pCVar13;
        pCVar13 = pCVar13 + 4;
        pCVar12 = pCVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pCVar12 = *pCVar13;
        pCVar13 = pCVar13 + 1;
        pCVar12 = pCVar12 + 1;
      }
      pcVar20 = &DAT_10097dfc;
      if (param_2 != 0x2a) {
        pcVar20 = s__right_10097df4;
      }
      uVar8 = 0xffffffff;
      do {
        pcVar14 = pcVar20;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar14 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar14;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar5 = -1;
      pCVar13 = aCStack_40;
      do {
        pCVar12 = pCVar13;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pCVar12 = pCVar13 + 1;
        CVar2 = *pCVar13;
        pCVar13 = pCVar12;
      } while (CVar2 != (CTSAnimation)0x0);
      pCVar13 = (CTSAnimation *)(pcVar14 + -uVar8);
      pCVar12 = pCVar12 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pCVar12 = *(undefined4 *)pCVar13;
        pCVar13 = pCVar13 + 4;
        pCVar12 = pCVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pCVar12 = *pCVar13;
        pCVar13 = pCVar13 + 1;
        pCVar12 = pCVar12 + 1;
      }
      uStack_68 = 0x1003e27e;
      SetAnim(param_1,(byte_conflict *)aCStack_40,0x14,0);
    }
    else {
      pcVar20 = s_slide_b_left_10097e14;
      if (param_2 != 0x2a) {
        pcVar20 = s_slide_b_right_10097e04;
      }
      pCVar13 = aCStack_40;
      do {
        CVar2 = (CTSAnimation)*pcVar20;
        pcVar20 = pcVar20 + 1;
        *pCVar13 = CVar2;
        pCVar13 = pCVar13 + 1;
      } while (CVar2 != (CTSAnimation)0x0);
      uStack_68 = 0x1003e1cc;
      SetAnim(param_1,(byte_conflict *)aCStack_40,0x14,0);
    }
    break;
  case 0x2e:
    iVar19 = 0;
    uVar8 = 0x94;
    puVar10 = (undefined4 *)(param_1[1] + 0x74);
    fVar18 = 2.6008724e-29;
    FUN_1000a540(&stack0xffffff90,puVar10);
    FUN_1000a540(&stack0xffffff84,param_1 + 0x123);
    iVar5 = FUN_1003d5c0(in_stack_ffffff84,fVar18,(float)puVar10);
    uStack_68 = 0x1003e16d;
    SetAnim(param_1,(byte_conflict *)(this + iVar5 * 0x10 + 0x11c),uVar8,iVar19);
    break;
  case 0x2f:
    iVar19 = 0;
    uVar8 = 0x94;
    puVar10 = (undefined4 *)(param_1[1] + 0x74);
    fVar18 = 2.6008474e-29;
    FUN_1000a540(&stack0xffffff90,puVar10);
    FUN_1000a540(&stack0xffffff84,param_1 + 0x123);
    iVar5 = FUN_1003d5c0(in_stack_ffffff84,fVar18,(float)puVar10);
    uStack_68 = 0x1003e11a;
    SetAnim(param_1,(byte_conflict *)(this + iVar5 * 0x10 + 0x15c),uVar8,iVar19);
    break;
  case 0x30:
    puVar10 = (undefined4 *)(param_1[1] + 0x74);
    fVar18 = 2.6007812e-29;
    FUN_1000a540(&uStack_68,puVar10);
    FUN_1000a540(&stack0xffffff8c,param_1 + 0x123);
    iVar5 = FUN_1003d5c0((float)in_stack_ffffff8c,fVar18,(float)puVar10);
    if (iVar5 == 0) {
      uStack_68 = 0x1003e07c;
      SetAnim(param_1,(byte_conflict *)s_wheel_l_10097e50,0x94,0);
    }
    else if (iVar5 == 1) {
      uStack_68 = 0x1003e06c;
      SetAnim(param_1,(byte_conflict *)s_wheel_r_10097e58,0x94,0);
    }
    else if (iVar5 == 3) {
      uStack_68 = 0x1003e05c;
      SetAnim(param_1,(byte_conflict *)s_wheel_b_10097e60,0x94,0);
    }
    else {
      uStack_68 = 0x1003e04c;
      SetAnim(param_1,(byte_conflict *)s_wheel_f_10097e68,0x94,0);
    }
    break;
  case 0x31:
    puVar10 = (undefined4 *)(param_1[1] + 0x74);
    fVar18 = 2.6007457e-29;
    FUN_1000a540(&uStack_68,puVar10);
    FUN_1000a540(&stack0xffffff8c,param_1 + 0x123);
    iVar5 = FUN_1003d5c0((float)in_stack_ffffff8c,fVar18,(float)puVar10);
    if (iVar5 == 2) {
      uStack_68 = 0x1003dfcf;
      SetAnim(param_1,(byte_conflict *)s_lowwheel_f_10097e88,0x94,0);
    }
    else {
      pcVar20 = s_lowwheel_l_10097e7c;
      if (iVar5 != 0) {
        pcVar20 = s_lowwheel_r_10097e70;
      }
      uStack_68 = 0x1003dff2;
      SetAnim(param_1,(byte_conflict *)pcVar20,0x94,0);
    }
    break;
  case 0x32:
  case 0x33:
    if ((*(uint *)(param_1[1] + 0x1a4) & 0x200) == 0) {
      return;
    }
    if ((*(byte *)(param_1[1] + 0x250) & 0x30) != 0) {
      return;
    }
    iVar5 = 1;
    bVar16 = true;
    piVar6 = param_1 + 0x2ac;
    pcVar20 = &DAT_1009f428;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar16 = (char)*piVar6 == *pcVar20;
      piVar6 = (int *)((int)piVar6 + 1);
      pcVar20 = pcVar20 + 1;
    } while (bVar16);
    if (bVar16) {
      return;
    }
    if (param_2 == 0x32) {
      iVar5 = 0;
      do {
        CVar2 = *(CTSAnimation *)(&DAT_10097e9c + iVar5);
        aCStack_40[iVar5] = CVar2;
        iVar5 = iVar5 + 1;
      } while (CVar2 != (CTSAnimation)0x0);
    }
    else {
      iVar5 = 0;
      do {
        CVar2 = *(CTSAnimation *)(&DAT_10097e94 + iVar5);
        aCStack_40[iVar5] = CVar2;
        iVar5 = iVar5 + 1;
      } while (CVar2 != (CTSAnimation)0x0);
    }
    uVar8 = 0xffffffff;
    piVar6 = param_1 + 0x2ac;
    do {
      piVar11 = piVar6;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      piVar11 = (int *)((int)piVar6 + 1);
      iVar5 = *piVar6;
      piVar6 = piVar11;
    } while ((char)iVar5 != '\0');
    uVar8 = ~uVar8;
    pCVar13 = (CTSAnimation *)((int)piVar11 - uVar8);
LAB_1003e959:
    iVar5 = -1;
    pCVar12 = aCStack_40;
    do {
      pCVar15 = pCVar12;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pCVar15 = pCVar12 + 1;
      CVar2 = *pCVar12;
      pCVar12 = pCVar15;
    } while (CVar2 != (CTSAnimation)0x0);
    pCVar12 = pCVar15 + -1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pCVar12 = *(undefined4 *)pCVar13;
      pCVar13 = pCVar13 + 4;
      pCVar12 = pCVar12 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pCVar12 = *pCVar13;
      pCVar13 = pCVar13 + 1;
      pCVar12 = pCVar12 + 1;
    }
LAB_1003e96f:
    uStack_68 = 0x1003e983;
    SetAnim(param_1,(byte_conflict *)aCStack_40,0x92,0);
    fVar17 = (float10)FUN_100551c0((int)param_1);
    *(float *)(this + 0xc) = (float)(fVar17 + fVar17 + (float10)gpGlobals->time);
    break;
  case 0x34:
    if ((*(uint *)(param_1[1] + 0x1a4) & 0x200) == 0) {
      return;
    }
    if ((*(byte *)(param_1[1] + 0x250) & 0x30) != 0) {
      return;
    }
    uStack_68 = 0x1003decf;
    SetAnim(param_1,(byte_conflict *)s_grenade_10097ea4,0x92,0);
    fVar17 = (float10)FUN_100551c0((int)param_1);
    *(float *)(this + 0xc) = (float)(fVar17 + fVar17 + (float10)gpGlobals->time);
    fVar17 = (float10)FUN_100551c0((int)param_1);
    *(float *)(this + 0x10) = (float)(fVar17 + (float10)gpGlobals->time);
    break;
  case 0x35:
    uStack_68 = 0x1003e0c7;
    SetAnim(param_1,(byte_conflict *)s_bullettime_10097e24,0x94,0);
    break;
  case 0x36:
    uStack_68 = 0x1003e095;
    SetAnim(param_1,(byte_conflict *)s_walljump_end_10097e40,0x94,0);
    break;
  case 0x37:
    uStack_68 = 0x1003e0ae;
    SetAnim(param_1,(byte_conflict *)s_walljump_climb_10097e30,0x94,0);
    break;
  case 0x38:
    if ((*(byte *)(param_1[1] + 0x250) & 0x24) != 0) {
      return;
    }
    iVar5 = 1;
    bVar16 = true;
    piVar6 = param_1 + 0x2ac;
    pcVar20 = &DAT_1009f428;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar16 = (char)*piVar6 == *pcVar20;
      piVar6 = (int *)((int)piVar6 + 1);
      pcVar20 = pcVar20 + 1;
    } while (bVar16);
    if (bVar16) {
      iVar5 = 0;
      do {
        CVar2 = *(CTSAnimation *)(s_morfy_jump_10097d70 + iVar5);
        aCStack_40[iVar5] = CVar2;
        iVar5 = iVar5 + 1;
      } while (CVar2 != (CTSAnimation)0x0);
    }
    else {
      iVar5 = 0;
      do {
        CVar2 = *(CTSAnimation *)(s_morfy_jump_guns_10097d60 + iVar5);
        aCStack_40[iVar5] = CVar2;
        iVar5 = iVar5 + 1;
      } while (CVar2 != (CTSAnimation)0x0);
    }
    uStack_68 = 0x1003e703;
    SetAnim(param_1,(byte_conflict *)aCStack_40,0x94,0);
  }
switchD_1003de98_caseD_2:
  param_2 = iVar4;
  *(int *)this = param_2;
  if (param_2 == 4) {
    return;
  }
  if (param_2 == 0x38) {
    return;
  }
  if (param_2 == 5) {
    return;
  }
  if (param_2 == 7) {
    return;
  }
  if (param_2 == 0x29) {
    return;
  }
  if (param_2 == 0x2e) {
    return;
  }
  if (param_2 == 0x2f) {
    return;
  }
  if (param_2 == 0x35) {
    return;
  }
  iVar4 = FUN_1003f650(param_2);
  if ((iVar4 != 0) && (iVar4 = FUN_1003f680(param_2,(int)param_1), iVar4 == 0)) {
    return;
  }
  if ((*(uint *)(param_1[1] + 0x250) & 0x30c30) != 0) {
    return;
  }
  if ((*(uint *)(param_1[1] + 0x1a4) & 0x4000) == 0) {
    if (fVar3 <= 180.0) {
      if (fVar3 <= 0.0) {
        iVar4 = 1;
        bVar16 = true;
        piVar6 = param_1 + 0x2ac;
        pcVar20 = &DAT_1009f428;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar16 = (char)*piVar6 == *pcVar20;
          piVar6 = (int *)((int)piVar6 + 1);
          pcVar20 = pcVar20 + 1;
        } while (bVar16);
        if (!bVar16) {
          iVar4 = 0;
          do {
            CVar2 = *(CTSAnimation *)(&DAT_10097d18 + iVar4);
            aCStack_40[iVar4] = CVar2;
            iVar4 = iVar4 + 1;
          } while (CVar2 != (CTSAnimation)0x0);
          uVar8 = 0xffffffff;
          piVar6 = param_1 + 0x2ac;
          do {
            piVar11 = piVar6;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            piVar11 = (int *)((int)piVar6 + 1);
            iVar4 = *piVar6;
            piVar6 = piVar11;
          } while ((char)iVar4 != '\0');
          uVar8 = ~uVar8;
          iVar4 = -1;
          pCVar13 = aCStack_40;
          do {
            pCVar12 = pCVar13;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pCVar12 = pCVar13 + 1;
            CVar2 = *pCVar13;
            pCVar13 = pCVar12;
          } while (CVar2 != (CTSAnimation)0x0);
          pCVar13 = (CTSAnimation *)((int)piVar11 - uVar8);
          pCVar12 = pCVar12 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pCVar12 = *(undefined4 *)pCVar13;
            pCVar13 = pCVar13 + 4;
            pCVar12 = pCVar12 + 4;
          }
          pcVar20 = (char *)aCStack_40;
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pCVar12 = *pCVar13;
            pCVar13 = pCVar13 + 1;
            pCVar12 = pCVar12 + 1;
          }
          goto LAB_1003ec31;
        }
        pcVar20 = s_combat_idle_low_10097cdc;
        if (*(float *)(this + 0xc) < gpGlobals->time == (*(float *)(this + 0xc) == gpGlobals->time))
        {
          pcVar20 = s_combat_idle_10097cd0;
        }
      }
      else {
        pcVar20 = s_walk2_10097cec;
      }
      uVar7 = CBaseAnimating::LookupSequence((CBaseAnimating *)param_1,(byte_conflict *)pcVar20);
      *(undefined4 *)(param_1[1] + 300) = uVar7;
      goto LAB_1003ec3f;
    }
    pcVar20 = &DAT_10097cf4;
  }
  else {
    *(undefined4 *)(this + 4) = 0;
    if (fVar3 != 0.0) {
      uVar7 = CBaseAnimating::LookupSequence
                        ((CBaseAnimating *)param_1,(byte_conflict *)s_crawl_10097cfc);
      *(undefined4 *)(param_1[1] + 300) = uVar7;
      goto LAB_1003ec3f;
    }
    pcVar20 = s_crouch_idle_10097d04;
  }
LAB_1003ec31:
  uVar7 = CBaseAnimating::LookupSequence((CBaseAnimating *)param_1,(byte_conflict *)pcVar20);
  *(undefined4 *)(param_1[1] + 300) = uVar7;
LAB_1003ec3f:
  iVar4 = 1;
  bVar16 = true;
  piVar6 = param_1 + 0x2ac;
  pcVar20 = &DAT_1009f428;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar16 = (char)*piVar6 == *pcVar20;
    piVar6 = (int *)((int)piVar6 + 1);
    pcVar20 = pcVar20 + 1;
  } while (bVar16);
  if (((bVar16) && (iVar4 = FUN_1003f680(param_2,(int)param_1), iVar4 == 0)) &&
     ((*(float *)(this + 0xc) < gpGlobals->time != (*(float *)(this + 0xc) == gpGlobals->time) ||
      (param_1[0x1a] != 0)))) {
    iVar4 = param_1[1];
    if (*(int *)(iVar4 + 0x128) != *(int *)(iVar4 + 300)) {
      *(int *)(iVar4 + 0x128) = *(int *)(iVar4 + 300);
      *(undefined4 *)(param_1[1] + 0x130) = 0;
      CBaseAnimating::ResetSequenceInfo((int)param_1);
    }
  }
  return;
}

/* 1003f270  CTSAnimation::SetAnim  (196 bytes)
 * undefined4 SetAnim(void * param_1, byte.conflict * param_2, uint param_3, int param_4)
 * called by: CTSAnimation::Animate, CTSAnimation::HandleCloseCombat, FUN_1003ee50, FUN_1003ef10, FUN_1003f030
 */
undefined4 CTSAnimation::SetAnim(void *param_1,byte_conflict *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = CBaseAnimating::LookupSequence(param_1,param_2);
  if (iVar2 == -1) {
    iVar2 = 0;
  }
  iVar1 = *(int *)((int)param_1 + 4);
  if ((*(int *)(iVar1 + 0x128) == iVar2) && (-1 < (char)param_3)) {
    return 0;
  }
  if ((param_3 & 0x10) == 0) {
    uVar3 = *(uint *)(iVar1 + 0x118) | 0x20;
  }
  else {
    uVar3 = *(uint *)(iVar1 + 0x118) & 0xffffffdf;
  }
  *(uint *)(iVar1 + 0x118) = uVar3;
  if ((param_3 & 4) == 0) {
    if ((param_3 & 1) != 0) {
      *(int *)(*(int *)((int)param_1 + 4) + 300) = iVar2;
      return 1;
    }
  }
  else {
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 300) = 0;
  }
  *(int *)(*(int *)((int)param_1 + 4) + 0x128) = iVar2;
  if ((param_3 & 0x20) != 0) {
    *(float *)(*(int *)((int)param_1 + 4) + 0x130) = (float)param_4;
    CBaseAnimating::ResetSequenceInfo((int)param_1);
    return 1;
  }
  if ((param_3 & 0x100) == 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x130) = 0;
  }
  CBaseAnimating::ResetSequenceInfo((int)param_1);
  return 1;
}

/* 1003f340  CTSAnimation::HandleCloseCombat  (632 bytes)
 * undefined HandleCloseCombat(void * param_1, int param_2)
 * called by: CTSAnimation::Animate
 */
void __thiscall CTSAnimation::HandleCloseCombat(CTSAnimation *this,void *param_1,int param_2)

{
  byte_conflict bVar1;
  int iVar2;
  float10 fVar3;
  byte_conflict local_40 [64];
  
  switch(param_2) {
  case 10:
    iVar2 = 0;
    do {
      bVar1 = s_circfront_10097fb8[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0xb:
    iVar2 = 0;
    do {
      bVar1 = s_circkick_10097fac[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0xc:
    iVar2 = 0;
    do {
      bVar1 = s_circkicklow_10097fa0[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0xd:
    iVar2 = 0;
    do {
      bVar1 = s_circback_10097f94[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0xe:
    iVar2 = 0;
    do {
      bVar1 = s_latback_10097f8c[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0xf:
    iVar2 = 0;
    do {
      bVar1 = s_circspin_10097f80[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x10:
    iVar2 = 0;
    do {
      bVar1 = s_sidekick_10097f74[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x11:
    iVar2 = 0;
    do {
      bVar1 = s_backkick_10097f68[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x12:
    iVar2 = 0;
    do {
      bVar1 = s_airkick_10097f60[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x13:
    iVar2 = 0;
    do {
      bVar1 = (&DAT_10097f54)[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x14:
    iVar2 = 0;
    do {
      bVar1 = s_duckkick_10097f48[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x16:
    iVar2 = 0;
    do {
      bVar1 = s_punchleft_10097f3c[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x17:
    iVar2 = 0;
    do {
      bVar1 = s_punchright_10097f30[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x18:
    iVar2 = 0;
    do {
      bVar1 = s_punchair_10097f24[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x19:
    iVar2 = 0;
    do {
      bVar1 = (&DAT_10097f1c)[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x1a:
    iVar2 = 0;
    do {
      bVar1 = (&DAT_10097f14)[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x1b:
    iVar2 = 0;
    do {
      bVar1 = (&DAT_10097f0c)[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x1c:
    iVar2 = 0;
    do {
      bVar1 = s_knife_launch_10097efc[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x1d:
    iVar2 = 0;
    do {
      bVar1 = (&DAT_10097ef4)[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x1e:
    iVar2 = 0;
    do {
      bVar1 = (&DAT_10097eec)[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x1f:
    iVar2 = 0;
    do {
      bVar1 = (&DAT_10097ee4)[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x20:
    iVar2 = 0;
    do {
      bVar1 = s_katana_air_10097ed8[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x21:
    iVar2 = 0;
    do {
      bVar1 = s_katana_duck_10097ecc[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x22:
    iVar2 = 0;
    do {
      bVar1 = s_kungfu_block_10097ebc[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
    break;
  case 0x39:
    iVar2 = 0;
    do {
      bVar1 = s_superjump_land_10097eac[iVar2];
      local_40[iVar2] = bVar1;
      iVar2 = iVar2 + 1;
    } while (bVar1 != '\0');
  }
  iVar2 = FUN_1003f680(param_2,(int)param_1);
  SetAnim(param_1,local_40,(-(uint)(iVar2 != 0) & 0xfffffffe) + 4 | 0x90,0);
  fVar3 = (float10)FUN_100551c0((int)param_1);
  *(float *)(this + 0xc) = (float)(fVar3 + fVar3 + (float10)gpGlobals->time);
  return;
}

