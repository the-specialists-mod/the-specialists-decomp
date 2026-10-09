/* client.dll - unnamed_10022af0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

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
 * called by: FUN_1005fb90
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
 */
void __cdecl FUN_10022bf0(int param_1)

{
  if (DAT_100df2b0 != (void *)0x0) {
    FUN_100228d0(DAT_100df2b0,param_1);
  }
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
  (*gEngfuncs.pfnAddCommand)(s_specmode_10093b88,(function *)&LAB_10022c10);
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
 * called by: FUN_10023380
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

/* 10025370  FUN_10025370  (596 bytes)
 * undefined FUN_10025370(void)
 * called by: FUN_10026b30
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10025370(void)

{
  (*gEngfuncs.pfnAddCommand)(s__campitchup_10093fdc,(function *)&LAB_10025260);
  (*gEngfuncs.pfnAddCommand)(s__campitchup_10093fd0,(function *)&LAB_10025270);
  (*gEngfuncs.pfnAddCommand)(s__campitchdown_10093fc0,(function *)&LAB_10025280);
  (*gEngfuncs.pfnAddCommand)(s__campitchdown_10093fb0,(function *)&LAB_10025290);
  (*gEngfuncs.pfnAddCommand)(s__camyawleft_10093fa4,(function *)&LAB_100252a0);
  (*gEngfuncs.pfnAddCommand)(s__camyawleft_10093f98,(function *)&LAB_100252b0);
  (*gEngfuncs.pfnAddCommand)(s__camyawright_10093f88,(function *)&LAB_100252c0);
  (*gEngfuncs.pfnAddCommand)(s__camyawright_10093f78,(function *)&LAB_100252d0);
  (*gEngfuncs.pfnAddCommand)(s__camin_10093f70,(function *)&LAB_100252e0);
  (*gEngfuncs.pfnAddCommand)(s__camin_10093f68,(function *)&LAB_100252f0);
  (*gEngfuncs.pfnAddCommand)(s__camout_10093f60,(function *)&LAB_10025300);
  (*gEngfuncs.pfnAddCommand)(s__camout_10093f58,(function *)&LAB_10025310);
  (*gEngfuncs.pfnAddCommand)(s_thirdperson_10093f4c,FUN_1004fe00);
  (*gEngfuncs.pfnAddCommand)(s_firstperson_10093f40,FUN_10025320);
  (*gEngfuncs.pfnAddCommand)(s__cammousemove_10093f30,(function *)&LAB_100255d0);
  (*gEngfuncs.pfnAddCommand)(s__cammousemove_10093f20,(function *)&LAB_10025670);
  (*gEngfuncs.pfnAddCommand)(s__camdistance_10093f10,(function *)&LAB_10025680);
  (*gEngfuncs.pfnAddCommand)(s__camdistance_10093f00,(function *)&LAB_10025700);
  (*gEngfuncs.pfnAddCommand)(s_snapto_10093ef8,(function *)&LAB_10025340);
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
 * called by: FUN_10026a40
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
  
  (*gEngfuncs.pfnAddCommand)(s__moveup_10094474,(function *)&LAB_10025d20);
  (*gEngfuncs.pfnAddCommand)(s__moveup_1009446c,(function *)&LAB_10025d30);
  (*gEngfuncs.pfnAddCommand)(s__movedown_10094460,(function *)&LAB_10025d40);
  (*gEngfuncs.pfnAddCommand)(s__movedown_10094454,(function *)&LAB_10025d50);
  (*gEngfuncs.pfnAddCommand)(s__left_1009444c,(function *)&LAB_10025d60);
  (*gEngfuncs.pfnAddCommand)(s__left_10094444,(function *)&LAB_10025d70);
  (*gEngfuncs.pfnAddCommand)(s__right_1009443c,(function *)&LAB_10025d80);
  (*gEngfuncs.pfnAddCommand)(s__right_10094434,(function *)&LAB_10025d90);
  (*gEngfuncs.pfnAddCommand)(s__forward_10094064,(function *)&LAB_10025da0);
  (*gEngfuncs.pfnAddCommand)(s__forward_10094428,(function *)&LAB_10025dd0);
  (*gEngfuncs.pfnAddCommand)(&DAT_1009405c,(function *)&LAB_10025df0);
  (*gEngfuncs.pfnAddCommand)(s__back_10094420,(function *)&LAB_10025e20);
  (*gEngfuncs.pfnAddCommand)(s__lookup_10094418,(function *)&LAB_10025e40);
  (*gEngfuncs.pfnAddCommand)(s__lookup_10094410,(function *)&LAB_10025e50);
  (*gEngfuncs.pfnAddCommand)(s__lookdown_10094404,(function *)&LAB_10025e60);
  (*gEngfuncs.pfnAddCommand)(s__lookdown_100943f8,(function *)&LAB_10025e70);
  (*gEngfuncs.pfnAddCommand)(s__moveleft_10094050,(function *)&LAB_10025e80);
  (*gEngfuncs.pfnAddCommand)(s__moveleft_100943ec,(function *)&LAB_10025eb0);
  (*gEngfuncs.pfnAddCommand)(s__moveright_10094044,(function *)&LAB_10025ed0);
  (*gEngfuncs.pfnAddCommand)(s__moveright_100943e0,(function *)&LAB_10025f00);
  (*gEngfuncs.pfnAddCommand)(s__speed_100943d8,(function *)&LAB_10025f20);
  (*gEngfuncs.pfnAddCommand)(s__speed_100943d0,(function *)&LAB_10025f30);
  (*gEngfuncs.pfnAddCommand)(s__attack_1009408c,(function *)&LAB_10026210);
  (*gEngfuncs.pfnAddCommand)(s__attack_100943c8,(function *)&LAB_10026240);
  (*gEngfuncs.pfnAddCommand)(s__attack2_10094080,(function *)&LAB_10025f40);
  (*gEngfuncs.pfnAddCommand)(s__attack2_100943bc,(function *)&LAB_10025fc0);
  (*gEngfuncs.pfnAddCommand)(&DAT_100943b4,(function *)&LAB_10026030);
  (*gEngfuncs.pfnAddCommand)(&DAT_100943ac,(function *)&LAB_10026040);
  (*gEngfuncs.pfnAddCommand)(&DAT_1009403c,(function *)&LAB_10026050);
  (*gEngfuncs.pfnAddCommand)(s__jump_100943a4,(function *)&LAB_10026080);
  (*gEngfuncs.pfnAddCommand)(s_impulse_1009439c,(function *)&LAB_10026250);
  (*gEngfuncs.pfnAddCommand)(s__klook_10094394,(function *)&LAB_10025ce0);
  (*gEngfuncs.pfnAddCommand)(s__klook_1009438c,(function *)&LAB_10025cf0);
  (*gEngfuncs.pfnAddCommand)(s__jlook_10094384,(function *)&LAB_10025d00);
  (*gEngfuncs.pfnAddCommand)(s__jlook_1009437c,(function *)&LAB_10025d10);
  (*gEngfuncs.pfnAddCommand)(s__duck_10094374,(function *)&LAB_10026090);
  (*gEngfuncs.pfnAddCommand)(s__duck_1009436c,(function *)&LAB_100260b0);
  (*gEngfuncs.pfnAddCommand)(s__reload_10094070,(function *)&LAB_100260c0);
  (*gEngfuncs.pfnAddCommand)(s__reload_10094364,(function *)&LAB_100260e0);
  (*gEngfuncs.pfnAddCommand)(s__alt1_1009435c,(function *)&LAB_100260f0);
  (*gEngfuncs.pfnAddCommand)(s__alt1_10094354,(function *)&LAB_10026100);
  (*gEngfuncs.pfnAddCommand)(&DAT_10094078,(function *)&LAB_10026110);
  (*gEngfuncs.pfnAddCommand)(s__alt2_1009434c,(function *)&LAB_10026180);
  (*gEngfuncs.pfnAddCommand)(s__score_10094344,(function *)&LAB_10026270);
  (*gEngfuncs.pfnAddCommand)(s__score_1009433c,(function *)&LAB_10026290);
  (*gEngfuncs.pfnAddCommand)(s__showscores_10094330,(function *)&LAB_10026270);
  (*gEngfuncs.pfnAddCommand)(s__showscores_10094324,(function *)&LAB_10026290);
  (*gEngfuncs.pfnAddCommand)(s__graph_1009431c,(function *)&LAB_100261f0);
  (*gEngfuncs.pfnAddCommand)(s__graph_10094314,(function *)&LAB_10026200);
  (*gEngfuncs.pfnAddCommand)(s__break_1009430c,(function *)&LAB_10025cc0);
  (*gEngfuncs.pfnAddCommand)(s__break_10094304,(function *)&LAB_10025cd0);
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

/* 100285a0  FUN_100285a0  (47 bytes)
 * undefined4 FUN_100285a0(int * param_1)
 */
undefined4 __fastcall FUN_100285a0(int *param_1)

{
  FUN_10020a40(&DAT_100cf920,(int)param_1);
  (*gEngfuncs.pfnHookUserMsg)(s_ShowMenu_1009472c,(pfnUserMsgHook)&LAB_10028580);
  (**(code **)(*param_1 + 0x18))();
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

/* 100289b0  FUN_100289b0  (145 bytes)
 * float10 FUN_100289b0(float param_1, float param_2, float param_3, float param_4)
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
 * called by: FUN_10028eb0
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
 * called by: FUN_10028eb0
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
            pTVar3 = (*(gEngfuncs.pEfxAPI)->CL_TentEntAllocCustom)
                               (avStack_14,model,0,(callback *)&LAB_10029710);
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
 * called by: FUN_100240b0, FUN_1002bb70, FUN_1002be80, FUN_1002c790, FUN_1002d1b0, FUN_1002daf0, FUN_1002dc10, FUN_1002e1c0, FUN_1003d600, FUN_10048840, FUN_10050080, FUN_100524c0, ... (16 total)
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

/* 1002ea50  FUN_1002ea50  (76 bytes)
 * undefined4 FUN_1002ea50(int * param_1)
 */
undefined4 __fastcall FUN_1002ea50(int *param_1)

{
  FUN_10020a40(&DAT_100cf920,(int)param_1);
  (*gEngfuncs.pfnHookUserMsg)(s_SayText_10094c7c,(pfnUserMsgHook)&LAB_1002ea30);
  (**(code **)(*param_1 + 0x18))();
  (*gEngfuncs.pfnRegisterVariable)(s__hud_saytext_time_10094c67 + 1,&DAT_10093094,0);
  param_1[4] = param_1[4] | 2;
  return 1;
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

/* 1002f1a0  FUN_1002f1a0  (111 bytes)
 * undefined4 FUN_1002f1a0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
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

/* 1002f3c0  FUN_1002f3c0  (84 bytes)
 * undefined4 FUN_1002f3c0(int * param_1)
 */
undefined4 __fastcall FUN_1002f3c0(int *param_1)

{
  FUN_10020a40(&DAT_100cf920,(int)param_1);
  (*gEngfuncs.pfnHookUserMsg)(s_StatusText_10094cdc,(pfnUserMsgHook)&LAB_1002f380);
  (*gEngfuncs.pfnHookUserMsg)(s_StatusValue_10094cd0,(pfnUserMsgHook)&LAB_1002f3a0);
  (**(code **)(*param_1 + 0x14))();
  (*gEngfuncs.pfnRegisterVariable)(s_hud_centerid_10094cc0,&DAT_10092bf4,1);
  return 1;
}

/* 1002f480  FUN_1002f480  (610 bytes)
 * undefined FUN_1002f480(int param_1)
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

/* 1002f850  FUN_1002f850  (128 bytes)
 * undefined4 FUN_1002f850(undefined4 param_1, undefined4 param_2, undefined4 param_3)
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
 * called by: FUN_10024160
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
 * called by: FUN_1002d7e0
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

