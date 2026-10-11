/* mp.dll - unnamed_10003bf0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10003bf0  FUN_10003bf0  (700 bytes)
 * undefined FUN_10003bf0(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl FUN_10003bf0(undefined1 *param_1)

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
  pcVar4 = s_Combat_Knife_1009a9c0;
  do {
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
  pcVar4 = s_sprites_weapons_knife_spr_1009a5d0;
  do {
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
  pcVar4 = s_models_v_knife_mdl_1009a5bc;
  do {
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
  pcVar4 = s_models_p_knife_mdl_1009a5a8;
  do {
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
  pcVar4 = &DAT_100a9398;
  do {
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
  pcVar4 = s_models_w_knife_mdl_1009a594;
  do {
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
  pcVar4 = &DAT_100a9398;
  do {
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
  pcVar4 = &DAT_100a9398;
  do {
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
  pcVar4 = &DAT_100a9398;
  do {
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

/* 100088a0  FUN_100088a0  (17 bytes)
 * undefined FUN_100088a0()
 */
void FUN_100088a0(void)

{
  (*g_engfuncs.pfnAlertMessage)(at_console,s_SV_StudioSetupBones_called__1009bde4);
  return;
}

/* 100089a0  FUN_100089a0  (91 bytes)
 * int FUN_100089a0(int param_1, byte.conflict * param_2)
 * called by: CBaseAnimating::LookupSequence
 */
int __cdecl FUN_100089a0(int param_1,byte_conflict *param_2)

{
  byte_conflict *pbVar1;
  uint uVar2;
  void *this;
  void *extraout_ECX;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  this = *(void **)(param_1 + 0xa4);
  pbVar1 = (byte_conflict *)(*(int *)(param_1 + 0xa8) + param_1);
  iVar3 = 0;
  if (0 < (int)this) {
    do {
      uVar2 = FUN_100887b0(this,pbVar1,param_2);
      if (uVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      pbVar1 = pbVar1 + 0xb0;
      this = extraout_ECX;
    } while (iVar3 < *(int *)(param_1 + 0xa4));
  }
  return -1;
}

/* 10008f60  FUN_10008f60  (48 bytes)
 * undefined FUN_10008f60(int param_1)
 * called by: CFuncWallToggle::Use
 */
void __fastcall FUN_10008f60(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 4;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) & 0xffffff7f;
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  return;
}

/* 10008f90  FUN_10008f90  (19 bytes)
 * bool FUN_10008f90(int param_1)
 * called by: CFuncWallToggle::Use
 */
bool __fastcall FUN_10008f90(int param_1)

{
  return *(int *)(*(int *)(param_1 + 4) + 0x10c) != 0;
}

/* 1000c220  FUN_1000c220  (84 bytes)
 * undefined4 FUN_1000c220(int param_1)
 * called by: CBaseButton::ButtonTouch, CBaseButton::TakeDamage
 */
undefined4 __fastcall FUN_1000c220(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if ((iVar1 != 2) && (iVar1 != 3)) {
    if (iVar1 != 0) {
      return 1;
    }
    if ((((*(int *)(param_1 + 0xf0) != 0) ||
         ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 0x20) != 0)) &&
        ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 0x20) != 0)) && (*(int *)(param_1 + 0xf0) == 0)
       ) {
      return 2;
    }
  }
  return 0;
}

/* 1000cc70  FUN_1000cc70  (63 bytes)
 * undefined FUN_1000cc70(int param_1)
 * called by: FUN_1000cdd0
 */
void __fastcall FUN_1000cc70(int param_1)

{
  EMIT_SOUND_DYN(gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1e8),
                 *(undefined4 *)(*(int *)(param_1 + 4) + 0x208),2,
                 gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1e8),0x3f800000,
                 0x3f4ccccd,0);
  return;
}

/* 1000cd10  FUN_1000cd10  (187 bytes)
 * undefined FUN_1000cd10(float param_1, int param_2)
 * called by: CMomentaryRotButton::Return, CMomentaryRotButton::Use
 */
void __thiscall FUN_1000cd10(void *this,float param_1,int param_2)

{
  byte bVar1;
  void *this_00;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  edict_t *pEdictStartSearchAfter;
  bool bVar5;
  
  pEdictStartSearchAfter = (edict_t *)0x0;
  do {
    pEdictStartSearchAfter =
         (*g_engfuncs.pfnFindEntityByString)
                   (pEdictStartSearchAfter,s_target_1009c398,
                    gpGlobals->pStringBase + *(int *)(*(int *)((int)this + 4) + 0x1c8));
    if (pEdictStartSearchAfter == (edict_t *)0x0) {
      return;
    }
    iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
    if (iVar2 == 0) {
      return;
    }
    pcVar4 = s_momentary_rot_button_1009c6b8;
    pbVar3 = (byte *)(gpGlobals->pStringBase + (pEdictStartSearchAfter->v).classname);
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_1000cd93:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_1000cd98;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_1000cd93;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_1000cd98:
    if ((iVar2 == 0) && (this_00 = pEdictStartSearchAfter->pvPrivateData, this_00 != (void *)0x0)) {
      if (param_2 == 0) {
        FUN_1000d0a0(this_00,param_1);
      }
      else {
        FUN_1000cdd0(this_00,param_1);
      }
    }
  } while( true );
}

/* 1000cdd0  FUN_1000cdd0  (375 bytes)
 * undefined FUN_1000cdd0(float param_1)
 * called by: FUN_1000cd10
 */
void __thiscall FUN_1000cdd0(void *this,float param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  bVar4 = *(int *)((int)this + 0xf0) == 0;
  if (bVar4) {
    *(int *)((int)this + 0xf4) = -*(int *)((int)this + 0xf4);
  }
  *(undefined4 *)((int)this + 0xf0) = 1;
  *(float *)(*(int *)((int)this + 4) + 0x104) = *(float *)(*(int *)((int)this + 4) + 0x100) + 0.1;
  if ((*(int *)((int)this + 0xf4) < 1) || (param_1 < 1.0)) {
    if ((-1 < *(int *)((int)this + 0xf4)) || (0.0 < param_1)) {
      if (bVar4) {
        FUN_1000cc70((int)this);
      }
      iVar2 = *(int *)((int)this + 4);
      if (*(float *)(iVar2 + 0x100) <= *(float *)(iVar2 + 0x104)) {
        fVar1 = *(float *)(iVar2 + 0x104);
      }
      else {
        fVar1 = *(float *)(iVar2 + 0x100);
      }
      *(float *)(iVar2 + 0x104) = fVar1 + 0.1;
      iVar2 = *(int *)((int)this + 4);
      fVar1 = (float)*(int *)((int)this + 0xf4) * *(float *)(iVar2 + 0x1f8);
      *(float *)(iVar2 + 0x5c) = fVar1 * *(float *)(iVar2 + 0x44);
      *(float *)(iVar2 + 0x60) = fVar1 * *(float *)(iVar2 + 0x48);
      *(float *)(iVar2 + 100) = fVar1 * *(float *)(iVar2 + 0x4c);
      *(code **)((int)this + 0x10) = CMomentaryRotButton::Off;
      return;
    }
    iVar2 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar2 + 0x5c) = DAT_100ae498;
    *(undefined4 *)(iVar2 + 0x60) = DAT_100ae49c;
    puVar3 = (undefined4 *)((int)this + 0xfc);
    *(undefined4 *)(iVar2 + 100) = DAT_100ae4a0;
  }
  else {
    iVar2 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar2 + 0x5c) = DAT_100ae498;
    *(undefined4 *)(iVar2 + 0x60) = DAT_100ae49c;
    puVar3 = (undefined4 *)((int)this + 0x108);
    *(undefined4 *)(iVar2 + 100) = DAT_100ae4a0;
  }
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar2 + 0x50) = *puVar3;
  *(undefined4 *)(iVar2 + 0x54) = puVar3[1];
  *(undefined4 *)(iVar2 + 0x58) = puVar3[2];
  return;
}

/* 1000cf50  FUN_1000cf50  (111 bytes)
 * undefined FUN_1000cf50(undefined4 param_1)
 * called by: CMomentaryRotButton::Return, CMomentaryRotButton::Use
 */
void __thiscall FUN_1000cf50(void *this,undefined4 param_1)

{
  int iVar1;
  edict_t *pEdictStartSearchAfter;
  
  if (*(int *)(*(int *)((int)this + 4) + 0x1c8) != 0) {
    pEdictStartSearchAfter = (edict_t *)0x0;
    while (pEdictStartSearchAfter =
                (*g_engfuncs.pfnFindEntityByString)
                          (pEdictStartSearchAfter,s_targetname_1009c68c,
                           gpGlobals->pStringBase + *(int *)(*(int *)((int)this + 4) + 0x1c8)),
          pEdictStartSearchAfter != (edict_t *)0x0) {
      iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
      if (iVar1 == 0) {
        return;
      }
      if (pEdictStartSearchAfter->pvPrivateData != (int *)0x0) {
        (**(code **)(*(int *)pEdictStartSearchAfter->pvPrivateData + 0xd8))(this,this,2,param_1);
      }
    }
  }
  return;
}

/* 1000d0a0  FUN_1000d0a0  (212 bytes)
 * undefined FUN_1000d0a0(float param_1)
 * called by: FUN_1000cd10
 */
void __thiscall FUN_1000d0a0(void *this,float param_1)

{
  int iVar1;
  float fVar2;
  
  if (param_1 <= 0.0) {
    iVar1 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar1 + 0x5c) = DAT_100ae498;
    *(undefined4 *)(iVar1 + 0x60) = DAT_100ae49c;
    *(undefined4 *)(iVar1 + 100) = DAT_100ae4a0;
    iVar1 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)((int)this + 0xfc);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)((int)this + 0x100);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)((int)this + 0x104);
    *(undefined4 *)(*(int *)((int)this + 4) + 0x104) = 0xbf800000;
    *(undefined4 *)((int)this + 0x10) = 0;
    return;
  }
  iVar1 = *(int *)((int)this + 4);
  fVar2 = -*(float *)((int)this + 0xf8);
  *(float *)(iVar1 + 0x5c) = fVar2 * *(float *)(iVar1 + 0x44);
  *(float *)(iVar1 + 0x60) = fVar2 * *(float *)(iVar1 + 0x48);
  *(float *)(iVar1 + 100) = fVar2 * *(float *)(iVar1 + 0x4c);
  *(float *)(*(int *)((int)this + 4) + 0x104) = *(float *)(*(int *)((int)this + 4) + 0x100) + 0.1;
  return;
}

/* 1000e440  FUN_1000e440  (12 bytes)
 * bool FUN_1000e440(uint * param_1)
 * called by: CBaseButton::TakeDamage, CBaseDoor::BreakableRespawn, CBaseDoor::DoorActivate, CBaseDoor::DoorGoUp, CBaseDoor::Spawn, CBaseDoor::TraceAttack, CBaseMonster::TakeDamage, CBasePlayer::Killed, CBasePlayer::PlayerUse, CBasePlayer::PostThink, CBasePlayer::StartObserver, CBreakable::BreakableRespawn, ... (22 total)
 */
bool __fastcall FUN_1000e440(uint *param_1)

{
  uint uVar1;
  
  uVar1 = EHANDLE::Get(param_1);
  return uVar1 != 0;
}

/* 1000ece0  FUN_1000ece0  (137 bytes)
 * undefined4 FUN_1000ece0(int param_1)
 * called by: FUN_100425e0
 */
undefined4 __thiscall FUN_1000ece0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)(param_1 + 4);
  if ((((*(float *)(iVar2 + 0xc4) <= *(float *)(iVar1 + 0xd0)) &&
       (*(float *)(iVar2 + 200) <= *(float *)(iVar1 + 0xd4))) &&
      (*(float *)(iVar2 + 0xcc) <= *(float *)(iVar1 + 0xd8))) &&
     (((*(float *)(iVar1 + 0xc4) <= *(float *)(iVar2 + 0xd0) &&
       (*(float *)(iVar1 + 200) <= *(float *)(iVar2 + 0xd4))) &&
      (*(float *)(iVar1 + 0xcc) <= *(float *)(iVar2 + 0xd8))))) {
    return 1;
  }
  return 0;
}

/* 1000ed70  FUN_1000ed70  (90 bytes)
 * undefined FUN_1000ed70(int param_1)
 * called by: pfnRestore, pfnSpawn
 */
void __fastcall FUN_1000ed70(int param_1)

{
  *(uint *)(*(int *)(param_1 + 4) + 0x1a4) = *(uint *)(*(int *)(param_1 + 4) + 0x1a4) | 0x80000000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x104) = 0;
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  return;
}

/* 1000edd0  FUN_1000edd0  (15 bytes)
 * uint FUN_1000edd0(int param_1)
 * called by: CChangeLevel::ChangeList, CTSGameRules::Think
 */
uint __fastcall FUN_1000edd0(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x80000000;
}

/* 10011ae0  FUN_10011ae0  (112 bytes)
 * undefined FUN_10011ae0(undefined4 param_1)
 * called by: FUN_10011b50
 */
void __cdecl FUN_10011ae0(delta_s *param_1)

{
  DAT_1009c9b0 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_0__1009c990);
  DAT_1009c9d4 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_1__1009c9b4);
  DAT_1009c9f8 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_2__1009c9d8);
  DAT_1009ca1c = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_0__1009c9fc);
  DAT_1009ca40 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_1__1009ca20);
  DAT_1009ca64 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_2__1009ca44);
  return;
}

/* 10011b50  FUN_10011b50  (347 bytes)
 * undefined FUN_10011b50()
 */
void FUN_10011b50(delta_s *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_100a93cc == 0) {
    FUN_10011ae0(param_1);
    DAT_100a93cc = 1;
  }
  iVar1 = (*g_engfuncs.pfnGetCurrentPlayer)();
  if (*(int *)(param_3 + 4) + -1 == iVar1) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009c9b0);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009c9d4);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009c9f8);
  }
  if ((*(float *)(param_3 + 0xfc) != 0.0) && (*(float *)(param_3 + 0x100) != 0.0)) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009c9b0);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009c9d4);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009c9f8);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009ca1c);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009ca40);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009ca64);
  }
  if ((*(int *)(param_3 + 0x58) == 0xc) && (*(int *)(param_3 + 0x94) != 0)) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009c9b0);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009c9d4);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009c9f8);
    return;
  }
  if (*(int *)(param_3 + 0x94) != *(int *)(param_2 + 0x94)) {
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,DAT_1009c9b0);
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,DAT_1009c9d4);
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,DAT_1009c9f8);
  }
  return;
}

/* 10011cb0  FUN_10011cb0  (61 bytes)
 * undefined FUN_10011cb0(undefined4 param_1)
 * called by: FUN_10011cf0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10011cb0(delta_s *param_1)

{
  _DAT_1009ca88 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_0__1009ca68);
  _DAT_1009caac = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_1__1009ca8c);
  _DAT_1009cad0 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_2__1009cab0);
  return;
}

/* 10011cf0  FUN_10011cf0  (224 bytes)
 * undefined FUN_10011cf0()
 */
void FUN_10011cf0(delta_s *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_100a93d0 == 0) {
    FUN_10011cb0(param_1);
    DAT_100a93d0 = 1;
  }
  iVar1 = (*g_engfuncs.pfnGetCurrentPlayer)();
  if (*(int *)(param_3 + 4) + -1 == iVar1) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009c9b0);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009c9d4);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009c9f8);
  }
  if ((*(int *)(param_3 + 0x58) == 0xc) && (*(int *)(param_3 + 0x94) != 0)) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009c9b0);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009c9d4);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009c9f8);
    return;
  }
  if (*(int *)(param_3 + 0x94) != *(int *)(param_2 + 0x94)) {
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,DAT_1009c9b0);
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,DAT_1009c9d4);
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,DAT_1009c9f8);
  }
  return;
}

/* 10011dd0  FUN_10011dd0  (166 bytes)
 * undefined FUN_10011dd0(undefined4 param_1)
 * called by: FUN_10011e80
 */
void __cdecl FUN_10011dd0(delta_s *param_1)

{
  DAT_1009caf8 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_0__1009cad8);
  DAT_1009cb1c = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_1__1009cafc);
  DAT_1009cb40 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_2__1009cb20);
  DAT_1009cb64 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_0__1009cb44);
  DAT_1009cb88 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_1__1009cb68);
  DAT_1009cbac = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_2__1009cb8c);
  DAT_1009cbd0 = (*g_engfuncs.pfnDeltaFindField)(param_1,&DAT_1009cbb0);
  DAT_1009cbf4 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_sequence_1009cbd4);
  DAT_1009cc18 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_animtime_1009cbf8);
  return;
}

/* 10011e80  FUN_10011e80  (226 bytes)
 * undefined FUN_10011e80()
 */
void FUN_10011e80(delta_s *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_100a93d4 == 0) {
    FUN_10011dd0(param_1);
    DAT_100a93d4 = 1;
  }
  uVar1 = *(uint *)(param_3 + 0x48) & 0xf;
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009caf8);
      (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009cb1c);
      (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009cb40);
    }
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009cb64);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009cb88);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009cbac);
  }
  if ((uVar1 != 2) && (uVar1 != 1)) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009cbd0);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009cbf4);
  }
  lVar2 = __ftol();
  lVar3 = __ftol();
  if ((int)lVar2 == (int)lVar3) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009cc18);
  }
  return;
}

/* 100126d0  FUN_100126d0  (15 bytes)
 * undefined FUN_100126d0(undefined4 param_1, int param_2)
 * called by: Unwind@10088cd0, Unwind@10088cf0, Unwind@10088d10, Unwind@10088d30, Unwind@10088d50, Unwind@10088db0, Unwind@10088df0
 */
void __cdecl FUN_100126d0(undefined4 param_1,int param_2)

{
  *(uint *)(param_2 + 0x1a4) = *(uint *)(param_2 + 0x1a4) | 0x40000000;
  return;
}

/* 100127f0  FUN_100127f0  (251 bytes)
 * undefined FUN_100127f0(int param_1)
 * called by: FUN_100128f0, FUN_10012d30
 */
void __fastcall FUN_100127f0(int param_1)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = *(int *)(param_1 + 4);
  pfVar3 = (float *)(iVar1 + 0x20);
  if (1500.0 < SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                    *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) + *pfVar3 * *pfVar3)) {
    local_10 = SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                    *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) + *pfVar3 * *pfVar3);
    if (local_10 == 0.0) {
      fVar2 = 0.0;
      local_14 = 0.0;
      local_10 = 1.0;
    }
    else {
      local_10 = 1.0 / local_10;
      fVar2 = local_10 * *pfVar3;
      local_14 = local_10 * *(float *)(iVar1 + 0x24);
      local_10 = local_10 * *(float *)(iVar1 + 0x28);
    }
    *pfVar3 = fVar2 * 1500.0;
    *(float *)(iVar1 + 0x24) = local_14 * 1500.0;
    *(float *)(iVar1 + 0x28) = local_10 * 1500.0;
  }
  return;
}

/* 100128f0  FUN_100128f0  (1074 bytes)
 * undefined FUN_100128f0(int param_1)
 * called by: CBaseMonster::GibMonster
 */
void __cdecl FUN_100128f0(int param_1)

{
  void *this;
  edict_t *peVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  Vector *this_00;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Vector local_6c;
  Vector local_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  Vector VStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  Vector VStack_30;
  Vector VStack_24;
  Vector VStack_18;
  Vector VStack_c;
  
  this = (void *)FUN_10015970(0);
  if (DAT_100ae4a8 == 1) {
    FUN_10013d40(this,s_models_germangibs_mdl_1009d600);
    *(undefined4 *)(*(int *)((int)this + 4) + 0x114) = 0;
  }
  else {
    FUN_10013d40(this,s_models_hgibs_mdl_1009d5ec);
    *(undefined4 *)(*(int *)((int)this + 4) + 0x114) = 0;
  }
  if (param_1 == 0) goto LAB_10012d15;
  local_60.x = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 8);
  local_60.y = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0xc);
  local_60.z = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x10);
  Vector::Vector(&local_6c,&local_60.x);
  iVar2 = *(int *)((int)this + 4);
  *(float *)(iVar2 + 8) = local_6c.x;
  *(float *)(iVar2 + 0xc) = local_6c.y;
  *(float *)(iVar2 + 0x10) = local_6c.z;
  peVar1 = (*g_engfuncs.pfnFindClientInPVS)(*(edict_t **)(*(int *)((int)this + 4) + 0x208));
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,100);
  if ((iVar2 < 6) && (peVar1 != (edict_t *)0x0)) {
    fStack_54 = (peVar1->v).view_ofs[0] + (peVar1->v).origin[0];
    fStack_50 = (peVar1->v).view_ofs[1] + (peVar1->v).origin[1];
    fStack_4c = (peVar1->v).view_ofs[2] + (peVar1->v).origin[2];
    Vector::Vector(&VStack_48,&fStack_54);
    iVar2 = *(int *)((int)this + 4);
    fStack_3c = VStack_48.x - *(float *)(iVar2 + 8);
    fStack_38 = VStack_48.y - *(float *)(iVar2 + 0xc);
    fStack_34 = VStack_48.z - *(float *)(iVar2 + 0x10);
    Vector::Vector(&local_6c,&fStack_3c);
    fVar9 = SQRT(local_6c.x * local_6c.x + local_6c.y * local_6c.y + local_6c.z * local_6c.z);
    if (fVar9 == 0.0) {
      fVar11 = 1.0;
      fVar10 = 0.0;
      fVar9 = 0.0;
      this_00 = &VStack_18;
    }
    else {
      fVar9 = 1.0 / fVar9;
      fVar11 = local_6c.z * fVar9;
      fVar10 = local_6c.y * fVar9;
      fVar9 = local_6c.x * fVar9;
      this_00 = &VStack_c;
    }
    puVar3 = (undefined4 *)Vector::Vector(this_00,fVar9,fVar10,fVar11);
    Vector::Vector(&local_60,puVar3);
    VStack_30.x = local_60.x * 300.0;
    VStack_30.y = local_60.y * 300.0;
    VStack_30.z = local_60.z * 300.0;
    Vector::Vector(&VStack_24,&VStack_30.x);
    iVar2 = *(int *)((int)this + 4);
    *(float *)(iVar2 + 0x20) = VStack_24.x;
    *(float *)(iVar2 + 0x24) = VStack_24.y;
    *(float *)(iVar2 + 0x28) = VStack_24.z;
    *(float *)(*(int *)((int)this + 4) + 0x28) = *(float *)(*(int *)((int)this + 4) + 0x28) + 100.0;
  }
  else {
    fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(200.0,300.0);
    fVar6 = (float10)(*g_engfuncs.pfnRandomFloat)(-100.0,100.0);
    fVar7 = (float10)(*g_engfuncs.pfnRandomFloat)(-100.0,100.0);
    iVar2 = *(int *)((int)this + 4);
    local_6c.x = (float)fVar7;
    *(float *)(iVar2 + 0x20) = local_6c.x;
    *(float *)(iVar2 + 0x24) = (float)fVar6;
    *(float *)(iVar2 + 0x28) = (float)fVar8;
    local_6c.y = (float)fVar6;
    local_6c.z = (float)fVar8;
  }
  fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(100.0,200.0);
  *(float *)(*(int *)((int)this + 4) + 0x5c) = (float)fVar8;
  fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(100.0,300.0);
  *(float *)(*(int *)((int)this + 4) + 0x60) = (float)fVar8;
  peVar1 = *(edict_t **)(param_1 + 0x208);
  if (peVar1 == (edict_t *)0x0) {
    peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar1 != (edict_t *)0x0) goto LAB_10012bcd;
    piVar4 = (int *)0x0;
  }
  else {
LAB_10012bcd:
    piVar4 = peVar1->pvPrivateData;
  }
  uVar5 = (**(code **)(*piVar4 + 0x5c))();
  *(undefined4 *)((int)this + 0x54) = uVar5;
  if (-50.0 < *(float *)(param_1 + 0x160)) {
    iVar2 = *(int *)((int)this + 4);
    VStack_24.x = *(float *)(iVar2 + 0x20) * 0.7;
    VStack_24.y = *(float *)(iVar2 + 0x24) * 0.7;
    VStack_24.z = *(float *)(iVar2 + 0x28) * 0.7;
    Vector::Vector(&VStack_30,&VStack_24.x);
    iVar2 = *(int *)((int)this + 4);
    *(float *)(iVar2 + 0x20) = VStack_30.x;
    *(float *)(iVar2 + 0x24) = VStack_30.y;
    *(float *)(iVar2 + 0x28) = VStack_30.z;
    FUN_100127f0((int)this);
    return;
  }
  iVar2 = *(int *)((int)this + 4);
  if (-200.0 < *(float *)(param_1 + 0x160)) {
    puVar3 = (undefined4 *)
             Vector::Vector(&VStack_c,*(float *)(iVar2 + 0x20) + *(float *)(iVar2 + 0x20),
                            *(float *)(iVar2 + 0x24) + *(float *)(iVar2 + 0x24),
                            *(float *)(iVar2 + 0x28) + *(float *)(iVar2 + 0x28));
    Vector::Vector(&VStack_24,puVar3);
    iVar2 = *(int *)((int)this + 4);
    *(float *)(iVar2 + 0x20) = VStack_24.x;
    *(float *)(iVar2 + 0x24) = VStack_24.y;
    *(float *)(iVar2 + 0x28) = VStack_24.z;
    FUN_100127f0((int)this);
    return;
  }
  puVar3 = (undefined4 *)
           Vector::Vector(&VStack_c,*(float *)(iVar2 + 0x20) * 4.0,*(float *)(iVar2 + 0x24) * 4.0,
                          *(float *)(iVar2 + 0x28) * 4.0);
  Vector::Vector(&VStack_24,puVar3);
  iVar2 = *(int *)((int)this + 4);
  *(float *)(iVar2 + 0x20) = VStack_24.x;
  *(float *)(iVar2 + 0x24) = VStack_24.y;
  *(float *)(iVar2 + 0x28) = VStack_24.z;
LAB_10012d15:
  FUN_100127f0((int)this);
  return;
}

/* 10012d30  FUN_10012d30  (1006 bytes)
 * undefined FUN_10012d30(int param_1, int param_2, int param_3)
 * called by: CBaseMonster::GibMonster, CBasePlayer::CheatImpulseCommands
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10012d30(int param_1,int param_2,int param_3)

{
  float fVar1;
  void *this;
  int iVar2;
  edict_t *peVar3;
  int *piVar4;
  undefined4 uVar5;
  float *pfVar6;
  float fVar7;
  float10 fVar8;
  char *pcVar9;
  int local_94;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (0 < param_2) {
    local_94 = param_2;
    do {
      this = (void *)FUN_10015970(0);
      if (DAT_100ae4a8 == 1) {
        pcVar9 = s_models_germangibs_mdl_1009d600;
LAB_10012da1:
        FUN_10013d40(this,pcVar9);
        iVar2 = (*g_engfuncs.pfnRandomLong)(0,3);
        *(int *)(*(int *)((int)this + 4) + 0x114) = iVar2;
      }
      else {
        if (param_3 == 0) {
          pcVar9 = s_models_agibs_mdl_1009d618;
          goto LAB_10012da1;
        }
        FUN_10013d40(this,s_models_hgibs_mdl_1009d5ec);
        iVar2 = (*g_engfuncs.pfnRandomLong)(1,5);
        *(int *)(*(int *)((int)this + 4) + 0x114) = iVar2;
      }
      if (param_1 != 0) {
        fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,1.0);
        *(float *)(*(int *)((int)this + 4) + 8) =
             (float)(fVar8 * (float10)*(float *)(param_1 + 0xf4) +
                    (float10)*(float *)(param_1 + 0xc4));
        fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,1.0);
        *(float *)(*(int *)((int)this + 4) + 0xc) =
             (float)(fVar8 * (float10)*(float *)(param_1 + 0xf8) +
                    (float10)*(float *)(param_1 + 200));
        fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,1.0);
        *(float *)(*(int *)((int)this + 4) + 0x10) =
             (float)(fVar8 * (float10)*(float *)(param_1 + 0xfc) +
                     (float10)*(float *)(param_1 + 0xcc) + (float10)1.0);
        fVar7 = _DAT_100ae4bc * -1.0;
        iVar2 = *(int *)((int)this + 4);
        fVar1 = _DAT_100ae4c0 * -1.0;
        *(float *)(iVar2 + 0x20) = _DAT_100ae4b8 * -1.0;
        *(float *)(iVar2 + 0x24) = fVar7;
        *(float *)(iVar2 + 0x28) = fVar1;
        iVar2 = *(int *)((int)this + 4);
        fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(-0.25,0.25);
        *(float *)(iVar2 + 0x20) = (float)(fVar8 + (float10)*(float *)(iVar2 + 0x20));
        iVar2 = *(int *)((int)this + 4);
        fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(-0.25,0.25);
        *(float *)(iVar2 + 0x24) = (float)(fVar8 + (float10)*(float *)(iVar2 + 0x24));
        iVar2 = *(int *)((int)this + 4);
        fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(-0.25,0.25);
        *(float *)(iVar2 + 0x28) = (float)(fVar8 + (float10)*(float *)(iVar2 + 0x28));
        fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(300.0,400.0);
        iVar2 = *(int *)((int)this + 4);
        fStack_14 = (float)(fVar8 * (float10)*(float *)(iVar2 + 0x24));
        fStack_10 = (float)(fVar8 * (float10)*(float *)(iVar2 + 0x28));
        *(float *)(iVar2 + 0x20) = (float)(fVar8 * (float10)*(float *)(iVar2 + 0x20));
        *(float *)(iVar2 + 0x24) = fStack_14;
        *(float *)(iVar2 + 0x28) = fStack_10;
        fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(100.0,200.0);
        *(float *)(*(int *)((int)this + 4) + 0x5c) = (float)fVar8;
        fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(100.0,300.0);
        *(float *)(*(int *)((int)this + 4) + 0x60) = (float)fVar8;
        peVar3 = *(edict_t **)(param_1 + 0x208);
        if ((peVar3 == (edict_t *)0x0) &&
           (peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar3 == (edict_t *)0x0)) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = peVar3->pvPrivateData;
        }
        uVar5 = (**(code **)(*piVar4 + 0x5c))();
        *(undefined4 *)((int)this + 0x54) = uVar5;
        if (*(float *)(param_1 + 0x160) <= -50.0) {
          iVar2 = *(int *)((int)this + 4);
          if (*(float *)(param_1 + 0x160) <= -200.0) {
            pfVar6 = (float *)(iVar2 + 0x20);
            fVar7 = *(float *)(iVar2 + 0x28) * 4.0;
            *pfVar6 = *(float *)(iVar2 + 0x20) * 4.0;
            *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) * 4.0;
            goto LAB_10013093;
          }
          *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) + *(float *)(iVar2 + 0x20);
          *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + *(float *)(iVar2 + 0x24);
          *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + *(float *)(iVar2 + 0x28);
        }
        else {
          iVar2 = *(int *)((int)this + 4);
          pfVar6 = (float *)(iVar2 + 0x20);
          fVar7 = *(float *)(iVar2 + 0x28) * 0.7;
          *pfVar6 = *pfVar6 * 0.7;
          *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) * 0.7;
LAB_10013093:
          pfVar6[2] = fVar7;
        }
        *(undefined4 *)(*(int *)((int)this + 4) + 0x10c) = 2;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_c = 0;
        uStack_8 = 0;
        uStack_4 = 0;
        UTIL_SetSize(*(int *)((int)this + 4),&uStack_c,&uStack_24);
      }
      FUN_100127f0((int)this);
      local_94 = local_94 + -1;
    } while (local_94 != 0);
  }
  return;
}

/* 100135f0  FUN_100135f0  (48 bytes)
 * undefined4 FUN_100135f0(int param_1)
 * called by: CBaseMonster::Killed
 */
undefined4 __thiscall FUN_100135f0(void *this,int param_1)

{
  if (param_1 == 0) {
    if (*(float *)(*(int *)((int)this + 4) + 0x160) < -30.0) {
      return 1;
    }
  }
  else if (param_1 == 2) {
    return 1;
  }
  return 0;
}

/* 10013620  FUN_10013620  (240 bytes)
 * undefined FUN_10013620(int * param_1)
 * called by: CBaseMonster::Killed
 */
void __fastcall FUN_10013620(int *param_1)

{
  bool bVar1;
  int iVar2;
  float10 fVar3;
  
  bVar1 = false;
  iVar2 = (**(code **)(*param_1 + 0x114))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x118))();
    if ((iVar2 == 0) ||
       (fVar3 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_violence_agibs_1009d62c),
       fVar3 != (float10)0.0)) goto LAB_1001367d;
  }
  else {
    fVar3 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_violence_hgibs_1009d63c);
    if (fVar3 != (float10)0.0) goto LAB_1001367d;
  }
  bVar1 = true;
LAB_1001367d:
  *(undefined4 *)(param_1[1] + 0x16c) = 0;
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x11c))();
  }
  else {
    *(undefined4 *)(param_1[1] + 0x118) = 0x80;
    (**(code **)(*param_1 + 0x120))();
  }
  *(undefined4 *)(param_1[1] + 0x170) = 2;
  CBaseMonster::ShouldFadeOnDeath();
  if (*(float *)(param_1[1] + 0x160) < -99.0) {
    *(undefined4 *)(param_1[1] + 0x160) = 0;
  }
  iVar2 = (**(code **)(*param_1 + 300))();
  if ((iVar2 != 0) && (!bVar1)) {
    UTIL_Remove(param_1);
  }
  return;
}

/* 10013d40  FUN_10013d40  (258 bytes)
 * undefined FUN_10013d40(undefined4 param_1)
 * called by: CEnvShooter::CreateGib, CGibShooter::CreateGib, FUN_100128f0, FUN_10012d30
 */
void __thiscall FUN_10013d40(void *this,char *param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(*(int *)((int)this + 4) + 0x108) = 10;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x120) = 0x3f0ccccd;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x14c) = 0x437f0000;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x148) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x15c) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x10c) = 3;
  **(int **)((int)this + 4) = (int)&DAT_1009d658 - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(*(int *)((int)this + 4) + 0x208),param_1);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  UTIL_SetSize(*(int *)((int)this + 4),&uStack_c,&uStack_18);
  *(float *)(*(int *)((int)this + 4) + 0x104) = gpGlobals->time + 4.0;
  *(undefined4 *)((int)this + 0x60) = 0x41c80000;
  *(code **)((int)this + 0x10) = CGib::WaitTillLand;
  *(code **)((int)this + 0x14) = CGib::BounceGibTouch;
  *(undefined4 *)((int)this + 0x5c) = 9;
  *(undefined4 *)((int)this + 0x58) = 5;
  return;
}

/* 10014390  FUN_10014390  (529 bytes)
 * undefined4 FUN_10014390(int param_1, undefined4 param_2, float param_3, uint param_4)
 * called by: CBaseMonster::TakeDamage
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_10014390(void *this,int param_1,undefined4 param_2,float param_3,uint param_4)

{
  int iVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  float *pfVar4;
  Vector *this_00;
  float fVar5;
  float fVar6;
  float fVar7;
  Vector VStack_3c;
  float fStack_2c;
  float fStack_28;
  Vector VStack_24;
  Vector VStack_18;
  Vector VStack_c;
  
  if (param_1 != 0) {
    iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(param_1 + 0x208));
    if (iVar1 != 0) {
      peVar2 = *(edict_t **)(param_1 + 0x208);
      if (peVar2 == (edict_t *)0x0) {
        peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        if (peVar2 == (edict_t *)0x0) goto LAB_1001453c;
      }
      if (peVar2->pvPrivateData != (int *)0x0) {
        puVar3 = (undefined4 *)(**(code **)(*(int *)peVar2->pvPrivateData + 0xf0))(&VStack_18);
        fStack_28 = (float)*puVar3;
        VStack_24.x = (float)puVar3[1];
        VStack_24.y = (float)puVar3[2] - 10.0;
        pfVar4 = (float *)(**(code **)(*(int *)this + 0xf0))(&VStack_18.z);
        fVar5 = VStack_24.x - *pfVar4;
        fStack_2c = VStack_24.y - pfVar4[1];
        fStack_28 = VStack_24.z - pfVar4[2];
        fVar7 = SQRT(fVar5 * fVar5 + fStack_2c * fStack_2c + fStack_28 * fStack_28);
        if (fVar7 == 0.0) {
          VStack_3c.x = 0.0;
          VStack_3c.y = 0.0;
          VStack_3c.z = 1.0;
        }
        else {
          fVar7 = 1.0 / fVar7;
          puVar3 = (undefined4 *)
                   Vector::Vector(&VStack_24,fVar7 * fVar5,fStack_2c * fVar7,fStack_28 * fVar7);
          Vector::Vector(&VStack_3c,puVar3);
        }
        fVar5 = SQRT(VStack_3c.x * VStack_3c.x +
                     VStack_3c.y * VStack_3c.y + VStack_3c.z * VStack_3c.z);
        if (fVar5 == 0.0) {
          fVar7 = 1.0;
          fVar6 = 0.0;
          fVar5 = 0.0;
          this_00 = &VStack_c;
        }
        else {
          fVar5 = 1.0 / fVar5;
          fVar7 = VStack_3c.z * fVar5;
          fVar6 = VStack_3c.y * fVar5;
          fVar5 = VStack_3c.x * fVar5;
          this_00 = &VStack_18;
        }
        puVar3 = (undefined4 *)Vector::Vector(this_00,fVar5,fVar6,fVar7);
        Vector::Vector(&VStack_24,puVar3);
        _DAT_100ae4b8 = VStack_24.x;
        _DAT_100ae4bc = VStack_24.y;
        _DAT_100ae4c0 = VStack_24.z;
      }
    }
  }
LAB_1001453c:
  if ((param_4 & 0x2e1) != 0) {
    iVar1 = *(int *)((int)this + 4);
    if (*(float *)(iVar1 + 0x160) <= param_3) {
      *(undefined4 *)(iVar1 + 0x160) = 0xc2480000;
      (**(code **)(*(int *)this + 0x58))(param_2,2);
      return 0;
    }
    *(float *)(iVar1 + 0x160) = *(float *)(iVar1 + 0x160) - param_3 * 0.1;
  }
  return 1;
}

/* 100145b0  FUN_100145b0  (61 bytes)
 * float10 FUN_100145b0(int param_1, float param_2)
 * called by: CBasePlayer::Killed
 */
float10 __thiscall FUN_100145b0(int param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  fVar2 = ((float10)73728.0 /
          ((float10)*(float *)(iVar1 + 0xfc) * (float10)*(float *)(iVar1 + 0xf8) *
          (float10)*(float *)(iVar1 + 0xf4))) * (float10)param_2 * (float10)5.0;
  if ((float10)1000.0 < fVar2) {
    fVar2 = (float10)1000.0;
  }
  return fVar2;
}

/* 100145f0  FUN_100145f0  (693 bytes)
 * undefined FUN_100145f0(float param_1, float param_2, float param_3, int param_4, int param_5, float param_6, float param_7, int param_8, undefined4 param_9)
 * called by: FUN_10014980
 */
void __cdecl
FUN_100145f0(float param_1,float param_2,float param_3,int param_4,int param_5,float param_6,
            float param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  void *this;
  int iVar6;
  float *pfVar7;
  float fStack_78;
  float local_74;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float afStack_50 [3];
  float afStack_44 [3];
  undefined1 auStack_38 [4];
  int iStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_8;
  
  if (param_7 == 0.0) {
    local_74 = 1.0;
  }
  else {
    local_74 = param_6 / param_7;
  }
  iVar2 = FUN_10077360(&param_1);
  iVar1 = param_4;
  param_3 = param_3 + 1.0;
  iVar6 = param_5;
  if (param_5 == 0) {
    iVar6 = param_4;
  }
  piVar3 = (int *)FUN_10076410(0,&param_1,param_7);
  do {
    if (piVar3 == (int *)0x0) {
      return;
    }
    if ((*(float *)(piVar3[1] + 0x16c) != 0.0) &&
       ((param_8 == 0 || (iVar4 = (**(code **)(*piVar3 + 0x44))(), iVar4 != param_8)))) {
      if (iVar2 == -3) {
        if (*(int *)(piVar3[1] + 0x1c0) != 0) {
LAB_100146f7:
          puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0xfc))();
          uStack_68 = *puVar5;
          uStack_64 = puVar5[1];
          uStack_60 = puVar5[2];
          UTIL_TraceLine(&param_1,&uStack_68,0,*(undefined4 *)(iVar1 + 0x208),auStack_38);
          if ((fStack_28 == 1.0) || (iStack_8 == *(int *)(piVar3[1] + 0x208))) {
            if (iStack_34 != 0) {
              fStack_24 = param_1;
              fStack_20 = param_2;
              fStack_1c = param_3;
              fStack_28 = 0.0;
            }
            fStack_78 = param_6 - SQRT((param_1 - fStack_24) * (param_1 - fStack_24) +
                                       (param_2 - fStack_20) * (param_2 - fStack_20) +
                                       (param_3 - fStack_1c) * (param_3 - fStack_1c)) * local_74;
            if (fStack_78 < 0.0) {
              fStack_78 = 0.0;
            }
            if (fStack_28 == 1.0) {
              (**(code **)(*piVar3 + 0x50))();
            }
            else {
              FUN_100796a0();
              iVar4 = *piVar3;
              pfVar7 = afStack_50;
              this = (void *)FUN_100148b0(&fStack_24,afStack_44,&param_1);
              puVar5 = (undefined4 *)FUN_100148f0(this,pfVar7);
              Vector::Vector((Vector *)&stack0xffffff64,puVar5);
              (**(code **)(iVar4 + 0x4c))(iVar1,fStack_78);
              FUN_100796c0(iVar1,iVar6);
            }
          }
        }
      }
      else if (*(int *)(piVar3[1] + 0x1c0) != 3) goto LAB_100146f7;
    }
    piVar3 = (int *)FUN_10076410((int)piVar3,&param_1,param_7);
  } while( true );
}

/* 100148b0  FUN_100148b0  (51 bytes)
 * undefined FUN_100148b0(float * param_1, float * param_2)
 * called by: CBreakable::Use, CFuncTrain::Next, CGunTarget::Next, CTSStunt::CheckForBreakables, FUN_100145f0, FUN_1001a130, FUN_10063920, FUN_10063eb0, FUN_10065f40, TSExplosion
 */
void __thiscall FUN_100148b0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)((int)this + 4);
  fVar2 = param_2[1];
  fVar3 = *(float *)((int)this + 8);
  fVar4 = param_2[2];
  *param_1 = *(float *)this - *param_2;
  param_1[1] = fVar1 - fVar2;
  param_1[2] = fVar3 - fVar4;
  return;
}

/* 100148f0  FUN_100148f0  (134 bytes)
 * undefined FUN_100148f0(float * param_1)
 * called by: CBreakable::TakeDamage, CGibShooter::ShootThink, CM61Grenade::WaitThink, CTSAnimation::Animate, CTSKnife::BounceTouch, CTSKnife::WaitThink, CTSShrapnel::BounceTouch, FUN_100145f0, FUN_1001a130, TSExplosion
 */
void __thiscall FUN_100148f0(void *this,float *param_1)

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

/* 10014980  FUN_10014980  (67 bytes)
 * undefined FUN_10014980(int param_1, int param_2, float param_3, int param_4, undefined4 param_5)
 * called by: CEnvExplosion::Use
 */
void __thiscall
FUN_10014980(void *this,int param_1,int param_2,float param_3,int param_4,undefined4 param_5)

{
  float in_stack_ffffffdc;
  float in_stack_ffffffe0;
  float in_stack_ffffffe4;
  float fVar1;
  
  fVar1 = param_3 * 2.5;
  Vector::Vector((Vector *)&stack0xffffffdc,(undefined4 *)(*(int *)((int)this + 4) + 8));
  FUN_100145f0(in_stack_ffffffdc,in_stack_ffffffe0,in_stack_ffffffe4,param_1,param_2,param_3,fVar1,
               param_4,param_5);
  return;
}

/* 10014f00  FUN_10014f00  (2146 bytes)
 * undefined FUN_10014f00(uint param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, undefined4 param_10, float param_11, float param_12, int param_13, int param_14, float param_15)
 * called by: CFuncTankGun::Fire
 */
void __thiscall
FUN_10014f00(void *this,uint param_1,float param_2,float param_3,float param_4,float param_5,
            float param_6,float param_7,float param_8,float param_9,float param_10,float param_11,
            float param_12,int param_13,int param_14,float param_15)

{
  float *pfVar1;
  edict_t *peVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int *piVar6;
  bool bVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar8;
  longlong lVar9;
  float unaff_retaddr;
  float in_stack_00000040;
  float in_stack_00000044;
  float in_stack_0000004c;
  int in_stack_00000054;
  float in_stack_fffffe48;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 *puVar13;
  float in_stack_fffffe54;
  float fVar14;
  float *pfVar15;
  uint local_178;
  undefined4 auStack_174 [2];
  float fStack_16c;
  int *piStack_168;
  float fStack_164;
  vec_t vStack_160;
  vec_t vStack_15c;
  float fStack_154;
  float fStack_150;
  uint uStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  Vector VStack_13c;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined1 auStack_120 [16];
  edict_t *peStack_110;
  int iStack_10c;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_cc;
  float fStack_c8;
  Vector VStack_c4;
  Vector local_b8;
  Vector VStack_ac;
  Vector VStack_a0;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  Vector VStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  Vector VStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  Vector VStack_40;
  Vector VStack_34;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  Vector VStack_10;
  float fStack_4;
  
  VStack_34.y = gpGlobals->v_right[0];
  VStack_34.z = gpGlobals->v_right[1];
  local_28 = gpGlobals->v_right[2];
  VStack_c4.y = gpGlobals->v_up[0];
  VStack_c4.z = gpGlobals->v_up[1];
  local_b8.x = gpGlobals->v_up[2];
  fVar5 = param_15;
  if (param_15 == 0.0) {
    fVar5 = *(float *)((int)this + 4);
  }
  FUN_100796a0();
  DAT_102eed08 = 0x1002;
  local_178 = 1;
  fVar11 = param_12;
  if (param_1 != 0) {
    do {
      do {
        (*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
        (*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
        (*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
        fStack_12c = (float)extraout_ST0;
        pfVar15 = (float *)0xbf000000;
        fVar14 = 2.55023e-29;
        (*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
        fVar8 = extraout_ST0_00 + (float10)fStack_124;
      } while ((float10)1.0 < (float10)fStack_16c * (float10)fStack_16c + fVar8 * fVar8);
      pfVar1 = (float *)Vector::operator*(&VStack_a0,&param_2,
                                          (float)((float10)in_stack_00000044 * fVar8));
      fStack_130 = *pfVar1;
      fStack_12c = pfVar1[1];
      fStack_128 = pfVar1[2];
      pfVar1 = (float *)Vector::operator*(&VStack_10,&param_5,in_stack_00000040 * fStack_16c);
      fStack_58 = (float)param_13 + *pfVar1;
      fStack_cc = pfVar1[1];
      fStack_c8 = pfVar1[2];
      fStack_54 = (float)param_14 + fStack_cc;
      fStack_50 = param_15 + fStack_c8;
      Vector::Vector(&local_b8,&fStack_58);
      fStack_1c = local_b8.x + fStack_130;
      fStack_18 = local_b8.y + fStack_12c;
      fStack_14 = local_b8.z + fStack_128;
      Vector::Vector(&VStack_13c,&fStack_1c);
      fStack_e8 = VStack_13c.x * in_stack_0000004c;
      fStack_148 = VStack_13c.x;
      fStack_e4 = VStack_13c.y * in_stack_0000004c;
      fStack_144 = VStack_13c.y;
      fStack_140 = VStack_13c.z;
      fStack_e0 = VStack_13c.z * in_stack_0000004c;
      Vector::Vector(&VStack_40,&fStack_e8);
      fStack_88 = VStack_40.x + param_10;
      fStack_84 = param_11 + VStack_40.y;
      fStack_80 = param_12 + VStack_40.z;
      Vector::Vector((Vector *)&fStack_4,&fStack_88);
      piVar6 = (int *)((int)this + 4);
      fStack_154 = fStack_4;
      uStack_14c = param_1;
      this = (void *)0x0;
      fStack_150 = unaff_retaddr;
      UTIL_TraceLine(&param_10,&fStack_154,0,*(undefined4 *)(*piVar6 + 0x208),auStack_120);
      iVar3 = in_stack_00000054;
      bVar7 = false;
      if ((in_stack_00000054 != 0) &&
         (iVar4 = DAT_100a93dc % in_stack_00000054, DAT_100a93dc = DAT_100a93dc + 1, iVar4 == 0)) {
        iVar4 = (**(code **)(*piStack_168 + 0xc0))();
        if (iVar4 == 0) {
          fStack_164 = param_10;
          vStack_160 = param_11;
          vStack_15c = param_12;
        }
        else {
          fStack_70 = gpGlobals->v_forward[0] * 16.0;
          fStack_6c = gpGlobals->v_forward[1] * 16.0;
          fStack_68 = gpGlobals->v_forward[2] * 16.0;
          Vector::Vector(&VStack_7c,&fStack_70);
          local_28 = gpGlobals->v_right[0] + gpGlobals->v_right[0];
          fStack_24 = gpGlobals->v_right[1] + gpGlobals->v_right[1];
          fStack_20 = gpGlobals->v_right[2] + gpGlobals->v_right[2];
          Vector::Vector(&VStack_c4,&local_28);
          fStack_dc = param_10;
          fStack_d8 = param_11;
          fStack_d4 = param_12 - 4.0;
          Vector::Vector(&VStack_ac,&fStack_dc);
          fStack_94 = VStack_c4.x + VStack_ac.x;
          fStack_90 = VStack_c4.y + VStack_ac.y;
          fStack_8c = VStack_c4.z + VStack_ac.z;
          Vector::Vector(&VStack_64,&fStack_94);
          fStack_4c = VStack_7c.x + VStack_64.x;
          fStack_48 = VStack_7c.y + VStack_64.y;
          fStack_44 = VStack_7c.z + VStack_64.z;
          Vector::Vector(&VStack_34,&fStack_4c);
          fStack_164 = VStack_34.x;
          vStack_160 = VStack_34.y;
          vStack_15c = VStack_34.z;
        }
        bVar7 = iVar3 != 1;
        this = (void *)0x17;
        (*g_engfuncs.pfnMessageBegin)(5,0x17,&fStack_164,(edict_t *)0x0);
        (*g_engfuncs.pfnWriteByte)(6);
        (*g_engfuncs.pfnWriteCoord)(fStack_150);
        (*g_engfuncs.pfnWriteCoord)(fStack_148);
        (*g_engfuncs.pfnWriteCoord)(fStack_140);
        (*g_engfuncs.pfnWriteCoord)(fStack_ec);
        (*g_engfuncs.pfnWriteCoord)(fStack_e4);
        (*g_engfuncs.pfnWriteCoord)(fStack_dc);
        fStack_154 = 2.55058e-29;
        (*g_engfuncs.pfnMessageEnd)();
      }
      if (fStack_130 != 1.0) {
        peVar2 = peStack_110;
        if ((peStack_110 == (edict_t *)0x0) &&
           (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 == (edict_t *)0x0)) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = peVar2->pvPrivateData;
        }
        in_stack_fffffe48 = fVar5;
        if (param_14 == 0) {
          if (fVar11 == 0.0) {
            iVar3 = *piVar6;
            pfVar15 = &fStack_140;
            Vector::Vector((Vector *)&stack0xfffffe50,&piStack_168);
            (**(code **)(iVar3 + 0x4c))();
            fVar10 = 0.0;
            puVar13 = auStack_174;
            fVar12 = 2.5507696e-29;
            Vector::Vector((Vector *)&stack0xfffffe54,puVar13);
            Vector::Vector((Vector *)&stack0xfffffe48,&param_2);
            TEXTURETYPE_PlaySound
                      ((int)&fStack_140,in_stack_fffffe48,fVar12,puVar13,in_stack_fffffe54,fVar14,
                       pfVar15,fVar10);
            if (peStack_110 != (edict_t *)0x0) {
              pfVar15 = (float *)0x10015719;
              iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peStack_110);
              if (iVar3 != 0) {
                iVar3 = iStack_10c;
                if (iStack_10c != 0) {
                  iVar3 = iStack_10c + 0x80;
                }
                if (*(int *)(iVar3 + 0x148) != 0) {
                  iVar3 = (*g_engfuncs.pfnRandomLong)(0,2);
                  pfVar15 = (float *)0x1001575a;
                  FUN_100775d0((int)&VStack_13c.z,iVar3 + 0x19);
                }
              }
            }
          }
          else {
            if (fVar11 == 9.80909e-45) {
              iVar3 = *piVar6;
              pfVar15 = &fStack_140;
              Vector::Vector((Vector *)&stack0xfffffe50,&piStack_168);
              (**(code **)(iVar3 + 0x4c))();
              fVar10 = 9.80909e-45;
              puVar13 = auStack_174;
              fVar12 = 2.550742e-29;
              Vector::Vector((Vector *)&stack0xfffffe54,puVar13);
              Vector::Vector((Vector *)&stack0xfffffe48,&param_2);
              TEXTURETYPE_PlaySound
                        ((int)&fStack_140,in_stack_fffffe48,fVar12,puVar13,in_stack_fffffe54,fVar14,
                         pfVar15,fVar10);
              fVar12 = 9.80909e-45;
              goto LAB_1001551f;
            }
            if (fVar11 != 1.12104e-44) {
              iVar3 = *piVar6;
              pfVar15 = &fStack_140;
              Vector::Vector((Vector *)&stack0xfffffe50,&piStack_168);
              goto LAB_100154ea;
            }
            iVar3 = *piVar6;
            pfVar15 = &fStack_140;
            Vector::Vector((Vector *)&stack0xfffffe50,&piStack_168);
            (**(code **)(iVar3 + 0x4c))();
            fVar11 = param_12;
            if (!bVar7) {
              fVar12 = 1.12104e-44;
              puVar13 = auStack_174;
              fVar11 = 2.5506748e-29;
              Vector::Vector((Vector *)&stack0xfffffe54,puVar13);
              Vector::Vector((Vector *)&stack0xfffffe48,&param_2);
              TEXTURETYPE_PlaySound
                        ((int)&fStack_140,in_stack_fffffe48,fVar11,puVar13,in_stack_fffffe54,fVar14,
                         pfVar15,fVar12);
              FUN_100797b0((int)&fStack_140,8);
              fVar11 = param_12;
            }
          }
        }
        else {
          iVar3 = *piVar6;
          pfVar15 = &fStack_140;
          Vector::Vector((Vector *)&stack0xfffffe50,&piStack_168);
LAB_100154ea:
          (**(code **)(iVar3 + 0x4c))();
          puVar13 = auStack_174;
          fVar10 = 2.5506246e-29;
          fVar12 = fVar11;
          Vector::Vector((Vector *)&stack0xfffffe54,puVar13);
          Vector::Vector((Vector *)&stack0xfffffe48,&param_2);
          TEXTURETYPE_PlaySound
                    ((int)&fStack_140,in_stack_fffffe48,fVar10,puVar13,in_stack_fffffe54,fVar14,
                     pfVar15,fVar12);
          fVar12 = fVar11;
LAB_1001551f:
          FUN_100797b0((int)&fStack_140,(int)fVar12);
        }
      }
      lVar9 = __ftol();
      iVar3 = (int)lVar9;
      pfVar1 = &fStack_12c;
      fVar12 = 2.550702e-29;
      Vector::Vector((Vector *)&stack0xfffffe54,pfVar1);
      Vector::Vector((Vector *)&stack0xfffffe48,&param_2);
      FUN_10077c60(in_stack_fffffe48,fVar12,(float)pfVar1,in_stack_fffffe54,fVar14,(float)pfVar15,
                   iVar3);
      local_178 = local_178 + 1;
    } while (local_178 <= param_1);
  }
  FUN_100796c0(*(undefined4 *)((int)this + 4),fVar5);
  return;
}

/* 10015970  FUN_10015970  (76 bytes)
 * undefined FUN_10015970(int param_1)
 * called by: CEnvShooter::CreateGib, CGibShooter::CreateGib, FUN_100128f0, FUN_10012d30
 */
void __cdecl FUN_10015970(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,100), peVar1 = (entvars_t *)param_1,
        puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &PTR_DeathNotice_1008a42c;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10019080  FUN_10019080  (66 bytes)
 * undefined FUN_10019080(uint param_1)
 * called by: CBeam::Precache, CLightning::Activate
 */
void __thiscall FUN_10019080(void *this,uint param_1)

{
  edict_t *peVar1;
  
  *(uint *)(*(int *)((int)this + 4) + 0x128) =
       (*(uint *)(*(int *)((int)this + 4) + 0x128) & 0xf000) << 0xc | param_1 & 0xfff;
  peVar1 = (*g_engfuncs.pfnPEntityOfEntIndex)(param_1);
  *(edict_t **)(*(int *)((int)this + 4) + 0x198) = peVar1;
  return;
}

/* 100190d0  FUN_100190d0  (66 bytes)
 * undefined FUN_100190d0(uint param_1)
 * called by: CBeam::Precache, CLightning::Activate
 */
void __thiscall FUN_100190d0(void *this,uint param_1)

{
  edict_t *peVar1;
  
  *(uint *)(*(int *)((int)this + 4) + 0x110) =
       (*(uint *)(*(int *)((int)this + 4) + 0x110) & 0xf000) << 0xc | param_1 & 0xfff;
  peVar1 = (*g_engfuncs.pfnPEntityOfEntIndex)(param_1);
  *(edict_t **)(*(int *)((int)this + 4) + 0x194) = peVar1;
  return;
}

/* 10019120  FUN_10019120  (49 bytes)
 * int FUN_10019120(int param_1)
 * called by: CBeam::Center, CBeam::RelinkBeam, CLightning::DamageThink, CLightning::ToggleUse, FUN_1001b200
 */
int __fastcall FUN_10019120(int param_1)

{
  int iVar1;
  edict_t *peVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((byte)*(undefined4 *)(iVar1 + 0x148) & 0xf) == 2) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntIndex)(*(uint *)(iVar1 + 0x128) & 0xfff);
    return (int)(peVar2->v).origin;
  }
  return iVar1 + 8;
}

/* 10019160  FUN_10019160  (67 bytes)
 * int FUN_10019160(int param_1)
 * called by: CBeam::Center, CBeam::RelinkBeam, CLightning::DamageThink, CLightning::ToggleUse
 */
int __fastcall FUN_10019160(int param_1)

{
  int iVar1;
  uint uVar2;
  edict_t *peVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(uint *)(iVar1 + 0x148) & 0xf;
  if ((uVar2 != 0) && (uVar2 != 3)) {
    peVar3 = (*g_engfuncs.pfnPEntityOfEntIndex)(*(uint *)(iVar1 + 0x110) & 0xfff);
    if (peVar3 != (edict_t *)0x0) {
      return (int)(peVar3->v).origin;
    }
    return *(int *)(param_1 + 4) + 0x50;
  }
  return iVar1 + 0x50;
}

/* 10019530  FUN_10019530  (82 bytes)
 * int FUN_10019530(undefined4 param_1)
 * called by: CLaser::StrikeThink, CLightning::StrikeThink
 */
int FUN_10019530(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int lHigh;
  
  iVar3 = 0;
  iVar1 = UTIL_FindEntityByTargetname(0,param_1);
  if (iVar1 != 0) {
    lHigh = -1;
    do {
      lHigh = lHigh + 1;
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,lHigh);
      if (iVar2 < 1) {
        iVar3 = iVar1;
      }
      iVar1 = UTIL_FindEntityByTargetname(iVar1,param_1);
    } while (iVar1 != 0);
    return iVar3;
  }
  return 0;
}

/* 10019590  FUN_10019590  (62 bytes)
 * undefined FUN_10019590(undefined4 * param_1, undefined4 * param_2)
 * called by: CLightning::StrikeThink, CLightning::ToggleUse, FUN_1001a290, FUN_1001b200
 */
void __thiscall FUN_10019590(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)((int)this + 4) + 0x1a0);
  if ((uVar1 & 0x30) != 0) {
    if ((uVar1 & 0x10) != 0) {
      UTIL_Sparks(param_1);
    }
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 0x20) != 0) {
      UTIL_Sparks(param_2);
    }
  }
  return;
}

/* 10019c80  FUN_10019c80  (224 bytes)
 * undefined4 FUN_10019c80(int param_1)
 * called by: CLightning::Activate, CLightning::StrikeThink
 */
undefined4 __cdecl FUN_10019c80(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  
  if ((*(int **)(param_1 + 4))[0x2d] != 0) {
    pcVar5 = s_info_target_1009df08;
    pbVar4 = (byte *)(gpGlobals->pStringBase + **(int **)(param_1 + 4));
    pbVar2 = pbVar4;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_10019cd8:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_10019cdd;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_10019cd8;
      pbVar2 = pbVar2 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_10019cdd:
    if (iVar3 != 0) {
      pcVar5 = s_info_landmark_1009def8;
      pbVar2 = pbVar4;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_10019d10:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_10019d15;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_10019d10;
        pbVar2 = pbVar2 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_10019d15:
      if (iVar3 != 0) {
        pcVar5 = s_path_corner_1009deec;
        do {
          bVar1 = *pbVar4;
          bVar6 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_10019d48:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_10019d4d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar6 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_10019d48;
          pbVar4 = pbVar4 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_10019d4d:
        if (iVar3 != 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}

/* 1001a130  FUN_1001a130  (270 bytes)
 * undefined FUN_1001a130(int param_1)
 * called by: CLightning::DamageThink, CLightning::StrikeThink, FUN_1001b200
 */
/* WARNING: Removing unreachable block (ram,0x1001a163) */

void __thiscall FUN_1001a130(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  float afStack_18 [3];
  float afStack_c [3];
  
  CBeam::RelinkBeam((int)this);
  if (((*(float *)(param_1 + 0x10) != 1.0) && (*(int *)(param_1 + 0x30) != 0)) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x30) + 0x7c), piVar1 != (int *)0x0)) {
    FUN_100796a0();
    iVar4 = *(int *)((int)this + 4);
    iVar2 = *piVar1;
    pfVar5 = afStack_18;
    this_00 = (void *)FUN_100148b0((void *)(param_1 + 0x14),afStack_c,(float *)(iVar4 + 8));
    puVar3 = (undefined4 *)FUN_100148f0(this_00,pfVar5);
    Vector::Vector((Vector *)&stack0xffffffc0,puVar3);
    (**(code **)(iVar2 + 0x4c))
              (iVar4,(gpGlobals->time - *(float *)(iVar4 + 0x1e4)) * *(float *)(iVar4 + 0x1e0));
    FUN_100796c0(*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 4));
    if (((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 0x40) != 0) &&
       (iVar4 = (**(code **)(*piVar1 + 0xb0))(), iVar4 != 0)) {
      iVar4 = (*g_engfuncs.pfnRandomLong)(0,4);
      FUN_100775d0((int)afStack_18[0],iVar4 + 0x1c);
    }
  }
  *(float *)(*(int *)((int)this + 4) + 0x1e4) = gpGlobals->time;
  return;
}

/* 1001a290  FUN_1001a290  (299 bytes)
 * undefined FUN_1001a290(undefined4 * param_1, undefined4 * param_2)
 * called by: FUN_1001a3c0, FUN_1001a810
 */
void __thiscall FUN_1001a290(void *this,undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  float *in_stack_00000018;
  float *in_stack_00000028;
  undefined4 uStack0000002c;
  undefined4 uStack00000040;
  
  (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnWriteCoord)(*in_stack_00000018);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000018[1]);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000018[2]);
  (*g_engfuncs.pfnWriteCoord)(*in_stack_00000028);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000028[1]);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000028[2]);
  (*g_engfuncs.pfnWriteShort)(*(int *)((int)this + 0x78));
  (*g_engfuncs.pfnWriteByte)(*(int *)((int)this + 0x80));
  lVar1 = __ftol();
  (*g_engfuncs.pfnWriteByte)((int)lVar1);
  lVar1 = __ftol();
  (*g_engfuncs.pfnWriteByte)((int)lVar1);
  (*g_engfuncs.pfnWriteByte)(*(int *)((int)this + 100));
  uStack0000002c = 0x1001a345;
  (*g_engfuncs.pfnWriteByte)(*(int *)((int)this + 0x68));
  lVar1 = __ftol();
  uStack0000002c = 0x1001a35a;
  (*g_engfuncs.pfnWriteByte)((int)lVar1);
  lVar1 = __ftol();
  uStack0000002c = 0x1001a36f;
  (*g_engfuncs.pfnWriteByte)((int)lVar1);
  lVar1 = __ftol();
  uStack0000002c = 0x1001a384;
  (*g_engfuncs.pfnWriteByte)((int)lVar1);
  lVar1 = __ftol();
  uStack0000002c = 0x1001a399;
  (*g_engfuncs.pfnWriteByte)((int)lVar1);
  uStack0000002c = 0x1001a3a3;
  (*g_engfuncs.pfnWriteByte)(*(int *)((int)this + 0x70));
  (*g_engfuncs.pfnMessageEnd)();
  uStack00000040 = 0x1001a3b5;
  FUN_10019590(this,in_stack_00000018,in_stack_00000028);
  return;
}

/* 1001a3c0  FUN_1001a3c0  (1095 bytes)
 * undefined FUN_1001a3c0(void * param_1)
 * called by: CLightning::StrikeThink
 */
void __fastcall FUN_1001a3c0(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  Vector *pVVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float local_154;
  float local_150;
  float local_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  Vector VStack_13c;
  Vector VStack_130;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  Vector VStack_10c;
  Vector VStack_100;
  Vector VStack_f4;
  Vector VStack_e8;
  Vector VStack_dc;
  undefined1 auStack_d0 [16];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined1 auStack_98 [16];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  Vector VStack_60;
  Vector VStack_54;
  Vector VStack_48;
  Vector VStack_3c;
  Vector VStack_30;
  Vector VStack_24;
  Vector VStack_18;
  Vector VStack_c;
  
  iVar5 = 0;
  do {
    iVar1 = *(int *)((int)param_1 + 4);
    local_154 = *(float *)(iVar1 + 8);
    local_150 = *(float *)(iVar1 + 0xc);
    local_14c = *(float *)(iVar1 + 0x10);
    fVar6 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar7 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fStack_160 = (float)fVar8;
    fStack_15c = (float)fVar7;
    fStack_158 = (float)fVar6;
    fVar6 = Vector::Length(&fStack_160);
    if (fVar6 == (float10)0.0) {
      fVar11 = 1.0;
      fVar10 = 0.0;
      fVar9 = 0.0;
      pVVar4 = &VStack_48;
    }
    else {
      fVar6 = (float10)1.0 / fVar6;
      fVar11 = (float)((float10)fStack_158 * fVar6);
      fVar10 = (float)((float10)fStack_15c * fVar6);
      pVVar4 = &VStack_24;
      fVar9 = (float)(fVar6 * (float10)fStack_160);
    }
    puVar3 = (undefined4 *)Vector::Vector(pVVar4,fVar9,fVar10,fVar11);
    Vector::Vector(&VStack_13c,puVar3);
    fStack_110 = *(float *)((int)param_1 + 0x84);
    fStack_118 = VStack_13c.x * fStack_110;
    fStack_15c = VStack_13c.y;
    fStack_114 = VStack_13c.y * fStack_110;
    fStack_160 = VStack_13c.x;
    fStack_158 = VStack_13c.z;
    uVar2 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
    fStack_110 = VStack_13c.z * fStack_110;
    Vector::Vector(&VStack_10c,&fStack_118);
    puVar3 = (undefined4 *)
             Vector::Vector(&VStack_c,VStack_10c.x + local_154,local_150 + VStack_10c.y,
                            local_14c + VStack_10c.z);
    Vector::Vector(&VStack_f4,puVar3);
    UTIL_TraceLine(&local_154,&VStack_f4,1,uVar2,auStack_98);
    if (fStack_88 != 1.0) {
      do {
        fVar6 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
        fVar11 = (float)fVar6;
        fVar6 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
        fVar10 = (float)fVar6;
        fVar6 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
        fStack_148 = (float)fVar6;
        fStack_144 = fVar10;
        fStack_140 = fVar11;
        fStack_124 = fStack_148;
        fStack_120 = fVar10;
        fStack_11c = fVar11;
      } while (0.0 < fStack_148 * fStack_160 + fStack_15c * fVar10 + fStack_158 * fVar11);
      fVar6 = Vector::Length(&fStack_148);
      if (fVar6 == (float10)0.0) {
        fVar11 = 1.0;
        fVar10 = 0.0;
        fVar9 = 0.0;
        pVVar4 = &VStack_60;
      }
      else {
        fVar6 = (float10)1.0 / fVar6;
        fVar11 = (float)((float10)fStack_140 * fVar6);
        fVar10 = (float)((float10)fStack_144 * fVar6);
        pVVar4 = &VStack_18;
        fVar9 = (float)(fVar6 * (float10)fStack_148);
      }
      puVar3 = (undefined4 *)Vector::Vector(pVVar4,fVar9,fVar10,fVar11);
      Vector::Vector(&VStack_130,puVar3);
      fVar11 = *(float *)((int)param_1 + 0x84);
      fStack_148 = VStack_130.x;
      fStack_144 = VStack_130.y;
      fStack_140 = VStack_130.z;
      uVar2 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
      puVar3 = (undefined4 *)
               Vector::Vector(&VStack_30,VStack_130.x * fVar11,VStack_130.y * fVar11,
                              VStack_130.z * fVar11);
      Vector::Vector(&VStack_100,puVar3);
      puVar3 = (undefined4 *)
               Vector::Vector(&VStack_54,VStack_100.x + local_154,local_150 + VStack_100.y,
                              local_14c + VStack_100.z);
      Vector::Vector(&VStack_dc,puVar3);
      UTIL_TraceLine(&local_154,&VStack_dc,1,uVar2,auStack_d0);
      if (fStack_c0 != 1.0) {
        puVar3 = (undefined4 *)
                 Vector::Vector(&VStack_3c,fStack_84 - fStack_bc,fStack_80 - fStack_b8,
                                fStack_7c - fStack_b4);
        Vector::Vector(&VStack_e8,puVar3);
        fVar6 = Vector::Length(&VStack_e8.x);
        if ((float10)*(float *)((int)param_1 + 0x84) * (float10)0.1 <= fVar6) {
          UTIL_TraceLine(&fStack_84,&fStack_bc,1,*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208)
                         ,auStack_d0);
          if (fStack_c0 == 1.0) {
            FUN_1001a290(param_1,&fStack_84,&fStack_bc);
            return;
          }
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 10);
  return;
}

/* 1001a810  FUN_1001a810  (485 bytes)
 * undefined FUN_1001a810(float * param_1)
 * called by: CLightning::StrikeThink
 */
void __thiscall FUN_1001a810(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  Vector VStack_98;
  Vector VStack_8c;
  float fStack_80;
  float fStack_7c;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [16];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  Vector VStack_c;
  
  iVar4 = 0;
  while( true ) {
    fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar1 = (float)fVar5;
    fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar2 = (float)fVar5;
    fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar6 = SQRT((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2 + fVar5 * fVar5);
    if (fVar6 == (float10)0.0) {
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0x3f800000;
      puVar3 = &uStack_50;
    }
    else {
      fVar6 = (float10)1.0 / fVar6;
      puVar3 = (undefined4 *)
               Vector::Vector(&VStack_c,(float)(fVar6 * fVar5),(float)(fVar6 * (float10)fVar2),
                              (float)(fVar6 * (float10)fVar1));
    }
    Vector::Vector(&VStack_8c,puVar3);
    fVar1 = *(float *)((int)this + 0x84);
    fStack_80 = VStack_8c.x * fVar1;
    fStack_7c = VStack_8c.y * fVar1;
    fStack_74 = fStack_80 + *param_1;
    fStack_70 = fStack_7c + param_1[1];
    fStack_6c = fVar1 * VStack_8c.z + param_1[2];
    fStack_58 = fStack_70;
    fStack_54 = fStack_6c;
    UTIL_TraceLine(param_1,&fStack_74,1,*(undefined4 *)(*(int *)((int)this + 4) + 0x208),auStack_44)
    ;
    fStack_68 = fStack_30 - *param_1;
    fStack_64 = fStack_2c - param_1[1];
    fStack_60 = fStack_28 - param_1[2];
    Vector::Vector(&VStack_98,&fStack_68);
    if ((*(float *)((int)this + 0x84) * 0.1 <=
         SQRT(VStack_98.x * VStack_98.x + VStack_98.y * VStack_98.y + VStack_98.z * VStack_98.z)) &&
       (fStack_34 != 1.0)) break;
    iVar4 = iVar4 + 1;
    if (9 < iVar4) {
      return;
    }
  }
  FUN_1001a290(this,param_1,&fStack_30);
  return;
}

/* 1001b200  FUN_1001b200  (86 bytes)
 * undefined FUN_1001b200(int param_1)
 * called by: CFuncTankLaser::Fire, CLaser::StrikeThink
 */
void __thiscall FUN_1001b200(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x14);
  iVar1 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar1 + 0x50) = *puVar3;
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)((int)this + 0x54) != 0) {
    UTIL_SetOrigin(*(int *)(*(int *)((int)this + 0x54) + 4),puVar3);
  }
  FUN_1001a130(this,param_1);
  puVar2 = (undefined4 *)FUN_10019120((int)this);
  FUN_10019590(this,puVar2,puVar3);
  return;
}

/* 1001c7c0  FUN_1001c7c0  (83 bytes)
 * undefined4 * FUN_1001c7c0(undefined4 * param_1)
 * called by: CBlood::Use
 */
undefined4 * __thiscall FUN_1001c7c0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float local_c [3];
  
  iVar1 = *(int *)((int)this + 4);
  if ((*(byte *)(iVar1 + 0x1a0) & 1) != 0) {
    puVar2 = (undefined4 *)FUN_10077530(local_c);
    *param_1 = *puVar2;
    param_1[1] = puVar2[1];
    param_1[2] = puVar2[2];
    return param_1;
  }
  *param_1 = *(undefined4 *)(iVar1 + 0x44);
  param_1[1] = *(undefined4 *)(iVar1 + 0x48);
  param_1[2] = *(undefined4 *)(iVar1 + 0x4c);
  return param_1;
}

/* 1001c820  FUN_1001c820  (262 bytes)
 * undefined FUN_1001c820(float * param_1, int * param_2)
 * called by: CBlood::Use
 */
void __thiscall FUN_1001c820(void *this,float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  edict_t *peVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) == 0) goto LAB_1001c904;
  if (param_2 == (int *)0x0) {
LAB_1001c858:
    peVar6 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
  }
  else {
    iVar5 = (**(code **)(*param_2 + 0xc0))();
    if (iVar5 == 0) goto LAB_1001c858;
    peVar6 = *(edict_t **)(param_2[1] + 0x208);
  }
  if (peVar6 != (edict_t *)0x0) {
    fVar7 = (float10)(*g_engfuncs.pfnRandomFloat)(-10.0,10.0);
    fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(-10.0,10.0);
    fVar9 = (float10)(*g_engfuncs.pfnRandomFloat)(-10.0,10.0);
    fVar1 = (peVar6->v).view_ofs[1];
    fVar2 = (peVar6->v).origin[1];
    fVar3 = (peVar6->v).view_ofs[2];
    fVar4 = (peVar6->v).origin[2];
    *param_1 = (float)((float10)(peVar6->v).view_ofs[0] + (float10)(peVar6->v).origin[0] + fVar9);
    param_1[2] = fVar3 + fVar4 + (float)fVar7;
    param_1[1] = fVar1 + fVar2 + (float)fVar8;
    return;
  }
LAB_1001c904:
  iVar5 = *(int *)((int)this + 4);
  *param_1 = *(float *)(iVar5 + 8);
  param_1[1] = *(float *)(iVar5 + 0xc);
  param_1[2] = *(float *)(iVar5 + 0x10);
  return;
}

/* 1001e460  FUN_1001e460  (151 bytes)
 * undefined FUN_1001e460(undefined4 * param_1, undefined4 * param_2, undefined4 param_3, int param_4)
 * called by: CFuncTankMortar::Fire
 */
void __cdecl FUN_1001e460(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined1 local_90 [4];
  char *local_8c;
  undefined1 *local_88;
  undefined1 local_80 [128];
  
  piVar1 = (int *)CBaseEntity::Create(0x1009e134,param_1,param_2,param_3);
  sprintf(local_80,&DAT_1009e130);
  local_88 = local_80;
  local_8c = s_iMagnitude_1009e114;
  (**(code **)(*piVar1 + 0x24))(local_90);
  if (param_4 == 0) {
    *(uint *)(piVar1[1] + 0x1a0) = *(uint *)(piVar1[1] + 0x1a0) | 1;
  }
  (**(code **)(*piVar1 + 0x1c))();
  (**(code **)(*piVar1 + 0xd8))(0,0,3,0);
  return;
}

/* 1001ece0  FUN_1001ece0  (192 bytes)
 * undefined FUN_1001ece0(int param_1)
 * called by: CBreakable::BreakTouch, CBreakable::TakeDamage
 */
void __fastcall FUN_1001ece0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 auStack_18 [6];
  
  uVar3 = *(uint *)(param_1 + 0x68);
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,2);
  if (iVar2 == 0) {
    (*g_engfuncs.pfnRandomLong)(0,0x22);
  }
  fVar4 = (float10)(*g_engfuncs.pfnRandomFloat)(0.75,1.0);
  fVar5 = (float)fVar4;
  if (uVar3 == 6) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar2 != 0) {
      uVar3 = 2;
    }
  }
  else if (8 < uVar3) {
    if (fVar5 != 0.0) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
      uVar7 = 0;
      uVar6 = 0x3f4ccccd;
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,(int)fVar5 + -1);
      EMIT_SOUND_DYN(this,uVar1,2,(char *)auStack_18[iVar2],fVar5,uVar6,uVar7);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1001ed52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_1001ee58 + uVar3 * 4))();
  return;
}

/* 1001f850  FUN_1001f850  (12 bytes)
 * bool FUN_1001f850(int param_1)
 * called by: CBreakable::BreakTouch, CBreakable::Spawn, CBreakable::TakeDamage, CBreakable::Use
 */
bool __fastcall FUN_1001f850(int param_1)

{
  return *(int *)(param_1 + 0x68) != 7;
}

/* 10020220  FUN_10020220  (151 bytes)
 * undefined FUN_10020220()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10020220(void)

{
  _DAT_100a93e8 = 0;
  _DAT_100a93ec = 0;
  _DAT_100a93f0 = 0;
  _DAT_100a93f4 = 0x3ccccccd;
  _DAT_100a93f8 = 0x3ccccccd;
  _DAT_100a93fc = 0x3ccccccd;
  _DAT_100a9400 = 0x3d4ccccd;
  _DAT_100a9404 = 0x3d4ccccd;
  _DAT_100a9408 = 0x3d4ccccd;
  _DAT_100a940c = 0x3dcccccd;
  _DAT_100a9410 = 0x3dcccccd;
  _DAT_100a9414 = 0x3dcccccd;
  _DAT_100a9418 = 0x3e800000;
  _DAT_100a941c = 0x3e800000;
  _DAT_100a9420 = 0x3e800000;
  return;
}

/* 10020e50  FUN_10020e50  (587 bytes)
 * undefined FUN_10020e50(int * param_1)
 * called by: CFuncTank::Use
 */
void __fastcall FUN_10020e50(int *param_1)

{
  float fVar1;
  int iVar2;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  Vector VStack_a8;
  Vector VStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  Vector VStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  Vector VStack_30;
  Vector VStack_24;
  float local_18 [3];
  Vector VStack_c;
  
  if (((float)param_1[0x16] <= gpGlobals->time) &&
     ((*(byte *)(*(int *)(param_1[0x15] + 4) + 0x180) & 1) != 0)) {
    (*g_engfuncs.pfnAngleVectors)((float *)(param_1[1] + 0x50),local_18,(float *)0x0,(float *)0x0);
    param_1[0x22] = (int)((gpGlobals->time - 1.0 / (float)param_1[0x23]) - 0.01);
    (*g_engfuncs.pfnAngleVectors)((float *)(param_1[1] + 0x50),&fStack_48,&fStack_3c,&fStack_60);
    fVar1 = (float)param_1[0x2a];
    fStack_88 = (float)param_1[0x29];
    fStack_90 = fStack_3c * fStack_88;
    fStack_8c = fStack_38 * fStack_88;
    fStack_88 = fStack_34 * fStack_88;
    Vector::Vector(&VStack_a8,&fStack_90);
    fStack_70 = (float)param_1[0x28];
    fStack_78 = fStack_48 * fStack_70;
    fStack_74 = fStack_44 * fStack_70;
    fStack_70 = fStack_40 * fStack_70;
    Vector::Vector(&VStack_30,&fStack_78);
    iVar2 = param_1[1];
    fStack_b4 = VStack_30.x + *(float *)(iVar2 + 8);
    fStack_b0 = VStack_30.y + *(float *)(iVar2 + 0xc);
    fStack_ac = VStack_30.z + *(float *)(iVar2 + 0x10);
    Vector::Vector(&VStack_9c,&fStack_b4);
    fStack_84 = VStack_a8.x + VStack_9c.x;
    fStack_80 = VStack_a8.y + VStack_9c.y;
    fStack_7c = VStack_a8.z + VStack_9c.z;
    Vector::Vector(&VStack_6c,&fStack_84);
    fStack_54 = VStack_6c.x + fStack_60 * fVar1;
    fStack_50 = VStack_6c.y + fStack_5c * fVar1;
    fStack_4c = VStack_6c.z + fStack_58 * fVar1;
    Vector::Vector(&VStack_24,&fStack_54);
    Vector::Vector(&VStack_c,&VStack_24.x);
    (**(code **)(*param_1 + 0x10c))(&VStack_c,local_18,*(undefined4 *)(param_1[0x15] + 4));
    if ((int *)param_1[0x15] != (int *)0x0) {
      iVar2 = (**(code **)(*(int *)param_1[0x15] + 0xc0))();
      if (iVar2 != 0) {
        *(undefined4 *)(param_1[0x15] + 0x7e4) = 1000;
      }
    }
    param_1[0x16] = (int)(1.0 / (float)param_1[0x23] + gpGlobals->time);
  }
  return;
}

/* 10021190  FUN_10021190  (7 bytes)
 * undefined4 FUN_10021190(undefined4 param_1)
 * called by: FUN_10021260
 */
undefined4 FUN_10021190(undefined4 param_1)

{
  return param_1;
}

/* 100211a0  FUN_100211a0  (71 bytes)
 * undefined4 FUN_100211a0(float param_1)
 * called by: FUN_10021260
 */
undefined4 __thiscall FUN_100211a0(void *this,float param_1)

{
  if (param_1 < *(float *)((int)this + 0x98)) {
    return 0;
  }
  if ((0.0 < *(float *)((int)this + 0x9c)) && (*(float *)((int)this + 0x9c) < param_1)) {
    return 0;
  }
  return 1;
}

/* 10021260  FUN_10021260  (2105 bytes)
 * undefined FUN_10021260(int * param_1)
 * called by: CFuncTank::Think
 */
void __fastcall FUN_10021260(int *param_1)

{
  float fVar1;
  edict_t *pEdict;
  int iVar2;
  float fVar3;
  undefined4 *puVar4;
  float *pfVar5;
  Vector *this;
  Vector *pVVar6;
  int *piVar7;
  float *pfVar8;
  float10 fVar9;
  Vector *pVVar10;
  Vector *pVVar11;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  Vector VStack_ec;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  Vector VStack_c8;
  Vector VStack_bc;
  Vector VStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  Vector VStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  Vector VStack_74;
  Vector VStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  float fStack_8;
  
  pEdict = (*g_engfuncs.pfnFindClientInPVS)(*(edict_t **)(param_1[1] + 0x208));
  fStack_100 = 0.0;
  if (param_1[0x15] == 0) {
    iVar2 = param_1[1];
    if ((*(byte *)(iVar2 + 0x1a0) & 1) == 0) {
      return;
    }
    *(float *)(iVar2 + 0x104) = *(float *)(iVar2 + 0x100) + 0.1;
    if ((pEdict == (edict_t *)0x0) ||
       (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar2 == 0)) {
      iVar2 = param_1[1];
      if ((*(byte *)(iVar2 + 0x1a0) & 1) == 0) {
        return;
      }
      *(float *)(iVar2 + 0x104) = *(float *)(iVar2 + 0x100) + 2.0;
      return;
    }
    fVar3 = (float)FUN_10021190(pEdict);
    if (fVar3 == 0.0) {
      return;
    }
    (*g_engfuncs.pfnAngleVectors)((float *)(param_1[1] + 0x50),&VStack_b0.x,&fStack_118,&fStack_f8);
    fVar1 = (float)param_1[0x2a];
    puVar4 = (undefined4 *)
             Vector::Vector(&VStack_98,fStack_f8 * fVar1,fStack_f4 * fVar1,fStack_f0 * fVar1);
    Vector::Vector(&VStack_c8,puVar4);
    fVar1 = (float)param_1[0x29];
    puVar4 = (undefined4 *)
             Vector::Vector(&VStack_74,fStack_118 * fVar1,fStack_114 * fVar1,fStack_110 * fVar1);
    Vector::Vector(&VStack_bc,puVar4);
    pVVar11 = &VStack_c8;
    pfVar8 = &fStack_8c;
    pVVar6 = &VStack_bc;
    pVVar10 = &VStack_68;
    pfVar5 = (float *)Vector::operator*(&VStack_b0,&fStack_80,(float)param_1[0x28]);
    this = (Vector *)Vector::operator+((Vector *)(param_1[1] + 8),&fStack_a4,pfVar5);
    pVVar6 = (Vector *)Vector::operator+(this,&pVVar10->x,&pVVar6->x);
    puVar4 = (undefined4 *)Vector::operator+(pVVar6,pfVar8,&pVVar11->x);
    Vector::Vector(&VStack_ec,puVar4);
    fStack_d4 = VStack_ec.x;
    fStack_d0 = VStack_ec.y;
    fStack_cc = VStack_ec.z;
    fStack_118 = *(float *)((int)fVar3 + 0x88) + *(float *)((int)fVar3 + 500);
    fStack_114 = *(float *)((int)fVar3 + 0x8c) + *(float *)((int)fVar3 + 0x1f8);
    fStack_110 = *(float *)((int)fVar3 + 0x90) + *(float *)((int)fVar3 + 0x1fc);
    fVar1 = SQRT((fStack_114 - VStack_ec.y) * (fStack_114 - VStack_ec.y) +
                 (fStack_110 - VStack_ec.z) * (fStack_110 - VStack_ec.z) +
                 (fStack_118 - VStack_ec.x) * (fStack_118 - VStack_ec.x));
    fStack_fc = fVar1;
    fStack_f4 = fStack_114;
    fStack_f0 = fStack_110;
    fStack_44 = fStack_118;
    fStack_40 = fStack_114;
    fStack_3c = fStack_110;
    iVar2 = FUN_100211a0(param_1,fVar1);
    if (iVar2 == 0) {
      return;
    }
    UTIL_TraceLine(&fStack_d4,&fStack_44,0,*(undefined4 *)(param_1[1] + 0x208),auStack_38);
    if ((fStack_28 == 1.0) || (fStack_8 == fVar3)) {
      piVar7 = *(int **)((int)fVar3 + 0x7c);
      iVar2 = FUN_100211a0(param_1,fVar1);
      if ((iVar2 != 0) &&
         ((piVar7 != (int *)0x0 && (iVar2 = (**(code **)(*piVar7 + 0xac))(), iVar2 != 0)))) {
        fStack_100 = 1.4013e-45;
        piVar7 = (int *)(**(code **)(*param_1 + 0x110))(&VStack_c8,piVar7);
        param_1[0x30] = *piVar7;
        param_1[0x31] = piVar7[1];
        param_1[0x32] = piVar7[2];
      }
    }
    iVar2 = param_1[1];
    fStack_118 = (float)param_1[0x30] - *(float *)(iVar2 + 8);
    fStack_114 = (float)param_1[0x31] - *(float *)(iVar2 + 0xc);
    fStack_110 = (float)param_1[0x32] - *(float *)(iVar2 + 0x10);
    fStack_f4 = fStack_114;
    fStack_f0 = fStack_110;
    fStack_e0 = fStack_118;
    fStack_dc = fStack_114;
    fStack_d8 = fStack_110;
    pfVar8 = (float *)UTIL_VecToAngles(&VStack_c8.x,&fStack_e0);
    fStack_10c = *pfVar8;
    fStack_108 = pfVar8[1];
    fStack_104 = pfVar8[2];
    FUN_10021aa0(param_1,&fStack_10c,
                 SQRT(fStack_dc * fStack_dc + fStack_d8 * fStack_d8 + fStack_e0 * fStack_e0));
  }
  else {
    iVar2 = *(int *)(param_1[0x15] + 4);
    fStack_108 = *(float *)(iVar2 + 0x78);
    fStack_104 = *(float *)(iVar2 + 0x7c);
    fStack_10c = -*(float *)(iVar2 + 0x74);
    *(float *)(param_1[1] + 0x104) = *(float *)(param_1[1] + 0x100) + 0.05;
    fVar3 = fStack_fc;
  }
  fStack_10c = -fStack_10c;
  fVar9 = FUN_10077230(fStack_108,(float)param_1[0x1a]);
  fStack_108 = (float)(fVar9 + (float10)(float)param_1[0x1a]);
  fVar9 = FUN_10077230(fStack_10c,(float)param_1[0x1e]);
  fStack_10c = (float)(fVar9 + (float10)(float)param_1[0x1e]);
  fVar1 = (float)param_1[0x1c] + (float)param_1[0x1a];
  if (((fStack_108 <= (float)param_1[0x1c] + (float)param_1[0x1a]) &&
      (fVar1 = (float)param_1[0x1a] - (float)param_1[0x1c],
      (float)param_1[0x1a] - (float)param_1[0x1c] <= fStack_108)) &&
     (fVar1 = fStack_108, fStack_100 != 0.0)) {
    param_1[0x24] = (int)gpGlobals->time;
  }
  fStack_108 = fVar1;
  fVar9 = FUN_10077230(fStack_108,*(float *)(param_1[1] + 0x54));
  fStack_fc = (float)fVar9;
  *(float *)(param_1[1] + 0x60) = (float)(fVar9 * (float10)10.0);
  iVar2 = param_1[1];
  if (*(float *)(iVar2 + 0x60) <= (float)param_1[0x1b]) {
    if (*(float *)(iVar2 + 0x60) < -(float)param_1[0x1b]) {
      *(float *)(iVar2 + 0x60) = -(float)param_1[0x1b];
    }
  }
  else {
    *(int *)(iVar2 + 0x60) = param_1[0x1b];
  }
  fVar1 = (float)param_1[0x1e] + (float)param_1[0x20];
  if ((fStack_10c <= (float)param_1[0x1e] + (float)param_1[0x20]) &&
     (fVar1 = fStack_10c, fStack_10c < (float)param_1[0x1e] - (float)param_1[0x20])) {
    fVar1 = (float)param_1[0x1e] - (float)param_1[0x20];
  }
  fStack_10c = fVar1;
  fVar9 = FUN_10077230(fStack_10c,*(float *)(param_1[1] + 0x50));
  fStack_100 = (float)fVar9;
  *(float *)(param_1[1] + 0x5c) = (float)(fVar9 * (float10)10.0);
  iVar2 = param_1[1];
  if (*(float *)(iVar2 + 0x5c) <= (float)param_1[0x1f]) {
    if (*(float *)(iVar2 + 0x5c) < -(float)param_1[0x1f]) {
      *(float *)(iVar2 + 0x5c) = -(float)param_1[0x1f];
    }
  }
  else {
    *(int *)(iVar2 + 0x5c) = param_1[0x1f];
  }
  if (param_1[0x15] == 0) {
    if ((gpGlobals->time - (float)param_1[0x24] < (float)param_1[0x25]) &&
       (((ABS(fStack_100) < (float)param_1[0x21] && (ABS(fStack_fc) < (float)param_1[0x1d])) ||
        ((*(byte *)(param_1[1] + 0x1a0) & 0x10) != 0)))) {
      (*g_engfuncs.pfnAngleVectors)
                ((float *)(param_1[1] + 0x50),&fStack_f8,(float *)0x0,(float *)0x0);
      if ((*(byte *)(param_1[1] + 0x1a0) & 0x10) == 0) {
LAB_100218af:
        (*g_engfuncs.pfnAngleVectors)((float *)(param_1[1] + 0x50),&fStack_a4,&fStack_5c,&fStack_50)
        ;
        VStack_ec.z = (float)param_1[0x2a];
        VStack_ec.x = fStack_50 * VStack_ec.z;
        VStack_ec.y = fStack_4c * VStack_ec.z;
        VStack_ec.z = fStack_48 * VStack_ec.z;
        fStack_110 = (float)param_1[0x29];
        fStack_118 = fStack_5c * fStack_110;
        fStack_114 = fStack_58 * fStack_110;
        fStack_110 = fStack_54 * fStack_110;
        fStack_78 = (float)param_1[0x28];
        fStack_80 = fStack_a4 * fStack_78;
        fStack_7c = fStack_a0 * fStack_78;
        fStack_78 = fStack_9c * fStack_78;
        Vector::Vector(&VStack_68,&fStack_80);
        iVar2 = param_1[1];
        fStack_8c = VStack_68.x + *(float *)(iVar2 + 8);
        fStack_88 = VStack_68.y + *(float *)(iVar2 + 0xc);
        fStack_84 = VStack_68.z + *(float *)(iVar2 + 0x10);
        Vector::Vector(&VStack_74,&fStack_8c);
        VStack_98.x = VStack_74.x + fStack_118;
        VStack_98.y = VStack_74.y + fStack_114;
        VStack_98.z = VStack_74.z + fStack_110;
        Vector::Vector(&VStack_b0,&VStack_98.x);
        fStack_118 = VStack_b0.x + VStack_ec.x;
        fStack_114 = VStack_b0.y + VStack_ec.y;
        fStack_110 = VStack_b0.z + VStack_ec.z;
        Vector::Vector(&VStack_bc,&fStack_118);
        VStack_c8.y = VStack_bc.y;
        VStack_c8.z = VStack_bc.z;
        VStack_c8.x = VStack_bc.x;
        (**(code **)(*param_1 + 0x10c))(&VStack_c8,&fStack_f8,param_1[1]);
        return;
      }
      fVar1 = SQRT(fStack_d8 * fStack_d8 + fStack_dc * fStack_dc + fStack_e0 * fStack_e0);
      fStack_118 = fStack_f8 * fVar1;
      VStack_ec.x = fStack_118 + fStack_d4;
      fStack_114 = fStack_f4 * fVar1 + fStack_d0;
      fStack_110 = fVar1 * fStack_f0 + fStack_cc;
      VStack_ec.y = fStack_114;
      VStack_ec.z = fStack_110;
      UTIL_TraceLine(&fStack_d4,&VStack_ec,0,*(undefined4 *)(param_1[1] + 0x208),auStack_38);
      if (fStack_8 == fVar3) goto LAB_100218af;
    }
    param_1[0x22] = 0;
  }
  return;
}

/* 10021aa0  FUN_10021aa0  (175 bytes)
 * undefined FUN_10021aa0(float * param_1, float param_2)
 * called by: FUN_10021260
 */
void __thiscall FUN_10021aa0(void *this,float *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  if ((*(float *)((int)this + 0xa4) != 0.0) || (*(float *)((int)this + 0xa8) != 0.0)) {
    fVar1 = (float10)param_2 - (float10)*(float *)((int)this + 0xa8);
    fVar1 = fVar1 * fVar1;
    if (*(float *)((int)this + 0xa4) != 0.0) {
      fVar2 = (float10)fpatan((float10)*(float *)((int)this + 0xa4),
                              SQRT(fVar1 - (float10)*(float *)((int)this + 0xa4) *
                                           (float10)*(float *)((int)this + 0xa4)));
      param_1[1] = (float)(fVar2 * (float10)57.29577951308232 + (float10)param_1[1]);
    }
    if (*(float *)((int)this + 0xa8) != 0.0) {
      fVar1 = (float10)fpatan(-(float10)*(float *)((int)this + 0xa8),
                              SQRT(fVar1 - (float10)*(float *)((int)this + 0xa8) *
                                           (float10)*(float *)((int)this + 0xa8)));
      *param_1 = (float)(fVar1 * (float10)57.29577951308232 + (float10)*param_1);
    }
  }
  return;
}

/* 10021d90  FUN_10021d90  (537 bytes)
 * undefined FUN_10021d90(float * param_1, float * param_2, float * param_3, undefined4 param_4)
 * called by: CFuncTankLaser::Fire, CFuncTankMortar::Fire
 */
void __thiscall
FUN_10021d90(void *this,float *param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  Vector VStack_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  Vector VStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  Vector VStack_48;
  Vector VStack_3c;
  Vector VStack_30;
  Vector VStack_24;
  Vector VStack_18;
  Vector VStack_c;
  
  do {
    fVar3 = (float10)(*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
    fVar4 = (float10)(*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
    fVar1 = (float)(fVar4 + (float10)(float)fVar3);
    fVar3 = (float10)(*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
    fStack_64 = (float)fVar3;
    fVar3 = (float10)(*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
    fVar3 = fVar3 + (float10)fStack_64;
  } while ((float10)1.0 < (float10)fVar1 * (float10)fVar1 + fVar3 * fVar3);
  fVar3 = fVar3 * (float10)param_3[1];
  puVar2 = (undefined4 *)
           Vector::Vector(&VStack_18,(float)(fVar3 * (float10)gpGlobals->v_up[0]),
                          (float)(fVar3 * (float10)gpGlobals->v_up[1]),
                          (float)(fVar3 * (float10)gpGlobals->v_up[2]));
  Vector::Vector(&VStack_30,puVar2);
  Vector::Vector(&VStack_3c,&VStack_30.x);
  fVar1 = fVar1 * *param_3;
  puVar2 = (undefined4 *)
           Vector::Vector(&VStack_c,fVar1 * gpGlobals->v_right[0],fVar1 * gpGlobals->v_right[1],
                          fVar1 * gpGlobals->v_right[2]);
  Vector::Vector(&VStack_24,puVar2);
  Vector::Vector(&VStack_88,&VStack_24.x);
  fStack_54 = VStack_88.x + *param_2;
  fStack_50 = VStack_88.y + param_2[1];
  fStack_4c = VStack_88.z + param_2[2];
  Vector::Vector(&VStack_48,&fStack_54);
  fStack_7c = VStack_3c.x + VStack_48.x;
  fStack_78 = VStack_3c.y + VStack_48.y;
  fStack_74 = VStack_3c.z + VStack_48.z;
  Vector::Vector(&VStack_70,&fStack_7c);
  fStack_78 = VStack_70.y * 4096.0;
  fStack_74 = VStack_70.z * 4096.0;
  VStack_88.x = VStack_70.x * 4096.0 + *param_1;
  VStack_88.y = fStack_78 + param_1[1];
  VStack_88.z = fStack_74 + param_1[2];
  VStack_70.y = VStack_88.y;
  VStack_70.z = VStack_88.z;
  fStack_60 = VStack_88.x;
  fStack_5c = VStack_88.y;
  fStack_58 = VStack_88.z;
  UTIL_TraceLine(param_1,&fStack_60,0,*(undefined4 *)(*(int *)((int)this + 4) + 0x208),param_4);
  return;
}

/* 10021fb0  FUN_10021fb0  (96 bytes)
 * undefined FUN_10021fb0(int param_1)
 * called by: CFuncTank::Think
 */
void __fastcall FUN_10021fb0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar1 + 0x1e8) != 0) && ((*(uint *)(iVar1 + 0x1a0) & 0x8000) == 0)) {
    *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) | 0x8000;
    EMIT_SOUND_DYN(gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1e8),
                   *(undefined4 *)(*(int *)(param_1 + 4) + 0x208),6,
                   gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1e8),0x3f59999a,
                   0x3f4ccccd,0);
  }
  return;
}

/* 10022010  FUN_10022010  (90 bytes)
 * undefined FUN_10022010(int param_1)
 * called by: CFuncTank::Think, CFuncTank::Use
 */
void __fastcall FUN_10022010(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(uint *)(iVar1 + 0x1a0) & 0x8000) != 0) {
    EMIT_SOUND_DYN(gpGlobals->pStringBase + *(int *)(iVar1 + 0x1e8),*(undefined4 *)(iVar1 + 0x208),6
                   ,gpGlobals->pStringBase + *(int *)(iVar1 + 0x1e8),0,0,0x20);
  }
  *(uint *)(*(int *)(param_1 + 4) + 0x1a0) = *(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 0xffff7fff;
  return;
}

/* 10022b30  FUN_10022b30  (10 bytes)
 * undefined FUN_10022b30()
 */
void __fastcall FUN_10022b30(undefined4 param_1)

{
  FUN_10022b40(param_1);
  FUN_10022b70();
  return;
}

/* 10022b40  FUN_10022b40  (41 bytes)
 * undefined FUN_10022b40(undefined4 param_1)
 * called by: FUN_10022b30
 */
void __fastcall FUN_10022b40(undefined4 param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  DAT_100ae438 = local_1;
  DAT_100ae43c = operator_new(0xc);
  *(void **)DAT_100ae43c = DAT_100ae43c;
  *(void **)((int)DAT_100ae43c + 4) = DAT_100ae43c;
  DAT_100ae440 = 0;
  return;
}

/* 10022b70  FUN_10022b70  (12 bytes)
 * undefined FUN_10022b70(void)
 * called by: FUN_10022b30
 */
void FUN_10022b70(void)

{
  FUN_1007dd3e(0x10022b80);
  return;
}

/* 10022b80  FUN_10022b80  (88 bytes)
 * undefined FUN_10022b80()
 */
void FUN_10022b80(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = DAT_100ae43c;
  piVar2 = (int *)*DAT_100ae43c;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_1007dd7f(piVar2);
    DAT_100ae440 = DAT_100ae440 + -1;
    piVar2 = piVar1;
  }
  FUN_1007dd7f(DAT_100ae43c);
  DAT_100ae43c = (int *)0x0;
  DAT_100ae440 = 0;
  return;
}

/* 10022be0  FUN_10022be0  (10 bytes)
 * undefined FUN_10022be0()
 */
void __fastcall FUN_10022be0(undefined4 param_1)

{
  FUN_10022bf0(param_1);
  FUN_10022c20();
  return;
}

/* 10022bf0  FUN_10022bf0  (41 bytes)
 * undefined FUN_10022bf0(undefined4 param_1)
 * called by: FUN_10022be0
 */
void __fastcall FUN_10022bf0(undefined4 param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  DAT_100a9428 = local_1;
  DAT_100a942c = operator_new(0xc);
  *(void **)DAT_100a942c = DAT_100a942c;
  *(void **)((int)DAT_100a942c + 4) = DAT_100a942c;
  DAT_100a9430 = 0;
  return;
}

/* 10022c20  FUN_10022c20  (12 bytes)
 * undefined FUN_10022c20(void)
 * called by: FUN_10022be0
 */
void FUN_10022c20(void)

{
  FUN_1007dd3e(0x10022c30);
  return;
}

/* 10022c30  FUN_10022c30  (88 bytes)
 * undefined FUN_10022c30()
 */
void FUN_10022c30(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = DAT_100a942c;
  piVar2 = (int *)*DAT_100a942c;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_1007dd7f(piVar2);
    DAT_100a9430 = DAT_100a9430 + -1;
    piVar2 = piVar1;
  }
  FUN_1007dd7f(DAT_100a942c);
  DAT_100a942c = (int *)0x0;
  DAT_100a9430 = 0;
  return;
}

/* 10022c90  FUN_10022c90  (142 bytes)
 * undefined FUN_10022c90(float * param_1, float * param_2, float * param_3, float * param_4)
 * called by: FUN_100237d0, FUN_10023d40, FUN_10025000, FUN_100255d0
 */
void __cdecl FUN_10022c90(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_10022d20(param_3,&local_24,&local_c,&local_18);
  fVar1 = *param_1;
  fVar2 = param_1[2];
  fVar3 = param_1[1];
  fVar4 = param_2[1];
  fVar5 = *param_1;
  fVar6 = param_1[2];
  fVar7 = param_1[1];
  fVar8 = param_2[2];
  *param_4 = local_c * param_1[1] + local_18 * param_1[2] + local_24 * *param_1 + *param_2;
  param_4[2] = local_4 * fVar7 + local_10 * fVar6 + local_1c * fVar5 + fVar8;
  param_4[1] = local_8 * fVar3 + local_14 * fVar2 + local_20 * fVar1 + fVar4;
  return;
}

/* 10022d20  FUN_10022d20  (235 bytes)
 * undefined FUN_10022d20(float * param_1, float * param_2, float * param_3, float * param_4)
 * called by: FUN_10022c90, FUN_10022e10
 */
void __cdecl FUN_10022d20(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar6 = (float10)fsin((float10)param_1[1] * (float10)0.017453292);
  fVar1 = (float)fVar6;
  fVar6 = (float10)fcos((float10)param_1[1] * (float10)0.017453292);
  fVar7 = (float10)fsin((float10)*param_1 * (float10)0.017453292);
  fVar2 = (float)fVar7;
  fVar7 = (float10)fcos((float10)*param_1 * (float10)0.017453292);
  fVar3 = (float)fVar7;
  fVar7 = (float10)fsin((float10)param_1[2] * (float10)0.017453292);
  fVar4 = (float)fVar7;
  fVar7 = (float10)fcos((float10)param_1[2] * (float10)0.017453292);
  fVar5 = (float)fVar7;
  if (param_2 != (float *)0x0) {
    *param_2 = (float)((float10)fVar3 * fVar6);
    param_2[1] = fVar3 * fVar1;
    param_2[2] = -fVar2;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = (float)((float10)fVar4 * (float10)fVar2 * fVar6 - (float10)fVar5 * (float10)fVar1);
    param_3[1] = (float)((float10)fVar5 * fVar6 + (float10)fVar4 * (float10)fVar2 * (float10)fVar1);
    param_3[2] = fVar4 * fVar3;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = (float)((float10)fVar4 * (float10)fVar1 + (float10)fVar5 * (float10)fVar2 * fVar6);
    param_4[1] = (float)((float10)fVar5 * (float10)fVar2 * (float10)fVar1 - (float10)fVar4 * fVar6);
    param_4[2] = fVar5 * fVar3;
    return;
  }
  return;
}

/* 10022e10  FUN_10022e10  (164 bytes)
 * undefined FUN_10022e10(float * param_1, float * param_2, float * param_3, float * param_4)
 * called by: FUN_100237d0, FUN_10023d40, FUN_10025000, FUN_100255d0
 */
void __cdecl FUN_10022e10(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *param_1 - *param_2;
  fVar2 = param_1[1] - param_2[1];
  fVar3 = param_1[2] - param_2[2];
  FUN_10022d20(param_3,&local_24,&local_18,&local_c);
  *param_4 = local_24 * fVar1 + local_20 * fVar2 + local_1c * fVar3;
  param_4[1] = local_18 * fVar1 + local_14 * fVar2 + local_10 * fVar3;
  param_4[2] = local_c * fVar1 + local_8 * fVar2 + local_4 * fVar3;
  return;
}

/* 10022ec0  FUN_10022ec0  (32 bytes)
 * uint FUN_10022ec0(void)
 * called by: FUN_10022ee0, FUN_10022f50, FUN_10022f90, FUN_10022fd0
 */
uint FUN_10022ec0(void)

{
  if (DAT_100ae450 == 0) {
    return 0xffffffff;
  }
  return (uint)(*(int *)(*(int *)(DAT_100ae450 + 0xa4) + 0x20) == 0);
}

/* 10022ee0  FUN_10022ee0  (107 bytes)
 * undefined FUN_10022ee0(float * param_1, float * param_2, int param_3)
 * called by: FUN_10022ee0
 */
void __cdecl FUN_10022ee0(float *param_1,float *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = FUN_10022ec0();
  if (uVar1 == 0) {
    PTR_FUN_1009eb14 = FUN_10024810;
    FUN_10024810(param_1,param_2,param_3);
    return;
  }
  if (uVar1 != 1) {
    FUN_10023040(param_1,param_2,param_3);
    (*(code *)PTR_FUN_1009eb14)(param_1,param_2,param_3);
    return;
  }
  PTR_FUN_1009eb14 = FUN_10023040;
  FUN_10023040(param_1,param_2,param_3);
  return;
}

/* 10022f50  FUN_10022f50  (56 bytes)
 * undefined FUN_10022f50()
 */
void FUN_10022f50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = FUN_10022ec0();
  if (uVar1 == 0) {
    pcVar2 = FUN_10025000;
  }
  else {
    if (uVar1 != 1) {
      return;
    }
    pcVar2 = FUN_100237d0;
  }
  PTR_FUN_1009eb18 = pcVar2;
  (*pcVar2)(param_1,param_2,param_3,param_4);
  return;
}

/* 10022f90  FUN_10022f90  (56 bytes)
 * undefined FUN_10022f90()
 */
void FUN_10022f90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = FUN_10022ec0();
  if (uVar1 == 0) {
    pcVar2 = FUN_100255d0;
  }
  else {
    if (uVar1 != 1) {
      return;
    }
    pcVar2 = FUN_10023d40;
  }
  PTR_FUN_1009eb1c = pcVar2;
  (*pcVar2)(param_1,param_2,param_3,param_4);
  return;
}

/* 10022fd0  FUN_10022fd0  (46 bytes)
 * undefined FUN_10022fd0()
 */
void FUN_10022fd0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = FUN_10022ec0();
  if (uVar1 == 0) {
    pcVar2 = FUN_100247c0;
  }
  else {
    if (uVar1 != 1) {
      return;
    }
    pcVar2 = FUN_10023000;
  }
  PTR_FUN_1009eb20 = pcVar2;
  (*pcVar2)(param_1,param_2);
  return;
}

/* 10023000  FUN_10023000  (63 bytes)
 * undefined FUN_10023000(int param_1, undefined4 * param_2)
 * called by: FUN_10022fd0
 */
void __cdecl FUN_10023000(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(*(int *)(DAT_100ae450 + 0x7c) + 0x24 + param_1 * 0x40) * 0xd + iVar2;
    iVar2 = iVar2 + 1;
    *param_2 = *(undefined4 *)(*(int *)(DAT_100ae450 + 0xa4) + 8 + iVar1 * 4);
    param_2 = param_2 + 1;
  } while (iVar2 < 6);
  return;
}

/* 10023040  FUN_10023040  (128 bytes)
 * undefined FUN_10023040(float * param_1, float * param_2, int param_3)
 * called by: FUN_10022ee0
 */
void __cdecl FUN_10023040(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = *param_1;
  fVar3 = param_2[1];
  fVar4 = param_1[1];
  fVar5 = param_2[2];
  fVar6 = param_1[2];
  *(undefined4 *)(param_3 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_3 + 0x30) = 0;
  *(float *)(param_3 + 0x14) = *param_2;
  *(float *)(param_3 + 0x18) = param_2[1];
  *(float *)(param_3 + 0x1c) = param_2[2];
  if (DAT_100ae450 != 0) {
    FUN_100230c0(param_1,param_2,0,*(uint **)(DAT_100ae450 + 0xa4),param_3,
                 SQRT((fVar1 - fVar2) * (fVar1 - fVar2) +
                      (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar5 - fVar6) * (fVar5 - fVar6)));
    return;
  }
  return;
}

/* 100230c0  FUN_100230c0  (905 bytes)
 * uint FUN_100230c0(float * param_1, float * param_2, undefined4 param_3, uint * param_4, int param_5, float param_6)
 * called by: FUN_10023040, FUN_100237d0, FUN_10023d40
 */
uint __cdecl
FUN_100230c0(float *param_1,float *param_2,int param_3,uint *param_4,int param_5,float param_6)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  edict_t *peVar5;
  float10 fVar6;
  float10 fVar7;
  int *piVar8;
  float *pfVar9;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  Vector local_60;
  Vector local_54;
  Vector local_48;
  Vector local_3c;
  Vector local_30;
  Vector local_24;
  Vector local_18;
  Vector local_c;
  
  DAT_100ae454 = '\x01';
  if (-1 < (int)*param_4) {
    do {
      Vector::Vector(&local_60,(undefined4 *)param_4[9]);
      Vector::Vector(&local_54,param_1);
      puVar2 = (undefined4 *)param_4[9];
      fVar6 = FUN_10023450(&local_54.x,&local_60.x);
      fVar1 = (float)(fVar6 - (float10)(float)puVar2[3]);
      Vector::Vector(&local_48,puVar2);
      Vector::Vector(&local_3c,param_2);
      fVar6 = FUN_10023450(&local_3c.x,&local_48.x);
      fVar6 = fVar6 - (float10)*(float *)(param_4[9] + 0xc);
      if ((fVar1 == 0.0) && (fVar6 == (float10)0.0)) {
        uVar3 = FUN_10023470(param_1,param_2,(int *)param_4[10],param_5,(float *)0x0,0);
        if ((char)uVar3 != '\0') goto LAB_1002338f;
LAB_100231e2:
        param_4 = (uint *)param_4[0xb];
      }
      else {
        if ((fVar1 < 0.0) || (fVar6 < (float10)0.0)) {
          if ((fVar1 <= 0.0) && (fVar6 <= (float10)0.0)) goto LAB_100231e2;
          local_78 = *param_2 - *param_1;
          local_74 = param_2[1] - param_1[1];
          local_70 = param_2[2] - param_1[2];
          FUN_10024c20(&local_78);
          Vector::Vector(&local_30,(undefined4 *)param_4[9]);
          Vector::Vector(&local_24,param_1);
          fVar6 = FUN_10023450(&local_24.x,&local_30.x);
          Vector::Vector(&local_18,(undefined4 *)param_4[9]);
          Vector::Vector(&local_c,&local_78);
          fVar7 = FUN_10023450(&local_c.x,&local_18.x);
          fVar7 = ((float10)*(float *)(param_4[9] + 0xc) - (float10)(float)fVar6) / fVar7;
          local_6c = (float)(fVar7 * (float10)local_78 + (float10)*param_1);
          local_68 = (float)(fVar7 * (float10)local_74 + (float10)param_1[1]);
          local_64 = (float)(fVar7 * (float10)local_70 + (float10)param_1[2]);
          if (fVar1 <= 0.0) {
            uVar3 = FUN_10023470(param_1,&local_6c,(int *)param_4[0xb],param_5,(float *)0x0,0);
            if ((char)uVar3 != '\0') goto LAB_1002338f;
            pfVar9 = (float *)param_4[9];
            piVar8 = (int *)param_4[10];
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_10023470(param_1,&local_6c,(int *)param_4[10],param_5,(float *)0x0,0);
            if ((char)uVar3 != '\0') goto LAB_1002338f;
            pfVar9 = (float *)param_4[9];
            piVar8 = (int *)param_4[0xb];
            uVar3 = 1;
          }
          uVar4 = FUN_10023470(&local_6c,param_2,piVar8,param_5,pfVar9,uVar3);
          if ((char)uVar4 == '\0') goto LAB_1002343c;
          goto LAB_1002338f;
        }
        param_4 = (uint *)param_4[10];
      }
    } while (-1 < (int)*param_4);
    if (DAT_100ae454 == '\0') goto LAB_10023211;
  }
  *(uint *)(param_5 + 4) = (uint)(*param_4 == 0xfffffffe);
  DAT_100ae454 = '\0';
LAB_10023211:
  uVar4 = *param_4;
  if (-2 < (int)uVar4) {
LAB_1002343c:
    return uVar4 & 0xffffff00;
  }
  *(uint *)(param_5 + 8) = (uint)(uVar4 == 0xffffffff);
  *(uint *)(param_5 + 0xc) = (uint)(*param_4 == 0xfffffffd);
  *(float *)(param_5 + 0x14) = *param_1;
  *(float *)(param_5 + 0x18) = param_1[1];
  *(float *)(param_5 + 0x1c) = param_1[2];
  *(undefined4 *)(param_5 + 0x30) = 0;
  *(undefined4 *)(param_5 + 0x24) = 0;
  *(undefined4 *)(param_5 + 0x28) = 0;
  *(undefined4 *)(param_5 + 0x2c) = 0;
  *(undefined4 *)(param_5 + 0x20) = 0;
LAB_1002338f:
  peVar5 = (*g_engfuncs.pfnPEntityOfEntIndex)(param_3);
  *(edict_t **)(param_5 + 0x30) = peVar5;
  local_6c = *(float *)(param_5 + 0x14) - *param_1;
  local_68 = *(float *)(param_5 + 0x18) - param_1[1];
  local_64 = *(float *)(param_5 + 0x1c) - param_1[2];
  if (param_6 == 0.0) {
    *(undefined4 *)(param_5 + 0x10) = 0;
  }
  else {
    Vector::Vector(&local_c,&local_6c);
    Vector::Vector(&local_18,&local_6c);
    fVar6 = FUN_10023450(&local_18.x,&local_c.x);
    *(float *)(param_5 + 0x10) = (float)(SQRT(fVar6) / (float10)param_6);
  }
  fVar1 = *(float *)(param_5 + 0x14);
  *param_2 = fVar1;
  param_2[1] = *(float *)(param_5 + 0x18);
  param_2[2] = *(float *)(param_5 + 0x1c);
  return CONCAT31((int3)((uint)fVar1 >> 8),1);
}

/* 10023450  FUN_10023450  (29 bytes)
 * float10 FUN_10023450(float * param_1, float * param_2)
 * called by: FUN_100230c0, FUN_100237d0, FUN_10023d40, FUN_10024890, FUN_10025000, FUN_100255d0
 */
float10 __cdecl FUN_10023450(float *param_1,float *param_2)

{
  return (float10)*param_1 * (float10)*param_2 +
         (float10)param_1[1] * (float10)param_2[1] + (float10)param_1[2] * (float10)param_2[2];
}

/* 10023470  FUN_10023470  (854 bytes)
 * undefined4 FUN_10023470(float * param_1, float * param_2, int * param_3, int param_4, float * param_5, undefined4 param_6)
 * called by: FUN_100230c0, FUN_10023470
 */
undefined4 __cdecl
FUN_10023470(float *param_1,float *param_2,int *param_3,int param_4,float *param_5,
            undefined4 param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  uVar1 = *param_3;
  while (-1 < (int)uVar1) {
    pfVar4 = (float *)param_3[9];
    fVar2 = (*param_1 * *pfVar4 + param_1[1] * pfVar4[1] + param_1[2] * pfVar4[2]) - pfVar4[3];
    fVar3 = (*param_2 * *pfVar4 + param_2[1] * pfVar4[1] + param_2[2] * pfVar4[2]) - pfVar4[3];
    if ((fVar2 == 0.0) && (fVar3 == 0.0)) {
      pfVar4 = (float *)FUN_10023470(param_1,param_2,(int *)param_3[10],param_4,param_5,param_6);
      if ((char)pfVar4 != '\0') goto LAB_1002364a;
      param_3 = (int *)param_3[0xb];
    }
    else if ((fVar2 < 0.0) || (fVar3 < 0.0)) {
      if ((0.0 < fVar2) || (0.0 < fVar3)) {
        local_30 = *param_2 - *param_1;
        local_2c = param_2[1] - param_1[1];
        local_28 = param_2[2] - param_1[2];
        FUN_10024c20(&local_30);
        pfVar4 = (float *)param_3[9];
        local_4 = param_1[2];
        local_18 = *pfVar4;
        local_14 = pfVar4[1];
        local_10 = pfVar4[2];
        fVar3 = (pfVar4[3] - (*param_1 * *pfVar4 + param_1[1] * pfVar4[1] + local_4 * pfVar4[2])) /
                (local_18 * local_30 + local_14 * local_2c + local_10 * local_28);
        local_24 = fVar3 * local_30 + *param_1;
        local_20 = fVar3 * local_2c + param_1[1];
        local_1c = fVar3 * local_28 + param_1[2];
        if (fVar2 <= 0.0) {
          uVar5 = FUN_10023470(param_1,&local_24,(int *)param_3[0xb],param_4,param_5,param_6);
          if ((char)uVar5 != '\0') {
            return CONCAT31((int3)((uint)uVar5 >> 8),1);
          }
          uVar5 = FUN_10023470(&local_24,param_2,(int *)param_3[10],param_4,(float *)param_3[9],0);
          return uVar5;
        }
        uVar5 = FUN_10023470(param_1,&local_24,(int *)param_3[10],param_4,param_5,param_6);
        if ((char)uVar5 != '\0') {
          return CONCAT31((int3)((uint)uVar5 >> 8),1);
        }
        uVar5 = FUN_10023470(&local_24,param_2,(int *)param_3[0xb],param_4,(float *)param_3[9],1);
        return uVar5;
      }
      param_3 = (int *)param_3[0xb];
    }
    else {
      param_3 = (int *)param_3[10];
    }
    uVar1 = *param_3;
  }
  if (DAT_100ae454 != '\0') {
    *(uint *)(param_4 + 4) = (uint)(*param_3 == 0xfffffffe);
    DAT_100ae454 = '\0';
  }
  uVar1 = *param_3;
  if (-2 < (int)uVar1) {
    return uVar1 & 0xffffff00;
  }
  *(uint *)(param_4 + 8) = (uint)(uVar1 == 0xffffffff);
  *(uint *)(param_4 + 0xc) = (uint)(*param_3 == 0xfffffffd);
  *(float *)(param_4 + 0x14) = *param_1;
  *(float *)(param_4 + 0x18) = param_1[1];
  *(float *)(param_4 + 0x1c) = param_1[2];
  *(undefined4 *)(param_4 + 0x30) = 0;
  if (param_5 == (float *)0x0) {
    *(undefined4 *)(param_4 + 0x24) = 0;
    *(undefined4 *)(param_4 + 0x28) = 0;
    *(undefined4 *)(param_4 + 0x2c) = 0;
    *(undefined4 *)(param_4 + 0x20) = 0;
    return 1;
  }
  if ((char)param_6 != '\0') {
    *(float *)(param_4 + 0x24) = *param_5;
    *(float *)(param_4 + 0x28) = param_5[1];
    *(float *)(param_4 + 0x2c) = param_5[2];
    *(float *)(param_4 + 0x20) = param_5[3];
    return CONCAT31((int3)((uint)param_5 >> 8),1);
  }
  *(float *)(param_4 + 0x24) = -*param_5;
  *(float *)(param_4 + 0x28) = -param_5[1];
  *(float *)(param_4 + 0x2c) = -param_5[2];
  *(float *)(param_4 + 0x20) = -param_5[3];
  pfVar4 = param_5;
LAB_1002364a:
  return CONCAT31((int3)((uint)pfVar4 >> 8),1);
}

/* 100237d0  FUN_100237d0  (1390 bytes)
 * undefined FUN_100237d0(float * param_1, float * param_2, int param_3, int param_4)
 * called by: FUN_10022f50
 */
void __cdecl FUN_100237d0(float *param_1,float *param_2,int param_3,int param_4)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float10 fVar16;
  float10 fVar17;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float *local_68;
  int local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [6];
  Vector local_18;
  Vector local_c;
  
  fVar2 = *param_2;
  fVar3 = *param_1;
  fVar4 = param_2[1];
  fVar5 = param_1[1];
  fVar6 = param_2[2];
  fVar7 = param_1[2];
  *(undefined4 *)(param_4 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(float *)(param_4 + 0x14) = *param_2;
  *(float *)(param_4 + 0x18) = param_2[1];
  *(float *)(param_4 + 0x1c) = param_2[2];
  local_6c = SQRT((fVar2 - fVar3) * (fVar2 - fVar3) +
                  (fVar4 - fVar5) * (fVar4 - fVar5) + (fVar6 - fVar7) * (fVar6 - fVar7));
  if (DAT_100ae450 != 0) {
    FUN_100230c0(param_1,param_2,0,*(uint **)(DAT_100ae450 + 0xa4),param_4,local_6c);
    local_9c = *param_2 - *param_1;
    piVar10 = (int *)*DAT_100ae43c;
    local_98 = param_2[1] - param_1[1];
    local_94 = param_2[2] - param_1[2];
    if (piVar10 != DAT_100ae43c) {
      do {
        iVar9 = piVar10[2];
        local_64 = (*(int *)(iVar9 + 0x208) - DAT_100ae458) / 0x324;
        if (*(int *)(iVar9 + 0x208) != param_3) {
          local_68 = (float *)(iVar9 + 8);
          local_3c = local_9c;
          iVar14 = local_64 * 0x14;
          fVar3 = *(float *)(&DAT_100a9448 + iVar14);
          local_48 = *(float *)(&DAT_100a943c + iVar14);
          local_38 = local_98;
          local_44 = *(undefined4 *)(&DAT_100a9440 + iVar14);
          fVar4 = SQRT(local_9c * local_9c + local_98 * local_98 + local_94 * local_94);
          local_34 = local_94;
          local_40 = *(undefined4 *)(&DAT_100a9444 + iVar14);
          local_54 = local_9c;
          local_60 = *param_1;
          local_50 = local_98;
          local_5c = param_1[1];
          pfVar13 = (float *)(iVar9 + 0x50);
          local_4c = local_94;
          local_58 = param_1[2];
          sVar8 = *(short *)(&DAT_100a9438 + iVar14);
          fVar16 = FUN_10023450(&local_48,&local_3c);
          fVar17 = FUN_10023450(&local_60,&local_54);
          fVar2 = (float)(((float10)(float)fVar16 - fVar17) / (float10)fVar4);
          if ((fVar2 <= fVar4 + fVar3) && (-fVar3 <= fVar2)) {
            if (0.0 <= fVar2) {
              if (fVar2 <= fVar4) {
                local_78 = *(float *)(&DAT_100a943c + iVar14) -
                           ((fVar2 * local_9c) / fVar4 + *param_1);
                local_74 = *(float *)(&DAT_100a9440 + iVar14) -
                           ((fVar2 * local_98) / fVar4 + param_1[1]);
                local_70 = *(float *)(&DAT_100a9444 + iVar14) -
                           ((fVar2 * local_94) / fVar4 + param_1[2]);
              }
              else {
                local_78 = *(float *)(&DAT_100a943c + iVar14) - *param_2;
                local_74 = *(float *)(&DAT_100a9440 + iVar14) - param_2[1];
                local_70 = *(float *)(&DAT_100a9444 + iVar14) - param_2[2];
              }
            }
            else {
              local_78 = *(float *)(&DAT_100a943c + iVar14) - *param_1;
              local_74 = *(float *)(&DAT_100a9440 + iVar14) - param_1[1];
              local_70 = *(float *)(&DAT_100a9444 + iVar14) - param_1[2];
            }
            Vector::Vector(&local_18,&local_78);
            Vector::Vector(&local_c,&local_78);
            fVar16 = FUN_10023450(&local_c.x,&local_18.x);
            pfVar12 = local_68;
            if (SQRT(fVar16) <= (float10)fVar3) {
              FUN_10022e10(param_1,local_68,pfVar13,local_30 + 3);
              FUN_10022e10(param_2,pfVar12,pfVar13,local_30);
              iVar15 = 0;
              local_80 = 0.0;
              local_88 = 1.0;
              puVar1 = (uint *)(*(int *)(DAT_100ae450 + 0xa4) +
                               *(int *)(*(int *)(DAT_100ae450 + 0x7c) + 0x24 + sVar8 * 0x40) * 0x34)
              ;
              pfVar12 = (float *)(puVar1 + 2);
              iVar9 = (int)local_30 + -(int)pfVar12;
              iVar14 = (int)local_30 + -(int)pfVar12 + 0xc;
              do {
                if (*(float *)(iVar9 + (int)pfVar12) <= *(float *)(iVar14 + (int)pfVar12)) {
                  if ((pfVar12[3] < *(float *)(iVar9 + (int)pfVar12)) ||
                     (*(float *)(iVar14 + (int)pfVar12) < *pfVar12)) goto LAB_10023d1b;
                  fVar2 = *(float *)(iVar9 + (int)pfVar12) - *(float *)(iVar14 + (int)pfVar12);
                  if (*(float *)(iVar14 + (int)pfVar12) <= pfVar12[3]) {
                    local_90 = 0.0;
                  }
                  else {
                    local_90 = (pfVar12[3] - *(float *)(iVar14 + (int)pfVar12)) / fVar2;
                  }
                  if (*pfVar12 <= *(float *)(iVar9 + (int)pfVar12)) goto LAB_10023c22;
                  fVar2 = (*pfVar12 - *(float *)(iVar14 + (int)pfVar12)) / fVar2;
                }
                else {
                  if ((pfVar12[3] < *(float *)(iVar14 + (int)pfVar12)) ||
                     (*(float *)(iVar9 + (int)pfVar12) < *pfVar12)) goto LAB_10023d1b;
                  fVar2 = *(float *)(iVar9 + (int)pfVar12) - *(float *)(iVar14 + (int)pfVar12);
                  if (*pfVar12 <= *(float *)(iVar14 + (int)pfVar12)) {
                    local_90 = 0.0;
                  }
                  else {
                    local_90 = (*pfVar12 - *(float *)(iVar14 + (int)pfVar12)) / fVar2;
                  }
                  if (*(float *)(iVar9 + (int)pfVar12) <= pfVar12[3]) {
LAB_10023c22:
                    fVar2 = 1.0;
                  }
                  else {
                    fVar2 = (pfVar12[3] - *(float *)(iVar14 + (int)pfVar12)) / fVar2;
                  }
                }
                if (local_80 < local_90) {
                  local_80 = local_90;
                }
                if (fVar2 < local_88) {
                  local_88 = fVar2;
                }
                if (local_88 < local_80) goto LAB_10023d1b;
                pfVar12 = pfVar12 + 1;
                iVar15 = iVar15 + 1;
              } while (iVar15 < 3);
              uVar11 = FUN_100230c0(local_30 + 3,local_30,local_64,puVar1,param_4,local_6c);
              if ((char)uVar11 != '\0') {
                pfVar12 = (float *)(param_4 + 0x14);
                FUN_10022c90(pfVar12,local_68,pfVar13,pfVar12);
                FUN_10022c90((float *)(param_4 + 0x24),(float *)&DAT_100ae45c,pfVar13,
                             (float *)(param_4 + 0x24));
                *param_2 = *pfVar12;
                param_2[1] = *(float *)(param_4 + 0x18);
                local_94 = *(float *)(param_4 + 0x1c);
                param_2[2] = local_94;
                local_9c = *param_2 - *param_1;
                local_98 = param_2[1] - param_1[1];
                local_94 = local_94 - param_1[2];
              }
            }
          }
        }
LAB_10023d1b:
        piVar10 = (int *)*piVar10;
      } while (piVar10 != DAT_100ae43c);
    }
  }
  return;
}

/* 10023d40  FUN_10023d40  (2091 bytes)
 * undefined FUN_10023d40(float * param_1, float * param_2, int param_3, int param_4)
 * called by: FUN_10022f90
 */
void __cdecl FUN_10023d40(float *param_1,float *param_2,int param_3,int param_4)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  float fVar5;
  float fVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float local_c0;
  float local_bc;
  float local_b8;
  int *local_b4;
  float local_b0;
  Vector *local_ac;
  float local_a8;
  float *local_a4;
  float local_a0;
  float *local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  int local_88;
  float local_84;
  float local_80;
  float local_7c;
  Vector local_78;
  float local_6c;
  float local_68;
  float local_64;
  Vector local_60;
  Vector local_54;
  float local_48 [6];
  Vector local_30;
  Vector local_24 [2];
  Vector local_c;
  
  local_c0 = *param_2 - *param_1;
  local_bc = param_2[1] - param_1[1];
  local_b8 = param_2[2] - param_1[2];
  *(undefined4 *)(param_4 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(float *)(param_4 + 0x14) = *param_2;
  *(float *)(param_4 + 0x18) = param_2[1];
  *(float *)(param_4 + 0x1c) = param_2[2];
  local_98 = SQRT(local_c0 * local_c0 + local_bc * local_bc + local_b8 * local_b8);
  if (DAT_100ae450 != 0) {
    FUN_100230c0(param_1,param_2,0,*(uint **)(DAT_100ae450 + 0xa4),param_4,local_98);
    local_c0 = *param_2 - *param_1;
    local_bc = param_2[1] - param_1[1];
    local_b8 = param_2[2] - param_1[2];
    local_b4 = (int *)*DAT_100ae43c;
    if (local_b4 != DAT_100ae43c) {
      do {
        iVar8 = local_b4[2];
        local_88 = (*(int *)(iVar8 + 0x208) - DAT_100ae458) / 0x324;
        if (*(int *)(iVar8 + 0x208) != param_3) {
          local_a4 = (float *)(iVar8 + 8);
          local_9c = (float *)(iVar8 + 0x50);
          iVar8 = local_88 * 0x14;
          local_6c = local_c0;
          local_84 = local_c0;
          sVar4 = *(short *)(&DAT_100a9438 + iVar8);
          local_a8 = *(float *)(&DAT_100a9448 + iVar8);
          pfVar10 = (float *)(&DAT_100a943c + iVar8);
          local_68 = local_bc;
          local_80 = local_bc;
          local_64 = local_b8;
          local_7c = local_b8;
          fVar14 = FUN_10023450(&local_84,&local_6c);
          fVar2 = (float)SQRT(fVar14);
          Vector::Vector(&local_30,&local_c0);
          Vector::Vector(&local_c,pfVar10);
          Vector::Vector(local_24,&local_c0);
          Vector::Vector(&local_54,param_1);
          fVar14 = FUN_10023450(&local_c.x,&local_30.x);
          fVar15 = FUN_10023450(&local_54.x,&local_24[0].x);
          fVar3 = (float)(((float10)(float)fVar14 - fVar15) / (float10)fVar2);
          if ((fVar3 <= fVar2 + local_a8) && (-local_a8 <= fVar3)) {
            if (0.0 <= fVar3) {
              if (fVar3 <= fVar2) {
                local_94 = *pfVar10 - ((fVar3 * local_c0) / fVar2 + *param_1);
                local_90 = *(float *)(&DAT_100a9440 + iVar8) -
                           ((fVar3 * local_bc) / fVar2 + param_1[1]);
                local_8c = *(float *)(&DAT_100a9444 + iVar8) -
                           ((fVar3 * local_b8) / fVar2 + param_1[2]);
              }
              else {
                local_94 = *pfVar10 - *param_2;
                local_90 = *(float *)(&DAT_100a9440 + iVar8) - param_2[1];
                local_8c = *(float *)(&DAT_100a9444 + iVar8) - param_2[2];
              }
            }
            else {
              local_94 = *pfVar10 - *param_1;
              local_90 = *(float *)(&DAT_100a9440 + iVar8) - param_1[1];
              local_8c = *(float *)(&DAT_100a9444 + iVar8) - param_1[2];
            }
            Vector::Vector(&local_60,&local_94);
            Vector::Vector(&local_78,&local_94);
            fVar14 = FUN_10023450(&local_78.x,&local_60.x);
            pfVar10 = local_a4;
            if (SQRT(fVar14) <= (float10)local_a8) {
              FUN_10022e10(param_1,local_a4,local_9c,local_48 + 3);
              FUN_10022e10(param_2,pfVar10,local_9c,local_48);
              local_b0 = 0.0;
              local_ac = (Vector *)0x3f800000;
              iVar13 = 0;
              puVar1 = (uint *)(*(int *)(DAT_100ae450 + 0xa4) +
                               *(int *)(*(int *)(DAT_100ae450 + 0x7c) + 0x24 + sVar4 * 0x40) * 0x34)
              ;
              pfVar10 = (float *)(puVar1 + 2);
              iVar8 = (int)local_48 + -(int)pfVar10;
              iVar11 = (int)local_48 + -(int)pfVar10 + 0xc;
              do {
                if (*(float *)((int)pfVar10 + iVar8) <= *(float *)(iVar11 + (int)pfVar10)) {
                  if ((pfVar10[3] < *(float *)((int)pfVar10 + iVar8)) ||
                     (*(float *)(iVar11 + (int)pfVar10) < *pfVar10)) goto LAB_1002426f;
                  fVar2 = *(float *)((int)pfVar10 + iVar8) - *(float *)(iVar11 + (int)pfVar10);
                  if (*(float *)(iVar11 + (int)pfVar10) <= pfVar10[3]) {
                    local_a0 = 0.0;
                  }
                  else {
                    local_a0 = (pfVar10[3] - *(float *)(iVar11 + (int)pfVar10)) / fVar2;
                  }
                  if (*pfVar10 <= *(float *)((int)pfVar10 + iVar8)) goto LAB_10024178;
                  fVar2 = (*pfVar10 - *(float *)(iVar11 + (int)pfVar10)) / fVar2;
                }
                else {
                  if ((pfVar10[3] < *(float *)(iVar11 + (int)pfVar10)) ||
                     (*(float *)((int)pfVar10 + iVar8) < *pfVar10)) goto LAB_1002426f;
                  fVar2 = *(float *)((int)pfVar10 + iVar8) - *(float *)(iVar11 + (int)pfVar10);
                  if (*pfVar10 <= *(float *)(iVar11 + (int)pfVar10)) {
                    local_a0 = 0.0;
                  }
                  else {
                    local_a0 = (*pfVar10 - *(float *)(iVar11 + (int)pfVar10)) / fVar2;
                  }
                  if (*(float *)((int)pfVar10 + iVar8) <= pfVar10[3]) {
LAB_10024178:
                    fVar2 = 1.0;
                  }
                  else {
                    fVar2 = (pfVar10[3] - *(float *)(iVar11 + (int)pfVar10)) / fVar2;
                  }
                }
                if (local_b0 < local_a0) {
                  local_b0 = local_a0;
                }
                if (fVar2 < (float)local_ac) {
                  local_ac = (Vector *)fVar2;
                }
                if ((float)local_ac < local_b0) goto LAB_1002426f;
                pfVar10 = pfVar10 + 1;
                iVar13 = iVar13 + 1;
              } while (iVar13 < 3);
              uVar9 = FUN_100230c0(local_48 + 3,local_48,local_88,puVar1,param_4,local_98);
              if ((char)uVar9 != '\0') {
                pfVar10 = (float *)(param_4 + 0x14);
                FUN_10022c90(pfVar10,local_a4,local_9c,pfVar10);
                FUN_10022c90((float *)(param_4 + 0x24),(float *)&DAT_100ae45c,local_9c,
                             (float *)(param_4 + 0x24));
                *param_2 = *pfVar10;
                param_2[1] = *(float *)(param_4 + 0x18);
                local_b8 = *(float *)(param_4 + 0x1c);
                param_2[2] = local_b8;
                local_c0 = *param_2 - *param_1;
                local_bc = param_2[1] - param_1[1];
                local_b8 = local_b8 - param_1[2];
              }
            }
          }
        }
LAB_1002426f:
        local_b4 = (int *)*local_b4;
      } while (local_b4 != DAT_100ae43c);
    }
    local_b4 = (int *)*DAT_100a942c;
    if (local_b4 != DAT_100a942c) {
      do {
        iVar8 = local_b4[2];
        local_a8 = (float)((*(int *)(iVar8 + 0x208) - DAT_100ae458) / 0x324);
        if (*(int *)(iVar8 + 0x208) != param_3) {
          pfVar10 = (float *)(iVar8 + 8);
          iVar11 = 0;
          local_a4 = (float *)(iVar8 + 0xc4);
          local_ac = local_24;
          do {
            iVar8 = iVar11 % 3;
            iVar11 = iVar11 + 1;
            fVar2 = *local_a4;
            local_a4 = local_a4 + 1;
            pfVar12 = &local_ac->y;
            local_ac->x = fVar2 - pfVar10[iVar8];
            local_ac = (Vector *)pfVar12;
          } while (iVar11 < 6);
          local_78.z = param_1[2];
          iVar8 = (int)local_a8 * 0x14;
          local_b0 = *(float *)(&DAT_100a9448 + iVar8);
          fVar2 = SQRT(local_c0 * local_c0 + local_bc * local_bc + local_b8 * local_b8);
          fVar3 = ((*(float *)(&DAT_100a943c + iVar8) * local_c0 +
                   *(float *)(&DAT_100a9440 + iVar8) * local_bc +
                   *(float *)(&DAT_100a9444 + iVar8) * local_b8) -
                  (*param_1 * local_c0 + param_1[1] * local_bc + local_78.z * local_b8)) / fVar2;
          if ((fVar3 <= fVar2 + local_b0) && (-local_b0 <= fVar3)) {
            if (0.0 <= fVar3) {
              if (fVar3 <= fVar2) {
                fVar5 = *(float *)(&DAT_100a943c + iVar8) - ((fVar3 * local_c0) / fVar2 + *param_1);
                fVar6 = *(float *)(&DAT_100a9440 + iVar8) -
                        ((fVar3 * local_bc) / fVar2 + param_1[1]);
                fVar2 = *(float *)(&DAT_100a9444 + iVar8) -
                        ((fVar3 * local_b8) / fVar2 + param_1[2]);
              }
              else {
                fVar5 = *(float *)(&DAT_100a943c + iVar8) - *param_2;
                fVar6 = *(float *)(&DAT_100a9440 + iVar8) - param_2[1];
                fVar2 = *(float *)(&DAT_100a9444 + iVar8) - param_2[2];
              }
            }
            else {
              fVar5 = *(float *)(&DAT_100a943c + iVar8) - *param_1;
              fVar6 = *(float *)(&DAT_100a9440 + iVar8) - param_1[1];
              fVar2 = *(float *)(&DAT_100a9444 + iVar8) - param_1[2];
            }
            if (SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar2 * fVar2) <= local_b0) {
              FUN_10022e10(param_1,pfVar10,(float *)&DAT_100ae45c,&local_54.x);
              FUN_10022e10(param_2,pfVar10,(float *)&DAT_100ae45c,&local_60.x);
              uVar7 = FUN_10024570(&local_54.x,&local_60.x,local_a8,param_4,&local_24[0].x);
              if ((char)uVar7 != '\0') {
                FUN_10022c90((float *)(param_4 + 0x14),pfVar10,(float *)&DAT_100ae45c,
                             (float *)(param_4 + 0x14));
                FUN_10022c90((float *)(param_4 + 0x24),(float *)&DAT_100ae45c,(float *)&DAT_100ae45c
                             ,(float *)(param_4 + 0x24));
                *param_2 = *(float *)(param_4 + 0x14);
                param_2[1] = *(float *)(param_4 + 0x18);
                local_b8 = *(float *)(param_4 + 0x1c);
                param_2[2] = local_b8;
                local_c0 = *param_2 - *param_1;
                local_bc = param_2[1] - param_1[1];
                local_b8 = local_b8 - param_1[2];
              }
            }
          }
        }
        local_b4 = (int *)*local_b4;
      } while (local_b4 != DAT_100a942c);
    }
  }
  return;
}

/* 10024570  FUN_10024570  (580 bytes)
 * undefined2 FUN_10024570(float * param_1, float * param_2, undefined4 param_3, int param_4, float * param_5)
 * called by: FUN_10023d40
 */
undefined2 __cdecl
FUN_10024570(float *param_1,float *param_2,int param_3,int param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  edict_t *peVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *local_c;
  float local_8;
  int local_4;
  
  iVar7 = 0;
  iVar8 = (int)param_2 - (int)param_5;
  local_c = (float *)0x0;
  local_8 = 1.0;
  local_4 = 0;
  iVar6 = (int)param_1 - (int)param_5;
  pfVar5 = param_5;
  do {
    if (*(float *)(iVar8 + (int)pfVar5) <= *(float *)(iVar6 + (int)pfVar5)) {
      fVar1 = *(float *)(iVar8 + (int)pfVar5);
      fVar2 = pfVar5[3];
      if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar1 = *(float *)(iVar6 + (int)pfVar5);
      fVar2 = *pfVar5;
      if (fVar1 < fVar2) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar1 = *(float *)(iVar8 + (int)pfVar5) - *(float *)(iVar6 + (int)pfVar5);
      if (*(float *)(iVar6 + (int)pfVar5) <= pfVar5[3]) {
        param_5 = (float *)0x0;
      }
      else {
        param_5 = (float *)((pfVar5[3] - *(float *)(iVar6 + (int)pfVar5)) / fVar1);
      }
      if (*pfVar5 <= *(float *)(iVar8 + (int)pfVar5)) goto LAB_1002466c;
      fVar1 = (*pfVar5 - *(float *)(iVar6 + (int)pfVar5)) / fVar1;
    }
    else {
      fVar1 = *(float *)(iVar6 + (int)pfVar5);
      fVar2 = pfVar5[3];
      if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar1 = *(float *)(iVar8 + (int)pfVar5);
      fVar2 = *pfVar5;
      if (fVar1 < fVar2) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar1 = *(float *)(iVar8 + (int)pfVar5) - *(float *)(iVar6 + (int)pfVar5);
      if (*pfVar5 <= *(float *)(iVar6 + (int)pfVar5)) {
        param_5 = (float *)0x0;
      }
      else {
        param_5 = (float *)((*pfVar5 - *(float *)(iVar6 + (int)pfVar5)) / fVar1);
      }
      if (*(float *)(iVar8 + (int)pfVar5) <= pfVar5[3]) {
LAB_1002466c:
        fVar1 = 1.0;
      }
      else {
        fVar1 = (pfVar5[3] - *(float *)(iVar6 + (int)pfVar5)) / fVar1;
      }
    }
    if ((float)local_c < (float)param_5) {
      local_c = param_5;
      if (*(float *)(iVar8 + (int)pfVar5) <= *(float *)(iVar6 + (int)pfVar5)) {
        iVar3 = 3;
      }
      else {
        iVar3 = 0;
      }
      local_4 = iVar3 + 1 + iVar7;
    }
    if (fVar1 < local_8) {
      local_8 = fVar1;
    }
    if (local_8 < (float)local_c) {
      return (ushort)(local_8 < (float)local_c) << 8 |
             (ushort)(NAN(local_8) || NAN((float)local_c)) << 10 |
             (ushort)(local_8 == (float)local_c) << 0xe;
    }
    pfVar5 = pfVar5 + 1;
    iVar7 = iVar7 + 1;
    if (2 < iVar7) {
      if (&stack0x00000000 != (undefined1 *)0xffffffec) {
        param_5 = local_c;
      }
      if (local_4 == 0) {
        local_4 = -1;
      }
      peVar4 = (*g_engfuncs.pfnPEntityOfEntIndex)(param_3);
      *(edict_t **)(param_4 + 0x30) = peVar4;
      *(float **)(param_4 + 0x10) = param_5;
      fVar1 = (*param_2 - *param_1) * (float)param_5 + *param_1;
      *param_2 = fVar1;
      *(float *)(param_4 + 0x14) = fVar1;
      fVar1 = (param_2[1] - param_1[1]) * (float)param_5 + param_1[1];
      param_2[1] = fVar1;
      *(float *)(param_4 + 0x18) = fVar1;
      fVar1 = (param_2[2] - param_1[2]) * (float)param_5 + param_1[2];
      param_2[2] = fVar1;
      *(float *)(param_4 + 0x1c) = fVar1;
      *(undefined4 *)(param_4 + 0x24) = 0;
      *(undefined4 *)(param_4 + 0x28) = 0;
      *(undefined4 *)(param_4 + 0x2c) = 0;
      if (local_4 < 4) {
        if (local_4 < 1) {
          *(undefined4 *)(param_4 + 0x2c) = 0x3f800000;
        }
        else {
          *(undefined4 *)(param_4 + 0x20 + local_4 * 4) = 0xbf800000;
        }
      }
      else {
        *(undefined4 *)(param_4 + 0x14 + local_4 * 4) = 0x3f800000;
      }
      *(float *)(param_4 + 0x20) =
           *(float *)(param_4 + 0x24) * *(float *)(param_4 + 0x14) +
           *(float *)(param_4 + 0x28) * *(float *)(param_4 + 0x18) +
           *(float *)(param_4 + 0x2c) * *(float *)(param_4 + 0x1c);
      return (short)CONCAT31((int3)((uint)peVar4 >> 8),1);
    }
  } while( true );
}

/* 100247c0  FUN_100247c0  (68 bytes)
 * undefined FUN_100247c0(int param_1, float * param_2)
 * called by: FUN_10022fd0
 */
void __cdecl FUN_100247c0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 + *(int *)(*(int *)(DAT_100ae450 + 0x7c) + 0x24 + param_1 * 0x40) * 0x14;
    iVar2 = iVar2 + 1;
    *param_2 = (float)(int)*(short *)(*(int *)(DAT_100ae450 + 0xa4) + 8 + iVar1 * 2);
    param_2 = param_2 + 1;
  } while (iVar2 < 6);
  return;
}

/* 10024810  FUN_10024810  (128 bytes)
 * undefined FUN_10024810(float * param_1, float * param_2, int param_3)
 * called by: FUN_10022ee0
 */
void __cdecl FUN_10024810(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = *param_1;
  fVar3 = param_2[1];
  fVar4 = param_1[1];
  fVar5 = param_2[2];
  fVar6 = param_1[2];
  *(undefined4 *)(param_3 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_3 + 0x30) = 0;
  *(float *)(param_3 + 0x14) = *param_2;
  *(float *)(param_3 + 0x18) = param_2[1];
  *(float *)(param_3 + 0x1c) = param_2[2];
  if (DAT_100ae450 != 0) {
    FUN_10024890(param_1,param_2,0,*(uint **)(DAT_100ae450 + 0xa4),param_3,
                 SQRT((fVar1 - fVar2) * (fVar1 - fVar2) +
                      (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar5 - fVar6) * (fVar5 - fVar6)));
    return;
  }
  return;
}

/* 10024890  FUN_10024890  (905 bytes)
 * uint FUN_10024890(float * param_1, float * param_2, undefined4 param_3, uint * param_4, int param_5, float param_6)
 * called by: FUN_10024810, FUN_10025000, FUN_100255d0
 */
uint __cdecl
FUN_10024890(float *param_1,float *param_2,int param_3,uint *param_4,int param_5,float param_6)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  edict_t *peVar5;
  float10 fVar6;
  float10 fVar7;
  int *piVar8;
  float *pfVar9;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  Vector local_60;
  Vector local_54;
  Vector local_48;
  Vector local_3c;
  Vector local_30;
  Vector local_24;
  Vector local_18;
  Vector local_c;
  
  DAT_100ae454 = '\x01';
  if (-1 < (int)*param_4) {
    do {
      Vector::Vector(&local_60,(undefined4 *)param_4[6]);
      Vector::Vector(&local_54,param_1);
      puVar2 = (undefined4 *)param_4[6];
      fVar6 = FUN_10023450(&local_54.x,&local_60.x);
      fVar1 = (float)(fVar6 - (float10)(float)puVar2[3]);
      Vector::Vector(&local_48,puVar2);
      Vector::Vector(&local_3c,param_2);
      fVar6 = FUN_10023450(&local_3c.x,&local_48.x);
      fVar6 = fVar6 - (float10)*(float *)(param_4[6] + 0xc);
      if ((fVar1 == 0.0) && (fVar6 == (float10)0.0)) {
        uVar3 = FUN_10024ca0(param_1,param_2,(int *)param_4[7],param_5,(float *)0x0,0);
        if ((char)uVar3 != '\0') goto LAB_10024b5f;
LAB_100249b2:
        param_4 = (uint *)param_4[8];
      }
      else {
        if ((fVar1 < 0.0) || (fVar6 < (float10)0.0)) {
          if ((fVar1 <= 0.0) && (fVar6 <= (float10)0.0)) goto LAB_100249b2;
          local_78 = *param_2 - *param_1;
          local_74 = param_2[1] - param_1[1];
          local_70 = param_2[2] - param_1[2];
          FUN_10024c20(&local_78);
          Vector::Vector(&local_30,(undefined4 *)param_4[6]);
          Vector::Vector(&local_24,param_1);
          fVar6 = FUN_10023450(&local_24.x,&local_30.x);
          Vector::Vector(&local_18,(undefined4 *)param_4[6]);
          Vector::Vector(&local_c,&local_78);
          fVar7 = FUN_10023450(&local_c.x,&local_18.x);
          fVar7 = ((float10)*(float *)(param_4[6] + 0xc) - (float10)(float)fVar6) / fVar7;
          local_6c = (float)(fVar7 * (float10)local_78 + (float10)*param_1);
          local_68 = (float)(fVar7 * (float10)local_74 + (float10)param_1[1]);
          local_64 = (float)(fVar7 * (float10)local_70 + (float10)param_1[2]);
          if (fVar1 <= 0.0) {
            uVar3 = FUN_10024ca0(param_1,&local_6c,(int *)param_4[8],param_5,(float *)0x0,0);
            if ((char)uVar3 != '\0') goto LAB_10024b5f;
            pfVar9 = (float *)param_4[6];
            piVar8 = (int *)param_4[7];
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_10024ca0(param_1,&local_6c,(int *)param_4[7],param_5,(float *)0x0,0);
            if ((char)uVar3 != '\0') goto LAB_10024b5f;
            pfVar9 = (float *)param_4[6];
            piVar8 = (int *)param_4[8];
            uVar3 = 1;
          }
          uVar4 = FUN_10024ca0(&local_6c,param_2,piVar8,param_5,pfVar9,uVar3);
          if ((char)uVar4 == '\0') goto LAB_10024c0c;
          goto LAB_10024b5f;
        }
        param_4 = (uint *)param_4[7];
      }
    } while (-1 < (int)*param_4);
    if (DAT_100ae454 == '\0') goto LAB_100249e1;
  }
  *(uint *)(param_5 + 4) = (uint)(*param_4 == 0xfffffffe);
  DAT_100ae454 = '\0';
LAB_100249e1:
  uVar4 = *param_4;
  if (-2 < (int)uVar4) {
LAB_10024c0c:
    return uVar4 & 0xffffff00;
  }
  *(uint *)(param_5 + 8) = (uint)(uVar4 == 0xffffffff);
  *(uint *)(param_5 + 0xc) = (uint)(*param_4 == 0xfffffffd);
  *(float *)(param_5 + 0x14) = *param_1;
  *(float *)(param_5 + 0x18) = param_1[1];
  *(float *)(param_5 + 0x1c) = param_1[2];
  *(undefined4 *)(param_5 + 0x30) = 0;
  *(undefined4 *)(param_5 + 0x24) = 0;
  *(undefined4 *)(param_5 + 0x28) = 0;
  *(undefined4 *)(param_5 + 0x2c) = 0;
  *(undefined4 *)(param_5 + 0x20) = 0;
LAB_10024b5f:
  peVar5 = (*g_engfuncs.pfnPEntityOfEntIndex)(param_3);
  *(edict_t **)(param_5 + 0x30) = peVar5;
  local_6c = *(float *)(param_5 + 0x14) - *param_1;
  local_68 = *(float *)(param_5 + 0x18) - param_1[1];
  local_64 = *(float *)(param_5 + 0x1c) - param_1[2];
  if (param_6 == 0.0) {
    *(undefined4 *)(param_5 + 0x10) = 0;
  }
  else {
    Vector::Vector(&local_c,&local_6c);
    Vector::Vector(&local_18,&local_6c);
    fVar6 = FUN_10023450(&local_18.x,&local_c.x);
    *(float *)(param_5 + 0x10) = (float)(SQRT(fVar6) / (float10)param_6);
  }
  fVar1 = *(float *)(param_5 + 0x14);
  *param_2 = fVar1;
  param_2[1] = *(float *)(param_5 + 0x18);
  param_2[2] = *(float *)(param_5 + 0x1c);
  return CONCAT31((int3)((uint)fVar1 >> 8),1);
}

/* 10024c20  FUN_10024c20  (113 bytes)
 * float10 FUN_10024c20(float * param_1)
 * called by: FUN_100230c0, FUN_10023470, FUN_10024890, FUN_10024ca0
 */
float10 __cdecl FUN_10024c20(float *param_1)

{
  float fVar1;
  
  fVar1 = SQRT(*param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2]);
  if (fVar1 == 0.0) {
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    *param_1 = 0.0;
    return (float10)0.0;
  }
  *param_1 = *param_1 / fVar1;
  param_1[1] = param_1[1] / fVar1;
  param_1[2] = param_1[2] / fVar1;
  return (float10)fVar1;
}

/* 10024ca0  FUN_10024ca0  (854 bytes)
 * undefined4 FUN_10024ca0(float * param_1, float * param_2, int * param_3, int param_4, float * param_5, undefined4 param_6)
 * called by: FUN_10024890, FUN_10024ca0
 */
undefined4 __cdecl
FUN_10024ca0(float *param_1,float *param_2,int *param_3,int param_4,float *param_5,
            undefined4 param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  uVar1 = *param_3;
  while (-1 < (int)uVar1) {
    pfVar4 = (float *)param_3[6];
    fVar2 = (*param_1 * *pfVar4 + param_1[1] * pfVar4[1] + param_1[2] * pfVar4[2]) - pfVar4[3];
    fVar3 = (*param_2 * *pfVar4 + param_2[1] * pfVar4[1] + param_2[2] * pfVar4[2]) - pfVar4[3];
    if ((fVar2 == 0.0) && (fVar3 == 0.0)) {
      pfVar4 = (float *)FUN_10024ca0(param_1,param_2,(int *)param_3[7],param_4,param_5,param_6);
      if ((char)pfVar4 != '\0') goto LAB_10024e7a;
      param_3 = (int *)param_3[8];
    }
    else if ((fVar2 < 0.0) || (fVar3 < 0.0)) {
      if ((0.0 < fVar2) || (0.0 < fVar3)) {
        local_30 = *param_2 - *param_1;
        local_2c = param_2[1] - param_1[1];
        local_28 = param_2[2] - param_1[2];
        FUN_10024c20(&local_30);
        pfVar4 = (float *)param_3[6];
        local_4 = param_1[2];
        local_18 = *pfVar4;
        local_14 = pfVar4[1];
        local_10 = pfVar4[2];
        fVar3 = (pfVar4[3] - (*param_1 * *pfVar4 + param_1[1] * pfVar4[1] + local_4 * pfVar4[2])) /
                (local_18 * local_30 + local_14 * local_2c + local_10 * local_28);
        local_24 = fVar3 * local_30 + *param_1;
        local_20 = fVar3 * local_2c + param_1[1];
        local_1c = fVar3 * local_28 + param_1[2];
        if (fVar2 <= 0.0) {
          uVar5 = FUN_10024ca0(param_1,&local_24,(int *)param_3[8],param_4,param_5,param_6);
          if ((char)uVar5 != '\0') {
            return CONCAT31((int3)((uint)uVar5 >> 8),1);
          }
          uVar5 = FUN_10024ca0(&local_24,param_2,(int *)param_3[7],param_4,(float *)param_3[6],0);
          return uVar5;
        }
        uVar5 = FUN_10024ca0(param_1,&local_24,(int *)param_3[7],param_4,param_5,param_6);
        if ((char)uVar5 != '\0') {
          return CONCAT31((int3)((uint)uVar5 >> 8),1);
        }
        uVar5 = FUN_10024ca0(&local_24,param_2,(int *)param_3[8],param_4,(float *)param_3[6],1);
        return uVar5;
      }
      param_3 = (int *)param_3[8];
    }
    else {
      param_3 = (int *)param_3[7];
    }
    uVar1 = *param_3;
  }
  if (DAT_100ae454 != '\0') {
    *(uint *)(param_4 + 4) = (uint)(*param_3 == 0xfffffffe);
    DAT_100ae454 = '\0';
  }
  uVar1 = *param_3;
  if (-2 < (int)uVar1) {
    return uVar1 & 0xffffff00;
  }
  *(uint *)(param_4 + 8) = (uint)(uVar1 == 0xffffffff);
  *(uint *)(param_4 + 0xc) = (uint)(*param_3 == 0xfffffffd);
  *(float *)(param_4 + 0x14) = *param_1;
  *(float *)(param_4 + 0x18) = param_1[1];
  *(float *)(param_4 + 0x1c) = param_1[2];
  *(undefined4 *)(param_4 + 0x30) = 0;
  if (param_5 == (float *)0x0) {
    *(undefined4 *)(param_4 + 0x24) = 0;
    *(undefined4 *)(param_4 + 0x28) = 0;
    *(undefined4 *)(param_4 + 0x2c) = 0;
    *(undefined4 *)(param_4 + 0x20) = 0;
    return 1;
  }
  if ((char)param_6 != '\0') {
    *(float *)(param_4 + 0x24) = *param_5;
    *(float *)(param_4 + 0x28) = param_5[1];
    *(float *)(param_4 + 0x2c) = param_5[2];
    *(float *)(param_4 + 0x20) = param_5[3];
    return CONCAT31((int3)((uint)param_5 >> 8),1);
  }
  *(float *)(param_4 + 0x24) = -*param_5;
  *(float *)(param_4 + 0x28) = -param_5[1];
  *(float *)(param_4 + 0x2c) = -param_5[2];
  *(float *)(param_4 + 0x20) = -param_5[3];
  pfVar4 = param_5;
LAB_10024e7a:
  return CONCAT31((int3)((uint)pfVar4 >> 8),1);
}

/* 10025000  FUN_10025000  (1482 bytes)
 * undefined FUN_10025000(float * param_1, float * param_2, int param_3, int param_4)
 * called by: FUN_10022f50
 */
void __cdecl FUN_10025000(float *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_88 [5];
  int *local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60 [3];
  float *local_54;
  float local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  Vector local_18;
  Vector local_c;
  
  fVar3 = *param_2;
  fVar4 = *param_1;
  fVar5 = param_2[1];
  fVar6 = param_1[1];
  fVar7 = param_2[2];
  fVar8 = param_1[2];
  *(undefined4 *)(param_4 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(float *)(param_4 + 0x14) = *param_2;
  *(float *)(param_4 + 0x18) = param_2[1];
  *(float *)(param_4 + 0x1c) = param_2[2];
  local_50 = SQRT((fVar3 - fVar4) * (fVar3 - fVar4) +
                  (fVar5 - fVar6) * (fVar5 - fVar6) + (fVar7 - fVar8) * (fVar7 - fVar8));
  if (DAT_100ae450 != 0) {
    FUN_10024890(param_1,param_2,0,*(uint **)(DAT_100ae450 + 0xa4),param_4,local_50);
    local_9c = *param_2 - *param_1;
    local_74 = (int *)*DAT_100ae43c;
    local_98 = param_2[1] - param_1[1];
    local_94 = param_2[2] - param_1[2];
    if (local_74 != DAT_100ae43c) {
      do {
        iVar12 = local_74[2];
        local_4c = (*(int *)(iVar12 + 0x208) - DAT_100ae458) / 0x324;
        if (*(int *)(iVar12 + 0x208) != param_3) {
          local_54 = (float *)(iVar12 + 8);
          local_24 = local_9c;
          iVar14 = local_4c * 0x14;
          local_88[4] = *(float *)(&DAT_100a9448 + iVar14);
          local_30 = *(float *)(&DAT_100a943c + iVar14);
          local_20 = local_98;
          local_2c = *(undefined4 *)(&DAT_100a9440 + iVar14);
          fVar4 = SQRT(local_9c * local_9c + local_98 * local_98 + local_94 * local_94);
          local_1c = local_94;
          local_28 = *(undefined4 *)(&DAT_100a9444 + iVar14);
          local_48 = local_9c;
          local_3c = *param_1;
          local_44 = local_98;
          local_38 = param_1[1];
          pfVar13 = (float *)(iVar12 + 0x50);
          local_40 = local_94;
          local_34 = param_1[2];
          sVar9 = *(short *)(&DAT_100a9438 + iVar14);
          fVar15 = FUN_10023450(&local_30,&local_24);
          fVar16 = FUN_10023450(&local_3c,&local_48);
          fVar3 = (float)(((float10)(float)fVar15 - fVar16) / (float10)fVar4);
          if ((fVar3 <= fVar4 + local_88[4]) && (-local_88[4] <= fVar3)) {
            if (0.0 <= fVar3) {
              if (fVar3 <= fVar4) {
                local_6c = *(float *)(&DAT_100a943c + iVar14) -
                           ((fVar3 * local_9c) / fVar4 + *param_1);
                local_68 = *(float *)(&DAT_100a9440 + iVar14) -
                           ((fVar3 * local_98) / fVar4 + param_1[1]);
                local_64 = *(float *)(&DAT_100a9444 + iVar14) -
                           ((fVar3 * local_94) / fVar4 + param_1[2]);
              }
              else {
                local_6c = *(float *)(&DAT_100a943c + iVar14) - *param_2;
                local_68 = *(float *)(&DAT_100a9440 + iVar14) - param_2[1];
                local_64 = *(float *)(&DAT_100a9444 + iVar14) - param_2[2];
              }
            }
            else {
              local_6c = *(float *)(&DAT_100a943c + iVar14) - *param_1;
              local_68 = *(float *)(&DAT_100a9440 + iVar14) - param_1[1];
              local_64 = *(float *)(&DAT_100a9444 + iVar14) - param_1[2];
            }
            Vector::Vector(&local_18,&local_6c);
            Vector::Vector(&local_c,&local_6c);
            fVar15 = FUN_10023450(&local_c.x,&local_18.x);
            pfVar1 = local_54;
            if (SQRT(fVar15) <= (float10)local_88[4]) {
              FUN_10022e10(param_1,local_54,pfVar13,local_88);
              FUN_10022e10(param_2,pfVar1,pfVar13,local_60);
              local_88[3] = 0.0;
              local_70 = 1.0;
              iVar14 = 0;
              puVar2 = (uint *)(*(int *)(DAT_100ae450 + 0xa4) +
                               *(int *)(*(int *)(DAT_100ae450 + 0x7c) + 0x24 + sVar9 * 0x40) * 0x28)
              ;
              iVar12 = 0;
              puVar11 = puVar2 + 2;
              do {
                if (*(float *)((int)local_60 + iVar14) <= *(float *)((int)local_88 + iVar14)) {
                  fVar3 = (float)(int)*(short *)((int)puVar11 + 6);
                  if ((fVar3 < *(float *)((int)local_60 + iVar14)) ||
                     (fVar4 = (float)(int)(short)*puVar11,
                     *(float *)((int)local_88 + iVar14) < fVar4)) goto LAB_100255a7;
                  fVar5 = *(float *)((int)local_60 + iVar14) - *(float *)((int)local_88 + iVar14);
                  if (*(float *)((int)local_88 + iVar14) <= fVar3) {
                    local_90 = 0.0;
                  }
                  else {
                    local_90 = (fVar3 - *(float *)((int)local_88 + iVar14)) / fVar5;
                  }
                  if (fVar4 <= *(float *)((int)local_60 + iVar14)) goto LAB_100254b1;
                  fVar5 = (fVar4 - *(float *)((int)local_88 + iVar14)) / fVar5;
                }
                else {
                  fVar3 = (float)(int)*(short *)((int)puVar11 + 6);
                  if ((fVar3 < *(float *)((int)local_88 + iVar14)) ||
                     (fVar4 = (float)(int)(short)*puVar11,
                     *(float *)((int)local_60 + iVar14) < fVar4)) goto LAB_100255a7;
                  fVar5 = *(float *)((int)local_60 + iVar14) - *(float *)((int)local_88 + iVar14);
                  if (fVar4 <= *(float *)((int)local_88 + iVar14)) {
                    local_90 = 0.0;
                  }
                  else {
                    local_90 = (fVar4 - *(float *)((int)local_88 + iVar14)) / fVar5;
                  }
                  if (*(float *)((int)local_60 + iVar14) <= fVar3) {
LAB_100254b1:
                    fVar5 = 1.0;
                  }
                  else {
                    fVar5 = (fVar3 - *(float *)((int)local_88 + iVar14)) / fVar5;
                  }
                }
                if (local_88[3] < local_90) {
                  local_88[3] = local_90;
                }
                if (fVar5 < local_70) {
                  local_70 = fVar5;
                }
                if (local_70 < local_88[3]) goto LAB_100255a7;
                puVar11 = (uint *)((int)puVar11 + 2);
                iVar14 = iVar14 + 4;
                iVar12 = iVar12 + 1;
              } while (iVar12 < 3);
              uVar10 = FUN_10024890(local_88,local_60,local_4c,puVar2,param_4,local_50);
              if ((char)uVar10 != '\0') {
                pfVar1 = (float *)(param_4 + 0x14);
                FUN_10022c90(pfVar1,local_54,pfVar13,pfVar1);
                FUN_10022c90((float *)(param_4 + 0x24),(float *)&DAT_100ae468,pfVar13,
                             (float *)(param_4 + 0x24));
                *param_2 = *pfVar1;
                param_2[1] = *(float *)(param_4 + 0x18);
                local_94 = *(float *)(param_4 + 0x1c);
                param_2[2] = local_94;
                local_9c = *param_2 - *param_1;
                local_98 = param_2[1] - param_1[1];
                local_94 = local_94 - param_1[2];
              }
            }
          }
        }
LAB_100255a7:
        local_74 = (int *)*local_74;
      } while (local_74 != DAT_100ae43c);
    }
  }
  return;
}

/* 100255d0  FUN_100255d0  (2209 bytes)
 * undefined FUN_100255d0(float * param_1, float * param_2, int param_3, int param_4)
 * called by: FUN_10022f90
 */
void __cdecl FUN_100255d0(float *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  float fVar6;
  float fVar7;
  Vector *pVVar8;
  undefined2 uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  longlong lVar16;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  int *local_a0;
  float local_9c;
  float local_98;
  Vector *local_94;
  float *local_90;
  float local_8c [3];
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c [4];
  float local_5c;
  float local_58;
  Vector local_54;
  float local_48;
  float local_44;
  float local_40;
  Vector local_3c;
  Vector local_30;
  Vector local_24;
  Vector local_18;
  Vector local_c;
  
  local_b4 = *param_2 - *param_1;
  local_b0 = param_2[1] - param_1[1];
  local_ac = param_2[2] - param_1[2];
  *(undefined4 *)(param_4 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(float *)(param_4 + 0x14) = *param_2;
  *(float *)(param_4 + 0x18) = param_2[1];
  *(float *)(param_4 + 0x1c) = param_2[2];
  local_7c = SQRT(local_b4 * local_b4 + local_b0 * local_b0 + local_ac * local_ac);
  if (DAT_100ae450 != 0) {
    FUN_10024890(param_1,param_2,0,*(uint **)(DAT_100ae450 + 0xa4),param_4,local_7c);
    local_b4 = *param_2 - *param_1;
    local_b0 = param_2[1] - param_1[1];
    local_ac = param_2[2] - param_1[2];
    local_a0 = (int *)*DAT_100ae43c;
    if (local_a0 != DAT_100ae43c) {
      do {
        iVar10 = local_a0[2];
        local_80 = (*(int *)(iVar10 + 0x208) - DAT_100ae458) / 0x324;
        if (*(int *)(iVar10 + 0x208) != param_3) {
          local_94 = (Vector *)(iVar10 + 8);
          local_90 = (float *)(iVar10 + 0x50);
          iVar10 = local_80 * 0x14;
          local_48 = local_b4;
          local_6c[3] = local_b4;
          sVar5 = *(short *)(&DAT_100a9438 + iVar10);
          local_9c = *(float *)(&DAT_100a9448 + iVar10);
          pfVar1 = (float *)(&DAT_100a943c + iVar10);
          local_44 = local_b0;
          local_5c = local_b0;
          local_40 = local_ac;
          local_58 = local_ac;
          fVar14 = FUN_10023450(local_6c + 3,&local_48);
          fVar3 = (float)SQRT(fVar14);
          Vector::Vector(&local_c,&local_b4);
          Vector::Vector(&local_18,pfVar1);
          Vector::Vector(&local_54,&local_b4);
          Vector::Vector(&local_3c,param_1);
          fVar14 = FUN_10023450(&local_18.x,&local_c.x);
          fVar15 = FUN_10023450(&local_3c.x,&local_54.x);
          fVar4 = (float)(((float10)(float)fVar14 - fVar15) / (float10)fVar3);
          if ((fVar4 <= fVar3 + local_9c) && (-local_9c <= fVar4)) {
            if (0.0 <= fVar4) {
              if (fVar4 <= fVar3) {
                local_78 = *pfVar1 - ((fVar4 * local_b4) / fVar3 + *param_1);
                local_74 = *(float *)(&DAT_100a9440 + iVar10) -
                           ((fVar4 * local_b0) / fVar3 + param_1[1]);
                local_70 = *(float *)(&DAT_100a9444 + iVar10) -
                           ((fVar4 * local_ac) / fVar3 + param_1[2]);
              }
              else {
                local_78 = *pfVar1 - *param_2;
                local_74 = *(float *)(&DAT_100a9440 + iVar10) - param_2[1];
                local_70 = *(float *)(&DAT_100a9444 + iVar10) - param_2[2];
              }
            }
            else {
              local_78 = *pfVar1 - *param_1;
              local_74 = *(float *)(&DAT_100a9440 + iVar10) - param_1[1];
              local_70 = *(float *)(&DAT_100a9444 + iVar10) - param_1[2];
            }
            Vector::Vector(&local_24,&local_78);
            Vector::Vector(&local_30,&local_78);
            fVar14 = FUN_10023450(&local_30.x,&local_24.x);
            pVVar8 = local_94;
            if (SQRT(fVar14) <= (float10)local_9c) {
              FUN_10022e10(param_1,&local_94->x,local_90,local_8c);
              FUN_10022e10(param_2,&pVVar8->x,local_90,local_6c);
              iVar13 = 0;
              local_a4 = 0.0;
              local_a8 = 1.0;
              puVar2 = (uint *)(*(int *)(DAT_100ae450 + 0xa4) +
                               *(int *)(*(int *)(DAT_100ae450 + 0x7c) + 0x24 + sVar5 * 0x40) * 0x28)
              ;
              iVar10 = 0;
              puVar12 = puVar2 + 2;
              do {
                if (*(float *)((int)local_6c + iVar13) <= *(float *)((int)local_8c + iVar13)) {
                  fVar3 = (float)(int)*(short *)((int)puVar12 + 6);
                  if ((fVar3 < *(float *)((int)local_6c + iVar13)) ||
                     (fVar4 = (float)(int)(short)*puVar12,
                     *(float *)((int)local_8c + iVar13) < fVar4)) goto LAB_10025b5a;
                  fVar6 = *(float *)((int)local_6c + iVar13) - *(float *)((int)local_8c + iVar13);
                  if (*(float *)((int)local_8c + iVar13) <= fVar3) {
                    local_98 = 0.0;
                  }
                  else {
                    local_98 = (fVar3 - *(float *)((int)local_8c + iVar13)) / fVar6;
                  }
                  if (fVar4 <= *(float *)((int)local_6c + iVar13)) goto LAB_10025a64;
                  fVar6 = (fVar4 - *(float *)((int)local_8c + iVar13)) / fVar6;
                }
                else {
                  fVar3 = (float)(int)*(short *)((int)puVar12 + 6);
                  if ((fVar3 < *(float *)((int)local_8c + iVar13)) ||
                     (fVar4 = (float)(int)(short)*puVar12,
                     *(float *)((int)local_6c + iVar13) < fVar4)) goto LAB_10025b5a;
                  fVar6 = *(float *)((int)local_6c + iVar13) - *(float *)((int)local_8c + iVar13);
                  if (fVar4 <= *(float *)((int)local_8c + iVar13)) {
                    local_98 = 0.0;
                  }
                  else {
                    local_98 = (fVar4 - *(float *)((int)local_8c + iVar13)) / fVar6;
                  }
                  if (*(float *)((int)local_6c + iVar13) <= fVar3) {
LAB_10025a64:
                    fVar6 = 1.0;
                  }
                  else {
                    fVar6 = (fVar3 - *(float *)((int)local_8c + iVar13)) / fVar6;
                  }
                }
                if (local_a4 < local_98) {
                  local_a4 = local_98;
                }
                if (fVar6 < local_a8) {
                  local_a8 = fVar6;
                }
                if (local_a8 < local_a4) goto LAB_10025b5a;
                puVar12 = (uint *)((int)puVar12 + 2);
                iVar13 = iVar13 + 4;
                iVar10 = iVar10 + 1;
              } while (iVar10 < 3);
              uVar11 = FUN_10024890(local_8c,local_6c,local_80,puVar2,param_4,local_7c);
              if ((char)uVar11 != '\0') {
                pfVar1 = (float *)(param_4 + 0x14);
                FUN_10022c90(pfVar1,&local_94->x,local_90,pfVar1);
                FUN_10022c90((float *)(param_4 + 0x24),(float *)&DAT_100ae468,local_90,
                             (float *)(param_4 + 0x24));
                *param_2 = *pfVar1;
                param_2[1] = *(float *)(param_4 + 0x18);
                local_ac = *(float *)(param_4 + 0x1c);
                param_2[2] = local_ac;
                local_b4 = *param_2 - *param_1;
                local_b0 = param_2[1] - param_1[1];
                local_ac = local_ac - param_1[2];
              }
            }
          }
        }
LAB_10025b5a:
        local_a0 = (int *)*local_a0;
      } while (local_a0 != DAT_100ae43c);
    }
    local_a0 = (int *)*DAT_100a942c;
    if (local_a0 != DAT_100a942c) {
      do {
        iVar10 = local_a0[2];
        local_9c = (float)((*(int *)(iVar10 + 0x208) - DAT_100ae458) / 0x324);
        if (*(int *)(iVar10 + 0x208) != param_3) {
          pfVar1 = (float *)(iVar10 + 8);
          iVar13 = 0;
          local_94 = &local_24;
          local_a4 = (float)(iVar10 + 0xc4);
          do {
            lVar16 = __ftol();
            local_80 = (int)(short)lVar16;
            lVar16 = __ftol();
            iVar13 = iVar13 + 1;
            *(short *)&local_94->x = (short)lVar16;
            local_a4 = (float)((int)local_a4 + 4);
            local_94 = (Vector *)((int)&local_94->x + 2);
          } while (iVar13 < 6);
          local_30.z = param_1[2];
          iVar10 = (int)local_9c * 0x14;
          local_a8 = *(float *)(&DAT_100a9448 + iVar10);
          fVar3 = SQRT(local_b4 * local_b4 + local_b0 * local_b0 + local_ac * local_ac);
          fVar4 = ((*(float *)(&DAT_100a943c + iVar10) * local_b4 +
                   *(float *)(&DAT_100a9440 + iVar10) * local_b0 +
                   *(float *)(&DAT_100a9444 + iVar10) * local_ac) -
                  (*param_1 * local_b4 + param_1[1] * local_b0 + local_30.z * local_ac)) / fVar3;
          if ((fVar4 <= fVar3 + local_a8) && (-local_a8 <= fVar4)) {
            if (0.0 <= fVar4) {
              if (fVar4 <= fVar3) {
                fVar6 = *(float *)(&DAT_100a943c + iVar10) - ((fVar4 * local_b4) / fVar3 + *param_1)
                ;
                fVar7 = *(float *)(&DAT_100a9440 + iVar10) -
                        ((fVar4 * local_b0) / fVar3 + param_1[1]);
                fVar3 = *(float *)(&DAT_100a9444 + iVar10) -
                        ((fVar4 * local_ac) / fVar3 + param_1[2]);
              }
              else {
                fVar6 = *(float *)(&DAT_100a943c + iVar10) - *param_2;
                fVar7 = *(float *)(&DAT_100a9440 + iVar10) - param_2[1];
                fVar3 = *(float *)(&DAT_100a9444 + iVar10) - param_2[2];
              }
            }
            else {
              fVar6 = *(float *)(&DAT_100a943c + iVar10) - *param_1;
              fVar7 = *(float *)(&DAT_100a9440 + iVar10) - param_1[1];
              fVar3 = *(float *)(&DAT_100a9444 + iVar10) - param_1[2];
            }
            if (SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar3 * fVar3) <= local_a8) {
              FUN_10022e10(param_1,pfVar1,(float *)&DAT_100ae468,&local_54.x);
              FUN_10022e10(param_2,pfVar1,(float *)&DAT_100ae468,&local_3c.x);
              uVar9 = FUN_10025e80(&local_54.x,&local_3c.x,local_9c,param_4,(short *)&local_24);
              if ((char)uVar9 != '\0') {
                FUN_10022c90((float *)(param_4 + 0x14),pfVar1,(float *)&DAT_100ae468,
                             (float *)(param_4 + 0x14));
                FUN_10022c90((float *)(param_4 + 0x24),(float *)&DAT_100ae468,(float *)&DAT_100ae468
                             ,(float *)(param_4 + 0x24));
                *param_2 = *(float *)(param_4 + 0x14);
                param_2[1] = *(float *)(param_4 + 0x18);
                local_ac = *(float *)(param_4 + 0x1c);
                param_2[2] = local_ac;
                local_b4 = *param_2 - *param_1;
                local_b0 = param_2[1] - param_1[1];
                local_ac = local_ac - param_1[2];
              }
            }
          }
        }
        local_a0 = (int *)*local_a0;
      } while (local_a0 != DAT_100a942c);
    }
  }
  return;
}

/* 10025e80  FUN_10025e80  (654 bytes)
 * undefined2 FUN_10025e80(float * param_1, float * param_2, undefined4 param_3, int param_4, short * param_5)
 * called by: FUN_100255d0
 */
undefined2 __cdecl
FUN_10025e80(float *param_1,float *param_2,int param_3,int param_4,short *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  edict_t *peVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  float *local_c;
  float local_8;
  int local_4;
  
  pfVar4 = param_1;
  iVar9 = 0;
  local_c = (float *)0x0;
  local_8 = 1.0;
  local_4 = 0;
  iVar8 = (int)param_2 - (int)param_1;
  pfVar7 = param_1;
  psVar10 = param_5;
  do {
    iVar5 = (int)psVar10[3];
    if (*(float *)(iVar8 + (int)pfVar7) <= *pfVar7) {
      fVar2 = (float)iVar5;
      fVar1 = *(float *)(iVar8 + (int)pfVar7);
      if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar3 = (float)(int)*psVar10;
      fVar1 = *pfVar7;
      if (fVar3 >= fVar1 && (fVar3 == fVar1) == 0) {
        return (ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
               (ushort)(fVar3 == fVar1) << 0xe;
      }
      fVar1 = *(float *)(iVar8 + (int)pfVar7) - *pfVar7;
      if (*pfVar7 <= fVar2) {
        param_1 = (float *)0x0;
      }
      else {
        param_1 = (float *)((fVar2 - *pfVar7) / fVar1);
      }
      if (fVar3 <= *(float *)(iVar8 + (int)pfVar7)) goto LAB_10025fc0;
      fVar1 = (fVar3 - *pfVar7) / fVar1;
    }
    else {
      fVar2 = (float)iVar5;
      fVar1 = *pfVar7;
      if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar3 = (float)(int)*psVar10;
      fVar1 = *(float *)(iVar8 + (int)pfVar7);
      if (fVar1 < fVar3) {
        return (ushort)(fVar1 < fVar3) << 8 | (ushort)(NAN(fVar1) || NAN(fVar3)) << 10 |
               (ushort)(fVar1 == fVar3) << 0xe;
      }
      fVar1 = *(float *)(iVar8 + (int)pfVar7) - *pfVar7;
      if (fVar3 <= *pfVar7) {
        param_1 = (float *)0x0;
      }
      else {
        param_1 = (float *)((fVar3 - *pfVar7) / fVar1);
      }
      if (*(float *)(iVar8 + (int)pfVar7) <= fVar2) {
LAB_10025fc0:
        fVar1 = 1.0;
      }
      else {
        fVar1 = (fVar2 - *pfVar7) / fVar1;
      }
    }
    param_5 = (short *)(float)iVar5;
    if ((float)local_c < (float)param_1) {
      local_c = param_1;
      if (*(float *)(iVar8 + (int)pfVar7) <= *pfVar7) {
        iVar5 = 3;
      }
      else {
        iVar5 = 0;
      }
      local_4 = iVar5 + 1 + iVar9;
    }
    if (fVar1 < local_8) {
      local_8 = fVar1;
    }
    if (local_8 < (float)local_c) {
      return (ushort)(local_8 < (float)local_c) << 8 |
             (ushort)(NAN(local_8) || NAN((float)local_c)) << 10 |
             (ushort)(local_8 == (float)local_c) << 0xe;
    }
    psVar10 = psVar10 + 1;
    pfVar7 = pfVar7 + 1;
    iVar9 = iVar9 + 1;
    if (2 < iVar9) {
      if (&stack0x00000000 != (undefined1 *)0xffffffec) {
        param_5 = (short *)local_c;
      }
      if (local_4 == 0) {
        local_4 = -1;
      }
      peVar6 = (*g_engfuncs.pfnPEntityOfEntIndex)(param_3);
      *(edict_t **)(param_4 + 0x30) = peVar6;
      *(short **)(param_4 + 0x10) = param_5;
      fVar1 = (*param_2 - *pfVar4) * (float)param_5 + *pfVar4;
      *param_2 = fVar1;
      *(float *)(param_4 + 0x14) = fVar1;
      fVar1 = (param_2[1] - pfVar4[1]) * (float)param_5 + pfVar4[1];
      param_2[1] = fVar1;
      *(float *)(param_4 + 0x18) = fVar1;
      fVar1 = (param_2[2] - pfVar4[2]) * (float)param_5 + pfVar4[2];
      param_2[2] = fVar1;
      *(float *)(param_4 + 0x1c) = fVar1;
      *(undefined4 *)(param_4 + 0x24) = 0;
      *(undefined4 *)(param_4 + 0x28) = 0;
      *(undefined4 *)(param_4 + 0x2c) = 0;
      if (local_4 < 4) {
        if (local_4 < 1) {
          *(undefined4 *)(param_4 + 0x2c) = 0x3f800000;
        }
        else {
          *(undefined4 *)(param_4 + 0x20 + local_4 * 4) = 0xbf800000;
        }
      }
      else {
        *(undefined4 *)(param_4 + 0x14 + local_4 * 4) = 0x3f800000;
      }
      *(float *)(param_4 + 0x20) =
           *(float *)(param_4 + 0x24) * *(float *)(param_4 + 0x14) +
           *(float *)(param_4 + 0x28) * *(float *)(param_4 + 0x18) +
           *(float *)(param_4 + 0x2c) * *(float *)(param_4 + 0x1c);
      return (short)CONCAT31((int3)((uint)peVar6 >> 8),1);
    }
  } while( true );
}

/* 10026416  FUN_10026416  (293 bytes)
 * undefined FUN_10026416(undefined4 param_1, uint param_2)
 */
void __fastcall FUN_10026416(undefined4 param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  if ((param_2 & 1) != 0) {
    uVar2 = 0xffffffff;
    pcVar5 = PTR_s_Knives_1009ef18;
    do {
      pcVar7 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar5 = (char *)register0x00000010;
    do {
      pcVar6 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  if ((param_2 & 2) != 0) {
    uVar2 = 0xffffffff;
    pcVar5 = PTR_s_Pistols_1009ef1c;
    do {
      pcVar7 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar5 = (char *)register0x00000010;
    do {
      pcVar6 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  if ((param_2 & 4) != 0) {
    uVar2 = 0xffffffff;
    pcVar5 = PTR_DAT_1009ef20;
    do {
      pcVar7 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar5 = (char *)register0x00000010;
    do {
      pcVar6 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  if ((param_2 & 8) != 0) {
    uVar2 = 0xffffffff;
    pcVar5 = PTR_s_Rifles_1009ef24;
    do {
      pcVar7 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar5 = (char *)register0x00000010;
    do {
      pcVar6 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  if ((param_2 & 0x10) != 0) {
    uVar2 = 0xffffffff;
    pcVar5 = PTR_s_Shotguns_1009ef28;
    do {
      pcVar7 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar5 = (char *)register0x00000010;
    do {
      pcVar6 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  (*g_engfuncs.pfnAlertMessage)(at_console,s_Weapons_allowed___s_1009f294,&stack0x00000000);
  return;
}

/* 100268d0  FUN_100268d0  (51 bytes)
 * undefined FUN_100268d0()
 */
undefined4 __thiscall FUN_100268d0(void *param_1,void *param_2,byte_conflict *param_3,int param_4)

{
  int iVar1;
  
  if (param_3 != (byte_conflict *)0x0) {
    iVar1 = FUN_100357d0(param_1,param_3);
    if (-1 < iVar1) {
      iVar1 = FUN_100357b0(param_2,iVar1);
      if (iVar1 < param_4) {
        return 1;
      }
    }
  }
  return 0;
}

/* 10026910  FUN_10026910  (282 bytes)
 * undefined FUN_10026910(int * param_1)
 * called by: FUN_1002c600
 */
void FUN_10026910(int *param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_1004c380(param_1);
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar4 + 0x80;
  }
  uVar1 = *(undefined4 *)(iVar5 + 0xc);
  fVar2 = *(float *)(iVar5 + 0x10);
  iVar3 = param_1[1];
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)(iVar3 + 0xc) = uVar1;
  *(float *)(iVar3 + 0x10) = fVar2 + 1.0;
  iVar5 = param_1[1];
  *(undefined4 *)(iVar5 + 0x74) = DAT_100ae498;
  *(undefined4 *)(iVar5 + 0x78) = DAT_100ae49c;
  *(undefined4 *)(iVar5 + 0x7c) = DAT_100ae4a0;
  iVar5 = param_1[1];
  *(undefined4 *)(iVar5 + 0x20) = DAT_100ae498;
  *(undefined4 *)(iVar5 + 0x24) = DAT_100ae49c;
  *(undefined4 *)(iVar5 + 0x28) = DAT_100ae4a0;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + 0x80;
  }
  iVar5 = param_1[1];
  *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(iVar4 + 0x50);
  *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
  iVar4 = param_1[1];
  *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(iVar4 + 0x50);
  *(undefined4 *)(iVar4 + 0x78) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(iVar4 + 0x7c) = *(undefined4 *)(iVar4 + 0x58);
  iVar4 = param_1[1];
  *(undefined4 *)(iVar4 + 0x68) = DAT_100ae498;
  *(undefined4 *)(iVar4 + 0x6c) = DAT_100ae49c;
  *(undefined4 *)(iVar4 + 0x70) = DAT_100ae4a0;
  *(undefined4 *)(param_1[1] + 0xa0) = 1;
  return;
}

/* 10026a30  FUN_10026a30  (104 bytes)
 * undefined4 FUN_10026a30(void * param_1, int * param_2)
 * called by: FUN_1002c4e0
 */
undefined4 __thiscall FUN_10026a30(void *this,void *param_1,int *param_2)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)param_1 + 4) + 0x170) != 0) {
    return 0;
  }
  if (((&DAT_102eee28)[param_2[0x1e] * 0xb] != 0) &&
     (iVar1 = (**(code **)(*(int *)this + 0x9c))
                        (param_1,(&DAT_102eee28)[param_2[0x1e] * 0xb],
                         *(undefined4 *)(&DAT_102eee2c + param_2[0x1e] * 0x2c)), iVar1 != 0)) {
    return 1;
  }
  iVar1 = FUN_10035970(param_1,param_2);
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}

/* 10026c60  FUN_10026c60  (1 bytes)
 * undefined FUN_10026c60()
 */
void FUN_10026c60(void)

{
  return;
}

/* 10026c80  FUN_10026c80  (31 bytes)
 * undefined FUN_10026c80()
 */
void FUN_10026c80(void)

{
  DAT_100ae498 = 0;
  DAT_100ae49c = 0;
  DAT_100ae4a0 = 0;
  return;
}

/* 10027ea0  FUN_10027ea0  (8 bytes)
 * undefined4 FUN_10027ea0(void)
 * called by: entry
 */
undefined4 FUN_10027ea0(void)

{
  return 1;
}

/* 1002ae80  FUN_1002ae80  (100 bytes)
 * undefined FUN_1002ae80(int * param_1)
 * called by: CGamePlayerEquip::Touch, CGamePlayerEquip::Use
 */
void __thiscall FUN_1002ae80(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0xc0))();
  if ((iVar1 != 0) && (param_1 != (int *)0x0)) {
    iVar1 = 0;
    piVar2 = (int *)((int)this + 0xd8);
    do {
      if (piVar2[-0x20] == 0) {
        return;
      }
      iVar3 = 0;
      if (0 < *piVar2) {
        do {
          CBasePlayer::GiveNamedItem
                    ((CBasePlayer *)param_1,(int)(gpGlobals->pStringBase + piVar2[-0x20]));
          iVar3 = iVar3 + 1;
        } while (iVar3 < *piVar2);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 0x20);
  }
  return;
}

/* 1002b3a0  FUN_1002b3a0  (5 bytes)
 * undefined4 FUN_1002b3a0(void)
 * called by: CWorld::Precache
 */
undefined4 FUN_1002b3a0(void)

{
  return 0;
}

/* 1002b820  FUN_1002b820  (10 bytes)
 * undefined FUN_1002b820()
 */
void FUN_1002b820(void)

{
  FUN_1002b830();
  FUN_1002b840();
  return;
}

/* 1002b830  FUN_1002b830  (10 bytes)
 * undefined FUN_1002b830(void)
 * called by: FUN_1002b820
 */
void FUN_1002b830(void)

{
  FUN_10078f70((undefined4 *)&DAT_100aee48);
  return;
}

/* 1002b840  FUN_1002b840  (12 bytes)
 * undefined FUN_1002b840(void)
 * called by: FUN_1002b820
 */
void FUN_1002b840(void)

{
  FUN_1007dd3e(0x1002b850);
  return;
}

/* 1002b850  FUN_1002b850  (10 bytes)
 * undefined FUN_1002b850()
 */
void FUN_1002b850(void)

{
  FUN_10078fb0((undefined4 *)&DAT_100aee48);
  return;
}

/* 1002b860  FUN_1002b860  (10 bytes)
 * undefined FUN_1002b860()
 */
void FUN_1002b860(void)

{
  FUN_1002b870();
  FUN_1002b880();
  return;
}

/* 1002b870  FUN_1002b870  (10 bytes)
 * undefined FUN_1002b870(void)
 * called by: FUN_1002b860
 */
void FUN_1002b870(void)

{
  FUN_1002b8b0((undefined4 *)&DAT_100ae760);
  return;
}

/* 1002b880  FUN_1002b880  (12 bytes)
 * undefined FUN_1002b880(void)
 * called by: FUN_1002b860
 */
void FUN_1002b880(void)

{
  FUN_1007dd3e(0x1002b890);
  return;
}

/* 1002b890  FUN_1002b890  (10 bytes)
 * undefined FUN_1002b890()
 */
void FUN_1002b890(void)

{
  FUN_1002b8a0((undefined4 *)&DAT_100ae760);
  return;
}

/* 1002b8a0  FUN_1002b8a0  (7 bytes)
 * undefined FUN_1002b8a0(undefined4 * param_1)
 * called by: FUN_1002b890, FUN_1002b960
 */
void __fastcall FUN_1002b8a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1008f1a4;
  return;
}

/* 1002b8b0  FUN_1002b8b0  (9 bytes)
 * undefined FUN_1002b8b0(undefined4 * param_1)
 * called by: FUN_1002b870
 */
void __fastcall FUN_1002b8b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1008f1ac;
  return;
}

/* 1002b8c0  FUN_1002b8c0  (149 bytes)
 * undefined FUN_1002b8c0()
 */
undefined4 FUN_1002b8c0(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((g_teamplay != 0) &&
     (iVar1 = (**(code **)(*g_pGameRules + 0xc4))(param_1,param_2), iVar1 != 1)) {
    return 0;
  }
  if ((((TSGameRules == '\x03') || (TSGameRules == '\x02')) || (DAT_102efbc4 != 0)) &&
     ((iVar1 = (**(code **)(*param_2 + 0xac))(), iVar1 == 0 && ((float)param_2[0x1d7] < 0.0)))) {
    iVar1 = (**(code **)(*param_1 + 0xac))();
    if ((iVar1 == 0) && ((float)param_1[0x1d7] < 0.0)) {
      return 1;
    }
    return 0;
  }
  return 1;
}

/* 1002b960  FUN_1002b960  (30 bytes)
 * undefined4 * FUN_1002b960(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_1002b960(void *this,byte_conflict param_1)

{
  FUN_1002b8a0(this);
  if ((param_1 & 1) != 0) {
    FUN_1007dd7f(this);
  }
  return this;
}

/* 1002ba80  FUN_1002ba80  (146 bytes)
 * undefined FUN_1002ba80()
 */
undefined4 FUN_1002ba80(int param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte_conflict *pbVar4;
  void *this;
  char *pcVar5;
  bool bVar6;
  
  uVar2 = CVoiceGameMgr::ClientCommand((CVoiceGameMgr *)&DAT_100aee48,param_1,param_2);
  if ((char)uVar2 != '\0') {
    return 1;
  }
  pcVar5 = s_menuselect_1009fe48;
  do {
    bVar1 = *param_2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1002bad3:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1002bad8;
    }
    if (bVar1 == 0) break;
    bVar1 = param_2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1002bad3;
    param_2 = param_2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002bad8:
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = (*g_engfuncs.pfnCmd_Argc)();
  if (iVar3 < 2) {
    return 1;
  }
  pbVar4 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
  atoi(this,pbVar4);
  return 1;
}

/* 1002bb20  FUN_1002bb20  (156 bytes)
 * undefined FUN_1002bb20(void)
 * called by: CHalfLifeMultiplay::CHalfLifeMultiplay
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002bb20(void)

{
  CGameRules::RefreshSkillData();
  _DAT_100b3850 = 0x41f00000;
  _DAT_100b3800 = 0x41c80000;
  _DAT_100b3804 = 0x41400000;
  _DAT_100b3808 = 0x42200000;
  _DAT_100b380c = 0x41400000;
  _DAT_100b3810 = 0x42c80000;
  _DAT_100b3814 = 0x41a00000;
  _DAT_100b3818 = 0x41a00000;
  _DAT_100b3820 = 0x42f00000;
  _DAT_100b382c = 0x41a00000;
  _DAT_100b3828 = 0x41200000;
  _DAT_100b3834 = 0x42c80000;
  _DAT_100b3838 = 0x42f00000;
  _DAT_100b383c = 0x43160000;
  _DAT_100b3830 = 0x41200000;
  return;
}

/* 1002bdf0  FUN_1002bdf0  (13 bytes)
 * undefined FUN_1002bdf0()
 */
longlong FUN_1002bdf0(void)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  return lVar1;
}

/* 1002be00  FUN_1002be00  (116 bytes)
 * undefined FUN_1002be00()
 */
bool FUN_1002be00(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x11c))();
  if (iVar1 == 0) {
    return false;
  }
  if (*(int **)(param_1 + 0x9fc) == (int *)0x0) {
    return true;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x9fc) + 0x124))();
  if (iVar1 == 0) {
    return false;
  }
  return *(int *)(&DAT_102eee48 + *(int *)(*(int *)(param_1 + 0x9fc) + 0x78) * 0x2c) <
         *(int *)(&DAT_102eee48 + param_2[0x1e] * 0x2c);
}

/* 1002be80  FUN_1002be80  (250 bytes)
 * undefined FUN_1002be80()
 */
undefined4 FUN_1002be80(void *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iStack_4;
  
  piVar2 = param_2;
  iVar4 = -1;
  piVar5 = (int *)0x0;
  iVar3 = (**(code **)(*param_2 + 0x124))();
  if (iVar3 == 0) {
    return 0;
  }
  iStack_4 = 0;
  param_2 = (int *)((int)param_1 + 0x9e4);
  do {
    for (piVar1 = (int *)*param_2; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x1d]) {
      iVar3 = *(int *)(&DAT_102eee48 + piVar1[0x1e] * 0x2c);
      if (((iVar3 < 0) || (iVar3 != *(int *)(&DAT_102eee48 + piVar2[0x1e] * 0x2c))) ||
         (piVar1 == piVar2)) {
        if (((iVar4 < iVar3) && (piVar1 != piVar2)) &&
           (iVar3 = (**(code **)(*piVar1 + 0x11c))(), iVar3 != 0)) {
          iVar4 = *(int *)(&DAT_102eee48 + piVar1[0x1e] * 0x2c);
          piVar5 = piVar1;
        }
      }
      else {
        iVar3 = (**(code **)(*piVar1 + 0x11c))();
        if ((iVar3 != 0) && (iVar3 = FUN_10035a00(param_1,piVar1), iVar3 != 0)) {
          return 1;
        }
      }
    }
    iStack_4 = iStack_4 + 1;
    param_2 = param_2 + 1;
    if (5 < iStack_4) {
      if (piVar5 != (int *)0x0) {
        FUN_10035a00(param_1,piVar5);
        return 1;
      }
      return 0;
    }
  } while( true );
}

/* 1002bf80  FUN_1002bf80  (23 bytes)
 * undefined FUN_1002bf80()
 */
undefined4 FUN_1002bf80(undefined4 param_1)

{
  FUN_10079070(param_1);
  return 1;
}

/* 1002bfa0  FUN_1002bfa0  (50 bytes)
 * undefined FUN_1002bfa0()
 */
void FUN_1002bfa0(int param_1)

{
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100d9724,(float *)0x0,*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 1002c330  FUN_1002c330  (54 bytes)
 * undefined FUN_1002c330()
 */
float10 FUN_1002c330(int param_1)

{
  float10 fVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  if ((int)lVar2 != 1) {
    return (float10)10.0;
  }
  fVar1 = (float10)*(float *)(param_1 + 0x814) - (float10)680.0;
  *(float *)(param_1 + 0x814) = (float)fVar1;
  return fVar1 * (float10)0.22522523;
}

/* 1002c3b0  FUN_1002c3b0  (10 bytes)
 * undefined FUN_1002c3b0()
 */
float10 FUN_1002c3b0(void)

{
  return (float10)gpGlobals->time;
}

/* 1002c3c0  FUN_1002c3c0  (28 bytes)
 * undefined FUN_1002c3c0()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1002c3c0(void)

{
  if (_DAT_1009ec24 != 0.0) {
    return 1;
  }
  return 0;
}

/* 1002c3e0  FUN_1002c3e0  (69 bytes)
 * undefined FUN_1002c3e0()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_1002c3e0(int param_1)

{
  if ((0.0 < _DAT_1009ebf4) && (((&DAT_102eee44)[*(int *)(param_1 + 0x78) * 0x2c] & 8) == 0)) {
    return (float10)gpGlobals->time;
  }
  return (float10)gpGlobals->time + (float10)20.0;
}

/* 1002c430  FUN_1002c430  (84 bytes)
 * float10 FUN_1002c430(int * param_1, int param_2)
 */
float10 __thiscall FUN_1002c430(int *param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  
  if (((param_2 != 0) && (*(int *)(param_2 + 0x78) != 0)) &&
     (((&DAT_102eee44)[*(int *)(param_2 + 0x78) * 0x2c] & 8) != 0)) {
    iVar1 = (*g_engfuncs.pfnNumberOfEntities)();
    if (gpGlobals->maxEntities + -100 <= iVar1) {
      fVar2 = (float10)(**(code **)(*param_1 + 0x7c))(param_2);
      return fVar2;
    }
  }
  return (float10)0.0;
}

/* 1002c490  FUN_1002c490  (33 bytes)
 * undefined FUN_1002c490()
 */
void FUN_1002c490(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  *param_1 = *(undefined4 *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  return;
}

/* 1002c4c0  FUN_1002c4c0  (28 bytes)
 * undefined FUN_1002c4c0()
 */
char FUN_1002c4c0(int param_1)

{
  return ((*(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 0x40000000) != 0) + '\x01';
}

/* 1002c4e0  FUN_1002c4e0  (124 bytes)
 * undefined FUN_1002c4e0()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1002c4e0(void *param_1,void *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  if (0.0 < _DAT_1009ebf4) {
    if (((&DAT_102eee44)[param_3[0x1e] * 0x2c] & 8) != 0) {
      uVar2 = FUN_10026a30(param_1,param_2,param_3);
      return uVar2;
    }
    iVar4 = 0;
    piVar3 = (int *)((int)param_2 + 0x9e4);
    do {
      for (iVar1 = *piVar3; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x74)) {
        if (*(int *)(iVar1 + 0x78) == param_3[0x1e]) {
          return 0;
        }
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < 6);
  }
  uVar2 = FUN_10026a30(param_1,param_2,param_3);
  return uVar2;
}

/* 1002c560  FUN_1002c560  (30 bytes)
 * undefined FUN_1002c560()
 */
char FUN_1002c560(int param_1)

{
  return ((*(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 0x40000000) != 0) + '\x05';
}

/* 1002c580  FUN_1002c580  (16 bytes)
 * undefined FUN_1002c580()
 */
float10 FUN_1002c580(void)

{
  return (float10)gpGlobals->time + (float10)30.0;
}

/* 1002c590  FUN_1002c590  (30 bytes)
 * undefined FUN_1002c590()
 */
char FUN_1002c590(int param_1)

{
  return ((*(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 0x40000000) != 0) + '\x03';
}

/* 1002c5b0  FUN_1002c5b0  (16 bytes)
 * undefined FUN_1002c5b0()
 */
float10 FUN_1002c5b0(void)

{
  return (float10)gpGlobals->time + (float10)20.0;
}

/* 1002c5c0  FUN_1002c5c0  (7 bytes)
 * undefined FUN_1002c5c0()
 */
float10 FUN_1002c5c0(void)

{
  return (float10)60.0;
}

/* 1002c5d0  FUN_1002c5d0  (7 bytes)
 * undefined FUN_1002c5d0()
 */
float10 FUN_1002c5d0(void)

{
  return (float10)30.0;
}

/* 1002c5e0  FUN_1002c5e0  (8 bytes)
 * undefined FUN_1002c5e0()
 */
undefined4 FUN_1002c5e0(void)

{
  return 8;
}

/* 1002c5f0  FUN_1002c5f0  (8 bytes)
 * undefined FUN_1002c5f0()
 */
undefined4 FUN_1002c5f0(void)

{
  return 0xb;
}

/* 1002c600  FUN_1002c600  (75 bytes)
 * int FUN_1002c600(int * param_1)
 */
int __thiscall FUN_1002c600(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10026910(param_1);
  iVar2 = (**(code **)(*(int *)this + 0x14))();
  if ((iVar2 != 0) && (*(int *)(iVar1 + 0x248) != 0)) {
    FireTargets((int)(gpGlobals->pStringBase + *(int *)(iVar1 + 0x248)),param_1,param_1,3,0);
  }
  return iVar1;
}

/* 1002c650  FUN_1002c650  (28 bytes)
 * undefined FUN_1002c650()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1002c650(void)

{
  if (_DAT_1009ecb4 != 0.0) {
    return 1;
  }
  return 0;
}

/* 1002c670  FUN_1002c670  (172 bytes)
 * undefined FUN_1002c670()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1002c670(int param_1)

{
  char *szValue;
  longlong lVar1;
  
  if (g_fGameOver == 0) {
    (*g_engfuncs.pfnMessageBegin)(2,0x1e,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnMessageEnd)();
    (*g_engfuncs.pfnCVarGetFloat)(s_mp_chattime_1009f0c8);
    lVar1 = __ftol();
    if ((int)lVar1 < 10) {
      (*g_engfuncs.pfnCVarSetString)(s_mp_chattime_1009f0c8,&DAT_1009f0c4);
    }
    else if (0x78 < (int)lVar1) {
      szValue = FUN_10076eb0();
      (*g_engfuncs.pfnCVarSetString)(s_mp_chattime_1009f0c8,szValue);
    }
    lVar1 = __ftol();
    *(float *)(param_1 + 4) = (float)(int)lVar1 + gpGlobals->time;
    _DAT_100aee68 = gpGlobals->time;
    g_fGameOver = 1;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

/* 1002c720  FUN_1002c720  (64 bytes)
 * undefined FUN_1002c720(int * param_1)
 * called by: CHalfLifeMultiplay::ChangeLevel
 */
void __cdecl FUN_1002c720(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar1;
    while (puVar3 != puVar1) {
      puVar2 = (undefined4 *)*puVar3;
      FUN_1007dd7f(puVar3);
      puVar3 = puVar2;
    }
    FUN_1007dd7f((LPVOID)*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

/* 1002c760  FUN_1002c760  (240 bytes)
 * char * FUN_1002c760(char * param_1)
 * called by: ReloadMapCycleFile
 */
char * __cdecl FUN_1002c760(char *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = 0;
  DAT_100ae868 = 0;
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  while( true ) {
    cVar1 = *param_1;
    while (cVar1 < '!') {
      if (cVar1 == '\0') {
        DAT_100ae868 = 0;
        return (char *)0x0;
      }
      pcVar3 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar1 = *pcVar3;
    }
    if (cVar1 != '/') break;
    if (param_1[1] != '/') goto LAB_1002c7f5;
    cVar1 = *param_1;
    while ((cVar1 != '\0' && (cVar1 != '\n'))) {
      pcVar3 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar1 = *pcVar3;
    }
  }
  if (cVar1 == '\"') {
    pcVar3 = param_1 + 1;
    while( true ) {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      if ((cVar1 == '\"') || (cVar1 == '\0')) break;
      (&DAT_100ae868)[iVar4] = cVar1;
      iVar4 = iVar4 + 1;
    }
    (&DAT_100ae868)[iVar4] = 0;
    return pcVar3;
  }
  if ((((cVar1 == '{') || (cVar1 == '}')) || (cVar1 == ')')) ||
     (((cVar1 == '(' || (cVar1 == '\'')) || (cVar1 == ',')))) {
    DAT_100ae869 = 0;
    DAT_100ae868 = cVar1;
    return param_1 + 1;
  }
LAB_1002c7f5:
  pcVar3 = param_1 + 1;
  iVar4 = 1;
  cVar2 = *pcVar3;
  DAT_100ae868 = cVar1;
  while (((cVar2 != '{' && (cVar2 != '}')) &&
         ((cVar2 != ')' &&
          ((((cVar2 != '(' && (cVar2 != '\'')) && (cVar2 != ',')) && (' ' < cVar2))))))) {
    pcVar3 = pcVar3 + 1;
    (&DAT_100ae868)[iVar4] = cVar2;
    iVar4 = iVar4 + 1;
    cVar2 = *pcVar3;
  }
  (&DAT_100ae868)[iVar4] = 0;
  return pcVar3;
}

/* 1002c850  FUN_1002c850  (67 bytes)
 * undefined4 FUN_1002c850(char * param_1)
 * called by: ReloadMapCycleFile
 */
undefined4 __thiscall FUN_1002c850(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  void *extraout_ECX;
  
  cVar1 = *param_1;
  while( true ) {
    if ((cVar1 == '\0') || (*param_1 == '\n')) {
      return 0;
    }
    uVar2 = FUN_1007dac6(this,(int)*param_1);
    if ((uVar2 == 0) || (uVar2 = FUN_1007daee((void *)(int)*param_1,(int)*param_1), uVar2 != 0))
    break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
    this = extraout_ECX;
  }
  return 1;
}

/* 1002cb70  FUN_1002cb70  (58 bytes)
 * int FUN_1002cb70(void)
 * called by: CHalfLifeMultiplay::ChangeLevel
 */
int FUN_1002cb70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  iVar3 = 0;
  if (0 < gpGlobals->maxClients) {
    do {
      iVar1 = UTIL_PlayerByIndex(iVar2);
      if (iVar1 != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= gpGlobals->maxClients);
  }
  return iVar3;
}

/* 1002cbb0  FUN_1002cbb0  (293 bytes)
 * undefined FUN_1002cbb0(char * param_1, char * param_2)
 * called by: CHalfLifeMultiplay::ChangeLevel
 */
void __cdecl FUN_1002cbb0(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char local_400 [512];
  char local_200 [512];
  
  if (*param_1 == '\\') {
    param_1 = param_1 + 1;
  }
  do {
    pcVar2 = local_200;
    cVar1 = *param_1;
    while (cVar1 != '\\') {
      if (cVar1 == '\0') {
        return;
      }
      *pcVar2 = cVar1;
      pcVar7 = param_1 + 1;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + 1;
      cVar1 = *pcVar7;
    }
    cVar1 = param_1[1];
    *pcVar2 = '\0';
    pcVar2 = local_400;
    while ((cVar1 != '\\' && (cVar1 != '\0'))) {
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
      cVar1 = param_1[2];
      param_1 = param_1 + 1;
    }
    *pcVar2 = '\0';
    uVar3 = 0xffffffff;
    pcVar2 = local_200;
    do {
      pcVar7 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar2 = param_2;
    do {
      pcVar6 = pcVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar3;
    pcVar7 = pcVar6 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    iVar4 = -1;
    pcVar2 = local_400;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (iVar4 != -2) {
      uVar3 = 0xffffffff;
      pcVar2 = &DAT_1009ff58;
      do {
        pcVar7 = pcVar2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar7 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar7;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar4 = -1;
      pcVar2 = param_2;
      do {
        pcVar6 = pcVar2;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar6 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar6;
      } while (cVar1 != '\0');
      pcVar2 = pcVar7 + -uVar3;
      pcVar7 = pcVar6 + -1;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar7 = pcVar7 + 1;
      }
      uVar3 = 0xffffffff;
      pcVar2 = local_400;
      do {
        pcVar7 = pcVar2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar7 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar7;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar4 = -1;
      pcVar2 = param_2;
      do {
        pcVar6 = pcVar2;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar6 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar6;
      } while (cVar1 != '\0');
      pcVar2 = pcVar7 + -uVar3;
      pcVar7 = pcVar6 + -1;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    uVar3 = 0xffffffff;
    pcVar2 = &DAT_1009ccd8;
    do {
      pcVar7 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar2 = param_2;
    do {
      pcVar6 = pcVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar3;
    pcVar7 = pcVar6 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    if (param_1[1] == '\0') {
      return;
    }
    param_1 = param_1 + 2;
  } while( true );
}

/* 1002d170  FUN_1002d170  (35 bytes)
 * undefined FUN_1002d170()
 */
char * FUN_1002d170(void)

{
  char *pcVar1;
  
  if (DAT_102efbc0 != 0) {
    return s_The_Specialists__The_One__1009fd98;
  }
  pcVar1 = s_The_Specialists__LMS__1009fdb4;
  if (DAT_102efbc4 == 0) {
    pcVar1 = s_The_Specialists__DM__1009fd64;
  }
  return pcVar1;
}

/* 1002d1a0  FUN_1002d1a0  (6 bytes)
 * undefined FUN_1002d1a0()
 */
undefined4 FUN_1002d1a0(void)

{
  return 0xffffffff;
}

/* 1002d1b0  FUN_1002d1b0  (8 bytes)
 * undefined FUN_1002d1b0()
 */
undefined1 * FUN_1002d1b0(void)

{
  return &DAT_100a9398;
}

/* 1002d1c0  FUN_1002d1c0  (8 bytes)
 * undefined FUN_1002d1c0()
 */
void __fastcall FUN_1002d1c0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1002d1c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf4))();
  return;
}

