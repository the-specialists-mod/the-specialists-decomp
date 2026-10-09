/* client.dll - unnamed_1004bb20 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1004bb20  FUN_1004bb20  (69 bytes)
 * undefined FUN_1004bb20(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004bb20(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(float *)((int)this + 0x2c) = (float)(int)uVar1;
  uVar1 = FUN_10029a10();
  *(char *)((int)this + 0x34) = (char)uVar1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004bb70  FUN_1004bb70  (270 bytes)
 * undefined FUN_1004bb70(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004bb70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  char local_40 [64];
  
  FUN_100299b0(param_3,param_2);
  fVar9 = FUN_10029b60();
  fVar10 = FUN_10029b60();
  fVar11 = FUN_10029b60();
  uVar2 = FUN_10029a10();
  pcVar3 = FUN_10029b00();
  uVar4 = 0xffffffff;
  do {
    pcVar8 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = pcVar8 + -uVar4;
  pcVar8 = local_40;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  if ((-1 < (int)uVar2) || ((int)uVar2 < 0x20)) {
    if (uVar2 == 0) {
      puVar7 = (undefined4 *)((int)this + 0xa30);
      for (iVar6 = 0x280; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined4 *)((int)this + 0x1430) = 0;
    }
    *(float *)((int)this + uVar2 * 0x50 + 0xa34) = (float)fVar9;
    *(float *)((int)this + uVar2 * 0x50 + 0xa38) = (float)fVar10;
    *(float *)((int)this + uVar2 * 0x50 + 0xa3c) = (float)fVar11;
    uVar4 = 0xffffffff;
    pcVar3 = local_40;
    do {
      pcVar8 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar3 = pcVar8 + -uVar4;
    pcVar8 = (char *)((int)this + uVar2 * 0x50 + 0xa40);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar8 = pcVar8 + 1;
    }
    *(undefined1 *)((int)this + uVar2 * 0x50 + 0xa30) = 1;
    if (*(int *)((int)this + 0x1430) < (int)uVar2) {
      *(uint *)((int)this + 0x1430) = uVar2;
    }
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004bc80  FUN_1004bc80  (79 bytes)
 * undefined FUN_1004bc80(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004bc80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  uVar2 = FUN_10029a10();
  if ((-1 < (int)uVar1) || ((int)uVar1 < 0x20)) {
    *(bool *)(uVar1 * 0x50 + 0xa30 + (int)this) = uVar2 != 0;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004bcd0  FUN_1004bcd0  (119 bytes)
 * undefined FUN_1004bcd0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004bcd0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  float10 fVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_100299b0(param_3,param_2);
  fVar2 = FUN_10029b60();
  local_c = (float)fVar2;
  fVar2 = FUN_10029b60();
  local_8 = (float)fVar2;
  fVar2 = FUN_10029b60();
  local_4 = (float)fVar2;
  fVar2 = FUN_10029b60();
  local_18 = (float)fVar2;
  fVar2 = FUN_10029b60();
  local_14 = (float)fVar2;
  fVar2 = FUN_10029b60();
  local_10 = (float)fVar2;
  uVar1 = FUN_10029a10();
  FUN_10048840(&local_c,&local_18,uVar1);
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004bd50  FUN_1004bd50  (410 bytes)
 * undefined FUN_1004bd50(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004bd50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  float10 fVar2;
  longlong lVar3;
  float in_stack_ffffff7c;
  float *pfVar4;
  float in_stack_ffffff88;
  float in_stack_ffffff8c;
  float fVar5;
  float in_stack_ffffff94;
  undefined4 uVar6;
  float in_stack_ffffff98;
  undefined4 *puVar7;
  float fVar8;
  float in_stack_ffffffa0;
  float *pfVar9;
  float in_stack_ffffffa4;
  float in_stack_ffffffa8;
  float fVar10;
  char *pcVar11;
  int iVar12;
  short sVar13;
  float fVar14;
  short sVar15;
  float fVar16;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c [3];
  
  fVar10 = 2.617832e-29;
  FUN_100299b0(param_3,param_2);
  fVar2 = FUN_10029b60();
  local_3c = (float)fVar2;
  fVar2 = FUN_10029b60();
  local_38 = (float)fVar2;
  fVar2 = FUN_10029b60();
  local_34 = (float)fVar2;
  fVar2 = FUN_10029b60();
  local_30 = (float)fVar2;
  fVar2 = FUN_10029b60();
  local_2c = (float)fVar2;
  fVar2 = FUN_10029b60();
  local_28 = (float)fVar2;
  uVar1 = FUN_10029a10();
  if (uVar1 == 0) {
    fVar2 = FUN_10029b60();
    local_24 = (float)fVar2;
    fVar2 = FUN_10029b60();
    local_20 = (float)fVar2;
    fVar2 = FUN_10029b60();
    local_1c = (float)fVar2;
    fVar2 = FUN_10029b60();
    local_18 = (float)fVar2;
    fVar2 = FUN_10029b60();
    local_14 = (float)fVar2;
    fVar2 = FUN_10029b60();
    local_10 = (float)fVar2;
    uVar1 = FUN_10029aa0();
    fVar2 = FUN_10029b60();
    fVar14 = (float)fVar2;
    pfVar9 = &local_24;
    fVar8 = 2.6179253e-29;
    FUN_10002610(&stack0xffffffa4,pfVar9);
    fVar5 = 2.6179298e-29;
    FUN_10002610(&stack0xffffff98,&local_18);
    uVar6 = 0;
    pfVar4 = &local_30;
    fVar16 = 2.617935e-29;
    FUN_10002610(&stack0xffffff88,pfVar4);
    FUN_10002610(&stack0xffffff7c,&local_3c);
    FUN_10047cb0(in_stack_ffffff7c,fVar16,(float)pfVar4,in_stack_ffffff88,in_stack_ffffff8c,fVar5,
                 uVar6,in_stack_ffffff98,fVar8,(float)pfVar9,in_stack_ffffffa4,in_stack_ffffffa8,
                 fVar10,uVar1,fVar14);
  }
  else if (uVar1 == 1) {
    lVar3 = __ftol();
    FUN_100481b0(&local_3c,(int)lVar3);
  }
  else if (uVar1 == 2) {
    sVar15 = 9;
    sVar13 = 5;
    pcVar11 = s_sprites_scintille_metal_spr_10095460;
    puVar7 = local_c;
    fVar10 = 2.617889e-29;
    FUN_10002610(&stack0xffffffa0,puVar7);
    FUN_10002610(&stack0xffffff94,&local_3c);
    FUN_10046f50(in_stack_ffffff94,fVar10,(float)puVar7,in_stack_ffffffa0,in_stack_ffffffa4,
                 in_stack_ffffffa8,(byte_conflict *)pcVar11,sVar13,sVar15);
    puVar7 = local_c;
    fVar16 = 25.0;
    fVar14 = 1.15;
    iVar12 = 7;
    fVar10 = 2.617904e-29;
    FUN_10002610(&stack0xffffffa0,puVar7);
    FUN_10002610(&stack0xffffff94,&local_3c);
    FUN_100492b0(in_stack_ffffff94,fVar10,(float)puVar7,in_stack_ffffffa0,in_stack_ffffffa4,
                 in_stack_ffffffa8,iVar12,fVar14,fVar16);
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004bef0  FUN_1004bef0  (156 bytes)
 * undefined FUN_1004bef0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004bef0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  
  FUN_100299b0(param_3,param_2);
  fVar1 = FUN_10029b60();
  DAT_1009ff04 = (float)(fVar1 * (float10)0.01);
  if (fVar1 * (float10)0.01 == (float10)0.0) {
    DAT_1009ff04 = 1.0;
  }
  if ((DAT_100963e8 == 1.0) && (DAT_1009ff04 != 1.0)) {
    (*(gEngfuncs.pEventAPI)->EV_PlaySound)
              (-1,(float *)&DAT_100cf958,0,s_goslow_wav_10095b04,1.0,0.8,0,100);
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004bf90  FUN_1004bf90  (58 bytes)
 * undefined4 FUN_1004bf90(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_1004bf90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  FUN_10029a10();
  FUN_10029680(&DAT_100dff48,(int)(short)uVar1);
  return 1;
}

/* 1004bfd0  FUN_1004bfd0  (195 bytes)
 * undefined4 FUN_1004bfd0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1004bfd0(float param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  float10 extraout_ST0;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c [3];
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  if (uVar1 == 3) {
    local_18 = 0.0;
    local_14 = 0.0;
    local_10 = 0;
    DAT_10189438 = FUN_10029aa0();
    iVar2 = FUN_10029aa0();
    local_14 = (float)iVar2;
    (*gEngfuncs.pfnAngleVectors)(&local_18,local_c,(float *)0x0,(float *)0x0);
    DAT_10189454 = param_1;
    DAT_1018945c = param_3;
    DAT_10189460 = param_1;
    _DAT_10189468 = param_3;
    local_c[0] = 2.6180658e-29;
    DAT_10189458 = iVar2;
    DAT_10189464 = iVar2;
    fVar3 = FUN_10029b60();
    DAT_10189444 = (float)fVar3;
    DAT_10189440 = (float)fVar3;
    local_c[0] = 2.6180712e-29;
    (*gEngfuncs.GetClientTime)();
    _DAT_1018946c = (float)extraout_ST0;
  }
  return 1;
}

/* 1004c0a0  FUN_1004c0a0  (210 bytes)
 * undefined FUN_1004c0a0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004c0a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  char local_80 [127];
  undefined1 local_1;
  
  FUN_100299b0(param_3,param_2);
  uVar2 = FUN_10029a10();
  uVar3 = FUN_10029a10();
  uVar4 = FUN_10029a10();
  uVar5 = FUN_10029a10();
  uVar6 = FUN_10029a10();
  uVar7 = uVar6;
  if ((int)uVar6 < 1) {
    uVar7 = -uVar6;
  }
  if ((int)uVar7 < 100) {
    if ((int)uVar6 < 1) {
      uVar6 = -uVar6;
    }
  }
  else {
    uVar6 = 100;
  }
  pcVar8 = FUN_10029b00();
  uVar7 = 0xffffffff;
  do {
    pcVar10 = pcVar8;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar8 = pcVar10 + -uVar7;
  pcVar10 = local_80;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  local_1 = 0;
  FUN_1004b520(this,local_80,uVar2,uVar3,uVar4,uVar6,uVar5);
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004c180  FUN_1004c180  (82 bytes)
 * undefined FUN_1004c180(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004c180(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char *szSound;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  if (uVar1 == 0) {
    szSound = s_misc_successful_wav_10095b10;
  }
  else {
    if (uVar1 != 1) goto LAB_1004c1c1;
    szSound = s_misc_failed_wav_10095b24;
  }
  (*gEngfuncs.pfnPlaySoundByName)(szSound,1.0);
LAB_1004c1c1:
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004c1e0  FUN_1004c1e0  (111 bytes)
 * undefined4 FUN_1004c1e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1004c1e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  FUN_100299b0(param_3,param_2);
  iVar1 = FUN_10029a50();
  DAT_101914a8._0_2_ = (undefined2)iVar1;
  iVar1 = FUN_10029a50();
  DAT_101914a8._2_2_ = (undefined2)iVar1;
  iVar1 = FUN_10029a50();
  _DAT_101914ac = (undefined2)iVar1;
  uVar2 = FUN_10029a10();
  DAT_101914ae = (undefined1)uVar2;
  uVar2 = FUN_10029a10();
  DAT_101914af = (undefined1)uVar2;
  uVar2 = FUN_10029a10();
  DAT_101914b0._0_1_ = (undefined1)uVar2;
  uVar2 = FUN_10029a10();
  DAT_101914b0._1_1_ = (char)uVar2;
  _DAT_10190b5c = DAT_100cf944;
  return 1;
}

/* 1004c250  FUN_1004c250  (38 bytes)
 * uint FUN_1004c250(void)
 * called by: FUN_1004d3f0, FUN_1004f220, FUN_1004fce0, FUN_1004fd40, FUN_1004fda0, FUN_10054510, FUN_10067890
 */
uint FUN_1004c250(void)

{
  uint uVar1;
  
  uVar1 = (*(gEngfuncs.pDemoAPI)->IsPlayingback)();
  if (uVar1 == 0) {
    uVar1 = (*(gEngfuncs.pDemoAPI)->IsRecording)();
    if (uVar1 == 0) {
      return (uint)(DAT_100d43ec == '\0');
    }
  }
  return uVar1 & 0xffffff00;
}

/* 1004c280  FUN_1004c280  (6 bytes)
 * undefined1 FUN_1004c280(void)
 * called by: FUN_1004b730, FUN_1004d3f0, FUN_1004f220, FUN_1004fce0, FUN_1004fd40, FUN_1004fda0, FUN_1004fe00, FUN_10054510, FUN_10055760
 */
undefined1 FUN_1004c280(void)

{
  return DAT_100d4401;
}

/* 1004c290  FUN_1004c290  (1385 bytes)
 * int FUN_1004c290(int param_1, undefined4 param_2, byte.conflict param_3, int param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * called by: FUN_10011a60, FUN_10036af0, FUN_1004a130, FUN_1004a2e0, FUN_1004a3e0, FUN_1004d7e0, FUN_1004e030, FUN_1004e9f0
 */
int __thiscall
FUN_1004c290(void *this,int param_1,int param_2,byte_conflict param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  HSPRITE HVar2;
  int iVar3;
  int iVar4;
  
  DAT_1018a5ac = (wrect_t *)(*(int *)((int)this + 0x6204) * 0x10 + *(int *)((int)this + 0x70));
  iVar4 = DAT_1018a5ac->right - DAT_1018a5ac->left;
  if (0 < param_4) {
    if (param_4 < 10000) {
      if ((param_3 & 0x10) != 0) {
        if ((param_3 & 0x20) != 0) {
          if (*(int *)((int)this + 0x6204) < 0) {
            HVar2 = 0;
          }
          else {
            HVar2 = *(HSPRITE *)(*(int *)((int)this + 0x6c) + *(int *)((int)this + 0x6204) * 4);
          }
          (*gEngfuncs.pfnSPR_Set)(HVar2,param_5,param_6,param_7);
          (*gEngfuncs.pfnSPR_DrawAdditive)(0,param_1,param_2,DAT_1018a5ac);
        }
        param_1 = param_1 + iVar4;
      }
    }
    else {
      iVar1 = param_4 / 10000 + *(int *)((int)this + 0x6204);
      if (iVar1 < 0) {
        HVar2 = 0;
      }
      else {
        HVar2 = *(HSPRITE *)(*(int *)((int)this + 0x6c) + iVar1 * 4);
      }
      (*gEngfuncs.pfnSPR_Set)(HVar2,param_5,param_6,param_7);
      (*gEngfuncs.pfnSPR_DrawAdditive)
                (0,param_1,param_2,
                 (wrect_t *)
                 ((param_4 / 10000 + *(int *)((int)this + 0x6204)) * 0x10 +
                 *(int *)((int)this + 0x70)));
      param_1 = param_1 + iVar4;
    }
    if (param_4 < 1000) {
      if ((param_3 & 0x18) != 0) {
        if ((param_3 & 0x20) != 0) {
          if (*(int *)((int)this + 0x6204) < 0) {
            HVar2 = 0;
          }
          else {
            HVar2 = *(HSPRITE *)(*(int *)((int)this + 0x6c) + *(int *)((int)this + 0x6204) * 4);
          }
          (*gEngfuncs.pfnSPR_Set)(HVar2,param_5,param_6,param_7);
          (*gEngfuncs.pfnSPR_DrawAdditive)(0,param_1,param_2,DAT_1018a5ac);
        }
        param_1 = param_1 + iVar4;
      }
    }
    else {
      iVar1 = (param_4 % 10000) / 1000;
      iVar3 = iVar1 + *(int *)((int)this + 0x6204);
      if (iVar3 < 0) {
        HVar2 = 0;
      }
      else {
        HVar2 = *(HSPRITE *)(*(int *)((int)this + 0x6c) + iVar3 * 4);
      }
      (*gEngfuncs.pfnSPR_Set)(HVar2,param_5,param_6,param_7);
      (*gEngfuncs.pfnSPR_DrawAdditive)
                (0,param_1,param_2,
                 (wrect_t *)
                 ((iVar1 + *(int *)((int)this + 0x6204)) * 0x10 + *(int *)((int)this + 0x70)));
      param_1 = param_1 + iVar4;
    }
    if (param_4 < 100) {
      if ((param_3 & 0xc) != 0) {
        if ((param_3 & 0x20) != 0) {
          if (*(int *)((int)this + 0x6204) < 0) {
            HVar2 = 0;
          }
          else {
            HVar2 = *(HSPRITE *)(*(int *)((int)this + 0x6c) + *(int *)((int)this + 0x6204) * 4);
          }
          (*gEngfuncs.pfnSPR_Set)(HVar2,param_5,param_6,param_7);
          (*gEngfuncs.pfnSPR_DrawAdditive)(0,param_1,param_2,DAT_1018a5ac);
        }
        param_1 = param_1 + iVar4;
      }
    }
    else {
      iVar1 = (param_4 % 1000) / 100;
      iVar3 = iVar1 + *(int *)((int)this + 0x6204);
      if (iVar3 < 0) {
        HVar2 = 0;
      }
      else {
        HVar2 = *(HSPRITE *)(*(int *)((int)this + 0x6c) + iVar3 * 4);
      }
      (*gEngfuncs.pfnSPR_Set)(HVar2,param_5,param_6,param_7);
      (*gEngfuncs.pfnSPR_DrawAdditive)
                (0,param_1,param_2,
                 (wrect_t *)
                 ((iVar1 + *(int *)((int)this + 0x6204)) * 0x10 + *(int *)((int)this + 0x70)));
      param_1 = param_1 + iVar4;
    }
    if (param_4 < 10) {
      if ((param_3 & 6) != 0) {
        if ((param_3 & 0x20) != 0) {
          if (*(int *)((int)this + 0x6204) < 0) {
            HVar2 = 0;
          }
          else {
            HVar2 = *(HSPRITE *)(*(int *)((int)this + 0x6c) + *(int *)((int)this + 0x6204) * 4);
          }
          (*gEngfuncs.pfnSPR_Set)(HVar2,param_5,param_6,param_7);
          (*gEngfuncs.pfnSPR_DrawAdditive)(0,param_1,param_2,DAT_1018a5ac);
        }
        param_1 = param_1 + iVar4;
      }
    }
    else {
      iVar1 = (param_4 % 100) / 10;
      iVar3 = iVar1 + *(int *)((int)this + 0x6204);
      if (iVar3 < 0) {
        HVar2 = 0;
      }
      else {
        HVar2 = *(HSPRITE *)(*(int *)((int)this + 0x6c) + iVar3 * 4);
      }
      (*gEngfuncs.pfnSPR_Set)(HVar2,param_5,param_6,param_7);
      (*gEngfuncs.pfnSPR_DrawAdditive)
                (0,param_1,param_2,
                 (wrect_t *)
                 ((iVar1 + *(int *)((int)this + 0x6204)) * 0x10 + *(int *)((int)this + 0x70)));
      param_1 = param_1 + iVar4;
    }
    iVar1 = param_4 % 10 + *(int *)((int)this + 0x6204);
    if (iVar1 < 0) {
      HVar2 = 0;
    }
    else {
      HVar2 = *(HSPRITE *)(*(int *)((int)this + 0x6c) + iVar1 * 4);
    }
    (*gEngfuncs.pfnSPR_Set)(HVar2,param_5,param_6,param_7);
    (*gEngfuncs.pfnSPR_DrawAdditive)
              (0,param_1,param_2,
               (wrect_t *)
               ((param_4 % 10 + *(int *)((int)this + 0x6204)) * 0x10 + *(int *)((int)this + 0x70)));
    return param_1 + iVar4;
  }
  if ((param_3 & 1) == 0) {
    return param_1;
  }
  if (*(int *)((int)this + 0x6204) < 0) {
    HVar2 = 0;
  }
  else {
    HVar2 = *(HSPRITE *)(*(int *)((int)this + 0x6c) + *(int *)((int)this + 0x6204) * 4);
  }
  (*gEngfuncs.pfnSPR_Set)(HVar2,param_5,param_6,param_7);
  if ((param_3 & 0x10) != 0) {
    if ((param_3 & 0x20) != 0) {
      if (*(int *)((int)this + 0x6204) < 0) {
        HVar2 = 0;
      }
      else {
        HVar2 = *(HSPRITE *)(*(int *)((int)this + 0x6c) + *(int *)((int)this + 0x6204) * 4);
      }
      (*gEngfuncs.pfnSPR_Set)(HVar2,param_5,param_6,param_7);
      (*gEngfuncs.pfnSPR_DrawAdditive)(0,param_1,param_2,DAT_1018a5ac);
    }
    param_1 = param_1 + iVar4;
  }
  if ((param_3 & 0x18) != 0) {
    if ((param_3 & 0x20) != 0) {
      if (*(int *)((int)this + 0x6204) < 0) {
        HVar2 = 0;
      }
      else {
        HVar2 = *(HSPRITE *)(*(int *)((int)this + 0x6c) + *(int *)((int)this + 0x6204) * 4);
      }
      (*gEngfuncs.pfnSPR_Set)(HVar2,param_5,param_6,param_7);
      (*gEngfuncs.pfnSPR_DrawAdditive)(0,param_1,param_2,DAT_1018a5ac);
    }
    param_1 = param_1 + iVar4;
  }
  if ((param_3 & 0xc) != 0) {
    if ((param_3 & 0x20) != 0) {
      if (*(int *)((int)this + 0x6204) < 0) {
        HVar2 = 0;
      }
      else {
        HVar2 = *(HSPRITE *)(*(int *)((int)this + 0x6c) + *(int *)((int)this + 0x6204) * 4);
      }
      (*gEngfuncs.pfnSPR_Set)(HVar2,param_5,param_6,param_7);
      (*gEngfuncs.pfnSPR_DrawAdditive)(0,param_1,param_2,DAT_1018a5ac);
    }
    param_1 = param_1 + iVar4;
  }
  if ((param_3 & 6) != 0) {
    if ((param_3 & 0x20) != 0) {
      if (*(int *)((int)this + 0x6204) < 0) {
        HVar2 = 0;
      }
      else {
        HVar2 = *(HSPRITE *)(*(int *)((int)this + 0x6c) + *(int *)((int)this + 0x6204) * 4);
      }
      (*gEngfuncs.pfnSPR_Set)(HVar2,param_5,param_6,param_7);
      (*gEngfuncs.pfnSPR_DrawAdditive)(0,param_1,param_2,DAT_1018a5ac);
    }
    param_1 = param_1 + iVar4;
  }
  (*gEngfuncs.pfnSPR_DrawAdditive)
            (0,param_1,param_2,
             (wrect_t *)(*(int *)((int)this + 0x6204) * 0x10 + *(int *)((int)this + 0x70)));
  return param_1 + iVar4;
}

/* 1004cb50  FUN_1004cb50  (517 bytes)
 * undefined FUN_1004cb50(int param_1)
 */
void __fastcall FUN_1004cb50(int param_1)

{
  char *pcVar1;
  HSPRITE HVar2;
  int iVar3;
  HSPRITE *pHVar4;
  undefined4 *puVar5;
  
  FUN_10007de0();
  puVar5 = (undefined4 *)(param_1 + 0x164);
  for (iVar3 = 0x176; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  iVar3 = 0;
  pHVar4 = (HSPRITE *)(param_1 + 0x44);
  do {
    pcVar1 = (char *)FUN_100071c0(iVar3);
    if (*pcVar1 != '\0') {
      HVar2 = (*gEngfuncs.pfnSPR_Load)(pcVar1 + 0x86);
      *pHVar4 = HVar2;
    }
    iVar3 = iVar3 + 1;
    pHVar4 = pHVar4 + 1;
  } while (iVar3 < 0x26);
  HVar2 = (*gEngfuncs.pfnSPR_Load)(s_sprites_weapons_kungfu_spr_10095d80);
  *(HSPRITE *)(param_1 + 0x44) = HVar2;
  HVar2 = (*gEngfuncs.pfnSPR_Load)(s_sprites_weapons_item_installed_s_10095d5c);
  *(HSPRITE *)(param_1 + 0x144) = HVar2;
  HVar2 = (*gEngfuncs.pfnSPR_Load)(s_sprites_weapons_item_not_install_10095d34);
  *(HSPRITE *)(param_1 + 0x148) = HVar2;
  HVar2 = (*gEngfuncs.pfnSPR_Load)(s_sprites_cross_e_spr_10095d20);
  *(HSPRITE *)(param_1 + 0x14c) = HVar2;
  HVar2 = (*gEngfuncs.pfnSPR_Load)(s_sprites_cross2_spr_10095d0c);
  *(HSPRITE *)(param_1 + 0x150) = HVar2;
  HVar2 = (*gEngfuncs.pfnSPR_Load)(s_sprites_cross_t_spr_10095cf8);
  *(HSPRITE *)(param_1 + 0x154) = HVar2;
  HVar2 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_divestept_spr_10095cd8);
  *(HSPRITE *)(param_1 + 0x158) = HVar2;
  HVar2 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_divestepc_spr_10095cb8);
  *(HSPRITE *)(param_1 + 0x15c) = HVar2;
  HVar2 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_divestepb_spr_10095c98);
  *(HSPRITE *)(param_1 + 0x160) = HVar2;
  *(undefined1 *)(param_1 + 0x73c) = 0;
  puVar5 = (undefined4 *)(param_1 + 0x788);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x7b8) = 0;
  puVar5 = (undefined4 *)(param_1 + 0x748);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x740) = 0;
  *(undefined4 *)(param_1 + 0x744) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x371c) = 0;
  FUN_10036200((undefined1 *)(param_1 + 0x7c0));
  HVar2 = (*gEngfuncs.pfnSPR_Load)(s_sprites_wires_rwire_spr_10095c80);
  *(HSPRITE *)(param_1 + 0x36e4) = HVar2;
  HVar2 = (*gEngfuncs.pfnSPR_Load)(s_sprites_wires_gwire_spr_10095c68);
  *(HSPRITE *)(param_1 + 0x36e8) = HVar2;
  HVar2 = (*gEngfuncs.pfnSPR_Load)(s_sprites_wires_bwire_spr_10095c50);
  *(HSPRITE *)(param_1 + 0x36ec) = HVar2;
  HVar2 = (*gEngfuncs.pfnSPR_Load)(s_sprites_wires_rwirecutted_spr_10095c30);
  *(HSPRITE *)(param_1 + 0x36f0) = HVar2;
  HVar2 = (*gEngfuncs.pfnSPR_Load)(s_sprites_wires_gwirecutted_spr_10095c10);
  *(HSPRITE *)(param_1 + 0x36f4) = HVar2;
  HVar2 = (*gEngfuncs.pfnSPR_Load)(s_sprites_wires_bwirecutted_spr_10095bf0);
  *(HSPRITE *)(param_1 + 0x36f8) = HVar2;
  *(undefined4 *)(param_1 + 0x3700) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x3704) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x36fc) = 0;
  *(undefined1 *)(param_1 + 0x36fd) = 0;
  *(undefined1 *)(param_1 + 0x36fe) = 0;
  *(undefined4 *)(param_1 + 0x3708) = 0;
  *(undefined4 *)(param_1 + 0x370c) = 0;
  *(undefined4 *)(param_1 + 0x3710) = 0;
  *(undefined4 *)(param_1 + 0x3714) = 0;
  *(undefined4 *)(param_1 + 0x3720) = 0;
  *(undefined4 *)(param_1 + 0x3724) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  DAT_10189f9d = 0;
  *(undefined4 *)(param_1 + 0x3728) = 0xffffffff;
  return;
}

/* 1004cd60  FUN_1004cd60  (176 bytes)
 * undefined FUN_1004cd60(int param_1)
 */
void __fastcall FUN_1004cd60(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0x164);
  for (iVar3 = 0x176; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)(param_1 + 0x73c) = 0;
  *(undefined4 *)(param_1 + 0x7b8) = 0;
  *(undefined4 *)(param_1 + 0x740) = 0;
  *(undefined4 *)(param_1 + 0x744) = 0;
  puVar2 = FUN_100071c0(0);
  bVar1 = *(byte *)((int)puVar2 + 0x85);
  puVar2 = FUN_100071c0(0);
  iVar3 = (uint)*(byte *)(puVar2 + 0x21) + (uint)bVar1 * 0xb;
  *(undefined4 *)(param_1 + 0x164 + iVar3 * 8) = 0;
  *(undefined4 *)(param_1 + 0x168 + iVar3 * 8) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x371c) = 0;
  *(undefined1 *)(param_1 + 0x36fc) = 0;
  *(undefined1 *)(param_1 + 0x36fd) = 0;
  *(undefined1 *)(param_1 + 0x36fe) = 0;
  *(undefined4 *)(param_1 + 0x3720) = 0;
  *(undefined4 *)(param_1 + 0x3724) = 0;
  *(undefined4 *)(param_1 + 0x3728) = 0xffffffff;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return;
}

/* 1004d3f0  FUN_1004d3f0  (344 bytes)
 * undefined4 FUN_1004d3f0(void * param_1)
 */
undefined4 __fastcall FUN_1004d3f0(void *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  cl_entity_s *pcVar3;
  uint uVar4;
  int iVar5;
  
  FUN_1004e6f0((int)param_1);
  if (*(float *)(DAT_100df50c + 0xc) == 0.0) {
    puVar1 = (undefined1 *)((int)param_1 + 0x7c0);
    cVar2 = FUN_100361f0(puVar1);
    if (cVar2 != '\0') {
      FUN_10036750(puVar1);
    }
    uVar4 = FUN_1004c250();
    if (((char)uVar4 == '\0') && (cVar2 = FUN_1004c280(), cVar2 == '\0')) {
      cVar2 = FUN_100361f0(puVar1);
      if ((cVar2 != '\0') && (*(int *)((int)param_1 + 0x7c4) != 8)) {
        FUN_10036720(puVar1);
      }
      if ((*(char *)((int)param_1 + 0x73c) == '\0') ||
         (iVar5 = (*(gEngfuncs.pDemoAPI)->IsPlayingback)(), iVar5 != 0)) {
        cVar2 = '\x01';
      }
      else {
        cVar2 = '\0';
      }
      FUN_1004e030(param_1,cVar2);
      if (*(int *)((int)param_1 + 0x7b8) == 0) {
        *(undefined4 *)((int)param_1 + 0x14) = 0;
        FUN_1004d700(param_1);
      }
      else {
        pcVar3 = (*gEngfuncs.GetLocalPlayer)();
        *(int *)((int)param_1 + 0x14) = (int)*(char *)((int)&DAT_1018d128 + pcVar3->index * 2);
        FUN_1004d7e0(param_1);
      }
      cVar2 = FUN_100361f0(puVar1);
      if (cVar2 != '\0') {
        return 1;
      }
      if (((*(char *)((int)param_1 + 0x36fc) == '\0') && (*(char *)((int)param_1 + 0x36fd) == '\0'))
         && (*(char *)((int)param_1 + 0x36fe) == '\0')) {
        FUN_1004e9f0(param_1);
        return 1;
      }
      FUN_1004d550((int)param_1);
      return 1;
    }
  }
  else if (*(int *)((int)param_1 + 0x7b8) != 0) {
    pcVar3 = (*gEngfuncs.GetLocalPlayer)();
    *(int *)((int)param_1 + 0x14) = (int)*(char *)((int)&DAT_1018d128 + pcVar3->index * 2);
    return 1;
  }
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  return 1;
}

/* 1004d550  FUN_1004d550  (158 bytes)
 * undefined FUN_1004d550(int param_1)
 * called by: FUN_1004d3f0
 */
void __fastcall FUN_1004d550(int param_1)

{
  HSPRITE hPic;
  
  DAT_1018a624 = DAT_100d5908 / 2 + -0x30;
  DAT_1018a6e8 = DAT_100d590c / 2 + -0x80;
  DAT_1018a714 = 0;
  do {
    if (*(char *)(param_1 + 0x36fc + DAT_1018a714) == '\0') {
      hPic = *(HSPRITE *)(param_1 + 0x36f0 + DAT_1018a714 * 4);
    }
    else {
      hPic = *(HSPRITE *)(param_1 + 0x36e4 + DAT_1018a714 * 4);
    }
    (*gEngfuncs.pfnSPR_Set)(hPic,0xff,0xff,0xff);
    (*gEngfuncs.pfnSPR_DrawHoles)(0,DAT_1018a624,DAT_1018a6e8,(wrect_t *)0x0);
    DAT_1018a624 = DAT_1018a624 + 0x20;
    DAT_1018a714 = DAT_1018a714 + 1;
  } while (DAT_1018a714 < 3);
  return;
}

/* 1004d5f0  FUN_1004d5f0  (261 bytes)
 * undefined FUN_1004d5f0(int param_1, int param_2)
 * called by: FUN_1004d700, FUN_1004d7e0
 */
void __thiscall FUN_1004d5f0(void *this,int param_1,int param_2)

{
  int iVar1;
  int g;
  int b;
  int r;
  longlong lVar2;
  
  lVar2 = __ftol();
  r = (int)lVar2;
  lVar2 = __ftol();
  g = (int)lVar2;
  lVar2 = __ftol();
  b = (int)lVar2;
  if (*(float *)((int)this + 0x3700) <= 0.01) {
    g = 0x2d;
    r = 0xc3;
    b = 0x2d;
  }
  else {
    lVar2 = __ftol();
    iVar1 = (int)lVar2;
    (*gEngfuncs.pfnFillRGBA)
              (param_1 + 2,param_2 + 2,iVar1 + -2,0x10,(r * 0x80) / 0xff,(iVar1 * g) / 0xff,
               (iVar1 * b) / 0xff,0xff - iVar1);
  }
  (*gEngfuncs.pfnFillRGBA)(param_1,param_2,0x80,0x13,r,g,b,0x1e);
  return;
}

/* 1004d700  FUN_1004d700  (210 bytes)
 * undefined FUN_1004d700(void * param_1)
 * called by: FUN_1004d3f0
 */
void __fastcall FUN_1004d700(void *param_1)

{
  int x;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = __ftol();
  lVar6 = __ftol();
  lVar7 = __ftol();
  iVar2 = DAT_100d590c;
  iVar1 = DAT_100d5908;
  x = DAT_100d5908 + -0x88;
  FUN_1004d5f0(param_1,x,DAT_100d590c + -0x1c);
  (*gEngfuncs.pfnFillRGBA)(x,iVar2 + -0x30,0x80,0x13,(int)lVar5,(int)lVar6,(int)lVar7,0x23);
  lVar5 = __ftol();
  uVar3 = (undefined4)lVar5;
  lVar5 = __ftol();
  uVar4 = (undefined4)lVar5;
  lVar5 = __ftol();
  FUN_10021ce0(iVar1 + -0x86,iVar2 + -0x30,DAT_100d5908,s_Kung_Fu_10095e14,(int)lVar5,uVar4,uVar3);
  return;
}

/* 1004d7e0  FUN_1004d7e0  (2092 bytes)
 * undefined FUN_1004d7e0(void * param_1)
 * called by: FUN_1004d3f0
 */
void __fastcall FUN_1004d7e0(void *param_1)

{
  char cVar1;
  uint uVar2;
  int r;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  byte_conflict bVar12;
  char *pcVar13;
  
  if (*(float *)(DAT_100df494 + 0xc) != 0.0) {
    return;
  }
  lVar11 = __ftol();
  DAT_1018a648 = (int)lVar11;
  lVar11 = __ftol();
  DAT_1018a70c = (int)lVar11;
  lVar11 = __ftol();
  DAT_1018a65c = (int)lVar11;
  DAT_1018a6c0 = FUN_100071c0(*(int *)((int)param_1 + 0x7b8));
  iVar9 = DAT_100d5908 + -0x88;
  iVar8 = 0x14;
  DAT_1018a700 = DAT_100d590c + -8;
  DAT_1018a6f8 = 0x14;
  DAT_1018a674 = 0;
  DAT_1018a67c = iVar9;
  do {
    uVar2 = 1 << ((byte)DAT_1018a674 & 0x1f);
    if ((*(uint *)((int)param_1 + 0x798) & uVar2) == 0) goto LAB_1004da28;
    DAT_1018a700 = DAT_1018a700 - iVar8;
    (*gEngfuncs.pfnFillRGBA)
              (iVar9,DAT_1018a700,0x80,iVar8 + -1,DAT_1018a648,DAT_1018a70c,DAT_1018a65c,
               (SUB14((uVar2 & *(uint *)((int)param_1 + 0x14)) != 0,0) * 0xff & 0x1eU) + 0xf);
    switch(DAT_1018a674) {
    case 0:
      pcVar13 = s__HUD_Silencer_10095eac;
      break;
    case 1:
      pcVar13 = s__HUD_Lasersight_10095e9c;
      goto LAB_1004d924;
    case 2:
      pcVar13 = s__HUD_Flashlight_10095e8c;
      break;
    case 3:
      pcVar13 = s__HUD_Scope_10095e80;
LAB_1004d924:
      pcVar13 = FUN_100349a0(pcVar13);
      uVar2 = 0xffffffff;
      do {
        pcVar10 = pcVar13;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar10 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar10;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar13 = pcVar10 + -uVar2;
      pcVar10 = (char *)&DAT_1018a688;
      for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar10 = pcVar10 + 4;
      }
      goto LAB_1004d949;
    default:
      goto switchD_1004d8de_default;
    }
    pcVar13 = FUN_100349a0(pcVar13);
    uVar2 = 0xffffffff;
    do {
      pcVar10 = pcVar13;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar10 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar13 = pcVar10 + -uVar2;
    pcVar10 = (char *)&DAT_1018a688;
    for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
LAB_1004d949:
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
switchD_1004d8de_default:
    FUN_10021ce0(DAT_1018a67c + 2,DAT_1018a700,DAT_100d5908,(char *)&DAT_1018a688,DAT_1018a648 / 2,
                 DAT_1018a70c / 2,DAT_1018a65c / 2);
    r = DAT_1018a648;
    iVar9 = DAT_1018a70c;
    iVar8 = DAT_1018a65c;
    if ((1 << ((byte)DAT_1018a674 & 0x1f) & *(uint *)((int)param_1 + 0x14)) == 0) {
      r = DAT_1018a648 / 2;
      iVar9 = DAT_1018a70c / 2;
      iVar8 = DAT_1018a65c / 2;
    }
    (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)((int)param_1 + 0x144),r,iVar9,iVar8);
    (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_1018a67c + 0x70,DAT_1018a700,(wrect_t *)0x0);
    iVar8 = DAT_1018a6f8;
    iVar9 = DAT_1018a67c;
LAB_1004da28:
    DAT_1018a674 = DAT_1018a674 + 1;
  } while (DAT_1018a674 < 4);
  DAT_1018a700 = DAT_1018a700 - iVar8;
  (*gEngfuncs.pfnFillRGBA)
            (iVar9,DAT_1018a700,0x80,iVar8 + -1,DAT_1018a648,DAT_1018a70c,DAT_1018a65c,0xf);
  puVar3 = FUN_100071c0(*(int *)((int)param_1 + 0x7b8));
  if (*(char *)(puVar3 + 2) == '\0') {
    FUN_1004d5f0(param_1,DAT_1018a67c,DAT_1018a700);
    DAT_1018a700 = DAT_1018a700 - DAT_1018a6f8;
    puVar3 = FUN_100071c0(*(int *)((int)param_1 + 0x7b8));
    if (*(char *)(puVar3 + 0x37) != '\0') {
      iVar9 = *(int *)((int)param_1 + 0x78c);
      lVar11 = __ftol();
      uVar4 = (undefined4)lVar11;
      lVar11 = __ftol();
      uVar5 = (undefined4)lVar11;
      lVar11 = __ftol();
      uVar6 = (undefined4)lVar11;
      bVar12 = '\x05';
      iVar8 = DAT_1018a700;
      lVar11 = __ftol();
      FUN_1004c290(&DAT_100cf920,(int)lVar11,iVar8,bVar12,iVar9,uVar6,uVar5,uVar4);
    }
    goto LAB_1004df0f;
  }
  iVar9 = *(int *)((int)param_1 + 0x78c);
  lVar11 = __ftol();
  uVar4 = (undefined4)lVar11;
  lVar11 = __ftol();
  uVar5 = (undefined4)lVar11;
  lVar11 = __ftol();
  FUN_1004c290(&DAT_100cf920,DAT_1018a67c + 2,DAT_1018a700,'\x05',iVar9,(int)lVar11,uVar5,uVar4);
  FUN_10021ce0(DAT_1018a67c + 0x40,DAT_1018a700,DAT_100d5908,&DAT_10095e7c,
               (int)(DAT_1018a648 + (DAT_1018a648 >> 0x1f & 3U)) >> 2,
               (int)(DAT_1018a70c + (DAT_1018a70c >> 0x1f & 3U)) >> 2,
               (int)(DAT_1018a65c + (DAT_1018a65c >> 0x1f & 3U)) >> 2);
  FUN_100071c0(*(int *)((int)param_1 + 0x7b8));
  FUN_100071c0(*(int *)((int)param_1 + 0x7b8));
  FUN_100071c0(*(int *)((int)param_1 + 0x7b8));
  lVar11 = __ftol();
  uVar4 = (undefined4)lVar11;
  lVar11 = __ftol();
  uVar5 = (undefined4)lVar11;
  lVar11 = __ftol();
  uVar6 = (undefined4)lVar11;
  puVar3 = FUN_100071c0(*(int *)((int)param_1 + 0x7b8));
  iVar9 = *(int *)((int)param_1 + (uint)*(byte *)(puVar3 + 2) * 4 + 0x748);
  bVar12 = '\x05';
  iVar8 = DAT_1018a700;
  lVar11 = __ftol();
  FUN_1004c290(&DAT_100cf920,(int)lVar11,iVar8,bVar12,iVar9,uVar6,uVar5,uVar4);
  DAT_1018a700 = DAT_1018a700 - DAT_1018a6f8;
  (*gEngfuncs.pfnFillRGBA)
            (DAT_1018a67c,DAT_1018a700,0x80,DAT_1018a6f8 + -1,DAT_1018a648,DAT_1018a70c,DAT_1018a65c
             ,0xf);
  switch(*(undefined1 *)((int)param_1 + 0x78a)) {
  case 1:
    pcVar13 = s__HUD_SemiAuto_10095e6c;
    break;
  case 2:
    pcVar13 = s__HUD_Burst_10095e60;
    goto LAB_1004ddd4;
  case 3:
    pcVar13 = s__HUD_PumpAction_10095e50;
    break;
  case 4:
    pcVar13 = s__HUD_FreeSemi_10095e30;
    break;
  case 5:
    pcVar13 = s__HUD_FreeFull_10095e40;
    goto LAB_1004ddd4;
  default:
    pcVar13 = s__HUD_FullAuto_10095e20;
LAB_1004ddd4:
    pcVar13 = FUN_100349a0(pcVar13);
    uVar2 = 0xffffffff;
    do {
      pcVar10 = pcVar13;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar10 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar13 = pcVar10 + -uVar2;
    pcVar10 = (char *)&DAT_1018a6c8;
    for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    goto LAB_1004ddf9;
  }
  pcVar13 = FUN_100349a0(pcVar13);
  uVar2 = 0xffffffff;
  do {
    pcVar10 = pcVar13;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar10 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar10;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar13 = pcVar10 + -uVar2;
  pcVar10 = (char *)&DAT_1018a6c8;
  for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar10 = pcVar10 + 4;
  }
LAB_1004ddf9:
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar10 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar10 = pcVar10 + 1;
  }
  lVar11 = __ftol();
  uVar4 = (undefined4)lVar11;
  lVar11 = __ftol();
  uVar5 = (undefined4)lVar11;
  lVar11 = __ftol();
  FUN_10021ce0(DAT_1018a67c + 2,DAT_1018a700,DAT_100d5908,(char *)&DAT_1018a6c8,(int)lVar11,uVar5,
               uVar4);
  DAT_1018a700 = DAT_1018a700 - DAT_1018a6f8;
  (*gEngfuncs.pfnFillRGBA)
            (DAT_1018a67c,DAT_1018a700,0x80,DAT_1018a6f8 + -1,DAT_1018a648,DAT_1018a70c,DAT_1018a65c
             ,0xf);
  lVar11 = __ftol();
  uVar4 = (undefined4)lVar11;
  lVar11 = __ftol();
  uVar5 = (undefined4)lVar11;
  lVar11 = __ftol();
  uVar6 = (undefined4)lVar11;
  puVar3 = FUN_100071c0(*(int *)((int)param_1 + 0x7b8));
  puVar3 = FUN_100071f0((uint)*(byte *)(puVar3 + 2));
  FUN_10021ce0(DAT_1018a67c + 2,DAT_1018a700,DAT_100d5908,(char *)(puVar3 + 10),uVar6,uVar5,uVar4);
LAB_1004df0f:
  DAT_1018a700 = DAT_1018a700 - DAT_1018a6f8;
  (*gEngfuncs.pfnFillRGBA)
            (DAT_1018a67c,DAT_1018a700,0x80,DAT_1018a6f8 + -1,DAT_1018a648,DAT_1018a70c,DAT_1018a65c
             ,0x23);
  lVar11 = __ftol();
  uVar4 = (undefined4)lVar11;
  lVar11 = __ftol();
  uVar5 = (undefined4)lVar11;
  lVar11 = __ftol();
  FUN_10021ce0(DAT_1018a67c + 2,DAT_1018a700,DAT_100d5908,(char *)(DAT_1018a6c0 + 0x11),(int)lVar11,
               uVar5,uVar4);
  if (DAT_100cf978 < 0x28) {
    FUN_1006ac7a((undefined1 *)&DAT_1018a6c8,&DAT_10095e1c);
    FUN_10021ce0(0x18,0x18,DAT_100d5908,(char *)&DAT_1018a6c8,DAT_1018a648,DAT_1018a70c,DAT_1018a65c
                );
  }
  return;
}

/* 1004e030  FUN_1004e030  (1727 bytes)
 * undefined FUN_1004e030(char param_1)
 * called by: FUN_1004d3f0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1004e030(void *this,char param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  int a;
  int iVar11;
  int iStack_30;
  char acStack_28 [20];
  char acStack_14 [20];
  
  if (param_1 != '\0') {
    lVar9 = __ftol();
    iVar8 = (int)lVar9;
    if (((iVar8 != 1) && (iVar8 != 2)) && (iVar8 != 3)) {
      return;
    }
  }
  DAT_1018a678 = 1;
  do {
    lVar9 = __ftol();
    _DAT_1018a654 = (undefined4)lVar9;
    lVar9 = __ftol();
    _DAT_1018a630 = (undefined4)lVar9;
    lVar9 = __ftol();
    _DAT_1018a620 = (undefined4)lVar9;
    DAT_1018a638 = 0x80;
    iVar8 = DAT_1018a678 * 0x80 + -0x78;
    DAT_1018a668 = 0x30;
    DAT_1018a670 = iVar8;
    if (param_1 == '\0') {
      iVar2 = (-(uint)(DAT_1018a678 != *(int *)((int)this + 0x744)) & 0xffffffce) + 100;
      lVar9 = __ftol();
      iVar3 = (int)lVar9;
      lVar9 = __ftol();
      iVar11 = (int)lVar9;
      lVar9 = __ftol();
      (*gEngfuncs.pfnFillRGBA)(iVar8,8,0x80,0x14,(int)lVar9,iVar11,iVar3,iVar2);
      DAT_1018a684 = DAT_1018a678 == *(int *)((int)this + 0x744);
      FUN_10021c60((undefined4 *)&DAT_1018a654,(undefined4 *)&DAT_1018a630,
                   (undefined4 *)&DAT_1018a620);
      lVar9 = __ftol();
      uVar4 = (undefined4)lVar9;
      lVar9 = __ftol();
      uVar5 = (undefined4)lVar9;
      lVar9 = __ftol();
      FUN_1004c290(&DAT_100cf920,DAT_1018a670,8,'\x02',DAT_1018a678,(int)lVar9,uVar5,uVar4);
    }
    DAT_1018a708 = 0x1c;
    DAT_1018a644 = 0;
    iVar8 = DAT_1018a678;
    do {
      iVar2 = *(int *)((int)this + (iVar8 + DAT_1018a644 * 0xb) * 8 + 0x164);
      if (iVar2 != -1) {
        if (param_1 == '\0') {
          if ((DAT_1018a644 == *(int *)((int)this + 0x740)) &&
             (iVar8 == *(int *)((int)this + 0x744))) {
            DAT_1018a684 = 1;
            DAT_1018a6fc = FUN_100071c0(iVar2);
            lVar9 = __ftol();
            _DAT_1018a654 = (undefined4)lVar9;
            lVar9 = __ftol();
            _DAT_1018a630 = (undefined4)lVar9;
            lVar9 = __ftol();
            _DAT_1018a620 = (undefined4)lVar9;
            FUN_10021c60((undefined4 *)&DAT_1018a654,(undefined4 *)&DAT_1018a630,
                         (undefined4 *)&DAT_1018a620);
            lVar9 = __ftol();
            uVar4 = (undefined4)lVar9;
            lVar9 = __ftol();
            uVar5 = (undefined4)lVar9;
            lVar9 = __ftol();
            FUN_10021ce0(DAT_1018a638 + DAT_1018a670,DAT_1018a708,DAT_100d5908,
                         (char *)(DAT_1018a6fc + 0x11),(int)lVar9,uVar5,uVar4);
            if (((iVar2 == 0x19) || (iVar2 == 0x23)) || (iVar2 == 0x18)) {
              FUN_1006ac7a(acStack_14,&DAT_10093a90);
              lVar9 = __ftol();
              uVar4 = (undefined4)lVar9;
              lVar9 = __ftol();
              uVar5 = (undefined4)lVar9;
              lVar9 = __ftol();
              uVar6 = (undefined4)lVar9;
              pcVar10 = acStack_14;
              iVar8 = DAT_1018a638 + DAT_1018a670;
            }
            else {
              if (((iVar2 == 0x22) || (iVar2 == 0)) || (iVar2 == 0x1d)) goto LAB_1004e456;
              FUN_1006ac7a(acStack_28,(byte_conflict *)s__d__d_10095ebc);
              lVar9 = __ftol();
              uVar4 = (undefined4)lVar9;
              lVar9 = __ftol();
              uVar5 = (undefined4)lVar9;
              lVar9 = __ftol();
              uVar6 = (undefined4)lVar9;
              pcVar10 = acStack_28;
              iVar8 = DAT_1018a638 + DAT_1018a670;
            }
            FUN_10021ce0(iVar8,DAT_1018a708 + 0x10,DAT_100d5908,pcVar10,uVar6,uVar5,uVar4);
          }
          else {
            DAT_1018a684 = 0;
          }
LAB_1004e456:
          if (*(int *)((int)this + (DAT_1018a678 + DAT_1018a644 * 0xb) * 8 + 0x168) < 1) {
            _DAT_1018a620 = 0x2d;
            _DAT_1018a654 = 0xc3;
            _DAT_1018a630 = 0x2d;
          }
          else {
            lVar9 = __ftol();
            _DAT_1018a654 = (undefined4)lVar9;
            lVar9 = __ftol();
            _DAT_1018a630 = (undefined4)lVar9;
            lVar9 = __ftol();
            _DAT_1018a620 = (undefined4)lVar9;
          }
          FUN_10021c60((undefined4 *)&DAT_1018a654,(undefined4 *)&DAT_1018a630,
                       (undefined4 *)&DAT_1018a620);
          lVar9 = __ftol();
          iVar8 = (int)lVar9;
          lVar9 = __ftol();
          iVar3 = (int)lVar9;
          lVar9 = __ftol();
          (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)((int)this + iVar2 * 4 + 0x44),(int)lVar9,iVar3,iVar8)
          ;
          (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_1018a670,DAT_1018a708,(wrect_t *)0x0);
          if (((iVar2 != 0x22) && (iVar2 != 0)) && (iVar2 != 0x1d)) {
            puVar7 = FUN_100071c0(iVar2);
            bVar1 = *(byte *)((int)puVar7 + 0x85);
            puVar7 = FUN_100071c0(iVar2);
            iVar8 = *(int *)((int)this +
                            ((uint)bVar1 * 0xb + (uint)*(byte *)(puVar7 + 0x21)) * 8 + 0x168);
            puVar7 = FUN_100071c0(iVar2);
            if (*(char *)(puVar7 + 0x37) == '\0') {
              puVar7 = FUN_100071c0(iVar2);
              iStack_30 = puVar7[1];
            }
            else {
              puVar7 = FUN_100071c0(iVar2);
              iStack_30 = puVar7[9];
            }
            lVar9 = __ftol();
            iVar2 = (int)lVar9;
            if (iVar2 < 0) {
              iVar2 = 0;
            }
            if (0.0 < (float)iStack_30) {
              a = 100;
              lVar9 = __ftol();
              iVar3 = (int)lVar9;
              lVar9 = __ftol();
              iVar11 = (int)lVar9;
              lVar9 = __ftol();
              (*gEngfuncs.pfnFillRGBA)
                        (DAT_1018a670 + 0x7b,(DAT_1018a708 - iVar2) + 0x2e,5,iVar2,(int)lVar9,iVar11
                         ,iVar3,a);
            }
            if ((float)iVar8 < (float)iStack_30) {
              iVar11 = 0x32;
              lVar9 = __ftol();
              iVar8 = (int)lVar9;
              lVar9 = __ftol();
              iVar3 = (int)lVar9;
              lVar9 = __ftol();
              (*gEngfuncs.pfnFillRGBA)
                        (DAT_1018a670 + 0x7b,DAT_1018a708 + 2,5,0x2c - iVar2,(int)lVar9,iVar3,iVar8,
                         iVar11);
            }
          }
        }
        else {
          DAT_1018a684 = 0;
          if (iVar2 != 0) goto LAB_1004e456;
        }
        DAT_1018a708 = DAT_1018a708 + DAT_1018a668;
        iVar8 = DAT_1018a678;
      }
      DAT_1018a644 = DAT_1018a644 + 1;
    } while (DAT_1018a644 < 0x11);
    DAT_1018a678 = iVar8 + 1;
    if (5 < DAT_1018a678) {
      return;
    }
  } while( true );
}

/* 1004e6f0  FUN_1004e6f0  (760 bytes)
 * undefined FUN_1004e6f0(int param_1)
 * called by: FUN_1004d3f0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004e6f0(int param_1)

{
  cl_entity_s *pcVar1;
  int iVar2;
  int x;
  longlong lVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int width;
  int iVar6;
  undefined4 *puVar7;
  int height;
  int iVar8;
  int a;
  int iVar9;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar7 = (undefined4 *)&stack0xfffffff4;
  puVar4 = &local_4;
  puVar5 = &local_8;
  pcVar1 = (*gEngfuncs.GetLocalPlayer)();
  FUN_100582f0((int)*(char *)((int)&DAT_1018d128 + pcVar1->index * 2 + 1),puVar4,puVar5,puVar7);
  iVar2 = (*gEngfuncs.pfnRandomLong)(-10,10);
  DAT_1018a618 = iVar2 / 10;
  iVar2 = (*gEngfuncs.pfnRandomLong)(-10,10);
  DAT_1018a658 = iVar2 / 10;
  iVar2 = CL_IsThirdPerson();
  if (iVar2 == 0) {
    DAT_1018a660 = DAT_100d5908 / 2;
    DAT_1018a710 = DAT_100d590c / 2;
  }
  else {
    FUN_100579c0(param_1 + 0x38,&DAT_1018a660,&DAT_1018a710);
  }
  if ((*(uint *)(param_1 + 0x14) & 2) != 0) {
    if ((*(uint *)(param_1 + 0x14) & 0x40) == 0) {
      if (*(int *)(param_1 + 0x1c) == -0x40800000) {
        return;
      }
      if (*(int *)(param_1 + 0x20) == -0x40800000) {
        return;
      }
      _DAT_1018a61c = 0xff;
      if ((DAT_1018a628 != 0) && (*(float *)(DAT_100df5b0 + 0xc) < 1.0)) {
        (*gEngfuncs.pfnFillRGBA)
                  (DAT_1018a660 + -1 + DAT_1018a618,DAT_1018a710 + -1 + DAT_1018a658,2,2,
                   in_stack_0000000c,in_stack_00000008,in_stack_00000004,0xff);
        return;
      }
      iVar9 = 0xff;
      iVar8 = 2;
      iVar6 = 2;
      lVar3 = __ftol();
      iVar2 = (int)lVar3;
    }
    else {
      if ((*(int *)(param_1 + 0x1c) != -0x40800000) && (*(int *)(param_1 + 0x20) != -0x40800000)) {
        _DAT_1018a61c = 0xff;
        iVar2 = in_stack_0000000c;
        iVar6 = in_stack_00000008;
        iVar8 = in_stack_00000004;
        if ((DAT_1018a628 == 0) || (1.0 <= *(float *)(DAT_100df5b0 + 0xc))) {
          a = 0xff;
          height = 2;
          width = 2;
          lVar3 = __ftol();
          iVar9 = (int)lVar3;
          lVar3 = __ftol();
          x = (int)lVar3;
        }
        else {
          a = 0xff;
          height = 2;
          iVar9 = DAT_1018a710 + -1 + DAT_1018a658;
          width = 2;
          x = DAT_1018a660 + 3 + DAT_1018a618;
        }
        (*gEngfuncs.pfnFillRGBA)(x,iVar9,width,height,iVar2,iVar6,iVar8,a);
      }
      if (*(int *)(param_1 + 0x28) == -0x40800000) {
        return;
      }
      if (*(int *)(param_1 + 0x2c) == -0x40800000) {
        return;
      }
      _DAT_1018a61c = 0xff;
      if ((DAT_1018a628 != 0) && (*(float *)(DAT_100df5b0 + 0xc) < 1.0)) {
        (*gEngfuncs.pfnFillRGBA)
                  (DAT_1018a660 + -5 + DAT_1018a658,DAT_1018a710 + -1 + DAT_1018a618,2,2,
                   in_stack_0000000c,in_stack_00000008,in_stack_00000004,0xff);
        return;
      }
      iVar9 = 0xff;
      iVar8 = 2;
      iVar6 = 2;
      lVar3 = __ftol();
      iVar2 = (int)lVar3;
    }
    lVar3 = __ftol();
    (*gEngfuncs.pfnFillRGBA)
              ((int)lVar3,iVar2,iVar6,iVar8,in_stack_0000000c,in_stack_00000008,in_stack_00000004,
               iVar9);
  }
  return;
}

/* 1004e9f0  FUN_1004e9f0  (1201 bytes)
 * undefined FUN_1004e9f0(void * param_1)
 * called by: FUN_1004d3f0
 */
void __fastcall FUN_1004e9f0(void *param_1)

{
  int iVar1;
  int iVar2;
  int r;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  
  if (*(float *)(DAT_100df494 + 0xc) != 0.0) {
    return;
  }
  DAT_1018a704 = DAT_100cf978 < 0x28;
  iVar1 = CL_IsThirdPerson();
  if (iVar1 == 0) {
    DAT_1018a6f4 = DAT_100d5908 / 2;
    DAT_1018a64c = DAT_100d590c / 2;
    if (DAT_1018a704 == '\0') goto LAB_1004ea71;
  }
  else {
    FUN_100579c0((int)param_1 + 0x38,&DAT_1018a6f4,&DAT_1018a64c);
    DAT_1018a704 = '\0';
LAB_1004ea71:
    FUN_1004ef50(param_1,&DAT_1018a6f4,&DAT_1018a64c);
  }
  cVar5 = DAT_1018a704;
  iVar2 = DAT_1018a6f4;
  iVar1 = *(int *)((int)param_1 + 0x7b8);
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 0x19) {
    return;
  }
  if (iVar1 == 0x23) {
    return;
  }
  if (iVar1 == 0x22) {
    return;
  }
  if (iVar1 == 0x18) {
    return;
  }
  if (DAT_1018a60c == '\x01') {
    DAT_1018a640 = 0xc3;
    DAT_1018a6c4 = 0x2d;
    DAT_1018a63c = 0x2d;
  }
  else if (DAT_1018a60c == '\x02') {
    DAT_1018a6c4 = 0xc3;
    DAT_1018a63c = 0x2d;
    DAT_1018a640 = 0x2d;
  }
  else {
    lVar6 = __ftol();
    DAT_1018a6c4 = (int)lVar6;
    lVar6 = __ftol();
    DAT_1018a640 = (int)lVar6;
    lVar6 = __ftol();
    DAT_1018a63c = (int)lVar6;
  }
  if ((cVar5 == '\0') || (DAT_1018a60c == '\x01')) {
    iVar1 = *(int *)((int)param_1 + 0x7b8);
    if ((iVar1 == 0) || ((iVar1 == 0x19 || (iVar1 == 0x18)))) {
      DAT_1018a6ec = 0x16;
    }
    else {
      DAT_1018a6ec = (-(uint)((*(uint *)((int)param_1 + 0x14) & 2) != 0) & 0xfffffff6) + 0x16;
      FUN_100071c0(*(int *)((int)param_1 + 0x7b8));
      lVar6 = __ftol();
      DAT_1018a6ec = (int)lVar6;
      iVar2 = DAT_1018a6f4;
    }
    if (DAT_1018a60c == '\x01') {
      lVar6 = __ftol();
      iVar1 = (int)lVar6;
      lVar6 = __ftol();
      iVar2 = (int)lVar6;
      lVar6 = __ftol();
      (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)((int)param_1 + 0x154),(int)lVar6,iVar2,iVar1);
    }
    else {
      (*gEngfuncs.pfnFillRGBA)
                (iVar2 - DAT_1018a6ec,DAT_1018a64c + -1,5,2,DAT_1018a6c4,DAT_1018a640,DAT_1018a63c,
                 0x4b);
      (*gEngfuncs.pfnFillRGBA)
                (DAT_1018a6ec + DAT_1018a6f4,DAT_1018a64c + -1,-5,2,DAT_1018a6c4,DAT_1018a640,
                 DAT_1018a63c,0x4b);
      (*gEngfuncs.pfnFillRGBA)
                (DAT_1018a6f4 + -1,DAT_1018a64c - DAT_1018a6ec,2,5,DAT_1018a6c4,DAT_1018a640,
                 DAT_1018a63c,0x4b);
      (*gEngfuncs.pfnFillRGBA)
                (DAT_1018a6f4 + -1,DAT_1018a6ec + DAT_1018a64c,2,-5,DAT_1018a6c4,DAT_1018a640,
                 DAT_1018a63c,0x4b);
      iVar1 = (*DAT_100ea860)();
      if ((iVar1 != 0) && (0.0 < *(float *)(DAT_100df510 + 0xc))) {
        iVar1 = DAT_1018a63c;
        if (1.0 < *(float *)(DAT_100df510 + 0xc)) {
          iVar1 = 0;
        }
        iVar2 = DAT_1018a640;
        if (1.0 < *(float *)(DAT_100df510 + 0xc)) {
          iVar2 = 0;
        }
        r = DAT_1018a6c4;
        if (1.0 < *(float *)(DAT_100df510 + 0xc)) {
          r = 0;
        }
        (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)((int)param_1 + 0x150),r,iVar2,iVar1);
        (*gEngfuncs.pfnSPR_DrawHoles)(0,DAT_1018a6f4 + -0x20,DAT_1018a64c + -0x20,(wrect_t *)0x0);
        iVar2 = DAT_1018a6f4;
        cVar5 = DAT_1018a704;
        goto LAB_1004ee02;
      }
      lVar6 = __ftol();
      iVar1 = (int)lVar6;
      lVar6 = __ftol();
      iVar2 = (int)lVar6;
      lVar6 = __ftol();
      (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)((int)param_1 + 0x14c),(int)lVar6,iVar2,iVar1);
    }
    (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_1018a6f4 + -0x20,DAT_1018a64c + -0x20,(wrect_t *)0x0);
    iVar2 = DAT_1018a6f4;
    cVar5 = DAT_1018a704;
  }
LAB_1004ee02:
  if ((*(byte *)((int)param_1 + 0x14) & 2) != 0) {
    lVar6 = __ftol();
    uVar3 = (undefined4)lVar6;
    lVar6 = __ftol();
    uVar4 = (undefined4)lVar6;
    lVar6 = __ftol();
    FUN_1004c290(&DAT_100cf920,iVar2 + 0x1c,
                 (-(-(uint)(cVar5 != '\0') & 8) - DAT_100cf988 / 2) + DAT_1018a64c,'\x01',
                 *(int *)((int)param_1 + 0x18),(int)lVar6,uVar4,uVar3);
  }
  return;
}

/* 1004eec0  FUN_1004eec0  (35 bytes)
 * bool FUN_1004eec0(void)
 * called by: FUN_1004ef50
 */
bool FUN_1004eec0(void)

{
  cl_entity_t *pcVar1;
  int unaff_retaddr;
  
  pcVar1 = HUD_GetUserEntity(unaff_retaddr);
  return (int)((0x51 - (DAT_100d43f4 & 0xff)) - (int)pcVar1) < 0x2a;
}

/* 1004eef0  FUN_1004eef0  (35 bytes)
 * bool FUN_1004eef0(void)
 * called by: FUN_1004ef50
 */
bool FUN_1004eef0(void)

{
  cl_entity_t *pcVar1;
  int unaff_retaddr;
  
  pcVar1 = HUD_GetUserEntity(unaff_retaddr);
  return (int)((0x51 - (DAT_100d43f4 & 0xff)) - (int)pcVar1) < 0x34;
}

/* 1004ef20  FUN_1004ef20  (35 bytes)
 * bool FUN_1004ef20(void)
 * called by: FUN_1004ef50
 */
bool FUN_1004ef20(void)

{
  cl_entity_t *pcVar1;
  int unaff_retaddr;
  
  pcVar1 = HUD_GetUserEntity(unaff_retaddr);
  return (int)((0x51 - (DAT_100d43f4 & 0xff)) - (int)pcVar1) < 0x3e;
}

/* 1004ef50  FUN_1004ef50  (709 bytes)
 * undefined FUN_1004ef50(int * param_1, int * param_2)
 * called by: FUN_1004e9f0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1004ef50(void *this,int *param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  int y;
  unkbyte10 extraout_ST0;
  longlong lVar3;
  int width;
  int height;
  int iVar4;
  int iVar5;
  int iVar6;
  int a;
  
  if (0.01 <= *(float *)((int)this + 0x34)) {
    DAT_1018a6f0 = 0xc3;
    DAT_1018a634 = 0x2d;
    DAT_1018a62c = 0x2d;
  }
  else {
    lVar3 = __ftol();
    DAT_1018a6f0 = (int)lVar3;
    lVar3 = __ftol();
    DAT_1018a62c = (int)lVar3;
    lVar3 = __ftol();
    DAT_1018a634 = (int)lVar3;
  }
  _DAT_1018a650 = DAT_100cf964;
  if (-10.0 <= DAT_100cf964) {
    DAT_1018a664 = 2;
    if (DAT_100cf964 < 10.0) {
      DAT_1018a664 = 1;
    }
  }
  else {
    DAT_1018a664 = 0;
  }
  bVar2 = 0;
  _DAT_1018a66c = _DAT_1018a66c & 0xffffff00;
  do {
    if (bVar2 == 0) {
      bVar1 = FUN_1004eec0();
      if (bVar1) {
        bVar2 = DAT_1018a66c;
        goto LAB_1004f033;
      }
      iVar6 = 0x2d;
      iVar5 = 0x2d;
      iVar4 = 0xc3;
LAB_1004f12d:
      (*gEngfuncs.pfnSPR_Set)
                (*(HSPRITE *)((int)this + (_DAT_1018a66c & 0xff) * 4 + 0x158),iVar4,iVar5,iVar6);
      iVar5 = *param_2 + -0x28;
      iVar6 = *param_1 + -0x28;
    }
    else {
LAB_1004f033:
      if (bVar2 == 1) {
        bVar1 = FUN_1004eef0();
        if (bVar1) {
          bVar2 = DAT_1018a66c;
          goto LAB_1004f07b;
        }
        (*gEngfuncs.pfnSPR_Set)
                  (*(HSPRITE *)((int)this + (_DAT_1018a66c & 0xff) * 4 + 0x158),0xc3,0x2d,0x2d);
        iVar5 = *param_2 + -0x28;
        iVar6 = *param_1 + -0x28;
      }
      else {
LAB_1004f07b:
        if ((bVar2 != 2) || (bVar1 = FUN_1004ef20(), bVar1)) {
          lVar3 = __ftol();
          iVar6 = (int)lVar3;
          lVar3 = __ftol();
          iVar5 = (int)lVar3;
          lVar3 = __ftol();
          iVar4 = (int)lVar3;
          goto LAB_1004f12d;
        }
        (*gEngfuncs.pfnSPR_Set)
                  (*(HSPRITE *)((int)this + (_DAT_1018a66c & 0xff) * 4 + 0x158),0xc3,0x2d,0x2d);
        iVar5 = *param_2 + -0x28;
        iVar6 = *param_1 + -0x28;
      }
    }
    (*gEngfuncs.pfnSPR_DrawAdditive)(0,iVar6,iVar5,(wrect_t *)0x0);
    bVar2 = DAT_1018a66c + 1;
    _DAT_1018a66c = CONCAT31(DAT_1018a66c_1,bVar2);
    if (2 < bVar2) {
      _DAT_1018a650 = _DAT_1018a650 * 3.0;
      if (90.0 < _DAT_1018a650) {
        _DAT_1018a650 = 90.0;
      }
      if (_DAT_1018a650 < -90.0) {
        _DAT_1018a650 = -90.0;
      }
      a = 100;
      fsin((float10)_DAT_1018a650 * (float10)0.017453292519943295);
      height = 2;
      width = 2;
      iVar6 = DAT_1018a6f0;
      iVar5 = DAT_1018a62c;
      iVar4 = DAT_1018a634;
      lVar3 = __ftol();
      y = (int)lVar3;
      fcos(extraout_ST0);
      lVar3 = __ftol();
      (*gEngfuncs.pfnFillRGBA)((int)lVar3,y,width,height,iVar6,iVar5,iVar4,a);
      return;
    }
  } while( true );
}

/* 1004f220  FUN_1004f220  (728 bytes)
 * undefined FUN_1004f220(uint param_1)
 * called by: FUN_1004fc40, FUN_1004fc50, FUN_1004fc60, FUN_1004fc70, FUN_1004fc80, FUN_1004fc90, FUN_1004fca0, FUN_1004fcb0, FUN_1004fcc0, FUN_1004fcd0, HUD_Key_Event
 */
void __thiscall FUN_1004f220(void *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_EDX;
  int *piVar5;
  float10 fVar6;
  char local_40 [64];
  
  if (((DAT_100cfed0 != 0) && (0 < (int)param_1)) && ((int)param_1 < 0xb)) {
    FUN_10028700(&DAT_100cfebc,param_1);
    return;
  }
  cVar2 = FUN_100361f0((undefined1 *)((int)this + 0x7c0));
  if (cVar2 != '\0') {
    FUN_10038840((undefined1 *)((int)this + 0x7c0),extraout_EDX,*(undefined4 *)((int)this + 0x7c4),
                 param_1);
    return;
  }
  uVar3 = FUN_1004c250();
  if ((char)uVar3 == '\0') {
    cVar2 = FUN_1004c280();
    if (cVar2 == '\0') {
      if (((*(char *)((int)this + 0x36fc) == '\0') && (*(char *)((int)this + 0x36fd) == '\0')) &&
         (*(char *)((int)this + 0x36fe) == '\0')) {
        if (param_1 == 10) {
          if (*(char *)((int)this + 0x73c) == '\0') {
            (*gEngfuncs.pfnServerCmd)(s_weapon_0_10095ed0);
            *(undefined4 *)((int)this + 0x740) = 0;
            *(undefined4 *)((int)this + 0x744) = 0;
          }
          *(undefined1 *)((int)this + 0x73c) = 0;
          return;
        }
        if ((int)param_1 < 6) {
          fVar6 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_hud_fastswitch_1009306c);
          if (fVar6 == (float10)0.0) {
            if (*(char *)((int)this + 0x73c) == '\0') {
              *(undefined1 *)((int)this + 0x73c) = 1;
            }
            if (param_1 == *(uint *)((int)this + 0x744)) {
              bVar1 = false;
              iVar4 = *(int *)((int)this + 0x740) + 1;
              if (0x10 < iVar4) {
                iVar4 = 1;
              }
              piVar5 = (int *)((int)this + (*(uint *)((int)this + 0x744) + iVar4 * 0xb) * 8 + 0x164)
              ;
              do {
                if (bVar1) goto LAB_1004f4b5;
                if (*piVar5 != -1) {
                  *(int *)((int)this + 0x740) = iVar4;
                  bVar1 = true;
                }
                iVar4 = iVar4 + 1;
                piVar5 = piVar5 + 0x16;
              } while (iVar4 < 0x11);
              if ((!bVar1) &&
                 (*(undefined4 *)((int)this + 0x740) = 1,
                 *(int *)((int)this + param_1 * 8 + 0x1bc) == -1)) {
                while (*(int *)((int)this + 0x740) < 0x11) {
                  iVar4 = *(int *)((int)this + 0x740) + 1;
                  *(int *)((int)this + 0x740) = iVar4;
                  if (*(int *)((int)this + (param_1 + iVar4 * 0xb) * 8 + 0x164) != -1) {
                    *(uint *)((int)this + 0x744) = param_1;
                    return;
                  }
                }
              }
            }
            else {
              *(undefined4 *)((int)this + 0x740) = 0;
              if (*(int *)((int)this + param_1 * 8 + 0x164) == -1) {
                while( true ) {
                  iVar4 = *(int *)((int)this + 0x740) + 1;
                  *(int *)((int)this + 0x740) = iVar4;
                  if (0x10 < iVar4) break;
                  if (*(int *)((int)this + (param_1 + iVar4 * 0xb) * 8 + 0x164) != -1) {
                    *(uint *)((int)this + 0x744) = param_1;
                    return;
                  }
                }
                *(undefined4 *)((int)this + 0x740) = 1;
              }
            }
LAB_1004f4b5:
            *(uint *)((int)this + 0x744) = param_1;
            return;
          }
          iVar4 = *(int *)((int)this + 0x740) + 1;
          if (0x10 < iVar4) {
            iVar4 = 0;
          }
          *(int *)((int)this + 0x740) = iVar4;
          do {
            if (*(int *)((int)this + (param_1 + iVar4 * 0xb) * 8 + 0x164) != -1) break;
            iVar4 = iVar4 + 1;
            if (0x10 < iVar4) {
              iVar4 = 0;
            }
          } while (*(int *)((int)this + 0x740) != iVar4);
          *(int *)((int)this + 0x740) = iVar4;
          if (-1 < *(int *)((int)this + (param_1 + iVar4 * 0xb) * 8 + 0x164)) {
            FUN_1006ac7a(local_40,(byte_conflict *)s_weapon__i_10095db8);
            (*gEngfuncs.pfnServerCmd)(local_40);
          }
          *(undefined1 *)((int)this + 0x73c) = 0;
          return;
        }
      }
      else if ((0 < (int)param_1) && ((int)param_1 < 4)) {
        FUN_1006ac7a(local_40,(byte_conflict *)s_cutwire__i_10095ec4);
        (*gEngfuncs.pfnServerCmd)(local_40);
      }
    }
  }
  return;
}

/* 1004f500  FUN_1004f500  (491 bytes)
 * undefined FUN_1004f500(char param_1)
 * called by: FUN_1004fce0, FUN_1004fd40
 */
void __thiscall FUN_1004f500(void *this,char param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  int local_48;
  char acStack_40 [64];
  
  if (*(char *)((int)this + 0x73c) == '\0') {
    puVar3 = FUN_100071c0(*(int *)((int)this + 0x7b8));
    *(uint *)((int)this + 0x740) = (uint)*(byte *)((int)puVar3 + 0x85);
    puVar3 = FUN_100071c0(*(int *)((int)this + 0x7b8));
    bVar1 = *(byte *)(puVar3 + 0x21);
    *(undefined1 *)((int)this + 0x73c) = 1;
    *(uint *)((int)this + 0x744) = (uint)bVar1;
  }
  if ((*(int *)((int)this + 0x744) < 1) || (5 < *(int *)((int)this + 0x744))) {
    *(undefined4 *)((int)this + 0x744) = 1;
  }
  if ((*(int *)((int)this + 0x740) < 0) || (0x10 < *(int *)((int)this + 0x740))) {
    *(undefined4 *)((int)this + 0x740) = 0;
  }
  iVar4 = -1;
  local_48 = -1;
  if (param_1 == '\0') {
    iVar6 = *(int *)((int)this + 0x740) + -1;
    if (iVar6 < 0) {
      iVar6 = 0x10;
    }
  }
  else {
    iVar6 = *(int *)((int)this + 0x740) + 1;
    if (0x10 < iVar6) {
      iVar6 = 0;
    }
  }
  iVar5 = *(int *)((int)this + 0x744);
  do {
    iVar2 = *(int *)((int)this + (iVar6 * 0xb + iVar5) * 8 + 0x164);
    if (0 < iVar2) {
      puVar3 = FUN_100071c0(iVar2);
      iVar4 = puVar3[0x32];
      if (iVar4 == -1) break;
      puVar3 = FUN_100071c0(iVar4);
      bVar1 = *(byte *)((int)puVar3 + 0x85);
      puVar3 = FUN_100071c0(iVar4);
      iVar4 = local_48;
      if (*(int *)((int)this + ((uint)bVar1 * 0xb + (uint)*(byte *)(puVar3 + 0x21)) * 8 + 0x164) < 0
         ) break;
    }
    if (param_1 == '\0') {
      iVar6 = iVar6 + -1;
      if (iVar6 < 0) {
        iVar6 = 0x10;
        if (iVar4 == -1) {
          iVar4 = iVar5;
          local_48 = iVar5;
        }
        iVar5 = iVar5 + -1;
        if (iVar5 < 1) {
          iVar5 = 5;
        }
      }
    }
    else {
      iVar6 = iVar6 + 1;
      if (0x10 < iVar6) {
        iVar6 = 0;
        if (iVar4 == -1) {
          iVar4 = iVar5;
          local_48 = iVar5;
        }
        iVar5 = iVar5 + 1;
        if (5 < iVar5) {
          iVar5 = 1;
        }
      }
    }
  } while ((iVar5 != iVar4) || (iVar6 != *(int *)((int)this + 0x740)));
  *(int *)((int)this + 0x744) = iVar5;
  *(int *)((int)this + 0x740) = iVar6;
  fVar7 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_hud_fastswitch_1009306c);
  if (fVar7 != (float10)0.0) {
    if (0 < *(int *)((int)this +
                    (*(int *)((int)this + 0x740) * 0xb + *(int *)((int)this + 0x744)) * 8 + 0x164))
    {
      FUN_1006ac7a(acStack_40,(byte_conflict *)s_weapon__i_10095db8);
      (*gEngfuncs.pfnServerCmd)(acStack_40);
    }
    *(undefined1 *)((int)this + 0x73c) = 0;
  }
  return;
}

/* 1004f6f0  FUN_1004f6f0  (134 bytes)
 * undefined FUN_1004f6f0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004f6f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x3704) = *(undefined4 *)((int)this + 0x3700);
  FUN_100299b0(param_3,param_2);
  iVar2 = FUN_100299d0();
  fVar1 = (float)iVar2;
  *(float *)((int)this + 0x3700) = fVar1;
  if (fVar1 < -100.0) {
    *(undefined4 *)((int)this + 0x3700) = 0xc2c80000;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    return;
  }
  if (100.0 < fVar1) {
    *(undefined4 *)((int)this + 0x3700) = 0x42c80000;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004f780  FUN_1004f780  (121 bytes)
 * undefined FUN_1004f780(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004f780(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  FUN_100299b0(param_3,param_2);
  uVar2 = FUN_10029a10();
  *(uint *)((int)this + 0x78c) = uVar2;
  if (*(int *)((int)this + 0x7b8) != 0) {
    puVar3 = FUN_100071c0(*(int *)((int)this + 0x7b8));
    bVar1 = *(byte *)((int)puVar3 + 0x85);
    puVar3 = FUN_100071c0(*(int *)((int)this + 0x7b8));
    *(undefined4 *)((int)this + ((uint)bVar1 * 0xb + (uint)*(byte *)(puVar3 + 0x21)) * 8 + 0x168) =
         *(undefined4 *)((int)this + 0x78c);
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004f800  FUN_1004f800  (392 bytes)
 * undefined FUN_1004f800(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004f800(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  FUN_100299b0(param_3,param_2);
  iVar5 = *(int *)((int)this + 0x7b8);
  uVar2 = FUN_10029a10();
  *(uint *)((int)this + 0x7b8) = uVar2;
  if (uVar2 == 0xffffffff) {
    *(int *)((int)this + 0x7b8) = iVar5;
  }
  uVar2 = FUN_10029a10();
  *(uint *)((int)this + 0x78c) = uVar2;
  iVar3 = FUN_10029a50();
  puVar4 = FUN_100071c0(*(int *)((int)this + 0x7b8));
  *(int *)((int)this + (uint)*(byte *)(puVar4 + 2) * 4 + 0x748) = iVar3;
  uVar2 = FUN_10029a10();
  *(char *)((int)this + 0x78a) = (char)uVar2;
  uVar2 = FUN_10029a10();
  *(uint *)((int)this + 0x798) = uVar2;
  if (*(int *)((int)this + 0x7b8) < 1) {
    if (*(int *)(DAT_100df3a4 + 0xc) != 0x3f800000) goto LAB_1004f975;
    iVar5 = CL_IsThirdPerson();
  }
  else {
    puVar4 = FUN_100071c0(*(int *)((int)this + 0x7b8));
    if ((*(byte *)((int)puVar4 + 0x85) < 0x11) &&
       (puVar4 = FUN_100071c0(*(int *)((int)this + 0x7b8)), *(byte *)(puVar4 + 0x21) < 0xb)) {
      puVar4 = FUN_100071c0(*(int *)((int)this + 0x7b8));
      bVar1 = *(byte *)((int)puVar4 + 0x85);
      puVar4 = FUN_100071c0(*(int *)((int)this + 0x7b8));
      *(undefined4 *)((int)this + ((uint)bVar1 * 0xb + (uint)*(byte *)(puVar4 + 0x21)) * 8 + 0x164)
           = *(undefined4 *)((int)this + 0x7b8);
      puVar4 = FUN_100071c0(*(int *)((int)this + 0x7b8));
      bVar1 = *(byte *)((int)puVar4 + 0x85);
      puVar4 = FUN_100071c0(*(int *)((int)this + 0x7b8));
      *(undefined4 *)((int)this + ((uint)bVar1 * 0xb + (uint)*(byte *)(puVar4 + 0x21)) * 8 + 0x168)
           = *(undefined4 *)((int)this + 0x78c);
    }
    if ((*(int *)(DAT_100df3a4 + 0xc) != 0x3f800000) || (iVar3 = CL_IsThirdPerson(), iVar3 == 0))
    goto LAB_1004f975;
  }
  if (iVar5 == 0) {
    FUN_1004fe00();
  }
LAB_1004f975:
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004f990  FUN_1004f990  (210 bytes)
 * undefined FUN_1004f990(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004f990(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  FUN_100299b0(param_3,param_2);
  uVar2 = FUN_10029a10();
  uVar3 = FUN_10029a10();
  puVar4 = FUN_100071c0(uVar2);
  if ((*(byte *)((int)puVar4 + 0x85) < 0x11) &&
     (puVar4 = FUN_100071c0(uVar2), *(byte *)(puVar4 + 0x21) < 0xb)) {
    uVar5 = uVar2;
    if (uVar3 == 0) {
      uVar5 = 0xffffffff;
    }
    puVar4 = FUN_100071c0(uVar2);
    bVar1 = *(byte *)((int)puVar4 + 0x85);
    puVar4 = FUN_100071c0(uVar2);
    *(uint *)((int)this + ((uint)bVar1 * 0xb + (uint)*(byte *)(puVar4 + 0x21)) * 8 + 0x164) = uVar5;
    uVar3 = FUN_10029a10();
    puVar4 = FUN_100071c0(uVar2);
    bVar1 = *(byte *)((int)puVar4 + 0x85);
    puVar4 = FUN_100071c0(uVar2);
    *(uint *)((int)this + ((uint)bVar1 * 0xb + (uint)*(byte *)(puVar4 + 0x21)) * 8 + 0x168) = uVar3;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004fa70  FUN_1004fa70  (68 bytes)
 * undefined FUN_1004fa70(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004fa70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  uVar2 = FUN_10029a10();
  if ((-1 < (int)uVar1) && ((int)uVar1 < 0x21)) {
    *(char *)((int)&DAT_1018d128 + uVar1 * 2) = (char)uVar2;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004fac0  FUN_1004fac0  (60 bytes)
 * undefined FUN_1004fac0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004fac0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  *(float *)((int)this + 0x34) = (float)(int)uVar1 * 0.1;
  return;
}

/* 1004fb00  FUN_1004fb00  (71 bytes)
 * undefined FUN_1004fb00(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004fb00(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(char *)((int)this + 0x36fc) = (char)uVar1;
  uVar1 = FUN_10029a10();
  *(char *)((int)this + 0x36fd) = (char)uVar1;
  uVar1 = FUN_10029a10();
  *(char *)((int)this + 0x36fe) = (char)uVar1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004fb50  FUN_1004fb50  (239 bytes)
 * undefined FUN_1004fb50(undefined4 param_1, int param_2, undefined4 param_3)
 */
void __thiscall FUN_1004fb50(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char local_40 [64];
  
  FUN_100299b0(param_3,param_2);
  pcVar2 = FUN_10029b00();
  uVar4 = 0xffffffff;
  do {
    pcVar6 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar6 + -uVar4;
  pcVar6 = local_40;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  FUN_1006bf83(local_40,(byte_conflict *)s__i__f__f__f__f__i_10095edc);
  puVar3 = FUN_100071c0(param_2);
  puVar3[10] = param_3;
  puVar3 = FUN_100071c0(param_2);
  puVar3[0xc] = local_50;
  puVar3 = FUN_100071c0(param_2);
  puVar3[0xd] = local_4c;
  puVar3 = FUN_100071c0(param_2);
  puVar3[7] = local_48;
  puVar3 = FUN_100071c0(param_2);
  puVar3[0x36] = local_44;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004fc40  FUN_1004fc40  (12 bytes)
 * undefined FUN_1004fc40(void * param_1)
 */
void __cdecl FUN_1004fc40(void *param_1)

{
  FUN_1004f220(param_1,1);
  return;
}

/* 1004fc50  FUN_1004fc50  (12 bytes)
 * undefined FUN_1004fc50(void * param_1)
 */
void __cdecl FUN_1004fc50(void *param_1)

{
  FUN_1004f220(param_1,2);
  return;
}

/* 1004fc60  FUN_1004fc60  (12 bytes)
 * undefined FUN_1004fc60(void * param_1)
 */
void __cdecl FUN_1004fc60(void *param_1)

{
  FUN_1004f220(param_1,3);
  return;
}

/* 1004fc70  FUN_1004fc70  (12 bytes)
 * undefined FUN_1004fc70(void * param_1)
 */
void __cdecl FUN_1004fc70(void *param_1)

{
  FUN_1004f220(param_1,4);
  return;
}

/* 1004fc80  FUN_1004fc80  (12 bytes)
 * undefined FUN_1004fc80(void * param_1)
 */
void __cdecl FUN_1004fc80(void *param_1)

{
  FUN_1004f220(param_1,5);
  return;
}

/* 1004fc90  FUN_1004fc90  (12 bytes)
 * undefined FUN_1004fc90(void * param_1)
 */
void __cdecl FUN_1004fc90(void *param_1)

{
  FUN_1004f220(param_1,6);
  return;
}

/* 1004fca0  FUN_1004fca0  (12 bytes)
 * undefined FUN_1004fca0(void * param_1)
 */
void __cdecl FUN_1004fca0(void *param_1)

{
  FUN_1004f220(param_1,7);
  return;
}

/* 1004fcb0  FUN_1004fcb0  (12 bytes)
 * undefined FUN_1004fcb0(void * param_1)
 */
void __cdecl FUN_1004fcb0(void *param_1)

{
  FUN_1004f220(param_1,8);
  return;
}

/* 1004fcc0  FUN_1004fcc0  (12 bytes)
 * undefined FUN_1004fcc0(void * param_1)
 */
void __cdecl FUN_1004fcc0(void *param_1)

{
  FUN_1004f220(param_1,9);
  return;
}

/* 1004fcd0  FUN_1004fcd0  (12 bytes)
 * undefined FUN_1004fcd0(void * param_1)
 */
void __cdecl FUN_1004fcd0(void *param_1)

{
  FUN_1004f220(param_1,10);
  return;
}

/* 1004fce0  FUN_1004fce0  (83 bytes)
 * undefined FUN_1004fce0(void * param_1)
 */
void __cdecl FUN_1004fce0(void *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = FUN_1004c250();
  if ((char)uVar2 == '\0') {
    cVar1 = FUN_1004c280();
    if ((cVar1 == '\0') && (*(float *)((int)param_1 + 0x371c) <= DAT_100cf944)) {
      *(float *)((int)param_1 + 0x371c) = DAT_100cf944 + 0.1;
      FUN_1004f500(param_1,'\x01');
    }
  }
  return;
}

/* 1004fd40  FUN_1004fd40  (83 bytes)
 * undefined FUN_1004fd40(void * param_1)
 */
void __cdecl FUN_1004fd40(void *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = FUN_1004c250();
  if ((char)uVar2 == '\0') {
    cVar1 = FUN_1004c280();
    if ((cVar1 == '\0') && (*(float *)((int)param_1 + 0x371c) <= DAT_100cf944)) {
      *(float *)((int)param_1 + 0x371c) = DAT_100cf944 + 0.1;
      FUN_1004f500(param_1,'\0');
    }
  }
  return;
}

/* 1004fda0  FUN_1004fda0  (59 bytes)
 * undefined FUN_1004fda0(int param_1)
 */
void __cdecl FUN_1004fda0(int param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = FUN_1004c250();
  if (((char)uVar2 == '\0') && (cVar1 = FUN_1004c280(), cVar1 == '\0')) {
    return;
  }
  if (*(char *)(param_1 + 0x73c) != '\0') {
    return;
  }
  FUN_10036670(&DAT_100d1460);
  return;
}

/* 1004fde0  FUN_1004fde0  (30 bytes)
 * uint FUN_1004fde0(undefined4 param_1, uint param_2)
 */
uint __cdecl FUN_1004fde0(undefined4 param_1,uint param_2)

{
  if ((param_2 & DAT_100cf970) != 0) {
    DAT_100cf970 = DAT_100cf970 & ~param_2;
    return CONCAT31((int3)(~param_2 >> 8),1);
  }
  return param_2 & 0xffffff00;
}

/* 1004fe00  FUN_1004fe00  (185 bytes)
 * undefined FUN_1004fe00(void)
 * called by: CAM_Think, FUN_1004b730, FUN_1004f800, FUN_10065250
 */
void FUN_1004fe00(void)

{
  char cVar1;
  int iVar2;
  float fStack_6c;
  undefined4 uStack_68;
  
  iVar2 = (*(gEngfuncs.pDemoAPI)->IsPlayingback)();
  if (iVar2 == 0) {
    cVar1 = FUN_1004c280();
    if ((cVar1 != '\0') && (DAT_100df390 == 0)) {
      return;
    }
  }
  else if (DAT_100df390 == DAT_100d607c) {
    return;
  }
  (*gEngfuncs.GetViewAngles)((float *)&stack0xffffff90);
  DAT_100df390 = (uint)(DAT_100df390 == 0);
  if (DAT_100df390 != 0) {
    DAT_100df31c = uStack_68;
    DAT_100df318 = fStack_6c;
    DAT_100df320 = 0x41f00000;
  }
  (*gEngfuncs.Cvar_SetValue)(s_cam_command_10093e24,0.0);
  iVar2 = (*(gEngfuncs.pDemoAPI)->IsRecording)();
  if (iVar2 != 0) {
    FUN_1001b860();
  }
  return;
}

/* 1004fed0  FUN_1004fed0  (50 bytes)
 * undefined FUN_1004fed0(int param_1, int param_2, int param_3, int param_4)
 * called by: FUN_100367e0, FUN_10037260, FUN_100373c0, FUN_10037540, FUN_100377d0, FUN_10037960, FUN_10037ba0, FUN_10037fe0
 */
void __thiscall FUN_1004fed0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  if (param_1 != -1) {
    *(int *)this = param_1;
  }
  if (param_2 != -1) {
    *(int *)((int)this + 4) = param_2;
  }
  if (param_3 != -1) {
    *(int *)((int)this + 8) = param_3;
  }
  if (param_4 != -1) {
    *(int *)((int)this + 0xc) = param_4;
  }
  return;
}

/* 1004ff10  FUN_1004ff10  (161 bytes)
 * undefined FUN_1004ff10(char * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5)
 * called by: FUN_100367e0, FUN_10037260, FUN_100373c0, FUN_10037540, FUN_100377d0, FUN_10037960, FUN_10037ba0, FUN_10037fe0
 */
void __thiscall
FUN_1004ff10(void *this,char *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  longlong lVar5;
  
  if (param_5 != 0) {
    lVar5 = __ftol();
    (*gEngfuncs.pfnFillRGBA)
              (*(int *)this,*(int *)((int)this + 4),*(int *)((int)this + 0xc) + -1,
               *(int *)((int)this + 8) + -1,param_2,param_3,param_4,(int)lVar5);
  }
  lVar5 = __ftol();
  uVar1 = (undefined4)lVar5;
  lVar5 = __ftol();
  uVar2 = (undefined4)lVar5;
  lVar5 = __ftol();
  uVar3 = (undefined4)lVar5;
  pcVar4 = FUN_100349a0(param_1);
  FUN_10021ce0(*(int *)this,*(undefined4 *)((int)this + 4),DAT_100d5908,pcVar4,uVar3,uVar2,uVar1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + *(int *)((int)this + 8);
  return;
}

/* 1004ffe0  FUN_1004ffe0  (22 bytes)
 * undefined4 * FUN_1004ffe0(void)
 * called by: FUN_1003ab40, FUN_10046240, FUN_100464f0, FUN_10046680, FUN_10046a70, FUN_10046bd0, FUN_10046f50, FUN_10047130, FUN_100474b0, FUN_10047cb0, FUN_100481b0, FUN_10048840, ... (13 total)
 */
undefined4 * FUN_1004ffe0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1018a720;
  for (iVar1 = 0x4b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return &DAT_1018a720;
}

/* 10050000  FUN_10050000  (125 bytes)
 * undefined FUN_10050000(int param_1)
 * called by: FUN_10035010, FUN_1003b250, FUN_1003d600, FUN_100520d0, FUN_10054510, FUN_10055500, FUN_10055760
 */
void __cdecl FUN_10050000(int param_1)

{
  (*(gEngfuncs.pTriAPI)->TexCoord2f)(*(float *)(param_1 + 0x30),*(float *)(param_1 + 0x40));
  (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)param_1);
  (*(gEngfuncs.pTriAPI)->TexCoord2f)(*(float *)(param_1 + 0x34),*(float *)(param_1 + 0x44));
  (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)(param_1 + 0xc));
  (*(gEngfuncs.pTriAPI)->TexCoord2f)(*(float *)(param_1 + 0x38),*(float *)(param_1 + 0x48));
  (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)(param_1 + 0x18));
  (*(gEngfuncs.pTriAPI)->TexCoord2f)(*(float *)(param_1 + 0x3c),*(float *)(param_1 + 0x4c));
  (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)(param_1 + 0x24));
  return;
}

/* 10050080  FUN_10050080  (1747 bytes)
 * undefined FUN_10050080(float * param_1, float * param_2, undefined4 param_3, float param_4, char param_5, float * param_6, float param_7, float * param_8)
 * called by: FUN_10035010, FUN_1003b250, FUN_1003d600, FUN_10050ce0, FUN_10055500, FUN_10055760
 */
void __cdecl
FUN_10050080(float *param_1,float *param_2,float *param_3,float param_4,char param_5,float *param_6,
            float param_7,float *param_8)

{
  undefined4 *puVar1;
  void *pvVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60 [3];
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [3];
  float local_30;
  float local_2c;
  float local_28;
  float local_24 [3];
  float local_18 [3];
  undefined1 local_c [12];
  
  if ((param_8 != (float *)0x0) && (0.01 < param_7)) {
    local_54 = *param_8;
    local_50 = param_8[1];
    local_4c = param_8[2];
    fVar6 = (float10)FUN_10029e40(&local_54);
    fVar6 = fVar6 * (float10)param_7;
    if ((float10)param_4 + (float10)param_4 < fVar6) {
      puVar1 = (undefined4 *)
               FUN_10009190(&local_78,(float)((float10)local_54 * fVar6),
                            (float)((float10)local_50 * fVar6),(float)((float10)local_4c * fVar6));
      FUN_10002610(&local_30,puVar1);
      puVar1 = (undefined4 *)FUN_10009190(&local_6c,local_30 * 0.5,local_2c * 0.5,local_28 * 0.5);
      FUN_10002610(&local_48,puVar1);
      local_88 = local_40;
      local_90 = local_48;
      local_8c = local_44;
      puVar1 = (undefined4 *)
               FUN_10009190(local_c,DAT_10190b28 - *param_2,DAT_10190b2c - param_2[1],
                            DAT_10190b30 - param_2[2]);
      FUN_10002610(&local_30,puVar1);
      fVar6 = FUN_1003d5c0(&local_30);
      if (fVar6 == (float10)0.0) {
        puVar1 = (undefined4 *)FUN_1001fb70(local_18,0,0,1);
      }
      else {
        fVar6 = (float10)1.0 / fVar6;
        puVar1 = (undefined4 *)
                 FUN_10009190(local_24,(float)((float10)local_30 * fVar6),
                              (float)((float10)local_2c * fVar6),(float)((float10)local_28 * fVar6))
        ;
      }
      FUN_10002610(&local_48,puVar1);
      puVar1 = (undefined4 *)
               FUN_10009190(local_3c,local_44 * local_4c - local_40 * local_50,
                            local_40 * local_54 - local_48 * local_4c,
                            local_48 * local_50 - local_44 * local_54);
      FUN_10002610(&local_6c,puVar1);
      puVar1 = (undefined4 *)
               FUN_10009190(local_60,local_6c * param_4,local_68 * param_4,local_64 * param_4);
      FUN_10002610(&local_78,puVar1);
      local_7c = local_70;
      local_84 = local_78;
      local_80 = local_74;
      puVar1 = (undefined4 *)
               FUN_10009190(local_60,local_90 + *param_2,local_8c + param_2[1],local_88 + param_2[2]
                           );
      FUN_10002610(&local_78,puVar1);
      puVar1 = (undefined4 *)
               FUN_10009190(local_3c,local_78 - local_84,local_74 - local_80,local_70 - local_7c);
      FUN_10002610(&local_6c,puVar1);
      *param_1 = local_6c;
      param_1[1] = local_68;
      param_1[2] = local_64;
      puVar1 = (undefined4 *)
               FUN_10009190(local_60,local_90 + *param_2,local_8c + param_2[1],local_88 + param_2[2]
                           );
      FUN_10002610(&local_78,puVar1);
      puVar1 = (undefined4 *)
               FUN_10009190(local_3c,local_78 + local_84,local_74 + local_80,local_70 + local_7c);
      FUN_10002610(&local_6c,puVar1);
      param_1[3] = local_6c;
      param_1[4] = local_68;
      param_1[5] = local_64;
      puVar1 = (undefined4 *)
               FUN_10009190(local_60,*param_2 - local_90,param_2[1] - local_8c,param_2[2] - local_88
                           );
      FUN_10002610(&local_78,puVar1);
      puVar1 = (undefined4 *)
               FUN_10009190(local_3c,local_78 + local_84,local_74 + local_80,local_70 + local_7c);
      FUN_10002610(&local_6c,puVar1);
      param_1[6] = local_6c;
      param_1[7] = local_68;
      param_1[8] = local_64;
      puVar1 = (undefined4 *)
               FUN_10009190(local_60,*param_2 - local_90,param_2[1] - local_8c,param_2[2] - local_88
                           );
      FUN_10002610(&local_78,puVar1);
      puVar1 = (undefined4 *)
               FUN_10009190(local_3c,local_78 - local_84,local_74 - local_80,local_70 - local_7c);
      FUN_10002610(&local_6c,puVar1);
      param_1[9] = local_6c;
      param_1[10] = local_68;
      goto LAB_10050729;
    }
  }
  if (param_6 == (float *)0x0) {
    if (param_5 == '\0') {
      (*gEngfuncs.pfnAngleVectors)(param_3,(float *)0x0,&local_84,&local_90);
      pfVar5 = (float *)FUN_1003d240(&local_90,local_60,param_4);
      local_90 = *pfVar5;
      local_8c = pfVar5[1];
      pfVar4 = &local_84;
      local_88 = pfVar5[2];
      pfVar5 = local_60;
    }
    else {
      pfVar5 = (float *)FUN_1003d240(&DAT_1018bda8,local_60,param_4);
      local_90 = *pfVar5;
      local_8c = pfVar5[1];
      pfVar4 = (float *)&DAT_1018bd9c;
      local_88 = pfVar5[2];
      pfVar5 = local_60;
    }
  }
  else {
    puVar1 = (undefined4 *)
             FUN_10009190(local_60,*param_6 * param_4,param_6[1] * param_4,param_6[2] * param_4);
    FUN_10002610(&local_78,puVar1);
    local_90 = local_78;
    local_78 = *param_6;
    local_8c = local_74;
    local_74 = param_6[1];
    local_88 = local_70;
    local_70 = param_6[2];
    pfVar5 = local_60;
    pfVar4 = &local_78;
    pfVar3 = local_3c;
    pvVar2 = (void *)FUN_1003d200(&DAT_10190b28,local_24,param_2);
    pfVar3 = (float *)FUN_10051190(pvVar2,pfVar3);
    pfVar4 = (float *)FUN_10051220(local_18,pfVar3,pfVar4);
  }
  pfVar3 = (float *)FUN_1003d240(pfVar4,pfVar5,param_4);
  local_84 = *pfVar3;
  pfVar5 = &local_84;
  local_80 = pfVar3[1];
  pfVar4 = local_60;
  local_7c = pfVar3[2];
  pvVar2 = (void *)FUN_10035b10(param_2,local_3c,&local_90);
  pfVar4 = (float *)FUN_1003d200(pvVar2,pfVar4,pfVar5);
  *param_1 = *pfVar4;
  param_1[1] = pfVar4[1];
  pfVar5 = &local_84;
  param_1[2] = pfVar4[2];
  pfVar4 = local_60;
  pvVar2 = (void *)FUN_10035b10(param_2,local_3c,&local_90);
  pfVar4 = (float *)FUN_10035b10(pvVar2,pfVar4,pfVar5);
  param_1[3] = *pfVar4;
  param_1[4] = pfVar4[1];
  pfVar5 = &local_84;
  param_1[5] = pfVar4[2];
  pfVar4 = local_60;
  pvVar2 = (void *)FUN_1003d200(param_2,local_3c,&local_90);
  pfVar4 = (float *)FUN_10035b10(pvVar2,pfVar4,pfVar5);
  param_1[6] = *pfVar4;
  param_1[7] = pfVar4[1];
  pfVar5 = &local_84;
  param_1[8] = pfVar4[2];
  pfVar4 = local_60;
  pvVar2 = (void *)FUN_1003d200(param_2,local_3c,&local_90);
  pfVar5 = (float *)FUN_1003d200(pvVar2,pfVar4,pfVar5);
  param_1[9] = *pfVar5;
  param_1[10] = pfVar5[1];
  local_64 = pfVar5[2];
LAB_10050729:
  param_1[0xb] = local_64;
  param_1[0xc] = 0.0;
  param_1[0x10] = 0.0;
  param_1[0xd] = 1.0;
  param_1[0x11] = 0.0;
  param_1[0xe] = 1.0;
  param_1[0x12] = 1.0;
  param_1[0xf] = 0.0;
  param_1[0x13] = 1.0;
  return;
}

/* 10050760  FUN_10050760  (45 bytes)
 * float10 FUN_10050760(float param_1, float param_2, float param_3)
 * called by: FUN_10051270
 */
float10 __cdecl FUN_10050760(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)fcos((float10)param_3 * (float10)3.141592653589793);
  fVar1 = ((float10)1.0 - fVar1) * (float10)0.5;
  return fVar1 * (float10)param_2 + ((float10)1.0 - fVar1) * (float10)param_1;
}

/* 10050790  FUN_10050790  (33 bytes)
 * undefined4 * FUN_10050790(undefined4 * param_1)
 * called by: FUN_10056b90
 */
undefined4 * __fastcall FUN_10050790(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[0x305] = 0;
  puVar2 = param_1 + 3;
  for (iVar1 = 0x280; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

/* 100507c0  FUN_100507c0  (29 bytes)
 * undefined FUN_100507c0(int param_1)
 */
void __fastcall FUN_100507c0(int param_1)

{
  FUN_1006ad4c(*(LPVOID *)(param_1 + 8));
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0xc14));
  return;
}

/* 100507e0  FUN_100507e0  (404 bytes)
 * undefined FUN_100507e0(int param_1)
 * called by: FUN_10056bc0
 */
void __thiscall FUN_100507e0(void *this,int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10077aab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(LPVOID *)((int)this + 8) != (LPVOID)0x0) {
    ExceptionList = &local_c;
    FUN_1006ad4c(*(LPVOID *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0xc0c) = 0;
  *(undefined4 *)((int)this + 0xc10) = 0;
  if (param_1 < 0x100) {
    *(undefined4 *)((int)this + 4) = 0x100;
  }
  else if (param_1 < 0x1001) {
    *(int *)((int)this + 4) = param_1;
  }
  else {
    *(undefined4 *)((int)this + 4) = 0x1000;
  }
  DAT_1018ca5c = *(undefined4 *)((int)this + 4);
  iVar4 = *(int *)((int)this + 4);
  puVar1 = operator_new(iVar4 * 300);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else if (-1 < iVar4 + -1) {
    puVar5 = puVar1 + 0x20;
    do {
      FUN_100025e0(puVar5,0xc,4,&LAB_10017e90);
      puVar5 = puVar5 + 0x4b;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_4 = 0xffffffff;
  *(undefined4 **)((int)this + 8) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_1002ed00(&DAT_100cfea8,(uint *)s_ERROR__Cannot_initialize_Particl_10095f1c,1,-1);
  }
  else {
    for (uVar2 = *(int *)((int)this + 4) * 0x4b & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    puVar1 = (undefined4 *)((int)this + 0xc);
    for (iVar4 = 0x280; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    puVar1 = (undefined4 *)((int)this + 0xa0c);
    for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 *)((int)this + 0xc18) = 0;
    if (*(LPVOID *)((int)this + 0xc14) != (LPVOID)0x0) {
      FUN_1006ad4c(*(LPVOID *)((int)this + 0xc14));
    }
    puVar1 = operator_new(*(int *)((int)this + 4) << 1);
    *(undefined4 **)((int)this + 0xc14) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      FUN_1002ed00(&DAT_100cfea8,(uint *)s_ERROR__Cannot_initialize_intensi_10095ef0,1,-1);
    }
    else {
      uVar2 = *(uint *)((int)this + 4);
      for (uVar3 = (uVar2 & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      for (iVar4 = (uVar2 & 1) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar1 = 0;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

/* 10050980  FUN_10050980  (24 bytes)
 * int FUN_10050980(int param_1)
 * called by: FUN_1003bb00
 */
int __thiscall FUN_10050980(void *this,int param_1)

{
  if (param_1 < 0) {
    return 0;
  }
  return (int)*(short *)((int)this + param_1 * 0x28 + 0x32);
}

/* 100509a0  FUN_100509a0  (37 bytes)
 * undefined4 FUN_100509a0(int param_1)
 * called by: FUN_10046a70, FUN_10046bd0, FUN_10046f50, FUN_100474b0, FUN_10047cb0, FUN_100481b0, FUN_10048840, FUN_100492b0
 */
undefined4 __thiscall FUN_100509a0(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 < 0) {
    return 0;
  }
  iVar1 = (*gEngfuncs.pfnRandomLong)(0,*(short *)((int)this + param_1 * 0x28 + 0x32) + -1);
  return iVar1;
}

/* 100509d0  FUN_100509d0  (241 bytes)
 * int FUN_100509d0(byte.conflict * param_1, short param_2)
 * called by: FUN_10035b50, FUN_1003ab40, FUN_1003b250, FUN_1003bb00, FUN_1003d600, FUN_10046240, FUN_100464f0, FUN_10046680, FUN_10046a70, FUN_10046bd0, FUN_10046f50, FUN_10047130, ... (19 total)
 */
int __thiscall FUN_100509d0(void *this,byte_conflict *param_1,short param_2)

{
  byte_conflict bVar1;
  uint uVar2;
  int *piVar3;
  HSPRITE hPic;
  int iVar4;
  void *extraout_ECX;
  void *this_00;
  uint uVar5;
  int iVar6;
  short *psVar7;
  byte_conflict *pbVar8;
  byte_conflict *pbVar9;
  uint auStack_78 [30];
  
  iVar6 = 0;
  psVar7 = (short *)((int)this + 0x30);
  this_00 = this;
  do {
    uVar2 = FUN_10076d90(this_00,param_1,(byte_conflict *)(psVar7 + -0x12));
    this_00 = extraout_ECX;
    if ((uVar2 == 0) &&
       (this_00 = (void *)CONCAT22((short)((uint)extraout_ECX >> 0x10),param_2), *psVar7 == param_2)
       ) {
      return iVar6;
    }
    iVar6 = iVar6 + 1;
    psVar7 = psVar7 + 0x14;
  } while (iVar6 < 0x40);
  iVar6 = 0;
  piVar3 = (int *)((int)this + 0x2c);
  while (*piVar3 != 0) {
    iVar6 = iVar6 + 1;
    piVar3 = piVar3 + 10;
    if (0x3f < iVar6) {
      return -1;
    }
  }
  hPic = (*gEngfuncs.pfnSPR_Load)((char *)param_1);
  *(HSPRITE *)((int)this + iVar6 * 0x28 + 0x2c) = hPic;
  if (hPic == 0) {
    FUN_1006ac7a((undefined1 *)auStack_78,(byte_conflict *)s_WARNING__cannot_found__s_10095f48);
    FUN_1002ed00(&DAT_100cfea8,auStack_78,1,-1);
    return -1;
  }
  iVar4 = (*gEngfuncs.pfnSPR_Frames)(hPic);
  *(short *)((int)this + iVar6 * 0x28 + 0x32) = (short)iVar4;
  uVar2 = 0xffffffff;
  do {
    pbVar8 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pbVar8 = param_1 + 1;
    bVar1 = *param_1;
    param_1 = pbVar8;
  } while (bVar1 != '\0');
  uVar2 = ~uVar2;
  pbVar8 = pbVar8 + -uVar2;
  pbVar9 = (byte_conflict *)((int)this + iVar6 * 0x28 + 0xc);
  for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    pbVar9 = pbVar9 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar9 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar9 = pbVar9 + 1;
  }
  *(short *)((int)this + iVar6 * 0x28 + 0x30) = param_2;
  return iVar6;
}

/* 10050ad0  FUN_10050ad0  (44 bytes)
 * undefined4 FUN_10050ad0(short param_1)
 * called by: FUN_100464f0, FUN_10046680, FUN_10046bd0, FUN_10047130, FUN_10048f60
 */
undefined4 __thiscall FUN_10050ad0(void *this,short param_1)

{
  float10 extraout_ST0;
  
  (*gEngfuncs.GetClientTime)();
  if ((float10)*(float *)((int)this + param_1 * 4 + 0xa0c) <= extraout_ST0) {
    return 1;
  }
  return 0;
}

/* 10050b00  FUN_10050b00  (29 bytes)
 * undefined FUN_10050b00(short param_1, float param_2)
 * called by: FUN_100464f0, FUN_10046680, FUN_10046bd0, FUN_10047130, FUN_10048f60
 */
void __thiscall FUN_10050b00(void *this,short param_1,float param_2)

{
  float10 extraout_ST0;
  
  (*gEngfuncs.GetClientTime)();
  *(float *)((int)this + param_1 * 4 + 0xa0c) = (float)(extraout_ST0 + (float10)param_2);
  return;
}

/* 10050b20  FUN_10050b20  (63 bytes)
 * undefined FUN_10050b20(short param_1)
 * called by: FUN_10051d50, FUN_100520d0
 */
void __thiscall FUN_10050b20(void *this,short param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    iVar1 = (int)param_1;
    *(undefined1 *)(iVar1 * 300 + *(int *)((int)this + 8)) = 0;
    *(undefined4 *)(iVar1 * 300 + 0xd8 + *(int *)((int)this + 8)) = 0;
    if (iVar1 < *(int *)((int)this + 0xc0c)) {
      *(int *)((int)this + 0xc0c) = iVar1;
    }
  }
  return;
}

/* 10050b60  FUN_10050b60  (372 bytes)
 * int FUN_10050b60(undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_1003ab40, FUN_10046240, FUN_100464f0, FUN_10046680, FUN_10046a70, FUN_10046bd0, FUN_10046f50, FUN_10047130, FUN_100474b0, FUN_10047cb0, FUN_100481b0, FUN_10048840, ... (13 total)
 */
int __thiscall FUN_10050b60(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 extraout_ST0;
  
  if (*(int *)((int)this + 8) == 0) {
    return -1;
  }
  if (((-1 < *(short *)(param_1 + 0x45)) &&
      (*(short *)((int)this + *(short *)(param_1 + 0x45) * 0x28 + 0x30) == 1)) &&
     (iVar4 = (*DAT_100ea860)(), iVar4 == 0)) {
    return -1;
  }
  iVar4 = *(int *)((int)this + 0xc0c);
  iVar3 = *(int *)((int)this + 8);
  iVar6 = -1;
  iVar7 = iVar4;
  if (*(char *)(iVar3 + iVar4 * 300) != '\0') {
    if (*(int *)((int)this + 4) <= iVar4) {
      return -1;
    }
    pcVar5 = (char *)(iVar3 + iVar4 * 300);
    do {
      if (iVar6 != -1) goto LAB_10050c10;
      if (*pcVar5 == '\0') {
        iVar6 = iVar4;
      }
      iVar4 = iVar4 + 1;
      pcVar5 = pcVar5 + 300;
      iVar7 = iVar6;
    } while (iVar4 < *(int *)((int)this + 4));
  }
  iVar6 = iVar7;
  if (iVar7 == -1) {
    return -1;
  }
LAB_10050c10:
  puVar1 = (undefined4 *)(iVar3 + iVar6 * 300);
  puVar8 = puVar1;
  for (iVar4 = 0x4b; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *param_1;
    param_1 = param_1 + 1;
    puVar8 = puVar8 + 1;
  }
  *(short *)((int)puVar1 + 0x116) = (short)iVar6;
  puVar1[2] = puVar1[5];
  puVar1[3] = puVar1[6];
  puVar1[4] = puVar1[7];
  puVar1[0x1a] = DAT_10098a28;
  puVar1[0x1b] = DAT_10098a2c;
  uVar2 = DAT_10098a30;
  *(undefined1 *)((int)puVar1 + 1) = 0;
  puVar1[0x3b] = 0;
  puVar1[0x1c] = uVar2;
  (*gEngfuncs.GetClientTime)();
  puVar1[0x35] = (float)extraout_ST0;
  if ((float)puVar1[0x3d] <= 0.1) {
    uVar2 = 0x3dcccccd;
  }
  else {
    uVar2 = puVar1[0x3d];
  }
  puVar1[0x46] = param_2;
  puVar1[0x3d] = uVar2;
  puVar1[0x47] = param_3;
  puVar1[0x44] = 0;
  if (*(int *)((int)this + 0xc10) < iVar6) {
    *(int *)((int)this + 0xc10) = iVar6;
  }
  return iVar6;
}

/* 10050ce0  FUN_10050ce0  (1187 bytes)
 * undefined FUN_10050ce0(float param_1, float * param_2, float * param_3)
 * called by: FUN_100520d0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10050ce0(void *this,float param_1,float *param_2,float *param_3)

{
  float fVar1;
  byte bVar2;
  char cVar3;
  cl_entity_s *pcVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  float10 extraout_ST0;
  char cStack00000010;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  bVar2 = *(byte *)((int)param_1 + 6);
  if (bVar2 == 0) {
    if (*(char *)((int)param_1 + 1) == '\0') {
      if (*(float *)((int)param_1 + 0xd0) != 0.0) {
        local_24 = 0.0;
        local_20 = 0.0;
        local_1c = *param_3 * *(float *)((int)param_1 + 0xd0) * 0.1 * -_DAT_100963ec;
        FUN_10002610(&local_30,&local_24);
        local_18 = local_30 + *(float *)((int)param_1 + 0x38);
        local_14 = local_2c + *(float *)((int)param_1 + 0x3c);
        local_10 = local_28 + *(float *)((int)param_1 + 0x40);
        FUN_10002610(&local_c,&local_18);
        *(float *)((int)param_1 + 0x38) = local_c;
        *(float *)((int)param_1 + 0x3c) = local_8;
        *(float *)((int)param_1 + 0x40) = local_4;
      }
      fVar1 = *(float *)((int)param_1 + 0xd0);
      if (*(float *)((int)param_1 + 0xd0) <= 0.0) {
        fVar1 = -fVar1;
      }
      if (1.0 - fVar1 <= 0.0) {
        fVar1 = 0.0;
      }
      else {
        fVar1 = *(float *)((int)param_1 + 0xd0);
        if (*(float *)((int)param_1 + 0xd0) <= 0.0) {
          fVar1 = -fVar1;
        }
        fVar1 = 1.0 - fVar1;
      }
      local_c = *(float *)((int)param_1 + 0x38);
      pfVar7 = (float *)((int)param_1 + 0x38);
      local_8 = *(float *)((int)param_1 + 0x3c);
      local_10 = *(float *)((int)param_1 + 0xf4) * *param_3;
      if (1.0 <= local_10) {
        local_10 = 1.0;
      }
      local_18 = local_10 * local_c;
      local_14 = local_8 * local_10;
      local_10 = fVar1 * *(float *)((int)param_1 + 0x40) * local_10;
      FUN_10002610(&local_c,&local_18);
      local_24 = *pfVar7 - local_c;
      local_20 = *(float *)((int)param_1 + 0x3c) - local_8;
      local_1c = *(float *)((int)param_1 + 0x40) - local_4;
      FUN_10002610(&local_30,&local_24);
      *pfVar7 = local_30;
      *(float *)((int)param_1 + 0x3c) = local_2c;
      *(float *)((int)param_1 + 0x40) = local_28;
      (*gEngfuncs.GetClientTime)();
      if ((float10)*(float *)((int)param_1 + 0x110) < extraout_ST0) {
        FUN_10051270((int)param_1,param_3);
      }
      local_8 = (float)param_2 * *pfVar7;
      local_4 = (float)param_2 * *(float *)((int)param_1 + 0x3c);
      FUN_10002610(&local_14,&local_8);
      local_20 = local_14 + *(float *)((int)param_1 + 0x14);
      local_1c = local_10 + *(float *)((int)param_1 + 0x18);
      local_18 = local_c + *(float *)((int)param_1 + 0x1c);
      FUN_10002610(&local_2c,&local_20);
      *(float *)((int)param_1 + 0x14) = local_2c;
      *(float *)((int)param_1 + 0x18) = local_28;
      *(float *)((int)param_1 + 0x1c) = local_24;
    }
  }
  else if (*(char *)((int)param_1 + 7) == '\0') {
    pcVar4 = (*gEngfuncs.GetEntityByIndex)(bVar2 - 1);
    if (pcVar4 != (cl_entity_s *)0x0) {
      local_20 = *(float *)((int)param_1 + 0x2c) + pcVar4->origin[0];
      local_1c = *(float *)((int)param_1 + 0x30) + pcVar4->origin[1];
      local_18 = *(float *)((int)param_1 + 0x34) + pcVar4->origin[2];
      FUN_10002610(&local_2c,&local_20);
      *(float *)((int)param_1 + 0x14) = local_2c;
      *(float *)((int)param_1 + 0x18) = local_28;
      *(float *)((int)param_1 + 0x1c) = local_24;
    }
  }
  else {
    pcVar4 = (*gEngfuncs.GetEntityByIndex)(bVar2 - 1);
    if (pcVar4 != (cl_entity_s *)0x0) {
      uVar5 = (uint)*(byte *)((int)param_1 + 7);
      local_2c = *(float *)((int)param_1 + 0x2c) + pcVar4->angles[uVar5 * 3];
      local_28 = *(float *)((int)param_1 + 0x30) + pcVar4->attachment[uVar5 - 1][1];
      local_24 = *(float *)((int)param_1 + 0x34) + pcVar4->attachment[uVar5 - 1][2];
      FUN_10002610(&local_20,&local_2c);
      *(float *)((int)param_1 + 0x14) = local_20;
      *(float *)((int)param_1 + 0x18) = local_1c;
      *(float *)((int)param_1 + 0x1c) = local_18;
    }
  }
  if ((*(char *)((int)param_1 + 4) == '\x03') && (*(char *)((int)param_1 + 1) == '\0')) {
    FUN_10051d50(this,(int)param_1);
  }
  if (*(char *)((int)param_1 + 4) == '\x04') {
    pfVar7 = (float *)((int)param_1 + 0x80);
    for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
      *param_3 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      param_3 = param_3 + 1;
    }
    return;
  }
  cVar3 = *(char *)((int)param_1 + 5);
  param_2 = *(float **)((int)param_1 + 0x128);
  pfVar7 = (float *)0x0;
  cStack00000010 = '\x01';
  if ((cVar3 != '\0') && (*(char *)((int)param_1 + 1) == '\0')) {
    if (cVar3 == '\x01') {
      cStack00000010 = '\0';
      *(float *)((int)param_1 + 0x28) =
           *(float *)((int)param_1 + 0x4c) * *param_3 * 10.0 + *(float *)((int)param_1 + 0x28);
      local_24 = *(float *)((int)param_1 + 0x28);
      local_2c = DAT_101914d0;
      local_28 = DAT_101914d4;
    }
    else {
      if (cVar3 == '\x02') {
        fVar1 = *param_3;
        local_8 = fVar1 * *(float *)((int)param_1 + 0x44);
        local_14 = local_8 * 10.0;
        local_10 = fVar1 * *(float *)((int)param_1 + 0x48) * 10.0;
        local_2c = local_14 + *(float *)((int)param_1 + 0x20);
        local_28 = local_10 + *(float *)((int)param_1 + 0x24);
        local_24 = fVar1 * *(float *)((int)param_1 + 0x4c) * 10.0 + *(float *)((int)param_1 + 0x28);
        *(float *)((int)param_1 + 0x20) = local_2c;
        *(float *)((int)param_1 + 0x24) = local_28;
        *(float *)((int)param_1 + 0x28) = local_24;
        local_4 = local_28;
        cStack00000010 = '\0';
      }
      else {
        if (cVar3 != '\x03') goto LAB_10051151;
        pfVar7 = (float *)((int)param_1 + 0x74);
        cStack00000010 = '\x01';
      }
      param_2 = (float *)0x0;
    }
  }
LAB_10051151:
  FUN_10050080(param_3,(float *)((int)param_1 + 0x14),&local_2c,*(float *)((int)param_1 + 0x108),
               cStack00000010,pfVar7,(float)param_2,(float *)((int)param_1 + 0x38));
  return;
}

/* 10051190  FUN_10051190  (134 bytes)
 * undefined FUN_10051190(float * param_1)
 * called by: FUN_10050080, FUN_10052720
 */
void __thiscall FUN_10051190(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = SQRT(*(float *)((int)this + 8) * *(float *)((int)this + 8) +
               *(float *)((int)this + 4) * *(float *)((int)this + 4) +
               *(float *)this * *(float *)this);
  if (fVar3 == 0.0) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 1.0;
    return;
  }
  fVar3 = 1.0 / fVar3;
  fVar1 = *(float *)((int)this + 4);
  fVar2 = *(float *)((int)this + 8);
  *param_1 = fVar3 * *(float *)this;
  param_1[2] = fVar3 * fVar2;
  param_1[1] = fVar3 * fVar1;
  return;
}

/* 10051220  FUN_10051220  (75 bytes)
 * undefined FUN_10051220(float * param_1, float * param_2, float * param_3)
 * called by: FUN_10050080, FUN_10052720
 */
void __cdecl FUN_10051220(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_2[2];
  fVar2 = *param_3;
  fVar3 = param_3[2];
  fVar4 = *param_2;
  fVar5 = param_3[1];
  fVar6 = *param_2;
  fVar7 = *param_3;
  fVar8 = param_2[1];
  *param_1 = param_3[2] * param_2[1] - param_2[2] * param_3[1];
  param_1[2] = fVar5 * fVar6 - fVar7 * fVar8;
  param_1[1] = fVar1 * fVar2 - fVar3 * fVar4;
  return;
}

/* 10051270  FUN_10051270  (2711 bytes)
 * undefined FUN_10051270(int param_1, float * param_2)
 * called by: FUN_10050ce0
 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10051270(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  cl_entity_s *pcVar5;
  cl_entity_s *pcVar6;
  undefined4 *puVar7;
  int idx;
  float *pfVar8;
  float10 fVar9;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  float local_13c;
  float local_138;
  float local_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float local_124;
  float fStack_120;
  float fStack_11c;
  float afStack_118 [4];
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float local_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float afStack_a8 [2];
  float fStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined1 auStack_14 [8];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [8];
  
  afStack_118[1] = 0.0;
  afStack_118[2] = 1.75;
  if (0x27 < DAT_100cf978) {
    afStack_118[2] = 1.875;
  }
  pfVar3 = (float *)FUN_10057270(&local_f4);
  iVar2 = param_1;
  local_13c = *(float *)(param_1 + 0x14) - *pfVar3;
  pfVar8 = (float *)(param_1 + 0x14);
  local_138 = *(float *)(param_1 + 0x18) - pfVar3[1];
  local_134 = *(float *)(param_1 + 0x1c) - pfVar3[2];
  FUN_10002610(&local_c0,&local_13c);
  fVar9 = FUN_10058390(&local_c0);
  local_108 = (float)(fVar9 * (float10)(double)CONCAT44(afStack_118[2],afStack_118[1]));
  local_124 = (float)DAT_1018ca60 * 0.033333335;
  if (local_124 < *param_2) {
    local_124 = *param_2;
  }
  if ((*(float *)(iVar2 + 0xe8) != 0.0) && (local_108 < 512.0)) {
    (*gEngfuncs.pfnRandomFloat)(*(float *)(iVar2 + 0x5c),*(float *)(iVar2 + 0x50));
    local_134 = (float)extraout_ST0;
    (*gEngfuncs.pfnRandomFloat)(*(float *)(iVar2 + 0x60),*(float *)(iVar2 + 0x54));
    fStack_128 = (float)extraout_ST0_00;
    (*gEngfuncs.pfnRandomFloat)(*(float *)(iVar2 + 100),*(float *)(iVar2 + 0x58));
    fStack_ec = local_124 - *(float *)(iVar2 + 0x68);
    fStack_e8 = fStack_120 - *(float *)(iVar2 + 0x6c);
    fStack_e4 = (float)(extraout_ST0_01 - (float10)*(float *)(iVar2 + 0x70));
    FUN_10002610(&fStack_fc,&fStack_ec);
    fStack_12c = fStack_f8;
    fStack_130 = fStack_fc;
    fStack_128 = local_f4;
    if (*(float *)(iVar2 + 0xe8) <
        SQRT(fStack_f8 * fStack_f8 + local_f4 * local_f4 + fStack_fc * fStack_fc)) {
      fVar9 = FUN_1003d5c0(&fStack_130);
      if (fVar9 == (float10)0.0) {
        pfVar3 = &fStack_ec;
        fStack_ec = 0.0;
        fStack_e8 = 0.0;
        fStack_e4 = 1.0;
      }
      else {
        fVar9 = (float10)1.0 / fVar9;
        pfVar3 = (float *)FUN_10009190(afStack_a8,(float)(fVar9 * (float10)fStack_130),
                                       (float)((float10)fStack_12c * fVar9),
                                       (float)((float10)fStack_128 * fVar9));
      }
      FUN_10002610(&local_124,pfVar3);
      fStack_100 = *(float *)(iVar2 + 0xe8);
      local_108 = local_124 * fStack_100;
      fStack_104 = fStack_120 * fStack_100;
      fStack_100 = fStack_11c * fStack_100;
      FUN_10002610(afStack_118,&local_108);
      fStack_130 = afStack_118[0];
      fStack_12c = afStack_118[1];
      fStack_128 = afStack_118[2];
    }
    local_124 = fStack_130 + *(float *)(iVar2 + 0x68);
    fStack_120 = fStack_12c + *(float *)(iVar2 + 0x6c);
    fStack_11c = fStack_128 + *(float *)(iVar2 + 0x70);
    FUN_10002610(&local_108,&local_124);
    local_124 = local_108 * afStack_118[3];
    *(float *)(iVar2 + 0x68) = local_108;
    fStack_120 = fStack_104 * afStack_118[3];
    *(float *)(iVar2 + 0x6c) = fStack_104;
    *(float *)(iVar2 + 0x70) = fStack_100;
    fStack_11c = fStack_100 * afStack_118[3];
    FUN_10002610(&fStack_ec,&local_124);
    local_108 = fStack_ec + *(float *)(iVar2 + 0x38);
    fStack_104 = fStack_e8 + *(float *)(iVar2 + 0x3c);
    fStack_100 = fStack_e4 + *(float *)(iVar2 + 0x40);
    FUN_10002610(afStack_118,&local_108);
    *(float *)(iVar2 + 0x38) = afStack_118[0];
    *(float *)(iVar2 + 0x3c) = afStack_118[1];
    *(float *)(iVar2 + 0x40) = afStack_118[2];
  }
  if (DAT_1018ca5a != '\0') {
    if (((*(float *)(iVar2 + 0x100) != 0.0) && (*(char *)(iVar2 + 1) == '\0')) &&
       (fStack_f0 < 512.0)) {
      idx = 0;
      iVar4 = (*gEngfuncs.GetMaxClients)();
      if (-1 < iVar4) {
        do {
          pcVar5 = (*gEngfuncs.GetEntityByIndex)(idx);
          if (((pcVar5 != (cl_entity_s *)0x0) && (pcVar5->player == 1)) &&
             ((pcVar5->curstate).solid != 0)) {
            fStack_68 = *pfVar8 - pcVar5->origin[0];
            fStack_64 = *(float *)(iVar2 + 0x18) - pcVar5->origin[1];
            fStack_60 = *(float *)(iVar2 + 0x1c) - pcVar5->origin[2];
            FUN_10002610(afStack_118 + 1,&fStack_68);
            fStack_e4 = afStack_118[2];
            fStack_e8 = afStack_118[1];
            fStack_e0 = afStack_118[3];
            fStack_ec = SQRT(afStack_118[2] * afStack_118[2] +
                             afStack_118[3] * afStack_118[3] + afStack_118[1] * afStack_118[1]);
            if (fStack_ec <= 128.0) {
              pcVar6 = (*gEngfuncs.GetLocalPlayer)();
              if (pcVar6->index == pcVar5->index) {
                fStack_12c = DAT_10191d20;
                fStack_128 = DAT_10191d24;
              }
              else {
                fStack_44 = (pcVar5->curstate).origin[0] - (pcVar5->prevstate).origin[0];
                fStack_40 = (pcVar5->curstate).origin[1] - (pcVar5->prevstate).origin[1];
                fStack_3c = (pcVar5->curstate).origin[2] - (pcVar5->prevstate).origin[2];
                FUN_10002610(&fStack_8c,&fStack_44);
                fVar1 = (pcVar5->curstate).msg_time - (pcVar5->prevstate).msg_time;
                puVar7 = (undefined4 *)
                         FUN_10009190(&param_1,fStack_8c / fVar1,fStack_88 / fVar1,fStack_84 / fVar1
                                     );
                FUN_10002610(&fStack_80,puVar7);
                fStack_12c = fStack_80;
                fStack_128 = fStack_7c;
              }
              local_124 = 0.0;
              if (0.0 < SQRT(fStack_128 * fStack_128 + fStack_12c * fStack_12c)) {
                fVar9 = FUN_1003d5c0(&fStack_12c);
                if (fVar9 == (float10)0.0) {
                  puVar7 = &uStack_98;
                  uStack_98 = 0;
                  uStack_94 = 0;
                  uStack_90 = 0x3f800000;
                }
                else {
                  fVar9 = (float10)1.0 / fVar9;
                  puVar7 = (undefined4 *)
                           FUN_10009190(&stack0x00000010,(float)(fVar9 * (float10)fStack_12c),
                                        (float)((float10)fStack_128 * fVar9),
                                        (float)(fVar9 * (float10)local_124));
                }
                FUN_10002610(&fStack_104,puVar7);
                fVar9 = FUN_1003d5c0(&fStack_e8);
                if (fVar9 == (float10)0.0) {
                  puVar7 = (undefined4 *)FUN_1001fb70(auStack_8,0,0,1);
                }
                else {
                  fVar9 = (float10)1.0 / fVar9;
                  puVar7 = (undefined4 *)
                           FUN_10009190(auStack_14,(float)(fVar9 * (float10)fStack_e8),
                                        (float)((float10)fStack_e4 * fVar9),
                                        (float)((float10)fStack_e0 * fVar9));
                }
                FUN_10002610(&fStack_120,puVar7);
                fStack_a0 = -fStack_104;
                fStack_cc = 0.0;
                uStack_48 = 0;
                fStack_f8 = fStack_11c * fStack_100 + fStack_120 * fStack_104 + 0.0;
                fStack_dc = SQRT(local_124 * local_124 +
                                 fStack_128 * fStack_128 + fStack_12c * fStack_12c);
                fStack_4c = (128.0 - fStack_ec) * fStack_dc * fStack_f8 * 0.0078125;
                fStack_50 = fStack_120 * fStack_4c;
                fStack_4c = fStack_11c * fStack_4c;
                FUN_10002610(&fStack_74,&fStack_50);
                uStack_30 = 0;
                fStack_34 = ((fStack_104 + fStack_a0) * fStack_100 + fStack_cc) * fStack_dc *
                            fStack_f8 * fStack_ec * 0.0078125;
                fStack_38 = fStack_100 * fStack_34;
                fStack_34 = fStack_34 * fStack_a0;
                FUN_10002610(&fStack_2c,&fStack_38);
                fStack_5c = fStack_74 + fStack_2c;
                fStack_58 = fStack_70 + fStack_28;
                fStack_54 = fStack_6c + fStack_24;
                FUN_10002610(&fStack_20,&fStack_5c);
                local_c0 = local_108 * *(float *)(iVar2 + 0x100);
                fStack_c8 = fStack_20 * local_c0;
                fStack_c4 = fStack_1c * local_c0;
                local_c0 = fStack_18 * local_c0;
                FUN_10002610(&fStack_b0,&fStack_c8);
                fStack_bc = fStack_b0 + *pfVar8;
                fStack_b8 = fStack_ac + *(float *)(iVar2 + 0x18);
                fStack_b4 = afStack_a8[0] + *(float *)(iVar2 + 0x1c);
                FUN_10002610(&fStack_d8,&fStack_bc);
                *pfVar8 = fStack_d8;
                *(float *)(iVar2 + 0x18) = fStack_d4;
                *(undefined4 *)(iVar2 + 0x1c) = uStack_d0;
              }
            }
          }
          idx = idx + 1;
          iVar4 = (*gEngfuncs.GetMaxClients)();
        } while (idx <= iVar4);
      }
    }
    if (((DAT_1018ca5a != '\0') && (*(float *)(iVar2 + 0x104) != 0.0)) &&
       (*(char *)(iVar2 + 1) == '\0')) {
      (*gEngfuncs.GetClientTime)();
      if ((float10)_DAT_1018946c + (float10)_DAT_10189470 < extraout_ST0_02) {
        DAT_1018943c = DAT_10189440;
        DAT_10189448 = DAT_10189454;
        DAT_1018944c = DAT_10189458;
        _DAT_10189450 = DAT_1018945c;
        pfVar8 = (float *)&DAT_10189460;
        do {
          fVar9 = FUN_1001aea0(DAT_10189438,0.0,*pfVar8);
          *pfVar8 = (float)fVar9;
          pfVar8 = pfVar8 + 1;
        } while ((int)pfVar8 < 0x1018946c);
        fVar9 = FUN_1001aea0(DAT_10189438,0.0,DAT_10189444);
        DAT_10189440 = (float)fVar9;
        (*gEngfuncs.GetClientTime)();
        _DAT_1018946c = (float)extraout_ST0_03;
        fVar9 = FUN_1001aea0(DAT_10189438,0.001,1.0);
        _DAT_10189470 = (float)fVar9;
        DAT_10189438 = FUN_1001ae60(DAT_10189438,0,30000);
      }
      (*gEngfuncs.GetClientTime)();
      iVar4 = 0;
      fVar1 = (float)((extraout_ST0_04 - (float10)_DAT_1018946c) / (float10)_DAT_10189470);
      fStack_fc = fVar1;
      do {
        fVar9 = FUN_10050760(*(float *)((int)&DAT_10189448 + iVar4),
                             *(float *)((int)&DAT_10189454 + iVar4),fVar1);
        *(float *)((int)afStack_118 + iVar4) = (float)fVar9;
        iVar4 = iVar4 + 4;
      } while (iVar4 < 0xc);
      fVar9 = FUN_10050760(DAT_1018943c,DAT_10189440,fVar1);
      fStack_fc = (float)fVar9;
      if ((float10)0.0 < fVar9) {
        fVar1 = SQRT(afStack_118[0] * afStack_118[0] +
                     afStack_118[1] * afStack_118[1] + afStack_118[2] * afStack_118[2]);
        if (fVar1 == 0.0) {
          pfVar8 = (float *)FUN_1001fb70(&fStack_18,0,0,1);
        }
        else {
          fVar1 = 1.0 / fVar1;
          pfVar8 = &fStack_dc;
          fStack_dc = afStack_118[0] * fVar1;
          fStack_d8 = afStack_118[1] * fVar1;
          fStack_d4 = afStack_118[2] * fVar1;
        }
        FUN_10002610(&local_124,pfVar8);
        fStack_b8 = fStack_fc * afStack_118[3] * *(float *)(iVar2 + 0x104);
        local_c0 = local_124 * fStack_b8;
        fStack_bc = fStack_120 * fStack_b8;
        fStack_b8 = fStack_11c * fStack_b8;
        FUN_10002610(&fStack_b4,&local_c0);
        puVar7 = (undefined4 *)
                 FUN_10009190(auStack_c,fStack_b4 + *(float *)(iVar2 + 0x38),
                              fStack_b0 + *(float *)(iVar2 + 0x3c),
                              fStack_ac + *(float *)(iVar2 + 0x40));
        FUN_10002610(&fStack_cc,puVar7);
        *(float *)(iVar2 + 0x38) = fStack_cc;
        *(float *)(iVar2 + 0x3c) = fStack_c8;
        *(float *)(iVar2 + 0x40) = fStack_c4;
      }
    }
  }
  (*gEngfuncs.GetClientTime)();
  *(float *)(iVar2 + 0x110) = (float)(extraout_ST0_05 + (float10)afStack_118[3]);
  return;
}

/* 10051d10  FUN_10051d10  (49 bytes)
 * undefined FUN_10051d10(int param_1)
 * called by: FUN_10051d50
 */
void FUN_10051d10(int param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 0x38) = DAT_10098a28;
  *(undefined4 *)(param_1 + 0x3c) = DAT_10098a2c;
  *(undefined4 *)(param_1 + 0x40) = DAT_10098a30;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

/* 10051d50  FUN_10051d50  (866 bytes)
 * undefined FUN_10051d50(int param_1)
 * called by: FUN_10050ce0
 */
void __thiscall FUN_10051d50(void *this,int param_1)

{
  float *start;
  float *end;
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  float10 extraout_ST0;
  float10 fVar4;
  float unaff_retaddr;
  float fVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  float fVar8;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined1 auStack_24 [8];
  float fStack_1c;
  float fStack_10;
  vec_t vStack_c;
  vec_t vStack_8;
  float fStack_4;
  
  if (*(int *)(param_1 + 0x120) != 0) {
    fVar8 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x14);
    start = (float *)(param_1 + 8);
    end = (float *)(param_1 + 0x14);
    fVar5 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x18);
    local_54 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x1c);
    if ((0.001 <= fVar8 * fVar8 + fVar5 * fVar5 + local_54 * local_54) &&
       (*(char *)(param_1 + 2) != '\0')) {
      uVar1 = FUN_100570b0(end);
      *(char *)(param_1 + 2) = (char)uVar1;
      if ((char)uVar1 != '\0') {
        (*gEngfuncs.GetClientTime)();
        fVar8 = (float)extraout_ST0;
        if (*(float *)(param_1 + 0xec) <= fVar8) {
          uVar1 = 0;
          uVar7 = 0x3fe0;
          if (0x27 < DAT_100cf978) {
            uVar7 = 0x3ff0;
          }
          uVar6 = 0;
          pfVar2 = (float *)FUN_10057270(&fStack_50);
          fStack_68 = *end - *pfVar2;
          fStack_64 = *(float *)(param_1 + 0x18) - pfVar2[1];
          fStack_60 = *(float *)(param_1 + 0x1c) - pfVar2[2];
          FUN_10002610(&fStack_5c,&fStack_68);
          fVar4 = FUN_10058390(&fStack_5c);
          fVar4 = fVar4 * (float10)(double)CONCAT26(uVar7,CONCAT24(uVar6,uVar1));
          fVar5 = (float)(fVar4 * (float10)0.00012207031);
          if ((float10)1024.0 < fVar4) {
            fVar5 = fVar5 + fVar5;
          }
          if (fVar5 <= 0.016) {
            fVar5 = 0.016;
          }
          *(float *)(param_1 + 0xec) = fVar5 + fVar8;
          (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
          (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)(start,end,2,-1,(pmtrace_s *)&fStack_40);
          if (fStack_1c == 0.0) {
            if (*(float *)(param_1 + 0xd4) + 0.5 <= local_54) {
              FUN_10051d10(param_1);
            }
            else {
              FUN_10050b20(this,*(short *)(param_1 + 0x116));
            }
          }
          else if (fStack_1c != 1.0) {
            iVar3 = (*gEngfuncs.PM_PointContents)(start,(int *)0x0);
            if (iVar3 == -2) {
              FUN_10050b20(this,*(short *)(param_1 + 0x116));
            }
            *end = fStack_10;
            *(vec_t *)(param_1 + 0x18) = vStack_c;
            *(vec_t *)(param_1 + 0x1c) = vStack_8;
            fVar5 = *(float *)(param_1 + 0x18) - *(float *)(param_1 + 0xc);
            fVar8 = *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x10);
            fStack_4c = SQRT((*end - *start) * (*end - *start) + fVar5 * fVar5 + fVar8 * fVar8);
            fStack_50 = 1.0 - fStack_58 * 7.0;
            if (fStack_50 < 0.0) {
              fStack_50 = 0.0;
            }
            pfVar2 = (float *)(param_1 + 0x38);
            fStack_44 = *(float *)(param_1 + 0x3c) * 0.3;
            fStack_40 = *(float *)(param_1 + 0x40) * 0.3;
            fStack_58 = *(float *)(param_1 + 0x38) * 0.3 * fStack_50;
            local_54 = fStack_44 * fStack_50;
            fStack_50 = fStack_50 * fStack_40;
            *pfVar2 = fStack_58;
            *(float *)(param_1 + 0x3c) = local_54;
            *(float *)(param_1 + 0x40) = fStack_50;
            fStack_3c = fStack_58;
            fStack_38 = local_54;
            FUN_10058410(pfVar2,(fStack_4 * *pfVar2 +
                                (float)param_1 * *(float *)(param_1 + 0x40) +
                                unaff_retaddr * *(float *)(param_1 + 0x3c)) * -2.0,&fStack_4,pfVar2)
            ;
            if (DAT_100963e8 * fStack_4c < *(float *)(param_1 + 0xf4) * 3.0) {
              FUN_10051d10(param_1);
            }
            if (*(code **)(param_1 + 0x11c) != (code *)0x0) {
              (**(code **)(param_1 + 0x11c))(param_1,auStack_24);
            }
          }
          *start = *end;
          *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
          *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
        }
      }
    }
    return;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
  return;
}

/* 100520c0  FUN_100520c0  (13 bytes)
 * float10 FUN_100520c0(void)
 * called by: FUN_100520d0
 */
float10 FUN_100520c0(void)

{
  return (float10)DAT_100963e8 * (float10)DAT_10191478;
}

/* 100520d0  FUN_100520d0  (1001 bytes)
 * undefined FUN_100520d0(void * param_1)
 * called by: FUN_10056dd0
 */
void __fastcall FUN_100520d0(void *param_1)

{
  float fVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  model_s *pSpriteModel;
  int iVar7;
  char *pcVar8;
  int iVar9;
  float10 fVar10;
  float10 extraout_ST0;
  longlong lVar11;
  float local_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  float fStack_64;
  float fStack_60;
  int iStack_5c;
  int iStack_58;
  float afStack_50 [2];
  float fStack_48;
  float fStack_3c;
  undefined1 auStack_28 [40];
  
  if (*(int *)((int)param_1 + 8) != 0) {
    fVar10 = FUN_100520c0();
    local_74 = (float)fVar10;
    (*gEngfuncs.GetClientTime)();
    iVar7 = 0;
    fStack_64 = (float)extraout_ST0;
    iStack_6c = 0;
    iStack_5c = 0;
    *(undefined4 *)((int)param_1 + 0xc18) = 0;
    if (-1 < *(int *)((int)param_1 + 0xc10)) {
      iStack_70 = 0;
      do {
        iVar9 = iStack_6c;
        pcVar8 = (char *)(iStack_70 + *(int *)((int)param_1 + 8));
        sVar2 = *(short *)(pcVar8 + 0x114);
        if (sVar2 < 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)sVar2;
        }
        iStack_68 = (int)param_1 + iVar6 * 0x28 + 0xc;
        if (*pcVar8 == '\0') {
          if (iStack_6c < *(int *)((int)param_1 + 0xc0c)) {
            *(int *)((int)param_1 + 0xc0c) = iStack_6c;
          }
        }
        else {
          if (iVar7 < iStack_6c) {
            iStack_5c = iStack_6c;
          }
          fVar1 = *(float *)(pcVar8 + 0xd8);
          if ((sVar2 < 0) || (*(float *)(pcVar8 + 0xfc) <= 0.001)) {
            bVar3 = true;
          }
          else {
            lVar11 = __ftol();
            bVar3 = (int)*(short *)(iStack_68 + 0x26) <= (int)lVar11;
          }
          if ((*(float *)(pcVar8 + 0xe0) <= 0.001) || (*(float *)(pcVar8 + 0xdc) < 0.001)) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if ((-0.001 <= *(float *)(pcVar8 + 0xe4)) || (*(float *)(pcVar8 + 0x108) < 0.001)) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if ((((0.001 <= fVar1) || (!bVar3)) || (!bVar5)) || (!bVar4)) {
            if (0.0 < *(float *)(pcVar8 + 0x100)) {
              *(short *)(*(int *)((int)param_1 + 0xc14) + *(int *)((int)param_1 + 0xc18) * 2) =
                   (short)iVar9;
              *(int *)((int)param_1 + 0xc18) = *(int *)((int)param_1 + 0xc18) + 1;
            }
            if ((*(float *)(pcVar8 + 0xe0) != 0.0) && (*(float *)(pcVar8 + 0xd8) <= 0.0)) {
              fVar1 = *(float *)(pcVar8 + 0xdc) - local_74 * *(float *)(pcVar8 + 0xe0) * 100.0;
              if (fVar1 <= 0.0) {
                fVar1 = 0.0;
              }
              *(float *)(pcVar8 + 0xdc) = fVar1;
              if (1.0 < fVar1) {
                pcVar8[0xdc] = '\0';
                pcVar8[0xdd] = '\0';
                pcVar8[0xde] = -0x80;
                pcVar8[0xdf] = '?';
              }
            }
            if (*(float *)(pcVar8 + 0xe4) != 0.0) {
              *(float *)(pcVar8 + 0x108) =
                   local_74 * *(float *)(pcVar8 + 0xe4) * 100.0 + *(float *)(pcVar8 + 0x108);
            }
            pcVar8[2] = -1 < *(short *)(pcVar8 + 0x114);
            FUN_10050ce0(param_1,(float)pcVar8,afStack_50,&local_74);
            if (*(code **)(pcVar8 + 0x118) != (code *)0x0) {
              (**(code **)(pcVar8 + 0x118))(pcVar8);
            }
            if (pcVar8[2] != '\0') {
              iStack_58 = *(short *)(iStack_68 + 0x26) + -1;
              lVar11 = __ftol();
              iVar7 = iStack_68;
              fStack_60 = 1.0;
              if ((0.0 < *(float *)(pcVar8 + 0xf0)) &&
                 (fStack_64 < *(float *)(pcVar8 + 0xd4) + *(float *)(pcVar8 + 0xf0))) {
                fStack_60 = (fStack_64 - *(float *)(pcVar8 + 0xd4)) / *(float *)(pcVar8 + 0xf0);
              }
              pSpriteModel = (*gEngfuncs.GetSpritePointer)(*(HSPRITE *)(iStack_68 + 0x20));
              iVar9 = iStack_6c;
              if ((pSpriteModel != (model_s *)0x0) &&
                 (iVar6 = (*(gEngfuncs.pTriAPI)->SpriteTexture)(pSpriteModel,(int)lVar11),
                 iVar9 = iStack_6c, iVar6 != 0)) {
                (*(gEngfuncs.pTriAPI)->RenderMode)((int)*(short *)(iVar7 + 0x24));
                (*(gEngfuncs.pTriAPI)->CullFace)(TRI_NONE);
                (*(gEngfuncs.pTriAPI)->Begin)(2);
                fStack_3c = *(float *)(pcVar8 + 0xdc);
                (*(gEngfuncs.pTriAPI)->Color4f)(fStack_3c,fStack_3c,fStack_3c,fStack_48);
                FUN_10050000((int)auStack_28);
                (*(gEngfuncs.pTriAPI)->End)();
                (*(gEngfuncs.pTriAPI)->RenderMode)(0);
                iVar9 = iStack_6c;
              }
            }
            if ((*(float *)(pcVar8 + 0xfc) != 0.0) && (*(float *)(pcVar8 + 0xd8) < 0.001)) {
              *(float *)(pcVar8 + 0xf8) =
                   local_74 * *(float *)(pcVar8 + 0xfc) + *(float *)(pcVar8 + 0xf8);
            }
            *(float *)(pcVar8 + 0xd8) = *(float *)(pcVar8 + 0xd8) - local_74;
            iVar7 = iStack_5c;
          }
          else {
            FUN_10050b20(param_1,(short)iVar9);
            iVar7 = iStack_5c;
          }
        }
        iStack_70 = iStack_70 + 300;
        iStack_6c = iVar9 + 1;
      } while (iStack_6c <= *(int *)((int)param_1 + 0xc10));
    }
    *(int *)((int)param_1 + 0xc10) = iVar7;
  }
  return;
}

/* 100524c0  FUN_100524c0  (602 bytes)
 * undefined FUN_100524c0(float * param_1, float * param_2, float param_3, float param_4)
 * called by: FUN_100450c0, FUN_100481b0
 */
void __thiscall FUN_100524c0(void *this,float *param_1,float *param_2,float param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  if (((param_1 != (float *)0x0) && (DAT_1018ca5a != '\0')) &&
     (iVar6 = 0, 0 < *(int *)((int)this + 0xc18))) {
    do {
      iVar4 = (int)*(short *)(*(int *)((int)this + 0xc14) + iVar6 * 2);
      iVar1 = *(int *)((int)this + 8) + iVar4 * 300;
      if (*(char *)(*(int *)((int)this + 8) + iVar4 * 300) != '\0') {
        local_54 = *(float *)(iVar1 + 0x14) - *param_1;
        local_50 = *(float *)(iVar1 + 0x18) - param_1[1];
        local_4c = *(float *)(iVar1 + 0x1c) - param_1[2];
        fVar7 = (float10)FUN_10029e40(&local_54);
        if (fVar7 <= (float10)param_3) {
          fVar2 = (float)(((float10)param_3 - fVar7) / (float10)param_3);
          if (param_2 != (float *)0x0) {
            local_54 = local_54 + *param_2;
            local_50 = local_50 + param_2[1];
            local_4c = local_4c + param_2[2];
            fVar3 = SQRT(local_54 * local_54 + local_50 * local_50 + local_4c * local_4c);
            if (fVar3 == 0.0) {
              local_3c = 0;
              local_38 = 0;
              local_34 = 0x3f800000;
            }
            else {
              fVar3 = 1.0 / fVar3;
              puVar5 = (undefined4 *)
                       FUN_10009190(local_c,fVar3 * local_54,local_50 * fVar3,local_4c * fVar3);
              FUN_10002610(&local_3c,puVar5);
            }
          }
          local_2c = local_50 * param_4;
          local_28 = local_4c * param_4;
          local_20 = local_2c * fVar2;
          local_1c = local_28 * fVar2;
          local_48 = local_54 * param_4 * fVar2 + *(float *)(iVar1 + 0x38);
          local_44 = local_20 + *(float *)(iVar1 + 0x3c);
          local_40 = local_1c + *(float *)(iVar1 + 0x40);
          *(float *)(iVar1 + 0x38) = local_48;
          *(float *)(iVar1 + 0x3c) = local_44;
          *(float *)(iVar1 + 0x40) = local_40;
          if (*(char *)(iVar1 + 1) != '\0') {
            if (*(float *)(iVar1 + 0x40) < 0.0) {
              fVar3 = *(float *)(iVar1 + 0x40);
              if (*(float *)(iVar1 + 0x40) <= 0.0) {
                fVar3 = -fVar3;
              }
              *(float *)(iVar1 + 0x40) = fVar3 * fVar2 * 0.5;
            }
            *(undefined1 *)(iVar1 + 1) = 0;
            *(float *)(iVar1 + 0x40) = fVar2 * 10.0 + *(float *)(iVar1 + 0x40);
          }
          local_14 = local_44;
          local_10 = local_40;
          if (*(char *)(iVar1 + 5) == '\x01') {
            fVar7 = (float10)(*gEngfuncs.pfnRandomFloat)(-90.0,90.0);
            *(float *)(iVar1 + 0x4c) =
                 (float)(fVar7 * (float10)fVar2 + (float10)*(float *)(iVar1 + 0x4c));
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)((int)this + 0xc18));
  }
  return;
}

/* 10052720  FUN_10052720  (1368 bytes)
 * undefined FUN_10052720(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, char param_8)
 * called by: FUN_100450c0
 */
void __thiscall
FUN_10052720(void *this,float param_1,float param_2,float param_3,float param_4,float param_5,
            float param_6,float param_7,char param_8)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float10 fVar9;
  float fVar10;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  int local_c0;
  float local_bc;
  void *local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  float local_84 [3];
  float local_78 [3];
  float local_6c [3];
  float local_60 [3];
  float local_54 [3];
  undefined1 local_48 [12];
  float local_3c [3];
  float local_30 [3];
  float local_24 [3];
  undefined1 local_18 [12];
  float local_c [3];
  
  if (DAT_1018ca5a != '\0') {
    local_b8 = this;
    puVar3 = (undefined4 *)
             FUN_10009190(local_90,param_4 + param_1,param_2 + param_5,param_3 + param_6);
    FUN_10002610(&local_e0,puVar3);
    puVar3 = (undefined4 *)FUN_10009190(&local_d0,local_e0 * 0.5,local_dc * 0.5,local_d8 * 0.5);
    FUN_10002610(&local_b4,puVar3);
    puVar3 = (undefined4 *)
             FUN_10009190(local_90,param_4 - param_1,param_5 - param_2,param_6 - param_3);
    FUN_10002610(&local_e0,puVar3);
    fVar9 = FUN_1003d5c0(&local_e0);
    if (fVar9 == (float10)0.0) {
      puVar3 = (undefined4 *)FUN_1001fb70(&local_ec,0,0,1);
    }
    else {
      fVar9 = (float10)1.0 / fVar9;
      puVar3 = (undefined4 *)
               FUN_10009190(local_9c,(float)((float10)local_e0 * fVar9),
                            (float)((float10)local_dc * fVar9),(float)((float10)local_d8 * fVar9));
    }
    FUN_10002610(&local_d0,puVar3);
    local_a4 = local_cc;
    local_a8 = local_d0;
    local_a0 = local_c8;
    puVar3 = (undefined4 *)
             FUN_10009190(local_9c,local_b4 - param_4,local_b0 - param_5,local_ac - param_6);
    FUN_10002610(&local_ec,puVar3);
    local_bc = SQRT(local_ec * local_ec + local_e8 * local_e8 + local_e4 * local_e4) - 100.0;
    puVar3 = (undefined4 *)
             FUN_10009190(local_9c,param_1 - param_4,param_2 - param_5,param_3 - param_6);
    FUN_10002610(&local_ec,puVar3);
    local_c4 = SQRT(local_ec * local_ec + local_e8 * local_e8 + local_e4 * local_e4);
    if ((0.0 < local_bc) && (local_c0 = 0, 0 < *(int *)((int)this + 0xc18))) {
      do {
        iVar4 = (int)*(short *)(*(int *)((int)this + 0xc14) + local_c0 * 2);
        iVar1 = *(int *)((int)this + 8) + iVar4 * 300;
        if (*(char *)(*(int *)((int)this + 8) + iVar4 * 300) != '\0') {
          pfVar8 = (float *)(iVar1 + 0x14);
          puVar3 = (undefined4 *)
                   FUN_10009190(local_9c,local_b4 - *pfVar8,local_b0 - *(float *)(iVar1 + 0x18),
                                local_ac - *(float *)(iVar1 + 0x1c));
          FUN_10002610(&local_ec,puVar3);
          if (SQRT(local_ec * local_ec + local_e8 * local_e8 + local_e4 * local_e4) < local_bc) {
            puVar3 = (undefined4 *)
                     FUN_10009190(local_48,*pfVar8 - param_1,*(float *)(iVar1 + 0x18) - param_2,
                                  *(float *)(iVar1 + 0x1c) - param_3);
            FUN_10002610(&local_d0,puVar3);
            local_d4 = SQRT(local_d0 * local_d0 + local_cc * local_cc + local_c8 * local_c8);
            puVar3 = (undefined4 *)
                     FUN_10009190(local_18,*pfVar8 - param_4,*(float *)(iVar1 + 0x18) - param_5,
                                  *(float *)(iVar1 + 0x1c) - param_6);
            FUN_10002610(&local_e0,puVar3);
            fVar2 = (SQRT(local_e0 * local_e0 + local_dc * local_dc + local_d8 * local_d8) +
                     local_d4 + local_c4) * 0.5;
            fVar2 = SQRT((fVar2 - local_d4) * (fVar2 - local_c4) * (fVar2 - local_c4) * fVar2);
            fVar2 = (fVar2 + fVar2) / local_c4;
            if (fVar2 < param_7) {
              fVar10 = *(float *)(iVar1 + 0x100);
              pfVar6 = local_60;
              fVar2 = param_7 - fVar2;
              puVar3 = (undefined4 *)(iVar1 + 0x38);
              local_d4 = fVar2;
              pvVar5 = (void *)FUN_1003d240(&local_a8,local_30,fVar2);
              pfVar6 = (float *)FUN_1003d240(pvVar5,pfVar6,fVar10);
              puVar7 = (undefined4 *)FUN_10035b10(puVar3,local_84,pfVar6);
              *puVar3 = *puVar7;
              *(undefined4 *)(iVar1 + 0x3c) = puVar7[1];
              *(undefined4 *)(iVar1 + 0x40) = puVar7[2];
              if (param_8 != '\0') {
                pfVar6 = local_78;
                pvVar5 = (void *)FUN_1003d200(pfVar8,local_6c,&param_1);
                pfVar8 = (float *)FUN_10051190(pvVar5,pfVar6);
                puVar7 = (undefined4 *)FUN_10051220(local_54,&local_a8,pfVar8);
                FUN_10002610(local_90,puVar7);
                fVar10 = *(float *)(iVar1 + 0x100);
                pfVar8 = local_3c;
                pvVar5 = (void *)FUN_1003d240(local_90,local_24,fVar2);
                pfVar8 = (float *)FUN_1003d240(pvVar5,pfVar8,fVar10);
                puVar7 = (undefined4 *)FUN_10035b10(puVar3,local_c,pfVar8);
                *puVar3 = *puVar7;
                *(undefined4 *)(iVar1 + 0x3c) = puVar7[1];
                *(undefined4 *)(iVar1 + 0x40) = puVar7[2];
              }
              if (*(char *)(iVar1 + 1) != '\0') {
                fVar2 = *(float *)(iVar1 + 0x40);
                if (*(float *)(iVar1 + 0x40) <= 0.0) {
                  fVar2 = -fVar2;
                }
                *(undefined1 *)(iVar1 + 1) = 0;
                *(float *)(iVar1 + 0x40) = fVar2 + 2.0;
              }
              this = local_b8;
              if (*(char *)(iVar1 + 5) == '\x01') {
                fVar9 = (float10)(*gEngfuncs.pfnRandomFloat)(-90.0,90.0);
                *(float *)(iVar1 + 0x4c) = (float)(fVar9 + (float10)*(float *)(iVar1 + 0x4c));
                this = local_b8;
              }
            }
          }
        }
        local_c0 = local_c0 + 1;
      } while (local_c0 < *(int *)((int)this + 0xc18));
    }
  }
  return;
}

/* 10052c80  FUN_10052c80  (836 bytes)
 * undefined FUN_10052c80(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8)
 * called by: FUN_100474b0
 */
void __thiscall
FUN_10052c80(void *this,float param_1,float param_2,float param_3,float param_4,float param_5,
            float param_6,float param_7,float param_8)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *this_00;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  float local_30 [3];
  float local_24 [3];
  undefined1 local_18 [12];
  float local_c [3];
  
  if (DAT_1018ca5a != '\0') {
    local_64 = SQRT(param_4 * param_4 + param_6 * param_6 + param_5 * param_5);
    if (local_64 == 0.0) {
      puVar2 = (undefined4 *)FUN_1001fb70(local_54,0,0,1);
    }
    else {
      fVar7 = 1.0 / local_64;
      puVar2 = (undefined4 *)FUN_10009190(local_48,param_4 * fVar7,param_5 * fVar7,param_6 * fVar7);
    }
    FUN_10002610(&local_98,puVar2);
    local_8c = local_98 * param_8;
    local_88 = local_94 * param_8;
    local_84 = local_90 * param_8;
    FUN_10002610(&local_70,&local_8c);
    local_7c = local_70 + param_1;
    local_78 = param_2 + local_6c;
    local_74 = param_3 + local_68;
    FUN_10002610(&local_60,&local_7c);
    iVar5 = 0;
    if (0 < *(int *)((int)this + 0xc18)) {
      do {
        iVar3 = (int)*(short *)(*(int *)((int)this + 0xc14) + iVar5 * 2);
        iVar1 = *(int *)((int)this + 8) + iVar3 * 300;
        if (*(char *)(*(int *)((int)this + 8) + iVar3 * 300) != '\0') {
          local_7c = local_60 - *(float *)(iVar1 + 0x14);
          local_78 = local_5c - *(float *)(iVar1 + 0x18);
          local_74 = local_58 - *(float *)(iVar1 + 0x1c);
          FUN_10002610(&local_8c,&local_7c);
          if (SQRT(local_8c * local_8c + local_88 * local_88 + local_84 * local_84) <= param_8) {
            puVar2 = (undefined4 *)
                     FUN_10009190(local_48,*(float *)(iVar1 + 0x14) - param_1,
                                  *(float *)(iVar1 + 0x18) - param_2,
                                  *(float *)(iVar1 + 0x1c) - param_3);
            FUN_10002610(&local_70,puVar2);
            local_98 = local_70;
            local_80 = local_64;
            local_94 = local_6c;
            local_90 = local_68;
            if (local_64 <= param_7) {
              fVar6 = FUN_1003d5c0(&local_98);
              if (fVar6 == (float10)0.0) {
                puVar2 = (undefined4 *)FUN_1001fb70(local_18,0,0,1);
              }
              else {
                fVar6 = (float10)1.0 / fVar6;
                puVar2 = (undefined4 *)
                         FUN_10009190(local_3c,(float)(fVar6 * (float10)local_98),
                                      (float)((float10)local_94 * fVar6),
                                      (float)((float10)local_90 * fVar6));
              }
              FUN_10002610(local_54,puVar2);
              pfVar4 = local_30;
              fVar7 = 4.0;
              this_00 = (void *)FUN_1003d240(local_54,local_24,param_7 - local_80);
              pfVar4 = (float *)FUN_1003efb0(this_00,pfVar4,fVar7);
              puVar2 = (undefined4 *)FUN_10035b10((undefined4 *)(iVar1 + 0x38),local_c,pfVar4);
              *(undefined4 *)(iVar1 + 0x38) = *puVar2;
              *(undefined4 *)(iVar1 + 0x3c) = puVar2[1];
              *(undefined4 *)(iVar1 + 0x40) = puVar2[2];
              if (*(char *)(iVar1 + 1) != '\0') {
                fVar7 = *(float *)(iVar1 + 0x40);
                if (*(float *)(iVar1 + 0x40) <= 0.0) {
                  fVar7 = -fVar7;
                }
                *(undefined1 *)(iVar1 + 1) = 0;
                *(float *)(iVar1 + 0x40) = fVar7 + 2.0;
              }
              if (*(char *)(iVar1 + 5) == '\x01') {
                fVar6 = (float10)(*gEngfuncs.pfnRandomFloat)(-90.0,90.0);
                *(float *)(iVar1 + 0x4c) = (float)(fVar6 + (float10)*(float *)(iVar1 + 0x4c));
              }
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)((int)this + 0xc18));
    }
  }
  return;
}

/* 10052fd0  FUN_10052fd0  (551 bytes)
 * undefined FUN_10052fd0(void)
 * called by: FUN_10053660
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10052fd0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined1 local_44 [68];
  
  if ((-60.0 <= *(float *)(DAT_100e52fc + 0x44)) && (*(float *)(DAT_100e52fc + 0x44) <= 60.0)) {
    DAT_1018aa24 = *(float *)(DAT_100e52fc + 0x44) < -30.0;
    DAT_1018a8c4 = *(int *)(DAT_100e52fc + 0xbc);
    *(undefined4 *)(DAT_100e52fc + 0xbc) = 2;
    _DAT_1018a854 = *(float *)(DAT_100e52fc + 0x38);
    _DAT_1018a858 = *(float *)(DAT_100e52fc + 0x3c);
    _DAT_1018a85c =
         (float)(-(DAT_1018aa24 != '\0') & 0x28) + *(float *)(DAT_100e52fc + 0x88) +
         *(float *)(DAT_100e52fc + 0x40);
    _DAT_1018a8c8 = *(float *)(DAT_100e52fc + 0x14) * 64.0 + _DAT_1018a854;
    _DAT_1018a8cc = *(float *)(DAT_100e52fc + 0x18) * 64.0 + _DAT_1018a858;
    _DAT_1018a8d0 = _DAT_1018a85c;
    puVar1 = (undefined4 *)
             (**(code **)(DAT_100e52fc + 0x4f580))
                       (local_44,&DAT_1018a854,&DAT_1018a8c8,0,0xffffffff);
    puVar3 = &DAT_1018a8f8;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    if (_DAT_1018a908 == 1.0) {
      _DAT_1018a85c =
           *(float *)(DAT_100e52fc + 0x4f4fc + DAT_1018a8c4 * 0xc) + *(float *)(DAT_100e52fc + 0x40)
      ;
      _DAT_1018a8c8 = *(float *)(DAT_100e52fc + 0x14) * 32.0 + _DAT_1018a854;
      _DAT_1018a8cc = *(float *)(DAT_100e52fc + 0x18) * 32.0 + _DAT_1018a858;
      _DAT_1018a8d0 = _DAT_1018a85c;
      *(undefined4 *)(DAT_100e52fc + 0xbc) = 2;
      puVar1 = (undefined4 *)
               (**(code **)(DAT_100e52fc + 0x4f580))
                         (local_44,&DAT_1018a854,&DAT_1018a8c8,0,0xffffffff);
      puVar3 = &DAT_1018a8f8;
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      }
      if ((_DAT_1018a908 != 1.0) &&
         (fVar4 = FUN_10058390((float *)(DAT_100e52fc + 0x5c)),
         fVar4 < (float10)*(float *)(DAT_100e52fc + 500) * (float10)0.5)) {
        *(undefined4 *)(DAT_100e52fc + 0xe0) = 0xffffffff;
        *(float *)(DAT_100e52fc + 100) =
             *(float *)(DAT_100e52fc + 0x10) * 16.0 * 100.0 + *(float *)(DAT_100e52fc + 100);
        FUN_1002b2b0();
      }
    }
    *(int *)(DAT_100e52fc + 0xbc) = DAT_1018a8c4;
    FUN_1002cfb0(1);
    FUN_1002c1a0();
  }
  return;
}

/* 10053200  FUN_10053200  (425 bytes)
 * undefined FUN_10053200(void)
 * called by: FUN_10053660
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10053200(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_44 [68];
  
  iVar5 = DAT_100e52fc;
  DAT_1018a860 = *(undefined4 *)(DAT_100e52fc + 0x38);
  DAT_1018a864 = *(undefined4 *)(DAT_100e52fc + 0x3c);
  _DAT_1018a868 = *(undefined4 *)(DAT_100e52fc + 0x40);
  if (*(int *)(DAT_100e52fc + 0xe0) != -1) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 * 4;
      iVar2 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      _DAT_1018a850 = iVar3;
      *(float *)(&DAT_1018a85c + iVar3 * 4) =
           (*(float *)(iVar5 + 0x4f500 + iVar1) - *(float *)(iVar5 + 0x4f4f4 + iVar2)) +
           *(float *)(&DAT_1018a85c + iVar3 * 4);
    } while (iVar3 < 3);
  }
  puVar4 = (undefined4 *)
           (**(code **)(iVar5 + 0x4f580))(local_44,&DAT_1018a860,&DAT_1018a860,0,0xffffffff);
  iVar5 = DAT_100e52fc;
  puVar6 = &DAT_1018a950;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  if ((*(byte *)(iVar5 + 0x45476) & 4) != 0) {
    *(undefined4 *)(iVar5 + 0xbc) = 1;
    *(undefined4 *)(DAT_100e52fc + 0x88) = 0x41800000;
    *(uint *)(DAT_100e52fc + 0x208) = *(uint *)(DAT_100e52fc + 0x208) & 0xfffffff7;
    return;
  }
  if (DAT_1018a954 != 0) {
    *(undefined4 *)(iVar5 + 0xbc) = 1;
    *(uint *)(DAT_100e52fc + 0xb8) = *(uint *)(DAT_100e52fc + 0xb8) | 0x4000;
    return;
  }
  *(undefined4 *)(iVar5 + 0xbc) = 0;
  puVar4 = (undefined4 *)
           (**(code **)(DAT_100e52fc + 0x4f580))(local_44,&DAT_1018a860,&DAT_1018a860,0,0xffffffff);
  puVar6 = &DAT_1018a950;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  if (DAT_1018a954 != 0) {
    *(undefined4 *)(DAT_100e52fc + 0xbc) = 1;
    return;
  }
  *(undefined4 *)(DAT_100e52fc + 0x88) = 0x41e00000;
  *(undefined4 *)(DAT_100e52fc + 0x38) = DAT_1018a860;
  *(undefined4 *)(DAT_100e52fc + 0x3c) = DAT_1018a864;
  *(undefined4 *)(DAT_100e52fc + 0x40) = _DAT_1018a868;
  FUN_1002cfb0(1);
  FUN_1002c1a0();
  *(uint *)(DAT_100e52fc + 0x208) = *(uint *)(DAT_100e52fc + 0x208) & 0xfffffff7;
  return;
}

/* 100533b0  FUN_100533b0  (127 bytes)
 * undefined FUN_100533b0(void)
 * called by: FUN_10053660
 */
void FUN_100533b0(void)

{
  if (*(int *)(DAT_100e52fc + 0xbc) != 1) {
    *(undefined4 *)(DAT_100e52fc + 0xbc) = 1;
    *(uint *)(DAT_100e52fc + 0xb8) = *(uint *)(DAT_100e52fc + 0xb8) | 0x4000;
    if (*(int *)(DAT_100e52fc + 0xe0) != -1) {
      DAT_1018aa2c = 0;
      do {
        *(float *)(DAT_100e52fc + 0x38 + DAT_1018aa2c * 4) =
             *(float *)(DAT_100e52fc + 0x38 + DAT_1018aa2c * 4) -
             (*(float *)(DAT_100e52fc + 0x4f500 + DAT_1018aa2c * 4) -
             *(float *)(DAT_100e52fc + 0x4f4f4 + DAT_1018aa2c * 4));
        DAT_1018aa2c = DAT_1018aa2c + 1;
      } while (DAT_1018aa2c < 3);
      FUN_1002cfb0(1);
      FUN_1002c1a0();
      return;
    }
  }
  return;
}

/* 10053430  FUN_10053430  (136 bytes)
 * undefined FUN_10053430(void)
 * called by: FUN_10053660
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10053430(void)

{
  CBasePlayerItem *this;
  
  *(undefined4 *)(DAT_100e52fc + 0xe0) = 0xffffffff;
  if ((*(uint *)(DAT_100e52fc + 0x208) & 0x1000) != 0) {
    _DAT_1018a8e0 = 210.0;
    DAT_1018a94c = 0;
    do {
      *(float *)(DAT_100e52fc + 0x5c + DAT_1018a94c * 4) =
           -(_DAT_1018a8e0 * *(float *)(DAT_100e52fc + 0x14 + DAT_1018a94c * 4));
      DAT_1018a94c = DAT_1018a94c + 1;
    } while (DAT_1018a94c < 2);
    *(undefined4 *)(DAT_100e52fc + 100) = 0x436ca4a8;
    *(uint *)(DAT_100e52fc + 0x208) = *(uint *)(DAT_100e52fc + 0x208) & 0xffffefff;
  }
  FUN_1002b2b0();
  CBasePlayerItem::AttemptToMaterialize(this);
  return;
}

/* 100534c0  FUN_100534c0  (72 bytes)
 * undefined FUN_100534c0(void)
 * called by: FUN_10053660
 */
void FUN_100534c0(void)

{
  CBasePlayerItem *this;
  
  *(undefined4 *)(DAT_100e52fc + 0xe0) = 0xffffffff;
  if ((*(uint *)(DAT_100e52fc + 0x208) & 0x8000) != 0) {
    *(undefined4 *)(DAT_100e52fc + 100) = 0x43a754fe;
    *(uint *)(DAT_100e52fc + 0x208) = *(uint *)(DAT_100e52fc + 0x208) & 0xffff7fff;
  }
  FUN_1002b2b0();
  CBasePlayerItem::AttemptToMaterialize(this);
  return;
}

/* 10053510  FUN_10053510  (325 bytes)
 * undefined FUN_10053510(void)
 * called by: FUN_10053660
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10053510(void)

{
  uint uVar1;
  CBasePlayerItem *this;
  
  if ((*(uint *)(DAT_100e52fc + 0x208) & 0x100) == 0) {
    if ((*(uint *)(DAT_100e52fc + 0x208) & 0x40) == 0) {
      _DAT_1018a8f4 = 100;
      DAT_1018a870 = 10;
      uVar1 = *(uint *)(DAT_100e52fc + 0x208) & 0xffffff7f;
    }
    else {
      _DAT_1018a8f4 = 0x5a;
      DAT_1018a870 = 0x32;
      uVar1 = *(uint *)(DAT_100e52fc + 0x208) & 0xffffffbf;
    }
  }
  else {
    _DAT_1018a8f4 = 0x5a;
    DAT_1018a870 = 0x19;
    uVar1 = *(uint *)(DAT_100e52fc + 0x208) & 0xfffffeff;
  }
  *(uint *)(DAT_100e52fc + 0x208) = uVar1;
  _DAT_1018a940 = *(float *)(DAT_100e52fc + 0x5c);
  _DAT_1018a944 = *(float *)(DAT_100e52fc + 0x60);
  _DAT_1018a948 = *(undefined4 *)(DAT_100e52fc + 100);
  FUN_10029e40((float *)&DAT_1018a940);
  if ((*(uint *)(DAT_100e52fc + 0x208) & 0x800000) != 0) {
    FUN_100583e0((float *)(DAT_100e52fc + 0x14),3.0,(float *)&DAT_1018a940);
  }
  *(float *)(DAT_100e52fc + 0x5c) =
       (float)_DAT_1018a8f4 * _DAT_1018a940 + *(float *)(DAT_100e52fc + 0x5c);
  *(float *)(DAT_100e52fc + 0x60) =
       (float)_DAT_1018a8f4 * _DAT_1018a944 + *(float *)(DAT_100e52fc + 0x60);
  *(float *)(DAT_100e52fc + 100) = SQRT((float)(DAT_1018a870 * 0x640));
  *(undefined4 *)(DAT_100e52fc + 0xe0) = 0xffffffff;
  *(uint *)(DAT_100e52fc + 0x208) = *(uint *)(DAT_100e52fc + 0x208) & 0xff7fffff;
  FUN_1002b2b0();
  CBasePlayerItem::AttemptToMaterialize(this);
  return;
}

/* 10053660  FUN_10053660  (279 bytes)
 * undefined FUN_10053660(void)
 * called by: FUN_1002e330
 */
void FUN_10053660(void)

{
  if (((*(byte *)(DAT_100e52fc + 0x45476) & 2) != 0) && (*(int *)(DAT_100e52fc + 0xe0) == -1)) {
    FUN_10052fd0();
  }
  if ((*(byte *)(DAT_100e52fc + 0x208) & 1) != 0) {
    *(float *)(DAT_100e52fc + 0x45468) = *(float *)(DAT_100e52fc + 0x45468) * 0.5;
    *(float *)(DAT_100e52fc + 0x4546c) = *(float *)(DAT_100e52fc + 0x4546c) * 0.5;
    *(float *)(DAT_100e52fc + 0x45470) = *(float *)(DAT_100e52fc + 0x45470) * 0.5;
  }
  if ((*(byte *)(DAT_100e52fc + 0x208) & 0x20) != 0) {
    *(undefined4 *)(DAT_100e52fc + 0x45468) = 0;
    *(float *)(DAT_100e52fc + 0x4546c) = *(float *)(DAT_100e52fc + 0x4546c) * 0.3;
    *(float *)(DAT_100e52fc + 0x45470) = *(float *)(DAT_100e52fc + 0x45470) * 0.3;
  }
  if ((*(uint *)(DAT_100e52fc + 0x208) & 0x1c0) != 0) {
    FUN_10053510();
  }
  if ((*(uint *)(DAT_100e52fc + 0x208) & 0x7000) != 0) {
    FUN_10053430();
  }
  if ((*(uint *)(DAT_100e52fc + 0x208) & 0x8000) != 0) {
    FUN_100534c0();
  }
  if ((*(byte *)(DAT_100e52fc + 0x208) & 4) != 0) {
    FUN_100533b0();
  }
  if ((*(byte *)(DAT_100e52fc + 0x208) & 8) != 0) {
    FUN_10053200();
    return;
  }
  return;
}

/* 10053780  FUN_10053780  (731 bytes)
 * undefined FUN_10053780(void)
 * called by: FUN_1002e330
 */
void FUN_10053780(void)

{
  undefined4 uVar1;
  byte_conflict *pbVar2;
  int iVar3;
  void *this;
  undefined4 uVar4;
  
  if (*(int *)(DAT_100e52fc + 0xd0) != 0) {
    *(uint *)(DAT_100e52fc + 200) = *(uint *)(DAT_100e52fc + 200) | 2;
    return;
  }
  if ((*(uint *)(DAT_100e52fc + 0x208) & 0x34) != 0) {
    return;
  }
  if ((*(uint *)(DAT_100e52fc + 0x208) & 0x30c00) != 0) {
    return;
  }
  if (*(float *)(DAT_100e52fc + 0xcc) != 0.0) {
    *(float *)(DAT_100e52fc + 0xcc) =
         *(float *)(DAT_100e52fc + 0xcc) - (float)*(byte *)(DAT_100e52fc + 0x4545a);
    if (0.0 <= *(float *)(DAT_100e52fc + 0xcc)) {
      return;
    }
    *(undefined4 *)(DAT_100e52fc + 0xcc) = 0;
    return;
  }
  if (1 < *(int *)(DAT_100e52fc + 0xe4)) {
    *(undefined4 *)(DAT_100e52fc + 0xe0) = 0xffffffff;
    if (*(int *)(DAT_100e52fc + 0xe8) == -3) {
      *(undefined4 *)(DAT_100e52fc + 100) = 0x42c80000;
    }
    else if (*(int *)(DAT_100e52fc + 0xe8) == -4) {
      *(undefined4 *)(DAT_100e52fc + 100) = 0x42a00000;
    }
    else {
      *(undefined4 *)(DAT_100e52fc + 100) = 0x42480000;
    }
    if (0.0 < *(float *)(DAT_100e52fc + 0xac)) {
      return;
    }
    *(undefined4 *)(DAT_100e52fc + 0xac) = 0x447a0000;
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
      return;
    default:
      return;
    }
  }
  if (*(int *)(DAT_100e52fc + 0xe0) == -1) {
    *(uint *)(DAT_100e52fc + 200) = *(uint *)(DAT_100e52fc + 200) | 2;
    return;
  }
  if ((*(byte *)(DAT_100e52fc + 200) & 2) != 0) {
    return;
  }
  *(undefined4 *)(DAT_100e52fc + 0xe0) = 0xffffffff;
  FUN_1002dba0();
  uVar4 = 0x3f800000;
  uVar1 = FUN_1002ab20(*(undefined1 *)(DAT_100e52fc + 0x1f0));
  FUN_1002a3a0(uVar1,uVar4);
  pbVar2 = (byte_conflict *)
           (**(code **)(DAT_100e52fc + 0x4f554))(DAT_100e52fc + 0x4f3f0,&DAT_10095f64);
  iVar3 = FUN_1006c042(this,pbVar2);
  DAT_1018a8f0 = (uint)(iVar3 == 1);
  if ((((*(int *)(DAT_100e52fc + 0x90) == 0) && ((*(uint *)(DAT_100e52fc + 0xb8) & 0x4000) == 0)) ||
      (iVar3 != 1)) ||
     (((*(byte *)(DAT_100e52fc + 0x45476) & 4) == 0 || (*(float *)(DAT_100e52fc + 0x8c) <= 0.0)))) {
    DAT_1018a8f0 = 0;
  }
  else {
    *(undefined4 *)(DAT_100e52fc + 100) = 0x43c80000;
    *(uint *)(DAT_100e52fc + 0x208) = *(uint *)(DAT_100e52fc + 0x208) | 0x200000;
    if (DAT_1018a8f0 != 0) goto LAB_10053a48;
  }
  *(undefined4 *)(DAT_100e52fc + 100) = 0x436ca4a8;
LAB_10053a48:
  FUN_1002b2b0();
  *(uint *)(DAT_100e52fc + 200) = *(uint *)(DAT_100e52fc + 200) | 2;
  return;
}

/* 10053a70  FUN_10053a70  (766 bytes)
 * undefined FUN_10053a70(void)
 * called by: FUN_1002e330
 */
void FUN_10053a70(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  float10 fVar5;
  float local_c;
  float local_8;
  float local_4;
  
  fVar3 = SQRT((float)DAT_100e52fc[0x1151c] * (float)DAT_100e52fc[0x1151c] +
               (float)DAT_100e52fc[0x1151a] * (float)DAT_100e52fc[0x1151a] +
               (float)DAT_100e52fc[0x1151b] * (float)DAT_100e52fc[0x1151b]);
  fVar1 = (float)DAT_100e52fc[0x7e];
  if (fVar1 != 0.0) {
    if ((float)DAT_100e52fc[0x7d] <= fVar1) {
      fVar1 = (float)DAT_100e52fc[0x7d];
    }
    DAT_100e52fc[0x7d] = (int)fVar1;
  }
  if (((fVar3 != 0.0) && ((float)DAT_100e52fc[0x7d] < fVar3)) &&
     (fVar3 = (float)DAT_100e52fc[0x7d] / fVar3, 0 < DAT_100e52fc[0x7f])) {
    DAT_100e52fc[0x1151a] = (int)(fVar3 * (float)DAT_100e52fc[0x1151a]);
    DAT_100e52fc[0x1151b] = (int)(fVar3 * (float)DAT_100e52fc[0x1151b]);
    DAT_100e52fc[0x1151c] = (int)(fVar3 * (float)DAT_100e52fc[0x1151c]);
  }
  if ((((DAT_100e52fc[0x2e] & 0x1001000U) != 0) || (DAT_100e52fc[0x34] != 0)) ||
     (((DAT_100e52fc[0x82] & 0x10U) != 0 || ((DAT_100e52fc[0x82] & 0x10c00U) != 0)))) {
    DAT_100e52fc[0x1151a] = 0;
    DAT_100e52fc[0x1151b] = 0;
    DAT_100e52fc[0x1151c] = 0;
  }
  if ((DAT_100e52fc[0x82] & 0x100000U) != 0) {
    DAT_100e52fc[0x1151a] = (int)((float)DAT_100e52fc[0x1151a] * 0.5);
    DAT_100e52fc[0x1151b] = (int)((float)DAT_100e52fc[0x1151b] * 0.25);
    DAT_100e52fc[0x1151c] = (int)((float)DAT_100e52fc[0x1151c] * 0.25);
    if ((*(byte *)((int)DAT_100e52fc + 0x45476) & 2) == 0) {
      DAT_100e52fc[0x30] = 0x3f800000;
    }
    else if (0.0 <= (float)DAT_100e52fc[0x19]) {
      DAT_100e52fc[0x30] = 0x3e99999a;
    }
    else {
      DAT_100e52fc[0x30] = 0x3f400000;
    }
  }
  FUN_1002e1c0((float *)(DAT_100e52fc + 0x28));
  if ((DAT_100e52fc[0x34] == 0) && ((*(byte *)(DAT_100e52fc + 0x82) & 2) == 0)) {
    local_c = (float)DAT_100e52fc[0x11517] + (float)DAT_100e52fc[0x28];
    local_8 = (float)DAT_100e52fc[0x11518] + (float)DAT_100e52fc[0x29];
    local_4 = (float)DAT_100e52fc[0x11519] + (float)DAT_100e52fc[0x2a];
    fVar5 = FUN_1002e120(&local_c,(float *)(DAT_100e52fc + 0x17),
                         *(float *)(DAT_100e52fc[0x13d3c] + 100),
                         *(float *)(DAT_100e52fc[0x13d3c] + 0x68));
    DAT_100e52fc[0x13] = (int)(float)(fVar5 * (float10)4.0);
    DAT_100e52fc[0x11] = (int)local_c;
    DAT_100e52fc[0x12] = (int)local_8;
    piVar4 = DAT_100e52fc;
    iVar2 = *DAT_100e52fc;
    if ((-1 < iVar2) && (iVar2 < 0x20)) {
      *(int *)(&DAT_1018a9a4 + iVar2 * 4) = DAT_100e52fc[0x12];
    }
  }
  else {
    iVar2 = *DAT_100e52fc;
    piVar4 = DAT_100e52fc;
    if ((-1 < iVar2) && (iVar2 < 0x20)) {
      DAT_100e52fc[0x12] = *(int *)(&DAT_1018a9a4 + iVar2 * 4);
      piVar4 = DAT_100e52fc;
    }
  }
  if (piVar4[0x34] != 0) {
    piVar4[0x22] = -0x3f000000;
    piVar4 = DAT_100e52fc;
  }
  if (180.0 < (float)piVar4[0x12]) {
    piVar4[0x12] = (int)((float)piVar4[0x12] - 360.0);
  }
  return;
}

/* 10053d70  FUN_10053d70  (603 bytes)
 * undefined FUN_10053d70(void)
 * called by: FUN_1002e330
 */
void FUN_10053d70(void)

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
  
  uVar1 = *(ushort *)(DAT_100e52fc + 0x45476);
  uVar2 = *(uint *)(DAT_100e52fc + 200);
  if ((uVar1 & 4) == 0) {
    uVar6 = uVar2 & 0xfffffffb;
  }
  else {
    uVar6 = uVar2 | 4;
  }
  *(uint *)(DAT_100e52fc + 200) = uVar6;
  if (((*(uint *)(DAT_100e52fc + 0x208) & 0x3c) == 0) &&
     ((*(uint *)(DAT_100e52fc + 0x208) & 0x30c00) == 0)) {
    if ((*(int *)(DAT_100e52fc + 0x204) == 0) && (*(int *)(DAT_100e52fc + 0xd0) == 0)) {
      if ((*(uint *)(DAT_100e52fc + 0xb8) & 0x4000) != 0) {
        *(float *)(DAT_100e52fc + 0x45468) = *(float *)(DAT_100e52fc + 0x45468) * 0.333;
        *(float *)(DAT_100e52fc + 0x4546c) = *(float *)(DAT_100e52fc + 0x4546c) * 0.333;
        *(float *)(DAT_100e52fc + 0x45470) = *(float *)(DAT_100e52fc + 0x45470) * 0.333;
      }
      uVar5 = *(ushort *)(DAT_100e52fc + 0x45476) & 4;
      if (((uVar5 != 0) || (*(int *)(DAT_100e52fc + 0x90) != 0)) ||
         ((*(uint *)(DAT_100e52fc + 0xb8) & 0x4000) != 0)) {
        if (uVar5 == 0) goto LAB_10053fb8;
        if ((((uVar2 ^ uVar1) & (uint)uVar1 & 4) != 0) &&
           ((*(uint *)(DAT_100e52fc + 0xb8) & 0x4000) == 0)) {
          *(undefined4 *)(DAT_100e52fc + 0x8c) = 0x447a0000;
          *(undefined4 *)(DAT_100e52fc + 0x90) = 1;
        }
        fVar3 = *(float *)(DAT_100e52fc + 0x8c) * 0.001;
        fVar4 = 1.0 - fVar3;
        if (fVar4 < 0.0) {
          fVar4 = 0.0;
        }
        if (*(int *)(DAT_100e52fc + 0x90) != 0) {
          if ((0.6 < fVar3) && (*(int *)(DAT_100e52fc + 0xe0) != -1)) {
            fVar9 = FUN_1002cf90(fVar4,2.5);
            *(float *)(DAT_100e52fc + 0x88) =
                 (float)(fVar9 * (float10)-2.0 + ((float10)1.0 - fVar9) * (float10)28.0);
            return;
          }
          *(undefined4 *)(DAT_100e52fc + 0xbc) = 1;
          *(undefined4 *)(DAT_100e52fc + 0x88) = 0x41800000;
          *(uint *)(DAT_100e52fc + 0xb8) = *(uint *)(DAT_100e52fc + 0xb8) | 0x4000;
          *(undefined4 *)(DAT_100e52fc + 0x90) = 0;
          if (*(int *)(DAT_100e52fc + 0xe0) != -1) {
            iVar7 = 0x38;
            do {
              iVar8 = iVar7 + 4;
              *(float *)(iVar7 + DAT_100e52fc) =
                   *(float *)(iVar7 + DAT_100e52fc) -
                   (*(float *)(iVar7 + 0x4f4c8 + DAT_100e52fc) -
                   *(float *)(iVar7 + 0x4f4bc + DAT_100e52fc));
              iVar7 = iVar8;
            } while (iVar8 < 0x44);
            FUN_1002cfb0(1);
            FUN_1002c1a0();
            return;
          }
        }
      }
    }
    else if ((*(uint *)(DAT_100e52fc + 0xb8) & 0x4000) != 0) {
LAB_10053fb8:
      FUN_1002d050();
      return;
    }
  }
  return;
}

/* 10053fd0  FUN_10053fd0  (1333 bytes)
 * undefined FUN_10053fd0(void)
 * called by: FUN_1002e330
 */
void FUN_10053fd0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
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
  undefined4 uStack_a8;
  float local_a4 [4];
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88 [4];
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_60;
  undefined1 auStack_44 [68];
  
  local_e4 = *(float *)(DAT_100e52fc + 0x45468);
  if (local_e4 < 0.0) {
    local_e4 = local_e4 * 0.8;
  }
  local_a4[3] = *(float *)(DAT_100e52fc + 0x4546c);
  *(undefined4 *)(DAT_100e52fc + 0x1c) = 0;
  *(undefined4 *)(DAT_100e52fc + 0x28) = 0;
  FUN_10029e40((float *)(DAT_100e52fc + 0x14));
  FUN_10029e40((float *)(DAT_100e52fc + 0x20));
  pfVar4 = (float *)(DAT_100e52fc + 0x14);
  iVar8 = 2;
  pfVar6 = local_a4;
  do {
    pfVar1 = pfVar4 + 3;
    fVar2 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    iVar8 = iVar8 + -1;
    *pfVar6 = local_e4 * fVar2 + local_a4[3] * *pfVar1;
    pfVar6 = pfVar6 + 1;
  } while (iVar8 != 0);
  local_a4[2] = 0.0;
  local_94 = local_a4[0];
  local_90 = local_a4[1];
  local_8c = 0;
  fVar10 = (float10)FUN_10029e40(&local_94);
  local_e4 = (float)fVar10;
  if (*(float *)(DAT_100e52fc + 500) < local_e4) {
    FUN_100583e0(local_a4,*(float *)(DAT_100e52fc + 500) / local_e4,local_a4);
    local_e4 = *(float *)(DAT_100e52fc + 500);
  }
  *(undefined4 *)(DAT_100e52fc + 100) = 0;
  FUN_1002b830(&local_94,local_e4,*(float *)(*(int *)(DAT_100e52fc + 0x4f4f0) + 0x10));
  *(undefined4 *)(DAT_100e52fc + 100) = 0;
  *(float *)(DAT_100e52fc + 0x5c) =
       *(float *)(DAT_100e52fc + 0x74) + *(float *)(DAT_100e52fc + 0x5c);
  *(float *)(DAT_100e52fc + 0x60) =
       *(float *)(DAT_100e52fc + 0x78) + *(float *)(DAT_100e52fc + 0x60);
  *(float *)(DAT_100e52fc + 100) = *(float *)(DAT_100e52fc + 0x7c) + *(float *)(DAT_100e52fc + 100);
  fVar10 = FUN_10058390((float *)(DAT_100e52fc + 0x5c));
  if ((float10)1.0 <= fVar10) {
    iVar8 = *(int *)(DAT_100e52fc + 0xe0);
    local_e0 = *(float *)(DAT_100e52fc + 0x5c) * *(float *)(DAT_100e52fc + 0x10) +
               *(float *)(DAT_100e52fc + 0x38);
    local_dc = *(float *)(DAT_100e52fc + 0x60) * *(float *)(DAT_100e52fc + 0x10) +
               *(float *)(DAT_100e52fc + 0x3c);
    local_d8 = *(float *)(DAT_100e52fc + 0x40);
    piVar5 = (int *)(**(code **)(DAT_100e52fc + 0x4f580))
                              (local_88,(float *)(DAT_100e52fc + 0x38),&local_e0,0,0xffffffff);
    piVar9 = local_88;
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar9 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar9 = piVar9 + 1;
    }
    if (fStack_78 == 1.0) {
      *(undefined4 *)(DAT_100e52fc + 0x38) = uStack_74;
      *(undefined4 *)(DAT_100e52fc + 0x3c) = uStack_70;
      *(undefined4 *)(DAT_100e52fc + 0x40) = uStack_6c;
      return;
    }
    if (((iVar8 == -1) && (*(int *)(DAT_100e52fc + 0xe4) == 0)) ||
       (*(float *)(DAT_100e52fc + 0xcc) != 0.0)) {
      return;
    }
    fStack_d4 = *(float *)(DAT_100e52fc + 0x38);
    fStack_d0 = *(float *)(DAT_100e52fc + 0x3c);
    uStack_cc = *(undefined4 *)(DAT_100e52fc + 0x40);
    uStack_b0 = *(undefined4 *)(DAT_100e52fc + 0x5c);
    uStack_ac = *(undefined4 *)(DAT_100e52fc + 0x60);
    uStack_a8 = *(undefined4 *)(DAT_100e52fc + 100);
    FUN_1002b310();
    fStack_c8 = *(float *)(DAT_100e52fc + 0x38);
    fStack_c4 = *(float *)(DAT_100e52fc + 0x3c);
    uStack_c0 = *(undefined4 *)(DAT_100e52fc + 0x40);
    uStack_bc = *(undefined4 *)(DAT_100e52fc + 0x5c);
    uStack_b8 = *(undefined4 *)(DAT_100e52fc + 0x60);
    uStack_b4 = *(undefined4 *)(DAT_100e52fc + 100);
    *(float *)(DAT_100e52fc + 0x38) = fStack_d4;
    *(float *)(DAT_100e52fc + 0x3c) = fStack_d0;
    *(undefined4 *)(DAT_100e52fc + 0x40) = uStack_cc;
    *(undefined4 *)(DAT_100e52fc + 0x5c) = uStack_b0;
    *(undefined4 *)(DAT_100e52fc + 0x60) = uStack_ac;
    *(undefined4 *)(DAT_100e52fc + 100) = uStack_a8;
    local_e0 = *(float *)(DAT_100e52fc + 0x38);
    local_dc = *(float *)(DAT_100e52fc + 0x3c);
    local_d8 = *(float *)(DAT_100e52fc + 0x40) + *(float *)(*(int *)(DAT_100e52fc + 0x4f4f0) + 0x30)
    ;
    piVar5 = (int *)(**(code **)(DAT_100e52fc + 0x4f580))
                              (auStack_44,DAT_100e52fc + 0x38,&local_e0,0,0xffffffff);
    piVar9 = local_88;
    for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar9 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar9 = piVar9 + 1;
    }
    if ((local_88[1] == 0) && (local_88[0] == 0)) {
      *(undefined4 *)(DAT_100e52fc + 0x38) = uStack_74;
      *(undefined4 *)(DAT_100e52fc + 0x3c) = uStack_70;
      *(undefined4 *)(DAT_100e52fc + 0x40) = uStack_6c;
    }
    FUN_1002b310();
    local_e0 = *(float *)(DAT_100e52fc + 0x38);
    local_dc = *(float *)(DAT_100e52fc + 0x3c);
    local_d8 = *(float *)(DAT_100e52fc + 0x40) - *(float *)(*(int *)(DAT_100e52fc + 0x4f4f0) + 0x30)
    ;
    piVar5 = (int *)(**(code **)(DAT_100e52fc + 0x4f580))
                              (auStack_44,DAT_100e52fc + 0x38,&local_e0,0,0xffffffff);
    piVar9 = local_88;
    for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar9 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar9 = piVar9 + 1;
    }
    if (0.7 <= fStack_60) {
      if ((local_88[1] == 0) && (local_88[0] == 0)) {
        *(undefined4 *)(DAT_100e52fc + 0x38) = uStack_74;
        *(undefined4 *)(DAT_100e52fc + 0x3c) = uStack_70;
        *(undefined4 *)(DAT_100e52fc + 0x40) = uStack_6c;
      }
      *(undefined4 *)(DAT_100e52fc + 0x2c) = *(undefined4 *)(DAT_100e52fc + 0x38);
      *(undefined4 *)(DAT_100e52fc + 0x30) = *(undefined4 *)(DAT_100e52fc + 0x3c);
      *(undefined4 *)(DAT_100e52fc + 0x34) = *(undefined4 *)(DAT_100e52fc + 0x40);
      fVar3 = *(float *)(DAT_100e52fc + 0x30) - fStack_d0;
      fVar2 = *(float *)(DAT_100e52fc + 0x2c) - fStack_d4;
      if ((fStack_c4 - fStack_d0) * (fStack_c4 - fStack_d0) +
          (fStack_c8 - fStack_d4) * (fStack_c8 - fStack_d4) <= fVar3 * fVar3 + fVar2 * fVar2) {
        *(undefined4 *)(DAT_100e52fc + 100) = uStack_b4;
        return;
      }
    }
    *(float *)(DAT_100e52fc + 0x38) = fStack_c8;
    *(float *)(DAT_100e52fc + 0x3c) = fStack_c4;
    *(undefined4 *)(DAT_100e52fc + 0x40) = uStack_c0;
    *(undefined4 *)(DAT_100e52fc + 0x5c) = uStack_bc;
    *(undefined4 *)(DAT_100e52fc + 0x60) = uStack_b8;
    *(undefined4 *)(DAT_100e52fc + 100) = uStack_b4;
    return;
  }
  *(undefined4 *)(DAT_100e52fc + 0x5c) = 0;
  *(undefined4 *)(DAT_100e52fc + 0x60) = 0;
  *(undefined4 *)(DAT_100e52fc + 100) = 0;
  return;
}

/* 10054510  FUN_10054510  (4079 bytes)
 * undefined FUN_10054510(void)
 * called by: FUN_10056dd0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10054510(void)

{
  _func_399 **pp_Var1;
  float fVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  model_s *pSpriteModel;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  void *pvVar9;
  float *pfVar10;
  int unaff_ESI;
  float10 fVar11;
  float fStack00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float afStack_64 [3];
  float afStack_58 [3];
  float afStack_4c [2];
  undefined1 auStack_44 [4];
  float afStack_40 [3];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar4 = CL_IsThirdPerson();
  if (iVar4 == 0) {
    uVar5 = FUN_1004c250();
    if ((char)uVar5 == '\0') {
      cVar3 = FUN_1004c280();
      if ((cVar3 == '\0') && (DAT_100cf978 < 0x28)) {
        iVar4 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_quarterscope_spr_10095f68,2);
        if (iVar4 != -1) {
          pp_Var1 = &(gEngfuncs.pTriAPI)->SpriteTexture;
          pSpriteModel = (*gEngfuncs.GetSpritePointer)(*(HSPRITE *)(&DAT_1018be14 + iVar4 * 0x28));
          iVar4 = (**pp_Var1)(pSpriteModel,unaff_ESI);
          if (iVar4 != 0) {
            FUN_100025e0(auStack_44,0xc,4,&LAB_10017e90);
            (*(gEngfuncs.pTriAPI)->RenderMode)(2);
            (*(gEngfuncs.pTriAPI)->CullFace)(TRI_NONE);
            (*(gEngfuncs.pTriAPI)->Begin)(2);
            (*(gEngfuncs.pTriAPI)->Color4f)(1.0,1.0,1.0,1.0);
            fVar11 = (float10)DAT_100cf978 * (float10)0.1;
            if (fVar11 <= (float10)1.0) {
              fVar11 = (float10)1.0;
            }
            fVar2 = (float)(fVar11 * (float10)0.5);
            puVar6 = (undefined4 *)
                     FUN_10009190(&fStack_88,DAT_1018bd90 * 10.0,DAT_1018bd94 * 10.0,
                                  DAT_1018bd98 * 10.0);
            FUN_10002610(&fStack_7c,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(&fStack_70,fStack_7c + DAT_10190b28,DAT_10190b2c + fStack_78,
                                  DAT_10190b30 + fStack_74);
            FUN_10002610(&fStack_94,puVar6);
            fStack_30 = fStack_90;
            fStack_34 = fStack_94;
            fStack_2c = fStack_8c;
            uStack00000008 = 0;
            uStack00000018 = 0;
            uStack0000000c = 0x3f800000;
            uStack0000001c = 0;
            uStack00000010 = 0x3f800000;
            uStack00000020 = 0x3f800000;
            uStack00000014 = 0;
            uStack00000024 = 0x3f800000;
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_4c,_DAT_1018bd9c * fVar2,_DAT_1018bda0 * fVar2,
                                  _DAT_1018bda4 * fVar2);
            FUN_10002610(&fStack_7c,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_64,_DAT_1018bda8 * fVar2,_DAT_1018bdac * fVar2,
                                  _DAT_1018bdb0 * fVar2);
            FUN_10002610(&fStack_94,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_58,fStack_94 + fStack_34,fStack_30 + fStack_90,
                                  fStack_2c + fStack_8c);
            FUN_10002610(&fStack_70,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_40,fStack_7c + fStack_70,fStack_78 + fStack_6c,
                                  fStack_74 + fStack_68);
            FUN_10002610(&fStack_88,puVar6);
            fStack_9c = fStack_84;
            fStack_a0 = fStack_88;
            fStack_98 = fStack_80;
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_40,_DAT_1018bd9c * fVar2,_DAT_1018bda0 * fVar2,
                                  _DAT_1018bda4 * fVar2);
            FUN_10002610(&fStack_94,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_58,_DAT_1018bda8 * fVar2,_DAT_1018bdac * fVar2,
                                  _DAT_1018bdb0 * fVar2);
            FUN_10002610(&fStack_88,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_64,fStack_88 + fStack_a0,fStack_9c + fStack_84,
                                  fStack_98 + fStack_80);
            FUN_10002610(&fStack_70,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_4c,fStack_70 - fStack_94,fStack_6c - fStack_90,
                                  fStack_68 - fStack_8c);
            FUN_10002610(&fStack_7c,puVar6);
            fStack_18 = fStack_78;
            fStack_1c = fStack_7c;
            fStack_14 = fStack_74;
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_40,_DAT_1018bd9c * fVar2,_DAT_1018bda0 * fVar2,
                                  _DAT_1018bda4 * fVar2);
            FUN_10002610(&fStack_70,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_58,_DAT_1018bda8 * fVar2,_DAT_1018bdac * fVar2,
                                  _DAT_1018bdb0 * fVar2);
            FUN_10002610(&fStack_88,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_64,fStack_88 + fStack_a0,fStack_9c + fStack_84,
                                  fStack_98 + fStack_80);
            FUN_10002610(&fStack_94,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_4c,fStack_70 + fStack_94,fStack_6c + fStack_90,
                                  fStack_68 + fStack_8c);
            FUN_10002610(&fStack_7c,puVar6);
            fStack_24 = fStack_78;
            fStack_28 = fStack_7c;
            fStack_20 = fStack_74;
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_40,_DAT_1018bd9c * fVar2,_DAT_1018bda0 * fVar2,
                                  _DAT_1018bda4 * fVar2);
            FUN_10002610(&fStack_70,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_58,_DAT_1018bda8 * fVar2,_DAT_1018bdac * fVar2,
                                  _DAT_1018bdb0 * fVar2);
            FUN_10002610(&fStack_88,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_64,fStack_a0 - fStack_88,fStack_9c - fStack_84,
                                  fStack_98 - fStack_80);
            FUN_10002610(&fStack_94,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_4c,fStack_70 + fStack_94,fStack_6c + fStack_90,
                                  fStack_68 + fStack_8c);
            FUN_10002610(&fStack_7c,puVar6);
            fStack_4 = fStack_7c;
            fStack00000004 = fStack_74;
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_40,_DAT_1018bd9c * fVar2,_DAT_1018bda0 * fVar2,
                                  _DAT_1018bda4 * fVar2);
            FUN_10002610(&fStack_94,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_58,_DAT_1018bda8 * fVar2,_DAT_1018bdac * fVar2,
                                  _DAT_1018bdb0 * fVar2);
            FUN_10002610(&fStack_88,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_64,fStack_a0 - fStack_88,fStack_9c - fStack_84,
                                  fStack_98 - fStack_80);
            FUN_10002610(&fStack_70,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_4c,fStack_70 - fStack_94,fStack_6c - fStack_90,
                                  fStack_68 - fStack_8c);
            FUN_10002610(&fStack_7c,puVar6);
            fStack_10 = fStack_7c;
            fStack_c = fStack_78;
            fStack_8 = fStack_74;
            FUN_10050000((int)&fStack_28);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_40,_DAT_1018bd9c * fVar2,_DAT_1018bda0 * fVar2,
                                  _DAT_1018bda4 * fVar2);
            FUN_10002610(&fStack_94,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_58,_DAT_1018bda8 * fVar2,_DAT_1018bdac * fVar2,
                                  _DAT_1018bdb0 * fVar2);
            FUN_10002610(&fStack_88,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_64,fStack_88 + fStack_34,fStack_30 + fStack_84,
                                  fStack_2c + fStack_80);
            FUN_10002610(&fStack_70,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_4c,fStack_70 - fStack_94,fStack_6c - fStack_90,
                                  fStack_68 - fStack_8c);
            FUN_10002610(&fStack_7c,puVar6);
            fStack_a0 = fStack_7c;
            fStack_9c = fStack_78;
            fStack_98 = fStack_74;
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_40,_DAT_1018bd9c * fVar2,_DAT_1018bda0 * fVar2,
                                  _DAT_1018bda4 * fVar2);
            FUN_10002610(&fStack_94,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_58,_DAT_1018bda8 * fVar2,_DAT_1018bdac * fVar2,
                                  _DAT_1018bdb0 * fVar2);
            FUN_10002610(&fStack_88,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_64,fStack_88 + fStack_a0,fStack_9c + fStack_84,
                                  fStack_98 + fStack_80);
            FUN_10002610(&fStack_70,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_4c,fStack_70 - fStack_94,fStack_6c - fStack_90,
                                  fStack_68 - fStack_8c);
            FUN_10002610(&fStack_7c,puVar6);
            fStack_28 = fStack_7c;
            fStack_24 = fStack_78;
            fStack_20 = fStack_74;
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_40,_DAT_1018bd9c * fVar2,_DAT_1018bda0 * fVar2,
                                  _DAT_1018bda4 * fVar2);
            FUN_10002610(&fStack_70,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_58,_DAT_1018bda8 * fVar2,_DAT_1018bdac * fVar2,
                                  _DAT_1018bdb0 * fVar2);
            FUN_10002610(&fStack_88,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_64,fStack_88 + fStack_a0,fStack_9c + fStack_84,
                                  fStack_98 + fStack_80);
            FUN_10002610(&fStack_94,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_4c,fStack_70 + fStack_94,fStack_6c + fStack_90,
                                  fStack_68 + fStack_8c);
            FUN_10002610(&fStack_7c,puVar6);
            fStack_1c = fStack_7c;
            fStack_18 = fStack_78;
            fStack_14 = fStack_74;
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_40,_DAT_1018bd9c * fVar2,_DAT_1018bda0 * fVar2,
                                  _DAT_1018bda4 * fVar2);
            FUN_10002610(&fStack_70,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_58,_DAT_1018bda8 * fVar2,_DAT_1018bdac * fVar2,
                                  _DAT_1018bdb0 * fVar2);
            FUN_10002610(&fStack_88,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_64,fStack_a0 - fStack_88,fStack_9c - fStack_84,
                                  fStack_98 - fStack_80);
            FUN_10002610(&fStack_94,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_4c,fStack_70 + fStack_94,fStack_6c + fStack_90,
                                  fStack_68 + fStack_8c);
            FUN_10002610(&fStack_7c,puVar6);
            fStack_10 = fStack_7c;
            fStack_c = fStack_78;
            fStack_8 = fStack_74;
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_40,_DAT_1018bd9c * fVar2,_DAT_1018bda0 * fVar2,
                                  _DAT_1018bda4 * fVar2);
            FUN_10002610(&fStack_70,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_58,_DAT_1018bda8 * fVar2,_DAT_1018bdac * fVar2,
                                  _DAT_1018bdb0 * fVar2);
            FUN_10002610(&fStack_88,puVar6);
            puVar6 = (undefined4 *)
                     FUN_10009190(afStack_64,fStack_a0 - fStack_88,fStack_9c - fStack_84,
                                  fStack_98 - fStack_80);
            FUN_10002610(&fStack_94,puVar6);
            puVar6 = (undefined4 *)FUN_1003d200(&fStack_94,afStack_4c,&fStack_70);
            fStack_4 = (float)*puVar6;
            fStack00000004 = (float)puVar6[2];
            FUN_10050000((int)&fStack_28);
            pfVar7 = (float *)FUN_1003d240(&DAT_1018bd9c,afStack_40,fVar2);
            pfVar10 = afStack_58;
            pfVar8 = (float *)FUN_1003d240(&DAT_1018bda8,afStack_64,fVar2);
            pvVar9 = (void *)FUN_1003d200(&fStack_34,afStack_4c,pfVar8);
            pfVar10 = (float *)FUN_10035b10(pvVar9,pfVar10,pfVar7);
            fStack_a0 = *pfVar10;
            fStack_9c = pfVar10[1];
            fStack_98 = pfVar10[2];
            pfVar7 = (float *)FUN_1003d240(&DAT_1018bd9c,afStack_40,fVar2);
            pfVar10 = afStack_58;
            pfVar8 = (float *)FUN_1003d240(&DAT_1018bda8,afStack_64,fVar2);
            pvVar9 = (void *)FUN_10035b10(&fStack_a0,afStack_4c,pfVar8);
            puVar6 = (undefined4 *)FUN_1003d200(pvVar9,pfVar10,pfVar7);
            fStack_10 = (float)*puVar6;
            fStack_c = (float)puVar6[1];
            fStack_8 = (float)puVar6[2];
            pfVar7 = (float *)FUN_1003d240(&DAT_1018bd9c,afStack_40,fVar2);
            pfVar10 = afStack_58;
            pfVar8 = (float *)FUN_1003d240(&DAT_1018bda8,afStack_64,fVar2);
            pvVar9 = (void *)FUN_10035b10(&fStack_a0,afStack_4c,pfVar8);
            puVar6 = (undefined4 *)FUN_10035b10(pvVar9,pfVar10,pfVar7);
            fStack_4 = (float)*puVar6;
            fStack00000004 = (float)puVar6[2];
            pfVar7 = (float *)FUN_1003d240(&DAT_1018bd9c,afStack_40,fVar2);
            pfVar10 = afStack_58;
            pfVar8 = (float *)FUN_1003d240(&DAT_1018bda8,afStack_64,fVar2);
            pvVar9 = (void *)FUN_1003d200(&fStack_a0,afStack_4c,pfVar8);
            pfVar10 = (float *)FUN_10035b10(pvVar9,pfVar10,pfVar7);
            fStack_28 = *pfVar10;
            fStack_24 = pfVar10[1];
            fStack_20 = pfVar10[2];
            pfVar7 = (float *)FUN_1003d240(&DAT_1018bd9c,afStack_40,fVar2);
            pfVar10 = afStack_58;
            pfVar8 = (float *)FUN_1003d240(&DAT_1018bda8,afStack_64,fVar2);
            pvVar9 = (void *)FUN_1003d200(&fStack_a0,afStack_4c,pfVar8);
            puVar6 = (undefined4 *)FUN_1003d200(pvVar9,pfVar10,pfVar7);
            fStack_1c = (float)*puVar6;
            fStack_18 = (float)puVar6[1];
            fStack_14 = (float)puVar6[2];
            FUN_10050000((int)&fStack_28);
            pfVar7 = (float *)FUN_1003d240(&DAT_1018bd9c,afStack_40,fVar2);
            pfVar10 = afStack_58;
            pfVar8 = (float *)FUN_1003d240(&DAT_1018bda8,afStack_64,fVar2);
            pvVar9 = (void *)FUN_1003d200(&fStack_34,afStack_4c,pfVar8);
            pfVar10 = (float *)FUN_1003d200(pvVar9,pfVar10,pfVar7);
            fStack_a0 = *pfVar10;
            fStack_9c = pfVar10[1];
            fStack_98 = pfVar10[2];
            pfVar7 = (float *)FUN_1003d240(&DAT_1018bd9c,afStack_40,fVar2);
            pfVar10 = afStack_58;
            pfVar8 = (float *)FUN_1003d240(&DAT_1018bda8,afStack_64,fVar2);
            pvVar9 = (void *)FUN_10035b10(&fStack_a0,afStack_4c,pfVar8);
            puVar6 = (undefined4 *)FUN_1003d200(pvVar9,pfVar10,pfVar7);
            fStack_4 = (float)*puVar6;
            fStack00000004 = (float)puVar6[2];
            pfVar7 = (float *)FUN_1003d240(&DAT_1018bd9c,afStack_40,fVar2);
            pfVar10 = afStack_58;
            pfVar8 = (float *)FUN_1003d240(&DAT_1018bda8,afStack_64,fVar2);
            pvVar9 = (void *)FUN_10035b10(&fStack_a0,afStack_4c,pfVar8);
            puVar6 = (undefined4 *)FUN_10035b10(pvVar9,pfVar10,pfVar7);
            fStack_10 = (float)*puVar6;
            fStack_c = (float)puVar6[1];
            fStack_8 = (float)puVar6[2];
            pfVar7 = (float *)FUN_1003d240(&DAT_1018bd9c,afStack_40,fVar2);
            pfVar10 = afStack_58;
            pfVar8 = (float *)FUN_1003d240(&DAT_1018bda8,afStack_64,fVar2);
            pvVar9 = (void *)FUN_1003d200(&fStack_a0,afStack_4c,pfVar8);
            puVar6 = (undefined4 *)FUN_10035b10(pvVar9,pfVar10,pfVar7);
            fStack_1c = (float)*puVar6;
            fStack_18 = (float)puVar6[1];
            fStack_14 = (float)puVar6[2];
            pfVar7 = (float *)FUN_1003d240(&DAT_1018bd9c,afStack_40,fVar2);
            pfVar10 = afStack_58;
            pfVar8 = (float *)FUN_1003d240(&DAT_1018bda8,afStack_64,fVar2);
            pvVar9 = (void *)FUN_1003d200(&fStack_a0,afStack_4c,pfVar8);
            pfVar10 = (float *)FUN_1003d200(pvVar9,pfVar10,pfVar7);
            fStack_28 = *pfVar10;
            fStack_24 = pfVar10[1];
            fStack_20 = pfVar10[2];
            FUN_10050000((int)&fStack_28);
            (*(gEngfuncs.pTriAPI)->End)();
            (*(gEngfuncs.pTriAPI)->RenderMode)(0);
          }
        }
      }
    }
  }
  return;
}

/* 10055500  FUN_10055500  (530 bytes)
 * undefined FUN_10055500(undefined1 param_1)
 * called by: FUN_10055760
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10055500(undefined1 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((DAT_1018ab0c & 1) == 0) {
    DAT_1018ab0c = DAT_1018ab0c | 1;
    FUN_1006af63(0x10055750);
  }
  if ((DAT_1018ab0c & 2) == 0) {
    DAT_1018ab0c = DAT_1018ab0c | 2;
    FUN_1006af63(0x10055740);
  }
  if ((DAT_1018ab0c & 4) == 0) {
    DAT_1018ab0c = DAT_1018ab0c | 4;
    FUN_1006af63(0x10055730);
  }
  if ((DAT_1018ab0c & 8) == 0) {
    DAT_1018ab0c = DAT_1018ab0c | 8;
    FUN_100025e0(&DAT_1018ab68,0xc,4,&LAB_10017e90);
    FUN_1006af63(0x10055720);
  }
  DAT_1018aa54 = (*gEngfuncs.GetEntityByIndex)(_param_1);
  if ((DAT_1018aa54 != (cl_entity_s *)0x0) && (DAT_1018aa54->player != 0)) {
    _DAT_1018aaf0 = DAT_1018aa54->origin[0];
    _DAT_1018aaf4 = DAT_1018aa54->origin[1];
    _DAT_1018aaf8 = DAT_1018aa54->origin[2] - 8192.0;
    (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
    (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
              (DAT_1018aa54->origin,(float *)&DAT_1018aaf0,0,_param_1,(pmtrace_s *)&DAT_1018aaa8);
    FUN_10046110((float *)&DAT_1018aa48,(float *)&DAT_1018aac8);
    _DAT_1018aaf8 = _DAT_1018aad0 + _DAT_1018aac4;
    _DAT_1018aaf0 = _DAT_1018aac8 + _DAT_1018aabc;
    _DAT_1018aaf4 = _DAT_1018aacc + _DAT_1018aac0;
    fVar1 = _DAT_1018aabc - DAT_1018aa54->origin[0];
    fVar2 = _DAT_1018aac0 - DAT_1018aa54->origin[1];
    fVar3 = _DAT_1018aac4 - DAT_1018aa54->origin[2];
    fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
    if (fVar1 < 200.0) {
      (*(gEngfuncs.pTriAPI)->Color4f)(1.0,1.0,1.0,1.0 - fVar1 * 0.005);
      FUN_10050080((float *)&DAT_1018ab68,(float *)&DAT_1018aaf0,&DAT_1018aa48,24.0,'\0',
                   (float *)0x0,0.0,(float *)0x0);
      FUN_10050000(0x1018ab68);
      return;
    }
  }
  return;
}

/* 10055760  FUN_10055760  (764 bytes)
 * undefined FUN_10055760(void)
 * called by: FUN_10056dd0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10055760(void)

{
  _func_399 **pp_Var1;
  float fVar2;
  char cVar3;
  model_s *pSpriteModel;
  int iVar4;
  cl_entity_s *pcVar5;
  int unaff_ESI;
  
  if ((DAT_1018aaa0 & 1) == 0) {
    DAT_1018aaa0 = DAT_1018aaa0 | 1;
    FUN_1006af63(0x10055a90);
  }
  if ((DAT_1018aaa0 & 2) == 0) {
    DAT_1018aaa0 = DAT_1018aaa0 | 2;
    FUN_1006af63(0x10055a80);
  }
  if ((DAT_1018aaa0 & 4) == 0) {
    DAT_1018aaa0 = DAT_1018aaa0 | 4;
    FUN_1006af63(0x10055a70);
  }
  if ((DAT_1018aaa0 & 8) == 0) {
    DAT_1018aaa0 = DAT_1018aaa0 | 8;
    FUN_1006af63(0x10055a60);
  }
  if ((*(float *)(DAT_100df4cc + 0xc) != 0.0) &&
     (_DAT_1018abc0 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_ombra_spr_10095f84,2),
     _DAT_1018abc0 != -1)) {
    pp_Var1 = &(gEngfuncs.pTriAPI)->SpriteTexture;
    pSpriteModel = (*gEngfuncs.GetSpritePointer)(*(HSPRITE *)(&DAT_1018be14 + _DAT_1018abc0 * 0x28))
    ;
    iVar4 = (**pp_Var1)(pSpriteModel,unaff_ESI);
    if (iVar4 != 0) {
      (*(gEngfuncs.pTriAPI)->RenderMode)(4);
      (*(gEngfuncs.pTriAPI)->CullFace)(TRI_NONE);
      (*(gEngfuncs.pTriAPI)->Begin)(2);
      pcVar5 = (*gEngfuncs.GetLocalPlayer)();
      DAT_1018abb8 = pcVar5->index;
      _DAT_1018aa9c = CL_IsThirdPerson();
      if (((_DAT_1018aa9c == 0) && (cVar3 = FUN_1004c280(), cVar3 == '\0')) &&
         (*(int *)(DAT_100df4cc + 0xc) == 0x3f800000)) {
        _DAT_1018aa40 = DAT_10190b30 - 8192.0;
        _DAT_1018aa38 = DAT_10190b28;
        _DAT_1018aa3c = DAT_10190b2c;
        (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
        (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
                  (&DAT_10190b28,(float *)&DAT_1018aa38,0,DAT_1018abb8,(pmtrace_s *)&DAT_1018aa58);
        FUN_10046110((float *)&DAT_1018ab00,(float *)&DAT_1018aa78);
        _DAT_1018aa40 = _DAT_1018aa80 + _DAT_1018aa74;
        _DAT_1018aa38 = _DAT_1018aa78 + _DAT_1018aa6c;
        _DAT_1018aa3c = _DAT_1018aa7c + _DAT_1018aa70;
        fVar2 = SQRT((_DAT_1018aa70 - DAT_10190b2c) * (_DAT_1018aa70 - DAT_10190b2c) +
                     (_DAT_1018aa74 - DAT_10190b30) * (_DAT_1018aa74 - DAT_10190b30) +
                     (_DAT_1018aa6c - DAT_10190b28) * (_DAT_1018aa6c - DAT_10190b28)) - 12.0;
        if (fVar2 < 200.0) {
          (*(gEngfuncs.pTriAPI)->Color4f)(1.0,1.0,1.0,1.0 - fVar2 * 0.005);
          FUN_10050080((float *)&DAT_1018ab10,(float *)&DAT_1018aa38,&DAT_1018ab00,24.0,'\0',
                       (float *)0x0,0.0,(float *)0x0);
          FUN_10050000(0x1018ab10);
        }
      }
      DAT_1018ab60 = (*gEngfuncs.GetMaxClients)();
      DAT_1018abbc = 0;
      if (-1 < DAT_1018ab60) {
        do {
          cVar3 = FUN_100579a0(DAT_1018abbc);
          if (cVar3 != '\0') {
            FUN_10055500((undefined1)DAT_1018abbc);
          }
          DAT_1018abbc = DAT_1018abbc + 1;
        } while (DAT_1018abbc <= DAT_1018ab60);
      }
      (*(gEngfuncs.pTriAPI)->End)();
      (*(gEngfuncs.pTriAPI)->RenderMode)(0);
    }
  }
  return;
}

/* 10055aa0  FUN_10055aa0  (29 bytes)
 * float10 FUN_10055aa0(float param_1)
 * called by: FUN_1000b9b0, FUN_10055ac0
 */
float10 __cdecl FUN_10055aa0(float param_1)

{
  if (param_1 < 0.01) {
    return (float10)0.01;
  }
  return (float10)param_1;
}

/* 10055ac0  FUN_10055ac0  (20 bytes)
 * float10 FUN_10055ac0(float param_1)
 * called by: FUN_1004b0e0, FUN_10056fa0
 */
float10 __cdecl FUN_10055ac0(float param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_10055aa0(param_1);
  return (float10)1.0 / fVar1;
}

/* 10055ae0  FUN_10055ae0  (80 bytes)
 * undefined FUN_10055ae0(float param_1, float * param_2, float param_3)
 * called by: HUD_Frame
 */
void __cdecl FUN_10055ae0(float param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_3 - *param_2;
  fVar2 = fVar1;
  if (fVar1 < 0.0) {
    fVar2 = -fVar1;
  }
  if (0.05 < fVar2) {
    fVar2 = param_1 * 7.0;
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    fVar1 = fVar2 * fVar1;
  }
  *param_2 = fVar1 + *param_2;
  return;
}

/* 10055b30  FUN_10055b30  (94 bytes)
 * float10 FUN_10055b30(float param_1, char param_2)
 * called by: FUN_10035010, FUN_10035d40
 */
float10 __cdecl FUN_10055b30(float param_1,char param_2)

{
  float10 fVar1;
  
  if (param_2 == '\0') {
    fVar1 = (float10)1.0;
  }
  else {
    fVar1 = (float10)10.0;
  }
  if (param_1 < 0.99) {
    fVar1 = ((float10)1.0 - (float10)param_1 * (float10)param_1) * fVar1;
    if (fVar1 < (float10)1.0) {
      fVar1 = (float10)1.0;
    }
    return (float10)param_1 / fVar1;
  }
  return (float10)1.0;
}

/* 10055bd0  FUN_10055bd0  (22 bytes)
 * int FUN_10055bd0(int * param_1)
 * called by: FUN_1003a5d0
 */
int __fastcall FUN_10055bd0(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 == 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 0x200);
  return -1;
}

/* 10055bf0  FUN_10055bf0  (28 bytes)
 * int FUN_10055bf0(int param_1)
 * called by: FUN_1003a5d0
 */
int __fastcall FUN_10055bf0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x800);
  do {
    if (*piVar2 == 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 0x200);
  return -1;
}

/* 10055c10  FUN_10055c10  (59 bytes)
 * int FUN_10055c10(int * param_1)
 * called by: FUN_1003a5d0
 */
int __thiscall FUN_10055c10(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = 0;
    piVar2 = this;
    do {
      if (*piVar2 == 0) {
        *(int **)((int)this + iVar1 * 4) = param_1;
        *(undefined1 *)(param_1 + 4) = 1;
        *param_1 = iVar1;
        param_1[0x44] = 0;
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 0x200);
  }
  return -1;
}

/* 10055c50  FUN_10055c50  (64 bytes)
 * int FUN_10055c50(int * param_1)
 * called by: FUN_1003a5d0
 */
int __thiscall FUN_10055c50(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = 0;
    piVar2 = (int *)((int)this + 0x800);
    do {
      if (*piVar2 == 0) {
        *(int **)((int)this + iVar1 * 4 + 0x800) = param_1;
        *(undefined1 *)(param_1 + 1) = 1;
        param_1[2] = 0;
        *param_1 = iVar1;
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 0x200);
  }
  return -1;
}

/* 10055c90  FUN_10055c90  (81 bytes)
 * undefined FUN_10055c90(int param_1, int param_2)
 * called by: FUN_1003a5d0
 */
void __thiscall FUN_10055c90(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((((param_1 != -1) && (param_2 != -1)) &&
      (iVar2 = *(int *)((int)this + param_1 * 4), iVar2 != 0)) &&
     (*(int *)((int)this + param_2 * 4 + 0x800) != 0)) {
    iVar2 = *(int *)(iVar2 + 0x14);
    if ((iVar2 != -1) && (iVar2 = *(int *)((int)this + iVar2 * 4 + 0x800), iVar2 != 0)) {
      piVar1 = (int *)(iVar2 + 8);
      *piVar1 = *piVar1 + -1;
    }
    *(int *)(*(int *)((int)this + param_1 * 4) + 0x14) = param_2;
    piVar1 = (int *)(*(int *)((int)this + param_2 * 4 + 0x800) + 8);
    *piVar1 = *piVar1 + 1;
  }
  return;
}

/* 10055cf0  FUN_10055cf0  (22 bytes)
 * undefined FUN_10055cf0(undefined4 * param_1)
 * called by: FUN_1003ab40
 */
void __fastcall FUN_10055cf0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0x200;
  do {
    param_1[0x200] = 0;
    *param_1 = 0;
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

/* 10055d10  FUN_10055d10  (14 bytes)
 * undefined FUN_10055d10(int param_1)
 * called by: FUN_1003ab40
 */
void __thiscall FUN_10055d10(void *this,int param_1)

{
  *(undefined4 *)((int)this + param_1 * 4) = 0;
  return;
}

/* 10055d20  FUN_10055d20  (616 bytes)
 * undefined4 FUN_10055d20(int param_1, byte.conflict * param_2, byte.conflict * param_3)
 * called by: FUN_1003a160
 */
undefined4 __thiscall
FUN_10055d20(void *this,int param_1,byte_conflict *param_2,byte_conflict *param_3)

{
  byte_conflict bVar1;
  uint uVar2;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 uVar3;
  undefined4 extraout_EAX_01;
  undefined4 extraout_EAX_02;
  void *this_00;
  uint uVar4;
  void *this_01;
  undefined *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  void *this_07;
  undefined *this_08;
  void *this_09;
  void *this_10;
  byte_conflict *pbVar5;
  byte_conflict *pbVar6;
  float10 fVar7;
  
  uVar2 = FUN_10076d90(this,param_2,(byte_conflict *)s_particle_10096000);
  if (uVar2 == 0) {
    pbVar5 = (byte_conflict *)(param_1 + 0x18);
LAB_10055d3f:
    uVar2 = 0xffffffff;
    do {
      pbVar6 = param_3;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pbVar6 = param_3 + 1;
      bVar1 = *param_3;
      param_3 = pbVar6;
    } while (bVar1 != '\0');
    uVar2 = ~uVar2;
    pbVar6 = pbVar6 + -uVar2;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pbVar5 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar5 = pbVar5 + 4;
    }
    for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar5 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      pbVar5 = pbVar5 + 1;
    }
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  uVar2 = FUN_10076d90(this_00,param_2,(byte_conflict *)s_epslow_10095ff8);
  if (uVar2 == 0) {
    fVar7 = FUN_1006b918(param_3,param_3);
    *(float *)(param_1 + 0x80) = (float)fVar7;
    return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
  }
  uVar2 = FUN_10076d90(this_01,param_2,(byte_conflict *)s_epshigh_10095ff0);
  if (uVar2 == 0) {
    fVar7 = FUN_1006b918(this_02,param_3);
    *(float *)(param_1 + 0x7c) = (float)fVar7;
    return CONCAT31((int3)((uint)extraout_EAX_00 >> 8),1);
  }
  uVar2 = FUN_10076d90(this_02,param_2,(byte_conflict *)s_ppelow_10095fe8);
  if (uVar2 == 0) {
    uVar3 = FUN_1006c042(this_03,param_3);
    *(undefined4 *)(param_1 + 0x88) = uVar3;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar2 = FUN_10076d90(this_03,param_2,(byte_conflict *)s_ppehigh_10095fe0);
  if (uVar2 == 0) {
    uVar3 = FUN_1006c042(this_04,param_3);
    *(undefined4 *)(param_1 + 0x84) = uVar3;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar2 = FUN_10076d90(this_04,param_2,(byte_conflict *)s_variancelow_10095fd4);
  if (uVar2 != 0) {
    uVar2 = FUN_10076d90(this_05,param_2,(byte_conflict *)s_variancehigh_10095fc4);
    if (uVar2 == 0) {
      uVar3 = FUN_1006bf83((char *)param_3,(byte_conflict *)s__f__f__f_100951b4);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_06,param_2,(byte_conflict *)s_cameradensity_10095fb4);
    if (uVar2 == 0) {
      fVar7 = FUN_1006b918(param_3,param_3);
      *(float *)(param_1 + 0xa4) = (float)fVar7;
      return CONCAT31((int3)((uint)extraout_EAX_01 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_07,param_2,(byte_conflict *)s_cameraradius_10095fa4);
    if (uVar2 == 0) {
      fVar7 = FUN_1006b918(this_08,param_3);
      *(float *)(param_1 + 0xa8) = (float)fVar7;
      return CONCAT31((int3)((uint)extraout_EAX_02 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_08,param_2,(byte_conflict *)s_origin_10093ba4);
    if (uVar2 != 0) {
      uVar2 = FUN_10076d90(this_09,param_2,(byte_conflict *)s_classname_10093bc0);
      if (uVar2 != 0) {
        uVar2 = FUN_10076d90(this_10,param_2,(byte_conflict *)s_spawnflags_10095f98);
        if (uVar2 != 0) {
          return uVar2 & 0xffffff00;
        }
        uVar3 = FUN_1006c042(param_3,param_3);
        *(undefined4 *)(param_1 + 0x114) = uVar3;
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      pbVar5 = (byte_conflict *)(param_1 + 0xac);
      goto LAB_10055d3f;
    }
  }
  uVar3 = FUN_1006bf83((char *)param_3,(byte_conflict *)s__f__f__f_100951b4);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

/* 10055f90  FUN_10055f90  (2301 bytes)
 * undefined4 FUN_10055f90(int param_1, byte.conflict * param_2, byte.conflict * param_3)
 * called by: FUN_1003a290
 */
undefined4 __thiscall
FUN_10055f90(void *this,int param_1,byte_conflict *param_2,byte_conflict *param_3)

{
  byte_conflict bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  undefined4 extraout_EAX_02;
  undefined4 extraout_EAX_03;
  undefined4 extraout_EAX_04;
  undefined4 extraout_EAX_05;
  undefined4 extraout_EAX_06;
  undefined4 extraout_EAX_07;
  undefined4 extraout_EAX_08;
  undefined4 extraout_EAX_09;
  undefined4 extraout_EAX_10;
  undefined4 extraout_EAX_11;
  undefined4 extraout_EAX_12;
  undefined4 extraout_EAX_13;
  undefined4 extraout_EAX_14;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  undefined *this_05;
  void *this_06;
  undefined *this_07;
  undefined *this_08;
  void *this_09;
  undefined *this_10;
  undefined *this_11;
  void *this_12;
  undefined *this_13;
  undefined *this_14;
  void *this_15;
  undefined *this_16;
  void *this_17;
  void *this_18;
  undefined *this_19;
  void *this_20;
  undefined *this_21;
  undefined *this_22;
  void *this_23;
  void *this_24;
  void *this_25;
  void *this_26;
  void *this_27;
  void *this_28;
  void *this_29;
  void *this_30;
  void *this_31;
  undefined *this_32;
  undefined *this_33;
  void *this_34;
  undefined *this_35;
  undefined *this_36;
  void *this_37;
  undefined *this_38;
  undefined *this_39;
  void *this_40;
  void *this_41;
  void *this_42;
  uint uVar5;
  byte_conflict *pbVar6;
  byte_conflict *pbVar7;
  float10 fVar8;
  
  uVar2 = FUN_10076d90(this,param_2,(byte_conflict *)s_sprite_name_100963b4);
  if (uVar2 == 0) {
    pbVar6 = (byte_conflict *)(param_1 + 0xe4);
  }
  else {
    uVar2 = FUN_10076d90(this_00,param_2,(byte_conflict *)s_sprite_trans_100963a4);
    if (uVar2 == 0) {
      uVar3 = FUN_1006c042(param_3,param_3);
      *(undefined4 *)(param_1 + 0x148) = uVar3;
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_01,param_2,(byte_conflict *)s_follow_view_10096398);
    if (uVar2 == 0) {
      uVar3 = FUN_1006c042(this_02,param_3);
      *(undefined4 *)(param_1 + 0x14c) = uVar3;
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_02,param_2,(byte_conflict *)s_collide_10096390);
    if (uVar2 == 0) {
      uVar3 = FUN_1006c042(this_03,param_3);
      *(undefined4 *)(param_1 + 0x150) = uVar3;
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_03,param_2,(byte_conflict *)s_oncollide_10096384);
    if (uVar2 == 0) {
      uVar3 = FUN_1006c042(this_04,param_3);
      *(undefined4 *)(param_1 + 0x154) = uVar3;
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_04,param_2,(byte_conflict *)s_lifelow_1009637c);
    uVar4 = (undefined3)((uint)param_1 >> 8);
    if (uVar2 == 0) {
      fVar8 = FUN_1006b918(this_05,param_3);
      *(float *)(param_1 + 0x10) = (float)fVar8;
      return CONCAT31(uVar4,1);
    }
    uVar2 = FUN_10076d90(this_05,param_2,(byte_conflict *)s_lifehigh_10096370);
    if (uVar2 == 0) {
      fVar8 = FUN_1006b918(param_3,param_3);
      *(float *)(param_1 + 0xc) = (float)fVar8;
      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
    uVar2 = FUN_10076d90(this_06,param_2,(byte_conflict *)s_gravitylow_10096364);
    if (uVar2 == 0) {
      fVar8 = FUN_1006b918(this_07,param_3);
      *(float *)(param_1 + 0x18) = (float)fVar8;
      return CONCAT31((int3)((uint)extraout_EAX_00 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_07,param_2,(byte_conflict *)s_gravityhigh_10096358);
    if (uVar2 == 0) {
      fVar8 = FUN_1006b918(this_08,param_3);
      *(float *)(param_1 + 0x14) = (float)fVar8;
      return CONCAT31(uVar4,1);
    }
    uVar2 = FUN_10076d90(this_08,param_2,(byte_conflict *)s_colorlow_1009634c);
    if (uVar2 == 0) {
      fVar8 = FUN_1006b918(param_3,param_3);
      *(float *)(param_1 + 0x20) = (float)fVar8;
      return CONCAT31((int3)((uint)extraout_EAX_01 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_09,param_2,(byte_conflict *)s_colorhigh_10096340);
    if (uVar2 == 0) {
      fVar8 = FUN_1006b918(this_10,param_3);
      *(float *)(param_1 + 0x1c) = (float)fVar8;
      return CONCAT31((int3)((uint)extraout_EAX_02 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_10,param_2,(byte_conflict *)s_fadespeedlow_10096330);
    if (uVar2 == 0) {
      fVar8 = FUN_1006b918(this_11,param_3);
      *(float *)(param_1 + 0x28) = (float)fVar8;
      return CONCAT31(uVar4,1);
    }
    uVar2 = FUN_10076d90(this_11,param_2,(byte_conflict *)s_fadespeedhigh_10096320);
    if (uVar2 == 0) {
      fVar8 = FUN_1006b918(param_3,param_3);
      *(float *)(param_1 + 0x24) = (float)fVar8;
      return CONCAT31((int3)((uint)extraout_EAX_03 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_12,param_2,(byte_conflict *)s_p_radiuslow_10096314);
    if (uVar2 == 0) {
      fVar8 = FUN_1006b918(this_13,param_3);
      *(float *)(param_1 + 0x30) = (float)fVar8;
      return CONCAT31((int3)((uint)extraout_EAX_04 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_13,param_2,(byte_conflict *)s_p_radiushigh_10096304);
    if (uVar2 == 0) {
      fVar8 = FUN_1006b918(this_14,param_3);
      *(float *)(param_1 + 0x2c) = (float)fVar8;
      return CONCAT31(uVar4,1);
    }
    uVar2 = FUN_10076d90(this_14,param_2,(byte_conflict *)s_scalespeedlow_100962f4);
    if (uVar2 == 0) {
      fVar8 = FUN_1006b918(param_3,param_3);
      *(float *)(param_1 + 0x38) = (float)fVar8;
      return CONCAT31((int3)((uint)extraout_EAX_05 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_15,param_2,(byte_conflict *)s_scalespeedhigh_100962e4);
    if (uVar2 == 0) {
      fVar8 = FUN_1006b918(this_16,param_3);
      *(float *)(param_1 + 0x34) = (float)fVar8;
      return CONCAT31((int3)((uint)extraout_EAX_06 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_16,param_2,(byte_conflict *)s_current_framelow_100962d0);
    if (uVar2 == 0) {
      uVar3 = FUN_1006c042(this_17,param_3);
      *(undefined4 *)(param_1 + 0x40) = uVar3;
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_17,param_2,(byte_conflict *)s_current_framehigh_100962bc);
    if (uVar2 == 0) {
      uVar3 = FUN_1006c042(this_18,param_3);
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_18,param_2,(byte_conflict *)s_frame_ratelow_100962ac);
    if (uVar2 == 0) {
      fVar8 = FUN_1006b918(this_19,param_3);
      *(float *)(param_1 + 0x48) = (float)fVar8;
      return CONCAT31(uVar4,1);
    }
    uVar2 = FUN_10076d90(this_19,param_2,(byte_conflict *)s_frame_ratehigh_1009629c);
    if (uVar2 == 0) {
      fVar8 = FUN_1006b918(param_3,param_3);
      *(float *)(param_1 + 0x44) = (float)fVar8;
      return CONCAT31((int3)((uint)extraout_EAX_07 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_20,param_2,(byte_conflict *)s_randomdeltalow_1009628c);
    if (uVar2 == 0) {
      fVar8 = FUN_1006b918(this_21,param_3);
      *(float *)(param_1 + 0x50) = (float)fVar8;
      return CONCAT31((int3)((uint)extraout_EAX_08 >> 8),1);
    }
    uVar2 = FUN_10076d90(this_21,param_2,(byte_conflict *)s_randomdeltahigh_1009627c);
    if (uVar2 == 0) {
      fVar8 = FUN_1006b918(this_22,param_3);
      *(float *)(param_1 + 0x4c) = (float)fVar8;
      return CONCAT31(uVar4,1);
    }
    uVar2 = FUN_10076d90(this_22,param_2,(byte_conflict *)s_velocitylow_10096270);
    if (uVar2 == 0) {
      uVar2 = FUN_1006bf83((char *)param_3,(byte_conflict *)s__f__f__f_100951b4);
      if (uVar2 != 3) {
        uVar3 = (*DAT_100988ac)(4,s_velocitylow_has_bad_value__Shoul_10096240);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      goto LAB_1005684f;
    }
    uVar2 = FUN_10076d90(this_23,param_2,(byte_conflict *)s_velocityhigh_10096230);
    if (uVar2 == 0) {
      uVar2 = FUN_1006bf83((char *)param_3,(byte_conflict *)s__f__f__f_100951b4);
      if (uVar2 != 3) {
        uVar3 = (*DAT_100988ac)(4,s_velocityhigh_has_bad_value__Shou_10096200);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      goto LAB_1005684f;
    }
    uVar2 = FUN_10076d90(this_24,param_2,(byte_conflict *)s_a_velocitylow_100961f0);
    if (uVar2 == 0) {
      uVar2 = FUN_1006bf83((char *)param_3,(byte_conflict *)s__f__f__f_100951b4);
      if (uVar2 != 3) {
        uVar3 = (*DAT_100988ac)(4,s_a_velocitylow_has_bad_value__Sho_100961c0);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      goto LAB_1005684f;
    }
    uVar2 = FUN_10076d90(this_25,param_2,(byte_conflict *)s_a_velocityhigh_100961b0);
    if (uVar2 == 0) {
      uVar2 = FUN_1006bf83((char *)param_3,(byte_conflict *)s__f__f__f_100951b4);
      if (uVar2 != 3) {
        uVar3 = (*DAT_100988ac)(4,s_a_velocityhigh_has_bad_value__Sh_1009617c);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      goto LAB_1005684f;
    }
    uVar2 = FUN_10076d90(this_26,param_2,(byte_conflict *)s_randomvellow_1009616c);
    if (uVar2 == 0) {
      uVar2 = FUN_1006bf83((char *)param_3,(byte_conflict *)s__f__f__f_100951b4);
      if (uVar2 != 3) {
        uVar3 = (*DAT_100988ac)(4,s_randomvellow_has_bad_value__Shou_1009613c);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      goto LAB_1005684f;
    }
    uVar2 = FUN_10076d90(this_27,param_2,(byte_conflict *)s_randomvelhigh_1009612c);
    if (uVar2 == 0) {
      uVar2 = FUN_1006bf83((char *)param_3,(byte_conflict *)s__f__f__f_100951b4);
      if (uVar2 != 3) {
        uVar3 = (*DAT_100988ac)(4,s_randomvelhigh_has_bad_value__Sho_100960fc);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      goto LAB_1005684f;
    }
    uVar2 = FUN_10076d90(this_28,param_2,(byte_conflict *)s_followaxis_100960f0);
    if (uVar2 == 0) {
      uVar2 = FUN_1006bf83((char *)param_3,(byte_conflict *)s__f__f__f_100951b4);
      if (uVar2 != 3) {
        uVar3 = (*DAT_100988ac)(4,s_followaxis_has_bad_value__Should_100960c0);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      goto LAB_1005684f;
    }
    uVar2 = FUN_10076d90(this_29,param_2,(byte_conflict *)s_soundonemit_100960b4);
    if (uVar2 == 0) {
      pbVar6 = (byte_conflict *)(param_1 + 0x158);
    }
    else {
      uVar2 = FUN_10076d90(this_30,param_2,(byte_conflict *)s_termvelocitylow_100960a4);
      if (uVar2 == 0) {
        fVar8 = FUN_1006b918(param_3,param_3);
        *(float *)(param_1 + 0x68) = (float)fVar8;
        return CONCAT31((int3)((uint)extraout_EAX_09 >> 8),1);
      }
      uVar2 = FUN_10076d90(this_31,param_2,(byte_conflict *)s_termvelocityhigh_10096090);
      if (uVar2 == 0) {
        fVar8 = FUN_1006b918(this_32,param_3);
        *(float *)(param_1 + 100) = (float)fVar8;
        return CONCAT31((int3)((uint)extraout_EAX_10 >> 8),1);
      }
      uVar2 = FUN_10076d90(this_32,param_2,(byte_conflict *)s_reactamountlow_10096080);
      if (uVar2 == 0) {
        fVar8 = FUN_1006b918(this_33,param_3);
        *(float *)(param_1 + 0x58) = (float)fVar8;
        return CONCAT31(uVar4,1);
      }
      uVar2 = FUN_10076d90(this_33,param_2,(byte_conflict *)s_reactamounthigh_10096070);
      if (uVar2 == 0) {
        fVar8 = FUN_1006b918(param_3,param_3);
        *(float *)(param_1 + 0x54) = (float)fVar8;
        return CONCAT31((int3)((uint)extraout_EAX_11 >> 8),1);
      }
      uVar2 = FUN_10076d90(this_34,param_2,(byte_conflict *)s_windamountlow_10096060);
      if (uVar2 == 0) {
        fVar8 = FUN_1006b918(this_35,param_3);
        *(float *)(param_1 + 0x60) = (float)fVar8;
        return CONCAT31((int3)((uint)extraout_EAX_12 >> 8),1);
      }
      uVar2 = FUN_10076d90(this_35,param_2,(byte_conflict *)s_windamounthigh_10096050);
      if (uVar2 == 0) {
        fVar8 = FUN_1006b918(this_36,param_3);
        *(float *)(param_1 + 0x5c) = (float)fVar8;
        return CONCAT31(uVar4,1);
      }
      uVar2 = FUN_10076d90(this_36,param_2,(byte_conflict *)s_fadeintimelow_10096040);
      if (uVar2 == 0) {
        fVar8 = FUN_1006b918(param_3,param_3);
        *(float *)(param_1 + 0x70) = (float)fVar8;
        return CONCAT31((int3)((uint)extraout_EAX_13 >> 8),1);
      }
      uVar2 = FUN_10076d90(this_37,param_2,(byte_conflict *)s_fadeintimehigh_10096030);
      if (uVar2 == 0) {
        fVar8 = FUN_1006b918(this_38,param_3);
        *(float *)(param_1 + 0x6c) = (float)fVar8;
        return CONCAT31((int3)((uint)extraout_EAX_14 >> 8),1);
      }
      uVar2 = FUN_10076d90(this_38,param_2,(byte_conflict *)s_stretchspeed_10096020);
      if (uVar2 == 0) {
        fVar8 = FUN_1006b918(this_39,param_3);
        *(float *)(param_1 + 0xe0) = (float)fVar8;
        return CONCAT31(uVar4,1);
      }
      uVar2 = FUN_10076d90(this_39,param_2,(byte_conflict *)s_classname_10093bc0);
      if (uVar2 == 0) {
        pbVar6 = (byte_conflict *)(param_1 + 0x1bc);
      }
      else {
        uVar2 = FUN_10076d90(this_40,param_2,(byte_conflict *)s_targetname_10096014);
        if (uVar2 == 0) {
          pbVar6 = (byte_conflict *)(param_1 + 0x220);
        }
        else {
          uVar2 = FUN_10076d90(this_41,param_2,(byte_conflict *)s_target_1009600c);
          if (uVar2 != 0) {
            uVar2 = FUN_10076d90(this_42,param_2,(byte_conflict *)s_spawnflags_10095f98);
            if (uVar2 == 0) {
              uVar3 = FUN_1006c042(param_3,param_3);
              *(undefined4 *)(param_1 + 0x2e8) = uVar3;
              return CONCAT31((int3)((uint)uVar3 >> 8),1);
            }
            return uVar2 & 0xffffff00;
          }
          pbVar6 = (byte_conflict *)(param_1 + 0x284);
        }
      }
    }
  }
  uVar2 = 0xffffffff;
  do {
    pbVar7 = param_3;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pbVar7 = param_3 + 1;
    bVar1 = *param_3;
    param_3 = pbVar7;
  } while (bVar1 != '\0');
  uVar2 = ~uVar2;
  pbVar7 = pbVar7 + -uVar2;
  for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pbVar6 = *(undefined4 *)pbVar7;
    pbVar7 = pbVar7 + 4;
    pbVar6 = pbVar6 + 4;
  }
  for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar6 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    pbVar6 = pbVar6 + 1;
  }
LAB_1005684f:
  return CONCAT31((int3)(uVar2 >> 8),1);
}

/* 10056890  FUN_10056890  (264 bytes)
 * undefined FUN_10056890(undefined4 param_1, float * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, uint param_6)
 * called by: FUN_1003dfa0, FUN_1003f090, FUN_10040c20
 */
void __cdecl
FUN_10056890(float *param_1,float *param_2,float *param_3,undefined4 param_4,int param_5,
            uint param_6)

{
  uint uVar1;
  TEMPENTITY *pTVar2;
  float10 fVar3;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_2;
  local_4 = param_2[2];
  local_8 = param_2[1] - 90.0;
  if (*(int *)(&DAT_1018bbc8 + DAT_1018bcc8 * 4) != 0) {
    *(undefined4 *)(*(int *)(&DAT_1018bbc8 + DAT_1018bcc8 * 4) + 4) = 0;
  }
  pTVar2 = (*(gEngfuncs.pEfxAPI)->R_TempModel)(param_1,param_3,&local_c,DAT_1018ca54,param_5,0);
  if (pTVar2 != (TEMPENTITY *)0x0) {
    uVar1 = pTVar2->flags;
    (pTVar2->entity).curstate.iuser1 = param_6;
    pTVar2->flags = uVar1 | 4;
    (pTVar2->entity).curstate.body = 0;
    (pTVar2->entity).curstate.iuser4 = 0xc;
    fVar3 = (float10)(*gEngfuncs.pfnRandomFloat)(-60.0,60.0);
    local_c = (float)(fVar3 * fVar3);
    fVar3 = (float10)(*gEngfuncs.pfnRandomFloat)(-60.0,60.0);
    (pTVar2->entity).baseline.angles[0] = local_c;
    (pTVar2->entity).baseline.angles[1] = (float)(fVar3 * fVar3);
    (pTVar2->entity).baseline.angles[2] = (float)(fVar3 * fVar3) * 0.5;
    DAT_1018bcc8 = DAT_1018bcc8 + 1;
    if ((0x3f < DAT_1018bcc8) || (DAT_1018bcc8 < 0)) {
      DAT_1018bcc8 = 0;
    }
  }
  return;
}

/* 100569a0  FUN_100569a0  (291 bytes)
 * undefined FUN_100569a0(int param_1)
 * called by: HUD_TempEntUpdate
 */
void __cdecl FUN_100569a0(int param_1)

{
  int iVar1;
  int iVar2;
  event_api_s *peVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar4;
  longlong lVar5;
  int in_stack_00000008;
  char *sample;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x3f8) == 1) {
    iVar2 = (*gEngfuncs.pfnRandomLong)(-5,5);
    lVar5 = __ftol();
    peVar3 = gEngfuncs.pEventAPI;
    iVar2 = iVar2 + (0x19 - (int)lVar5);
    (*gEngfuncs.pfnRandomFloat)(0.9,1.3);
    lVar5 = __ftol();
    param_1 = (int)lVar5;
    (*gEngfuncs.pfnRandomFloat)(0.1,0.3);
    sample = s_weapons_shell_wav_100963c0;
    fVar4 = extraout_ST0_00;
  }
  else {
    if (*(int *)(param_1 + 0x3f8) != 2) goto LAB_10056ab6;
    iVar2 = (*gEngfuncs.pfnRandomLong)(-5,5);
    lVar5 = __ftol();
    peVar3 = gEngfuncs.pEventAPI;
    iVar2 = iVar2 + (0x19 - (int)lVar5);
    (*gEngfuncs.pfnRandomFloat)(0.9,1.3);
    lVar5 = __ftol();
    param_1 = (int)lVar5;
    (*gEngfuncs.pfnRandomFloat)(0.1,0.3);
    sample = s_weapons_sshell_wav_100963d4;
    fVar4 = extraout_ST0;
  }
  (*peVar3->EV_PlaySound)
            (-1,(float *)(iVar1 + 0xb8c),0,sample,(float)fVar4,(float)param_1,in_stack_00000008,
             iVar2);
LAB_10056ab6:
  *(undefined4 *)(iVar1 + 0x3f8) = 0;
  return;
}

/* 10056b20  FUN_10056b20  (10 bytes)
 * undefined FUN_10056b20(void)
 */
void FUN_10056b20(void)

{
  FUN_10057f80((undefined4 *)&DAT_1018cac8);
  return;
}

/* 10056b30  FUN_10056b30  (12 bytes)
 * undefined FUN_10056b30(void)
 */
void FUN_10056b30(void)

{
  FUN_1006af63(0x10056b40);
  return;
}

/* 10056b90  FUN_10056b90  (10 bytes)
 * undefined FUN_10056b90(void)
 */
void FUN_10056b90(void)

{
  FUN_10050790((undefined4 *)&DAT_1018bde8);
  return;
}

/* 10056ba0  FUN_10056ba0  (12 bytes)
 * undefined FUN_10056ba0(void)
 */
void FUN_10056ba0(void)

{
  FUN_1006af63(0x10056bb0);
  return;
}

/* 10056bc0  FUN_10056bc0  (24 bytes)
 * undefined FUN_10056bc0(void)
 * called by: FUN_10056dd0
 */
void FUN_10056bc0(void)

{
  FUN_100507e0(&DAT_1018bde8,DAT_1018ca5c);
  DAT_1018d16a = 1;
  return;
}

/* 10056be0  FUN_10056be0  (52 bytes)
 * undefined FUN_10056be0(undefined4 * param_1, int param_2, uint param_3)
 * called by: FUN_1003d600, FUN_1003dfa0, FUN_1003f090, FUN_10040c20
 */
void __cdecl FUN_10056be0(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (param_3 & 0xff) + param_2 * 4;
  *param_1 = (&DAT_1018caf8)[iVar1 * 3];
  param_1[1] = (&DAT_1018cafc)[iVar1 * 3];
  param_1[2] = (&DAT_1018cb00)[iVar1 * 3];
  return;
}

/* 10056c20  FUN_10056c20  (417 bytes)
 * undefined FUN_10056c20(void)
 * called by: V_CalcRefdef
 */
void FUN_10056c20(void)

{
  int iVar1;
  code *pcVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float fVar3;
  
  iVar1 = (*gEngfuncs.GetMaxClients)();
  if ((iVar1 == 1) &&
     ((*gEngfuncs.pfnGetCvarFloat)(s_gl_fog_100937f4), extraout_ST0 == (float10)2.0)) {
    (*gEngfuncs.pfnGetCvarFloat)(s_gl_fog_red_100937c0);
    (*gEngfuncs.pfnGetCvarFloat)(s_gl_fog_green_100937b0);
    (*gEngfuncs.pfnGetCvarFloat)(s_gl_fog_blue_100937a4);
    glFogi();
    glFogfv();
    pcVar2 = glFogf_exref;
    glFogf(0xb62,0x3f800000);
    glHint(0xc54,0x1102);
    (*gEngfuncs.pfnGetCvarFloat)(s_gl_fog_start_100937e4);
    glFogf(0xb63,(float)extraout_ST0_00);
    (*gEngfuncs.pfnGetCvarFloat)(s_gl_fog_end_100937d0);
    fVar3 = (float)extraout_ST0_01;
  }
  else {
    if ((char)DAT_101893b8 == '\0') {
      return;
    }
    (*gEngfuncs.pfnGetCvarFloat)(s_gl_fog_100937f4);
    if (extraout_ST0_02 == (float10)0.0) {
      return;
    }
    iVar1 = (*DAT_100ea860)();
    if (iVar1 != 1) {
      return;
    }
    glFogi(0xb65);
    glFogfv(0xb66,&stack0xffffffec);
    pcVar2 = glFogf_exref;
    glFogf(0xb62,0x3f800000);
    glHint(0xc54,0x1102);
    glFogf(0xb63,DAT_101893bc);
    fVar3 = DAT_101893c0;
  }
  (*pcVar2)(0xb64,fVar3);
  glEnable(0xb60);
  return;
}

/* 10056dd0  FUN_10056dd0  (154 bytes)
 * void FUN_10056dd0(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10056dd0(void)

{
  int iVar1;
  
  if (DAT_1018d16a == '\0') {
    FUN_10057d50();
    FUN_10056bc0();
    FUN_10034eb0();
  }
  else if (*(float *)(DAT_100df464 + 0xc) != _DAT_1018cac4) {
    FUN_10057d50();
  }
  FUN_10056f60();
  FUN_10056e70();
  iVar1 = (*DAT_100ea860)();
  if (iVar1 != 0) {
    FUN_10055760();
  }
  FUN_1003de00();
  FUN_1003bad0();
  FUN_100520d0(&DAT_1018bde8);
  iVar1 = (*DAT_100ea860)();
  if (iVar1 != 0) {
    FUN_10054510();
  }
  FUN_10056f80();
  if (*(int *)(DAT_100df464 + 0xc) == 0x3f800000) {
    FUN_10057a70();
  }
  FUN_10034e60();
  glDisable(0xb60);
  return;
}

/* 10056e70  FUN_10056e70  (240 bytes)
 * undefined FUN_10056e70(void)
 * called by: FUN_10056dd0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10056e70(void)

{
  cl_entity_s *pcVar1;
  
  DAT_1018bdd0 = (*gEngfuncs.GetMaxClients)();
  DAT_1018bdd4 = 0;
  if (-1 < DAT_1018bdd0) {
    do {
      pcVar1 = (*gEngfuncs.GetEntityByIndex)(DAT_1018bdd4);
      _DAT_1018bd8c = pcVar1;
      if ((pcVar1 != (cl_entity_s *)0x0) && (pcVar1->player != 0)) {
        (&DAT_1018caf8)[DAT_1018bdd4 * 0xc] = pcVar1->attachment[0][0];
        (&DAT_1018cafc)[DAT_1018bdd4 * 0xc] = pcVar1->attachment[0][1];
        (&DAT_1018cb00)[DAT_1018bdd4 * 0xc] = pcVar1->attachment[0][2];
        (&DAT_1018cb04)[DAT_1018bdd4 * 0xc] = pcVar1->attachment[1][0];
        (&DAT_1018cb08)[DAT_1018bdd4 * 0xc] = pcVar1->attachment[1][1];
        (&DAT_1018cb0c)[DAT_1018bdd4 * 0xc] = pcVar1->attachment[1][2];
        (&DAT_1018cb10)[DAT_1018bdd4 * 0xc] = pcVar1->attachment[2][0];
        (&DAT_1018cb14)[DAT_1018bdd4 * 0xc] = pcVar1->attachment[2][1];
        (&DAT_1018cb18)[DAT_1018bdd4 * 0xc] = pcVar1->attachment[2][2];
        (&DAT_1018cb1c)[DAT_1018bdd4 * 0xc] = pcVar1->attachment[3][0];
        (&DAT_1018cb20)[DAT_1018bdd4 * 0xc] = pcVar1->attachment[3][1];
        (&DAT_1018cb24)[DAT_1018bdd4 * 0xc] = pcVar1->attachment[3][2];
      }
      DAT_1018bdd4 = DAT_1018bdd4 + 1;
    } while (DAT_1018bdd4 <= DAT_1018bdd0);
  }
  return;
}

/* 10056f60  FUN_10056f60  (30 bytes)
 * undefined FUN_10056f60(void)
 * called by: FUN_10056dd0
 */
void FUN_10056f60(void)

{
  (*gEngfuncs.pfnAngleVectors)
            ((float *)&DAT_101914d0,(float *)&DAT_1018bd90,(float *)&DAT_1018bd9c,
             (float *)&DAT_1018bda8);
  return;
}

/* 10056f80  FUN_10056f80  (18 bytes)
 * undefined FUN_10056f80(void)
 * called by: FUN_10056dd0
 */
void FUN_10056f80(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1018bd44;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  return;
}

/* 10056fa0  FUN_10056fa0  (19 bytes)
 * float10 FUN_10056fa0(float param_1)
 * called by: FUN_10029780, FUN_10035010, FUN_1003ab40, FUN_100464f0, FUN_10046680, FUN_10046bd0, FUN_10047130, FUN_10048e60, FUN_10048f60
 */
float10 __cdecl FUN_10056fa0(float param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_10055ac0(DAT_100963e8);
  return fVar1 * (float10)param_1;
}

/* 10056fc0  FUN_10056fc0  (234 bytes)
 * undefined4 FUN_10056fc0(float * param_1)
 * called by: FUN_10034fa0, HUD_AddEntity
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10056fc0(float *param_1)

{
  float *pfVar1;
  float10 fVar2;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c [3];
  
  pfVar1 = (float *)FUN_10057270(local_c);
  local_18 = *param_1 - *pfVar1;
  local_14 = param_1[1] - pfVar1[1];
  local_10 = param_1[2] - pfVar1[2];
  fVar2 = FUN_10058390(&local_18);
  _DAT_1018bcd4 = (float)fVar2;
  if (DAT_100cf978 < 0x50) {
    if ((DAT_100cf978 < 0xe) && (_DAT_1018bcd4 < 2048.0)) {
      return 3;
    }
    if ((DAT_100cf978 < 0x29) && (_DAT_1018bcd4 < 512.0)) {
      return 2;
    }
  }
  if (256.0 < _DAT_1018bcd4) {
    return 0;
  }
  if (_DAT_1018bcd4 <= 128.0) {
    if (_DAT_1018bcd4 <= 64.0) {
      return 3;
    }
    return 2;
  }
  return 1;
}

/* 100570b0  FUN_100570b0  (422 bytes)
 * undefined4 FUN_100570b0(float * param_1)
 * called by: FUN_10035010, FUN_100464f0, FUN_10046680, FUN_10046a70, FUN_10046bd0, FUN_10047130, FUN_10048840, FUN_10048f60, FUN_100492b0, FUN_10051d50, HUD_AddEntity
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100570b0(float *param_1)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined2 extraout_var;
  undefined4 uVar6;
  undefined2 extraout_var_00;
  float10 fVar7;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18 [3];
  undefined1 local_c [12];
  
  if ((DAT_1018bdcc & 1) == 0) {
    DAT_1018bdcc = DAT_1018bdcc | 1;
    FUN_1006af63(0x10057260);
  }
  pfVar4 = (float *)FUN_10057270(local_18);
  puVar5 = (undefined4 *)
           FUN_10009190(local_c,*param_1 - *pfVar4,param_1[1] - pfVar4[1],param_1[2] - pfVar4[2]);
  FUN_10002610(&local_24,puVar5);
  _DAT_1018bd80 = local_24;
  _DAT_1018bd84 = local_20;
  _DAT_1018bd88 = local_1c;
  fVar7 = FUN_10058390((float *)&DAT_1018bd80);
  _DAT_1018bce0 = (float)fVar7;
  fVar1 = (float10)300.0;
  uVar6 = CONCAT22(extraout_var,
                   (ushort)(fVar7 < fVar1) << 8 | (ushort)(NAN(fVar7) || NAN(fVar1)) << 10 |
                   (ushort)(fVar7 == fVar1) << 0xe);
  if (fVar7 < fVar1 == 0 && (fVar7 == fVar1) == 0) {
    FUN_10029e40((float *)&DAT_1018bd80);
    fVar2 = DAT_1018bd90 * _DAT_1018bd80 +
            _DAT_1018bd88 * DAT_1018bd98 + _DAT_1018bd84 * DAT_1018bd94;
    if (fVar2 < 0.0) {
      return CONCAT22(extraout_var_00,
                      (ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 |
                      (ushort)(fVar2 == 0.0) << 0xe);
    }
    fVar2 = _DAT_1018bd9c * _DAT_1018bd80 +
            _DAT_1018bda4 * _DAT_1018bd88 + _DAT_1018bda0 * _DAT_1018bd84;
    if (fVar2 <= 0.0) {
      fVar2 = -fVar2;
    }
    fVar3 = _DAT_1018bda8 * _DAT_1018bd80 +
            _DAT_1018bdb0 * _DAT_1018bd88 + _DAT_1018bdac * _DAT_1018bd84;
    if (fVar3 <= 0.0) {
      fVar3 = -fVar3;
    }
    _DAT_1018ca24 = 0x3f666666;
    _DAT_1018bcd0 = (_DAT_1018bce0 * 0.00012207031 * 0.2 + 1.0) * (fVar2 + fVar3 * 0.5);
    uVar6 = CONCAT22(extraout_var_00,
                     (ushort)(_DAT_1018bcd0 < 0.9) << 8 | (ushort)NAN(_DAT_1018bcd0) << 10 |
                     (ushort)(_DAT_1018bcd0 == 0.9) << 0xe);
    if (_DAT_1018bcd0 >= 0.9 && (_DAT_1018bcd0 == 0.9) == 0) {
      return uVar6;
    }
  }
  return CONCAT31((int3)((uint)uVar6 >> 8),1);
}

/* 10057270  FUN_10057270  (40 bytes)
 * undefined FUN_10057270(undefined4 * param_1)
 * called by: FUN_1003b250, FUN_1003b750, FUN_1003bb00, FUN_100464f0, FUN_10046680, FUN_10046bd0, FUN_10047130, FUN_100474b0, FUN_10048840, FUN_10048f60, FUN_1004acc0, FUN_10051270, ... (19 total)
 */
void __cdecl FUN_10057270(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = CL_IsThirdPerson();
  puVar2 = &DAT_10191440;
  if (iVar1 == 0) {
    puVar2 = &DAT_10190b28;
  }
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  return;
}

/* 100572a0  FUN_100572a0  (113 bytes)
 * int FUN_100572a0(undefined4 param_1, undefined4 param_2)
 * called by: FUN_100464f0, FUN_10046680, FUN_10046bd0, FUN_10047130, FUN_10048840, FUN_10048f60, FUN_10057330
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_100572a0(undefined4 param_1,float *param_2)

{
  _func_422 **pp_Var1;
  cl_entity_s *pcVar2;
  undefined2 extraout_var;
  uint3 uVar3;
  float *in_stack_0000000c;
  pmtrace_s *tr;
  
  if ((DAT_1018bd65 & 1) == 0) {
    DAT_1018bd65 = DAT_1018bd65 | 1;
    FUN_1006af63(0x10057320);
  }
  (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
  tr = (pmtrace_s *)&DAT_1018bd00;
  pp_Var1 = &(gEngfuncs.pEventAPI)->EV_PlayerTrace;
  pcVar2 = (*gEngfuncs.GetLocalPlayer)();
  (**pp_Var1)(in_stack_0000000c,param_2,4,pcVar2->index,tr);
  uVar3 = (uint3)(CONCAT22(extraout_var,
                           (ushort)(_DAT_1018bd10 < 1.0) << 8 | (ushort)NAN(_DAT_1018bd10) << 10 |
                           (ushort)(_DAT_1018bd10 == 1.0) << 0xe) >> 8);
  if ((_DAT_1018bd10 == 1.0) != 0) {
    return CONCAT31(uVar3,1);
  }
  return (uint)uVar3 << 8;
}

/* 10057330  FUN_10057330  (1092 bytes)
 * bool FUN_10057330(int param_1)
 * called by: HUD_AddEntity
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_10057330(int param_1)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *this;
  float *pfVar5;
  float *pfVar6;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [3];
  float local_24 [3];
  float local_18 [3];
  float local_c [3];
  
  if ((DAT_1018bde0 & 1) == 0) {
    DAT_1018bde0 = DAT_1018bde0 | 1;
    FUN_1006af63(0x10057780);
  }
  iVar1 = CL_IsThirdPerson();
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = CL_IsThirdPerson();
  if (iVar1 == 0) {
    pfVar2 = (float *)FUN_10057270(&local_3c);
    local_54 = *(float *)(param_1 + 0xb48) - *pfVar2;
    local_50 = *(float *)(param_1 + 0xb4c) - pfVar2[1];
    local_4c = *(float *)(param_1 + 0xb50) - pfVar2[2];
    FUN_10002610(&local_60,&local_54);
    if (SQRT(local_60 * local_60 + local_5c * local_5c + local_58 * local_58) < 256.0) {
      return true;
    }
  }
  pfVar2 = (float *)(param_1 + 0xb48);
  _DAT_1018bd68 = *pfVar2;
  _DAT_1018bd6c = *(float *)(param_1 + 0xb4c);
  _DAT_1018bd70 = *(float *)(param_1 + 0xb50);
  uVar3 = FUN_10057270(&local_3c);
  iVar1 = FUN_100572a0(&DAT_1018bd68,uVar3);
  if ((char)iVar1 != '\0') {
    return true;
  }
  puVar4 = (undefined4 *)FUN_1003d240(&DAT_1018bda8,local_30,32.0);
  FUN_10002610(&local_60,puVar4);
  puVar4 = (undefined4 *)FUN_1003d240(&DAT_1018bd9c,local_24,32.0);
  FUN_10002610(&local_54,puVar4);
  puVar4 = (undefined4 *)
           FUN_10009190(local_18,local_54 + *pfVar2,local_50 + *(float *)(param_1 + 0xb4c),
                        local_4c + *(float *)(param_1 + 0xb50));
  FUN_10002610(&local_48,puVar4);
  puVar4 = (undefined4 *)
           FUN_10009190(local_c,local_60 + local_48,local_5c + local_44,local_58 + local_40);
  FUN_10002610(&local_3c,puVar4);
  _DAT_1018bd68 = local_3c;
  _DAT_1018bd6c = local_38;
  _DAT_1018bd70 = local_34;
  uVar3 = FUN_10057270(local_c);
  iVar1 = FUN_100572a0(&DAT_1018bd68,uVar3);
  if ((char)iVar1 != '\0') {
    return true;
  }
  puVar4 = (undefined4 *)FUN_1003d240(&DAT_1018bda8,local_c,32.0);
  FUN_10002610(&local_54,puVar4);
  puVar4 = (undefined4 *)FUN_1003d240(&DAT_1018bd9c,local_18,32.0);
  FUN_10002610(&local_3c,puVar4);
  puVar4 = (undefined4 *)
           FUN_10009190(local_24,*pfVar2 - local_3c,*(float *)(param_1 + 0xb4c) - local_38,
                        *(float *)(param_1 + 0xb50) - local_34);
  FUN_10002610(&local_48,puVar4);
  puVar4 = (undefined4 *)
           FUN_10009190(local_30,local_48 - local_54,local_44 - local_50,local_40 - local_4c);
  FUN_10002610(&local_60,puVar4);
  _DAT_1018bd68 = local_60;
  _DAT_1018bd6c = local_5c;
  _DAT_1018bd70 = local_58;
  uVar3 = FUN_10057270(local_c);
  iVar1 = FUN_100572a0(&DAT_1018bd68,uVar3);
  if ((char)iVar1 != '\0') {
    return true;
  }
  puVar4 = (undefined4 *)FUN_1003d240(&DAT_1018bda8,local_c,32.0);
  FUN_10002610(&local_54,puVar4);
  puVar4 = (undefined4 *)FUN_1003d240(&DAT_1018bd9c,local_18,32.0);
  FUN_10002610(&local_3c,puVar4);
  puVar4 = (undefined4 *)
           FUN_10009190(local_24,local_3c + *pfVar2,local_38 + *(float *)(param_1 + 0xb4c),
                        local_34 + *(float *)(param_1 + 0xb50));
  FUN_10002610(&local_48,puVar4);
  puVar4 = (undefined4 *)
           FUN_10009190(local_30,local_48 - local_54,local_44 - local_50,local_40 - local_4c);
  FUN_10002610(&local_60,puVar4);
  _DAT_1018bd68 = local_60;
  _DAT_1018bd6c = local_5c;
  _DAT_1018bd70 = local_58;
  uVar3 = FUN_10057270(local_c);
  iVar1 = FUN_100572a0(&DAT_1018bd68,uVar3);
  if ((char)iVar1 != '\0') {
    return true;
  }
  puVar4 = (undefined4 *)FUN_1003d240(&DAT_1018bda8,local_c,32.0);
  FUN_10002610(&local_3c,puVar4);
  puVar4 = (undefined4 *)FUN_1003d240(&DAT_1018bd9c,local_18,32.0);
  FUN_10002610(&local_48,puVar4);
  pfVar6 = &local_3c;
  pfVar5 = local_24;
  this = (void *)FUN_1003d200(pfVar2,local_30,&local_48);
  puVar4 = (undefined4 *)FUN_10035b10(this,pfVar5,pfVar6);
  _DAT_1018bd68 = (float)*puVar4;
  _DAT_1018bd6c = (float)puVar4[1];
  _DAT_1018bd70 = (float)puVar4[2];
  uVar3 = FUN_10057270(local_c);
  iVar1 = FUN_100572a0(&DAT_1018bd68,uVar3);
  return (char)iVar1 != '\0';
}

/* 10057790  FUN_10057790  (368 bytes)
 * uint FUN_10057790(int param_1)
 * called by: HUD_AddEntity
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_10057790(int param_1)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 *puVar4;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c [3];
  
  if ((DAT_1018bdc4 & 1) == 0) {
    DAT_1018bdc4 = DAT_1018bdc4 | 1;
    FUN_1006af63(0x10057900);
  }
  pfVar2 = (float *)FUN_10057270(local_c);
  local_18 = *(float *)(param_1 + 0xb48) - *pfVar2;
  local_14 = *(float *)(param_1 + 0xb4c) - pfVar2[1];
  local_10 = *(float *)(param_1 + 0xb50) - pfVar2[2];
  FUN_10002610(&local_24,&local_18);
  _DAT_1018ca1c = local_20;
  _DAT_1018ca18 = local_24;
  _DAT_1018ca20 = local_1c;
  _DAT_1018bde4 = SQRT(local_20 * local_20 + local_1c * local_1c + local_24 * local_24);
  uVar3 = CONCAT22((short)((uint)local_20 >> 0x10),
                   (ushort)(_DAT_1018bde4 < 256.0) << 8 | (ushort)NAN(_DAT_1018bde4) << 10 |
                   (ushort)(_DAT_1018bde4 == 256.0) << 0xe);
  if (_DAT_1018bde4 < 256.0 == 0 && (_DAT_1018bde4 == 256.0) == 0) {
    if (_DAT_1018bde4 == 0.0) {
      puVar4 = (undefined4 *)FUN_1001fb70(local_c,0,0,1);
    }
    else {
      fVar1 = 1.0 / _DAT_1018bde4;
      puVar4 = (undefined4 *)
               FUN_10009190(&local_18,local_24 * fVar1,local_20 * fVar1,local_1c * fVar1);
    }
    FUN_10002610(&local_24,puVar4);
    _DAT_1018ca1c = local_20;
    _DAT_1018ca18 = local_24;
    _DAT_1018ca20 = local_1c;
    fVar1 = DAT_1018bd90 * local_24 + DAT_1018bd98 * local_1c + DAT_1018bd94 * local_20;
    uVar3 = CONCAT22((short)((uint)local_20 >> 0x10),
                     (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                     (ushort)(fVar1 == 0.0) << 0xe);
    if (fVar1 < 0.0) {
      return uVar3;
    }
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}

/* 10057910  FUN_10057910  (133 bytes)
 * undefined4 FUN_10057910(float * param_1, int param_2)
 * called by: FUN_100492b0, HUD_AddEntity
 */
undefined4 __cdecl FUN_10057910(float *param_1,int param_2)

{
  float *pfVar1;
  float10 fVar2;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c [3];
  
  if (DAT_100cf978 < 0x28) {
    param_2 = param_2 * 2;
  }
  pfVar1 = (float *)FUN_10057270(local_c);
  local_18 = *param_1 - *pfVar1;
  local_14 = param_1[1] - pfVar1[1];
  local_10 = param_1[2] - pfVar1[2];
  fVar2 = FUN_10058390(&local_18);
  if (fVar2 < (float10)param_2) {
    return 0;
  }
  return 1;
}

/* 100579a0  FUN_100579a0  (23 bytes)
 * undefined1 FUN_100579a0(int param_1)
 * called by: FUN_1003b750, FUN_1003d600, FUN_1003dfa0, FUN_1003f090, FUN_10040c20, FUN_10055760
 */
undefined1 __cdecl FUN_100579a0(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x21)) {
    return *(undefined1 *)((int)&DAT_1018bd44 + param_1);
  }
  return 0;
}

/* 100579c0  FUN_100579c0  (153 bytes)
 * undefined FUN_100579c0(undefined4 param_1, undefined4 * param_2, undefined4 * param_3)
 * called by: FUN_1003bb00, FUN_10049fc0, FUN_1004b470, FUN_1004e6f0, FUN_1004e9f0
 */
void __cdecl FUN_100579c0(float *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((DAT_1018bcdc & 1) == 0) {
    DAT_1018bcdc = DAT_1018bcdc | 1;
    FUN_1006af63(0x10057a60);
  }
  iVar1 = (*(gEngfuncs.pTriAPI)->WorldToScreen)(param_1,(float *)&DAT_1018bce8);
  if (iVar1 != 0) {
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
    return;
  }
  lVar2 = __ftol();
  *param_2 = (int)lVar2;
  lVar2 = __ftol();
  *param_3 = (int)lVar2;
  return;
}

/* 10057a70  FUN_10057a70  (733 bytes)
 * undefined FUN_10057a70(void)
 * called by: FUN_10056dd0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10057a70(void)

{
  float *pfVar1;
  float10 extraout_ST0;
  float10 fVar2;
  
  (*gEngfuncs.GetClientTime)();
  _DAT_1018bdd8 = (float)extraout_ST0;
  if (_DAT_1018ca64 <= _DAT_1018bdd8) {
    _DAT_1018ca64 = _DAT_1018bdd8 + 0.1;
    (&DAT_1018ca6c)[DAT_1018cabc] = DAT_10191478 * 100.0;
    DAT_1018cabc = DAT_1018cabc + 1;
    if (0x13 < DAT_1018cabc) {
      DAT_1018cabc = 0;
    }
    if (_DAT_1018ca68 <= _DAT_1018bdd8) {
      _DAT_1018ca68 = _DAT_1018bdd8 + 1.0;
      _DAT_1018cac0 = 0.0;
      pfVar1 = (float *)&DAT_1018ca6c;
      _DAT_1018bcd8 = 0x14;
      do {
        _DAT_1018cac0 = _DAT_1018cac0 + *pfVar1;
        pfVar1 = pfVar1 + 1;
      } while ((int)pfVar1 < 0x1018cabc);
      _DAT_1018cac0 = _DAT_1018cac0 * 0.05;
      if ((3.33 <= _DAT_1018cac0) || (1.11 <= _DAT_1018cac0)) {
        if (3.33 <= _DAT_1018cac0) {
          fVar2 = (float10)3.33;
        }
        else {
          fVar2 = (float10)_DAT_1018cac0;
        }
      }
      else {
        fVar2 = (float10)1.11;
      }
      fVar2 = (fVar2 - (float10)1.11) * (float10)0.45045045;
      _DAT_1018bd74 = (float)fVar2;
      fVar2 = (float10)1.0 - fVar2;
      _DAT_1018ca28 = (float)fVar2;
      if (fVar2 != (float10)0.0) {
        DAT_1018ca58 = 0.3 <= _DAT_1018ca28;
        DAT_1018ca59 = !(bool)DAT_1018ca58;
        DAT_1018ca40 = _DAT_1018ca28;
        if (_DAT_1018ca28 <= 0.25) {
          DAT_1018ca40 = 0.25;
        }
        DAT_1018ca44 = 0.05 / _DAT_1018ca28;
        if (0.3 <= DAT_1018ca44) {
          DAT_1018ca44 = 0.3;
        }
        _DAT_1018ca50 = _DAT_1018ca28 + _DAT_1018ca28;
        if (_DAT_1018ca50 <= 0.1) {
          _DAT_1018ca50 = 0.1;
        }
        DAT_1018ca54 = _DAT_1018ca28 * 30.0;
        if (DAT_1018ca54 <= 2.0) {
          DAT_1018ca54 = 2.0;
        }
        if (0.374 <= _DAT_1018ca28) {
          if (0.599 <= _DAT_1018ca28) {
            DAT_1018ca60 = 2;
            if (0.749 <= _DAT_1018ca28) {
              DAT_1018ca60 = 1;
            }
          }
          else {
            DAT_1018ca60 = 4;
          }
        }
        else {
          DAT_1018ca60 = 6;
        }
        DAT_1018ca5a = 1;
        DAT_1018ca48 = DAT_1018ca44;
        _DAT_1018ca4c = DAT_1018ca44;
        if (_DAT_1018ca28 <= 0.374) {
          DAT_1018ca5a = 0;
        }
      }
    }
  }
  return;
}

/* 10057d50  FUN_10057d50  (260 bytes)
 * undefined FUN_10057d50(void)
 * called by: FUN_10056dd0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10057d50(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1018ca40;
  for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if ((*(int *)(DAT_100df464 + 0xc) != 0x40000000) && (*(int *)(DAT_100df464 + 0xc) != 0x3f800000))
  {
    DAT_1018ca59 = 1;
    DAT_1018ca5c = 0x800;
    DAT_1018ca40 = 0x3eb33333;
    DAT_1018ca44 = 0x3e4ccccd;
    DAT_1018ca48 = 0x3e99999a;
    _DAT_1018ca4c = 0x3e4ccccd;
    DAT_1018ca58 = 0;
    _DAT_1018ca50 = 0x3f333333;
    DAT_1018ca54 = 0x40a00000;
    DAT_1018ca5a = 0;
    DAT_1018ca60 = 8;
    _DAT_1018cac4 = *(undefined4 *)(DAT_100df464 + 0xc);
    return;
  }
  DAT_1018ca59 = 0;
  DAT_1018ca5c = 0x1000;
  DAT_1018ca40 = 0x3f800000;
  DAT_1018ca44 = 0x3d4ccccd;
  DAT_1018ca48 = 0x3d4ccccd;
  _DAT_1018ca4c = 0x3d4ccccd;
  DAT_1018ca58 = 1;
  _DAT_1018ca50 = 0x3fc00000;
  DAT_1018ca54 = 0x41f00000;
  DAT_1018ca5a = 1;
  DAT_1018ca60 = 1;
  _DAT_1018cac4 = *(undefined4 *)(DAT_100df464 + 0xc);
  return;
}

/* 10057e60  FUN_10057e60  (36 bytes)
 * undefined FUN_10057e60(undefined4 param_1)
 * called by: FUN_10008b30, FUN_10009ee0, FUN_1000a1f0, FUN_1000a270, FUN_1000af10
 */
void __cdecl FUN_10057e60(float *param_1)

{
  if (DAT_10099114 != 0) {
    (*gEngfuncs.pfnAngleVectors)
              (param_1,(float *)(DAT_10099114 + 0x28),(float *)(DAT_10099114 + 0x40),
               (float *)(DAT_10099114 + 0x34));
  }
  return;
}

/* 10057e90  FUN_10057e90  (61 bytes)
 * float10 FUN_10057e90(float param_1, float param_2, float param_3)
 * called by: FUN_10067890
 */
float10 __cdecl FUN_10057e90(float param_1,float param_2,float param_3)

{
  if (param_3 < param_1 - param_2) {
    return (float10)param_2 + (float10)param_3;
  }
  if (param_1 - param_2 < -param_3) {
    return (float10)param_2 - (float10)param_3;
  }
  return (float10)param_1;
}

/* 10057ed0  FUN_10057ed0  (173 bytes)
 * undefined FUN_10057ed0(float * param_1, float * param_2, float * param_3, float param_4)
 * called by: FUN_10067890
 */
void __cdecl FUN_10057ed0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *param_3 = *param_1 - *param_2;
  fVar2 = param_1[1] - param_2[1];
  param_3[1] = fVar2;
  if (0.01 <= fVar2 * fVar2 + *param_3 * *param_3) {
    fVar2 = param_4 * 15.0;
    fVar3 = fVar2;
    if (1.0 < fVar2) {
      fVar3 = 1.0;
    }
    fVar1 = *param_3;
    *param_3 = fVar3 * fVar1;
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    param_3[1] = param_3[1] * fVar2;
    *param_2 = fVar3 * fVar1 + *param_2;
    param_2[1] = param_2[1] + param_3[1];
    return;
  }
  param_2[1] = 0.0;
  *param_2 = 0.0;
  param_1[1] = 0.0;
  *param_1 = 0.0;
  param_3[1] = 0.0;
  *param_3 = 0.0;
  return;
}

/* 10057f80  FUN_10057f80  (18 bytes)
 * undefined4 * FUN_10057f80(undefined4 * param_1)
 * called by: FUN_10056b20
 */
undefined4 * __fastcall FUN_10057f80(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

/* 10057fa0  FUN_10057fa0  (92 bytes)
 * undefined FUN_10057fa0(float param_1, float param_2, float param_3)
 * called by: FUN_10008230, FUN_10009ee0, FUN_1000a270, FUN_1000af10
 */
void __thiscall FUN_10057fa0(void *this,float param_1,float param_2,float param_3)

{
  float10 fVar1;
  
  *(float *)((int)this + 0x1c) = param_2;
  *(float *)((int)this + 0x20) = param_3;
  *(float *)((int)this + 0x18) = param_1;
  *(float *)((int)this + 0x24) = 1.0 / param_3;
  fVar1 = (float10)(*gEngfuncs.pfnRandomFloat)(-param_1,param_1);
  *(float *)this = (float)fVar1;
  fVar1 = (float10)(*gEngfuncs.pfnRandomFloat)(-param_1,param_1);
  *(float *)((int)this + 4) = (float)fVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

/* 10058000  FUN_10058000  (447 bytes)
 * undefined FUN_10058000(float * param_1, float param_2)
 * called by: FUN_10067890
 */
void __thiscall FUN_10058000(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar2 = DAT_100963e8 * param_2;
  if (*(float *)((int)this + 0x1c) <= 0.0) {
    local_24 = DAT_10098a28;
    local_4 = 20.0;
    local_20 = DAT_10098a2c;
    local_1c = DAT_10098a30;
  }
  else {
    *(float *)((int)this + 0x1c) = *(float *)((int)this + 0x1c) - fVar2;
    fVar1 = *(float *)((int)this + 0x24) - fVar2;
    *(float *)((int)this + 0x24) = fVar1;
    if (fVar1 < 0.0) {
      *(float *)((int)this + 0x24) = 1.0 / *(float *)((int)this + 0x20);
      local_20 = -*(float *)((int)this + 4);
      local_1c = -*(float *)((int)this + 8);
      local_18 = -*(float *)this * 0.5;
      local_14 = local_20 * 0.5;
      local_10 = local_1c * 0.5;
      FUN_10002610(&local_24,&local_18);
      *(float *)this = local_24;
      *(float *)((int)this + 4) = local_20;
      *(float *)((int)this + 8) = local_1c;
    }
    local_4 = *(float *)((int)this + 0x20);
    local_24 = *(float *)this;
    local_20 = *(float *)((int)this + 4);
    local_1c = *(float *)((int)this + 8);
  }
  local_4 = local_4 * fVar2;
  if (1.0 <= local_4) {
    local_4 = 1.0;
  }
  local_14 = local_20 - *(float *)((int)this + 0x10);
  local_10 = local_1c - *(float *)((int)this + 0x14);
  local_c = (local_24 - *(float *)((int)this + 0xc)) * local_4;
  local_8 = local_14 * local_4;
  local_4 = local_10 * local_4;
  FUN_10002610(&local_24,&local_c);
  local_c = local_24 + *(float *)((int)this + 0xc);
  local_8 = local_20 + *(float *)((int)this + 0x10);
  local_4 = local_1c + *(float *)((int)this + 0x14);
  FUN_10002610(&local_18,&local_c);
  *(float *)((int)this + 0xc) = local_18;
  *(float *)((int)this + 0x10) = local_14;
  *(float *)((int)this + 0x14) = local_10;
  *param_1 = local_24 + *param_1;
  param_1[1] = local_20 + param_1[1];
  param_1[2] = local_1c + param_1[2];
  return;
}

/* 100581c0  FUN_100581c0  (304 bytes)
 * undefined FUN_100581c0(int param_1, int param_2)
 * called by: FUN_1000acd0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100581c0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = FUN_100071c0(param_1);
  iVar2 = param_1 * 0x30 + param_2;
  _DAT_100d142c = *(undefined4 *)(iVar2 + 4);
  DAT_100d142a = *(undefined1 *)(iVar2 + 2);
  _DAT_100d1438 = *(undefined4 *)(iVar2 + 0x10);
  if ((*(byte *)((int)puVar1 + 0x85) < 0x11) && (*(byte *)(puVar1 + 0x21) < 0xb)) {
    *(int *)(&DAT_100d0e04 +
            ((uint)*(byte *)((int)puVar1 + 0x85) * 0xb + (uint)*(byte *)(puVar1 + 0x21)) * 8) =
         param_1;
    *(undefined4 *)
     (&DAT_100d0e08 +
     ((uint)*(byte *)((int)puVar1 + 0x85) * 0xb + (uint)*(byte *)(puVar1 + 0x21)) * 8) =
         *(undefined4 *)(iVar2 + 4);
  }
  iVar2 = puVar1[0x32];
  if (iVar2 != -1) {
    puVar3 = FUN_100071c0(iVar2);
    if ((*(byte *)((int)puVar3 + 0x85) < 0x11) && (*(byte *)(puVar3 + 0x21) < 0xb)) {
      *(undefined4 *)
       (&DAT_100d0e08 +
       ((uint)*(byte *)((int)puVar3 + 0x85) * 0xb + (uint)*(byte *)(puVar3 + 0x21)) * 8) =
           *(undefined4 *)(iVar2 * 0x30 + 4 + param_2);
    }
  }
  iVar2 = puVar1[0x33];
  if ((iVar2 != -1) && (iVar2 != param_1)) {
    puVar1 = FUN_100071c0(iVar2);
    if ((*(byte *)((int)puVar1 + 0x85) < 0x11) && (*(byte *)(puVar1 + 0x21) < 0xb)) {
      *(undefined4 *)
       (&DAT_100d0e08 +
       ((uint)*(byte *)((int)puVar1 + 0x85) * 0xb + (uint)*(byte *)(puVar1 + 0x21)) * 8) =
           *(undefined4 *)(iVar2 * 0x30 + 4 + param_2);
    }
  }
  return;
}

/* 100582f0  FUN_100582f0  (99 bytes)
 * undefined FUN_100582f0(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4)
 * called by: FUN_1003bb00, FUN_1003d600, FUN_1004e6f0
 */
void __cdecl FUN_100582f0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_1 == 1) {
    *param_2 = 0;
    *param_3 = 0xcd;
    *param_4 = 0;
    return;
  }
  if (param_1 != 2) {
    *param_2 = 0xff;
    *param_3 = 0x19;
    *param_4 = 0x19;
    return;
  }
  *param_2 = 0;
  *param_3 = 0x78;
  *param_4 = 0xff;
  return;
}

/* 10058390  FUN_10058390  (34 bytes)
 * float10 FUN_10058390(float * param_1)
 * called by: FUN_10024160, FUN_10029d70, FUN_1002a3a0, FUN_1002aca0, FUN_1002c790, FUN_1002dba0, FUN_1003b250, FUN_1003b750, FUN_100450c0, FUN_100474b0, FUN_10051270, FUN_10051d50, ... (21 total)
 */
float10 __cdecl FUN_10058390(float *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)0.0;
  iVar2 = 3;
  do {
    fVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
    fVar3 = (float10)fVar1 * (float10)fVar1 + fVar3;
  } while (iVar2 != 0);
  return SQRT(fVar3);
}

/* 100583c0  FUN_100583c0  (27 bytes)
 * undefined FUN_100583c0(float * param_1)
 */
void __cdecl FUN_100583c0(float *param_1)

{
  *param_1 = -*param_1;
  param_1[1] = -param_1[1];
  param_1[2] = -param_1[2];
  return;
}

/* 100583e0  FUN_100583e0  (37 bytes)
 * undefined FUN_100583e0(float * param_1, float param_2, float * param_3)
 * called by: FUN_100240b0, FUN_10024160, FUN_1002b310, FUN_1002bb70, FUN_1002be80, FUN_1002c790, FUN_1002d1b0, FUN_1002d7e0, FUN_1002dba0, FUN_1002e1c0, FUN_10053510, FUN_10053fd0, ... (16 total)
 */
void __cdecl FUN_100583e0(float *param_1,float param_2,float *param_3)

{
  *param_3 = param_2 * *param_1;
  param_3[1] = param_2 * param_1[1];
  param_3[2] = param_2 * param_1[2];
  return;
}

/* 10058410  FUN_10058410  (49 bytes)
 * undefined FUN_10058410(float * param_1, float param_2, float * param_3, float * param_4)
 * called by: FUN_10003300, FUN_10024160, FUN_1002bb70, FUN_1002bfe0, FUN_1002c6c0, FUN_1002c790, FUN_1002d1b0, FUN_1002daf0, FUN_1002dc10, FUN_10051d50, FUN_10067890, FUN_10068c00, ... (14 total)
 */
void __cdecl FUN_10058410(float *param_1,float param_2,float *param_3,float *param_4)

{
  *param_4 = param_2 * *param_3 + *param_1;
  param_4[1] = param_2 * param_3[1] + param_1[1];
  param_4[2] = param_2 * param_3[2] + param_1[2];
  return;
}

/* 10058450  FUN_10058450  (71 bytes)
 * undefined FUN_10058450(byte.conflict * param_1)
 * called by: FUN_10021aa0
 */
void __cdecl FUN_10058450(byte_conflict *param_1)

{
  char local_100 [256];
  
  FUN_1006ac7a(local_100,param_1);
  (*gEngfuncs.pfnSPR_Load)(local_100);
  return;
}

/* 100584a0  FUN_100584a0  (227 bytes)
 * Panel * FUN_100584a0(Panel * param_1)
 * called by: FUN_100191b0
 */
Panel * __fastcall FUN_100584a0(Panel *param_1)

{
  Panel *pPVar1;
  Label *this;
  ImagePanel *this_00;
  
  vgui::Panel::Panel(param_1);
  pPVar1 = param_1 + 0xbc;
  this = (Label *)(param_1 + 200);
  *(undefined ***)pPVar1 = &PTR_LAB_1007c5dc;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  vgui::Label::Label(this,s_);
  this_00 = (ImagePanel *)(param_1 + 0x198);
  vgui::ImagePanel::ImagePanel(this_00,(Image *)0x0);
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined ***)param_1 = &PTR_setPos_1007d898;
  *(undefined ***)pPVar1 = &PTR_LAB_1007d86c;
  param_1[0x260] = (Panel)0x0;
  param_1[0x261] = (Panel)0x0;
  param_1[0xc4] = (Panel)0x1;
  (**(code **)(*(int *)this + 0x40))(param_1);
  (**(code **)(*(int *)this + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(*(int *)this + 300))(0,0,0,0xff);
  (**(code **)(*(int *)this + 0x70))(-(uint)(param_1 != (Panel *)0x0) & (uint)pPVar1);
  (**(code **)(*(int *)this_00 + 0x40))(param_1);
  (**(code **)(*(int *)this_00 + 0x70))(-(uint)(param_1 != (Panel *)0x0) & (uint)pPVar1);
  vgui::Panel::setPaintBackgroundEnabled(param_1,false);
  return param_1;
}

/* 10058590  FUN_10058590  (21 bytes)
 * undefined FUN_10058590(int * param_1)
 * called by: Unwind@10077890
 */
void __fastcall FUN_10058590(int *param_1)

{
  *param_1 = (int)&PTR_setPos_1007d898;
  param_1[0x2f] = (int)&PTR_LAB_1007d86c;
  FUN_100585f0(param_1);
  return;
}

/* 100585b0  FUN_100585b0  (61 bytes)
 * undefined FUN_100585b0(undefined4 param_1, undefined4 param_2)
 */
void __thiscall FUN_100585b0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_100585f0(this);
  uVar1 = FUN_1005b8d0(param_1);
  *(undefined4 *)((int)this + 600) = uVar1;
  uVar1 = FUN_1005b8d0(param_2);
  *(undefined4 *)((int)this + 0x25c) = uVar1;
  *(undefined1 *)((int)this + 0x260) = 1;
  FUN_10058730(this);
  return;
}

/* 100585f0  FUN_100585f0  (76 bytes)
 * undefined FUN_100585f0(int * param_1)
 * called by: FUN_10058590, FUN_100585b0
 */
void __fastcall FUN_100585f0(int *param_1)

{
  if ((char)param_1[0x98] != '\0') {
    FUN_1006ad4c((LPVOID)param_1[0x96]);
    FUN_1006ad4c((LPVOID)param_1[0x97]);
  }
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  FUN_10058730(param_1);
  return;
}

/* 10058640  FUN_10058640  (18 bytes)
 * undefined FUN_10058640(undefined1 param_1)
 */
void __thiscall FUN_10058640(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0xc4) = param_1;
  FUN_10058730(this);
  return;
}

