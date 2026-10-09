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
 * called by: FUN_10008e50, FUN_100091e0, FUN_100096f0, FUN_1001f8e0, FUN_10032540, FUN_100337f0, FUN_10035010, FUN_10035d40, FUN_1003b250, FUN_1003b750, FUN_1003bb00, FUN_1003d280, ... (45 total)
 */
void __thiscall FUN_10002610(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return;
}

/* 10003100  FUN_10003100  (31 bytes)
 * undefined FUN_10003100()
 */
void FUN_10003100(void)

{
  DAT_10098a28 = 0;
  DAT_10098a2c = 0;
  DAT_10098a30 = 0;
  return;
}

/* 10003120  FUN_10003120  (8 bytes)
 * undefined FUN_10003120()
 */
undefined4 FUN_10003120(void)

{
  return 1;
}

/* 10003130  FUN_10003130  (8 bytes)
 * undefined FUN_10003130()
 */
undefined4 FUN_10003130(void)

{
  return 1;
}

/* 10003140  FUN_10003140  (6 bytes)
 * undefined FUN_10003140()
 */
undefined4 FUN_10003140(void)

{
  return 0xffffffff;
}

/* 10003160  FUN_10003160  (5 bytes)
 * undefined FUN_10003160()
 */
undefined4 FUN_10003160(void)

{
  return 0;
}

/* 10003170  FUN_10003170  (9 bytes)
 * undefined FUN_10003170()
 */
float10 FUN_10003170(void)

{
  return (float10)0.0;
}

/* 10003180  FUN_10003180  (3 bytes)
 * undefined FUN_10003180()
 */
void FUN_10003180(void)

{
  return;
}

/* 10003190  FUN_10003190  (3 bytes)
 * undefined FUN_10003190()
 */
void FUN_10003190(void)

{
  return;
}

/* 100031a0  FUN_100031a0  (6 bytes)
 * undefined FUN_100031a0()
 */
undefined4 FUN_100031a0(void)

{
  return 0x42;
}

/* 100031b0  FUN_100031b0  (5 bytes)
 * undefined FUN_100031b0()
 */
undefined4 FUN_100031b0(void)

{
  return 0;
}

/* 100031c0  FUN_100031c0  (5 bytes)
 * undefined FUN_100031c0()
 */
undefined4 FUN_100031c0(void)

{
  return 0;
}

/* 100031d0  FUN_100031d0  (33 bytes)
 * undefined FUN_100031d0()
 */
void FUN_100031d0(undefined4 *param_1)

{
  *param_1 = DAT_10098a28;
  param_1[1] = DAT_10098a2c;
  param_1[2] = DAT_10098a30;
  return;
}

/* 10003200  FUN_10003200  (6 bytes)
 * undefined FUN_10003200()
 */
char * FUN_10003200(void)

{
  return s_;
}

/* 10003210  FUN_10003210  (5 bytes)
 * undefined FUN_10003210()
 */
undefined4 FUN_10003210(void)

{
  return 0;
}

/* 10003220  FUN_10003220  (4 bytes)
 * undefined FUN_10003220()
 */
undefined4 FUN_10003220(void)

{
  return 0xffffffff;
}

/* 10003240  FUN_10003240  (183 bytes)
 * undefined FUN_10003240(void)
 */
void FUN_10003240(void)

{
  (*gEngfuncs.pfnHookEvent)(s_events_fire_sc_100911cc,FUN_1003de40);
  (*gEngfuncs.pfnHookEvent)(s_events_firelinked_sc_100911b4,FUN_1003de10);
  (*gEngfuncs.pfnHookEvent)(s_events_empty_sc_100911a4,FUN_100424e0);
  (*gEngfuncs.pfnHookEvent)(s_events_pump_sc_10091194,FUN_100419a0);
  (*gEngfuncs.pfnHookEvent)(s_events_closecombat_sc_1009117c,FUN_10043200);
  (*gEngfuncs.pfnHookEvent)(s_events_coldcock_sc_10091168,FUN_10043800);
  (*gEngfuncs.pfnHookEvent)(s_events_reload_sc_10091154,FUN_10042690);
  (*gEngfuncs.pfnHookEvent)(s_events_knife_sc_10091144,FUN_10043c90);
  (*gEngfuncs.pfnHookEvent)(s_events_katana_sc_10091130,FUN_10044230);
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

/* 10003470  FUN_10003470  (1 bytes)
 * undefined FUN_10003470()
 */
void FUN_10003470(void)

{
  return;
}

/* 10003490  FUN_10003490  (11 bytes)
 * undefined FUN_10003490()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003490(void)

{
  _DAT_1009e628 = &PTR_FUN_1007a548;
  return;
}

/* 100034b0  FUN_100034b0  (1 bytes)
 * undefined FUN_100034b0()
 */
void FUN_100034b0(void)

{
  return;
}

/* 100034d0  FUN_100034d0  (1 bytes)
 * undefined FUN_100034d0()
 */
void FUN_100034d0(void)

{
  return;
}

/* 100034f0  FUN_100034f0  (11 bytes)
 * undefined FUN_100034f0()
 */
void FUN_100034f0(void)

{
  DAT_1009f238 = &PTR_FUN_1007a6b4;
  return;
}

/* 10003500  FUN_10003500  (46 bytes)
 * undefined FUN_10003500()
 */
void FUN_10003500(undefined4 param_1,byte_conflict *param_2)

{
  FUN_1006ae94(&DAT_1009fb00,param_2,(undefined4 *)&stack0x0000000c);
  (*gEngfuncs.Con_Printf)(s_cl__100911dc);
  (*gEngfuncs.Con_Printf)(&DAT_1009fb00);
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

/* 100035d0  FUN_100035d0  (21 bytes)
 * undefined FUN_100035d0()
 */
void __fastcall FUN_100035d0(int param_1)

{
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
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

/* 10003670  FUN_10003670  (8 bytes)
 * undefined FUN_10003670()
 */
void __fastcall FUN_10003670(int param_1)

{
  *(undefined4 *)(param_1 + 0x7c) = 1;
  return;
}

/* 10003680  FUN_10003680  (40 bytes)
 * undefined FUN_10003680()
 */
void __thiscall FUN_10003680(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x218) = param_2;
  FUN_1001ace0(param_2,*(undefined4 *)(*(int *)(param_1 + 4) + 0x114),0);
  return;
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
  _DAT_100988f4 = FUN_1001af10;
  DAT_100987c0 = CBasePlayerItem::AttemptToMaterialize;
  _DAT_10098950 = CBasePlayerItem::AttemptToMaterialize;
  DAT_100989a4 = FUN_1001ad50;
  DAT_100988ac = FUN_10003500;
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

/* 10004280  FUN_10004280  (3 bytes)
 * undefined FUN_10004280()
 */
undefined1 FUN_10004280(void)

{
  return 1;
}

/* 10004290  FUN_10004290  (17 bytes)
 * undefined FUN_10004290()
 */
void __fastcall FUN_10004290(int param_1)

{
  FUN_10055aa0(*(float *)(*(int *)(param_1 + 4) + 0x254));
  return;
}

/* 100042b0  FUN_100042b0  (16 bytes)
 * undefined FUN_100042b0()
 */
void __thiscall FUN_100042b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x254) = param_2;
  return;
}

/* 100042c0  FUN_100042c0  (31 bytes)
 * undefined FUN_100042c0()
 */
undefined4 __fastcall FUN_100042c0(int param_1)

{
  if (*(float *)(*(int *)(param_1 + 4) + 0x254) != 1.0) {
    return 1;
  }
  return 0;
}

/* 100042e0  FUN_100042e0  (3 bytes)
 * undefined FUN_100042e0()
 */
undefined1 FUN_100042e0(void)

{
  return 0;
}

/* 100042f0  FUN_100042f0  (4 bytes)
 * undefined FUN_100042f0()
 */
undefined4 FUN_100042f0(void)

{
  return 0xffffffff;
}

/* 10004300  FUN_10004300  (8 bytes)
 * undefined FUN_10004300()
 */
undefined4 FUN_10004300(void)

{
  return 1;
}

/* 10004310  FUN_10004310  (6 bytes)
 * undefined FUN_10004310()
 */
undefined4 FUN_10004310(void)

{
  return 0xffffffff;
}

/* 10004320  FUN_10004320  (7 bytes)
 * undefined FUN_10004320()
 */
float10 FUN_10004320(void)

{
  return (float10)0.0;
}

/* 10004330  FUN_10004330  (80 bytes)
 * undefined FUN_10004330()
 */
undefined4 __fastcall FUN_10004330(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((*(float *)(iVar1 + 0x20) == DAT_10098a28) && (*(float *)(iVar1 + 0x24) == DAT_10098a2c)) &&
     (*(float *)(iVar1 + 0x28) == DAT_10098a30)) {
    return 0;
  }
  return 1;
}

/* 10004380  FUN_10004380  (30 bytes)
 * undefined FUN_10004380()
 */
undefined4 __fastcall FUN_10004380(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 4) + 0x10c) != 4) &&
     (*(int *)(*(int *)(param_1 + 4) + 0x108) != 0xd)) {
    return 0;
  }
  return 1;
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

/* 100043d0  FUN_100043d0  (102 bytes)
 * undefined FUN_100043d0()
 */
bool __thiscall FUN_100043d0(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar2 = (byte *)(*(int *)(*(int *)(param_1 + 4) + 0x1cc) + *(int *)(DAT_10099114 + 0x98));
  pbVar3 = (byte *)(*(int *)(DAT_10099114 + 0x98) + param_2);
  while( true ) {
    bVar1 = *pbVar3;
    bVar4 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return true;
    }
    bVar1 = pbVar3[1];
    bVar4 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return true;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* 10004440  FUN_10004440  (6 bytes)
 * undefined FUN_10004440()
 */
char * FUN_10004440(void)

{
  return s_;
}

/* 10004450  FUN_10004450  (32 bytes)
 * undefined FUN_10004450()
 */
void __thiscall
FUN_10004450(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_2,param_3,param_4,param_5);
  }
  return;
}

/* 10004470  FUN_10004470  (17 bytes)
 * undefined FUN_10004470()
 */
void __thiscall FUN_10004470(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))(param_2);
  }
  return;
}

/* 10004490  FUN_10004490  (104 bytes)
 * undefined FUN_10004490()
 */
void __thiscall FUN_10004490(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  fVar1 = *(float *)(iVar5 + 200);
  fVar2 = *(float *)(iVar5 + 0xd4);
  fVar3 = *(float *)(iVar5 + 0xcc);
  fVar4 = *(float *)(iVar5 + 0xd8);
  *param_2 = (*(float *)(iVar5 + 0xc4) + *(float *)(iVar5 + 0xd0)) * 0.5;
  param_2[2] = (fVar3 + fVar4) * 0.5;
  param_2[1] = (fVar1 + fVar2) * 0.5;
  return;
}

/* 10004500  FUN_10004500  (61 bytes)
 * undefined FUN_10004500()
 */
void __thiscall FUN_10004500(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  fVar1 = *(float *)(iVar5 + 0x178);
  fVar2 = *(float *)(iVar5 + 0xc);
  fVar3 = *(float *)(iVar5 + 0x17c);
  fVar4 = *(float *)(iVar5 + 0x10);
  *param_2 = *(float *)(iVar5 + 0x174) + *(float *)(iVar5 + 8);
  param_2[1] = fVar1 + fVar2;
  param_2[2] = fVar3 + fVar4;
  return;
}

/* 10004540  FUN_10004540  (44 bytes)
 * undefined FUN_10004540()
 */
undefined4 * __fastcall FUN_10004540(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *unaff_retaddr;
  undefined1 auStack_c [12];
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xf0))(auStack_c);
  *unaff_retaddr = *puVar1;
  unaff_retaddr[1] = puVar1[1];
  unaff_retaddr[2] = puVar1[2];
  return unaff_retaddr;
}

/* 10004570  FUN_10004570  (20 bytes)
 * undefined FUN_10004570()
 */
void __fastcall FUN_10004570(int param_1)

{
  (*DAT_100987f4)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  return;
}

/* 10004590  FUN_10004590  (4 bytes)
 * undefined FUN_10004590()
 */
undefined4 __fastcall FUN_10004590(int param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}

/* 100045a0  FUN_100045a0  (4 bytes)
 * undefined FUN_100045a0()
 */
float10 __fastcall FUN_100045a0(int param_1)

{
  return (float10)*(float *)(param_1 + 0x7c);
}

/* 100045f0  FUN_100045f0  (7 bytes)
 * undefined FUN_100045f0()
 */
undefined4 __fastcall FUN_100045f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x130);
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

/* 10004610  FUN_10004610  (15 bytes)
 * undefined FUN_10004610()
 */
undefined4 __fastcall FUN_10004610(int *param_1)

{
  (**(code **)(*param_1 + 0x158))(param_1);
  return 1;
}

/* 10004620  FUN_10004620  (121 bytes)
 * undefined FUN_10004620()
 */
void __fastcall FUN_10004620(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float unaff_ESI;
  float10 fVar6;
  float *unaff_retaddr;
  undefined1 auStack_c [12];
  
  fVar6 = (float10)(*DAT_10098924)(0x3f000000,0x3f8ccccd);
  fVar1 = *(float *)(param_1[1] + 0x174);
  fVar2 = *(float *)(param_1[1] + 0x178);
  pfVar5 = (float *)(**(code **)(*param_1 + 0xf0))(auStack_c);
  fVar3 = pfVar5[1];
  fVar4 = pfVar5[2];
  *unaff_retaddr = unaff_ESI + *pfVar5;
  unaff_retaddr[1] = (float)(fVar6 * (float10)fVar1) + fVar3;
  unaff_retaddr[2] = (float)(fVar6 * (float10)fVar2) + fVar4;
  return;
}

/* 100046a0  FUN_100046a0  (20 bytes)
 * undefined FUN_100046a0()
 */
void __fastcall FUN_100046a0(int param_1)

{
  *(float *)(param_1 + 0x9a8) = *DAT_10099114 - 1.0;
  return;
}

/* 100046c0  FUN_100046c0  (20 bytes)
 * undefined FUN_100046c0()
 */
void __fastcall FUN_100046c0(int param_1)

{
  *(float *)(param_1 + 0x9a8) = *DAT_10099114 + 30.0;
  return;
}

/* 100046e0  FUN_100046e0  (29 bytes)
 * undefined FUN_100046e0()
 */
undefined4 __fastcall FUN_100046e0(int param_1)

{
  if (*(float *)(param_1 + 0x9a8) <= *DAT_10099114) {
    return 1;
  }
  return 0;
}

/* 10004700  FUN_10004700  (41 bytes)
 * undefined FUN_10004700()
 */
undefined4 __fastcall FUN_10004700(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 4) + 0x170) == 0) &&
     (0.0 < *(float *)(*(int *)(param_1 + 4) + 0x160))) {
    return 1;
  }
  return 0;
}

/* 10004730  FUN_10004730  (6 bytes)
 * undefined FUN_10004730()
 */
undefined4 FUN_10004730(void)

{
  return 2;
}

/* 10004740  FUN_10004740  (6 bytes)
 * undefined FUN_10004740()
 */
undefined4 FUN_10004740(void)

{
  return 1;
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
 * called by: FUN_10003830, FUN_10008720, FUN_1003dfa0, FUN_1003f090, FUN_10040c20, FUN_100419a0, FUN_100425b0, FUN_10042690, FUN_10043800, FUN_10068f70
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
 * called by: FUN_10003830, FUN_10007a50, FUN_10008aa0, FUN_1000ab00, FUN_1000ad70, FUN_1000b670, FUN_10010630, FUN_100108b0, FUN_10010bd0, FUN_10011320, FUN_10011650, FUN_10011a60, ... (58 total)
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

/* 100084e0  FUN_100084e0  (231 bytes)
 * undefined FUN_100084e0()
 */
void __fastcall FUN_100084e0(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = (*DAT_100989a0)(1,s_events_fire_sc_100911cc);
  *(undefined2 *)(param_1 + 0x824) = uVar1;
  uVar1 = (*DAT_100989a0)(1,s_events_coldcock_sc_10091168);
  *(undefined2 *)(param_1 + 0x826) = uVar1;
  uVar1 = (*DAT_100989a0)(1,s_events_firelinked_sc_100911b4);
  *(undefined2 *)(param_1 + 0x82e) = uVar1;
  uVar1 = (*DAT_100989a0)(1,s_events_empty_sc_100911a4);
  *(undefined2 *)(param_1 + 0x828) = uVar1;
  uVar1 = (*DAT_100989a0)(1,s_events_pump_sc_10091194);
  *(undefined2 *)(param_1 + 0x82a) = uVar1;
  uVar1 = (*DAT_100989a0)(1,s_events_closecombat_sc_1009117c);
  *(undefined2 *)(param_1 + 0x82c) = uVar1;
  uVar1 = (*DAT_100989a0)(1,s_events_reload_sc_10091154);
  *(undefined2 *)(param_1 + 0x830) = uVar1;
  uVar1 = (*DAT_100989a0)(1,s_events_knife_sc_10091144);
  *(undefined2 *)(param_1 + 0x832) = uVar1;
  uVar1 = (*DAT_100989a0)(1,s_events_katana_sc_10091130);
  *(undefined2 *)(param_1 + 0x834) = uVar1;
  uVar1 = (*DAT_100989a0)(1,s_events_draw_sc_10091120);
  *(undefined2 *)(param_1 + 0x836) = uVar1;
  uVar1 = (*DAT_100989a0)(1,s_events_grenade_sc_1009110c);
  *(undefined2 *)(param_1 + 0x838) = uVar1;
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
 * called by: FUN_10008aa0, FUN_1000a4c0, FUN_1000a720, FUN_1000ab00
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

/* 10008aa0  FUN_10008aa0  (536 bytes)
 * undefined FUN_10008aa0()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10008aa0(CBasePlayerItem *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined1 auStack_c [12];
  
  if ((*(int *)(param_1 + 0xbc) != 0) && (0 < *(int *)(*(int *)(param_1 + 0xc0) + 0x10))) {
    if ((DAT_100a035c & 1) == 0) {
      DAT_100a035c = DAT_100a035c | 1;
      FUN_1006af63(0x10008e40);
    }
    if ((DAT_100a035c & 2) == 0) {
      DAT_100a035c = DAT_100a035c | 2;
      FUN_1006af63(0x10008e30);
    }
    if ((DAT_100a035c & 4) == 0) {
      DAT_100a035c = DAT_100a035c | 4;
      FUN_1006af63(0x10008e20);
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      puVar2 = FUN_100071c0(*(int *)(param_1 + 0xb8));
      if (puVar2[4] != 0) {
        uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x250);
        FUN_10057e60(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x74);
        if (*(int *)(param_1 + 0xc0) != 0) {
          if (*(char *)(*(int *)(param_1 + 0xc0) + 0x348) == '\x02') {
            FUN_1000a840(param_1,1);
          }
          CBasePlayerItem::AttemptToMaterialize(param_1);
        }
        _DAT_100a034c = 0.725;
        if ((uVar1 & 0x70c30) != 0) {
          _DAT_100a034c = 1.0875001;
        }
        FUN_100088a0((int)param_1);
        fVar3 = FUN_1001adf0();
        fVar3 = fVar3 + (float10)_DAT_100a034c;
        *(float *)(param_1 + 0x94) = (float)fVar3;
        *(float *)(param_1 + 0x90) = (float)fVar3;
        *(float *)(param_1 + 0x8c) = (float)fVar3;
        *(float *)(*(int *)(param_1 + 0x70) + 0x118) = (float)fVar3;
        fVar3 = FUN_1001adf0();
        *(float *)(param_1 + 0x98) = (float)(fVar3 + (float10)2.0);
        puVar2 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x70) + 0x160))(auStack_c);
        _DAT_100a9fa8 = *puVar2;
        _DAT_100a9fac = puVar2[1];
        _DAT_100a9fb0 = puVar2[2];
        _DAT_1009ff80 = *(undefined4 *)(DAT_10099114 + 0x28);
        _DAT_1009ff84 = *(undefined4 *)(DAT_10099114 + 0x2c);
        _DAT_1009ff88 = *(undefined4 *)(DAT_10099114 + 0x30);
        if (DAT_100d5cbc != 0) {
          FUN_10057fa0(&DAT_1018cac8,(float)*(int *)(*(int *)(param_1 + 0xc0) + 0x10) * 0.3,0.2,10.0
                      );
        }
        (*DAT_100989a4)(1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208),
                        CONCAT22((short)((uint)*(undefined4 *)(param_1 + 0xb8) >> 0x10),
                                 *(undefined2 *)(param_1 + 0x826)),0,&DAT_10098a28,&DAT_10098a28,
                        DAT_1009ff90,DAT_1009ff94,*(undefined4 *)(param_1 + 0xb8),
                        *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x10),0,0);
      }
    }
    return;
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

/* 10008e20  FUN_10008e20  (1 bytes)
 * undefined FUN_10008e20()
 */
void FUN_10008e20(void)

{
  return;
}

/* 10008e30  FUN_10008e30  (1 bytes)
 * undefined FUN_10008e30()
 */
void FUN_10008e30(void)

{
  return;
}

/* 10008e40  FUN_10008e40  (1 bytes)
 * undefined FUN_10008e40()
 */
void FUN_10008e40(void)

{
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
 * called by: FUN_10008e50, FUN_100091e0, FUN_100096f0, FUN_1001f8e0, FUN_10035010, FUN_1003bb00, FUN_1003f090, FUN_100419a0, FUN_10050080, FUN_10051270, FUN_100524c0, FUN_10052720, ... (17 total)
 */
void __thiscall FUN_10009190(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return;
}

/* 100091b0  FUN_100091b0  (1 bytes)
 * undefined FUN_100091b0()
 */
void FUN_100091b0(void)

{
  return;
}

/* 100091c0  FUN_100091c0  (1 bytes)
 * undefined FUN_100091c0()
 */
void FUN_100091c0(void)

{
  return;
}

/* 100091d0  FUN_100091d0  (1 bytes)
 * undefined FUN_100091d0()
 */
void FUN_100091d0(void)

{
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

/* 100096c0  FUN_100096c0  (1 bytes)
 * undefined FUN_100096c0()
 */
void FUN_100096c0(void)

{
  return;
}

/* 100096d0  FUN_100096d0  (1 bytes)
 * undefined FUN_100096d0()
 */
void FUN_100096d0(void)

{
  return;
}

/* 100096e0  FUN_100096e0  (1 bytes)
 * undefined FUN_100096e0()
 */
void FUN_100096e0(void)

{
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

/* 10009e00  FUN_10009e00  (1 bytes)
 * undefined FUN_10009e00()
 */
void FUN_10009e00(void)

{
  return;
}

/* 10009e10  FUN_10009e10  (1 bytes)
 * undefined FUN_10009e10()
 */
void FUN_10009e10(void)

{
  return;
}

/* 10009e20  FUN_10009e20  (1 bytes)
 * undefined FUN_10009e20()
 */
void FUN_10009e20(void)

{
  return;
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
 * called by: FUN_10008aa0, FUN_1000a9a0, FUN_1000ab00
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

/* 1000aaf0  FUN_1000aaf0  (8 bytes)
 * undefined FUN_1000aaf0()
 */
void __fastcall FUN_1000aaf0(int *param_1)

{
  FUN_1000ab00(param_1);
  return;
}

/* 1000ab00  FUN_1000ab00  (453 bytes)
 * undefined FUN_1000ab00(int * param_1)
 * called by: FUN_100085d0, FUN_100086b0, FUN_10008720, FUN_1000aaf0
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

/* 1000ad00  FUN_1000ad00  (99 bytes)
 * undefined FUN_1000ad00()
 */
undefined4 __thiscall FUN_1000ad00(int param_1,undefined4 *param_2)

{
  param_2[6] = **(int **)(param_1 + 4) + *(int *)(DAT_10099114 + 0x98);
  param_2[3] = 0xffffffff;
  param_2[5] = 0xffffffff;
  param_2[7] = 0xffffffff;
  param_2[2] = 0;
  param_2[4] = 0;
  *param_2 = 1;
  param_2[1] = 2;
  param_2[9] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x10;
  param_2[8] = 0x10;
  param_2[10] = 1;
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
    *puVar3 = &PTR_FUN_1007a6b4;
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

