/* client.dll - unnamed_10021d70 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10021d70  FUN_10021d70  (21 bytes)
 * undefined FUN_10021d70()
 */
void FUN_10021d70(int *param_1)

{
  if (DAT_100df2b0 != (void *)0x0) {
    FUN_10021e10(DAT_100df2b0,param_1);
  }
  return;
}

/* 10021d90  FUN_10021d90  (120 bytes)
 * undefined FUN_10021d90(int * param_1)
 * called by: FUN_10021d50
 */
void __thiscall FUN_10021d90(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((*param_1 == 0) && (param_1[2] == 0)) {
    for (puVar1 = (undefined4 *)param_1[10]; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      puVar2 = operator_new(0x1c);
      iVar3 = 5;
      puVar2[6] = 0xffffffff;
      puVar4 = puVar1;
      puVar5 = puVar2;
      while( true ) {
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        *puVar5 = *puVar4;
      }
      *puVar2 = *(undefined4 *)((int)this + 0x410);
      *(undefined4 **)((int)this + 0x410) = puVar2;
    }
    (*gEngfuncs.Con_Printf)(s_got_list_10093a94);
    *(undefined4 *)((int)this + 0x424) = 1;
    *(undefined4 *)((int)this + 0x420) = 0;
  }
  return;
}

/* 10021e10  FUN_10021e10  (323 bytes)
 * undefined FUN_10021e10(int * param_1)
 * called by: FUN_10021d70
 */
void __thiscall FUN_10021e10(void *this,int *param_1)

{
  _func_711 **pp_Var1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int unaff_EBP;
  netadr_s *pnVar11;
  char *pcVar12;
  longlong lVar13;
  void *unaff_retaddr;
  char acStack_c [12];
  
  puVar3 = FUN_100221c0(param_1[1],*(undefined4 **)((int)this + 0x414));
  if (puVar3 != (undefined4 *)0x0) {
    FUN_100221e0((undefined4 *)((int)this + 0x414),puVar3);
    *(int *)((int)this + 0x420) = *(int *)((int)this + 0x420) + -1;
  }
  if ((*param_1 == 0) && (param_1[2] == 4)) {
    pcVar6 = (char *)param_1[10];
    if (pcVar6 != (char *)0x0) {
      uVar7 = 0xffffffff;
      pcVar5 = pcVar6;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      __ftol();
      FUN_1006ac7a(&stack0xffffffe0,&DAT_100937a0);
      puVar4 = operator_new(0x20);
      pnVar11 = (netadr_s *)(param_1 + 3);
      puVar3 = puVar4;
      for (iVar8 = 5; puVar3 = puVar3 + 1, iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar3 = *(undefined4 *)pnVar11;
        pnVar11 = (netadr_s *)&pnVar11->field2_0x4;
      }
      pcVar5 = operator_new(~uVar7 + 100);
      puVar4[6] = pcVar5;
      lVar13 = __ftol();
      puVar4[7] = (int)lVar13;
      uVar9 = 0xffffffff;
      do {
        pcVar12 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar12 + -uVar9;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar5 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      }
      pp_Var1 = &(gEngfuncs.pNetAPI)->SetValueForKey;
      pcVar6 = (*(gEngfuncs.pNetAPI)->AdrToString)((netadr_s *)(param_1 + 3));
      (**pp_Var1)((char *)puVar4[6],s_address_10093aa8,pcVar6,unaff_EBP);
      (*(gEngfuncs.pNetAPI)->SetValueForKey)((char *)puVar4[6],&DAT_10093aa0,acStack_c,~uVar7 + 100)
      ;
      FUN_10021fe0(unaff_retaddr,(undefined4 *)((int)unaff_retaddr + 0x418),puVar4);
    }
  }
  return;
}

/* 10021f60  FUN_10021f60  (122 bytes)
 * undefined4 FUN_10021f60(int param_1, int param_2)
 * called by: FUN_10021fe0
 */
undefined4 FUN_10021f60(int param_1,int param_2)

{
  byte_conflict *pbVar1;
  byte_conflict *pbVar2;
  uint uVar3;
  void *this;
  
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_2 + 0x1c)) {
    return 1;
  }
  if (((*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c)) &&
      (*(char **)(param_1 + 0x18) != (char *)0x0)) && (*(int *)(param_2 + 0x18) != 0)) {
    pbVar1 = (byte_conflict *)
             (*(gEngfuncs.pNetAPI)->ValueForKey)(*(char **)(param_1 + 0x18),s_hostname_10093ab0);
    pbVar2 = (byte_conflict *)
             (*(gEngfuncs.pNetAPI)->ValueForKey)(*(char **)(param_2 + 0x18),s_hostname_10093ab0);
    if ((pbVar1 != (byte_conflict *)0x0) && (pbVar2 != (byte_conflict *)0x0)) {
      uVar3 = FUN_10076d90(this,pbVar1,pbVar2);
      if ((int)uVar3 < 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* 10021fe0  FUN_10021fe0  (139 bytes)
 * undefined FUN_10021fe0(undefined4 * param_1, undefined4 * param_2)
 * called by: FUN_10021e10
 */
void __thiscall FUN_10021fe0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *(int *)((int)this + 0x41c) = *(int *)((int)this + 0x41c) + 1;
    piVar1 = (int *)*param_1;
    if (piVar1 == (int *)0x0) {
      *param_2 = 0;
      *param_1 = param_2;
      return;
    }
    iVar2 = FUN_10021f60((int)param_2,(int)piVar1);
    if (iVar2 != 0) {
      *param_2 = *param_1;
      *param_1 = param_2;
      return;
    }
    iVar2 = *piVar1;
    while (iVar2 != 0) {
      iVar2 = FUN_10021f60((int)param_2,iVar2);
      if (iVar2 != 0) {
        *param_2 = *(undefined4 *)*piVar1;
        *piVar1 = (int)param_2;
        return;
      }
      piVar1 = (int *)*piVar1;
      iVar2 = *piVar1;
    }
    *param_2 = 0;
    *piVar1 = (int)param_2;
  }
  return;
}

/* 10022070  FUN_10022070  (95 bytes)
 * undefined FUN_10022070(double param_1)
 * called by: FUN_10022bb0
 */
void __thiscall FUN_10022070(void *this,double param_1)

{
  int iVar1;
  
  *(double *)((int)this + 0x428) = param_1 + *(double *)((int)this + 0x428);
  if ((*(int *)((int)this + 0x400) != 0) && (*(int *)((int)this + 0x424) != 0)) {
    FUN_100220d0((int)this);
    iVar1 = FUN_10022190((int)this);
    if (iVar1 < 1) {
      *(undefined4 *)((int)this + 0x408) = 0;
      *(undefined4 *)((int)this + 0x40c) = 0;
      *(undefined4 *)((int)this + 0x400) = 0;
      *(undefined4 *)((int)this + 0x404) = 0;
      *(undefined4 *)((int)this + 0x424) = 0;
      *(undefined4 *)((int)this + 0x420) = 0;
    }
  }
  return;
}

/* 100220d0  FUN_100220d0  (178 bytes)
 * undefined FUN_100220d0(int param_1)
 * called by: FUN_10022070
 */
void __fastcall FUN_100220d0(int param_1)

{
  undefined4 *puVar1;
  int context;
  net_api_response_func_t unaff_EDI;
  
  if ((((*(int *)(param_1 + 0x400) != 0) && (*(int *)(param_1 + 0x404) == 0)) &&
      (*(int *)(param_1 + 0x424) != 0)) &&
     ((*(int *)(param_1 + 0x420) < 0x15 && (*(int *)(param_1 + 0x410) != 0)))) {
    do {
      puVar1 = *(undefined4 **)(param_1 + 0x410);
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x410) = *puVar1;
      puVar1[6] = DAT_100df2ac;
      context = DAT_100df2ac;
      DAT_100df2ac = DAT_100df2ac + 1;
      (*(gEngfuncs.pNetAPI)->SendRequest)
                (context,4,0,(double)CONCAT44(puVar1 + 1,0x40000000),(netadr_s *)FUN_10021d70,
                 unaff_EDI);
      *(int *)(param_1 + 0x420) = *(int *)(param_1 + 0x420) + 1;
      *puVar1 = *(undefined4 *)(param_1 + 0x414);
      *(undefined4 **)(param_1 + 0x414) = puVar1;
    } while (*(int *)(param_1 + 0x420) < 0x15);
  }
  return;
}

/* 10022190  FUN_10022190  (37 bytes)
 * int FUN_10022190(int param_1)
 * called by: FUN_10022070
 */
int __fastcall FUN_10022190(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x410); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  for (puVar1 = *(undefined4 **)(param_1 + 0x414); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

/* 100221c0  FUN_100221c0  (28 bytes)
 * undefined4 * FUN_100221c0(int param_1, undefined4 * param_2)
 * called by: FUN_10021e10
 */
undefined4 * FUN_100221c0(int param_1,undefined4 *param_2)

{
  while( true ) {
    if (param_2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (param_1 == param_2[6]) break;
    param_2 = (undefined4 *)*param_2;
  }
  return param_2;
}

/* 100221e0  FUN_100221e0  (45 bytes)
 * undefined FUN_100221e0(undefined4 * param_1, undefined4 * param_2)
 * called by: FUN_10021e10
 */
void FUN_100221e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
    puVar1 = (undefined4 *)*param_1;
    while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar3;
      if (puVar3 != param_2) {
        *puVar3 = puVar2;
        puVar2 = puVar3;
      }
    }
    *param_1 = puVar2;
  }
  return;
}

/* 10022210  FUN_10022210  (44 bytes)
 * undefined FUN_10022210(undefined4 * param_1)
 * called by: FUN_100227f0, FUN_100228d0, FUN_10022a60
 */
void FUN_10022210(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      FUN_1006ad4c(puVar2);
      puVar2 = puVar1;
    }
    *param_1 = 0;
  }
  return;
}

/* 10022240  FUN_10022240  (55 bytes)
 * undefined FUN_10022240(undefined4 * param_1)
 * called by: FUN_100227f0, FUN_100228d0, FUN_10022a60
 */
void FUN_10022240(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      FUN_1006ad4c((LPVOID)puVar2[6]);
      FUN_1006ad4c(puVar2);
      puVar2 = puVar1;
    }
    *param_1 = 0;
  }
  return;
}

/* 10022280  FUN_10022280  (167 bytes)
 * uint FUN_10022280(int param_1, int param_2, undefined4 param_3, uint param_4)
 * called by: FUN_10022330
 */
uint __cdecl FUN_10022280(int param_1,int param_2,char *param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  byte_conflict *pbVar3;
  byte_conflict *pbVar4;
  uint uVar5;
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  void *this;
  float10 fVar6;
  
  pbVar3 = (byte_conflict *)(*(gEngfuncs.pNetAPI)->ValueForKey)(*(char **)(param_1 + 0x18),param_3);
  pbVar4 = (byte_conflict *)(*(gEngfuncs.pNetAPI)->ValueForKey)(*(char **)(param_2 + 0x18),param_3);
  fVar6 = FUN_1006b918(extraout_ECX,pbVar3);
  fVar1 = (float)fVar6;
  fVar6 = FUN_1006b918(extraout_ECX_00,pbVar4);
  fVar2 = (float)fVar6;
  if ((fVar1 == 0.0) || (fVar2 == 0.0)) {
    uVar5 = FUN_10076d90(this,pbVar3,pbVar4);
    return uVar5;
  }
  if (fVar2 < fVar1) {
    return param_4;
  }
  if (fVar1 < fVar2) {
    return -param_4;
  }
  return 0;
}

/* 10022330  FUN_10022330  (41 bytes)
 * uint FUN_10022330(int param_1, int param_2, undefined4 param_3)
 * called by: FUN_10022360
 */
uint FUN_10022330(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = FUN_10022280(param_1,param_2,param_3,1);
    return uVar1;
  }
  return 0;
}

/* 10022360  FUN_10022360  (25 bytes)
 * undefined FUN_10022360()
 */
void FUN_10022360(int *param_1,int *param_2)

{
  FUN_10022330(*param_1,*param_2,&DAT_100df1ac);
  return;
}

/* 10022380  FUN_10022380  (219 bytes)
 * undefined FUN_10022380(char * param_1)
 * called by: FUN_10022b30
 */
void __thiscall FUN_10022380(void *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (*(int *)((int)this + 0x418) != 0) {
    uVar5 = 0xffffffff;
    puVar8 = (undefined4 *)0x0;
    do {
      pcVar9 = param_1;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar9 + -uVar5;
    pcVar10 = (char *)&DAT_100df1ac;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    for (puVar2 = *(undefined4 **)((int)this + 0x418); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    piVar3 = operator_new((int)puVar8 * 4);
    piVar4 = piVar3;
    for (uVar5 = (uint)puVar8 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)piVar4 = 0;
      piVar4 = (int *)((int)piVar4 + 1);
    }
    piVar4 = piVar3;
    for (puVar2 = *(undefined4 **)((int)this + 0x418); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      *piVar4 = (int)puVar2;
      piVar4 = piVar4 + 1;
    }
    FUN_1006c264(piVar3,puVar8,4,FUN_10022360);
    iVar7 = (int)puVar8 + -1;
    *(int *)((int)this + 0x418) = *piVar3;
    piVar4 = piVar3;
    if (0 < iVar7) {
      do {
        iVar7 = iVar7 + -1;
        *(int *)*piVar4 = piVar4[1];
        piVar4 = piVar4 + 1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)piVar3[(int)puVar8 + -1] = 0;
    FUN_1006ad4c(piVar3);
  }
  return;
}

/* 10022460  FUN_10022460  (32 bytes)
 * undefined4 * FUN_10022460(int param_1)
 * called by: FUN_10022480
 */
undefined4 * __thiscall FUN_10022460(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)((int)this + 0x418);
  iVar2 = 0;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (iVar2 == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
    iVar2 = iVar2 + 1;
  }
  return puVar1;
}

/* 10022480  FUN_10022480  (25 bytes)
 * undefined4 FUN_10022480(int param_1)
 * called by: FUN_10022b10
 */
undefined4 __thiscall FUN_10022480(void *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_10022460(this,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    return puVar1[6];
  }
  return 0;
}

/* 100224a0  FUN_100224a0  (32 bytes)
 * undefined FUN_100224a0(int param_1)
 * called by: FUN_10022bd0
 */
void __fastcall FUN_100224a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x404) = 1;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x424) = 0;
                    /* WARNING: Could not recover jumptable at 0x100224bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(gEngfuncs.pNetAPI)->CancelAllRequests)();
  return;
}

/* 100224c0  FUN_100224c0  (814 bytes)
 * bool FUN_100224c0(int param_1, int * param_2, undefined4 * param_3)
 * called by: FUN_100227f0
 */
bool __thiscall FUN_100224c0(void *this,int param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  byte_conflict bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  byte_conflict *pbVar9;
  netadr_s *pnVar10;
  char *pcVar11;
  byte_conflict *pbVar12;
  undefined4 *puVar13;
  bool bStack_365;
  byte_conflict *local_364;
  int local_360;
  byte_conflict *pbStack_35c;
  undefined4 uStack_358;
  netadr_s nStack_354;
  char acStack_340 [64];
  byte_conflict local_300 [256];
  char local_200 [256];
  undefined1 auStack_100 [256];
  
  uVar4 = 0xffffffff;
  iVar6 = 0;
  pcVar8 = s_half_life_east_won_net_10093aec;
  do {
    pcVar11 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  local_364 = (byte_conflict *)0x0;
  pcVar8 = pcVar11 + -uVar4;
  pcVar11 = local_200;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar11 = pcVar11 + 4;
  }
  local_360 = 0;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar11 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar8 = s_woncomm_lst_10093ae0;
  do {
    pcVar11 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pbVar9 = (byte_conflict *)(pcVar11 + -uVar4);
  pbVar12 = local_300;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pbVar12 = *(undefined4 *)pbVar9;
    pbVar9 = pbVar9 + 4;
    pbVar12 = pbVar12 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar12 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    pbVar12 = pbVar12 + 1;
  }
  iVar3 = (*gEngfuncs.CheckParm)(s__comm_10093ad8,(char **)&local_364);
  if ((iVar3 != 0) && (local_364 != (byte_conflict *)0x0)) {
    uVar4 = 0xffffffff;
    pbVar9 = local_364;
    do {
      pbVar12 = pbVar9;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pbVar12 = pbVar9 + 1;
      bVar2 = *pbVar9;
      pbVar9 = pbVar12;
    } while (bVar2 != '\0');
    uVar4 = ~uVar4;
    pbVar9 = pbVar12 + -uVar4;
    pbVar12 = local_300;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar12 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar12 = pbVar12 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar12 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + 1;
    }
  }
  pbStack_35c = (*gEngfuncs.COM_LoadFile)((char *)local_300,5,(int *)0x0);
  if ((pbStack_35c != (byte_conflict *)0x0) && (local_364 = pbStack_35c, 0 < param_1)) {
LAB_1002259e:
    local_364 = (byte_conflict *)(*gEngfuncs.COM_ParseFile)((char *)local_364,this);
    uVar4 = 0xffffffff;
    pcVar8 = this;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if ((void *)(~uVar4 - 1) != (void *)0x0) {
      uVar4 = FUN_10076d90((void *)(~uVar4 - 1),this,(byte_conflict *)s_Master_10093ad0);
      if (uVar4 == 0) {
        uStack_358 = 0x6982;
      }
      bStack_365 = uVar4 != 0;
      local_364 = (byte_conflict *)(*gEngfuncs.COM_ParseFile)((char *)local_364,this);
      uVar4 = 0xffffffff;
      pcVar8 = this;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      if ((((void *)(~uVar4 - 1) != (void *)0x0) &&
          (uVar4 = FUN_10076d90((void *)(~uVar4 - 1),this,&DAT_10093acc), uVar4 == 0)) &&
         (iVar6 < param_1)) {
        puVar7 = param_3 + iVar6 * 5;
        do {
          local_364 = (byte_conflict *)(*gEngfuncs.COM_ParseFile)((char *)local_364,this);
          uVar4 = 0xffffffff;
          pcVar8 = this;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          if (((void *)(~uVar4 - 1) == (void *)0x0) ||
             (uVar4 = FUN_10076d90((void *)(~uVar4 - 1),this,&DAT_10093ac8), uVar4 == 0))
          goto LAB_1002275d;
          FUN_1006ac7a(auStack_100,&DAT_10093568);
          local_364 = (byte_conflict *)(*gEngfuncs.COM_ParseFile)((char *)local_364,this);
          uVar4 = 0xffffffff;
          pcVar8 = this;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          if (((void *)(~uVar4 - 1) == (void *)0x0) ||
             (uVar4 = FUN_10076d90((void *)(~uVar4 - 1),this,&DAT_10093ac4), uVar4 != 0))
          goto LAB_1002275d;
          local_364 = (byte_conflict *)(*gEngfuncs.COM_ParseFile)((char *)local_364,this);
          uVar4 = 0xffffffff;
          pcVar8 = this;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          if ((void *)(~uVar4 - 1) == (void *)0x0) goto LAB_1002275d;
          FUN_1006c042((void *)(~uVar4 - 1),this);
          FUN_1006ac7a(acStack_340,(byte_conflict *)s__s__i_10093abc);
          iVar6 = (*(gEngfuncs.pNetAPI)->StringToAdr)(acStack_340,&nStack_354);
          if (iVar6 == 0) {
            bStack_365 = true;
          }
          else if (!bStack_365) {
            pnVar10 = &nStack_354;
            puVar13 = puVar7;
            for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar13 = *(undefined4 *)pnVar10;
              pnVar10 = (netadr_s *)&pnVar10->field2_0x4;
              puVar13 = puVar13 + 1;
            }
            local_360 = local_360 + 1;
            puVar7 = puVar7 + 5;
          }
          iVar6 = local_360;
          if (param_1 <= local_360) break;
        } while( true );
      }
    }
    goto LAB_1002276b;
  }
LAB_10022773:
  pbVar9 = pbStack_35c;
  FUN_1006ac7a(local_200,(byte_conflict *)s_half_life_east_won_net_10093aec);
  iVar3 = (*(gEngfuncs.pNetAPI)->StringToAdr)(local_200,&nStack_354);
  if (iVar3 != 0) {
    local_360 = 1;
    iVar6 = 1;
    pnVar10 = &nStack_354;
    for (iVar3 = 5; pbVar9 = pbStack_35c, iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_3 = *(undefined4 *)pnVar10;
      pnVar10 = (netadr_s *)&pnVar10->field2_0x4;
      param_3 = param_3 + 1;
    }
  }
LAB_100227c3:
  *param_2 = iVar6;
  if (pbVar9 != (byte_conflict *)0x0) {
    (*gEngfuncs.COM_FreeFile)(pbVar9);
  }
  return 0 < iVar6;
LAB_1002275d:
  iVar6 = local_360;
  if (param_1 <= local_360) goto LAB_1002276b;
  goto LAB_1002259e;
LAB_1002276b:
  pbVar9 = pbStack_35c;
  if (iVar6 != 0) goto LAB_100227c3;
  goto LAB_10022773;
}

/* 100227f0  FUN_100227f0  (221 bytes)
 * undefined FUN_100227f0(void * param_1)
 * called by: FUN_10022be0
 */
void __fastcall FUN_100227f0(void *param_1)

{
  int context;
  bool bVar1;
  undefined3 extraout_var;
  net_api_response_func_t unaff_ESI;
  int local_18;
  undefined4 local_14 [5];
  
  local_18 = 0;
  *(undefined4 *)((int)param_1 + 0x408) = *(undefined4 *)((int)param_1 + 0x428);
  *(undefined4 *)((int)param_1 + 0x40c) = *(undefined4 *)((int)param_1 + 0x42c);
  *(undefined4 *)((int)param_1 + 0x400) = 1;
  *(undefined4 *)((int)param_1 + 0x404) = 0;
  bVar1 = FUN_100224c0(param_1,1,&local_18,local_14);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    (*gEngfuncs.Con_DPrintf)(s_SendRequest__Unable_to_read_mast_10093b04);
    return;
  }
  FUN_10022210((undefined4 *)((int)param_1 + 0x414));
  FUN_10022210((undefined4 *)((int)param_1 + 0x410));
  FUN_10022240((undefined4 *)((int)param_1 + 0x418));
  *(undefined4 *)((int)param_1 + 0x41c) = 0;
  (*(gEngfuncs.pNetAPI)->InitNetworking)();
  (*(gEngfuncs.pNetAPI)->CancelAllRequests)();
  context = DAT_100df2ac;
  DAT_100df2ac = DAT_100df2ac + 1;
  (*(gEngfuncs.pNetAPI)->SendRequest)
            (context,0,0,(double)CONCAT44(local_14,0x40140000),(netadr_s *)FUN_10021d50,unaff_ESI);
  return;
}

/* 100228d0  FUN_100228d0  (278 bytes)
 * undefined FUN_100228d0(int param_1)
 * called by: FUN_10022bf0
 */
void __thiscall FUN_100228d0(void *this,int param_1)

{
  int iVar1;
  undefined4 uStack00000008;
  net_api_response_func_t response;
  
  response = (net_api_response_func_t)0x0;
  *(undefined4 *)((int)this + 0x408) = *(undefined4 *)((int)this + 0x428);
  *(undefined4 *)((int)this + 0x400) = 1;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined4 *)((int)this + 0x40c) = *(undefined4 *)((int)this + 0x42c);
  if (param_1 != 0) {
    FUN_10022210((undefined4 *)((int)this + 0x414));
    FUN_10022210((undefined4 *)((int)this + 0x410));
    FUN_10022240((undefined4 *)((int)this + 0x418));
    *(undefined4 *)((int)this + 0x41c) = 0;
  }
  Ordinal_9(0x6987);
  (*(gEngfuncs.pNetAPI)->InitNetworking)();
  if (param_1 != 0) {
    (*(gEngfuncs.pNetAPI)->CancelAllRequests)();
  }
  iVar1 = DAT_100df2ac;
  DAT_100df2ac = DAT_100df2ac + 1;
  (*(gEngfuncs.pNetAPI)->SendRequest)
            (iVar1,4,1,(double)CONCAT44(&stack0xffffffe8,0x40140000),(netadr_s *)FUN_10021d70,
             (net_api_response_func_t)0x2);
  iVar1 = DAT_100df2ac;
  DAT_100df2ac = DAT_100df2ac + 1;
  uStack00000008 = 5;
  (*(gEngfuncs.pNetAPI)->SendRequest)
            (iVar1,4,1,(double)CONCAT44(&stack0x00000008,0x40140000),(netadr_s *)FUN_10021d70,
             response);
  return;
}

/* 100229f0  FUN_100229f0  (14 bytes)
 * bool FUN_100229f0(int param_1)
 * called by: FUN_10022af0
 */
bool __fastcall FUN_100229f0(int param_1)

{
  return *(int *)(param_1 + 0x400) != 0;
}

/* 10022a00  FUN_10022a00  (89 bytes)
 * undefined FUN_10022a00(int param_1)
 * called by: FUN_10022b80
 */
void __fastcall FUN_10022a00(int param_1)

{
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0;
  *(undefined4 *)(param_1 + 0x404) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  *(undefined4 *)(param_1 + 0x414) = 0;
  *(undefined4 *)(param_1 + 0x424) = 0;
  *(undefined4 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x42c) = 0;
  *(undefined4 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x434) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  return;
}

/* 10022a60  FUN_10022a60  (130 bytes)
 * undefined FUN_10022a60(int param_1)
 * called by: FUN_10022b50
 */
void __fastcall FUN_10022a60(int param_1)

{
  FUN_10022210((undefined4 *)(param_1 + 0x414));
  FUN_10022210((undefined4 *)(param_1 + 0x410));
  FUN_10022240((undefined4 *)(param_1 + 0x418));
  *(undefined4 *)(param_1 + 0x41c) = 0;
  if (*(LPVOID *)(param_1 + 0x430) != (LPVOID)0x0) {
    FUN_1006ad4c(*(LPVOID *)(param_1 + 0x430));
    *(undefined4 *)(param_1 + 0x430) = 0;
  }
  if (*(LPVOID *)(param_1 + 0x434) != (LPVOID)0x0) {
    FUN_1006ad4c(*(LPVOID *)(param_1 + 0x434));
    *(undefined4 *)(param_1 + 0x434) = 0;
  }
  if (*(LPVOID *)(param_1 + 0x438) != (LPVOID)0x0) {
    FUN_1006ad4c(*(LPVOID *)(param_1 + 0x438));
    *(undefined4 *)(param_1 + 0x438) = 0;
  }
  return;
}

/* 10022af0  FUN_10022af0  (18 bytes)
 * bool FUN_10022af0(void)
 * called by: FUN_1005fb90
 */
bool FUN_10022af0(void)

{
  bool bVar1;
  
  if (DAT_100df2b0 != 0) {
    bVar1 = FUN_100229f0(DAT_100df2b0);
    return bVar1;
  }
  return false;
}

/* 10022b10  FUN_10022b10  (24 bytes)
 * undefined4 FUN_10022b10(int param_1)
 * called by: FUN_1005fb90, FUN_1005fe50, FUN_100600b0
 */
undefined4 __cdecl FUN_10022b10(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_100df2b0 != (void *)0x0) {
    uVar1 = FUN_10022480(DAT_100df2b0,param_1);
    return uVar1;
  }
  return 0;
}

/* 10022b30  FUN_10022b30  (21 bytes)
 * undefined FUN_10022b30(char * param_1)
 * called by: FUN_1005fee0
 */
void __cdecl FUN_10022b30(char *param_1)

{
  if (DAT_100df2b0 != (void *)0x0) {
    FUN_10022380(DAT_100df2b0,param_1);
  }
  return;
}

/* 10022b50  FUN_10022b50  (39 bytes)
 * undefined FUN_10022b50(void)
 * called by: FUN_10020590, FUN_10022b80
 */
void FUN_10022b50(void)

{
  LPVOID pvVar1;
  
  pvVar1 = DAT_100df2b0;
  if (DAT_100df2b0 != (LPVOID)0x0) {
    FUN_10022a60((int)DAT_100df2b0);
    FUN_1006ad4c(pvVar1);
    DAT_100df2b0 = (LPVOID)0x0;
  }
  return;
}

/* 10022b80  FUN_10022b80  (43 bytes)
 * undefined FUN_10022b80(void)
 * called by: FUN_10020170
 */
void FUN_10022b80(void)

{
  void *pvVar1;
  
  FUN_10022b50();
  pvVar1 = operator_new(0x440);
  if (pvVar1 != (void *)0x0) {
    DAT_100df2b0 = FUN_10022a00((int)pvVar1);
    return;
  }
  DAT_100df2b0 = 0;
  return;
}

/* 10022bb0  FUN_10022bb0  (26 bytes)
 * undefined FUN_10022bb0(undefined4 param_1, undefined4 param_2)
 * called by: HUD_Frame
 */
void __cdecl FUN_10022bb0(undefined4 param_1,undefined4 param_2)

{
  if (DAT_100df2b0 != (void *)0x0) {
    FUN_10022070(DAT_100df2b0,(double)CONCAT44(param_2,param_1));
  }
  return;
}

/* 10022bd0  FUN_10022bd0  (16 bytes)
 * undefined FUN_10022bd0(void)
 * called by: FUN_1005fec0
 */
void FUN_10022bd0(void)

{
  if (DAT_100df2b0 != 0) {
    FUN_100224a0(DAT_100df2b0);
    return;
  }
  return;
}

/* 10022be0  FUN_10022be0  (16 bytes)
 * undefined FUN_10022be0(void)
 * called by: FUN_1005feb0
 */
void FUN_10022be0(void)

{
  if (DAT_100df2b0 != (void *)0x0) {
    FUN_100227f0(DAT_100df2b0);
    return;
  }
  return;
}

/* 10022bf0  FUN_10022bf0  (21 bytes)
 * undefined FUN_10022bf0(int param_1)
 * called by: FUN_1005feb0
 */
void __cdecl FUN_10022bf0(int param_1)

{
  if (DAT_100df2b0 != (void *)0x0) {
    FUN_100228d0(DAT_100df2b0,param_1);
  }
  return;
}

/* 10022c10  FUN_10022c10  (82 bytes)
 * undefined FUN_10022c10()
 */
void FUN_10022c10(void)

{
  int iVar1;
  byte_conflict *pbVar2;
  void *this;
  int unaff_retaddr;
  
  iVar1 = (*gEngfuncs.IsSpectateOnly)();
  if (iVar1 == 0) {
    (*gEngfuncs.Con_Printf)(s_specmode_only_in_HLTV_mode_avail_10093b60);
    return;
  }
  iVar1 = (*gEngfuncs.Cmd_Argc)();
  if (iVar1 < 2) {
    (*gEngfuncs.Con_Printf)(s_usage__specmode_<_modenumber_>_10093b3c);
    return;
  }
  pbVar2 = (byte_conflict *)(*gEngfuncs.Cmd_Argv)(1);
  iVar1 = FUN_1006c042(this,pbVar2);
  FUN_100234d0(&DAT_100cfff8,iVar1,unaff_retaddr);
  return;
}

/* 10022c70  FUN_10022c70  (129 bytes)
 * undefined4 FUN_10022c70(int param_1)
 */
undefined4 __fastcall FUN_10022c70(int param_1)

{
  cvar_s *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_10020a40(&DAT_100cf920,param_1);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  *(undefined4 *)(param_1 + 0xc94) = 0;
  *(undefined4 *)(param_1 + 0x948) = 0;
  *(undefined4 *)(param_1 + 0xc98) = 0;
  *(undefined4 *)(param_1 + 0xc9c) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x1c);
  for (iVar2 = 0x4b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x148);
  for (iVar2 = 0x200; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  pcVar1 = (*gEngfuncs.pfnRegisterVariable)(s_cl_drawnames_10093b94,&DAT_10092c08,1);
  *(cvar_s **)(param_1 + 0x968) = pcVar1;
  (*gEngfuncs.pfnAddCommand)(s_specmode_10093b88,FUN_10022c10);
  return 1;
}

/* 10022d00  FUN_10022d00  (152 bytes)
 * undefined FUN_10022d00(float * param_1, char * param_2)
 * called by: FUN_10022da0
 */
void __cdecl FUN_10022d00(float *param_1,char *param_2)

{
  byte_conflict *pbVar1;
  char cVar2;
  byte_conflict bVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *extraout_ECX;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte_conflict *pbVar10;
  float *pfVar11;
  float10 fVar12;
  byte_conflict local_80;
  byte_conflict local_7f [127];
  
  uVar4 = 0xffffffff;
  do {
    pcVar9 = param_2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = param_2 + 1;
    cVar2 = *param_2;
    param_2 = pcVar9;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  pcVar9 = pcVar9 + -uVar4;
  pbVar10 = &local_80;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pbVar10 = pbVar10 + 4;
  }
  iVar8 = 0;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar10 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pbVar10 = pbVar10 + 1;
  }
  pbVar10 = &local_80;
  puVar6 = (undefined *)0x0;
  pfVar11 = param_1;
  do {
    fVar12 = FUN_1006b918(puVar6,pbVar10);
    bVar3 = *pbVar10;
    *pfVar11 = (float)fVar12;
    while ((bVar3 != '\0' && (bVar3 != ' '))) {
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
    }
    if (*pbVar10 == '\0') break;
    pbVar10 = pbVar10 + 1;
    iVar8 = iVar8 + 1;
    pfVar11 = pfVar11 + 1;
    puVar6 = extraout_ECX;
  } while (iVar8 < 3);
  if ((iVar8 < 2) && (iVar8 = iVar8 + 1, iVar8 < 3)) {
    pfVar11 = param_1 + iVar8;
    for (iVar7 = 3 - iVar8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar11 = 0.0;
      pfVar11 = pfVar11 + 1;
    }
  }
  return;
}

/* 10022da0  FUN_10022da0  (575 bytes)
 * undefined FUN_10022da0(void)
 * called by: FUN_10023380
 */
void FUN_10022da0(void)

{
  byte bVar1;
  char cVar2;
  cl_entity_s *pcVar3;
  char *data;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  bool bVar10;
  float local_50c;
  undefined4 local_508;
  undefined4 local_504;
  byte abStack_500 [256];
  byte abStack_400 [1024];
  
  local_50c = 0.0;
  local_508 = 0;
  local_504 = 0;
  pcVar3 = (*gEngfuncs.GetEntityByIndex)(0);
  if (pcVar3 != (cl_entity_s *)0x0) {
    data = (*gEngfuncs.COM_ParseFile)(*(char **)(pcVar3->model + 0x180),(char *)abStack_400);
    cVar2 = *data;
    while ((cVar2 != '\0' && (abStack_400[0] != 0x7d))) {
      if (abStack_400[0] != 0x7b) {
        return;
      }
      while (data = (*gEngfuncs.COM_ParseFile)(data,(char *)abStack_400), abStack_400[0] != 0x7d) {
        if (data == (char *)0x0) {
          return;
        }
        uVar6 = 0xffffffff;
        pbVar4 = abStack_400;
        do {
          pbVar9 = pbVar4;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pbVar9 = pbVar4 + 1;
          bVar1 = *pbVar4;
          pbVar4 = pbVar9;
        } while (bVar1 != 0);
        uVar6 = ~uVar6;
        pbVar4 = pbVar9 + -uVar6;
        pbVar9 = abStack_500;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pbVar9 = *(undefined4 *)pbVar4;
          pbVar4 = pbVar4 + 4;
          pbVar9 = pbVar9 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar9 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          pbVar9 = pbVar9 + 1;
        }
        uVar6 = 0xffffffff;
        pbVar4 = abStack_500;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar1 != 0);
        uVar6 = ~uVar6;
        while ((uVar6 - 1 != 0 && (*(char *)((int)&local_504 + uVar6 + 2) == ' '))) {
          *(undefined1 *)((int)&local_504 + uVar6 + 2) = 0;
          uVar6 = uVar6 - 1;
        }
        data = (*gEngfuncs.COM_ParseFile)(data,(char *)abStack_400);
        if (data == (char *)0x0) {
          return;
        }
        if (abStack_400[0] == 0x7d) {
          return;
        }
        pcVar8 = s_classname_10093bc0;
        pbVar4 = abStack_500;
        do {
          bVar1 = *pbVar4;
          bVar10 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_10022ee3:
            iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_10022ee8;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar10 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_10022ee3;
          pbVar4 = pbVar4 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_10022ee8:
        if (iVar5 == 0) {
          pcVar8 = s_info_player_start_10093bac;
          pbVar4 = abStack_400;
          do {
            bVar1 = *pbVar4;
            bVar10 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_10022f1c:
              iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_10022f21;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar10 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_10022f1c;
            pbVar4 = pbVar4 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_10022f21:
          if (iVar5 == 0) break;
        }
        pcVar8 = s_origin_10093ba4;
        pbVar4 = abStack_500;
        do {
          bVar1 = *pbVar4;
          bVar10 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_10022f52:
            iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_10022f57;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar10 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_10022f52;
          pbVar4 = pbVar4 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_10022f57:
        if (iVar5 == 0) {
          FUN_10022d00(&local_50c,(char *)abStack_400);
        }
      }
      data = (*gEngfuncs.COM_ParseFile)(data,(char *)abStack_400);
      cVar2 = *data;
    }
  }
  DAT_10192154 = 1;
  DAT_10191d48 = local_504;
  DAT_10191d44 = local_508;
  DAT_10191d40 = local_50c;
  DAT_101914f0 = 1;
  DAT_101913ec = local_504;
  DAT_101913e8 = local_508;
  DAT_101913e4 = local_50c;
  return;
}

/* 10022fe0  FUN_10022fe0  (159 bytes)
 * undefined4 FUN_10022fe0(int param_1)
 */
undefined4 __fastcall FUN_10022fe0(int param_1)

{
  HSPRITE HVar1;
  
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_iplayer_spr_10093c6c);
  *(HSPRITE *)(param_1 + 0xc74) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_iplayerblue_spr_10093c54);
  *(HSPRITE *)(param_1 + 0xc6c) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_iplayerred_spr_10093c3c);
  *(HSPRITE *)(param_1 + 0xc70) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_iplayerdead_spr_10093c24);
  *(HSPRITE *)(param_1 + 0xc7c) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_tile_spr_10093c10);
  *(HSPRITE *)(param_1 + 0xc84) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_laserbeam_spr_10093bf8);
  *(HSPRITE *)(param_1 + 0xc88) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_camera_spr_10093be4);
  *(HSPRITE *)(param_1 + 0xc78) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_crosshairs_spr_10093bcc);
  *(HSPRITE *)(param_1 + 0xc8c) = HVar1;
  *(undefined4 *)(param_1 + 0xc94) = 0;
  return 1;
}

/* 10023080  FUN_10023080  (754 bytes)
 * undefined FUN_10023080()
 */
undefined4 __fastcall FUN_10023080(int param_1)

{
  char cVar1;
  float fVar2;
  int iVar3;
  short *psVar4;
  float *pfVar5;
  char *pcVar6;
  longlong lVar7;
  float *string;
  float fStack_120;
  float fStack_11c;
  float fStack_114;
  float afStack_10c [3];
  char acStack_100 [4];
  float fStack_fc;
  float fStack_f8;
  float afStack_f4 [61];
  
  iVar3 = (*gEngfuncs.IsSpectateOnly)();
  if (iVar3 != 1) {
    return 1;
  }
  if ((*(float *)(param_1 + 0xc98) != 0.0) && (DAT_10190b18 != 3)) {
    fVar2 = *(float *)(param_1 + 0x94c) + *(float *)(param_1 + 0xc98);
    *(float *)(param_1 + 0x94c) = fVar2;
    if (3.0 < fVar2) {
      *(undefined4 *)(param_1 + 0x94c) = 0x40400000;
    }
    if (*(float *)(param_1 + 0x94c) < 0.5) {
      *(undefined4 *)(param_1 + 0x94c) = 0x3f000000;
    }
  }
  if ((*(float *)(param_1 + 0xc9c) != 0.0) && (DAT_10190b18 != 3)) {
    (*gEngfuncs.pfnAngleVectors)((float *)(param_1 + 0x95c),(float *)0x0,afStack_10c,(float *)0x0);
    FUN_10029e40(&fStack_fc);
    FUN_100583e0(&fStack_fc,*(float *)(param_1 + 0xc9c),&fStack_fc);
    *(float *)(param_1 + 0x950) = fStack_fc + *(float *)(param_1 + 0x950);
    *(float *)(param_1 + 0x954) = fStack_f8 + *(float *)(param_1 + 0x954);
    *(float *)(param_1 + 0x958) = afStack_f4[0] + *(float *)(param_1 + 0x958);
  }
  if (*(float *)(*(int *)(param_1 + 0x968) + 0xc) == 0.0) {
    return 1;
  }
  FUN_10064880(DAT_100d5cb0);
  psVar4 = &DAT_1019021c;
  pfVar5 = (float *)(param_1 + 0x970);
  do {
    if (0.0 <= pfVar5[1]) {
      if (*(int *)(param_1 + 0x14) != 0) {
        if ((float)*(int *)(param_1 + 0x138) * (float)DAT_100d5908 * 0.0015625 < pfVar5[-1]) {
          if ((((float)*(int *)(param_1 + 0x13c) * (float)DAT_100d590c * 0.0020833334 < *pfVar5) &&
              (pfVar5[-1] <
               (float)(*(int *)(param_1 + 0x144) + *(int *)(param_1 + 0x138)) *
               (float)DAT_100d5908 * 0.0015625)) &&
             (*pfVar5 < (float)(*(int *)(param_1 + 0x140) + *(int *)(param_1 + 0x13c)) *
                        (float)DAT_100d590c * 0.0020833334)) goto LAB_10023343;
        }
      }
      if (*psVar4 == 1) {
        fStack_120 = 0.4;
        fStack_114 = 0.4;
        fStack_11c = 1.0;
      }
      else if (*psVar4 == 2) {
        fStack_120 = 1.0;
        fStack_114 = 0.4;
        fStack_11c = 0.4;
      }
      else {
        fStack_120 = 0.8;
        fStack_114 = 0.8;
        fStack_11c = 0.8;
      }
      FUN_1006ac7a(acStack_100,&DAT_10093568);
      iVar3 = -1;
      pcVar6 = acStack_100;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      (*gEngfuncs.pfnDrawSetTextColor)(fStack_120,fStack_114,fStack_11c);
      string = afStack_f4;
      lVar7 = __ftol();
      iVar3 = (int)lVar7;
      lVar7 = __ftol();
      (*gEngfuncs.pfnDrawConsoleString)((int)lVar7,iVar3,(char *)string);
    }
LAB_10023343:
    psVar4 = psVar4 + 0x10;
    pfVar5 = pfVar5 + 3;
    if (0x10190a1b < (int)psVar4) {
      return 1;
    }
  } while( true );
}

/* 10023380  FUN_10023380  (204 bytes)
 * undefined FUN_10023380(char param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * called by: HUD_DirectorEvent
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10023380(void *this,char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == '\0') {
    DAT_10190a10 = 0;
    DAT_10190b24 = 0;
    DAT_10192154 = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    DAT_10190b18 = 0;
    *(undefined4 *)((int)this + 0xca4) = 0;
    *(undefined4 *)((int)this + 0xca0) = 0;
    *(undefined4 *)((int)this + 0x948) = 0;
    *(undefined4 *)((int)this + 0xc94) = 0;
    puVar2 = (undefined4 *)((int)this + 0x148);
    for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    FUN_100234d0(this,2,0);
    FUN_10023720((int)this);
    FUN_10023c60((int)this);
    FUN_10022da0();
    return;
  }
  if (param_1 != '\x02') {
    (*gEngfuncs.Con_DPrintf)(s_CHudSpectator__DirectorEvent__un_10093c80);
    return;
  }
  if (DAT_10190b18 == 4) {
    DAT_10190b20 = param_2;
    *(undefined4 *)((int)this + 0x948) = param_2;
    DAT_10190b1c = param_3;
  }
  *(undefined4 *)((int)this + 0xca0) = param_2;
  *(undefined4 *)((int)this + 0xca4) = param_3;
  _DAT_10192158 = param_4;
  return;
}

/* 10023450  FUN_10023450  (67 bytes)
 * undefined FUN_10023450(byte.conflict param_1)
 * called by: FUN_10025da0, FUN_10025df0, FUN_10025e80, FUN_10025ed0, FUN_10025f40, FUN_10026050, FUN_10026090, FUN_10026210
 */
void __thiscall FUN_10023450(void *this,byte_conflict param_1)

{
  float10 extraout_ST0;
  
  (*gEngfuncs.GetClientTime)();
  if (((float10)*(float *)((int)this + 0xc94) <= extraout_ST0) &&
     (*(float *)((int)this + 0xc94) = (float)(extraout_ST0 + (float10)0.2), (param_1 & 1) != 0)) {
    (*gEngfuncs.pfnServerCmd)(s_respawn_10093cbc);
    return;
  }
  return;
}

/* 100234a0  FUN_100234a0  (45 bytes)
 * undefined FUN_100234a0(uint param_1)
 * called by: FUN_10025dd0, FUN_10025e20, FUN_10025eb0, FUN_10025f00
 */
void __thiscall FUN_100234a0(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = (*gEngfuncs.IsSpectateOnly)();
  if (iVar1 == 1) {
    if ((param_1 & 0x18) != 0) {
      *(undefined4 *)((int)this + 0xc98) = 0;
    }
    if ((param_1 & 0x600) != 0) {
      *(undefined4 *)((int)this + 0xc9c) = 0;
    }
  }
  return;
}

/* 100234d0  FUN_100234d0  (510 bytes)
 * undefined FUN_100234d0(int param_1, int param_2)
 * called by: FUN_10022c10, FUN_10023380
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100234d0(void *this,int param_1,int param_2)

{
  char cVar1;
  wrect_t rc;
  cl_entity_s *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  HSPRITE hspr;
  undefined4 uVar6;
  int iVar7;
  int r;
  int g;
  int b;
  char local_20 [20];
  undefined4 uStack_c;
  
  if ((param_1 < 1) || (5 < param_1)) {
    (*gEngfuncs.Con_Printf)(s_Invalid_spectator_mode__10093cc4);
    return;
  }
  if (param_2 != *(int *)((int)this + 0x14)) {
    *(int *)((int)this + 0x14) = param_2;
    FUN_1006ac7a(local_20,(byte_conflict *)s__c_Spec_Mode_Inset_d_10093cf0);
    uVar4 = 0xffffffff;
    pcVar5 = local_20;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_10034a60(0,~uVar4,local_20);
  }
  if (param_1 == DAT_10190b18) goto LAB_100236a3;
  if (param_1 == 2) {
    DAT_10190b18 = 4;
  }
  else if (param_1 == 3) {
    DAT_10190b18 = 3;
    *(undefined4 *)((int)this + 0x948) = 0;
    DAT_10190b20 = 0;
    DAT_10190b1c = 0;
  }
  else if (param_1 == 5) {
    DAT_10190b18 = 5;
  }
  FUN_1006ac7a(local_20,(byte_conflict *)s__c_Spec_Mode_d_10093ce0);
  uVar4 = 0xffffffff;
  pcVar5 = local_20;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_10034a60(0,~uVar4,local_20);
  if (DAT_10190b18 == 4) {
    if (*(int *)((int)this + 0x948) == 0) {
      pcVar2 = (*gEngfuncs.GetEntityByIndex)(*(int *)((int)this + 0xca0));
      uVar3 = FUN_100236d0(&pcVar2->index);
      if ((char)uVar3 != '\0') {
        DAT_10190b20 = *(undefined4 *)((int)this + 0xca0);
        *(undefined4 *)((int)this + 0x948) = DAT_10190b20;
        DAT_10190b1c = *(undefined4 *)((int)this + 0xca4);
      }
      goto LAB_1002360e;
    }
LAB_1002361d:
    b = 0;
    g = 0;
    r = 0;
    _DAT_100df2c4 = 0;
    _DAT_100df2b8 = 0;
    _DAT_100df2bc = 0;
    uVar3 = 0;
    hspr = 0;
    uVar6 = 0;
    iVar7 = 0;
  }
  else {
LAB_1002360e:
    if ((DAT_10190b18 != 3) && (DAT_10190b18 != 5)) goto LAB_1002361d;
    b = 0xff;
    g = 0xff;
    r = 0xff;
    _DAT_100df2b8 = 0x18;
    uVar3 = 0x18;
    _DAT_100df2bc = 0x30;
    _DAT_100df2c4 = 0x18;
    uVar6 = 0x30;
    hspr = *(HSPRITE *)((int)this + 0xc8c);
    iVar7 = 0x18;
  }
  _DAT_100df2c0 = 0;
  rc.right = uVar6;
  rc.left = uVar3;
  rc.top = 0;
  rc.bottom = iVar7;
  (*gEngfuncs.pfnSetCrosshair)(hspr,rc,r,g,b);
LAB_100236a3:
  uStack_c = 0x100236ae;
  FUN_10063870(DAT_100d5cb0);
  return;
}

/* 100236d0  FUN_100236d0  (67 bytes)
 * undefined4 FUN_100236d0(int * param_1)
 * called by: FUN_100234d0
 */
undefined4 FUN_100236d0(int *param_1)

{
  cl_entity_s *pcVar1;
  
  if (((param_1 != (int *)0x0) && (param_1[1] != 0)) && (*(short *)((int)param_1 + 0x2ea) != 0)) {
    pcVar1 = (*gEngfuncs.GetLocalPlayer)();
    if (((cl_entity_s *)param_1 != pcVar1) && (*(int *)(&DAT_1018fbd8 + *param_1 * 0x14) != 0)) {
      return 1;
    }
  }
  return 0;
}

/* 10023720  FUN_10023720  (1344 bytes)
 * uint FUN_10023720(int param_1)
 * called by: FUN_10023380
 */
uint __fastcall FUN_10023720(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *this;
  char *pcVar5;
  byte_conflict *data;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  void *this_00;
  void *this_01;
  undefined *extraout_ECX;
  void *this_02;
  undefined *extraout_ECX_00;
  undefined *extraout_ECX_01;
  void *this_03;
  undefined *extraout_ECX_02;
  undefined *extraout_ECX_03;
  void *this_04;
  void *this_05;
  void *this_06;
  void *extraout_ECX_04;
  undefined *extraout_ECX_05;
  void *this_07;
  void *extraout_ECX_06;
  float *pfVar10;
  char *pcVar11;
  float *pfVar12;
  char *pcVar13;
  float10 fVar14;
  longlong lVar15;
  byte_conflict abStack_5e4 [8];
  undefined4 uStack_5dc;
  float *pfStack_5d0;
  byte_conflict abStack_5cc [8];
  byte_conflict abStack_5c4 [8];
  char acStack_5bc [8];
  byte_conflict abStack_5b4 [948];
  char acStack_200 [12];
  undefined1 auStack_1f4 [8];
  undefined1 auStack_1ec [8];
  undefined1 auStack_1e4 [8];
  undefined1 auStack_1dc [215];
  undefined1 auStack_105 [5];
  char acStack_100 [256];
  
  pfVar10 = (float *)(param_1 + 0x1c);
  pfVar12 = pfVar10;
  for (iVar7 = 0x4b; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar12 = 0.0;
    pfVar12 = pfVar12 + 1;
  }
  *(undefined4 *)(param_1 + 0x140) = 0xb4;
  *(undefined4 *)(param_1 + 0x138) = 4;
  *(undefined4 *)(param_1 + 0x13c) = 4;
  *(undefined4 *)(param_1 + 0x144) = 0xf0;
  *pfVar10 = 0.0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  pcVar5 = (*gEngfuncs.pfnGetLevelName)();
  uVar8 = 0xffffffff;
  pcVar5 = pcVar5 + 5;
  do {
    pcVar11 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar11 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar11;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar11 + -uVar8;
  pcVar11 = acStack_100;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar11 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar8 = 0xffffffff;
  pcVar5 = acStack_100;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  auStack_105[~uVar8] = 0;
  FUN_1006ac7a(acStack_200,(byte_conflict *)s_overviews__s_txt_10093e10);
  data = (*gEngfuncs.COM_LoadFile)(acStack_200,5,(int *)0x0);
  if (data == (byte_conflict *)0x0) {
    uVar8 = (*gEngfuncs.Con_Printf)(s_Couldn_t_open_file__s__Using_def_10093dd0,auStack_1f4);
    return uVar8 & 0xffffff00;
  }
  do {
    do {
      while( true ) {
        data = (byte_conflict *)(*gEngfuncs.COM_ParseFile)((char *)data,&stack0xfffffa0c);
        if (data == (byte_conflict *)0x0) {
          fVar2 = *pfVar10;
          fVar3 = pfVar10[1];
          *(undefined4 *)(param_1 + 0x94c) = *(undefined4 *)(param_1 + 0x28);
          fVar4 = pfVar10[2];
          *(float *)(param_1 + 0x950) = fVar2;
          *(float *)(param_1 + 0x954) = fVar3;
          *(float *)(param_1 + 0x958) = fVar4;
          return CONCAT31((int3)((uint)fVar2 >> 8),1);
        }
        uVar8 = FUN_10076d90(this_00,&stack0xfffffa14,(byte_conflict *)s_global_10093dc8);
        if (uVar8 == 0) break;
        uVar8 = FUN_10076d90(&stack0xfffffa14,&stack0xfffffa14,(byte_conflict *)s_layer_10093db0);
        if (uVar8 == 0) {
          if (*(int *)(param_1 + 0x2c) == 1) {
            uVar8 = (*gEngfuncs.Con_Printf)
                              (s_Error_parsing_overview_file__s____10093d38,auStack_1ec);
            return uVar8 & 0xffffff00;
          }
          pcVar5 = (*gEngfuncs.COM_ParseFile)((char *)data,&stack0xfffffa14);
          uVar8 = FUN_10076d90(this_05,abStack_5e4,&DAT_10093acc);
          if (uVar8 != 0) {
            uVar8 = (*gEngfuncs.Con_Printf)
                              (s_Error_parsing_overview_file__s____10093d70,auStack_1e4);
            return uVar8 & 0xffffff00;
          }
          data = (byte_conflict *)(*gEngfuncs.COM_ParseFile)(pcVar5,(char *)abStack_5e4);
          uVar8 = FUN_10076d90(this_06,(byte_conflict *)&uStack_5dc,&DAT_10093ac8);
          this = extraout_ECX_04;
          while (uVar8 != 0) {
            uVar8 = FUN_10076d90(this,(byte_conflict *)&uStack_5dc,(byte_conflict *)s_image_10093da8
                                );
            if (uVar8 == 0) {
              pcVar5 = (*gEngfuncs.COM_ParseFile)((char *)data,(char *)&uStack_5dc);
              uVar8 = 0xffffffff;
              pcVar11 = &stack0xfffffa2c;
              do {
                pcVar13 = pcVar11;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar13 = pcVar11 + 1;
                cVar1 = *pcVar11;
                pcVar11 = pcVar13;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              pcVar11 = pcVar13 + -uVar8;
              pcVar13 = (char *)(*(int *)(param_1 + 0x2c) * 0xff + 0x34 + param_1);
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar13 = pcVar13 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar13 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar13 = pcVar13 + 1;
              }
            }
            else {
              uVar8 = FUN_10076d90(&uStack_5dc,(byte_conflict *)&uStack_5dc,
                                   (byte_conflict *)s_height_10093da0);
              if (uVar8 != 0) goto LAB_10023c18;
              pcVar5 = (*gEngfuncs.COM_ParseFile)((char *)data,(char *)&uStack_5dc);
              fVar14 = FUN_1006b918(extraout_ECX_05,&stack0xfffffa2c);
              *(float *)(param_1 + 0x30 + *(int *)(param_1 + 0x2c) * 4) = (float)fVar14;
            }
            data = (byte_conflict *)(*gEngfuncs.COM_ParseFile)(pcVar5,&stack0xfffffa2c);
            uVar8 = FUN_10076d90(this_07,abStack_5cc,&DAT_10093ac8);
            this = extraout_ECX_06;
            pfVar10 = pfStack_5d0;
          }
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        }
      }
      pcVar5 = (*gEngfuncs.COM_ParseFile)((char *)data,&stack0xfffffa14);
      uVar8 = FUN_10076d90(abStack_5e4,abStack_5e4,&DAT_10093acc);
      if (uVar8 != 0) {
        uVar8 = (*gEngfuncs.Con_Printf)(s_Error_parsing_overview_file__s____10093d70,auStack_1e4);
        return uVar8 & 0xffffff00;
      }
      data = (byte_conflict *)(*gEngfuncs.COM_ParseFile)(pcVar5,(char *)abStack_5e4);
      uVar8 = FUN_10076d90(this_01,(byte_conflict *)&uStack_5dc,&DAT_10093ac8);
    } while (uVar8 == 0);
    do {
      uVar8 = FUN_10076d90(&uStack_5dc,(byte_conflict *)&uStack_5dc,&DAT_10093030);
      if (uVar8 == 0) {
        pcVar5 = (*gEngfuncs.COM_ParseFile)((char *)data,(char *)&uStack_5dc);
        fVar14 = FUN_1006b918(extraout_ECX,&stack0xfffffa2c);
        *(float *)(param_1 + 0x28) = (float)fVar14;
      }
      else {
        uVar8 = FUN_10076d90(&uStack_5dc,(byte_conflict *)&uStack_5dc,
                             (byte_conflict *)s_origin_10093ba4);
        if (uVar8 == 0) {
          pcVar5 = (*gEngfuncs.COM_ParseFile)((char *)data,(char *)&uStack_5dc);
          fVar14 = FUN_1006b918(extraout_ECX_00,&stack0xfffffa2c);
          *pfVar10 = (float)fVar14;
          pcVar5 = (*gEngfuncs.COM_ParseFile)(pcVar5,&stack0xfffffa2c);
          fVar14 = FUN_1006b918(extraout_ECX_01,abStack_5cc);
          *(float *)(param_1 + 0x20) = (float)fVar14;
          pcVar5 = (*gEngfuncs.COM_ParseFile)(pcVar5,(char *)abStack_5cc);
          fVar14 = FUN_1006b918(abStack_5c4,abStack_5c4);
          *(float *)(param_1 + 0x24) = (float)fVar14;
        }
        else {
          uVar8 = FUN_10076d90(this_02,(byte_conflict *)&uStack_5dc,
                               (byte_conflict *)s_rotated_10093dc0);
          if (uVar8 == 0) {
            pcVar5 = (*gEngfuncs.COM_ParseFile)((char *)data,(char *)&uStack_5dc);
            uVar6 = FUN_1006c042(&stack0xfffffa2c,&stack0xfffffa2c);
            *(undefined4 *)(param_1 + 0x134) = uVar6;
          }
          else {
            uVar8 = FUN_10076d90(this_03,(byte_conflict *)&uStack_5dc,
                                 (byte_conflict *)s_inset_10093db8);
            if (uVar8 != 0) {
LAB_10023c18:
              uVar8 = (*gEngfuncs.Con_Printf)
                                (s_Error_parsing_overview_file__s____10093d08,auStack_1dc);
              return uVar8 & 0xffffff00;
            }
            pcVar5 = (*gEngfuncs.COM_ParseFile)((char *)data,(char *)&uStack_5dc);
            FUN_1006b918(&stack0xfffffa2c,&stack0xfffffa2c);
            lVar15 = __ftol();
            *(int *)(param_1 + 0x138) = (int)lVar15;
            pcVar5 = (*gEngfuncs.COM_ParseFile)(pcVar5,&stack0xfffffa2c);
            FUN_1006b918(extraout_ECX_02,abStack_5cc);
            lVar15 = __ftol();
            *(int *)(param_1 + 0x13c) = (int)lVar15;
            pcVar5 = (*gEngfuncs.COM_ParseFile)(pcVar5,(char *)abStack_5cc);
            FUN_1006b918(extraout_ECX_03,abStack_5c4);
            lVar15 = __ftol();
            *(int *)(param_1 + 0x144) = (int)lVar15;
            pcVar5 = (*gEngfuncs.COM_ParseFile)(pcVar5,(char *)abStack_5c4);
            FUN_1006b918(acStack_5bc,(byte_conflict *)acStack_5bc);
            lVar15 = __ftol();
            *(int *)(param_1 + 0x140) = (int)lVar15;
          }
        }
      }
      uStack_5dc = 0x10023a36;
      data = (byte_conflict *)(*gEngfuncs.COM_ParseFile)(pcVar5,acStack_5bc);
      uStack_5dc = 0x10023a47;
      uVar8 = FUN_10076d90(this_04,abStack_5b4,&DAT_10093ac8);
    } while (uVar8 != 0);
  } while( true );
}

/* 10023c60  FUN_10023c60  (43 bytes)
 * undefined FUN_10023c60(int param_1)
 * called by: FUN_10023380
 */
void __fastcall FUN_10023c60(int param_1)

{
  model_s *pmVar1;
  
  if (0 < *(int *)(param_1 + 0x2c)) {
    pmVar1 = (*gEngfuncs.LoadMapSprite)((char *)(param_1 + 0x34));
    *(model_s **)(param_1 + 0xc90) = pmVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc90) = 0;
  return;
}

/* 10023c90  FUN_10023c90  (1055 bytes)
 * undefined FUN_10023c90(int param_1)
 * called by: FUN_10024970
 */
void __fastcall FUN_10023c90(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  model_s *z;
  model_s *pmVar5;
  longlong lVar6;
  model_s *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  model_s *in_stack_00000014;
  int iStack00000018;
  float in_stack_0000001c;
  float in_stack_00000028;
  float in_stack_0000002c;
  float in_stack_00000034;
  float in_stack_00000040;
  float fVar7;
  float local_20;
  float fStack_1c;
  int iStack_18;
  int iStack_8;
  
  z = in_stack_00000004;
  iVar1 = *(int *)(param_1 + 0xc90);
  pmVar5 = (*gEngfuncs.GetSpritePointer)(*(HSPRITE *)(param_1 + 0xc84));
  if (iVar1 == 0) {
    fVar7 = 1.12104e-44;
    iStack00000018 = 6;
  }
  else {
    lVar6 = __ftol();
    fVar7 = (float)((int)lVar6 * 4);
    iStack00000018 = (int)lVar6 * 3;
  }
  fVar2 = (90.0 - *(float *)(param_1 + 0x95c)) * 0.011111111 * *(float *)(param_1 + 0x30);
  (*(gEngfuncs.pTriAPI)->RenderMode)(2);
  (*(gEngfuncs.pTriAPI)->CullFace)(TRI_NONE);
  (*(gEngfuncs.pTriAPI)->Color4f)(1.0,1.0,1.0,1.0);
  iStack_18 = 0;
  if (*(int *)(param_1 + 0x134) == 0) {
    fVar3 = -((8192.0 / *(float *)(param_1 + 0x28)) / (float)(int)fVar2);
    fStack_1c = 4096.0 / (*(float *)(param_1 + 0x28) * 1.3333334) + in_stack_0000000c;
    if (0 < iStack00000018) {
      do {
        if (0 < (int)fVar7) {
          fVar4 = fStack_1c + fVar3;
          do {
            if (in_stack_00000010 == 0.0) {
              (*(gEngfuncs.pTriAPI)->SpriteTexture)(in_stack_00000014,0);
            }
            else {
              (*(gEngfuncs.pTriAPI)->SpriteTexture)(*(model_s **)(param_1 + 0xc90),iStack_18);
            }
            (*(gEngfuncs.pTriAPI)->Begin)(2);
            (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,0.0);
            (*(gEngfuncs.pTriAPI)->Vertex3f)(fStack_1c,fVar4,(float)in_stack_00000004);
            (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,1.0);
            (*(gEngfuncs.pTriAPI)->Vertex3f)(fVar4,fVar4,(float)in_stack_00000004);
            (*(gEngfuncs.pTriAPI)->TexCoord2f)(1.0,1.0);
            in_stack_00000010 = in_stack_0000001c + in_stack_00000034;
            (*(gEngfuncs.pTriAPI)->Vertex3f)(fVar4,in_stack_00000010,(float)in_stack_00000004);
            (*(gEngfuncs.pTriAPI)->TexCoord2f)(1.0,0.0);
            in_stack_00000014 = in_stack_00000004;
            (*(gEngfuncs.pTriAPI)->Vertex3f)(fStack_1c,in_stack_00000010,(float)in_stack_00000004);
            (*(gEngfuncs.pTriAPI)->End)();
            iStack_18 = iStack_18 + 1;
            fVar7 = fVar2;
            param_1 = (int)pmVar5;
          } while (fStack_1c != 1.4013e-45);
        }
        fStack_1c = fStack_1c + fVar3;
        iStack00000018 = iStack00000018 + -1;
      } while (iStack00000018 != 0);
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x28) * 1.3333334;
    fVar4 = -((8192.0 / fVar3) / (float)iStack_8);
    local_20 = 4096.0 / fVar3 + in_stack_00000008;
    in_stack_00000008 = (float)iStack00000018;
    if (0 < iStack00000018) {
      do {
        in_stack_00000004 = (model_s *)fVar7;
        if (0 < (int)fVar7) {
          do {
            if (in_stack_00000010 == 0.0) {
              (*(gEngfuncs.pTriAPI)->SpriteTexture)(in_stack_00000014,0);
            }
            else {
              (*(gEngfuncs.pTriAPI)->SpriteTexture)(*(model_s **)(param_1 + 0xc90),iStack_18);
            }
            (*(gEngfuncs.pTriAPI)->Begin)(2);
            (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,0.0);
            (*(gEngfuncs.pTriAPI)->Vertex3f)(fVar4,local_20,(float)z);
            (*(gEngfuncs.pTriAPI)->TexCoord2f)(1.0,0.0);
            (*(gEngfuncs.pTriAPI)->Vertex3f)
                      (in_stack_0000000c + in_stack_00000028,local_20,(float)z);
            (*(gEngfuncs.pTriAPI)->TexCoord2f)(1.0,1.0);
            (*(gEngfuncs.pTriAPI)->Vertex3f)
                      (in_stack_0000000c + in_stack_00000028,in_stack_0000002c,(float)z);
            (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,1.0);
            in_stack_00000014 = z;
            in_stack_00000010 = in_stack_00000040;
            in_stack_00000008 = 2.568638e-29;
            (*(gEngfuncs.pTriAPI)->Vertex3f)(fVar4,in_stack_00000040,(float)z);
            in_stack_00000028 = 2.5686417e-29;
            (*(gEngfuncs.pTriAPI)->End)();
            iStack_18 = iStack_18 + 1;
            in_stack_00000004 = (model_s *)((int)in_stack_00000004 + -1);
            fVar7 = fVar2;
            param_1 = (int)pmVar5;
            in_stack_0000000c = fVar4;
          } while (in_stack_00000004 != (model_s *)0x0);
        }
        local_20 = local_20 + fVar4;
        in_stack_00000008 = (float)((int)in_stack_00000008 + -1);
      } while (in_stack_00000008 != 0.0);
      return;
    }
  }
  return;
}

/* 100240b0  FUN_100240b0  (170 bytes)
 * undefined FUN_100240b0(float * param_1)
 * called by: FUN_10068f70
 */
void __thiscall FUN_100240b0(void *this,float *param_1)

{
  float local_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *(float *)((int)this + 0x950);
  local_8 = *(float *)((int)this + 0x954);
  local_4 = (90.0 - *(float *)((int)this + 0x95c)) * 0.011111111 * *(float *)((int)this + 0x958);
  (*gEngfuncs.pfnAngleVectors)((float *)((int)this + 0x95c),&local_18,(float *)0x0,(float *)0x0);
  FUN_10029e40(&local_18);
  FUN_100583e0(&local_18,-(4096.0 / *(float *)((int)this + 0x94c)),&local_18);
  *param_1 = local_18 + local_c;
  param_1[1] = fStack_14 + local_8;
  param_1[2] = fStack_10 + local_4;
  return;
}

/* 10024160  FUN_10024160  (2050 bytes)
 * undefined FUN_10024160(int param_1)
 * called by: FUN_10024970
 */
void __fastcall FUN_10024160(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  model_s *pmVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  float unaff_retaddr;
  float in_stack_00000004;
  float in_stack_00000008;
  undefined4 in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000024;
  float in_stack_00000028;
  float in_stack_0000002c;
  float in_stack_00000030;
  float in_stack_00000034;
  float *pfVar8;
  float in_stack_ffffff84;
  float *pfVar9;
  float fVar10;
  float *pfVar11;
  float fVar12;
  float *in_stack_ffffffa0;
  float *pfVar13;
  float fVar14;
  float *in_stack_ffffffac;
  float *pfVar15;
  float in_stack_ffffffb4;
  float in_stack_ffffffb8;
  float in_stack_ffffffbc;
  float fStack_40;
  float fStack_3c;
  float in_stack_ffffffc8;
  float in_stack_ffffffd0;
  float afStack_2c [2];
  float in_stack_ffffffe0;
  float in_stack_ffffffe4;
  float fStack_18;
  float fStack_14;
  float in_stack_fffffff0;
  float in_stack_fffffff8;
  float fStack_4;
  
  (*(gEngfuncs.pTriAPI)->CullFace)(TRI_NONE);
  puVar3 = (undefined4 *)(param_1 + 0x974);
  iVar5 = 0x40;
  do {
    *puVar3 = 0xbf800000;
    puVar3 = puVar3 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  piVar6 = (int *)(param_1 + 0x148);
  pfVar8 = (float *)0x80;
  do {
    if (*piVar6 != 0) {
      pmVar4 = (*gEngfuncs.GetSpritePointer)(*piVar6);
      piVar1 = (int *)piVar6[1];
      (*(gEngfuncs.pTriAPI)->SpriteTexture)(pmVar4,0);
      (*(gEngfuncs.pTriAPI)->RenderMode)(2);
      (*gEngfuncs.pfnAngleVectors)
                ((float *)(piVar1 + 0x2d5),(float *)&stack0xffffffb4,&fStack_40,(float *)0x0);
      (*(gEngfuncs.pTriAPI)->Begin)(2);
      (*(gEngfuncs.pTriAPI)->Color4f)(1.0,1.0,1.0,1.0);
      (*(gEngfuncs.pTriAPI)->TexCoord2f)(1.0,0.0);
      FUN_10058410((float *)&stack0xffffffa4,64.0,&fStack_14,(float *)&stack0xffffffb0);
      FUN_10058410((float *)&stack0xffffffb0,64.0,(float *)&stack0xffffffe0,
                   (float *)&stack0xffffffb0);
      in_stack_ffffffb8 = in_stack_ffffffb8 * (float)in_stack_ffffffa0;
      (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)&stack0xffffffb0);
      (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,0.0);
      FUN_10058410((float *)&stack0xffffffb0,64.0,(float *)&stack0xfffffff8,
                   (float *)&stack0xffffffbc);
      FUN_10058410((float *)&stack0xffffffbc,-64.0,&fStack_14,(float *)&stack0xffffffbc);
      fStack_3c = fStack_3c * (float)in_stack_ffffffac;
      (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)&stack0xffffffbc);
      (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,1.0);
      pfVar11 = &stack0x00000004;
      pfVar9 = (float *)&stack0xffffffbc;
      fVar10 = -64.0;
      FUN_10058410(pfVar9,-64.0,pfVar11,(float *)&stack0xffffffc8);
      pfVar8 = (float *)&stack0xffffffc8;
      FUN_10058410(pfVar8,-64.0,(float *)&stack0xfffffff8,(float *)&stack0xffffffc8);
      in_stack_ffffffd0 = in_stack_ffffffd0 * in_stack_ffffffb8;
      (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)&stack0xffffffc8);
      (*(gEngfuncs.pTriAPI)->TexCoord2f)(1.0,1.0);
      FUN_10058410((float *)&stack0xffffffc8,-64.0,&stack0x00000010,afStack_2c);
      pfVar15 = afStack_2c;
      in_stack_ffffffac = &stack0x00000004;
      pfVar13 = afStack_2c;
      fVar14 = 64.0;
      FUN_10058410(pfVar13,64.0,in_stack_ffffffac,pfVar15);
      in_stack_ffffffa0 = afStack_2c;
      fVar12 = 2.5690196e-29;
      (*(gEngfuncs.pTriAPI)->Vertex3fv)(in_stack_ffffffa0);
      in_stack_ffffffb4 = 2.5690232e-29;
      (*(gEngfuncs.pTriAPI)->End)();
      if (piVar1[1] != 0) {
        (*(gEngfuncs.pTriAPI)->RenderMode)(5);
        pmVar4 = (*gEngfuncs.GetSpritePointer)(*(HSPRITE *)(param_1 + 0xc88));
        (*(gEngfuncs.pTriAPI)->SpriteTexture)(pmVar4,0);
        (*(gEngfuncs.pTriAPI)->Color4f)(1.0,0.627451,0.0,0.3);
        (*(gEngfuncs.pTriAPI)->Begin)(2);
        (*(gEngfuncs.pTriAPI)->TexCoord2f)(1.0,0.0);
        (*(gEngfuncs.pTriAPI)->Vertex3f)(fVar10 + 4.0,(float)pfVar11 + 4.0,fVar12 - (float)pfVar9);
        (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,0.0);
        (*(gEngfuncs.pTriAPI)->Vertex3f)
                  (fVar14 - 4.0,(float)in_stack_ffffffac - 4.0,(float)pfVar15 - (float)pfVar13);
        (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,1.0);
        (*(gEngfuncs.pTriAPI)->Vertex3f)(in_stack_ffffffbc - 4.0,fStack_40 - 4.0,in_stack_ffffff84);
        in_stack_ffffffa0 = (float *)0x3f800000;
        fVar10 = 2.5691132e-29;
        (*(gEngfuncs.pTriAPI)->TexCoord2f)(1.0,1.0);
        in_stack_ffffffac = (float *)0x10024527;
        (*(gEngfuncs.pTriAPI)->Vertex3f)
                  (in_stack_ffffffd0 + 4.0,afStack_2c[0] + 4.0,in_stack_ffffff84);
        (*(gEngfuncs.pTriAPI)->End)();
        (*(gEngfuncs.pTriAPI)->Begin)(2);
        in_stack_ffffffb8 = 0.0;
        in_stack_ffffffb4 = 1.0;
        (*(gEngfuncs.pTriAPI)->TexCoord2f)(1.0,0.0);
        fStack_3c = 2.569151e-29;
        (*(gEngfuncs.pTriAPI)->Vertex3f)
                  (fStack_18 - 4.0,fStack_14 + 4.0,in_stack_fffffff0 - in_stack_ffffffe4);
        in_stack_ffffffd0 = 0.0;
        in_stack_ffffffc8 = 2.569155e-29;
        (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,0.0);
        afStack_2c[1] = 2.56917e-29;
        (*(gEngfuncs.pTriAPI)->Vertex3f)
                  (fStack_4 + 4.0,unaff_retaddr - 4.0,in_stack_00000004 - in_stack_fffffff8);
        in_stack_ffffffe4 = 1.0;
        in_stack_ffffffe0 = 0.0;
        (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,1.0);
        fStack_14 = 2.5691872e-29;
        (*(gEngfuncs.pTriAPI)->Vertex3f)
                  (in_stack_00000010 + 4.0,in_stack_00000014 - 4.0,in_stack_ffffff84);
        in_stack_fffffff8 = 1.0;
        in_stack_fffffff0 = 2.5691927e-29;
        (*(gEngfuncs.pTriAPI)->TexCoord2f)(1.0,1.0);
        in_stack_00000008 = in_stack_00000028 + 4.0;
        in_stack_00000004 = in_stack_00000024 - 4.0;
        unaff_retaddr = 2.569205e-29;
        (*(gEngfuncs.pTriAPI)->Vertex3f)(in_stack_00000004,in_stack_00000008,in_stack_ffffff84);
        in_stack_0000000c = 0x10024639;
        (*(gEngfuncs.pTriAPI)->End)();
        iVar5 = (*(gEngfuncs.pTriAPI)->WorldToScreen)
                          ((float *)&stack0xffffff58,(float *)&stack0xffffff88);
        if (iVar5 == 0) {
          (*(gEngfuncs.pTriAPI)->WorldToScreen)((float *)&stack0xffffff60,(float *)&stack0xffffff80)
          ;
          iVar2 = *piVar1;
          *(int *)(param_1 + ((iVar2 + -1) * 3 + 0x25b) * 4) = iVar5;
          iVar5 = param_1 + (iVar2 + -1) * 0xc;
          fVar7 = FUN_10058390((float *)&stack0xffffff88);
          *(float *)(iVar5 + 0x970) = (float)(fVar7 + (float10)fVar10);
          *(undefined4 *)(iVar5 + 0x974) = 0x3f800000;
        }
      }
    }
    piVar6 = piVar6 + 4;
    pfVar8 = (float *)((int)pfVar8 + -1);
  } while (pfVar8 != (float *)0x0);
  if (*(int *)(param_1 + 0x14) != 0) {
    if ((*(int *)(param_1 + 0x14) == 2) || (DAT_10190b18 == 5)) {
      FUN_10068e20(*(int *)(param_1 + 0x948),&DAT_101913e4,(float *)&DAT_10190b6c);
    }
    pmVar4 = (*gEngfuncs.GetSpritePointer)(*(HSPRITE *)(param_1 + 0xc78));
    (*(gEngfuncs.pTriAPI)->RenderMode)(5);
    (*(gEngfuncs.pTriAPI)->SpriteTexture)(pmVar4,0);
    (*(gEngfuncs.pTriAPI)->Color4f)(1.0,0.627451,0.0,1.0);
    (*gEngfuncs.pfnAngleVectors)
              ((float *)&DAT_10190b6c,(float *)&stack0xffffffdc,(float *)0x0,(float *)0x0);
    FUN_100583e0(&fStack_14,512.0,&fStack_14);
    fStack_40 = 0.0;
    FUN_1002f920((float *)&stack0xffffffb8,&stack0x00000004);
    FUN_1002fa30(&fStack_14,&stack0x00000004,afStack_2c);
    fVar10 = -45.0;
    FUN_1002f920((float *)&stack0xffffffb8,&stack0x00000004);
    FUN_1002fa30(&fStack_14,&stack0x00000004,(float *)&stack0xfffffff8);
    (*(gEngfuncs.pTriAPI)->Begin)(0);
    (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,0.0);
    (*(gEngfuncs.pTriAPI)->Vertex3f)
              (in_stack_ffffffe0 + fVar10,in_stack_ffffffe4 + in_stack_ffffffd0,
               (fStack_18 + fStack_40) * (float)in_stack_ffffffa0);
    (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,1.0);
    (*(gEngfuncs.pTriAPI)->Vertex3f)
              (in_stack_ffffffd0,in_stack_ffffffe4,afStack_2c[0] * in_stack_ffffffb4);
    (*(gEngfuncs.pTriAPI)->TexCoord2f)(1.0,1.0);
    (*(gEngfuncs.pTriAPI)->Vertex3f)
              (in_stack_0000002c + in_stack_ffffffe4,in_stack_00000030 + in_stack_fffffff8,
               (in_stack_00000034 + fStack_18) * in_stack_ffffffc8);
    (*(gEngfuncs.pTriAPI)->End)();
  }
  return;
}

/* 10024970  FUN_10024970  (49 bytes)
 * undefined FUN_10024970(int param_1)
 * called by: HUD_DrawNormalTriangles
 */
void __fastcall FUN_10024970(int param_1)

{
  int iVar1;
  
  iVar1 = (*gEngfuncs.IsSpectateOnly)();
  if ((iVar1 == 1) && ((*(int *)(param_1 + 0x18) != 1 || (*(int *)(param_1 + 0x14) == 3)))) {
    FUN_10023c90(param_1);
    FUN_10024160(param_1);
    FUN_100249b0(param_1);
  }
  return;
}

/* 100249b0  FUN_100249b0  (55 bytes)
 * undefined FUN_100249b0(int param_1)
 * called by: FUN_10024970
 */
void __fastcall FUN_100249b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float10 extraout_ST0;
  
  (*gEngfuncs.GetClientTime)();
  puVar1 = (undefined4 *)(param_1 + 0x148);
  iVar2 = 0x80;
  do {
    if ((float10)*(double *)(puVar1 + 2) < extraout_ST0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
    }
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

/* 100249f0  FUN_100249f0  (110 bytes)
 * uint FUN_100249f0(int param_1, int * param_2)
 * called by: HUD_AddEntity
 */
uint __thiscall FUN_100249f0(void *this,int param_1,int *param_2)

{
  uint in_EAX;
  uint uVar1;
  undefined4 uVar2;
  float10 extraout_ST0;
  
  if (((param_2 != (int *)0x0) && (param_1 == 1)) && (*(short *)((int)param_2 + 0x2ea) != 0)) {
    if ((&DAT_101901fc)[*param_2 * 0x10] == 1) {
      uVar2 = *(undefined4 *)((int)this + 0xc6c);
    }
    else if ((&DAT_101901fc)[*param_2 * 0x10] == 2) {
      uVar2 = *(undefined4 *)((int)this + 0xc70);
    }
    else {
      uVar2 = *(undefined4 *)((int)this + 0xc74);
    }
    (*gEngfuncs.GetClientTime)();
    uVar1 = FUN_10024ab0(this,uVar2,param_2,(double)(extraout_ST0 - (float10)1.0));
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* 10024a60  FUN_10024a60  (69 bytes)
 * undefined FUN_10024a60(void * param_1)
 * called by: FUN_1001b360
 */
void __fastcall FUN_10024a60(void *param_1)

{
  cl_entity_s *pcVar1;
  float10 extraout_ST0;
  int in_stack_00000004;
  
  pcVar1 = (*gEngfuncs.GetEntityByIndex)(in_stack_00000004);
  if ((pcVar1 != (cl_entity_s *)0x0) && (pcVar1->player != 0)) {
    (*gEngfuncs.GetClientTime)();
    FUN_10024ab0(param_1,*(undefined4 *)((int)param_1 + 0xc7c),pcVar1,
                 (double)(extraout_ST0 + (float10)2.0));
  }
  return;
}

/* 10024ab0  FUN_10024ab0  (77 bytes)
 * uint FUN_10024ab0(undefined4 param_1, undefined4 param_2, undefined8 param_3)
 * called by: FUN_100249f0, FUN_10024a60
 */
uint __thiscall FUN_10024ab0(void *this,undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0;
  piVar3 = (int *)((int)this + 0x14c);
  do {
    if (*piVar3 == 0) {
      iVar2 = (uVar1 + 0x15) * 0x10;
      *(undefined4 *)((int)this + uVar1 * 0x10 + 0x14c) = param_2;
      *(undefined4 *)((int)this + uVar1 * 0x10 + 0x148) = param_1;
      *(undefined8 *)(iVar2 + (int)this) = param_3;
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    uVar1 = uVar1 + 1;
    piVar3 = piVar3 + 4;
  } while ((int)uVar1 < 0x80);
  return uVar1 & 0xffffff00;
}

/* 10024b00  FUN_10024b00  (127 bytes)
 * undefined4 FUN_10024b00(undefined4 * param_1)
 * called by: HUD_UpdateClientData
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10024b00(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x38) = *param_1;
  *(undefined4 *)((int)this + 0x3c) = param_1[1];
  *(undefined4 *)((int)this + 0x40) = param_1[2];
  *(undefined4 *)((int)this + 0x44) = param_1[3];
  *(undefined4 *)((int)this + 0x48) = param_1[4];
  *(undefined4 *)((int)this + 0x4c) = param_1[5];
  uVar1 = FUN_10026870(0);
  *(uint *)((int)this + 0x50) = uVar1;
  *(undefined4 *)((int)this + 0x61f8) = param_1[6];
  _DAT_100df2c8 = param_1[7];
  FUN_10049760(this);
  param_1[7] = (float)*(int *)((int)this + 0x58);
  DAT_10191414 = (float)*(int *)((int)this + 0x1c);
  FUN_10026a40(*(uint *)((int)this + 0x50));
  return 1;
}

/* 10024b90  FUN_10024b90  (1 bytes)
 * undefined FUN_10024b90()
 */
void FUN_10024b90(void)

{
  return;
}

/* 10024ba0  FUN_10024ba0  (210 bytes)
 * float10 FUN_10024ba0(float param_1, float param_2)
 * called by: CAM_Think
 */
float10 __cdecl FUN_10024ba0(float param_1,float param_2)

{
  uint uVar1;
  float10 fVar2;
  float10 extraout_ST0;
  longlong lVar3;
  
  fVar2 = (float10)param_1;
  if (fVar2 != (float10)param_2) {
    lVar3 = __ftol();
    uVar1 = (int)(uint)lVar3 >> 0x1f;
    fVar2 = extraout_ST0;
    if (180.0 < (double)(int)(((uint)lVar3 ^ uVar1) - uVar1)) {
      if ((float10)param_2 <= extraout_ST0) {
        fVar2 = extraout_ST0 - (float10)360.0;
      }
      else {
        fVar2 = extraout_ST0 + (float10)360.0;
      }
    }
    if ((float10)param_2 <= fVar2) {
      if ((float10)param_2 + (float10)1.0 < fVar2) {
        fVar2 = fVar2 - (fVar2 - (float10)param_2) * (float10)0.25;
        goto LAB_10024c4a;
      }
    }
    else if (fVar2 < (float10)param_2 - (float10)1.0) {
      fVar2 = fVar2 + ((float10)param_2 - fVar2) * (float10)0.25;
      goto LAB_10024c4a;
    }
    fVar2 = (float10)param_2;
  }
LAB_10024c4a:
  if (fVar2 < (float10)0.0) {
    return fVar2 + (float10)360.0;
  }
  if ((float10)360.0 <= fVar2) {
    fVar2 = fVar2 - (float10)360.0;
  }
  return fVar2;
}

/* 10025260  FUN_10025260  (12 bytes)
 * undefined FUN_10025260()
 */
void FUN_10025260(void)

{
  FUN_100259a0((int *)&DAT_100df338);
  return;
}

/* 10025270  FUN_10025270  (12 bytes)
 * undefined FUN_10025270()
 */
void FUN_10025270(void)

{
  FUN_10025a10((int *)&DAT_100df338);
  return;
}

/* 10025280  FUN_10025280  (12 bytes)
 * undefined FUN_10025280()
 */
void FUN_10025280(void)

{
  FUN_100259a0((int *)&DAT_100df370);
  return;
}

/* 10025290  FUN_10025290  (12 bytes)
 * undefined FUN_10025290()
 */
void FUN_10025290(void)

{
  FUN_10025a10((int *)&DAT_100df370);
  return;
}

/* 100252a0  FUN_100252a0  (12 bytes)
 * undefined FUN_100252a0()
 */
void FUN_100252a0(void)

{
  FUN_100259a0((int *)&DAT_100df2e8);
  return;
}

/* 100252b0  FUN_100252b0  (12 bytes)
 * undefined FUN_100252b0()
 */
void FUN_100252b0(void)

{
  FUN_10025a10((int *)&DAT_100df2e8);
  return;
}

/* 100252c0  FUN_100252c0  (12 bytes)
 * undefined FUN_100252c0()
 */
void FUN_100252c0(void)

{
  FUN_100259a0((int *)&DAT_100df348);
  return;
}

/* 100252d0  FUN_100252d0  (12 bytes)
 * undefined FUN_100252d0()
 */
void FUN_100252d0(void)

{
  FUN_10025a10((int *)&DAT_100df348);
  return;
}

/* 100252e0  FUN_100252e0  (12 bytes)
 * undefined FUN_100252e0()
 */
void FUN_100252e0(void)

{
  FUN_100259a0((int *)&DAT_100df380);
  return;
}

/* 100252f0  FUN_100252f0  (12 bytes)
 * undefined FUN_100252f0()
 */
void FUN_100252f0(void)

{
  FUN_10025a10((int *)&DAT_100df380);
  return;
}

/* 10025300  FUN_10025300  (12 bytes)
 * undefined FUN_10025300()
 */
void FUN_10025300(void)

{
  FUN_100259a0((int *)&DAT_100df328);
  return;
}

/* 10025310  FUN_10025310  (12 bytes)
 * undefined FUN_10025310()
 */
void FUN_10025310(void)

{
  FUN_10025a10((int *)&DAT_100df328);
  return;
}

/* 10025320  FUN_10025320  (27 bytes)
 * undefined FUN_10025320(void)
 * called by: CAM_Think
 */
void FUN_10025320(void)

{
  DAT_100df390 = 0;
  (*gEngfuncs.Cvar_SetValue)(s_cam_command_10093e24,0.0);
  return;
}

/* 10025340  FUN_10025340  (48 bytes)
 * undefined FUN_10025340()
 */
void FUN_10025340(void)

{
  uint uStack_4;
  
  uStack_4 = (uint)(*(float *)(DAT_100df2d8 + 0xc) == 0.0);
  *(float *)(DAT_100df2d8 + 0xc) = (float)uStack_4;
  return;
}

/* 10025370  FUN_10025370  (596 bytes)
 * undefined FUN_10025370(void)
 * called by: FUN_10026b30
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10025370(void)

{
  (*gEngfuncs.pfnAddCommand)(s__campitchup_10093fdc,FUN_10025260);
  (*gEngfuncs.pfnAddCommand)(s__campitchup_10093fd0,FUN_10025270);
  (*gEngfuncs.pfnAddCommand)(s__campitchdown_10093fc0,FUN_10025280);
  (*gEngfuncs.pfnAddCommand)(s__campitchdown_10093fb0,FUN_10025290);
  (*gEngfuncs.pfnAddCommand)(s__camyawleft_10093fa4,FUN_100252a0);
  (*gEngfuncs.pfnAddCommand)(s__camyawleft_10093f98,FUN_100252b0);
  (*gEngfuncs.pfnAddCommand)(s__camyawright_10093f88,FUN_100252c0);
  (*gEngfuncs.pfnAddCommand)(s__camyawright_10093f78,FUN_100252d0);
  (*gEngfuncs.pfnAddCommand)(s__camin_10093f70,FUN_100252e0);
  (*gEngfuncs.pfnAddCommand)(s__camin_10093f68,FUN_100252f0);
  (*gEngfuncs.pfnAddCommand)(s__camout_10093f60,FUN_10025300);
  (*gEngfuncs.pfnAddCommand)(s__camout_10093f58,FUN_10025310);
  (*gEngfuncs.pfnAddCommand)(s_thirdperson_10093f4c,FUN_1004fe00);
  (*gEngfuncs.pfnAddCommand)(s_firstperson_10093f40,FUN_10025320);
  (*gEngfuncs.pfnAddCommand)(s__cammousemove_10093f30,FUN_100255d0);
  (*gEngfuncs.pfnAddCommand)(s__cammousemove_10093f20,FUN_10025670);
  (*gEngfuncs.pfnAddCommand)(s__camdistance_10093f10,FUN_10025680);
  (*gEngfuncs.pfnAddCommand)(s__camdistance_10093f00,FUN_10025700);
  (*gEngfuncs.pfnAddCommand)(s_snapto_10093ef8,FUN_10025340);
  DAT_100df368 = (*gEngfuncs.pfnRegisterVariable)(s_cam_command_10093e24,&DAT_10092bf4,0);
  DAT_100df2d8 = (*gEngfuncs.pfnRegisterVariable)(s_cam_snapto_10093eec,&DAT_10092bf4,0);
  DAT_100df2f4 = (*gEngfuncs.pfnRegisterVariable)(s_cam_idealyaw_10093edc,&DAT_10092bf4,0);
  DAT_100df364 = (*gEngfuncs.pfnRegisterVariable)(s_cam_idealpitch_10093ecc,&DAT_10092bf4,0);
  DAT_100df300 = (*gEngfuncs.pfnRegisterVariable)(s_cam_idealdist_10093eb8,&DAT_10093ec8,0);
  _DAT_100df2d4 = (*gEngfuncs.pfnRegisterVariable)(s_cam_contain_10093eac,&DAT_10092bf4,0);
  DAT_100df324 = (*gEngfuncs.pfnRegisterVariable)(s_c_maxpitch_10093e98,&DAT_10093ea4,0);
  DAT_100df2fc = (*gEngfuncs.pfnRegisterVariable)(s_c_minpitch_10093e88,&DAT_10093e94,0);
  DAT_100df310 = (*gEngfuncs.pfnRegisterVariable)(s_c_maxyaw_10093e74,s_135_0_10093e80,0);
  DAT_100df2d0 = (*gEngfuncs.pfnRegisterVariable)(s_c_minyaw_10093e60,s__135_0_10093e6c,0);
  DAT_100df2f8 = (*gEngfuncs.pfnRegisterVariable)(s_c_maxdistance_10093e48,s_200_0_10093e58,0);
  DAT_100df38c = (*gEngfuncs.pfnRegisterVariable)(s_c_mindistance_10093e30,&DAT_10093e40,0);
  return;
}

/* 100255d0  FUN_100255d0  (146 bytes)
 * undefined FUN_100255d0()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100255d0(void)

{
  float10 fVar1;
  longlong lVar2;
  
  if (DAT_100df390 == 0) {
    DAT_100df2dc = 0;
    DAT_100df394 = 0;
  }
  else if (DAT_100df2dc == 0) {
    DAT_100df2dc = 1;
    DAT_100df394 = 1;
    GetCursorPos((LPPOINT)&DAT_100df308);
    fVar1 = FUN_10020a90(0x100cf920);
    if (fVar1 != (float10)0.0) {
      lVar2 = __ftol();
      _DAT_100df2e4 = (undefined4)lVar2;
      lVar2 = __ftol();
      _DAT_100df2e0 = (int)lVar2;
      return;
    }
    _DAT_100df2e4 = DAT_100df308;
    _DAT_100df2e0 = DAT_100df30c;
    return;
  }
  return;
}

/* 10025670  FUN_10025670  (13 bytes)
 * undefined FUN_10025670()
 */
void FUN_10025670(void)

{
  DAT_100df2dc = 0;
  DAT_100df394 = 0;
  return;
}

/* 10025680  FUN_10025680  (120 bytes)
 * undefined FUN_10025680()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10025680(void)

{
  longlong lVar1;
  
  if (DAT_100df390 == 0) {
    DAT_100df354 = 0;
    DAT_100df2dc = 0;
    DAT_100df394 = 0;
  }
  else if (DAT_100df354 == 0) {
    DAT_100df354 = 1;
    DAT_100df2dc = 1;
    DAT_100df394 = 1;
    GetCursorPos((LPPOINT)&DAT_100df308);
    FUN_10020a90(0x100cf920);
    lVar1 = __ftol();
    _DAT_100df2e4 = (undefined4)lVar1;
    FUN_10020a90(0x100cf920);
    lVar1 = __ftol();
    _DAT_100df2e0 = (int)lVar1;
    return;
  }
  return;
}

/* 10025700  FUN_10025700  (18 bytes)
 * undefined FUN_10025700()
 */
void FUN_10025700(void)

{
  DAT_100df354 = 0;
  DAT_100df2dc = 0;
  DAT_100df394 = 0;
  return;
}

/* 10025740  FUN_10025740  (305 bytes)
 * undefined4 FUN_10025740(void)
 * called by: FUN_10028760
 */
undefined4 FUN_10025740(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *in_stack_00001044;
  undefined4 *in_stack_00001048;
  
  FUN_1006b970();
  if (in_stack_00001048 == (undefined4 *)0x0) {
    return 0;
  }
  *in_stack_00001048 = 0;
  pcVar7 = &stack0x00000040;
  cVar2 = *in_stack_00001044;
  pcVar9 = extraout_ECX;
  while (cVar2 != '\0') {
    if (*in_stack_00001044 == '+') {
      cVar2 = '+';
      pcVar8 = (char *)register0x00000010;
      do {
        uVar3 = FUN_1006c45a(pcVar9,(int)cVar2);
        puVar4 = extraout_ECX_00;
        if (((uVar3 == 0) && (puVar4 = (undefined1 *)register0x00000010, pcVar8 != &stack0x00000000)
            ) || (0x3e < (int)pcVar8 - (int)&stack0x00000000)) break;
        pcVar9 = (char *)CONCAT31((int3)((uint)puVar4 >> 8),*in_stack_00001044);
        cVar2 = in_stack_00001044[1];
        *pcVar8 = *in_stack_00001044;
        pcVar8 = pcVar8 + 1;
        in_stack_00001044 = in_stack_00001044 + 1;
      } while (cVar2 != '\0');
      iVar5 = -1;
      *pcVar8 = '\0';
      pcVar8 = (char *)0x0;
      pcVar9 = (char *)register0x00000010;
      do {
        pcVar9 = pcVar9 + 1;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
      } while (*pcVar9 != '\0');
      pcVar9 = (char *)register0x00000010;
      if ((iVar5 != -2) &&
         (pcVar8 = (*gEngfuncs.Key_LookupBinding)(&stack0x00000001), pcVar8 != (char *)0x0)) {
        *pcVar7 = '[';
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar8;
      }
      cVar2 = *pcVar9;
      while (cVar2 != '\0') {
        *pcVar7 = cVar2;
        pcVar1 = pcVar9 + 1;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
        cVar2 = *pcVar1;
      }
      if (pcVar8 != (char *)0x0) {
        *pcVar7 = ']';
        pcVar7 = pcVar7 + 1;
      }
    }
    else {
      *pcVar7 = *in_stack_00001044;
      pcVar7 = pcVar7 + 1;
      in_stack_00001044 = in_stack_00001044 + 1;
    }
    cVar2 = *in_stack_00001044;
  }
  uVar3 = 0xffffffff;
  *pcVar7 = '\0';
  pcVar7 = &stack0x00000040;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  pcVar9 = _malloc(~uVar3);
  uVar3 = 0xffffffff;
  pcVar7 = &stack0x00000040;
  do {
    pcVar8 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar7 + 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar8 + -uVar3;
  pcVar8 = pcVar9;
  for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *in_stack_00001048 = pcVar9;
  return 1;
}

/* 100258c0  FUN_100258c0  (99 bytes)
 * undefined FUN_100258c0(byte.conflict * param_1, undefined4 param_2)
 * called by: FUN_10025930
 */
void __thiscall FUN_100258c0(void *this,byte_conflict *param_1,undefined4 param_2)

{
  byte_conflict bVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte_conflict *pbVar7;
  undefined4 *puVar8;
  byte_conflict *pbVar9;
  
  pvVar2 = KB_Find(this,(char *)param_1);
  if (pvVar2 == (void *)0x0) {
    puVar3 = _malloc(0x28);
    puVar8 = puVar3;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    uVar5 = 0xffffffff;
    do {
      pbVar7 = param_1;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pbVar7 = param_1 + 1;
      bVar1 = *param_1;
      param_1 = pbVar7;
    } while (bVar1 != '\0');
    uVar5 = ~uVar5;
    pbVar7 = pbVar7 + -uVar5;
    pbVar9 = (byte_conflict *)(puVar3 + 2);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar7;
      pbVar7 = pbVar7 + 4;
      pbVar9 = pbVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar9 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      pbVar9 = pbVar9 + 1;
    }
    puVar3[1] = param_2;
    *puVar3 = DAT_100df5c8;
    DAT_100df5c8 = puVar3;
  }
  return;
}

/* 10025930  FUN_10025930  (59 bytes)
 * undefined FUN_10025930(void * param_1)
 * called by: FUN_10026b30
 */
void __fastcall FUN_10025930(void *param_1)

{
  void *this;
  void *this_00;
  
  DAT_100df5c8 = 0;
  FUN_100258c0(param_1,(byte_conflict *)s_in_graph_10094000,&DAT_100df3c0);
  FUN_100258c0(this,(byte_conflict *)s_in_mlook_10093ff4,&DAT_100df468);
  FUN_100258c0(this_00,(byte_conflict *)s_in_jlook_10093fe8,&DAT_100df518);
  return;
}

/* 10025970  FUN_10025970  (46 bytes)
 * undefined FUN_10025970(void)
 * called by: FUN_10027240
 */
void FUN_10025970(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = DAT_100df5c8;
  if (DAT_100df5c8 == (int *)0x0) {
    DAT_100df5c8 = (int *)0x0;
    return;
  }
  do {
    piVar1 = (int *)*piVar2;
    FUN_1006c158(piVar2);
    piVar2 = piVar1;
  } while (piVar1 != (int *)0x0);
  DAT_100df5c8 = piVar1;
  return;
}

/* 100259a0  FUN_100259a0  (101 bytes)
 * undefined FUN_100259a0(int * param_1)
 * called by: FUN_10025260, FUN_10025280, FUN_100252a0, FUN_100252c0, FUN_100252e0, FUN_10025300, FUN_10025cc0, FUN_10025ce0, FUN_10025d00, FUN_10025d20, FUN_10025d40, FUN_10025d60, ... (31 total)
 */
void __cdecl FUN_100259a0(int *param_1)

{
  int iVar1;
  int iVar2;
  byte_conflict *pbVar3;
  int iVar4;
  void *this;
  int *in_stack_00000008;
  
  pbVar3 = (byte_conflict *)(*gEngfuncs.Cmd_Argv)(1);
  if (*pbVar3 == '\0') {
    iVar4 = -1;
  }
  else {
    iVar4 = FUN_1006c042(this,pbVar3);
  }
  iVar1 = *in_stack_00000008;
  if ((iVar4 != iVar1) && (iVar2 = in_stack_00000008[1], iVar4 != iVar2)) {
    if (iVar1 == 0) {
      *in_stack_00000008 = iVar4;
    }
    else {
      if (iVar2 != 0) {
        (*gEngfuncs.Con_DPrintf)(s_Three_keys_down_for_a_button___c_1009400c,iVar1,iVar2,pbVar3);
        return;
      }
      in_stack_00000008[1] = iVar4;
    }
    if ((in_stack_00000008[2] & 1U) == 0) {
      in_stack_00000008[2] = in_stack_00000008[2] | 3;
      return;
    }
  }
  return;
}

/* 10025a10  FUN_10025a10  (106 bytes)
 * undefined FUN_10025a10(int * param_1)
 * called by: FUN_10025270, FUN_10025290, FUN_100252b0, FUN_100252d0, FUN_100252f0, FUN_10025310, FUN_10025cd0, FUN_10025cf0, FUN_10025d10, FUN_10025d30, FUN_10025d50, FUN_10025d70, ... (30 total)
 */
void __cdecl FUN_10025a10(int *param_1)

{
  byte_conflict *pbVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  pbVar1 = (byte_conflict *)(*gEngfuncs.Cmd_Argv)(1);
  if (*pbVar1 == '\0') {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 4;
  }
  else {
    iVar2 = FUN_1006c042((void *)CONCAT31((int3)((uint)extraout_ECX >> 8),*pbVar1),pbVar1);
    if (*param_1 == iVar2) {
      *param_1 = 0;
    }
    else {
      if (param_1[1] != iVar2) {
        return;
      }
      param_1[1] = 0;
    }
    if (((*param_1 == 0) && (param_1[1] == 0)) && ((param_1[2] & 1U) != 0)) {
      param_1[2] = param_1[2] & 0xfffffffeU | 4;
      return;
    }
  }
  return;
}

/* 10025cc0  FUN_10025cc0  (12 bytes)
 * undefined FUN_10025cc0()
 */
void FUN_10025cc0(void)

{
  FUN_100259a0((int *)&DAT_100df558);
  return;
}

/* 10025cd0  FUN_10025cd0  (12 bytes)
 * undefined FUN_10025cd0()
 */
void FUN_10025cd0(void)

{
  FUN_10025a10((int *)&DAT_100df558);
  return;
}

/* 10025ce0  FUN_10025ce0  (12 bytes)
 * undefined FUN_10025ce0()
 */
void FUN_10025ce0(void)

{
  FUN_100259a0((int *)&DAT_100df5b8);
  return;
}

/* 10025cf0  FUN_10025cf0  (12 bytes)
 * undefined FUN_10025cf0()
 */
void FUN_10025cf0(void)

{
  FUN_10025a10((int *)&DAT_100df5b8);
  return;
}

/* 10025d00  FUN_10025d00  (12 bytes)
 * undefined FUN_10025d00()
 */
void FUN_10025d00(void)

{
  FUN_100259a0((int *)&DAT_100df518);
  return;
}

/* 10025d10  FUN_10025d10  (12 bytes)
 * undefined FUN_10025d10()
 */
void FUN_10025d10(void)

{
  FUN_10025a10((int *)&DAT_100df518);
  return;
}

/* 10025d20  FUN_10025d20  (12 bytes)
 * undefined FUN_10025d20()
 */
void FUN_10025d20(void)

{
  FUN_100259a0((int *)&DAT_100df3f8);
  return;
}

/* 10025d30  FUN_10025d30  (12 bytes)
 * undefined FUN_10025d30()
 */
void FUN_10025d30(void)

{
  FUN_10025a10((int *)&DAT_100df3f8);
  return;
}

/* 10025d40  FUN_10025d40  (12 bytes)
 * undefined FUN_10025d40()
 */
void FUN_10025d40(void)

{
  FUN_100259a0((int *)&DAT_100df420);
  return;
}

/* 10025d50  FUN_10025d50  (12 bytes)
 * undefined FUN_10025d50()
 */
void FUN_10025d50(void)

{
  FUN_10025a10((int *)&DAT_100df420);
  return;
}

/* 10025d60  FUN_10025d60  (12 bytes)
 * undefined FUN_10025d60()
 */
void FUN_10025d60(void)

{
  FUN_100259a0((int *)&DAT_100df4a0);
  return;
}

/* 10025d70  FUN_10025d70  (12 bytes)
 * undefined FUN_10025d70()
 */
void FUN_10025d70(void)

{
  FUN_10025a10((int *)&DAT_100df4a0);
  return;
}

/* 10025d80  FUN_10025d80  (12 bytes)
 * undefined FUN_10025d80()
 */
void FUN_10025d80(void)

{
  FUN_100259a0((int *)&DAT_100df4b0);
  return;
}

/* 10025d90  FUN_10025d90  (12 bytes)
 * undefined FUN_10025d90()
 */
void FUN_10025d90(void)

{
  FUN_10025a10((int *)&DAT_100df4b0);
  return;
}

/* 10025da0  FUN_10025da0  (35 bytes)
 * undefined FUN_10025da0()
 */
void FUN_10025da0(void)

{
  if (DAT_100df5cc != '\0') {
    FUN_100259a0((int *)&DAT_100df488);
    FUN_10023450(&DAT_100cfff8,'\b');
  }
  return;
}

/* 10025dd0  FUN_10025dd0  (26 bytes)
 * undefined FUN_10025dd0()
 */
void FUN_10025dd0(void)

{
  FUN_10025a10((int *)&DAT_100df488);
  FUN_100234a0(&DAT_100cfff8,8);
  return;
}

/* 10025df0  FUN_10025df0  (35 bytes)
 * undefined FUN_10025df0()
 */
void FUN_10025df0(void)

{
  if (DAT_100df5cc != '\0') {
    FUN_100259a0((int *)&DAT_100df568);
    FUN_10023450(&DAT_100cfff8,'\x10');
  }
  return;
}

/* 10025e20  FUN_10025e20  (26 bytes)
 * undefined FUN_10025e20()
 */
void FUN_10025e20(void)

{
  FUN_10025a10((int *)&DAT_100df568);
  FUN_100234a0(&DAT_100cfff8,0x10);
  return;
}

/* 10025e40  FUN_10025e40  (12 bytes)
 * undefined FUN_10025e40()
 */
void FUN_10025e40(void)

{
  FUN_100259a0((int *)&DAT_100df4e8);
  return;
}

/* 10025e50  FUN_10025e50  (12 bytes)
 * undefined FUN_10025e50()
 */
void FUN_10025e50(void)

{
  FUN_10025a10((int *)&DAT_100df4e8);
  return;
}

/* 10025e60  FUN_10025e60  (12 bytes)
 * undefined FUN_10025e60()
 */
void FUN_10025e60(void)

{
  FUN_100259a0((int *)&DAT_100df3b0);
  return;
}

/* 10025e70  FUN_10025e70  (12 bytes)
 * undefined FUN_10025e70()
 */
void FUN_10025e70(void)

{
  FUN_10025a10((int *)&DAT_100df3b0);
  return;
}

/* 10025e80  FUN_10025e80  (38 bytes)
 * undefined FUN_10025e80()
 */
void FUN_10025e80(void)

{
  if (DAT_100df5cc != '\0') {
    FUN_100259a0((int *)&DAT_100df4d8);
    FUN_10023450(&DAT_100cfff8,'\0');
  }
  return;
}

/* 10025eb0  FUN_10025eb0  (29 bytes)
 * undefined FUN_10025eb0()
 */
void FUN_10025eb0(void)

{
  FUN_10025a10((int *)&DAT_100df4d8);
  FUN_100234a0(&DAT_100cfff8,0x200);
  return;
}

/* 10025ed0  FUN_10025ed0  (38 bytes)
 * undefined FUN_10025ed0()
 */
void FUN_10025ed0(void)

{
  if (DAT_100df5cc != '\0') {
    FUN_100259a0((int *)&DAT_100df538);
    FUN_10023450(&DAT_100cfff8,'\0');
  }
  return;
}

/* 10025f00  FUN_10025f00  (29 bytes)
 * undefined FUN_10025f00()
 */
void FUN_10025f00(void)

{
  FUN_10025a10((int *)&DAT_100df538);
  FUN_100234a0(&DAT_100cfff8,0x400);
  return;
}

/* 10025f20  FUN_10025f20  (12 bytes)
 * undefined FUN_10025f20()
 */
void FUN_10025f20(void)

{
  FUN_100259a0((int *)&DAT_100df3d8);
  return;
}

/* 10025f30  FUN_10025f30  (12 bytes)
 * undefined FUN_10025f30()
 */
void FUN_10025f30(void)

{
  FUN_10025a10((int *)&DAT_100df3d8);
  return;
}

/* 10025f40  FUN_10025f40  (123 bytes)
 * undefined FUN_10025f40()
 */
void FUN_10025f40(void)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (DAT_100df5cc != '\0') {
    puVar2 = FUN_100071c0(DAT_100d1458);
    cVar1 = *(char *)(puVar2 + 0xd2);
    if ((((*(float *)(DAT_100df4f4 + 0xc) == 0.0) || (DAT_100d1458 == 0)) || (cVar1 == '\x02')) ||
       (((cVar1 == '\x03' || (cVar1 == '\n')) || (cVar1 == '\v')))) {
      piVar3 = (int *)&DAT_100df398;
    }
    else {
      piVar3 = (int *)&DAT_100df588;
    }
    FUN_100259a0(piVar3);
    FUN_1001fe90();
    FUN_10023450(&DAT_100cfff8,'\0');
  }
  return;
}

/* 10025fc0  FUN_10025fc0  (99 bytes)
 * undefined FUN_10025fc0()
 */
void FUN_10025fc0(void)

{
  char cVar1;
  undefined4 *puVar2;
  
  puVar2 = FUN_100071c0(DAT_100d1458);
  cVar1 = *(char *)(puVar2 + 0xd2);
  if ((((*(float *)(DAT_100df4f4 + 0xc) != 0.0) && (DAT_100d1458 != 0)) && (cVar1 != '\x02')) &&
     (((cVar1 != '\x03' && (cVar1 != '\n')) && (cVar1 != '\v')))) {
    FUN_10025a10((int *)&DAT_100df588);
    return;
  }
  FUN_10025a10((int *)&DAT_100df398);
  return;
}

/* 10026030  FUN_10026030  (12 bytes)
 * undefined FUN_10026030()
 */
void FUN_10026030(void)

{
  FUN_100259a0((int *)&DAT_100df408);
  return;
}

/* 10026040  FUN_10026040  (12 bytes)
 * undefined FUN_10026040()
 */
void FUN_10026040(void)

{
  FUN_10025a10((int *)&DAT_100df408);
  return;
}

/* 10026050  FUN_10026050  (35 bytes)
 * undefined FUN_10026050()
 */
void FUN_10026050(void)

{
  if (DAT_100df5cc != '\0') {
    FUN_100259a0((int *)&DAT_100df500);
    FUN_10023450(&DAT_100cfff8,'\x02');
  }
  return;
}

/* 10026080  FUN_10026080  (12 bytes)
 * undefined FUN_10026080()
 */
void FUN_10026080(void)

{
  FUN_10025a10((int *)&DAT_100df500);
  return;
}

/* 10026090  FUN_10026090  (26 bytes)
 * undefined FUN_10026090()
 */
void FUN_10026090(void)

{
  FUN_100259a0((int *)&DAT_100df438);
  FUN_10023450(&DAT_100cfff8,'\x04');
  return;
}

/* 100260b0  FUN_100260b0  (12 bytes)
 * undefined FUN_100260b0()
 */
void FUN_100260b0(void)

{
  FUN_10025a10((int *)&DAT_100df438);
  return;
}

/* 100260c0  FUN_100260c0  (21 bytes)
 * undefined FUN_100260c0()
 */
void FUN_100260c0(void)

{
  if (DAT_100df5cc != '\0') {
    FUN_100259a0((int *)&DAT_100df478);
  }
  return;
}

/* 100260e0  FUN_100260e0  (12 bytes)
 * undefined FUN_100260e0()
 */
void FUN_100260e0(void)

{
  FUN_10025a10((int *)&DAT_100df478);
  return;
}

/* 100260f0  FUN_100260f0  (12 bytes)
 * undefined FUN_100260f0()
 */
void FUN_100260f0(void)

{
  FUN_100259a0((int *)&DAT_100df598);
  return;
}

/* 10026100  FUN_10026100  (12 bytes)
 * undefined FUN_10026100()
 */
void FUN_10026100(void)

{
  FUN_10025a10((int *)&DAT_100df598);
  return;
}

/* 10026110  FUN_10026110  (108 bytes)
 * undefined FUN_10026110()
 */
void FUN_10026110(void)

{
  char cVar1;
  undefined4 *puVar2;
  
  if (DAT_100df5cc != '\0') {
    puVar2 = FUN_100071c0(DAT_100d1458);
    cVar1 = *(char *)(puVar2 + 0xd2);
    if ((((*(float *)(DAT_100df4f4 + 0xc) != 0.0) && (DAT_100d1458 != 0)) && (cVar1 != '\x02')) &&
       (((cVar1 != '\x03' && (cVar1 != '\n')) && (cVar1 != '\v')))) {
      FUN_100259a0((int *)&DAT_100df398);
      return;
    }
    FUN_100259a0((int *)&DAT_100df588);
  }
  return;
}

/* 10026180  FUN_10026180  (99 bytes)
 * undefined FUN_10026180()
 */
void FUN_10026180(void)

{
  char cVar1;
  undefined4 *puVar2;
  
  puVar2 = FUN_100071c0(DAT_100d1458);
  cVar1 = *(char *)(puVar2 + 0xd2);
  if ((((*(float *)(DAT_100df4f4 + 0xc) != 0.0) && (DAT_100d1458 != 0)) && (cVar1 != '\x02')) &&
     (((cVar1 != '\x03' && (cVar1 != '\n')) && (cVar1 != '\v')))) {
    FUN_10025a10((int *)&DAT_100df398);
    return;
  }
  FUN_10025a10((int *)&DAT_100df588);
  return;
}

/* 100261f0  FUN_100261f0  (12 bytes)
 * undefined FUN_100261f0()
 */
void FUN_100261f0(void)

{
  FUN_100259a0((int *)&DAT_100df3c0);
  return;
}

/* 10026200  FUN_10026200  (12 bytes)
 * undefined FUN_10026200()
 */
void FUN_10026200(void)

{
  FUN_10025a10((int *)&DAT_100df3c0);
  return;
}

/* 10026210  FUN_10026210  (35 bytes)
 * undefined FUN_10026210()
 */
void FUN_10026210(void)

{
  if (DAT_100df5cc != '\0') {
    FUN_100259a0((int *)&DAT_100df3e8);
    FUN_10023450(&DAT_100cfff8,'\x01');
  }
  return;
}

/* 10026240  FUN_10026240  (12 bytes)
 * undefined FUN_10026240()
 */
void FUN_10026240(void)

{
  FUN_10025a10((int *)&DAT_100df3e8);
  return;
}

/* 10026250  FUN_10026250  (23 bytes)
 * undefined FUN_10026250()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10026250(void)

{
  byte_conflict *pbVar1;
  void *this;
  
  pbVar1 = (byte_conflict *)(*gEngfuncs.Cmd_Argv)(1);
  _DAT_100df5c4 = FUN_1006c042(this,pbVar1);
  return;
}

/* 10026270  FUN_10026270  (29 bytes)
 * undefined FUN_10026270()
 */
void FUN_10026270(void)

{
  FUN_100259a0((int *)&DAT_100df4c0);
  if (DAT_100d5cb0 != 0) {
    FUN_10063710(DAT_100d5cb0);
    return;
  }
  return;
}

/* 10026290  FUN_10026290  (29 bytes)
 * undefined FUN_10026290()
 */
void FUN_10026290(void)

{
  FUN_10025a10((int *)&DAT_100df4c0);
  if (DAT_100d5cb0 != 0) {
    FUN_10063760(DAT_100d5cb0);
    return;
  }
  return;
}

/* 100262b0  FUN_100262b0  (120 bytes)
 * float10 FUN_100262b0(int param_1)
 * called by: CAM_Think, CL_CreateMove, FUN_10026330
 */
/* WARNING: Removing unreachable block (ram,0x100262fd) */

float10 __cdecl FUN_100262b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = uVar1 & 1;
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 4) != 0) {
      fVar3 = (float10)0.0;
      goto LAB_10026323;
    }
    if (uVar2 != 0) {
      *(uint *)(param_1 + 8) = uVar2;
      return (float10)1.0;
    }
  }
  else {
    if ((uVar1 & 4) != 0) {
      if (uVar2 != 0) {
        *(uint *)(param_1 + 8) = uVar2;
        return (float10)0.75;
      }
      fVar3 = (float10)0.25;
LAB_10026323:
      *(uint *)(param_1 + 8) = uVar2;
      return fVar3;
    }
    if (uVar2 != 0) {
      *(uint *)(param_1 + 8) = uVar2;
      return (float10)0.5;
    }
  }
  *(uint *)(param_1 + 8) = uVar2;
  return (float10)0.0;
}

/* 10026330  FUN_10026330  (571 bytes)
 * undefined FUN_10026330(float param_1, float * param_2)
 * called by: CL_CreateMove
 */
void __cdecl FUN_10026330(float param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float local_8;
  float local_4;
  
  if ((220.0 < *(float *)(DAT_100df5ac + 0xc)) || (0.0 < *(float *)(DAT_100df5ac + 0xc))) {
    if (*(float *)(DAT_100df5ac + 0xc) <= 220.0) {
      local_8 = *(float *)(DAT_100df5ac + 0xc);
    }
    else {
      local_8 = 220.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  if ((200.0 < *(float *)(DAT_100df448 + 0xc)) || (0.0 < *(float *)(DAT_100df448 + 0xc))) {
    if (*(float *)(DAT_100df448 + 0xc) <= 200.0) {
      local_4 = *(float *)(DAT_100df448 + 0xc);
    }
    else {
      local_4 = 200.0;
    }
  }
  else {
    local_4 = 0.0;
  }
  if ((DAT_100df3e0 & 1) != 0) {
    if (*(float *)(DAT_100df5b4 + 0xc) <= 0.67) {
      param_1 = param_1 * 0.67;
    }
    else {
      param_1 = param_1 * *(float *)(DAT_100df5b4 + 0xc);
    }
  }
  if ((DAT_100df530 & 1) == 0) {
    fVar1 = FUN_100262b0(0x100df4b0);
    param_2[1] = (float)((float10)param_2[1] - fVar1 * (float10)param_1 * (float10)local_4);
    fVar1 = FUN_100262b0(0x100df4a0);
    param_2[1] = (float)(fVar1 * (float10)param_1 * (float10)local_4 + (float10)param_2[1]);
    fVar1 = FUN_10029b80();
    param_2[1] = (float)fVar1;
  }
  if ((DAT_100df5c0 & 1) != 0) {
    FUN_100672f0();
    fVar1 = FUN_100262b0(0x100df488);
    *param_2 = (float)((float10)*param_2 - fVar1 * (float10)param_1 * (float10)local_8);
    fVar1 = FUN_100262b0(0x100df568);
    *param_2 = (float)(fVar1 * (float10)param_1 * (float10)local_8 + (float10)*param_2);
  }
  fVar1 = FUN_100262b0(0x100df4e8);
  fVar2 = FUN_100262b0(0x100df3b0);
  *param_2 = (float)(fVar2 * (float10)param_1 * (float10)local_8 +
                    ((float10)*param_2 - (float10)(float)fVar1 * (float10)param_1 * (float10)local_8
                    ));
  if (((float)fVar1 != 0.0) || (fVar2 != (float10)0.0)) {
    FUN_100672f0();
  }
  if (89.0 < *param_2) {
    *param_2 = 89.0;
  }
  if (*param_2 < -89.0) {
    *param_2 = -89.0;
  }
  if (50.0 < param_2[2]) {
    param_2[2] = 50.0;
  }
  if (param_2[2] < -50.0) {
    param_2[2] = -50.0;
  }
  return;
}

/* 10026850  FUN_10026850  (1 bytes)
 * undefined FUN_10026850()
 */
void FUN_10026850(void)

{
  return;
}

/* 10026860  FUN_10026860  (14 bytes)
 * bool FUN_10026860(void)
 * called by: FUN_10003830, FUN_10026870
 */
bool FUN_10026860(void)

{
  return DAT_100cf9d8 < 1;
}

/* 10026870  FUN_10026870  (453 bytes)
 * uint FUN_10026870(int param_1)
 * called by: CL_CreateMove, FUN_10024b00, FUN_10026a40
 */
uint __cdecl FUN_10026870(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  
  uVar2 = (uint)((DAT_100df3f0 & 3) != 0);
  if ((DAT_100df440 & 3) != 0) {
    uVar2 = uVar2 | 4;
  }
  if ((DAT_100df508 & 3) != 0) {
    uVar2 = uVar2 | 2;
  }
  if ((DAT_100df490 & 3) != 0) {
    uVar2 = uVar2 | 8;
  }
  if ((DAT_100df570 & 3) != 0) {
    uVar2 = uVar2 | 0x10;
  }
  if ((DAT_100df410 & 3) != 0) {
    uVar2 = uVar2 | 0x20;
  }
  if ((DAT_100df4a8 & 3) != 0) {
    uVar2 = uVar2 | 0x80;
  }
  if ((DAT_100df4b8 & 3) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  if ((DAT_100df4e0 & 3) != 0) {
    uVar2 = uVar2 | 0x200;
  }
  if ((DAT_100df540 & 3) != 0) {
    uVar2 = uVar2 | 0x400;
  }
  if ((DAT_100df3a0 & 3) != 0) {
    uVar2 = uVar2 | 0x800;
  }
  if ((DAT_100df480 & 3) != 0) {
    uVar2 = uVar2 | 0x2000;
  }
  if ((DAT_100df5a0 & 3) != 0) {
    uVar2 = uVar2 | 0x4000;
  }
  if ((DAT_100df590 & 3) != 0) {
    uVar2 = uVar2 | 0x40;
  }
  if ((DAT_100df4c8 & 3) != 0) {
    uVar2 = uVar2 | 0x8000;
  }
  bVar1 = FUN_10026860();
  if ((CONCAT31(extraout_var,bVar1) != 0) || (DAT_100d5b20 != 0)) {
    uVar2 = uVar2 | 0x8000;
  }
  if (param_1 != 0) {
    DAT_100df3f0 = DAT_100df3f0 & 0xfffffffd;
    DAT_100df440 = DAT_100df440 & 0xfffffffd;
    DAT_100df508 = DAT_100df508 & 0xfffffffd;
    DAT_100df490 = DAT_100df490 & 0xfffffffd;
    DAT_100df570 = DAT_100df570 & 0xfffffffd;
    DAT_100df410 = DAT_100df410 & 0xfffffffd;
    DAT_100df4a8 = DAT_100df4a8 & 0xfffffffd;
    DAT_100df4b8 = DAT_100df4b8 & 0xfffffffd;
    DAT_100df4e0 = DAT_100df4e0 & 0xfffffffd;
    DAT_100df540 = DAT_100df540 & 0xfffffffd;
    DAT_100df3a0 = DAT_100df3a0 & 0xfffffffd;
    DAT_100df480 = DAT_100df480 & 0xfffffffd;
    DAT_100df5a0 = DAT_100df5a0 & 0xfffffffd;
    DAT_100df590 = DAT_100df590 & 0xfffffffd;
    DAT_100df4c8 = DAT_100df4c8 & 0xfffffffd;
  }
  return uVar2;
}

/* 10026a40  FUN_10026a40  (232 bytes)
 * undefined FUN_10026a40(uint param_1)
 * called by: FUN_10024b00
 */
void __cdecl FUN_10026a40(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_10026870(0);
  uVar1 = uVar1 ^ param_1;
  if ((uVar1 & 1) != 0) {
    if ((param_1 & 1) == 0) {
      DAT_100df3f0 = DAT_100df3f0 & 0xfffffff8;
    }
    else {
      FUN_100259a0((int *)&DAT_100df3e8);
    }
  }
  if ((uVar1 & 0x800) != 0) {
    if ((param_1 & 0x800) == 0) {
      DAT_100df3a0 = DAT_100df3a0 & 0xfffffff8;
    }
    else {
      FUN_100259a0((int *)&DAT_100df398);
    }
  }
  if ((uVar1 & 8) != 0) {
    if ((param_1 & 8) == 0) {
      DAT_100df490 = DAT_100df490 & 0xfffffff8;
    }
    else {
      FUN_100259a0((int *)&DAT_100df488);
    }
  }
  if ((uVar1 & 0x10) != 0) {
    if ((param_1 & 0x10) == 0) {
      DAT_100df570 = DAT_100df570 & 0xfffffff8;
    }
    else {
      FUN_100259a0((int *)&DAT_100df568);
    }
  }
  if ((uVar1 & 0x200) != 0) {
    if ((param_1 & 0x200) == 0) {
      DAT_100df4e0 = DAT_100df4e0 & 0xfffffff8;
    }
    else {
      FUN_100259a0((int *)&DAT_100df4d8);
    }
  }
  if ((uVar1 & 0x400) != 0) {
    if ((param_1 & 0x400) != 0) {
      FUN_100259a0((int *)&DAT_100df538);
      return;
    }
    DAT_100df540 = DAT_100df540 & 0xfffffff8;
  }
  return;
}

/* 10026b30  FUN_10026b30  (1795 bytes)
 * undefined FUN_10026b30(void)
 * called by: HUD_Init
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10026b30(void)

{
  void *extraout_ECX;
  
  (*gEngfuncs.pfnAddCommand)(s__moveup_10094474,FUN_10025d20);
  (*gEngfuncs.pfnAddCommand)(s__moveup_1009446c,FUN_10025d30);
  (*gEngfuncs.pfnAddCommand)(s__movedown_10094460,FUN_10025d40);
  (*gEngfuncs.pfnAddCommand)(s__movedown_10094454,FUN_10025d50);
  (*gEngfuncs.pfnAddCommand)(s__left_1009444c,FUN_10025d60);
  (*gEngfuncs.pfnAddCommand)(s__left_10094444,FUN_10025d70);
  (*gEngfuncs.pfnAddCommand)(s__right_1009443c,FUN_10025d80);
  (*gEngfuncs.pfnAddCommand)(s__right_10094434,FUN_10025d90);
  (*gEngfuncs.pfnAddCommand)(s__forward_10094064,FUN_10025da0);
  (*gEngfuncs.pfnAddCommand)(s__forward_10094428,FUN_10025dd0);
  (*gEngfuncs.pfnAddCommand)(&DAT_1009405c,FUN_10025df0);
  (*gEngfuncs.pfnAddCommand)(s__back_10094420,FUN_10025e20);
  (*gEngfuncs.pfnAddCommand)(s__lookup_10094418,FUN_10025e40);
  (*gEngfuncs.pfnAddCommand)(s__lookup_10094410,FUN_10025e50);
  (*gEngfuncs.pfnAddCommand)(s__lookdown_10094404,FUN_10025e60);
  (*gEngfuncs.pfnAddCommand)(s__lookdown_100943f8,FUN_10025e70);
  (*gEngfuncs.pfnAddCommand)(s__moveleft_10094050,FUN_10025e80);
  (*gEngfuncs.pfnAddCommand)(s__moveleft_100943ec,FUN_10025eb0);
  (*gEngfuncs.pfnAddCommand)(s__moveright_10094044,FUN_10025ed0);
  (*gEngfuncs.pfnAddCommand)(s__moveright_100943e0,FUN_10025f00);
  (*gEngfuncs.pfnAddCommand)(s__speed_100943d8,FUN_10025f20);
  (*gEngfuncs.pfnAddCommand)(s__speed_100943d0,FUN_10025f30);
  (*gEngfuncs.pfnAddCommand)(s__attack_1009408c,FUN_10026210);
  (*gEngfuncs.pfnAddCommand)(s__attack_100943c8,FUN_10026240);
  (*gEngfuncs.pfnAddCommand)(s__attack2_10094080,FUN_10025f40);
  (*gEngfuncs.pfnAddCommand)(s__attack2_100943bc,FUN_10025fc0);
  (*gEngfuncs.pfnAddCommand)(&DAT_100943b4,FUN_10026030);
  (*gEngfuncs.pfnAddCommand)(&DAT_100943ac,FUN_10026040);
  (*gEngfuncs.pfnAddCommand)(&DAT_1009403c,FUN_10026050);
  (*gEngfuncs.pfnAddCommand)(s__jump_100943a4,FUN_10026080);
  (*gEngfuncs.pfnAddCommand)(s_impulse_1009439c,FUN_10026250);
  (*gEngfuncs.pfnAddCommand)(s__klook_10094394,FUN_10025ce0);
  (*gEngfuncs.pfnAddCommand)(s__klook_1009438c,FUN_10025cf0);
  (*gEngfuncs.pfnAddCommand)(s__jlook_10094384,FUN_10025d00);
  (*gEngfuncs.pfnAddCommand)(s__jlook_1009437c,FUN_10025d10);
  (*gEngfuncs.pfnAddCommand)(s__duck_10094374,FUN_10026090);
  (*gEngfuncs.pfnAddCommand)(s__duck_1009436c,FUN_100260b0);
  (*gEngfuncs.pfnAddCommand)(s__reload_10094070,FUN_100260c0);
  (*gEngfuncs.pfnAddCommand)(s__reload_10094364,FUN_100260e0);
  (*gEngfuncs.pfnAddCommand)(s__alt1_1009435c,FUN_100260f0);
  (*gEngfuncs.pfnAddCommand)(s__alt1_10094354,FUN_10026100);
  (*gEngfuncs.pfnAddCommand)(&DAT_10094078,FUN_10026110);
  (*gEngfuncs.pfnAddCommand)(s__alt2_1009434c,FUN_10026180);
  (*gEngfuncs.pfnAddCommand)(s__score_10094344,FUN_10026270);
  (*gEngfuncs.pfnAddCommand)(s__score_1009433c,FUN_10026290);
  (*gEngfuncs.pfnAddCommand)(s__showscores_10094330,FUN_10026270);
  (*gEngfuncs.pfnAddCommand)(s__showscores_10094324,FUN_10026290);
  (*gEngfuncs.pfnAddCommand)(s__graph_1009431c,FUN_100261f0);
  (*gEngfuncs.pfnAddCommand)(s__graph_10094314,FUN_10026200);
  (*gEngfuncs.pfnAddCommand)(s__break_1009430c,FUN_10025cc0);
  (*gEngfuncs.pfnAddCommand)(s__break_10094304,FUN_10025cd0);
  DAT_100df45c = (*gEngfuncs.pfnRegisterVariable)(s_lookstrafe_100942f8,&DAT_10092bf4,1);
  DAT_100df434 = (*gEngfuncs.pfnRegisterVariable)(s_lookspring_100942ec,&DAT_10092bf4,1);
  DAT_100df5b4 = (*gEngfuncs.pfnRegisterVariable)(s_cl_anglespeedkey_100942d0,&DAT_100942e4,0);
  DAT_100df448 = (*gEngfuncs.pfnRegisterVariable)(s_cl_yawspeed_100942c0,&DAT_100942cc,0);
  DAT_100df5ac = (*gEngfuncs.pfnRegisterVariable)(s_cl_pitchspeed_100942ac,&DAT_100942bc,0);
  DAT_100df5a4 = (*gEngfuncs.pfnRegisterVariable)(s_cl_upspeed_1009429c,&DAT_100942a8,0);
  DAT_100df418 = (*gEngfuncs.pfnRegisterVariable)(s_cl_forwardspeed_10094288,&DAT_10094298,1);
  DAT_100df584 = (*gEngfuncs.pfnRegisterVariable)(s_cl_backspeed_10094278,&DAT_10094298,1);
  DAT_100df548 = (*gEngfuncs.pfnRegisterVariable)(s_cl_sidespeed_10094268,&DAT_10094298,0);
  DAT_100df3e4 = (*gEngfuncs.pfnRegisterVariable)(s_cl_movespeedkey_10094254,&DAT_10094264,0);
  DAT_100df430 = (*gEngfuncs.pfnRegisterVariable)(s_cl_vsmoothing_1009423c,&DAT_1009424c,1);
  DAT_100df3d0 = (*gEngfuncs.pfnRegisterVariable)(s_m_pitch_1009422c,s_0_022_10094234,1);
  DAT_100df4d0 = (*gEngfuncs.pfnRegisterVariable)(s_m_yaw_10094224,s_0_022_10094234,1);
  DAT_100df4f8 = (*gEngfuncs.pfnRegisterVariable)(s_m_forward_10094218,&DAT_10092c08,1);
  _DAT_100df498 = (*gEngfuncs.pfnRegisterVariable)(s_m_side_1009420c,&DAT_10094214,1);
  DAT_100df464 = (*gEngfuncs.pfnRegisterVariable)(s_cl_fx_10094204,&DAT_10092c08,1);
  DAT_100df54c = (*gEngfuncs.pfnRegisterVariable)(s_cam_back_100941f4,&DAT_10094200,1);
  DAT_100df484 = (*gEngfuncs.pfnRegisterVariable)(s_cam_right_100941e8,&DAT_10092bf4,1);
  DAT_100df5a8 = (*gEngfuncs.pfnRegisterVariable)(s_cam_up_100941dc,&DAT_100941e4,1);
  DAT_100df414 = (*gEngfuncs.pfnRegisterVariable)(s_cl_camtype_100941d0,&DAT_10092bf4,1);
  DAT_100df460 = (*gEngfuncs.pfnRegisterVariable)(s_hud_r_100941c4,&DAT_100941cc,1);
  DAT_100df458 = (*gEngfuncs.pfnRegisterVariable)(s_hud_g_100941b8,&DAT_100941c0,1);
  DAT_100df454 = (*gEngfuncs.pfnRegisterVariable)(s_hud_b_100941ac,&DAT_100941b4,1);
  _DAT_100df3d4 = (*gEngfuncs.pfnRegisterVariable)(s_hud_color_10094194,s_150_175_255_100941a0,1);
  DAT_100df44c = (*gEngfuncs.pfnRegisterVariable)(s_cl_lasercolor_10094180,&DAT_10094190,1);
  DAT_100df42c = (*gEngfuncs.pfnRegisterVariable)(s_cl_buykevlar_10094170,&DAT_10092c08,1);
  DAT_100df50c = (*gEngfuncs.pfnRegisterVariable)(s_nohud_10094168,&DAT_10092bf4,0);
  DAT_100df494 = (*gEngfuncs.pfnRegisterVariable)(s_cl_realhud_1009415c,&DAT_10092bf4,1);
  DAT_100df4cc = (*gEngfuncs.pfnRegisterVariable)(s_cl_shadow_1009414c,&DAT_10094158,1);
  DAT_100df550 = (*gEngfuncs.pfnRegisterVariable)(s_cl_wavedetail_1009413c,&DAT_10092bf4,1);
  DAT_100df3a4 = (*gEngfuncs.pfnRegisterVariable)(s_cl_thirdpersonswitch_10094124,&DAT_10092bf4,1);
  DAT_100df444 = (*gEngfuncs.pfnRegisterVariable)(s_cl_usepowerup_10094114,&DAT_10092c08,1);
  DAT_100df5b0 = (*gEngfuncs.pfnRegisterVariable)(s_cl_laser_10094108,&DAT_10092bf4,1);
  DAT_100df510 = (*gEngfuncs.pfnRegisterVariable)(s_cl_solidcross_100940f8,&DAT_10094158,1);
  DAT_100df544 = (*gEngfuncs.pfnRegisterVariable)(s_cl_thirdperson_100940e8,&DAT_10092bf4,1);
  DAT_100df4f4 = (*gEngfuncs.pfnRegisterVariable)(s_cl_attackswitch_100940d8,&DAT_10092bf4,1);
  DAT_100df534 = (*gEngfuncs.pfnRegisterVariable)(s_cl_thirdtransparency_100940c0,&DAT_10092c08,1);
  DAT_100df450 = (*gEngfuncs.pfnRegisterVariable)(s_cl_motionblur_100940b0,&DAT_10092c08,1);
  DAT_100df3a8 = (*gEngfuncs.pfnRegisterVariable)(s_cl_gore_100940a8,&DAT_10094158,1);
  DAT_100df574 = (*gEngfuncs.pfnRegisterVariable)(s_cl_showequipment_10094094,&DAT_10092c08,1);
  FUN_10025370();
  FUN_10028320();
  FUN_10025930(extraout_ECX);
  FUN_10069e90();
  return;
}

/* 10027240  FUN_10027240  (10 bytes)
 * void FUN_10027240(void)
 */
void FUN_10027240(void)

{
  IN_DeactivateMouse();
  FUN_10025970();
  return;
}

/* 100272d0  FUN_100272d0  (201 bytes)
 * undefined FUN_100272d0(void)
 * called by: FUN_10028320
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100272d0(void)

{
  int iVar1;
  
  iVar1 = (*gEngfuncs.CheckParm)(s__nomouse_100944d4,(char **)0x0);
  if (iVar1 == 0) {
    DAT_100df5d0 = 1;
    DAT_100df640 = SystemParametersInfoA(3,0,&DAT_100df668,0);
    if (DAT_100df640 != 0) {
      iVar1 = (*gEngfuncs.CheckParm)(s__noforcemspd_100944c4,(char **)0x0);
      if (iVar1 != 0) {
        _DAT_10094484 = DAT_100df670;
      }
      iVar1 = (*gEngfuncs.CheckParm)(s__noforcemaccel_100944b4,(char **)0x0);
      if (iVar1 != 0) {
        _DAT_1009447c = DAT_100df668;
        _DAT_10094480 = DAT_100df66c;
      }
      iVar1 = (*gEngfuncs.CheckParm)(s__noforcemparms_100944a4,(char **)0x0);
      if (iVar1 != 0) {
        _DAT_1009447c = DAT_100df668;
        _DAT_10094480 = DAT_100df66c;
        _DAT_10094484 = DAT_100df670;
      }
    }
    DAT_100df6f8 = 5;
  }
  return;
}

/* 100273b0  FUN_100273b0  (21 bytes)
 * undefined FUN_100273b0(void)
 * called by: FUN_100274d0, FUN_10064790, IN_Accumulate
 */
void FUN_100273b0(void)

{
  int Y;
  int X;
  
  Y = (*gEngfuncs.GetWindowCenterY)();
  X = (*gEngfuncs.GetWindowCenterX)();
  SetCursorPos(X,Y);
  return;
}

/* 100274d0  FUN_100274d0  (991 bytes)
 * undefined FUN_100274d0(undefined4 param_1, int param_2)
 * called by: FUN_100282e0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100274d0(undefined4 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float10 fVar6;
  longlong lVar7;
  int in_stack_0000000c;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  (*gEngfuncs.GetViewAngles)(&local_c);
  FUN_100672f0();
  if (((DAT_100df394 == 0) && (DAT_100df714 == 0)) && (DAT_100d5b20 == 0)) {
    GetCursorPos((LPPOINT)&DAT_100df698);
    iVar3 = (*gEngfuncs.GetWindowCenterX)();
    local_c = (float)(DAT_100df698 - iVar3);
    lVar7 = __ftol();
    iVar3 = (int)lVar7;
    iVar4 = (*gEngfuncs.GetWindowCenterY)();
    local_c = (float)(DAT_100df69c - iVar4);
    lVar7 = __ftol();
    fVar5 = (float)lVar7;
    _DAT_100df70c = 0;
    _DAT_100df63c = 0;
    if (*(float *)(DAT_100df64c + 0xc) == 0.0) {
      _DAT_100df630 = (float)iVar3;
      DAT_100df624 = (float)(int)fVar5;
    }
    else {
      fVar1 = ((float)iVar3 + _DAT_100df678) * 0.5;
      if ((0.01 <= fVar1) || (fVar1 <= -0.01)) {
        _DAT_100df630 = ((float)iVar3 + _DAT_100df678) * 0.5;
      }
      else {
        _DAT_100df630 = 0.0;
      }
      DAT_100df624 = ((float)(int)fVar5 + _DAT_100df674) * 0.5;
    }
    DAT_1018d17c = DAT_1018d17c + iVar3;
    DAT_1018d180 = DAT_1018d180 + (int)fVar5;
    if (DAT_1018d17c < 0) {
      DAT_1018d17c = 0;
    }
    if (DAT_100d5908 < DAT_1018d17c) {
      DAT_1018d17c = DAT_100d5908;
    }
    if (DAT_1018d180 < 0) {
      DAT_1018d180 = 0;
    }
    if (DAT_100d590c < DAT_1018d180) {
      DAT_1018d180 = DAT_100d590c;
    }
    _DAT_100df674 = DAT_100df624;
    _DAT_100df678 = _DAT_100df630;
    local_c = fVar5;
    if (DAT_1018d184 == '\0') {
      fVar6 = FUN_10020a90(0x100cf920);
      iVar4 = DAT_100df6a0;
      if (fVar6 == (float10)0.0) {
        fVar6 = (float10)FUN_1006c490();
        iVar2 = DAT_100df628;
        fVar6 = fVar6 * (float10)*(float *)(iVar4 + 0xc);
        if ((*(float *)(DAT_100df628 + 0xc) != 0.0) &&
           ((float10)*(float *)(DAT_100df628 + 0xc) <= fVar6)) {
          fVar6 = (float10)*(float *)(DAT_100df628 + 0xc);
        }
        _DAT_100df630 =
             (float)((float10)(int)(((iVar3 < 1) - 1 & 2) - 1) * fVar6 + (float10)_DAT_100df630);
        fVar6 = (float10)FUN_1006c490();
        fVar6 = fVar6 * (float10)*(float *)(iVar4 + 0xc);
        if ((*(float *)(iVar2 + 0xc) != 0.0) && ((float10)*(float *)(iVar2 + 0xc) <= fVar6)) {
          fVar6 = (float10)*(float *)(iVar2 + 0xc);
        }
        DAT_100df624 = (float)((float10)(int)((((int)local_c < 1) - 1 & 2) - 1) * fVar6 +
                              (float10)DAT_100df624);
        _DAT_100df630 = _DAT_100df630 * *(float *)(DAT_100df708 + 0xc);
        DAT_100df624 = DAT_100df624 * *(float *)(DAT_100df708 + 0xc);
        fVar5 = local_c;
      }
      else {
        fVar6 = FUN_10020a90(0x100cf920);
        _DAT_100df630 = (float)(fVar6 * (float10)_DAT_100df630);
        fVar6 = FUN_10020a90(0x100cf920);
        DAT_100df624 = (float)(fVar6 * (float10)DAT_100df624);
      }
      fStack_4 = fStack_4 - _DAT_100df630 * *(float *)(DAT_100df4d0 + 0xc);
      if ((DAT_100df530 & 1) == 0) {
        fStack_8 = DAT_100df624 * *(float *)(DAT_100df3d0 + 0xc) + fStack_8;
        if (fStack_8 <= 89.0) {
          if (fStack_8 < -89.0) {
            fStack_8 = -89.0;
          }
        }
        else {
          fStack_8 = 89.0;
        }
      }
      else {
        iVar4 = (*gEngfuncs.IsNoClipping)();
        if (iVar4 == 0) {
          *(float *)(in_stack_0000000c + 0x10) =
               *(float *)(in_stack_0000000c + 0x10) - DAT_100df624 * *(float *)(DAT_100df4f8 + 0xc);
        }
        else {
          *(float *)(in_stack_0000000c + 0x18) =
               *(float *)(in_stack_0000000c + 0x18) - DAT_100df624 * *(float *)(DAT_100df4f8 + 0xc);
        }
      }
    }
    if ((iVar3 != 0) || (fVar5 != 0.0)) {
      FUN_100273b0();
    }
  }
  (*gEngfuncs.SetViewAngles)(&fStack_8);
  return;
}

/* 10027960  FUN_10027960  (333 bytes)
 * undefined FUN_10027960(void)
 * called by: FUN_10028320
 */
void FUN_10027960(void)

{
  UINT_PTR uJoyID;
  int iVar1;
  UINT UVar2;
  UINT UVar3;
  MMRESULT MVar4;
  undefined4 *puVar5;
  undefined4 auStack_18c [15];
  UINT UStack_150;
  uint uStack_12c;
  
  DAT_100df62c = 0;
  iVar1 = (*gEngfuncs.CheckParm)(s__nojoy_1009458c,(char **)0x0);
  if (iVar1 == 0) {
    UVar2 = joyGetNumDevs();
    if (UVar2 == 0) {
      (*gEngfuncs.Con_DPrintf)(s_joystick_not_found____driver_not_10094560);
      return;
    }
    DAT_100df6e8 = 0;
    UVar3 = UVar2;
    if (0 < (int)UVar2) {
      do {
        uJoyID = DAT_100df6e8;
        puVar5 = &DAT_100df6b0;
        for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        DAT_100df6b0 = 0x34;
        DAT_100df6b4 = 0x400;
        UVar3 = joyGetPosEx(uJoyID,(LPJOYINFOEX)&DAT_100df6b0);
        if (UVar3 == 0) goto LAB_10027a26;
        DAT_100df6e8 = DAT_100df6e8 + 1;
      } while ((int)DAT_100df6e8 < (int)UVar2);
    }
    if (UVar3 != 0) {
      (*gEngfuncs.Con_DPrintf)(s_joystick_not_found____no_valid_j_10094530,UVar3);
      return;
    }
LAB_10027a26:
    puVar5 = auStack_18c;
    for (iVar1 = 0x65; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    MVar4 = joyGetDevCapsA(DAT_100df6e8,(LPJOYCAPSA)auStack_18c,0x194);
    if (MVar4 != 0) {
      (*gEngfuncs.Con_DPrintf)(s_joystick_not_found____invalid_jo_100944f4,MVar4);
      return;
    }
    DAT_100df710 = uStack_12c & 0x10;
    DAT_100df61c = UStack_150;
    DAT_100df638 = 0;
    DAT_100df67c = 0;
    (*gEngfuncs.Con_Printf)(s_joystick_found_100944e0,0);
    DAT_100df62c = 1;
    DAT_100df6a4 = 0;
  }
  return;
}

/* 10027ab0  FUN_10027ab0  (52 bytes)
 * undefined * FUN_10027ab0(undefined4 param_1)
 * called by: FUN_10027b00
 */
undefined * __cdecl FUN_10027ab0(undefined4 param_1)

{
  switch(param_1) {
  default:
    return &DAT_100df6b8;
  case 1:
    return &DAT_100df6bc;
  case 2:
    return &DAT_100df6c0;
  case 3:
    return &DAT_100df6c4;
  case 4:
    return &DAT_100df6c8;
  case 5:
    return &DAT_100df6cc;
  }
}

/* 10027b00  FUN_10027b00  (407 bytes)
 * undefined FUN_10027b00(void)
 * called by: FUN_10027e40
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10027b00(void)

{
  byte bVar1;
  undefined *puVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  longlong lVar7;
  
  iVar4 = 0;
  do {
    (&DAT_100df5ec)[iVar4] = 0;
    (&DAT_100df5d4)[iVar4] = 0;
    puVar2 = FUN_10027ab0(iVar4);
    (&DAT_100df604)[iVar4] = puVar2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  if (*(float *)(DAT_100df68c + 0xc) == 0.0) {
    DAT_100df5ec = 4;
    DAT_100df5f0 = 1;
  }
  else {
    pcVar5 = s_joystick_100945a8;
    pbVar3 = *(byte **)(DAT_100df634 + 4);
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_10027b8d:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_10027b92;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_10027b8d;
      pbVar3 = pbVar3 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10027b92:
    if (iVar4 != 0) {
      (*gEngfuncs.Con_Printf)(s__s_configured_10094594,*(byte **)(DAT_100df634 + 4));
    }
    lVar7 = __ftol();
    DAT_100df5ec = (uint)lVar7 & 0xf;
    DAT_100df5d4 = (uint)lVar7 & 0x10;
    lVar7 = __ftol();
    DAT_100df5f0 = (uint)lVar7 & 0xf;
    DAT_100df5d8 = (uint)lVar7 & 0x10;
    lVar7 = __ftol();
    _DAT_100df5f4 = (uint)lVar7 & 0xf;
    _DAT_100df5dc = (uint)lVar7 & 0x10;
    lVar7 = __ftol();
    _DAT_100df5f8 = (uint)lVar7 & 0xf;
    _DAT_100df5e0 = (uint)lVar7 & 0x10;
    lVar7 = __ftol();
    _DAT_100df5fc = (uint)lVar7 & 0xf;
    _DAT_100df5e4 = (uint)lVar7 & 0x10;
    lVar7 = __ftol();
    _DAT_100df600 = (uint)lVar7 & 0xf;
    _DAT_100df5e8 = (uint)lVar7 & 0x10;
  }
  DAT_100df6fc = 0x4c0;
  iVar4 = 0;
  do {
    if (*(int *)((int)&DAT_100df5ec + iVar4) != 0) {
      DAT_100df6fc = DAT_100df6fc | *(uint *)((int)&DAT_1009448c + iVar4);
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0x18);
  return;
}

/* 10027ca0  FUN_10027ca0  (319 bytes)
 * undefined FUN_10027ca0(void)
 * called by: HUD_UpdateClientData
 */
void FUN_10027ca0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = DAT_100df6d0;
  uVar1 = DAT_100df638;
  if (DAT_100df62c != 0) {
    iVar2 = 0;
    if (0 < DAT_100df61c) {
      do {
        uVar4 = 1 << ((byte)iVar2 & 0x1f);
        uVar1 = uVar4 & uVar3;
        if ((uVar1 != 0) && ((DAT_100df67c & uVar4) == 0)) {
          (*gEngfuncs.Key_Event)(((3 < iVar2) - 1 & 0xfffffffc) + 0xcf + iVar2,1);
        }
        if ((uVar1 == 0) && ((DAT_100df67c & uVar4) != 0)) {
          (*gEngfuncs.Key_Event)(((3 < iVar2) - 1 & 0xfffffffc) + 0xcf + iVar2,0);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_100df61c);
    }
    DAT_100df67c = uVar3;
    uVar1 = DAT_100df638;
    if (DAT_100df710 != 0) {
      uVar1 = 0;
      if (DAT_100df6d8 != 0xffff) {
        if (DAT_100df6d8 == 0) {
          uVar1 = 1;
        }
        else if (DAT_100df6d8 == 9000) {
          uVar1 = 2;
        }
        else if (DAT_100df6d8 == 18000) {
          uVar1 = 4;
        }
        else if (DAT_100df6d8 == 27000) {
          uVar1 = 8;
        }
      }
      iVar2 = 0;
      do {
        uVar3 = 1 << ((byte)iVar2 & 0x1f);
        if (((uVar3 & uVar1) != 0) && ((DAT_100df638 & uVar3) == 0)) {
          (*gEngfuncs.Key_Event)(iVar2 + 0xeb,1);
        }
        if (((uVar3 & uVar1) == 0) && ((DAT_100df638 & uVar3) != 0)) {
          (*gEngfuncs.Key_Event)(iVar2 + 0xeb,0);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
    }
  }
  DAT_100df638 = uVar1;
  return;
}

/* 10027de0  FUN_10027de0  (96 bytes)
 * undefined4 FUN_10027de0(void)
 * called by: FUN_10027e40
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10027de0(void)

{
  MMRESULT MVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_100df6b0;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_100df6b0 = 0x34;
  DAT_100df6b4 = DAT_100df6fc;
  MVar1 = joyGetPosEx(DAT_100df6e8,(LPJOYINFOEX)&DAT_100df6b0);
  if (MVar1 == 0) {
    if (*(float *)(DAT_100df664 + 0xc) != 0.0) {
      _DAT_100df6c8 = _DAT_100df6c8 + 100;
    }
    return 1;
  }
  return 0;
}

/* 10027e40  FUN_10027e40  (1166 bytes)
 * undefined FUN_10027e40(float param_1, int param_2)
 * called by: FUN_100282e0
 */
void __cdecl FUN_10027e40(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float fStack_1c;
  float local_c;
  float fStack_8;
  
  (*gEngfuncs.GetViewAngles)(&local_c);
  if (DAT_100df6a4 != 1) {
    FUN_10027b00();
    DAT_100df6a4 = 1;
  }
  if (((DAT_100df62c != 0) && (*(float *)(DAT_100df620 + 0xc) != 0.0)) &&
     (iVar4 = FUN_10027de0(), iVar4 == 1)) {
    if ((DAT_100df3e0 & 1) == 0) {
      fStack_1c = 1.0;
    }
    else {
      fStack_1c = *(float *)(DAT_100df3e4 + 0xc);
    }
    fVar2 = fStack_1c * param_1;
    iVar4 = 0;
    do {
      fVar5 = (float10)**(uint **)((int)&DAT_100df604 + iVar4) - (float10)32768.0;
      fVar1 = (float)fVar5;
      if ((*(float *)(DAT_100df660 + 0xc) != 0.0) && (*(int *)((int)&DAT_100df5ec + iVar4) == 4)) {
        __ftol();
        fVar5 = (float10)FUN_1006c490();
        fVar5 = fVar5 * (float10)300.0;
        if ((float10)14000.0 < fVar5) {
          fVar5 = (float10)14000.0;
        }
        if (fVar1 <= 0.0) {
          fVar5 = -fVar5;
        }
      }
      fVar1 = (float)(fVar5 * (float10)3.0517578125e-05);
      switch(*(undefined4 *)((int)&DAT_100df5ec + iVar4)) {
      case 1:
        if ((*(float *)(DAT_100df68c + 0xc) == 0.0) && ((DAT_100df520 & 1) != 0)) {
          fVar3 = fVar1;
          if (fVar1 <= 0.0) {
            fVar3 = -fVar1;
          }
          if (fVar3 <= *(float *)(DAT_100df6e4 + 0xc)) {
            fVar1 = *(float *)(DAT_100df434 + 0xc);
joined_r0x10028273:
            if (fVar1 != 0.0) break;
          }
          else if (0.0 <= *(float *)(DAT_100df3d0 + 0xc)) {
            local_c = fVar1 * *(float *)(DAT_100df704 + 0xc) * *(float *)(DAT_100df5ac + 0xc) *
                      fVar2 + local_c;
          }
          else {
            local_c = local_c - fVar1 * *(float *)(DAT_100df704 + 0xc) *
                                *(float *)(DAT_100df5ac + 0xc) * fVar2;
          }
LAB_10028275:
          FUN_100672f0();
        }
        else {
          fVar3 = fVar1;
          if (fVar1 <= 0.0) {
            fVar3 = -fVar1;
          }
          if (*(float *)(DAT_100df688 + 0xc) < fVar3) {
            *(float *)(param_2 + 0x10) =
                 fVar1 * *(float *)(DAT_100df690 + 0xc) * *(float *)(DAT_100df418 + 0xc) * fStack_1c
                 + *(float *)(param_2 + 0x10);
          }
        }
        break;
      case 2:
        if ((DAT_100df520 & 1) != 0) {
          fVar3 = fVar1;
          if (fVar1 <= 0.0) {
            fVar3 = -fVar1;
          }
          if (fVar3 <= *(float *)(DAT_100df6e4 + 0xc)) {
            fVar1 = *(float *)(DAT_100df434 + 0xc);
            goto joined_r0x10028273;
          }
          if (*(int *)((int)&DAT_100df5d4 + iVar4) == 0) {
            local_c = fVar1 * *(float *)(DAT_100df704 + 0xc) * *(float *)(DAT_100df5ac + 0xc) *
                      fVar2 + local_c;
          }
          else {
            local_c = fVar1 * *(float *)(DAT_100df704 + 0xc) * fStack_1c * 180.0 + local_c;
          }
          goto LAB_10028275;
        }
        break;
      case 3:
        fVar3 = fVar1;
        if (fVar1 <= 0.0) {
          fVar3 = -fVar1;
        }
        if (*(float *)(DAT_100df6a8 + 0xc) < fVar3) {
          *(float *)(param_2 + 0x14) =
               fVar1 * *(float *)(DAT_100df680 + 0xc) * *(float *)(DAT_100df548 + 0xc) * fStack_1c +
               *(float *)(param_2 + 0x14);
        }
        break;
      case 4:
        if (((DAT_100df530 & 1) == 0) &&
           ((*(float *)(DAT_100df45c + 0xc) == 0.0 || ((DAT_100df520 & 1) == 0)))) {
          fVar3 = fVar1;
          if (fVar1 <= 0.0) {
            fVar3 = -fVar1;
          }
          if (*(float *)(DAT_100df694 + 0xc) < fVar3) {
            if (*(int *)((int)&DAT_100df5d4 + iVar4) == 0) {
              fStack_8 = fVar1 * *(float *)(DAT_100df684 + 0xc) * *(float *)(DAT_100df448 + 0xc) *
                         fVar2 + fStack_8;
            }
            else {
              fStack_8 = fVar1 * *(float *)(DAT_100df684 + 0xc) * fStack_1c * 180.0 + fStack_8;
            }
          }
        }
        else {
          fVar3 = fVar1;
          if (fVar1 <= 0.0) {
            fVar3 = -fVar1;
          }
          if (*(float *)(DAT_100df6a8 + 0xc) < fVar3) {
            *(float *)(param_2 + 0x14) =
                 *(float *)(param_2 + 0x14) -
                 fVar1 * *(float *)(DAT_100df680 + 0xc) * *(float *)(DAT_100df548 + 0xc) * fStack_1c
            ;
          }
        }
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < 0x18);
    if (local_c <= 89.0) {
      if (local_c < -89.0) {
        local_c = -89.0;
      }
    }
    else {
      local_c = 89.0;
    }
    (*gEngfuncs.SetViewAngles)(&local_c);
  }
  return;
}

/* 100282e0  FUN_100282e0  (51 bytes)
 * undefined FUN_100282e0(float param_1, int param_2)
 * called by: CL_CreateMove
 */
void __cdecl FUN_100282e0(float param_1,int param_2)

{
  if ((DAT_100df394 == 0) && (DAT_100df700 != 0)) {
    FUN_100274d0(param_1,param_2);
  }
  FUN_10027e40(param_1,param_2);
  return;
}

