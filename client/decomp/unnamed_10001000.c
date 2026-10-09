/* client.dll - unnamed_10001000 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001000  FUN_10001000  (216 bytes)
 * undefined * FUN_10001000(int param_1)
 * called by: FUN_10001180
 */
undefined * __cdecl FUN_10001000(int param_1)

{
  if (*(int *)(param_1 + 0x8c) == 1) {
    if (*(float *)(DAT_100987ac + 0xc) == 0.0) {
      (*gEngfuncs.pfnRandomLong)(0,2);
      FUN_1006ac7a(&DAT_1009878c,(byte_conflict *)s__break_i_100910f4);
      return &DAT_1009878c;
    }
  }
  else if (*(int *)(param_1 + 0x68) == 0) {
    if (*(float *)(DAT_100987ac + 0xc) == 0.0) {
      (*gEngfuncs.pfnRandomLong)(0,4);
      FUN_1006ac7a(&DAT_1009878c,(byte_conflict *)s__shot_i_100910d4);
      return &DAT_1009878c;
    }
  }
  else if (*(float *)(DAT_100987ac + 0xc) == 0.0) {
    FUN_1006ac7a(&DAT_1009878c,(byte_conflict *)s__bproof1_100910e8);
    return &DAT_1009878c;
  }
  (*gEngfuncs.pfnRandomLong)(0,0x11);
  FUN_1006ac7a(&DAT_1009878c,(byte_conflict *)s__splat_i_100910dc);
  return &DAT_1009878c;
}

/* 100010e0  FUN_100010e0  (149 bytes)
 * undefined FUN_100010e0(int param_1, char * param_2)
 * called by: FUN_10001180
 */
void __cdecl FUN_100010e0(int param_1,char *param_2)

{
  _func_678 **pp_Var1;
  _func_676 **pp_Var2;
  physent_s *ppVar3;
  int iVar4;
  float *unaff_EBX;
  int unaff_EDI;
  float10 extraout_ST0;
  int unaff_retaddr;
  char *in_stack_0000000c;
  int entity;
  
  ppVar3 = (*(gEngfuncs.pEventAPI)->EV_GetPhysent)(*(int *)(param_1 + 0x30));
  if ((((in_stack_0000000c != (char *)0x0) && (*in_stack_0000000c != '\0')) &&
      (ppVar3 != (physent_s *)0x0)) && ((ppVar3->solid == 4 || (ppVar3->movetype == 0xd)))) {
    (*gEngfuncs.pfnGetCvarFloat)(s_r_decals_10091100);
    if (extraout_ST0 != (float10)0.0) {
      entity = 0;
      pp_Var1 = &(gEngfuncs.pEfxAPI)->R_DecalShoot;
      pp_Var2 = &(gEngfuncs.pEfxAPI)->Draw_DecalIndex;
      (*(gEngfuncs.pEventAPI)->EV_IndexFromTrace)((pmtrace_s *)param_1);
      iVar4 = (*(gEngfuncs.pEfxAPI)->Draw_DecalIndexFromName)(in_stack_0000000c);
      iVar4 = (**pp_Var2)(iVar4);
      (**pp_Var1)(iVar4,entity,unaff_EDI,unaff_EBX,unaff_retaddr);
    }
  }
  return;
}

/* 10001180  FUN_10001180  (49 bytes)
 * undefined FUN_10001180(int param_1)
 * called by: FUN_10035d40, FUN_100450c0
 */
void __cdecl FUN_10001180(int param_1)

{
  physent_s *ppVar1;
  char *pcVar2;
  
  ppVar1 = (*(gEngfuncs.pEventAPI)->EV_GetPhysent)(*(int *)(param_1 + 0x30));
  if ((ppVar1 != (physent_s *)0x0) && (ppVar1->solid == 4)) {
    pcVar2 = FUN_10001000((int)ppVar1);
    FUN_100010e0(param_1,pcVar2);
  }
  return;
}

/* 100025e0  FUN_100025e0  (42 bytes)
 * undefined FUN_100025e0(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)
 * called by: FUN_100176b0, FUN_1001ab80, FUN_10034f00, FUN_1003bb00, FUN_100507e0, FUN_10054510, FUN_10055500
 */
void FUN_100025e0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  if (-1 < param_3 + -1) {
    do {
      (*(code *)param_4)();
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

/* 10002610  FUN_10002610  (25 bytes)
 * undefined FUN_10002610(undefined4 * param_1)
 * called by: FUN_10008e50, FUN_100091e0, FUN_100096f0, FUN_1001f8e0, FUN_10035010, FUN_10035d40, FUN_1003b250, FUN_1003b750, FUN_1003bb00, FUN_1003d280, FUN_1003d600, FUN_1003dfa0, ... (37 total)
 */
void __thiscall FUN_10002610(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return;
}

/* 10003240  FUN_10003240  (183 bytes)
 * undefined FUN_10003240(void)
 */
void FUN_10003240(void)

{
  (*gEngfuncs.pfnHookEvent)(s_events_fire_sc_100911cc,FUN_1003de40);
  (*gEngfuncs.pfnHookEvent)(s_events_firelinked_sc_100911b4,FUN_1003de10);
  (*gEngfuncs.pfnHookEvent)(s_events_empty_sc_100911a4,(pfnEvent *)&LAB_100424e0);
  (*gEngfuncs.pfnHookEvent)(s_events_pump_sc_10091194,(pfnEvent *)&LAB_100419a0);
  (*gEngfuncs.pfnHookEvent)(s_events_closecombat_sc_1009117c,(pfnEvent *)&LAB_10043200);
  (*gEngfuncs.pfnHookEvent)(s_events_coldcock_sc_10091168,(pfnEvent *)&LAB_10043800);
  (*gEngfuncs.pfnHookEvent)(s_events_reload_sc_10091154,(pfnEvent *)&LAB_10042690);
  (*gEngfuncs.pfnHookEvent)(s_events_knife_sc_10091144,(pfnEvent *)&LAB_10043c90);
  (*gEngfuncs.pfnHookEvent)(s_events_katana_sc_10091130,(pfnEvent *)&LAB_10044230);
  (*gEngfuncs.pfnHookEvent)(s_events_draw_sc_10091120,FUN_100425b0);
  (*gEngfuncs.pfnHookEvent)(s_events_grenade_sc_1009110c,FUN_10042630);
  return;
}

/* 10003300  FUN_10003300  (313 bytes)
 * undefined FUN_10003300(void)
 * called by: FUN_10003440
 */
void FUN_10003300(void)

{
  int iVar1;
  cl_entity_s *pcVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined4 uStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float afStack_60 [4];
  float afStack_50 [15];
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  float afStack_8 [2];
  
  pcVar2 = (*gEngfuncs.GetLocalPlayer)();
  iVar1 = pcVar2->index;
  (*gEngfuncs.GetViewAngles)(&fStack_68);
  FUN_100037e0(&uStack_88);
  (*gEngfuncs.pfnAngleVectors)(&fStack_64,&fStack_7c,afStack_8,&fStack_14);
  fStack_84 = fStack_78;
  fStack_80 = fStack_74;
  fStack_7c = fStack_70;
  FUN_10058410(&fStack_84,2048.0,&fStack_6c,afStack_60);
  (*(gEngfuncs.pEventAPI)->EV_SetUpPlayerPrediction)(0,1);
  (*(gEngfuncs.pEventAPI)->EV_PushPMStates)();
  (*(gEngfuncs.pEventAPI)->EV_SetSolidPlayers)(iVar1 + -1);
  (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
  (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)(&fStack_74,afStack_50,2,-1,(pmtrace_s *)(afStack_50 + 6))
  ;
  fStack_68 = 2.5283437e-29;
  (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
  iVar1 = DAT_10098704;
  if (DAT_10098704 != 0) {
    *(undefined4 *)(DAT_10098704 + 0x18) = uStack_10;
    *(undefined4 *)(iVar1 + 0x1c) = uStack_c;
    *(float *)(iVar1 + 0x20) = afStack_8[0];
    fStack_64 = 2.5283554e-29;
    (*gEngfuncs.GetClientTime)();
    *(float *)(DAT_10098704 + 0x38) = (float)(extraout_ST0 + (float10)0.1);
  }
  iVar1 = DAT_10098700;
  if (DAT_10098700 != 0) {
    *(undefined4 *)(DAT_10098700 + 0x18) = uStack_10;
    *(undefined4 *)(iVar1 + 0x1c) = uStack_c;
    *(float *)(iVar1 + 0x20) = afStack_8[0];
    fStack_64 = 2.5283714e-29;
    (*gEngfuncs.GetClientTime)();
    *(float *)(DAT_10098700 + 0x38) = (float)(extraout_ST0_00 + (float10)0.1);
  }
  return;
}

/* 10003440  FUN_10003440  (24 bytes)
 * undefined FUN_10003440(void)
 * called by: HUD_CreateEntities
 */
void FUN_10003440(void)

{
  if ((DAT_10098704 != 0) && (DAT_10098700 != 0)) {
    FUN_10003300();
    return;
  }
  return;
}

/* 10003530  FUN_10003530  (29 bytes)
 * undefined FUN_10003530(undefined4 param_1, int param_2)
 * called by: FUN_100088a0, FUN_1000a4c0, FUN_1000ab00
 */
void __cdecl FUN_10003530(char *param_1,int param_2)

{
  (*gEngfuncs.CL_LoadModel)(param_1,(int *)(*(int *)(param_2 + 4) + 0xbc));
  return;
}

/* 10003550  FUN_10003550  (121 bytes)
 * undefined FUN_10003550(int * param_1, int param_2)
 * called by: FUN_100036f0
 */
void __cdecl FUN_10003550(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_2c [28];
  int iStack_10;
  
  iVar1 = DAT_1009ff00 * 0x2a4;
  puVar3 = (undefined4 *)(&DAT_100991a8 + iVar1);
  for (iVar2 = 0xa9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[1] = (int)(&DAT_100991a8 + iVar1);
  DAT_1009ff00 = DAT_1009ff00 + 1;
  (**(code **)(*param_1 + 0x20))();
  (**(code **)(*param_1 + 0x1c))();
  if (param_2 != 0) {
    param_1[0x1c] = param_2;
    (**(code **)(*param_1 + 0x118))(auStack_2c);
    (&DAT_10099118)[iStack_10] = param_1;
  }
  return;
}

/* 100035f0  FUN_100035f0  (78 bytes)
 * undefined4 FUN_100035f0(undefined4 param_1)
 * called by: FUN_10008720
 */
undefined4 __thiscall FUN_100035f0(void *this,char *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x11c))();
  if (iVar1 == 0) {
    return 0;
  }
  (*gEngfuncs.CL_LoadModel)(param_1,(int *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 0xbc));
  *(undefined4 *)(*(int *)((int)this + 0x70) + 0x118) = 0x3f000000;
  *(undefined4 *)((int)this + 0x98) = 0x40400000;
  return 1;
}

/* 10003640  FUN_10003640  (39 bytes)
 * undefined4 FUN_10003640(int param_1)
 */
undefined4 __fastcall FUN_10003640(int param_1)

{
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_1001ad20(s_weapons_pistol_empty_wav_100911e4,0x3f4ccccd);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return 0;
}

/* 100036b0  FUN_100036b0  (23 bytes)
 * undefined FUN_100036b0(int param_1)
 * called by: FUN_10003830
 */
void __fastcall FUN_100036b0(int param_1)

{
  if (*(int **)(param_1 + 0x9e0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x9e0) + 0x128))(0);
  }
  return;
}

/* 100036d0  FUN_100036d0  (30 bytes)
 * undefined FUN_100036d0(int param_1)
 * called by: FUN_10003830
 */
void __fastcall FUN_100036d0(int param_1)

{
  if (*(int **)(param_1 + 0x9e0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x9e0) + 0x120))();
  }
  FUN_1000b9d0(param_1);
  return;
}

/* 100036f0  FUN_100036f0  (231 bytes)
 * undefined FUN_100036f0(void)
 * called by: FUN_10003830
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100036f0(void)

{
  float10 extraout_ST0;
  
  if (DAT_1009ff08 == '\0') {
    if (DAT_1009ff0c == 0) goto LAB_1000372f;
    FUN_10007de0();
    DAT_1009ff08 = '\x01';
    FUN_100083f0((CBasePlayerItem *)&DAT_1009f238);
    _DAT_1009f2a8 = &DAT_1009e628;
  }
  if (DAT_1009ff0c != 0) {
    return;
  }
LAB_1000372f:
  DAT_1009ff0c = 1;
  DAT_10099114 = (float *)&DAT_1009f188;
  (*gEngfuncs.GetClientTime)();
  *DAT_10099114 = (float)extraout_ST0;
  _DAT_100987b8 = HUD_GetUserEntity;
  _DAT_100987bc = HUD_GetUserEntity;
  _DAT_100988f4 = &LAB_1001af10;
  DAT_100987c0 = CBasePlayerItem::AttemptToMaterialize;
  _DAT_10098950 = CBasePlayerItem::AttemptToMaterialize;
  DAT_100989a4 = &LAB_1001ad50;
  DAT_100988ac = &LAB_10003500;
  DAT_100989a0 = gEngfuncs.pfnPrecacheEvent;
  DAT_10098924 = gEngfuncs.pfnRandomFloat;
  DAT_10098920 = gEngfuncs.pfnRandomLong;
  FUN_10003550((int *)&DAT_1009e628,0);
  FUN_10003550(&DAT_1009f238,0x1009e628);
  return;
}

/* 100037e0  FUN_100037e0  (30 bytes)
 * undefined FUN_100037e0(undefined4 * param_1)
 * called by: FUN_10003300
 */
void __cdecl FUN_100037e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)&DAT_10099198 - (int)param_1;
  iVar2 = 3;
  do {
    *param_1 = *(undefined4 *)(iVar1 + (int)param_1);
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

/* 10003800  FUN_10003800  (36 bytes)
 * undefined FUN_10003800(void)
 * called by: FUN_10003830
 */
void FUN_10003800(void)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  
  pfVar5 = (float *)(DAT_100d5cc0 + 0x10);
  iVar3 = 0;
  do {
    pfVar1 = pfVar5 + 0x5e;
    fVar2 = *pfVar5;
    iVar4 = iVar3 + 4;
    pfVar5 = pfVar5 + 1;
    *(float *)((int)&DAT_10099198 + iVar3) = *pfVar1 + fVar2;
    iVar3 = iVar4;
  } while (iVar4 < 0xc);
  return;
}

/* 10003830  FUN_10003830  (2628 bytes)
 * undefined FUN_10003830(float param_1, int param_2, int param_3, double param_4, undefined4 param_5)
 * called by: HUD_PostRunCmd
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10003830(float param_1,int param_2,int param_3,double param_4,undefined4 param_5)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  longlong lVar10;
  int *local_68;
  
  iVar7 = 0;
  local_68 = (int *)0x0;
  FUN_100036f0();
  *DAT_10099114 = (float)param_4;
  if (*(int *)((int)param_1 + 0x1bc) == 0x10) {
    local_68 = &DAT_1009f238;
  }
  DAT_100d5cc0 = param_2;
  if (DAT_100d5cbc != 0) {
    if ((0.0 < *(float *)(param_2 + 0x194)) || (DAT_100991a4 < 1)) {
      if ((0.0 < *(float *)(param_2 + 0x194)) && (DAT_100991a4 < 1)) {
        FUN_100036d0(0x1009e628);
        FUN_100083f0((CBasePlayerItem *)&DAT_1009f238);
        _DAT_1009f2a8 = &DAT_1009e628;
      }
    }
    else {
      FUN_100036b0(0x1009e628);
    }
    lVar10 = __ftol();
    DAT_100991a4 = (int)lVar10;
  }
  iVar5 = DAT_1009e62c;
  *(undefined4 *)(DAT_1009e62c + 0x74) = DAT_101914d0;
  *(undefined4 *)(iVar5 + 0x78) = DAT_101914d4;
  *(undefined4 *)(iVar5 + 0x7c) = DAT_101914d8;
  *(undefined4 *)(DAT_1009e62c + 0x244) = *(undefined4 *)((int)param_1 + 0x2e0);
  *(undefined4 *)(DAT_1009e62c + 0x248) = *(undefined4 *)((int)param_1 + 0x2e4);
  *(undefined4 *)(DAT_1009e62c + 0x254) = *(undefined4 *)((int)param_1 + 0x2f0);
  *(undefined4 *)(DAT_1009e62c + 0x250) = *(undefined4 *)((int)param_1 + 0x2ec);
  lVar10 = __ftol();
  _DAT_1009ed38 = (uint)lVar10;
  _DAT_1018a464 = _DAT_1009ed38;
  if (local_68 != (int *)0x0) {
    do {
      iVar5 = (&DAT_10099118)[iVar7];
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0xb0) = *(undefined4 *)((int)param_1 + 0x344 + iVar7 * 0x58);
        iVar1 = (int)param_1 + 0x330 + iVar7 * 0x58;
        *(undefined4 *)(iVar5 + 0x88) = *(undefined4 *)((int)param_1 + 0x348 + iVar7 * 0x58);
        *(undefined4 *)(iVar5 + 0xa4) = *(undefined4 *)(iVar1 + 4);
        *(undefined4 *)(iVar5 + 0x8c) = *(undefined4 *)(iVar1 + 8);
        *(undefined4 *)(iVar5 + 0x90) = *(undefined4 *)(iVar1 + 0xc);
        *(undefined4 *)(iVar5 + 0x94) = *(undefined4 *)(iVar1 + 0x54);
        *(undefined4 *)(iVar5 + 0x98) = *(undefined4 *)(iVar1 + 0x10);
        *(undefined4 *)(*(int *)(iVar5 + 4) + 0x254) = *(undefined4 *)(iVar1 + 0x48);
        *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(iVar1 + 0x40);
        if (iVar7 == 0x10) {
          lVar10 = __ftol();
          DAT_1009f2f0 = (int)lVar10;
          DAT_1018a628 = 0;
          if (DAT_1009f2f0 == 0) {
            DAT_1009f2f4 = (undefined *)0x0;
            lVar10 = __ftol();
            _DAT_1009faf0 = (int)lVar10;
            lVar10 = __ftol();
            _DAT_1009faec = (int)lVar10;
          }
          else {
            DAT_1009f2f8 = FUN_100071c0(DAT_1009f2f0);
            iVar5 = DAT_1009f2f0 * 0x30;
            DAT_1009f2f4 = &DAT_1009f33c + iVar5;
            lVar10 = __ftol();
            (&DAT_1009f33e)[iVar5] = (char)lVar10;
            lVar10 = __ftol();
            *(int *)(DAT_1009f2f4 + 0x10) = (int)lVar10;
            iVar5 = FUN_10007110(DAT_1009f2f0,*(uint *)(DAT_1009f2f4 + 0x10));
            *(int *)(DAT_1009f23c + 0x114) = iVar5;
            lVar10 = __ftol();
            DAT_1009f2f4[0x24] = (char)lVar10;
            lVar10 = __ftol();
            *(int *)(DAT_1009f2f4 + 4) = (int)lVar10;
            *(undefined4 *)(DAT_1009f2f4 + 0x1c) = *(undefined4 *)((int)param_1 + 0x1c4);
            *(uint *)(DAT_1009f2f4 + 0x20) =
                 *(int *)(DAT_1009f2f4 + 4) - *(int *)(DAT_1009f2f4 + 0x1c) &
                 (*(int *)(DAT_1009f2f4 + 4) - *(int *)(DAT_1009f2f4 + 0x1c) < 1) - 1;
            iVar5 = DAT_1009f2f8[0x32];
            if (((iVar5 != -1) || (iVar5 = DAT_1009f2f8[0x33], iVar5 != -1)) &&
               (DAT_1009f2f0 != iVar5)) {
              *(undefined4 *)(&DAT_1009f340 + iVar5 * 0x30) = *(undefined4 *)((int)param_1 + 0x1c0);
            }
            lVar10 = __ftol();
            *(int *)(DAT_1009f2f4 + 0xc) = (int)lVar10;
            lVar10 = __ftol();
            *(int *)(DAT_1009f2f4 + 8) = (int)lVar10;
            lVar10 = __ftol();
            *(int *)(&DAT_1009f2fc + (uint)*(byte *)(DAT_1009f2f8 + 2) * 4) = (int)lVar10;
            lVar10 = __ftol();
            DAT_1009f2f4[0x2c] = (char)lVar10;
            lVar10 = __ftol();
            *(int *)(DAT_1009f2f4 + 0x14) = (int)lVar10;
            DAT_1018a628 = *(undefined4 *)(DAT_1009f2f4 + 0x14);
            if (0.0 < *(float *)((int)param_1 + 0x1d0)) {
              DAT_1018a628 = 0;
            }
          }
          lVar10 = __ftol();
          if (((uint)DAT_10189f9d != (uint)lVar10) &&
             (iVar5 = (*(gEngfuncs.pDemoAPI)->IsRecording)(), iVar5 != 0)) {
            __ftol();
            FUN_1001b860();
          }
          lVar10 = __ftol();
          DAT_10189f9d = (byte)lVar10;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x20);
    _DAT_1009ede4 = param_5;
    _DAT_1018bddc = param_5;
    _DAT_1009ee08 = *(uint *)((int)param_1 + 0xcc);
    _DAT_1009ee10 = *(ushort *)(param_3 + 0x1e) ^ _DAT_1009ee08;
    _DAT_1009ee0c = *(ushort *)(param_3 + 0x1e) & _DAT_1009ee10;
    _DAT_1009ee10 = ~(uint)*(ushort *)(param_3 + 0x1e) & _DAT_1009ee10;
    *(uint *)(DAT_1009e62c + 0x180) = (uint)*(ushort *)(param_3 + 0x1e);
    iVar7 = DAT_1009e62c;
    *(undefined4 *)(DAT_1009e62c + 0x20) = *(undefined4 *)((int)param_1 + 0x160);
    *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)((int)param_1 + 0x164);
    *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)((int)param_1 + 0x168);
    *(undefined4 *)(DAT_1009e62c + 0x1a4) = *(undefined4 *)((int)param_1 + 0x17c);
    *(undefined4 *)(DAT_1009e62c + 0x170) = *(undefined4 *)((int)param_1 + 0x1dc);
    *(undefined4 *)(DAT_1009e62c + 0x1c0) = *(undefined4 *)((int)param_1 + 0x180);
    *(undefined4 *)(DAT_1009e62c + 0x210) = *(undefined4 *)((int)param_1 + 0x1b0);
    *(undefined4 *)(DAT_1009e62c + 0x214) = *(undefined4 *)((int)param_1 + 0x1b4);
    *(undefined4 *)(DAT_1009e62c + 0x218) = *(undefined4 *)((int)param_1 + 0x1b8);
    *(undefined4 *)(DAT_1009e62c + 0xbc) = *(undefined4 *)((int)param_1 + 0x16c);
    DAT_1009e740 = *(float *)((int)param_1 + 0x1d0);
    DAT_1009e65c = *(undefined4 *)((int)param_1 + 0x1c8);
    DAT_1009e658 = *(undefined4 *)((int)param_1 + 0x1cc);
    if (*(int *)((int)param_1 + 0x1bc) != 0) {
      DAT_1009f008 = (int *)(&DAT_10099118)[*(int *)((int)param_1 + 0x1bc)];
    }
    if (((*(int *)(DAT_1009e62c + 0x170) != 5) &&
        (bVar4 = FUN_10026860(), CONCAT31(extraout_var,bVar4) == 0)) && (DAT_1009e740 <= 0.0)) {
      (**(code **)(*local_68 + 0x134))();
    }
    iVar7 = *(int *)((int)param_1 + 0x1bc);
    *(int *)(param_2 + 0x1bc) = iVar7;
    if (iVar7 == 0x10) {
      if ((DAT_1009f184 != DAT_1009f2f0) &&
         (iVar7 = FUN_100086b0(&DAT_1009f238,DAT_1009f2f0), iVar7 != 0)) {
        (**(code **)(*DAT_1009f008 + 0x120))();
      }
      DAT_1009f184 = DAT_1009f2f0;
    }
    *(undefined4 *)(param_2 + 0x16c) = *(undefined4 *)(DAT_1009e62c + 0xbc);
    *(undefined4 *)(param_2 + 0x1b4) = *(undefined4 *)(DAT_1009e62c + 0x214);
    *(undefined4 *)(param_2 + 0x1b8) = *(undefined4 *)(DAT_1009e62c + 0x218);
    *(float *)(param_2 + 0x1d0) = DAT_1009e740;
    *(undefined4 *)(param_2 + 0x1b0) = *(undefined4 *)(DAT_1009e62c + 0x210);
    *(undefined4 *)(param_2 + 0x1c8) = DAT_1009e65c;
    *(undefined4 *)(param_2 + 0x1cc) = DAT_1009e658;
    *(undefined4 *)(param_2 + 0x2f0) = *(undefined4 *)(DAT_1009e62c + 0x254);
    *(undefined4 *)(param_2 + 0x2ec) = *(undefined4 *)(DAT_1009e62c + 0x250);
    *(float *)(param_2 + 0x304) = (float)(int)_DAT_1009ed38;
    if (DAT_100d5cbc != 0) {
      iVar7 = *(int *)(param_2 + 0x1b8);
      iVar5 = FUN_1001ad10();
      if (iVar5 != iVar7) {
        uVar6 = 2;
        if ((*(int *)(param_2 + 0x1bc) == 0x10) && (DAT_1009f2f4 != (undefined *)0x0)) {
          uVar6 = *(undefined4 *)(DAT_1009f23c + 0x114);
        }
        FUN_1001ace0(iVar7,uVar6,1);
      }
    }
    bVar2 = *(byte *)(param_3 + 2);
    fVar9 = (float10)FUN_1000b9b0(0x1009e628);
    param_1 = (float)(fVar9 * (float10)((float)bVar2 * 0.001));
    if ((_DAT_1009ed38 & 0x10) != 0) {
      param_1 = param_1 * 1.5;
    }
    iVar7 = 0;
    do {
      iVar5 = (&DAT_10099118)[iVar7];
      puVar8 = (undefined4 *)(param_2 + 0x330 + iVar7 * 0x58);
      if (iVar5 == 0) {
        for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
      }
      else {
        puVar8[5] = *(undefined4 *)(iVar5 + 0xb0);
        puVar8[6] = *(undefined4 *)(iVar5 + 0x88);
        puVar8[1] = *(undefined4 *)(iVar5 + 0xa4);
        puVar8[2] = *(undefined4 *)(iVar5 + 0x8c);
        puVar8[3] = *(undefined4 *)(iVar5 + 0x90);
        puVar8[0x15] = *(undefined4 *)(iVar5 + 0x94);
        puVar8[4] = *(undefined4 *)(iVar5 + 0x98);
        puVar8[0x12] = *(undefined4 *)(*(int *)(iVar5 + 4) + 0x254);
        uVar6 = *(undefined4 *)(iVar5 + 0x50);
        puVar8[7] = (float)puVar8[7] - param_1;
        puVar8[0x10] = uVar6;
        puVar8[0xb] = (float)puVar8[0xb] - param_1;
        puVar8[2] = (float)puVar8[2] - param_1;
        puVar8[3] = (float)puVar8[3] - param_1;
        puVar8[4] = (float)puVar8[4] - param_1;
        puVar8[0x12] = (float)puVar8[0x12] - param_1;
        puVar8[0x15] = (float)puVar8[0x15] - param_1;
        if (iVar7 == 0x10) {
          *(float *)(param_2 + 0x318) = (float)DAT_1009f2f0;
          if (DAT_1009f2f0 == 0) {
            DAT_1009f2f4 = (undefined *)0x0;
            DAT_1009f2f8 = (undefined4 *)0x0;
          }
          else {
            DAT_1009f2f4 = &DAT_1009f33c + DAT_1009f2f0 * 0x30;
            DAT_1009f2f8 = FUN_100071c0(DAT_1009f2f0);
            if ((DAT_1009f2f4 != (undefined *)0x0) && (DAT_1009f2f8 != (undefined4 *)0x0)) {
              *(float *)(param_2 + 0x31c) = (float)(byte)DAT_1009f2f4[2];
              *(float *)(param_2 + 800) = (float)*(int *)(DAT_1009f2f4 + 0x10);
              *(float *)(param_2 + 0x324) = (float)(byte)DAT_1009f2f4[0x24];
              *(float *)(param_2 + 0x328) = (float)*(int *)(DAT_1009f2f4 + 4);
              *(undefined4 *)(param_2 + 0x1c4) = *(undefined4 *)(DAT_1009f2f4 + 0x1c);
              iVar5 = DAT_1009f2f8[0x32];
              if (((iVar5 != -1) || (iVar5 = DAT_1009f2f8[0x33], iVar5 != -1)) &&
                 (DAT_1009f2f0 != iVar5)) {
                *(undefined4 *)(param_2 + 0x1c0) = *(undefined4 *)(&DAT_1009f340 + iVar5 * 0x30);
              }
              *(float *)(param_2 + 0x32c) = (float)*(int *)(DAT_1009f2f4 + 0xc);
              *(float *)(param_2 + 0x30c) = (float)*(int *)(DAT_1009f2f4 + 8);
              *(float *)(param_2 + 0x310) =
                   (float)*(int *)(&DAT_1009f2fc + (uint)*(byte *)(DAT_1009f2f8 + 2) * 4);
              *(float *)(param_2 + 0x314) = (float)(byte)DAT_1009f2f4[0x2c];
              *(float *)(param_2 + 0x308) = (float)*(int *)(DAT_1009f2f4 + 0x14);
              goto LAB_10003fec;
            }
          }
          *(float *)(param_2 + 0x31c) = (float)_DAT_1009faf0;
          *(float *)(param_2 + 800) = (float)_DAT_1009faec;
        }
LAB_10003fec:
        if ((float)puVar8[0xb] < -1.0) {
          puVar8[0xb] = 0xbf800000;
        }
        if ((float)puVar8[2] < -1.0) {
          puVar8[2] = 0xbf800000;
        }
        if ((float)puVar8[3] < -0.001) {
          puVar8[3] = 0xba83126f;
        }
        if ((float)puVar8[4] < -0.001) {
          puVar8[4] = 0xba83126f;
        }
        if ((float)puVar8[7] < -0.001) {
          puVar8[7] = 0xba83126f;
        }
        if ((float)puVar8[0x12] < -0.001) {
          puVar8[0x12] = 0xba83126f;
        }
        if ((float)puVar8[0x15] < -0.001) {
          puVar8[0x15] = 0xba83126f;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x20);
    if (DAT_100d5cbc != 0) {
      if (0.0 < DAT_1009ed8c) {
        DAT_1009ed8c = DAT_1009ed8c - param_1 * 0.1;
        if (DAT_1009ed8c < 0.0) {
          DAT_1009ed8c = 0.0;
        }
        _DAT_1018d188 = DAT_1009ed8c;
      }
      if (*(int *)(param_2 + 0x1bc) == 0x10) {
        FUN_1000acd0(0x1009f238);
      }
    }
    _DAT_1018d18c = DAT_1009e740;
    fVar3 = *(float *)(param_2 + 0x1d0) - param_1;
    *(float *)(param_2 + 0x1d0) = fVar3;
    if (fVar3 < -0.001) {
      *(undefined4 *)(param_2 + 0x1d0) = 0xba83126f;
    }
    FUN_10003800();
    DAT_100d5cc0 = 0;
  }
  return;
}

/* 100043a0  FUN_100043a0  (48 bytes)
 * undefined4 FUN_100043a0(int * param_1)
 */
undefined4 __fastcall FUN_100043a0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xb0))();
  if ((iVar1 != 0) && (*(float *)(param_1[1] + 0x16c) == 0.0)) {
    return 1;
  }
  return 0;
}

/* 10004600  FUN_10004600  (10 bytes)
 * undefined FUN_10004600(void)
 * called by: FUN_10065250
 */
void FUN_10004600(void)

{
  FUN_1000b9d0(0x1009e628);
  return;
}

/* 100047d0  FUN_100047d0  (842 bytes)
 * undefined FUN_100047d0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_100047d0(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 6;
  *(undefined4 *)(param_1 + 0xc) = 3;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xd;
  *(undefined4 *)(param_1 + 0x14) = 0x40200000;
  *(undefined4 *)(param_1 + 0x18) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x1c) = 0x42100000;
  *(undefined4 *)(param_1 + 0x28) = 0x3b83126f;
  *(undefined4 *)(param_1 + 0x30) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x34) = 0x38d1b717;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 0xd;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_10091298;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 4;
  uVar2 = 0xffffffff;
  param_1[0x85] = 3;
  pcVar4 = s_sprites_weapons_ak47_spr_1009127c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x28;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 3000;
  *(undefined4 *)(param_1 + 0xe0) = 8;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_556_shell_mdl_10091264;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  pcVar4 = &DAT_10091250;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_ak47_mdl_1009123c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_10091228;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009121c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x290) = 2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x292) = 7;
  *(undefined2 *)(param_1 + 0x294) = 7;
  *(undefined2 *)(param_1 + 0x296) = 7;
  *(undefined2 *)(param_1 + 0x298) = 7;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x260) = 5;
  *(undefined2 *)(param_1 + 0x28c) = 4;
  *(undefined2 *)(param_1 + 0x28e) = 8;
  *(undefined2 *)(param_1 + 0x29a) = 6;
  pcVar4 = s_weapons_ak47_fire_wav_10091204;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 8;
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x15;
  param_1[0x350] = 1;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  return;
}

/* 10004b20  FUN_10004b20  (792 bytes)
 * undefined FUN_10004b20(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_10004b20(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 4;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x10) = 0x23;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0x4019999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3dbc6a7f;
  *(undefined4 *)(param_1 + 0x1c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3be56042;
  *(undefined4 *)(param_1 + 0x30) = 0x40000000;
  *(undefined4 *)(param_1 + 0x34) = 0x3c4ccccd;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_STEYR_AUG_10091348;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 4;
  param_1[0x85] = 4;
  pcVar4 = s_sprites_weapons_aug_spr_10091330;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x1e;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 5000;
  *(undefined4 *)(param_1 + 0xe0) = 0xb;
  *(undefined4 *)(param_1 + 0xe4) = 8;
  pcVar4 = s_models_556_shell_mdl_10091264;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_aug_mdl_1009131c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_aug_mdl_10091308;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_aug_sil_mdl_100912f0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_aug_mdl_100912dc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009121c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 2;
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 0x25c) = 2;
  *(undefined2 *)(param_1 + 0x25e) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 3;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 4;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_aug_aug_fire_wav_100912c0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_aug_aug_fire_sil_wav_100912a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 1;
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x12;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 8;
  return;
}

/* 10004e40  FUN_10004e40  (801 bytes)
 * undefined FUN_10004e40(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_10004e40(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 5;
  param_1[8] = 8;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0x46;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x12;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x1c) = 0x43520000;
  *(undefined4 *)(param_1 + 0x28) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0x30) = 0x41200000;
  *(undefined4 *)(param_1 + 0x34) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 8;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Barrett_M82A1_100913c4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 4;
  param_1[0x85] = 5;
  pcVar4 = s_sprites_weapons_m82_spr_100913ac;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x46;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0xd8) = 9000;
  *(undefined4 *)(param_1 + 0xe0) = 10;
  *(undefined4 *)(param_1 + 0xe4) = 8;
  pcVar4 = s_models_556_shell_mdl_10091264;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_m82_mdl_10091398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_m82_mdl_10091384;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_m82_mdl_10091370;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009121c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 5;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_barrett_fire_wav_10091354;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x348] = 7;
  *(undefined4 *)(param_1 + 0x34c) = 0x28;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x30;
  *(undefined4 *)(param_1 + 0x358) = 0x10;
  return;
}

/* 10005170  FUN_10005170  (811 bytes)
 * undefined FUN_10005170(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_10005170(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 7;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 10;
  *(undefined4 *)(param_1 + 0x10) = 0x23;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3e666666;
  *(undefined4 *)(param_1 + 0x1c) = 0x41480000;
  *(undefined4 *)(param_1 + 0x28) = 0x3d23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x41200000;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  uVar2 = 0xffffffff;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  pcVar4 = s_Benelli_M3_1009146c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 4;
  param_1[0x85] = 1;
  pcVar4 = s_sprites_weapons_m3_spr_10091454;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x28;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 3000;
  *(undefined4 *)(param_1 + 0xe0) = 0xe;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_shotgun_shell_blue_mdl_10091434;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar4 = s_models_v_m3_mdl_10091424;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_m3_mdl_10091414;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_m3_mdl_10091404;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009121c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x262) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 5;
  *(undefined2 *)(param_1 + 0x264) = 3;
  *(undefined2 *)(param_1 + 0x266) = 4;
  *(undefined2 *)(param_1 + 0x268) = 6;
  *(undefined2 *)(param_1 + 0x26a) = 7;
  *(undefined2 *)(param_1 + 0x26c) = 8;
  *(undefined2 *)(param_1 + 0x26e) = 9;
  *(undefined2 *)(param_1 + 0x28a) = 10;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_m3_m3_fire_wav_100913ec;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_m3_m3_pump_wav_100913d4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 10;
  param_1[0x350] = 0;
  param_1[0x348] = 1;
  *(undefined4 *)(param_1 + 0x34c) = 0x1c;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  return;
}

/* 100054a0  FUN_100054a0  (770 bytes)
 * undefined FUN_100054a0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_100054a0(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xf;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 8;
  *(undefined4 *)(param_1 + 0xcc) = 2;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x14) = 0x3f99999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41e80000;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0x3c75c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x40400000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Beretta_92F_10091558;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 2;
  param_1[0x85] = 9;
  pcVar4 = s_sprites_weapons_beretta_spr_1009153c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 900;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar4 = s_models_v_beretta_mdl_1009150c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_beretta_mdl_100914f4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_beretta_sil_mdl_100914d8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_berettas_mdl_100914c0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_100914b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 1;
  *(undefined2 *)(param_1 + 0x25c) = 1;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 5;
  *(undefined2 *)(param_1 + 0x256) = 4;
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_beretta_fire_wav_10091498;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_beretta_fire_sil_wav_10091478;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 100057b0  FUN_100057b0  (929 bytes)
 * undefined FUN_100057b0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_100057b0(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x12;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 2;
  param_1[0x348] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x4019999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41e80000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c8b4396;
  *(undefined4 *)(param_1 + 0x30) = 0x40400000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Akimbo_Berettas_100915d8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 5;
  uVar2 = 0xffffffff;
  param_1[0x85] = 1;
  pcVar4 = s_sprites_weapons_berettas_spr_100915b8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 900;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar4 = s_models_v_berettas_mdl_100915a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_berettas_mdl_10091588;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_berettas_sil_mdl_1009156c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_berettas_mdl_100914c0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_10091564;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 0x1a;
  *(undefined2 *)(param_1 + 0x25a) = 0x1a;
  *(undefined2 *)(param_1 + 0x25c) = 0x1a;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x290) = 2;
  *(undefined2 *)(param_1 + 0x28c) = 0xd;
  *(undefined2 *)(param_1 + 0x292) = 0xd;
  *(undefined2 *)(param_1 + 0x294) = 0xd;
  *(undefined2 *)(param_1 + 0x296) = 0xd;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x27e) = 3;
  *(undefined2 *)(param_1 + 0x282) = 4;
  *(undefined2 *)(param_1 + 0x280) = 5;
  *(undefined2 *)(param_1 + 0x284) = 6;
  *(undefined2 *)(param_1 + 0x286) = 7;
  *(undefined2 *)(param_1 + 0x288) = 8;
  *(undefined2 *)(param_1 + 0x260) = 0xe;
  *(undefined2 *)(param_1 + 0x28e) = 0x1c;
  *(undefined2 *)(param_1 + 0x2b8) = 0x10;
  *(undefined2 *)(param_1 + 700) = 0x11;
  *(undefined2 *)(param_1 + 0x2ba) = 0x12;
  *(undefined2 *)(param_1 + 0x2be) = 0x13;
  *(undefined2 *)(param_1 + 0x2c0) = 0x14;
  *(undefined2 *)(param_1 + 0x2c2) = 0x15;
  *(undefined2 *)(param_1 + 0x29a) = 0xf;
  pcVar4 = s_weapons_beretta_fire_wav_10091498;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_beretta_fire_sil_wav_10091478;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 10005b60  FUN_10005b60  (776 bytes)
 * undefined FUN_10005b60(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_10005b60(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 5;
  param_1[8] = 0xb;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x1f;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3e19999a;
  *(undefined4 *)(param_1 + 0x1c) = 0x42aa0000;
  *(undefined4 *)(param_1 + 0x28) = 0x3bf5c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x41900000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Raging_Bull_10091658;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 2;
  param_1[0x85] = 7;
  pcVar4 = s_sprites_weapons_bull_spr_1009163c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0xf;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x834;
  *(undefined4 *)(param_1 + 0xe0) = 10;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  pcVar4 = s_models_v_bull_mdl_10091628;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_bull_mdl_10091614;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_bull_mdl_10091600;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_100914b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 0x25e) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 4;
  *(undefined2 *)(param_1 + 0x256) = 3;
  *(undefined2 *)(param_1 + 600) = 1;
  *(undefined2 *)(param_1 + 0x25c) = 1;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_bull_fire01_wav_100915e8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  *(undefined4 *)(param_1 + 0x354) = 0x14;
  *(undefined4 *)(param_1 + 0x358) = 8;
  return;
}

/* 10005e70  FUN_10005e70  (874 bytes)
 * undefined FUN_10005e70(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_10005e70(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 7;
  param_1[8] = 5;
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0x19;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xc;
  *(undefined4 *)(param_1 + 0x14) = 0x40066666;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x425c0000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c75c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x41000000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3c;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Desert_Eagle_10091708;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 2;
  uVar2 = 0xffffffff;
  param_1[0x85] = 3;
  pcVar4 = s_sprites_weapons_desert_spr_100916ec;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0xd0] = 0xf;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x41a;
  *(undefined4 *)(param_1 + 0xe0) = 0xb;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 2;
  pcVar4 = s_models_v_desert_mdl_100916d8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_desert_mdl_100916c4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_desert_sil_mdl_100916ac;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_desert_mdl_10091698;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_100914b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x292) = 7;
  *(undefined2 *)(param_1 + 0x294) = 7;
  *(undefined2 *)(param_1 + 0x296) = 7;
  *(undefined2 *)(param_1 + 0x28a) = 0xb;
  *(undefined2 *)(param_1 + 0x2c4) = 0xb;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 5;
  *(undefined2 *)(param_1 + 0x260) = 9;
  *(undefined2 *)(param_1 + 0x28c) = 6;
  *(undefined2 *)(param_1 + 0x28e) = 0xc;
  *(undefined2 *)(param_1 + 0x290) = 0;
  *(undefined2 *)(param_1 + 0x298) = 8;
  *(undefined2 *)(param_1 + 0x29a) = 10;
  pcVar4 = s_weapons_deagle_fire_wav_10091680;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_deagle_fire_sil_wav_10091664;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 8;
  param_1[0x350] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  *(undefined4 *)(param_1 + 0x354) = 0x14;
  return;
}

/* 100061e0  FUN_100061e0  (768 bytes)
 * undefined FUN_100061e0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_100061e0(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x14;
  param_1[8] = 7;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0x1e;
  *(undefined4 *)(param_1 + 0xcc) = 0xe;
  *(undefined4 *)(param_1 + 0x14) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41a80000;
  *(undefined4 *)(param_1 + 0x28) = 0x3bf5c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x3fc00000;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Five_seveN_1009182c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 2;
  param_1[0x85] = 4;
  pcVar4 = s_sprites_weapons_fnh_spr_10091814;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x4e2;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_56_shell_mdl_10091800;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar4 = s_models_v_fnh_mdl_100917ec;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_fnh_mdl_100917d8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_fnh_sil_mdl_100917c0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_fnh_mdl_100917ac;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_100914b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_fnh_fnh_fire_wav_10091790;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_fnh_fnh_fire_sil_wav_10091770;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 100064e0  FUN_100064e0  (810 bytes)
 * undefined FUN_100064e0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_100064e0(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x28;
  param_1[8] = 7;
  *(undefined4 *)(param_1 + 0xc) = 0x12;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xe;
  param_1[0x348] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41a80000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c4ccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x40200000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Akimbo_Five_seveN_100918a4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 5;
  param_1[0x85] = 5;
  pcVar4 = s_sprites_weapons_fnh_akimbo_spr_10091884;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x4e2;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_56_shell_mdl_10091800;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar4 = s_models_v_fnh_akimbo_mdl_1009186c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_fnh_akimbo_mdl_10091854;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_fnh_akimbo_sil_mdl_10091838;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_fnh_mdl_100917ac;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_10091564;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x27e) = 3;
  *(undefined2 *)(param_1 + 0x280) = 3;
  *(undefined2 *)(param_1 + 0x286) = 3;
  *(undefined2 *)(param_1 + 600) = 4;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 4;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 5;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x282) = 2;
  *(undefined2 *)(param_1 + 0x284) = 2;
  *(undefined2 *)(param_1 + 0x288) = 2;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_fnh_fnh_fire_wav_10091790;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_fnh_fnh_fire_sil_wav_10091770;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 10006810  FUN_10006810  (767 bytes)
 * undefined FUN_10006810(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_10006810(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x11;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 3;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d5d2f1b;
  *(undefined4 *)(param_1 + 0x1c) = 0x41c00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3cc49ba6;
  *(undefined4 *)(param_1 + 0x30) = 0x400ccccd;
  *(undefined4 *)(param_1 + 0x34) = 0x3c03126f;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_1009197c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 2;
  param_1[0x85] = 1;
  pcVar4 = s_sprites_weapons_glock18_spr_10091960;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x352;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x130) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_glock18_mdl_10091948;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_glock18_mdl_10091930;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_glock18_sil_mdl_10091914;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_glock18_mdl_100918fc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_100914b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 5;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_glock_glock_fire_wav_100918dc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_glock_glock_fire_sil_wav_100918b8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 4;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  return;
}

/* 10006b10  FUN_10006b10  (778 bytes)
 * undefined FUN_10006b10(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_10006b10(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xf;
  param_1[8] = 9;
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x16;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x42240000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x40900000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_10091a54;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 2;
  param_1[0x85] = 5;
  pcVar4 = s_sprites_weapons_glock22_spr_10091a38;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x514;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar4 = s_models_v_glock22_mdl_10091a20;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_glock22_mdl_10091a08;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_glock22_sil_mdl_100919ec;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_glock22_mdl_100919d4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_100914b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 5;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_glock22_glock22_fire_wav_100919b0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_glock22_glock22_fire_sil_10091988;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 5;
  param_1[0x350] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  *(undefined4 *)(param_1 + 0x354) = 0x14;
  return;
}

/* 10006e20  FUN_10006e20  (718 bytes)
 * undefined FUN_10006e20(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_10006e20(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x10;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 0x12;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
  param_1[0x348] = 5;
  *(undefined4 *)(param_1 + 0x14) = 0x40133333;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x42140000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Golden_Colts_10091ad4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 5;
  param_1[0x85] = 4;
  pcVar4 = s_sprites_weapons_gold_spr_10091ab8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x14;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0xa28;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar4 = s_models_v_gold_mdl_10091aa4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_gold_mdl_10091a90;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_gold_mdl_10091a7c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_10091564;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x27e) = 3;
  *(undefined2 *)(param_1 + 0x280) = 3;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x282) = 4;
  *(undefined2 *)(param_1 + 0x284) = 4;
  *(undefined2 *)(param_1 + 0x286) = 5;
  *(undefined2 *)(param_1 + 0x288) = 6;
  *(undefined2 *)(param_1 + 600) = 7;
  *(undefined2 *)(param_1 + 0x25a) = 7;
  *(undefined2 *)(param_1 + 0x25c) = 7;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_gold_gold_fire_wav_10091a60;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 100070f0  FUN_100070f0  (14 bytes)
 * uint FUN_100070f0(int param_1)
 * called by: FUN_10008b30, FUN_10008e50, FUN_100091e0, FUN_100096f0, FUN_1000a1f0, FUN_1000a270, FUN_1000a9a0
 */
uint __cdecl FUN_100070f0(int param_1)

{
  return *(uint *)(param_1 + 0x710) & 2;
}

/* 10007100  FUN_10007100  (14 bytes)
 * uint FUN_10007100(int param_1)
 * called by: FUN_10008100, FUN_10008230, FUN_100088e0, FUN_100089a0
 */
uint __cdecl FUN_10007100(int param_1)

{
  return *(uint *)(param_1 + 0x710) & 0x10;
}

/* 10007110  FUN_10007110  (170 bytes)
 * int FUN_10007110(int param_1, uint param_2)
 * called by: FUN_10003830, FUN_10008720, FUN_1003dfa0, FUN_1003f090, FUN_10040c20, FUN_100425b0, FUN_10068f70
 */
int __cdecl FUN_10007110(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_2 & 1) != 0) {
    iVar2 = (int)*(short *)(&DAT_100aa178 + param_1 * 0x3dc);
  }
  if ((((param_2 & 2) == 0) || ((param_2 & 4) == 0)) ||
     (sVar1 = *(short *)(&DAT_100aa180 + param_1 * 0x3dc), sVar1 == -1)) {
    if ((param_2 & 2) != 0) {
      iVar2 = iVar2 + *(short *)(&DAT_100aa17a + param_1 * 0x3dc);
    }
    if ((param_2 & 4) == 0) goto LAB_10007195;
    sVar1 = *(short *)(&DAT_100aa17c + param_1 * 0x3dc);
  }
  iVar2 = iVar2 + sVar1;
LAB_10007195:
  if ((param_2 & 8) == 0) {
    if (param_1 == 0x24) {
      iVar2 = iVar2 + 1;
    }
    return iVar2;
  }
  return iVar2 + *(short *)(&DAT_100aa17e + param_1 * 0x3dc);
}

/* 100071c0  FUN_100071c0  (39 bytes)
 * undefined4 * FUN_100071c0(int param_1)
 * called by: FUN_10003830, FUN_10007a50, FUN_1000ab00, FUN_1000ad70, FUN_1000b670, FUN_10010630, FUN_100108b0, FUN_10010bd0, FUN_10011a60, FUN_10012050, FUN_100124a0, FUN_100128e0, ... (45 total)
 */
undefined4 * __cdecl FUN_100071c0(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x26)) {
    return &DAT_100aa050 + param_1 * 0xf7;
  }
  return &DAT_100aa050;
}

/* 100071f0  FUN_100071f0  (36 bytes)
 * undefined4 * FUN_100071f0(int param_1)
 * called by: FUN_100129f0, FUN_10012ba0, FUN_10035010, FUN_10035d40, FUN_100392b0, FUN_10039380, FUN_1003de90, FUN_100450c0, FUN_1004d7e0
 */
undefined4 * __cdecl FUN_100071f0(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x10)) {
    return &DAT_1009ffc0 + param_1 * 0xe;
  }
  return &DAT_1009ffc0;
}

/* 10007220  FUN_10007220  (102 bytes)
 * undefined FUN_10007220(void)
 * called by: FUN_10007de0
 */
void FUN_10007220(void)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int local_4;
  
  iVar3 = 0;
  pfVar2 = (float *)&DAT_100a0368;
  do {
    local_4 = 1;
    if (0x100a036b < (int)pfVar2) {
      local_4 = iVar3;
    }
    fVar1 = 1.0 / SQRT((float)local_4 * 0.1);
    *pfVar2 = fVar1;
    if (1.0 < fVar1) {
      *pfVar2 = 1.0;
    }
    if (*pfVar2 < 0.0) {
      *pfVar2 = 0.0;
    }
    pfVar2 = pfVar2 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)pfVar2 < 0x100a9fa8);
  return;
}

/* 10007290  FUN_10007290  (37 bytes)
 * float10 FUN_10007290(int param_1)
 * called by: FUN_10035d40, FUN_100450c0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10007290(int param_1)

{
  if (param_1 < 0) {
    return (float10)DAT_100a0368;
  }
  if (9999 < param_1) {
    return (float10)_DAT_100a9fa4;
  }
  return (float10)(&DAT_100a0368)[param_1];
}

/* 100072c0  FUN_100072c0  (447 bytes)
 * undefined FUN_100072c0(int param_1)
 * called by: FUN_10007480, FUN_1004b840
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100072c0(int param_1)

{
  if (param_1 == 1) {
    _DAT_100a0004 = 0x5a;
    _DAT_100a00ac = 0x3c;
    _DAT_100a011c = 0x3c;
    _DAT_100a00e4 = 0x15;
    _DAT_100a0154 = 0x28;
    _DAT_100a003c = 0x32;
    _DAT_100a01c4 = 0x1e;
    _DAT_100a018c = 10;
    _DAT_100a0074 = 0x20;
    _DAT_100a01fc = 0x22;
    _DAT_100a0234 = 0xf;
    _DAT_100a026c = 100;
    _DAT_100a02a4 = 0xf;
    return;
  }
  if (param_1 != 2) {
    if (param_1 != 3) {
      _DAT_100a0004 = 0xd2;
      _DAT_100a00e4 = 0x46;
      _DAT_100a0154 = 0xa0;
      _DAT_100a003c = 0xaf;
      _DAT_100a01c4 = 0x5a;
      _DAT_100a00ac = 0x78;
      _DAT_100a011c = 0x5a;
      _DAT_100a018c = 0x1e;
      _DAT_100a0074 = 0x3c;
      _DAT_100a01fc = 0x96;
      _DAT_100a0234 = 0x32;
      _DAT_100a026c = 300;
      _DAT_100a02a4 = 0x23;
      return;
    }
    _DAT_100a0004 = 0;
    _DAT_100a00e4 = 0;
    _DAT_100a0154 = 0;
    _DAT_100a003c = 0;
    _DAT_100a01c4 = 0;
    _DAT_100a00ac = 0;
    _DAT_100a011c = 0;
    _DAT_100a018c = 0;
    _DAT_100a0074 = 0;
    _DAT_100a01fc = 0;
    _DAT_100a0234 = 0;
    _DAT_100a026c = 0;
    _DAT_100a02a4 = 0;
    return;
  }
  _DAT_100a00e4 = 7;
  _DAT_100a0004 = 0x1e;
  _DAT_100a00ac = 0x1e;
  _DAT_100a011c = 0x1e;
  _DAT_100a0154 = 0x14;
  _DAT_100a003c = 0x19;
  _DAT_100a01c4 = 0xf;
  _DAT_100a018c = 5;
  _DAT_100a0074 = 0x10;
  _DAT_100a01fc = 0x11;
  _DAT_100a0234 = 5;
  _DAT_100a026c = 0x28;
  _DAT_100a02a4 = 5;
  return;
}

/* 10007480  FUN_10007480  (1482 bytes)
 * undefined FUN_10007480(void)
 * called by: FUN_10007de0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007480(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  puVar2 = &DAT_1009ffc0;
  for (iVar3 = 0xe0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_1009ffdc;
  do {
    *puVar2 = 0x3f800000;
    puVar2 = puVar2 + 0xe;
  } while ((int)puVar2 < 0x100a035c);
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_10091b5c;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_1009fff8 = 0x3ecccccd;
  _DAT_1009fffc = 0x32;
  _DAT_100a0000 = 1;
  _DAT_100a0008 = 0x1e;
  _DAT_100a000c = 0x2000;
  _DAT_100a0010 = 0x3e4ccccd;
  _DAT_100a0018 = 0x50;
  _DAT_100a001c = 0x14a;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100a0020;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = (char *)&DAT_10091b54;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100a00d8 = 0x3e99999a;
  _DAT_100a00dc = 0x46;
  _DAT_100a00e0 = 1;
  _DAT_100a00e8 = 10;
  _DAT_100a00ec = 0x2000;
  _DAT_100a00f0 = 0x3f000000;
  _DAT_100a00f8 = 0x5a;
  _DAT_100a00fc = 0x1e0;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100a0100;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_10091b48;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100a0148 = 0x3f000000;
  _DAT_100a014c = 0x78;
  _DAT_100a0150 = 1;
  _DAT_100a0158 = 0x14;
  _DAT_100a015c = 0x2000;
  _DAT_100a0160 = 0x3f800000;
  _DAT_100a0168 = 100;
  _DAT_100a016c = 0x2da;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100a0170;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  _DAT_100a0030 = 0x3ecccccd;
  _DAT_100a0034 = 0x3c;
  _DAT_100a0038 = 1;
  _DAT_100a0040 = 0xc;
  _DAT_100a0044 = 0x2000;
  _DAT_100a0048 = 0x3e4ccccd;
  _DAT_100a0050 = 0x5a;
  _DAT_100a0054 = 0x118;
  pcVar6 = &DAT_10091b40;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100a0058;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s_10mm_AUTO_10091b34;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100a01b8 = 0x3e99999a;
  _DAT_100a01bc = 0x46;
  _DAT_100a01c0 = 1;
  _DAT_100a01c8 = 0xf;
  _DAT_100a01cc = 0x2000;
  _DAT_100a01d0 = 0x3f000000;
  _DAT_100a01d8 = 0x5a;
  _DAT_100a01dc = 0x1c2;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100a01e0;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s_5_56_Nato_10091b28;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100a00a4 = 0x50;
  _DAT_100a00a0 = 0x3e99999a;
  _DAT_100a00a8 = 2;
  _DAT_100a00b0 = 0x1e;
  _DAT_100a00b4 = 0x2000;
  _DAT_100a00b8 = 0x3f666666;
  _DAT_100a00c0 = 0x96;
  _DAT_100a00c4 = 900;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100a00c8;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_10091b1c;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100a0110 = 0x3e4ccccd;
  _DAT_100a0114 = 100;
  _DAT_100a0118 = 2;
  _DAT_100a0120 = 0x1e;
  _DAT_100a0124 = 0x2000;
  _DAT_100a0128 = 0x3f333333;
  _DAT_100a0130 = 0xaa;
  _DAT_100a0134 = 0x316;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100a0138;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  _DAT_100a0180 = 0x3dcccccd;
  _DAT_100a0184 = 500;
  _DAT_100a0188 = 2;
  _DAT_100a0190 = 5;
  uVar4 = 0xffffffff;
  _DAT_100a0194 = 0x2000;
  pcVar6 = (char *)&DAT_10091b14;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100a0198 = 0x3f800000;
  _DAT_100a01a0 = 200;
  _DAT_100a01a4 = 1000;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100a01a8;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s_SHELLS_10091b0c;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100a0068 = 0x3e99999a;
  _DAT_100a006c = 0x78;
  _DAT_100a0070 = 2;
  _DAT_100a0078 = 8;
  _DAT_100a007c = 0x2000;
  _DAT_100a0080 = 0;
  _DAT_100a0088 = 0x5a;
  _DAT_100a008c = 0x15e;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100a0090;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_10091b04;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100a01f0 = 0x3f000000;
  _DAT_100a01f4 = 100;
  _DAT_100a01f8 = 1;
  _DAT_100a0200 = 0x11;
  _DAT_100a0204 = 0x2000;
  _DAT_100a0208 = 0x3f666666;
  _DAT_100a0210 = 0x46;
  _DAT_100a0214 = 0x15e;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100a0218;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s__454_Casull_10091af8;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100a0228 = 0x3e99999a;
  _DAT_100a022c = 0x96;
  _DAT_100a0230 = 1;
  _DAT_100a0238 = 5;
  _DAT_100a023c = 0x2000;
  _DAT_100a0240 = 0x3f400000;
  _DAT_100a0248 = 0x14;
  _DAT_100a024c = 400;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100a0250;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_10091af0;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100a0260 = 0x3f000000;
  _DAT_100a0264 = 0x1e;
  _DAT_100a0268 = 1;
  _DAT_100a0270 = 0x14;
  _DAT_100a0274 = 0x2000;
  _DAT_100a0278 = 0;
  _DAT_100a0280 = 0x28;
  _DAT_100a0284 = 300;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100a0288;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_10091ae4;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100a02ac = 0x2000;
  _DAT_100a0298 = 0x3e4ccccd;
  _DAT_100a029c = 0x96;
  _DAT_100a02a0 = 2;
  _DAT_100a02a8 = 5;
  _DAT_100a02b0 = 0x3f333333;
  _DAT_100a02b8 = 0xaa;
  _DAT_100a02bc = 0x352;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100a02c0;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_100072c0(0);
  return;
}

/* 10007a50  FUN_10007a50  (42 bytes)
 * undefined FUN_10007a50(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * called by: FUN_10007a80
 */
void __cdecl
FUN_10007a50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 *puVar1;
  
  puVar1 = FUN_100071c0(param_1);
  puVar1[10] = param_2;
  puVar1[0xc] = param_3;
  puVar1[0xd] = param_4;
  puVar1[7] = param_5;
  return;
}

/* 10007a80  FUN_10007a80  (850 bytes)
 * undefined FUN_10007a80(void)
 * called by: FUN_10007de0
 */
void FUN_10007a80(void)

{
  FUN_10007a50(1,0x3c23d70a,0x400ccccd,0x3bd4fdf4,0x41c00000);
  FUN_10007a50(9,0x3c23d70a,0x40800000,0,0x42040000);
  FUN_10007a50(10,0x3ca3d70a,0x40800000,0,0x42040000);
  FUN_10007a50(0xc,0x3ba3d70a,0x40f00000,0x3c4ccccd,0x42440000);
  FUN_10007a50(0xe,0x3b23d70a,0x3fc00000,0x3c23d70a,0x41b80000);
  FUN_10007a50(0x1e,0x3ba3d70a,0x3fc00000,0x3c23d70a,0x41b80000);
  FUN_10007a50(2,0x3c23d70a,0x40200000,0,0x41d80000);
  FUN_10007a50(8,0x3ca3d70a,0x40200000,0,0x41d80000);
  FUN_10007a50(0x15,0x3bf5c28f,0x40b00000,0,0x42200000);
  FUN_10007a50(0x16,0x3c23d70a,0x40a00000,0x3c4ccccd,0x421c0000);
  FUN_10007a50(0x1c,0x3ba3d70a,0x3eb33333,0x3c03126f,0x41700000);
  FUN_10007a50(0x1f,0x3b23d70a,0x41500000,0,0x42be0000);
  FUN_10007a50(0x24,0x3a83126f,0x40f00000,0,0x42c80000);
  FUN_10007a50(3,0x3ca3d70a,0x3fe00000,0x3bd4fdf4,0x41a00000);
  FUN_10007a50(0x10,0x3d23d70a,0x3fe00000,0x3bd4fdf4,0x41a00000);
  FUN_10007a50(6,0x3ba3d70a,0x3fa00000,0x3ba3d70a,0x41980000);
  FUN_10007a50(7,0x3ca3d70a,0x40100000,0x3b449ba6,0x41b80000);
  FUN_10007a50(0x11,0x3ccccccd,0x3f000000,0x3ac49ba6,0x41800000);
  FUN_10007a50(0x25,0x3d4ccccd,0x3f000000,0x3b449ba6,0x41800000);
  FUN_10007a50(0x13,0x3ba3d70a,0x3f800000,0x3bd4fdf4,0x41800000);
  FUN_10007a50(0x17,0x3c75c28f,0x40400000,0,0x41f80000);
  FUN_10007a50(5,0x3ba3d70a,0x40700000,0x3b83126f,0x42040000);
  FUN_10007a50(0x12,0x3a83126f,0x41200000,0x3dcccccd,0x43390000);
  FUN_10007a50(0xd,0x3b23d70a,0x40b00000,0x38d1b717,0x421c0000);
  FUN_10007a50(0xf,0x3ba3d70a,0x40000000,0x3c23d70a,0x41e80000);
  FUN_10007a50(0x1b,0x3ac49ba6,0x40800000,0x3ba3d70a,0x42200000);
  FUN_10007a50(4,0x3d0f5c29,0x41500000,0,0x41400000);
  FUN_10007a50(0x14,0x3d4ccccd,0x41200000,0,0x41400000);
  FUN_10007a50(0x21,0x3d8f5c29,0x41200000,0,0x41a80000);
  FUN_10007a50(0x1a,0x3d3851ec,0x41080000,0,0x41800000);
  FUN_10007a50(0xb,0x3d851eb8,0x40800000,0,0x40e00000);
  FUN_10007a50(0x20,0x3c75c28f,0x3fc00000,0x3ba3d70a,0x42040000);
  return;
}

/* 10007de0  FUN_10007de0  (795 bytes)
 * undefined FUN_10007de0(void)
 * called by: FUN_100036f0, FUN_1004cb50
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007de0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_100aa050;
  for (iVar1 = 0x24aa; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_1000d000(0x100aa050);
  FUN_10006810(&DAT_100aa42c);
  FUN_1000fd40(&DAT_100aabe4);
  FUN_10010080(&DAT_100ade10);
  FUN_10005170(&DAT_100aafc0);
  FUN_1000c3b0(&DAT_100ab39c);
  FUN_1000ded0(&DAT_100ab778);
  FUN_1000db70(&DAT_100abb54);
  FUN_100057b0(&DAT_100abf30);
  FUN_100054a0(&DAT_100aa808);
  FUN_1000d0f0(&DAT_100ac30c);
  FUN_1000d440(&DAT_100ac6e8);
  FUN_1000fa20(&DAT_100acac4);
  FUN_10005e70(&DAT_100acea0);
  FUN_100047d0(&DAT_100ad27c);
  FUN_100061e0(&DAT_100ad658);
  FUN_10004b20(&DAT_100ada34);
  FUN_1000f750(&DAT_100ae1ec);
  FUN_10004e40(&DAT_100ae5c8);
  FUN_1000e1f0(&DAT_100ae9a4);
  FUN_1000f110(&DAT_100aed80);
  FUN_10006e20(&DAT_100af15c);
  FUN_10006b10(&DAT_100af538);
  FUN_1000cce0(&DAT_100af914);
  FUN_1000ca40(&DAT_100afcf0);
  FUN_1000bd70(&DAT_100b00cc);
  FUN_1000d7f0(&DAT_100b04a8);
  FUN_1000c030(&DAT_100b0884);
  FUN_1000e500(&DAT_100b0c60);
  FUN_100064e0(&DAT_100b1418);
  FUN_10005b60(&DAT_100b17f4);
  FUN_1000c730(&DAT_100b1bd0);
  FUN_1000e800(&DAT_100b1fac);
  FUN_1000bab0(&DAT_100b2388);
  FUN_1000eb80(&DAT_100b2764);
  FUN_1000f440(&DAT_100b2b40);
  FUN_1000ee40(&DAT_100b2f1c);
  FUN_10007a80();
  FUN_10007480();
  FUN_10007220();
  puVar2 = &DAT_100a9fb4;
  for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_100a9fb4 = 0x12;
  DAT_100a9fb8 = 0x20;
  _DAT_100a9fbc = 0xd;
  _DAT_100a9fc0 = 5;
  _DAT_100a9fc4 = 0xf;
  _DAT_100a9fc8 = 0x1b;
  _DAT_100a9fcc = 0xb;
  _DAT_100a9fd0 = 0x14;
  _DAT_100a9fd4 = 4;
  _DAT_100a9fd8 = 0x1a;
  _DAT_100a9fdc = 0x21;
  _DAT_100a9fe0 = 0x10;
  _DAT_100a9fe4 = 0x25;
  _DAT_100a9fe8 = 6;
  _DAT_100a9fec = 0x17;
  _DAT_100a9ff0 = 7;
  _DAT_100a9ff4 = 3;
  _DAT_100a9ff8 = 0x11;
  _DAT_100a9ffc = 0x13;
  _DAT_100aa000 = 10;
  _DAT_100aa004 = 8;
  _DAT_100aa008 = 0x15;
  _DAT_100aa00c = 0x1e;
  _DAT_100aa010 = 0x1f;
  _DAT_100aa014 = 0xc;
  _DAT_100aa018 = 0x24;
  _DAT_100aa01c = 0x16;
  _DAT_100aa020 = 9;
  _DAT_100aa024 = 2;
  _DAT_100aa028 = 0xe;
  _DAT_100aa02c = 0x1c;
  _DAT_100aa030 = 1;
  _DAT_100aa034 = 0x22;
  _DAT_100aa038 = 0x19;
  _DAT_100aa03c = 0x23;
  _DAT_100aa040 = 0x18;
  _DAT_100aa044 = 0x1d;
  return;
}

/* 10008100  FUN_10008100  (299 bytes)
 * undefined FUN_10008100(float * param_1, float param_2, float param_3)
 * called by: FUN_100091e0, FUN_100096f0
 */
void __thiscall FUN_10008100(void *this,float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  
  fVar1 = param_3;
  if (param_3 != 0.0) {
    *param_1 = *param_1 * 0.875;
  }
  if ((0.0 < param_2) && (DAT_100d5cbc != 0)) {
    param_3 = 2.0;
    uVar3 = FUN_10007100(*(int *)((int)this + 0x70));
    if (uVar3 != 0) {
      param_3 = 1.0;
    }
    if (fVar1 != 0.0) {
      param_3 = param_3 * 0.775;
    }
    fVar1 = *DAT_10099114;
    fVar2 = fVar1 - *(float *)((int)this + 0x8a0);
    if (fVar2 < 0.001) {
      *(undefined4 *)((int)this + 0x8a4) = 0;
      *(float *)((int)this + 0x8a0) = fVar1;
      return;
    }
    *param_1 = *(float *)(*(int *)((int)this + 0x70) + 0x764) + *param_1;
    fVar4 = (float10)(**(code **)(**(int **)((int)this + 0x70) + 8))();
    fVar4 = fVar4 * (float10)fVar2;
    if ((float10)1.0 <= fVar4) {
      fVar4 = (float10)0.5;
      *(undefined4 *)((int)this + 0x8a4) = 0;
    }
    fVar4 = ((float10)1.0 - fVar4) * (float10)param_3 * (float10)param_2 +
            (float10)*(float *)(*(int *)((int)this + 0x70) + 0x764);
    if ((float10)0.1 <= fVar4) {
      fVar4 = (float10)0.1;
    }
    *(float *)(*(int *)((int)this + 0x70) + 0x764) = (float)fVar4;
    *(float *)((int)this + 0x8a0) = fVar1;
  }
  return;
}

/* 10008230  FUN_10008230  (428 bytes)
 * undefined FUN_10008230(float param_1, int param_2, char param_3)
 * called by: FUN_10008e50, FUN_100091e0, FUN_100096f0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10008230(void *this,float param_1,int param_2,char param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float local_4;
  
  local_4 = param_1 * 0.85;
  if (param_2 == 8) {
    param_1 = local_4 * 0.35;
  }
  else if ((param_2 == 4) || (param_2 == 5)) {
    param_1 = local_4 * 0.15;
  }
  else if (param_2 == 1) {
    param_1 = local_4 * -0.25;
  }
  else if ((param_2 == 6) || (param_2 == 7)) {
    param_1 = local_4 * -0.3;
  }
  else if (param_2 == 9) {
    param_1 = local_4 * -0.35;
  }
  else {
    param_1 = 0.0;
  }
  if (param_3 != '\0') {
    local_4 = local_4 * 0.775;
    param_1 = param_1 * 0.775;
  }
  uVar3 = FUN_10007100(*(int *)((int)this + 0x70));
  if (uVar3 != 0) {
    local_4 = local_4 * 0.6666667;
    param_1 = param_1 * 0.6666667;
  }
  if (DAT_100d5cbc != 0) {
    _DAT_10191d10 = _DAT_10191d10 - local_4;
    _DAT_10191d14 = _DAT_10191d14 + param_1;
    fVar1 = DAT_100963e8;
    if (DAT_100963e8 == 0.0) {
      fVar1 = 1.0;
    }
    fVar1 = (0.15 - (*DAT_10099114 - *(float *)((int)this + 0x8c0)) * fVar1) * 15.0;
    if (0.001 < fVar1) {
      if (1.0 <= fVar1) {
        fVar1 = 1.0;
      }
      if (param_3 == '\0') {
        fVar2 = 1.0;
      }
      else {
        fVar2 = 0.775;
      }
      FUN_10057fa0(&DAT_1018cac8,fVar2 * fVar1,0.1,35.0);
      *(float *)((int)this + 0x8c0) = *DAT_10099114;
      return;
    }
    *(float *)((int)this + 0x8c0) = *DAT_10099114;
  }
  return;
}

/* 100083f0  FUN_100083f0  (116 bytes)
 * undefined FUN_100083f0(CBasePlayerItem * param_1)
 * called by: FUN_100036f0, FUN_10003830
 */
void __fastcall FUN_100083f0(CBasePlayerItem *param_1)

{
  FUN_10008470((int)param_1);
  **(int **)(param_1 + 4) = (int)s_weapon_tsgun_10091b68 - *(int *)(DAT_10099114 + 0x98);
  (**(code **)(*(int *)param_1 + 0x20))();
  (*DAT_100987c0)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_models_w_glock18_mdl_100918fc);
  *(undefined4 *)(param_1 + 0xa4) = 1;
  *(undefined4 *)(param_1 + 0xb4) = 1;
  *(undefined4 *)(param_1 + 0x78) = 0x10;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x89c) = 0;
  *(undefined4 *)(param_1 + 0x8a0) = 0;
  CBasePlayerItem::AttemptToMaterialize(param_1);
  return;
}

/* 10008470  FUN_10008470  (101 bytes)
 * undefined FUN_10008470(int param_1)
 * called by: FUN_100083f0
 */
void __fastcall FUN_10008470(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x104);
  for (iVar1 = 0x1c8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xc4);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0x83a) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x83c);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x86c) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x870);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined4 *)(param_1 + 0x8c0) = 0;
  return;
}

/* 100085d0  FUN_100085d0  (131 bytes)
 * undefined4 FUN_100085d0(int param_1, char param_2)
 * called by: FUN_1000a1f0, FUN_1000a270, FUN_1000a840
 */
undefined4 __thiscall FUN_100085d0(void *this,int param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((param_1 < 1) || (0x25 < param_1)) || (*(char *)(param_1 * 0x30 + 0x104 + (int)this) == '\0')
     ) {
    return 0;
  }
  puVar2 = (undefined4 *)(param_1 * 0x30 + 0x104 + (int)this);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if ((*(int **)((int)this + 0x70) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)((int)this + 0x70) + 0xac))(), iVar1 == 0)) {
    return 0;
  }
  if (param_1 == *(int *)((int)this + 0xb8)) {
    if (param_2 != '\0') {
      FUN_10008660(this,param_1);
      return 1;
    }
    FUN_1000ab00(this);
  }
  return 1;
}

/* 10008660  FUN_10008660  (78 bytes)
 * undefined FUN_10008660(int param_1)
 * called by: FUN_100085d0
 */
void __thiscall FUN_10008660(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_100a9fb4;
  do {
    iVar1 = *piVar2;
    if ((*(char *)(iVar1 * 0x30 + 0x104 + (int)this) != '\0') && (param_1 != iVar1)) break;
    piVar2 = piVar2 + 1;
  } while ((int)piVar2 < 0x100aa04c);
  iVar1 = FUN_100086b0(this,iVar1);
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x120))();
  }
  return;
}

/* 100086b0  FUN_100086b0  (99 bytes)
 * undefined4 FUN_100086b0(int param_1)
 * called by: FUN_10003830, FUN_10008660
 */
undefined4 __thiscall FUN_100086b0(void *this,int param_1)

{
  if ((((param_1 != *(int *)((int)this + 0xb8)) && (-1 < param_1)) && (param_1 < 0x26)) &&
     (((*(char *)(param_1 * 0x30 + 0x104 + (int)this) != '\0' &&
       (*(char *)(&DAT_100aa050 + param_1 * 0xf7) != '\0')) || (param_1 == 0)))) {
    FUN_1000ab00(this);
    *(int *)((int)this + 0xb8) = param_1;
    return 1;
  }
  return 0;
}

/* 10008720  FUN_10008720  (372 bytes)
 * undefined4 FUN_10008720(int * param_1)
 */
undefined4 __fastcall FUN_10008720(int *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = param_1[0x2e];
  if (iVar3 == 0) {
    FUN_1000ab00(param_1);
    return 1;
  }
  param_1[0x226] = 0;
  param_1[0x30] = (int)(&DAT_100aa050 + iVar3 * 0xf7);
  param_1[0x2f] = (int)(param_1 + iVar3 * 0xc + 0x41);
  (param_1 + iVar3 * 0xc + 0x41)[10] = iVar3 * 0x3dc + 0x100aa2a2;
  iVar3 = FUN_10007110(param_1[0x2e],*(uint *)(param_1[0x2f] + 0x10));
  *(int *)(param_1[0x2f] + 0x18) = iVar3;
  *(undefined4 *)(param_1[1] + 0x114) = *(undefined4 *)(param_1[0x2f] + 0x18);
  *(undefined4 *)(param_1[0x2f] + 8) = 0;
  *(undefined1 *)(param_1[0x2f] + 0x2c) = 0;
  FUN_100035f0(param_1,param_1[0x30] + 0x132);
  (*DAT_100989a4)(1,*(undefined4 *)(*(int *)(param_1[0x1c] + 4) + 0x208),
                  CONCAT22((short)((uint)param_1[0x2f] >> 0x10),
                           *(undefined2 *)((int)param_1 + 0x836)),0,&DAT_10098a28,&DAT_10098a28,0,0,
                  param_1[0x2e],*(undefined4 *)(param_1[0x2f] + 0x10),0,0);
  pcVar1 = (char *)(param_1[0x1c] + 0x486 + param_1[0x2e]);
  cVar2 = *pcVar1;
  if ('\0' < cVar2) {
    *(char *)(param_1[0x2f] + 2) = cVar2 + -1;
    return 1;
  }
  *pcVar1 = *(char *)(param_1[0x2f] + 2) + '\x01';
  return 1;
}

/* 100088a0  FUN_100088a0  (61 bytes)
 * undefined FUN_100088a0(int param_1)
 * called by: FUN_1000a4c0, FUN_1000a720, FUN_1000ab00
 */
void __fastcall FUN_100088a0(int param_1)

{
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x214) = 0;
  if ((*(int *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0xbc) == 0) &&
     (*(int *)(param_1 + 0xc0) != 0)) {
    FUN_10003530(*(int *)(param_1 + 0xc0) + 0x132,*(int *)(param_1 + 0x70));
  }
  return;
}

/* 100088e0  FUN_100088e0  (179 bytes)
 * undefined FUN_100088e0(int * param_1)
 */
void __fastcall FUN_100088e0(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  iVar2 = param_1[0x2f];
  if (iVar2 == 0) {
    FUN_1000af10((int)param_1);
    return;
  }
  cVar1 = *(char *)(param_1[0x30] + 0x348);
  if (cVar1 == '\x02') {
    *(undefined1 *)(iVar2 + 0x24) = 1;
    FUN_10009e30((int)param_1);
    return;
  }
  if (cVar1 == '\x03') {
    *(undefined1 *)(iVar2 + 0x24) = 1;
    FUN_1000a270(param_1);
    return;
  }
  if (cVar1 != '\n') {
    if (cVar1 != '\v') {
      if (*(char *)(iVar2 + 2) == '\x04') {
        if (((*(uint *)(param_1[0x1c] + 0x7e4) & 0x800) == 0) &&
           (uVar3 = FUN_10007100(param_1[0x1c]), uVar3 == 0)) {
          return;
        }
        FUN_10008b30(param_1);
        return;
      }
      if (*(char *)(iVar2 + 2) == '\x05') {
        FUN_10008b30(param_1);
        return;
      }
      fVar4 = FUN_1001adf0();
      param_1[0x24] = (int)(float)(fVar4 + (float10)0.3);
      fVar4 = FUN_1001adf0();
      param_1[0x26] = (int)(float)(fVar4 + (float10)1.0);
    }
    return;
  }
  FUN_1000a1f0(param_1);
  return;
}

/* 100089a0  FUN_100089a0  (245 bytes)
 * undefined FUN_100089a0(int * param_1)
 */
void __fastcall FUN_100089a0(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[0x2f];
  if (iVar2 == 0) {
    FUN_1000af10((int)param_1);
    return;
  }
  cVar1 = *(char *)(param_1[0x30] + 0x348);
  if (cVar1 == '\x02') {
    *(undefined1 *)(iVar2 + 0x24) = 0;
    FUN_10009e30((int)param_1);
    return;
  }
  if (cVar1 == '\x03') {
    *(undefined1 *)(iVar2 + 0x24) = 0;
    FUN_1000a270(param_1);
    return;
  }
  if (cVar1 == '\n') {
    FUN_10009ee0((int)param_1);
    return;
  }
  if (cVar1 == '\v') {
    if ((*(byte *)(param_1[0x1c] + 0x7e4) & 1) != 0) {
      *(undefined1 *)(iVar2 + 0x24) = 0;
      FUN_1000a270(param_1);
      return;
    }
  }
  else {
    cVar1 = *(char *)(iVar2 + 2);
    if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
      if (((*(byte *)(param_1[0x1c] + 0x7e4) & 1) == 0) &&
         (uVar3 = FUN_10007100(param_1[0x1c]), uVar3 == 0)) {
        return;
      }
    }
    else if ((cVar1 != '\0') && (cVar1 != '\x05')) {
      if (cVar1 != '\x02') {
        if (cVar1 != '\x03') {
          return;
        }
        if ((*(byte *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 1) == 0) {
          return;
        }
        FUN_10008b30(param_1);
        return;
      }
      if ((*(byte *)(param_1[0x1c] + 0x7e4) & 1) == 0) {
        return;
      }
      if (*(int *)(iVar2 + 8) != 0) {
        return;
      }
      *(uint *)(iVar2 + 8) = (param_1[0x2e] != 0x17) + 2;
      return;
    }
    FUN_10008b30(param_1);
  }
  return;
}

/* 10008ac0  FUN_10008ac0  (110 bytes)
 * undefined FUN_10008ac0(int param_1)
 * called by: FUN_10008b30, FUN_100096f0
 */
void __fastcall FUN_10008ac0(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0xb8) != 0x24) {
    (*DAT_100989a4)(1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208),
                    *(undefined2 *)(param_1 + 0x828),0,&DAT_10098a28,&DAT_10098a28,0,0,0,0,0,0);
    fVar1 = FUN_1001adf0();
    *(float *)(param_1 + 0x90) = (float)(fVar1 + (float10)0.1);
    *(float *)(param_1 + 0x8c) = (float)(fVar1 + (float10)0.1);
    fVar1 = FUN_1001adf0();
    *(float *)(param_1 + 0x98) = (float)(fVar1 + (float10)0.5);
  }
  return;
}

/* 10008b30  FUN_10008b30  (230 bytes)
 * undefined FUN_10008b30(void * param_1)
 * called by: FUN_100088e0, FUN_100089a0, FUN_1000a9a0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10008b30(void *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (*(int *)((int)param_1 + 0xbc) != 0) {
    if (*(int *)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x1c0) == 3) {
      FUN_10008ac0((int)param_1);
      return;
    }
    uVar3 = FUN_100070f0(*(int *)((int)param_1 + 0x70));
    if (((uVar3 == 0) && (iVar2 = *(int *)((int)param_1 + 0xbc), *(int *)(iVar2 + 4) < 1)) &&
       ((*(char *)(iVar2 + 0x24) == '\0' ||
        ((*(char *)(iVar2 + 2) != '\x03' ||
         (*(char *)(*(int *)((int)param_1 + 0xc0) + 0x348) != '\x01')))))) {
      FUN_10008ac0((int)param_1);
      return;
    }
    _DAT_1009ff54 = -1;
    FUN_10057e60(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x74);
    cVar1 = *(char *)(*(int *)((int)param_1 + 0xc0) + 0x348);
    if ((cVar1 != '\x04') && (cVar1 != '\x05')) {
      if (cVar1 == '\x01') {
        FUN_10008e50(param_1);
        _DAT_1009ff54 = 0;
        return;
      }
      FUN_100091e0(param_1);
      _DAT_1009ff54 = 0;
      return;
    }
    uVar4 = FUN_100096f0(param_1);
    if ((char)uVar4 != '\0') {
      _DAT_1009ff54 = (*(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) != '\0') + 8;
    }
  }
  return;
}

/* 10008e50  FUN_10008e50  (825 bytes)
 * undefined FUN_10008e50(void * param_1)
 * called by: FUN_10008b30
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10008e50(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 extraout_EDX;
  float10 fVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint auStack_54 [2];
  undefined1 auStack_1c [12];
  float afStack_10 [4];
  
  if ((DAT_1009ffbd & 1) == 0) {
    DAT_1009ffbd = DAT_1009ffbd | 1;
    FUN_1006af63(0x100091d0);
  }
  if ((DAT_1009ffbd & 2) == 0) {
    DAT_1009ffbd = DAT_1009ffbd | 2;
    FUN_1006af63(0x100091c0);
  }
  if ((DAT_1009ffbd & 4) == 0) {
    DAT_1009ffbd = DAT_1009ffbd | 4;
    FUN_1006af63(0x100091b0);
  }
  iVar2 = *(int *)((int)param_1 + 0xbc);
  if (*(int *)(iVar2 + 8) != 0) {
    *(undefined4 *)(iVar2 + 8) = 2;
    return;
  }
  if ((*(char *)(iVar2 + 2) != '\x03') || (DAT_1009ff44 = '\x01', *(char *)(iVar2 + 0x24) == '\0'))
  {
    DAT_1009ff44 = '\0';
  }
  if (*(char *)(*(int *)((int)param_1 + 0xbc) + 2) == '\x01') {
    _DAT_100a0360 = 0.15;
  }
  else {
    _DAT_100a0360 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x18);
  }
  fVar7 = FUN_1001adf0();
  *(float *)((int)param_1 + 0x8c) = (float)(fVar7 + (float10)_DAT_100a0360);
  fVar7 = FUN_1001adf0();
  *(float *)((int)param_1 + 0x98) = (float)(fVar7 + (float10)2.0);
  uVar5 = FUN_100070f0(*(int *)((int)param_1 + 0x70));
  if ((uVar5 == 0) && (*(int *)(*(int *)((int)param_1 + 0xbc) + 4) < 1)) {
    if (DAT_1009ff44 == '\0') {
      return;
    }
  }
  else if ((DAT_1009ff44 == '\0') &&
          (uVar5 = FUN_100070f0(*(int *)((int)param_1 + 0x70)), uVar5 == 0)) {
    piVar1 = (int *)(*(int *)((int)param_1 + 0xbc) + 4);
    *piVar1 = *piVar1 + -1;
  }
  puVar6 = (undefined4 *)(**(code **)(**(int **)((int)param_1 + 0x70) + 0x160))();
  _DAT_1009ff38 = *puVar6;
  _DAT_1009ff3c = puVar6[1];
  _DAT_1009ff40 = puVar6[2];
  _DAT_1009ff60 = *(undefined4 *)(DAT_10099114 + 0x28);
  _DAT_1009ff64 = *(undefined4 *)(DAT_10099114 + 0x2c);
  _DAT_1009ff68 = *(undefined4 *)(DAT_10099114 + 0x30);
  if (DAT_1009ff44 == '\0') {
    uVar3 = *(undefined4 *)(*(int *)((int)param_1 + 0xc0) + 0x28);
    puVar6 = (undefined4 *)FUN_10009190(auStack_1c,uVar3,uVar3,uVar3);
    auStack_54[1] = 0x10009025;
    FUN_10002610(&stack0xffffffb8,puVar6);
    uStack_5c = 0x10009034;
    FUN_10002610(auStack_54,(undefined4 *)&DAT_1009ff60);
    FUN_10002610(&uStack_60,(undefined4 *)&DAT_1009ff38);
    puVar6 = (undefined4 *)
             FUN_1000ba00(afStack_10,
                          (float)CONCAT31((int3)((uint)extraout_EDX >> 8),
                                          *(undefined1 *)(*(int *)((int)param_1 + 0xc0) + 0x24)));
    _DAT_1009ffb0 = *puVar6;
    _DAT_1009ffb4 = puVar6[1];
    _DAT_1009ffb8 = puVar6[2];
    iVar2 = *(int *)((int)param_1 + 0xc0);
    if (*(char *)(iVar2 + 0x38) != '\0') {
      fVar4 = 1.0;
      if ((*(byte *)(iVar2 + 0xc) & 3) != 0) {
        if (*(char *)(*(int *)((int)param_1 + 0xbc) + 2) == '\x01') {
          fVar4 = 1.0;
        }
        else {
          fVar4 = 0.35;
        }
      }
      FUN_10008230(param_1,fVar4 * *(float *)(iVar2 + 0x30),(uint)*(byte *)(iVar2 + 0x348),'\0');
    }
    if (DAT_1009ff44 == '\0') {
      auStack_54[0] =
           CONCAT22((short)((uint)*(undefined4 *)(*(int *)((int)param_1 + 0xc0) + 0x28) >> 0x10),
                    *(undefined2 *)((int)param_1 + 0x824));
      goto LAB_10009166;
    }
  }
  auStack_54[0] = (uint)*(ushort *)((int)param_1 + 0x82a);
LAB_10009166:
  auStack_54[1] = 0;
  uStack_5c = 1;
  uStack_60 = 0x1000916e;
  (*DAT_100989a4)();
  *(bool *)(*(int *)((int)param_1 + 0xbc) + 0x24) =
       *(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) == '\0';
  return;
}

/* 10009190  FUN_10009190  (25 bytes)
 * undefined FUN_10009190(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10008e50, FUN_100091e0, FUN_100096f0, FUN_1001f8e0, FUN_10035010, FUN_1003bb00, FUN_1003f090, FUN_10050080, FUN_10051270, FUN_100524c0, FUN_10052720, FUN_10052c80, ... (16 total)
 */
void __thiscall FUN_10009190(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return;
}

/* 100091e0  FUN_100091e0  (1247 bytes)
 * undefined FUN_100091e0(void * param_1)
 * called by: FUN_10008b30
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100091e0(void *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  char cVar7;
  float fVar8;
  undefined1 auStack_1c [12];
  float afStack_10 [4];
  
  if ((DAT_1009ffbc & 1) == 0) {
    DAT_1009ffbc = DAT_1009ffbc | 1;
    FUN_1006af63(0x100096e0);
  }
  if ((DAT_1009ffbc & 2) == 0) {
    DAT_1009ffbc = DAT_1009ffbc | 2;
    FUN_1006af63(0x100096d0);
  }
  if ((DAT_1009ffbc & 4) == 0) {
    DAT_1009ffbc = DAT_1009ffbc | 4;
    _DAT_1009ff20 = DAT_10098a28;
    _DAT_1009ff24 = DAT_10098a2c;
    _DAT_1009ff28 = DAT_10098a30;
    FUN_1006af63(0x100096c0);
  }
  puVar1 = (undefined4 *)(**(code **)(**(int **)((int)param_1 + 0x70) + 0x160))();
  _DAT_1009ff48 = *puVar1;
  _DAT_1009ff4c = puVar1[1];
  _DAT_1009ff50 = puVar1[2];
  _DAT_1009ff70 = *(undefined4 *)(DAT_10099114 + 0x28);
  _DAT_1009ff74 = *(undefined4 *)(DAT_10099114 + 0x2c);
  _DAT_1009ff78 = *(undefined4 *)(DAT_10099114 + 0x30);
  DAT_1009ff2c = *(undefined4 *)(*(int *)((int)param_1 + 0xc0) + 0x28);
  if (*(int *)((int)param_1 + 0xb8) == 0x12) {
    iVar5 = *(int *)(*(int *)((int)param_1 + 0x70) + 4);
    if (35.0 < SQRT(*(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28) +
                    *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                    *(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20))) {
      *(undefined4 *)(*(int *)((int)param_1 + 0x70) + 0x764) = 0x3e99999a;
    }
  }
  if ((*(int *)((int)param_1 + 0xb8) != 0x20) ||
     (iVar5 = *(int *)(*(int *)((int)param_1 + 0x70) + 4),
     SQRT(*(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28) +
          *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
          *(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20)) <= 175.0)) {
    iVar5 = *(int *)((int)param_1 + 0xc0);
    if (*(char *)(iVar5 + 0x2c) != '\0') {
      if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
         ((*(byte *)(iVar5 + 0xe4) & 1) != 0)) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = 1.4013e-45;
      }
      fVar8 = *(float *)(iVar5 + 0x34);
      goto LAB_100093b7;
    }
  }
  else {
    if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
       ((*(byte *)(*(int *)((int)param_1 + 0xc0) + 0xe4) & 1) != 0)) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = 1.4013e-45;
    }
    fVar8 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x34) * 5.0;
LAB_100093b7:
    FUN_10008100(param_1,(float *)&DAT_1009ff2c,fVar8,fVar2);
  }
  puVar1 = (undefined4 *)FUN_10009190(auStack_1c,DAT_1009ff2c,DAT_1009ff2c,DAT_1009ff2c);
  uStack_54 = 0x1000942c;
  FUN_10002610(&stack0xffffffb4,puVar1);
  uStack_60 = 0x1000943b;
  FUN_10002610(&uStack_58,(undefined4 *)&DAT_1009ff70);
  uVar3 = FUN_10002610(&uStack_64,(undefined4 *)&DAT_1009ff48);
  puVar1 = (undefined4 *)
           FUN_1000ba00(afStack_10,
                        (float)CONCAT31((int3)((uint)uVar3 >> 8),
                                        *(undefined1 *)(*(int *)((int)param_1 + 0xc0) + 0x24)));
  _DAT_1009ff20 = *puVar1;
  _DAT_1009ff24 = puVar1[1];
  _DAT_1009ff28 = puVar1[2];
  iVar5 = *(int *)((int)param_1 + 0xc0);
  if (((*(byte *)(iVar5 + 0x348) == 7) || (*(int *)((int)param_1 + 0xb8) == 0x1f)) ||
     (*(int *)((int)param_1 + 0xb8) == 0x21)) {
    if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
       ((*(byte *)(iVar5 + 0xe4) & 1) != 0)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
    fVar2 = *(float *)(iVar5 + 0x30);
  }
  else {
    if (*(char *)(iVar5 + 0x38) == '\0') goto LAB_10009506;
    if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
       ((*(byte *)(iVar5 + 0xe4) & 1) != 0)) {
      fVar2 = *(float *)(iVar5 + 0x30);
      cVar7 = '\0';
    }
    else {
      fVar2 = *(float *)(iVar5 + 0x30);
      cVar7 = '\x01';
    }
  }
  FUN_10008230(param_1,fVar2,(uint)*(byte *)(iVar5 + 0x348),cVar7);
LAB_10009506:
  uVar4 = FUN_100070f0(*(int *)((int)param_1 + 0x70));
  if (uVar4 == 0) {
    *(int *)(*(int *)((int)param_1 + 0xbc) + 4) = *(int *)(*(int *)((int)param_1 + 0xbc) + 4) + -1;
    iVar5 = *(int *)(*(int *)((int)param_1 + 0xc0) + 200);
    if (iVar5 != -1) {
      iVar5 = iVar5 * 0x30;
      *(int *)(iVar5 + 0x108 + (int)param_1) = *(int *)(iVar5 + 0x108 + (int)param_1) + -1;
      *(undefined4 *)((*(int *)(*(int *)((int)param_1 + 0xc0) + 200) + 6) * 0x30 + (int)param_1) =
           *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 4);
      iVar5 = *(int *)(*(int *)((int)param_1 + 0xc0) + 200) * 0x30;
      if (*(int *)(iVar5 + 0x108 + (int)param_1) < 0) {
        *(undefined4 *)(iVar5 + 0x108 + (int)param_1) = 0;
      }
    }
  }
  DAT_1009ff1c = CONCAT31(DAT_1009ff1c._1_3_,*(int *)(*(int *)((int)param_1 + 0xbc) + 4) == 0);
  uStack_58 = CONCAT22((short)((uint)*(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 0x10) >> 0x10),
                       *(undefined2 *)((int)param_1 + 0x824));
  uStack_54 = 0;
  uStack_60 = 1;
  uStack_64 = 0x10009603;
  (*DAT_100989a4)();
  cVar7 = *(char *)(*(int *)((int)param_1 + 0xbc) + 2);
  if (cVar7 == '\x02') {
    if (*(int *)(*(int *)((int)param_1 + 0xbc) + 8) == 1) {
      _DAT_1009ff18 = 0.2;
    }
    else {
      _DAT_1009ff18 = 0.03;
    }
  }
  else if ((cVar7 == '\x01') && ((*(byte *)(*(int *)((int)param_1 + 0xc0) + 0xc) & 1) != 0)) {
    _DAT_1009ff18 = 0.1;
  }
  else {
    _DAT_1009ff18 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x18);
  }
  fVar6 = FUN_1001adf0();
  fVar2 = 2.0;
  *(float *)((int)param_1 + 0x8c) = (float)(fVar6 + (float10)_DAT_1009ff18);
  if (((*(int *)((int)param_1 + 0xb8) == 0x24) && (*(int *)(*(int *)((int)param_1 + 0xbc) + 4) < 1))
     && (uVar4 = FUN_100070f0(*(int *)((int)param_1 + 0x70)), uVar4 == 0)) {
    fVar2 = 0.5;
  }
  fVar6 = FUN_1001adf0();
  *(float *)((int)param_1 + 0x98) = (float)(fVar6 + (float10)fVar2);
  return;
}

/* 100096f0  FUN_100096f0  (1796 bytes)
 * undefined4 FUN_100096f0(void * param_1)
 * called by: FUN_10008b30
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100096f0(void *param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 extraout_EAX;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  char cVar12;
  float10 fVar13;
  float10 fVar14;
  undefined4 uStack_74;
  undefined4 uStack_68;
  float local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_10 [16];
  
  if ((DAT_100aa04c & 1) == 0) {
    DAT_100aa04c = DAT_100aa04c | 1;
    FUN_1006af63(0x10009e20);
  }
  if ((DAT_100aa04c & 2) == 0) {
    DAT_100aa04c = DAT_100aa04c | 2;
    FUN_1006af63(0x10009e10);
  }
  if ((DAT_100aa04c & 4) == 0) {
    DAT_100aa04c = DAT_100aa04c | 4;
    FUN_1006af63(0x10009e00);
  }
  iVar5 = *(int *)((int)param_1 + 0xbc);
  cVar12 = *(char *)(iVar5 + 2);
  if ((cVar12 == '\x05') || (cVar12 == '\x04')) {
    bVar2 = true;
    if (cVar12 == '\x05') {
      uVar4 = *(uint *)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x180);
      if ((uVar4 & 1) != 0) goto joined_r0x1000978a;
      goto LAB_1000979e;
    }
    uVar4 = *(uint *)(*(int *)((int)param_1 + 0x70) + 0x7e4);
    if ((uVar4 & 1) == 0) goto LAB_1000979e;
joined_r0x1000978a:
    if ((uVar4 & 0x800) == 0) goto LAB_1000979e;
LAB_100097a7:
    bVar3 = true;
  }
  else {
    bVar2 = false;
LAB_1000979e:
    bVar3 = false;
    if (cVar12 == '\0') goto LAB_100097a7;
  }
  if ((!bVar2) || (bVar3)) {
    *(bool *)(iVar5 + 0x24) = *(char *)(iVar5 + 0x24) == '\0';
    if (*(int *)(*(int *)((int)param_1 + 0xbc) + 0x20) < 1) {
      bVar3 = false;
      *(undefined1 *)(*(int *)((int)param_1 + 0xbc) + 0x24) = 1;
    }
    if (*(int *)(*(int *)((int)param_1 + 0xbc) + 0x1c) < 1) {
      bVar3 = false;
      *(undefined1 *)(*(int *)((int)param_1 + 0xbc) + 0x24) = 0;
    }
  }
  else {
    if ((*(byte *)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x180) & 1) != 0) {
      if (*(int *)(iVar5 + 0x20) < 1) goto LAB_100097f6;
      *(undefined1 *)(iVar5 + 0x24) = 0;
    }
    if ((*(uint *)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x180) & 0x800) != 0) {
      if (*(int *)(*(int *)((int)param_1 + 0xbc) + 0x1c) < 1) {
LAB_100097f6:
        uVar4 = FUN_10008ac0((int)param_1);
        return uVar4 & 0xffffff00;
      }
      *(undefined1 *)(*(int *)((int)param_1 + 0xbc) + 0x24) = 1;
    }
  }
  uVar4 = FUN_100070f0(*(int *)((int)param_1 + 0x70));
  if (uVar4 != 0) goto LAB_100098f3;
  iVar5 = *(int *)((int)param_1 + 0xbc);
  if (bVar3) {
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -2;
    *(int *)(*(int *)((int)param_1 + 0xbc) + 0x1c) =
         *(int *)(*(int *)((int)param_1 + 0xbc) + 0x1c) + -1;
    iVar5 = *(int *)((int)param_1 + 0xbc);
LAB_1000987c:
    *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + -1;
  }
  else {
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1;
    iVar5 = *(int *)((int)param_1 + 0xbc);
    if (*(char *)(iVar5 + 0x24) == '\0') goto LAB_1000987c;
    *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + -1;
  }
  if (*(int *)(*(int *)((int)param_1 + 0xbc) + 4) < 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 4) = 0;
  }
  if (*(int *)(*(int *)((int)param_1 + 0xbc) + 0x1c) < 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 0x1c) = 0;
  }
  if (*(int *)(*(int *)((int)param_1 + 0xbc) + 0x20) < 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 0x20) = 0;
  }
  if (*(char *)(*(int *)((int)param_1 + 0xc0) + 0x348) == '\x04') {
    *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0xc0) + 0xcc) * 0x30 + 0x108 + (int)param_1) =
         *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 0x1c);
  }
LAB_100098f3:
  cVar12 = '\0';
  DAT_1009ff7c = *(undefined4 *)(*(int *)((int)param_1 + 0xc0) + 0x28);
  iVar5 = *(int *)((int)param_1 + 0xc0);
  if (*(char *)(iVar5 + 0x2c) != '\0') {
    if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
       ((*(byte *)(iVar5 + 0xe4) & 1) != 0)) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = 1.4013e-45;
    }
    if (bVar3) {
      fVar1 = 2.0;
    }
    else {
      fVar1 = 1.0;
    }
    FUN_10008100(param_1,(float *)&DAT_1009ff7c,fVar1 * *(float *)(iVar5 + 0x34),fVar9);
  }
  if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
     ((*(byte *)(*(int *)((int)param_1 + 0xc0) + 0xe4) & 1) != 0)) {
    fVar9 = 1.0;
  }
  else {
    fVar9 = 0.775;
  }
  DAT_100b32f8 = fVar9 * *(float *)(*(int *)((int)param_1 + 0xc0) + 0x1c);
  if (bVar3) {
    _DAT_100a0340 = *(undefined4 *)(DAT_10099114 + 0x28);
    _DAT_100a0344 = *(undefined4 *)(DAT_10099114 + 0x2c);
    _DAT_100a0348 = *(undefined4 *)(DAT_10099114 + 0x30);
    fVar11 = (float)((-(uint)(*(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) != '\0') & 0xfffffff6)
                    + 5);
    fVar1 = (float)(int)fVar11;
    fVar9 = *(float *)(DAT_10099114 + 0x40);
    local_20 = fVar1 * *(float *)(DAT_10099114 + 0x44);
    local_1c = fVar1 * *(float *)(DAT_10099114 + 0x48);
    pfVar6 = (float *)(**(code **)(**(int **)((int)param_1 + 0x70) + 0x160))();
    _DAT_1009ffa0 = fVar11 + *pfVar6;
    _DAT_1009ffa4 = fVar1 * fVar9 + pfVar6[1];
    _DAT_1009ffa8 = local_20 + pfVar6[2];
    local_20 = _DAT_1009ffa8;
    fStack_18 = _DAT_1009ffa4;
    fStack_14 = _DAT_1009ffa8;
    puVar7 = (undefined4 *)FUN_10009190(auStack_10,DAT_1009ff7c,DAT_1009ff7c,DAT_1009ff7c);
    FUN_10002610(&stack0xffffffa4,puVar7);
    FUN_10002610(&uStack_68,(undefined4 *)&DAT_100a0340);
    uVar8 = FUN_10002610(&uStack_74,(undefined4 *)&DAT_1009ffa0);
    puVar7 = (undefined4 *)
             FUN_1000ba00(&local_1c,
                          (float)CONCAT31((int3)((uint)uVar8 >> 8),
                                          *(undefined1 *)(*(int *)((int)param_1 + 0xc0) + 0x24)));
    _DAT_100a0350 = *puVar7;
    _DAT_100a0354 = puVar7[1];
    _DAT_100a0358 = puVar7[2];
    fVar10 = (float)((-(uint)(*(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) != '\0') & 10) - 5);
    fVar11 = (float)(int)fVar10;
    fVar9 = *(float *)(DAT_10099114 + 0x40);
    fVar1 = *(float *)(DAT_10099114 + 0x44);
    local_20 = fVar11 * *(float *)(DAT_10099114 + 0x48);
    pfVar6 = (float *)(**(code **)(**(int **)((int)param_1 + 0x70) + 0x160))();
    _DAT_1009ffa0 = fVar10 + *pfVar6;
    _DAT_1009ffa4 = fVar11 * fVar9 + pfVar6[1];
    _DAT_1009ffa8 = fVar11 * fVar1 + pfVar6[2];
    local_1c = _DAT_1009ffa4;
    fStack_18 = _DAT_1009ffa8;
    puVar7 = (undefined4 *)FUN_10009190(&fStack_14,DAT_1009ff7c,DAT_1009ff7c,DAT_1009ff7c);
    uStack_68 = 0x10009b98;
    FUN_10002610(&stack0xffffffa0,puVar7);
    uStack_74 = 0x10009ba7;
    FUN_10002610(&stack0xffffff94,(undefined4 *)&DAT_100a0340);
    FUN_10002610(&stack0xffffff88,(undefined4 *)&DAT_1009ffa0);
    fVar9 = (float)CONCAT31((int3)((uint)extraout_EDX >> 8),
                            *(undefined1 *)(*(int *)((int)param_1 + 0xc0) + 0x24));
  }
  else {
    _DAT_100a0340 = *(undefined4 *)(DAT_10099114 + 0x28);
    _DAT_100a0344 = *(undefined4 *)(DAT_10099114 + 0x2c);
    _DAT_100a0348 = *(undefined4 *)(DAT_10099114 + 0x30);
    pfVar6 = (float *)(**(code **)(**(int **)((int)param_1 + 0x70) + 0x160))();
    _DAT_1009ffa0 = *pfVar6;
    _DAT_1009ffa4 = pfVar6[1];
    _DAT_1009ffa8 = pfVar6[2];
    puVar7 = (undefined4 *)FUN_10009190(&fStack_14,DAT_1009ff7c,DAT_1009ff7c,DAT_1009ff7c);
    uStack_68 = 0x10009c4a;
    FUN_10002610(&stack0xffffffa0,puVar7);
    uStack_74 = 0x10009c59;
    FUN_10002610(&stack0xffffff94,(undefined4 *)&DAT_100a0340);
    FUN_10002610(&stack0xffffff88,(undefined4 *)&DAT_1009ffa0);
    fVar9 = (float)CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                            *(undefined1 *)(*(int *)((int)param_1 + 0xc0) + 0x24));
  }
  puVar7 = (undefined4 *)FUN_1000ba00(&local_20,fVar9);
  _DAT_100a0350 = *puVar7;
  _DAT_100a0354 = puVar7[1];
  _DAT_100a0358 = puVar7[2];
  iVar5 = *(int *)((int)param_1 + 0xc0);
  if (*(char *)(iVar5 + 0x38) != '\0') {
    if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) != 0) &&
       ((*(byte *)(iVar5 + 0xe4) & 1) == 0)) {
      cVar12 = '\x01';
    }
    if (bVar3) {
      fVar9 = 2.0;
    }
    else {
      fVar9 = 1.0;
    }
    FUN_10008230(param_1,fVar9 * *(float *)(iVar5 + 0x30),(uint)*(byte *)(iVar5 + 0x348),cVar12);
  }
  DAT_1009ff58 = CONCAT31((int3)((uint)DAT_1009ff58 >> 8),
                          *(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) != '\0');
  uStack_68 = 0;
  uStack_74 = 1;
  (*DAT_100989a4)();
  cVar12 = *(char *)(*(int *)((int)param_1 + 0xbc) + 2);
  if (cVar12 == '\x02') {
    if (*(int *)(*(int *)((int)param_1 + 0xbc) + 8) == 1) {
      _DAT_100a0364 = 0.2;
    }
    else {
      _DAT_100a0364 = 0.03;
    }
  }
  else if ((cVar12 == '\x01') || (cVar12 == '\x04')) {
    _DAT_100a0364 = 0.1;
  }
  else {
    _DAT_100a0364 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x18);
  }
  fVar13 = FUN_1001adf0();
  fVar14 = (float10)_DAT_100a0364;
  *(float *)((int)param_1 + 0x90) = (float)(fVar13 + fVar14);
  *(float *)((int)param_1 + 0x8c) = (float)(fVar13 + fVar14);
  fVar14 = FUN_1001adf0();
  *(float *)((int)param_1 + 0x98) = (float)(fVar14 + (float10)2.0);
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

/* 10009e30  FUN_10009e30  (170 bytes)
 * undefined FUN_10009e30(int param_1)
 * called by: FUN_100088e0, FUN_100089a0
 */
void __fastcall FUN_10009e30(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 8) == 0)) && (0 < *(int *)(iVar1 + 4))) {
    (*DAT_100989a4)(1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208),
                    CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)(param_1 + 0x838)),0,
                    &DAT_10098a28,&DAT_10098a28,0,0,0x13,0,0,0);
    *(undefined4 *)(*(int *)(param_1 + 0xbc) + 8) = 1;
    fVar2 = FUN_1001adf0();
    *(float *)(param_1 + 0x90) = (float)(fVar2 + (float10)0.7);
    *(float *)(param_1 + 0x8c) = (float)(fVar2 + (float10)0.7);
    fVar2 = FUN_1001adf0();
    *(float *)(param_1 + 0x98) = (float)(fVar2 + (float10)0.7);
    *(float *)(param_1 + 0x8c4) = *DAT_10099114 + 5.0;
  }
  return;
}

/* 10009ee0  FUN_10009ee0  (771 bytes)
 * undefined FUN_10009ee0(int param_1)
 * called by: FUN_100089a0
 */
void __fastcall FUN_10009ee0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  undefined2 extraout_var;
  undefined2 uVar7;
  undefined4 uVar8;
  float10 fVar9;
  float local_14;
  
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_10057e60(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x74);
    iVar1 = *(int *)(*(int *)(param_1 + 0x70) + 4);
    fVar2 = SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                 *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                 *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20));
    if (fVar2 <= 100.0) {
      bVar6 = (*(byte *)(iVar1 + 0x180) & 0x10 | 0x20) >> 4;
    }
    else {
      fVar3 = SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                   *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                   *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20));
      if (fVar3 == 0.0) {
        fVar5 = 0.0;
        fVar4 = 0.0;
        fVar3 = 1.0;
      }
      else {
        fVar3 = 1.0 / fVar3;
        fVar5 = fVar3 * *(float *)(iVar1 + 0x20);
        fVar4 = fVar3 * *(float *)(iVar1 + 0x24);
        fVar3 = fVar3 * *(float *)(iVar1 + 0x28);
      }
      if (fVar5 * *(float *)(DAT_10099114 + 0x28) +
          fVar4 * *(float *)(DAT_10099114 + 0x2c) + fVar3 * *(float *)(DAT_10099114 + 0x30) <= -0.5)
      {
        bVar6 = 3;
      }
      else {
        bVar6 = 2;
      }
    }
    if ((*(uint *)(iVar1 + 0x250) & 0x70c30) == 0) {
      if (bVar6 == 3) {
        fVar2 = -75.0;
        uVar8 = 0xf;
        local_14 = 1.0;
      }
      else if ((*(uint *)(iVar1 + 0x1a4) & 0x200) == 0) {
        fVar2 = fVar2 * 0.15384616;
        uVar8 = 0x11;
        if ((55.0 < fVar2) || (35.0 <= fVar2)) {
          if (55.0 < fVar2) {
            fVar2 = 55.0;
          }
          local_14 = 1.1;
        }
        else {
          fVar2 = 35.0;
          local_14 = 1.1;
        }
      }
      else if (((*(byte *)(iVar1 + 0x180) & 4) == 0) &&
              ((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x4000) == 0)) {
        local_14 = 0.7;
        if ((*(int *)(param_1 + 0x8bc) < 1) || (2 < *(int *)(param_1 + 0x8bc))) {
          uVar8 = (*DAT_10098920)(1,2);
          *(undefined4 *)(param_1 + 0x8bc) = uVar8;
        }
        fVar2 = 45.0;
        if (*(int *)(param_1 + 0x8bc) == 1) {
          uVar8 = 0x11;
          *(undefined4 *)(param_1 + 0x8bc) = 2;
        }
        else if (*(int *)(param_1 + 0x8bc) == 2) {
          uVar8 = 0x10;
          *(undefined4 *)(param_1 + 0x8bc) = 1;
        }
        else {
          uVar8 = 0x42340000;
        }
      }
      else {
        fVar2 = 65.0;
        local_14 = 0.9;
        uVar8 = 0x11;
      }
    }
    else {
      fVar2 = 35.0;
      uVar8 = 0x11;
      local_14 = 1.0;
    }
    if (DAT_100d5cbc == 0) {
      uVar7 = 0;
    }
    else {
      FUN_10057fa0(&DAT_1018cac8,fVar2 * 0.2,0.2,10.0);
      uVar7 = extraout_var;
    }
    (*DAT_100989a4)(1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208),
                    CONCAT22(uVar7,*(undefined2 *)(param_1 + 0x834)),0,&DAT_10098a28,&DAT_10098a28,0
                    ,0,uVar8,*(undefined4 *)(*(int *)(param_1 + 0xbc) + 8),0,0);
    fVar9 = FUN_1001adf0();
    *(float *)(param_1 + 0x90) = (float)(fVar9 + (float10)local_14);
    *(float *)(param_1 + 0x8c) = (float)(fVar9 + (float10)local_14);
    fVar9 = FUN_1001adf0();
    *(float *)(param_1 + 0x98) = (float)(fVar9 + (float10)3.0);
  }
  return;
}

/* 1000a1f0  FUN_1000a1f0  (115 bytes)
 * undefined FUN_1000a1f0(void * param_1)
 * called by: FUN_100088e0
 */
void __fastcall FUN_1000a1f0(void *param_1)

{
  float fVar1;
  uint uVar2;
  float10 fVar3;
  
  if (*(int *)((int)param_1 + 0xbc) != 0) {
    fVar1 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x28);
    fVar3 = FUN_1001adf0();
    fVar3 = fVar3 + (float10)fVar1;
    *(float *)((int)param_1 + 0x90) = (float)fVar3;
    *(float *)((int)param_1 + 0x8c) = (float)fVar3;
    fVar3 = FUN_1001adf0();
    *(float *)((int)param_1 + 0x98) = (float)(fVar3 + (float10)3.0);
    FUN_10057e60(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x74);
    uVar2 = FUN_100070f0(*(int *)((int)param_1 + 0x70));
    if (uVar2 == 0) {
      FUN_100085d0(param_1,*(int *)((int)param_1 + 0xb8),'\x01');
    }
  }
  return;
}

/* 1000a270  FUN_1000a270  (468 bytes)
 * undefined FUN_1000a270(int * param_1)
 * called by: FUN_100088e0, FUN_100089a0
 */
void __fastcall FUN_1000a270(int *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  float local_4;
  
  if (param_1[0x2f] != 0) {
    bVar4 = (*(uint *)(*(int *)(param_1[0x1c] + 4) + 0x250) & 0x70c30) != 0;
    local_4 = *(float *)(param_1[0x30] + 0x18);
    if (bVar4) {
      local_4 = local_4 * 1.5;
    }
    fVar5 = FUN_1001adf0();
    param_1[0x24] = (int)(float)(fVar5 + (float10)local_4);
    param_1[0x23] = (int)(float)(fVar5 + (float10)local_4);
    fVar5 = FUN_1001adf0();
    param_1[0x26] = (int)(float)(fVar5 + (float10)3.0);
    FUN_10057e60(*(int *)(param_1[0x1c] + 4) + 0x74);
    if (*(char *)(param_1[0x2f] + 0x24) == '\0') {
      (*DAT_10098920)(0,2);
      fVar1 = *(float *)(param_1[0x30] + 0x1c);
      if (bVar4) {
        fVar1 = fVar1 * 0.6666667;
      }
      if (DAT_100d5cbc != 0) {
        FUN_10057fa0(&DAT_1018cac8,fVar1 * 0.15,0.2,10.0);
      }
      (*DAT_100989a4)(1,*(undefined4 *)(*(int *)(param_1[0x1c] + 4) + 0x208),
                      CONCAT22((short)((uint)param_1[0x2f] >> 0x10),
                               *(undefined2 *)((int)param_1 + 0x832)),0,&DAT_10098a28,&DAT_10098a28,
                      0,0,param_1[0x2e],*(undefined4 *)(param_1[0x2f] + 8),0,0);
      return;
    }
    uVar2 = FUN_100070f0(param_1[0x1c]);
    if (uVar2 == 0) {
      *(int *)(param_1[0x2f] + 4) = *(int *)(param_1[0x2f] + 4) + -1;
    }
    if (0 < *(int *)(param_1[0x2f] + 4)) {
      iVar3 = *(int *)(param_1[0x2f] + 0x28);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)*(short *)(iVar3 + 0x28);
      }
      (**(code **)(*param_1 + 0x16c))(iVar3,1,0);
      (*DAT_100989a4)(1,*(undefined4 *)(*(int *)(param_1[0x1c] + 4) + 0x208),
                      CONCAT22((short)((uint)param_1[0x2f] >> 0x10),
                               *(undefined2 *)((int)param_1 + 0x836)),0,&DAT_10098a28,&DAT_10098a28,
                      0,0,param_1[0x2e],*(undefined4 *)(param_1[0x2f] + 0x10),0,0);
      fVar5 = FUN_1001adf0();
      param_1[0x26] = (int)(float)(fVar5 + (float10)2.0);
      return;
    }
    FUN_100085d0(param_1,param_1[0x2e],'\x01');
  }
  return;
}

/* 1000a450  FUN_1000a450  (108 bytes)
 * undefined4 FUN_1000a450(int param_1, undefined4 param_2, float param_3)
 * called by: FUN_1000a720
 */
undefined4 __thiscall FUN_1000a450(void *this,int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
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
  if (iVar3 < 1) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0xc) = 1;
  fVar4 = FUN_1001adf0();
  *(float *)(*(int *)((int)this + 0x70) + 0x118) = (float)(fVar4 + (float10)param_3);
  return 1;
}

/* 1000a4c0  FUN_1000a4c0  (608 bytes)
 * undefined FUN_1000a4c0(int param_1)
 * called by: FUN_1000a720
 */
void __fastcall FUN_1000a4c0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 == 0) {
    if ((0 < *(int *)(param_1 + 0xc4 + (uint)*(byte *)(*(int *)(param_1 + 0xc0) + 8) * 4)) &&
       (*(int *)(iVar1 + 4) < *(int *)(*(int *)(param_1 + 0xc0) + 4))) {
      FUN_100088a0(param_1);
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0xbc) == 0) {
        FUN_10003530(*(int *)(param_1 + 0xc0) + 0x132,*(int *)(param_1 + 0x70));
      }
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 8) = 1;
      (*DAT_100989a4)(1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208),
                      CONCAT22((short)((uint)*(int *)(param_1 + 0xbc) >> 0x10),
                               *(undefined2 *)(param_1 + 0x830)),0,&DAT_10098a28,&DAT_10098a28,
                      0x41000000,0,*(undefined4 *)(param_1 + 0xb8),
                      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x10),0,0);
      fVar4 = FUN_1001adf0();
      *(float *)(*(int *)(param_1 + 0x70) + 0x118) = (float)(fVar4 + (float10)0.3);
      fVar4 = FUN_1001adf0();
      *(float *)(param_1 + 0x98) = (float)(fVar4 + (float10)0.3);
      fVar4 = FUN_1001adf0();
      *(float *)(param_1 + 0x8c) = (float)(fVar4 + (float10)0.3);
      fVar4 = FUN_1001adf0();
      *(float *)(param_1 + 0x90) = (float)(fVar4 + (float10)0.3);
      return;
    }
  }
  else if (iVar2 == 1) {
    fVar4 = FUN_1001adf0();
    if ((float10)*(float *)(param_1 + 0x98) <= fVar4) {
      uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0xc0) + 8);
      iVar1 = *(int *)(param_1 + 0xc4 + uVar3 * 4);
      if ((0 < iVar1) &&
         (*(int *)(*(int *)(param_1 + 0xbc) + 4) < *(int *)(*(int *)(param_1 + 0xc0) + 4))) {
        *(int *)(param_1 + 0xc4 + uVar3 * 4) = iVar1 + -1;
        *(int *)(*(int *)(param_1 + 0xbc) + 4) = *(int *)(*(int *)(param_1 + 0xbc) + 4) + 1;
        (*DAT_100989a4)(1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208),
                        CONCAT22((short)((uint)*(int *)(param_1 + 0xbc) >> 0x10),
                                 *(undefined2 *)(param_1 + 0x830)),0,&DAT_10098a28,&DAT_10098a28,
                        0x41100000,0,*(undefined4 *)(param_1 + 0xb8),
                        *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x10),0,0);
        fVar4 = FUN_1001adf0();
        *(float *)(param_1 + 0x98) =
             (float)(fVar4 + (float10)*(float *)(*(int *)(param_1 + 0xc0) + 0x14));
        return;
      }
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 8) = 2;
      return;
    }
  }
  else if (iVar2 == 2) {
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0x24) = 0;
    (*DAT_100989a4)(1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208),
                    CONCAT22((short)((uint)*(int *)(param_1 + 0xbc) >> 0x10),
                             *(undefined2 *)(param_1 + 0x830)),0,&DAT_10098a28,&DAT_10098a28,
                    0x41200000,0,*(undefined4 *)(param_1 + 0xb8),
                    *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x10),0,0);
    fVar4 = FUN_1001adf0();
    *(float *)(*(int *)(param_1 + 0x70) + 0x118) = (float)(fVar4 + (float10)0.3);
    fVar4 = FUN_1001adf0();
    *(float *)(param_1 + 0x98) = (float)(fVar4 + (float10)3.0);
  }
  return;
}

/* 1000a720  FUN_1000a720  (278 bytes)
 * undefined FUN_1000a720(void * param_1)
 */
void __fastcall FUN_1000a720(void *param_1)

{
  char cVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = *(int *)((int)param_1 + 0xbc);
  if (iVar4 == 0) {
    FUN_1000adc0((int)param_1);
    return;
  }
  iVar2 = *(int *)((int)param_1 + 0xc0);
  cVar1 = *(char *)(iVar2 + 0x348);
  if (cVar1 == '\x02') {
    return;
  }
  if (cVar1 == '\x03') {
    FUN_1000adc0((int)param_1);
    return;
  }
  if (cVar1 == '\n') {
    FUN_1000adc0((int)param_1);
    return;
  }
  if (cVar1 == '\x01') {
    FUN_1000a4c0((int)param_1);
    return;
  }
  if (*(int *)((int)param_1 + (uint)*(byte *)(iVar2 + 8) * 4 + 0xc4) < 1) {
    return;
  }
  if (*(int *)(iVar4 + 8) != 0) {
    return;
  }
  if ((*(int *)((int)param_1 + 0xb8) == 0x21) && (0 < *(int *)(iVar4 + 4))) {
    if (*(int *)(iVar4 + 0x28) != 0) {
      sVar3 = *(short *)(*(int *)(iVar4 + 0x28) + 0x10);
      goto LAB_1000a7c0;
    }
  }
  else if (*(int *)(iVar4 + 0x28) != 0) {
    sVar3 = *(short *)(*(int *)(iVar4 + 0x28) + 2);
    goto LAB_1000a7c0;
  }
  sVar3 = 0;
LAB_1000a7c0:
  iVar4 = FUN_1000a450(param_1,*(int *)(iVar2 + 4),(int)sVar3,*(float *)(iVar2 + 0x14));
  if (iVar4 != 0) {
    fVar5 = FUN_1001adf0();
    *(float *)((int)param_1 + 0x98) = (float)(fVar5 + (float10)5.0);
    FUN_100088a0((int)param_1);
    (*DAT_100989a4)(1,*(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x208),
                    CONCAT22((short)((uint)*(int *)((int)param_1 + 0xbc) >> 0x10),
                             *(undefined2 *)((int)param_1 + 0x830)),0,&DAT_10098a28,&DAT_10098a28,0,
                    0,*(undefined4 *)((int)param_1 + 0xb8),
                    *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 0x10),0,0);
  }
  return;
}

/* 1000a840  FUN_1000a840  (340 bytes)
 * undefined FUN_1000a840(int param_1)
 * called by: FUN_1000a9a0, FUN_1000ab00
 */
void __thiscall FUN_1000a840(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar1 = *(int *)((int)this + 0xbc);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 8) == 1) {
    iVar2 = *(int *)(*(int *)((int)this + 0x70) + 4);
    if (((*(uint *)(iVar2 + 0x180) & 0x801) != 0) && (param_1 == 0)) {
      return;
    }
    (*DAT_100989a4)(1,*(undefined4 *)(iVar2 + 0x208),
                    CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)((int)this + 0x838)),0,
                    &DAT_10098a28,&DAT_10098a28,0,0,(*(char *)(iVar1 + 0x24) != '\0') + '\x14',0,0,0
                   );
    fVar3 = FUN_1001adf0();
    *(float *)((int)this + 0x90) = (float)(fVar3 + (float10)0.5);
    *(float *)((int)this + 0x8c) = (float)(fVar3 + (float10)0.5);
    fVar3 = FUN_1001adf0();
    *(float *)((int)this + 0x98) = (float)(fVar3 + (float10)0.5);
    if (*(int *)(*(int *)((int)this + 0xbc) + 4) == 1) {
      *(undefined4 *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 0xc0) = 0;
    }
    if (param_1 == 0) {
      *(undefined4 *)(*(int *)((int)this + 0xbc) + 8) = 2;
    }
    else {
      *(undefined4 *)(*(int *)((int)this + 0xbc) + 8) = 0;
    }
    *(int *)(*(int *)((int)this + 0xbc) + 4) = *(int *)(*(int *)((int)this + 0xbc) + 4) + -1;
    if (param_1 == 0) {
      return;
    }
  }
  else {
    if (*(int *)(iVar1 + 8) != 2) {
      fVar3 = FUN_1001adf0();
      *(float *)((int)this + 0x98) = (float)(fVar3 + (float10)3.0);
      return;
    }
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  if (*(int *)(*(int *)((int)this + 0xbc) + 4) < 1) {
    FUN_100085d0(this,*(int *)((int)this + 0xb8),'\x01');
    return;
  }
  fVar3 = FUN_1001adf0();
  *(float *)((int)this + 0x98) = (float)(fVar3 + (float10)2.0);
  return;
}

/* 1000a9a0  FUN_1000a9a0  (335 bytes)
 * undefined FUN_1000a9a0(int * param_1)
 */
void __fastcall FUN_1000a9a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = param_1[0x2f];
  if (iVar2 == 0) {
    FUN_1000ad70(param_1);
    return;
  }
  param_1[0x29] = *(int *)(iVar2 + 4);
  if (*(char *)(iVar2 + 0x2c) == '\0') {
    *(int *)(iVar2 + 0x28) = param_1[0x30] + 0x252;
  }
  else {
    *(int *)(iVar2 + 0x28) = param_1[0x30] + 0x28c;
  }
  if ((*(char *)(param_1[0x30] + 0x348) == '\x01') && (*(int *)(param_1[0x2f] + 8) != 0)) {
    (**(code **)(*param_1 + 0x180))();
    return;
  }
  iVar2 = param_1[0x2f];
  if ((*(char *)(iVar2 + 2) == '\x02') && ((float)param_1[0x23] <= 0.0)) {
    if (*(int *)(iVar2 + 8) < 1) {
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    else {
      FUN_10008b30(param_1);
      *(int *)(param_1[0x2f] + 8) = *(int *)(param_1[0x2f] + 8) + -1;
    }
  }
  fVar3 = FUN_1001adf0();
  if ((float10)(float)param_1[0x26] <= fVar3) {
    if (*(char *)(param_1[0x30] + 0x348) == '\x02') {
      FUN_1000a840(param_1,0);
      return;
    }
    uVar1 = FUN_100070f0(param_1[0x1c]);
    if ((uVar1 == 0) && (*(int *)(param_1[0x2f] + 4) < 1)) {
      (**(code **)(*param_1 + 0x180))();
      return;
    }
    if (*(int *)(param_1[0x2f] + 4) != 0) {
      fVar3 = FUN_1001adf0();
      param_1[0x26] = (int)(float)(fVar3 + (float10)3.0);
      if (*(short **)(param_1[0x2f] + 0x28) == (short *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (int)**(short **)(param_1[0x2f] + 0x28);
      }
      (**(code **)(*param_1 + 0x16c))(iVar2,0,*(undefined4 *)(param_1[1] + 0x114));
    }
  }
  return;
}

/* 1000ab00  FUN_1000ab00  (453 bytes)
 * undefined FUN_1000ab00(int * param_1)
 * called by: FUN_100085d0, FUN_100086b0, FUN_10008720
 */
void __fastcall FUN_1000ab00(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined2 extraout_var;
  char *pcVar6;
  char *pcVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  *(int **)(param_1[0x1c] + 0x9e8) = param_1;
  *(undefined4 *)(*(int *)(param_1[0x1c] + 4) + 0xbc) = 0;
  *(undefined4 *)(*(int *)(param_1[0x1c] + 4) + 0xc0) = 0;
  FUN_100088a0((int)param_1);
  uVar4 = 0xffffffff;
  pcVar6 = s_;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)(param_1[0x1c] + 0xb28);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s_;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)(param_1[0x1c] + 0x464);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  fVar8 = FUN_1001adf0();
  *(float *)(param_1[0x1c] + 0x118) = (float)(fVar8 + (float10)0.5);
  fVar8 = FUN_1001adf0();
  iVar2 = param_1[0x1c];
  param_1[0x26] = (int)(float)(fVar8 + (float10)3.0);
  if ((*(float *)(iVar2 + 0x788) != 0.0) && (*(char *)(iVar2 + 0x790) != '\0')) {
    *(undefined4 *)(iVar2 + 0x788) = 0;
    *(undefined4 *)(param_1[0x1c] + 0x78c) = 0;
    *(undefined1 *)(param_1[0x1c] + 0x790) = 0;
  }
  if (((int *)param_1[0x1c] != (int *)0x0) &&
     (iVar2 = (**(code **)(*(int *)param_1[0x1c] + 0xac))(), iVar2 == 0)) {
    return;
  }
  if ((param_1[0x2f] != 0) && (param_1[0x30] != 0)) {
    if (*(char *)(param_1[0x30] + 0x348) == '\x02') {
      FUN_1000a840(param_1,1);
    }
    else {
      *(undefined4 *)(param_1[0x2f] + 0xc) = 0;
      *(undefined4 *)(param_1[0x2f] + 8) = 0;
    }
  }
  iVar2 = param_1[0x1c];
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  puVar3 = FUN_100071c0(0);
  FUN_10003530((int)puVar3 + 0x132,iVar2);
  iVar2 = *param_1;
  uVar10 = 0;
  uVar9 = 0;
  puVar3 = FUN_100071c0(0);
  (**(code **)(iVar2 + 0x16c))((int)*(short *)((int)puVar3 + 0x256),uVar9,uVar10);
  (*DAT_100989a4)(1,*(undefined4 *)(*(int *)(param_1[0x1c] + 4) + 0x208),
                  CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 0x836)),0,&DAT_10098a28,
                  &DAT_10098a28,0,0,param_1[0x2e],0,0,0);
  param_1[0x22e] = 0;
  param_1[0x22d] = 0;
  param_1[0x22f] = 0;
  return;
}

/* 1000acd0  FUN_1000acd0  (40 bytes)
 * undefined4 FUN_1000acd0(int param_1)
 * called by: FUN_10003830
 */
undefined4 __fastcall FUN_1000acd0(int param_1)

{
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_100581c0(*(int *)(param_1 + 0xb8),param_1 + 0x104);
  }
  return 1;
}

/* 1000ad70  FUN_1000ad70  (74 bytes)
 * undefined FUN_1000ad70(int * param_1)
 * called by: FUN_1000a9a0
 */
void __fastcall FUN_1000ad70(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  fVar3 = FUN_1001adf0();
  if ((float10)(float)param_1[0x26] <= fVar3) {
    fVar3 = FUN_1001adf0();
    iVar1 = *param_1;
    uVar5 = 0;
    uVar4 = 0;
    param_1[0x26] = (int)(float)(fVar3 + (float10)3.0);
    puVar2 = FUN_100071c0(0);
    (**(code **)(iVar1 + 0x16c))((int)*(short *)((int)puVar2 + 0x252),uVar4,uVar5);
  }
  return;
}

/* 1000adc0  FUN_1000adc0  (328 bytes)
 * undefined FUN_1000adc0(int param_1)
 * called by: FUN_1000a720
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000adc0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  float10 fVar5;
  
  iVar1 = *(int *)(param_1 + 0x70);
  fVar5 = FUN_1001adf0();
  if ((float10)*(float *)(iVar1 + 0x118) <= fVar5) {
    fVar5 = FUN_1001adf0();
    if ((float10)*(float *)(param_1 + 0x8c) <= fVar5) {
      fVar5 = FUN_1001adf0();
      if ((float10)*(float *)(param_1 + 0x90) <= fVar5) {
        fVar5 = FUN_1001adf0();
        if ((((float10)*(float *)(param_1 + 0x94) <= fVar5) &&
            (iVar1 = *(int *)(param_1 + 0x70),
            (*(uint *)(*(int *)(iVar1 + 4) + 0x250) & 0x70c30) == 0)) && (0.01 <= _DAT_1018a718)) {
          uVar3 = 0;
          if (*(int *)(param_1 + 0xbc) == 0) {
            uVar3 = 1;
            *(undefined4 *)(iVar1 + 0x794) = 0x3f000000;
            uVar4 = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 0xc0);
            uVar4 = 0;
            if (iVar2 != 0) {
              uVar4 = (undefined2)((uint)iVar2 >> 0x10);
              if (*(char *)(iVar2 + 0x348) == '\n') {
                *(undefined4 *)(iVar1 + 0x79c) = 0x3f000000;
              }
              else if (*(char *)(iVar2 + 0x348) == '\x03') {
                *(undefined4 *)(iVar1 + 0x798) = 0x3f000000;
              }
              uVar3 = 0x12;
            }
          }
          (*DAT_100989a4)(1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208),
                          CONCAT22(uVar4,*(undefined2 *)(param_1 + 0x82c)),0,&DAT_10098a28,
                          &DAT_10098a28,(float)*(int *)(param_1 + 0xb8),0,0,uVar3,0,0);
          fVar5 = FUN_1001adf0();
          *(float *)(param_1 + 0x90) = (float)(fVar5 + (float10)0.5);
          *(float *)(param_1 + 0x8c) = (float)(fVar5 + (float10)0.5);
          fVar5 = FUN_1001adf0();
          *(float *)(param_1 + 0x98) = (float)(fVar5 + (float10)3.0);
        }
      }
    }
  }
  return;
}

/* 1000af10  FUN_1000af10  (1870 bytes)
 * undefined FUN_1000af10(int param_1)
 * called by: FUN_100088e0, FUN_100089a0
 */
void __fastcall FUN_1000af10(int param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  undefined2 extraout_var;
  undefined2 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float10 fVar13;
  float local_28;
  undefined4 local_20;
  float local_1c;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar11 = 0;
  iVar7 = *(int *)(param_1 + 0x70);
  local_28 = 0.6;
  iVar9 = *(int *)(iVar7 + 4);
  uVar2 = *(uint *)(iVar9 + 0x250);
  fVar1 = SQRT(*(float *)(iVar9 + 0x28) * *(float *)(iVar9 + 0x28) +
               *(float *)(iVar9 + 0x24) * *(float *)(iVar9 + 0x24) +
               *(float *)(iVar9 + 0x20) * *(float *)(iVar9 + 0x20));
  fVar13 = FUN_1001adf0();
  if (fVar13 < (float10)*(float *)(iVar7 + 0x118)) {
    return;
  }
  fVar13 = FUN_1001adf0();
  if (fVar13 < (float10)*(float *)(param_1 + 0x8c)) {
    return;
  }
  fVar13 = FUN_1001adf0();
  if (fVar13 < (float10)*(float *)(param_1 + 0x90)) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x70);
  local_1c = 0.0;
  local_8 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x78);
  local_4 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x7c);
  local_c = 0;
  if (fVar1 <= 100.0) {
    iVar9 = *(int *)(iVar7 + 4);
    bVar6 = (*(byte *)(iVar9 + 0x180) & 0x10 | 0x20) >> 4;
  }
  else {
    FUN_10057e60(&local_c);
    iVar7 = *(int *)(param_1 + 0x70);
    iVar9 = *(int *)(iVar7 + 4);
    fVar3 = SQRT(*(float *)(iVar9 + 0x28) * *(float *)(iVar9 + 0x28) +
                 *(float *)(iVar9 + 0x24) * *(float *)(iVar9 + 0x24) +
                 *(float *)(iVar9 + 0x20) * *(float *)(iVar9 + 0x20));
    if (fVar3 == 0.0) {
      fVar5 = 0.0;
      fVar4 = 0.0;
      fVar3 = 1.0;
    }
    else {
      fVar3 = 1.0 / fVar3;
      fVar5 = fVar3 * *(float *)(iVar9 + 0x20);
      fVar4 = fVar3 * *(float *)(iVar9 + 0x24);
      fVar3 = fVar3 * *(float *)(iVar9 + 0x28);
    }
    local_1c = fVar5 * *(float *)(DAT_10099114 + 0x28) +
               fVar4 * *(float *)(DAT_10099114 + 0x2c) + fVar3 * *(float *)(DAT_10099114 + 0x30);
    if (local_1c <= -0.5) {
      bVar6 = 3;
    }
    else {
      bVar6 = 2;
    }
  }
  if ((uVar2 & 0x50c30) == 0) {
    uVar2 = *(uint *)(iVar9 + 0x180);
    if ((uVar2 & 1) != 0) {
      local_20 = 1;
      if ((*(uint *)(iVar9 + 0x1a4) & 0x200) == 0) {
        fVar1 = 25.0;
        uVar11 = 0x18;
        uVar12 = 5;
        local_28 = 0.5;
        *(undefined4 *)(param_1 + 0x8b4) = 0;
      }
      else if ((*(int *)(param_1 + 0x8b4) < 3) &&
              (((uVar2 & 4) == 0 || ((*(uint *)(iVar9 + 0x1a4) & 0x4000) != 0)))) {
        if ((*(byte *)(iVar7 + 0x7e4) & 1) == 0) {
          fVar1 = 10.0;
          uVar11 = 0x16;
          *(int *)(param_1 + 0x8b4) = *(int *)(param_1 + 0x8b4) + 1;
          uVar12 = 3;
          local_28 = 0.25;
        }
        else {
          fVar1 = 20.0;
          local_28 = 0.35;
          *(undefined4 *)(param_1 + 0x8b4) = 0;
          uVar11 = 0x17;
          uVar12 = 4;
        }
      }
      else {
        fVar1 = 30.0;
        uVar11 = 0x19;
        uVar12 = 0xb;
        local_28 = 0.65;
        *(undefined4 *)(param_1 + 0x8b4) = 0;
      }
      goto LAB_1000b4ef;
    }
    if ((uVar2 & 0x800) == 0) goto LAB_1000b623;
    uVar10 = *(uint *)(iVar9 + 0x1a4) & 0x200;
    if ((uVar10 != 0) &&
       (((uVar2 & 4) != 0 || ((*(byte *)(*(int *)(param_1 + 4) + 0x1a5) & 0x40) != 0)))) {
      fVar1 = 35.0;
      local_20 = 2;
      uVar11 = 0x14;
      uVar12 = 6;
LAB_1000b1e5:
      local_28 = 1.0;
      goto LAB_1000b4ef;
    }
    if (bVar6 == 3) {
      fVar1 = fVar1 * 0.3030303;
      uVar11 = 0x11;
      uVar12 = 7;
      if ((80.0 < fVar1) || (15.0 <= fVar1)) {
        if (80.0 < fVar1) {
          fVar1 = 80.0;
        }
      }
      else {
        fVar1 = 15.0;
      }
      local_20 = 3;
      if (uVar10 == 0) {
        local_28 = 1.35;
        goto LAB_1000b4ef;
      }
      goto LAB_1000b1e5;
    }
    local_20 = 2;
    if (uVar10 != 0) {
LAB_1000b3eb:
      if (((*(uint *)(iVar7 + 0x7e4) & 0x800) == 0) && (*(int *)(param_1 + 0x8b8) < 3)) {
        fVar1 = 15.0;
        local_28 = 0.3;
        *(int *)(param_1 + 0x8b8) = *(int *)(param_1 + 0x8b8) + 1;
        if (*(int *)(param_1 + 0x8bc) == 0xb) {
          uVar11 = 0xc;
          uVar12 = 9;
        }
        else if (*(int *)(param_1 + 0x8bc) == 0xc) {
          uVar11 = 0xb;
          uVar12 = 9;
        }
        else {
          iVar7 = (*DAT_10098920)(0,1);
          if (iVar7 == 0) {
            uVar11 = 0xb;
          }
          else if (iVar7 == 1) {
            fVar1 = 15.0;
            uVar11 = 0xc;
            uVar12 = 9;
            goto LAB_1000b4ef;
          }
          fVar1 = 15.0;
          uVar12 = 9;
        }
        goto LAB_1000b4ef;
      }
      local_28 = 0.5;
      iVar7 = *(int *)(param_1 + 0x8bc);
      *(undefined4 *)(param_1 + 0x8b8) = 0;
      if (iVar7 == 0xf) {
switchD_1000b4d8_caseD_2:
        uVar11 = 10;
      }
      else if (iVar7 == 10) {
switchD_1000b4d8_caseD_0:
        uVar11 = 0xe;
      }
      else if (iVar7 == 0xe) {
switchD_1000b4d8_caseD_1:
        uVar11 = 0xd;
      }
      else {
        if (iVar7 != 0xd) {
          uVar12 = (*DAT_10098920)(0,3);
          switch(uVar12) {
          case 0:
            goto switchD_1000b4d8_caseD_0;
          case 1:
            goto switchD_1000b4d8_caseD_1;
          case 2:
            goto switchD_1000b4d8_caseD_2;
          case 3:
            break;
          default:
            goto switchD_1000b4d8_default;
          }
        }
        uVar11 = 0xf;
      }
switchD_1000b4d8_default:
      fVar1 = 25.0;
LAB_1000b4ea:
      uVar12 = 10;
      goto LAB_1000b4ef;
    }
    if (((fVar1 <= 270.0) || ((uVar2 & 4) == 0)) || (local_1c <= 0.5)) {
      if (fVar1 <= 200.0) goto LAB_1000b3eb;
      fVar1 = fVar1 * 0.1;
      *(undefined4 *)(param_1 + 0x8b8) = 0;
      if ((30.0 < fVar1) || (15.0 <= fVar1)) {
        if (30.0 < fVar1) {
          fVar1 = 30.0;
        }
      }
      else {
        fVar1 = 15.0;
      }
      iVar7 = *(int *)(param_1 + 0x8bc);
      local_28 = 0.75;
      if (iVar7 == 0xf) {
        uVar11 = 0x13;
      }
      else if (iVar7 == 0x13) {
        uVar11 = 0x12;
      }
      else if (iVar7 == 0x12) {
        uVar11 = 0xf;
      }
      else {
        iVar7 = (*DAT_10098920)(0,2);
        if (iVar7 == 0) {
          uVar11 = 0x13;
        }
        else if (iVar7 == 1) {
          uVar11 = 0x12;
        }
        else if (iVar7 == 2) {
          uVar11 = 0xf;
        }
      }
      goto LAB_1000b4ea;
    }
    fVar1 = fVar1 * 0.15384616;
    *(undefined4 *)(param_1 + 0x8b8) = 0;
    if ((45.0 < fVar1) || (15.0 <= fVar1)) {
      if (45.0 < fVar1) {
        fVar1 = 45.0;
      }
    }
    else {
      fVar1 = 15.0;
    }
    local_28 = 1.0;
    uVar11 = 0x10;
    uVar12 = 8;
  }
  else {
    fVar1 = 15.0;
    local_20 = 1;
    uVar11 = 0xffffffff;
    uVar12 = 4;
    local_28 = 0.55;
    *(undefined4 *)(param_1 + 0x8b4) = 0;
LAB_1000b4ef:
    iVar7 = *(int *)(*(int *)(param_1 + 0x70) + 4);
    uVar2 = *(uint *)(iVar7 + 0x250);
    if ((uVar2 & 0x20000) != 0) {
      *(uint *)(iVar7 + 0x250) = uVar2 & 0xfffdffff;
      iVar7 = *(int *)(*(int *)(param_1 + 0x70) + 4);
      *(uint *)(iVar7 + 0x250) = *(uint *)(iVar7 + 0x250) & 0xfffffffb;
      iVar7 = *(int *)(*(int *)(param_1 + 0x70) + 4);
      if ((*(uint *)(iVar7 + 0x1a4) & 0x4000) == 0) {
        *(undefined4 *)(iVar7 + 0x174) = 0;
        *(undefined4 *)(iVar7 + 0x178) = 0;
        *(undefined4 *)(iVar7 + 0x17c) = 0x41e00000;
      }
      else {
        *(undefined4 *)(iVar7 + 0x174) = 0;
        *(undefined4 *)(iVar7 + 0x178) = 0;
        *(undefined4 *)(iVar7 + 0x17c) = 0x41800000;
      }
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x120) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x11c) = 0x3f800000;
    }
  }
  *(undefined4 *)(param_1 + 0x8bc) = uVar11;
  if (DAT_100d5cbc == 0) {
    uVar8 = 0;
  }
  else {
    FUN_10057fa0(&DAT_1018cac8,fVar1 * 0.35,0.2,10.0);
    uVar8 = extraout_var;
  }
  (*DAT_100989a4)(1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208),
                  CONCAT22(uVar8,*(undefined2 *)(param_1 + 0x82c)),0,&DAT_10098a28,&DAT_10098a28,0,0
                  ,local_20,uVar12,0,0);
LAB_1000b623:
  fVar13 = FUN_1001adf0();
  *(float *)(param_1 + 0x90) = (float)(fVar13 + (float10)local_28);
  *(float *)(param_1 + 0x8c) = (float)(fVar13 + (float10)local_28);
  fVar13 = FUN_1001adf0();
  *(float *)(param_1 + 0x98) = (float)(fVar13 + (float10)2.0);
  *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x794) = 0;
  return;
}

/* 1000b670  FUN_1000b670  (84 bytes)
 * undefined1 FUN_1000b670(int param_1)
 * called by: FUN_1000b6d0
 */
undefined1 __cdecl FUN_1000b670(int param_1)

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
  if (param_1 == 0x25) {
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
  puVar1 = FUN_100071c0(param_1);
  return *(undefined1 *)(puVar1 + 0xd2);
}

/* 1000b6d0  FUN_1000b6d0  (100 bytes)
 * undefined4 FUN_1000b6d0(int param_1, uint param_2)
 * called by: FUN_100108b0, FUN_10011a60, FUN_100124a0, FUN_100365e0
 */
undefined4 __cdecl FUN_1000b6d0(int param_1,uint param_2)

{
  char cVar1;
  undefined3 uVar2;
  
  if ((0 < param_1) && (param_1 < 0x26)) {
    if (param_2 == 0) {
      return CONCAT31((int3)((uint)param_1 >> 8),1);
    }
    cVar1 = FUN_1000b670(param_1);
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

/* 1000b760  FUN_1000b760  (79 bytes)
 * undefined FUN_1000b760(int param_1)
 * called by: weapon_tsgun
 */
void __cdecl FUN_1000b760(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (iVar2 = (*DAT_1009880c)(), iVar2 != 0)) {
    param_1 = iVar2 + 0x80;
  }
  iVar2 = *(int *)(param_1 + 0x208);
  if (((iVar2 == 0) || (iVar1 = iRam00000004, *(int *)(iVar2 + 0x7c) == 0)) &&
     (puVar3 = (undefined4 *)(*DAT_100988b4)(iVar2,0x8c8), iVar1 = param_1,
     puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &PTR_LAB_1007a6b4;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = iVar1;
  return;
}

/* 1000b7b0  FUN_1000b7b0  (508 bytes)
 * undefined FUN_1000b7b0(int * param_1)
 */
void __fastcall FUN_1000b7b0(int *param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  if (param_1[0x1e] != 0x10) {
    DAT_100b32fc = param_1;
    return;
  }
  DAT_100b32fc = param_1;
  if (param_1[0x2f] == 0) {
    uVar1 = *(uint *)(*(int *)(param_1[0x1c] + 4) + 0x180);
    if (((uVar1 & 0x800) != 0) && ((float)param_1[0x24] <= 0.0)) {
      (**(code **)(*param_1 + 0x178))();
      (**(code **)(*param_1 + 0x184))();
      return;
    }
    if (((uVar1 & 1) != 0) && ((float)param_1[0x23] <= 0.0)) {
      (**(code **)(*param_1 + 0x174))();
      (**(code **)(*param_1 + 0x184))();
      return;
    }
    if ((uVar1 & 0x2000) != 0) {
      (**(code **)(*param_1 + 0x180))();
    }
    (**(code **)(*param_1 + 0x184))();
    return;
  }
  if ((*(int *)(param_1[0x2f] + 0xc) != 0) &&
     (iVar2 = param_1[0x1c], fVar3 = FUN_1001adf0(), (float10)*(float *)(iVar2 + 0x118) <= fVar3)) {
    *(undefined4 *)(DAT_100b32fc[0x2f] + 4) = *(undefined4 *)(DAT_100b32fc[0x30] + 4);
    *(int *)(DAT_100b32fc[0x2f] + 0x1c) = *(int *)(DAT_100b32fc[0x2f] + 4) / 2;
    iVar2 = DAT_100b32fc[0x2f];
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 4) - *(int *)(iVar2 + 0x1c);
    param_1[0x29] = *(int *)(DAT_100b32fc[0x2f] + 4);
    *(undefined4 *)(DAT_100b32fc[0x2f] + 0xc) = 0;
  }
  uVar1 = *(uint *)(*(int *)(param_1[0x1c] + 4) + 0x180);
  if (((uVar1 & 0x800) == 0) || (0.0 < (float)param_1[0x24])) {
    if (((uVar1 & 1) == 0) || (0.0 < (float)param_1[0x23])) {
      if (((uVar1 & 0x40) == 0) || (0.0 < (float)param_1[0x25])) {
        if ((((uVar1 & 0x2000) == 0) || (*(int *)(DAT_100b32fc[0x2f] + 0xc) != 0)) ||
           (DAT_100b32fc[0x2e] == 0x24)) {
          if ((uVar1 & 0x801) == 0) goto LAB_1000b99f;
        }
        else {
          (**(code **)(*param_1 + 0x180))();
        }
      }
      else {
        (**(code **)(*param_1 + 0x17c))();
      }
    }
    else {
      (**(code **)(*param_1 + 0x174))();
    }
  }
  else {
    (**(code **)(*param_1 + 0x178))();
  }
  iVar2 = (**(code **)(*param_1 + 0x18c))();
  if (iVar2 == 0) {
    return;
  }
LAB_1000b99f:
  (**(code **)(*param_1 + 0x184))();
  return;
}

/* 1000b9b0  FUN_1000b9b0  (17 bytes)
 * undefined FUN_1000b9b0(int param_1)
 * called by: FUN_10003830
 */
void __fastcall FUN_1000b9b0(int param_1)

{
  FUN_10055aa0(*(float *)(*(int *)(param_1 + 4) + 0x254));
  return;
}

/* 1000b9d0  FUN_1000b9d0  (47 bytes)
 * undefined FUN_1000b9d0(int param_1)
 * called by: FUN_100036d0, FUN_10004600
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000b9d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x768) = 0;
  *(undefined4 *)(param_1 + 0x76c) = 0;
  *(undefined4 *)(param_1 + 0x770) = 0;
  _DAT_10191480 = 0;
  _DAT_10191484 = 0;
  _DAT_10191488 = 0;
  *(undefined4 *)(param_1 + 0x764) = 0;
  _DAT_1018d188 = 0;
  return;
}

/* 1000ba00  FUN_1000ba00  (167 bytes)
 * undefined FUN_1000ba00(float * param_1, float param_2)
 * called by: FUN_10008e50, FUN_100091e0, FUN_100096f0
 */
void FUN_1000ba00(float *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float in_stack_00000024;
  float in_stack_00000028;
  float in_stack_0000003c;
  
  if (SUB41(param_2,0) != '\0') {
    uVar1 = (uint)param_2 & 0xff;
    iVar2 = (int)in_stack_0000003c + 4;
    do {
      fVar3 = FUN_1001aea0(iVar2 + -3,-0.5,0.5);
      fVar4 = FUN_1001aea0(iVar2 + -2,-0.5,0.5);
      in_stack_0000003c = (float)(fVar4 + (float10)(float)fVar3);
      fVar3 = FUN_1001aea0(iVar2 + -1,-0.5,0.5);
      fVar4 = FUN_1001aea0(iVar2,-0.5,0.5);
      iVar2 = iVar2 + 1;
      uVar1 = uVar1 - 1;
      param_2 = (float)(fVar4 + (float10)(float)fVar3);
    } while (uVar1 != 0);
  }
  *param_1 = in_stack_00000024 * in_stack_0000003c;
  param_1[2] = 0.0;
  param_1[1] = in_stack_00000028 * param_2;
  return;
}

/* 1000bab0  FUN_1000bab0  (696 bytes)
 * undefined FUN_1000bab0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000bab0(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x22;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x28) = 0x3f333333;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x42340000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 8;
  pcVar4 = s_Katana_10091bd0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 1;
  param_1[0x85] = 2;
  pcVar4 = s_sprites_weapons_katana_spr_10091bb4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0xb54;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar4 = s_models_v_katana_mdl_10091ba0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_katana_mdl_10091b8c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_katana_mdl_10091b78;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x270) = 4;
  *(undefined2 *)(param_1 + 0x272) = 3;
  *(undefined2 *)(param_1 + 0x274) = 2;
  *(undefined2 *)(param_1 + 0x276) = 5;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x34c) = 0;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  param_1[0x348] = 10;
  return;
}

/* 1000bd70  FUN_1000bd70  (700 bytes)
 * undefined FUN_1000bd70(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000bd70(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x19;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 5;
  *(undefined4 *)(param_1 + 0x20) = 6;
  pcVar4 = s_Combat_Knife_10091bd8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 1;
  param_1[0x85] = 3;
  pcVar4 = s_sprites_weapons_knife_spr_10091754;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  uVar2 = 0xffffffff;
  param_1[0xd0] = 1;
  *(undefined4 *)(param_1 + 0xd8) = 100;
  param_1[0xdc] = 1;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar4 = s_models_v_knife_mdl_10091740;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_knife_mdl_1009172c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_knife_mdl_10091718;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 5;
  *(undefined2 *)(param_1 + 0x27a) = 7;
  *(undefined2 *)(param_1 + 0x276) = 6;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x34c) = 0;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  param_1[0x348] = 3;
  return;
}

/* 1000c030  FUN_1000c030  (882 bytes)
 * undefined FUN_1000c030(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000c030(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x12;
  param_1[8] = 4;
  *(undefined4 *)(param_1 + 0xc) = 6;
  *(undefined4 *)(param_1 + 0x10) = 0x23;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x1b;
  *(undefined4 *)(param_1 + 0x14) = 0x40333333;
  *(undefined4 *)(param_1 + 0x18) = 0x3d8f5c29;
  *(undefined4 *)(param_1 + 0x1c) = 0x42200000;
  *(undefined4 *)(param_1 + 0x28) = 0x3b449ba6;
  *(undefined4 *)(param_1 + 0x30) = 0x40900000;
  *(undefined4 *)(param_1 + 0x34) = 0x38d1b717;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 8;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_10091c54;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 4;
  uVar2 = 0xffffffff;
  param_1[0x85] = 8;
  pcVar4 = s_sprites_weapons_m16_spr_10091c3c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0xd0] = 0x28;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd8) = 0x9c4;
  *(undefined4 *)(param_1 + 0xe0) = 0xe;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_556_shell_mdl_10091264;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  pcVar4 = s_models_v_m16_mdl_10091c28;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_m16_mdl_10091c14;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_m16_mdl_10091c00;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009121c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x290) = 2;
  *(undefined2 *)(param_1 + 0x292) = 10;
  *(undefined2 *)(param_1 + 0x294) = 0xb;
  *(undefined2 *)(param_1 + 0x296) = 10;
  *(undefined2 *)(param_1 + 0x298) = 0xb;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x260) = 8;
  *(undefined2 *)(param_1 + 0x28a) = 0xf;
  *(undefined2 *)(param_1 + 0x28c) = 7;
  *(undefined2 *)(param_1 + 0x28e) = 0xe;
  *(undefined2 *)(param_1 + 0x29a) = 9;
  *(undefined2 *)(param_1 + 0x2c4) = 0xf;
  pcVar4 = s_weapons_m16_fire_wav_10091be8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 8;
  param_1[0x350] = 1;
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x20;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  return;
}

/* 1000c3b0  FUN_1000c3b0  (887 bytes)
 * undefined FUN_1000c3b0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000c3b0(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 4;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x10) = 0x23;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 5;
  *(undefined4 *)(param_1 + 0x14) = 0x40333333;
  *(undefined4 *)(param_1 + 0x18) = 0x3d8f5c29;
  *(undefined4 *)(param_1 + 0x1c) = 0x42080000;
  *(undefined4 *)(param_1 + 0x28) = 0x3bc49ba6;
  *(undefined4 *)(param_1 + 0x30) = 0x40800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3b449ba6;
  *(undefined4 *)(param_1 + 0x3c) = 0x1a;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_10091cec;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 4;
  uVar2 = 0xffffffff;
  param_1[0x85] = 2;
  pcVar4 = s_sprites_weapons_m4_spr_10091cd4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0xd0] = 0x28;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 0x1194;
  *(undefined4 *)(param_1 + 0xe0) = 0xf;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_556_shell_mdl_10091264;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 4;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 8;
  pcVar4 = s_models_v_m4_mdl_10091cc4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_m4_mdl_10091cb4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_m4_sil_mdl_10091ca0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_m4_mdl_10091c90;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009121c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x290) = 2;
  *(undefined2 *)(param_1 + 0x28a) = 0xf;
  *(undefined2 *)(param_1 + 0x294) = 0xb;
  *(undefined2 *)(param_1 + 0x298) = 0xb;
  *(undefined2 *)(param_1 + 0x2c4) = 0xf;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x260) = 8;
  *(undefined2 *)(param_1 + 0x28c) = 7;
  *(undefined2 *)(param_1 + 0x28e) = 0xe;
  *(undefined2 *)(param_1 + 0x292) = 10;
  *(undefined2 *)(param_1 + 0x296) = 10;
  *(undefined2 *)(param_1 + 0x29a) = 9;
  pcVar4 = s_weapons_m4_m4_fire_wav_10091c78;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_m4_m4_fire_sil_wav_10091c5c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 8;
  param_1[0x350] = 1;
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x17;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  return;
}

/* 1000c730  FUN_1000c730  (780 bytes)
 * undefined FUN_1000c730(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000c730(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 100;
  param_1[8] = 4;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0x32;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x20;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3ddf3b64;
  *(undefined4 *)(param_1 + 0x1c) = 0x421c0000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x34) = 0x3c1374bc;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_10091d64;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 4;
  param_1[0x85] = 9;
  pcVar4 = s_sprites_weapons_m60_spr_10091d4c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x46;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 8000;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_556_shell_mdl_10091264;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_m60_mdl_10091d38;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_m60_mdl_10091d24;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_m60_mdl_10091d10;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009121c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x25a) = 3;
  *(undefined2 *)(param_1 + 600) = 2;
  *(undefined2 *)(param_1 + 0x25c) = 2;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 4;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 5;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_m60_m60_fire_wav_10091cf4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 1;
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x11;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 6;
  return;
}

/* 1000ca40  FUN_1000ca40  (671 bytes)
 * undefined FUN_1000ca40(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000ca40(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x18;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 2;
  *(undefined4 *)(param_1 + 0x20) = 4;
  pcVar4 = s_M61_Grenade_10091dc0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 1;
  param_1[0x85] = 1;
  pcVar4 = s_sprites_weapons_m61_spr_10091da8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  uVar2 = 0xffffffff;
  param_1[0xd0] = 7;
  *(undefined4 *)(param_1 + 0xd8) = 1000;
  param_1[0xdc] = 1;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar4 = s_models_v_m61_mdl_10091d94;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_m61_mdl_10091d80;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_m61_mdl_10091d6c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x278) = 2;
  *(undefined2 *)(param_1 + 0x27a) = 3;
  *(undefined2 *)(param_1 + 0x27c) = 4;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x34c) = 0;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  param_1[0x348] = 2;
  return;
}

/* 1000cce0  FUN_1000cce0  (790 bytes)
 * undefined FUN_1000cce0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000cce0(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x19;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 7;
  *(undefined4 *)(param_1 + 0x10) = 0x1e;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x17;
  *(undefined4 *)(param_1 + 0x14) = 0x40200000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dbc6a7f;
  *(undefined4 *)(param_1 + 0x1c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ce56042;
  *(undefined4 *)(param_1 + 0x30) = 0x40800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3b449ba6;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_10091e74;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 3;
  param_1[0x85] = 6;
  pcVar4 = s_sprites_weapons_ump_spr_10091e5c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x1e;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd8) = 0x8fc;
  *(undefined4 *)(param_1 + 0xe0) = 0xf;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  pcVar4 = s_models_v_ump_mdl_10091e48;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_ump_mdl_10091e34;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_ump_sil_mdl_10091e1c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_ump_mdl_10091e08;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009121c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 2;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 5;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 6;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_ump_ump_fire_wav_10091dec;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_ump_ump_fire_sil_wav_10091dcc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 6;
  param_1[0x348] = 9;
  *(undefined4 *)(param_1 + 0x34c) = 0xf;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x1e;
  return;
}

/* 1000d000  FUN_1000d000  (240 bytes)
 * undefined FUN_1000d000(int param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000d000(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_10091e8c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x44);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_v_melee_mdl_10091e78;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x132);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined1 *)(param_1 + 0x84) = 1;
  *(undefined2 *)(param_1 + 0x254) = 4;
  *(undefined2 *)(param_1 + 600) = 2;
  *(undefined2 *)(param_1 + 0x25a) = 10;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 5;
  *(undefined2 *)(param_1 + 0x260) = 9;
  *(undefined2 *)(param_1 + 0x262) = 6;
  *(undefined2 *)(param_1 + 0x264) = 5;
  *(undefined2 *)(param_1 + 0x266) = 8;
  *(undefined2 *)(param_1 + 0x268) = 7;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x85) = 6;
  return;
}

/* 1000d0f0  FUN_1000d0f0  (846 bytes)
 * undefined FUN_1000d0f0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000d0f0(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xc;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 10;
  *(undefined4 *)(param_1 + 0xcc) = 9;
  *(undefined4 *)(param_1 + 0x14) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x42100000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x40800000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_10091f40;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 2;
  uVar2 = 0xffffffff;
  param_1[0x85] = 2;
  pcVar4 = s_sprites_weapons_mk23_spr_10091f24;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 700;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar4 = s_models_v_mk23_mdl_10091f10;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mk23_mdl_10091efc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mk23_sil_mdl_10091ee4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_mk23_mdl_10091ed0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_100914b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 600) = 1;
  *(undefined2 *)(param_1 + 0x25c) = 1;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 0xb;
  *(undefined2 *)(param_1 + 0x256) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x260) = 9;
  *(undefined2 *)(param_1 + 0x28c) = 5;
  *(undefined2 *)(param_1 + 0x28e) = 0xc;
  *(undefined2 *)(param_1 + 0x290) = 0;
  *(undefined2 *)(param_1 + 0x292) = 6;
  *(undefined2 *)(param_1 + 0x294) = 7;
  *(undefined2 *)(param_1 + 0x296) = 6;
  *(undefined2 *)(param_1 + 0x298) = 8;
  *(undefined2 *)(param_1 + 0x29a) = 10;
  pcVar4 = s_weapons_mk23_mk23_fire_wav_10091eb4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_mk23_mk23_fire_sil_wav_10091e94;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 1000d440  FUN_1000d440  (933 bytes)
 * undefined FUN_1000d440(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000d440(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x18;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 0x12;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 9;
  param_1[0x348] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x40200000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x42100000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x40800000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_10091fc4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 5;
  uVar2 = 0xffffffff;
  param_1[0x85] = 2;
  pcVar4 = s_sprites_weapons_mk23_akimbo_spr_10091fa4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 700;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar4 = s_models_v_mk23_akimbo_mdl_10091f88;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mk23_akimbo_mdl_10091f6c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mk23_akimbo_sil_mdl_10091f4c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_mk23_mdl_10091ed0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_10091564;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x284) = 4;
  *(undefined2 *)(param_1 + 0x288) = 4;
  *(undefined2 *)(param_1 + 0x256) = 5;
  *(undefined2 *)(param_1 + 600) = 0xe;
  *(undefined2 *)(param_1 + 0x25a) = 0xe;
  *(undefined2 *)(param_1 + 0x25c) = 0xe;
  *(undefined2 *)(param_1 + 0x290) = 5;
  *(undefined2 *)(param_1 + 0x280) = 2;
  *(undefined2 *)(param_1 + 0x286) = 2;
  *(undefined2 *)(param_1 + 0x2ba) = 8;
  *(undefined2 *)(param_1 + 0x2be) = 10;
  *(undefined2 *)(param_1 + 0x2c0) = 8;
  *(undefined2 *)(param_1 + 0x2c2) = 10;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 0xd;
  *(undefined2 *)(param_1 + 0x27e) = 1;
  *(undefined2 *)(param_1 + 0x282) = 3;
  *(undefined2 *)(param_1 + 0x260) = 0xb;
  *(undefined2 *)(param_1 + 0x28c) = 6;
  *(undefined2 *)(param_1 + 0x28e) = 0x10;
  *(undefined2 *)(param_1 + 0x2b8) = 7;
  *(undefined2 *)(param_1 + 700) = 9;
  *(undefined2 *)(param_1 + 0x292) = 6;
  *(undefined2 *)(param_1 + 0x294) = 6;
  *(undefined2 *)(param_1 + 0x296) = 6;
  *(undefined2 *)(param_1 + 0x29a) = 0xc;
  pcVar4 = s_weapons_mk23_mk23_fire_wav_10091eb4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_mk23_mk23_fire_sil_wav_10091e94;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 1000d7f0  FUN_1000d7f0  (887 bytes)
 * undefined FUN_1000d7f0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000d7f0(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 8;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 8;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x1a;
  *(undefined4 *)(param_1 + 0x14) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x41800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x41600000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  pcVar4 = s_Mossberg_500_10092074;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 4;
  uVar2 = 0xffffffff;
  param_1[0x85] = 7;
  pcVar4 = s_sprites_weapons_mossberg_spr_10092054;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0xd0] = 0x28;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 0x9c4;
  *(undefined4 *)(param_1 + 0xe0) = 6;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_shotgun_shell_gold_mdl_10092034;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 1;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_mossberg_mdl_1009201c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mossberg_mdl_10092004;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_mossberg_mdl_10091fec;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009121c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x28c) = 3;
  *(undefined2 *)(param_1 + 0x28e) = 3;
  *(undefined2 *)(param_1 + 0x2a2) = 4;
  *(undefined2 *)(param_1 + 0x2a4) = 4;
  *(undefined2 *)(param_1 + 0x26c) = 2;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x2a6) = 5;
  *(undefined2 *)(param_1 + 0x2a8) = 5;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 0;
  *(undefined2 *)(param_1 + 0x256) = 7;
  *(undefined2 *)(param_1 + 0x262) = 8;
  *(undefined2 *)(param_1 + 0x264) = 9;
  *(undefined2 *)(param_1 + 0x266) = 10;
  *(undefined2 *)(param_1 + 0x268) = 1;
  *(undefined2 *)(param_1 + 0x26a) = 1;
  *(undefined2 *)(param_1 + 0x260) = 0xb;
  *(undefined2 *)(param_1 + 0x290) = 7;
  *(undefined2 *)(param_1 + 0x29c) = 0xd;
  *(undefined2 *)(param_1 + 0x29e) = 0xe;
  *(undefined2 *)(param_1 + 0x2a0) = 0xf;
  *(undefined2 *)(param_1 + 0x29a) = 0xc;
  pcVar4 = s_weapons_mossberg_fire_wav_10091fd0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_m3_m3_pump_wav_100913d4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  param_1[0x348] = 1;
  *(undefined4 *)(param_1 + 0x34c) = 0x11;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 10;
  return;
}

/* 1000db70  FUN_1000db70  (856 bytes)
 * undefined FUN_1000db70(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000db70(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 7;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 7;
  *(undefined4 *)(param_1 + 0x14) = 0x40133333;
  *(undefined4 *)(param_1 + 0x18) = 0x3d872b02;
  *(undefined4 *)(param_1 + 0x1c) = 0x41e00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x40400000;
  *(undefined4 *)(param_1 + 0x34) = 0x3ba3d70a;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_10092130;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 3;
  uVar2 = 0xffffffff;
  param_1[0x85] = 3;
  pcVar4 = s_sprites_weapons_mp5k_spr_10092114;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x14;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x5dc;
  *(undefined4 *)(param_1 + 0xe0) = 0xf;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 2;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  pcVar4 = s_models_v_mp5k_mdl_10092100;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mp5k_mdl_100920ec;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mp5k_sil_mdl_100920d4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_mp5k_mdl_100920c0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009121c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x28c) = 7;
  *(undefined2 *)(param_1 + 0x290) = 7;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x292) = 8;
  *(undefined2 *)(param_1 + 0x296) = 8;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x260) = 5;
  *(undefined2 *)(param_1 + 0x28e) = 10;
  *(undefined2 *)(param_1 + 0x294) = 9;
  *(undefined2 *)(param_1 + 0x298) = 9;
  *(undefined2 *)(param_1 + 0x29a) = 6;
  pcVar4 = s_weapons_mp5k_mp5k_fire_wav_100920a4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_mp5k_mp5k_fire_sil_wav_10092084;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x348] = 9;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x16;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 1000ded0  FUN_1000ded0  (787 bytes)
 * undefined FUN_1000ded0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000ded0(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 7;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0x1e;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 6;
  *(undefined4 *)(param_1 + 0x14) = 0x40133333;
  *(undefined4 *)(param_1 + 0x18) = 0x3d978d50;
  *(undefined4 *)(param_1 + 0x1c) = 0x41900000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x3fa00000;
  *(undefined4 *)(param_1 + 0x34) = 0x3bf5c28f;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_100921b0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 3;
  param_1[0x85] = 2;
  pcVar4 = s_sprites_weapons_mp5sd_spr_10092194;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x19;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd8) = 0x9c4;
  *(undefined4 *)(param_1 + 0xe0) = 0xf;
  *(undefined4 *)(param_1 + 0xe4) = 1;
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  pcVar4 = s_models_v_mp5sd_mdl_10092180;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mp5sd_mdl_1009216c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mp5sd_mdl_1009216c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_mp5sd_mdl_10092158;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009121c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 1;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 5;
  *(undefined2 *)(param_1 + 0x256) = 4;
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 6;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_mp5sd_mp5sd_fire_wav_10092138;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_mp5sd_mp5sd_fire_wav_10092138;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 6;
  param_1[0x348] = 9;
  *(undefined4 *)(param_1 + 0x34c) = 0x10;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  return;
}

/* 1000e1f0  FUN_1000e1f0  (778 bytes)
 * undefined FUN_1000e1f0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000e1f0(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x28;
  param_1[8] = 7;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x13;
  *(undefined4 *)(param_1 + 0x14) = 0x40200000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d810625;
  *(undefined4 *)(param_1 + 0x1c) = 0x41800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_10092258;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 3;
  param_1[0x85] = 5;
  pcVar4 = s_sprites_weapons_pdw_spr_10092240;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x19;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd8) = 0xaf0;
  *(undefined4 *)(param_1 + 0xe0) = 0xb;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_56_shell_mdl_10091800;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 2;
  pcVar4 = s_models_v_pdw_mdl_1009222c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_pdw_mdl_10092218;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_pdw_sil_mdl_10092200;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_pdw_mdl_100921ec;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_100914b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 5;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_pdw_fire_wav_100921d4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_pdw_fire_sil_wav_100921b8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 4;
  param_1[0x348] = 9;
  *(undefined4 *)(param_1 + 0x34c) = 0xd;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x10;
  return;
}

/* 1000e500  FUN_1000e500  (766 bytes)
 * undefined FUN_1000e500(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000e500(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x11;
  param_1[8] = 10;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x1c;
  *(undefined4 *)(param_1 + 0x14) = 0x3fa66666;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ba3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_100922e4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 2;
  param_1[0x85] = 6;
  pcVar4 = s_sprites_weapons_ruger_spr_100922c8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 5;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x5dc;
  *(undefined4 *)(param_1 + 0xe0) = 3;
  *(undefined4 *)(param_1 + 0xe4) = 1;
  pcVar4 = s_models_22_shell_mdl_100922b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_ruger_mdl_100922a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_ruger_mdl_1009228c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_ruger_mdl_1009228c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_ruger_mdl_10092278;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_100914b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 0x25e) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 4;
  *(undefined2 *)(param_1 + 0x256) = 3;
  *(undefined2 *)(param_1 + 600) = 1;
  *(undefined2 *)(param_1 + 0x25c) = 1;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_ruger_fire_wav_10092260;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_ruger_fire_wav_10092260;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 7;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 1000e800  FUN_1000e800  (886 bytes)
 * undefined FUN_1000e800(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000e800(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 2;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0x32;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x21;
  *(undefined4 *)(param_1 + 0x14) = 0x3fd9999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41b80000;
  *(undefined4 *)(param_1 + 0x28) = 0x3e051eb8;
  *(undefined4 *)(param_1 + 0x30) = 0x41180000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  pcVar4 = s_Sawed_off_10092374;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 4;
  uVar2 = 0xffffffff;
  param_1[0x85] = 10;
  pcVar4 = s_sprites_weapons_sawedoff_spr_10092354;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0xd0] = 0x14;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x76c;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 2;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_sawedoff_mdl_1009233c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_sawedoff_mdl_10092324;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_sawedoff_mdl_1009230c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009121c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x28c) = 5;
  *(undefined2 *)(param_1 + 0x290) = 5;
  *(undefined2 *)(param_1 + 0x254) = 2;
  *(undefined2 *)(param_1 + 0x292) = 7;
  *(undefined2 *)(param_1 + 0x294) = 8;
  *(undefined2 *)(param_1 + 0x296) = 7;
  *(undefined2 *)(param_1 + 0x298) = 8;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x262) = 9;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x260) = 0xb;
  *(undefined2 *)(param_1 + 0x28a) = 0xd;
  *(undefined2 *)(param_1 + 0x28e) = 6;
  *(undefined2 *)(param_1 + 0x29c) = 10;
  *(undefined2 *)(param_1 + 0x29a) = 0xc;
  *(undefined2 *)(param_1 + 0x2c4) = 0xd;
  pcVar4 = s_weapons_sawedoff_fire_wav_100922f0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 0xb;
  param_1[0x350] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 0x11;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  return;
}

/* 1000eb80  FUN_1000eb80  (700 bytes)
 * undefined FUN_1000eb80(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000eb80(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x23;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 10;
  *(undefined4 *)(param_1 + 0x20) = 7;
  pcVar4 = s_Seal_Knife_100923e8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 1;
  param_1[0x85] = 4;
  pcVar4 = s_sprites_weapons_sealknife_spr_100923c8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  uVar2 = 0xffffffff;
  param_1[0xd0] = 1;
  *(undefined4 *)(param_1 + 0xd8) = 100;
  param_1[0xdc] = 1;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar4 = s_models_v_sealknife_mdl_100923b0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_sealknife_mdl_10092398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_sealknife_mdl_10092380;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x270) = 2;
  *(undefined2 *)(param_1 + 0x272) = 3;
  *(undefined2 *)(param_1 + 0x274) = 4;
  *(undefined2 *)(param_1 + 0x27a) = 5;
  *(undefined2 *)(param_1 + 0x276) = 6;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x34c) = 0;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  param_1[0x348] = 3;
  return;
}

/* 1000ee40  FUN_1000ee40  (718 bytes)
 * undefined FUN_1000ee40(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000ee40(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x28;
  param_1[8] = 0xc;
  *(undefined4 *)(param_1 + 0xc) = 0x21;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x11;
  param_1[0x348] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d8f5c29;
  *(undefined4 *)(param_1 + 0x1c) = 0x41800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3d0f5c29;
  *(undefined4 *)(param_1 + 0x30) = 0x3f0ccccd;
  *(undefined4 *)(param_1 + 0x34) = 0x3b23d70a;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Akimbo_Skorpions_10092480;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 5;
  param_1[0x85] = 6;
  pcVar4 = s_sprites_weapons_skorpion_akimbo__1009245c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0xf;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x44c;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_22_shell_mdl_100922b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_skorpion_ak_mdl_10092440;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_skorpion_ak_mdl_10092424;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_skorpion_mdl_1009240c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_10091564;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x254) = 2;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x27e) = 6;
  *(undefined2 *)(param_1 + 0x282) = 5;
  *(undefined2 *)(param_1 + 0x280) = 6;
  *(undefined2 *)(param_1 + 0x284) = 5;
  *(undefined2 *)(param_1 + 0x286) = 6;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x288) = 5;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_tmp_fire_wav_100923f4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 4;
  *(undefined4 *)(param_1 + 0x34c) = 5;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x10;
  return;
}

/* 1000f110  FUN_1000f110  (807 bytes)
 * undefined FUN_1000f110(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000f110(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 8;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x14;
  *(undefined4 *)(param_1 + 0x14) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x41200000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x40) = 0;
  uVar2 = 0xffffffff;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x20) = 1;
  pcVar4 = &DAT_10092548;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 4;
  param_1[0x85] = 6;
  pcVar4 = s_sprites_weapons_spas12_spr_1009252c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x1e;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 0x834;
  *(undefined4 *)(param_1 + 0xe0) = 6;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_shotgun_shell_mdl_10092510;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar4 = s_models_v_spas12_mdl_100924fc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_spas12_mdl_100924e8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_spas12_mdl_100924d4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009121c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 5;
  *(undefined2 *)(param_1 + 0x262) = 2;
  *(undefined2 *)(param_1 + 0x264) = 3;
  *(undefined2 *)(param_1 + 0x266) = 4;
  *(undefined2 *)(param_1 + 0x268) = 6;
  *(undefined2 *)(param_1 + 0x26a) = 7;
  *(undefined2 *)(param_1 + 0x26c) = 8;
  *(undefined2 *)(param_1 + 0x26e) = 9;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_spas12_spas12_fire_wav_100924b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_spas12_spas12_pump_wav_10092494;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  param_1[0x348] = 1;
  *(undefined4 *)(param_1 + 0x34c) = 0x17;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 10;
  return;
}

/* 1000f440  FUN_1000f440  (782 bytes)
 * undefined FUN_1000f440(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000f440(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0xd;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x24;
  *(undefined4 *)(param_1 + 0x14) = 0x3faccccd;
  *(undefined4 *)(param_1 + 0x18) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x42be0000;
  param_1[0x38] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0x3a83126f;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x41400000;
  *(undefined4 *)(param_1 + 0x3c) = 0x1a;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Contender_G2_100925d4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 2;
  param_1[0x85] = 8;
  pcVar4 = s_sprites_weapons_contender_spr_100925b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0xf;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x5dc;
  *(undefined4 *)(param_1 + 0xe0) = 10;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 2;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar4 = s_models_v_contender_mdl_1009259c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_contender_mdl_10092584;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_contender_mdl_1009256c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_100914b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x254) = 2;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_contender_fire_wav_10092550;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 0x17;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 10;
  return;
}

/* 1000f750  FUN_1000f750  (714 bytes)
 * undefined FUN_1000f750(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000f750(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x14;
  param_1[8] = 0xc;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0x25;
  *(undefined4 *)(param_1 + 0xcc) = 0x11;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d8f5c29;
  *(undefined4 *)(param_1 + 0x1c) = 0x41800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3cf5c28f;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3b23d70a;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Skorpion_10092650;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 3;
  param_1[0x85] = 4;
  pcVar4 = s_sprites_weapons_skorpion_spr_10092630;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0xf;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x44c;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_22_shell_mdl_100922b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_skorpion_mdl_10092618;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_skorpion_mdl_10092600;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_skorpion_mdl_1009240c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_100914b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 2;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 5;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_tmp_fire_wav_100923f4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_tmp_fire_sil_wav_100925e4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x348] = 9;
  *(undefined4 *)(param_1 + 0x34c) = 5;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x10;
  *(undefined4 *)(param_1 + 0x358) = 4;
  return;
}

/* 1000fa20  FUN_1000fa20  (793 bytes)
 * undefined FUN_1000fa20(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000fa20(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x14;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0x32;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xb;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3e29fbe7;
  *(undefined4 *)(param_1 + 0x1c) = 0x40e00000;
  param_1[0x38] = 1;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0x3d8f5c29;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x40800000;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  pcVar4 = &DAT_100926d0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 4;
  param_1[0x85] = 0xb;
  pcVar4 = s_sprites_weapons_usas12_spr_100926b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x28;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 0x13ec;
  *(undefined4 *)(param_1 + 0xe0) = 6;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_shotgun_shell_mdl_10092510;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 1;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar4 = s_models_v_usas_mdl_100926a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_usas_mdl_1009268c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_usas_mdl_10092678;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009121c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 4;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_usas_usas_fire_wav_1009265c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x1a;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 10;
  return;
}

/* 1000fd40  FUN_1000fd40  (831 bytes)
 * undefined FUN_1000fd40(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000fd40(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x20;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0x10;
  *(undefined4 *)(param_1 + 0xcc) = 3;
  *(undefined4 *)(param_1 + 0x14) = 0x400ccccd;
  *(undefined4 *)(param_1 + 0x18) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x1c) = 0x41b00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x34) = 0x3be56042;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_10092780;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 3;
  uVar2 = 0xffffffff;
  param_1[0x85] = 1;
  pcVar4 = s_sprites_weapons_uzi_spr_10092768;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x14;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x514;
  *(undefined4 *)(param_1 + 0xe0) = 1;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_uzi_mdl_10092754;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_uzi_mdl_10092740;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_uzi_sil_mdl_10092728;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_uzi_mdl_10092714;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_100914b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x290) = 2;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x292) = 10;
  *(undefined2 *)(param_1 + 0x294) = 0xb;
  *(undefined2 *)(param_1 + 0x296) = 10;
  *(undefined2 *)(param_1 + 0x298) = 0xb;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x260) = 8;
  *(undefined2 *)(param_1 + 0x28c) = 7;
  *(undefined2 *)(param_1 + 0x28e) = 0xe;
  *(undefined2 *)(param_1 + 0x29a) = 9;
  pcVar4 = s_weapons_uzi_uzi_fire_wav_100926f8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_uzi_uzi_fire_sil_wav_100926d8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x348] = 9;
  *(undefined4 *)(param_1 + 0x34c) = 9;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x16;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 10010080  FUN_10010080  (813 bytes)
 * undefined FUN_10010080(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_10010080(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x40;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x21;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 3;
  param_1[0x348] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x1c) = 0x41b00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3cf5c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x40000000;
  *(undefined4 *)(param_1 + 0x34) = 0x3bc49ba6;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Akimbo_Mini_Uzi_100927f8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 5;
  param_1[0x85] = 3;
  pcVar4 = s_sprites_weapons_uzi_akimbo_spr_100927d8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x14;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x514;
  *(undefined4 *)(param_1 + 0xe0) = 1;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar4 = s_models_v_uzi_akimbo_mdl_100927c0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_uzi_akimbo_mdl_100927a8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_uzi_akimbo_sil_mdl_1009278c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_uzi_mdl_10092714;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_10091564;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 0xc;
  *(undefined2 *)(param_1 + 0x25e) = 0xc;
  *(undefined2 *)(param_1 + 0x27e) = 0x18;
  *(undefined2 *)(param_1 + 0x282) = 0x19;
  *(undefined2 *)(param_1 + 0x280) = 0x18;
  *(undefined2 *)(param_1 + 0x284) = 0x19;
  *(undefined2 *)(param_1 + 0x286) = 0x18;
  *(undefined2 *)(param_1 + 0x288) = 0x19;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 0xb;
  *(undefined2 *)(param_1 + 0x256) = 4;
  *(undefined2 *)(param_1 + 0x25a) = 0xd;
  *(undefined2 *)(param_1 + 0x25c) = 0xe;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_uzi_uzi_fire_wav_100926f8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_uzi_uzi_fire_sil_wav_100926d8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x34c) = 9;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x16;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 100103b0  FUN_100103b0  (131 bytes)
 * undefined FUN_100103b0(undefined4 * param_1)
 * called by: FUN_10066750
 */
void __fastcall FUN_100103b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0xb61];
  *param_1 = &PTR_LAB_1007aa34;
  param_1[1] = &PTR_AttemptToMaterialize_1007aa30;
  param_1[2] = &PTR_LAB_1007aa04;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100667c0(puVar1);
    FUN_1006ad4c(puVar1);
  }
  puVar1 = (undefined4 *)param_1[0xb62];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100667c0(puVar1);
    FUN_1006ad4c(puVar1);
  }
  puVar1 = (undefined4 *)param_1[0xb63];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100667c0(puVar1);
    FUN_1006ad4c(puVar1);
  }
  puVar1 = (undefined4 *)param_1[0xb64];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100667c0(puVar1);
    FUN_1006ad4c(puVar1);
  }
  return;
}

/* 10010440  FUN_10010440  (481 bytes)
 * undefined FUN_10010440(int param_1)
 */
void __fastcall FUN_10010440(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  Panel *this;
  void *pvVar3;
  Panel *this_00;
  int iVar4;
  undefined **ppuVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1007774b;
  local_c = ExceptionList;
  puVar1 = *(undefined4 **)(param_1 + 0x2d88);
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0xc) = 2;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100667c0(puVar1);
    FUN_1006ad4c(puVar1);
  }
  if (*(int *)(param_1 + 0xc) == 2) {
    iVar2 = 0x3f800000;
  }
  else {
    iVar2 = 0x3f000000;
  }
  lVar9 = __ftol();
  lVar10 = __ftol();
  lVar11 = __ftol();
  this = (Panel *)FUN_10066790(0xe8);
  local_4 = 0;
  this_00 = (Panel *)0x0;
  if (this != (Panel *)0x0) {
    vgui::Panel::Panel(this);
    *(undefined ***)this = &PTR_setPos_1007aa38;
    this_00 = this;
  }
  local_4 = 0xffffffff;
  *(Panel **)(param_1 + 0x2d88) = this_00;
  if (param_1 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = param_1 + 8;
  }
  FUN_100667e0(this_00,(1 < DAT_100cf97c) + 6,0x88,DAT_100d590c / 2,0x80,0x14,param_1,iVar8);
  ppuVar5 = &PTR_s_1_Handguns_10092824;
  iVar6 = (int)lVar11 / 2;
  iVar4 = (int)lVar10 / 2;
  pvVar3 = (void *)((int)lVar9 / 2);
  iVar8 = 0;
  do {
    iVar7 = iVar8;
    FUN_100668f0(*(void **)(param_1 + 0x2d88),iVar7,*ppuVar5,pvVar3,iVar4,iVar6,0x32,iVar2,0xb);
    ppuVar5 = ppuVar5 + 1;
    iVar8 = iVar7 + 1;
  } while ((int)ppuVar5 < 0x10092838);
  if (1 < DAT_100cf97c) {
    iVar8 = iVar7 + 2;
    FUN_100668f0(*(void **)(param_1 + 0x2d88),iVar8,PTR_s_1_Buy_10092844,pvVar3,iVar4,iVar6,0x32,
                 iVar2,0xb);
  }
  FUN_100668f0(*(void **)(param_1 + 0x2d88),iVar8,PTR_s_0_Cancel_10092838,100,100,0xcd,0x32,
               0x3f800000,0);
  FUN_10066880(*(int **)(param_1 + 0x2d88));
  (**(code **)(**(int **)(param_1 + 0x2d88) + 0x24))(1);
  ExceptionList = pvVar3;
  return;
}

/* 10010630  FUN_10010630  (608 bytes)
 * undefined FUN_10010630(int param_1)
 */
void __fastcall FUN_10010630(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  Panel *this;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  char local_2c [28];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1007776b;
  local_c = ExceptionList;
  iVar6 = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x2d88);
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0xc) = 5;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_100667c0(puVar2);
    FUN_1006ad4c(puVar2);
  }
  if (*(int *)(param_1 + 0xc) == 2) {
    iVar3 = 0x3f800000;
  }
  else {
    iVar3 = 0x3f000000;
  }
  lVar11 = __ftol();
  lVar12 = __ftol();
  lVar13 = __ftol();
  this = (Panel *)FUN_10066790(0xe8);
  local_4 = 0;
  if (this == (Panel *)0x0) {
    this = (Panel *)0x0;
  }
  else {
    vgui::Panel::Panel(this);
    *(undefined ***)this = &PTR_setPos_1007aa38;
  }
  local_4 = 0xffffffff;
  *(Panel **)(param_1 + 0x2d88) = this;
  if (param_1 == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = param_1 + 8;
  }
  FUN_100667e0(this,*(int *)(param_1 + 0x1c) + 1,0x88,DAT_100d590c / 2,0x80,0x14,param_1,iVar14);
  if (0 < *(int *)(param_1 + 0x1c)) {
    puVar7 = (uint *)(param_1 + 0xb0);
    do {
      if (*puVar7 != 0) {
        if ((char)puVar7[-1] == '\0') {
          FUN_100071c0(*puVar7);
          FUN_1006ac7a(local_2c,(byte_conflict *)s__i__s_10092974);
          iVar14 = 8;
        }
        else {
          FUN_1006ac7a(local_2c,&DAT_10091200);
          if ((*puVar7 & 0x10) == 0) {
            if ((*puVar7 & 0x20) != 0) {
              pcVar8 = s_Stealth_Shoes_1009295c;
              goto LAB_100107c4;
            }
          }
          else {
            pcVar8 = &DAT_1009296c;
LAB_100107c4:
            uVar4 = 0xffffffff;
            do {
              pcVar10 = pcVar8;
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              pcVar10 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar10;
            } while (cVar1 != '\0');
            uVar4 = ~uVar4;
            iVar14 = -1;
            pcVar8 = local_2c;
            do {
              pcVar9 = pcVar8;
              if (iVar14 == 0) break;
              iVar14 = iVar14 + -1;
              pcVar9 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar9;
            } while (cVar1 != '\0');
            pcVar8 = pcVar10 + -uVar4;
            pcVar10 = pcVar9 + -1;
            for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pcVar10 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar10 = pcVar10 + 1;
            }
          }
          iVar14 = 10;
        }
        FUN_100668f0(*(void **)(param_1 + 0x2d88),iVar6,local_2c,(int)lVar11 / 2,(int)lVar12 / 2,
                     (int)lVar13 / 2,0x32,iVar3,iVar14);
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 0xe;
    } while (iVar6 < *(int *)(param_1 + 0x1c));
  }
  FUN_100668f0(*(void **)(param_1 + 0x2d88),iVar6,PTR_s_0_Cancel_10092838,100,100,0xcd,0x32,
               0x3f800000,0);
  FUN_10066880(*(int **)(param_1 + 0x2d88));
  (**(code **)(**(int **)(param_1 + 0x2d88) + 0x24))(1);
  ExceptionList = pvStack_10;
  return;
}

/* 10010890  FUN_10010890  (25 bytes)
 * undefined FUN_10010890(int param_1)
 */
void __fastcall FUN_10010890(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 1;
  if (*(int **)(param_1 + 0x2d88) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2d88) + 0x24))(0);
  }
  return;
}

/* 100108b0  FUN_100108b0  (756 bytes)
 * undefined FUN_100108b0(int param_1)
 */
void __fastcall FUN_100108b0(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  Panel *this;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  char local_4c [60];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1007778b;
  local_c = ExceptionList;
  puVar4 = *(undefined4 **)(param_1 + 0x2d8c);
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0xc) = 3;
  if (puVar4 != (undefined4 *)0x0) {
    FUN_100667c0(puVar4);
    FUN_1006ad4c(puVar4);
  }
  iVar7 = 0;
  lVar10 = __ftol();
  lVar11 = __ftol();
  lVar12 = __ftol();
  iVar8 = 0;
  do {
    iVar1 = *(int *)(&DAT_1007a950 + (iVar8 + *(int *)(param_1 + 0x20) * 9) * 4);
    if (iVar1 != -1) {
      uVar3 = FUN_1000b6d0(iVar1,DAT_1018d174);
      if (((char)uVar3 == '\0') && ((1 < DAT_100cf97c || (iVar1 != 0x18)))) {
        iVar7 = iVar7 + 1;
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 9);
  this = (Panel *)FUN_10066790(0xe8);
  local_4 = 0;
  if (this == (Panel *)0x0) {
    this = (Panel *)0x0;
  }
  else {
    vgui::Panel::Panel(this);
    *(undefined ***)this = &PTR_setPos_1007aa38;
  }
  local_4 = 0xffffffff;
  *(Panel **)(param_1 + 0x2d8c) = this;
  if (param_1 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = param_1 + 8;
  }
  FUN_100667e0(this,iVar7 + 1,0x108,DAT_100d590c / 2,0x80,0x14,param_1,iVar8);
  iVar8 = 0;
  if (0 < iVar7) {
    do {
      iVar1 = *(int *)(&DAT_1007a950 + (iVar8 + *(int *)(param_1 + 0x20) * 9) * 4);
      if (iVar1 != -1) {
        uVar3 = FUN_1000b6d0(iVar1,DAT_1018d174);
        if (((char)uVar3 == '\0') && ((1 < DAT_100cf97c || (iVar1 != 0x18)))) {
          iVar1 = *(int *)(param_1 + 0x28);
          iVar5 = *(int *)(&DAT_1007a950 + (iVar8 + *(int *)(param_1 + 0x20) * 9) * 4);
          if ((1 < DAT_100cf97c) || (iVar6 = 30000, DAT_1018d170 != 0)) {
            iVar6 = DAT_100d43f0;
          }
          puVar4 = FUN_100071c0(iVar5);
          if (iVar6 < puVar4[0x36] + *(int *)(param_1 + 0x42c)) {
LAB_10010aa8:
            bVar2 = false;
          }
          else {
            puVar4 = FUN_100071c0(*(int *)(&DAT_1007a950 +
                                          (iVar8 + *(int *)(param_1 + 0x20) * 9) * 4));
            if (0x51 < (int)((uint)*(byte *)(puVar4 + 0x34) + *(int *)(param_1 + 0x430)))
            goto LAB_10010aa8;
            bVar2 = true;
          }
          FUN_100071c0(*(int *)(&DAT_1007a950 + (iVar8 + *(int *)(param_1 + 0x20) * 9) * 4));
          FUN_1006ac7a(local_4c,(byte_conflict *)s__i__s_10092974);
          if ((*(int *)(param_1 + 0xc) == 3) || (iVar5 == iVar1)) {
            iVar1 = 0x3f800000;
          }
          else {
            iVar1 = 0x3f000000;
          }
          if (bVar2) {
            iVar9 = (int)lVar12 / 2;
            iVar6 = (int)lVar11 / 2;
            iVar5 = (int)lVar10 / 2;
          }
          else {
            iVar9 = 0x2d;
            iVar5 = 0xc3;
            iVar6 = 0x2d;
          }
          FUN_100668f0(*(void **)(param_1 + 0x2d8c),iVar8,local_4c,iVar5,iVar6,iVar9,0x32,iVar1,8);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
  }
  FUN_100668f0(*(void **)(param_1 + 0x2d8c),iVar8,PTR_s_0_Cancel_10092838,100,100,0xcd,0x32,
               0x3f800000,0);
  FUN_10066880(*(int **)(param_1 + 0x2d8c));
  (**(code **)(**(int **)(param_1 + 0x2d8c) + 0x24))(1);
  ExceptionList = pvStack_10;
  return;
}

/* 10010bb0  FUN_10010bb0  (25 bytes)
 * undefined FUN_10010bb0(int param_1)
 */
void __fastcall FUN_10010bb0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 2;
  if (*(int **)(param_1 + 0x2d8c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2d8c) + 0x24))(0);
  }
  return;
}

/* 10010bd0  FUN_10010bd0  (1368 bytes)
 * undefined FUN_10010bd0(int param_1)
 */
void __fastcall FUN_10010bd0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  Panel *this;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  int local_64;
  char local_4c [60];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100777ab;
  local_c = ExceptionList;
  iVar6 = 0;
  puVar3 = *(undefined4 **)(param_1 + 0x2d90);
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0xc) = 4;
  if (puVar3 != (undefined4 *)0x0) {
    FUN_100667c0(puVar3);
    FUN_1006ad4c(puVar3);
  }
  local_64 = 0;
  lVar9 = __ftol();
  lVar10 = __ftol();
  lVar11 = __ftol();
  iVar2 = FUN_10012ad0(*(uint *)(param_1 + 0x28),(byte_conflict)*(undefined4 *)(param_1 + 0x24),0,
                       '\0');
  if ((1 < DAT_100cf97c) || (iVar5 = 30000, DAT_1018d170 != 0)) {
    iVar5 = DAT_100d43f0;
  }
  if ((iVar5 < iVar2 + *(int *)(param_1 + 0x42c)) ||
     (puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28)),
     0x51 < (int)((uint)*(byte *)(puVar3 + 0x34) + *(int *)(param_1 + 0x430)))) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  do {
    uVar7 = 1 << ((byte)iVar6 & 0x1f);
    if ((((uVar7 & *(uint *)(param_1 + 0x24)) == 0) &&
        (puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28)), (uVar7 & puVar3[0x39]) == 0)) &&
       (puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28)), (uVar7 & puVar3[0x38]) != 0)) {
      local_64 = local_64 + 1;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28));
  if ((puVar3[0x32] != -1) ||
     (puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28)), *(char *)(puVar3 + 0x37) != '\0')) {
    local_64 = local_64 + 1;
  }
  this = (Panel *)FUN_10066790(0xe8);
  iVar6 = 0;
  local_4 = 0;
  if (this == (Panel *)0x0) {
    this = (Panel *)0x0;
  }
  else {
    vgui::Panel::Panel(this);
    *(undefined ***)this = &PTR_setPos_1007aa38;
  }
  local_4 = 0xffffffff;
  *(Panel **)(param_1 + 0x2d90) = this;
  if (param_1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_1 + 8;
  }
  FUN_100667e0(this,local_64 + 2,0x188,DAT_100d590c / 2,0x80,0x14,param_1,iVar5);
  FUN_100668f0(*(void **)(param_1 + 0x2d90),0,PTR_s_1_Buy_10092844,
               (-(uint)bVar1 & 0xffffff6a) + 0xc3,(-(uint)bVar1 & 0x96) + 0x2d,0x2d,0x32,0x3f800000,
               8);
  do {
    uVar7 = 1 << ((byte)iVar6 & 0x1f);
    if ((((uVar7 & *(uint *)(param_1 + 0x24)) == 0) &&
        (puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28)), (uVar7 & puVar3[0x39]) == 0)) &&
       (puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28)), (uVar7 & puVar3[0x38]) != 0)) {
      iVar5 = iVar2;
      switch(iVar6) {
      case 0:
        FUN_1006ac7a(local_4c,(byte_conflict *)s__i_Silencer__i_100929b4);
        iVar5 = iVar2 + 900;
        break;
      case 1:
        FUN_1006ac7a(local_4c,(byte_conflict *)s__i_Lasersight__i_100929a0);
        iVar5 = iVar2 + 800;
        break;
      case 2:
        FUN_1006ac7a(local_4c,(byte_conflict *)s__i_Flashlight__i_1009298c);
        iVar5 = iVar2 + 500;
        break;
      case 3:
        FUN_1006ac7a(local_4c,(byte_conflict *)s__i_Scope__i_1009297c);
        iVar5 = iVar2 + 0x708;
      }
      if ((1 < DAT_100cf97c) || (iVar8 = 30000, DAT_1018d170 != 0)) {
        iVar8 = DAT_100d43f0;
      }
      if (iVar8 < iVar5 + *(int *)(param_1 + 0x42c)) {
        iVar8 = 0x2d;
        iVar5 = 0x2d;
        iVar4 = 0xc3;
      }
      else {
        iVar8 = (int)lVar11 / 2;
        iVar5 = (int)lVar10 / 2;
        iVar4 = (int)lVar9 / 2;
      }
      FUN_100668f0(*(void **)(param_1 + 0x2d90),iVar6 + 1,local_4c,iVar4,iVar5,iVar8,0x32,0x3f800000
                   ,10);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28));
  if (puVar3[0x32] == -1) {
    puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28));
    if (*(char *)(puVar3 + 0x37) == '\0') goto LAB_100110d4;
    iVar2 = FUN_10012ad0(*(uint *)(param_1 + 0x28),'\0',1,'\0');
    if ((1 < DAT_100cf97c) || (iVar5 = 30000, DAT_1018d170 != 0)) {
      iVar5 = DAT_100d43f0;
    }
    if (iVar5 < iVar2 + *(int *)(param_1 + 0x42c)) {
LAB_10011095:
      bVar1 = 0;
    }
    else {
      puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28));
      bVar1 = *(byte *)(puVar3 + 0x34);
      puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28));
      if (0x51 < (int)((uint)bVar1 * puVar3[9] + *(int *)(param_1 + 0x430))) goto LAB_10011095;
      bVar1 = 1;
    }
    iVar2 = 9;
    pcVar12 = PTR_s_6_Full_Load_10092850;
  }
  else {
    iVar2 = FUN_10012ad0(*(uint *)(param_1 + 0x28),(byte_conflict)*(undefined4 *)(param_1 + 0x24),1,
                         '\0');
    if ((1 < DAT_100cf97c) || (iVar5 = 30000, DAT_1018d170 != 0)) {
      iVar5 = DAT_100d43f0;
    }
    if ((iVar5 < iVar2 + *(int *)(param_1 + 0x42c)) ||
       (puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28)),
       0x51 < (int)(*(int *)(param_1 + 0x430) + (uint)*(byte *)(puVar3 + 0x34) * 2))) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
    FUN_100071c0(*(int *)(param_1 + 0x28));
    iVar2 = 8;
    pcVar12 = PTR_s_6_Buy_Akimbo_1009284c;
  }
  FUN_100668f0(*(void **)(param_1 + 0x2d90),iVar6,pcVar12,(-(uint)bVar1 & 0xffffff6a) + 0xc3,
               (-(uint)bVar1 & 0x96) + 0x2d,0x2d,0x32,0x3f800000,iVar2);
LAB_100110d4:
  FUN_100668f0(*(void **)(param_1 + 0x2d90),iVar6,PTR_s_0_Cancel_10092838,100,100,0xcd,0x32,
               0x3f800000,0);
  FUN_10066880(*(int **)(param_1 + 0x2d90));
  (**(code **)(**(int **)(param_1 + 0x2d90) + 0x24))(1);
  ExceptionList = pvStack_10;
  return;
}

/* 10011140  FUN_10011140  (25 bytes)
 * undefined FUN_10011140(int param_1)
 */
void __fastcall FUN_10011140(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 3;
  if (*(int **)(param_1 + 0x2d90) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2d90) + 0x24))(0);
  }
  return;
}

/* 10011160  FUN_10011160  (197 bytes)
 * undefined FUN_10011160(int param_1)
 * called by: FUN_10011230, FUN_10012050, FUN_100124a0, FUN_100128e0, FUN_10012c20
 */
void __fastcall FUN_10011160(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  this = *(void **)(param_1 + 0x2d84);
  if (this != (void *)0x0) {
    iVar1 = *(int *)(param_1 + 0x42c);
    if (iVar1 < 1) {
      FUN_10066a90(this,0,PTR_s_1_Empty_Config_10092808,0xc3,0x2d,0x2d,0x32,0x3f800000,1,0);
      return;
    }
    pcVar4 = PTR_s_1_Use_Last_Config_1009283c;
    if (*(char *)(param_1 + 0x10) != '\0') {
      pcVar4 = PTR_s_1_Use_New_Config_10092840;
    }
    if ((1 < DAT_100cf97c) || (iVar3 = 30000, DAT_1018d170 != 0)) {
      iVar3 = DAT_100d43f0;
    }
    iVar2 = DAT_100d43f0;
    if ((DAT_100cf97c < 2) && (DAT_1018d170 == 0)) {
      iVar2 = 30000;
    }
    FUN_10066a90(this,0,pcVar4,((iVar2 - iVar1 < 0) - 1 & 0xffffff6a) + 0xc3,
                 ((iVar3 - iVar1 < 0) - 1 & 0x96) + 0x2d,0x2d,0x32,0x3f800000,1,0);
  }
  return;
}

/* 10011230  FUN_10011230  (227 bytes)
 * undefined FUN_10011230(undefined4 param_1)
 * called by: FUN_10066770
 */
void __thiscall FUN_10011230(void *this,undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  
  if ((char)param_1 == '\0') {
    *(uint *)(*(int *)(DAT_100d5cb0 + 0xaac) + 4) =
         *(uint *)(*(int *)(DAT_100d5cb0 + 0xaac) + 4) & 0xfffffffe;
    *(undefined4 *)((int)this + 0xc) = 1;
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  else {
    *(uint *)(*(int *)(DAT_100d5cb0 + 0xaac) + 4) =
         *(uint *)(*(int *)(DAT_100d5cb0 + 0xaac) + 4) | 1;
    cVar1 = *(char *)((int)this + 0x11);
    *(undefined4 *)((int)this + 0xc) = 1;
    puVar3 = (undefined4 *)((int)this + 0x434);
    puVar4 = (undefined4 *)((int)this + 0x2c);
    for (iVar2 = 0x102; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined1 *)((int)this + 0x10) = 0;
    if (cVar1 != '\0') {
      *(undefined1 *)((int)this + 0x11) = 0;
      fVar5 = (float10)(*gEngfuncs.pfnRandomFloat)(0.5,1.0);
      FUN_10012c20(this,(float)fVar5);
    }
    FUN_100129f0(this);
    FUN_10011160((int)this);
  }
  if (*(int **)((int)this + 0x2d84) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x2d84) + 0x24))(param_1);
  }
  if (*(int **)((int)this + 0x2d88) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x2d88) + 0x24))(0);
  }
  if (*(int **)((int)this + 0x2d8c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x2d8c) + 0x24))(0);
  }
  if (*(int **)((int)this + 0x2d90) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x2d90) + 0x24))(0);
  }
  return;
}

/* 10011a60  FUN_10011a60  (1507 bytes)
 * undefined FUN_10011a60(int param_1)
 */
void __fastcall FUN_10011a60(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int r;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int b;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  int g;
  char *pcVar17;
  bool bVar18;
  longlong lVar19;
  byte_conflict bVar20;
  int iStack_30;
  int iStack_2c;
  uint uStack_10;
  int iStack_4;
  
  lVar19 = __ftol();
  iVar2 = (int)lVar19;
  lVar19 = __ftol();
  iVar3 = (int)lVar19;
  lVar19 = __ftol();
  iVar4 = (int)lVar19;
  b = iVar4 / 2;
  g = iVar3 / 2;
  r = iVar2 / 2;
  (*gEngfuncs.pfnFillRGBA)(8,8,0x280,0x13,r,g,b,0x32);
  if ((DAT_100cf97c < 2) && (DAT_1018d170 == 0)) {
    FUN_1006ac7a(&DAT_100b3300,(byte_conflict *)s__Total___i__10092a08);
  }
  else {
    FUN_1006ac7a(&DAT_100b3300,(byte_conflict *)s_Remain_Cash____i__Total___i__10092a14);
  }
  if ((1 < DAT_100cf97c) || (iVar14 = 30000, DAT_1018d170 != 0)) {
    iVar14 = DAT_100d43f0;
  }
  iVar10 = *(int *)(param_1 + 0x42c);
  iVar15 = b;
  if (iVar14 == iVar10 || iVar14 - iVar10 < 0) {
    iVar15 = 0x2d;
  }
  if ((1 < DAT_100cf97c) || (iVar14 = 30000, DAT_1018d170 != 0)) {
    iVar14 = DAT_100d43f0;
  }
  iVar9 = g;
  if (iVar14 == iVar10 || iVar14 - iVar10 < 0) {
    iVar9 = 0x2d;
  }
  if ((1 < DAT_100cf97c) || (iVar14 = 30000, DAT_1018d170 != 0)) {
    iVar14 = DAT_100d43f0;
  }
  iVar5 = r;
  if (iVar14 == iVar10 || iVar14 - iVar10 < 0) {
    iVar5 = 0xc3;
  }
  FUN_10021ce0(8,8,DAT_100d5908,&DAT_100b3300,iVar5,iVar9,iVar15);
  FUN_1006ac7a(&DAT_100b3300,(byte_conflict *)s_Free_Slots____i_100929f8);
  iVar15 = -*(int *)(param_1 + 0x430) + 0x51;
  iVar10 = g;
  iVar14 = b;
  if (iVar15 < 1) {
    iVar14 = 0x2d;
    iVar10 = 0x2d;
  }
  iVar9 = r;
  if (-*(int *)(param_1 + 0x430) == -0x51 || iVar15 < 0) {
    iVar9 = 0xc3;
  }
  FUN_10021ce0(0x108,8,DAT_100d5908,&DAT_100b3300,iVar9,iVar10,iVar14);
  uStack_10 = 1;
  do {
    iVar10 = uStack_10 * 0x80 + -0x78;
    (*gEngfuncs.pfnFillRGBA)(iVar10,0x1c,0x80,0x14,r,g,b,0x32);
    FUN_1004c290(&DAT_100cf920,iVar10,0x1c,'\x02',uStack_10,r,g,b);
    iStack_30 = 0x30;
    iStack_2c = 0x44;
    iVar14 = 0x35;
    puVar11 = (uint *)(param_1 + 0xb0);
    iStack_4 = 0x10;
    do {
      uVar12 = *puVar11;
      if (uVar12 != 0) {
        if ((char)puVar11[-1] == '\0') {
          if (uVar12 == 0) goto LAB_10012013;
          puVar6 = FUN_100071c0(uVar12);
          if (*(byte *)(puVar6 + 0x21) == uStack_10) {
            uVar12 = *puVar11;
            uVar7 = FUN_1000b6d0(uVar12,DAT_1018d174);
            if ((char)uVar7 == '\0') {
              if (DAT_100cf97c < 2) {
                bVar18 = uVar12 == 0x18;
              }
              else {
                bVar18 = false;
              }
            }
            else {
              bVar18 = true;
            }
            iVar15 = iVar2;
            iVar9 = iVar3;
            iVar5 = iVar4;
            if (bVar18) {
              iVar15 = 0xc3;
              iVar9 = 0x2d;
              iVar5 = 0x2d;
            }
            (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(&DAT_100d0ce4 + *puVar11 * 4),iVar15,iVar9,iVar5);
            (*gEngfuncs.pfnSPR_DrawAdditive)(0,iVar10,iStack_30,(wrect_t *)0x0);
            uVar12 = puVar11[0xc];
            if (uVar12 == 0) {
              if (*(byte *)(puVar6 + 2) != 0) {
                uVar12 = *(uint *)(param_1 + 0x2c + (uint)*(byte *)(puVar6 + 2) * 8);
                bVar20 = '\x05';
                goto LAB_10011e59;
              }
            }
            else {
              bVar20 = '\x02';
LAB_10011e59:
              FUN_1004c290(&DAT_100cf920,iVar10,iVar14,bVar20,uVar12,iVar2,iVar3,iVar4);
            }
            if ((puVar11[1] != 0) && (FUN_100368f0(&DAT_100b3300,puVar11[1]), DAT_100b3300 != '\0'))
            {
              FUN_10021ce0(iVar10,iStack_2c,DAT_100d5908,&DAT_100b3300,r,g,b);
            }
            iStack_30 = iStack_30 + 0x30;
            iVar14 = iVar14 + 0x30;
            iStack_2c = iStack_2c + 0x30;
          }
          if (((char)puVar11[0xb] != '\0') &&
             (puVar8 = FUN_100071c0(puVar6[0x32]), *(byte *)(puVar8 + 0x21) == uStack_10)) {
            iVar15 = puVar6[0x32];
            uVar7 = FUN_1000b6d0(iVar15,DAT_1018d174);
            if ((char)uVar7 == '\0') {
              if (DAT_100cf97c < 2) {
                bVar18 = iVar15 == 0x18;
              }
              else {
                bVar18 = false;
              }
            }
            else {
              bVar18 = true;
            }
            iVar15 = iVar2;
            iVar9 = iVar3;
            iVar5 = iVar4;
            if (bVar18) {
              iVar15 = 0xc3;
              iVar9 = 0x2d;
              iVar5 = 0x2d;
            }
            (*gEngfuncs.pfnSPR_Set)
                      (*(HSPRITE *)(&DAT_100d0ce4 + puVar6[0x32] * 4),iVar15,iVar9,iVar5);
            (*gEngfuncs.pfnSPR_DrawAdditive)(0,iVar10,iStack_30,(wrect_t *)0x0);
            FUN_1004c290(&DAT_100cf920,iVar10,iVar14,'\x05',
                         *(int *)(param_1 + 0x2c + (uint)*(byte *)(puVar6 + 2) * 8),iVar2,iVar3,
                         iVar4);
            if ((puVar11[1] != 0) && (FUN_100368f0(&DAT_100b3300,puVar11[1]), DAT_100b3300 != '\0'))
            {
              FUN_10021ce0(iVar10,iStack_2c,DAT_100d5908,&DAT_100b3300,r,g,b);
            }
            iStack_30 = iStack_30 + 0x30;
            iVar14 = iVar14 + 0x30;
            iStack_2c = iStack_2c + 0x30;
          }
        }
        else {
          if (uStack_10 != 1) goto LAB_10012013;
          if ((uVar12 & 0x10) == 0) {
            if ((uVar12 & 0x20) != 0) {
              uVar12 = 0xffffffff;
              pcVar16 = s_Stealth_Shoes_1009295c;
              do {
                pcVar17 = pcVar16;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                pcVar17 = pcVar16 + 1;
                cVar1 = *pcVar16;
                pcVar16 = pcVar17;
              } while (cVar1 != '\0');
              uVar12 = ~uVar12;
              pcVar16 = pcVar17 + -uVar12;
              pcVar17 = &DAT_100b3300;
              for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
                pcVar16 = pcVar16 + 4;
                pcVar17 = pcVar17 + 4;
              }
              goto LAB_10011d25;
            }
          }
          else {
            uVar12 = 0xffffffff;
            pcVar16 = &DAT_1009296c;
            do {
              pcVar17 = pcVar16;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar17 = pcVar16 + 1;
              cVar1 = *pcVar16;
              pcVar16 = pcVar17;
            } while (cVar1 != '\0');
            uVar12 = ~uVar12;
            pcVar16 = pcVar17 + -uVar12;
            pcVar17 = &DAT_100b3300;
            for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
              pcVar16 = pcVar16 + 4;
              pcVar17 = pcVar17 + 4;
            }
LAB_10011d25:
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar17 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              pcVar17 = pcVar17 + 1;
            }
          }
          FUN_10021ce0(8,iVar14,DAT_100d5908,&DAT_100b3300,r,g,b);
          iStack_30 = iStack_30 + 0x30;
          iVar14 = iVar14 + 0x30;
          iStack_2c = iStack_2c + 0x30;
        }
      }
LAB_10012013:
      puVar11 = puVar11 + 0xe;
      iStack_4 = iStack_4 + -1;
    } while (iStack_4 != 0);
    uStack_10 = uStack_10 + 1;
    if (5 < (int)uStack_10) {
      return;
    }
  } while( true );
}

/* 10012050  FUN_10012050  (1057 bytes)
 * undefined4 FUN_10012050(int param_1)
 */
uint __fastcall FUN_10012050(int param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 *puVar15;
  char *pcVar16;
  int local_1fc;
  char acStack_1f8 [64];
  char acStack_1b8 [128];
  int local_138 [14];
  char acStack_100 [128];
  char acStack_80 [128];
  
  if (*(int *)(param_1 + 0x42c) < 1) {
    FUN_1004b520(&DAT_100d43cc,s_Your_config_is_empty__10092a94,0xc3,0x2d,0x2d,0x14,0);
  }
  if ((1 < DAT_100cf97c) || (uVar3 = 30000, DAT_1018d170 != 0)) {
    uVar3 = DAT_100d43f0;
  }
  if ((int)uVar3 < *(int *)(param_1 + 0x42c)) {
    uVar3 = FUN_1004b520(&DAT_100d43cc,s_No_cash_left__10092a84,0xc3,0x2d,0x2d,0x14,0);
    return uVar3 & 0xffffff00;
  }
  if (0x51 < *(int *)(param_1 + 0x430)) {
    return uVar3 & 0xffffff00;
  }
  do {
    bVar2 = false;
    piVar10 = (int *)(param_1 + 0xb0);
    local_1fc = 0xf;
    do {
      if ((0 < *piVar10) && (0 < piVar10[0xe])) {
        if (((char)piVar10[-1] == '\0') && ((char)piVar10[0xd] == '\0')) {
          puVar4 = FUN_100071c0(*piVar10);
          if ((*(char *)(puVar4 + 2) == '\0') ||
             (puVar4 = FUN_100071c0(piVar10[0xe]), *(char *)(puVar4 + 2) == '\0')) {
            puVar4 = FUN_100071c0(*piVar10);
            if ((*(char *)(puVar4 + 2) == '\0') &&
               (puVar4 = FUN_100071c0(piVar10[0xe]), *(char *)(puVar4 + 2) == '\0')) {
              if (piVar10[0x10] < piVar10[2]) goto LAB_100121a5;
            }
            else {
              puVar4 = FUN_100071c0(*piVar10);
              if (*(char *)(puVar4 + 2) != '\0') {
LAB_100121a5:
                piVar11 = piVar10 + -1;
                piVar12 = local_138;
                for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *piVar12 = *piVar11;
                  piVar11 = piVar11 + 1;
                  piVar12 = piVar12 + 1;
                }
                bVar2 = true;
                piVar11 = piVar10 + 0xd;
                piVar12 = piVar10 + -1;
                for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *piVar12 = *piVar11;
                  piVar11 = piVar11 + 1;
                  piVar12 = piVar12 + 1;
                }
                piVar11 = local_138;
                piVar12 = piVar10 + 0xd;
                for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *piVar12 = *piVar11;
                  piVar11 = piVar11 + 1;
                  piVar12 = piVar12 + 1;
                }
              }
            }
          }
          else if (piVar10[0x10] < piVar10[2]) goto LAB_100121a5;
        }
        else if (piVar10[0x10] < piVar10[2]) goto LAB_100121a5;
      }
      piVar10 = piVar10 + 0xe;
      local_1fc = local_1fc + -1;
    } while (local_1fc != 0);
  } while (bVar2);
  (*gEngfuncs.pfnServerCmd)(s_rst_cfg_10092a7c);
  uVar3 = 0xffffffff;
  pcVar16 = &DAT_10092a74;
  do {
    pcVar14 = pcVar16;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar14 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar14;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar16 = pcVar14 + -uVar3;
  pcVar14 = acStack_1b8;
  for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar14 = pcVar14 + 4;
  }
  iVar6 = 0x10;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar14 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar16 = &DAT_10092a6c;
  do {
    pcVar14 = pcVar16;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar14 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar14;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar16 = pcVar14 + -uVar3;
  pcVar14 = acStack_80;
  for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar14 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar16 = &DAT_10092a64;
  do {
    pcVar14 = pcVar16;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar14 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar14;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar16 = pcVar14 + -uVar3;
  pcVar14 = acStack_100;
  for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar14 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar14 = pcVar14 + 1;
  }
  piVar10 = (int *)(param_1 + 0xb0);
  do {
    if (*piVar10 != 0) {
      if ((char)piVar10[-1] == '\0') {
        puVar4 = FUN_100071c0(*piVar10);
        if ((*(char *)(puVar4 + 0x37) == '\0') && ((char)piVar10[0xb] != '\0')) {
          FUN_1006ac7a(acStack_1f8,(byte_conflict *)s__i__i_10092a5c);
          uVar3 = 0xffffffff;
          pcVar16 = acStack_1f8;
          do {
            pcVar14 = pcVar16;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pcVar14 = pcVar16 + 1;
            cVar1 = *pcVar16;
            pcVar16 = pcVar14;
          } while (cVar1 != '\0');
          uVar3 = ~uVar3;
          iVar8 = -1;
          pcVar16 = acStack_1b8;
          do {
            pcVar13 = pcVar16;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar13 = pcVar16 + 1;
            cVar1 = *pcVar16;
            pcVar16 = pcVar13;
          } while (cVar1 != '\0');
          pcVar16 = pcVar14 + -uVar3;
          pcVar14 = pcVar13 + -1;
          for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar14 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar14 = pcVar14 + 1;
          }
          FUN_1006ac7a(acStack_1f8,(byte_conflict *)s__i__i_10092a5c);
        }
        else {
          FUN_1006ac7a(acStack_1f8,(byte_conflict *)s__i__i_10092a5c);
        }
        pcVar16 = acStack_1b8;
      }
      else {
        FUN_1006ac7a(acStack_1f8,&DAT_10091200);
        pcVar16 = acStack_100;
      }
      uVar3 = 0xffffffff;
      pcVar14 = acStack_1f8;
      do {
        pcVar13 = pcVar14;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar13 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar13;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar8 = -1;
      do {
        pcVar14 = pcVar16;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar14 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar14;
      } while (cVar1 != '\0');
      pcVar16 = pcVar13 + -uVar3;
      pcVar14 = pcVar14 + -1;
      for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar14 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
    piVar10 = piVar10 + 0xe;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar8 = 0;
  iVar6 = param_1 + 0x30;
  do {
    if (*(int *)(iVar6 + -4) != 0) {
      FUN_1006ac7a(acStack_1f8,(byte_conflict *)s__i__i_10092a5c);
      uVar3 = 0xffffffff;
      pcVar16 = acStack_1f8;
      do {
        pcVar14 = pcVar16;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar14 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar14;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar9 = -1;
      pcVar16 = acStack_80;
      do {
        pcVar13 = pcVar16;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar13 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar13;
      } while (cVar1 != '\0');
      pcVar16 = pcVar14 + -uVar3;
      pcVar14 = pcVar13 + -1;
      for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar14 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
    iVar8 = iVar8 + 1;
    iVar6 = iVar6 + 8;
    if (0xf < iVar8) {
      (*gEngfuncs.pfnServerCmd)(acStack_1b8);
      (*gEngfuncs.pfnServerCmd)(acStack_100);
      (*gEngfuncs.pfnServerCmd)(acStack_80);
      if (*(char *)(param_1 + 0x10) == '\0') {
        pcVar16 = s_Using_last_config__10092a48;
      }
      else {
        pcVar16 = s_Using_new_config__10092a34;
      }
      FUN_1004b520(&DAT_100d43cc,pcVar16,0,0,0,0x14,0);
      *(undefined1 *)(param_1 + 0x10) = 0;
      puVar4 = (undefined4 *)(param_1 + 0x2c);
      puVar15 = (undefined4 *)(param_1 + 0x434);
      for (iVar6 = 0x102; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar15 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar15 = puVar15 + 1;
      }
      uVar5 = FUN_10011160(param_1);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  } while( true );
}

/* 10012480  FUN_10012480  (31 bytes)
 * int FUN_10012480(int param_1)
 */
int __thiscall FUN_10012480(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this + 0xb0);
  do {
    if (*piVar2 == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0xe;
  } while (iVar1 < 0x10);
  return -1;
}

/* 100124a0  FUN_100124a0  (1073 bytes)
 * undefined4 FUN_100124a0(uint param_1, uint param_2, int param_3, char param_4)
 * called by: FUN_10012c20
 */
uint __thiscall FUN_100124a0(void *this,uint param_1,uint param_2,int param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  if (param_4 != '\0') {
    if ((1 < DAT_100cf97c) || (iVar8 = 30000, DAT_1018d170 != 0)) {
      iVar8 = DAT_100d43f0;
    }
    iVar2 = FUN_10012ad0(param_1,'\0',0,'\x01');
    puVar3 = (undefined4 *)(iVar2 + *(int *)((int)this + 0x42c));
    if (iVar8 < (int)puVar3) {
      return (uint)puVar3 & 0xffffff00;
    }
    goto LAB_100125bc;
  }
  uVar1 = FUN_1000b6d0(param_1,DAT_1018d174);
  if ((char)uVar1 != '\0') {
LAB_100124d7:
    return uVar1 & 0xffffff00;
  }
  if (DAT_100cf97c < 2) {
    if (param_1 == 0x18) goto LAB_100124d7;
    iVar8 = 30000;
    if (DAT_1018d170 != 0) goto LAB_100124ee;
  }
  else {
LAB_100124ee:
    iVar8 = DAT_100d43f0;
  }
  iVar2 = FUN_10012ad0(param_1,(byte_conflict)param_2,param_3,'\0');
  uVar1 = iVar2 + *(int *)((int)this + 0x42c);
  if (iVar8 < (int)uVar1) {
    return uVar1 & 0xffffff00;
  }
  if ((char)param_3 == '\0') {
    iVar8 = 1;
  }
  else {
    puVar3 = FUN_100071c0(param_1);
    if (*(char *)(puVar3 + 0x37) == '\0') {
      iVar8 = 2;
    }
    else {
      puVar3 = FUN_100071c0(param_1);
      iVar8 = puVar3[9];
    }
  }
  puVar3 = FUN_100071c0(param_1);
  if (0x51 < (int)((uint)*(byte *)(puVar3 + 0x34) * iVar8 + *(int *)((int)this + 0x430))) {
    return (uint)puVar3 & 0xffffff00;
  }
LAB_100125bc:
  uVar1 = (uint)puVar3 & 0xffffff00;
  iVar8 = 0;
  pcVar6 = (char *)((int)this + 0xac);
  do {
    if ((char)uVar1 != '\0') break;
    if (*(uint *)(pcVar6 + 4) == param_1) {
      if (param_4 == '\0') {
        puVar3 = FUN_100071c0(param_1);
        if (*(char *)(puVar3 + 0x37) != '\0') {
          uVar1 = *(uint *)((int)this + (iVar8 + 4) * 0x38);
          piVar4 = (int *)((int)this + (iVar8 + 4) * 0x38);
          puVar3 = FUN_100071c0(param_1);
          if ((int)uVar1 < (int)puVar3[9]) {
            if ((char)param_3 == '\0') {
              *piVar4 = uVar1 + 1;
              piVar4 = (int *)((int)this + iVar8 * 0x38 + 0xb8);
              puVar3 = FUN_100071c0(param_1);
              *piVar4 = *piVar4 + puVar3[0x36];
              puVar3 = FUN_100071c0(param_1);
              *(int *)((int)this + 0x42c) = *(int *)((int)this + 0x42c) + puVar3[0x36];
              puVar3 = FUN_100071c0(param_1);
              iVar8 = *(int *)((int)this + 0x430) + (uint)*(byte *)(puVar3 + 0x34);
            }
            else {
              iVar2 = *piVar4;
              puVar3 = FUN_100071c0(param_1);
              iVar7 = puVar3[9] - iVar2;
              *piVar4 = iVar2 + iVar7;
              piVar4 = (int *)((int)this + iVar8 * 0x38 + 0xb8);
              puVar3 = FUN_100071c0(param_1);
              *piVar4 = *piVar4 + puVar3[0x36] * iVar7;
              puVar3 = FUN_100071c0(param_1);
              *(int *)((int)this + 0x42c) = *(int *)((int)this + 0x42c) + puVar3[0x36] * iVar7;
              puVar3 = FUN_100071c0(param_1);
              iVar8 = *(int *)((int)this + 0x430) + (uint)*(byte *)(puVar3 + 0x34) * iVar7;
            }
            *(int *)((int)this + 0x430) = iVar8;
            FUN_100129f0(this);
            *(undefined1 *)((int)this + 0x10) = 1;
            uVar5 = FUN_10011160((int)this);
            return CONCAT31((int3)((uint)uVar5 >> 8),1);
          }
          goto LAB_1001271b;
        }
        puVar3 = FUN_100071c0(param_1);
        if ((puVar3[0x32] != -1) && (pcVar6[0x30] == '\0')) {
          param_2 = param_2 | *(uint *)(pcVar6 + 8);
          param_3 = CONCAT31(param_3._1_3_,1);
        }
        uVar5 = FUN_100128e0(this,iVar8);
        uVar1 = CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      else if (*pcVar6 != '\0') {
LAB_1001271b:
        return uVar1 & 0xffffff00;
      }
    }
    iVar8 = iVar8 + 1;
    pcVar6 = pcVar6 + 0x38;
  } while (iVar8 < 0x10);
  iVar8 = 0;
  piVar4 = (int *)((int)this + 0xb0);
  do {
    if (*piVar4 == 0) break;
    iVar8 = iVar8 + 1;
    piVar4 = piVar4 + 0xe;
  } while (iVar8 < 0x10);
  pcVar6 = (char *)((int)this + iVar8 * 0x38 + 0xac);
  puVar3 = FUN_100071c0(param_1);
  if (*(char *)(puVar3 + 0x37) == '\0') {
    pcVar6[0x30] = (char)param_3;
  }
  *pcVar6 = param_4;
  *(uint *)(pcVar6 + 4) = param_1;
  *(uint *)(pcVar6 + 8) = ~-(uint)(param_4 != '\0') & param_2;
  iVar2 = FUN_10012ad0(param_1,(byte_conflict)param_2,param_3,param_4);
  *(int *)(pcVar6 + 0xc) = iVar2;
  if ((param_4 == '\0') && (puVar3 = FUN_100071c0(param_1), *(char *)(puVar3 + 0x37) != '\0')) {
    if ((char)param_3 == '\0') {
      *(undefined4 *)((int)this + (iVar8 + 4) * 0x38) = 1;
    }
    else {
      puVar3 = FUN_100071c0(param_1);
      *(undefined4 *)((int)this + (iVar8 + 4) * 0x38) = puVar3[9];
    }
  }
  *(int *)((int)this + 0x42c) = *(int *)((int)this + 0x42c) + *(int *)(pcVar6 + 0xc);
  if (param_4 == '\0') {
    if ((char)param_3 == '\0') {
      iVar8 = 1;
    }
    else {
      puVar3 = FUN_100071c0(param_1);
      if (*(char *)(puVar3 + 0x37) == '\0') {
        iVar8 = 2;
      }
      else {
        puVar3 = FUN_100071c0(param_1);
        iVar8 = puVar3[9];
      }
    }
    puVar3 = FUN_100071c0(param_1);
    *(uint *)((int)this + 0x430) =
         *(int *)((int)this + 0x430) + (uint)*(byte *)(puVar3 + 0x34) * iVar8;
  }
  FUN_100129f0(this);
  *(undefined1 *)((int)this + 0x10) = 1;
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
  uVar5 = FUN_10011160((int)this);
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}

/* 100128e0  FUN_100128e0  (270 bytes)
 * undefined4 FUN_100128e0(int param_1)
 * called by: FUN_100124a0
 */
undefined4 __thiscall FUN_100128e0(void *this,int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_38 [14];
  
  *(int *)((int)this + 0x42c) =
       *(int *)((int)this + 0x42c) - *(int *)((int)this + param_1 * 0x38 + 0xb8);
  if (*(char *)((int)this + param_1 * 0x38 + 0xac) == '\0') {
    iVar4 = *(int *)((int)this + param_1 * 0x38 + 0xb0);
    if (*(int *)((int)this + (param_1 + 4) * 0x38) == 0) {
      puVar2 = FUN_100071c0(iVar4);
      iVar4 = (uint)*(byte *)(puVar2 + 0x34) *
              ((*(char *)((int)this + param_1 * 0x38 + 0xdc) != '\0') + 1);
    }
    else {
      puVar2 = FUN_100071c0(iVar4);
      iVar4 = (uint)*(byte *)(puVar2 + 0x34) * *(int *)((int)this + (param_1 + 4) * 0x38);
    }
    *(int *)((int)this + 0x430) = *(int *)((int)this + 0x430) - iVar4;
  }
  puVar2 = (undefined4 *)((int)this + param_1 * 0x38 + 0xac);
  for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  do {
    bVar1 = false;
    puVar2 = (undefined4 *)((int)this + 0xac);
    iVar4 = 0xf;
    do {
      if (((int)puVar2[1] < 1) && (0 < (int)puVar2[0xf])) {
        puVar6 = puVar2;
        puVar7 = local_38;
        for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar6 = puVar2 + 0xe;
        puVar7 = puVar2;
        for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar6 = local_38;
        puVar7 = puVar2 + 0xe;
        for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        bVar1 = true;
      }
      puVar2 = puVar2 + 0xe;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  } while (bVar1);
  *(undefined1 *)((int)this + 0x10) = 1;
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + -1;
  uVar3 = FUN_10011160((int)this);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

/* 100129f0  FUN_100129f0  (220 bytes)
 * undefined FUN_100129f0(void * param_1)
 * called by: FUN_10011230, FUN_100124a0
 */
void __fastcall FUN_100129f0(void *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int local_8;
  
  if ((1 < DAT_100cf97c) || (iVar6 = 30000, DAT_1018d170 != 0)) {
    iVar6 = DAT_100d43f0;
  }
  iVar6 = iVar6 - *(int *)((int)param_1 + 0x42c);
  puVar2 = (undefined4 *)((int)param_1 + 0x2c);
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar4 = iVar6;
  if (0 < iVar6) {
    do {
      bVar1 = true;
      piVar7 = (int *)((int)param_1 + 0xb0);
      local_8 = 0x10;
      do {
        if ((*piVar7 != 0) && ((char)piVar7[-1] == '\0')) {
          puVar2 = FUN_100071c0(*piVar7);
          uVar5 = (uint)*(byte *)(puVar2 + 2);
          puVar2 = FUN_100071f0(uVar5);
          if ((-1 < iVar4 - puVar2[1]) && (uVar3 = FUN_10012ba0(param_1,uVar5), (char)uVar3 != '\0')
             ) {
            puVar2 = FUN_100071f0(uVar5);
            iVar4 = iVar4 - puVar2[1];
            bVar1 = false;
          }
        }
        piVar7 = piVar7 + 0xe;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    } while (!bVar1);
    *(uint *)((int)param_1 + 0x14) = iVar6 - iVar4 & (iVar6 - iVar4 < 1) - 1;
  }
  return;
}

/* 10012ad0  FUN_10012ad0  (199 bytes)
 * int FUN_10012ad0(uint param_1, byte.conflict param_2, int param_3, char param_4)
 * called by: FUN_10010bd0, FUN_100124a0, FUN_10037ba0, FUN_10038f60
 */
int FUN_10012ad0(uint param_1,byte_conflict param_2,int param_3,char param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_4 == '\0') {
    puVar1 = FUN_100071c0(param_1);
    if (*(char *)(puVar1 + 0x37) != '\0') {
      if ((char)param_3 == '\0') {
        iVar2 = 1;
      }
      else {
        puVar1 = FUN_100071c0(param_1);
        iVar2 = puVar1[9];
      }
      puVar1 = FUN_100071c0(param_1);
      return puVar1[0x36] * iVar2;
    }
    puVar1 = FUN_100071c0(param_1);
    iVar2 = puVar1[0x36] * (((char)param_3 != '\0') + 1);
    if ((param_2 & 1) != 0) {
      iVar2 = iVar2 + 900;
    }
    if ((param_2 & 2) != 0) {
      iVar2 = iVar2 + 800;
    }
    if ((param_2 & 4) != 0) {
      iVar2 = iVar2 + 500;
    }
    if ((param_2 & 8) != 0) {
      return iVar2 + 0x708;
    }
  }
  else {
    if ((param_1 & 0x10) != 0) {
      return 0x76c;
    }
    iVar2 = 700;
    if ((param_1 & 0x20) == 0) {
      iVar2 = param_3;
    }
  }
  return iVar2;
}

/* 10012ba0  FUN_10012ba0  (115 bytes)
 * undefined4 FUN_10012ba0(int param_1)
 * called by: FUN_100129f0
 */
undefined4 __thiscall FUN_10012ba0(void *this,int param_1)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  
  if ((-1 < param_1) && (param_1 < 0x10)) {
    in_EAX = FUN_100071f0(param_1);
    if (*(int *)((int)this + param_1 * 8 + 0x2c) < (int)in_EAX[3]) {
      puVar1 = FUN_100071f0(param_1);
      *(int *)((int)this + param_1 * 8 + 0x2c) =
           *(int *)((int)this + param_1 * 8 + 0x2c) + puVar1[4];
      *(int *)((int)this + param_1 * 8 + 0x30) = *(int *)((int)this + param_1 * 8 + 0x30) + 1;
      puVar1 = FUN_100071f0(param_1);
      if ((int)puVar1[3] < *(int *)((int)this + param_1 * 8 + 0x2c)) {
        puVar1 = FUN_100071f0(param_1);
        *(undefined4 *)((int)this + param_1 * 8 + 0x2c) = puVar1[3];
      }
      return CONCAT31((int3)((uint)puVar1 >> 8),1);
    }
  }
  return (uint)in_EAX & 0xffffff00;
}

/* 10012c20  FUN_10012c20  (972 bytes)
 * undefined FUN_10012c20(float param_1)
 * called by: FUN_10011230
 */
void __thiscall FUN_10012c20(void *this,float param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  
  puVar2 = (undefined4 *)((int)this + 0x2c);
  for (iVar1 = 0x102; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)((int)this + 0x10) = 1;
  iVar1 = (*gEngfuncs.pfnRandomLong)(0,5);
  if (iVar1 == 2) {
    cVar7 = '\0';
    iVar1 = (*gEngfuncs.pfnRandomLong)(0,2);
    iVar1 = CONCAT31((int3)((uint)extraout_ECX >> 8),iVar1 == 0);
    uVar5 = 0x23;
  }
  else {
    cVar7 = '\0';
    if (iVar1 == 3) {
      iVar1 = 0;
      uVar5 = 0x22;
    }
    else {
      cVar7 = '\0';
      iVar1 = (*gEngfuncs.pfnRandomLong)(0,2);
      iVar1 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
      uVar5 = 0x19;
    }
  }
  FUN_100124a0(this,uVar5,0,iVar1,cVar7);
  if (param_1 <= 0.0) {
    fVar4 = (float10)(*gEngfuncs.pfnRandomFloat)(0.0,1.0);
    param_1 = (float)fVar4;
  }
  if ((0.1 < param_1) && (param_1 < 0.9)) {
    iVar1 = (*gEngfuncs.pfnRandomLong)(1,9);
    switch(iVar1) {
    case 1:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(1);
      uVar6 = 1;
      break;
    case 2:
      cVar7 = '\0';
      iVar1 = (*gEngfuncs.pfnRandomLong)(0,1);
      iVar1 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
      uVar5 = FUN_10039810(9);
      uVar6 = 9;
      break;
    case 3:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0xc);
      uVar6 = 0xc;
      break;
    case 4:
      cVar7 = '\0';
      iVar1 = (*gEngfuncs.pfnRandomLong)(0,1);
      iVar1 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),iVar1 != 0);
      uVar5 = FUN_10039810(0xe);
      uVar6 = 0xe;
      break;
    case 5:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(8);
      uVar6 = 8;
      break;
    case 6:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x15);
      uVar6 = 0x15;
      break;
    case 7:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x16);
      uVar6 = 0x16;
      break;
    case 8:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x1c);
      uVar6 = 0x1c;
      break;
    case 9:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x1f);
      uVar6 = 0x1f;
      break;
    default:
      goto switchD_10012cfe_default;
    }
    FUN_100124a0(this,uVar6,uVar5,iVar1,cVar7);
  }
switchD_10012cfe_default:
  if ((param_1 <= 0.3) || (0.7 <= param_1)) {
    if (param_1 < 0.7) goto switchD_10012e21_default;
    iVar1 = (*gEngfuncs.pfnRandomLong)(1,0xb);
    switch(iVar1) {
    case 1:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(4);
      uVar6 = 4;
      break;
    case 2:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0xb);
      uVar6 = 0xb;
      break;
    case 3:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x14);
      uVar6 = 0x14;
      break;
    case 4:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0xd);
      uVar6 = 0xd;
      break;
    case 5:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(5);
      uVar6 = 5;
      break;
    case 6:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0xf);
      uVar6 = 0xf;
      break;
    case 7:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x1a);
      uVar6 = 0x1a;
      break;
    case 8:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x1b);
      uVar6 = 0x1b;
      break;
    case 9:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x21);
      uVar6 = 0x21;
      break;
    case 10:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x12);
      uVar6 = 0x12;
      break;
    case 0xb:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x20);
      uVar6 = 0x20;
      break;
    default:
      goto switchD_10012e21_default;
    }
  }
  else {
    iVar1 = (*gEngfuncs.pfnRandomLong)(1,6);
    switch(iVar1) {
    case 1:
      cVar7 = '\0';
      iVar1 = (*gEngfuncs.pfnRandomLong)(0,1);
      iVar1 = CONCAT31((int3)((ulonglong)iVar1 >> 0x28),(int)iVar1 != 0);
      uVar5 = FUN_10039810(3);
      uVar6 = 3;
      break;
    case 2:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(6);
      uVar6 = 6;
      break;
    case 3:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(7);
      uVar6 = 7;
      break;
    case 4:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x11);
      uVar6 = 0x11;
      break;
    case 5:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x13);
      uVar6 = 0x13;
      break;
    case 6:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x17);
      uVar6 = 0x17;
      break;
    default:
      goto switchD_10012e21_default;
    }
  }
  FUN_100124a0(this,uVar6,uVar5,iVar1,cVar7);
switchD_10012e21_default:
  puVar2 = (undefined4 *)((int)this + 0x2c);
  puVar3 = (undefined4 *)((int)this + 0x434);
  for (iVar1 = 0x102; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_10011160((int)this);
  return;
}

/* 100158c0  FUN_100158c0  (201 bytes)
 * Button * FUN_100158c0(undefined4 param_1, int param_2, int param_3, int param_4, int param_5)
 * called by: vgui::ScrollBar2::ScrollBar2
 */
Button * __thiscall
FUN_100158c0(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  Image *pIVar2;
  Color local_c [4];
  undefined4 uStack_8;
  
  vgui::Button::Button(this,s_,param_2,param_3,param_4,param_5);
  iVar1 = vgui::Color::Color(local_c,0x3c,0x3c,0x3c,0);
  vgui::LineBorder::LineBorder
            ((LineBorder *)((int)this + 0xf0),&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),
             *(undefined4 *)(iVar1 + 8));
  *(undefined ***)this = &PTR_setPos_1007be7c;
  pIVar2 = (Image *)FUN_1005b8d0(uStack_8);
  if (pIVar2 != (Image *)0x0) {
    iVar1 = vgui::Color::Color((Color *)&stack0xffffffe8,0x8c,0x8c,0x8c,0);
    (**(code **)(*(int *)pIVar2 + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
    vgui::Label::setImage(this,pIVar2);
  }
  vgui::Panel::setBorder(this,(Border *)((int)this + 0xf0));
  return this;
}

/* 100171a0  FUN_100171a0  (22 bytes)
 * char FUN_100171a0(int param_1)
 * called by: FUN_10017470, FUN_100174c0
 */
char __cdecl FUN_100171a0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = '\0';
  iVar2 = 0;
  do {
    cVar1 = cVar1 + *(char *)(iVar2 + param_1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return cVar1;
}

/* 100171c0  FUN_100171c0  (12 bytes)
 * int FUN_100171c0(int param_1)
 * called by: FUN_100176b0
 */
int __fastcall FUN_100171c0(int param_1)

{
  FUN_10017450(param_1);
  return param_1;
}

/* 100171e0  FUN_100171e0  (211 bytes)
 * undefined4 FUN_100171e0(LPVOID param_1)
 */
undefined4 __fastcall FUN_100171e0(LPVOID param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_214;
  char local_210 [16];
  CHAR local_200 [512];
  
  FUN_100172c0(param_1);
  FUN_1006b78e(local_200,0x200,(byte_conflict *)s__s__s_10092b2c);
  pFVar1 = (FILE *)FUN_1006b77b(local_200,&DAT_10092b28);
  if (pFVar1 == (FILE *)0x0) {
    return 1;
  }
  FUN_1006b633((char *)&local_214,1,4,(int *)pFVar1);
  if (local_214 == 1) {
    FUN_1006b57a((int *)pFVar1,0,2);
    iVar2 = FUN_1006b3f7((char *)pFVar1);
    FUN_1006b57a((int *)pFVar1,4,0);
    for (uVar4 = iVar2 - 4U >> 4; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_1006b633(local_210,1,0x10,(int *)pFVar1);
      FUN_100174c0(param_1,(undefined4 *)local_210);
    }
  }
  uVar3 = FUN_1006b37a(pFVar1);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

/* 100172c0  FUN_100172c0  (56 bytes)
 * undefined FUN_100172c0(LPVOID param_1)
 * called by: FUN_100171e0
 */
void __fastcall FUN_100172c0(LPVOID param_1)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  int iVar3;
  LPVOID pvVar4;
  
  iVar3 = 0x100;
  pvVar4 = param_1;
  do {
    pvVar2 = *(LPVOID *)((int)pvVar4 + 0x14);
    while (pvVar2 != pvVar4) {
      pvVar1 = *(LPVOID *)((int)pvVar2 + 0x14);
      FUN_1006ad4c(pvVar2);
      pvVar2 = pvVar1;
    }
    pvVar4 = (LPVOID)((int)pvVar4 + 0x18);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_10017450((int)param_1);
  return;
}

/* 10017300  FUN_10017300  (157 bytes)
 * undefined FUN_10017300(char * param_1)
 * called by: FUN_100177e0
 */
void __fastcall FUN_10017300(char *param_1)

{
  char *pcVar1;
  FILE *pFVar2;
  int iVar3;
  undefined4 local_204;
  CHAR local_200 [512];
  
  FUN_1006b78e(local_200,0x200,(byte_conflict *)s__s__s_10092b2c);
  pFVar2 = (FILE *)FUN_1006b77b(local_200,&DAT_10092b34);
  if (pFVar2 != (FILE *)0x0) {
    local_204 = 1;
    FUN_1006b7df((char *)&local_204,1,4,(int *)pFVar2);
    iVar3 = 0x100;
    do {
      for (pcVar1 = *(char **)(param_1 + 0x14); pcVar1 != param_1;
          pcVar1 = *(char **)(pcVar1 + 0x14)) {
        FUN_1006b7df(pcVar1,1,0x10,(int *)pFVar2);
      }
      param_1 = param_1 + 0x18;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    FUN_1006b37a(pFVar2);
  }
  return;
}

/* 100173a0  FUN_100173a0  (19 bytes)
 * bool FUN_100173a0(int * param_1)
 * called by: FUN_100173c0, FUN_10018360, FUN_100185f0, FUN_10018c80, FUN_10018cf0
 */
bool __thiscall FUN_100173a0(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_10017470(this,param_1);
  return piVar1 != (int *)0x0;
}

/* 100173c0  FUN_100173c0  (87 bytes)
 * undefined FUN_100173c0(int * param_1, char param_2)
 * called by: FUN_10018cf0
 */
void __thiscall FUN_100173c0(void *this,int *param_1,char param_2)

{
  bool bVar1;
  int *piVar2;
  
  if (param_2 == '\0') {
    piVar2 = FUN_10017470(this,param_1);
    if (piVar2 != (int *)0x0) {
      *(int *)(piVar2[4] + 0x14) = piVar2[5];
      *(int *)(piVar2[5] + 0x10) = piVar2[4];
      FUN_1006ad4c(piVar2);
    }
  }
  else {
    bVar1 = FUN_100173a0(this,param_1);
    if (!bVar1) {
      FUN_100174c0(this,param_1);
      return;
    }
  }
  return;
}

/* 10017420  FUN_10017420  (48 bytes)
 * undefined FUN_10017420(undefined * param_1)
 */
void __thiscall FUN_10017420(void *this,undefined *param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = 0x100;
  do {
    for (pvVar1 = *(void **)((int)this + 0x14); pvVar1 != this;
        pvVar1 = *(void **)((int)pvVar1 + 0x14)) {
      (*(code *)param_1)(pvVar1);
    }
    this = (void *)((int)this + 0x18);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

/* 10017450  FUN_10017450  (18 bytes)
 * undefined FUN_10017450(int param_1)
 * called by: FUN_100171c0, FUN_100172c0
 */
void __fastcall FUN_10017450(int param_1)

{
  int iVar1;
  
  iVar1 = 0x100;
  do {
    *(int *)(param_1 + 0x10) = param_1;
    *(int *)(param_1 + 0x14) = param_1;
    param_1 = param_1 + 0x18;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

/* 10017470  FUN_10017470  (69 bytes)
 * int * FUN_10017470(int * param_1)
 * called by: FUN_100173a0, FUN_100173c0
 */
int * __thiscall FUN_10017470(void *this,int *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  bVar2 = FUN_100171a0((int)param_1);
  piVar1 = *(int **)((int)this + (uint)bVar2 * 0x18 + 0x14);
  do {
    if (piVar1 == (int *)((int)this + (uint)bVar2 * 0x18)) {
      return (int *)0x0;
    }
    iVar3 = 4;
    bVar6 = true;
    piVar4 = param_1;
    piVar5 = piVar1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      return piVar1;
    }
    piVar1 = (int *)piVar1[5];
  } while( true );
}

/* 100174c0  FUN_100174c0  (100 bytes)
 * undefined4 * FUN_100174c0(undefined4 * param_1)
 * called by: FUN_100171e0, FUN_100173c0
 */
undefined4 * __thiscall FUN_100174c0(void *this,undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 *puVar4;
  
  puVar4 = operator_new(0x18);
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  bVar3 = FUN_100171a0((int)param_1);
  *puVar4 = *param_1;
  puVar4[1] = param_1[1];
  pvVar1 = (void *)((int)this + (uint)bVar3 * 0x18);
  puVar4[2] = param_1[2];
  uVar2 = param_1[3];
  puVar4[5] = pvVar1;
  puVar4[3] = uVar2;
  puVar4[4] = *(undefined4 *)((int)pvVar1 + 0x10);
  *(undefined4 **)((int)pvVar1 + 0x10) = puVar4;
  *(undefined4 **)(puVar4[4] + 0x14) = puVar4;
  return puVar4;
}

/* 10017540  FUN_10017540  (10 bytes)
 * undefined FUN_10017540(void)
 */
void FUN_10017540(void)

{
  FUN_100176b0((undefined4 *)&DAT_100b3320);
  return;
}

/* 10017550  FUN_10017550  (12 bytes)
 * undefined FUN_10017550(void)
 */
void FUN_10017550(void)

{
  FUN_1006af63(0x10017560);
  return;
}

/* 10017570  FUN_10017570  (6 bytes)
 * undefined * FUN_10017570(void)
 * called by: CL_CreateMove, FUN_10020170, FUN_100206c0, FUN_1002ed00, FUN_1005db70, FUN_1005e870, FUN_10063760, FUN_10064790, HUD_CreateEntities, HUD_Frame, HUD_VoiceStatus, IN_MouseEvent
 */
undefined * FUN_10017570(void)

{
  return &DAT_100b3320;
}

/* 100176b0  FUN_100176b0  (261 bytes)
 * undefined4 * FUN_100176b0(undefined4 * param_1)
 * called by: FUN_10017540
 */
undefined4 * __fastcall FUN_100176b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10077818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1007c608;
  param_1[5] = &PTR_LAB_1007c5dc;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_4 = 0;
  param_1[0xc] = 0;
  puVar2 = param_1 + 0x2e5;
  iVar1 = 0x20;
  do {
    FUN_100025e0(puVar2 + -0x1d6,0x1c,0x40,&LAB_10017e90);
    FUN_100025e0(puVar2,0xc,4,&LAB_10017e90);
    puVar2 = puVar2 + 0x2ee;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_100171c0((int)(param_1 + 0x5dfe));
  *param_1 = &PTR_FUN_1007c5bc;
  param_1[5] = &PTR_LAB_1007c590;
  *(undefined1 *)(param_1 + 0x63fe) = 0;
  param_1[6] = 0;
  param_1[0x5df9] = 0;
  param_1[0x5dd0] = 0;
  param_1[0x5dd1] = 0;
  param_1[0x5dd2] = 0;
  param_1[0x5dd3] = 0;
  param_1[0x5dd4] = 0;
  param_1[0x5dd5] = 0;
  param_1[0x5dfa] = 0;
  param_1[0x5dfb] = 0;
  *(undefined1 *)((int)param_1 + 0x177f5) = 0;
  *(undefined1 *)(param_1 + 0x5dfd) = 0;
  puVar2 = param_1 + 0x5dd6;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[7] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

/* 100177c0  FUN_100177c0  (30 bytes)
 * undefined4 * FUN_100177c0(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_100177c0(void *this,byte_conflict param_1)

{
  FUN_100177e0(this);
  if ((param_1 & 1) != 0) {
    FUN_1006ad4c(this);
  }
  return this;
}

/* 100177e0  FUN_100177e0  (219 bytes)
 * undefined FUN_100177e0(undefined4 * param_1)
 * called by: FUN_100177c0
 */
void __fastcall FUN_100177e0(undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10077846;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_1007c5bc;
  param_1[5] = &PTR_LAB_1007c590;
  local_4 = 1;
  DAT_100cc394 = 0;
  puVar3 = param_1 + 0x6401;
  iVar2 = 7;
  do {
    FUN_1006ad4c((LPVOID)puVar3[-2]);
    puVar3[-2] = 0;
    FUN_1006ad4c((LPVOID)*puVar3);
    *puVar3 = 0;
    FUN_1006ad4c((LPVOID)puVar3[-1]);
    puVar3[-1] = 0;
    puVar3 = puVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_1006ad4c((LPVOID)param_1[0x5dfc]);
  param_1[0x5dfc] = 0;
  FUN_10018b90((int)param_1);
  pcVar1 = (*gEngfuncs.pfnGetGameDirectory)();
  if ((pcVar1 != (char *)0x0) && (*(char *)(param_1 + 0x63fe) != '\0')) {
    (*gEngfuncs.pfnGetGameDirectory)();
    FUN_10017300((char *)(param_1 + 0x5dfe));
  }
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_100172c0(param_1 + 0x5dfe);
  *param_1 = &PTR_LAB_1007c608;
  ExceptionList = pvStack_c;
  return;
}

/* 10017af0  FUN_10017af0  (924 bytes)
 * undefined4 FUN_10017af0(char param_1)
 */
undefined4 __cdecl FUN_10017af0(char param_1)

{
  int iVar1;
  byte_conflict *data;
  HSPRITE HVar2;
  int extraout_ECX;
  float10 fVar3;
  
  FUN_1006b970();
  FUN_10018b90(extraout_ECX);
  iVar1 = FUN_1005b8d0(s_gfx_vgui_icntlk_pl_tga_10092d18);
  *(int *)(extraout_ECX + 0x177e8) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0x00000000,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x177e8) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  iVar1 = FUN_1005b8d0(s_gfx_vgui_icntlk_sv_tga_10092d00);
  *(int *)(extraout_ECX + 0x177ec) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0x00000000,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x177ec) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  (**(code **)(**(int **)(extraout_ECX + 0x177f0) + 0x1fc))(*(undefined4 *)(extraout_ECX + 0x177e8))
  ;
  (**(code **)(**(int **)(extraout_ECX + 0x177f0) + 0x24))(0);
  iVar1 = FUN_1005ba50(s_gfx_vgui_speaker4_tga_10092ce8);
  *(int *)(extraout_ECX + 0x177e4) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0xfffffff8,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x177e4) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  iVar1 = FUN_1005ba50(s_gfx_vgui_640_speaker1_tga_10092ccc);
  *(int *)(extraout_ECX + 0x17740) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0xfffffff8,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x17740) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  iVar1 = FUN_1005ba50(s_gfx_vgui_640_speaker2_tga_10092cb0);
  *(int *)(extraout_ECX + 0x17744) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0xfffffff8,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x17744) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  iVar1 = FUN_1005ba50(s_gfx_vgui_640_speaker3_tga_10092c94);
  *(int *)(extraout_ECX + 0x17748) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0xfffffff8,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x17748) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  iVar1 = FUN_1005ba50(s_gfx_vgui_640_speaker4_tga_10092c78);
  *(int *)(extraout_ECX + 0x1774c) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0xfffffff8,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x1774c) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  iVar1 = FUN_1005b8d0(s_gfx_vgui_icntlk_squelch_tga_10092c5c);
  *(int *)(extraout_ECX + 0x17750) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0xfffffff8,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x17750) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  iVar1 = FUN_1005b8d0(s_gfx_vgui_640_voiceblocked_tga_10092c3c);
  *(int *)(extraout_ECX + 0x17754) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0xfffffff8,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x17754) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  *(undefined4 *)(extraout_ECX + 0x177e0) = 0x42340000;
  data = (*gEngfuncs.COM_LoadFile)(s_scripts_voicemodel_txt_10092c24,5,(int *)0x0);
  if (data != (byte_conflict *)0x0) {
    (*gEngfuncs.COM_ParseFile)((char *)data,&param_1);
    if (('/' < param_1) && (param_1 < ':')) {
      fVar3 = FUN_1006b918(&param_1,(byte_conflict *)&param_1);
      *(float *)(extraout_ECX + 0x177e0) = (float)fVar3;
    }
    (*gEngfuncs.COM_FreeFile)(data);
  }
  HVar2 = (*gEngfuncs.pfnSPR_Load)(s_sprites_voiceicon_spr_10092c0c);
  *(HSPRITE *)(extraout_ECX + 0x177dc) = HVar2;
  return 1;
}

/* 10017ea0  FUN_10017ea0  (140 bytes)
 * undefined FUN_10017ea0(double param_1)
 * called by: HUD_Frame
 */
void __thiscall FUN_10017ea0(void *this,double param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  float10 extraout_ST0;
  
  (*gEngfuncs.GetClientTime)();
  if ((float10)1.0 < extraout_ST0 - (float10)*(float *)((int)this + 0x18)) {
    FUN_10018360(this,'\0');
  }
  *(double *)((int)this + 0x17738) = param_1 + *(double *)((int)this + 0x17738);
  cVar1 = (**(code **)(**(int **)((int)this + 0x17734) + 0x10))();
  puVar2 = (undefined4 *)((int)this + 0x18ffc);
  iVar3 = 7;
  if (cVar1 == '\0') {
    do {
      (**(code **)(*(int *)*puVar2 + 0x24))(0);
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  else {
    do {
      (**(code **)(*(int *)*puVar2 + 0x24))(CONCAT31((int3)((uint)puVar2[3] >> 8),puVar2[3] != -1));
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  do {
    FUN_100185f0(this,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  return;
}

/* 10017f30  FUN_10017f30  (396 bytes)
 * undefined FUN_10017f30(int param_1)
 * called by: HUD_CreateEntities
 */
void __fastcall FUN_10017f30(int param_1)

{
  cl_entity_s *pcVar1;
  model_s *pmVar2;
  int iVar3;
  cl_entity_s *pcVar4;
  cl_entity_s *ent;
  int in_stack_00000008;
  cl_entity_s *in_stack_0000000c;
  int iStack_8;
  
  if (*(int *)(param_1 + 0x177dc) != 0) {
    (*gEngfuncs.GetLocalPlayer)();
    iStack_8 = 0;
    ent = (cl_entity_s *)(param_1 + 0x34);
    do {
      if (((((*(uint *)(param_1 + 0x24 + (iStack_8 >> 5) * 4) & 1 << ((byte)iStack_8 & 0x1f)) != 0)
           && (pcVar1 = (*gEngfuncs.GetEntityByIndex)(iStack_8 + 1), pcVar1 != (cl_entity_s *)0x0))
          && (*(int *)(param_1 + 700) <= (pcVar1->curstate).messagenum)) &&
         ((((pcVar1->curstate).effects & 0x80) == 0 &&
          ((pcVar1 != (cl_entity_s *)param_1 || (DAT_100df390 != 0)))))) {
        pcVar4 = ent;
        for (iVar3 = 0x2ee; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar4->index = 0;
          pcVar4 = (cl_entity_s *)&pcVar4->player;
        }
        (ent->curstate).rendermode = 5;
        (ent->curstate).renderamt = 0xff;
        (ent->baseline).renderamt = 0xff;
        (ent->curstate).renderfx = 0xe;
        (ent->curstate).framerate = 1.0;
        (ent->curstate).frame = 0.0;
        pmVar2 = (*gEngfuncs.GetSpritePointer)(*(HSPRITE *)(iStack_8 + 0x177dc));
        ent->model = pmVar2;
        ent->angles[2] = 0.0;
        ent->angles[1] = 0.0;
        ent->angles[0] = 0.0;
        (ent->curstate).scale = 0.5;
        ent->origin[1] = 0.0;
        ent->origin[0] = 0.0;
        ent->origin[2] = 45.0;
        ent->origin[0] = pcVar1->origin[0] + ent->origin[0];
        ent->origin[1] = pcVar1->origin[1] + ent->origin[1];
        ent->origin[2] = pcVar1->origin[2] + ent->origin[2];
        (*gEngfuncs.CL_CreateVisibleEntity)(0,ent);
        iStack_8 = in_stack_00000008;
        ent = in_stack_0000000c;
      }
      iStack_8 = iStack_8 + 1;
    } while (iStack_8 < 0x20);
  }
  return;
}

/* 100180c0  FUN_100180c0  (624 bytes)
 * undefined FUN_100180c0(int param_1, int param_2)
 * called by: HUD_VoiceStatus
 */
void __thiscall FUN_100180c0(void *this,int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  byte bVar7;
  float10 fVar8;
  hud_player_info_t hStack_220;
  char acStack_200 [512];
  
  if (**(int **)((int)this + 0x20) != 0) {
    fVar8 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
    if (fVar8 != (float10)0.0) {
      FUN_1006b78e(acStack_200,0x100,(byte_conflict *)s_CVoiceStatus__UpdateSpeakerStatu_10092d4c);
      (*gEngfuncs.pfnConsolePrint)(acStack_200);
    }
    if (param_1 == -1) {
      *(bool *)((int)this + 0x177f4) = param_2 != 0;
      if (param_2 != 0) {
        (*gEngfuncs.pfnClientCmd)(s_voice_modenable_1_10092d38);
        FUN_10018900((int)this);
        return;
      }
    }
    else {
      if (param_1 == -2) {
        *(bool *)((int)this + 0x177f5) = param_2 != 0;
        FUN_10018900((int)this);
        return;
      }
      if ((-1 < param_1) && (param_1 < 0x20)) {
        iVar1 = param_1 + -1;
        if (iVar1 < 0) {
          return;
        }
        puVar3 = (undefined4 *)FUN_100188c0(this,iVar1);
        iVar4 = iVar1 >> 5;
        if (param_2 == 0) {
          *(uint *)((int)this + iVar4 * 4 + 0x24) =
               *(uint *)((int)this + iVar4 * 4 + 0x24) & ~(1 << ((byte)iVar1 & 0x1f));
          if (puVar3 != (undefined4 *)0x0) {
            (**(code **)(*(int *)*puVar3 + 0x24))(0);
            puVar3[3] = 0xffffffff;
          }
        }
        else {
          bVar7 = (byte)iVar1 & 0x1f;
          puVar2 = (uint *)((int)this + iVar4 * 4 + 0x24);
          *puVar2 = *puVar2 | 1 << bVar7;
          *(uint *)((int)this + iVar4 * 4 + 0x2c) =
               *(uint *)((int)this + iVar4 * 4 + 0x2c) | 1 << bVar7;
          if ((puVar3 == (undefined4 *)0x0) &&
             (piVar5 = (int *)FUN_100188f0(this), piVar5 != (int *)0x0)) {
            hStack_220.name = (char *)0x0;
            hStack_220.ping = 0;
            hStack_220.thisplayer = '\0';
            hStack_220.spectator = '\0';
            hStack_220.packetloss = '\0';
            hStack_220._9_3_ = 0;
            hStack_220.model = (char *)0x0;
            hStack_220.topcolor = 0;
            hStack_220.bottomcolor = 0;
            (*gEngfuncs.pfnGetPlayerInfo)(param_1,&hStack_220);
            FUN_1006b78e(acStack_200,0x200,(byte_conflict *)s__s_10092d30);
            (**(code **)(**(int **)((int)this + 0x17734) + 4))(param_1,&hStack_220.field_0x14);
            if ((int *)piVar5[1] != (int *)0x0) {
              (**(code **)(*(int *)piVar5[1] + 300))
                        (hStack_220.model,hStack_220._16_4_,hStack_220._20_4_,100);
              (**(code **)(*(int *)piVar5[1] + 0x40))(**(undefined4 **)((int)this + 0x20));
              iVar4 = *(int *)piVar5[1];
              uVar6 = (**(code **)(**(int **)((int)this + 0x17734) + 0x10))();
              (**(code **)(iVar4 + 0x24))(uVar6);
            }
            if ((int *)*piVar5 != (int *)0x0) {
              (**(code **)(*(int *)*piVar5 + 0x120))(0xff,0xff,0xff,0);
              (**(code **)(*(int *)*piVar5 + 300))(0,0,0,0xff);
              (**(code **)(*(int *)*piVar5 + 0x200))((int *)*piVar5,&stack0xfffffdd8);
            }
            piVar5[3] = iVar1;
            FUN_10018900((int)this);
            return;
          }
        }
      }
    }
    FUN_10018900((int)this);
  }
  return;
}

/* 10018360  FUN_10018360  (612 bytes)
 * undefined FUN_10018360(char param_1)
 * called by: FUN_10017ea0, FUN_10018830, FUN_10018cf0
 */
void __thiscall FUN_10018360(void *this,char param_1)

{
  uint iPlayer;
  char cVar1;
  char playerID [16];
  bool bVar2;
  char *pcVar3;
  qboolean qVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  undefined4 unaff_EBX;
  uint uVar9;
  undefined4 unaff_EBP;
  uint uVar10;
  undefined4 unaff_EDI;
  char *pcVar11;
  char *pcVar12;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  char in_stack_00000008;
  char in_stack_00000028;
  undefined4 in_stack_fffff50c;
  int iStack_af0;
  int aiStack_aec [2];
  int iStack_ae4;
  char acStack_adc [4];
  char acStack_ad8 [476];
  char acStack_8fc [268];
  undefined1 auStack_7f0 [20];
  char acStack_7dc [8];
  char acStack_7d4 [2004];
  
  pcVar3 = (*gEngfuncs.pfnGetLevelName)();
  if (*pcVar3 == '\0') {
    (*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
    if (extraout_ST0 != (float10)0.0) {
      (*gEngfuncs.pfnConsolePrint)(s_CVoiceStatus__UpdateServerState__10092dfc);
      return;
    }
  }
  else {
    (*gEngfuncs.pfnGetCvarFloat)(s_voice_modenable_10092bf8);
    if ((in_stack_00000008 != '\0') ||
       (*(uint *)((int)this + 0x1c) != (uint)(extraout_ST0_00 != (float10)0.0))) {
      *(uint *)((int)this + 0x1c) = (uint)(extraout_ST0_00 != (float10)0.0);
      FUN_1006b78e(acStack_8fc,0x100,(byte_conflict *)s_VModEnable__d_10092dec);
      (*gEngfuncs.pfnServerCmd)(acStack_8fc);
      (*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
      if (extraout_ST0_01 != (float10)0.0) {
        FUN_1006ac7a(&stack0xfffff50c,(byte_conflict *)s_CVoiceStatus__UpdateServerState__10092dbc);
        (*gEngfuncs.pfnConsolePrint)(&stack0xfffff50c);
      }
    }
    FUN_1006ac7a(auStack_7f0,&DAT_10092db4);
    uVar9 = 0;
    uVar10 = 0;
    uVar6 = 0;
    do {
      iPlayer = uVar6 + 1;
      playerID[4] = (char)unaff_EDI;
      playerID[5] = (char)((uint)unaff_EDI >> 8);
      playerID[6] = (char)((uint)unaff_EDI >> 0x10);
      playerID[7] = (char)((uint)unaff_EDI >> 0x18);
      playerID._0_4_ = &stack0xfffff500;
      playerID[8] = (char)unaff_EBP;
      playerID[9] = (char)((uint)unaff_EBP >> 8);
      playerID[10] = (char)((uint)unaff_EBP >> 0x10);
      playerID[0xb] = (char)((uint)unaff_EBP >> 0x18);
      playerID[0xc] = (char)unaff_EBX;
      playerID[0xd] = (char)((uint)unaff_EBX >> 8);
      playerID[0xe] = (char)((uint)unaff_EBX >> 0x10);
      playerID[0xf] = (char)((uint)unaff_EBX >> 0x18);
      qVar4 = (*gEngfuncs.GetPlayerUniqueID)(iPlayer,playerID);
      if (qVar4 != 0) {
        bVar2 = FUN_100173a0((void *)(iStack_af0 + 0x177f8),aiStack_aec);
        bVar5 = (byte)uVar6;
        if (bVar2) {
          uVar10 = uVar10 | 1 << (bVar5 & 0x1f);
        }
        if ((*(uint *)(iStack_af0 + 0x30 + ((int)uVar6 >> 5) * 4) & 1 << (bVar5 & 0x1f)) != 0) {
          uVar9 = uVar9 | 1 << (bVar5 & 0x1f);
        }
      }
      uVar6 = iPlayer;
    } while (iPlayer < 0x20);
    cVar8 = '\x01';
    if (uVar9 == uVar10) {
      cVar8 = (char)((uint)in_stack_fffff50c >> 0x18);
    }
    FUN_1006ac7a(acStack_adc,&DAT_10092db0);
    uVar6 = 0xffffffff;
    pcVar3 = acStack_adc;
    do {
      pcVar12 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar3 = acStack_7dc;
    do {
      pcVar11 = pcVar3;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar11;
    } while (cVar1 != '\0');
    pcVar3 = pcVar12 + -uVar6;
    pcVar12 = pcVar11 + -1;
    for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar12 = pcVar12 + 1;
    }
    if ((cVar8 == '\0') && (in_stack_00000028 == '\0')) {
      (*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
      if (extraout_ST0_02 != (float10)0.0) {
        (*gEngfuncs.pfnConsolePrint)(s_CVoiceStatus__UpdateServerState__10092d84);
      }
    }
    else {
      (*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
      if (extraout_ST0_03 != (float10)0.0) {
        FUN_1006ac7a(acStack_ad8,(byte_conflict *)s_CVoiceStatus__UpdateServerState__10092dbc);
        (*gEngfuncs.pfnConsolePrint)(acStack_ad8);
      }
      (*gEngfuncs.pfnServerCmdUnreliable)(acStack_7d4);
    }
    (*gEngfuncs.GetClientTime)();
    *(float *)(iStack_ae4 + 0x18) = (float)extraout_ST0_04;
  }
  return;
}

/* 100185d0  FUN_100185d0  (25 bytes)
 * undefined FUN_100185d0(undefined4 param_1, int param_2)
 * called by: FUN_1005db70
 */
void __thiscall FUN_100185d0(void *this,undefined4 param_1,int param_2)

{
  *(undefined4 *)((int)this + param_2 * 4 + 0x17754) = param_1;
  FUN_100185f0(this,param_2 + -1);
  return;
}

