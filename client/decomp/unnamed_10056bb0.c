/* client.dll - unnamed_10056bb0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10056bb0  FUN_10056bb0  (10 bytes)
 * undefined FUN_10056bb0()
 */
void FUN_10056bb0(void)

{
  FUN_100507c0(0x1018bde8);
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
 * called by: FUN_1003d600, FUN_1003dfa0, FUN_1003f090, FUN_10040c20, FUN_100419a0, FUN_10042690
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

/* 10057260  FUN_10057260  (1 bytes)
 * undefined FUN_10057260()
 */
void FUN_10057260(void)

{
  return;
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

/* 10057320  FUN_10057320  (1 bytes)
 * undefined FUN_10057320()
 */
void FUN_10057320(void)

{
  return;
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

/* 10057780  FUN_10057780  (1 bytes)
 * undefined FUN_10057780()
 */
void FUN_10057780(void)

{
  return;
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

/* 10057900  FUN_10057900  (1 bytes)
 * undefined FUN_10057900()
 */
void FUN_10057900(void)

{
  return;
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
 * called by: FUN_1003b750, FUN_1003d600, FUN_1003dfa0, FUN_1003f090, FUN_10040c20, FUN_100419a0, FUN_10042690, FUN_10055760
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

/* 10057a60  FUN_10057a60  (1 bytes)
 * undefined FUN_10057a60()
 */
void FUN_10057a60(void)

{
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
 * called by: FUN_10008aa0, FUN_10008b30, FUN_10009ee0, FUN_1000a1f0, FUN_1000a270, FUN_1000af10
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
 * called by: FUN_10008230, FUN_10008aa0, FUN_10009ee0, FUN_1000a270, FUN_1000af10
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

/* 10058370  FUN_10058370  (31 bytes)
 * undefined FUN_10058370()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058370(void)

{
  _DAT_1018d190 = 0;
  _DAT_1018d194 = 0;
  _DAT_1018d198 = 0;
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
 * called by: FUN_10030970
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
 * called by: FUN_10023080, FUN_100240b0, FUN_10024160, FUN_1002b310, FUN_1002bb70, FUN_1002be80, FUN_1002c790, FUN_1002d1b0, FUN_1002d7e0, FUN_1002dba0, FUN_1002e1c0, FUN_10030e60, ... (18 total)
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
 * called by: FUN_10021aa0, FUN_10034d40
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
  *(undefined ***)pPVar1 = &PTR_FUN_1007c5dc;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  vgui::Label::Label(this,s_);
  this_00 = (ImagePanel *)(param_1 + 0x198);
  vgui::ImagePanel::ImagePanel(this_00,(Image *)0x0);
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined ***)param_1 = &PTR_setPos_1007d898;
  *(undefined ***)pPVar1 = &PTR_FUN_1007d86c;
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
 * called by: FUN_10018f70, Unwind@10077890
 */
void __fastcall FUN_10058590(int *param_1)

{
  *param_1 = (int)&PTR_setPos_1007d898;
  param_1[0x2f] = (int)&PTR_FUN_1007d86c;
  FUN_100585f0(param_1);
  return;
}

/* 100585b0  FUN_100585b0  (61 bytes)
 * undefined FUN_100585b0(undefined4 param_1, undefined4 param_2)
 * called by: FUN_100192d0
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
 * called by: FUN_100192d0
 */
void __thiscall FUN_10058640(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0xc4) = param_1;
  FUN_10058730(this);
  return;
}

/* 10058660  FUN_10058660  (84 bytes)
 * undefined FUN_10058660(int * param_1, byte.conflict * param_2)
 * called by: FUN_100192d0
 */
void __cdecl FUN_10058660(int *param_1,byte_conflict *param_2)

{
  undefined1 local_200 [512];
  
  FUN_1006ca7b(local_200,0x200,param_2,(undefined4 *)&stack0x0000000c);
  (**(code **)(param_1[0x32] + 0x200))(param_1 + 0x32,local_200);
  FUN_10058730(param_1);
  return;
}

/* 100586c0  FUN_100586c0  (13 bytes)
 * undefined FUN_100586c0(undefined4 param_1)
 * called by: FUN_100192d0
 */
void __thiscall FUN_100586c0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xc0) = param_1;
  return;
}

/* 100586d0  FUN_100586d0  (7 bytes)
 * undefined1 FUN_100586d0(int param_1)
 * called by: FUN_10019690
 */
undefined1 __fastcall FUN_100586d0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x261);
}

/* 100586e0  FUN_100586e0  (18 bytes)
 * undefined FUN_100586e0(undefined1 param_1)
 * called by: FUN_100192d0
 */
void __thiscall FUN_100586e0(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x261) = param_1;
  FUN_10058730(this);
  return;
}

/* 10058700  FUN_10058700  (46 bytes)
 * undefined FUN_10058700(int * param_1)
 */
void __fastcall FUN_10058700(int *param_1)

{
  *(bool *)((int)param_1 + 0x261) = *(char *)((int)param_1 + 0x261) == '\0';
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x30])(param_1);
  }
  FUN_10058730(param_1);
  return;
}

/* 10058730  FUN_10058730  (290 bytes)
 * undefined FUN_10058730(int * param_1)
 * called by: FUN_100585b0, FUN_100585f0, FUN_10058640, FUN_10058660, FUN_100586e0, FUN_10058700
 */
void __fastcall FUN_10058730(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int unaff_EBP;
  int unaff_ESI;
  int *apiStack_38 [2];
  int iStack_30;
  int *piStack_2c;
  int *local_14;
  int local_10 [4];
  
  if (*(char *)((int)param_1 + 0x261) == '\0') {
    piVar3 = (int *)param_1[0x97];
  }
  else {
    piVar3 = (int *)param_1[0x96];
  }
  piVar1 = param_1 + 0x32;
  local_10[1] = 0;
  local_10[0] = 0;
  local_14 = piVar1;
  if (piVar3 != (int *)0x0) {
    piStack_2c = local_10 + 1;
    iStack_30 = (int)local_10;
    apiStack_38[1] = (int *)0x10058784;
    (**(code **)(*piVar3 + 8))();
  }
  iStack_30 = 0x1005878f;
  piStack_2c = piVar3;
  (**(code **)(param_1[0x66] + 0x1fc))();
  iStack_30 = local_10[0];
  apiStack_38[1] = local_14;
  apiStack_38[0] = (int *)0x100587a0;
  (**(code **)(param_1[0x66] + 8))();
  apiStack_38[0] = local_10;
  (**(code **)(*piVar1 + 0xc))(&local_14);
  (**(code **)(*piVar1 + 0x21c))(3);
  uVar2 = (uint)((char)param_1[0x31] == '\0');
  (*(code *)**(undefined4 **)(&iStack_30)[uVar2])
            (0,(local_10[(uint)(unaff_ESI <= unaff_EBP) * 2 + -5] - local_10[uVar2 * 2 + -5]) / 2);
  (**(code **)*apiStack_38[uVar2 == 0])
            ((&iStack_30)[uVar2 * 2] + 5,
             (local_10[(uint)(unaff_ESI <= unaff_EBP) * 2 + -5] -
             (int)(&piStack_2c)[(uint)(uVar2 == 0) * 2]) / 2);
  piVar3 = apiStack_38[1];
  if ((int)apiStack_38[1] <= (int)piStack_2c) {
    piVar3 = piStack_2c;
  }
  (**(code **)(*param_1 + 8))(iStack_30 + 5 + (int)apiStack_38[0],piVar3);
  (**(code **)(*param_1 + 0x30))();
  return;
}

/* 10058860  FUN_10058860  (26 bytes)
 * undefined FUN_10058860()
 */
void __thiscall FUN_10058860(int param_1,undefined4 param_2)

{
  (**(code **)(*(int *)(param_1 + -0xbc) + 0x1d4))(param_2);
  return;
}

/* 10058880  FUN_10058880  (3202 bytes)
 * Panel * FUN_10058880(undefined4 param_1, undefined4 param_2, int param_3, int param_4, int param_5, int param_6)
 * called by: FUN_10064380
 */
Panel * __thiscall
FUN_10058880(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  Label *pLVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  ScrollPanel *pSVar5;
  LineBorder *pLVar6;
  undefined4 *puVar7;
  Button *pBVar8;
  void *this_00;
  Panel *pPVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  byte_conflict *pbVar13;
  TextPanel *this_01;
  uint uVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  int iVar19;
  void *this_02;
  byte_conflict *pbVar20;
  int unaff_EDI;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  char *pcVar24;
  uint uVar25;
  uint uVar26;
  Panel *this_03;
  undefined4 *puVar27;
  void *this_04;
  Panel *pPVar28;
  undefined4 *puVar29;
  void *pvVar30;
  Button BVar31;
  char cVar32;
  void *pvStack_1d4;
  Label *pLVar33;
  void *pvVar34;
  undefined4 uStack_170;
  void *pvStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  undefined1 *apuStack_160 [2];
  Color aCStack_158 [16];
  void *local_148;
  int iStack_144;
  Label *local_140;
  int local_13c;
  int local_138;
  void *local_128;
  undefined4 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_6c;
  void *pvStack_68;
  undefined4 uStack_58;
  undefined4 uStack_44;
  undefined4 uStack_30;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10077b4c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_128 = this;
  vgui::Panel::Panel(this,param_3,param_4,param_5,param_6);
  uVar10 = uStack_170;
  *(undefined4 *)((int)this + 0xbc) = param_1;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = param_2;
  *(undefined ***)this = &PTR_setPos_1007df48;
  uStack_170 = CONCAT13(1,(undefined3)uStack_170);
  if (DAT_100d5908 < 0x280) {
    uStack_170 = uVar10 & 0xffffff;
  }
  puVar18 = (undefined4 *)((int)this + 0x16c);
  for (iVar19 = 0x300; iVar19 != 0; iVar19 = iVar19 + -1) {
    *puVar18 = 0;
    puVar18 = puVar18 + 1;
  }
  pvVar3 = (void *)(DAT_100d5cb0 + 0x22c);
  local_148 = pvVar3;
  iVar19 = FUN_1005cc60(pvVar3,(byte_conflict *)s_Title_Font_1009649c);
  local_13c = iVar19;
  local_138 = FUN_1005cc60(pvVar3,(byte_conflict *)s_Briefing_Text_1009648c);
  pLVar1 = operator_new(0xd0);
  local_4 = 0;
  local_140 = pLVar1;
  if (pLVar1 == (Label *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    lVar21 = __ftol();
    uVar10 = (uint)lVar21;
    lVar21 = __ftol();
    piVar2 = (int *)vgui::Label::Label(pLVar1,s_,(int)lVar21,uVar10);
  }
  local_4 = 0xffffffff;
  pvVar34 = this;
  (**(code **)(*piVar2 + 0x40))();
  apuStack_160[0] = (undefined1 *)*piVar2;
  FUN_1005cce0(pvVar3,iVar19);
  (**(code **)(apuStack_160[0] + 0x208))();
  FUN_1005ccf0(pvVar3,iStack_144,&uStack_168,&uStack_170,(uint *)&stack0xfffffe8c,
               (uint *)&pvStack_16c);
  (**(code **)(*piVar2 + 0x120))();
  FUN_1005cd30(pvVar3,iStack_144,(uint *)&stack0xfffffe88,(uint *)&stack0xfffffe80,
               (uint *)&stack0xfffffe7c,(uint *)&stack0xfffffe84);
  (**(code **)(*piVar2 + 300))();
  (**(code **)(*piVar2 + 0x21c))();
  iVar19 = *piVar2;
  FUN_100349a0(s__Title_SelectYourClass_10096474);
  (**(code **)(iVar19 + 0x200))();
  pvVar3 = operator_new(0xd0);
  uStack_30 = 1;
  pvStack_16c = pvVar3;
  if (pvVar3 == (void *)0x0) {
    pSVar5 = (ScrollPanel *)0x0;
  }
  else {
    lVar21 = __ftol();
    iVar19 = (int)lVar21;
    lVar21 = __ftol();
    iVar4 = (int)lVar21;
    lVar21 = __ftol();
    iVar16 = (int)lVar21;
    lVar21 = __ftol();
    pSVar5 = FUN_1005a860(pvVar3,(int)lVar21,iVar16,iVar4,iVar19);
  }
  *(ScrollPanel **)((int)this + 0x168) = pSVar5;
  uStack_30 = 0xffffffff;
  this_00 = this;
  (**(code **)(*(int *)pSVar5 + 0x40))();
  pvVar3 = (void *)0x0;
  (**(code **)(**(int **)((int)this + 0x168) + 0x200))();
  (**(code **)(**(int **)((int)this + 0x168) + 0x1fc))();
  pLVar6 = operator_new(0x44);
  uStack_44 = 2;
  if (pLVar6 != (LineBorder *)0x0) {
    pvStack_1d4 = (void *)0x10058b72;
    vgui::Color::Color(aCStack_158,0xb2,0x76,0,0);
    apuStack_160[0] = &stack0xfffffe34;
    vgui::LineBorder::LineBorder(pLVar6);
  }
  uStack_44 = 0xffffffff;
  (**(code **)(**(int **)((int)this + 0x168) + 0xd4))();
  (**(code **)(**(int **)((int)this + 0x168) + 0x220))();
  piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x168) + 0x204))();
  uStack_164 = (**(code **)(*piVar2 + 0x18))();
  (**(code **)(**(int **)((int)this + 0x168) + 0x200))();
  pvStack_1d4 = (void *)0x0;
  (**(code **)(**(int **)((int)this + 0x168) + 0x1fc))();
  (**(code **)(**(int **)((int)this + 0x168) + 0x220))();
  puVar18 = (undefined4 *)((int)this + 0x134);
  iVar19 = 0;
  do {
    iVar4 = iVar19;
    lVar21 = __ftol();
    pvVar12 = (void *)lVar21;
    puVar7 = operator_new(0x108);
    this_02 = pvVar3;
    if (puVar7 != (undefined4 *)0x0) {
      pcVar24 = (&PTR_s_civilian_10096a0c)[iVar19];
      *puVar7 = &PTR_FUN_1007df38;
      _strncpy((char *)(puVar7 + 1),pcVar24,0x100);
      *(undefined1 *)((int)puVar7 + 0x103) = 0;
      puVar7[0x41] = 1;
      *puVar7 = &PTR_FUN_1007df34;
      this_02 = pvVar3;
    }
    FUN_100349a0((&PTR_s__Civilian_100969dc)[iVar19]);
    FUN_1006ac7a((undefined1 *)apuStack_160,&DAT_10093568);
    pBVar8 = operator_new(0x130);
    uStack_58 = 3;
    if (pBVar8 == (Button *)0x0) {
      pBVar8 = (Button *)0x0;
    }
    else {
      lVar21 = __ftol();
      this_00 = (void *)lVar21;
      lVar21 = __ftol();
      iVar16 = (int)lVar21;
      lVar21 = __ftol();
      FUN_1005a0b0(pBVar8,(char *)apuStack_160,(int)lVar21,(int)pvVar12,iVar16,(int)this_00,
                   (Button)0x1);
      *(undefined ***)pBVar8 = &PTR_setPos_1007dcc8;
      *(int *)(pBVar8 + 300) = iVar19;
    }
    uStack_58 = 0xffffffff;
    *puVar18 = pBVar8;
    if ((iVar19 < 1) || (9 < iVar19)) {
      FUN_1006ac7a((undefined1 *)apuStack_160,&DAT_10092bf4);
    }
    else {
      FUN_1006ac7a((undefined1 *)apuStack_160,&DAT_10093a90);
    }
    FUN_1005a280((void *)*puVar18,(char)apuStack_160[0]);
    cVar32 = '\0';
    (**(code **)(*(int *)*puVar18 + 0x21c))();
    (**(code **)(*(int *)*puVar18 + 0x240))();
    puVar7 = operator_new(0xc);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = &PTR_FUN_1007dc9c;
      puVar7[1] = iVar19;
      puVar7[2] = this;
    }
    (**(code **)(*(int *)*puVar18 + 0x70))();
    this_03 = this;
    (**(code **)(*(int *)*puVar18 + 0x40))();
    pPVar9 = operator_new(0xc0);
    pvStack_68 = (void *)0x4;
    if (pPVar9 == (Panel *)0x0) {
      pPVar9 = (Panel *)0x0;
    }
    else {
      lVar21 = __ftol();
      vgui::Panel::Panel(pPVar9,0,0,(int)pvVar34,(int)lVar21);
      *(undefined ***)pPVar9 = &PTR_setPos_1007daa0;
      *(undefined4 *)(pPVar9 + 0xbc) = 0xff;
    }
    puVar18[-0x18] = pPVar9;
    iVar19 = *(int *)pPVar9;
    pvStack_68 = (void *)0xffffffff;
    uVar10 = (**(code **)(**(int **)((int)this + 0x168) + 0x204))();
    (**(code **)(iVar19 + 0x40))();
    lVar21 = __ftol();
    pPVar9 = (Panel *)lVar21;
    if (cVar32 != '\0') {
      lVar21 = __ftol();
      pPVar9 = (Panel *)lVar21;
    }
    FUN_1006ac7a(&stack0xfffffe8c,(byte_conflict *)s__Title__s_10096468);
    FUN_100349a0(&stack0xfffffe8c);
    pLVar1 = operator_new(0xd0);
    uStack_6c = 5;
    if (pLVar1 == (Label *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      pLVar33 = pLVar1;
      lVar21 = __ftol();
      piVar2 = (int *)vgui::Label::Label(pLVar1,s_,(int)pPVar9,(int)lVar21);
      pLVar1 = pLVar33;
    }
    iVar19 = *piVar2;
    uStack_6c = 0xffffffff;
    uVar11 = FUN_1005cce0(this_00,unaff_EDI);
    (**(code **)(iVar19 + 0x208))();
    (**(code **)(*piVar2 + 0x40))();
    pvVar3 = this_02;
    FUN_1005ccf0(this_02,(int)pLVar1,(uint *)&stack0xfffffe30,(uint *)&stack0xfffffe28,
                 (uint *)&stack0xfffffe24,(uint *)&pvStack_1d4);
    this_04 = pvStack_1d4;
    pvVar30 = pvVar12;
    (**(code **)(*piVar2 + 0x120))();
    FUN_1005cd30(this_02,(int)pPVar9,(uint *)&stack0xfffffe20,(uint *)&stack0xfffffe18,
                 (uint *)&stack0xfffffe14,(uint *)&stack0xfffffe1c);
    uVar17 = uVar10;
    pPVar28 = this_03;
    puVar29 = puVar7;
    (**(code **)(*piVar2 + 300))();
    uVar26 = 3;
    (**(code **)(*piVar2 + 0x21c))();
    (**(code **)(*piVar2 + 0x200))();
    if ((char)((uint)this_03 >> 0x18) != '\0') {
      iVar19 = 0;
      this_02 = pvVar30;
      this = pPVar9;
      do {
        if (iVar19 == 1) {
          pcVar24 = s__sred_10096460;
        }
        else {
          pcVar24 = s__sblue_10096458;
        }
        FUN_1006ac7a(&stack0xfffffe60,(byte_conflict *)pcVar24);
        pvVar12 = operator_new(0xd4);
        uStack_98 = 6;
        if (pvVar12 == (void *)0x0) {
          pLVar1 = (Label *)0x0;
        }
        else {
          lVar21 = __ftol();
          uVar22 = (uint)lVar21;
          lVar21 = __ftol();
          pLVar1 = FUN_1005a550(pvVar12,&stack0xfffffe60,0,0,(int)lVar21,uVar22);
        }
        uStack_98 = 0xffffffff;
        *(Label **)((int)this + (int)(puVar29 + iVar19 * 3) * 4 + 0x16c) = pLVar1;
        (**(code **)(*(int *)pLVar1 + 0x40))();
        if (iVar19 != 1) {
          (**(code **)(*(int *)pLVar1 + 0x24))();
        }
        (**(code **)(*piVar2 + 0x210))();
        puVar27 = *(undefined4 **)pLVar1;
        pvStack_1d4 = (void *)((float)DAT_100d5908 * 0.0015625 * 150.0);
        pvVar12 = (void *)(*(code *)puVar27[6])();
        __ftol();
        (*(code *)*puVar27)();
        iVar19 = iVar19 + 1;
      } while (iVar19 < 2);
    }
    FUN_100348d0(s__Title_CurrentlyOnYourTeam_1009643c,(char *)((int)this + 0xd70),0x80);
    pLVar1 = operator_new(0xd0);
    uStack_98 = 7;
    if (pLVar1 == (Label *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      lVar21 = __ftol();
      piVar2 = (int *)vgui::Label::Label(pLVar1,s_,uVar17,(int)lVar21);
    }
    puVar18[-0xc] = piVar2;
    uVar17 = puVar18[-0x18];
    uStack_98 = 0xffffffff;
    (**(code **)(*piVar2 + 0x40))();
    uVar25 = 0xff;
    uVar23 = 0;
    uVar22 = 0;
    (**(code **)(*(int *)puVar18[-0xc] + 300))();
    (**(code **)(*(int *)puVar18[-0xc] + 0x21c))();
    iVar19 = *(int *)puVar18[-0xc];
    FUN_1005cce0(this_02,(int)pPVar28);
    (**(code **)(iVar19 + 0x208))();
    FUN_1006ac7a(&stack0xfffffe44,(byte_conflict *)s_classes_short__s_txt_10096424);
    pbVar13 = (*gEngfuncs.COM_LoadFile)(&stack0xfffffe44,5,(int *)0x0);
    pbVar20 = (byte_conflict *)s_Class_Description_not_available__10096400;
    if (pbVar13 != (byte_conflict *)0x0) {
      pbVar20 = pbVar13;
    }
    this_01 = operator_new(0xc0);
    uStack_a8 = 8;
    if (this_01 == (TextPanel *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      lVar21 = __ftol();
      uVar14 = (uint)lVar21;
      lVar21 = __ftol();
      iVar19 = (int)lVar21;
      lVar21 = __ftol();
      piVar2 = (int *)vgui::TextPanel::TextPanel
                                (this_01,(char *)pbVar20,(int)pvVar12,(int)lVar21,iVar19,uVar14);
    }
    uVar14 = puVar18[-0x18];
    uStack_a8 = 0xffffffff;
    (**(code **)(*piVar2 + 0x40))();
    iVar19 = *piVar2;
    FUN_1005cce0(this_02,(int)puVar29);
    (**(code **)(iVar19 + 0x200))();
    FUN_1005ccf0(this_04,(int)pPVar28,(uint *)&stack0xfffffdf4,(uint *)&stack0xfffffdec,
                 (uint *)&stack0xfffffde8,(uint *)&stack0xfffffdf0);
    (**(code **)(*piVar2 + 0x120))(uVar10,uVar26);
    FUN_1005cd30(this_03,(int)pPVar28,(uint *)&stack0xfffffde4,(uint *)&stack0xfffffddc,
                 (uint *)&stack0xfffffdd8,(uint *)&stack0xfffffde0);
    (**(code **)(*piVar2 + 300))(uVar25,uVar22,uVar14,uVar23);
    piVar15 = (int *)(**(code **)(*piVar2 + 0x208))();
    (**(code **)(*piVar15 + 0x68))(&stack0xfffffe08,&stack0xfffffe04);
    (**(code **)(*piVar2 + 8))(iVar19,this_03);
    (**(code **)(*piVar2 + 4))(&stack0xfffffe00,&stack0xfffffdd4);
    iVar19 = uVar17 + uVar26;
    if ((int *)puVar18[0xe] != (int *)0x0) {
      (**(code **)(*(int *)puVar18[0xe] + 4))(&stack0xfffffdf8,&stack0xfffffdcc);
      iVar16 = (**(code **)(*(int *)puVar18[0xe] + 0x1c))();
      if (iVar19 < (int)(iVar16 + uVar17)) {
        iVar19 = (**(code **)(*(int *)puVar18[0xe] + 0x1c))();
        iVar19 = iVar19 + uVar17;
      }
    }
    (**(code **)(*(int *)puVar18[-0x18] + 8))(uVar11 + (int)puVar7,iVar19);
    puVar18 = puVar18 + 1;
    iVar19 = iVar4 + 1;
  } while (iVar19 < 0xb);
  pBVar8 = operator_new(300);
  uStack_58 = 9;
  if (pBVar8 == (Button *)0x0) {
    pBVar8 = (Button *)0x0;
  }
  else {
    BVar31 = (Button)0x0;
    lVar21 = __ftol();
    uVar10 = (uint)lVar21;
    lVar21 = __ftol();
    uVar17 = (uint)lVar21;
    uVar26 = 0;
    lVar21 = __ftol();
    uVar11 = (uint)lVar21;
    pcVar24 = FUN_100349a0(s_HD_Menu_Cancel_100963ee + 2);
    pBVar8 = FUN_1005a0b0(pBVar8,pcVar24,uVar11,uVar26,uVar17,uVar10,BVar31);
  }
  *(Button **)((int)this + 0x164) = pBVar8;
  uStack_58 = 0xffffffff;
  (**(code **)(*(int *)pBVar8 + 0x40))();
  puVar18 = operator_new(8);
  if (puVar18 != (undefined4 *)0x0) {
    *puVar18 = &PTR_FUN_1007da94;
    puVar18[1] = 0;
  }
  (**(code **)(**(int **)((int)this + 0x164) + 0x240))();
  *(undefined4 *)((int)this + 0xd6c) = 0;
  ExceptionList = pvStack_68;
  return this;
}

/* 10059510  FUN_10059510  (720 bytes)
 * undefined FUN_10059510()
 */
void __fastcall FUN_10059510(int *param_1)

{
  int *piVar1;
  char *pcVar2;
  short *psVar3;
  int *piVar4;
  int iVar5;
  undefined4 unaff_ESI;
  int iVar6;
  char cVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  
  if (DAT_10190b24 != 0) {
    lVar8 = __ftol();
    uStack_108 = (undefined4)lVar8;
    iVar6 = 0;
    iVar5 = iStack_104;
    do {
      iStack_104 = iVar5;
      cVar7 = *(int *)(DAT_100d5cb0 + 0x894 + DAT_10190b24 * 4) == -1;
      uStack_10c = CONCAT13(cVar7,(undefined3)uStack_10c);
      if ((bool)cVar7) {
        if (iVar6 == 0) {
          (**(code **)(*(int *)param_1[0x4d] + 0x24))(1);
          (**(code **)(*param_1 + 0x20c))(0);
          __ftol();
        }
        else {
          (**(code **)(*(int *)param_1[iVar6 + 0x4d] + 0x24))(0);
        }
      }
      else {
        iVar5 = (**(code **)(*(int *)param_1[iVar6 + 0x4d] + 0x260))();
        if ((iVar5 == 0) && (iVar6 != 0)) {
          (**(code **)(*(int *)param_1[iVar6 + 0x4d] + 0x24))(1);
          puVar9 = *(undefined4 **)param_1[iVar6 + 0x4d];
          uVar10 = uStack_10c;
          lVar8 = __ftol();
          (*(code *)*puVar9)((int)lVar8,uVar10);
          __ftol();
          if (param_1[0x35b] == 0) {
            (**(code **)(*param_1 + 0x20c))(iVar6);
          }
          cVar7 = (char)((uint)unaff_ESI >> 0x18);
        }
        else {
          (**(code **)(*(int *)param_1[iVar6 + 0x4d] + 0x24))(0);
        }
      }
      iVar5 = 0;
      psVar3 = &DAT_1019021c;
      pcVar2 = &DAT_1018fbf2;
      do {
        if ((((*(int *)(pcVar2 + -6) != 0) && ((char)psVar3[1] != '\0')) && (*pcVar2 == '\0')) &&
           ((*psVar3 == DAT_10190b24 && ((psVar3[-1] == iVar6 || (cVar7 != '\0')))))) {
          iVar5 = iVar5 + 1;
        }
        pcVar2 = pcVar2 + 0x14;
        psVar3 = psVar3 + 0x10;
      } while ((int)pcVar2 < 0x101900de);
      piVar4 = param_1 + 0x35c;
      puVar9 = &uStack_108;
      FUN_1006ac7a((undefined1 *)puVar9,(byte_conflict *)piVar4);
      (**(code **)(*(int *)param_1[iVar6 + 0x41] + 0x200))
                ((int *)param_1[iVar6 + 0x41],&uStack_108,puVar9,piVar4,iVar5);
      iVar5 = DAT_10190b24 % DAT_10096970;
      (**(code **)(*(int *)param_1[iVar6 + 0x41] + 0x120))
                ((&DAT_10096974)[iVar5 * 3],(&DAT_10096978)[iVar5 * 3],(&DAT_1009697c)[iVar5 * 3],0)
      ;
      iStack_104 = 0x40;
      piVar4 = param_1 + iVar6 + 0x5b;
      do {
        if ((int *)*piVar4 != (int *)0x0) {
          (**(code **)(*(int *)*piVar4 + 0x24))(0);
        }
        if ((int *)param_1[iVar6 + DAT_10190b24 * 0xc + 0x4f] == (int *)0x0) {
          piVar1 = (int *)param_1[iVar6 + 0x5b];
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 0x24))(1);
          }
        }
        else {
          (**(code **)(*(int *)param_1[iVar6 + DAT_10190b24 * 0xc + 0x4f] + 0x24))(1);
        }
        piVar4 = piVar4 + 0xc;
        iStack_104 = iStack_104 + -1;
      } while (iStack_104 != 0);
      iVar6 = iVar6 + 1;
      iVar5 = 0;
    } while (iVar6 < 0xb);
    if (DAT_10190a10 != 0) {
      puVar9 = *(undefined4 **)param_1[0x59];
      uVar10 = uStack_108;
      lVar8 = __ftol();
      (*(code *)*puVar9)((int)lVar8,uVar10);
      (**(code **)(*(int *)param_1[0x59] + 0x24))(1);
      return;
    }
    (**(code **)(*(int *)param_1[0x59] + 0x24))(0);
  }
  return;
}

/* 100597e0  FUN_100597e0  (127 bytes)
 * undefined4 FUN_100597e0(int param_1)
 */
undefined4 __thiscall FUN_100597e0(void *this,int param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  
  if (((-1 < param_1) && (param_1 < 10)) &&
     (in_EAX = 0, *(int *)((int)this + param_1 * 4 + 0x134) != 0)) {
    if (param_1 == 0) {
      if (*(int *)(DAT_100d5cb0 + 0x894 + DAT_10190b24 * 4) == -1) {
        uVar1 = (**(code **)(**(int **)((int)this + 0x134) + 600))();
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
      param_1 = 10;
    }
    in_EAX = (**(code **)(**(int **)((int)this + param_1 * 4 + 0x134) + 0x260))();
    if (in_EAX == 0) {
      uVar1 = (**(code **)(**(int **)((int)this + param_1 * 4 + 0x134) + 600))();
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

/* 10059860  FUN_10059860  (30 bytes)
 * undefined FUN_10059860(int * param_1)
 */
void __fastcall FUN_10059860(int *param_1)

{
  (**(code **)(*param_1 + 0x24))(0);
  (**(code **)(*(int *)param_1[0x5a] + 0x20c))(0,0);
  return;
}

/* 10059880  FUN_10059880  (134 bytes)
 * undefined FUN_10059880(int param_1)
 */
void __thiscall FUN_10059880(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0xb;
  puVar2 = (undefined4 *)((int)this + 0xd4);
  do {
    (**(code **)(*(int *)puVar2[0x18] + 0x234))(0);
    (**(code **)(*(int *)*puVar2 + 0x24))(0);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((10 < param_1) || (param_1 < 0)) {
    param_1 = 0;
  }
  (**(code **)(**(int **)((int)this + param_1 * 4 + 0x134) + 0x234))(1);
  (**(code **)(**(int **)((int)this + param_1 * 4 + 0xd4) + 0x24))(1);
  *(int *)((int)this + 0xd6c) = param_1;
  (**(code **)(**(int **)((int)this + 0x168) + 0x20c))(0,0);
  (**(code **)(**(int **)((int)this + 0x168) + 0x220))();
  return;
}

/* 10059910  FUN_10059910  (49 bytes)
 * undefined FUN_10059910(int param_1)
 */
void __fastcall FUN_10059910(int param_1)

{
  (*gEngfuncs.pfnClientCmd)((char *)(param_1 + 4));
  if (*(int *)(param_1 + 0x104) != 0) {
    FUN_10064200((int)DAT_100d5cb0);
    return;
  }
  FUN_100636d0(DAT_100d5cb0);
  return;
}

/* 10059950  FUN_10059950  (49 bytes)
 * undefined FUN_10059950(int param_1)
 */
void __fastcall FUN_10059950(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_10064200((int)DAT_100d5cb0);
    return;
  }
  FUN_100636d0(DAT_100d5cb0);
  FUN_10064050(DAT_100d5cb0,*(int *)(param_1 + 4));
  return;
}

/* 10059990  FUN_10059990  (3 bytes)
 * undefined FUN_10059990()
 */
void FUN_10059990(void)

{
  return;
}

/* 100599a0  FUN_100599a0  (3 bytes)
 * undefined FUN_100599a0()
 */
void FUN_100599a0(void)

{
  return;
}

/* 100599b0  FUN_100599b0  (3 bytes)
 * undefined FUN_100599b0()
 */
void FUN_100599b0(void)

{
  return;
}

/* 100599c0  FUN_100599c0  (27 bytes)
 * undefined FUN_100599c0()
 */
void __fastcall FUN_100599c0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd6c) = 0;
  return;
}

/* 10059fa0  FUN_10059fa0  (14 bytes)
 * undefined FUN_10059fa0()
 */
void __thiscall FUN_10059fa0(int param_1,bool *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1006ac1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vgui::DataInputStream::seekStart((DataInputStream *)(param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}

/* 10059fb0  FUN_10059fb0  (14 bytes)
 * undefined FUN_10059fb0()
 */
void __thiscall FUN_10059fb0(int param_1,int param_2,bool *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x1006ac20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vgui::DataInputStream::seekRelative
            ((DataInputStream *)(param_1 - *(int *)(param_1 + -4)),param_2,param_3);
  return;
}

/* 10059fc0  FUN_10059fc0  (14 bytes)
 * undefined FUN_10059fc0()
 */
void __thiscall FUN_10059fc0(int param_1,bool *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1006ac26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vgui::DataInputStream::seekEnd((DataInputStream *)(param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}

/* 10059fd0  FUN_10059fd0  (14 bytes)
 * undefined FUN_10059fd0()
 */
void __thiscall FUN_10059fd0(int param_1,bool *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1006ac2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vgui::DataInputStream::getAvailable((DataInputStream *)(param_1 - *(int *)(param_1 + -4)),param_2)
  ;
  return;
}

/* 10059fe0  FUN_10059fe0  (14 bytes)
 * undefined FUN_10059fe0()
 */
void __thiscall FUN_10059fe0(int param_1,uchar *param_2,int param_3,bool *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x1006ac32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vgui::DataInputStream::readUChar
            ((DataInputStream *)(param_1 - *(int *)(param_1 + -4)),param_2,param_3,param_4);
  return;
}

/* 10059ff0  FUN_10059ff0  (14 bytes)
 * undefined FUN_10059ff0()
 */
void __thiscall FUN_10059ff0(int param_1,bool *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1006ac38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vgui::DataInputStream::readUChar((DataInputStream *)(param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}

/* 1005a000  FUN_1005a000  (14 bytes)
 * undefined FUN_1005a000()
 */
void __thiscall FUN_1005a000(int param_1,bool *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1006ac3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vgui::DataInputStream::close((DataInputStream *)(param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}

/* 1005a010  FUN_1005a010  (85 bytes)
 * undefined * FUN_1005a010(byte.conflict * param_1)
 * called by: FUN_1005a070
 */
undefined * __cdecl FUN_1005a010(byte_conflict *param_1)

{
  undefined1 local_100 [256];
  
  FUN_1006ac7a(local_100,param_1);
  FUN_1006ac7a(&DAT_1018d19c,(byte_conflict *)s_gfx_vgui__s_tga_100964d8);
  return &DAT_1018d19c;
}

/* 1005a070  FUN_1005a070  (49 bytes)
 * undefined FUN_1005a070(void)
 * called by: FUN_1005a500, FUN_1005a550, FUN_1005a620
 */
void FUN_1005a070(void)

{
  undefined *puVar1;
  byte_conflict local_100 [256];
  
  FUN_1006ac7a(local_100,(byte_conflict *)s___d__s_100964e8);
  puVar1 = FUN_1005a010(local_100);
  FUN_1005b8d0(puVar1);
  return;
}

/* 1005a0b0  FUN_1005a0b0  (86 bytes)
 * Button * FUN_1005a0b0(Button * param_1, char * param_2, int param_3, int param_4, int param_5, int param_6, Button param_7)
 * called by: FUN_10058880, FUN_1005a620, FUN_1005bb90, FUN_1005f220, FUN_10060c70, FUN_100615a0, FUN_10061720, FUN_100655d0
 */
Button * __thiscall
FUN_1005a0b0(Button *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6,
            Button param_7)

{
  vgui::Button::Button(param_1,s_,param_3,param_4,param_5,param_6);
  *(undefined ***)param_1 = &PTR_setPos_1007e4a4;
  param_1[0x128] = param_7;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  FUN_1005a170((int *)param_1);
  FUN_1005a250(param_1,param_2);
  return param_1;
}

/* 1005a110  FUN_1005a110  (83 bytes)
 * Button * FUN_1005a110(undefined4 param_1, char * param_2, int param_3, int param_4, int param_5, int param_6)
 * called by: FUN_10060c70
 */
Button * __thiscall
FUN_1005a110(void *this,undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  vgui::Button::Button(this,s_,param_3,param_4,param_5,param_6);
  *(undefined ***)this = &PTR_setPos_1007e4a4;
  *(undefined4 *)((int)this + 0xf0) = param_1;
  *(undefined1 *)((int)this + 0x128) = 0;
  FUN_1005a170(this);
  FUN_1005a250(this,param_2);
  return this;
}

/* 1005a170  FUN_1005a170  (116 bytes)
 * undefined FUN_1005a170(int * param_1)
 * called by: FUN_1005a0b0, FUN_1005a110
 */
void __fastcall FUN_1005a170(int *param_1)

{
  undefined4 *puVar1;
  
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  (**(code **)(*param_1 + 0x124))(3);
  (**(code **)(*param_1 + 0x21c))(3);
  if ((char)param_1[0x4a] == '\0') {
    puVar1 = operator_new(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_1007e70c;
      puVar1[2] = param_1;
      (**(code **)(*param_1 + 0x70))(puVar1);
      *(undefined1 *)(param_1 + 0x48) = 0;
      return;
    }
    (**(code **)(*param_1 + 0x70))(0);
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}

/* 1005a1f0  FUN_1005a1f0  (95 bytes)
 * undefined FUN_1005a1f0(char * param_1)
 * called by: FUN_1005a250, FUN_1005a280
 */
void __fastcall FUN_1005a1f0(char *param_1)

{
  Label *extraout_ECX;
  Label *extraout_ECX_00;
  Label *this;
  undefined1 local_80 [31];
  undefined1 local_61;
  
  if (param_1[0x120] == '\0') {
    FUN_1006ac7a(local_80,(byte_conflict *)s__s_100964f0);
    this = extraout_ECX_00;
  }
  else {
    FUN_1006ac7a(local_80,(byte_conflict *)s__c__s_100964f8);
    this = extraout_ECX;
  }
  local_61 = 0;
  vgui::Label::setText(this,param_1);
  return;
}

/* 1005a250  FUN_1005a250  (43 bytes)
 * undefined FUN_1005a250(char * param_1)
 * called by: FUN_1005a0b0, FUN_1005a110
 */
void __thiscall FUN_1005a250(void *this,char *param_1)

{
  _strncpy((char *)((int)this + 0x100),param_1,0x20);
  *(undefined1 *)((int)this + 0x11f) = 0;
  FUN_1005a1f0(this);
  return;
}

/* 1005a280  FUN_1005a280  (18 bytes)
 * undefined FUN_1005a280(char param_1)
 * called by: FUN_10058880, FUN_10060180, FUN_10060c70, FUN_100655d0, FUN_10066020
 */
void __thiscall FUN_1005a280(void *this,char param_1)

{
  *(char *)((int)this + 0x120) = param_1;
  FUN_1005a1f0(this);
  return;
}

/* 1005a2a0  FUN_1005a2a0  (7 bytes)
 * undefined1 FUN_1005a2a0(int param_1)
 * called by: FUN_100601f0
 */
undefined1 __fastcall FUN_1005a2a0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x120);
}

/* 1005a2b0  FUN_1005a2b0  (25 bytes)
 * undefined FUN_1005a2b0(int param_1)
 * called by: FUN_10060530
 */
void __thiscall FUN_1005a2b0(void *this,int param_1)

{
  *(int *)((int)this + 0xf4) = param_1;
  (**(code **)(*(int *)this + 0x250))(0,0);
  return;
}

/* 1005a2d0  FUN_1005a2d0  (23 bytes)
 * undefined FUN_1005a2d0(undefined4 param_1)
 * called by: FUN_10060450
 */
void __thiscall FUN_1005a2d0(void *this,undefined4 *param_1)

{
  if (*(void **)((int)this + 0xf4) != (void *)0x0) {
    FUN_10060450(*(void **)((int)this + 0xf4),param_1);
  }
  return;
}

/* 1005a2f0  FUN_1005a2f0  (119 bytes)
 * undefined FUN_1005a2f0(Label * param_1)
 */
void __fastcall FUN_1005a2f0(Label *param_1)

{
  int *piVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0xfc) != 0) {
    cVar2 = (**(code **)(*(int *)param_1 + 0x238))();
    piVar1 = *(int **)(param_1 + 0xfc);
    if (cVar2 == '\0') {
      piVar1[0x34] = 0;
      (**(code **)(*piVar1 + 0x30))();
    }
    else {
      piVar1[0x34] = 1;
      (**(code **)(*piVar1 + 0x30))();
    }
  }
  cVar2 = (**(code **)(*(int *)param_1 + 0x248))();
  if (cVar2 != '\0') {
    (**(code **)(*(int *)param_1 + 0x124))(7);
    vgui::Label::paint(param_1);
    return;
  }
  (**(code **)(*(int *)param_1 + 0x124))(3);
  vgui::Label::paint(param_1);
  return;
}

/* 1005a370  FUN_1005a370  (85 bytes)
 * undefined FUN_1005a370(int * param_1)
 */
void __fastcall FUN_1005a370(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x248))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x17c))(4);
    (**(code **)(*param_1 + 0x180))(0,0,param_1[3],param_1[4]);
  }
  (**(code **)(*param_1 + 0x17c))(6);
  (**(code **)(*param_1 + 0x184))(0,0,param_1[3],param_1[4]);
  return;
}

/* 1005a3d0  FUN_1005a3d0  (60 bytes)
 * undefined FUN_1005a3d0(int * param_1)
 * called by: FUN_1005a3d0, FUN_1005ab90
 */
void __fastcall FUN_1005a3d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_1005a440((int)param_1);
  if (iVar1 != 0) {
    FUN_10060280(iVar1);
    if (*(void **)(iVar1 + 0xbc) != (void *)0x0) {
      piVar2 = (int *)FUN_100602d0(*(void **)(iVar1 + 0xbc),iVar1);
      FUN_1005a3d0(piVar2);
    }
  }
  (**(code **)(*param_1 + 0x234))(1);
  return;
}

/* 1005a410  FUN_1005a410  (36 bytes)
 * undefined FUN_1005a410(int * param_1)
 * called by: FUN_1005aba0
 */
void __fastcall FUN_1005a410(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1005a440((int)param_1);
  if ((iVar1 == 0) || (param_1[0x3d] == 0)) {
    (**(code **)(*param_1 + 0x234))(0);
  }
  return;
}

/* 1005a440  FUN_1005a440  (7 bytes)
 * undefined4 FUN_1005a440(int param_1)
 * called by: FUN_1005a3d0, FUN_1005a410
 */
undefined4 __fastcall FUN_1005a440(int param_1)

{
  return *(undefined4 *)(param_1 + 0xf8);
}

/* 1005a460  FUN_1005a460  (160 bytes)
 * bool FUN_1005a460(int param_1)
 */
bool __fastcall FUN_1005a460(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 300) == -1) {
    return *(int *)(DAT_100d5cb0 + 0x894 + DAT_10190b24 * 4) == -1;
  }
  if (((*(uint *)(DAT_100d5cb0 + 0x894) & *(uint *)(&DAT_10096a44 + *(int *)(param_1 + 300) * 4)) !=
       0) || ((*(uint *)(DAT_100d5cb0 + 0x894 + DAT_10190b24 * 4) &
              *(uint *)(&DAT_10096a44 + *(int *)(param_1 + 300) * 4)) != 0)) {
    return true;
  }
  fVar1 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_hud_classautokill_10093834);
  if (fVar1 != (float10)0.0) {
    if (*(int *)(DAT_100d5cb0 + 0x8b8) != 0) {
      if (*(int *)(param_1 + 300) == 10) {
        return true;
      }
      if (*(int *)(DAT_100d5cb0 + 0x8b8) != 0) {
        return false;
      }
    }
    if (*(int *)(param_1 + 300) == DAT_10190a10) {
      return true;
    }
  }
  return false;
}

/* 1005a500  FUN_1005a500  (73 bytes)
 * Label * FUN_1005a500(undefined4 param_1, int param_2, int param_3)
 * called by: FUN_10060530
 */
Label * __thiscall FUN_1005a500(void *this,undefined4 param_1,int param_2,int param_3)

{
  Image *pIVar1;
  
  vgui::Label::Label(this,s_,param_2,param_3);
  *(undefined ***)this = &PTR_setPos_1007e738;
  vgui::Label::setContentFitted(this,true);
  pIVar1 = (Image *)FUN_1005a070();
  *(Image **)((int)this + 0xd0) = pIVar1;
  vgui::Label::setImage(this,pIVar1);
  return this;
}

/* 1005a550  FUN_1005a550  (83 bytes)
 * Label * FUN_1005a550(undefined4 param_1, int param_2, int param_3, int param_4, int param_5)
 * called by: FUN_10058880
 */
Label * __thiscall
FUN_1005a550(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  Image *pIVar1;
  
  vgui::Label::Label(this,s_,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_setPos_1007e738;
  vgui::Label::setContentFitted(this,true);
  pIVar1 = (Image *)FUN_1005a070();
  *(Image **)((int)this + 0xd0) = pIVar1;
  vgui::Label::setImage(this,pIVar1);
  return this;
}

/* 1005a5b0  FUN_1005a5b0  (32 bytes)
 * undefined FUN_1005a5b0()
 */
undefined1 * __fastcall FUN_1005a5b0(int param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  puVar1 = auStack_8;
  (**(code **)(**(int **)(param_1 + 0xd0) + 8))(auStack_8,auStack_4);
  return puVar1;
}

/* 1005a5d0  FUN_1005a5d0  (32 bytes)
 * undefined FUN_1005a5d0()
 */
undefined1 * __fastcall FUN_1005a5d0(int param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  puVar1 = auStack_4;
  (**(code **)(**(int **)(param_1 + 0xd0) + 8))(puVar1,auStack_8);
  return puVar1;
}

/* 1005a5f0  FUN_1005a5f0  (37 bytes)
 * undefined FUN_1005a5f0(int * param_1)
 */
void __fastcall FUN_1005a5f0(int *param_1)

{
  (**(code **)(*param_1 + 0x17c))(5);
  (**(code **)(*param_1 + 0x180))(0,0,param_1[3],param_1[4]);
  return;
}

/* 1005a620  FUN_1005a620  (142 bytes)
 * Button * FUN_1005a620(undefined4 param_1, char * param_2, int param_3, int param_4, int param_5, int param_6)
 * called by: FUN_1005a860
 */
Button * __thiscall
FUN_1005a620(void *this,undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  Image *pIVar1;
  InputSignal *pIVar2;
  
  FUN_1005a0b0(this,param_2,param_3,param_4,param_5,param_6,(Button)0x0);
  *(undefined ***)this = &PTR_setPos_1007e96c;
  vgui::Label::setFgColor(this,3);
  pIVar1 = (Image *)FUN_1005a070();
  *(Image **)((int)this + 300) = pIVar1;
  vgui::Label::setImage(this,pIVar1);
  pIVar2 = operator_new(0xc);
  if (pIVar2 != (InputSignal *)0x0) {
    *(void **)(pIVar2 + 4) = this;
    *(undefined ***)pIVar2 = &PTR_FUN_1007e70c;
    *(void **)(pIVar2 + 8) = this;
    vgui::Panel::addInputSignal(this,pIVar2);
    return this;
  }
  vgui::Panel::addInputSignal(this,(InputSignal *)0x0);
  return this;
}

/* 1005a6b0  FUN_1005a6b0  (131 bytes)
 * undefined FUN_1005a6b0()
 */
void __fastcall FUN_1005a6b0(int *param_1)

{
  char cVar1;
  int iVar2;
  Color aCStack_c [12];
  
  if (param_1[0x4b] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x248))();
    if (cVar1 == '\0') {
      iVar2 = 0x80;
    }
    else {
      iVar2 = 0;
    }
    iVar2 = vgui::Color::Color(aCStack_c,0xff,0xff,0xff,iVar2);
    (**(code **)(*(int *)param_1[0x4b] + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
    (**(code **)(*(int *)param_1[0x4b] + 0x5c))(param_1);
  }
  return;
}

/* 1005a750  FUN_1005a750  (262 bytes)
 * undefined FUN_1005a750()
 */
void __fastcall FUN_1005a750(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puStack_18;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  puVar3 = auStack_8;
  puStack_18 = auStack_4;
  (**(code **)(*param_1 + 0xe8))(puVar3);
  (**(code **)(*param_1 + 0x21c))(&stack0xffffffec,&puStack_18);
  (**(code **)(*param_1 + 0x17c))(6);
  uVar6 = 0;
  uVar5 = 0;
  puVar4 = puStack_18;
  (**(code **)(*param_1 + 0x184))(0,0,puVar3,puStack_18);
  cVar1 = (**(code **)(*param_1 + 0x204))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x17c))(4);
    uVar2 = 0;
    (**(code **)(*param_1 + 0x180))(0,uVar6,puVar3,uVar5);
    (**(code **)(*param_1 + 0x17c))(3);
    (**(code **)(*param_1 + 0x184))(0,uVar6,puVar3,uVar2);
    return;
  }
  (**(code **)(*param_1 + 0x17c))(4);
  uVar2 = 0;
  (**(code **)(*param_1 + 0x180))(uVar6,0,uVar5,puVar4);
  (**(code **)(*param_1 + 0x17c))(3);
  (**(code **)(*param_1 + 0x184))(uVar2,0,uVar6,puVar4);
  return;
}

/* 1005a860  FUN_1005a860  (640 bytes)
 * ScrollPanel * FUN_1005a860(int param_1, int param_2, int param_3, int param_4)
 * called by: FUN_10058880, FUN_1005bb90, FUN_100655d0
 */
ScrollPanel * __thiscall FUN_1005a860(void *this,int param_1,int param_2,int param_3,int param_4)

{
  ScrollBar *pSVar1;
  void *pvVar2;
  Button *pBVar3;
  Slider *pSVar4;
  int unaff_retaddr;
  int iVar5;
  void *pvStack_c;
  code *pcStack_8;
  Slider *local_4;
  
  local_4 = (Slider *)0xffffffff;
  pcStack_8 = FUN_10077ba2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  vgui::ScrollPanel::ScrollPanel(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_setPos_1007ee14;
  pSVar1 = vgui::ScrollPanel::getVerticalScrollBar(this);
  pvVar2 = operator_new(0x130);
  local_4 = (Slider *)0x0;
  if (pvVar2 == (void *)0x0) {
    pBVar3 = (Button *)0x0;
  }
  else {
    pBVar3 = FUN_1005a620(pvVar2,0,s_,0,0,0x10,0x10);
  }
  iVar5 = 0;
  local_4 = (Slider *)0xffffffff;
  (**(code **)(*(int *)pSVar1 + 0x21c))(pBVar3);
  pvVar2 = operator_new(0x130);
  pvStack_c = (void *)0x1;
  if (pvVar2 == (void *)0x0) {
    pBVar3 = (Button *)0x0;
  }
  else {
    pBVar3 = FUN_1005a620(pvVar2,1,s_,0,0,0x10,0x10);
  }
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*(int *)pSVar1 + 0x21c))(pBVar3,1);
  pSVar4 = operator_new(0xfc);
  local_4 = pSVar4;
  if (pSVar4 == (Slider *)0x0) {
    pSVar4 = (Slider *)0x0;
  }
  else {
    vgui::Slider::Slider(pSVar4,0,param_3 + -1,param_3,unaff_retaddr + param_3 * -2 + 2,true);
    *(undefined ***)pSVar4 = &PTR_setPos_1007ebd4;
  }
  (**(code **)(*(int *)pSVar1 + 0x224))(pSVar4);
  (**(code **)(*(int *)pSVar1 + 0xd8))(0);
  (**(code **)(*(int *)pSVar1 + 0xdc))(0);
  (**(code **)(*(int *)pSVar1 + 0xe0))(0);
  pSVar1 = vgui::ScrollPanel::getHorizontalScrollBar(this);
  pvVar2 = operator_new(0x130);
  if (pvVar2 == (void *)0x0) {
    pBVar3 = (Button *)0x0;
  }
  else {
    pBVar3 = FUN_1005a620(pvVar2,2,s_,0,0,0x10,0x10);
  }
  (**(code **)(*(int *)pSVar1 + 0x21c))(pBVar3,0);
  pvVar2 = operator_new(0x130);
  if (pvVar2 == (void *)0x0) {
    pBVar3 = (Button *)0x0;
  }
  else {
    pBVar3 = FUN_1005a620(pvVar2,3,s_,0,0,0x10,0x10);
  }
  (**(code **)(*(int *)pSVar1 + 0x21c))(pBVar3,1);
  pSVar4 = operator_new(0xfc);
  if (pSVar4 == (Slider *)0x0) {
    pSVar4 = (Slider *)0x0;
  }
  else {
    vgui::Slider::Slider(pSVar4,iVar5,0,param_3 + iVar5 * -2,iVar5,false);
    *(undefined ***)pSVar4 = &PTR_setPos_1007ebd4;
  }
  (**(code **)(*(int *)pSVar1 + 0x224))(pSVar4);
  (**(code **)(*(int *)pSVar1 + 0xd8))(0);
  (**(code **)(*(int *)pSVar1 + 0xdc))(0);
  (**(code **)(*(int *)pSVar1 + 0xe0))(0);
  ExceptionList = pBVar3;
  return this;
}

/* 1005aae0  FUN_1005aae0  (33 bytes)
 * undefined FUN_1005aae0()
 */
void __fastcall FUN_1005aae0(int param_1)

{
  if ((DAT_100d5cb0 != 0) && (*(int **)(param_1 + 8) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 8) + 0x20c))(*(undefined4 *)(param_1 + 4));
  }
  return;
}

/* 1005ab10  FUN_1005ab10  (96 bytes)
 * undefined FUN_1005ab10(int param_1)
 */
void __fastcall FUN_1005ab10(int param_1)

{
  float10 fVar1;
  
  (*gEngfuncs.pfnClientCmd)((char *)(param_1 + 4));
  if (*(int *)(param_1 + 0x104) == 0) {
    FUN_100636d0(DAT_100d5cb0);
  }
  else {
    FUN_10064200((int)DAT_100d5cb0);
  }
  fVar1 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_hud_classautokill_10093834);
  if ((fVar1 != (float10)0.0) && (DAT_10190a10 != 0)) {
    (*gEngfuncs.pfnClientCmd)(&DAT_10096504);
  }
  return;
}

/* 1005ab70  FUN_1005ab70  (1 bytes)
 * undefined FUN_1005ab70()
 */
void FUN_1005ab70(void)

{
  return;
}

/* 1005ab80  FUN_1005ab80  (3 bytes)
 * undefined FUN_1005ab80()
 */
undefined4 FUN_1005ab80(void)

{
  return 0;
}

/* 1005ab90  FUN_1005ab90  (11 bytes)
 * undefined FUN_1005ab90()
 */
void __fastcall FUN_1005ab90(int param_1)

{
  FUN_1005a3d0(*(int **)(param_1 + 8));
  return;
}

/* 1005aba0  FUN_1005aba0  (11 bytes)
 * undefined FUN_1005aba0()
 */
void __fastcall FUN_1005aba0(int param_1)

{
  FUN_1005a410(*(int **)(param_1 + 8));
  return;
}

/* 1005abb0  FUN_1005abb0  (13 bytes)
 * undefined FUN_1005abb0()
 */
void __fastcall FUN_1005abb0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

/* 1005abc0  FUN_1005abc0  (25 bytes)
 * Panel * FUN_1005abc0(Panel * param_1)
 * called by: FUN_1005ce70
 */
Panel * __fastcall FUN_1005abc0(Panel *param_1)

{
  vgui::Panel::Panel(param_1);
  *(undefined ***)param_1 = &PTR_setPos_1007f03c;
  FUN_1005b200((int)param_1);
  return param_1;
}

/* 1005abe0  FUN_1005abe0  (30 bytes)
 * undefined4 * FUN_1005abe0(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_1005abe0(void *this,byte_conflict param_1)

{
  FUN_1005ac00(this);
  if ((param_1 & 1) != 0) {
    FUN_1006ad4c(this);
  }
  return this;
}

/* 1005ac00  FUN_1005ac00  (11 bytes)
 * undefined FUN_1005ac00(undefined4 * param_1)
 * called by: FUN_1005abe0, Unwind@10077cb0
 */
void __fastcall FUN_1005ac00(undefined4 *param_1)

{
  *param_1 = &PTR_setPos_1007f03c;
  FUN_1005ad20((int)param_1);
  return;
}

/* 1005ac10  FUN_1005ac10  (260 bytes)
 * uint FUN_1005ac10(int param_1, int param_2)
 * called by: FUN_1005ce70
 */
uint __thiscall FUN_1005ac10(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10077bbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1005ad20((int)this);
  iVar5 = param_1 * param_2;
  piVar2 = operator_new(iVar5 * 0x14 + 4);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = iVar5;
    piVar2 = piVar2 + 1;
    FUN_1006cacb(piVar2,0x14,iVar5,FUN_1005abb0);
  }
  local_4 = 0xffffffff;
  *(int **)((int)this + 0xe0) = piVar2;
  puVar3 = operator_new((param_2 + param_1) * 8);
  *(undefined4 **)((int)this + 0xd0) = puVar3;
  puVar1 = puVar3 + param_1;
  *(undefined4 **)((int)this + 0xd4) = puVar1;
  *(undefined4 **)((int)this + 0xd8) = puVar1 + param_2;
  *(undefined4 **)((int)this + 0xdc) = puVar1 + param_2 + param_1;
  if ((*(int *)((int)this + 0xe0) == 0) || (puVar3 == (undefined4 *)0x0)) {
    uVar4 = FUN_1005ad20((int)this);
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    for (iVar5 = (param_2 + param_1 & 0x1fffffffU) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    *(int *)((int)this + 0xc0) = param_1;
    *(int *)((int)this + 0xc4) = param_2;
    uVar4 = 1;
  }
  ExceptionList = local_c;
  return uVar4;
}

/* 1005ad20  FUN_1005ad20  (68 bytes)
 * undefined FUN_1005ad20(int param_1)
 * called by: FUN_1005ac00, FUN_1005ac10
 */
void __fastcall FUN_1005ad20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  if (iVar1 != 0) {
    FUN_1006cb4d(iVar1,0x14,*(int *)(iVar1 + -4),CBasePlayerItem::AttemptToMaterialize);
    FUN_1006ad4c((LPVOID)(iVar1 + -4));
  }
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0xd0));
  FUN_1005b200(param_1);
  return;
}

/* 1005ad70  FUN_1005ad70  (76 bytes)
 * undefined4 FUN_1005ad70(int param_1, int param_2, int * param_3)
 * called by: FUN_1005ce70
 */
undefined4 __thiscall FUN_1005ad70(void *this,int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_1005b230(this,param_1,param_2);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  piVar2 = piVar1;
  if ((int *)*piVar1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)*piVar1 + 0x40))(0);
  }
  *piVar1 = (int)param_3;
  if (param_3 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*param_3 + 0x40))(this);
  }
  *(undefined1 *)((int)this + 0xbc) = 1;
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}

/* 1005adc0  FUN_1005adc0  (77 bytes)
 * undefined FUN_1005adc0(int param_1, int param_2)
 * called by: FUN_1005ce70
 */
void __thiscall FUN_1005adc0(void *this,int param_1,int param_2)

{
  if (param_1 != *(int *)((int)this + 200)) {
    *(int *)((int)this + 200) = param_1;
    FUN_1005b280(this,0);
    *(undefined1 *)((int)this + 0xbc) = 1;
  }
  if (param_2 != *(int *)((int)this + 0xcc)) {
    *(int *)((int)this + 0xcc) = param_2;
    FUN_1005b2e0(this,0);
    *(undefined1 *)((int)this + 0xbc) = 1;
  }
  return;
}

/* 1005ae10  FUN_1005ae10  (59 bytes)
 * undefined4 FUN_1005ae10(int param_1, undefined4 param_2)
 * called by: FUN_1005ce70
 */
undefined4 __thiscall FUN_1005ae10(void *this,int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc0))) {
    *(undefined4 *)(*(int *)((int)this + 0xd0) + param_1 * 4) = param_2;
    uVar1 = FUN_1005b280(this,param_1 + 1);
    *(undefined1 *)((int)this + 0xbc) = 1;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return param_1 & 0xffffff00;
}

/* 1005ae50  FUN_1005ae50  (59 bytes)
 * undefined4 FUN_1005ae50(int param_1, undefined4 param_2)
 * called by: FUN_1005af30
 */
undefined4 __thiscall FUN_1005ae50(void *this,int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc4))) {
    *(undefined4 *)(*(int *)((int)this + 0xd4) + param_1 * 4) = param_2;
    uVar1 = FUN_1005b2e0(this,param_1 + 1);
    *(undefined1 *)((int)this + 0xbc) = 1;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return param_1 & 0xffffff00;
}

/* 1005ae90  FUN_1005ae90  (33 bytes)
 * undefined4 FUN_1005ae90(int param_1)
 * called by: FUN_1005ce70
 */
undefined4 __thiscall FUN_1005ae90(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc4))) {
    return *(undefined4 *)(*(int *)((int)this + 0xd4) + param_1 * 4);
  }
  return 0;
}

/* 1005aec0  FUN_1005aec0  (108 bytes)
 * int FUN_1005aec0(int param_1)
 * called by: FUN_1005af30
 */
int __thiscall FUN_1005aec0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *local_4;
  
  iVar1 = param_1;
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc4))) {
    iVar3 = 0;
    iVar4 = 0;
    local_4 = this;
    if (0 < *(int *)((int)this + 0xc0)) {
      do {
        piVar2 = (int *)FUN_1005b230(this,iVar4,iVar1);
        if ((int *)*piVar2 != (int *)0x0) {
          (**(code **)(*(int *)*piVar2 + 0xc))(&local_4,&param_1);
          if (iVar3 < param_1) {
            iVar3 = param_1;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((int)this + 0xc0));
    }
    return iVar3;
  }
  return 0;
}

/* 1005af30  FUN_1005af30  (47 bytes)
 * undefined FUN_1005af30(void * param_1)
 * called by: FUN_1005ce70, FUN_1005db70
 */
void __fastcall FUN_1005af30(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)param_1 + 0xc4)) {
    do {
      iVar1 = FUN_1005aec0(param_1,iVar2);
      FUN_1005ae50(param_1,iVar2,iVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)param_1 + 0xc4));
  }
  return;
}

/* 1005af60  FUN_1005af60  (107 bytes)
 * undefined4 FUN_1005af60(int param_1, int param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined4 * param_6)
 * called by: FUN_1005ce70
 */
undefined4 __thiscall
FUN_1005af60(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  uint in_EAX;
  
  if ((((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc0))) &&
      (in_EAX = param_2, -1 < param_2)) && (param_2 < *(int *)((int)this + 0xc4))) {
    *param_3 = *(undefined4 *)(*(int *)((int)this + 0xd8) + param_1 * 4);
    *param_5 = *(undefined4 *)(*(int *)((int)this + 0xd0) + param_1 * 4);
    *param_4 = *(undefined4 *)(*(int *)((int)this + 0xdc) + param_2 * 4);
    *param_6 = *(undefined4 *)(*(int *)((int)this + 0xd4) + param_2 * 4);
    return CONCAT31((int3)((uint)param_6 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}

/* 1005afd0  FUN_1005afd0  (91 bytes)
 * undefined4 FUN_1005afd0(int param_1)
 * called by: FUN_1005ce70
 */
undefined4 __thiscall FUN_1005afd0(void *this,int param_1)

{
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    in_EAX = *(uint *)(param_1 + 0xc0);
    if (in_EAX == *(uint *)((int)this + 0xc0)) {
      iVar1 = 0;
      if (0 < (int)*(uint *)((int)this + 0xc0)) {
        do {
          *(undefined4 *)(*(int *)((int)this + 0xd0) + iVar1 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xd0) + iVar1 * 4);
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)((int)this + 0xc0));
      }
      uVar2 = FUN_1005b280(this,0);
      *(undefined1 *)((int)this + 0xbc) = 1;
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

/* 1005b030  FUN_1005b030  (134 bytes)
 * undefined FUN_1005b030(void * param_1)
 * called by: FUN_1005b0f0, FUN_1005ce70, FUN_1005db70
 */
void __fastcall FUN_1005b030(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(int *)((int)param_1 + 0xc0) < 1) {
    *(undefined1 *)((int)param_1 + 0xbc) = 0;
    return;
  }
  do {
    iVar3 = 0;
    if (0 < *(int *)((int)param_1 + 0xc4)) {
      do {
        piVar1 = (int *)FUN_1005b230(param_1,iVar2,iVar3);
        if ((int *)*piVar1 != (int *)0x0) {
          (**(code **)(*(int *)*piVar1 + 0x10))
                    (*(undefined4 *)(*(int *)((int)param_1 + 0xd8) + iVar2 * 4),
                     *(undefined4 *)(*(int *)((int)param_1 + 0xdc) + iVar3 * 4),
                     *(undefined4 *)(*(int *)((int)param_1 + 0xd0) + iVar2 * 4),
                     *(undefined4 *)(*(int *)((int)param_1 + 0xd4) + iVar3 * 4));
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)((int)param_1 + 0xc4));
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)((int)param_1 + 0xc0));
  *(undefined1 *)((int)param_1 + 0xbc) = 0;
  return;
}

/* 1005b0c0  FUN_1005b0c0  (48 bytes)
 * int FUN_1005b0c0(int param_1)
 * called by: FUN_1005ce70, FUN_1005db70
 */
int __fastcall FUN_1005b0c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc4);
  if (0 < iVar1) {
    return *(int *)(*(int *)(param_1 + 0xdc) + -4 + iVar1 * 4) +
           *(int *)(*(int *)(param_1 + 0xd4) + -4 + iVar1 * 4) + *(int *)(param_1 + 0xcc);
  }
  return 0;
}

/* 1005b0f0  FUN_1005b0f0  (171 bytes)
 * undefined FUN_1005b0f0()
 */
void __fastcall FUN_1005b0f0(Panel *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack_4;
  
  if (param_1[0xbc] != (Panel)0x0) {
    FUN_1005b030(param_1);
  }
  vgui::Panel::paint(param_1);
  iVar4 = 0;
  iStack_4 = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    do {
      puVar1 = (undefined4 *)FUN_1005b230(param_1,0,iStack_4);
      iVar2 = (**(code **)(*(int *)*puVar1 + 0x1c))();
      iVar4 = iVar4 + iVar2 + *(int *)(param_1 + 0xcc);
      if (*(char *)(puVar1 + 1) != '\0') {
        (**(code **)(*(int *)param_1 + 0x178))
                  ((int)*(short *)((int)puVar1 + 6),(int)*(short *)(puVar1 + 2),
                   (int)*(short *)((int)puVar1 + 10),(int)*(short *)(puVar1 + 3));
        iVar2 = *(int *)param_1;
        uVar3 = (**(code **)(iVar2 + 0x18))(iVar4 - puVar1[4]);
        (**(code **)(iVar2 + 0x180))(0,(iVar4 - puVar1[4]) + -1,uVar3);
      }
      iStack_4 = iStack_4 + 1;
    } while (iStack_4 < *(int *)(param_1 + 0xc4));
  }
  return;
}

/* 1005b1b0  FUN_1005b1b0  (69 bytes)
 * undefined FUN_1005b1b0(int param_1, char param_2, undefined4 param_3, undefined2 param_4, undefined2 param_5, undefined2 param_6, undefined2 param_7)
 * called by: FUN_1005db70
 */
void __thiscall
FUN_1005b1b0(void *this,int param_1,char param_2,undefined4 param_3,undefined2 param_4,
            undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  
  iVar1 = FUN_1005b230(this,0,param_1);
  *(char *)(iVar1 + 4) = param_2;
  if (param_2 != '\0') {
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    *(undefined2 *)(iVar1 + 6) = param_4;
    *(undefined2 *)(iVar1 + 8) = param_5;
    *(undefined2 *)(iVar1 + 10) = param_6;
    *(undefined2 *)(iVar1 + 0xc) = param_7;
  }
  return;
}

/* 1005b200  FUN_1005b200  (45 bytes)
 * undefined FUN_1005b200(int param_1)
 * called by: FUN_1005abc0, FUN_1005ad20
 */
void __fastcall FUN_1005b200(int param_1)

{
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  return;
}

/* 1005b230  FUN_1005b230  (66 bytes)
 * int FUN_1005b230(int param_1, int param_2)
 * called by: FUN_1005ad70, FUN_1005aec0, FUN_1005b030, FUN_1005b0f0, FUN_1005b1b0, FUN_1005b330
 */
int __thiscall FUN_1005b230(void *this,int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc0))) && (-1 < param_2)) &&
     (param_2 < *(int *)((int)this + 0xc4))) {
    return *(int *)((int)this + 0xe0) + (*(int *)((int)this + 0xc0) * param_2 + param_1) * 0x14;
  }
  return 0;
}

/* 1005b280  FUN_1005b280  (94 bytes)
 * undefined FUN_1005b280(int param_1)
 * called by: FUN_1005adc0, FUN_1005ae10, FUN_1005afd0
 */
void __thiscall FUN_1005b280(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 200);
  if (param_1 != 0) {
    iVar1 = iVar1 + *(int *)(*(int *)((int)this + 0xd8) + -4 + param_1 * 4) +
                    *(int *)(*(int *)((int)this + 0xd0) + -4 + param_1 * 4);
  }
  if (param_1 < *(int *)((int)this + 0xc0)) {
    do {
      *(int *)(*(int *)((int)this + 0xd8) + param_1 * 4) = iVar1;
      iVar1 = iVar1 + *(int *)(*(int *)((int)this + 0xd0) + param_1 * 4) + *(int *)((int)this + 200)
      ;
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)((int)this + 0xc0));
  }
  return;
}

/* 1005b2e0  FUN_1005b2e0  (78 bytes)
 * undefined FUN_1005b2e0(int param_1)
 * called by: FUN_1005adc0, FUN_1005ae50
 */
void __thiscall FUN_1005b2e0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xcc);
  if (param_1 != 0) {
    iVar1 = iVar1 + *(int *)(*(int *)((int)this + 0xdc) + -4 + param_1 * 4);
  }
  if (param_1 < *(int *)((int)this + 0xc4)) {
    do {
      *(int *)(*(int *)((int)this + 0xdc) + param_1 * 4) = iVar1;
      iVar1 = iVar1 + *(int *)(*(int *)((int)this + 0xd4) + param_1 * 4) +
                      *(int *)((int)this + 0xcc);
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)((int)this + 0xc4));
  }
  return;
}

/* 1005b330  FUN_1005b330  (141 bytes)
 * undefined4 FUN_1005b330(undefined4 param_1, undefined4 param_2, int * param_3, int * param_4)
 * called by: FUN_1005e7f0
 */
uint __thiscall
FUN_1005b330(void *this,undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  *param_3 = -1;
  iVar4 = 0;
  *param_4 = -1;
  uVar3 = *(uint *)((int)this + 0xc0);
  if (0 < (int)uVar3) {
    do {
      iVar5 = 0;
      if (0 < *(int *)((int)this + 0xc4)) {
        do {
          piVar2 = (int *)FUN_1005b230(this,iVar4,iVar5);
          if (((int *)*piVar2 != (int *)0x0) &&
             (cVar1 = (**(code **)(*(int *)*piVar2 + 0x80))(param_1,param_2), cVar1 != '\0')) {
            *param_4 = iVar4;
            *param_3 = iVar5;
            return CONCAT31((int3)((uint)param_3 >> 8),1);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)((int)this + 0xc4));
      }
      uVar3 = *(uint *)((int)this + 0xc0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar3);
  }
  return uVar3 & 0xffffff00;
}

/* 1005b3c0  FUN_1005b3c0  (13 bytes)
 * undefined FUN_1005b3c0(undefined4 param_1)
 * called by: FUN_100648c0
 */
void __cdecl FUN_1005b3c0(int param_1)

{
  int extents [4];
  undefined4 unaff_retaddr;
  undefined4 in_stack_00000008;
  
  extents[2] = param_1;
  extents[1] = unaff_retaddr;
  extents[3] = in_stack_00000008;
  extents[0] = param_1;
  (*gEngfuncs.VGui_ViewportPaintBackground)(extents);
  return;
}

/* 1005b3d0  FUN_1005b3d0  (6 bytes)
 * undefined FUN_1005b3d0(void)
 * called by: FUN_1005b3e0
 */
void FUN_1005b3d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x1005b3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*gEngfuncs.VGui_GetPanel)();
  return;
}

/* 1005b3e0  FUN_1005b3e0  (168 bytes)
 * undefined FUN_1005b3e0(void)
 * called by: HUD_VidInit
 */
void FUN_1005b3e0(void)

{
  int *piVar1;
  BorderLayout *this;
  undefined4 uVar2;
  undefined4 *this_00;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_1005b3d0();
  (**(code **)(*piVar1 + 300))(0x80,0x80,0,0);
  this = operator_new(8);
  if (this == (BorderLayout *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = vgui::BorderLayout::BorderLayout(this,0);
  }
  (**(code **)(*piVar1 + 0xb4))(uVar2);
  if (DAT_100d5cb0 != (void *)0x0) {
    FUN_10060aa0(DAT_100d5cb0);
    return;
  }
  this_00 = FUN_10066790(0xad8);
  if (this_00 != (undefined4 *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0x1c))();
    iVar4 = (**(code **)(*piVar1 + 0x18))();
    DAT_100d5cb0 = FUN_100607f0(this_00,0,0,iVar4,iVar3);
    (**(code **)(*(int *)DAT_100d5cb0 + 0x40))(piVar1);
    return;
  }
  DAT_100d5cb0 = (Panel *)0x0;
  (**(code **)(iRam00000000 + 0x40))(piVar1);
  return;
}

/* 1005b490  FUN_1005b490  (256 bytes)
 * Panel * FUN_1005b490(Panel * param_1)
 * called by: FUN_1005ce70
 */
Panel * __fastcall FUN_1005b490(Panel *param_1)

{
  Panel *this;
  Slider2 *this_00;
  ScrollBar2 *this_01;
  
  vgui::Panel::Panel(param_1,0,0,0,0);
  this = param_1 + 200;
  vgui::Panel::Panel(this,0,0,0,0);
  this_00 = (Slider2 *)(param_1 + 0x188);
  vgui::Slider2::Slider2(this_00,0,0,10,0x28,true);
  this_01 = (ScrollBar2 *)(param_1 + 0x284);
  vgui::ScrollBar2::ScrollBar2(this_01,0,0,0,0,true);
  *(undefined ***)(param_1 + 0x35c) = &PTR_FUN_1007f43c;
  *(undefined ***)param_1 = &PTR_FUN_1007f23c;
  *(Panel **)(param_1 + 0x360) = param_1;
  (**(code **)(*(int *)this + 0x40))(param_1);
  (**(code **)(*(int *)this + 300))(0,0,0,0xff);
  (**(code **)(*(int *)this_00 + 0x214))(0x32);
  (**(code **)(*(int *)this_00 + 0x218))(1);
  (**(code **)(*(int *)this_01 + 0x40))(param_1);
  (**(code **)(*(int *)this_01 + 0x204))(param_1 + 0x35c);
  (**(code **)(*(int *)this_01 + 0x224))(this_00);
  (**(code **)(*(int *)this_01 + 0x230))(1);
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(Panel **)(param_1 + 0xc0) = param_1 + 0xbc;
  *(Panel **)(param_1 + 0xc4) = param_1 + 0xbc;
  *(undefined4 *)(param_1 + 0x364) = 0xffffffff;
  return param_1;
}

/* 1005b590  FUN_1005b590  (103 bytes)
 * undefined FUN_1005b590(undefined4 * param_1)
 * called by: Unwind@10077cd9
 */
void __fastcall FUN_1005b590(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_FUN_1007f23c;
  puVar3 = (undefined4 *)param_1[0x31];
  puVar1 = param_1 + 0x2f;
  param_1[0x61] = 0;
  if (puVar3 == puVar1) {
    param_1[0x31] = puVar1;
    param_1[0x30] = puVar1;
    return;
  }
  do {
    (**(code **)(*(int *)*puVar3 + 0x40))(0);
    puVar2 = (undefined4 *)puVar3[2];
    FUN_1006ad4c(puVar3);
    puVar3 = puVar2;
  } while (puVar2 != puVar1);
  param_1[0x31] = puVar1;
  param_1[0x30] = puVar1;
  return;
}

/* 1005b600  FUN_1005b600  (145 bytes)
 * undefined FUN_1005b600(int * param_1)
 * called by: FUN_1005ce70
 */
void __thiscall FUN_1005b600(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
    (**(code **)(*param_1 + 0x40))((int)this + 200);
    iVar1 = *(int *)((int)this + 0xc0);
    puVar2[1] = iVar1;
    puVar2[2] = (int)this + 0xbc;
    *(undefined4 **)(iVar1 + 8) = puVar2;
    *(undefined4 **)(puVar2[2] + 4) = puVar2;
    iVar1 = *(int *)((int)this + 0x284);
    iVar3 = FUN_1005b890((int)this);
    (**(code **)(iVar1 + 0x208))(0,iVar3);
    (**(code **)(*(int *)((int)this + 0x188) + 0x214))(0x32);
    (**(code **)(*(int *)((int)this + 0x188) + 0x218))(1);
    FUN_1005b730(this);
  }
  return;
}

/* 1005b6a0  FUN_1005b6a0  (27 bytes)
 * int FUN_1005b6a0(int param_1)
 * called by: FUN_1005b890
 */
int __fastcall FUN_1005b6a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0xc4); iVar1 != param_1 + 0xbc; iVar1 = *(int *)(iVar1 + 8)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

/* 1005b6c0  FUN_1005b6c0  (31 bytes)
 * undefined FUN_1005b6c0()
 */
void __thiscall FUN_1005b6c0(Panel *param_1,int param_2,int param_3)

{
  vgui::Panel::setPos(param_1,param_2,param_3);
  FUN_1005b730((int *)param_1);
  return;
}

/* 1005b6e0  FUN_1005b6e0  (31 bytes)
 * undefined FUN_1005b6e0()
 */
void __thiscall FUN_1005b6e0(Panel *param_1,int param_2,int param_3)

{
  vgui::Panel::setSize(param_1,param_2,param_3);
  FUN_1005b730((int *)param_1);
  return;
}

/* 1005b700  FUN_1005b700  (38 bytes)
 * undefined FUN_1005b700(int * param_1)
 */
void __fastcall FUN_1005b700(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1[0xa1] + 0x200))();
  param_1[0x61] = iVar1;
  FUN_1005b730(param_1);
  return;
}

/* 1005b730  FUN_1005b730  (301 bytes)
 * undefined FUN_1005b730(int * param_1)
 * called by: FUN_1005b600, FUN_1005b6c0, FUN_1005b6e0, FUN_1005b700, FUN_1005b860
 */
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_1005b730(int *param_1)

{
  undefined1 *puVar1;
  uint unaff_ESI;
  int *piVar2;
  int unaff_EDI;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 local_24 [4];
  undefined1 local_20 [20];
  undefined1 local_c [4];
  undefined1 local_8 [8];
  
  puStack_3c = local_24;
  puStack_38 = local_20;
  puStack_40 = local_c;
  puStack_44 = local_8;
  uStack_48 = 0x1005b754;
  (**(code **)(*param_1 + 0x14))();
  puVar1 = (undefined1 *)0x0;
  iVar4 = 0;
  uStack_48 = unaff_ESI;
  (**(code **)(param_1[0x32] + 0x10))(0,0,unaff_EDI + -0xf);
  uVar3 = 0;
  (**(code **)(param_1[0xa1] + 0x10))(puStack_44 + -0xf,0,0xf,puStack_40);
  uStack_48 = uStack_48 & 0xffffff00;
  iVar5 = 0;
  puStack_40 = (undefined1 *)FUN_1005b890((int)param_1);
  piVar2 = (int *)param_1[0x31];
  if (piVar2 != param_1 + 0x2f) {
    do {
      if (iVar5 < param_1[0x61]) {
        (**(code **)(*(int *)*piVar2 + 0x24))(0);
LAB_1005b823:
        uStack_48 = CONCAT31(uStack_48._1_3_,1);
      }
      else if (iVar5 < (int)puStack_40) {
        (**(code **)(*(int *)*piVar2 + 0x24))(1);
        (**(code **)(*(int *)*piVar2 + 0xc))(&puStack_38,&uStack_48);
        (**(code **)(*(int *)*piVar2 + 0x10))(0,puVar1,uVar3,iVar4);
        puVar1 = puVar1 + (int)puStack_44;
        if (iVar4 < (int)puVar1) goto LAB_1005b823;
      }
      else {
        (**(code **)(*(int *)*piVar2 + 0x24))(0);
      }
      piVar2 = (int *)piVar2[2];
      iVar5 = iVar5 + 1;
    } while (piVar2 != param_1 + 0x2f);
  }
  (**(code **)(param_1[0xa1] + 0x24))(uStack_48);
  (**(code **)(*param_1 + 0x30))();
  return;
}

/* 1005b860  FUN_1005b860  (45 bytes)
 * undefined FUN_1005b860(int param_1)
 * called by: FUN_1005d5f0
 */
void __thiscall FUN_1005b860(void *this,int param_1)

{
  *(int *)((int)this + 0x364) = param_1;
  (**(code **)(*(int *)((int)this + 0x284) + 0x208))(0,param_1);
  FUN_1005b730(this);
  return;
}

/* 1005b890  FUN_1005b890  (17 bytes)
 * int FUN_1005b890(int param_1)
 * called by: FUN_1005b600, FUN_1005b730
 */
int __fastcall FUN_1005b890(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x364);
  if (iVar1 < 0) {
    iVar1 = FUN_1005b6a0(param_1);
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

/* 1005b8b0  FUN_1005b8b0  (21 bytes)
 * undefined FUN_1005b8b0()
 */
void __thiscall FUN_1005b8b0(int param_1,int param_2)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x1fc))(-param_2);
  return;
}

/* 1005b8d0  FUN_1005b8d0  (176 bytes)
 * undefined4 FUN_1005b8d0(undefined4 param_1)
 * called by: FUN_100158c0, FUN_10017af0, FUN_100585b0, FUN_1005a070, vgui::ScrollBar2::ScrollBar2
 */
undefined4 __cdecl FUN_1005b8d0(char *param_1)

{
  BitmapTGA *this;
  undefined4 uVar1;
  undefined **local_1c;
  byte_conflict *local_18;
  int local_14 [2];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_10077bdb;
  pvStack_c = ExceptionList;
  uVar1 = 0;
  local_1c = &PTR_FUN_1007f440;
  local_18 = (byte_conflict *)0x0;
  local_14[1] = 0;
  local_14[0] = 0;
  ExceptionList = &pvStack_c;
  local_18 = (*gEngfuncs.COM_LoadFile)(param_1,5,local_14);
  if (local_18 == (byte_conflict *)0x0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  local_14[1] = 0;
  this = operator_new(0x30);
  uStack_4 = 0;
  if (this != (BitmapTGA *)0x0) {
    uVar1 = vgui::BitmapTGA::BitmapTGA(this,(InputStream *)&local_1c,true);
  }
  uStack_4 = 0xffffffff;
  (*gEngfuncs.COM_FreeFile)(local_18);
  ExceptionList = pvStack_c;
  return uVar1;
}

/* 1005b980  FUN_1005b980  (17 bytes)
 * undefined FUN_1005b980()
 */
void __thiscall FUN_1005b980(int param_1,undefined1 *param_2)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_2 = 1;
  return;
}

/* 1005b9a0  FUN_1005b9a0  (22 bytes)
 * undefined FUN_1005b9a0()
 */
void __thiscall FUN_1005b9a0(int param_1,int param_2,undefined1 *param_3)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  *param_3 = 1;
  return;
}

/* 1005b9c0  FUN_1005b9c0  (16 bytes)
 * undefined FUN_1005b9c0()
 */
void __thiscall FUN_1005b9c0(int param_1,undefined1 *param_2)

{
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  *param_2 = 1;
  return;
}

/* 1005b9d0  FUN_1005b9d0  (12 bytes)
 * undefined FUN_1005b9d0()
 */
undefined4 FUN_1005b9d0(undefined1 *param_1)

{
  *param_1 = 0;
  return 0;
}

/* 1005b9e0  FUN_1005b9e0  (48 bytes)
 * undefined FUN_1005b9e0()
 */
uint __thiscall FUN_1005b9e0(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 8))) {
    *param_2 = 1;
    iVar3 = *(int *)(param_1 + 0xc) + 1;
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 4) + -1 + iVar3);
    *(int *)(param_1 + 0xc) = iVar3;
    return CONCAT31((int3)((uint)*(int *)(param_1 + 4) >> 8),uVar1);
  }
  *param_2 = 0;
  return uVar2 & 0xffffff00;
}

/* 1005ba10  FUN_1005ba10  (48 bytes)
 * undefined FUN_1005ba10(int param_1, int param_2, undefined4 param_3)
 */
void __thiscall FUN_1005ba10(void *this,int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = (**(code **)(*(int *)this + 0x14))(param_3);
      iVar3 = iVar2 + 1;
      *(undefined1 *)(iVar2 + param_1) = uVar1;
      iVar2 = iVar3;
    } while (iVar3 < param_2);
  }
  return;
}

/* 1005ba40  FUN_1005ba40  (14 bytes)
 * undefined FUN_1005ba40()
 */
void __fastcall FUN_1005ba40(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

/* 1005ba50  FUN_1005ba50  (175 bytes)
 * undefined4 FUN_1005ba50(undefined4 param_1)
 * called by: FUN_10017af0
 */
undefined4 __cdecl FUN_1005ba50(char *param_1)

{
  BitmapTGA *this;
  undefined4 uVar1;
  undefined **local_1c;
  byte_conflict *local_18;
  int local_14 [2];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_10077bfb;
  pvStack_c = ExceptionList;
  uVar1 = 0;
  local_1c = &PTR_FUN_1007f440;
  local_18 = (byte_conflict *)0x0;
  local_14[1] = 0;
  local_14[0] = 0;
  ExceptionList = &pvStack_c;
  local_18 = (*gEngfuncs.COM_LoadFile)(param_1,5,local_14);
  if (local_18 == (byte_conflict *)0x0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  local_14[1] = 0;
  this = operator_new(0x30);
  uStack_4 = 0;
  if (this != (BitmapTGA *)0x0) {
    uVar1 = vgui::BitmapTGA::BitmapTGA(this,(InputStream *)&local_1c,false);
  }
  uStack_4 = 0xffffffff;
  (*gEngfuncs.COM_FreeFile)(local_18);
  ExceptionList = pvStack_c;
  return uVar1;
}

/* 1005bb00  FUN_1005bb00  (130 bytes)
 * Panel * FUN_1005bb00(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, int param_5, int param_6, int param_7, int param_8)
 * called by: FUN_10063c00
 */
Panel * __cdecl
FUN_1005bb00(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,int param_8)

{
  void *this;
  Panel *pPVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10077c1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xd8);
  local_4 = 0;
  if (this != (void *)0x0) {
    pPVar1 = FUN_1005bb90(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    ExceptionList = local_c;
    return pPVar1;
  }
  ExceptionList = local_c;
  return (Panel *)0x0;
}

/* 1005bb90  FUN_1005bb90  (1727 bytes)
 * Panel * FUN_1005bb90(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, int param_5, int param_6, int param_7, int param_8)
 * called by: FUN_1005bb00
 */
Panel * __thiscall
FUN_1005bb90(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            int param_5,int param_6,int param_7,int param_8)

{
  Panel *this_00;
  LineBorder *pLVar1;
  uint uVar2;
  Label *this_01;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  ScrollPanel *pSVar8;
  TextPanel *this_02;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  Button *pBVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  undefined4 *puVar18;
  Panel *pPVar19;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  Button BVar24;
  undefined4 uStack_bc;
  uint uVar25;
  void *this_03;
  void *this_04;
  int *piStack_70;
  uint uVar26;
  uint uVar27;
  void *pvVar28;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  Panel *local_1c;
  int local_18;
  uint uStack_14;
  uint uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10077c72;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  vgui::Panel::Panel(this,param_5,param_6,param_7,param_8);
  *(undefined4 *)((int)this + 200) = param_4;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(uint *)((int)this + 0xbc) = (-(uint)(param_3 != 0) & 0xffffff65) + 0xff;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined ***)this = &PTR_setPos_1007f464;
  pvVar5 = (void *)(DAT_100d5cb0 + 0x22c);
  FUN_1005cc60(pvVar5,(byte_conflict *)s_Title_Font_1009649c);
  FUN_1005cc60(pvVar5,(byte_conflict *)s_Briefing_Text_1009648c);
  this_00 = operator_new(0xc0);
  local_4 = 0;
  pPVar19 = (Panel *)0x0;
  local_1c = this_00;
  if (this_00 != (Panel *)0x0) {
    lVar20 = __ftol();
    lVar21 = __ftol();
    lVar22 = __ftol();
    lVar23 = __ftol();
    vgui::Panel::Panel(this_00,(int)lVar23,(int)lVar22,(int)lVar21,(int)lVar20);
    *(undefined ***)this_00 = &PTR_setPos_1007daa0;
    *(uint *)(this_00 + 0xbc) = (-(uint)(param_3 != 0) & 0x9b) + 100;
    pPVar19 = this_00;
  }
  *(Panel **)((int)this + 0xd4) = pPVar19;
  local_4 = 0xffffffff;
  pvVar28 = this;
  (**(code **)(*(int *)pPVar19 + 0x40))();
  pLVar1 = operator_new(0x44);
  pcStack_8 = (code *)0x1;
  if (pLVar1 == (LineBorder *)0x0) {
    uVar2 = 0;
  }
  else {
    piStack_70 = (int *)0x1005bd26;
    vgui::Color::Color((Color *)&local_1c,0xb2,0x76,0,0);
    puStack_20 = &stack0xffffff98;
    uVar2 = vgui::LineBorder::LineBorder(pLVar1);
  }
  pcStack_8 = (code *)0xffffffff;
  (**(code **)(**(int **)((int)this + 0xd4) + 0xd4))();
  uVar27 = 1;
  (**(code **)(**(int **)((int)this + 0xd4) + 0x24))();
  piStack_70 = (int *)0x1005bd81;
  (**(code **)(**(int **)((int)this + 0xd4) + 4))();
  piStack_70 = (int *)&stack0xffffffb4;
  (**(code **)(**(int **)((int)this + 0xd4) + 0xc))();
  this_01 = operator_new(0xd0);
  puStack_20 = (undefined1 *)0x2;
  if (this_01 == (Label *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    lVar20 = __ftol();
    iVar3 = (int)lVar20;
    lVar20 = __ftol();
    piVar4 = (int *)vgui::Label::Label(this_01,s_,(int)lVar20,iVar3);
  }
  puStack_20 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar4 + 0x40))();
  iVar3 = *piVar4;
  FUN_1005cce0(pvVar5,uStack_10);
  (**(code **)(iVar3 + 0x208))();
  (**(code **)(*piVar4 + 0x20c))();
  FUN_1005ccf0(pvVar5,local_18,(uint *)&piStack_70,&uStack_14,&uStack_10,(uint *)&pvStack_c);
  this_04 = pvStack_c;
  (**(code **)(*piVar4 + 0x120))();
  (**(code **)(*piVar4 + 0x124))();
  FUN_1005cd30(pvVar5,local_18,(uint *)&stack0xffffff7c,&uStack_28,&uStack_24,(uint *)&puStack_20);
  (**(code **)(*piVar4 + 300))();
  this_03 = (void *)0x3;
  (**(code **)(*piVar4 + 0x21c))();
  (**(code **)(*piVar4 + 0x200))();
  pvVar5 = operator_new(0xd0);
  if (pvVar5 == (void *)0x0) {
    pSVar8 = (ScrollPanel *)0x0;
    uVar7 = uStack_10;
  }
  else {
    lVar20 = __ftol();
    iVar3 = (int)lVar20;
    lVar20 = __ftol();
    iVar6 = (int)lVar20;
    lVar20 = __ftol();
    uVar7 = (uint)lVar20;
    lVar20 = __ftol();
    uStack_bc = 0x1005bf75;
    pSVar8 = FUN_1005a860(pvVar5,(int)lVar20,uVar7,iVar6,iVar3);
    uVar7 = uStack_10;
  }
  (**(code **)(*(int *)pSVar8 + 0x40))();
  uVar25 = 0;
  (**(code **)(*(int *)pSVar8 + 0x200))();
  uStack_bc = 1;
  (**(code **)(*(int *)pSVar8 + 0x1fc))();
  (**(code **)(*(int *)pSVar8 + 0x220))();
  this_02 = operator_new(0xc0);
  if (this_02 == (TextPanel *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)vgui::TextPanel::TextPanel(this_02,s_,0,0,0x40,0x40);
  }
  uVar26 = 0xffffffff;
  iVar3 = *piVar4;
  uVar9 = (**(code **)(*(int *)pSVar8 + 0x204))();
  (**(code **)(iVar3 + 0x40))();
  iVar3 = *piVar4;
  uVar10 = FUN_1005cce0(this_04,(int)pvVar28);
  (**(code **)(iVar3 + 0x200))();
  FUN_1005ccf0(this_03,uVar2,(uint *)&stack0xffffff4c,(uint *)&stack0xffffffa8,
               (uint *)&stack0xffffffac,(uint *)&stack0xffffffb0);
  pvVar5 = (void *)0xffffffff;
  (**(code **)(*piVar4 + 0x120))(uVar25,unaff_EDI,0xffffffff,unaff_EBP);
  FUN_1005cd30(this_03,(int)piStack_70,(uint *)&stack0xffffff3c,(uint *)&stack0xffffff98,
               (uint *)&stack0xffffff9c,(uint *)&stack0xffffffa0);
  (**(code **)(*piVar4 + 300))(uVar10,uVar26,uVar27,uVar2);
  (**(code **)(*piVar4 + 0x1fc))(uVar7);
  piVar11 = (int *)(**(code **)(*(int *)pSVar8 + 0x208))();
  piStack_70 = (int *)(**(code **)(*(int *)pSVar8 + 0x208))();
  piVar12 = (int *)(**(code **)(*piVar4 + 0x208))();
  iVar3 = *piVar12;
  uVar13 = (**(code **)(*piVar11 + 0x1c))();
  uVar13 = (**(code **)(*piStack_70 + 0x18))(uVar13);
  (**(code **)(iVar3 + 0x14))(uVar13);
  piVar11 = (int *)(**(code **)(*piVar4 + 0x208))();
  (**(code **)(*piVar11 + 0x68))(&stack0xffffff48,&uStack_bc);
  (**(code **)(*piVar4 + 8))(uVar9,uVar10);
  (**(code **)(*(int *)pSVar8 + 0x200))(1,1);
  (**(code **)(*(int *)pSVar8 + 0x1fc))(0,0);
  (**(code **)(*(int *)pSVar8 + 0x220))();
  pBVar14 = operator_new(300);
  uStack_bc = 5;
  if (pBVar14 == (Button *)0x0) {
    pBVar14 = (Button *)0x0;
  }
  else {
    BVar24 = (Button)0x0;
    lVar20 = __ftol();
    iVar3 = (int)lVar20;
    lVar20 = __ftol();
    iVar6 = (int)lVar20;
    lVar20 = __ftol();
    iVar15 = (int)lVar20;
    lVar20 = __ftol();
    iVar16 = (int)lVar20;
    pcVar17 = FUN_100349a0(s__Menu_OK_10092f74);
    pBVar14 = FUN_1005a0b0(pBVar14,pcVar17,iVar16,iVar15,iVar6,iVar3,BVar24);
  }
  uStack_bc = 0xffffffff;
  puVar18 = operator_new(8);
  if (puVar18 == (undefined4 *)0x0) {
    puVar18 = (undefined4 *)0x0;
  }
  else {
    *puVar18 = &PTR_FUN_1007da94;
    puVar18[1] = 0;
  }
  (**(code **)(*(int *)pBVar14 + 0x240))(puVar18);
  (**(code **)(*(int *)pBVar14 + 0x40))(this);
  ExceptionList = pvVar5;
  return this;
}

