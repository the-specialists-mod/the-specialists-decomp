/* client.dll - unnamed_10028320 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10028320  FUN_10028320  (593 bytes)
 * undefined FUN_10028320(void)
 * called by: FUN_10026b30
 */
void FUN_10028320(void)

{
  DAT_100df64c = (*gEngfuncs.pfnRegisterVariable)(s_m_filter_10094720,&DAT_10092bf4,1);
  DAT_100df708 = (*gEngfuncs.pfnRegisterVariable)(s_sensitivity_10094710,&DAT_1009471c,1);
  DAT_100df6a0 = (*gEngfuncs.pfnRegisterVariable)(s_m_accel_10094708,&DAT_10092bf4,1);
  DAT_100df6f4 = (*gEngfuncs.pfnRegisterVariable)(s_m_accelexp_100946fc,&DAT_10093814,1);
  DAT_100df628 = (*gEngfuncs.pfnRegisterVariable)(s_m_accelmax_100946f0,&DAT_10092bf4,1);
  DAT_100df620 = (*gEngfuncs.pfnRegisterVariable)(s_joystick_100945a8,&DAT_10092bf4,1);
  DAT_100df634 = (*gEngfuncs.pfnRegisterVariable)(s_joyname_100946e8,s_joystick_100945a8,0);
  DAT_100df68c = (*gEngfuncs.pfnRegisterVariable)(s_joyadvanced_100946dc,&DAT_10092bf4,0);
  DAT_100df65c = (*gEngfuncs.pfnRegisterVariable)(s_joyadvaxisx_100946d0,&DAT_10092bf4,0);
  DAT_100df658 = (*gEngfuncs.pfnRegisterVariable)(s_joyadvaxisy_100946c4,&DAT_10092bf4,0);
  DAT_100df654 = (*gEngfuncs.pfnRegisterVariable)(s_joyadvaxisz_100946b8,&DAT_10092bf4,0);
  DAT_100df644 = (*gEngfuncs.pfnRegisterVariable)(s_joyadvaxisr_100946ac,&DAT_10092bf4,0);
  DAT_100df650 = (*gEngfuncs.pfnRegisterVariable)(s_joyadvaxisu_100946a0,&DAT_10092bf4,0);
  DAT_100df648 = (*gEngfuncs.pfnRegisterVariable)(s_joyadvaxisv_10094694,&DAT_10092bf4,0);
  DAT_100df688 = (*gEngfuncs.pfnRegisterVariable)(s_joyforwardthreshold_10094678,&DAT_1009468c,0);
  DAT_100df6a8 = (*gEngfuncs.pfnRegisterVariable)(s_joysidethreshold_10094664,&DAT_1009468c,0);
  DAT_100df6e4 = (*gEngfuncs.pfnRegisterVariable)(s_joypitchthreshold_10094650,&DAT_1009468c,0);
  DAT_100df694 = (*gEngfuncs.pfnRegisterVariable)(s_joyyawthreshold_10094640,&DAT_1009468c,0);
  DAT_100df690 = (*gEngfuncs.pfnRegisterVariable)(s_joyforwardsensitivity_10094620,&DAT_10094638,0);
  DAT_100df680 = (*gEngfuncs.pfnRegisterVariable)(s_joysidesensitivity_1009460c,&DAT_10094638,0);
  DAT_100df704 = (*gEngfuncs.pfnRegisterVariable)(s_joypitchsensitivity_100945f4,&DAT_10094608,0);
  DAT_100df684 = (*gEngfuncs.pfnRegisterVariable)(s_joyyawsensitivity_100945e0,&DAT_10094638,0);
  DAT_100df664 = (*gEngfuncs.pfnRegisterVariable)(s_joywwhack1_100945d4,&DAT_10093e94,0);
  DAT_100df660 = (*gEngfuncs.pfnRegisterVariable)(s_joywwhack2_100945c8,&DAT_10093e94,0);
  (*gEngfuncs.pfnAddCommand)(s_joyadvancedupdate_100945b4,FUN_10027b00);
  FUN_100272d0();
  FUN_10027960();
  return;
}

/* 10028580  FUN_10028580  (26 bytes)
 * undefined FUN_10028580()
 */
void FUN_10028580(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_10028760(&DAT_100cfebc,param_1,param_2,param_3);
  return;
}

/* 100285a0  FUN_100285a0  (47 bytes)
 * undefined4 FUN_100285a0(int * param_1)
 */
undefined4 __fastcall FUN_100285a0(int *param_1)

{
  FUN_10020a40(&DAT_100cf920,(int)param_1);
  (*gEngfuncs.pfnHookUserMsg)(s_ShowMenu_1009472c,FUN_10028580);
  (**(code **)(*param_1 + 0x18))();
  return 1;
}

/* 100285d0  FUN_100285d0  (13 bytes)
 * undefined FUN_100285d0()
 */
void __fastcall FUN_100285d0(int *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
                    /* WARNING: Could not recover jumptable at 0x100285da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14))();
  return;
}

/* 100285e0  FUN_100285e0  (11 bytes)
 * undefined FUN_100285e0()
 */
void __fastcall FUN_100285e0(int param_1)

{
  DAT_100df718 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

/* 100285f0  FUN_100285f0  (257 bytes)
 * undefined FUN_100285f0()
 */
undefined4 __fastcall FUN_100285f0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if ((0.0 < *(float *)(param_1 + 0x1c)) && (*(float *)(param_1 + 0x1c) <= DAT_100cf944)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
    return 1;
  }
  if ((DAT_100d5cb0 != 0) && (uVar1 = FUN_10063740(DAT_100d5cb0), (char)uVar1 != '\0')) {
    return 1;
  }
  iVar2 = 0;
  iVar3 = 0;
  do {
    if ((&DAT_100df918)[iVar3] == '\0') break;
    if ((&DAT_100df918)[iVar3] == '\n') {
      iVar2 = iVar2 + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x200);
  iVar3 = DAT_100d590c / 2 + (iVar2 / 2) * -0xc + -0x28;
  iVar2 = 0;
  do {
    if ((&DAT_100df918)[iVar2] == '\0') {
      return 1;
    }
    FUN_10021ce0(0x14,iVar3,0x140,&DAT_100df918 + iVar2,0xff,0xff,0xff);
    iVar3 = iVar3 + 0xc;
    for (; ((iVar2 < 0x200 && ((&DAT_100df918)[iVar2] != '\0')) && ((&DAT_100df918)[iVar2] != '\n'))
        ; iVar2 = iVar2 + 1) {
    }
    if ((&DAT_100df918)[iVar2] == '\n') {
      iVar2 = iVar2 + 1;
    }
  } while (iVar2 < 0x200);
  return 1;
}

/* 10028700  FUN_10028700  (81 bytes)
 * undefined FUN_10028700(int param_1)
 * called by: FUN_1004f220
 */
void __thiscall FUN_10028700(void *this,int param_1)

{
  char local_20 [32];
  
  if ((0 < param_1) && ((*(uint *)((int)this + 0x18) & 1 << ((char)param_1 - 1U & 0x1f)) != 0)) {
    FUN_1006ac7a(local_20,(byte_conflict *)s_menuselect__d_10094738);
    (*gEngfuncs.pfnClientCmd)(local_20);
    *(undefined4 *)((int)this + 0x14) = 0;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffffe;
  }
  return;
}

/* 10028760  FUN_10028760  (340 bytes)
 * undefined4 FUN_10028760(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10028580
 */
undefined4 __thiscall
FUN_10028760(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  size_t sVar8;
  char *local_4;
  
  local_4 = (char *)0x0;
  FUN_100299b0(param_3,param_2);
  iVar2 = FUN_10029a50();
  *(int *)((int)this + 0x18) = iVar2;
  iVar2 = FUN_100299d0();
  uVar3 = FUN_10029a10();
  if (iVar2 < 1) {
    *(undefined4 *)((int)this + 0x1c) = 0xbf800000;
  }
  else {
    *(float *)((int)this + 0x1c) = (float)iVar2 + DAT_100cf944;
  }
  if (*(int *)((int)this + 0x18) == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffffe;
    *(uint *)((int)this + 0x20) = uVar3;
    return 1;
  }
  if (*(int *)((int)this + 0x20) == 0) {
    sVar8 = 0x200;
    pcVar4 = FUN_10029b00();
    _strncpy(&DAT_100df718,pcVar4,sVar8);
  }
  else {
    uVar5 = 0xffffffff;
    pcVar4 = &DAT_100df718;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    sVar8 = 0x200 - (~uVar5 - 1);
    pcVar4 = FUN_10029b00();
    _strncat(&DAT_100df718,pcVar4,sVar8);
  }
  DAT_100df917 = 0;
  if (uVar3 == 0) {
    pcVar4 = FUN_100349a0(&DAT_100df718);
    uVar5 = 0xffffffff;
    do {
      pcVar7 = pcVar4;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar7;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar4 = pcVar7 + -uVar5;
    pcVar7 = &DAT_100df918;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar7 = pcVar7 + 1;
    }
    iVar2 = FUN_10025740();
    if (iVar2 != 0) {
      uVar5 = 0xffffffff;
      do {
        pcVar4 = local_4;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar4 = local_4 + 1;
        cVar1 = *local_4;
        local_4 = pcVar4;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar4 = pcVar4 + -uVar5;
      pcVar7 = &DAT_100df918;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar7 = pcVar7 + 1;
      }
      FUN_1006c158((LPVOID)0x0);
    }
  }
  *(undefined4 *)((int)this + 0x14) = 1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  *(uint *)((int)this + 0x20) = uVar3;
  return 1;
}

/* 100288c0  FUN_100288c0  (26 bytes)
 * undefined FUN_100288c0()
 */
void FUN_100288c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_100295c0(&DAT_100cfb68,param_1,param_2,param_3);
  return;
}

/* 100288e0  FUN_100288e0  (26 bytes)
 * undefined FUN_100288e0()
 */
void FUN_100288e0(void)

{
  FUN_10029610(0x100cfb68);
  return;
}

/* 10028900  FUN_10028900  (63 bytes)
 * undefined FUN_10028900()
 */
undefined4 __fastcall FUN_10028900(int *param_1)

{
  (*gEngfuncs.pfnHookUserMsg)(s_HudText_10094760,FUN_100288c0);
  (*gEngfuncs.pfnHookUserMsg)(s_GameTitle_10094754,FUN_100288e0);
  FUN_10020a40(&DAT_100cf920,(int)param_1);
  (**(code **)(*param_1 + 0x14))();
  return 1;
}

/* 10028940  FUN_10028940  (52 bytes)
 * undefined4 FUN_10028940(int param_1)
 */
undefined4 __fastcall FUN_10028940(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10020670(&DAT_100cf920,s_title_half_10094774);
  *(int *)(param_1 + 0xe4) = iVar1;
  iVar1 = FUN_10020670(&DAT_100cf920,s_title_life_10094768);
  *(int *)(param_1 + 0xe0) = iVar1;
  return 1;
}

/* 10028980  FUN_10028980  (39 bytes)
 * undefined FUN_10028980()
 */
void __fastcall FUN_10028980(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x14);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x54);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  return;
}

/* 100289b0  FUN_100289b0  (145 bytes)
 * float10 FUN_100289b0(float param_1, float param_2, float param_3, float param_4)
 * called by: FUN_100290b0
 */
float10 FUN_100289b0(float param_1,float param_2,float param_3,float param_4)

{
  if (param_4 < 0.0) {
    return (float10)0.0;
  }
  if (param_4 < param_1) {
    return (float10)1.0 - ((float10)param_1 - (float10)param_4) / (float10)param_1;
  }
  if (param_4 <= param_1 + param_3) {
    return (float10)1.0;
  }
  if (0.0 < param_2) {
    return (float10)1.0 - ((float10)param_4 - (float10)(param_1 + param_3)) / (float10)param_2;
  }
  return (float10)0.0;
}

/* 10028a50  FUN_10028a50  (126 bytes)
 * int FUN_10028a50(float param_1, int param_2)
 * called by: FUN_10028eb0, FUN_100290b0
 */
int FUN_10028a50(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = DAT_100d5908;
  if (param_1 == -1.0) {
    iVar2 = (DAT_100d5908 - param_2) / 2;
  }
  else if (0.0 <= param_1) {
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
  }
  else {
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
  }
  if (iVar1 < iVar2 + param_2) {
    return iVar1 - param_2;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  return iVar2;
}

/* 10028ad0  FUN_10028ad0  (140 bytes)
 * int FUN_10028ad0(float param_1, int param_2)
 * called by: FUN_10028eb0, FUN_100290b0
 */
int FUN_10028ad0(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = DAT_100d590c;
  if (param_1 == -1.0) {
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
  }
  else if (0.0 <= param_1) {
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
  }
  else {
    lVar3 = __ftol();
    iVar2 = (int)lVar3;
  }
  if (iVar1 < iVar2 + param_2) {
    return iVar1 - param_2;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  return iVar2;
}

/* 10028b60  FUN_10028b60  (473 bytes)
 * undefined FUN_10028b60(int param_1)
 * called by: FUN_10028eb0
 */
void __fastcall FUN_10028b60(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint local_14;
  uint local_c;
  uint local_8;
  uint local_4;
  
  piVar1 = *(int **)(param_1 + 0x94);
  local_8 = (uint)*(byte *)((int)piVar1 + 5);
  local_4 = (uint)*(byte *)((int)piVar1 + 6);
  local_c = (uint)*(byte *)(piVar1 + 1);
  iVar3 = *piVar1;
  if (-1 < iVar3) {
    if (iVar3 < 2) {
LAB_10028d13:
      local_14 = 0;
      uVar6 = 0;
      uVar5 = 0;
      iVar3 = *(int *)(param_1 + 0xcc);
LAB_10028d19:
      if (iVar3 < 0x100) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0xff;
      }
      goto LAB_10028bda;
    }
    if (iVar3 == 2) {
      fVar2 = (float)piVar1[5] + *(float *)(param_1 + 0xd0);
      *(float *)(param_1 + 0xd0) = fVar2;
      if (fVar2 <= *(float *)(param_1 + 0x98)) {
        uVar6 = 0;
        uVar5 = 0;
        local_14 = 0;
        if (*(float *)(param_1 + 0xd4) < *(float *)(param_1 + 0x98)) goto LAB_10028d13;
        if ((float)piVar1[8] < *(float *)(param_1 + 0x98) - fVar2) {
          iVar3 = 0;
          goto LAB_10028bda;
        }
        uVar6 = (uint)*(byte *)((int)piVar1 + 9);
        local_14 = (uint)*(byte *)((int)piVar1 + 10);
        uVar5 = (uint)*(byte *)(piVar1 + 2);
        lVar7 = __ftol();
        iVar3 = (int)lVar7;
        goto LAB_10028d19;
      }
      local_4 = 0;
      local_8 = 0;
      local_c = 0;
    }
  }
  iVar3 = 0;
  uVar5 = local_4;
  uVar6 = local_4;
LAB_10028bda:
  iVar4 = 0xff - iVar3;
  *(int *)(param_1 + 0xbc) = (int)(iVar4 * local_c + uVar5 * iVar3) >> 8;
  *(int *)(param_1 + 0xc0) = (int)(iVar4 * local_8 + uVar6 * iVar3) >> 8;
  *(int *)(param_1 + 0xc4) = (int)(iVar4 * local_4 + local_14 * iVar3) >> 8;
  if ((((*piVar1 == 1) && (*(float *)(param_1 + 0xd0) != 0.0)) &&
      (iVar3 = *(int *)(param_1 + 0x9c), -1 < iVar3)) &&
     ((-1 < *(int *)(param_1 + 0xa0) &&
      (*(short *)(&DAT_100d5918 + *(int *)(param_1 + 200) * 2) + iVar3 <= DAT_100d5908)))) {
    (*gEngfuncs.pfnDrawCharacter)
              (iVar3,*(int *)(param_1 + 0xa0),*(int *)(param_1 + 200),(int)(char)piVar1[2],
               (int)*(undefined1 *)((int)piVar1 + 9),(int)*(undefined1 *)((int)piVar1 + 10));
  }
  return;
}

/* 10028d40  FUN_10028d40  (353 bytes)
 * longlong FUN_10028d40(int param_1, int param_2)
 * called by: FUN_10028eb0
 */
longlong __fastcall FUN_10028d40(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  longlong lVar7;
  
  piVar3 = *(int **)(param_1 + 0x94);
  iVar5 = *piVar3;
  if (-1 < iVar5) {
    if (iVar5 < 2) {
      fVar1 = (float)piVar3[7];
      fVar2 = (float)piVar3[5];
      *(float *)(param_1 + 0xd4) = fVar1 + fVar2;
      if ((float)piVar3[5] <= *(float *)(param_1 + 0x98)) {
        if (*(float *)(param_1 + 0x98) <= fVar1 + fVar2) {
          *(undefined4 *)(param_1 + 0xcc) = 0;
        }
        else if ((float)piVar3[6] <= 0.0) {
          *(undefined4 *)(param_1 + 0xcc) = 0xff;
        }
        else {
          lVar7 = __ftol();
          param_2 = (int)((ulonglong)lVar7 >> 0x20);
          *(int *)(param_1 + 0xcc) = (int)lVar7;
        }
      }
      else {
        lVar7 = __ftol();
        param_2 = (int)((ulonglong)lVar7 >> 0x20);
        *(int *)(param_1 + 0xcc) = (int)lVar7;
      }
      *(undefined4 *)(param_1 + 0xd0) = 0;
      iVar5 = *piVar3;
      if (iVar5 == 1) {
        iVar4 = _rand();
        iVar5 = iVar4 / 100;
        param_2 = iVar4 % 100;
        if (param_2 < 10) {
          *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
        }
      }
    }
    else if (iVar5 == 2) {
      fVar2 = (float)*(int *)(param_1 + 0xb8) * (float)piVar3[5] + (float)piVar3[7];
      fVar1 = *(float *)(param_1 + 0x98);
      uVar6 = (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
              (ushort)(fVar1 == fVar2) << 0xe;
      *(float *)(param_1 + 0xd4) = fVar2;
      if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
        fVar1 = (float)piVar3[6];
        uVar6 = (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                (ushort)(fVar1 == 0.0) << 0xe;
        if (fVar1 >= 0.0 && (fVar1 == 0.0) == 0) {
          lVar7 = __ftol();
          *(int *)(param_1 + 0xcc) = (int)lVar7;
          return lVar7;
        }
      }
      *(undefined4 *)(param_1 + 0xcc) = 0;
      return CONCAT44(param_2,CONCAT22((short)((uint)fVar2 >> 0x10),uVar6));
    }
  }
  return CONCAT44(param_2,iVar5);
}

/* 10028eb0  FUN_10028eb0  (508 bytes)
 * undefined FUN_10028eb0(int param_1, int param_2)
 * called by: FUN_100290b0
 */
void __thiscall FUN_10028eb0(void *this,int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  int extraout_EDX;
  int iVar6;
  byte *pbVar7;
  byte abStack_50 [80];
  
  iVar5 = 0;
  iVar6 = 0;
  pcVar4 = *(char **)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0xb0) = 1;
  *(int *)((int)this + 0x98) = param_2;
  *(int *)((int)this + 0x94) = param_1;
  *(undefined4 *)((int)this + 0xa4) = 0;
  cVar2 = *pcVar4;
  while (cVar2 != '\0') {
    if (cVar2 == '\n') {
      *(int *)((int)this + 0xb0) = *(int *)((int)this + 0xb0) + 1;
      if (*(int *)((int)this + 0xa4) < iVar5) {
        *(int *)((int)this + 0xa4) = iVar5;
      }
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + *(short *)(&DAT_100d5918 + cVar2 * 2);
    }
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    iVar6 = iVar6 + 1;
    cVar2 = *pcVar1;
  }
  *(int *)((int)this + 0xb8) = iVar6;
  iVar5 = *(int *)((int)this + 0xb0) * DAT_100d5914;
  *(int *)((int)this + 0xa8) = iVar5;
  iVar5 = FUN_10028ad0(*(float *)(param_1 + 0x10),iVar5);
  *(int *)((int)this + 0xa0) = iVar5;
  pbVar7 = *(byte **)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0xd0) = 0;
  FUN_10028d40((int)this,extraout_EDX);
  param_2 = 0;
  if (0 < *(int *)((int)this + 0xb0)) {
    do {
      iVar5 = 0;
      *(undefined4 *)((int)this + 0xb4) = 0;
      *(undefined4 *)((int)this + 0xac) = 0;
      bVar3 = *pbVar7;
      while ((bVar3 != 0 && (bVar3 != 10))) {
        iVar6 = *(int *)((int)this + 0xb4);
        abStack_50[iVar6] = bVar3;
        pbVar7 = pbVar7 + 1;
        *(int *)((int)this + 0xac) =
             *(int *)((int)this + 0xac) + (int)*(short *)(&DAT_100d5918 + (uint)bVar3 * 2);
        *(int *)((int)this + 0xb4) = iVar6 + 1;
        bVar3 = *pbVar7;
      }
      iVar6 = *(int *)((int)this + 0xac);
      abStack_50[*(int *)((int)this + 0xb4)] = 0;
      pbVar7 = pbVar7 + 1;
      iVar6 = FUN_10028a50(*(float *)(param_1 + 0xc),iVar6);
      *(int *)((int)this + 0x9c) = iVar6;
      if (0 < *(int *)((int)this + 0xb4)) {
        do {
          bVar3 = abStack_50[iVar5];
          *(uint *)((int)this + 200) = (uint)bVar3;
          iVar6 = (int)*(short *)(&DAT_100d5918 + (uint)bVar3 * 2) + *(int *)((int)this + 0x9c);
          FUN_10028b60((int)this);
          if (((-1 < *(int *)((int)this + 0x9c)) && (-1 < *(int *)((int)this + 0xa0))) &&
             (iVar6 <= DAT_100d5908)) {
            (*gEngfuncs.pfnDrawCharacter)
                      (*(int *)((int)this + 0x9c),*(int *)((int)this + 0xa0),
                       *(int *)((int)this + 200),*(int *)((int)this + 0xbc),
                       *(int *)((int)this + 0xc0),*(int *)((int)this + 0xc4));
          }
          iVar5 = iVar5 + 1;
          *(int *)((int)this + 0x9c) = iVar6;
        } while (iVar5 < *(int *)((int)this + 0xb4));
      }
      *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + DAT_100d5914;
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)((int)this + 0xb0));
  }
  return;
}

/* 100290b0  FUN_100290b0  (832 bytes)
 * undefined FUN_100290b0()
 */
undefined4 __thiscall FUN_100290b0(void *param_1,float param_2)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  int x;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  longlong lVar12;
  int iStack_18;
  float fStack_c;
  
  iStack_18 = 0;
  if (0.0 < *(float *)((int)param_1 + 0xd8)) {
    fVar3 = DAT_100cf944 - *(float *)((int)param_1 + 0xd8);
    if (DAT_100cf944 < *(float *)((int)param_1 + 0xd8)) {
      *(float *)((int)param_1 + 0xd8) = DAT_100cf944;
    }
    iVar9 = *(int *)((int)param_1 + 0xdc);
    fStack_c = *(float *)(iVar9 + 0x14);
    if (fVar3 <= fStack_c + *(float *)(iVar9 + 0x18) + *(float *)(iVar9 + 0x1c)) {
      FUN_100289b0(fStack_c,*(float *)(iVar9 + 0x18),*(float *)(iVar9 + 0x1c),fVar3);
      iVar7 = *(int *)((int)param_1 + 0xe4) * 0x10;
      piVar8 = (int *)(*(int *)((int)param_1 + 0xe0) * 0x10 + DAT_100cf990);
      iVar10 = *(int *)(iVar7 + 4 + DAT_100cf990) - *(int *)(iVar7 + DAT_100cf990);
      iVar9 = *(int *)(iVar7 + DAT_100cf990 + 0xc);
      iVar7 = *(int *)(iVar7 + DAT_100cf990 + 8);
      x = FUN_10028a50(*(float *)(*(int *)((int)param_1 + 0xdc) + 0xc),
                       (piVar8[1] - *piVar8) + iVar10);
      iVar9 = FUN_10028ad0(*(float *)(*(int *)((int)param_1 + 0xdc) + 0x10),iVar9 - iVar7);
      if (*(int *)((int)param_1 + 0xe4) < 0) {
        fStack_c = 0.0;
      }
      else {
        fStack_c = *(float *)(DAT_100cf98c + *(int *)((int)param_1 + 0xe4) * 4);
      }
      lVar12 = __ftol();
      iVar7 = (int)lVar12;
      lVar12 = __ftol();
      iVar4 = (int)lVar12;
      lVar12 = __ftol();
      (*gEngfuncs.pfnSPR_Set)((HSPRITE)fStack_c,(int)lVar12,iVar4,iVar7);
      (*gEngfuncs.pfnSPR_DrawAdditive)
                (0,x,iVar9,(wrect_t *)(*(int *)((int)param_1 + 0xe4) * 0x10 + DAT_100cf990));
      if (*(int *)((int)param_1 + 0xe0) < 0) {
        fStack_c = 0.0;
      }
      else {
        fStack_c = *(float *)(DAT_100cf98c + *(int *)((int)param_1 + 0xe0) * 4);
      }
      lVar12 = __ftol();
      iVar7 = (int)lVar12;
      lVar12 = __ftol();
      iVar4 = (int)lVar12;
      lVar12 = __ftol();
      (*gEngfuncs.pfnSPR_Set)((HSPRITE)fStack_c,(int)lVar12,iVar4,iVar7);
      (*gEngfuncs.pfnSPR_DrawAdditive)
                (0,x + iVar10,iVar9,(wrect_t *)(*(int *)((int)param_1 + 0xe0) * 0x10 + DAT_100cf990)
                );
      iStack_18 = 1;
    }
    else {
      *(undefined4 *)((int)param_1 + 0xd8) = 0;
    }
  }
  pfVar5 = (float *)((int)param_1 + 0x54);
  iVar9 = 0x10;
  do {
    if ((pfVar5[-0x10] != 0.0) && (DAT_100cf944 < *pfVar5)) {
      *pfVar5 = ((DAT_100cf944 + *(float *)((int)param_1 + 0x98)) - *pfVar5) + 0.2;
    }
    pfVar5 = pfVar5 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  piVar8 = (int *)((int)param_1 + 0x14);
  iVar9 = 0x10;
  do {
    piVar2 = (int *)*piVar8;
    if (piVar2 != (int *)0x0) {
      iVar7 = *piVar2;
      if (-1 < iVar7) {
        if (iVar7 < 2) {
          fStack_c = (float)piVar8[0x10] + (float)piVar2[7] + (float)piVar2[6] + (float)piVar2[5];
        }
        else if (iVar7 == 2) {
          uVar6 = 0xffffffff;
          pcVar11 = (char *)piVar2[10];
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          fStack_c = (float)(~uVar6 - 1) * (float)piVar2[5] + (float)piVar8[0x10] + (float)piVar2[7]
                     + (float)piVar2[6];
        }
      }
      if (fStack_c < param_2) {
        *piVar8 = 0;
      }
      else {
        FUN_10028eb0(param_1,(int)piVar2,(int)(param_2 - (float)piVar8[0x10]));
        iStack_18 = iStack_18 + 1;
      }
    }
    piVar8 = piVar8 + 1;
    iVar9 = iVar9 + -1;
    if (iVar9 == 0) {
      *(float *)((int)param_1 + 0x98) = DAT_100cf944;
      if (iStack_18 == 0) {
        *(uint *)((int)param_1 + 0x10) = *(uint *)((int)param_1 + 0x10) & 0xfffffffe;
      }
      return 1;
    }
  } while( true );
}

/* 100293f0  FUN_100293f0  (462 bytes)
 * undefined FUN_100293f0(char * param_1, undefined4 param_2)
 * called by: FUN_100295c0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100293f0(void *this,char *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  float fVar4;
  int *piVar5;
  client_textmessage_t *pcVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  byte *pbVar14;
  char *pcVar15;
  bool bVar16;
  
  iVar11 = 0;
  piVar12 = (int *)((int)this + 0x14);
  piVar5 = piVar12;
  while (*piVar5 != 0) {
    iVar11 = iVar11 + 1;
    piVar5 = piVar5 + 1;
    if (0xf < iVar11) {
      return;
    }
  }
  pcVar13 = param_1;
  if (*param_1 == '#') {
    pcVar13 = param_1 + 1;
  }
  pcVar6 = (*gEngfuncs.pfnTextMessageGet)(pcVar13);
  if (pcVar6 == (client_textmessage_t *)0x0) {
    DAT_100dfb1f = 100;
    DAT_100dfb1e = 100;
    DAT_100dfb1d = 100;
    DAT_100dfb1c = 100;
    _DAT_100dfb3c = PTR_s_Custom_10094748;
    uVar9 = 0xffffffff;
    _DAT_100dfb18 = 2;
    DAT_100dfb20 = 0xf0;
    DAT_100dfb21 = 0x6e;
    DAT_100dfb22 = 0;
    DAT_100dfb23 = 0;
    DAT_100dfb24 = 0xbf800000;
    DAT_100dfb28 = 0x3f333333;
    _DAT_100dfb2c = 0x3c23d70a;
    _DAT_100dfb30 = 0x3fc00000;
    _DAT_100dfb38 = 0x3e800000;
    _DAT_100dfb34 = 0x40a00000;
    do {
      pcVar13 = param_1;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar13;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar13 = pcVar13 + -uVar9;
    pcVar15 = (char *)&DAT_100dfb44;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar15 = pcVar15 + 4;
    }
    pcVar6 = (client_textmessage_t *)&DAT_100dfb18;
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar15 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar15 = pcVar15 + 1;
    }
    DAT_100dfb40 = &DAT_100dfb44;
  }
  param_1 = (char *)0x0;
  do {
    iVar3 = *piVar12;
    if (iVar3 != 0) {
      pbVar14 = *(byte **)(iVar3 + 0x28);
      pbVar7 = (byte *)pcVar6->pMessage;
      do {
        bVar2 = *pbVar7;
        bVar16 = bVar2 < *pbVar14;
        if (bVar2 != *pbVar14) {
LAB_10029537:
          iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_1002953c;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar16 = bVar2 < pbVar14[1];
        if (bVar2 != pbVar14[1]) goto LAB_10029537;
        pbVar7 = pbVar7 + 2;
        pbVar14 = pbVar14 + 2;
      } while (bVar2 != 0);
      iVar8 = 0;
LAB_1002953c:
      if (iVar8 == 0) {
        return;
      }
      fVar4 = pcVar6->y - *(float *)(iVar3 + 0x10);
      if (fVar4 <= 0.0) {
        fVar4 = -fVar4;
      }
      if (fVar4 < 0.0001) {
        fVar4 = pcVar6->x - *(float *)(iVar3 + 0xc);
        if (fVar4 <= 0.0) {
          fVar4 = -fVar4;
        }
        if (fVar4 < 0.0001) {
          *piVar12 = 0;
        }
      }
    }
    piVar12 = piVar12 + 1;
    param_1 = param_1 + 1;
    if (0xf < (int)param_1) {
      *(client_textmessage_t **)((int)this + iVar11 * 4 + 0x14) = pcVar6;
      *(undefined4 *)((int)this + iVar11 * 4 + 0x54) = param_2;
      return;
    }
  } while( true );
}

/* 100295c0  FUN_100295c0  (73 bytes)
 * undefined4 FUN_100295c0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_100288c0
 */
undefined4 __thiscall
FUN_100295c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  FUN_100299b0(param_3,param_2);
  pcVar1 = FUN_10029b00();
  FUN_100293f0(this,pcVar1,DAT_100cf944);
  *(undefined4 *)((int)this + 0x98) = DAT_100cf944;
  if ((*(uint *)((int)this + 0x10) & 1) == 0) {
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  }
  return 1;
}

/* 10029610  FUN_10029610  (59 bytes)
 * undefined4 FUN_10029610(int param_1)
 * called by: FUN_100288e0
 */
undefined4 __fastcall FUN_10029610(int param_1)

{
  client_textmessage_t *pcVar1;
  
  pcVar1 = (*gEngfuncs.pfnTextMessageGet)(s_GAMETITLE_10094780);
  *(client_textmessage_t **)(param_1 + 0xdc) = pcVar1;
  if (pcVar1 != (client_textmessage_t *)0x0) {
    *(undefined4 *)(param_1 + 0xd8) = DAT_100cf944;
    if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    }
  }
  return 1;
}

/* 10029660  FUN_10029660  (17 bytes)
 * undefined FUN_10029660()
 */
void FUN_10029660(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_100dff48;
  for (iVar1 = 0xc0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 10029680  FUN_10029680  (138 bytes)
 * undefined FUN_10029680(int param_1)
 * called by: FUN_1004bf90
 */
void __thiscall FUN_10029680(void *this,int param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  if ((int)lVar2 != 0) {
    puVar1 = (undefined1 *)((int)this + param_1 * 0x18);
    if (*(char *)((int)this + param_1 * 0x18) != '\0') {
      *(int *)(puVar1 + 8) = *(int *)(puVar1 + 8) + 5;
      return;
    }
    lVar2 = __ftol();
    if ((int)lVar2 == 1) {
      *(undefined4 *)(puVar1 + 8) = 10;
    }
    else if ((int)lVar2 == 2) {
      *(undefined4 *)(puVar1 + 8) = 0xf;
    }
    else {
      *(undefined4 *)(puVar1 + 8) = 5;
    }
    *(double *)(puVar1 + 0x10) = (double)DAT_100cf944;
    *puVar1 = 1;
    *(undefined4 *)(puVar1 + 4) = 0;
  }
  return;
}

/* 10029710  FUN_10029710  (107 bytes)
 * undefined FUN_10029710()
 */
void FUN_10029710(int param_1,undefined4 param_2,float param_3)

{
  float10 extraout_ST0;
  longlong lVar1;
  
  FUN_10055ac0(DAT_100963e8);
  lVar1 = __ftol();
  *(float *)(param_1 + 0x40c) = (float)extraout_ST0;
  *(int *)(param_1 + 0x340) = (int)lVar1;
  if (0 < (int)lVar1) {
    *(float *)(param_1 + 4) = param_3 + 1.0;
    return;
  }
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(float *)(param_1 + 4) = param_3 - 1.0;
  return;
}

/* 10029780  FUN_10029780  (546 bytes)
 * undefined FUN_10029780(int param_1)
 * called by: FUN_1001bcd0
 */
void __fastcall FUN_10029780(int param_1)

{
  model_s *model;
  vec_t vVar1;
  cl_entity_s *pcVar2;
  TEMPENTITY *pTVar3;
  int *piVar4;
  vec_t *pvVar5;
  vec_t *pvVar6;
  int iVar7;
  int *piVar8;
  entity_state_t *peVar9;
  float10 fVar10;
  longlong lVar11;
  int local_1c;
  vec_t avStack_14 [4];
  
  lVar11 = __ftol();
  if ((int)lVar11 != 0) {
    piVar8 = (int *)(param_1 + 4);
    local_1c = 0;
    do {
      if (((char)piVar8[-1] != '\0') && ((float)*(double *)(piVar8 + 3) <= DAT_100cf944)) {
        if (DAT_100963e8 <= 0.99) {
          fVar10 = FUN_10056fa0(0.03);
          *(double *)(piVar8 + 3) = (double)(fVar10 + (float10)DAT_100cf944);
          pcVar2 = (*gEngfuncs.GetEntityByIndex)(local_1c);
          if ((pcVar2 != (cl_entity_s *)0x0) && (model = pcVar2->model, model != (model_s *)0x0)) {
            pvVar6 = avStack_14;
            pvVar5 = pcVar2->origin;
            iVar7 = 3;
            do {
              vVar1 = *pvVar5;
              pvVar5 = pvVar5 + 1;
              *pvVar6 = vVar1;
              pvVar6 = pvVar6 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            pTVar3 = (*(gEngfuncs.pEfxAPI)->CL_TentEntAllocCustom)(avStack_14,model,0,FUN_10029710);
            if (pTVar3 != (TEMPENTITY *)0x0) {
              piVar4 = (int *)(*DAT_100ea7e0)(local_1c + -1);
              if (piVar4 != (int *)0x0) {
                peVar9 = &(pTVar3->entity).curstate;
                for (iVar7 = 0x55; iVar7 != 0; iVar7 = iVar7 + -1) {
                  peVar9->entityType = *piVar4;
                  piVar4 = piVar4 + 1;
                  peVar9 = (entity_state_t *)&peVar9->number;
                }
                (pTVar3->entity).angles[0] = pcVar2->angles[0];
                (pTVar3->entity).angles[1] = pcVar2->angles[1];
                vVar1 = pcVar2->angles[2];
                (pTVar3->entity).curstate.number = local_1c;
                (pTVar3->entity).curstate.rendercolor.r = (byte_conflict)local_1c;
                (pTVar3->entity).angles[2] = vVar1;
                (pTVar3->entity).curstate.framerate = 0.0;
                (pTVar3->entity).curstate.rendermode = 1;
                (pTVar3->entity).curstate.renderamt = 0x78;
                (pTVar3->entity).curstate.fuser2 = 120.0;
                (pTVar3->entity).curstate.rendercolor.b = '\x01';
                (pTVar3->entity).curstate.renderfx = 0x11;
                (pTVar3->entity).curstate.iuser4 = 0;
                iVar7 = (*DAT_100ea7dc)(local_1c + -1);
                if (iVar7 != 0) {
                  (pTVar3->entity).curstate.iuser1 = *(int *)(iVar7 + 0x17c);
                  (pTVar3->entity).curstate.iuser2 = *(int *)(iVar7 + 0x178);
                  (pTVar3->entity).curstate.fuser3 = *(float *)(iVar7 + 0x180);
                  (pTVar3->entity).curstate.fuser4 = *(float *)(iVar7 + 0x184);
                  pvVar6 = avStack_14;
                  pvVar5 = (pTVar3->entity).baseline.origin;
                  iVar7 = 3;
                  do {
                    vVar1 = *pvVar6;
                    pvVar6 = pvVar6 + 1;
                    pvVar5[0xaa] = vVar1;
                    *pvVar5 = 0.0;
                    pvVar5 = pvVar5 + 1;
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                  pTVar3->die = pTVar3->die + 1.0;
                  iVar7 = *piVar8;
                  *piVar8 = iVar7 + 1;
                  if (piVar8[1] <= iVar7 + 1) {
                    *(undefined1 *)(piVar8 + -1) = 0;
                  }
                }
              }
            }
          }
        }
        else {
          *(undefined1 *)(piVar8 + -1) = 0;
        }
      }
      piVar8 = piVar8 + 6;
      local_1c = local_1c + 1;
    } while (local_1c < 0x20);
  }
  return;
}

/* 100299b0  FUN_100299b0  (32 bytes)
 * undefined FUN_100299b0(undefined4 param_1, undefined4 param_2)
 * called by: FUN_10018780, FUN_1001a030, FUN_1001a070, FUN_1001a0b0, FUN_1001a0e0, FUN_1001a110, FUN_1001a1d0, FUN_1001a3d0, FUN_1001a650, FUN_1001a690, FUN_1001a920, FUN_1001b360, ... (72 total)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100299b0(undefined4 param_1,undefined4 param_2)

{
  DAT_100e0a4c = 0;
  _DAT_100e0a54 = 0;
  DAT_100e0248 = param_1;
  DAT_100e0a50 = param_2;
  return;
}

/* 100299d0  FUN_100299d0  (49 bytes)
 * int FUN_100299d0(void)
 * called by: FUN_1001a1d0, FUN_1001a3d0, FUN_10028760, FUN_10029b00, FUN_1004f6f0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100299d0(void)

{
  char *pcVar1;
  
  if (DAT_100e0a50 < DAT_100e0a4c + 1) {
    _DAT_100e0a54 = 1;
    return -1;
  }
  pcVar1 = (char *)(DAT_100e0248 + DAT_100e0a4c);
  DAT_100e0a4c = DAT_100e0a4c + 1;
  return (int)*pcVar1;
}

/* 10029a10  FUN_10029a10  (54 bytes)
 * uint FUN_10029a10(void)
 * called by: FUN_10018780, FUN_1001a030, FUN_1001a070, FUN_1001a0b0, FUN_1001a110, FUN_1001a1d0, FUN_1001a3d0, FUN_1001a690, FUN_1001b360, FUN_1001f4a0, FUN_1001f7f0, FUN_1001f830, ... (61 total)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10029a10(void)

{
  byte *pbVar1;
  
  if (DAT_100e0a50 < DAT_100e0a4c + 1) {
    _DAT_100e0a54 = 1;
    return 0xffffffff;
  }
  pbVar1 = (byte *)(DAT_100e0248 + DAT_100e0a4c);
  DAT_100e0a4c = DAT_100e0a4c + 1;
  return (uint)*pbVar1;
}

/* 10029a50  FUN_10029a50  (66 bytes)
 * int FUN_10029a50(void)
 * called by: FUN_1001a920, FUN_10028760, FUN_10029b60, FUN_1002f8d0, FUN_1004b840, FUN_1004b980, FUN_1004b9e0, FUN_1004c1e0, FUN_1004f800, FUN_10064da0, FUN_10065090, FUN_10065120
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10029a50(void)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if (DAT_100e0a50 < DAT_100e0a4c + 2) {
    _DAT_100e0a54 = 1;
    return -1;
  }
  pbVar2 = (byte *)(DAT_100e0248 + 1 + DAT_100e0a4c);
  pbVar1 = (byte *)(DAT_100e0248 + DAT_100e0a4c);
  DAT_100e0a4c = DAT_100e0a4c + 2;
  return (int)(short)((ushort)*pbVar2 * 0x100 + (ushort)*pbVar1);
}

/* 10029aa0  FUN_10029aa0  (88 bytes)
 * int FUN_10029aa0(void)
 * called by: FUN_10018780, FUN_1001f830, FUN_1004bd50, FUN_1004bfd0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10029aa0(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (DAT_100e0a50 < DAT_100e0a4c + 4) {
    _DAT_100e0a54 = 1;
    return -1;
  }
  pbVar2 = (byte *)(DAT_100e0248 + 3 + DAT_100e0a4c);
  pbVar3 = (byte *)(DAT_100e0248 + 2 + DAT_100e0a4c);
  pbVar4 = (byte *)(DAT_100e0248 + 1 + DAT_100e0a4c);
  pbVar1 = (byte *)(DAT_100e0248 + DAT_100e0a4c);
  DAT_100e0a4c = DAT_100e0a4c + 4;
  return (((uint)*pbVar2 * 0x100 + (uint)*pbVar3) * 0x100 + (uint)*pbVar4) * 0x100 + (uint)*pbVar1;
}

/* 10029b00  FUN_10029b00  (85 bytes)
 * undefined1 * FUN_10029b00(void)
 * called by: FUN_1001a0e0, FUN_1001a3d0, FUN_1001a650, FUN_1001b360, FUN_10028760, FUN_100295c0, FUN_1002ecc0, FUN_1002f1a0, FUN_1002f850, FUN_10034a60, FUN_1004bb70, FUN_1004c0a0, ... (19 total)
 */
undefined1 * FUN_10029b00(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  DAT_100e024c = 0;
  if (DAT_100e0a4c + 1 <= DAT_100e0a50) {
    while( true ) {
      iVar1 = FUN_100299d0();
      if ((iVar1 == -1) || (iVar1 == 0)) break;
      (&DAT_100e024c)[uVar2] = (char)iVar1;
      uVar2 = uVar2 + 1;
      if ((0x7fe < uVar2) || (DAT_100e0a50 < DAT_100e0a4c + 1)) break;
    }
  }
  (&DAT_100e024c)[uVar2] = 0;
  return &DAT_100e024c;
}

/* 10029b60  FUN_10029b60  (22 bytes)
 * float10 FUN_10029b60(void)
 * called by: FUN_1001f830, FUN_1004bb70, FUN_1004bcd0, FUN_1004bd50, FUN_1004bef0, FUN_1004bfd0
 */
float10 FUN_10029b60(void)

{
  int iVar1;
  
  iVar1 = FUN_10029a50();
  return (float10)iVar1 * (float10)0.125;
}

/* 10029b80  FUN_10029b80  (35 bytes)
 * float10 FUN_10029b80(void)
 * called by: FUN_10026330
 */
float10 FUN_10029b80(void)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  return (float10)((uint)lVar1 & 0xffff) * (float10)0.0054931640625;
}

/* 10029bb0  FUN_10029bb0  (247 bytes)
 * undefined FUN_10029bb0(float * param_1, float * param_2, float * param_3, float * param_4)
 * called by: FUN_1002c6c0, FUN_1002d1b0, FUN_1002e120, FUN_1002e330
 */
void __cdecl FUN_10029bb0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar6 = (float10)fsin((float10)param_1[1] * (float10)0.017453292519943295);
  fVar1 = (float)fVar6;
  fVar6 = (float10)fcos((float10)param_1[1] * (float10)0.017453292519943295);
  fVar7 = (float10)fsin((float10)*param_1 * (float10)0.017453292519943295);
  fVar2 = (float)fVar7;
  fVar7 = (float10)fcos((float10)*param_1 * (float10)0.017453292519943295);
  fVar3 = (float)fVar7;
  fVar7 = (float10)fsin((float10)param_1[2] * (float10)0.017453292519943295);
  fVar4 = (float)fVar7;
  fVar7 = (float10)fcos((float10)param_1[2] * (float10)0.017453292519943295);
  fVar5 = (float)fVar7;
  if (param_2 != (float *)0x0) {
    *param_2 = (float)((float10)fVar3 * fVar6);
    param_2[1] = fVar3 * fVar1;
    param_2[2] = -fVar2;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = (float)((float10)fVar5 * (float10)fVar1 - (float10)fVar4 * (float10)fVar2 * fVar6);
    param_3[1] = (float)(((float10)fVar5 * fVar6 + (float10)fVar4 * (float10)fVar2 * (float10)fVar1)
                        * (float10)-1.0);
    param_3[2] = fVar4 * fVar3 * -1.0;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = (float)((float10)fVar4 * (float10)fVar1 + (float10)fVar5 * (float10)fVar2 * fVar6);
    param_4[1] = (float)((float10)fVar5 * (float10)fVar2 * (float10)fVar1 - (float10)fVar4 * fVar6);
    param_4[2] = fVar5 * fVar3;
    return;
  }
  return;
}

/* 10029cb0  FUN_10029cb0  (64 bytes)
 * undefined FUN_10029cb0(float * param_1)
 * called by: FUN_10029cf0
 */
void __cdecl FUN_10029cb0(float *param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = 3;
  do {
    if (*param_1 <= 180.0) {
      if (*param_1 < -180.0) {
        fVar1 = *param_1 + 360.0;
        goto LAB_10029ce7;
      }
    }
    else {
      fVar1 = *param_1 - 360.0;
LAB_10029ce7:
      *param_1 = fVar1;
    }
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return;
    }
  } while( true );
}

/* 10029cf0  FUN_10029cf0  (121 bytes)
 * undefined FUN_10029cf0(float * param_1, float * param_2, float * param_3, float param_4)
 * called by: FUN_1002c790, FUN_10067890, FUN_10068f70
 */
void __cdecl FUN_10029cf0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  
  FUN_10029cb0(param_1);
  FUN_10029cb0(param_2);
  iVar4 = 3;
  pfVar3 = param_2;
  do {
    fVar1 = *(float *)(((int)param_1 - (int)param_2) + (int)pfVar3);
    fVar2 = *pfVar3 - fVar1;
    if (fVar2 <= 180.0) {
      if (fVar2 < -180.0) {
        fVar2 = fVar2 + 360.0;
      }
    }
    else {
      fVar2 = fVar2 - 360.0;
    }
    pfVar3 = pfVar3 + 1;
    iVar4 = iVar4 + -1;
    *(float *)((int)param_3 + (-4 - (int)param_2) + (int)pfVar3) = fVar2 * param_4 + fVar1;
  } while (iVar4 != 0);
  FUN_10029cb0(param_3);
  return;
}

/* 10029d70  FUN_10029d70  (129 bytes)
 * float10 FUN_10029d70(float * param_1, float * param_2)
 * called by: FUN_10068f70
 */
float10 __cdecl FUN_10029d70(float *param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = FUN_10058390(param_1);
  fVar2 = FUN_10058390(param_2);
  if (((float)fVar1 != 0.0) && ((float)fVar2 != 0.0)) {
    fVar3 = (float10)FUN_1006c6b0();
    return (fVar3 / ((float10)(float)fVar2 * (float10)(float)fVar1)) * (float10)180.0 *
           (float10)0.3183098861837907;
  }
  return (float10)0.0;
}

/* 10029e00  FUN_10029e00  (59 bytes)
 * undefined FUN_10029e00(float * param_1, float * param_2, float * param_3)
 * called by: FUN_1002b310, FUN_1002d1b0
 */
void __cdecl FUN_10029e00(float *param_1,float *param_2,float *param_3)

{
  *param_3 = param_2[2] * param_1[1] - param_1[2] * param_2[1];
  param_3[1] = param_1[2] * *param_2 - *param_1 * param_2[2];
  param_3[2] = *param_1 * param_2[1] - *param_2 * param_1[1];
  return;
}

/* 10029e40  FUN_10029e40  (78 bytes)
 * undefined FUN_10029e40(float * param_1)
 * called by: FUN_10023080, FUN_100240b0, FUN_1002bb70, FUN_1002be80, FUN_1002c790, FUN_1002d1b0, FUN_1002daf0, FUN_1002dc10, FUN_1002e1c0, FUN_1003d600, FUN_10048840, FUN_10050080, ... (17 total)
 */
void __cdecl FUN_10029e40(float *param_1)

{
  float fVar1;
  
  fVar1 = SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  if (fVar1 != 0.0) {
    fVar1 = 1.0 / fVar1;
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
  }
  return;
}

/* 10029e90  FUN_10029e90  (209 bytes)
 * undefined FUN_10029e90(float * param_1, float * param_2)
 * called by: FUN_1002c790
 */
void __cdecl FUN_10029e90(float *param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  if ((param_1[1] == 0.0) && (*param_1 == 0.0)) {
    if (0.0 < param_1[2]) {
      *param_2 = 90.0;
      param_2[2] = 0.0;
      param_2[1] = 0.0;
      return;
    }
    *param_2 = 270.0;
    param_2[2] = 0.0;
    param_2[1] = 0.0;
    return;
  }
  fVar1 = (float10)fpatan((float10)param_1[1],(float10)*param_1);
  fVar1 = fVar1 * (float10)57.29577951308232;
  if (fVar1 < (float10)0.0) {
    fVar1 = fVar1 + (float10)360.0;
  }
  fVar2 = (float10)fpatan((float10)param_1[2],
                          SQRT((float10)param_1[1] * (float10)param_1[1] +
                               (float10)*param_1 * (float10)*param_1));
  fVar2 = fVar2 * (float10)57.29577951308232;
  if (fVar2 < (float10)0.0) {
    fVar2 = fVar2 + (float10)360.0;
  }
  *param_2 = (float)fVar2;
  param_2[2] = 0.0;
  param_2[1] = (float)fVar1;
  return;
}

/* 10029f70  FUN_10029f70  (180 bytes)
 * undefined FUN_10029f70(int param_1, int param_2)
 * called by: FUN_1002a030
 */
void __cdecl FUN_10029f70(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char local_10 [16];
  
  uVar3 = 0xffffffff;
  pcVar5 = (char *)(&DAT_100e0ef8 + param_1 * 4);
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = local_10;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar2 = (&DAT_100e4ef8)[param_1];
  uVar3 = 0xffffffff;
  pcVar5 = (char *)(&DAT_100e0ef8 + param_2 * 4);
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = (char *)(&DAT_100e0ef8 + param_1 * 4);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  (&DAT_100e4ef8)[param_1] = (&DAT_100e4ef8)[param_2];
  uVar3 = 0xffffffff;
  pcVar5 = local_10;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  (&DAT_100e4ef8)[param_2] = uVar2;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = (char *)(&DAT_100e0ef8 + param_2 * 4);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return;
}

/* 1002a030  FUN_1002a030  (101 bytes)
 * undefined FUN_1002a030(void * param_1)
 * called by: FUN_1002a0a0
 */
void __fastcall FUN_1002a030(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  byte_conflict *pbVar4;
  int iVar5;
  int iVar6;
  byte_conflict *local_4;
  
  if (0 < DAT_100e5300) {
    local_4 = (byte_conflict *)&DAT_100e0ef8;
    iVar3 = DAT_100e5300;
    iVar6 = 0;
    do {
      iVar1 = iVar6 + 1;
      iVar5 = iVar1;
      pbVar4 = local_4;
      if (iVar1 < iVar3) {
        do {
          uVar2 = FUN_10076d90(param_1,local_4,pbVar4 + 0x10);
          param_1 = extraout_ECX;
          if (0 < (int)uVar2) {
            FUN_10029f70(iVar6,iVar5);
            param_1 = extraout_ECX_00;
          }
          iVar5 = iVar5 + 1;
          iVar3 = DAT_100e5300;
          pbVar4 = pbVar4 + 0x10;
        } while (iVar5 < DAT_100e5300);
      }
      local_4 = local_4 + 0x10;
      iVar6 = iVar1;
    } while (iVar1 < iVar3);
  }
  return;
}

/* 1002a0a0  FUN_1002a0a0  (661 bytes)
 * undefined FUN_1002a0a0(void)
 * called by: FUN_1002ea10
 */
void FUN_1002a0a0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  undefined *puVar6;
  undefined *this;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *this_00;
  uint uVar7;
  undefined *extraout_ECX_04;
  void *extraout_ECX_05;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 uStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  char local_200 [512];
  
  if (DAT_100e5308 == 0) {
    puVar10 = &DAT_100e0ef8;
    for (iVar5 = 0x1000; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    puVar10 = (undefined4 *)&DAT_100e4ef8;
    for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    pcVar9 = local_200;
    for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9 = pcVar9 + 4;
    }
    DAT_100e5300 = 0;
    uVar2 = (**(code **)(DAT_100e52fc + 0x4f5a0))(s_sound_materials_txt_10094838);
    uStack_204 = uVar2;
    iVar5 = (**(code **)(DAT_100e52fc + 0x4f5a4))(s_sound_materials_txt_10094838,5,0);
    if (iVar5 != 0) {
      uStack_20c = 0;
      iStack_208 = iVar5;
      iVar3 = (**(code **)(DAT_100e52fc + 0x4f5ac))(iVar5,uVar2,&uStack_20c,local_200,0x1ff);
      this = extraout_ECX;
      while ((iVar3 != 0 && (DAT_100e5300 < 0x400))) {
        iVar3 = 0;
        puVar6 = PTR_DAT_10097468;
        cVar1 = local_200[0];
        while (PTR_DAT_10097468 = puVar6, cVar1 != '\0') {
          if (DAT_10097674 < 2) {
            uVar4 = (byte)puVar6[local_200[iVar3] * 2] & 8;
          }
          else {
            uVar4 = FUN_1006c8b6(this,(int)local_200[iVar3],8);
            puVar6 = extraout_ECX_00;
          }
          this = puVar6;
          if (uVar4 == 0) break;
          iVar8 = iVar3 + 1;
          iVar3 = iVar3 + 1;
          puVar6 = PTR_DAT_10097468;
          cVar1 = local_200[iVar8];
        }
        cVar1 = local_200[iVar3];
        if ((cVar1 != '\0') && (cVar1 != '/')) {
          if (DAT_10097674 < 2) {
            uVar4 = *(ushort *)(PTR_DAT_10097468 + cVar1 * 2) & 0x103;
          }
          else {
            uVar4 = FUN_1006c8b6(this,(int)cVar1,0x103);
          }
          if (uVar4 != 0) {
            uVar4 = FUN_1006c77b((int)local_200[iVar3]);
            (&DAT_100e4ef8)[DAT_100e5300] = (char)uVar4;
            cVar1 = local_200[iVar3 + 1];
            this_00 = extraout_ECX_01;
            while (iVar8 = iVar3 + 1, cVar1 != '\0') {
              if (DAT_10097674 < 2) {
                this_00 = (void *)(int)cVar1;
                uVar4 = (byte)PTR_DAT_10097468[(int)this_00 * 2] & 8;
              }
              else {
                uVar4 = FUN_1006c8b6(this_00,(int)cVar1,8);
                this_00 = extraout_ECX_02;
              }
              if (uVar4 == 0) break;
              cVar1 = local_200[iVar3 + 2];
              iVar3 = iVar8;
            }
            if (local_200[iVar3 + 1] != '\0') {
              do {
                if (DAT_10097674 < 2) {
                  this_00 = (void *)(int)local_200[iVar8];
                  uVar4 = (byte)PTR_DAT_10097468[(int)this_00 * 2] & 8;
                }
                else {
                  uVar4 = FUN_1006c8b6(this_00,(int)local_200[iVar8],8);
                  this_00 = extraout_ECX_03;
                }
              } while ((uVar4 == 0) &&
                      (iVar5 = iVar8 + 1, iVar8 = iVar8 + 1, local_200[iVar5] != '\0'));
              iVar5 = iStack_208;
              if (local_200[iVar8] != '\0') {
                if (iVar3 + 0x10 <= iVar8) {
                  iVar8 = iVar3 + 0x10;
                }
                uVar4 = 0xffffffff;
                local_200[iVar8] = '\0';
                iVar8 = DAT_100e5300 * 4;
                DAT_100e5300 = DAT_100e5300 + 1;
                pcVar9 = local_200 + iVar3 + 1;
                do {
                  pcVar11 = pcVar9;
                  if (uVar4 == 0) break;
                  uVar4 = uVar4 - 1;
                  pcVar11 = pcVar9 + 1;
                  cVar1 = *pcVar9;
                  pcVar9 = pcVar11;
                } while (cVar1 != '\0');
                uVar4 = ~uVar4;
                pcVar9 = pcVar11 + -uVar4;
                pcVar11 = (char *)(&DAT_100e0ef8 + iVar8);
                for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
                  pcVar9 = pcVar9 + 4;
                  pcVar11 = pcVar11 + 4;
                }
                for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *pcVar11 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                  pcVar11 = pcVar11 + 1;
                }
              }
            }
          }
        }
        iVar3 = (**(code **)(DAT_100e52fc + 0x4f5ac))(iVar5,uStack_204,&uStack_20c,local_200,0x1ff);
        this = extraout_ECX_04;
      }
      (**(code **)(DAT_100e52fc + 0x4f5a8))(iVar5);
      FUN_1002a030(extraout_ECX_05);
      DAT_100e5308 = 1;
    }
  }
  return;
}

/* 1002a340  FUN_1002a340  (95 bytes)
 * undefined1 FUN_1002a340(byte.conflict * param_1)
 * called by: FUN_1002aba0, FUN_10044bf0, FUN_10045df0, HUD_PlayerMoveTexture
 */
undefined1 __cdecl FUN_1002a340(byte_conflict *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_100e5300 + -1;
  iVar2 = 0;
  if (-1 < iVar4) {
    do {
      iVar3 = (iVar4 + iVar2) / 2;
      iVar1 = FUN_10076e60(param_1,(char *)(&DAT_100e0ef8 + iVar3 * 4),(void *)0xf);
      if (iVar1 == 0) {
        return (&DAT_100e4ef8)[iVar3];
      }
      if (iVar1 < 1) {
        if (iVar1 < 0) {
          iVar4 = iVar3 + -1;
        }
      }
      else {
        iVar2 = iVar3 + 1;
      }
    } while (iVar2 <= iVar4);
  }
  return 0x43;
}

/* 1002a3a0  FUN_1002a3a0  (1733 bytes)
 * undefined FUN_1002a3a0(undefined4 param_1, undefined4 param_2)
 * called by: FUN_1002aca0, FUN_1002de80, FUN_10053780
 */
void __cdecl FUN_1002a3a0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  float10 fVar4;
  float fStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(uint *)(DAT_100e52fc + 0x98) = (uint)(*(int *)(DAT_100e52fc + 0x98) == 0);
  if (*(int *)(DAT_100e52fc + 0x4f5b0) != 0) {
    iVar2 = (**(code **)(DAT_100e52fc + 0x4f588))(0,1);
    uVar1 = iVar2 + *(int *)(DAT_100e52fc + 0x98) * 2;
    if (((*(uint *)(DAT_100e52fc + 0x208) & 1) == 0) &&
       ((*(uint *)(DAT_100e52fc + 0x208) & 0x200) == 0)) {
      fStack_c = *(float *)(DAT_100e52fc + 0x5c);
      uStack_8 = *(undefined4 *)(DAT_100e52fc + 0x60);
      uStack_4 = 0;
      if ((*(int *)(DAT_100e52fc + 8) == 0) ||
         ((DAT_100e5304 != 0 || (fVar4 = FUN_10058390(&fStack_c), (float10)220.0 < fVar4)))) {
        switch(param_1) {
        case 1:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_metal1_wav_10094b58,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_metal3_wav_10094b40,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_metal2_wav_10094b28,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_metal4_wav_10094b10,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 2:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_dirt1_wav_10094afc,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_dirt3_wav_10094ae8,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_dirt2_wav_10094ad4,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_dirt4_wav_10094ac0,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 3:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_duct1_wav_10094aac,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_duct3_wav_10094a98,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_duct2_wav_10094a84,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_duct4_wav_10094a70,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 4:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_grate1_wav_10094a58,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_grate3_wav_10094a40,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_grate2_wav_10094a28,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_grate4_wav_10094a10,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 5:
          iVar2 = (**(code **)(DAT_100e52fc + 0x4f588))(0,4);
          if ((iVar2 == 0) || (uVar1 < 5)) {
            switch(uVar1) {
            case 0:
              (**(code **)(DAT_100e52fc + 0x4f5b4))
                        (4,s_player_pl_tile1_wav_100949fc,param_2,0x3fa00000,0,100);
              return;
            case 1:
              (**(code **)(DAT_100e52fc + 0x4f5b4))
                        (4,s_player_pl_tile3_wav_100949e8,param_2,0x3fa00000,0,100);
              return;
            case 2:
              (**(code **)(DAT_100e52fc + 0x4f5b4))
                        (4,s_player_pl_tile2_wav_100949d4,param_2,0x3fa00000,0,100);
              return;
            case 3:
              (**(code **)(DAT_100e52fc + 0x4f5b4))
                        (4,s_player_pl_tile4_wav_100949c0,param_2,0x3fa00000,0,100);
              return;
            default:
              (**(code **)(DAT_100e52fc + 0x4f5b4))
                        (4,s_player_pl_tile5_wav_100949ac,param_2,0x3fa00000,0,100);
              return;
            }
          }
          break;
        case 6:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_slosh1_wav_10094994,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_slosh3_wav_1009497c,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_slosh2_wav_10094964,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_slosh4_wav_1009494c,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 7:
          if (DAT_100e530c == 0) {
            DAT_100e530c = 1;
            return;
          }
          bVar3 = DAT_100e530c == 3;
          DAT_100e530c = DAT_100e530c + 1;
          if (bVar3) {
            DAT_100e530c = 0;
          }
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_wade1_wav_10094938,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_wade2_wav_10094924,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_wade3_wav_10094910,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_wade4_wav_100948fc,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 8:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_ladder1_wav_100948e4,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_ladder3_wav_100948cc,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_ladder2_wav_100948b4,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_ladder4_wav_1009489c,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        default:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_step1_wav_10094888,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_step3_wav_10094874,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_step2_wav_10094860,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100e52fc + 0x4f5b4))
                      (4,s_player_pl_step4_wav_1009484c,param_2,0x3fa00000,0,100);
          }
        }
      }
    }
  }
  return;
}

/* 1002ab20  FUN_1002ab20  (67 bytes)
 * undefined4 FUN_1002ab20(undefined1 param_1)
 * called by: FUN_1002aca0, FUN_1002de80, FUN_10053780
 */
undefined4 __cdecl FUN_1002ab20(undefined1 param_1)

{
  switch(param_1) {
  case 0x44:
    return 2;
  default:
    return 0;
  case 0x47:
    return 4;
  case 0x4d:
    return 1;
  case 0x53:
    return 6;
  case 0x54:
    return 5;
  case 0x56:
    return 3;
  }
}

/* 1002aba0  FUN_1002aba0  (250 bytes)
 * undefined FUN_1002aba0(void)
 * called by: FUN_1002aca0
 */
void FUN_1002aba0(void)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *(undefined4 *)(DAT_100e52fc + 0x38);
  local_8 = *(undefined4 *)(DAT_100e52fc + 0x3c);
  local_4 = *(undefined4 *)(DAT_100e52fc + 0x40);
  local_18 = *(undefined4 *)(DAT_100e52fc + 0x38);
  local_14 = *(undefined4 *)(DAT_100e52fc + 0x3c);
  local_10 = *(float *)(DAT_100e52fc + 0x40) - 64.0;
  *(undefined1 *)(DAT_100e52fc + 0xf0) = 0;
  *(undefined1 *)(DAT_100e52fc + 0x1f0) = 0x43;
  pcVar3 = (char *)(**(code **)(DAT_100e52fc + 0x4f5b8))
                             (*(undefined4 *)(DAT_100e52fc + 0xe0),&local_c,&local_18);
  if (pcVar3 != (char *)0x0) {
    if ((*pcVar3 == '-') || (*pcVar3 == '+')) {
      pcVar3 = pcVar3 + 2;
    }
    cVar1 = *pcVar3;
    if ((((cVar1 == '{') || (cVar1 == '!')) || (cVar1 == '~')) || (cVar1 == ' ')) {
      pcVar3 = pcVar3 + 1;
    }
    uVar4 = 0xffffffff;
    do {
      pcVar6 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar3 = pcVar6 + -uVar4;
    pcVar6 = (char *)(DAT_100e52fc + 0xf0);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar6 = pcVar6 + 1;
    }
    *(undefined1 *)(DAT_100e52fc + 0xff) = 0;
    uVar2 = FUN_1002a340((byte_conflict *)(DAT_100e52fc + 0xf0));
    *(undefined1 *)(DAT_100e52fc + 0x1f0) = uVar2;
  }
  return;
}

/* 1002aca0  FUN_1002aca0  (806 bytes)
 * undefined FUN_1002aca0(void)
 * called by: FUN_1002de80, FUN_1002e330
 */
void FUN_1002aca0(void)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  longlong lVar8;
  float local_28;
  float local_20;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  if (0 < *(int *)(DAT_100e52fc + 0x94)) {
    return;
  }
  if ((*(uint *)(DAT_100e52fc + 0xb8) & 0x1000) != 0) {
    return;
  }
  FUN_1002aba0();
  fVar6 = FUN_10058390((float *)(DAT_100e52fc + 0x5c));
  bVar5 = *(int *)(DAT_100e52fc + 0xdc) == 5;
  if (((*(uint *)(DAT_100e52fc + 0xb8) & 0x4000) != 0) || (bVar5)) {
    local_28 = 60.0;
    local_20 = 80.0;
    if (bVar5) goto LAB_1002ad43;
  }
  else {
    local_28 = 120.0;
    local_20 = 210.0;
  }
  if (*(int *)(DAT_100e52fc + 0xe0) == -1) {
    return;
  }
LAB_1002ad43:
  fVar7 = FUN_10058390((float *)(DAT_100e52fc + 0x5c));
  if (((float10)0.0 < fVar7) && ((local_28 <= (float)fVar6 || (*(int *)(DAT_100e52fc + 0x94) == 0)))
     ) {
    bVar1 = (float)fVar6 < local_20;
    local_18 = *(undefined4 *)(DAT_100e52fc + 0x38);
    local_14 = *(undefined4 *)(DAT_100e52fc + 0x3c);
    local_c = *(undefined4 *)(DAT_100e52fc + 0x38);
    local_8 = *(undefined4 *)(DAT_100e52fc + 0x3c);
    fVar2 = *(float *)(DAT_100e52fc + 0x4f52c + *(int *)(DAT_100e52fc + 0xbc) * 0xc) -
            *(float *)(DAT_100e52fc + 0x4f4fc + *(int *)(DAT_100e52fc + 0xbc) * 0xc);
    local_10 = *(float *)(DAT_100e52fc + 0x40) - fVar2 * 0.3;
    local_4 = *(float *)(DAT_100e52fc + 0x40) - fVar2 * 0.5;
    if (bVar5) {
      uVar4 = 8;
      local_28 = 0.35;
      *(undefined4 *)(DAT_100e52fc + 0x94) = 0x15e;
    }
    else {
      iVar3 = (**(code **)(DAT_100e52fc + 0x4f574))(&local_18,0);
      if (iVar3 == -3) {
        uVar4 = 7;
        local_28 = 0.65;
        *(undefined4 *)(DAT_100e52fc + 0x94) = 600;
      }
      else {
        iVar3 = (**(code **)(DAT_100e52fc + 0x4f574))(&local_c,0);
        if (iVar3 == -3) {
          uVar4 = 6;
          if (bVar1) {
            local_28 = 0.2;
          }
          else {
            local_28 = 0.5;
          }
          *(uint *)(DAT_100e52fc + 0x94) = (-(uint)bVar1 & 100) + 300;
        }
        else {
          uVar4 = FUN_1002ab20(*(undefined1 *)(DAT_100e52fc + 0x1f0));
          switch(*(undefined1 *)(DAT_100e52fc + 0x1f0)) {
          case 0x44:
            if (bVar1) {
              local_28 = 0.25;
            }
            else {
              local_28 = 0.55;
            }
            break;
          default:
            if (bVar1) {
              local_28 = 0.2;
            }
            else {
              local_28 = 0.5;
            }
            break;
          case 0x56:
            if (bVar1) {
              local_28 = 0.4;
            }
            else {
              local_28 = 0.7;
            }
          }
          *(uint *)(DAT_100e52fc + 0x94) = (-(uint)bVar1 & 100) + 300;
        }
      }
    }
    iVar3 = DAT_100e52fc;
    lVar8 = __ftol();
    *(int *)(iVar3 + 0x94) = (int)lVar8;
    iVar3 = DAT_100e52fc;
    lVar8 = __ftol();
    *(int *)(iVar3 + 0x94) = (int)lVar8;
    if ((*(uint *)(DAT_100e52fc + 0xb8) & 0x4000) != 0) {
      local_28 = local_28 * 0.35;
    }
    FUN_1002a3a0(uVar4,local_28);
  }
  return;
}

/* 1002aff0  FUN_1002aff0  (160 bytes)
 * undefined4 FUN_1002aff0(void)
 * called by: FUN_1002b310, FUN_1002c1a0, FUN_1002d710
 */
undefined4 FUN_1002aff0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_stack_00000034;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  undefined4 *in_stack_00000048;
  
  iVar1 = 0;
  iVar2 = *(int *)(DAT_100e52fc + 0x4548c);
  if (0 < iVar2) {
    piVar3 = (int *)(DAT_100e52fc + 0x454c0);
    do {
      if (*piVar3 == in_stack_00000034) break;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 0x11;
    } while (iVar1 < iVar2);
  }
  if (iVar1 != iVar2) {
    return 0;
  }
  uStack00000038 = *in_stack_00000048;
  uStack0000003c = in_stack_00000048[1];
  uStack00000040 = in_stack_00000048[2];
  if (599 < iVar2) {
    (**(code **)(DAT_100e52fc + 0x4f564))(s_Too_many_entities_were_touched__10094b70);
  }
  puVar4 = (undefined4 *)(DAT_100e52fc + 0x45490 + *(int *)(DAT_100e52fc + 0x4548c) * 0x44);
  for (iVar2 = 0x11; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar2 != 0;
      iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)register0x00000010;
    puVar4 = puVar4 + 1;
  }
  *(int *)(DAT_100e52fc + 0x4548c) = *(int *)(DAT_100e52fc + 0x4548c) + 1;
  return 1;
}

/* 1002b090  FUN_1002b090  (248 bytes)
 * undefined FUN_1002b090(void)
 * called by: FUN_1002b230, FUN_1002b2b0, FUN_1002d6b0, FUN_1002d7e0, FUN_1002e330
 */
void FUN_1002b090(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0x5c;
  fVar1 = *(float *)(*(int *)(DAT_100e52fc + 0x4f4f0) + 0x34);
  iVar2 = DAT_100e52fc;
  do {
    if ((*(uint *)(iVar3 + iVar2) & DAT_100947ec) == DAT_100947ec) {
      (**(code **)(iVar2 + 0x4f568))(s_PM_Got_a_NaN_velocity__i_10094bf8,iVar4);
      *(undefined4 *)(iVar3 + DAT_100e52fc) = 0;
      iVar2 = DAT_100e52fc;
    }
    if ((*(uint *)(iVar3 + -0x24 + iVar2) & DAT_100947ec) == DAT_100947ec) {
      (**(code **)(iVar2 + 0x4f568))(s_PM_Got_a_NaN_origin_on__i_10094bdc,iVar4);
      *(undefined4 *)(iVar3 + -0x24 + DAT_100e52fc) = 0;
      iVar2 = DAT_100e52fc;
    }
    if (*(float *)(iVar3 + iVar2) <= fVar1) {
      if (*(float *)(iVar3 + iVar2) < -fVar1) {
        (**(code **)(iVar2 + 0x4f564))(s_PM_Got_a_velocity_too_low_on__i_10094b94,iVar4);
        *(float *)(iVar3 + DAT_100e52fc) = -fVar1;
        iVar2 = DAT_100e52fc;
      }
    }
    else {
      (**(code **)(iVar2 + 0x4f564))(s_PM_Got_a_velocity_too_high_on__i_10094bb8,iVar4);
      *(float *)(iVar3 + DAT_100e52fc) = fVar1;
      iVar2 = DAT_100e52fc;
    }
    iVar3 = iVar3 + 4;
    iVar4 = iVar4 + 1;
  } while (iVar3 < 0x68);
  return;
}

/* 1002b190  FUN_1002b190  (159 bytes)
 * byte.conflict FUN_1002b190(float * param_1, float * param_2, float * param_3, float param_4)
 * called by: FUN_1002b310, FUN_1002d7e0
 */
byte_conflict __cdecl FUN_1002b190(float *param_1,float *param_2,float *param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  
  bVar10 = 0.0 < param_2[2];
  if (param_2[2] == 0.0) {
    bVar10 = bVar10 | 2;
  }
  iVar11 = 3;
  fVar2 = param_1[1];
  fVar3 = param_2[1];
  fVar4 = param_1[2];
  fVar5 = param_2[2];
  fVar6 = *param_1;
  fVar7 = *param_2;
  iVar9 = (int)param_2 - (int)param_3;
  do {
    pfVar1 = (float *)(iVar9 + (int)param_3);
    fVar8 = *(float *)((int)pfVar1 + ((int)param_1 - (int)param_2)) -
            (fVar6 * fVar7 + fVar4 * fVar5 + fVar2 * fVar3) * param_4 * *pfVar1;
    *param_3 = fVar8;
    if ((-0.1 < fVar8) && (fVar8 < 0.1)) {
      *param_3 = 0.0;
    }
    param_3 = param_3 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return bVar10;
}

/* 1002b230  FUN_1002b230  (121 bytes)
 * undefined FUN_1002b230(void)
 * called by: FUN_1002e330
 */
void FUN_1002b230(void)

{
  float fVar1;
  
  if (*(float *)(DAT_100e52fc + 0xcc) == 0.0) {
    if (*(float *)(DAT_100e52fc + 0xc0) == 0.0) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = *(float *)(DAT_100e52fc + 0xc0);
    }
    *(float *)(DAT_100e52fc + 100) =
         *(float *)(DAT_100e52fc + 100) -
         fVar1 * **(float **)(DAT_100e52fc + 0x4f4f0) * *(float *)(DAT_100e52fc + 0x10) * 0.5;
    *(float *)(DAT_100e52fc + 100) =
         *(float *)(DAT_100e52fc + 0x7c) * *(float *)(DAT_100e52fc + 0x10) +
         *(float *)(DAT_100e52fc + 100);
    *(undefined4 *)(DAT_100e52fc + 0x7c) = 0;
    FUN_1002b090();
    return;
  }
  return;
}

/* 1002b2b0  FUN_1002b2b0  (93 bytes)
 * undefined FUN_1002b2b0(void)
 * called by: FUN_1002e330, FUN_10052fd0, FUN_10053430, FUN_100534c0, FUN_10053510, FUN_10053780
 */
void FUN_1002b2b0(void)

{
  float fVar1;
  
  if (*(float *)(DAT_100e52fc + 0xcc) == 0.0) {
    if (*(float *)(DAT_100e52fc + 0xc0) == 0.0) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = *(float *)(DAT_100e52fc + 0xc0);
    }
    *(float *)(DAT_100e52fc + 100) =
         *(float *)(DAT_100e52fc + 100) -
         **(float **)(DAT_100e52fc + 0x4f4f0) * *(float *)(DAT_100e52fc + 0x10) * fVar1 * 0.5;
    FUN_1002b090();
    return;
  }
  return;
}

/* 1002b310  FUN_1002b310  (1245 bytes)
 * uint FUN_1002b310(void)
 * called by: FUN_1002bb70, FUN_1002be80, FUN_1002e330, FUN_10053fd0
 */
uint FUN_1002b310(void)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int aiStackY_168 [12];
  undefined4 uStackY_138;
  undefined1 *puStackY_134;
  uint local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  float local_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  int aiStack_d0 [4];
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float local_8c [18];
  undefined1 local_44 [68];
  
  iVar5 = 0;
  local_108 = *(float *)(DAT_100e52fc + 0x5c);
  local_104 = *(undefined4 *)(DAT_100e52fc + 0x60);
  local_100 = *(undefined4 *)(DAT_100e52fc + 100);
  local_e8 = *(float *)(DAT_100e52fc + 0x5c);
  local_e4 = *(float *)(DAT_100e52fc + 0x60);
  local_e0 = *(float *)(DAT_100e52fc + 100);
  local_10c = *(float *)(DAT_100e52fc + 0x10);
  local_110 = 0;
  local_fc = 0.0;
  local_ec = 0;
  do {
    if (((*(float *)(DAT_100e52fc + 0x5c) == 0.0) && (*(float *)(DAT_100e52fc + 0x60) == 0.0)) &&
       (*(float *)(DAT_100e52fc + 100) == 0.0)) break;
    iVar6 = 3;
    pfVar1 = (float *)(DAT_100e52fc + 0x38);
    pfVar3 = local_8c;
    do {
      iVar6 = iVar6 + -1;
      *pfVar3 = local_10c * pfVar1[9] + *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar3 = pfVar3 + 1;
    } while (iVar6 != 0);
    puStackY_134 = local_44;
    uStackY_138 = 0x1002b3d5;
    piVar2 = (int *)(**(code **)(DAT_100e52fc + 0x4f580))();
    piVar7 = aiStack_d0;
    for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar7 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar7 = piVar7 + 1;
    }
    local_fc = fStack_c0 + local_fc;
    if (aiStack_d0[0] != 0) {
      *(undefined4 *)(DAT_100e52fc + 0x5c) = DAT_100e0a58;
      *(undefined4 *)(DAT_100e52fc + 0x60) = DAT_100e0a5c;
      *(undefined4 *)(DAT_100e52fc + 100) = DAT_100e0a60;
      return 4;
    }
    iVar6 = iVar5;
    if (0.0 < fStack_c0) {
      *(undefined4 *)(DAT_100e52fc + 0x38) = uStack_bc;
      *(undefined4 *)(DAT_100e52fc + 0x3c) = uStack_b8;
      *(undefined4 *)(DAT_100e52fc + 0x40) = uStack_b4;
      local_108 = *(float *)(DAT_100e52fc + 0x5c);
      local_104 = *(undefined4 *)(DAT_100e52fc + 0x60);
      local_100 = *(undefined4 *)(DAT_100e52fc + 100);
      iVar6 = 0;
    }
    if (fStack_c0 == 1.0) break;
    piVar2 = aiStack_d0;
    piVar7 = aiStackY_168;
    for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar7 = piVar7 + 1;
    }
    FUN_1002aff0();
    if (0.7 < fStack_a8) {
      local_110 = local_110 | 1;
    }
    if (fStack_a8 == 0.0) {
      local_110 = local_110 | 2;
    }
    local_10c = local_10c - fStack_c0 * local_10c;
    if (4 < iVar6) {
      *(undefined4 *)(DAT_100e52fc + 0x5c) = DAT_100e0a58;
      *(undefined4 *)(DAT_100e52fc + 0x60) = DAT_100e0a5c;
      *(undefined4 *)(DAT_100e52fc + 100) = DAT_100e0a60;
      break;
    }
    iVar5 = iVar6 + 1;
    local_8c[iVar6 * 3 + 3] = fStack_b0;
    local_8c[iVar6 * 3 + 4] = fStack_ac;
    local_8c[iVar6 * 3 + 5] = fStack_a8;
    if ((*(int *)(DAT_100e52fc + 0xdc) != 3) ||
       ((*(int *)(DAT_100e52fc + 0xe0) != -1 && (*(int *)(DAT_100e52fc + 0xc4) == 0x3f800000)))) {
      iVar6 = 0;
      if (0 < iVar5) {
        pfVar1 = local_8c;
        do {
          pfVar1 = pfVar1 + 3;
          puStackY_134 = (undefined1 *)0x1002b622;
          FUN_1002b190(&local_108,pfVar1,(float *)(DAT_100e52fc + 0x5c),1.0);
          iVar4 = 0;
          pfVar3 = local_8c + 4;
          do {
            if ((iVar4 != iVar6) &&
               (*(float *)(DAT_100e52fc + 0x60) * *pfVar3 +
                pfVar3[-1] * *(float *)(DAT_100e52fc + 0x5c) +
                pfVar3[1] * *(float *)(DAT_100e52fc + 100) < 0.0)) break;
            iVar4 = iVar4 + 1;
            pfVar3 = pfVar3 + 3;
          } while (iVar4 < iVar5);
          if (iVar4 == iVar5) break;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar5);
      }
      if (iVar6 == iVar5) {
        if (iVar5 == 2) {
          FUN_10029e00(local_8c + 3,local_8c + 6,&fStack_dc);
          FUN_100583e0(&fStack_dc,
                       fStack_dc * *(float *)(DAT_100e52fc + 0x5c) +
                       fStack_d8 * *(float *)(DAT_100e52fc + 0x60) +
                       fStack_d4 * *(float *)(DAT_100e52fc + 100),(float *)(DAT_100e52fc + 0x5c));
          goto LAB_1002b6d0;
        }
      }
      else {
LAB_1002b6d0:
        if (0.0 < local_e8 * *(float *)(DAT_100e52fc + 0x5c) +
                  local_e4 * *(float *)(DAT_100e52fc + 0x60) +
                  local_e0 * *(float *)(DAT_100e52fc + 100)) goto LAB_1002b6fa;
      }
      *(undefined4 *)(DAT_100e52fc + 0x5c) = DAT_100e0a58;
      *(undefined4 *)(DAT_100e52fc + 0x60) = DAT_100e0a5c;
      *(undefined4 *)(DAT_100e52fc + 100) = DAT_100e0a60;
      break;
    }
    if (0 < iVar5) {
      pfVar1 = local_8c;
      iVar6 = iVar5;
      do {
        pfVar1 = pfVar1 + 3;
        if (pfVar1[2] <= 0.7) {
          puStackY_134 = (undefined1 *)0x1002b5af;
          FUN_1002b190(&local_108,pfVar1,&fStack_f8,
                       (1.0 - *(float *)(DAT_100e52fc + 0xc4)) * 0.01 + 1.0);
        }
        else {
          puStackY_134 = (undefined1 *)0x1002b566;
          FUN_1002b190(&local_108,pfVar1,&fStack_f8,1.0);
          local_108 = fStack_f8;
          local_104 = uStack_f4;
          local_100 = uStack_f0;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(float *)(DAT_100e52fc + 0x5c) = fStack_f8;
    *(undefined4 *)(DAT_100e52fc + 0x60) = uStack_f4;
    *(undefined4 *)(DAT_100e52fc + 100) = uStack_f0;
    local_100 = uStack_f0;
    local_108 = fStack_f8;
    local_104 = uStack_f4;
LAB_1002b6fa:
    local_ec = local_ec + 1;
  } while (local_ec < 4);
  if (local_fc == 0.0) {
    *(undefined4 *)(DAT_100e52fc + 0x5c) = DAT_100e0a58;
    *(undefined4 *)(DAT_100e52fc + 0x60) = DAT_100e0a5c;
    *(undefined4 *)(DAT_100e52fc + 100) = DAT_100e0a60;
  }
  return local_110;
}

/* 1002b7f0  FUN_1002b7f0  (53 bytes)
 * float10 FUN_1002b7f0(float param_1)
 * called by: FUN_1002b830
 */
float10 __cdecl FUN_1002b7f0(float param_1)

{
  if (param_1 < 330.0) {
    return ((float10)param_1 - (float10)210.0) * (float10)0.008333334 * (float10)0.5 + (float10)0.6;
  }
  return (float10)1.1;
}

/* 1002b830  FUN_1002b830  (214 bytes)
 * undefined FUN_1002b830(float * param_1, float param_2, float param_3)
 * called by: FUN_10053fd0
 */
void __cdecl FUN_1002b830(float *param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (((*(int *)(DAT_100e52fc + 0xd0) == 0) && (*(float *)(DAT_100e52fc + 0xcc) == 0.0)) &&
     (fVar1 = param_2 - (*(float *)(DAT_100e52fc + 0x5c) * *param_1 +
                        *(float *)(DAT_100e52fc + 0x60) * param_1[1] +
                        *(float *)(DAT_100e52fc + 100) * param_1[2]), 0.0 < fVar1)) {
    fVar4 = (float10)*(float *)(DAT_100e52fc + 0xc4) * (float10)*(float *)(DAT_100e52fc + 0x10) *
            (float10)param_2 * (float10)param_3;
    if (((*(byte *)(DAT_100e52fc + 0x208) & 0x20) == 0) &&
       ((*(uint *)(DAT_100e52fc + 0xb8) & 0x4000) == 0)) {
      fVar5 = FUN_1002b7f0(*(float *)(DAT_100e52fc + 500));
      fVar4 = fVar5 * (float10)(float)fVar4;
    }
    if ((float10)fVar1 < fVar4) {
      fVar4 = (float10)fVar1;
    }
    iVar2 = 0x5c;
    do {
      iVar3 = iVar2 + 4;
      *(float *)(iVar2 + DAT_100e52fc) =
           (float)(fVar4 * (float10)*(float *)((int)param_1 + iVar2 + -0x5c) +
                  (float10)*(float *)(iVar2 + DAT_100e52fc));
      iVar2 = iVar3;
    } while (iVar3 < 0x68);
  }
  return;
}

/* 1002b910  FUN_1002b910  (412 bytes)
 * undefined FUN_1002b910(void)
 * called by: FUN_1002e330
 */
void FUN_1002b910(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44 [4];
  float fStack_34;
  
  iVar5 = DAT_100e52fc;
  if (*(float *)(DAT_100e52fc + 0xcc) == 0.0) {
    pfVar1 = (float *)(DAT_100e52fc + 0x5c);
    fVar3 = SQRT(*(float *)(DAT_100e52fc + 100) * *(float *)(DAT_100e52fc + 100) +
                 *(float *)(DAT_100e52fc + 0x60) * *(float *)(DAT_100e52fc + 0x60) +
                 *(float *)(DAT_100e52fc + 0x5c) * *(float *)(DAT_100e52fc + 0x5c));
    if (0.1 <= fVar3) {
      fVar2 = 0.0;
      if (*(int *)(DAT_100e52fc + 0xe0) != -1) {
        local_5c = (*pfVar1 / fVar3) * 16.0 + *(float *)(DAT_100e52fc + 0x38);
        local_58 = (*(float *)(DAT_100e52fc + 0x60) / fVar3) * 16.0 +
                   *(float *)(DAT_100e52fc + 0x3c);
        local_54 = *(float *)(DAT_100e52fc + 0x4f4fc + *(int *)(DAT_100e52fc + 0xbc) * 0xc) +
                   *(float *)(DAT_100e52fc + 0x40);
        local_48 = local_54 - 34.0;
        local_50 = local_5c;
        local_4c = local_58;
        puVar6 = (undefined4 *)
                 (**(code **)(DAT_100e52fc + 0x4f580))(local_44,&local_5c,&local_50,0,0xffffffff);
        puVar8 = local_44;
        for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        iVar7 = *(int *)(DAT_100e52fc + 0x4f4f0);
        if (fStack_34 == 1.0) {
          fVar2 = *(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x1c);
        }
        else {
          fVar2 = *(float *)(iVar7 + 0x1c);
        }
        fVar4 = fVar3;
        if (fVar3 < *(float *)(iVar7 + 4)) {
          fVar4 = *(float *)(iVar7 + 4);
        }
        fVar2 = fVar4 * *(float *)(DAT_100e52fc + 0x10) *
                fVar2 * *(float *)(DAT_100e52fc + 0xc4) * 0.75;
      }
      fVar2 = fVar3 - fVar2;
      if (fVar2 < 0.0) {
        fVar2 = 0.0;
      }
      fVar2 = fVar2 / fVar3;
      fVar3 = *(float *)(iVar5 + 0x60);
      fVar4 = *(float *)(iVar5 + 100);
      *(float *)(DAT_100e52fc + 0x5c) = fVar2 * *pfVar1;
      *(float *)(DAT_100e52fc + 0x60) = fVar2 * fVar3;
      *(float *)(DAT_100e52fc + 100) = fVar2 * fVar4;
    }
  }
  return;
}

/* 1002bab0  FUN_1002bab0  (188 bytes)
 * undefined FUN_1002bab0(float * param_1, float param_2, float param_3)
 * called by: FUN_1002be80
 */
void __cdecl FUN_1002bab0(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(DAT_100e52fc + 0xd0) == 0) && (*(float *)(DAT_100e52fc + 0xcc) == 0.0)) {
    fVar1 = param_2;
    if (30.0 < param_2) {
      fVar1 = 30.0;
    }
    fVar1 = fVar1 - (*(float *)(DAT_100e52fc + 0x5c) * *param_1 +
                    *(float *)(DAT_100e52fc + 0x60) * param_1[1] +
                    *(float *)(DAT_100e52fc + 100) * param_1[2]);
    if (0.0 < fVar1) {
      fVar2 = *(float *)(DAT_100e52fc + 0xc4) * *(float *)(DAT_100e52fc + 0x10) * param_2 * param_3;
      if (fVar1 < fVar2) {
        fVar2 = fVar1;
      }
      iVar3 = 0x5c;
      do {
        iVar4 = iVar3 + 4;
        *(float *)(iVar3 + DAT_100e52fc) =
             fVar2 * *(float *)((int)param_1 + iVar3 + -0x5c) + *(float *)(iVar3 + DAT_100e52fc);
        iVar3 = iVar4;
      } while (iVar4 < 0x68);
    }
  }
  return;
}

/* 1002bb70  FUN_1002bb70  (769 bytes)
 * undefined FUN_1002bb70(void)
 * called by: FUN_1002e330
 */
void FUN_1002bb70(void)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  float afStackY_dc [9];
  undefined4 uStackY_b8;
  int *piStackY_b4;
  float *pfStackY_b0;
  float *pfStackY_ac;
  undefined4 uStackY_a8;
  undefined4 uStackY_a4;
  float local_88;
  float local_80 [4];
  undefined4 local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44 [5];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pfVar3 = (float *)(DAT_100e52fc + 0x20);
  iVar7 = 3;
  pfVar6 = local_80;
  do {
    pfVar1 = pfVar3 + -3;
    fVar2 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    iVar7 = iVar7 + -1;
    *pfVar6 = fVar2 * *(float *)(DAT_100e52fc + 0x4546c) +
              *pfVar1 * *(float *)(DAT_100e52fc + 0x45468);
    pfVar6 = pfVar6 + 1;
  } while (iVar7 != 0);
  if (((*(float *)(DAT_100e52fc + 0x45468) == 0.0) && (*(float *)(DAT_100e52fc + 0x4546c) == 0.0))
     && (*(float *)(DAT_100e52fc + 0x45470) == 0.0)) {
    local_80[2] = local_80[2] - 60.0;
  }
  else {
    local_80[2] = local_80[2] + *(float *)(DAT_100e52fc + 0x45470);
  }
  local_5c = local_80[0];
  local_58 = local_80[1];
  local_54 = local_80[2];
  fVar9 = (float10)FUN_10029e40(&local_5c);
  if ((float10)*(float *)(DAT_100e52fc + 500) < fVar9) {
    FUN_100583e0(local_80,(float)((float10)*(float *)(DAT_100e52fc + 500) / fVar9),local_80);
    fVar9 = (float10)*(float *)(DAT_100e52fc + 500);
  }
  fVar2 = (float)(fVar9 * (float10)0.8);
  *(float *)(DAT_100e52fc + 0x5c) =
       *(float *)(DAT_100e52fc + 0x74) + *(float *)(DAT_100e52fc + 0x5c);
  *(float *)(DAT_100e52fc + 0x60) =
       *(float *)(DAT_100e52fc + 0x78) + *(float *)(DAT_100e52fc + 0x60);
  *(float *)(DAT_100e52fc + 100) = *(float *)(DAT_100e52fc + 0x7c) + *(float *)(DAT_100e52fc + 100);
  local_50 = *(float *)(DAT_100e52fc + 0x5c);
  local_4c = *(undefined4 *)(DAT_100e52fc + 0x60);
  local_48 = *(undefined4 *)(DAT_100e52fc + 100);
  fVar9 = (float10)FUN_10029e40(&local_50);
  if (fVar9 == (float10)0.0) {
    local_88 = 0.0;
  }
  else {
    fVar10 = fVar9 - (float10)*(float *)(*(int *)(DAT_100e52fc + 0x4f4f0) + 0x1c) *
                     (float10)*(float *)(DAT_100e52fc + 0xc4) *
                     (float10)*(float *)(DAT_100e52fc + 0x10) * fVar9;
    local_88 = (float)fVar10;
    if (fVar10 < (float10)0.0) {
      local_88 = 0.0;
    }
    FUN_100583e0((float *)(DAT_100e52fc + 0x5c),(float)((float10)local_88 / fVar9),
                 (float *)(DAT_100e52fc + 0x5c));
  }
  if (0.1 <= fVar2) {
    local_88 = fVar2 - local_88;
    if (0.0 < local_88) {
      FUN_10029e40(local_80);
      fVar2 = *(float *)(*(int *)(DAT_100e52fc + 0x4f4f0) + 0x10) * *(float *)(DAT_100e52fc + 0xc4)
              * *(float *)(DAT_100e52fc + 0x10) * fVar2;
      if (local_88 < fVar2) {
        fVar2 = local_88;
      }
      iVar7 = 0x5c;
      do {
        iVar4 = iVar7 + 4;
        *(float *)(iVar7 + DAT_100e52fc) =
             fVar2 * *(float *)((int)afStackY_dc + iVar7) + *(float *)(iVar7 + DAT_100e52fc);
        iVar7 = iVar4;
      } while (iVar4 < 0x68);
    }
    uStackY_a4 = 0x1002bdc8;
    FUN_10058410((float *)(DAT_100e52fc + 0x38),*(float *)(DAT_100e52fc + 0x10),
                 (float *)(DAT_100e52fc + 0x5c),local_80 + 3);
    local_68 = local_80[3];
    local_64 = local_70;
    uStackY_a4 = 0xffffffff;
    pfStackY_ac = local_80 + 3;
    uStackY_a8 = 0;
    pfStackY_b0 = &local_68;
    piStackY_b4 = local_44;
    local_60 = local_6c + *(float *)(*(int *)(DAT_100e52fc + 0x4f4f0) + 0x30) + 1.0;
    uStackY_b8 = 0x1002be15;
    piVar5 = (int *)(**(code **)(DAT_100e52fc + 0x4f580))();
    piVar8 = local_44;
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar8 = piVar8 + 1;
    }
    if ((local_44[1] == 0) && (local_44[0] == 0)) {
      *(undefined4 *)(DAT_100e52fc + 0x38) = uStack_30;
      *(undefined4 *)(DAT_100e52fc + 0x3c) = uStack_2c;
      *(undefined4 *)(DAT_100e52fc + 0x40) = uStack_28;
      return;
    }
    FUN_1002b310();
  }
  return;
}

/* 1002be80  FUN_1002be80  (318 bytes)
 * undefined FUN_1002be80(void)
 * called by: FUN_1002e330
 */
void FUN_1002be80(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float local_20;
  float local_18 [4];
  undefined4 local_8;
  undefined4 local_4;
  
  fVar3 = *(float *)(DAT_100e52fc + 0x45468);
  fVar4 = *(float *)(DAT_100e52fc + 0x4546c);
  *(undefined4 *)(DAT_100e52fc + 0x1c) = 0;
  *(undefined4 *)(DAT_100e52fc + 0x28) = 0;
  FUN_10029e40((float *)(DAT_100e52fc + 0x14));
  FUN_10029e40((float *)(DAT_100e52fc + 0x20));
  pfVar5 = (float *)(DAT_100e52fc + 0x14);
  iVar7 = 2;
  pfVar6 = local_18;
  do {
    pfVar1 = pfVar5 + 3;
    fVar2 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    iVar7 = iVar7 + -1;
    *pfVar6 = fVar3 * fVar2 + fVar4 * *pfVar1;
    pfVar6 = pfVar6 + 1;
  } while (iVar7 != 0);
  local_18[2] = 0.0;
  local_18[3] = local_18[0];
  local_8 = local_18[1];
  local_4 = 0;
  fVar8 = (float10)FUN_10029e40(local_18 + 3);
  local_20 = (float)fVar8;
  if (*(float *)(DAT_100e52fc + 500) < local_20) {
    FUN_100583e0(local_18,*(float *)(DAT_100e52fc + 500) / local_20,local_18);
    local_20 = *(float *)(DAT_100e52fc + 500);
  }
  FUN_1002bab0(local_18 + 3,local_20,*(float *)(*(int *)(DAT_100e52fc + 0x4f4f0) + 0x14));
  *(float *)(DAT_100e52fc + 0x5c) =
       *(float *)(DAT_100e52fc + 0x74) + *(float *)(DAT_100e52fc + 0x5c);
  *(float *)(DAT_100e52fc + 0x60) =
       *(float *)(DAT_100e52fc + 0x78) + *(float *)(DAT_100e52fc + 0x60);
  *(float *)(DAT_100e52fc + 100) = *(float *)(DAT_100e52fc + 0x7c) + *(float *)(DAT_100e52fc + 100);
  FUN_1002b310();
  return;
}

/* 1002bfc0  FUN_1002bfc0  (19 bytes)
 * bool FUN_1002bfc0(void)
 * called by: FUN_1002e330
 */
bool FUN_1002bfc0(void)

{
  return 1 < *(int *)(DAT_100e52fc + 0xe4);
}

/* 1002bfe0  FUN_1002bfe0  (445 bytes)
 * bool FUN_1002bfe0(void)
 * called by: FUN_1002c1a0, FUN_1002d7e0, FUN_1002e330
 */
bool FUN_1002bfe0(void)

{
  int iVar1;
  int local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = (*(float *)(DAT_100e52fc + (*(int *)(DAT_100e52fc + 0xbc) * 3 + 0x13d49) * 4) +
            *(float *)(DAT_100e52fc + (*(int *)(DAT_100e52fc + 0xbc) * 3 + 0x13d3d) * 4)) * 0.5 +
            *(float *)(DAT_100e52fc + 0x38);
  local_8 = (*(float *)(DAT_100e52fc + 0x4f528 + *(int *)(DAT_100e52fc + 0xbc) * 0xc) +
            *(float *)(DAT_100e52fc + 0x4f4f8 + *(int *)(DAT_100e52fc + 0xbc) * 0xc)) * 0.5 +
            *(float *)(DAT_100e52fc + 0x3c);
  local_4 = *(float *)(DAT_100e52fc + 0x4f4fc + *(int *)(DAT_100e52fc + 0xbc) * 0xc) +
            *(float *)(DAT_100e52fc + 0x40) + 1.0;
  *(undefined4 *)(DAT_100e52fc + 0xe4) = 0;
  *(undefined4 *)(DAT_100e52fc + 0xe8) = 0xffffffff;
  iVar1 = (**(code **)(DAT_100e52fc + 0x4f574))(&local_c,&local_10);
  if ((iVar1 < -2) && (-0xf < iVar1)) {
    *(int *)(DAT_100e52fc + 0xe8) = iVar1;
    *(undefined4 *)(DAT_100e52fc + 0xe4) = 1;
    local_4 = (*(float *)(DAT_100e52fc + 0x4f52c + *(int *)(DAT_100e52fc + 0xbc) * 0xc) +
              *(float *)(DAT_100e52fc + 0x4f4fc + *(int *)(DAT_100e52fc + 0xbc) * 0xc)) * 0.5 +
              *(float *)(DAT_100e52fc + 0x40);
    iVar1 = (**(code **)(DAT_100e52fc + 0x4f574))(&local_c,0);
    if ((iVar1 < -2) && (-0xf < iVar1)) {
      *(undefined4 *)(DAT_100e52fc + 0xe4) = 2;
      local_4 = *(float *)(DAT_100e52fc + 0x88) + *(float *)(DAT_100e52fc + 0x40);
      iVar1 = (**(code **)(DAT_100e52fc + 0x4f574))(&local_c,0);
      if ((iVar1 < -2) && (-0xf < iVar1)) {
        *(undefined4 *)(DAT_100e52fc + 0xe4) = 3;
      }
    }
    if ((local_10 < -8) && (-0xf < local_10)) {
      FUN_10058410((float *)(DAT_100e52fc + 0x74),(float)*(int *)(DAT_100e52fc + 0xe4) * 50.0,
                   (float *)(&DAT_100947f0 + (local_10 * 3 + 0x1b) * -4),
                   (float *)(DAT_100e52fc + 0x74));
    }
  }
  return 1 < *(int *)(DAT_100e52fc + 0xe4);
}

/* 1002c1a0  FUN_1002c1a0  (294 bytes)
 * undefined FUN_1002c1a0(void)
 * called by: FUN_1002d050, FUN_1002e330, FUN_10052fd0, FUN_10053200, FUN_100533b0, FUN_10053d70
 */
void FUN_1002c1a0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int aiStack_a0 [12];
  undefined4 uStack_70;
  int *piStack_6c;
  int iStack_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  int local_44 [5];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_1c;
  int iStack_14;
  
  iStack_5c = 0x1002c1aa;
  FUN_1002bfe0();
  local_50 = *(undefined4 *)(DAT_100e52fc + 0x38);
  iStack_68 = DAT_100e52fc + 0x38;
  local_4c = *(undefined4 *)(DAT_100e52fc + 0x3c);
  local_48 = *(float *)(DAT_100e52fc + 0x40) - 2.0;
  if (180.0 < *(float *)(DAT_100e52fc + 100)) {
    *(undefined4 *)(DAT_100e52fc + 0xe0) = 0xffffffff;
    return;
  }
  iStack_5c = 0xffffffff;
  puStack_64 = &local_50;
  uStack_60 = 0;
  piStack_6c = local_44;
  uStack_70 = 0x1002c203;
  piVar1 = (int *)(**(code **)(DAT_100e52fc + 0x4f580))();
  piVar3 = local_44;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  if (0.7 <= fStack_1c) {
    *(int *)(DAT_100e52fc + 0xe0) = iStack_14;
  }
  else {
    *(undefined4 *)(DAT_100e52fc + 0xe0) = 0xffffffff;
  }
  if (*(int *)(DAT_100e52fc + 0xe0) != -1) {
    *(undefined4 *)(DAT_100e52fc + 0xcc) = 0;
    if (((*(int *)(DAT_100e52fc + 0xe4) < 2) && (local_44[1] == 0)) && (local_44[0] == 0)) {
      *(undefined4 *)(DAT_100e52fc + 0x38) = uStack_30;
      *(undefined4 *)(DAT_100e52fc + 0x3c) = uStack_2c;
      *(undefined4 *)(DAT_100e52fc + 0x40) = uStack_28;
    }
  }
  if (0 < iStack_14) {
    iStack_5c = DAT_100e52fc + 0x5c;
    piVar1 = local_44;
    piVar3 = aiStack_a0;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    FUN_1002aff0();
  }
  return;
}

/* 1002c2d0  FUN_1002c2d0  (77 bytes)
 * undefined FUN_1002c2d0(int param_1, int param_2, undefined4 * param_3)
 * called by: FUN_1002c340
 */
void __cdecl FUN_1002c2d0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 + param_1 * 2;
  iVar2 = *(int *)(&DAT_100e0dec + iVar1 * 4);
  *(int *)(&DAT_100e0dec + iVar1 * 4) = iVar2 + 1;
  iVar2 = iVar2 % 0x36;
  *param_3 = (&DAT_100e0a64)[iVar2 * 3];
  param_3[1] = (&DAT_100e0a68)[iVar2 * 3];
  param_3[2] = (&DAT_100e0a6c)[iVar2 * 3];
  return;
}

/* 1002c320  FUN_1002c320  (23 bytes)
 * undefined FUN_1002c320(int param_1, int param_2)
 * called by: FUN_1002c340
 */
void __cdecl FUN_1002c320(int param_1,int param_2)

{
  *(undefined4 *)(&DAT_100e0dec + (param_2 + param_1 * 2) * 4) = 0;
  return;
}

/* 1002c340  FUN_1002c340  (887 bytes)
 * undefined4 FUN_1002c340(void)
 * called by: FUN_1002e330
 */
undefined4 FUN_1002c340(void)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 local_44 [68];
  
  iVar4 = (*(code *)DAT_100e52fc[0x13d57])(DAT_100e52fc + 0xe,local_44);
  if (iVar4 == -1) {
    FUN_1002c320(*DAT_100e52fc,DAT_100e52fc[1]);
    return 0;
  }
  fStack_5c = (float)DAT_100e52fc[0xe];
  fStack_58 = (float)DAT_100e52fc[0xf];
  fStack_54 = (float)DAT_100e52fc[0x10];
  if ((DAT_100e52fc[1] == 0) && ((iVar4 == 0 || (DAT_100e52fc[iVar4 * 0x38 + 0xa0] != 0)))) {
    iVar6 = 0;
    FUN_1002c320(*DAT_100e52fc,0);
    FUN_1002c2d0(*DAT_100e52fc,DAT_100e52fc[1],&fStack_50);
    fStack_68 = fStack_50 + fStack_5c;
    fStack_64 = fStack_4c + fStack_58;
    fStack_60 = fStack_48 + fStack_54;
    iVar5 = (*(code *)DAT_100e52fc[0x13d57])(&fStack_68,local_44);
    while( true ) {
      if (iVar5 == -1) {
        FUN_1002c320(*DAT_100e52fc,DAT_100e52fc[1]);
        DAT_100e52fc[0xe] = (int)fStack_68;
        DAT_100e52fc[0xf] = (int)fStack_64;
        DAT_100e52fc[0x10] = (int)fStack_60;
        return 0;
      }
      iVar6 = iVar6 + 1;
      if (0x35 < iVar6) break;
      FUN_1002c2d0(*DAT_100e52fc,DAT_100e52fc[1],&fStack_50);
      fStack_68 = fStack_50 + fStack_5c;
      fStack_64 = fStack_4c + fStack_58;
      fStack_60 = fStack_48 + fStack_54;
      iVar5 = (*(code *)DAT_100e52fc[0x13d57])(&fStack_68,local_44);
    }
  }
  iVar6 = DAT_100e52fc[1];
  fVar7 = (float10)(*(code *)DAT_100e52fc[0x13d5b])();
  piVar3 = DAT_100e52fc;
  iVar6 = (uint)(iVar6 == 0) + *DAT_100e52fc * 2;
  if (fVar7 - (float10)0.05 <= (float10)*(float *)(&DAT_100e0cec + iVar6 * 4)) {
    return 1;
  }
  *(float *)(&DAT_100e0cec + iVar6 * 4) = (float)fVar7;
  (*(code *)piVar3[0x13d5c])(iVar4,local_44);
  iVar4 = FUN_1002c2d0(*DAT_100e52fc,DAT_100e52fc[1],&fStack_50);
  fStack_68 = fStack_50 + fStack_5c;
  fStack_64 = fStack_4c + fStack_58;
  fStack_60 = fStack_48 + fStack_54;
  iVar6 = (*(code *)DAT_100e52fc[0x13d57])(&fStack_68,0);
  if (iVar6 == -1) {
    FUN_1002c320(*DAT_100e52fc,DAT_100e52fc[1]);
    if (0x1a < iVar4) {
LAB_1002c58d:
      DAT_100e52fc[0xe] = (int)fStack_68;
      DAT_100e52fc[0xf] = (int)fStack_64;
      DAT_100e52fc[0x10] = (int)fStack_60;
    }
    return 0;
  }
  if (((*(byte *)((int)DAT_100e52fc + 0x45476) & 7) != 0) &&
     (DAT_100e52fc[iVar6 * 0x38 + 0x9c] != 0)) {
    fStack_74 = 0.0;
    do {
      fVar1 = fStack_74 + fStack_54;
      fStack_78 = -8.0;
      do {
        fVar2 = fStack_78 + fStack_5c;
        fStack_7c = -8.0;
        do {
          fStack_64 = fStack_7c + fStack_58;
          fStack_68 = fVar2;
          fStack_60 = fVar1;
          iVar4 = (*(code *)DAT_100e52fc[0x13d57])(&fStack_68,0);
          if (iVar4 == -1) goto LAB_1002c58d;
          fStack_7c = fStack_7c + 8.0;
        } while (fStack_7c <= 8.0);
        fStack_78 = fStack_78 + 8.0;
      } while (fStack_78 <= 8.0);
      fStack_74 = fStack_74 + 18.0;
    } while (fStack_74 <= 72.0);
  }
  return 1;
}

/* 1002c6c0  FUN_1002c6c0  (200 bytes)
 * undefined FUN_1002c6c0(float * param_1, int param_2, float * param_3, float * param_4)
 * called by: FUN_1002c790
 */
void __cdecl FUN_1002c6c0(float *param_1,int param_2,float *param_3,float *param_4)

{
  int iVar1;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];
  
  iVar1 = param_2 * 0xe0 + 0x250 + DAT_100e52fc;
  FUN_10029bb0(param_1,local_c,(float *)0x0,(float *)0x0);
  local_18 = *(float *)(iVar1 + 0x24);
  local_14 = *(float *)(iVar1 + 0x28);
  local_10 = *(float *)(iVar1 + 0x2c) + 35.0;
  FUN_10058410(param_3,90.0,local_c,&local_24);
  local_24 = local_18 - local_24;
  local_20 = local_14 - local_20;
  local_1c = local_10 - local_1c;
  iVar1 = (**(code **)(DAT_100e52fc + 0x4f584))(&local_18,&local_24,0,2,param_2);
  FUN_10058410((float *)(iVar1 + 0x14),4.0,(float *)(iVar1 + 0x20),param_4);
  return;
}

/* 1002c790  FUN_1002c790  (2035 bytes)
 * undefined FUN_1002c790(void)
 * called by: FUN_1002e330
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002c790(void)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float10 fVar13;
  float afStackY_e0 [5];
  undefined4 uStackY_cc;
  float *pfStackY_c8;
  int iStackY_c4;
  undefined4 uStackY_c0;
  undefined4 uStackY_bc;
  undefined4 uStackY_b8;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84 [3];
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c [4];
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50 [3];
  undefined4 auStack_44 [4];
  float fStack_34;
  
  iVar7 = 0;
  if (*(int *)(DAT_100e52fc + 0x4f5b0) != 0) {
    DAT_101914ec = 1;
  }
  if ((*(int *)(DAT_100e52fc + 0x1fc) == 3) || (*(int *)(DAT_100e52fc + 0x200) == 0)) {
    if (DAT_10192154 != 0) {
      *(undefined4 *)(DAT_100e52fc + 0x38) = DAT_10191d40;
      *(undefined4 *)(DAT_100e52fc + 0x3c) = DAT_10191d44;
      *(undefined4 *)(DAT_100e52fc + 0x40) = DAT_10191d48;
      *(undefined4 *)(DAT_100e52fc + 0x44) = _DAT_10191d2c;
      *(undefined4 *)(DAT_100e52fc + 0x48) = DAT_10191d30;
      *(undefined4 *)(DAT_100e52fc + 0x4c) = DAT_10191d34;
      *(float *)(DAT_100e52fc + 0x5c) = DAT_100e0a58;
      *(undefined4 *)(DAT_100e52fc + 0x60) = DAT_100e0a5c;
      *(undefined4 *)(DAT_100e52fc + 100) = DAT_100e0a60;
      DAT_10192154 = 0;
      return;
    }
    fVar12 = FUN_10058390((float *)(DAT_100e52fc + 0x5c));
    if ((float10)1.0 <= fVar12) {
      iVar7 = *(int *)(DAT_100e52fc + 0x4f4f0);
      fVar13 = fVar12;
      if (fVar12 < (float10)*(float *)(iVar7 + 4)) {
        fVar13 = (float10)*(float *)(iVar7 + 4);
      }
      fVar13 = fVar12 - fVar13 * (float10)*(float *)(DAT_100e52fc + 0x10) *
                        (float10)*(float *)(iVar7 + 0x1c) * (float10)1.5;
      if (fVar13 < (float10)0.0) {
        fVar13 = (float10)0.0;
      }
      FUN_100583e0((float *)(DAT_100e52fc + 0x5c),(float)(fVar13 / fVar12),
                   (float *)(DAT_100e52fc + 0x5c));
    }
    else {
      *(float *)(DAT_100e52fc + 0x5c) = DAT_100e0a58;
      *(undefined4 *)(DAT_100e52fc + 0x60) = DAT_100e0a5c;
      *(undefined4 *)(DAT_100e52fc + 100) = DAT_100e0a60;
    }
    local_6c[3] = *(float *)(DAT_100e52fc + 0x45468);
    local_88 = *(float *)(DAT_100e52fc + 0x4546c);
    FUN_10029e40((float *)(DAT_100e52fc + 0x14));
    FUN_10029e40((float *)(DAT_100e52fc + 0x20));
    pfVar5 = (float *)(DAT_100e52fc + 0x14);
    iVar7 = 3;
    pfVar8 = local_6c;
    do {
      pfVar1 = pfVar5 + 3;
      fVar2 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      iVar7 = iVar7 + -1;
      *pfVar8 = local_6c[3] * fVar2 + local_88 * *pfVar1;
      pfVar8 = pfVar8 + 1;
    } while (iVar7 != 0);
    local_84[2] = local_6c[2] + *(float *)(DAT_100e52fc + 0x45470);
    local_84[0] = local_6c[0];
    local_84[1] = local_6c[1];
    local_6c[2] = local_84[2];
    fVar12 = (float10)FUN_10029e40(local_84);
    iVar7 = *(int *)(DAT_100e52fc + 0x4f4f0);
    if ((float10)*(float *)(iVar7 + 0xc) < fVar12) {
      FUN_100583e0(local_6c,(float)((float10)*(float *)(iVar7 + 0xc) / fVar12),local_6c);
      iVar7 = *(int *)(DAT_100e52fc + 0x4f4f0);
      fVar12 = (float10)*(float *)(iVar7 + 0xc);
    }
    fVar13 = fVar12 - ((float10)local_84[0] * (float10)*(float *)(DAT_100e52fc + 0x5c) +
                      (float10)local_84[1] * (float10)*(float *)(DAT_100e52fc + 0x60) +
                      (float10)local_84[2] * (float10)*(float *)(DAT_100e52fc + 100));
    local_88 = (float)fVar13;
    if ((float10)0.0 < fVar13) {
      fVar12 = (float10)*(float *)(iVar7 + 0x10) * (float10)*(float *)(DAT_100e52fc + 0x10) * fVar12
      ;
      if ((float10)local_88 < fVar12) {
        fVar12 = (float10)local_88;
      }
      iVar7 = 0x5c;
      do {
        iVar6 = iVar7 + 4;
        *(float *)(iVar7 + DAT_100e52fc) =
             (float)(fVar12 * (float10)*(float *)((int)afStackY_e0 + iVar7) +
                    (float10)*(float *)(iVar7 + DAT_100e52fc));
        iVar7 = iVar6;
      } while (iVar6 < 0x68);
      uStackY_b8 = 0x1002cf68;
      FUN_10058410((float *)(DAT_100e52fc + 0x38),*(float *)(DAT_100e52fc + 0x10),
                   (float *)(DAT_100e52fc + 0x5c),(float *)(DAT_100e52fc + 0x38));
      return;
    }
  }
  else {
    iVar6 = *(int *)(DAT_100e52fc + 0x24c);
    iVar9 = 0;
    if (0 < iVar6) {
      piVar10 = (int *)(DAT_100e52fc + 0x2a0);
      do {
        if (*piVar10 == *(int *)(DAT_100e52fc + 0x200)) break;
        iVar9 = iVar9 + 1;
        piVar10 = piVar10 + 0x38;
      } while (iVar9 < iVar6);
    }
    if (iVar9 == iVar6) {
      if (*(int *)(DAT_100e52fc + 0x4f5b0) != 0) {
        *(undefined4 *)(DAT_100e52fc + 0x38) = DAT_101913e4;
        *(undefined4 *)(DAT_100e52fc + 0x3c) = DAT_101913e8;
        *(undefined4 *)(DAT_100e52fc + 0x40) = DAT_101913ec;
        *(float *)(DAT_100e52fc + 0x44) = DAT_10190b6c;
        *(float *)(DAT_100e52fc + 0x48) = DAT_10190b70;
        *(float *)(DAT_100e52fc + 0x4c) = DAT_10190b74;
        *(float *)(DAT_100e52fc + 0x5c) = DAT_100e0a58;
        *(undefined4 *)(DAT_100e52fc + 0x60) = DAT_100e0a5c;
        *(undefined4 *)(DAT_100e52fc + 100) = DAT_100e0a60;
        DAT_1019149c = 1;
        DAT_101914f0 = 1;
        return;
      }
    }
    else {
      local_5c = DAT_100e0a58;
      local_58 = DAT_100e0a5c;
      local_54 = DAT_100e0a60;
      iVar6 = *(int *)(DAT_100e52fc + 0x1fc);
      if ((iVar6 == 4) && (*(int *)(DAT_100e52fc + 0x204) != 0)) {
        iVar3 = *(int *)(DAT_100e52fc + 0x24c);
        iVar7 = 0;
        if (0 < iVar3) {
          piVar10 = (int *)(DAT_100e52fc + 0x2a0);
          do {
            if (*piVar10 == *(int *)(DAT_100e52fc + 0x204)) break;
            iVar7 = iVar7 + 1;
            piVar10 = piVar10 + 0x38;
          } while (iVar7 < iVar3);
        }
        if (iVar7 == iVar3) {
          iVar7 = -1;
        }
      }
      if (iVar6 == 1) {
        iVar7 = iVar9 * 0xe0 + DAT_100e52fc;
        local_90 = *(float *)(iVar7 + 0x2a8);
        local_94 = 10.0 - *(float *)(iVar7 + 0x2a4);
        local_8c = *(float *)(iVar7 + 0x2ac);
        if (*(int *)(DAT_100e52fc + 0x4f5b0) != 0) {
          DAT_101914ec = DAT_101914ec | 4;
        }
      }
      else if (iVar6 == 5) {
        iVar7 = iVar9 * 0xe0 + DAT_100e52fc;
        local_94 = *(float *)(iVar9 * 0xe0 + 0x2a4 + DAT_100e52fc);
        local_90 = *(float *)(iVar7 + 0x2a8);
        local_8c = *(float *)(iVar7 + 0x2ac);
        if (*(int *)(DAT_100e52fc + 0x4f5b0) != 0) {
          DAT_101914ec = DAT_101914ec | 0xe;
        }
      }
      else if (iVar6 == 4) {
        if (iVar7 < 1) {
          if (iVar7 == -1) {
            local_94 = DAT_10190b6c;
            local_90 = DAT_10190b70;
            local_8c = DAT_10190b74;
          }
          else {
            iVar7 = iVar9 * 0xe0 + DAT_100e52fc;
            local_94 = *(float *)(iVar7 + 0x2a4);
            local_8c = *(float *)(iVar7 + 0x2ac);
            local_90 = *(float *)(iVar7 + 0x2a8) * -0.5;
          }
        }
        else {
          iVar7 = iVar7 * 0xe0;
          iVar6 = iVar9 * 0xe0 + DAT_100e52fc;
          local_94 = *(float *)(iVar7 + 0x274 + DAT_100e52fc) - *(float *)(iVar6 + 0x274);
          local_90 = *(float *)(iVar7 + 0x278 + DAT_100e52fc) - *(float *)(iVar6 + 0x278);
          local_8c = *(float *)(iVar7 + 0x27c + DAT_100e52fc) - *(float *)(iVar6 + 0x27c);
          FUN_10029e90(&local_94,&local_94);
          if ((DAT_10192158 & 0x20) == 0) {
            local_94 = -local_94 + 12.5;
          }
          else {
            local_94 = -local_94 - 12.5;
          }
          if ((DAT_10192158 & 0x10) == 0) {
            local_90 = local_90 - 22.5;
          }
          else {
            local_90 = local_90 + 22.5;
          }
          uStackY_b8 = 0x1002ca63;
          FUN_1002c6c0(&local_94,iVar9,&local_5c,local_50);
          uStackY_b8 = 0xffffffff;
          uStackY_bc = 2;
          uStackY_c0 = 1;
          iStackY_c4 = iVar7 + 0x274 + DAT_100e52fc;
          pfStackY_c8 = local_50;
          uStackY_cc = 0x1002ca81;
          puVar4 = (undefined4 *)(**(code **)(DAT_100e52fc + 0x4f584))();
          puVar11 = auStack_44;
          for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar11 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar11 = puVar11 + 1;
          }
          if (fStack_34 != 1.0) {
            if ((DAT_10192158 & 0x10) == 0) {
              local_90 = local_90 + 45.0;
            }
            else {
              local_90 = local_90 - 45.0;
            }
          }
        }
        if (*(int *)(DAT_100e52fc + 0x4f5b0) != 0) {
          DAT_101914ec = DAT_101914ec | 6;
          uStackY_b8 = 0x1002caf7;
          FUN_10029cf0((float *)&DAT_100e0eec,&local_94,&local_94,0.1);
          _DAT_100e0ef4 = local_8c;
          _DAT_100e0eec = local_94;
          _DAT_100e0ef0 = local_90;
        }
      }
      else {
        local_94 = *(float *)(DAT_100e52fc + 0x44);
        local_90 = *(float *)(DAT_100e52fc + 0x48);
        local_8c = *(float *)(DAT_100e52fc + 0x4c);
      }
      if (*(int *)(DAT_100e52fc + 0x1fc) == 5) {
        iVar7 = iVar9 * 0xe0 + DAT_100e52fc;
        local_78 = *(float *)(iVar9 * 0xe0 + 0x274 + DAT_100e52fc);
        local_74 = *(undefined4 *)(iVar7 + 0x278);
        local_70 = *(undefined4 *)(iVar7 + 0x27c);
      }
      else {
        uStackY_b8 = 0x1002cbf3;
        FUN_1002c6c0(&local_94,iVar9,&local_5c,&local_78);
      }
      *(float *)(DAT_100e52fc + 0x38) = local_78;
      *(undefined4 *)(DAT_100e52fc + 0x3c) = local_74;
      *(undefined4 *)(DAT_100e52fc + 0x40) = local_70;
      *(float *)(DAT_100e52fc + 0x44) = local_94;
      *(float *)(DAT_100e52fc + 0x48) = local_90;
      *(float *)(DAT_100e52fc + 0x4c) = local_8c;
      *(float *)(DAT_100e52fc + 0x5c) = DAT_100e0a58;
      *(undefined4 *)(DAT_100e52fc + 0x60) = DAT_100e0a5c;
      *(undefined4 *)(DAT_100e52fc + 100) = DAT_100e0a60;
      if (*(int *)(DAT_100e52fc + 0x4f5b0) != 0) {
        DAT_10190b6c = (float)*(undefined4 *)(DAT_100e52fc + 0x44);
        DAT_10190b70 = (float)*(undefined4 *)(DAT_100e52fc + 0x48);
        DAT_10190b74 = (float)*(undefined4 *)(DAT_100e52fc + 0x4c);
        DAT_1019149c = 1;
        DAT_101913e4 = *(undefined4 *)(DAT_100e52fc + 0x38);
        DAT_101913e8 = *(undefined4 *)(DAT_100e52fc + 0x3c);
        DAT_101913ec = *(undefined4 *)(DAT_100e52fc + 0x40);
        DAT_101914f0 = 1;
        return;
      }
    }
  }
  return;
}

/* 1002cf90  FUN_1002cf90  (31 bytes)
 * float10 FUN_1002cf90(float param_1, float param_2)
 * called by: FUN_10053d70
 */
float10 __cdecl FUN_1002cf90(float param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1 * (float10)param_2;
  fVar2 = fVar1 * fVar1 * fVar1;
  return fVar1 * fVar1 * (float10)3.0 - (fVar2 + fVar2);
}

/* 1002cfb0  FUN_1002cfb0  (156 bytes)
 * undefined FUN_1002cfb0(int param_1)
 * called by: FUN_10052fd0, FUN_10053200, FUN_100533b0, FUN_10053d70
 */
void __cdecl FUN_1002cfb0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (**(code **)(DAT_100e52fc + 0x4f55c))(DAT_100e52fc + 0x38,0);
  if (iVar4 != -1) {
    iVar4 = 0;
    uVar1 = *(undefined4 *)(DAT_100e52fc + 0x38);
    uVar2 = *(undefined4 *)(DAT_100e52fc + 0x3c);
    uVar3 = *(undefined4 *)(DAT_100e52fc + 0x40);
    do {
      *(float *)(DAT_100e52fc + 0x40) = (float)param_1 + *(float *)(DAT_100e52fc + 0x40);
      iVar5 = (**(code **)(DAT_100e52fc + 0x4f55c))(DAT_100e52fc + 0x38,0);
      if (iVar5 == -1) {
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x24);
    *(undefined4 *)(DAT_100e52fc + 0x38) = uVar1;
    *(undefined4 *)(DAT_100e52fc + 0x3c) = uVar2;
    *(undefined4 *)(DAT_100e52fc + 0x40) = uVar3;
  }
  return;
}

/* 1002d050  FUN_1002d050  (348 bytes)
 * undefined FUN_1002d050(void)
 * called by: FUN_10053d70
 */
void FUN_1002d050(void)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float local_94 [4];
  int iStack_84;
  undefined1 auStack_44 [68];
  
  pfVar4 = (float *)&stack0xffffff68;
  local_94[0] = *(float *)(DAT_100e52fc + 0x38);
  local_94[1] = (float)*(undefined4 *)(DAT_100e52fc + 0x3c);
  local_94[2] = (float)*(undefined4 *)(DAT_100e52fc + 0x40);
  if (*(int *)(DAT_100e52fc + 0xe0) != -1) {
    pfVar3 = (float *)(DAT_100e52fc + 0x4f4f4);
    iVar5 = 3;
    do {
      pfVar4 = pfVar4 + 1;
      pfVar1 = pfVar3 + 3;
      fVar2 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      iVar5 = iVar5 + -1;
      *pfVar4 = (*pfVar1 - fVar2) + *pfVar4;
    } while (iVar5 != 0);
  }
  pfVar4 = (float *)(**(code **)(DAT_100e52fc + 0x4f580))
                              (local_94 + 3,local_94,local_94,0,0xffffffff);
  pfVar3 = local_94 + 3;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar3 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar3 = pfVar3 + 1;
  }
  if (iStack_84 == 0) {
    *(undefined4 *)(DAT_100e52fc + 0xbc) = 0;
    pfVar4 = (float *)(**(code **)(DAT_100e52fc + 0x4f580))
                                (auStack_44,local_94,local_94,0,0xffffffff);
    pfVar3 = local_94 + 3;
    for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar3 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar3 = pfVar3 + 1;
    }
    if (iStack_84 != 0) {
      *(undefined4 *)(DAT_100e52fc + 0xbc) = 1;
      return;
    }
    *(uint *)(DAT_100e52fc + 0xb8) = *(uint *)(DAT_100e52fc + 0xb8) & 0xffffbfff;
    *(undefined4 *)(DAT_100e52fc + 0x90) = 0;
    *(undefined4 *)(DAT_100e52fc + 0x88) = 0x41e00000;
    *(undefined4 *)(DAT_100e52fc + 0x8c) = 0;
    *(float *)(DAT_100e52fc + 0x38) = local_94[0];
    *(float *)(DAT_100e52fc + 0x3c) = local_94[1];
    *(float *)(DAT_100e52fc + 0x40) = local_94[2];
    FUN_1002c1a0();
  }
  return;
}

/* 1002d1b0  FUN_1002d1b0  (874 bytes)
 * undefined FUN_1002d1b0(int param_1)
 * called by: FUN_1002e330
 */
void __cdecl FUN_1002d1b0(int param_1)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float afStack_5c [3];
  undefined1 auStack_50 [16];
  float fStack_40;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float afStack_18 [3];
  float afStack_c [3];
  
  if (*(int *)(DAT_100e52fc + 0xdc) != 8) {
    (**(code **)(DAT_100e52fc + 0x4f594))(*(undefined4 *)(param_1 + 0x30),&local_74,afStack_98 + 3);
    fStack_b0 = afStack_98[3] + local_74;
    fStack_ac = fStack_88 + fStack_70;
    fStack_a8 = fStack_84 + fStack_6c;
    FUN_100583e0(&fStack_b0,0.5,&fStack_b0);
    *(undefined4 *)(DAT_100e52fc + 0xdc) = 5;
    uStack_a4 = *(undefined4 *)(DAT_100e52fc + 0x38);
    uStack_a0 = *(undefined4 *)(DAT_100e52fc + 0x3c);
    fStack_9c = (*(float *)(DAT_100e52fc + 0x4f4fc + *(int *)(DAT_100e52fc + 0xbc) * 0xc) - 1.0) +
                *(float *)(DAT_100e52fc + 0x40);
    iVar3 = (**(code **)(DAT_100e52fc + 0x4f574))(&uStack_a4,0);
    *(undefined4 *)(DAT_100e52fc + 0xc0) = 0;
    (**(code **)(DAT_100e52fc + 0x4f59c))(param_1,DAT_100e52fc + 0x38,&fStack_b0,auStack_50);
    if (fStack_40 != 1.0) {
      fStack_c0 = 0.0;
      fStack_c4 = 0.0;
      FUN_10029bb0((float *)(DAT_100e52fc + 0x44),afStack_c,afStack_18,(float *)0x0);
      uVar1 = *(ushort *)(DAT_100e52fc + 0x45476);
      if ((uVar1 & 0x10) != 0) {
        fStack_c0 = -200.0;
      }
      if ((uVar1 & 8) != 0) {
        fStack_c0 = fStack_c0 + 200.0;
      }
      if ((uVar1 & 0x200) != 0) {
        fStack_c4 = -200.0;
      }
      if ((uVar1 & 0x400) != 0) {
        fStack_c4 = fStack_c4 + 200.0;
      }
      if ((uVar1 & 2) != 0) {
        *(undefined4 *)(DAT_100e52fc + 0xdc) = 3;
        FUN_100583e0(&fStack_30,270.0,(float *)(DAT_100e52fc + 0x5c));
        return;
      }
      if ((fStack_c0 == 0.0) && (fStack_c4 == 0.0)) {
        *(undefined4 *)(DAT_100e52fc + 0x5c) = 0;
        *(undefined4 *)(DAT_100e52fc + 0x60) = 0;
        *(undefined4 *)(DAT_100e52fc + 100) = 0;
        return;
      }
      FUN_100583e0(afStack_c,fStack_c0,&fStack_bc);
      FUN_10058410(&fStack_bc,fStack_c4,afStack_18,&fStack_bc);
      afStack_98[0] = 0.0;
      afStack_98[1] = 0.0;
      afStack_98[2] = 1.0;
      FUN_10029e00(afStack_98,&fStack_30,afStack_5c);
      FUN_10029e40(afStack_5c);
      fVar2 = fStack_30 * fStack_bc + fStack_2c * fStack_b8 + fStack_28 * fStack_b4;
      FUN_100583e0(&fStack_30,fVar2,&fStack_80);
      fStack_68 = fStack_bc - fStack_80;
      fStack_64 = fStack_b8 - fStack_7c;
      fStack_60 = fStack_b4 - fStack_78;
      FUN_10029e00(&fStack_30,afStack_5c,afStack_98);
      FUN_10058410(&fStack_68,-fVar2,afStack_98,(float *)(DAT_100e52fc + 0x5c));
      if ((iVar3 == -2) && (0.0 < fVar2)) {
        FUN_10058410((float *)(DAT_100e52fc + 0x5c),200.0,&fStack_30,(float *)(DAT_100e52fc + 0x5c))
        ;
      }
    }
  }
  return;
}

/* 1002d520  FUN_1002d520  (197 bytes)
 * int FUN_1002d520(void)
 * called by: FUN_1002e330
 */
int FUN_1002d520(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar4 = 0;
  if (0 < *(int *)(DAT_100e52fc + 0x20f50)) {
    iVar5 = 0;
    iVar3 = DAT_100e52fc;
    do {
      iVar2 = *(int *)(iVar5 + 0x20f84 + iVar3);
      iVar1 = iVar5 + 0x20f54 + iVar3;
      if (((iVar2 != 0) &&
          (iVar2 = (**(code **)(iVar3 + 0x4f590))(iVar2), iVar3 = DAT_100e52fc, iVar2 == 0)) &&
         (*(int *)(iVar1 + 100) == -0x10)) {
        iVar3 = (**(code **)(DAT_100e52fc + 0x4f598))(iVar1,&fStack_c);
        fStack_c = *(float *)(DAT_100e52fc + 0x38) - fStack_c;
        fStack_8 = *(float *)(DAT_100e52fc + 0x3c) - fStack_8;
        fStack_4 = *(float *)(DAT_100e52fc + 0x40) - fStack_4;
        iVar2 = (**(code **)(DAT_100e52fc + 0x4f57c))(iVar3,*(undefined4 *)(iVar3 + 8),&fStack_c);
        iVar3 = DAT_100e52fc;
        if (iVar2 != -1) {
          return iVar1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0xe0;
    } while (iVar4 < *(int *)(iVar3 + 0x20f50));
  }
  return 0;
}

/* 1002d5f0  FUN_1002d5f0  (179 bytes)
 * undefined FUN_1002d5f0(void)
 * called by: FUN_1002e330
 */
void FUN_1002d5f0(void)

{
  if (10000.0 < *(float *)(DAT_100e52fc + 0xcc)) {
    *(undefined4 *)(DAT_100e52fc + 0xcc) = 0x461c4000;
  }
  if (*(float *)(DAT_100e52fc + 0xcc) != 0.0) {
    *(float *)(DAT_100e52fc + 0xcc) =
         *(float *)(DAT_100e52fc + 0xcc) - (float)*(byte *)(DAT_100e52fc + 0x4545a);
    if ((*(float *)(DAT_100e52fc + 0xcc) < 0.0) || (*(int *)(DAT_100e52fc + 0xe4) == 0)) {
      *(undefined4 *)(DAT_100e52fc + 0xcc) = 0;
      *(uint *)(DAT_100e52fc + 0xb8) = *(uint *)(DAT_100e52fc + 0xb8) & 0xfffff7ff;
    }
    *(undefined4 *)(DAT_100e52fc + 0x5c) = *(undefined4 *)(DAT_100e52fc + 0x68);
    *(undefined4 *)(DAT_100e52fc + 0x60) = *(undefined4 *)(DAT_100e52fc + 0x6c);
  }
  return;
}

/* 1002d6b0  FUN_1002d6b0  (95 bytes)
 * undefined FUN_1002d6b0(void)
 * called by: FUN_1002d7e0
 */
void FUN_1002d6b0(void)

{
  float fVar1;
  
  if (*(float *)(DAT_100e52fc + 0xc0) == 0.0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(DAT_100e52fc + 0xc0);
  }
  *(float *)(DAT_100e52fc + 100) =
       *(float *)(DAT_100e52fc + 100) -
       **(float **)(DAT_100e52fc + 0x4f4f0) * *(float *)(DAT_100e52fc + 0x10) * fVar1;
  *(float *)(DAT_100e52fc + 100) =
       *(float *)(DAT_100e52fc + 0x7c) * *(float *)(DAT_100e52fc + 0x10) +
       *(float *)(DAT_100e52fc + 100);
  *(undefined4 *)(DAT_100e52fc + 0x7c) = 0;
  FUN_1002b090();
  return;
}

/* 1002d710  FUN_1002d710  (203 bytes)
 * undefined FUN_1002d710(int * param_1, float * param_2)
 * called by: FUN_1002d7e0
 */
void __cdecl FUN_1002d710(int *param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int aiStack_a0 [12];
  undefined4 uStack_70;
  int *piStack_6c;
  int iStack_68;
  float *pfStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  float local_50;
  float local_4c;
  float local_48;
  int local_44 [4];
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_50 = *param_2 + *(float *)(DAT_100e52fc + 0x38);
  iStack_68 = DAT_100e52fc + 0x38;
  iStack_5c = 0xffffffff;
  uStack_60 = 0;
  local_4c = *(float *)(DAT_100e52fc + 0x3c) + param_2[1];
  local_48 = *(float *)(DAT_100e52fc + 0x40) + param_2[2];
  pfStack_64 = &local_50;
  piStack_6c = local_44;
  uStack_70 = 0x1002d753;
  piVar1 = (int *)(**(code **)(DAT_100e52fc + 0x4f580))();
  piVar3 = local_44;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  *(undefined4 *)(DAT_100e52fc + 0x38) = uStack_30;
  *(undefined4 *)(DAT_100e52fc + 0x3c) = uStack_2c;
  *(undefined4 *)(DAT_100e52fc + 0x40) = uStack_28;
  if ((fStack_34 < 1.0) && (local_44[0] == 0)) {
    iStack_5c = DAT_100e52fc + 0x5c;
    piVar1 = local_44;
    piVar3 = aiStack_a0;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    FUN_1002aff0();
  }
  piVar1 = local_44;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *piVar1;
    piVar1 = piVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

/* 1002d7e0  FUN_1002d7e0  (779 bytes)
 * undefined FUN_1002d7e0(void)
 * called by: FUN_1002e330
 */
void FUN_1002d7e0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float local_98;
  float local_94 [3];
  int local_88 [4];
  float local_78;
  float local_68 [2];
  float local_60;
  undefined4 local_58;
  int local_44 [17];
  
  FUN_1002bfe0();
  if (0.0 < *(float *)(DAT_100e52fc + 100)) {
    *(undefined4 *)(DAT_100e52fc + 0xe0) = 0xffffffff;
  }
  if (((*(int *)(DAT_100e52fc + 0xe0) == -1) ||
      (iVar1 = FUN_1002fa00(DAT_100e52fc + 0x74,(float *)&DAT_100e0a58), iVar1 == 0)) ||
     (iVar1 = FUN_1002fa00(DAT_100e52fc + 0x5c,(float *)&DAT_100e0a58), iVar1 == 0)) {
    FUN_1002b090();
    iVar1 = *(int *)(DAT_100e52fc + 0xdc);
    if (((iVar1 != 5) && (iVar1 != 0xb)) && (iVar1 != 9)) {
      FUN_1002d6b0();
    }
    *(float *)(DAT_100e52fc + 0x5c) =
         *(float *)(DAT_100e52fc + 0x74) + *(float *)(DAT_100e52fc + 0x5c);
    *(float *)(DAT_100e52fc + 0x60) =
         *(float *)(DAT_100e52fc + 0x78) + *(float *)(DAT_100e52fc + 0x60);
    *(float *)(DAT_100e52fc + 100) =
         *(float *)(DAT_100e52fc + 0x7c) + *(float *)(DAT_100e52fc + 100);
    FUN_1002b090();
    FUN_100583e0((float *)(DAT_100e52fc + 0x5c),*(float *)(DAT_100e52fc + 0x10),local_94);
    *(float *)(DAT_100e52fc + 0x5c) =
         *(float *)(DAT_100e52fc + 0x5c) - *(float *)(DAT_100e52fc + 0x74);
    *(float *)(DAT_100e52fc + 0x60) =
         *(float *)(DAT_100e52fc + 0x60) - *(float *)(DAT_100e52fc + 0x78);
    *(float *)(DAT_100e52fc + 100) =
         *(float *)(DAT_100e52fc + 100) - *(float *)(DAT_100e52fc + 0x7c);
    piVar2 = (int *)FUN_1002d710(local_44,local_94);
    piVar3 = local_88;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    FUN_1002b090();
    if (local_88[0] != 0) {
      *(undefined4 *)(DAT_100e52fc + 0xe0) = local_58;
      *(undefined4 *)(DAT_100e52fc + 0x5c) = DAT_100e0a58;
      *(undefined4 *)(DAT_100e52fc + 0x60) = DAT_100e0a5c;
      *(undefined4 *)(DAT_100e52fc + 100) = DAT_100e0a60;
      return;
    }
    if (local_78 != 1.0) {
      if (*(int *)(DAT_100e52fc + 0xdc) == 10) {
        local_98 = 2.0 - *(float *)(DAT_100e52fc + 0xc4);
      }
      else {
        local_98 = 2.0;
        if (*(int *)(DAT_100e52fc + 0xdc) != 0xb) {
          local_98 = 1.0;
        }
      }
      FUN_1002b190((float *)(DAT_100e52fc + 0x5c),local_68,(float *)(DAT_100e52fc + 0x5c),local_98);
      if (0.7 < local_60) {
        if (*(float *)(DAT_100e52fc + 100) <
            **(float **)(DAT_100e52fc + 0x4f4f0) * *(float *)(DAT_100e52fc + 0x10)) {
          *(undefined4 *)(DAT_100e52fc + 0xe0) = local_58;
          *(undefined4 *)(DAT_100e52fc + 100) = 0;
        }
        if ((*(float *)(DAT_100e52fc + 100) * *(float *)(DAT_100e52fc + 100) +
             *(float *)(DAT_100e52fc + 0x5c) * *(float *)(DAT_100e52fc + 0x5c) +
             *(float *)(DAT_100e52fc + 0x60) * *(float *)(DAT_100e52fc + 0x60) < 900.0) ||
           ((*(int *)(DAT_100e52fc + 0xdc) != 10 && (*(int *)(DAT_100e52fc + 0xdc) != 0xb)))) {
          *(undefined4 *)(DAT_100e52fc + 0xe0) = local_58;
          *(undefined4 *)(DAT_100e52fc + 0x5c) = DAT_100e0a58;
          *(undefined4 *)(DAT_100e52fc + 0x60) = DAT_100e0a5c;
          *(undefined4 *)(DAT_100e52fc + 100) = DAT_100e0a60;
        }
        else {
          FUN_100583e0((float *)(DAT_100e52fc + 0x5c),
                       (1.0 - local_78) * *(float *)(DAT_100e52fc + 0x10) * 0.9,local_94);
          piVar2 = (int *)FUN_1002d710(local_44,local_94);
          piVar3 = local_88;
          for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar3 = *piVar2;
            piVar2 = piVar2 + 1;
            piVar3 = piVar3 + 1;
          }
        }
        *(undefined4 *)(DAT_100e52fc + 0x5c) = *(undefined4 *)(DAT_100e52fc + 0x5c);
        *(undefined4 *)(DAT_100e52fc + 0x60) = *(undefined4 *)(DAT_100e52fc + 0x60);
        *(undefined4 *)(DAT_100e52fc + 100) = *(undefined4 *)(DAT_100e52fc + 100);
      }
    }
    FUN_1002bfe0();
  }
  return;
}

/* 1002daf0  FUN_1002daf0  (174 bytes)
 * undefined FUN_1002daf0(void)
 * called by: FUN_1002e330
 */
void FUN_1002daf0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float local_c [3];
  
  fVar3 = *(float *)(DAT_100e52fc + 0x45468);
  fVar4 = *(float *)(DAT_100e52fc + 0x4546c);
  FUN_10029e40((float *)(DAT_100e52fc + 0x14));
  FUN_10029e40((float *)(DAT_100e52fc + 0x20));
  pfVar5 = (float *)(DAT_100e52fc + 0x14);
  iVar7 = 3;
  pfVar6 = local_c;
  do {
    pfVar1 = pfVar5 + 3;
    fVar2 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    iVar7 = iVar7 + -1;
    *pfVar6 = fVar3 * fVar2 + fVar4 * *pfVar1;
    pfVar6 = pfVar6 + 1;
  } while (iVar7 != 0);
  local_c[2] = local_c[2] + *(float *)(DAT_100e52fc + 0x45470);
  FUN_10058410((float *)(DAT_100e52fc + 0x38),*(float *)(DAT_100e52fc + 0x10),local_c,
               (float *)(DAT_100e52fc + 0x38));
  *(undefined4 *)(DAT_100e52fc + 0x5c) = 0;
  *(undefined4 *)(DAT_100e52fc + 0x60) = 0;
  *(undefined4 *)(DAT_100e52fc + 100) = 0;
  return;
}

/* 1002dba0  FUN_1002dba0  (97 bytes)
 * undefined FUN_1002dba0(void)
 * called by: FUN_10053780
 */
void FUN_1002dba0(void)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = *(float *)(DAT_100e52fc + 500) * 1.7;
  if ((0.0 < fVar1) &&
     (fVar2 = FUN_10058390((float *)(DAT_100e52fc + 0x5c)), (float10)fVar1 < fVar2)) {
    FUN_100583e0((float *)(DAT_100e52fc + 0x5c),(float)(((float10)fVar1 / fVar2) * (float10)0.65),
                 (float *)(DAT_100e52fc + 0x5c));
    return;
  }
  return;
}

/* 1002dc10  FUN_1002dc10  (610 bytes)
 * undefined FUN_1002dc10(void)
 * called by: FUN_1002e330
 */
void FUN_1002dc10(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94 [3];
  undefined4 auStack_88 [4];
  float fStack_78;
  float afStack_68 [2];
  float fStack_60;
  undefined1 local_44 [68];
  
  if ((*(float *)(DAT_100e52fc + 0xcc) == 0.0) && (-180.0 <= *(float *)(DAT_100e52fc + 100))) {
    local_a4 = *(float *)(DAT_100e52fc + 0x5c);
    local_a0 = *(float *)(DAT_100e52fc + 0x60);
    local_9c = 0.0;
    fVar5 = (float10)FUN_10029e40(&local_a4);
    local_98 = (float)fVar5;
    local_b0 = *(float *)(DAT_100e52fc + 0x14);
    local_ac = *(float *)(DAT_100e52fc + 0x18);
    local_a8 = 0.0;
    FUN_10029e40(&local_b0);
    if ((local_98 == 0.0) ||
       (0.0 <= local_b0 * local_a4 + local_ac * local_a0 + local_a8 * local_9c)) {
      local_bc = *(float *)(DAT_100e52fc + 0x38);
      local_b8 = *(undefined4 *)(DAT_100e52fc + 0x3c);
      local_b4 = *(float *)(DAT_100e52fc + 0x40) + 8.0;
      FUN_10058410(&local_bc,24.0,&local_b0,local_94);
      iVar1 = *(int *)(DAT_100e52fc + 0xbc);
      *(undefined4 *)(DAT_100e52fc + 0xbc) = 2;
      puVar2 = (undefined4 *)
               (**(code **)(DAT_100e52fc + 0x4f580))(local_44,&local_bc,local_94,0,0xffffffff);
      puVar4 = auStack_88;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      if ((fStack_78 < 1.0) && (ABS(fStack_60) < 0.1)) {
        local_b4 = (*(float *)(DAT_100e52fc + 0x4f52c + iVar1 * 0xc) - 8.0) + local_b4;
        FUN_10058410(&local_bc,24.0,&local_b0,local_94);
        FUN_10058410((float *)&DAT_100e0a58,-50.0,afStack_68,(float *)(DAT_100e52fc + 0x68));
        puVar2 = (undefined4 *)
                 (**(code **)(DAT_100e52fc + 0x4f580))(local_44,&local_bc,local_94,0,0xffffffff);
        puVar4 = auStack_88;
        for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        if (fStack_78 == 1.0) {
          *(undefined4 *)(DAT_100e52fc + 0xcc) = 0x44fa0000;
          *(undefined4 *)(DAT_100e52fc + 100) = 0x43610000;
          *(uint *)(DAT_100e52fc + 200) = *(uint *)(DAT_100e52fc + 200) | 2;
          *(uint *)(DAT_100e52fc + 0xb8) = *(uint *)(DAT_100e52fc + 0xb8) | 0x800;
        }
      }
      *(int *)(DAT_100e52fc + 0xbc) = iVar1;
    }
  }
  return;
}

/* 1002de80  FUN_1002de80  (428 bytes)
 * undefined FUN_1002de80(void)
 * called by: FUN_1002e330
 */
void FUN_1002de80(void)

{
  byte_conflict *pbVar1;
  int iVar2;
  undefined4 uVar3;
  void *this;
  float local_4;
  
  if (*(int *)(DAT_100e52fc + 0xe0) != -1) {
    if ((*(int *)(DAT_100e52fc + 0xd0) == 0) && (350.0 <= *(float *)(DAT_100e52fc + 0x9c))) {
      local_4 = 0.5;
      if (*(int *)(DAT_100e52fc + 0xe4) < 1) {
        if (*(float *)(DAT_100e52fc + 0x9c) <= 680.0) {
          if (*(float *)(DAT_100e52fc + 0x9c) <= 340.0) {
            if (*(float *)(DAT_100e52fc + 0x9c) < 200.0) {
              local_4 = 0.0;
            }
          }
          else {
            pbVar1 = (byte_conflict *)
                     (**(code **)(DAT_100e52fc + 0x4f554))(DAT_100e52fc + 0x4f3f0,&DAT_10094c14);
            iVar2 = FUN_1006c042(this,pbVar1);
            if (iVar2 == 1) {
              (**(code **)(DAT_100e52fc + 0x4f5b4))
                        (2,s_player_pl_fallpain3_wav_10094c18,0x3f800000,0x3f4ccccd,0,100);
            }
            local_4 = 0.85;
          }
        }
        else {
          (**(code **)(DAT_100e52fc + 0x4f5b4))
                    (2,s_player_pl_fallpain3_wav_10094c18,0x3f800000,0x3f4ccccd,0,100);
          local_4 = 1.0;
        }
      }
      if (0.0 < local_4) {
        *(undefined4 *)(DAT_100e52fc + 0x94) = 0;
        FUN_1002aca0();
        uVar3 = FUN_1002ab20(*(undefined1 *)(DAT_100e52fc + 0x1f0));
        FUN_1002a3a0(uVar3,local_4);
        *(float *)(DAT_100e52fc + 0xa8) = *(float *)(DAT_100e52fc + 0x9c) * 0.013;
        if (8.0 < *(float *)(DAT_100e52fc + 0xa0)) {
          *(undefined4 *)(DAT_100e52fc + 0xa0) = 0x41000000;
        }
      }
    }
    if (*(int *)(DAT_100e52fc + 0xe0) != -1) {
      *(undefined4 *)(DAT_100e52fc + 0x9c) = 0;
    }
  }
  return;
}

/* 1002e030  FUN_1002e030  (222 bytes)
 * undefined FUN_1002e030(void)
 * called by: FUN_1002e330
 */
void FUN_1002e030(void)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_100e52fc + 0xec) == 0) {
    if (*(int *)(DAT_100e52fc + 0xe4) == 0) {
      return;
    }
  }
  else if (*(int *)(DAT_100e52fc + 0xe4) != 0) {
    return;
  }
  uVar1 = (**(code **)(DAT_100e52fc + 0x4f588))(0,3);
  switch(uVar1) {
  case 0:
    (**(code **)(DAT_100e52fc + 0x4f5b4))
              (4,s_player_pl_wade1_wav_10094938,0x3f800000,0x3f4ccccd,0,100);
    return;
  case 1:
    (**(code **)(DAT_100e52fc + 0x4f5b4))
              (4,s_player_pl_wade2_wav_10094924,0x3f800000,0x3f4ccccd,0,100);
    return;
  case 2:
    (**(code **)(DAT_100e52fc + 0x4f5b4))
              (4,s_player_pl_wade3_wav_10094910,0x3f800000,0x3f4ccccd,0,100);
    return;
  case 3:
    (**(code **)(DAT_100e52fc + 0x4f5b4))
              (4,s_player_pl_wade4_wav_100948fc,0x3f800000,0x3f4ccccd,0,100);
  }
  return;
}

/* 1002e120  FUN_1002e120  (151 bytes)
 * float10 FUN_1002e120(float * param_1, float * param_2, float param_3, float param_4)
 * called by: FUN_10053a70
 */
float10 __cdecl FUN_1002e120(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float10 fVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18 [3];
  float local_c [3];
  
  FUN_10029bb0(param_1,local_c,&local_24,local_18);
  param_1 = (float *)0xffffffff;
  fVar1 = local_24 * *param_2 + local_20 * param_2[1] + local_1c * param_2[2];
  if (0.0 <= fVar1) {
    param_1 = (float *)0x1;
  }
  fVar2 = ABS((float10)fVar1);
  if (fVar2 < (float10)param_4) {
    return (float10)(int)param_1 * ((fVar2 * (float10)param_3) / (float10)param_4);
  }
  return (float10)(int)param_1 * (float10)param_3;
}

/* 1002e1c0  FUN_1002e1c0  (113 bytes)
 * undefined FUN_1002e1c0(float * param_1)
 * called by: FUN_10053a70
 */
void __cdecl FUN_1002e1c0(float *param_1)

{
  float10 fVar1;
  
  if (*(int *)(DAT_100e52fc + 0xd0) == 0) {
    fVar1 = (float10)FUN_10029e40(param_1);
    fVar1 = fVar1 - (fVar1 * (float10)0.5 + (float10)10.0) *
                    (float10)*(float *)(DAT_100e52fc + 0x20c) *
                    (float10)*(float *)(DAT_100e52fc + 0x10);
    if (fVar1 <= (float10)0.0) {
      fVar1 = (float10)0.0;
    }
    FUN_100583e0(param_1,(float)fVar1,param_1);
    return;
  }
  FUN_100583e0(param_1,0.0,param_1);
  return;
}

/* 1002e240  FUN_1002e240  (237 bytes)
 * undefined FUN_1002e240(void)
 * called by: FUN_1002e330
 */
void FUN_1002e240(void)

{
  if (0 < *(int *)(DAT_100e52fc + 0x94)) {
    *(uint *)(DAT_100e52fc + 0x94) =
         *(int *)(DAT_100e52fc + 0x94) - (uint)*(byte *)(DAT_100e52fc + 0x4545a);
    if (*(int *)(DAT_100e52fc + 0x94) < 0) {
      *(undefined4 *)(DAT_100e52fc + 0x94) = 0;
    }
  }
  if (0.0 < *(float *)(DAT_100e52fc + 0x8c)) {
    *(float *)(DAT_100e52fc + 0x8c) =
         *(float *)(DAT_100e52fc + 0x8c) - (float)*(byte *)(DAT_100e52fc + 0x4545a);
    if (*(float *)(DAT_100e52fc + 0x8c) < 0.0) {
      *(undefined4 *)(DAT_100e52fc + 0x8c) = 0;
    }
  }
  if (0.0 < *(float *)(DAT_100e52fc + 0xac)) {
    *(float *)(DAT_100e52fc + 0xac) =
         *(float *)(DAT_100e52fc + 0xac) - (float)*(byte *)(DAT_100e52fc + 0x4545a);
    if (*(float *)(DAT_100e52fc + 0xac) < 0.0) {
      *(undefined4 *)(DAT_100e52fc + 0xac) = 0;
    }
  }
  return;
}

/* 1002e330  FUN_1002e330  (1031 bytes)
 * undefined FUN_1002e330(undefined4 param_1)
 * called by: FUN_1002e990
 */
void __cdecl FUN_1002e330(undefined4 param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar4;
  
  iVar4 = 0;
  *(undefined4 *)(DAT_100e52fc + 4) = param_1;
  FUN_10053a70();
  *(undefined4 *)(DAT_100e52fc + 0x4548c) = 0;
  *(float *)(DAT_100e52fc + 0x10) = (float)*(byte *)(DAT_100e52fc + 0x4545a) * 0.001;
  if (0.1 <= *(float *)(DAT_100e52fc + 0x20c)) {
    fVar1 = *(float *)(DAT_100e52fc + 0x20c);
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(DAT_100e52fc + 0x10) = fVar1 * *(float *)(DAT_100e52fc + 0x10);
  FUN_1002e240();
  FUN_10029bb0((float *)(DAT_100e52fc + 0x44),(float *)(DAT_100e52fc + 0x14),
               (float *)(DAT_100e52fc + 0x20),(float *)(DAT_100e52fc + 0x2c));
  if (*(int *)(DAT_100e52fc + 0x4f5b0) != 0) {
    DAT_101914ec = 0;
    DAT_1019149c = 0;
    DAT_101914f0 = 0;
  }
  if ((*(int *)(DAT_100e52fc + 0xd8) == 0) && (*(int *)(DAT_100e52fc + 0x1fc) < 1)) {
    if (((*(int *)(DAT_100e52fc + 0xdc) == 8) || (*(int *)(DAT_100e52fc + 0xdc) == 0)) ||
       (iVar3 = FUN_1002c340(), iVar3 == 0)) {
      FUN_1002c1a0();
      *(undefined4 *)(DAT_100e52fc + 0xec) = *(undefined4 *)(DAT_100e52fc + 0xe4);
      if (*(int *)(DAT_100e52fc + 0xe0) == -1) {
        *(float *)(DAT_100e52fc + 0x9c) = -*(float *)(DAT_100e52fc + 100);
      }
      DAT_100e5304 = 0;
      if (((*(int *)(DAT_100e52fc + 0xd0) == 0) &&
          ((*(uint *)(DAT_100e52fc + 0xb8) & 0x1000000) == 0)) &&
         (iVar4 = FUN_1002d520(), iVar4 != 0)) {
        DAT_100e5304 = 1;
      }
      FUN_10053660();
      FUN_1002aca0();
      FUN_10053d70();
      if ((*(int *)(DAT_100e52fc + 0xd0) == 0) &&
         ((*(uint *)(DAT_100e52fc + 0xb8) & 0x1000000) == 0)) {
        if (iVar4 == 0) {
          if ((*(int *)(DAT_100e52fc + 0xdc) != 3) && (*(int *)(DAT_100e52fc + 0xdc) != 8)) {
            *(undefined4 *)(DAT_100e52fc + 0xdc) = 3;
          }
        }
        else {
          FUN_1002d1b0(iVar4);
        }
      }
      switch(*(undefined4 *)(DAT_100e52fc + 0xdc)) {
      case 0:
        break;
      default:
        (**(code **)(DAT_100e52fc + 0x4f564))
                  (s_Bogus_pmove_player_movetype__i_o_10094c30,*(undefined4 *)(DAT_100e52fc + 0xdc),
                   *(undefined4 *)(DAT_100e52fc + 4));
        return;
      case 3:
        bVar2 = FUN_1002bfc0();
        if (CONCAT31(extraout_var,bVar2) == 0) {
          FUN_1002b230();
        }
        if (*(float *)(DAT_100e52fc + 0xcc) != 0.0) {
          FUN_1002d5f0();
          FUN_1002b310();
          FUN_1002bfe0();
          return;
        }
        if (1 < *(int *)(DAT_100e52fc + 0xe4)) {
          if (*(int *)(DAT_100e52fc + 0xe4) == 2) {
            FUN_1002dc10();
          }
          if ((*(float *)(DAT_100e52fc + 100) < 0.0) && (*(float *)(DAT_100e52fc + 0xcc) != 0.0)) {
            *(undefined4 *)(DAT_100e52fc + 0xcc) = 0;
          }
          if ((*(byte *)(DAT_100e52fc + 0x45476) & 2) == 0) {
            *(uint *)(DAT_100e52fc + 200) = *(uint *)(DAT_100e52fc + 200) & 0xfffffffd;
          }
          else {
            FUN_10053780();
          }
          FUN_1002bb70();
          *(float *)(DAT_100e52fc + 0x5c) =
               *(float *)(DAT_100e52fc + 0x5c) - *(float *)(DAT_100e52fc + 0x74);
          *(float *)(DAT_100e52fc + 0x60) =
               *(float *)(DAT_100e52fc + 0x60) - *(float *)(DAT_100e52fc + 0x78);
          *(float *)(DAT_100e52fc + 100) =
               *(float *)(DAT_100e52fc + 100) - *(float *)(DAT_100e52fc + 0x7c);
          FUN_1002c1a0();
          FUN_1002e030();
          return;
        }
        if ((*(byte *)(DAT_100e52fc + 0x45476) & 2) == 0) {
          *(uint *)(DAT_100e52fc + 200) = *(uint *)(DAT_100e52fc + 200) & 0xfffffffd;
        }
        else if (iVar4 == 0) {
          FUN_10053780();
        }
        if (*(int *)(DAT_100e52fc + 0xe0) != -1) {
          *(undefined4 *)(DAT_100e52fc + 100) = 0;
          FUN_1002b910();
        }
        FUN_1002b090();
        if (*(int *)(DAT_100e52fc + 0xe0) == -1) {
          FUN_1002be80();
        }
        else {
          FUN_10053fd0();
        }
        FUN_1002c1a0();
        *(float *)(DAT_100e52fc + 0x5c) =
             *(float *)(DAT_100e52fc + 0x5c) - *(float *)(DAT_100e52fc + 0x74);
        *(float *)(DAT_100e52fc + 0x60) =
             *(float *)(DAT_100e52fc + 0x60) - *(float *)(DAT_100e52fc + 0x78);
        *(float *)(DAT_100e52fc + 100) =
             *(float *)(DAT_100e52fc + 100) - *(float *)(DAT_100e52fc + 0x7c);
        FUN_1002b090();
        bVar2 = FUN_1002bfc0();
        if (CONCAT31(extraout_var_00,bVar2) == 0) {
          FUN_1002b2b0();
        }
        if (*(int *)(DAT_100e52fc + 0xe0) != -1) {
          *(undefined4 *)(DAT_100e52fc + 100) = 0;
        }
        FUN_1002de80();
        FUN_1002e030();
        return;
      case 5:
        FUN_1002bfe0();
        if ((*(byte *)(DAT_100e52fc + 0x45476) & 2) == 0) {
          *(uint *)(DAT_100e52fc + 200) = *(uint *)(DAT_100e52fc + 200) & 0xfffffffd;
        }
        else if (iVar4 == 0) {
          FUN_10053780();
        }
        *(float *)(DAT_100e52fc + 0x5c) =
             *(float *)(DAT_100e52fc + 0x74) + *(float *)(DAT_100e52fc + 0x5c);
        *(float *)(DAT_100e52fc + 0x60) =
             *(float *)(DAT_100e52fc + 0x78) + *(float *)(DAT_100e52fc + 0x60);
        *(float *)(DAT_100e52fc + 100) =
             *(float *)(DAT_100e52fc + 0x7c) + *(float *)(DAT_100e52fc + 100);
        FUN_1002b310();
        *(float *)(DAT_100e52fc + 0x5c) =
             *(float *)(DAT_100e52fc + 0x5c) - *(float *)(DAT_100e52fc + 0x74);
        *(float *)(DAT_100e52fc + 0x60) =
             *(float *)(DAT_100e52fc + 0x60) - *(float *)(DAT_100e52fc + 0x78);
        *(float *)(DAT_100e52fc + 100) =
             *(float *)(DAT_100e52fc + 100) - *(float *)(DAT_100e52fc + 0x7c);
        return;
      case 6:
      case 10:
        FUN_1002d7e0();
        return;
      case 8:
        FUN_1002daf0();
        return;
      }
    }
  }
  else {
    FUN_1002c790();
    FUN_1002c1a0();
  }
  return;
}

/* 1002e770  FUN_1002e770  (539 bytes)
 * undefined FUN_1002e770(void)
 * called by: FUN_1002ea10
 */
void FUN_1002e770(void)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float local_c [3];
  
  fVar2 = -0.125;
  puVar8 = (undefined4 *)&stack0xfffffff0;
  pfVar10 = (float *)&stack0xfffffff0;
  puVar7 = &DAT_100e0a64;
  for (iVar5 = 0xa2; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar5 = 0;
  puVar7 = &DAT_100e0a68;
  do {
    puVar7[-1] = 0;
    *puVar7 = 0;
    puVar7[1] = fVar2;
    fVar2 = fVar2 + 0.125;
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 3;
  } while (fVar2 <= 0.125);
  fVar2 = -0.125;
  pfVar9 = (float *)(&DAT_100e0a68 + iVar5 * 3);
  do {
    pfVar9[-1] = 0.0;
    iVar5 = iVar5 + 1;
    *pfVar9 = fVar2;
    fVar2 = fVar2 + 0.125;
    pfVar9[1] = 0.0;
    pfVar9 = pfVar9 + 3;
  } while (fVar2 <= 0.125);
  fVar2 = -0.125;
  puVar7 = &DAT_100e0a68 + iVar5 * 3;
  do {
    puVar7[-1] = fVar2;
    fVar2 = fVar2 + 0.125;
    *puVar7 = 0;
    puVar7[1] = 0;
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 3;
  } while (fVar2 <= 0.125);
  fVar2 = -0.125;
  do {
    fVar3 = -0.125;
    do {
      fVar4 = -0.125;
      pfVar9 = (float *)(&DAT_100e0a68 + iVar5 * 3);
      do {
        iVar6 = iVar5;
        iVar5 = iVar6 + 1;
        pfVar9[-1] = fVar2;
        *pfVar9 = fVar3;
        pfVar9[1] = fVar4;
        fVar4 = fVar4 + 0.25;
        pfVar9 = pfVar9 + 3;
      } while (fVar4 <= 0.125);
      fVar3 = fVar3 + 0.25;
    } while (fVar3 <= 0.125);
    fVar2 = fVar2 + 0.25;
  } while (fVar2 <= 0.125);
  iVar11 = 3;
  puVar7 = &DAT_100e0a68 + iVar5 * 3;
  iVar6 = iVar6 + 4;
  do {
    puVar8 = puVar8 + 1;
    uVar1 = *puVar8;
    puVar7[-1] = 0;
    *puVar7 = 0;
    puVar7[1] = uVar1;
    puVar7 = puVar7 + 3;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  fVar2 = -2.0;
  pfVar9 = (float *)(&DAT_100e0a68 + iVar6 * 3);
  do {
    pfVar9[-1] = 0.0;
    iVar6 = iVar6 + 1;
    *pfVar9 = fVar2;
    fVar2 = fVar2 + 2.0;
    pfVar9[1] = 0.0;
    pfVar9 = pfVar9 + 3;
  } while (fVar2 <= 2.0);
  fVar2 = -2.0;
  puVar8 = &DAT_100e0a68 + iVar6 * 3;
  do {
    puVar8[-1] = fVar2;
    fVar2 = fVar2 + 2.0;
    *puVar8 = 0;
    puVar8[1] = 0;
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 3;
  } while (fVar2 <= 2.0);
  iVar5 = 3;
  do {
    pfVar10 = pfVar10 + 1;
    fVar2 = *pfVar10;
    fVar3 = -2.0;
    do {
      fVar4 = -2.0;
      pfVar9 = (float *)(&DAT_100e0a68 + iVar6 * 3);
      do {
        iVar6 = iVar6 + 1;
        pfVar9[-1] = fVar3;
        *pfVar9 = fVar4;
        pfVar9[1] = fVar2;
        pfVar9 = pfVar9 + 3;
        fVar4 = fVar4 + 2.0;
      } while (fVar4 <= 2.0);
      fVar3 = fVar3 + 2.0;
    } while (fVar3 <= 2.0);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

/* 1002e990  FUN_1002e990  (115 bytes)
 * undefined FUN_1002e990(int param_1, int param_2)
 * called by: HUD_PlayerMove
 */
void __cdecl FUN_1002e990(int param_1,int param_2)

{
  uint uVar1;
  
  DAT_100db0b8 = *(undefined4 *)(DAT_100e52fc + 0x280);
  DAT_100e52fc = param_1;
  FUN_1002e330((uint)(param_2 != 0));
  if (*(int *)(DAT_100e52fc + 0xe0) == -1) {
    uVar1 = *(uint *)(DAT_100e52fc + 0xb8) & 0xfffffdff;
  }
  else {
    uVar1 = *(uint *)(DAT_100e52fc + 0xb8) | 0x200;
  }
  *(uint *)(DAT_100e52fc + 0xb8) = uVar1;
  if ((*(int *)(DAT_100e52fc + 8) == 0) && (*(int *)(DAT_100e52fc + 0xdc) == 3)) {
    *(undefined4 *)(DAT_100e52fc + 0xc4) = 0x3f800000;
  }
  return;
}

/* 1002ea10  FUN_1002ea10  (30 bytes)
 * undefined FUN_1002ea10(undefined4 param_1)
 * called by: HUD_PlayerMoveInit
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1002ea10(undefined4 param_1)

{
  DAT_100e52fc = param_1;
  FUN_1002e770();
  FUN_1002a0a0();
  _DAT_100e52f8 = 1;
  return;
}

/* 1002ea30  FUN_1002ea30  (26 bytes)
 * undefined FUN_1002ea30()
 */
void FUN_1002ea30(undefined4 param_1,int param_2,undefined4 param_3)

{
  FUN_1002ecc0(&DAT_100cfea8,param_1,param_2,param_3);
  return;
}

/* 1002ea50  FUN_1002ea50  (76 bytes)
 * undefined4 FUN_1002ea50(int * param_1)
 */
undefined4 __fastcall FUN_1002ea50(int *param_1)

{
  FUN_10020a40(&DAT_100cf920,(int)param_1);
  (*gEngfuncs.pfnHookUserMsg)(s_SayText_10094c7c,FUN_1002ea30);
  (**(code **)(*param_1 + 0x18))();
  (*gEngfuncs.pfnRegisterVariable)(s__hud_saytext_time_10094c67 + 1,&DAT_10093094,0);
  param_1[4] = param_1[4] | 2;
  return 1;
}

/* 1002eaa0  FUN_1002eaa0  (41 bytes)
 * undefined FUN_1002eaa0()
 */
void FUN_1002eaa0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_100e5310;
  for (iVar1 = 0x180; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_100e5968;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_100e5950;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 1002ead0  FUN_1002ead0  (111 bytes)
 * int FUN_1002ead0(void)
 * called by: FUN_1002ead0, FUN_1002eb40, FUN_1002ed00, FUN_1002ee90
 */
int FUN_1002ead0(void)

{
  int iVar1;
  
  (*gEngfuncs.pfnConsolePrint)((char *)&DAT_100e5310);
  DAT_100e5810 = 0;
  FUN_1006ba20(&DAT_100e5310,(undefined4 *)&DAT_100e5410,0x500);
  FUN_1006ba20(&DAT_100e5968,&DAT_100e596c,0x14);
  FUN_1006ba20(&DAT_100e5950,&DAT_100e5954,0x14);
  DAT_100e5710 = 0;
  if ((char)DAT_100e5310 == ' ') {
    DAT_100e5310._0_1_ = 2;
    iVar1 = FUN_1002ead0();
    return iVar1 + 1;
  }
  return 1;
}

/* 1002eb40  FUN_1002eb40  (383 bytes)
 * undefined4 FUN_1002eb40(float param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1002eb40(void *this,float param_1)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  size_t _Count;
  int iVar4;
  int iVar5;
  int iVar6;
  int y;
  
  y = DAT_100e5984;
  if ((DAT_100d5cb0 != 0) && (uVar3 = FUN_10064240(DAT_100d5cb0), (char)uVar3 == '\0')) {
    return 1;
  }
  fVar2 = _DAT_10094c64 + param_1;
  if (fVar2 <= _DAT_100e5980) {
    _DAT_100e5980 = fVar2;
  }
  if (fVar2 <= _DAT_100e5980) {
    _DAT_100e5980 = fVar2;
  }
  if (_DAT_100e5980 <= param_1) {
    if ((char)DAT_100e5310 == '\0') {
      *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffffe;
    }
    else {
      _DAT_100e5980 = fVar2;
      FUN_1002ead0();
    }
  }
  iVar5 = 0;
  iVar6 = 0;
  do {
    if (*(char *)((int)&DAT_100e5310 + iVar5) != '\0') {
      if ((*(char *)((int)&DAT_100e5310 + iVar5) == '\x02') &&
         (*(int *)((int)&DAT_100e5968 + iVar6) != 0)) {
        _Count = *(size_t *)((int)&DAT_100e5950 + iVar6);
        if (0x3f < (int)_Count) {
          _Count = 0x40;
        }
        _strncpy(&DAT_100e5910,(char *)((int)&DAT_100e5310 + iVar5),_Count);
        iVar4 = *(int *)((int)&DAT_100e5950 + iVar6);
        if (0x3e < iVar4) {
          iVar4 = 0x3f;
        }
        (&DAT_100e5910)[iVar4] = 0;
        pfVar1 = *(float **)((int)&DAT_100e5968 + iVar6);
        (*gEngfuncs.pfnDrawSetTextColor)(*pfVar1,pfVar1[1],pfVar1[2]);
        iVar4 = (*gEngfuncs.pfnDrawConsoleString)(10,y,&DAT_100e5910);
        (*gEngfuncs.pfnDrawConsoleString)
                  (iVar4,y,(char *)((int)&DAT_100e5310 +
                                   iVar5 + *(int *)((int)&DAT_100e5950 + iVar6)));
      }
      else {
        (*gEngfuncs.pfnDrawSetTextColor)(DAT_1009359c,DAT_100935a0,DAT_100935a4);
        (*gEngfuncs.pfnDrawConsoleString)(10,y,(char *)((int)&DAT_100e5310 + iVar5));
      }
    }
    iVar6 = iVar6 + 4;
    y = y + DAT_100e5988;
    iVar5 = iVar5 + 0x100;
  } while (iVar6 < 0x14);
  return 1;
}

/* 1002ecc0  FUN_1002ecc0  (53 bytes)
 * undefined4 FUN_1002ecc0(undefined4 param_1, int param_2, undefined4 param_3)
 * called by: FUN_1002ea30
 */
undefined4 __thiscall FUN_1002ecc0(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  iVar3 = param_2 + -1;
  puVar2 = (uint *)FUN_10029b00();
  FUN_1002ed00(this,puVar2,iVar3,uVar1);
  return 1;
}

/* 1002ed00  FUN_1002ed00  (399 bytes)
 * undefined FUN_1002ed00(uint * param_1, int param_2, int param_3)
 * called by: FUN_1002ecc0, FUN_10034a60, FUN_100507e0, FUN_100509d0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1002ed00(void *this,uint *param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  undefined *this_00;
  uint uVar3;
  char *pcVar4;
  uint *puVar5;
  undefined4 *puVar6;
  size_t _Count;
  int iVar7;
  float10 fVar8;
  
  iVar7 = param_3;
  this_00 = FUN_10017570();
  bVar2 = FUN_10018c80(this_00,iVar7);
  if (!bVar2) {
    if ((DAT_100d5cb0 != 0) && (uVar3 = FUN_10064240(DAT_100d5cb0), (char)uVar3 == '\0')) {
      (*gEngfuncs.pfnConsolePrint)((char *)param_1);
      return;
    }
    iVar7 = 0;
    pcVar4 = (char *)&DAT_100e5310;
    do {
      if (*pcVar4 == '\0') break;
      pcVar4 = pcVar4 + 0x100;
      iVar7 = iVar7 + 1;
    } while ((int)pcVar4 < 0x100e5810);
    if (iVar7 == 5) {
      FUN_1002ead0();
      iVar7 = 4;
    }
    (&DAT_100e5950)[iVar7] = 0;
    (&DAT_100e5968)[iVar7] = 0;
    if (((char)*param_1 == '\x02') && (0 < param_3)) {
      (*gEngfuncs.pfnGetPlayerInfo)(param_3,(hud_player_info_t *)(&DAT_1018fbd8 + param_3 * 0x14));
      pcVar4 = ((hud_player_info_t *)(&DAT_1018fbd8 + param_3 * 0x14))->name;
      if ((pcVar4 != (char *)0x0) && (puVar5 = FUN_1006c930(param_1,pcVar4), puVar5 != (uint *)0x0))
      {
        uVar3 = 0xffffffff;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        (&DAT_100e5950)[iVar7] = (int)puVar5 + ((~uVar3 - 1) - (int)param_1);
        puVar6 = FUN_1001af40(param_3);
        (&DAT_100e5968)[iVar7] = puVar6;
      }
    }
    _Count = param_2 - 1;
    if ((int)_Count < 0x100) {
      _Count = 0xff;
    }
    _strncpy((char *)(&DAT_100e5310 + iVar7 * 0x40),(char *)param_1,_Count);
    FUN_1002ee90(iVar7);
    if (iVar7 == 0) {
      fVar8 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s__hud_saytext_time_10094c67 + 1);
      _DAT_10094c64 = (float)fVar8;
      _DAT_100e5980 = DAT_100cf944 + _DAT_10094c64;
    }
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    (*gEngfuncs.pfnPlaySoundByName)(s_misc_talk_wav_10094c84,1.0);
    iVar7 = DAT_100d590c + -0x3c;
    if (DAT_100d590c < 0x1e0) {
      iVar7 = DAT_100d590c + -0x2d;
    }
    DAT_100e5984 = iVar7 + DAT_100e5988 * -6;
  }
  return;
}

/* 1002ee90  FUN_1002ee90  (547 bytes)
 * undefined FUN_1002ee90(int param_1)
 * called by: FUN_1002ed00, FUN_1002ee90
 */
void FUN_1002ee90(int param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char acStack_12 [2];
  char *pcStack_10;
  int local_c;
  int aiStack_8 [2];
  
  pcVar2 = (char *)(&DAT_100e5310 + param_1 * 0x40);
  pcVar6 = (char *)0x0;
  local_c = 0;
  (*gEngfuncs.pfnDrawConsoleStringLen)(pcVar2,&local_c,&DAT_100e5988);
  if (DAT_100d5908 + -0x28 < local_c + 10) {
    iVar8 = 10;
    aiStack_8[0] = 0;
    pcStack_10 = (char *)0x0;
    acStack_12[0] = *pcVar2;
    pcVar7 = pcVar2;
    while (acStack_12[0] != '\0') {
      if ((acStack_12[0] == '/') && (pcVar7[1] == '(')) {
        pcVar9 = pcVar7 + 2;
        pcVar7 = pcVar7 + 2;
        cVar1 = *pcVar9;
        while ((cVar1 != '\0' && (cVar1 != ')'))) {
          pcVar9 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar9;
        }
        if (*pcVar7 != '\0') {
          pcVar7 = pcVar7 + 1;
        }
        acStack_12[0] = *pcVar7;
        if (acStack_12[0] == '\0') {
          return;
        }
      }
      acStack_12[1] = 0;
      if ((acStack_12[0] == ' ') && (pcVar7 != pcVar2)) {
        pcVar6 = pcVar7;
      }
      (*gEngfuncs.pfnDrawConsoleStringLen)(acStack_12,aiStack_8,&DAT_100e5988);
      iVar8 = iVar8 + aiStack_8[0];
      if (DAT_100d5908 + -0x28 < iVar8) {
        pcStack_10 = pcVar6;
        if (pcVar6 == (char *)0x0) {
          pcVar6 = pcVar7 + -1;
          pcStack_10 = pcVar6;
        }
        goto LAB_1002ef7d;
      }
      pcVar9 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
      acStack_12[0] = *pcVar9;
    }
  }
  return;
LAB_1002ef7d:
  iVar8 = 0;
  pcVar2 = (char *)&DAT_100e5310;
  do {
    if (*pcVar2 == '\0') break;
    pcVar2 = pcVar2 + 0x100;
    iVar8 = iVar8 + 1;
  } while ((int)pcVar2 < 0x100e5810);
  if (iVar8 != 5) goto LAB_1002efb3;
  iVar8 = FUN_1002ead0();
  pcVar6 = pcVar6 + iVar8 * -0x100;
  goto LAB_1002ef7d;
LAB_1002efb3:
  if (*pcVar6 == ' ') {
    uVar3 = 0xffffffff;
    pcVar2 = (char *)(&DAT_100e5310 + iVar8 * 0x40);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar4 = 0xffffffff;
    pcVar2 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (0x100 < (int)((~uVar3 - 1) - (~uVar4 - 1))) goto LAB_1002f09c;
    uVar3 = 0xffffffff;
    pcVar2 = pcVar6;
    do {
      pcVar9 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar9 = pcVar9 + -uVar3;
    iVar5 = -1;
    pcVar7 = (char *)(&DAT_100e5310 + iVar8 * 0x40);
    do {
      pcVar2 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar2 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar2;
    } while (cVar1 != '\0');
  }
  else {
    pcVar2 = (char *)(&DAT_100e5310 + iVar8 * 0x40);
    uVar3 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = 0xffffffff;
    pcVar7 = pcVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (0xff < (~uVar4 - 3) - (~uVar3 - 1)) goto LAB_1002f09c;
    uVar3 = 0xffffffff;
    pcVar7 = (char *)&DAT_10094c94;
    do {
      pcVar9 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar7 = pcVar2;
    do {
      pcVar10 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -uVar3;
    pcVar9 = pcVar10 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      pcVar9 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar9 = pcVar9 + -uVar3;
    iVar5 = -1;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
  }
  pcVar2 = pcVar2 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar2 = pcVar2 + 1;
  }
LAB_1002f09c:
  *pcVar6 = '\0';
  pcStack_10 = pcVar6;
  FUN_1002ee90(iVar8);
  return;
}

/* 1002f0c0  FUN_1002f0c0  (26 bytes)
 * undefined FUN_1002f0c0()
 */
void FUN_1002f0c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1002f1a0(&DAT_100cff20,param_1,param_2,param_3);
  return;
}

/* 1002f0e0  FUN_1002f0e0  (47 bytes)
 * undefined FUN_1002f0e0()
 */
undefined4 __fastcall FUN_1002f0e0(int *param_1)

{
  (*gEngfuncs.pfnHookUserMsg)(s_StatusIcon_10094c98,FUN_1002f0c0);
  FUN_10020a40(&DAT_100cf920,(int)param_1);
  (**(code **)(*param_1 + 0x14))();
  return 1;
}

/* 1002f110  FUN_1002f110  (25 bytes)
 * undefined FUN_1002f110()
 */
void __fastcall FUN_1002f110(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x14);
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  return;
}

/* 1002f130  FUN_1002f130  (101 bytes)
 * undefined FUN_1002f130()
 */
undefined4 __fastcall FUN_1002f130(int param_1)

{
  int iVar1;
  int *piVar2;
  int y;
  
  y = DAT_100d590c / 2;
  piVar2 = (int *)(param_1 + 0x38);
  iVar1 = 4;
  do {
    if (piVar2[-3] != 0) {
      y = y + -5 + (*piVar2 - piVar2[1]);
      (*gEngfuncs.pfnSPR_Set)
                (piVar2[-3],(int)(char)piVar2[2],(int)*(undefined1 *)((int)piVar2 + 9),
                 (int)*(undefined1 *)((int)piVar2 + 10));
      (*gEngfuncs.pfnSPR_DrawAdditive)(0,5,y,(wrect_t *)(piVar2 + -2));
    }
    piVar2 = piVar2 + 0xc;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 1;
}

/* 1002f1a0  FUN_1002f1a0  (111 bytes)
 * undefined4 FUN_1002f1a0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_1002f0c0
 */
undefined4 __thiscall
FUN_1002f1a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  byte_conflict *pbVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  pbVar2 = FUN_10029b00();
  if (uVar1 != 0) {
    uVar1 = FUN_10029a10();
    uVar3 = FUN_10029a10();
    uVar4 = FUN_10029a10();
    FUN_1002f210(this,pbVar2,(char)uVar1,(char)uVar3,(char)uVar4);
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    return 1;
  }
  FUN_1002f330(this,pbVar2);
  return 1;
}

/* 1002f210  FUN_1002f210  (276 bytes)
 * undefined FUN_1002f210(byte.conflict * param_1, undefined1 param_2, undefined1 param_3, undefined1 param_4)
 * called by: FUN_10021a40, FUN_1002f1a0
 */
void __thiscall
FUN_1002f210(void *this,byte_conflict *param_1,undefined1 param_2,undefined1 param_3,
            undefined1 param_4)

{
  byte_conflict bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  cl_entity_s *pcVar7;
  void *this_00;
  void *extraout_ECX;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  byte_conflict *pbVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  
  iVar12 = 0;
  pbVar11 = (byte_conflict *)((int)this + 0x14);
  this_00 = this;
  do {
    uVar2 = FUN_10076d90(this_00,pbVar11,param_1);
    if (uVar2 == 0) break;
    iVar12 = iVar12 + 1;
    pbVar11 = pbVar11 + 0x30;
    this_00 = extraout_ECX;
  } while (iVar12 < 4);
  if (iVar12 == 4) {
    iVar12 = 0;
    piVar3 = (int *)((int)this + 0x2c);
    do {
      if (*piVar3 == 0) break;
      iVar12 = iVar12 + 1;
      piVar3 = piVar3 + 0xc;
    } while (iVar12 < 4);
    if (iVar12 == 4) {
      iVar12 = 0;
    }
  }
  iVar4 = FUN_10020670(&DAT_100cf920,(char *)param_1);
  if (iVar4 < 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined4 *)(DAT_100cf98c + iVar4 * 4);
  }
  *(undefined4 *)((int)this + iVar12 * 0x30 + 0x2c) = uVar9;
  puVar5 = (undefined4 *)(iVar4 * 0x10 + DAT_100cf990);
  puVar10 = (undefined4 *)((iVar12 * 3 + 3) * 0x10 + (int)this);
  *puVar10 = *puVar5;
  puVar10[1] = puVar5[1];
  puVar10[2] = puVar5[2];
  puVar10[3] = puVar5[3];
  *(undefined1 *)((int)this + iVar12 * 0x30 + 0x40) = param_2;
  *(undefined1 *)((int)this + iVar12 * 0x30 + 0x41) = param_3;
  *(undefined1 *)((int)this + iVar12 * 0x30 + 0x42) = param_4;
  puVar6 = (uint *)((int)this + iVar12 * 0x30 + 0x14);
  uVar2 = 0xffffffff;
  do {
    pbVar11 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pbVar11 = param_1 + 1;
    bVar1 = *param_1;
    param_1 = pbVar11;
  } while (bVar1 != '\0');
  uVar2 = ~uVar2;
  puVar13 = (uint *)(pbVar11 + -uVar2);
  puVar14 = puVar6;
  for (uVar8 = uVar2 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(char *)puVar14 = (char)*puVar13;
    puVar13 = (uint *)((int)puVar13 + 1);
    puVar14 = (uint *)((int)puVar14 + 1);
  }
  puVar6 = FUN_1006c930(puVar6,s_grenade_10094cb8);
  if (puVar6 != (uint *)0x0) {
    pcVar7 = (*gEngfuncs.GetLocalPlayer)();
    (*(gEngfuncs.pEventAPI)->EV_PlaySound)
              (pcVar7->index,pcVar7->origin,6,s_weapons_timer_wav_10094ca4,1.0,0.8,0,100);
  }
  return;
}

/* 1002f330  FUN_1002f330  (71 bytes)
 * undefined FUN_1002f330(byte.conflict * param_1)
 * called by: FUN_10021a40, FUN_1002f1a0
 */
void __thiscall FUN_1002f330(void *this,byte_conflict *param_1)

{
  uint uVar1;
  void *this_00;
  void *extraout_ECX;
  int iVar2;
  int iVar3;
  byte_conflict *pbVar4;
  undefined4 *puVar5;
  
  iVar3 = 0;
  pbVar4 = (byte_conflict *)((int)this + 0x14);
  this_00 = this;
  do {
    uVar1 = FUN_10076d90(this_00,pbVar4,param_1);
    if (uVar1 == 0) {
      puVar5 = (undefined4 *)(iVar3 * 0x30 + 0x14 + (int)this);
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      return;
    }
    iVar3 = iVar3 + 1;
    pbVar4 = pbVar4 + 0x30;
    this_00 = extraout_ECX;
  } while (iVar3 < 4);
  return;
}

/* 1002f380  FUN_1002f380  (26 bytes)
 * undefined FUN_1002f380()
 */
void FUN_1002f380(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1002f850(&DAT_100cfc50,param_1,param_2,param_3);
  return;
}

/* 1002f3a0  FUN_1002f3a0  (26 bytes)
 * undefined FUN_1002f3a0()
 */
void FUN_1002f3a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1002f8d0(&DAT_100cfc50,param_1,param_2,param_3);
  return;
}

/* 1002f3c0  FUN_1002f3c0  (84 bytes)
 * undefined4 FUN_1002f3c0(int * param_1)
 */
undefined4 __fastcall FUN_1002f3c0(int *param_1)

{
  FUN_10020a40(&DAT_100cf920,(int)param_1);
  (*gEngfuncs.pfnHookUserMsg)(s_StatusText_10094cdc,FUN_1002f380);
  (*gEngfuncs.pfnHookUserMsg)(s_StatusValue_10094cd0,FUN_1002f3a0);
  (**(code **)(*param_1 + 0x14))();
  (*gEngfuncs.pfnRegisterVariable)(s_hud_centerid_10094cc0,&DAT_10092bf4,1);
  return 1;
}

/* 1002f420  FUN_1002f420  (6 bytes)
 * undefined FUN_1002f420()
 */
undefined4 FUN_1002f420(void)

{
  return 1;
}

/* 1002f430  FUN_1002f430  (76 bytes)
 * undefined FUN_1002f430()
 */
void __fastcall FUN_1002f430(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  puVar1 = (undefined1 *)(param_1 + 0x14);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x80;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar3 = (undefined4 *)(param_1 + 0x214);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x214) = 1;
  *(undefined4 **)(param_1 + 0x238) = &DAT_1009359c;
  *(undefined4 **)(param_1 + 0x23c) = &DAT_1009359c;
  return;
}

/* 1002f480  FUN_1002f480  (610 bytes)
 * undefined FUN_1002f480(int param_1)
 * called by: FUN_1002f6f0
 */
void __thiscall FUN_1002f480(void *this,int param_1)

{
  char cVar1;
  byte_conflict bVar2;
  byte_conflict bVar3;
  undefined4 *puVar4;
  byte_conflict *pbVar5;
  int iVar6;
  undefined4 extraout_ECX;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  void *extraout_ECX_00;
  byte_conflict *pbVar10;
  byte_conflict *pbVar11;
  byte_conflict *pbVar12;
  char *pcVar13;
  char *pcVar14;
  byte_conflict *pbVar15;
  byte_conflict *local_ac;
  byte_conflict local_a0 [32];
  byte_conflict local_80;
  byte_conflict local_7f [127];
  
  pbVar11 = &local_80;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    pbVar11[0] = '\0';
    pbVar11[1] = '\0';
    pbVar11[2] = '\0';
    pbVar11[3] = '\0';
    pbVar11 = pbVar11 + 4;
  }
  FUN_100348d0((char *)((int)this + param_1 * 0x80 + 0x14),(char *)&local_80,0x80);
  pbVar11 = (byte_conflict *)((int)this + param_1 * 0x80 + 0x114);
  pbVar10 = pbVar11;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    pbVar10[0] = '\0';
    pbVar10[1] = '\0';
    pbVar10[2] = '\0';
    pbVar10[3] = '\0';
    pbVar10 = pbVar10 + 4;
  }
  pbVar10 = &local_80;
  pbVar12 = pbVar11;
  local_ac = pbVar11;
  do {
    if (local_80 == '\0') {
      return;
    }
    bVar3 = *pbVar10;
    while (bVar3 == '\n') {
      pbVar5 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar5;
    }
    if (0x7f < (int)pbVar10 - (int)&local_80) {
      return;
    }
    if (0x7f < (int)pbVar12 - (int)pbVar11) {
      return;
    }
    iVar6 = FUN_1006c042(pbVar11,pbVar10);
    if (((iVar6 < 0) || (7 < iVar6)) ||
       (pvVar7 = *(void **)((int)this + iVar6 * 4 + 0x214), pvVar7 == (void *)0x0)) {
      bVar3 = *pbVar10;
      while ((bVar3 != '\0' && (bVar3 != '\n'))) {
        pbVar5 = pbVar10 + 1;
        pbVar10 = pbVar10 + 1;
        bVar3 = *pbVar5;
      }
    }
    else {
      bVar3 = *pbVar10;
      while (('/' < (char)bVar3 && ((char)bVar3 < ':'))) {
        pbVar5 = pbVar10 + 1;
        pbVar10 = pbVar10 + 1;
        bVar3 = *pbVar5;
      }
      bVar3 = *pbVar10;
      if ((bVar3 != '\n') && (bVar3 != '\0')) {
        do {
          if (bVar3 == '\0') break;
          if (bVar3 == '%') {
            bVar3 = pbVar10[1];
            if (bVar3 == '%') {
              *pbVar12 = '%';
              pbVar12 = pbVar12 + 1;
              pbVar10 = pbVar10 + 2;
              local_ac = pbVar12;
            }
            else {
              pbVar10 = pbVar10 + 2;
              iVar6 = FUN_1006c042(pvVar7,pbVar10);
              bVar2 = *pbVar10;
              for (pvVar7 = (void *)CONCAT31((int3)((uint)extraout_ECX >> 8),bVar2);
                  ('/' < (char)bVar2 && ((char)pvVar7 < ':'));
                  pvVar7 = (void *)CONCAT31((int3)((uint)pvVar7 >> 8),bVar2)) {
                bVar2 = pbVar10[1];
                pbVar10 = pbVar10 + 1;
              }
              if ((-1 < iVar6) && (iVar6 < 8)) {
                iVar6 = *(int *)((int)this + iVar6 * 4 + 0x214);
                if (bVar3 == 'i') {
                  FUN_1006ac7a(local_a0,&DAT_10093a90);
                  pvVar7 = extraout_ECX_00;
                }
                else {
                  pvVar7 = this;
                  if (bVar3 == 'p') {
                    (*gEngfuncs.pfnGetPlayerInfo)
                              (iVar6,(hud_player_info_t *)(&DAT_1018fbd8 + iVar6 * 0x14));
                    pcVar13 = ((hud_player_info_t *)(&DAT_1018fbd8 + iVar6 * 0x14))->name;
                    pbVar12 = local_ac;
                    if (pcVar13 == (char *)0x0) {
                      uVar8 = 0xffffffff;
                      pcVar13 = &DAT_10094ce8;
                      do {
                        pcVar14 = pcVar13;
                        if (uVar8 == 0) break;
                        uVar8 = uVar8 - 1;
                        pcVar14 = pcVar13 + 1;
                        cVar1 = *pcVar13;
                        pcVar13 = pcVar14;
                      } while (cVar1 != '\0');
                      uVar8 = ~uVar8;
                      pbVar5 = (byte_conflict *)(pcVar14 + -uVar8);
                      pbVar15 = local_a0;
                      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                        *(undefined4 *)pbVar15 = *(undefined4 *)pbVar5;
                        pbVar5 = pbVar5 + 4;
                        pbVar15 = pbVar15 + 4;
                      }
                      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                        *pbVar15 = *pbVar5;
                        pbVar5 = pbVar5 + 1;
                        pbVar15 = pbVar15 + 1;
                      }
                      pvVar7 = (void *)0x0;
                    }
                    else {
                      _strncpy((char *)local_a0,pcVar13,0x20);
                      puVar4 = FUN_1001af40(iVar6);
                      *(undefined4 **)((int)this + param_1 * 4 + 0x238) = puVar4;
                    }
                  }
                  else {
                    local_a0[0] = '\0';
                  }
                }
                pvVar7 = (void *)CONCAT31((int3)((uint)pvVar7 >> 8),local_a0[0]);
                pbVar5 = local_a0;
                bVar3 = local_a0[0];
                while ((bVar3 != '\0' && (local_ac = pbVar12, (int)pbVar12 - (int)pbVar11 < 0x80)))
                {
                  bVar3 = *pbVar5;
                  pvVar7 = (void *)CONCAT31((int3)((uint)pvVar7 >> 8),bVar3);
                  pbVar5 = pbVar5 + 1;
                  *pbVar12 = bVar3;
                  bVar3 = *pbVar5;
                  pbVar12 = pbVar12 + 1;
                  local_ac = pbVar12;
                }
              }
            }
          }
          else {
            *pbVar12 = bVar3;
            pbVar12 = pbVar12 + 1;
            pbVar10 = pbVar10 + 1;
            local_ac = pbVar12;
          }
          bVar3 = *pbVar10;
        } while (bVar3 != '\n');
      }
    }
    local_80 = *pbVar10;
  } while( true );
}

/* 1002f6f0  FUN_1002f6f0  (343 bytes)
 * undefined FUN_1002f6f0()
 */
undefined4 __fastcall FUN_1002f6f0(void *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  longlong lVar8;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  char *pcStack_4;
  
  if (*(int *)((int)param_1 + 0x234) != 0) {
    iVar4 = 0;
    puVar5 = (undefined4 *)((int)param_1 + 0x238);
    do {
      *puVar5 = &DAT_1009359c;
      FUN_1002f480(param_1,iVar4);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < 2);
    *(undefined4 *)((int)param_1 + 0x234) = 0;
  }
  iVar4 = 0;
  do {
    pcStack_4 = (char *)(iVar4 * 0x80 + 0x114 + (int)param_1);
    (*gEngfuncs.pfnDrawConsoleStringLen)(pcStack_4,&iStack_c,&iStack_10);
    if (DAT_100d590c < 0x1e0) {
      iVar2 = DAT_100d590c + -0x2d;
    }
    else {
      iVar2 = DAT_100d590c + -0x37;
    }
    iVar6 = 5;
    iVar2 = iVar2 - iStack_10 * iVar4;
    if (iVar4 == 1) {
      fVar7 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_hud_centerid_10094cc0);
      if (fVar7 != (float10)0.0) {
        iVar3 = DAT_100d5908 - iStack_c;
        iVar2 = 2;
        if (1 < iVar3) {
          iVar2 = iVar3;
        }
        if (iVar2 / 2 < 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = 2;
          if (1 < iVar3) {
            iVar6 = iVar3;
          }
          iVar6 = iVar6 / 2;
        }
        (*gEngfuncs.pfnGetCvarFloat)(s_hud_centerid_10094cc0);
        iStack_8 = DAT_100d590c / 2;
        lVar8 = __ftol();
        iVar2 = (int)lVar8;
      }
    }
    pfVar1 = *(float **)((int)param_1 + iVar4 * 4 + 0x238);
    if (pfVar1 != (float *)0x0) {
      (*gEngfuncs.pfnDrawSetTextColor)(*pfVar1,pfVar1[1],pfVar1[2]);
    }
    (*gEngfuncs.pfnDrawConsoleString)(iVar6,iVar2,pcStack_4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  return 1;
}

/* 1002f850  FUN_1002f850  (128 bytes)
 * undefined4 FUN_1002f850(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_1002f380
 */
undefined4 __thiscall
FUN_1002f850(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char *_Source;
  size_t _Count;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  if ((-1 < (int)uVar1) && ((int)uVar1 < 2)) {
    _Count = 0x80;
    _Source = FUN_10029b00();
    _strncpy((char *)((int)this + uVar1 * 0x80 + 0x14),_Source,_Count);
    *(undefined1 *)((int)this + uVar1 * 0x80 + 0x93) = 0;
    if (this == (void *)0xffffffec) {
      uRam00000220 = 1;
      uRamfffffffc = *(uint *)((int)this + 0x10) & 0xfffffffe;
      return 1;
    }
    *(undefined4 *)((int)this + 0x234) = 1;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    return 1;
  }
  return 1;
}

/* 1002f8d0  FUN_1002f8d0  (71 bytes)
 * undefined4 FUN_1002f8d0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_1002f3a0
 */
undefined4 __thiscall
FUN_1002f8d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  if ((0 < (int)uVar1) && ((int)uVar1 < 8)) {
    iVar2 = FUN_10029a50();
    *(int *)((int)this + uVar1 * 4 + 0x214) = iVar2;
    *(undefined4 *)((int)this + 0x234) = 1;
  }
  return 1;
}

/* 1002f920  FUN_1002f920  (222 bytes)
 * undefined FUN_1002f920(float * param_1, float * param_2)
 * called by: FUN_10024160, FUN_10030970
 */
void __cdecl FUN_1002f920(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar6 = (float10)fsin((float10)param_1[1] * (float10)0.017453292519943295);
  fVar1 = (float)fVar6;
  fVar6 = (float10)fcos((float10)param_1[1] * (float10)0.017453292519943295);
  fVar7 = (float10)fsin((float10)*param_1 * (float10)0.017453292519943295);
  fVar2 = (float)fVar7;
  fVar7 = (float10)fcos((float10)*param_1 * (float10)0.017453292519943295);
  fVar3 = (float)fVar7;
  fVar4 = param_1[2];
  fVar7 = (float10)fsin((float10)fVar4 * (float10)0.017453292519943295);
  param_2[3] = 0.0;
  param_2[7] = 0.0;
  param_2[0xb] = 0.0;
  fVar5 = (float)fVar7;
  fVar7 = (float10)fcos((float10)fVar4 * (float10)0.017453292519943295);
  fVar4 = (float)fVar7;
  *param_2 = (float)((float10)fVar3 * fVar6);
  param_2[4] = fVar3 * fVar1;
  param_2[8] = -fVar2;
  param_2[1] = (float)((float10)fVar5 * (float10)fVar2 * fVar6 - (float10)fVar4 * (float10)fVar1);
  param_2[5] = (float)((float10)fVar4 * fVar6 + (float10)fVar5 * (float10)fVar2 * (float10)fVar1);
  param_2[9] = fVar5 * fVar3;
  param_2[2] = (float)((float10)fVar5 * (float10)fVar1 + (float10)fVar4 * (float10)fVar2 * fVar6);
  param_2[6] = (float)((float10)fVar4 * (float10)fVar2 * (float10)fVar1 - (float10)fVar5 * fVar6);
  param_2[10] = fVar4 * fVar3;
  return;
}

/* 1002fa00  FUN_1002fa00  (45 bytes)
 * undefined4 FUN_1002fa00(int param_1, float * param_2)
 * called by: FUN_1002d7e0, FUN_10030380
 */
undefined4 __cdecl FUN_1002fa00(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1 - (int)param_2;
  do {
    if (*(float *)(iVar2 + (int)param_2) != *param_2) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 < 3);
  return 1;
}

/* 1002fa30  FUN_1002fa30  (92 bytes)
 * undefined FUN_1002fa30(float * param_1, float * param_2, float * param_3)
 * called by: FUN_10024160, FUN_10034560
 */
void __cdecl FUN_1002fa30(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_1 * *param_2 + param_2[2] * param_1[2] + param_2[1] * param_1[1] + param_2[3];
  param_3[1] = param_2[6] * param_1[2] + param_2[5] * param_1[1] + param_2[4] * *param_1 +
               param_2[7];
  param_3[2] = param_2[10] * param_1[2] + param_2[9] * param_1[1] + param_2[8] * *param_1 +
               param_2[0xb];
  return;
}

/* 1002fa90  FUN_1002fa90  (314 bytes)
 * undefined FUN_1002fa90(float * param_1, float * param_2, float * param_3)
 * called by: FUN_10030970, FUN_10031080, FUN_10031890
 */
void __cdecl FUN_1002fa90(float *param_1,float *param_2,float *param_3)

{
  *param_3 = param_1[2] * param_2[8] + param_1[1] * param_2[4] + *param_1 * *param_2;
  param_3[1] = param_2[9] * param_1[2] + param_2[1] * *param_1 + param_1[1] * param_2[5];
  param_3[2] = param_2[10] * param_1[2] + param_2[2] * *param_1 + param_1[1] * param_2[6];
  param_3[3] = param_2[0xb] * param_1[2] + param_2[3] * *param_1 + param_1[1] * param_2[7] +
               param_1[3];
  param_3[4] = param_1[4] * *param_2 + param_1[5] * param_2[4] + param_1[6] * param_2[8];
  param_3[5] = param_1[4] * param_2[1] + param_1[5] * param_2[5] + param_1[6] * param_2[9];
  param_3[6] = param_1[4] * param_2[2] + param_1[5] * param_2[6] + param_1[6] * param_2[10];
  param_3[7] = param_1[4] * param_2[3] + param_1[5] * param_2[7] + param_2[0xb] * param_1[6] +
               param_1[7];
  param_3[8] = *param_2 * param_1[8] + param_1[9] * param_2[4] + param_1[10] * param_2[8];
  param_3[9] = param_2[1] * param_1[8] + param_1[9] * param_2[5] + param_1[10] * param_2[9];
  param_3[10] = param_2[2] * param_1[8] + param_1[9] * param_2[6] + param_1[10] * param_2[10];
  param_3[0xb] = param_2[3] * param_1[8] + param_1[9] * param_2[7] + param_1[10] * param_2[0xb] +
                 param_1[0xb];
  return;
}

/* 1002fbd0  FUN_1002fbd0  (150 bytes)
 * undefined FUN_1002fbd0(float * param_1, float * param_2)
 * called by: FUN_10030380, FUN_10031080
 */
void __cdecl FUN_1002fbd0(float *param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar2 = (float10)fsin((float10)param_1[2] * (float10)0.5);
  fVar1 = (float)fVar2;
  fVar2 = (float10)fcos((float10)param_1[2] * (float10)0.5);
  fVar3 = (float10)fsin((float10)param_1[1] * (float10)0.5);
  fVar4 = (float10)fcos((float10)param_1[1] * (float10)0.5);
  fVar5 = (float10)fsin((float10)*param_1 * (float10)0.5);
  fVar6 = (float10)fcos((float10)*param_1 * (float10)0.5);
  fVar7 = (float10)(float)fVar5 * fVar4;
  fVar8 = fVar6 * (float10)(float)fVar3;
  *param_2 = (float)(fVar7 * fVar2 - fVar8 * (float10)fVar1);
  param_2[1] = (float)(fVar7 * (float10)fVar1 + fVar8 * fVar2);
  fVar3 = (float10)(float)fVar5 * (float10)(float)fVar3;
  param_2[2] = (float)(fVar6 * fVar4 * (float10)fVar1 - fVar3 * fVar2);
  param_2[3] = (float)(fVar6 * fVar4 * fVar2 + fVar3 * (float10)fVar1);
  return;
}

/* 1002fc70  FUN_1002fc70  (381 bytes)
 * undefined FUN_1002fc70(float * param_1, float * param_2, float param_3, float * param_4)
 * called by: FUN_10030380, FUN_100306a0
 */
void __cdecl FUN_1002fc70(float *param_1,float *param_2,float param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  fVar2 = 0.0;
  fVar4 = 0.0;
  iVar7 = (int)param_1 - (int)param_2;
  iVar6 = 4;
  pfVar5 = param_2;
  do {
    fVar3 = *(float *)(iVar7 + (int)pfVar5) - *pfVar5;
    iVar6 = iVar6 + -1;
    fVar2 = fVar3 * fVar3 + fVar2;
    fVar3 = *(float *)(iVar7 + -4 + (int)(pfVar5 + 1)) + *pfVar5;
    fVar4 = fVar3 * fVar3 + fVar4;
    pfVar5 = pfVar5 + 1;
  } while (iVar6 != 0);
  if (fVar4 < fVar2) {
    iVar6 = 4;
    pfVar5 = param_2;
    do {
      *pfVar5 = -*pfVar5;
      pfVar5 = pfVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  fVar2 = *param_1 * *param_2 +
          param_1[1] * param_2[1] + param_1[2] * param_2[2] + param_1[3] * param_2[3];
  if (1e-06 < fVar2 + 1.0) {
    if (1.0 - fVar2 <= 1e-06) {
      fVar10 = (float10)1.0 - (float10)param_3;
      fVar8 = (float10)param_3;
    }
    else {
      fVar8 = (float10)FUN_1006c6b0();
      fVar9 = (float10)fsin(fVar8);
      fVar10 = (float10)fsin(((float10)1.0 - (float10)param_3) * (float10)(float)fVar8);
      fVar10 = fVar10 / (float10)(float)fVar9;
      fVar8 = (float10)fsin((float10)(float)fVar8 * (float10)param_3);
      fVar8 = fVar8 / (float10)(float)fVar9;
    }
    iVar6 = 4;
    pfVar5 = param_2;
    do {
      pfVar1 = (float *)((int)pfVar5 + iVar7);
      fVar2 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      iVar6 = iVar6 + -1;
      *(float *)((int)param_4 + (-4 - (int)param_2) + (int)pfVar5) =
           (float)(fVar8 * (float10)fVar2 + fVar10 * (float10)*pfVar1);
    } while (iVar6 != 0);
    return;
  }
  *param_4 = -param_2[1];
  param_4[1] = *param_2;
  param_4[2] = -param_2[3];
  param_4[3] = param_2[2];
  iVar6 = 3;
  fVar10 = (float10)fsin(((float10)1.0 - (float10)param_3) * (float10)1.5707963267948966);
  fVar8 = (float10)fsin((float10)param_3 * (float10)1.5707963267948966);
  pfVar5 = param_4;
  do {
    iVar6 = iVar6 + -1;
    *pfVar5 = (float)(fVar8 * (float10)*pfVar5 +
                     fVar10 * (float10)*(float *)(((int)param_1 - (int)param_4) + (int)pfVar5));
    pfVar5 = pfVar5 + 1;
  } while (iVar6 != 0);
  return;
}

/* 1002fdf0  FUN_1002fdf0  (219 bytes)
 * undefined FUN_1002fdf0(float * param_1, float * param_2)
 * called by: FUN_1002ffe0, FUN_10031080, FUN_10031890
 */
void __cdecl FUN_1002fdf0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[1] * param_1[1];
  fVar2 = param_1[2] * param_1[2];
  *param_2 = (1.0 - (fVar1 + fVar1)) - (fVar2 + fVar2);
  fVar1 = *param_1 * param_1[1] + param_1[2] * param_1[3];
  param_2[4] = fVar1 + fVar1;
  param_2[8] = (param_1[2] * *param_1 + param_1[2] * *param_1) -
               (param_1[3] * param_1[1] + param_1[3] * param_1[1]);
  param_2[1] = (*param_1 * param_1[1] + *param_1 * param_1[1]) -
               (param_1[2] * param_1[3] + param_1[2] * param_1[3]);
  fVar1 = *param_1 * *param_1;
  fVar2 = param_1[2] * param_1[2];
  param_2[5] = (1.0 - (fVar1 + fVar1)) - (fVar2 + fVar2);
  fVar1 = *param_1 * param_1[3] + param_1[2] * param_1[1];
  param_2[9] = fVar1 + fVar1;
  fVar1 = param_1[3] * param_1[1] + param_1[2] * *param_1;
  param_2[2] = fVar1 + fVar1;
  param_2[6] = (param_1[2] * param_1[1] + param_1[2] * param_1[1]) -
               (*param_1 * param_1[3] + *param_1 * param_1[3]);
  fVar1 = *param_1 * *param_1;
  fVar2 = param_1[1] * param_1[1];
  param_2[10] = (1.0 - (fVar1 + fVar1)) - (fVar2 + fVar2);
  return;
}

/* 1002fed0  FUN_1002fed0  (20 bytes)
 * undefined FUN_1002fed0(undefined4 * param_1, undefined4 * param_2)
 * called by: FUN_100317b0, FUN_10031890
 */
void __cdecl FUN_1002fed0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

/* 1002fef0  FUN_1002fef0  (231 bytes)
 * undefined FUN_1002fef0(float * param_1, float * param_2)
 * called by: FUN_1002ffe0
 */
void __cdecl FUN_1002fef0(float *param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_1006c9b0();
  param_1[1] = (float)fVar1;
  fVar2 = fVar1;
  if (fVar1 <= (float10)0.0) {
    fVar2 = -fVar1;
  }
  if (fVar2 - (float10)1.5707963267948966 <= (float10)0.0) {
    if (fVar1 <= (float10)0.0) {
      fVar1 = -fVar1;
    }
    fVar1 = -(fVar1 - (float10)1.5707963267948966);
  }
  else {
    if (fVar1 <= (float10)0.0) {
      fVar1 = -fVar1;
    }
    fVar1 = fVar1 - (float10)1.5707963267948966;
  }
  if (fVar1 < (float10)0.009999999776482582) {
    *param_1 = 0.0;
    fVar2 = (float10)fpatan(-(float10)param_2[1],(float10)param_2[5]);
    param_1[2] = (float)fVar2;
    return;
  }
  fVar2 = (float10)fpatan((float10)param_2[9],(float10)param_2[10]);
  *param_1 = (float)fVar2;
  fVar2 = (float10)fpatan((float10)param_2[4],(float10)*param_2);
  param_1[2] = (float)fVar2;
  return;
}

/* 1002ffe0  FUN_1002ffe0  (37 bytes)
 * undefined FUN_1002ffe0(float * param_1, float * param_2)
 * called by: FUN_10031080
 */
void __cdecl FUN_1002ffe0(float *param_1,float *param_2)

{
  float local_30 [12];
  
  FUN_1002fdf0(param_1,local_30);
  FUN_1002fef0(param_2,local_30);
  return;
}

/* 10030010  FUN_10030010  (31 bytes)
 * undefined FUN_10030010(undefined4 * param_1, undefined4 * param_2)
 * called by: FUN_10031080
 */
void __cdecl FUN_10030010(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}

/* 10030030  FUN_10030030  (127 bytes)
 * undefined FUN_10030030(int param_1)
 * called by: FUN_1001f3e0
 */
void __fastcall FUN_10030030(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_100ea7ec)(s_cl_himodels_10094d10);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = (*DAT_100ea7ec)(s_developer_10094d04);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = (*DAT_100ea7ec)(s__r_drawentities_10094cf3 + 1);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = (*DAT_100ea7f4)();
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  (*DAT_100ea7f8)(param_1 + 0x4098,param_1 + 0x409c);
  uVar1 = (*DAT_100ea800)();
  *(undefined4 *)(param_1 + 0x40a8) = uVar1;
  uVar1 = (*DAT_100ea804)();
  *(undefined4 *)(param_1 + 0x40ac) = uVar1;
  uVar1 = (*DAT_100ea808)();
  *(undefined4 *)(param_1 + 0x40a4) = uVar1;
  uVar1 = (*DAT_100ea80c)();
  *(undefined4 *)(param_1 + 0x40a0) = uVar1;
  return;
}

/* 100300b0  FUN_100300b0  (88 bytes)
 * undefined FUN_100300b0(undefined4 * param_1)
 * called by: FUN_1001f370
 */
void __fastcall FUN_100300b0(undefined4 *param_1)

{
  param_1[6] = 1;
  param_1[7] = 1;
  *param_1 = &PTR_FUN_1007d5f8;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x16] = 0;
  param_1[0x1026] = 0;
  param_1[0x1027] = 0;
  param_1[0x1028] = 0;
  param_1[0x1029] = 0;
  param_1[0x102a] = 0;
  param_1[0x102b] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  return;
}

/* 10030110  FUN_10030110  (30 bytes)
 * undefined4 * FUN_10030110(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_10030110(void *this,byte_conflict param_1)

{
  FUN_10030130(this);
  if ((param_1 & 1) != 0) {
    FUN_1006ad4c(this);
  }
  return this;
}

/* 10030130  FUN_10030130  (7 bytes)
 * undefined FUN_10030130(undefined4 * param_1)
 * called by: FUN_10030110
 */
void __fastcall FUN_10030130(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1007d5f8;
  return;
}

/* 10030140  FUN_10030140  (532 bytes)
 * undefined FUN_10030140()
 */
/* WARNING: Removing unreachable block (ram,0x100301da) */
/* WARNING: Removing unreachable block (ram,0x10030208) */

void __thiscall
FUN_10030140(int param_1,float param_2,float *param_3,float *param_4,int param_5,byte param_6)

{
  int iVar1;
  float fVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  char *pcVar7;
  int iStack_c;
  
  pcVar3 = (char *)param_4;
  iVar1 = *(int *)(param_1 + 0x44);
  iStack_c = 0;
  if (0 < *(int *)(iVar1 + 0x94)) {
    param_4 = param_3;
    pfVar6 = (float *)(*(int *)(iVar1 + 0x98) + iVar1 + 8);
    pcVar7 = pcVar3;
    do {
      fVar2 = pfVar6[3];
      if ((int)fVar2 < 4) {
        if (((uint)pfVar6[-1] & 0x8000) == 0) {
          fVar2 = ((float)(byte)pcVar3[(int)fVar2] * param_2 +
                  (1.0 - param_2) * (float)*(byte *)((int)fVar2 + param_5)) * 0.003921569;
          if (fVar2 < 0.0) {
            fVar2 = 0.0;
          }
          goto joined_r0x100302cf;
        }
        uVar4 = (uint)(byte)pcVar3[(int)fVar2] - (uint)*(byte *)((int)fVar2 + param_5);
        uVar5 = (int)uVar4 >> 0x1f;
        if ((int)((uVar4 ^ uVar5) - uVar5) < 0x81) {
          fVar2 = ((float)(byte)pcVar3[(int)fVar2] * param_2 +
                  (1.0 - param_2) * (float)*(byte *)((int)fVar2 + param_5)) * 1.40625 + *pfVar6;
        }
        else {
          fVar2 = (((float)(byte)(*pcVar7 + 0x80) * param_2 +
                   (1.0 - param_2) * (float)(byte)(pcVar7[param_5 - (int)pcVar3] + 0x80)) - 128.0) *
                  1.40625 + *pfVar6;
        }
      }
      else {
        fVar2 = (float)param_6 * 0.015625;
joined_r0x100302cf:
        if (1.0 < fVar2) {
          fVar2 = 1.0;
        }
        fVar2 = fVar2 * pfVar6[1] + (1.0 - fVar2) * *pfVar6;
      }
      switch((uint)pfVar6[-1] & 0x7fff) {
      case 1:
      case 2:
      case 4:
        *param_4 = fVar2;
        break;
      default:
        break;
      case 8:
      case 0x10:
      case 0x20:
        *param_4 = fVar2 * 0.017453292;
      }
      param_4 = param_4 + 1;
      iStack_c = iStack_c + 1;
      pcVar7 = pcVar7 + 1;
      pfVar6 = pfVar6 + 6;
    } while (iStack_c < *(int *)(*(int *)(param_1 + 0x44) + 0x94));
  }
  return;
}

/* 10030380  FUN_10030380  (450 bytes)
 * undefined FUN_10030380()
 */
void FUN_10030380(int param_1,float param_2,ushort *param_3,int param_4,int param_5,float *param_6)

{
  byte *pbVar1;
  float fVar2;
  byte bVar3;
  float fVar4;
  byte *pbVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float afStack_38 [10];
  float afStack_10 [4];
  
  pfVar7 = (float *)((int)param_3 + 0x4c);
  iVar9 = 0;
  param_3 = (ushort *)(param_4 + 6);
  do {
    if (*param_3 == 0) {
      fVar2 = *pfVar7;
      *(float *)((int)afStack_38 + iVar9 + 0xc) = fVar2;
    }
    else {
      pbVar5 = (byte *)((uint)*param_3 + param_4);
      bVar3 = *pbVar5;
      iVar8 = param_1;
      if (pbVar5[1] < bVar3) {
        iVar8 = 0;
      }
      uVar6 = (uint)pbVar5[1];
      if ((int)uVar6 <= iVar8) {
        do {
          iVar8 = iVar8 - uVar6;
          pbVar1 = pbVar5 + (uint)bVar3 * 2 + 3;
          pbVar5 = pbVar5 + (uint)bVar3 * 2 + 2;
          bVar3 = *pbVar5;
          if (*pbVar1 < bVar3) {
            iVar8 = 0;
          }
          uVar6 = (uint)*pbVar1;
        } while ((int)uVar6 <= iVar8);
      }
      if (iVar8 < (int)(uint)*pbVar5) {
        fVar2 = (float)(int)*(short *)(pbVar5 + iVar8 * 2 + 2);
        *(float *)((int)afStack_38 + iVar9 + 0xc) = fVar2;
        if (iVar8 + 1 < (int)(uint)*pbVar5) {
          fVar2 = (float)(int)*(short *)(pbVar5 + iVar8 * 2 + 4);
        }
        else if ((int)(uint)pbVar5[1] <= iVar8 + 1) {
          fVar2 = (float)(int)*(short *)(pbVar5 + (uint)*pbVar5 * 2 + 4);
        }
      }
      else {
        fVar2 = (float)(int)*(short *)(pbVar5 + (uint)*pbVar5 * 2);
        *(float *)((int)afStack_38 + iVar9 + 0xc) = fVar2;
        if ((int)(uint)pbVar5[1] <= iVar8 + 1) {
          fVar2 = (float)(int)*(short *)(pbVar5 + (uint)*pbVar5 * 2 + 4);
        }
      }
      *(float *)((int)afStack_38 + iVar9) = fVar2;
      *(float *)((int)afStack_38 + iVar9 + 0xc) =
           pfVar7[6] * *(float *)((int)afStack_38 + iVar9 + 0xc) + *pfVar7;
      fVar2 = pfVar7[6] * *(float *)((int)afStack_38 + iVar9) + *pfVar7;
    }
    fVar4 = pfVar7[-6];
    *(float *)((int)afStack_38 + iVar9) = fVar2;
    if (fVar4 != -NAN) {
      *(float *)((int)afStack_38 + iVar9 + 0xc) =
           *(float *)((int)afStack_38 + iVar9 + 0xc) + *(float *)(param_5 + (int)fVar4 * 4);
      *(float *)((int)afStack_38 + iVar9) =
           *(float *)(param_5 + (int)fVar4 * 4) + *(float *)((int)afStack_38 + iVar9);
    }
    iVar9 = iVar9 + 4;
    param_3 = param_3 + 1;
    pfVar7 = pfVar7 + 1;
  } while (iVar9 < 0xc);
  iVar9 = FUN_1002fa00((int)(afStack_38 + 3),afStack_38);
  if (iVar9 == 0) {
    FUN_1002fbd0(afStack_38 + 3,afStack_10);
    FUN_1002fbd0(afStack_38,afStack_38 + 6);
    FUN_1002fc70(afStack_10,afStack_38 + 6,param_2,param_6);
    return;
  }
  FUN_1002fbd0(afStack_38 + 3,param_6);
  return;
}

/* 10030550  FUN_10030550  (336 bytes)
 * undefined FUN_10030550()
 */
void FUN_10030550(int param_1,float param_2,int param_3,ushort *param_4,int param_5,float *param_6)

{
  int iVar1;
  byte *pbVar2;
  float fVar3;
  byte bVar4;
  short sVar5;
  byte *pbVar6;
  uint uVar7;
  ushort *puVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  
  pfVar11 = param_6;
  pfVar9 = (float *)(param_3 + 0x58);
  param_6 = (float *)0x3;
  puVar8 = param_4;
  do {
    fVar3 = pfVar9[-6];
    *pfVar11 = fVar3;
    if (*puVar8 != 0) {
      pbVar6 = (byte *)((uint)*puVar8 + (int)param_4);
      bVar4 = *pbVar6;
      iVar10 = param_1;
      if (pbVar6[1] < bVar4) {
        iVar10 = 0;
      }
      uVar7 = (uint)pbVar6[1];
      if ((int)uVar7 <= iVar10) {
        do {
          iVar10 = iVar10 - uVar7;
          pbVar2 = pbVar6 + (uint)bVar4 * 2 + 3;
          pbVar6 = pbVar6 + (uint)bVar4 * 2 + 2;
          bVar4 = *pbVar6;
          if (*pbVar2 < bVar4) {
            iVar10 = 0;
          }
          uVar7 = (uint)*pbVar2;
        } while ((int)uVar7 <= iVar10);
      }
      uVar7 = (uint)*pbVar6;
      if (iVar10 < (int)uVar7) {
        iVar1 = iVar10 + 1;
        if (iVar1 < (int)uVar7) {
          *pfVar11 = fVar3 + ((float)(int)*(short *)(pbVar6 + iVar10 * 2 + 4) * param_2 +
                             (1.0 - param_2) * (float)(int)*(short *)(pbVar6 + iVar1 * 2)) * *pfVar9
          ;
        }
        else {
          sVar5 = *(short *)(pbVar6 + iVar1 * 2);
LAB_10030661:
          *pfVar11 = (float)(int)sVar5 * *pfVar9 + fVar3;
        }
      }
      else {
        if (iVar10 + 1 < (int)(uint)pbVar6[1]) {
          sVar5 = *(short *)(pbVar6 + uVar7 * 2);
          goto LAB_10030661;
        }
        *pfVar11 = fVar3 + ((float)(int)*(short *)(pbVar6 + uVar7 * 2 + 4) * param_2 +
                           (1.0 - param_2) * (float)(int)*(short *)(pbVar6 + uVar7 * 2)) * *pfVar9;
      }
    }
    if ((pfVar9[-0xc] != -NAN) && (param_5 != 0)) {
      *pfVar11 = *(float *)(param_5 + (int)pfVar9[-0xc] * 4) + *pfVar11;
    }
    puVar8 = puVar8 + 1;
    pfVar9 = pfVar9 + 1;
    pfVar11 = pfVar11 + 1;
    param_6 = (float *)((int)param_6 + -1);
    if (param_6 == (float *)0x0) {
      return;
    }
  } while( true );
}

/* 100306a0  FUN_100306a0  (307 bytes)
 * undefined FUN_100306a0(int param_1, int param_2, float * param_3, float * param_4, float param_5)
 */
void __thiscall
FUN_100306a0(void *this,int param_1,int param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int local_18;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pfVar2 = param_4;
  if (0.0 <= param_5) {
    if (1.0 < param_5) {
      param_5 = 1.0;
    }
  }
  else {
    param_5 = 0.0;
  }
  local_18 = 0;
  fVar1 = 1.0 - param_5;
  if (0 < *(int *)(*(int *)((int)this + 0x44) + 0x8c)) {
    param_4 = param_3;
    puVar5 = (undefined4 *)(param_1 + 8);
    pfVar3 = pfVar2;
    pfVar4 = (float *)(param_2 + 4);
    do {
      FUN_1002fc70((float *)(puVar5 + -2),param_4,param_5,&local_10);
      puVar5[-2] = local_10;
      puVar5[-1] = local_c;
      *puVar5 = local_8;
      puVar5[1] = local_4;
      local_18 = local_18 + 1;
      param_4 = param_4 + 4;
      puVar5 = puVar5 + 4;
      pfVar4[-1] = param_5 * *pfVar3 + fVar1 * pfVar4[-1];
      *pfVar4 = fVar1 * *pfVar4 + param_5 * *(float *)(((int)pfVar2 - param_2) + (int)pfVar4);
      pfVar4[1] = fVar1 * pfVar4[1] + param_5 * pfVar3[2];
      pfVar3 = pfVar3 + 3;
      pfVar4 = pfVar4 + 3;
    } while (local_18 < *(int *)(*(int *)((int)this + 0x44) + 0x8c));
  }
  return;
}

/* 100307e0  FUN_100307e0  (161 bytes)
 * undefined FUN_100307e0()
 */
int __thiscall FUN_100307e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x44);
  iVar3 = *(int *)(iVar1 + 0xb0) + *(int *)(param_3 + 0x9c) * 0x68 + iVar1;
  if (*(int *)(param_3 + 0x9c) == 0) {
    return *(int *)(iVar3 + 100) + *(int *)(param_3 + 0x7c) + iVar1;
  }
  iVar1 = *(int *)(param_2 + 0x7c);
  if (iVar1 == 0) {
    iVar1 = (*DAT_100ea7c0)(0x10,4);
    *(int *)(param_2 + 0x7c) = iVar1;
  }
  iVar2 = (*DAT_100ea7c4)(iVar1 + *(int *)(param_3 + 0x9c) * 4);
  if (iVar2 == 0) {
    iVar3 = iVar3 + 0x20;
    (*gEngfuncs.Con_DPrintf)(s_loading__s_10094d1c,iVar3);
    (*DAT_100ea7c8)(iVar3,iVar1 + *(int *)(param_3 + 0x9c) * 4);
  }
  return *(int *)(iVar1 + *(int *)(param_3 + 0x9c) * 4) + *(int *)(param_3 + 0x7c);
}

/* 10030890  FUN_10030890  (215 bytes)
 * undefined FUN_10030890(int param_1, int * param_2, float * param_3)
 */
void FUN_10030890(int param_1,int *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  fVar1 = (float)(int)lVar2;
  *param_2 = (int)lVar2;
  if (fVar1 < *(float *)(param_1 + 0x88)) {
    *param_3 = *param_3 - *(float *)(param_1 + 0x88) * 0.33333334;
    *param_2 = 0;
    return;
  }
  if (*(float *)(param_1 + 0x90) < fVar1) {
    *param_3 = *param_3 - *(float *)(param_1 + 0x90) * 0.33333334;
    *param_2 = 0xff;
    return;
  }
  if (*(float *)(param_1 + 0x90) - *(float *)(param_1 + 0x88) < 0.1) {
    *param_2 = 0x7f;
    *param_3 = 0.0;
    return;
  }
  lVar2 = __ftol();
  *param_2 = (int)lVar2;
  *param_3 = 0.0;
  return;
}

/* 10030970  FUN_10030970  (719 bytes)
 * undefined FUN_10030970()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10030970(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float afStack_18 [6];
  
  pfVar6 = (float *)&stack0xffffffe4;
  iVar8 = *(int *)(param_1 + 0x30);
  afStack_18[3] = *(float *)(iVar8 + 0xb48);
  afStack_18[4] = *(float *)(iVar8 + 0xb4c);
  afStack_18[5] = *(float *)(iVar8 + 0xb50);
  afStack_18[2] = (float)*(undefined4 *)(iVar8 + 0x2d4);
  afStack_18[0] = *(float *)(iVar8 + 0x2cc);
  afStack_18[1] = (float)*(undefined4 *)(iVar8 + 0x2d0);
  if (*(int *)(iVar8 + 0x308) == 4) {
    fVar3 = 0.0;
    if (((float)*(double *)(param_1 + 8) < *(float *)(iVar8 + 0x30c) + 1.0) &&
       (fVar3 = 0.0, *(float *)(iVar8 + 0x30c) != *(float *)(iVar8 + 0xb10))) {
      fVar3 = ((float)*(double *)(param_1 + 8) - *(float *)(iVar8 + 0x30c)) /
              (*(float *)(iVar8 + 0x30c) - *(float *)(iVar8 + 0xb10));
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = fVar3 - 1.0;
    }
    pfVar5 = (float *)(iVar8 + 0xb1c);
    iVar7 = 3;
    pfVar4 = afStack_18 + 3;
    do {
      pfVar1 = pfVar5 + 0xb;
      fVar2 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      iVar7 = iVar7 + -1;
      *pfVar4 = (*pfVar1 - fVar2) * fVar3 + *pfVar4;
      pfVar4 = pfVar4 + 1;
    } while (iVar7 != 0);
    pfVar5 = (float *)(iVar8 + 0xb28);
    iVar8 = 3;
    do {
      pfVar6 = pfVar6 + 1;
      fVar2 = pfVar5[0xb] - *pfVar5;
      if (fVar2 <= 180.0) {
        if (fVar2 < -180.0) {
          fVar2 = fVar2 + 360.0;
        }
      }
      else {
        fVar2 = fVar2 - 360.0;
      }
      pfVar5 = pfVar5 + 1;
      iVar8 = iVar8 + -1;
      *pfVar6 = fVar2 * fVar3 + *pfVar6;
    } while (iVar8 != 0);
  }
  else if (*(int *)(iVar8 + 0x308) != 0) {
    afStack_18[0] = *(float *)(iVar8 + 0xb54);
    afStack_18[1] = *(float *)(iVar8 + 0xb58);
    afStack_18[2] = *(float *)(iVar8 + 0xb5c);
  }
  afStack_18[0] = -afStack_18[0];
  FUN_1002f920(afStack_18,*(float **)(param_1 + 0x40a0));
  iVar8 = (*DAT_100ea860)();
  if (iVar8 == 0) {
    _DAT_100e7b90 = *(undefined4 *)(param_1 + 0x4074);
    _DAT_100e7b94 = *(undefined4 *)(param_1 + 0x4078);
    _DAT_100e7b98 = *(undefined4 *)(param_1 + 0x407c);
    _DAT_100e7ba0 = *(undefined4 *)(param_1 + 0x4068);
    _DAT_100e7ba4 = *(undefined4 *)(param_1 + 0x406c);
    _DAT_100e7ba8 = *(undefined4 *)(param_1 + 0x4070);
    FUN_100583c0((float *)&DAT_100e7ba0);
    _DAT_100e7bb0 = *(undefined4 *)(param_1 + 0x4080);
    _DAT_100e7bb4 = *(undefined4 *)(param_1 + 0x4084);
    _DAT_100e7bb8 = *(undefined4 *)(param_1 + 0x4088);
    *(float *)(*(int *)(param_1 + 0x40a0) + 0xc) = afStack_18[3] - *(float *)(param_1 + 0x408c);
    *(float *)(*(int *)(param_1 + 0x40a0) + 0x1c) = afStack_18[4] - *(float *)(param_1 + 0x4090);
    *(float *)(*(int *)(param_1 + 0x40a0) + 0x2c) = afStack_18[5] - *(float *)(param_1 + 0x4094);
    FUN_1002fa90((float *)&DAT_100e7b90,*(float **)(param_1 + 0x40a0),*(float **)(param_1 + 0x40a4))
    ;
    if (param_2 != 0) {
      iVar8 = 0x20;
      do {
        *(float *)(iVar8 + -0x20 + *(int *)(param_1 + 0x40a4)) =
             *(float *)(param_1 + 0x4060) * *(float *)(iVar8 + -0x20 + *(int *)(param_1 + 0x40a4)) *
             4.656613e-10;
        *(float *)(iVar8 + -0x10 + *(int *)(param_1 + 0x40a4)) =
             *(float *)(iVar8 + -0x10 + *(int *)(param_1 + 0x40a4)) * *(float *)(param_1 + 0x4064) *
             4.656613e-10;
        pfVar6 = (float *)(iVar8 + *(int *)(param_1 + 0x40a4));
        pfVar5 = (float *)(iVar8 + *(int *)(param_1 + 0x40a4));
        iVar8 = iVar8 + 4;
        *pfVar5 = *pfVar6 * 4.656613e-10;
      } while (iVar8 < 0x30);
    }
  }
  *(float *)(*(int *)(param_1 + 0x40a0) + 0xc) = afStack_18[3];
  *(float *)(*(int *)(param_1 + 0x40a0) + 0x1c) = afStack_18[4];
  *(float *)(*(int *)(param_1 + 0x40a0) + 0x2c) = afStack_18[5];
  return;
}

/* 10030c40  FUN_10030c40  (82 bytes)
 * undefined FUN_10030c40()
 */
float10 __fastcall FUN_10030c40(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)1.0;
  if (((*(int *)(param_1 + 0x18) != 0) &&
      (iVar1 = *(int *)(param_1 + 0x30),
      *(float *)(iVar1 + 0xb10) + 0.01 <= *(float *)(iVar1 + 0x30c))) &&
     (fVar2 = ((float10)*(double *)(param_1 + 8) - (float10)*(float *)(iVar1 + 0x30c)) *
              (float10)10.0, (float10)2.0 < fVar2)) {
    fVar2 = (float10)2.0;
  }
  return fVar2;
}

/* 10030ca0  FUN_10030ca0  (443 bytes)
 * undefined FUN_10030ca0()
 */
void __thiscall FUN_10030ca0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 extraout_ECX;
  undefined4 unaff_EBP;
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined1 *puVar4;
  int iVar5;
  float fVar6;
  undefined1 *puStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined1 auStack_20 [16];
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  uStack_40 = 0x10030cf0;
  __ftol();
  uStack_40 = 0x10030cfb;
  fVar3 = (float10)(**(code **)(*param_1 + 0x30))();
  fVar6 = (float)fVar3;
  iVar2 = *(int *)(param_1[0x11] + 0x90) + param_1[0x11];
  iStack_48 = param_1[0xc];
  uStack_40 = CONCAT31((int3)((uint)extraout_ECX >> 8),*(undefined1 *)(iStack_48 + 0xb08));
  iStack_44 = iStack_48 + 0xb3c;
  iStack_48 = iStack_48 + 0x318;
  puStack_4c = auStack_20;
  (**(code **)(*param_1 + 0x40))(fVar6);
  iVar1 = 0;
  if (0 < *(int *)(param_1[0x11] + 0x8c)) {
    do {
      puVar4 = &stack0xffffffcc;
      iVar5 = iStack_c;
      (**(code **)(*param_1 + 0x44))(uStack_40,unaff_EBP,iVar2,iStack_4,puVar4,iStack_c);
      (**(code **)(*param_1 + 0x48))(puVar4,fVar6,iVar2,iStack_4,&puStack_4c,iVar5);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x70;
      param_4 = iStack_8;
      iStack_4 = iStack_4 + 0xc;
      iStack_c = iStack_c + 0x10;
    } while (iVar1 < *(int *)(param_1[0x11] + 0x8c));
  }
  if ((*(byte *)(param_4 + 0x44) & 1) != 0) {
    *(undefined4 *)(iStack_10 + *(int *)(param_4 + 0x48) * 0xc) = 0;
  }
  if ((*(byte *)(param_4 + 0x44) & 2) != 0) {
    *(undefined4 *)(iStack_10 + 4 + *(int *)(param_4 + 0x48) * 0xc) = 0;
  }
  if ((*(byte *)(param_4 + 0x44) & 4) != 0) {
    *(undefined4 *)(iStack_10 + 8 + *(int *)(param_4 + 0x48) * 0xc) = 0;
  }
  if ((*(byte *)(param_4 + 0x44) & 0x40) != 0) {
    *(undefined4 *)(iStack_10 + *(int *)(param_4 + 0x48) * 0xc) =
         *(undefined4 *)(iStack_10 + *(int *)(param_4 + 0x48) * 0xc);
  }
  if ((*(byte *)(param_4 + 0x44) & 0x80) != 0) {
    *(undefined4 *)(iStack_10 + 4 + *(int *)(param_4 + 0x48) * 0xc) =
         *(undefined4 *)(iStack_10 + 4 + *(int *)(param_4 + 0x48) * 0xc);
  }
  if ((*(uint *)(param_4 + 0x44) & 0x100) != 0) {
    *(undefined4 *)(iStack_10 + 8 + *(int *)(param_4 + 0x48) * 0xc) =
         *(undefined4 *)(iStack_10 + 8 + *(int *)(param_4 + 0x48) * 0xc);
  }
  return;
}

/* 10030e60  FUN_10030e60  (274 bytes)
 * undefined FUN_10030e60()
 */
void __thiscall FUN_10030e60(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float *pfVar5;
  
  iVar3 = *(int *)(param_2 + 0x304);
  if (0xe < iVar3) {
    if (iVar3 < 0x11) {
      iVar3 = (*gEngfuncs.pfnRandomLong)(0,0x31);
      if (iVar3 == 0) {
        iVar3 = (*gEngfuncs.pfnRandomLong)(0,1);
        if (iVar3 == 1) {
          iVar3 = 2;
        }
        pfVar1 = (float *)(iVar3 * 0x10 + param_3);
        pfVar5 = pfVar1;
        fVar4 = (float10)(*gEngfuncs.pfnRandomFloat)(1.0,1.484);
        FUN_100583e0(pfVar1,(float)fVar4,pfVar5);
        return;
      }
      iVar3 = (*gEngfuncs.pfnRandomLong)(0,0x31);
      if (iVar3 == 0) {
        (*gEngfuncs.pfnRandomLong)(0,1);
        fVar4 = (float10)(*gEngfuncs.pfnRandomFloat)(-10.0,10.0);
        iVar3 = (*gEngfuncs.pfnRandomLong)(0,2);
        *(float *)(iVar3 * 0x10 + 0xc + param_3) =
             (float)fVar4 + *(float *)(iVar3 * 0x10 + 0xc + param_3);
      }
    }
    else if (iVar3 == 0x12) {
      fVar2 = ((float)*(double *)(param_1 + 8) - *(float *)(param_2 + 0x30c)) * 10.0 + 1.0;
      if (2.0 < fVar2) {
        fVar2 = 2.0;
      }
      *(float *)(param_3 + 4) = fVar2 * *(float *)(param_3 + 4);
      *(float *)(param_3 + 0x14) = fVar2 * *(float *)(param_3 + 0x14);
      *(float *)(param_3 + 0x24) = fVar2 * *(float *)(param_3 + 0x24);
      return;
    }
  }
  return;
}

/* 10030f80  FUN_10030f80  (243 bytes)
 * undefined FUN_10030f80()
 */
float10 __thiscall FUN_10030f80(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 extraout_ST0;
  longlong lVar4;
  
  if ((*(int *)(param_1 + 0x18) == 0) ||
     (iVar1 = *(int *)(param_1 + 0x30), (float)*(double *)(param_1 + 8) < *(float *)(iVar1 + 0x30c))
     ) {
    fVar2 = (float10)0.0;
  }
  else {
    fVar2 = ((float10)*(double *)(param_1 + 8) - (float10)*(float *)(iVar1 + 0x30c)) *
            (float10)*(float *)(iVar1 + 0x310) * (float10)*(float *)(param_2 + 0x20);
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 < 2) {
    fVar3 = (float10)0.0;
  }
  else {
    fVar3 = (float10)(iVar1 + -1) * (float10)*(float *)(*(int *)(param_1 + 0x30) + 0x2e0) *
            (float10)0.00390625;
  }
  fVar3 = fVar3 + fVar2;
  if ((*(byte *)(param_2 + 0x24) & 1) == 0) {
    if ((float10)((double)iVar1 - 1.001) <= fVar3) {
      fVar3 = (float10)((double)iVar1 - 1.001);
    }
    if (fVar3 < (float10)0.0) {
      fVar3 = (float10)0.0;
    }
  }
  else {
    if (1 < iVar1) {
      lVar4 = __ftol();
      fVar3 = extraout_ST0 - (float10)((int)lVar4 * (iVar1 + -1));
    }
    if (fVar3 < (float10)0.0) {
      return (float10)(iVar1 + -1) + fVar3;
    }
  }
  return fVar3;
}

/* 10031080  FUN_10031080  (1829 bytes)
 * undefined FUN_10031080()
 */
void __fastcall FUN_10031080(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  float *pfVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  float unaff_ESI;
  float fVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  bool bVar13;
  float10 fVar14;
  float fVar15;
  float fVar16;
  float *pfVar17;
  byte *pbVar18;
  float fStack_78;
  float fStack_64;
  float fStack_60;
  double dStack_5c;
  float afStack_50 [3];
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  
  if (*(int *)(param_1[0x11] + 0xa4) <= *(int *)(param_1[0xc] + 0x2dc)) {
    *(undefined4 *)(param_1[0xc] + 0x2dc) = 0;
  }
  fVar9 = (float)(*(int *)(param_1[0xc] + 0x2dc) * 0xb0 + *(int *)(param_1[0x11] + 0xa8) +
                 param_1[0x11]);
  fStack_78 = fVar9;
  fVar14 = (float10)(**(code **)(*param_1 + 0x34))();
  iVar12 = param_1[0xd];
  dStack_5c = (double)fVar14;
  iVar2 = (**(code **)(*param_1 + 0x18))(iVar12,fVar9);
  fVar15 = (float)(double)CONCAT44(fStack_60,fStack_64);
  (**(code **)(*param_1 + 0x4c))(&DAT_100e6790,&DAT_100e89c0,fVar9,iVar2,fVar15);
  if (1 < *(int *)((int)fVar9 + 0x78)) {
    iVar2 = iVar2 + *(int *)(param_1[0x11] + 0x8c) * 0xc;
    (**(code **)(*param_1 + 0x4c))(&DAT_100ea86c,&DAT_100e91c0,fVar9,iVar2,fVar15);
    fVar14 = (float10)(**(code **)(*param_1 + 0x30))();
    (**(code **)(*param_1 + 0x3c))
              (&DAT_100e89c0,&DAT_100e6790,&DAT_100e91c0,&DAT_100ea86c,
               ((float)*(byte *)(param_1[0xc] + 0xb40) * (1.0 - (float)fVar14) +
               (float)*(byte *)(param_1[0xc] + 0x31c) * (float)fVar14) * 0.003921569);
    if (*(int *)((int)fVar9 + 0x78) == 4) {
      iVar2 = iVar2 + *(int *)(param_1[0x11] + 0x8c) * 0xc;
      fVar16 = fVar9;
      iVar10 = iVar2;
      (**(code **)(*param_1 + 0x4c))(&DAT_100e83c0,&DAT_100e7bc0,fVar9,iVar2,fVar15);
      iVar2 = iVar2 + *(int *)(param_1[0x11] + 0x8c) * 0xc;
      (**(code **)(*param_1 + 0x4c))(&DAT_100e7590,&DAT_100e9fc0,fVar9,iVar2,fVar15);
      fVar15 = ((float)*(byte *)(param_1[0xc] + 0xb40) * (float)(double)CONCAT44(iVar10,fVar16) +
               (float)*(byte *)(param_1[0xc] + 0x31c) * fVar15) * 0.003921569;
      (**(code **)(*param_1 + 0x3c))(&DAT_100e7bc0,&DAT_100e83c0,&DAT_100e9fc0,&DAT_100e7590,fVar15)
      ;
      (**(code **)(*param_1 + 0x3c))
                (&DAT_100e89c0,&DAT_100e6790,&DAT_100e7bc0,&DAT_100e83c0,
                 ((float)*(byte *)(param_1[0xc] + 0xb41) * (float)(double)CONCAT44(iVar2,fVar9) +
                 (float)*(byte *)(param_1[0xc] + 0x31d) * fVar15) * 0.003921569);
    }
  }
  if (((param_1[6] != 0) && (iVar2 = param_1[0xc], *(float *)(iVar2 + 0xb14) != 0.0)) &&
     ((float)*(double *)(param_1 + 2) < *(float *)(iVar2 + 0xb14) + 0.2)) {
    iVar10 = param_1[0x11];
    if (*(int *)(iVar2 + 0xb34) < *(int *)(iVar10 + 0xa4)) {
      iVar10 = *(int *)(iVar2 + 0xb34) * 0xb0 + *(int *)(iVar10 + 0xa8) + iVar10;
      iVar2 = (**(code **)(*param_1 + 0x18))(param_1[0xd],iVar10);
      (**(code **)(*param_1 + 0x4c))
                (&DAT_100e5990,&DAT_100e6d90,iVar10,iVar2,*(undefined4 *)(param_1[0xc] + 0xb38));
      if (1 < *(int *)(iVar10 + 0x78)) {
        iVar2 = iVar2 + *(int *)(param_1[0x11] + 0x8c) * 0xc;
        (**(code **)(*param_1 + 0x4c))
                  (&DAT_100ea86c,&DAT_100e91c0,iVar10,iVar2,*(undefined4 *)(param_1[0xc] + 0xb38));
        (**(code **)(*param_1 + 0x3c))
                  (&DAT_100e6d90,&DAT_100e5990,&DAT_100e91c0,&DAT_100ea86c,
                   (float)*(byte *)(param_1[0xc] + 0xb18) * 0.003921569);
        if (*(int *)(iVar10 + 0x78) == 4) {
          iVar2 = iVar2 + *(int *)(param_1[0x11] + 0x8c) * 0xc;
          (**(code **)(*param_1 + 0x4c))
                    (&DAT_100e83c0,&DAT_100e7bc0,iVar10,iVar2,*(undefined4 *)(param_1[0xc] + 0xb38))
          ;
          (**(code **)(*param_1 + 0x4c))
                    (&DAT_100e7590,&DAT_100e9fc0,iVar10,iVar2 + *(int *)(param_1[0x11] + 0x8c) * 0xc
                     ,*(undefined4 *)(param_1[0xc] + 0xb38));
          (**(code **)(*param_1 + 0x3c))
                    (&DAT_100e7bc0,&DAT_100e83c0,&DAT_100e9fc0,&DAT_100e7590,
                     (float)*(byte *)(param_1[0xc] + 0xb18) * 0.003921569);
          (**(code **)(*param_1 + 0x3c))
                    (&DAT_100e6d90,&DAT_100e5990,&DAT_100e7bc0,&DAT_100e83c0,
                     (float)*(byte *)(param_1[0xc] + 0xb19) * 0.003921569);
        }
      }
      (**(code **)(*param_1 + 0x3c))
                (&DAT_100e89c0,&DAT_100e6790,&DAT_100e6d90,&DAT_100e5990,
                 1.0 - ((float)*(double *)(param_1 + 2) - *(float *)(param_1[0xc] + 0xb14)) * 5.0);
      goto LAB_100314ab;
    }
  }
  *(int *)(param_1[0xc] + 0xb38) = iVar12;
LAB_100314ab:
  pbVar7 = (byte *)(*(int *)(param_1[0x11] + 0x90) + param_1[0x11]);
  pbVar18 = pbVar7;
  FUN_10030010(&fStack_60,&DAT_100e89c0);
  pbVar4 = pbVar7;
  if ((param_1[0xe] != 0) && (iVar2 = *(int *)(param_1[0xe] + 0x17c), iVar2 != 0)) {
    iVar2 = iVar2 * 0xb0 + *(int *)(param_1[0x11] + 0xa8) + param_1[0x11];
    uVar3 = (**(code **)(*param_1 + 0x18))(param_1[0xd],iVar2);
    (**(code **)(*param_1 + 0x4c))
              (&DAT_100ea86c,&DAT_100e91c0,iVar2,uVar3,*(undefined4 *)(param_1[0xe] + 0x180));
    iVar2 = 0;
    if (0 < *(int *)(param_1[0x11] + 0x8c)) {
      iVar12 = 0;
      iVar10 = 0;
      do {
        pcVar11 = s_Bip01_Dorso_10094d34;
        pbVar4 = pbVar7;
        do {
          bVar1 = *pbVar4;
          bVar13 = bVar1 < (byte)*pcVar11;
          if (bVar1 != *pcVar11) {
LAB_10031568:
            iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_1003156d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar13 = bVar1 < (byte)pcVar11[1];
          if (bVar1 != pcVar11[1]) goto LAB_10031568;
          pbVar4 = pbVar4 + 2;
          pcVar11 = pcVar11 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_1003156d:
        if (iVar5 == 0) {
LAB_10031616:
          FUN_1002ffe0(&fStack_60,(float *)&stack0xffffff94);
          FUN_1002ffe0((float *)&DAT_100e89c0,&fStack_78);
          fVar15 = fStack_64 - unaff_ESI;
          FUN_1002ffe0((float *)(&DAT_100e89c0 + iVar2 * 4),&fStack_78);
          fStack_78 = fStack_78 + fVar15;
          FUN_1002fbd0(&fStack_78,(float *)(&DAT_100e89c0 + iVar2 * 4));
          pbVar4 = pbVar18;
          break;
        }
        pcVar11 = s_Bip01_Spine_10094d28;
        pbVar4 = pbVar7;
        do {
          bVar1 = *pbVar4;
          bVar13 = bVar1 < (byte)*pcVar11;
          if (bVar1 != *pcVar11) {
LAB_100315a2:
            iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_100315a7;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar13 = bVar1 < (byte)pcVar11[1];
          if (bVar1 != pcVar11[1]) goto LAB_100315a2;
          pbVar4 = pbVar4 + 2;
          pcVar11 = pcVar11 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_100315a7:
        if (iVar5 == 0) goto LAB_10031616;
        pbVar7 = pbVar7 + 0x70;
        *(undefined4 *)((int)&DAT_100e6790 + iVar10) = *(undefined4 *)((int)&DAT_100ea86c + iVar10);
        *(undefined4 *)((int)&DAT_100e6794 + iVar10) = *(undefined4 *)((int)&DAT_100ea870 + iVar10);
        *(undefined4 *)((int)&DAT_100e6798 + iVar10) = *(undefined4 *)((int)&DAT_100ea874 + iVar10);
        *(undefined4 *)((int)&DAT_100e89c0 + iVar12) = *(undefined4 *)((int)&DAT_100e91c0 + iVar12);
        *(undefined4 *)((int)&DAT_100e89c4 + iVar12) = *(undefined4 *)((int)&DAT_100e91c4 + iVar12);
        *(undefined4 *)((int)&DAT_100e89c8 + iVar12) = *(undefined4 *)((int)&DAT_100e91c8 + iVar12);
        *(undefined4 *)((int)&DAT_100e89cc + iVar12) = *(undefined4 *)((int)&DAT_100e91cc + iVar12);
        iVar2 = iVar2 + 1;
        iVar12 = iVar12 + 0x10;
        pbVar4 = pbVar18;
        iVar10 = iVar10 + 0xc;
      } while (iVar2 < *(int *)(param_1[0x11] + 0x8c));
    }
  }
  iVar12 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1[0x11] + 0x8c)) {
    puVar8 = &DAT_100e6794;
    pfVar17 = (float *)&DAT_100e89c0;
    pbVar4 = pbVar4 + 0x20;
    do {
      FUN_1002fdf0(pfVar17,afStack_50);
      uStack_44 = puVar8[-1];
      uStack_34 = *puVar8;
      uStack_24 = puVar8[1];
      if (*(int *)pbVar4 == -1) {
        iVar10 = (*DAT_100ea860)();
        if (iVar10 == 0) {
          pfVar6 = (float *)param_1[0x1029];
        }
        else {
          pfVar6 = (float *)param_1[0x1028];
        }
        FUN_1002fa90(pfVar6,afStack_50,(float *)(param_1[0x102a] + iVar12));
        FUN_1002fa90((float *)param_1[0x1028],afStack_50,(float *)(param_1[0x102b] + iVar12));
        (**(code **)(*param_1 + 0x38))(param_1[0xc],param_1[0x102a] + iVar12);
      }
      else {
        FUN_1002fa90((float *)(*(int *)pbVar4 * 0x30 + param_1[0x102a]),afStack_50,
                     (float *)(param_1[0x102a] + iVar12));
        FUN_1002fa90((float *)(*(int *)pbVar4 * 0x30 + param_1[0x102b]),afStack_50,
                     (float *)(param_1[0x102b] + iVar12));
      }
      pfVar17 = pfVar17 + 4;
      iVar2 = iVar2 + 1;
      puVar8 = puVar8 + 3;
      iVar12 = iVar12 + 0x30;
      pbVar4 = pbVar4 + 0x70;
    } while (iVar2 < *(int *)(param_1[0x11] + 0x8c));
  }
  return;
}

/* 100317b0  FUN_100317b0  (217 bytes)
 * undefined FUN_100317b0()
 */
void __fastcall FUN_100317b0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcStack_10;
  char *pcStack_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iVar6 = 0;
  iVar2 = *(int *)(param_1 + 0x44);
  iStack_4 = 0;
  iVar3 = *(int *)(iVar2 + 0x90);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar2 + 0x8c);
  pcStack_c = (char *)(iVar3 + iVar2);
  if (0 < *(int *)(iVar2 + 0x8c)) {
    puStack_8 = (undefined4 *)(param_1 + 0x2860);
    pcStack_10 = (char *)(param_1 + 0x60);
    do {
      uVar4 = 0xffffffff;
      pcVar7 = pcStack_c;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar8 + -uVar4;
      pcVar8 = pcStack_10;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      FUN_1002fed0((undefined4 *)(*(int *)(param_1 + 0x40a8) + iVar6),puStack_8 + -0x600);
      FUN_1002fed0((undefined4 *)(*(int *)(param_1 + 0x40ac) + iVar6),puStack_8);
      pcStack_c = pcStack_c + 0x70;
      iStack_4 = iStack_4 + 1;
      pcStack_10 = pcStack_10 + 0x20;
      iVar6 = iVar6 + 0x30;
      puStack_8 = puStack_8 + 0xc;
    } while (iStack_4 < *(int *)(*(int *)(param_1 + 0x44) + 0x8c));
  }
  return;
}

/* 10031890  FUN_10031890  (582 bytes)
 * undefined FUN_10031890()
 */
void __fastcall FUN_10031890(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  float *pfVar3;
  int *this;
  int *extraout_ECX;
  undefined4 unaff_EBX;
  int iVar4;
  int *piVar5;
  float fVar6;
  int iVar7;
  undefined4 unaff_retaddr;
  float *pfVar8;
  int iVar9;
  float fStack_50;
  undefined4 uStack_40;
  int *piStack_1c;
  
  if (*(int *)(param_1[0x11] + 0xa4) <= *(int *)(param_1[0xc] + 0x2dc)) {
    *(undefined4 *)(param_1[0xc] + 0x2dc) = 0;
  }
  fVar6 = (float)(*(int *)(param_1[0xc] + 0x2dc) * 0xb0 + *(int *)(param_1[0x11] + 0xa8) +
                 param_1[0x11]);
  fStack_50 = fVar6;
  (**(code **)(*param_1 + 0x34))();
  uVar1 = (**(code **)(*param_1 + 0x18))(unaff_retaddr,fVar6);
  (**(code **)(*param_1 + 0x4c))
            (&DAT_100e99c0,&DAT_100e5f90,fVar6,uVar1,(float)(double)CONCAT44(uStack_40,unaff_EBX));
  iVar4 = param_1[0x11];
  iVar7 = 0;
  iVar9 = 0;
  if (0 < *(int *)(iVar4 + 0x8c)) {
    this = (int *)(*(int *)(iVar4 + 0x90) + iVar4 + 0x20);
    pfVar8 = (float *)&DAT_100e5f90;
    piStack_1c = this;
    do {
      iVar4 = 0;
      if (0 < param_1[0x17]) {
        piVar5 = param_1 + 0x18;
        do {
          uVar2 = FUN_10076d90(this,(byte_conflict *)(piStack_1c + -8),(byte_conflict *)piVar5);
          if (uVar2 == 0) {
            FUN_1002fed0(param_1 + iVar4 * 0xc + 0x418,(undefined4 *)(param_1[0x102a] + iVar7));
            FUN_1002fed0(param_1 + iVar4 * 0xc + 0xa18,(undefined4 *)(param_1[0x102b] + iVar7));
            break;
          }
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 8;
          this = extraout_ECX;
        } while (iVar4 < param_1[0x17]);
      }
      if (param_1[0x17] <= iVar4) {
        FUN_1002fdf0(pfVar8,&fStack_50);
        if (*piStack_1c == -1) {
          iVar4 = (*DAT_100ea860)();
          if (iVar4 == 0) {
            pfVar3 = (float *)param_1[0x1029];
          }
          else {
            pfVar3 = (float *)param_1[0x1028];
          }
          FUN_1002fa90(pfVar3,&fStack_50,(float *)(iVar7 + param_1[0x102a]));
          FUN_1002fa90((float *)param_1[0x1028],&fStack_50,(float *)(param_1[0x102b] + iVar7));
          (**(code **)(*param_1 + 0x38))(param_1[0xc],iVar7 + param_1[0x102a]);
        }
        else {
          FUN_1002fa90((float *)(*piStack_1c * 0x30 + param_1[0x102a]),&fStack_50,
                       (float *)(iVar7 + param_1[0x102a]));
          FUN_1002fa90((float *)(*piStack_1c * 0x30 + param_1[0x102b]),&fStack_50,
                       (float *)(iVar7 + param_1[0x102b]));
        }
      }
      piStack_1c = piStack_1c + 0x1c;
      pfVar8 = pfVar8 + 4;
      iVar9 = iVar9 + 1;
      this = *(int **)(param_1[0x11] + 0x8c);
      iVar7 = iVar7 + 0x30;
    } while (iVar9 < (int)this);
  }
  return;
}

/* 10031ae0  FUN_10031ae0  (1214 bytes)
 * undefined FUN_10031ae0()
 * called by: FUN_1001f3d0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10031ae0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  cl_entity_s *pcVar5;
  cl_entity_s *pcVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  vec_t *pvVar13;
  uint *puVar14;
  undefined4 *puVar15;
  vec3_t *pavVar16;
  longlong lVar17;
  uint unaff_retaddr;
  uint auStack_5c4 [4];
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_56c;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 auStack_470 [94];
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 auStack_238 [141];
  byte bStack_4;
  
  iVar4 = (*DAT_100ea7d8)();
  param_1[0xc] = iVar4;
  piVar1 = param_1 + 8;
  param_1[0xe] = 0;
  (*DAT_100ea7e8)(piVar1,param_1 + 2,param_1 + 4);
  (*DAT_100ea7f0)(param_1 + 0x1023,param_1 + 0x101a,param_1 + 0x101d,param_1 + 0x1020);
  (*DAT_100ea7fc)(param_1 + 0x1018,param_1 + 0x1019);
  if ((((DAT_1018a464 & 0x10) != 0) || (DAT_100963e8 < 0.999)) || (1.001 < DAT_100963e8)) {
    pcVar6 = (cl_entity_s *)param_1[0xc];
    pcVar5 = (*gEngfuncs.GetViewModel)();
    if (pcVar6 == pcVar5) {
      fVar3 = DAT_100963e8;
      if ((DAT_1018a464 & 8) != 0) {
        fVar3 = DAT_100963e8 * 3.5555558;
      }
      if ((DAT_1018a464 & 1) != 0) {
        fVar3 = fVar3 * 1.7142859;
      }
      if ((DAT_1018a464 & 0x10) != 0) {
        fVar3 = fVar3 * 1.5;
      }
      if ((DAT_100eae6c != *piVar1) && (_DAT_100eae70 + 0.001 < (pcVar6->latched).prevframe)) {
        _DAT_10094cf0 = fVar3;
      }
      *(float *)(param_1[0xc] + 0x310) = _DAT_10094cf0;
      _DAT_100eae70 = *(float *)(param_1[0xc] + 0xb38);
      DAT_100eae6c = *piVar1;
    }
  }
  iVar4 = param_1[0xc];
  if (*(int *)(iVar4 + 0x304) != 0x11) {
    iVar4 = *(int *)(iVar4 + 0xb94);
    param_1[0xd] = iVar4;
    iVar4 = (*DAT_100ea7d0)(iVar4);
    param_1[0x11] = iVar4;
    (*DAT_100ea84c)(iVar4);
    (*DAT_100ea850)(param_1[0xd]);
    (**(code **)(*param_1 + 0x1c))(0);
    if ((unaff_retaddr & 1) != 0) {
      iVar4 = (*DAT_100ea814)();
      if (iVar4 == 0) {
        return 0;
      }
      *(int *)param_1[0x1027] = *(int *)param_1[0x1027] + 1;
      *(int *)param_1[0x1026] = *(int *)param_1[0x1026] + 1;
      if (*(int *)(param_1[0x11] + 0xcc) == 0) {
        return 1;
      }
    }
    if (*(int *)(param_1[0xc] + 0x308) == 0xc) {
      (**(code **)(*param_1 + 0x2c))(param_1[0xd]);
    }
    else {
      (**(code **)(*param_1 + 0x20))();
    }
    (**(code **)(*param_1 + 0x28))();
    if ((bStack_4 & 2) != 0) {
      (**(code **)(*param_1 + 0x24))();
      (*DAT_100ea840)();
      if (0 < *(int *)param_1[0xc]) {
        pcVar6 = (*gEngfuncs.GetEntityByIndex)(*(int *)param_1[0xc]);
        pvVar13 = (vec_t *)(param_1[0xc] + 0xb60);
        pavVar16 = pcVar6->attachment;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          (*pavVar16)[0] = *pvVar13;
          pvVar13 = pvVar13 + 1;
          pavVar16 = (vec3_t *)(*pavVar16 + 1);
        }
      }
    }
    if ((unaff_retaddr & 1) != 0) {
      (*DAT_100ea818)(param_1[0xc],&stack0xfffffa10);
      (*DAT_100ea81c)(&stack0xfffffa10);
      (*DAT_100ea820)(&stack0xfffffa10);
      uVar12 = *(uint *)(param_1[0xc] + 0x2e4) & 0xff;
      param_1[0x14] = uVar12;
      uVar10 = *(int *)(param_1[0xc] + 0x2e4) >> 8 & 0xff;
      param_1[0x15] = uVar10;
      (*DAT_100ea838)(uVar12,uVar10);
      (**(code **)(*param_1 + 0x50))();
    }
    return 1;
  }
  if (*(char *)(iVar4 + 0x302) != '\x01') {
    if (*(char *)(iVar4 + 0x300) != '\0') {
      bVar2 = *(byte *)(param_1[0xc] + 0x300);
      iVar4 = (*gEngfuncs.GetMaxClients)();
      if ((int)(uint)bVar2 <= iVar4) {
        puVar9 = (uint *)(*DAT_100ea7e0)(bVar2 - 1);
        if (puVar9 == (uint *)0x0) {
          return 0;
        }
        iVar4 = param_1[0xc];
        puVar14 = auStack_5c4;
        for (iVar11 = 0x55; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar14 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar14 = puVar14 + 1;
        }
        auStack_5c4[1] = (uint)*(byte *)(iVar4 + 0x300);
        uStack_510 = 0;
        uStack_50c = 0;
        uStack_56c = 0;
        uStack_5a8 = *(undefined4 *)(iVar4 + 0x2cc);
        uStack_5a4 = *(undefined4 *)(iVar4 + 0x2d0);
        uStack_5a0 = *(undefined4 *)(iVar4 + 0x2d4);
        uStack_5b4 = *(undefined4 *)(iVar4 + 0x2c0);
        uStack_5b0 = *(undefined4 *)(iVar4 + 0x2c4);
        uStack_5ac = *(undefined4 *)(iVar4 + 0x2c8);
        puVar7 = (undefined4 *)(*DAT_100ea7dc)(auStack_5c4[1] - 1);
        if (puVar7 == (undefined4 *)0x0) {
          return 0;
        }
        iVar4 = *param_1;
        puVar15 = auStack_238;
        for (iVar11 = 0x8e; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar15 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar15 = puVar15 + 1;
        }
        iVar11 = param_1[6];
        param_1[6] = 0;
        uVar8 = (**(code **)(iVar4 + 0x10))(param_2,auStack_5c4,auStack_238);
        param_1[6] = iVar11;
        return uVar8;
      }
    }
    return 0;
  }
  pcVar6 = (*gEngfuncs.GetLocalPlayer)();
  if ((pcVar6->index == (uint)*(byte *)(param_1[0xc] + 0x300)) &&
     ((iVar4 = CL_IsThirdPerson(), iVar4 == 0 || (lVar17 = __ftol(), (int)lVar17 < 2)))) {
    return 0;
  }
  if (0.99 < DAT_100963e8) {
    return 0;
  }
  puVar7 = (undefined4 *)(*DAT_100ea7dc)(*(int *)(param_1[0xc] + 0x2b4) + -1);
  if (puVar7 == (undefined4 *)0x0) {
    return 0;
  }
  iVar4 = param_1[0xc];
  puVar15 = auStack_470;
  for (iVar11 = 0x8e; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar15 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar15 = puVar15 + 1;
  }
  uStack_2f4 = *(undefined4 *)(iVar4 + 0x3b4);
  iVar11 = param_1[6];
  uStack_2f8 = *(undefined4 *)(iVar4 + 0x3b8);
  uStack_2f0 = *(undefined4 *)(iVar4 + 0x3cc);
  uStack_2ec = *(undefined4 *)(iVar4 + 0x3d0);
  param_1[6] = 0;
  uVar8 = (**(code **)(*param_1 + 0x14))(param_2,iVar4 + 0x2b0,auStack_470);
  param_1[6] = iVar11;
  return uVar8;
}

/* 10031fa0  FUN_10031fa0  (676 bytes)
 * undefined FUN_10031fa0()
 */
void __thiscall FUN_10031fa0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar4;
  longlong lVar5;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  fVar3 = (float10)*(double *)(param_1 + 8) - (float10)*(double *)(param_1 + 0x10);
  fStack_10 = (float)fVar3;
  if (fVar3 < (float10)0.0) {
LAB_10032236:
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
  if (fStack_10 <= 1.0) {
    if (fStack_10 == 0.0) goto LAB_10032236;
  }
  else {
    fStack_10 = 1.0;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (*(int *)(iVar1 + 0x178) == *(int *)(param_1 + 0x20)) goto LAB_10032236;
  if (*(int *)(param_1 + 0x1c) == 0) {
    fStack_8 = *(float *)(param_2 + 0x74);
    fStack_c = *(float *)(param_2 + 0x70);
    fVar3 = SQRT((float10)fStack_c * (float10)fStack_c + (float10)fStack_8 * (float10)fStack_8) *
            (float10)fStack_10;
    *(float *)(param_1 + 0x40) = (float)fVar3;
LAB_100320da:
    if ((fStack_8 != 0.0) || (fStack_c != 0.0)) {
      fVar4 = (float10)fpatan((float10)fStack_8,(float10)fStack_c);
      *(float *)(*(int *)(param_1 + 0x38) + 0x184) = (float)(fVar4 * (float10)57.29577951308232);
      if (180.0 < *(float *)(*(int *)(param_1 + 0x38) + 0x184)) {
        *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x184) = 0x43340000;
      }
      if (*(float *)(*(int *)(param_1 + 0x38) + 0x184) < -180.0) {
        *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x184) = 0xc3340000;
      }
      goto LAB_10032216;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x30);
    fStack_c = *(float *)(iVar2 + 0xb48) - *(float *)(iVar1 + 0x188);
    fStack_8 = *(float *)(iVar2 + 0xb4c) - *(float *)(iVar1 + 0x18c);
    *(undefined4 *)(iVar1 + 0x188) = *(undefined4 *)(iVar2 + 0xb48);
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x18c) =
         *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xb4c);
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 400) =
         *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xb50);
    fVar3 = SQRT((float10)fStack_c * (float10)fStack_c + (float10)fStack_8 * (float10)fStack_8);
    *(float *)(param_1 + 0x40) = (float)fVar3;
    fVar3 = fVar3 / (float10)fStack_10;
    if ((0.0 < fStack_10) && (5.0 <= (float)fVar3)) goto LAB_100320da;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  lVar5 = __ftol();
  fVar3 = extraout_ST0 - (float10)((int)lVar5 * 0x168);
  if ((float10)180.0 < fVar3) {
    fVar3 = fVar3 - (float10)360.0;
  }
  if (fVar3 < (float10)-180.0) {
    fVar3 = fVar3 + (float10)360.0;
  }
  fVar3 = fVar3 * (float10)fStack_10;
  if (fStack_10 < 0.25) {
    fVar3 = fVar3 * (float10)4.0;
  }
  *(float *)(iVar1 + 0x184) = (float)(fVar3 + (float10)*(float *)(iVar1 + 0x184));
  iVar1 = *(int *)(param_1 + 0x38);
  lVar5 = __ftol();
  *(float *)(iVar1 + 0x184) = *(float *)(iVar1 + 0x184) - (float)((int)lVar5 * 0x168);
  *(undefined4 *)(param_1 + 0x40) = 0;
  fVar3 = extraout_ST0_00;
LAB_10032216:
  if ((float10)180.0 <= fVar3) {
    return;
  }
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) * 0.75;
  return;
}

/* 10032250  FUN_10032250  (739 bytes)
 * undefined FUN_10032250()
 */
void __fastcall FUN_10032250(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined1 uVar4;
  undefined1 unaff_BP;
  float unaff_EDI;
  int iVar5;
  float10 extraout_ST0;
  float10 fVar6;
  longlong lVar7;
  int iStack_8;
  undefined1 auStack_4 [4];
  
  (**(code **)(*param_1 + 0x60))
            (*(int *)(param_1[0xc] + 0x2dc) * 0xb0 + *(int *)(param_1[0x11] + 0xa8) + param_1[0x11],
             auStack_4,param_1[0xc] + 0xb54);
  *(undefined4 *)(param_1[0xc] + 0xb28) = *(undefined4 *)(param_1[0xc] + 0xb54);
  *(undefined1 *)(param_1[0xc] + 0x31c) = unaff_BP;
  *(undefined1 *)(param_1[0xc] + 0xb40) = *(undefined1 *)(param_1[0xc] + 0x31c);
  *(undefined1 *)(param_1[0xc] + 0xb18) = *(undefined1 *)(param_1[0xc] + 0x31c);
  (**(code **)(*param_1 + 100))(iStack_8);
  iVar5 = param_1[0xe];
  lVar7 = __ftol();
  fVar6 = extraout_ST0 - (float10)((int)lVar7 * 0x168);
  if (fVar6 < (float10)-180.0) {
    fVar6 = fVar6 + (float10)360.0;
  }
  if ((float10)180.0 < fVar6) {
    fVar6 = fVar6 - (float10)360.0;
  }
  if (fVar6 <= (float10)120.0) {
    if (fVar6 < (float10)-120.0) {
      *(float *)(iVar5 + 0x184) = *(float *)(iVar5 + 0x184) + 180.0;
      param_1[0x10] = (int)-(float)param_1[0x10];
    }
  }
  else {
    *(float *)(iVar5 + 0x184) = *(float *)(iVar5 + 0x184) - 180.0;
    param_1[0x10] = (int)-(float)param_1[0x10];
  }
  lVar7 = __ftol();
  uVar4 = (undefined1)lVar7;
  *(undefined1 *)(param_1[0xc] + 0x318) = uVar4;
  *(undefined1 *)(param_1[0xc] + 0x319) = uVar4;
  *(undefined1 *)(param_1[0xc] + 0x31a) = uVar4;
  *(undefined1 *)(param_1[0xc] + 0x31b) = uVar4;
  *(undefined1 *)(param_1[0xc] + 0xb3c) = *(undefined1 *)(param_1[0xc] + 0x318);
  *(undefined1 *)(param_1[0xc] + 0xb3d) = *(undefined1 *)(param_1[0xc] + 0x319);
  *(undefined1 *)(param_1[0xc] + 0xb3e) = *(undefined1 *)(param_1[0xc] + 0x31a);
  *(undefined1 *)(param_1[0xc] + 0xb3f) = *(undefined1 *)(param_1[0xc] + 0x31b);
  *(undefined4 *)(param_1[0xc] + 0xb58) = *(undefined4 *)(param_1[0xe] + 0x184);
  iVar5 = param_1[0xc];
  if (*(float *)(iVar5 + 0xb58) < 0.0) {
    *(float *)(iVar5 + 0xb58) = *(float *)(iVar5 + 0xb58) + 360.0;
  }
  *(undefined4 *)(param_1[0xc] + 0xb2c) = *(undefined4 *)(param_1[0xc] + 0xb58);
  iVar5 = *(int *)(iStack_8 + 0xb8) * 0xb0 + *(int *)(param_1[0x11] + 0xa8) + param_1[0x11];
  if (*(float *)(iVar5 + 0x4c) <= 0.0) {
    fVar3 = *(float *)(param_1[0xc] + 0x310) * *(float *)(iVar5 + 0x20) * unaff_EDI;
  }
  else {
    fVar3 = ((float)param_1[0x10] / *(float *)(iVar5 + 0x4c)) * (float)*(int *)(iVar5 + 0x38);
  }
  *(float *)(param_1[0xe] + 0x180) = fVar3 + *(float *)(param_1[0xe] + 0x180);
  iVar1 = *(int *)(iVar5 + 0x38);
  iVar2 = param_1[0xe];
  lVar7 = __ftol();
  *(float *)(iVar2 + 0x180) = *(float *)(iVar2 + 0x180) - (float)((int)lVar7 * iVar1);
  iVar1 = param_1[0xe];
  if (*(float *)(iVar1 + 0x180) < 0.0) {
    *(float *)(iVar1 + 0x180) = (float)*(int *)(iVar5 + 0x38) + *(float *)(iVar1 + 0x180);
  }
  return;
}

/* 10032540  FUN_10032540  (3228 bytes)
 * undefined FUN_10032540()
 * called by: FUN_1001f3b0
 */
undefined4 __thiscall FUN_10032540(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  cl_entity_s *pcVar4;
  undefined4 uVar5;
  uint unaff_EBX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  vec_t *pvVar9;
  vec3_t *pavVar10;
  undefined1 *this;
  int unaff_retaddr;
  undefined4 uStack_bf4;
  int iStack_be8;
  undefined1 auStack_be4 [20];
  undefined1 *puStack_bd0;
  undefined1 auStack_bcc [8];
  undefined4 auStack_bc4 [2];
  undefined4 uStack_bbc;
  undefined4 uStack_bb8;
  undefined4 uStack_bb4;
  undefined4 uStack_bb0;
  undefined4 uStack_bac;
  undefined4 uStack_ba8;
  undefined4 uStack_ba4;
  undefined4 uStack_ba0;
  undefined4 uStack_b9c;
  undefined4 uStack_b98;
  undefined4 uStack_b94;
  undefined4 uStack_b90;
  undefined4 uStack_b8c;
  undefined4 uStack_b88;
  undefined4 uStack_b84;
  undefined2 uStack_b80;
  undefined2 uStack_b7e;
  undefined4 uStack_b7c;
  undefined4 uStack_b78;
  undefined1 uStack_b74;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  undefined2 uStack_b68;
  undefined1 uStack_b66;
  undefined4 uStack_b64;
  undefined4 uStack_b60;
  undefined4 uStack_b5c;
  undefined4 uStack_b58;
  undefined4 uStack_b54;
  undefined4 uStack_b50;
  undefined4 uStack_b4c;
  undefined1 auStack_b48 [12];
  undefined1 auStack_b3c [12];
  undefined1 auStack_b30 [12];
  undefined4 uStack_b24;
  undefined4 uStack_b20;
  undefined4 uStack_b1c;
  undefined4 uStack_b18;
  undefined4 uStack_b14;
  undefined4 uStack_b10;
  undefined4 uStack_b0c;
  undefined4 uStack_b08;
  undefined4 uStack_b04;
  undefined4 uStack_b00;
  undefined1 auStack_afc [12];
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  undefined4 uStack_ae8;
  undefined4 uStack_ae4;
  undefined4 uStack_ae0;
  undefined4 uStack_adc;
  undefined4 uStack_ad8;
  undefined1 auStack_ad4 [12];
  undefined1 auStack_ac8 [12];
  undefined4 uStack_abc;
  undefined4 uStack_ab8;
  undefined4 uStack_ab4;
  undefined4 uStack_ab0;
  undefined4 uStack_aac;
  undefined4 uStack_aa8;
  undefined4 uStack_aa4;
  undefined4 uStack_aa0;
  undefined4 uStack_a9c;
  undefined4 uStack_a98;
  undefined1 auStack_a94 [12];
  undefined1 auStack_a88 [12];
  undefined1 auStack_a7c [12];
  undefined1 auStack_a70 [12];
  undefined4 uStack_a64;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  undefined4 uStack_a58;
  undefined1 auStack_a54 [12];
  undefined1 auStack_a48 [12];
  undefined4 uStack_a3c;
  undefined4 uStack_a38;
  undefined4 uStack_a34;
  undefined4 uStack_a30;
  undefined2 uStack_a2c;
  undefined2 uStack_a2a;
  undefined4 uStack_a28;
  undefined4 uStack_a24;
  undefined1 uStack_a20;
  undefined4 uStack_a1c;
  undefined4 uStack_a18;
  undefined2 uStack_a14;
  undefined1 uStack_a12;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  undefined4 uStack_a08;
  undefined4 uStack_a04;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined4 uStack_9f8;
  undefined1 auStack_9f4 [12];
  undefined1 auStack_9e8 [12];
  undefined1 auStack_9dc [12];
  undefined4 uStack_9d0;
  undefined4 uStack_9cc;
  undefined4 uStack_9c8;
  undefined4 uStack_9c4;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  undefined4 uStack_9b8;
  undefined4 uStack_9b4;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  undefined1 auStack_9a8 [12];
  undefined4 uStack_99c;
  undefined4 uStack_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  undefined4 uStack_988;
  undefined4 uStack_984;
  undefined1 auStack_980 [12];
  undefined1 auStack_974 [12];
  undefined4 uStack_968;
  undefined4 uStack_964;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  undefined4 uStack_958;
  undefined4 uStack_954;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  undefined4 uStack_948;
  undefined4 uStack_944;
  undefined1 auStack_940 [12];
  undefined1 auStack_934 [12];
  undefined1 auStack_928 [12];
  undefined1 auStack_91c [12];
  undefined1 auStack_910 [340];
  undefined4 uStack_7bc;
  undefined4 auStack_7b4 [447];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [12];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [48];
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
  uint uStack_4;
  
  *(undefined4 *)(param_3 + 0x4c) = 0xff;
  iVar2 = (*DAT_100ea7d8)();
  param_1[0xc] = iVar2;
  (*DAT_100ea7e8)(param_1 + 8,param_1 + 2,param_1 + 4);
  (*DAT_100ea7f0)(param_1 + 0x1023,param_1 + 0x101a,param_1 + 0x101d,param_1 + 0x1020);
  (*DAT_100ea7fc)(param_1 + 0x1018,param_1 + 0x1019);
  iVar2 = *(int *)(param_3 + 4) + -1;
  param_1[0xf] = iVar2;
  if (((-1 < iVar2) && (iVar3 = (*gEngfuncs.GetMaxClients)(), iVar2 < iVar3)) &&
     ((DAT_10190b18 != 5 || (DAT_10190b20 != *(int *)(param_3 + 4))))) {
    iVar2 = (*DAT_100ea83c)(iVar2);
    param_1[0xd] = iVar2;
    if (iVar2 != 0) {
      iVar2 = (*DAT_100ea7d0)(iVar2);
      param_1[0x11] = iVar2;
      (*DAT_100ea84c)(iVar2);
      (*DAT_100ea850)(param_1[0xd]);
      if (*(int *)(param_3 + 0xb8) == 0) {
        *(undefined1 *)(param_1[0xc] + 0x318) = 0x7f;
        *(undefined1 *)(param_1[0xc] + 0x319) = 0x7f;
        *(undefined1 *)(param_1[0xc] + 0x31a) = 0x7f;
        *(undefined1 *)(param_1[0xc] + 0x31b) = 0x7f;
        *(undefined1 *)(param_1[0xc] + 0xb3c) = *(undefined1 *)(param_1[0xc] + 0x318);
        *(undefined1 *)(param_1[0xc] + 0xb3d) = *(undefined1 *)(param_1[0xc] + 0x319);
        *(undefined1 *)(param_1[0xc] + 0xb3e) = *(undefined1 *)(param_1[0xc] + 0x31a);
        *(undefined1 *)(param_1[0xc] + 0xb3f) = *(undefined1 *)(param_1[0xc] + 0x31b);
        iVar2 = (*DAT_100ea7dc)(param_1[0xf]);
        param_1[0xe] = iVar2;
        *(undefined4 *)(iVar2 + 0x17c) = 0;
        (**(code **)(*param_1 + 0x1c))(0);
      }
      else {
        iVar2 = (*DAT_100ea7dc)(param_1[0xf]);
        param_1[0xe] = iVar2;
        uVar5 = *(undefined4 *)(param_1[0xc] + 0xb54);
        iStack_be8 = *(int *)(param_1[0xc] + 0xb5c);
        (**(code **)(*param_1 + 0x68))(param_3);
        *(undefined4 *)(param_1[0xe] + 0x17c) = *(undefined4 *)(param_3 + 0xb8);
        param_1[0xe] = 0;
        (**(code **)(*param_1 + 0x1c))(0);
        *(uint *)(param_1[0xc] + 0xb54) = unaff_EBX;
        *(undefined4 *)(param_1[0xc] + 0xb58) = uStack_bf4;
        *(undefined4 *)(param_1[0xc] + 0xb5c) = uVar5;
      }
      uVar8 = uStack_4 & 1;
      if (uVar8 != 0) {
        iVar2 = (*DAT_100ea814)();
        if (iVar2 == 0) {
          return 0;
        }
        *(int *)param_1[0x1027] = *(int *)param_1[0x1027] + 1;
        *(int *)param_1[0x1026] = *(int *)param_1[0x1026] + 1;
        if (*(int *)(param_1[0x11] + 0xcc) == 0) {
          return 1;
        }
      }
      iVar2 = (*DAT_100ea7dc)(param_1[0xf]);
      param_1[0xe] = iVar2;
      (**(code **)(*param_1 + 0x20))();
      (**(code **)(*param_1 + 0x28))();
      *(int *)(param_1[0xe] + 0x178) = param_1[8];
      param_1[0xe] = 0;
      if ((uStack_4 & 2) != 0) {
        (**(code **)(*param_1 + 0x24))();
        (*DAT_100ea840)();
        if (0 < *(int *)param_1[0xc]) {
          pcVar4 = (*gEngfuncs.GetEntityByIndex)(*(int *)param_1[0xc]);
          pvVar9 = (vec_t *)(param_1[0xc] + 0xb60);
          pavVar10 = pcVar4->attachment;
          for (iVar2 = 0xc; uVar8 = unaff_EBX, iVar2 != 0; iVar2 = iVar2 + -1) {
            (*pavVar10)[0] = *pvVar9;
            pvVar9 = pvVar9 + 1;
            pavVar10 = (vec3_t *)(*pavVar10 + 1);
          }
        }
      }
      if (uVar8 != 0) {
        puStack_bd0 = auStack_bcc;
        (*DAT_100ea818)(param_1[0xc],auStack_be4);
        (*DAT_100ea81c)(auStack_be4);
        (*DAT_100ea820)(auStack_be4);
        iVar3 = (*DAT_100ea7dc)(param_1[0xf]);
        param_1[0xe] = iVar3;
        iVar2 = *(int *)(iVar3 + 0x170);
        param_1[0x14] = iVar2;
        if (iVar2 < 0) {
          param_1[0x14] = 0;
        }
        if (0x168 < param_1[0x14]) {
          param_1[0x14] = 0x168;
        }
        iVar2 = *(int *)(iVar3 + 0x174);
        param_1[0x15] = iVar2;
        if (iVar2 < 0) {
          param_1[0x15] = 0;
        }
        if (0x168 < param_1[0x15]) {
          param_1[0x15] = 0x168;
        }
        (*DAT_100ea838)(param_1[0x14],param_1[0x15]);
        (**(code **)(*param_1 + 0x50))();
        param_1[0xe] = 0;
        if (*(int *)(unaff_retaddr + 0xb4) != 0) {
          puVar1 = (undefined4 *)param_1[0xc];
          auStack_bc4[1] = *puVar1;
          uStack_bbc = puVar1[1];
          uStack_bb8 = puVar1[2];
          uStack_bb4 = puVar1[3];
          uStack_bb0 = puVar1[4];
          uStack_bac = puVar1[5];
          uStack_ba8 = puVar1[6];
          uStack_ba4 = puVar1[7];
          uStack_ba0 = puVar1[8];
          uStack_b9c = puVar1[9];
          uStack_b98 = puVar1[10];
          uStack_b94 = puVar1[0xb];
          uStack_b90 = puVar1[0xc];
          uStack_b8c = puVar1[0xd];
          uStack_b88 = puVar1[0xe];
          uStack_b84 = puVar1[0xf];
          uStack_b80 = *(undefined2 *)(puVar1 + 0x10);
          uStack_b7e = *(undefined2 *)((int)puVar1 + 0x42);
          uStack_b7c = puVar1[0x11];
          uStack_b78 = puVar1[0x12];
          uStack_b74 = *(undefined1 *)(puVar1 + 0x13);
          uStack_b70 = puVar1[0x14];
          uStack_b6c = puVar1[0x15];
          uStack_b68 = *(undefined2 *)(puVar1 + 0x16);
          uStack_b66 = *(undefined1 *)((int)puVar1 + 0x5a);
          uStack_b64 = puVar1[0x17];
          uStack_b60 = puVar1[0x18];
          uStack_b5c = puVar1[0x19];
          uStack_b58 = puVar1[0x1a];
          uStack_b54 = puVar1[0x1b];
          uStack_b50 = puVar1[0x1c];
          uStack_b4c = puVar1[0x1d];
          FUN_10002610(auStack_b48,puVar1 + 0x1e);
          FUN_10002610(auStack_b3c,puVar1 + 0x21);
          FUN_10002610(auStack_b30,puVar1 + 0x24);
          uStack_b24 = puVar1[0x27];
          uStack_b20 = puVar1[0x28];
          uStack_b1c = puVar1[0x29];
          uStack_b18 = puVar1[0x2a];
          uStack_b14 = puVar1[0x2b];
          uStack_b10 = puVar1[0x2c];
          uStack_b0c = puVar1[0x2d];
          uStack_b08 = puVar1[0x2e];
          uStack_b04 = puVar1[0x2f];
          uStack_b00 = puVar1[0x30];
          FUN_10002610(auStack_afc,puVar1 + 0x31);
          uStack_af0 = puVar1[0x34];
          uStack_aec = puVar1[0x35];
          uStack_ae8 = puVar1[0x36];
          uStack_ae4 = puVar1[0x37];
          uStack_ae0 = puVar1[0x38];
          uStack_adc = puVar1[0x39];
          uStack_ad8 = puVar1[0x3a];
          FUN_10002610(auStack_ad4,puVar1 + 0x3b);
          FUN_10002610(auStack_ac8,puVar1 + 0x3e);
          uStack_abc = puVar1[0x41];
          uStack_ab8 = puVar1[0x42];
          uStack_ab4 = puVar1[0x43];
          uStack_ab0 = puVar1[0x44];
          uStack_aac = puVar1[0x45];
          uStack_aa8 = puVar1[0x46];
          uStack_aa4 = puVar1[0x47];
          uStack_aa0 = puVar1[0x48];
          uStack_a9c = puVar1[0x49];
          uStack_a98 = puVar1[0x4a];
          FUN_10002610(auStack_a94,puVar1 + 0x4b);
          FUN_10002610(auStack_a88,puVar1 + 0x4e);
          FUN_10002610(auStack_a7c,puVar1 + 0x51);
          FUN_10002610(auStack_a70,puVar1 + 0x54);
          uStack_a64 = puVar1[0x57];
          uStack_a60 = puVar1[0x58];
          uStack_a5c = puVar1[0x59];
          uStack_a58 = puVar1[0x5a];
          FUN_10002610(auStack_a54,puVar1 + 0x5b);
          FUN_10002610(auStack_a48,puVar1 + 0x5e);
          uStack_a3c = puVar1[0x61];
          uStack_a38 = puVar1[0x62];
          uStack_a34 = puVar1[99];
          uStack_a30 = puVar1[100];
          uStack_a2c = *(undefined2 *)(puVar1 + 0x65);
          uStack_a2a = *(undefined2 *)((int)puVar1 + 0x196);
          uStack_a28 = puVar1[0x66];
          uStack_a24 = puVar1[0x67];
          uStack_a20 = *(undefined1 *)(puVar1 + 0x68);
          uStack_a1c = puVar1[0x69];
          uStack_a18 = puVar1[0x6a];
          uStack_a14 = *(undefined2 *)(puVar1 + 0x6b);
          uStack_a12 = *(undefined1 *)((int)puVar1 + 0x1ae);
          uStack_a10 = puVar1[0x6c];
          uStack_a0c = puVar1[0x6d];
          uStack_a08 = puVar1[0x6e];
          uStack_a04 = puVar1[0x6f];
          uStack_a00 = puVar1[0x70];
          uStack_9fc = puVar1[0x71];
          uStack_9f8 = puVar1[0x72];
          FUN_10002610(auStack_9f4,puVar1 + 0x73);
          FUN_10002610(auStack_9e8,puVar1 + 0x76);
          FUN_10002610(auStack_9dc,puVar1 + 0x79);
          uStack_9d0 = puVar1[0x7c];
          uStack_9cc = puVar1[0x7d];
          uStack_9c8 = puVar1[0x7e];
          uStack_9c4 = puVar1[0x7f];
          uStack_9c0 = puVar1[0x80];
          uStack_9bc = puVar1[0x81];
          uStack_9b8 = puVar1[0x82];
          uStack_9b4 = puVar1[0x83];
          uStack_9b0 = puVar1[0x84];
          uStack_9ac = puVar1[0x85];
          FUN_10002610(auStack_9a8,puVar1 + 0x86);
          uStack_99c = puVar1[0x89];
          uStack_998 = puVar1[0x8a];
          uStack_994 = puVar1[0x8b];
          uStack_990 = puVar1[0x8c];
          uStack_98c = puVar1[0x8d];
          uStack_988 = puVar1[0x8e];
          uStack_984 = puVar1[0x8f];
          FUN_10002610(auStack_980,puVar1 + 0x90);
          FUN_10002610(auStack_974,puVar1 + 0x93);
          uStack_968 = puVar1[0x96];
          uStack_964 = puVar1[0x97];
          uStack_960 = puVar1[0x98];
          uStack_95c = puVar1[0x99];
          uStack_958 = puVar1[0x9a];
          uStack_954 = puVar1[0x9b];
          uStack_950 = puVar1[0x9c];
          uStack_94c = puVar1[0x9d];
          uStack_948 = puVar1[0x9e];
          uStack_944 = puVar1[0x9f];
          FUN_10002610(auStack_940,puVar1 + 0xa0);
          FUN_10002610(auStack_934,puVar1 + 0xa3);
          FUN_10002610(auStack_928,puVar1 + 0xa6);
          FUN_10002610(auStack_91c,puVar1 + 0xa9);
          FUN_100331e0(auStack_910,puVar1 + 0xac);
          uStack_7bc = puVar1[0x101];
          puVar6 = auStack_7b4;
          puVar7 = puVar1 + 0x105;
          iStack_be8 = (int)&uStack_bbc - (int)puVar1;
          iVar2 = 0x40;
          do {
            puVar6[-1] = puVar7[-3];
            *puVar6 = puVar7[-2];
            puVar6[1] = puVar7[-1];
            *(undefined4 *)((int)auStack_bc4 + (4 - (int)puVar1) + (int)puVar7) = *puVar7;
            FUN_10002610((void *)(iStack_be8 + (int)puVar7),puVar7 + 1);
            puVar6 = puVar6 + 7;
            puVar7 = puVar7 + 7;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          uStack_b8 = puVar1[0x2c2];
          uStack_b4 = puVar1[0x2c3];
          uStack_b0 = puVar1[0x2c4];
          uStack_ac = puVar1[0x2c5];
          uStack_a8 = *(undefined2 *)(puVar1 + 0x2c6);
          FUN_10002610(auStack_a4,puVar1 + 0x2c7);
          FUN_10002610(auStack_98,puVar1 + 0x2ca);
          uStack_8c = puVar1[0x2cd];
          uStack_88 = puVar1[0x2ce];
          uStack_84 = puVar1[0x2cf];
          uStack_80 = *(undefined2 *)(puVar1 + 0x2d0);
          uStack_7c = puVar1[0x2d1];
          uStack_78 = puVar1[0x2d2];
          uStack_74 = puVar1[0x2d3];
          uStack_70 = puVar1[0x2d4];
          FUN_10002610(auStack_6c,puVar1 + 0x2d5);
          this = auStack_60;
          puVar7 = puVar1 + 0x2d8;
          iVar2 = 4;
          do {
            FUN_10002610(this,puVar7);
            this = this + 0xc;
            puVar7 = puVar7 + 3;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          uStack_30 = puVar1[0x2e4];
          uStack_2c = puVar1[0x2e5];
          uStack_28 = puVar1[0x2e6];
          uStack_24 = puVar1[0x2e7];
          uStack_20 = puVar1[0x2e8];
          uStack_1c = puVar1[0x2e9];
          uStack_18 = puVar1[0x2ea];
          uStack_14 = puVar1[0x2eb];
          uStack_10 = puVar1[0x2ec];
          uStack_c = puVar1[0x2ed];
          uVar5 = (*DAT_100ea7d4)(*(undefined4 *)(unaff_retaddr + 0xb4));
          iVar2 = (*DAT_100ea7d0)(uVar5);
          param_1[0x11] = iVar2;
          (*DAT_100ea84c)(iVar2);
          (**(code **)(*param_1 + 0x2c))(uVar5);
          (*DAT_100ea820)(&iStack_be8);
          (**(code **)(*param_1 + 0x50))();
          (**(code **)(*param_1 + 0x24))();
          puVar7 = auStack_bc4;
          puVar6 = (undefined4 *)param_1[0xc];
          for (iVar2 = 0x2ee; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

/* 100331e0  FUN_100331e0  (862 bytes)
 * undefined FUN_100331e0(undefined4 * param_1)
 * called by: FUN_10032540, FUN_100337f0
 */
void __thiscall FUN_100331e0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined2 *)((int)this + 0x38) = *(undefined2 *)(param_1 + 0xe);
  *(undefined2 *)((int)this + 0x3a) = *(undefined2 *)((int)param_1 + 0x3a);
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined1 *)((int)this + 0x44) = *(undefined1 *)(param_1 + 0x11);
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined2 *)((int)this + 0x50) = *(undefined2 *)(param_1 + 0x14);
  *(undefined1 *)((int)this + 0x52) = *(undefined1 *)((int)param_1 + 0x52);
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined4 *)((int)this + 0x58) = param_1[0x16];
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  *(undefined4 *)((int)this + 0x60) = param_1[0x18];
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  *(undefined4 *)((int)this + 0x68) = param_1[0x1a];
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  *(undefined4 *)((int)this + 0x70) = param_1[0x1c];
  *(undefined4 *)((int)this + 0x74) = param_1[0x1d];
  *(undefined4 *)((int)this + 0x78) = param_1[0x1e];
  *(undefined4 *)((int)this + 0x7c) = param_1[0x1f];
  *(undefined4 *)((int)this + 0x80) = param_1[0x20];
  *(undefined4 *)((int)this + 0x84) = param_1[0x21];
  *(undefined4 *)((int)this + 0x88) = param_1[0x22];
  *(undefined4 *)((int)this + 0x8c) = param_1[0x23];
  *(undefined4 *)((int)this + 0x90) = param_1[0x24];
  *(undefined4 *)((int)this + 0x94) = param_1[0x25];
  *(undefined4 *)((int)this + 0x98) = param_1[0x26];
  *(undefined4 *)((int)this + 0x9c) = param_1[0x27];
  *(undefined4 *)((int)this + 0xa0) = param_1[0x28];
  *(undefined4 *)((int)this + 0xa4) = param_1[0x29];
  *(undefined4 *)((int)this + 0xa8) = param_1[0x2a];
  *(undefined4 *)((int)this + 0xac) = param_1[0x2b];
  *(undefined4 *)((int)this + 0xb0) = param_1[0x2c];
  *(undefined4 *)((int)this + 0xb4) = param_1[0x2d];
  *(undefined4 *)((int)this + 0xb8) = param_1[0x2e];
  *(undefined4 *)((int)this + 0xbc) = param_1[0x2f];
  *(undefined4 *)((int)this + 0xc0) = param_1[0x30];
  *(undefined4 *)((int)this + 0xc4) = param_1[0x31];
  *(undefined4 *)((int)this + 200) = param_1[0x32];
  *(undefined4 *)((int)this + 0xcc) = param_1[0x33];
  *(undefined4 *)((int)this + 0xd0) = param_1[0x34];
  *(undefined4 *)((int)this + 0xd4) = param_1[0x35];
  *(undefined4 *)((int)this + 0xd8) = param_1[0x36];
  *(undefined4 *)((int)this + 0xdc) = param_1[0x37];
  *(undefined4 *)((int)this + 0xe0) = param_1[0x38];
  *(undefined4 *)((int)this + 0xe4) = param_1[0x39];
  *(undefined4 *)((int)this + 0xe8) = param_1[0x3a];
  *(undefined4 *)((int)this + 0xec) = param_1[0x3b];
  *(undefined4 *)((int)this + 0xf0) = param_1[0x3c];
  *(undefined4 *)((int)this + 0xf4) = param_1[0x3d];
  *(undefined4 *)((int)this + 0xf8) = param_1[0x3e];
  *(undefined4 *)((int)this + 0xfc) = param_1[0x3f];
  *(undefined4 *)((int)this + 0x100) = param_1[0x40];
  *(undefined4 *)((int)this + 0x104) = param_1[0x41];
  *(undefined4 *)((int)this + 0x108) = param_1[0x42];
  *(undefined4 *)((int)this + 0x10c) = param_1[0x43];
  *(undefined4 *)((int)this + 0x110) = param_1[0x44];
  *(undefined4 *)((int)this + 0x114) = param_1[0x45];
  *(undefined4 *)((int)this + 0x118) = param_1[0x46];
  *(undefined4 *)((int)this + 0x11c) = param_1[0x47];
  *(undefined4 *)((int)this + 0x120) = param_1[0x48];
  *(undefined4 *)((int)this + 0x124) = param_1[0x49];
  *(undefined4 *)((int)this + 0x128) = param_1[0x4a];
  *(undefined4 *)((int)this + 300) = param_1[0x4b];
  *(undefined4 *)((int)this + 0x130) = param_1[0x4c];
  *(undefined4 *)((int)this + 0x134) = param_1[0x4d];
  *(undefined4 *)((int)this + 0x138) = param_1[0x4e];
  *(undefined4 *)((int)this + 0x13c) = param_1[0x4f];
  *(undefined4 *)((int)this + 0x140) = param_1[0x50];
  *(undefined4 *)((int)this + 0x144) = param_1[0x51];
  *(undefined4 *)((int)this + 0x148) = param_1[0x52];
  *(undefined4 *)((int)this + 0x14c) = param_1[0x53];
  *(undefined4 *)((int)this + 0x150) = param_1[0x54];
  return;
}

/* 10033540  FUN_10033540  (677 bytes)
 * undefined FUN_10033540()
 */
undefined4 __thiscall FUN_10033540(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  cl_entity_s *pcVar3;
  uint uVar4;
  vec_t *pvVar5;
  vec3_t *pavVar6;
  uint unaff_retaddr;
  undefined1 auStack_1c [20];
  undefined1 *puStack_8;
  
  *(undefined4 *)(param_3 + 0x4c) = 0xff;
  iVar1 = (*DAT_100ea7d8)();
  param_1[0xc] = iVar1;
  (*DAT_100ea7e8)(param_1 + 8,param_1 + 2,param_1 + 4);
  (*DAT_100ea7f0)(param_1 + 0x1023,param_1 + 0x101a,param_1 + 0x101d,param_1 + 0x1020);
  (*DAT_100ea7fc)(param_1 + 0x1018,param_1 + 0x1019);
  iVar1 = *(int *)(param_3 + 4) + -1;
  param_1[0xf] = iVar1;
  if (((-1 < iVar1) && (iVar2 = (*gEngfuncs.GetMaxClients)(), iVar1 < iVar2)) &&
     ((DAT_10190b18 != 5 || (DAT_10190b20 != *(int *)(param_3 + 4))))) {
    iVar1 = (*DAT_100ea83c)(iVar1);
    param_1[0xd] = iVar1;
    if (iVar1 != 0) {
      iVar1 = (*DAT_100ea7d0)(iVar1);
      param_1[0x11] = iVar1;
      (*DAT_100ea84c)(iVar1);
      (*DAT_100ea850)(param_1[0xd]);
      *(undefined1 *)(param_1[0xc] + 0x318) = 0x7f;
      *(undefined1 *)(param_1[0xc] + 0x319) = 0x7f;
      *(undefined1 *)(param_1[0xc] + 0x31a) = 0x7f;
      *(undefined1 *)(param_1[0xc] + 0x31b) = 0x7f;
      *(undefined1 *)(param_1[0xc] + 0xb3c) = *(undefined1 *)(param_1[0xc] + 0x318);
      *(undefined1 *)(param_1[0xc] + 0xb3d) = *(undefined1 *)(param_1[0xc] + 0x319);
      *(undefined1 *)(param_1[0xc] + 0xb3e) = *(undefined1 *)(param_1[0xc] + 0x31a);
      *(undefined1 *)(param_1[0xc] + 0xb3f) = *(undefined1 *)(param_1[0xc] + 0x31b);
      param_1[0xe] = param_4;
      *(undefined4 *)(param_4 + 0x17c) = 0;
      (**(code **)(*param_1 + 0x1c))(0);
      uVar4 = unaff_retaddr & 1;
      if (uVar4 != 0) {
        iVar1 = (*DAT_100ea814)();
        if (iVar1 == 0) {
          return 0;
        }
        *(int *)param_1[0x1027] = *(int *)param_1[0x1027] + 1;
        *(int *)param_1[0x1026] = *(int *)param_1[0x1026] + 1;
        if (*(int *)(param_1[0x11] + 0xcc) == 0) {
          return 1;
        }
      }
      (**(code **)(*param_1 + 0x20))();
      (**(code **)(*param_1 + 0x28))();
      *(int *)(param_1[0xe] + 0x178) = param_1[8];
      param_1[0xe] = 0;
      if ((unaff_retaddr & 2) != 0) {
        (**(code **)(*param_1 + 0x24))();
        (*DAT_100ea840)();
        if (0 < *(int *)param_1[0xc]) {
          pcVar3 = (*gEngfuncs.GetEntityByIndex)(*(int *)param_1[0xc]);
          pvVar5 = (vec_t *)(param_1[0xc] + 0xb60);
          pavVar6 = pcVar3->attachment;
          for (iVar1 = 0xc; uVar4 = param_3, iVar1 != 0; iVar1 = iVar1 + -1) {
            (*pavVar6)[0] = *pvVar5;
            pvVar5 = pvVar5 + 1;
            pavVar6 = (vec3_t *)(*pavVar6 + 1);
          }
        }
      }
      if (uVar4 != 0) {
        puStack_8 = &stack0xffffffd8;
        (*DAT_100ea818)(param_1[0xc],auStack_1c);
        (*DAT_100ea81c)(auStack_1c);
        (*DAT_100ea820)(auStack_1c);
        param_1[0xe] = param_4;
        iVar1 = *(int *)(param_4 + 0x170);
        param_1[0x14] = iVar1;
        if (iVar1 < 0) {
          param_1[0x14] = 0;
        }
        if (0x168 < param_1[0x14]) {
          param_1[0x14] = 0x168;
        }
        iVar1 = *(int *)(param_4 + 0x174);
        param_1[0x15] = iVar1;
        if (iVar1 < 0) {
          param_1[0x15] = 0;
        }
        if (0x168 < param_1[0x15]) {
          param_1[0x15] = 0x168;
        }
        (*DAT_100ea838)(param_1[0x14],param_1[0x15]);
        (**(code **)(*param_1 + 0x50))();
        param_1[0xe] = 0;
      }
      return 1;
    }
  }
  return 0;
}

