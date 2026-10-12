/* mp.dll - unnamed_10002e50 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10002e50  FUN_10002e50  (486 bytes)
 * undefined FUN_10002e50(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl FUN_10002e50(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = s_Combat_Knife_1008f93c;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x19;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 5;
  *(undefined4 *)(param_1 + 0x20) = 6;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f8f8)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_knife_spr_1008f920;
  param_1[0x84] = 1;
  param_1[0x85] = 1;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f89a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  pcVar2 = s_models_v_knife_mdl_1008f90c;
  param_1[0xca] = 1;
  *(undefined4 *)(param_1 + 0xd0) = 100;
  param_1[0xd4] = 1;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f7e2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_knife_mdl_1008f8f8;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f78e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f27e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_knife_mdl_1008f8e4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f6fa)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f1fe)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x288) = 3;
  *(undefined2 *)(param_1 + 0x28a) = 4;
  *(undefined2 *)(param_1 + 0x28c) = 5;
  *(undefined2 *)(param_1 + 0x28e) = 6;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f14a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f10a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 3;
  *(undefined4 *)(param_1 + 0x364) = 0;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  return;
}

/* 100061f0  FUN_100061f0  (41 bytes)
 * undefined FUN_100061f0(int param_1)
 */
void __thiscall FUN_100061f0(void *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(*(edict_t **)(*(int *)((int)this + 4) + 0x208));
  FUN_10006900((int)pvVar1,*(undefined4 *)((int)this + 4),param_1);
  return;
}

/* 10006400  FUN_10006400  (46 bytes)
 * undefined FUN_10006400(int param_1, float param_2)
 */
void __thiscall FUN_10006400(void *this,int param_1,float param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(*(edict_t **)(*(int *)((int)this + 4) + 0x208));
  FUN_10006d40((int)pvVar1,*(int *)((int)this + 4),param_1,param_2);
  return;
}

/* 10006430  FUN_10006430  (92 bytes)
 * undefined FUN_10006430(int param_1)
 * called by: CBaseMonster::MonsterInitDead, CTSModel::Spawn, FUN_1001fc00
 */
void __fastcall FUN_10006430(int param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  FUN_10006d40((int)pvVar1,*(int *)(param_1 + 4),0,0.0);
  FUN_10006d40((int)pvVar1,*(int *)(param_1 + 4),1,0.0);
  FUN_10006d40((int)pvVar1,*(int *)(param_1 + 4),2,0.0);
  FUN_10006d40((int)pvVar1,*(int *)(param_1 + 4),3,0.0);
  return;
}

/* 10006490  FUN_10006490  (46 bytes)
 * undefined FUN_10006490(int param_1, float param_2)
 */
void __thiscall FUN_10006490(void *this,int param_1,float param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(*(edict_t **)(*(int *)((int)this + 4) + 0x208));
  FUN_10006eb0((int)pvVar1,*(int *)((int)this + 4),param_1,param_2);
  return;
}

/* 100065f0  FUN_100065f0  (46 bytes)
 * undefined FUN_100065f0(int param_1, undefined4 * param_2, undefined4 * param_3)
 * called by: FUN_10006620
 */
void __thiscall FUN_100065f0(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *pvVar1;
  
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(*(edict_t **)(*(int *)((int)this + 4) + 0x208));
  FUN_10006820((int)pvVar1,param_1,param_2,param_3);
  return;
}

/* 10006620  FUN_10006620  (457 bytes)
 * undefined FUN_10006620(void * param_1)
 * called by: CBaseMonster::CorpseFallThink
 */
void __fastcall FUN_10006620(void *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = FUN_100065f0(param_1,*(int *)(*(int *)((int)param_1 + 4) + 0x128),&local_48,&local_3c);
  if (iVar3 != 0) {
    fVar9 = (float10)*(float *)(*(int *)((int)param_1 + 4) + 0x54) * (float10)0.017453292519943295;
    local_18 = local_48;
    local_14 = local_44;
    local_10 = local_40;
    fVar10 = (float10)fcos(fVar9);
    local_c = local_3c;
    local_8 = local_38;
    local_4 = local_34;
    local_60 = 9999.0;
    local_5c = 9999.0;
    local_58 = 9999.0;
    local_6c = -9999.0;
    local_68 = -9999.0;
    local_64 = -9999.0;
    pfVar6 = &local_18;
    iVar3 = 2;
    local_30 = (float)fVar10;
    fVar9 = (float10)fsin((float10)(float)fVar9);
    local_2c = (float)fVar9;
    local_24 = (float)-fVar9;
    do {
      pfVar7 = &local_14;
      iVar8 = 2;
      do {
        pfVar4 = &local_10;
        iVar5 = 2;
        fVar1 = (float)((float10)local_24 * (float10)*pfVar7 +
                       (float10)(float)((float10)local_30 * (float10)*pfVar6));
        fVar9 = (float10)*pfVar7 * fVar10 + (float10)*pfVar6 * (float10)local_2c;
        do {
          fVar2 = *pfVar4;
          if (fVar1 < local_60) {
            local_60 = fVar1;
          }
          if (local_6c < fVar1) {
            local_6c = fVar1;
          }
          if (fVar9 < (float10)local_5c) {
            local_5c = (float)fVar9;
          }
          if ((float10)local_68 < fVar9) {
            local_68 = (float)fVar9;
          }
          if (fVar2 < local_58) {
            local_58 = fVar2;
          }
          if (local_64 < fVar2) {
            local_64 = fVar2;
          }
          pfVar4 = pfVar4 + 3;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        pfVar7 = pfVar7 + 3;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      pfVar6 = pfVar6 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    FUN_10067970();
  }
  return;
}

/* 100067f0  FUN_100067f0  (42 bytes)
 * undefined FUN_100067f0(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)
 * called by: FUN_1005e450
 */
void FUN_100067f0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  if (-1 < param_3 + -1) {
    do {
      (*(code *)param_4)();
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

/* 10006820  FUN_10006820  (82 bytes)
 * undefined4 FUN_10006820(int param_1, int param_2, undefined4 * param_3, undefined4 * param_4)
 * called by: FUN_100065f0
 */
undefined4 __cdecl FUN_10006820(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xa8) + param_1 + param_2 * 0xb0;
  *param_3 = *(undefined4 *)(iVar1 + 0x60);
  param_3[1] = *(undefined4 *)(iVar1 + 100);
  param_3[2] = *(undefined4 *)(iVar1 + 0x68);
  *param_4 = *(undefined4 *)(iVar1 + 0x6c);
  param_4[1] = *(undefined4 *)(iVar1 + 0x70);
  param_4[2] = *(undefined4 *)(iVar1 + 0x74);
  return 1;
}

/* 10006900  FUN_10006900  (79 bytes)
 * int FUN_10006900(int param_1, undefined4 param_2, int param_3)
 * called by: FUN_100061f0
 */
int __cdecl FUN_10006900(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 != 0) {
    iVar3 = 0;
    iVar1 = -1;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xa4)) {
      piVar4 = (int *)(*(int *)(param_1 + 0xa8) + param_1 + 0x2c);
      do {
        if ((piVar4[-1] == param_3) && (iVar3 < *piVar4)) {
          iVar1 = iVar2;
          iVar3 = *piVar4;
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 0x2c;
      } while (iVar2 < *(int *)(param_1 + 0xa4));
    }
    return iVar1;
  }
  return 0;
}

/* 10006990  FUN_10006990  (91 bytes)
 * int FUN_10006990(int param_1, byte.conflict * param_2)
 * called by: CBaseAnimating::LookupSequence
 */
int __cdecl FUN_10006990(int param_1,byte_conflict *param_2)

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
      uVar2 = FUN_1007e860(this,pbVar1,param_2);
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

/* 10006d40  FUN_10006d40  (368 bytes)
 * float10 FUN_10006d40(int param_1, int param_2, int param_3, float param_4)
 * called by: FUN_10006400, FUN_10006430
 */
float10 __cdecl FUN_10006d40(int param_1,int param_2,int param_3,float param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    return (float10)param_4;
  }
  iVar4 = *(int *)(param_1 + 0x98) + param_1;
  iVar3 = *(int *)(param_1 + 0x94);
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      if (*(int *)(iVar4 + 0x14) == param_3) break;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar2 < iVar3);
  }
  if (iVar2 < iVar3) {
    if ((*(byte *)(iVar4 + 4) & 0x38) != 0) {
      if (*(float *)(iVar4 + 0xc) < *(float *)(iVar4 + 8)) {
        param_4 = -param_4;
      }
      fVar1 = *(float *)(iVar4 + 8) + 359.0;
      if (*(float *)(iVar4 + 0xc) < fVar1 == (*(float *)(iVar4 + 0xc) == fVar1)) {
        if (param_4 <= 360.0) {
          if (param_4 < 0.0) {
            __ftol();
          }
        }
        else {
          __ftol();
        }
      }
    }
    lVar5 = __ftol();
    iVar3 = (int)lVar5;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0xff < iVar3) {
      iVar3 = 0xff;
    }
    *(char *)(param_2 + 0x13c + param_3) = (char)iVar3;
    return ((float10)*(float *)(iVar4 + 0xc) - (float10)*(float *)(iVar4 + 8)) * (float10)iVar3 *
           (float10)0.00392156862745098 + (float10)*(float *)(iVar4 + 8);
  }
  return (float10)param_4;
}

/* 10006eb0  FUN_10006eb0  (321 bytes)
 * float10 FUN_10006eb0(int param_1, int param_2, int param_3, float param_4)
 * called by: FUN_10006490
 */
float10 __cdecl FUN_10006eb0(int param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return (float10)param_4;
  }
  iVar2 = *(int *)(param_2 + 0x128) * 0xb0 + *(int *)(param_1 + 0xa8) + param_1;
  if (*(int *)(iVar2 + 0x80 + param_3 * 4) == 0) {
    return (float10)param_4;
  }
  lVar3 = __ftol();
  iVar1 = (int)lVar3;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  *(char *)(param_2 + 0x140 + param_3) = (char)iVar1;
  return ((float10)*(float *)(iVar2 + 0x90 + param_3 * 4) -
         (float10)*(float *)(iVar2 + 0x88 + param_3 * 4)) * (float10)iVar1 *
         (float10)0.00392156862745098 + (float10)*(float *)(iVar2 + 0x88 + param_3 * 4);
}

/* 10007360  FUN_10007360  (48 bytes)
 * undefined FUN_10007360(int param_1)
 * called by: CFuncWallToggle::Use
 */
void __fastcall FUN_10007360(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 4;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) & 0xffffff7f;
  FUN_100679a0();
  return;
}

/* 10007390  FUN_10007390  (19 bytes)
 * bool FUN_10007390(int param_1)
 * called by: CFuncWallToggle::Use
 */
bool __fastcall FUN_10007390(int param_1)

{
  return *(int *)(*(int *)(param_1 + 4) + 0x10c) != 0;
}

/* 10008b30  FUN_10008b30  (23 bytes)
 * undefined FUN_10008b30()
 */
void __fastcall FUN_10008b30(int param_1)

{
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 1.0;
  return;
}

/* 1000a2f0  FUN_1000a2f0  (84 bytes)
 * undefined4 FUN_1000a2f0(int param_1)
 * called by: CBaseButton::ButtonTouch, CBaseButton::TakeDamage
 */
undefined4 __fastcall FUN_1000a2f0(int param_1)

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

/* 1000a540  FUN_1000a540  (25 bytes)
 * undefined FUN_1000a540(undefined4 * param_1)
 * called by: CBaseButton::ButtonActivate, CBaseButton::ButtonReturn, CBaseDoor::DoorGoDown, CBaseDoor::DoorGoUp, CBaseEntity::TraceAttack, CBaseMonster::TraceAttack, CBasePlayer::PlayerDeathThink, CBasePlayer::ShootBulletsPlayer, CBreakable::TraceAttack, CFuncPlat::GoDown, CFuncPlat::GoUp, CFuncTankGun::Fire, ... (45 total)
 */
void __thiscall FUN_1000a540(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return;
}

/* 1000ac60  FUN_1000ac60  (58 bytes)
 * undefined FUN_1000ac60(int param_1)
 * called by: FUN_1000ada0
 */
void __fastcall FUN_1000ac60(int param_1)

{
  EMIT_SOUND_DYN(gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1e8),
                 *(undefined4 *)(*(int *)(param_1 + 4) + 0x208),2,
                 gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1e8),0x3f800000,
                 0x3f4ccccd,0,100);
  return;
}

/* 1000ad00  FUN_1000ad00  (150 bytes)
 * undefined FUN_1000ad00(float param_1, int param_2)
 * called by: CMomentaryRotButton::Return, CMomentaryRotButton::Use
 */
void __thiscall FUN_1000ad00(void *this,float param_1,int param_2)

{
  void *this_00;
  int iVar1;
  edict_t *pEdictStartSearchAfter;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  pEdictStartSearchAfter = (edict_t *)0x0;
  do {
    pEdictStartSearchAfter =
         (*g_engfuncs.pfnFindEntityByString)
                   (pEdictStartSearchAfter,s_target_100912f0,
                    gpGlobals->pStringBase + *(int *)(*(int *)((int)this + 4) + 0x1c8));
    if (pEdictStartSearchAfter == (edict_t *)0x0) {
      return;
    }
    iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = 0x15;
    bVar4 = true;
    pcVar2 = gpGlobals->pStringBase + (pEdictStartSearchAfter->v).classname;
    pcVar3 = s_momentary_rot_button_10091610;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if ((bVar4) && (this_00 = pEdictStartSearchAfter->pvPrivateData, this_00 != (void *)0x0)) {
      if (param_2 == 0) {
        FUN_1000b050(this_00,param_1);
      }
      else {
        FUN_1000ada0(this_00,param_1);
      }
    }
  } while( true );
}

/* 1000ada0  FUN_1000ada0  (350 bytes)
 * undefined FUN_1000ada0(float param_1)
 * called by: FUN_1000ad00
 */
void __thiscall FUN_1000ada0(void *this,float param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  bVar5 = *(int *)((int)this + 0xf0) == 0;
  if (bVar5) {
    *(int *)((int)this + 0xf4) = -*(int *)((int)this + 0xf4);
  }
  *(undefined4 *)((int)this + 0xf0) = 1;
  *(float *)(*(int *)((int)this + 4) + 0x104) = *(float *)(*(int *)((int)this + 4) + 0x100) + 0.1;
  if ((*(int *)((int)this + 0xf4) < 1) || (param_1 < 1.0)) {
    if ((-1 < *(int *)((int)this + 0xf4)) || (param_1 < 0.0 == (param_1 == 0.0))) {
      if (bVar5) {
        FUN_1000ac60((int)this);
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
    puVar4 = (undefined4 *)(iVar2 + 0x5c);
    *puVar4 = DAT_1009f4a8;
    *(undefined4 *)(iVar2 + 0x60) = DAT_1009f4ac;
    puVar3 = (undefined4 *)((int)this + 0xfc);
  }
  else {
    iVar2 = *(int *)((int)this + 4);
    puVar4 = (undefined4 *)(iVar2 + 0x5c);
    *puVar4 = DAT_1009f4a8;
    *(undefined4 *)(iVar2 + 0x60) = DAT_1009f4ac;
    puVar3 = (undefined4 *)((int)this + 0x108);
  }
  puVar4[2] = DAT_1009f4b0;
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar2 + 0x50) = *puVar3;
  *(undefined4 *)(iVar2 + 0x54) = puVar3[1];
  *(undefined4 *)(iVar2 + 0x58) = puVar3[2];
  return;
}

/* 1000af00  FUN_1000af00  (111 bytes)
 * undefined FUN_1000af00(undefined4 param_1)
 * called by: CMomentaryRotButton::Return, CMomentaryRotButton::Use
 */
void __thiscall FUN_1000af00(void *this,undefined4 param_1)

{
  int iVar1;
  edict_t *pEdictStartSearchAfter;
  
  if (*(int *)(*(int *)((int)this + 4) + 0x1c8) != 0) {
    pEdictStartSearchAfter = (edict_t *)0x0;
    while (pEdictStartSearchAfter =
                (*g_engfuncs.pfnFindEntityByString)
                          (pEdictStartSearchAfter,s_targetname_100915e4,
                           gpGlobals->pStringBase + *(int *)(*(int *)((int)this + 4) + 0x1c8)),
          pEdictStartSearchAfter != (edict_t *)0x0) {
      iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
      if (iVar1 == 0) {
        return;
      }
      if (pEdictStartSearchAfter->pvPrivateData != (int *)0x0) {
        (**(code **)(*(int *)pEdictStartSearchAfter->pvPrivateData + 0xc0))(this,this,2,param_1);
      }
    }
  }
  return;
}

/* 1000b050  FUN_1000b050  (191 bytes)
 * undefined FUN_1000b050(float param_1)
 * called by: FUN_1000ad00
 */
void __thiscall FUN_1000b050(void *this,float param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (param_1 < 0.0 != (param_1 == 0.0)) {
    *(undefined4 *)(iVar1 + 0x5c) = DAT_1009f4a8;
    *(undefined4 *)(iVar1 + 0x60) = DAT_1009f4ac;
    *(undefined4 *)(iVar1 + 100) = DAT_1009f4b0;
    iVar1 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)((int)this + 0xfc);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)((int)this + 0x100);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)((int)this + 0x104);
    *(undefined4 *)(*(int *)((int)this + 4) + 0x104) = 0xbf800000;
    *(undefined4 *)((int)this + 0x10) = 0;
    return;
  }
  fVar2 = -*(float *)((int)this + 0xf8);
  *(float *)(iVar1 + 0x5c) = fVar2 * *(float *)(iVar1 + 0x44);
  *(float *)(iVar1 + 0x60) = fVar2 * *(float *)(iVar1 + 0x48);
  *(float *)(iVar1 + 100) = fVar2 * *(float *)(iVar1 + 0x4c);
  *(float *)(*(int *)((int)this + 4) + 0x104) = *(float *)(*(int *)((int)this + 4) + 0x100) + 0.1;
  return;
}

/* 1000c190  FUN_1000c190  (28 bytes)
 * uint FUN_1000c190(uint * param_1)
 * called by: FUN_1000c1d0, FUN_1000c210, FUN_1000c220
 */
uint __fastcall FUN_1000c190(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    return ~-(uint)(*(uint *)(uVar1 + 4) != param_1[1]) & uVar1;
  }
  return 0;
}

/* 1000c1d0  FUN_1000c1d0  (16 bytes)
 * undefined4 FUN_1000c1d0(uint * param_1)
 * called by: CBaseButton::ButtonActivate, CBaseButton::ButtonBackHome, CBaseButton::ButtonTouch, CBaseButton::TakeDamage, CBaseButton::TriggerAndWait, CBaseDoor::DoorActivate, CBaseDoor::DoorHitBottom, CBaseDoor::DoorHitTop, CBaseMonster::Look, CBaseToggle::IsLockedByMaster, CBaseTrigger::ActivateMultiTrigger, CBaseTrigger::CounterUse, ... (18 total)
 */
undefined4 __fastcall FUN_1000c1d0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1000c190(param_1);
  if (uVar1 != 0) {
    return *(undefined4 *)(uVar1 + 0x7c);
  }
  return 0;
}

/* 1000c210  FUN_1000c210  (12 bytes)
 * bool FUN_1000c210(uint * param_1)
 * called by: CBaseButton::TakeDamage, CBaseDoor::DoorActivate, CBaseDoor::DoorGoUp, CBaseMonster::TakeDamage, CBasePlayer::Killed, CBasePlayer::PlayerUse, CBasePlayer::PostThink, CBasePlayer::StartObserver, CGunTarget::Use, CTriggerCamera::FollowTarget, CTriggerCamera::Use, FUN_1002d840
 */
bool __fastcall FUN_1000c210(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1000c190(param_1);
  return uVar1 != 0;
}

/* 1000c220  FUN_1000c220  (16 bytes)
 * undefined4 FUN_1000c220(uint * param_1)
 * called by: CBaseDoor::DoorActivate, CBaseDoor::DoorGoUp, CBaseMonster::TakeDamage, CBasePlayer::Killed, CBasePlayer::PlayerUse, CBasePlayer::PostThink, CBasePlayer::StartObserver, CBaseTrigger::CounterUse, CRecharge::Use, CTriggerCamera::FollowTarget
 */
undefined4 __fastcall FUN_1000c220(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1000c190(param_1);
  if (uVar1 != 0) {
    return *(undefined4 *)(uVar1 + 0x7c);
  }
  return 0;
}

/* 1000c5f0  FUN_1000c5f0  (25 bytes)
 * undefined FUN_1000c5f0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: CBaseDoor::DoorGoUp, CBaseEntity::TakeDamage, CBaseMonster::TakeDamage, CBasePlayer::PlayerDeathThink, CBasePlayer::ShootBulletsPlayer, CBasePlayer::ThrowWeapon, CCyclerProbe::Spawn, CGenericCycler::Spawn, CGibShooter::ShootThink, CM61Grenade::WaitThink, CTSKnife::BounceTouch, CTSKnife::WaitThink, ... (28 total)
 */
void __thiscall FUN_1000c5f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return;
}

/* 1000c610  FUN_1000c610  (35 bytes)
 * undefined FUN_1000c610(float * param_1, float * param_2)
 * called by: CBaseEntity::TakeDamage, CBasePlayer::ThrowWeapon, CFuncTrain::Next, CGunTarget::Next, CTSGun::AlternateAttack, FUN_1001cff0, FUN_100439e0, FUN_1004c090, FUN_1004c6c0, FUN_1004de10, FUN_1005cd00, FUN_10062330
 */
void __thiscall FUN_1000c610(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[2];
  fVar2 = *(float *)((int)this + 8);
  fVar3 = param_2[1];
  fVar4 = *(float *)((int)this + 4);
  *param_1 = *param_2 + *(float *)this;
  param_1[1] = fVar3 + fVar4;
  param_1[2] = fVar1 + fVar2;
  return;
}

/* 1000c640  FUN_1000c640  (33 bytes)
 * float10 FUN_1000c640(float * param_1)
 * called by: CBaseEntity::TakeDamage, FUN_10017490
 */
float10 __fastcall FUN_1000c640(float *param_1)

{
  return SQRT((float10)param_1[2] * (float10)param_1[2] +
              (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
}

/* 1000c9e0  FUN_1000c9e0  (143 bytes)
 * undefined4 FUN_1000c9e0(int param_1)
 * called by: FUN_1003b740
 */
undefined4 __thiscall FUN_1000c9e0(void *this,int param_1)

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

/* 1000ca70  FUN_1000ca70  (90 bytes)
 * undefined FUN_1000ca70(int param_1)
 * called by: pfnRestore, pfnSpawn
 */
void __fastcall FUN_1000ca70(int param_1)

{
  *(uint *)(*(int *)(param_1 + 4) + 0x1a4) = *(uint *)(*(int *)(param_1 + 4) + 0x1a4) | 0x80000000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x104) = 0;
  FUN_100679a0();
  return;
}

/* 1000cad0  FUN_1000cad0  (15 bytes)
 * uint FUN_1000cad0(int param_1)
 * called by: CChangeLevel::ChangeList
 */
uint __fastcall FUN_1000cad0(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x80000000;
}

/* 1000ce00  FUN_1000ce00  (73 bytes)
 * undefined FUN_1000ce00(int param_1)
 * called by: FUN_1005a700
 */
void __cdecl FUN_1000ce00(int param_1)

{
  int *piVar1;
  
  if ((gpGlobals->coop == 0.0) && (gpGlobals->deathmatch == 0.0)) {
    (*g_engfuncs.pfnServerCommand)(s_reload_10091b20);
    return;
  }
  piVar1 = (int *)GetClassPtr<CBasePlayer>(param_1);
                    /* WARNING: Could not recover jumptable at 0x1000ce46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))();
  return;
}

/* 1000f070  FUN_1000f070  (112 bytes)
 * undefined FUN_1000f070(undefined4 param_1)
 * called by: FUN_1000f0e0
 */
void __cdecl FUN_1000f070(delta_s *param_1)

{
  DAT_10091888 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_0__10091868);
  DAT_100918ac = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_1__1009188c);
  DAT_100918d0 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_2__100918b0);
  DAT_100918f4 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_0__100918d4);
  DAT_10091918 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_1__100918f8);
  DAT_1009193c = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_2__1009191c);
  return;
}

/* 1000f0e0  FUN_1000f0e0  (347 bytes)
 * undefined FUN_1000f0e0()
 */
void FUN_1000f0e0(delta_s *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_1009f438 == 0) {
    FUN_1000f070(param_1);
    DAT_1009f438 = 1;
  }
  iVar1 = (*g_engfuncs.pfnGetCurrentPlayer)();
  if (*(int *)(param_3 + 4) + -1 == iVar1) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_10091888);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_100918ac);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_100918d0);
  }
  if ((*(float *)(param_3 + 0xfc) != 0.0) && (*(float *)(param_3 + 0x100) != 0.0)) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_10091888);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_100918ac);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_100918d0);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_100918f4);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_10091918);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_1009193c);
  }
  if ((*(int *)(param_3 + 0x58) == 0xc) && (*(int *)(param_3 + 0x94) != 0)) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_10091888);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_100918ac);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_100918d0);
    return;
  }
  if (*(int *)(param_3 + 0x94) != *(int *)(param_2 + 0x94)) {
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,DAT_10091888);
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,DAT_100918ac);
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,DAT_100918d0);
  }
  return;
}

/* 1000f240  FUN_1000f240  (61 bytes)
 * undefined FUN_1000f240(undefined4 param_1)
 * called by: FUN_1000f280
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000f240(delta_s *param_1)

{
  _DAT_10091960 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_0__10091940);
  _DAT_10091984 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_1__10091964);
  _DAT_100919a8 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_2__10091988);
  return;
}

/* 1000f280  FUN_1000f280  (224 bytes)
 * undefined FUN_1000f280()
 */
void FUN_1000f280(delta_s *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_1009f43c == 0) {
    FUN_1000f240(param_1);
    DAT_1009f43c = 1;
  }
  iVar1 = (*g_engfuncs.pfnGetCurrentPlayer)();
  if (*(int *)(param_3 + 4) + -1 == iVar1) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_10091888);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_100918ac);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_100918d0);
  }
  if ((*(int *)(param_3 + 0x58) == 0xc) && (*(int *)(param_3 + 0x94) != 0)) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_10091888);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_100918ac);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_100918d0);
    return;
  }
  if (*(int *)(param_3 + 0x94) != *(int *)(param_2 + 0x94)) {
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,DAT_10091888);
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,DAT_100918ac);
    (*g_engfuncs.pfnDeltaSetFieldByIndex)(param_1,DAT_100918d0);
  }
  return;
}

/* 1000f360  FUN_1000f360  (166 bytes)
 * undefined FUN_1000f360(undefined4 param_1)
 * called by: FUN_1000f410
 */
void __cdecl FUN_1000f360(delta_s *param_1)

{
  DAT_100919d0 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_0__100919b0);
  DAT_100919f4 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_1__100919d4);
  DAT_10091a18 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_origin_2__100919f8);
  DAT_10091a3c = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_0__10091a1c);
  DAT_10091a60 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_1__10091a40);
  DAT_10091a84 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_angles_2__10091a64);
  DAT_10091aa8 = (*g_engfuncs.pfnDeltaFindField)(param_1,&DAT_10091a88);
  DAT_10091acc = (*g_engfuncs.pfnDeltaFindField)(param_1,s_sequence_10091aac);
  DAT_10091af0 = (*g_engfuncs.pfnDeltaFindField)(param_1,s_animtime_10091ad0);
  return;
}

/* 1000f410  FUN_1000f410  (226 bytes)
 * undefined FUN_1000f410()
 */
void FUN_1000f410(delta_s *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_1009f440 == 0) {
    FUN_1000f360(param_1);
    DAT_1009f440 = 1;
  }
  uVar1 = *(uint *)(param_3 + 0x48) & 0xf;
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_100919d0);
      (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_100919f4);
      (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_10091a18);
    }
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_10091a3c);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_10091a60);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_10091a84);
  }
  if ((uVar1 != 2) && (uVar1 != 1)) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_10091aa8);
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_10091acc);
  }
  lVar2 = __ftol();
  lVar3 = __ftol();
  if ((int)lVar2 == (int)lVar3) {
    (*g_engfuncs.pfnDeltaUnsetFieldByIndex)(param_1,DAT_10091af0);
  }
  return;
}

/* 1000fc40  FUN_1000fc40  (15 bytes)
 * undefined FUN_1000fc40(undefined4 param_1, int param_2)
 * called by: Unwind@1007fef0, Unwind@1007ff50, Unwind@1007ff90
 */
void __cdecl FUN_1000fc40(undefined4 param_1,int param_2)

{
  *(uint *)(param_2 + 0x1a4) = *(uint *)(param_2 + 0x1a4) | 0x40000000;
  return;
}

/* 1000fdd0  FUN_1000fdd0  (227 bytes)
 * undefined FUN_1000fdd0(int param_1)
 * called by: FUN_10010210, FUN_100105b0
 */
void __fastcall FUN_1000fdd0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  pfVar4 = (float *)(iVar1 + 0x20);
  if (1500.0 < SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                    *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) + *pfVar4 * *pfVar4)) {
    local_4 = SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                   *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) + *pfVar4 * *pfVar4);
    if (local_4 == 0.0) {
      fVar2 = 0.0;
      fVar3 = 0.0;
      local_4 = 1.0;
    }
    else {
      local_4 = 1.0 / local_4;
      fVar2 = local_4 * *pfVar4;
      fVar3 = local_4 * *(float *)(iVar1 + 0x24);
      local_4 = local_4 * *(float *)(iVar1 + 0x28);
    }
    *pfVar4 = fVar2 * 1500.0;
    *(float *)(iVar1 + 0x24) = fVar3 * 1500.0;
    *(float *)(iVar1 + 0x28) = local_4 * 1500.0;
  }
  return;
}

/* 10010210  FUN_10010210  (921 bytes)
 * undefined FUN_10010210(int param_1)
 * called by: CBaseMonster::GibMonster
 */
void __cdecl FUN_10010210(int param_1)

{
  float fVar1;
  void *this;
  edict_t *peVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  this = (void *)FUN_100135e0(0);
  if (DAT_1009f4b8 == 1) {
    FUN_100114d0(this,s_models_germangibs_mdl_1009251c);
    *(undefined4 *)(*(int *)((int)this + 4) + 0x114) = 0;
  }
  else {
    FUN_100114d0(this,s_models_hgibs_mdl_10092508);
    *(undefined4 *)(*(int *)((int)this + 4) + 0x114) = 0;
  }
  if (param_1 == 0) goto LAB_1001059c;
  iVar3 = *(int *)((int)this + 4);
  fVar9 = *(float *)(param_1 + 0x178);
  fVar10 = *(float *)(param_1 + 0xc);
  fVar11 = *(float *)(param_1 + 0x17c);
  fVar1 = *(float *)(param_1 + 0x10);
  *(float *)(iVar3 + 8) = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 8);
  *(float *)(iVar3 + 0xc) = fVar9 + fVar10;
  *(float *)(iVar3 + 0x10) = fVar11 + fVar1;
  peVar2 = (*g_engfuncs.pfnFindClientInPVS)(*(edict_t **)(*(int *)((int)this + 4) + 0x208));
  iVar3 = (*g_engfuncs.pfnRandomLong)(0,100);
  if ((iVar3 < 6) && (peVar2 != (edict_t *)0x0)) {
    fStack_4 = (peVar2->v).view_ofs[2] + (peVar2->v).origin[2];
    iVar3 = *(int *)((int)this + 4);
    fVar9 = ((peVar2->v).view_ofs[0] + (peVar2->v).origin[0]) - *(float *)(iVar3 + 8);
    fVar10 = ((peVar2->v).view_ofs[1] + (peVar2->v).origin[1]) - *(float *)(iVar3 + 0xc);
    fVar11 = fStack_4 - *(float *)(iVar3 + 0x10);
    fVar1 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
    if (fVar1 == 0.0) {
      fVar11 = 1.0;
      fVar10 = 0.0;
      fVar9 = 0.0;
    }
    else {
      fVar1 = 1.0 / fVar1;
      fVar11 = fVar11 * fVar1;
      fVar10 = fVar10 * fVar1;
      fVar9 = fVar9 * fVar1;
    }
    FUN_1000c5f0(&fStack_c,fVar9,fVar10,fVar11);
    iVar3 = *(int *)((int)this + 4);
    *(float *)(iVar3 + 0x20) = fStack_c * 300.0;
    *(float *)(iVar3 + 0x24) = fStack_8 * 300.0;
    *(float *)(iVar3 + 0x28) = fStack_4 * 300.0;
    *(float *)(*(int *)((int)this + 4) + 0x28) = *(float *)(*(int *)((int)this + 4) + 0x28) + 100.0;
  }
  else {
    fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(200.0,300.0);
    fVar6 = (float10)(*g_engfuncs.pfnRandomFloat)(-100.0,100.0);
    fVar7 = (float10)(*g_engfuncs.pfnRandomFloat)(-100.0,100.0);
    iVar3 = *(int *)((int)this + 4);
    *(float *)(iVar3 + 0x20) = (float)fVar7;
    *(float *)(iVar3 + 0x24) = (float)fVar6;
    *(float *)(iVar3 + 0x28) = (float)fVar8;
  }
  fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(100.0,200.0);
  *(float *)(*(int *)((int)this + 4) + 0x5c) = (float)fVar8;
  fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(100.0,300.0);
  *(float *)(*(int *)((int)this + 4) + 0x60) = (float)fVar8;
  peVar2 = *(edict_t **)(param_1 + 0x208);
  if (peVar2 == (edict_t *)0x0) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar2 != (edict_t *)0x0) goto LAB_10010484;
    piVar4 = (int *)0x0;
  }
  else {
LAB_10010484:
    piVar4 = peVar2->pvPrivateData;
  }
  uVar5 = (**(code **)(*piVar4 + 0x44))();
  *(undefined4 *)((int)this + 0x54) = uVar5;
  if (-50.0 < *(float *)(param_1 + 0x160)) {
    iVar3 = *(int *)((int)this + 4);
    *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) * 0.7;
    *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) * 0.7;
    *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) * 0.7;
    FUN_1000fdd0((int)this);
    return;
  }
  iVar3 = *(int *)((int)this + 4);
  if (-200.0 < *(float *)(param_1 + 0x160)) {
    *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + *(float *)(iVar3 + 0x20);
    *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + *(float *)(iVar3 + 0x24);
    *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + *(float *)(iVar3 + 0x28);
    FUN_1000fdd0((int)this);
    return;
  }
  FUN_1000c5f0(&fStack_c,*(float *)(iVar3 + 0x20) * 4.0,*(float *)(iVar3 + 0x24) * 4.0,
               *(float *)(iVar3 + 0x28) * 4.0);
  iVar3 = *(int *)((int)this + 4);
  *(float *)(iVar3 + 0x20) = fStack_c;
  *(float *)(iVar3 + 0x24) = fStack_8;
  *(float *)(iVar3 + 0x28) = fStack_4;
LAB_1001059c:
  FUN_1000fdd0((int)this);
  return;
}

/* 100105b0  FUN_100105b0  (877 bytes)
 * undefined FUN_100105b0(int param_1, int param_2, int param_3)
 * called by: CBaseMonster::GibMonster, CBasePlayer::CheatImpulseCommands
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100105b0(int param_1,int param_2,int param_3)

{
  void *this;
  int iVar1;
  edict_t *peVar2;
  int *piVar3;
  undefined4 uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  char *pcVar9;
  
  if (0 < param_2) {
    do {
      this = (void *)FUN_100135e0(0);
      if (DAT_1009f4b8 == 1) {
        pcVar9 = s_models_germangibs_mdl_1009251c;
LAB_10010615:
        FUN_100114d0(this,pcVar9);
        iVar1 = (*g_engfuncs.pfnRandomLong)(0,3);
        *(int *)(*(int *)((int)this + 4) + 0x114) = iVar1;
      }
      else {
        if (param_3 == 0) {
          pcVar9 = s_models_agibs_mdl_10092534;
          goto LAB_10010615;
        }
        FUN_100114d0(this,s_models_hgibs_mdl_10092508);
        iVar1 = (*g_engfuncs.pfnRandomLong)(1,5);
        *(int *)(*(int *)((int)this + 4) + 0x114) = iVar1;
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
        iVar1 = *(int *)((int)this + 4);
        fVar7 = _DAT_1009f4c8 * -1.0;
        fVar6 = _DAT_1009f4cc * -1.0;
        *(float *)(iVar1 + 0x20) = _DAT_1009f4c4 * -1.0;
        *(float *)(iVar1 + 0x24) = fVar7;
        *(float *)(iVar1 + 0x28) = fVar6;
        iVar1 = *(int *)((int)this + 4);
        fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(-0.25,0.25);
        *(float *)(iVar1 + 0x20) = (float)(fVar8 + (float10)*(float *)(iVar1 + 0x20));
        iVar1 = *(int *)((int)this + 4);
        fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(-0.25,0.25);
        *(float *)(iVar1 + 0x24) = (float)(fVar8 + (float10)*(float *)(iVar1 + 0x24));
        iVar1 = *(int *)((int)this + 4);
        fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(-0.25,0.25);
        *(float *)(iVar1 + 0x28) = (float)(fVar8 + (float10)*(float *)(iVar1 + 0x28));
        fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(300.0,400.0);
        iVar1 = *(int *)((int)this + 4);
        *(float *)(iVar1 + 0x20) = (float)(fVar8 * (float10)*(float *)(iVar1 + 0x20));
        *(float *)(iVar1 + 0x24) = (float)(fVar8 * (float10)*(float *)(iVar1 + 0x24));
        *(float *)(iVar1 + 0x28) = (float)(fVar8 * (float10)*(float *)(iVar1 + 0x28));
        fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(100.0,200.0);
        *(float *)(*(int *)((int)this + 4) + 0x5c) = (float)fVar8;
        fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(100.0,300.0);
        *(float *)(*(int *)((int)this + 4) + 0x60) = (float)fVar8;
        peVar2 = *(edict_t **)(param_1 + 0x208);
        if ((peVar2 == (edict_t *)0x0) &&
           (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 == (edict_t *)0x0)) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = peVar2->pvPrivateData;
        }
        uVar4 = (**(code **)(*piVar3 + 0x44))();
        *(undefined4 *)((int)this + 0x54) = uVar4;
        if (*(float *)(param_1 + 0x160) <= -50.0) {
          iVar1 = *(int *)((int)this + 4);
          if (*(float *)(param_1 + 0x160) <= -200.0) {
            pfVar5 = (float *)(iVar1 + 0x20);
            fVar7 = *(float *)(iVar1 + 0x24) * 4.0;
            fVar6 = *(float *)(iVar1 + 0x28) * 4.0;
            *pfVar5 = *(float *)(iVar1 + 0x20) * 4.0;
            goto LAB_100108a7;
          }
          *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) + *(float *)(iVar1 + 0x20);
          *(float *)(iVar1 + 0x24) = *(float *)(iVar1 + 0x24) + *(float *)(iVar1 + 0x24);
          *(float *)(iVar1 + 0x28) = *(float *)(iVar1 + 0x28) + *(float *)(iVar1 + 0x28);
        }
        else {
          iVar1 = *(int *)((int)this + 4);
          pfVar5 = (float *)(iVar1 + 0x20);
          fVar7 = *(float *)(iVar1 + 0x24) * 0.7;
          fVar6 = *(float *)(iVar1 + 0x28) * 0.7;
          *pfVar5 = *pfVar5 * 0.7;
LAB_100108a7:
          pfVar5[1] = fVar7;
          pfVar5[2] = fVar6;
        }
        *(undefined4 *)(*(int *)((int)this + 4) + 0x10c) = 2;
        FUN_10067970();
      }
      FUN_1000fdd0((int)this);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

/* 10010e10  FUN_10010e10  (48 bytes)
 * undefined4 FUN_10010e10(int param_1)
 * called by: CBaseMonster::Killed
 */
undefined4 __thiscall FUN_10010e10(void *this,int param_1)

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

/* 10010e40  FUN_10010e40  (216 bytes)
 * undefined FUN_10010e40(int * param_1)
 * called by: CBaseMonster::Killed
 */
void __fastcall FUN_10010e40(int *param_1)

{
  bool bVar1;
  int iVar2;
  float10 fVar3;
  char *szVarName;
  
  bVar1 = false;
  iVar2 = (**(code **)(*param_1 + 0xf8))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0xfc))();
    if (iVar2 == 0) goto LAB_10010e87;
    szVarName = s_violence_agibs_10092548;
  }
  else {
    szVarName = s_violence_hgibs_10092558;
  }
  fVar3 = (float10)(*g_engfuncs.pfnCVarGetFloat)(szVarName);
  if (fVar3 == (float10)0.0) {
    bVar1 = true;
  }
LAB_10010e87:
  *(undefined4 *)(param_1[1] + 0x16c) = 0;
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x100))();
  }
  else {
    *(undefined4 *)(param_1[1] + 0x118) = 0x80;
    (**(code **)(*param_1 + 0x104))();
  }
  *(undefined4 *)(param_1[1] + 0x170) = 2;
  FUN_100233b0();
  if (*(float *)(param_1[1] + 0x160) < -99.0) {
    *(undefined4 *)(param_1[1] + 0x160) = 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x110))();
  if ((iVar2 != 0) && (!bVar1)) {
    UTIL_Remove((int)param_1);
  }
  return;
}

/* 100114d0  FUN_100114d0  (258 bytes)
 * undefined FUN_100114d0(undefined4 param_1)
 * called by: CEnvShooter::CreateGib, CGibShooter::CreateGib, FUN_10010210, FUN_100105b0
 */
void __thiscall FUN_100114d0(void *this,char *param_1)

{
  *(undefined4 *)(*(int *)((int)this + 4) + 0x108) = 10;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x120) = 0x3f0ccccd;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x14c) = 0x437f0000;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x148) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x15c) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x10c) = 3;
  **(int **)((int)this + 4) = (int)&DAT_10092574 - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(*(int *)((int)this + 4) + 0x208),param_1);
  FUN_10067970();
  *(float *)(*(int *)((int)this + 4) + 0x104) = gpGlobals->time + 4.0;
  *(undefined4 *)((int)this + 0x60) = 0x41c80000;
  *(code **)((int)this + 0x10) = CGib::WaitTillLand;
  *(code **)((int)this + 0x14) = CGib::BounceGibTouch;
  *(undefined4 *)((int)this + 0x5c) = 9;
  *(undefined4 *)((int)this + 0x58) = 5;
  return;
}

/* 10011aa0  FUN_10011aa0  (518 bytes)
 * undefined4 FUN_10011aa0(int param_1, undefined4 param_2, float param_3, uint param_4)
 * called by: CBaseMonster::TakeDamage
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_10011aa0(void *this,int param_1,undefined4 param_2,float param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  edict_t *peVar4;
  float *pfVar5;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [16];
  
  if (param_1 != 0) {
    iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(param_1 + 0x208));
    if (iVar3 != 0) {
      peVar4 = *(edict_t **)(param_1 + 0x208);
      if (peVar4 == (edict_t *)0x0) {
        peVar4 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        if (peVar4 == (edict_t *)0x0) goto LAB_10011c41;
      }
      if (peVar4->pvPrivateData != (int *)0x0) {
        iVar3 = (**(code **)(*(int *)peVar4->pvPrivateData + 0xd4))(auStack_18);
        fStack_24 = *(float *)(iVar3 + 4);
        fVar1 = *(float *)(iVar3 + 8);
        pfVar5 = (float *)(**(code **)(*(int *)this + 0xd4))(auStack_10);
        fStack_24 = fStack_24 - *pfVar5;
        fStack_2c = (fVar1 - 10.0) - pfVar5[1];
        fVar2 = fStack_28 - pfVar5[2];
        fVar1 = SQRT(fStack_24 * fStack_24 + fStack_2c * fStack_2c + fVar2 * fVar2);
        if (fVar1 == 0.0) {
          fStack_24 = 0.0;
          fStack_2c = 0.0;
          fStack_28 = 1.0;
        }
        else {
          fVar1 = 1.0 / fVar1;
          fStack_24 = fStack_24 * fVar1;
          fStack_2c = fStack_2c * fVar1;
          fStack_28 = fVar2 * fVar1;
        }
        fStack_1c = SQRT(fStack_24 * fStack_24 + fStack_2c * fStack_2c + fStack_28 * fStack_28);
        if (fStack_1c == 0.0) {
          fStack_24 = 0.0;
          fStack_20 = 0.0;
          fStack_1c = 1.0;
        }
        else {
          fStack_1c = 1.0 / fStack_1c;
          fStack_24 = fStack_1c * fStack_24;
          fStack_20 = fStack_2c * fStack_1c;
          fStack_1c = fStack_28 * fStack_1c;
        }
        _DAT_1009f4c4 = fStack_24;
        _DAT_1009f4c8 = fStack_20;
        _DAT_1009f4cc = fStack_1c;
      }
    }
  }
LAB_10011c41:
  if ((param_4 & 0x2e1) != 0) {
    iVar3 = *(int *)((int)this + 4);
    if (*(float *)(iVar3 + 0x160) < param_3 != (*(float *)(iVar3 + 0x160) == param_3)) {
      *(undefined4 *)(iVar3 + 0x160) = 0xc2480000;
      (**(code **)(*(int *)this + 0x40))(param_2,2);
      return 0;
    }
    *(float *)(iVar3 + 0x160) = *(float *)(iVar3 + 0x160) - param_3 * 0.1;
  }
  return 1;
}

/* 10011cb0  FUN_10011cb0  (63 bytes)
 * float10 FUN_10011cb0(int param_1, float param_2)
 * called by: CBasePlayer::Killed
 */
float10 __thiscall FUN_10011cb0(int param_1,float param_2)

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

/* 10011cf0  FUN_10011cf0  (660 bytes)
 * undefined FUN_10011cf0(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, int param_8, undefined4 param_9)
 * called by: FUN_10012040
 */
void __cdecl
FUN_10011cf0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,int param_8,undefined4 param_9)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  void *this;
  float fVar6;
  bool bVar7;
  float **ppfVar8;
  float *pfStack_88;
  undefined4 *puStack_84;
  float local_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float afStack_44 [4];
  int iStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_8;
  
  if (param_7 == 0.0) {
    local_64 = 1.0;
  }
  else {
    local_64 = param_6 / param_7;
  }
  iVar2 = FUN_10067c90();
  fVar1 = param_4;
  param_3 = param_3 + 1.0;
  fVar6 = param_5;
  if (param_5 == 0.0) {
    fVar6 = param_4;
  }
  for (pfVar3 = (float *)FUN_10066c30(0,&param_1,param_7); pfVar3 != (float *)0x0;
      pfVar3 = (float *)FUN_10066c30((int)pfVar3,&param_1,param_7)) {
    if ((*(float *)((int)pfVar3[1] + 0x16c) != 0.0) &&
       ((param_8 == 0 || (iVar4 = (**(code **)((int)*pfVar3 + 0x2c))(), iVar4 != param_8)))) {
      if (iVar2 == -3) {
        bVar7 = *(int *)((int)pfVar3[1] + 0x1c0) == 0;
      }
      else {
        bVar7 = *(int *)((int)pfVar3[1] + 0x1c0) == 3;
      }
      if (!bVar7) {
        puVar5 = (undefined4 *)(**(code **)((int)*pfVar3 + 0xe0))();
        uStack_5c = *puVar5;
        uStack_58 = puVar5[1];
        uStack_54 = puVar5[2];
        puStack_84 = &uStack_5c;
        pfStack_88 = &param_1;
        FUN_10067850();
        if ((fStack_28 == 1.0) || (iStack_8 == *(int *)((int)pfVar3[1] + 0x208))) {
          if (iStack_34 != 0) {
            fStack_24 = param_1;
            fStack_20 = param_2;
            fStack_1c = param_3;
            fStack_28 = 0.0;
          }
          param_5 = param_6 - SQRT((param_1 - fStack_24) * (param_1 - fStack_24) +
                                   (param_2 - fStack_20) * (param_2 - fStack_20) +
                                   (param_3 - fStack_1c) * (param_3 - fStack_1c)) * local_64;
          if (param_5 < 0.0) {
            param_5 = 0.0;
          }
          if (fStack_28 == 1.0) {
            puStack_84 = (undefined4 *)fVar1;
            pfStack_88 = (float *)0x10011f5c;
            (**(code **)((int)*pfVar3 + 0x38))();
          }
          else {
            FUN_1006a2f0();
            param_4 = *pfVar3;
            ppfVar8 = &pfStack_88;
            this = (void *)FUN_10011f90(&fStack_24,afStack_44,&param_1);
            FUN_10011fc0(this,(float *)ppfVar8);
            (**(code **)((int)param_4 + 0x34))(fVar1,param_5);
            FUN_1006a310(fVar1,fVar6);
          }
        }
      }
    }
    puStack_84 = (undefined4 *)0x10011f6f;
  }
  return;
}

/* 10011f90  FUN_10011f90  (35 bytes)
 * undefined FUN_10011f90(float * param_1, float * param_2)
 * called by: CFuncTrain::Next, CGunTarget::Next, FUN_10011cf0, FUN_10017220, FUN_10059510, TSExplosion
 */
void __thiscall FUN_10011f90(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)((int)this + 8);
  fVar2 = param_2[2];
  fVar3 = *(float *)((int)this + 4);
  fVar4 = param_2[1];
  *param_1 = *(float *)this - *param_2;
  param_1[1] = fVar3 - fVar4;
  param_1[2] = fVar1 - fVar2;
  return;
}

/* 10011fc0  FUN_10011fc0  (122 bytes)
 * undefined FUN_10011fc0(float * param_1)
 * called by: CGibShooter::ShootThink, CM61Grenade::WaitThink, CTSAnimation::Animate, CTSKnife::BounceTouch, CTSKnife::WaitThink, CTSShrapnel::BounceTouch, FUN_10011cf0, FUN_10017220, TSExplosion
 */
void __thiscall FUN_10011fc0(void *this,float *param_1)

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
  fVar1 = *(float *)((int)this + 8);
  fVar2 = *(float *)((int)this + 4);
  *param_1 = fVar3 * *(float *)this;
  param_1[1] = fVar3 * fVar2;
  param_1[2] = fVar3 * fVar1;
  return;
}

/* 10012040  FUN_10012040  (67 bytes)
 * undefined FUN_10012040(float param_1, float param_2, float param_3, int param_4, undefined4 param_5)
 * called by: CEnvExplosion::Use
 */
void __thiscall
FUN_10012040(void *this,float param_1,float param_2,float param_3,int param_4,undefined4 param_5)

{
  float in_stack_ffffffdc;
  float in_stack_ffffffe0;
  float in_stack_ffffffe4;
  float fVar1;
  
  fVar1 = param_3 * 2.5;
  FUN_1000a540(&stack0xffffffdc,(undefined4 *)(*(int *)((int)this + 4) + 8));
  FUN_10011cf0(in_stack_ffffffdc,in_stack_ffffffe0,in_stack_ffffffe4,param_1,param_2,param_3,fVar1,
               param_4,param_5);
  return;
}

/* 100126a0  FUN_100126a0  (1780 bytes)
 * undefined FUN_100126a0(uint param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, undefined4 param_10, float param_11, float param_12, int param_13, int param_14, float param_15)
 * called by: CFuncTankGun::Fire
 */
void __thiscall
FUN_100126a0(void *this,uint param_1,float param_2,float param_3,float param_4,float param_5,
            float param_6,float param_7,float param_8,float param_9,float param_10,float param_11,
            float param_12,int param_13,int param_14,float param_15)

{
  edict_t *peVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  bool bVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar7;
  longlong lVar8;
  float in_stack_00000040;
  float in_stack_00000044;
  float in_stack_0000004c;
  int in_stack_00000054;
  float in_stack_fffffed8;
  undefined4 uVar9;
  float *pfVar10;
  int **ppiVar11;
  undefined4 in_stack_fffffee4;
  undefined4 uVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float local_dc;
  int *piStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  vec_t local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
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
  edict_t *peStack_68;
  int iStack_64;
  float fStack_44;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_8;
  
  local_b8 = gpGlobals->v_right[1];
  local_bc = gpGlobals->v_right[0];
  local_b0 = gpGlobals->v_up[0];
  local_b4 = gpGlobals->v_right[2];
  local_ac = gpGlobals->v_up[1];
  local_a8 = gpGlobals->v_up[2];
  fVar5 = param_15;
  if (param_15 == 0.0) {
    fVar5 = *(float *)((int)this + 4);
  }
  FUN_1006a2f0();
  DAT_102dfa50 = 0x1002;
  local_dc = 1.4013e-45;
  fVar14 = param_12;
  if (param_1 != 0) {
    do {
      do {
        (*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
        (*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
        (*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
        local_a8 = (float)extraout_ST0;
        pfVar13 = (float *)0xbf000000;
        uVar12 = 0x1001276f;
        (*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
        fVar7 = extraout_ST0_00 + (float10)fStack_a0;
      } while ((float10)1.0 < (float10)local_dc * (float10)local_dc + fVar7 * fVar7);
      fVar7 = fVar7 * (float10)in_stack_00000044;
      FUN_1000c5f0(&fStack_28,(float)(fVar7 * (float10)fStack_90),
                   (float)((float10)fStack_8c * fVar7),(float)((float10)fStack_88 * fVar7));
      fVar15 = in_stack_00000040 * local_dc;
      FUN_1000c5f0(&fStack_1c,fVar15 * fStack_9c,fStack_98 * fVar15,fStack_94 * fVar15);
      param_7 = param_15 + fStack_14;
      fStack_d4 = (float)param_13 + fStack_1c + fStack_28;
      fStack_d0 = fStack_24 + (float)param_14 + fStack_18;
      fStack_cc = fStack_20 + param_7;
      fStack_8 = fStack_cc * in_stack_0000004c;
      local_b8 = fStack_d4 * in_stack_0000004c + param_10;
      local_b4 = param_11 + fStack_d0 * in_stack_0000004c;
      local_b0 = param_12 + fStack_8;
      this = (void *)0x0;
      local_ac = local_b8;
      local_a8 = local_b4;
      fStack_a4 = local_b0;
      FUN_10067850();
      iVar2 = in_stack_00000054;
      bVar6 = false;
      if ((in_stack_00000054 != 0) &&
         (iVar3 = DAT_1009f444 % in_stack_00000054, DAT_1009f444 = DAT_1009f444 + 1, iVar3 == 0)) {
        iVar3 = (**(code **)(*piStack_d8 + 0xa8))();
        fStack_c8 = param_10;
        fStack_c4 = param_11;
        fStack_c0 = param_12;
        if (iVar3 != 0) {
          param_1 = (uint)(gpGlobals->v_forward[2] * 16.0);
          param_4 = gpGlobals->v_right[2] + gpGlobals->v_right[2];
          fStack_3c = param_11;
          fStack_38 = param_12 - 4.0;
          fStack_34 = param_10 + gpGlobals->v_right[0] + gpGlobals->v_right[0];
          fStack_2c = fStack_38 + param_4;
          fStack_84 = fStack_34 + gpGlobals->v_forward[0] * 16.0;
          fStack_80 = param_11 + gpGlobals->v_right[1] + gpGlobals->v_right[1] +
                      gpGlobals->v_forward[1] * 16.0;
          fStack_7c = fStack_2c + (float)param_1;
          fStack_c8 = fStack_84;
          fStack_c4 = fStack_80;
          fStack_c0 = fStack_7c;
        }
        bVar6 = iVar2 != 1;
        this = (void *)0x17;
        (*g_engfuncs.pfnMessageBegin)(5,0x17,&fStack_c8,(edict_t *)0x0);
        (*g_engfuncs.pfnWriteByte)(6);
        (*g_engfuncs.pfnWriteCoord)(local_b4);
        (*g_engfuncs.pfnWriteCoord)(local_ac);
        (*g_engfuncs.pfnWriteCoord)(fStack_a4);
        (*g_engfuncs.pfnWriteCoord)(fStack_44);
        (*g_engfuncs.pfnWriteCoord)(fStack_3c);
        (*g_engfuncs.pfnWriteCoord)(fStack_34);
        fStack_c4 = 2.5473538e-29;
        (*g_engfuncs.pfnMessageEnd)();
      }
      if (fStack_88 != 1.0) {
        peVar1 = peStack_68;
        if ((peStack_68 == (edict_t *)0x0) &&
           (peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar1 == (edict_t *)0x0)) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = peVar1->pvPrivateData;
        }
        in_stack_fffffed8 = fVar5;
        if (param_14 == 0) {
          if (fVar14 == 0.0) {
            iVar2 = *piVar4;
            pfVar13 = &fStack_98;
            FUN_1000a540(&stack0xfffffee0,(undefined4 *)&stack0xffffff0c);
            (**(code **)(iVar2 + 0x34))();
            fVar15 = 0.0;
            ppiVar11 = &piStack_d8;
            uVar9 = 0x10012d11;
            FUN_1000a540(&stack0xfffffee4,ppiVar11);
            FUN_1000a540(&stack0xfffffed8,&param_2);
            TEXTURETYPE_PlaySound
                      ((int)&fStack_98,in_stack_fffffed8,uVar9,ppiVar11,in_stack_fffffee4,uVar12,
                       pfVar13,fVar15);
            if (peStack_68 != (edict_t *)0x0) {
              pfVar13 = (float *)0x10012d4b;
              iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peStack_68);
              if (iVar2 != 0) {
                iVar2 = iStack_64;
                if (iStack_64 != 0) {
                  iVar2 = iStack_64 + 0x80;
                }
                if (*(int *)(iVar2 + 0x148) != 0) {
                  iVar2 = (*g_engfuncs.pfnRandomLong)(0,2);
                  pfVar13 = (float *)0x10012d8c;
                  FUN_10067ef0((int)&fStack_8c,iVar2 + 0x19);
                }
              }
            }
          }
          else if (fVar14 == 9.80909e-45) {
            iVar2 = *piVar4;
            pfVar13 = &fStack_98;
            FUN_1000a540(&stack0xfffffee0,(undefined4 *)&stack0xffffff0c);
            (**(code **)(iVar2 + 0x34))();
            fVar15 = 9.80909e-45;
            ppiVar11 = &piStack_d8;
            uVar9 = 0x10012ca6;
            FUN_1000a540(&stack0xfffffee4,ppiVar11);
            FUN_1000a540(&stack0xfffffed8,&param_2);
            TEXTURETYPE_PlaySound
                      ((int)&fStack_98,in_stack_fffffed8,uVar9,ppiVar11,in_stack_fffffee4,uVar12,
                       pfVar13,fVar15);
            FUN_1006a400((int)&fStack_98,7);
          }
          else {
            pfVar13 = &fStack_98;
            if (fVar14 != 1.12104e-44) {
              iVar2 = *piVar4;
              FUN_1000a540(&stack0xfffffee0,(undefined4 *)&stack0xffffff0c);
              goto LAB_10012b0c;
            }
            iVar2 = *piVar4;
            FUN_1000a540(&stack0xfffffee0,(undefined4 *)&stack0xffffff0c);
            (**(code **)(iVar2 + 0x34))();
            fVar14 = param_12;
            if (!bVar6) {
              fVar14 = 1.12104e-44;
              ppiVar11 = &piStack_d8;
              uVar9 = 0x10012bc1;
              FUN_1000a540(&stack0xfffffee4,ppiVar11);
              FUN_1000a540(&stack0xfffffed8,&param_2);
              TEXTURETYPE_PlaySound
                        ((int)&fStack_98,in_stack_fffffed8,uVar9,ppiVar11,in_stack_fffffee4,uVar12,
                         pfVar13,fVar14);
              FUN_1006a400((int)&fStack_98,8);
              fVar14 = param_12;
            }
          }
        }
        else {
          iVar2 = *piVar4;
          pfVar13 = &fStack_98;
          FUN_1000a540(&stack0xfffffee0,(undefined4 *)&stack0xffffff0c);
LAB_10012b0c:
          (**(code **)(iVar2 + 0x34))();
          ppiVar11 = &piStack_d8;
          uVar9 = 0x10012b22;
          fVar15 = fVar14;
          FUN_1000a540(&stack0xfffffee4,ppiVar11);
          FUN_1000a540(&stack0xfffffed8,&param_2);
          TEXTURETYPE_PlaySound
                    ((int)&fStack_98,in_stack_fffffed8,uVar9,ppiVar11,in_stack_fffffee4,uVar12,
                     pfVar13,fVar15);
          FUN_1006a400((int)&fStack_98,(int)fVar14);
        }
      }
      lVar8 = __ftol();
      iVar2 = (int)lVar8;
      pfVar10 = &fStack_84;
      uVar9 = 0x10012c27;
      FUN_1000a540(&stack0xfffffee4,pfVar10);
      FUN_1000a540(&stack0xfffffed8,&param_2);
      FUN_10068630(in_stack_fffffed8,uVar9,(float)pfVar10,in_stack_fffffee4,uVar12,(float)pfVar13,
                   iVar2);
      local_dc = (float)((int)local_dc + 1);
    } while ((uint)local_dc <= param_1);
  }
  FUN_1006a310(*(undefined4 *)((int)this + 4),fVar5);
  return;
}

/* 100135e0  FUN_100135e0  (76 bytes)
 * undefined FUN_100135e0(int param_1)
 * called by: CEnvShooter::CreateGib, CGibShooter::CreateGib, FUN_10010210, FUN_100105b0
 */
void __cdecl FUN_100135e0(int param_1)

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
    *puVar3 = &PTR_BreakableRespawn_100812e0;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10013630  FUN_10013630  (6 bytes)
 * undefined FUN_10013630()
 */
undefined4 FUN_10013630(void)

{
  return 0x80000000;
}

/* 10014e80  FUN_10014e80  (35 bytes)
 * undefined FUN_10014e80(float * param_1, float param_2)
 * called by: CBaseDoor::DoorGoUp, CFuncTrain::Next, CGunTarget::Next, CM61Grenade::WaitThink, CTSGun::AlternateAttack, CTSKnife::WaitThink, FUN_1001cff0, FUN_1004c090, FUN_1004c6c0, FUN_1004de10, FUN_1005cd00
 */
void __thiscall FUN_10014e80(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((int)this + 8);
  fVar2 = *(float *)((int)this + 4);
  *param_1 = param_2 * *(float *)this;
  param_1[1] = param_2 * fVar2;
  param_1[2] = param_2 * fVar1;
  return;
}

/* 10015e10  FUN_10015e10  (5 bytes)
 * undefined FUN_10015e10()
 */
void __fastcall FUN_10015e10(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10015e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}

/* 10016220  FUN_10016220  (66 bytes)
 * undefined FUN_10016220(uint param_1)
 * called by: CBeam::Precache, CLightning::BeamUpdateVars, FUN_100165d0
 */
void __thiscall FUN_10016220(void *this,uint param_1)

{
  edict_t *peVar1;
  
  *(uint *)(*(int *)((int)this + 4) + 0x128) =
       (*(uint *)(*(int *)((int)this + 4) + 0x128) & 0xf000) << 0xc | param_1 & 0xfff;
  peVar1 = (*g_engfuncs.pfnPEntityOfEntIndex)(param_1);
  *(edict_t **)(*(int *)((int)this + 4) + 0x198) = peVar1;
  return;
}

/* 10016270  FUN_10016270  (66 bytes)
 * undefined FUN_10016270(uint param_1)
 * called by: CBeam::Precache, CLightning::BeamUpdateVars, FUN_10016550, FUN_100165d0
 */
void __thiscall FUN_10016270(void *this,uint param_1)

{
  edict_t *peVar1;
  
  *(uint *)(*(int *)((int)this + 4) + 0x110) =
       (*(uint *)(*(int *)((int)this + 4) + 0x110) & 0xf000) << 0xc | param_1 & 0xfff;
  peVar1 = (*g_engfuncs.pfnPEntityOfEntIndex)(param_1);
  *(edict_t **)(*(int *)((int)this + 4) + 0x194) = peVar1;
  return;
}

/* 100162c0  FUN_100162c0  (49 bytes)
 * int FUN_100162c0(int param_1)
 * called by: CBeam::Center, CBeam::RelinkBeam, CLightning::DamageThink, CLightning::ToggleUse, FUN_10018120
 */
int __fastcall FUN_100162c0(int param_1)

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

/* 10016300  FUN_10016300  (67 bytes)
 * int FUN_10016300(int param_1)
 * called by: CBeam::Center, CBeam::RelinkBeam, CLightning::DamageThink, CLightning::ToggleUse
 */
int __fastcall FUN_10016300(int param_1)

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

/* 10016550  FUN_10016550  (115 bytes)
 * undefined FUN_10016550(undefined4 * param_1, uint param_2)
 */
void __thiscall FUN_10016550(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  *(uint *)(*(int *)((int)this + 4) + 0x148) = *(uint *)(*(int *)((int)this + 4) + 0x148) & 0xf0 | 1
  ;
  iVar1 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar1 + 8) = *param_1;
  *(undefined4 *)(iVar1 + 0xc) = param_1[1];
  *(undefined4 *)(iVar1 + 0x10) = param_1[2];
  FUN_10016270(this,param_2);
  *(uint *)(*(int *)((int)this + 4) + 0x128) = *(uint *)(*(int *)((int)this + 4) + 0x128) & 0xfff;
  *(uint *)(*(int *)((int)this + 4) + 0x110) = *(uint *)(*(int *)((int)this + 4) + 0x110) & 0xfff;
  CBeam::RelinkBeam((int)this);
  return;
}

/* 100165d0  FUN_100165d0  (101 bytes)
 * undefined FUN_100165d0(uint param_1, uint param_2)
 */
void __thiscall FUN_100165d0(void *this,uint param_1,uint param_2)

{
  *(uint *)(*(int *)((int)this + 4) + 0x148) = *(uint *)(*(int *)((int)this + 4) + 0x148) & 0xf0 | 2
  ;
  FUN_10016220(this,param_1);
  FUN_10016270(this,param_2);
  *(uint *)(*(int *)((int)this + 4) + 0x128) = *(uint *)(*(int *)((int)this + 4) + 0x128) & 0xfff;
  *(uint *)(*(int *)((int)this + 4) + 0x110) = *(uint *)(*(int *)((int)this + 4) + 0x110) & 0xfff;
  CBeam::RelinkBeam((int)this);
  return;
}

/* 10016810  FUN_10016810  (74 bytes)
 * int FUN_10016810(undefined4 param_1)
 * called by: CLaser::StrikeThink, CLightning::StrikeThink
 */
int FUN_10016810(undefined4 param_1)

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
  }
  return iVar3;
}

/* 10016860  FUN_10016860  (62 bytes)
 * undefined FUN_10016860(undefined4 * param_1, undefined4 param_2, undefined4 * param_3)
 * called by: CLightning::StrikeThink, CLightning::ToggleUse, FUN_10017360, FUN_10018120
 */
void __thiscall FUN_10016860(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)((int)this + 4) + 0x1a0);
  if ((uVar1 & 0x30) != 0) {
    if ((uVar1 & 0x10) != 0) {
      UTIL_Sparks(param_1);
    }
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 0x20) != 0) {
      UTIL_Sparks(param_3);
    }
  }
  return;
}

/* 10016de0  FUN_10016de0  (100 bytes)
 * undefined4 FUN_10016de0(int param_1)
 * called by: CLightning::BeamUpdateVars, CLightning::StrikeThink
 */
undefined4 __cdecl FUN_10016de0(int param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  if ((*(int **)(param_1 + 4))[0x2d] != 0) {
    iVar2 = 0xc;
    pcVar1 = gpGlobals->pStringBase + **(int **)(param_1 + 4);
    bVar5 = true;
    pcVar3 = pcVar1;
    pcVar4 = s_info_target_10092e10;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar2 = 0xe;
      bVar5 = true;
      pcVar3 = pcVar1;
      pcVar4 = s_info_landmark_10092e00;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pcVar3 == *pcVar4;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) {
        iVar2 = 0xc;
        bVar5 = true;
        pcVar3 = s_path_corner_10092df4;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *pcVar1 == *pcVar3;
          pcVar1 = pcVar1 + 1;
          pcVar3 = pcVar3 + 1;
        } while (bVar5);
        if (!bVar5) {
          return 0;
        }
      }
    }
  }
  return 1;
}

/* 10017220  FUN_10017220  (235 bytes)
 * undefined FUN_10017220(int param_1)
 * called by: CLightning::DamageThink, CLightning::StrikeThink, FUN_10018120
 */
void __thiscall FUN_10017220(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  int iVar3;
  float *pfVar4;
  float afStack_34 [3];
  int iStack_28;
  undefined4 uStack_24;
  float local_c [3];
  
  CBeam::RelinkBeam((int)this);
  if (((*(float *)(param_1 + 0x10) != 1.0) && (*(int *)(param_1 + 0x30) != 0)) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x30) + 0x7c), piVar1 != (int *)0x0)) {
    uStack_24 = 0x10017261;
    FUN_1006a2f0();
    iVar3 = *(int *)((int)this + 4);
    iVar2 = *piVar1;
    uStack_24 = 0x400;
    iStack_28 = param_1;
    pfVar4 = afStack_34;
    this_00 = (void *)FUN_10011f90((void *)(param_1 + 0x14),local_c,(float *)(iVar3 + 8));
    FUN_10011fc0(this_00,pfVar4);
    (**(code **)(iVar2 + 0x34))
              (iVar3,(gpGlobals->time - *(float *)(iVar3 + 0x1e4)) * *(float *)(iVar3 + 0x1e0));
    FUN_1006a310(*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 4));
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 0x40) != 0) {
      iVar3 = (**(code **)(*piVar1 + 0x98))();
      if (iVar3 != 0) {
        iVar3 = (*g_engfuncs.pfnRandomLong)(0,4);
        FUN_10067ef0(param_1,iVar3 + 0x1c);
      }
    }
  }
  *(float *)(*(int *)((int)this + 4) + 0x1e4) = gpGlobals->time;
  return;
}

/* 10017360  FUN_10017360  (299 bytes)
 * undefined FUN_10017360(undefined4 * param_1, undefined4 * param_2)
 * called by: FUN_10017490, FUN_10017890
 */
void __thiscall FUN_10017360(void *this,undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  float *in_stack_00000018;
  float *in_stack_00000028;
  undefined4 uStack0000002c;
  undefined4 uStack00000040;
  undefined4 *in_stack_0000004c;
  
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
  uStack0000002c = 0x10017415;
  (*g_engfuncs.pfnWriteByte)(*(int *)((int)this + 0x68));
  lVar1 = __ftol();
  uStack0000002c = 0x1001742a;
  (*g_engfuncs.pfnWriteByte)((int)lVar1);
  lVar1 = __ftol();
  uStack0000002c = 0x1001743f;
  (*g_engfuncs.pfnWriteByte)((int)lVar1);
  lVar1 = __ftol();
  uStack0000002c = 0x10017454;
  (*g_engfuncs.pfnWriteByte)((int)lVar1);
  lVar1 = __ftol();
  uStack0000002c = 0x10017469;
  (*g_engfuncs.pfnWriteByte)((int)lVar1);
  uStack0000002c = 0x10017473;
  (*g_engfuncs.pfnWriteByte)(*(int *)((int)this + 0x70));
  (*g_engfuncs.pfnMessageEnd)();
  uStack00000040 = 0x10017485;
  FUN_10016860(this,in_stack_00000018,in_stack_00000028,in_stack_0000004c);
  return;
}

/* 10017490  FUN_10017490  (1016 bytes)
 * undefined FUN_10017490(void * param_1)
 * called by: CLightning::StrikeThink
 */
void __fastcall FUN_10017490(void *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [28];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)((int)param_1 + 4);
    local_dc = *(float *)(iVar1 + 8);
    local_d8 = *(float *)(iVar1 + 0xc);
    local_d4 = *(float *)(iVar1 + 0x10);
    fVar3 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar4 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fStack_e8 = (float)fVar5;
    fStack_e4 = (float)fVar4;
    fStack_e0 = (float)fVar3;
    fVar3 = FUN_1000c640(&fStack_e8);
    if (fVar3 == (float10)0.0) {
      fStack_d0 = 0.0;
      fStack_cc = 0.0;
      fStack_c8 = 1.0;
    }
    else {
      fVar3 = (float10)1.0 / fVar3;
      FUN_1000c5f0(&fStack_d0,(float)(fVar3 * (float10)fStack_e8),
                   (float)((float10)fStack_e4 * fVar3),(float)((float10)fStack_e0 * fVar3));
    }
    fVar8 = *(float *)((int)param_1 + 0x84);
    fStack_e8 = fStack_d0;
    fStack_e4 = fStack_cc;
    fStack_e0 = fStack_c8;
    FUN_1000c5f0(auStack_88,fStack_d0 * fVar8 + local_dc,local_d8 + fStack_cc * fVar8,
                 local_d4 + fStack_c8 * fVar8);
    FUN_10067850();
    if (fStack_28 != 1.0) {
      do {
        fVar3 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
        fVar8 = (float)fVar3;
        fVar3 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
        fVar7 = (float)fVar3;
        fVar3 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
        fStack_c4 = (float)fVar3;
        fStack_c0 = fVar7;
        fStack_bc = fVar8;
        fStack_a0 = fStack_c4;
        fStack_9c = fVar7;
        fStack_98 = fVar8;
      } while (0.0 < fStack_c4 * fStack_e8 + fStack_e0 * fVar8 + fStack_e4 * fVar7);
      fVar3 = FUN_1000c640(&fStack_c4);
      if (fVar3 == (float10)0.0) {
        fVar8 = 1.0;
        fVar7 = 0.0;
        fVar6 = 0.0;
      }
      else {
        fVar3 = (float10)1.0 / fVar3;
        fVar8 = (float)((float10)fStack_bc * fVar3);
        fVar7 = (float)((float10)fStack_c0 * fVar3);
        fVar6 = (float)(fVar3 * (float10)fStack_c4);
      }
      FUN_1000c5f0(&fStack_b8,fVar6,fVar7,fVar8);
      fVar8 = *(float *)((int)param_1 + 0x84);
      fStack_c4 = fStack_b8;
      fStack_c0 = fStack_b4;
      fStack_bc = fStack_b0;
      FUN_1000c5f0(&fStack_94,fStack_b8 * fVar8,fStack_b4 * fVar8,fStack_b0 * fVar8);
      FUN_1000c5f0(auStack_7c,fStack_94 + local_dc,local_d8 + fStack_90,local_d4 + fStack_8c);
      FUN_10067850();
      if (fStack_60 != 1.0) {
        FUN_1000c5f0(&fStack_ac,fStack_24 - fStack_5c,fStack_20 - fStack_58,fStack_1c - fStack_54);
        if (*(float *)((int)param_1 + 0x84) * 0.1 <=
            SQRT(fStack_ac * fStack_ac + fStack_a8 * fStack_a8 + fStack_a4 * fStack_a4)) {
          FUN_10067850();
          if (fStack_60 == 1.0) {
            FUN_10017360(param_1,&fStack_24,&fStack_5c);
            return;
          }
        }
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  return;
}

/* 10017890  FUN_10017890  (405 bytes)
 * undefined FUN_10017890(float * param_1)
 * called by: CLightning::StrikeThink
 */
void __thiscall FUN_10017890(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  iVar3 = 0;
  while( true ) {
    fVar4 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar1 = (float)fVar4;
    fVar4 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar2 = (float)fVar4;
    fVar4 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar5 = SQRT((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2 + fVar4 * fVar4);
    if (fVar5 == (float10)0.0) {
      fStack_5c = 0.0;
      fStack_58 = 0.0;
      fStack_54 = 1.0;
    }
    else {
      fVar5 = (float10)1.0 / fVar5;
      FUN_1000c5f0(&fStack_5c,(float)(fVar5 * fVar4),(float)((float10)fVar2 * fVar5),
                   (float)((float10)fVar1 * fVar5));
    }
    fVar1 = *(float *)((int)this + 0x84);
    fStack_4c = fStack_58 * fVar1;
    fStack_48 = fStack_54 * fVar1;
    fStack_44 = fStack_5c * fVar1 + *param_1;
    fStack_40 = fStack_4c + param_1[1];
    fStack_3c = fStack_48 + param_1[2];
    FUN_10067850();
    if ((*(float *)((int)this + 0x84) * 0.1 <=
         SQRT((fStack_24 - *param_1) * (fStack_24 - *param_1) +
              (fStack_20 - param_1[1]) * (fStack_20 - param_1[1]) +
              (fStack_1c - param_1[2]) * (fStack_1c - param_1[2]))) && (fStack_28 != 1.0)) break;
    iVar3 = iVar3 + 1;
    if (9 < iVar3) {
      return;
    }
  }
  FUN_10017360(this,param_1,&fStack_24);
  return;
}

/* 10018120  FUN_10018120  (86 bytes)
 * undefined FUN_10018120(int param_1)
 * called by: CFuncTankLaser::Fire, CLaser::StrikeThink
 */
void __thiscall FUN_10018120(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EDI;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x14);
  iVar1 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar1 + 0x50) = *puVar3;
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)((int)this + 0x54) != 0) {
    FUN_100679a0();
  }
  FUN_10017220(this,param_1);
  puVar2 = (undefined4 *)FUN_100162c0((int)this);
  FUN_10016860(this,puVar2,puVar3,unaff_EDI);
  return;
}

/* 10019540  FUN_10019540  (56 bytes)
 * float * FUN_10019540(float * param_1)
 * called by: CBlood::Use
 */
float * __thiscall FUN_10019540(void *this,float *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if ((*(byte *)(iVar1 + 0x1a0) & 1) != 0) {
    FUN_10067e50(param_1);
    return param_1;
  }
  *param_1 = *(float *)(iVar1 + 0x44);
  param_1[1] = *(float *)(iVar1 + 0x48);
  param_1[2] = *(float *)(iVar1 + 0x4c);
  return param_1;
}

/* 10019580  FUN_10019580  (254 bytes)
 * undefined FUN_10019580(float * param_1, int * param_2)
 * called by: CBlood::Use
 */
void __thiscall FUN_10019580(void *this,float *param_1,int *param_2)

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
  
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) == 0) goto LAB_1001965c;
  if (param_2 == (int *)0x0) {
LAB_100195b8:
    peVar6 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
  }
  else {
    iVar5 = (**(code **)(*param_2 + 0xa8))();
    if (iVar5 == 0) goto LAB_100195b8;
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
    *param_1 = (float)((float10)(peVar6->v).origin[0] + (float10)(peVar6->v).view_ofs[0] + fVar9);
    param_1[1] = fVar1 + fVar2 + (float)fVar8;
    param_1[2] = fVar3 + fVar4 + (float)fVar7;
    return;
  }
LAB_1001965c:
  iVar5 = *(int *)((int)this + 4);
  *param_1 = *(float *)(iVar5 + 8);
  param_1[1] = *(float *)(iVar5 + 0xc);
  param_1[2] = *(float *)(iVar5 + 0x10);
  return;
}

/* 1001af00  FUN_1001af00  (151 bytes)
 * undefined FUN_1001af00(undefined4 * param_1, undefined4 * param_2, undefined4 param_3, int param_4)
 * called by: CFuncTankMortar::Fire
 */
void __cdecl FUN_1001af00(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined1 local_90 [4];
  char *local_8c;
  undefined1 *local_88;
  undefined1 local_80 [128];
  
  piVar1 = (int *)CBaseEntity::Create(0x1009303c,param_1,param_2,param_3);
  FUN_1006e69a(local_80,&DAT_10093038);
  local_88 = local_80;
  local_8c = s_iMagnitude_1009301c;
  (**(code **)(*piVar1 + 0x14))(local_90);
  if (param_4 == 0) {
    *(uint *)(piVar1[1] + 0x1a0) = *(uint *)(piVar1[1] + 0x1a0) | 1;
  }
  (**(code **)(*piVar1 + 0xc))();
  (**(code **)(*piVar1 + 0xc0))(0,0,3,0);
  return;
}

/* 1001b560  FUN_1001b560  (187 bytes)
 * undefined FUN_1001b560(int param_1)
 * called by: CBreakable::BreakTouch, CBreakable::TakeDamage
 */
void __fastcall FUN_1001b560(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *this;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 auStack_18 [6];
  
  uVar4 = *(uint *)(param_1 + 0x60);
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,2);
  if (iVar2 == 0) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,0x22);
    iVar2 = iVar2 + 0x5f;
  }
  else {
    iVar2 = 100;
  }
  fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(0.75,1.0);
  fVar6 = (float)fVar5;
  if (uVar4 == 6) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar2 != 0) {
      uVar4 = 2;
    }
  }
  else if (8 < uVar4) {
    if (fVar6 != 0.0) {
      uVar8 = 0;
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
      uVar7 = 0x3f4ccccd;
      iVar3 = (*g_engfuncs.pfnRandomLong)(0,(int)fVar6 + -1);
      EMIT_SOUND_DYN(this,uVar1,2,(char *)auStack_18[iVar3],fVar6,uVar7,uVar8,iVar2);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1001b5d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_1001b6d4 + uVar4 * 4))();
  return;
}

/* 1001bb50  FUN_1001bb50  (12 bytes)
 * bool FUN_1001bb50(int param_1)
 * called by: CBreakable::BreakTouch, CBreakable::Spawn, CBreakable::TakeDamage, CBreakable::Use
 */
bool __fastcall FUN_1001bb50(int param_1)

{
  return *(int *)(param_1 + 0x60) != 7;
}

/* 1001c3e0  FUN_1001c3e0  (151 bytes)
 * undefined FUN_1001c3e0()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001c3e0(void)

{
  _DAT_1009f44c = 0;
  _DAT_1009f450 = 0;
  _DAT_1009f454 = 0;
  _DAT_1009f458 = 0x3ccccccd;
  _DAT_1009f45c = 0x3ccccccd;
  _DAT_1009f460 = 0x3ccccccd;
  _DAT_1009f464 = 0x3d4ccccd;
  _DAT_1009f468 = 0x3d4ccccd;
  _DAT_1009f46c = 0x3d4ccccd;
  _DAT_1009f470 = 0x3dcccccd;
  _DAT_1009f474 = 0x3dcccccd;
  _DAT_1009f478 = 0x3dcccccd;
  _DAT_1009f47c = 0x3e800000;
  _DAT_1009f480 = 0x3e800000;
  _DAT_1009f484 = 0x3e800000;
  return;
}

/* 1001cc90  FUN_1001cc90  (410 bytes)
 * undefined FUN_1001cc90(int * param_1)
 * called by: CFuncTank::Use
 */
void __fastcall FUN_1001cc90(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c [3];
  
  if (((float)param_1[0x16] <= gpGlobals->time) &&
     ((*(byte *)(*(int *)(param_1[0x15] + 4) + 0x180) & 1) != 0)) {
    (*g_engfuncs.pfnAngleVectors)((float *)(param_1[1] + 0x50),local_c,(float *)0x0,(float *)0x0);
    param_1[0x22] = (int)((gpGlobals->time - 1.0 / (float)param_1[0x23]) - 0.01);
    (*g_engfuncs.pfnAngleVectors)((float *)(param_1[1] + 0x50),&fStack_54,&fStack_60,&fStack_6c);
    fVar1 = (float)param_1[0x2a];
    fStack_20 = fStack_68 * fVar1;
    iVar4 = param_1[1];
    fStack_1c = fStack_64 * fVar1;
    fVar2 = (float)param_1[0x29];
    fStack_2c = fStack_5c * fVar2;
    fStack_28 = fStack_58 * fVar2;
    fVar3 = (float)param_1[0x28];
    fStack_38 = fStack_50 * fVar3 + *(float *)(iVar4 + 0xc);
    fStack_34 = fStack_4c * fVar3 + *(float *)(iVar4 + 0x10);
    fStack_44 = fStack_38 + fStack_2c;
    fStack_40 = fStack_34 + fStack_28;
    fStack_18 = fStack_54 * fVar3 + *(float *)(iVar4 + 8) + fStack_60 * fVar2 + fStack_6c * fVar1;
    fStack_14 = fStack_44 + fStack_20;
    fStack_10 = fStack_40 + fStack_1c;
    (**(code **)(*param_1 + 0xf0))(&fStack_18,local_c,*(undefined4 *)(param_1[0x15] + 4));
    if ((int *)param_1[0x15] != (int *)0x0) {
      iVar4 = (**(code **)(*(int *)param_1[0x15] + 0xa8))();
      if (iVar4 != 0) {
        *(undefined4 *)(param_1[0x15] + 0x754) = 1000;
      }
    }
    param_1[0x16] = (int)(1.0 / (float)param_1[0x23] + gpGlobals->time);
  }
  return;
}

/* 1001cf20  FUN_1001cf20  (7 bytes)
 * undefined4 FUN_1001cf20(undefined4 param_1)
 * called by: FUN_1001cff0
 */
undefined4 FUN_1001cf20(undefined4 param_1)

{
  return param_1;
}

/* 1001cf30  FUN_1001cf30  (75 bytes)
 * undefined4 FUN_1001cf30(float param_1)
 * called by: FUN_1001cff0
 */
undefined4 __thiscall FUN_1001cf30(void *this,float param_1)

{
  if (param_1 < *(float *)((int)this + 0x98)) {
    return 0;
  }
  if ((0.0 < *(float *)((int)this + 0x9c)) && (*(float *)((int)this + 0x9c) < param_1)) {
    return 0;
  }
  return 1;
}

/* 1001cff0  FUN_1001cff0  (1879 bytes)
 * undefined FUN_1001cff0(int * param_1)
 * called by: CFuncTank::Think
 */
void __fastcall FUN_1001cff0(int *param_1)

{
  float fVar1;
  float fVar2;
  edict_t *pEdict;
  int iVar3;
  float fVar4;
  float *pfVar5;
  void *pvVar6;
  int *piVar7;
  float *pfVar8;
  float10 fVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
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
  float fStack_64;
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
  float fStack_28;
  float fStack_8;
  
  pEdict = (*g_engfuncs.pfnFindClientInPVS)(*(edict_t **)(param_1[1] + 0x208));
  fStack_c4 = 0.0;
  if (param_1[0x15] == 0) {
    iVar3 = param_1[1];
    if ((*(byte *)(iVar3 + 0x1a0) & 1) == 0) {
      return;
    }
    *(float *)(iVar3 + 0x104) = *(float *)(iVar3 + 0x100) + 0.1;
    if ((pEdict == (edict_t *)0x0) ||
       (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar3 == 0)) {
      iVar3 = param_1[1];
      if ((*(byte *)(iVar3 + 0x1a0) & 1) == 0) {
        return;
      }
      *(float *)(iVar3 + 0x104) = *(float *)(iVar3 + 0x100) + 2.0;
      return;
    }
    fVar4 = (float)FUN_1001cf20(pEdict);
    if (fVar4 == 0.0) {
      return;
    }
    (*g_engfuncs.pfnAngleVectors)((float *)(param_1[1] + 0x50),&fStack_74,&fStack_a4,&fStack_d0);
    fVar1 = (float)param_1[0x2a];
    FUN_1000c5f0(&fStack_80,fStack_d0 * fVar1,fStack_cc * fVar1,fStack_c8 * fVar1);
    fVar1 = (float)param_1[0x29];
    FUN_1000c5f0(&fStack_68,fStack_a4 * fVar1,fStack_a0 * fVar1,fStack_9c * fVar1);
    pfVar8 = &fStack_80;
    pfVar12 = &fStack_bc;
    pfVar11 = &fStack_68;
    pfVar10 = &fStack_5c;
    pfVar5 = (float *)FUN_10014e80(&fStack_74,&fStack_98,(float)param_1[0x28]);
    pvVar6 = (void *)FUN_1000c610((void *)(param_1[1] + 8),&fStack_50,pfVar5);
    pvVar6 = (void *)FUN_1000c610(pvVar6,pfVar10,pfVar11);
    FUN_1000c610(pvVar6,pfVar12,pfVar8);
    fStack_8c = fStack_bc;
    fStack_88 = fStack_b8;
    fStack_84 = fStack_b4;
    fStack_d0 = *(float *)((int)fVar4 + 0x88) + *(float *)((int)fVar4 + 500);
    fStack_cc = *(float *)((int)fVar4 + 0x8c) + *(float *)((int)fVar4 + 0x1f8);
    fStack_c8 = *(float *)((int)fVar4 + 0x90) + *(float *)((int)fVar4 + 0x1fc);
    fVar1 = SQRT((fStack_cc - fStack_b8) * (fStack_cc - fStack_b8) +
                 (fStack_c8 - fStack_b4) * (fStack_c8 - fStack_b4) +
                 (fStack_d0 - fStack_bc) * (fStack_d0 - fStack_bc));
    fStack_c0 = fVar1;
    fStack_44 = fStack_d0;
    fStack_40 = fStack_cc;
    fStack_3c = fStack_c8;
    iVar3 = FUN_1001cf30(param_1,fVar1);
    if (iVar3 == 0) {
      return;
    }
    FUN_10067850();
    if ((fStack_28 == 1.0) || (fStack_8 == fVar4)) {
      piVar7 = *(int **)((int)fVar4 + 0x7c);
      iVar3 = FUN_1001cf30(param_1,fVar1);
      if ((iVar3 != 0) &&
         ((piVar7 != (int *)0x0 && (iVar3 = (**(code **)(*piVar7 + 0x94))(), iVar3 != 0)))) {
        fStack_c4 = 1.4013e-45;
        piVar7 = (int *)(**(code **)(*param_1 + 0xf4))(&fStack_80,piVar7);
        param_1[0x30] = *piVar7;
        param_1[0x31] = piVar7[1];
        param_1[0x32] = piVar7[2];
      }
    }
    iVar3 = param_1[1];
    fStack_bc = (float)param_1[0x30] - *(float *)(iVar3 + 8);
    fStack_b8 = (float)param_1[0x31] - *(float *)(iVar3 + 0xc);
    fStack_b4 = (float)param_1[0x32] - *(float *)(iVar3 + 0x10);
    fStack_b0 = fStack_bc;
    fStack_ac = fStack_b8;
    fStack_a8 = fStack_b4;
    pfVar8 = (float *)UTIL_VecToAngles(&fStack_80,&fStack_b0);
    fStack_dc = *pfVar8;
    fStack_d8 = pfVar8[1];
    fStack_d4 = pfVar8[2];
    FUN_1001d750(param_1,&fStack_dc,
                 SQRT(fStack_a8 * fStack_a8 + fStack_ac * fStack_ac + fStack_b0 * fStack_b0));
  }
  else {
    iVar3 = *(int *)(param_1[0x15] + 4);
    fStack_d8 = *(float *)(iVar3 + 0x78);
    fStack_d4 = *(float *)(iVar3 + 0x7c);
    fStack_dc = -*(float *)(iVar3 + 0x74);
    *(float *)(param_1[1] + 0x104) = *(float *)(param_1[1] + 0x100) + 0.05;
    fVar4 = fStack_c0;
  }
  fStack_dc = -fStack_dc;
  fVar9 = FUN_10067af0(fStack_d8,(float)param_1[0x1a]);
  fStack_d8 = (float)(fVar9 + (float10)(float)param_1[0x1a]);
  fVar9 = FUN_10067af0(fStack_dc,(float)param_1[0x1e]);
  fStack_dc = (float)(fVar9 + (float10)(float)param_1[0x1e]);
  fVar1 = (float)param_1[0x1c] + (float)param_1[0x1a];
  if (((fStack_d8 <= (float)param_1[0x1c] + (float)param_1[0x1a]) &&
      (fVar1 = (float)param_1[0x1a] - (float)param_1[0x1c],
      (float)param_1[0x1a] - (float)param_1[0x1c] <= fStack_d8)) &&
     (fVar1 = fStack_d8, fStack_c4 != 0.0)) {
    param_1[0x24] = (int)gpGlobals->time;
  }
  fStack_d8 = fVar1;
  fVar9 = FUN_10067af0(fStack_d8,*(float *)(param_1[1] + 0x54));
  fStack_c0 = (float)fVar9;
  *(float *)(param_1[1] + 0x60) = (float)(fVar9 * (float10)10.0);
  iVar3 = param_1[1];
  if (*(float *)(iVar3 + 0x60) <= (float)param_1[0x1b]) {
    if (*(float *)(iVar3 + 0x60) < -(float)param_1[0x1b]) {
      *(float *)(iVar3 + 0x60) = -(float)param_1[0x1b];
    }
  }
  else {
    *(int *)(iVar3 + 0x60) = param_1[0x1b];
  }
  fVar1 = (float)param_1[0x20] + (float)param_1[0x1e];
  if ((fStack_dc <= (float)param_1[0x20] + (float)param_1[0x1e]) &&
     (fVar1 = fStack_dc, fStack_dc < (float)param_1[0x1e] - (float)param_1[0x20])) {
    fVar1 = (float)param_1[0x1e] - (float)param_1[0x20];
  }
  fStack_dc = fVar1;
  fVar9 = FUN_10067af0(fStack_dc,*(float *)(param_1[1] + 0x50));
  fStack_c4 = (float)fVar9;
  *(float *)(param_1[1] + 0x5c) = (float)(fVar9 * (float10)10.0);
  iVar3 = param_1[1];
  if (*(float *)(iVar3 + 0x5c) <= (float)param_1[0x1f]) {
    if (*(float *)(iVar3 + 0x5c) < -(float)param_1[0x1f]) {
      *(float *)(iVar3 + 0x5c) = -(float)param_1[0x1f];
    }
  }
  else {
    *(int *)(iVar3 + 0x5c) = param_1[0x1f];
  }
  if (param_1[0x15] == 0) {
    if ((gpGlobals->time - (float)param_1[0x24] < (float)param_1[0x25]) &&
       (((ABS(fStack_c4) < (float)param_1[0x21] && (ABS(fStack_c0) < (float)param_1[0x1d])) ||
        ((*(byte *)(param_1[1] + 0x1a0) & 0x10) != 0)))) {
      (*g_engfuncs.pfnAngleVectors)
                ((float *)(param_1[1] + 0x50),&fStack_bc,(float *)0x0,(float *)0x0);
      if ((*(byte *)(param_1[1] + 0x1a0) & 0x10) == 0) {
LAB_1001d60c:
        (*g_engfuncs.pfnAngleVectors)((float *)(param_1[1] + 0x50),&fStack_50,&fStack_d0,&fStack_a4)
        ;
        fVar4 = (float)param_1[0x2a];
        fStack_64 = fStack_a0 * fVar4;
        iVar3 = param_1[1];
        fStack_60 = fStack_9c * fVar4;
        fVar1 = (float)param_1[0x29];
        fStack_70 = fStack_cc * fVar1;
        fStack_6c = fStack_c8 * fVar1;
        fVar2 = (float)param_1[0x28];
        fStack_58 = fStack_4c * fVar2 + *(float *)(iVar3 + 0xc);
        fStack_54 = fStack_48 * fVar2 + *(float *)(iVar3 + 0x10);
        fStack_94 = fStack_58 + fStack_70;
        fStack_90 = fStack_54 + fStack_6c;
        fStack_80 = fStack_50 * fVar2 + *(float *)(iVar3 + 8) + fStack_d0 * fVar1 +
                    fStack_a4 * fVar4;
        fStack_7c = fStack_94 + fStack_64;
        fStack_78 = fStack_90 + fStack_60;
        (**(code **)(*param_1 + 0xf0))(&fStack_80,&fStack_bc,iVar3);
        return;
      }
      fVar1 = SQRT(fStack_a8 * fStack_a8 + fStack_ac * fStack_ac + fStack_b0 * fStack_b0);
      fStack_a0 = fStack_b8 * fVar1;
      fStack_9c = fStack_b4 * fVar1;
      fStack_d0 = fStack_bc * fVar1 + fStack_8c;
      fStack_cc = fStack_a0 + fStack_88;
      fStack_c8 = fStack_9c + fStack_84;
      FUN_10067850();
      if (fStack_8 == fVar4) goto LAB_1001d60c;
    }
    param_1[0x22] = 0;
  }
  return;
}

/* 1001d750  FUN_1001d750  (175 bytes)
 * undefined FUN_1001d750(float * param_1, float param_2)
 * called by: FUN_1001cff0
 */
void __thiscall FUN_1001d750(void *this,float *param_1,float param_2)

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

/* 1001da40  FUN_1001da40  (370 bytes)
 * undefined FUN_1001da40(void)
 * called by: CFuncTankLaser::Fire, CFuncTankMortar::Fire
 */
void FUN_1001da40(void)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  do {
    fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
    fVar2 = (float10)(*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
    fVar3 = (float10)(*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
    fVar4 = (float10)(*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
  } while ((float10)1.0 <
           (float10)(float)(fVar2 + (float10)(float)fVar1) *
           (float10)(float)(fVar2 + (float10)(float)fVar1) +
           (fVar4 + (float10)(float)fVar3) * (fVar4 + (float10)(float)fVar3));
  FUN_10067850();
  return;
}

/* 1001dbc0  FUN_1001dbc0  (90 bytes)
 * undefined FUN_1001dbc0(int param_1)
 * called by: CFuncTank::Think
 */
void __fastcall FUN_1001dbc0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar1 + 0x1e8) != 0) && (-1 < (char)(*(uint *)(iVar1 + 0x1a0) >> 8))) {
    *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) | 0x8000;
    EMIT_SOUND_DYN(gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1e8),
                   *(undefined4 *)(*(int *)(param_1 + 4) + 0x208),6,
                   gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1e8),0x3f59999a,
                   0x3f4ccccd,0,100);
  }
  return;
}

/* 1001dc20  FUN_1001dc20  (84 bytes)
 * undefined FUN_1001dc20(int param_1)
 * called by: CFuncTank::Think, CFuncTank::Use
 */
void __fastcall FUN_1001dc20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((char)((uint)*(undefined4 *)(iVar1 + 0x1a0) >> 8) < '\0') {
    EMIT_SOUND_DYN(gpGlobals->pStringBase + *(int *)(iVar1 + 0x1e8),*(undefined4 *)(iVar1 + 0x208),6
                   ,gpGlobals->pStringBase + *(int *)(iVar1 + 0x1e8),0,0,0x20,100);
  }
  *(uint *)(*(int *)(param_1 + 4) + 0x1a0) = *(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 0xffff7fff;
  return;
}

/* 1001e660  FUN_1001e660  (95 bytes)
 * undefined FUN_1001e660()
 */
void FUN_1001e660(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = (*g_engfuncs.pfnIsDedicatedServer)();
  if (iVar1 != 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Bots_only_in_listen_servers__1009402c);
    return;
  }
  pcVar2 = (*g_engfuncs.pfnCmd_Argv)(1);
  iVar1 = 5;
  bVar4 = true;
  pcVar3 = &DAT_10094068;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Usage__addbot__botname__1009404c);
    return;
  }
  pcVar2 = (*g_engfuncs.pfnCmd_Argv)(1);
  FUN_1005dc30(pcVar2);
  return;
}

/* 1001e6c0  FUN_1001e6c0  (131 bytes)
 * undefined FUN_1001e6c0()
 */
void FUN_1001e6c0(undefined4 param_1,char *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  byte_conflict *pbVar3;
  undefined1 *extraout_ECX;
  char *pcVar4;
  bool bVar5;
  
  iVar1 = (*g_engfuncs.pfnIsDedicatedServer)();
  if (iVar1 != 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Bots_only_in_listen_servers__1009402c);
    return;
  }
  pcVar2 = (*g_engfuncs.pfnCmd_Argv)(1);
  iVar1 = 5;
  bVar5 = true;
  pcVar4 = &DAT_10094068;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Usage__addcustombot__botname___t_10094070);
    return;
  }
  pbVar3 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(3);
  FUN_1006e0fb(extraout_ECX,pbVar3);
  (*g_engfuncs.pfnCmd_Argv)(2);
  pcVar2 = (*g_engfuncs.pfnCmd_Argv)(1);
  FUN_1005da10(pcVar2,param_2,param_3);
  return;
}

/* 1001e9a0  FUN_1001e9a0  (51 bytes)
 * undefined FUN_1001e9a0()
 */
undefined4 __thiscall FUN_1001e9a0(void *param_1,void *param_2,byte_conflict *param_3,int param_4)

{
  int iVar1;
  
  if (param_3 != (byte_conflict *)0x0) {
    iVar1 = FUN_1002d8f0(param_1,param_3);
    if (-1 < iVar1) {
      iVar1 = FUN_1002d8d0(param_2,iVar1);
      if (iVar1 < param_4) {
        return 1;
      }
    }
  }
  return 0;
}

/* 1001e9e0  FUN_1001e9e0  (266 bytes)
 * undefined FUN_1001e9e0(int * param_1)
 * called by: FUN_100245d0
 */
void FUN_1001e9e0(int *param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_10042f50(param_1);
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
  *(undefined4 *)(iVar5 + 0x74) = DAT_1009f4a8;
  *(undefined4 *)(iVar5 + 0x78) = DAT_1009f4ac;
  *(undefined4 *)(iVar5 + 0x7c) = DAT_1009f4b0;
  iVar5 = param_1[1];
  *(undefined4 *)(iVar5 + 0x20) = DAT_1009f4a8;
  *(undefined4 *)(iVar5 + 0x24) = DAT_1009f4ac;
  *(undefined4 *)(iVar5 + 0x28) = DAT_1009f4b0;
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
  *(undefined4 *)(iVar4 + 0x68) = DAT_1009f4a8;
  *(undefined4 *)(iVar4 + 0x6c) = DAT_1009f4ac;
  *(undefined4 *)(iVar4 + 0x70) = DAT_1009f4b0;
  *(undefined4 *)(param_1[1] + 0xa0) = 1;
  return;
}

/* 1001eaf0  FUN_1001eaf0  (104 bytes)
 * undefined4 FUN_1001eaf0(void * param_1, int * param_2)
 * called by: FUN_10024410
 */
undefined4 __thiscall FUN_1001eaf0(void *this,void *param_1,int *param_2)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)param_1 + 4) + 0x170) != 0) {
    return 0;
  }
  if (((&DAT_102dfb70)[param_2[0x1e] * 0xb] != 0) &&
     (iVar1 = (**(code **)(*(int *)this + 0xa0))
                        (param_1,(&DAT_102dfb70)[param_2[0x1e] * 0xb],
                         *(undefined4 *)(&DAT_102dfb74 + param_2[0x1e] * 0x2c)), iVar1 != 0)) {
    return 1;
  }
  iVar1 = FUN_1002e680(param_1,param_2);
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}

/* 1001ed00  FUN_1001ed00  (1 bytes)
 * undefined FUN_1001ed00()
 */
void FUN_1001ed00(void)

{
  return;
}

/* 1001ed20  FUN_1001ed20  (31 bytes)
 * undefined FUN_1001ed20()
 */
void FUN_1001ed20(void)

{
  DAT_1009f4a8 = 0;
  DAT_1009f4ac = 0;
  DAT_1009f4b0 = 0;
  return;
}

/* 1001fc00  FUN_1001fc00  (206 bytes)
 * undefined FUN_1001fc00(int * param_1)
 * called by: CCycler::GenericCyclerSpawn
 */
void __fastcall FUN_1001fc00(int *param_1)

{
  int iVar1;
  
  FUN_10006430((int)param_1);
  *(undefined4 *)(param_1[1] + 0x10c) = 3;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x3f800000;
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0x160) = 0x479c4000;
  *(undefined4 *)(param_1[1] + 0xb0) = 0x40a00000;
  *(undefined4 *)(param_1[1] + 0xac) = *(undefined4 *)(param_1[1] + 0x54);
  (**(code **)(*param_1 + 0xf4))(0x168);
  param_1[0x17] = 0x42960000;
  param_1[0x18] = 0;
  *(float *)(param_1[1] + 0x104) = *(float *)(param_1[1] + 0x104) + 1.0;
  CBaseAnimating::ResetSequenceInfo((int)param_1);
  iVar1 = param_1[1];
  if ((*(int *)(iVar1 + 0x128) == 0) && (*(float *)(iVar1 + 0x130) == 0.0)) {
    param_1[0x54] = 1;
    return;
  }
  param_1[0x54] = 0;
  *(undefined4 *)(iVar1 + 0x138) = 0;
  return;
}

/* 10020890  FUN_10020890  (8 bytes)
 * undefined4 FUN_10020890(void)
 * called by: entry
 */
undefined4 FUN_10020890(void)

{
  return 1;
}

/* 10022d10  FUN_10022d10  (96 bytes)
 * undefined FUN_10022d10(int * param_1)
 * called by: CGamePlayerEquip::Touch, CGamePlayerEquip::Use
 */
void __thiscall FUN_10022d10(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0xa8))();
  if (iVar1 != 0) {
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

/* 10023200  FUN_10023200  (1 bytes)
 * undefined FUN_10023200(void)
 * called by: CWorld::Precache
 */
void FUN_10023200(void)

{
  return;
}

/* 10023210  FUN_10023210  (5 bytes)
 * undefined4 FUN_10023210(void)
 * called by: CWorld::Precache
 */
undefined4 FUN_10023210(void)

{
  return 0;
}

/* 10023220  FUN_10023220  (3 bytes)
 * undefined4 FUN_10023220(void)
 * called by: CWorld::Precache
 */
undefined4 FUN_10023220(void)

{
  return 0;
}

/* 10023230  FUN_10023230  (5 bytes)
 * undefined4 FUN_10023230(void)
 * called by: CWorld::Precache
 */
undefined4 FUN_10023230(void)

{
  return 0;
}

/* 10023250  FUN_10023250  (3 bytes)
 * undefined FUN_10023250(void)
 * called by: CBasePlayer::CheatImpulseCommands
 */
void FUN_10023250(void)

{
  return;
}

/* 10023260  FUN_10023260  (5 bytes)
 * undefined4 FUN_10023260(void)
 * called by: CBasePlayer::CheatImpulseCommands
 */
undefined4 FUN_10023260(void)

{
  return 0;
}

/* 10023290  FUN_10023290  (3 bytes)
 * undefined FUN_10023290(void)
 * called by: CBaseMonster::TakeDamage
 */
void FUN_10023290(void)

{
  return;
}

/* 100233b0  FUN_100233b0  (3 bytes)
 * undefined4 FUN_100233b0(void)
 * called by: FUN_10010e40
 */
undefined4 FUN_100233b0(void)

{
  return 0;
}

/* 100236e0  FUN_100236e0  (10 bytes)
 * undefined FUN_100236e0()
 */
void FUN_100236e0(void)

{
  FUN_100236f0();
  FUN_10023700();
  return;
}

/* 100236f0  FUN_100236f0  (10 bytes)
 * undefined FUN_100236f0(void)
 * called by: FUN_100236e0
 */
void FUN_100236f0(void)

{
  FUN_10069bd0((undefined4 *)&DAT_1009fe50);
  return;
}

/* 10023700  FUN_10023700  (12 bytes)
 * undefined FUN_10023700(void)
 * called by: FUN_100236e0
 */
void FUN_10023700(void)

{
  FUN_1006ee3b(FUN_10023710);
  return;
}

/* 10023710  FUN_10023710  (10 bytes)
 * undefined FUN_10023710()
 */
void FUN_10023710(void)

{
  FUN_10069c10((undefined4 *)&DAT_1009fe50);
  return;
}

/* 10023720  FUN_10023720  (10 bytes)
 * undefined FUN_10023720()
 */
void FUN_10023720(void)

{
  FUN_10023730();
  FUN_10023740();
  return;
}

/* 10023730  FUN_10023730  (10 bytes)
 * undefined FUN_10023730(void)
 * called by: FUN_10023720
 */
void FUN_10023730(void)

{
  FUN_10023770((undefined4 *)&DAT_1009f768);
  return;
}

/* 10023740  FUN_10023740  (12 bytes)
 * undefined FUN_10023740(void)
 * called by: FUN_10023720
 */
void FUN_10023740(void)

{
  FUN_1006ee3b(FUN_10023750);
  return;
}

/* 10023750  FUN_10023750  (10 bytes)
 * undefined FUN_10023750()
 */
void FUN_10023750(void)

{
  FUN_10023760((undefined4 *)&DAT_1009f768);
  return;
}

/* 10023760  FUN_10023760  (7 bytes)
 * undefined FUN_10023760(undefined4 * param_1)
 * called by: FUN_10023750, FUN_10023830
 */
void __fastcall FUN_10023760(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10084b38;
  return;
}

/* 10023770  FUN_10023770  (9 bytes)
 * undefined FUN_10023770(undefined4 * param_1)
 * called by: FUN_10023730
 */
void __fastcall FUN_10023770(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10084b40;
  return;
}

/* 10023780  FUN_10023780  (161 bytes)
 * undefined FUN_10023780()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10023780(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((DAT_1009f498 != 0) &&
     (iVar1 = (**(code **)(*DAT_1009f494 + 200))(param_1,param_2), iVar1 != 1)) {
    return 0;
  }
  if (((DAT_100ac8c0 != '\x03') && (DAT_100ac8c0 != '\x02')) && (_DAT_10093ce8 == 0.0)) {
    return 1;
  }
  iVar1 = (**(code **)(*param_2 + 0x94))();
  if (((iVar1 == 0) && ((float)param_2[0x1ba] < 0.0)) &&
     ((iVar1 = (**(code **)(*param_1 + 0x94))(), iVar1 != 0 || (0.0 <= (float)param_1[0x1ba])))) {
    return 0;
  }
  return 1;
}

/* 10023830  FUN_10023830  (30 bytes)
 * undefined4 * FUN_10023830(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_10023830(void *this,byte_conflict param_1)

{
  FUN_10023760(this);
  if ((param_1 & 1) != 0) {
    FUN_1006eb82(this);
  }
  return this;
}

/* 10023950  FUN_10023950  (104 bytes)
 * undefined FUN_10023950()
 */
undefined4 FUN_10023950(int param_1,byte_conflict *param_2)

{
  undefined4 uVar1;
  byte_conflict *pbVar2;
  int iVar3;
  void *this;
  bool bVar4;
  
  uVar1 = CVoiceGameMgr::ClientCommand((CVoiceGameMgr *)&DAT_1009fe50,param_1,param_2);
  if ((char)uVar1 != '\0') {
    return 1;
  }
  iVar3 = 0xb;
  bVar4 = true;
  pbVar2 = (byte_conflict *)s_menuselect_10094af8;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar4 = *param_2 == *pbVar2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  } while (bVar4);
  if (!bVar4) {
    return 0;
  }
  iVar3 = (*g_engfuncs.pfnCmd_Argc)();
  if (iVar3 < 2) {
    return 1;
  }
  pbVar2 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
  FUN_1006e1dd(this,pbVar2);
  return 1;
}

/* 100239c0  FUN_100239c0  (156 bytes)
 * undefined FUN_100239c0(void)
 * called by: CHalfLifeMultiplay::CHalfLifeMultiplay
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100239c0(void)

{
  CGameRules::RefreshSkillData();
  _DAT_100a2058 = 0x41f00000;
  _DAT_100a2008 = 0x41c80000;
  DAT_100a200c = 0x41400000;
  DAT_100a2010 = 0x42200000;
  DAT_100a2014 = 0x41400000;
  _DAT_100a2018 = 0x42c80000;
  DAT_100a201c = 0x41a00000;
  _DAT_100a2020 = 0x41a00000;
  _DAT_100a2028 = 0x42f00000;
  _DAT_100a2034 = 0x41a00000;
  _DAT_100a2030 = 0x41200000;
  _DAT_100a203c = 0x42c80000;
  _DAT_100a2040 = 0x42f00000;
  _DAT_100a2044 = 0x43160000;
  _DAT_100a2038 = 0x41200000;
  return;
}

/* 10023a60  FUN_10023a60  (580 bytes)
 * undefined FUN_10023a60(int * param_1)
 * called by: CHalfLifeTeamplay::Think
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10023a60(int *param_1)

{
  float10 fVar1;
  float fVar2;
  globalvars_t *pgVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 extraout_ST0;
  longlong lVar8;
  int in_stack_00000004;
  
  FUN_10069cc0(&DAT_1009fe50,(double)gpGlobals->frametime);
  pgVar3 = gpGlobals;
  fVar2 = DAT_10093a68;
  iVar6 = 0;
  if (DAT_1009f4a4 == 0) {
    __ftol();
    if ((extraout_ST0 != (float10)0.0) &&
       (fVar1 = (float10)pgVar3->time, extraout_ST0 < fVar1 != (extraout_ST0 == fVar1))) {
                    /* WARNING: Could not recover jumptable at 0x10023b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xf8))();
      return;
    }
    if (fVar2 != 0.0) {
      iVar7 = 1;
      iVar6 = 9999;
      if (0 < pgVar3->maxClients) {
        do {
          iVar5 = UTIL_PlayerByIndex(iVar7);
          if (iVar5 != 0) {
            if (fVar2 <= *(float *)(*(int *)(iVar5 + 4) + 0x164)) {
                    /* WARNING: Could not recover jumptable at 0x10023c96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*param_1 + 0xf8))();
              return;
            }
            lVar8 = __ftol();
            if ((int)lVar8 < iVar6) {
              iVar6 = (int)lVar8;
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 <= gpGlobals->maxClients);
      }
    }
    if (iVar6 != DAT_1009fe4c) {
      pcVar4 = UTIL_VarArgs(&DAT_10091cc8);
      (*g_engfuncs.pfnCvar_DirectSet)((cvar_s *)&PTR_s_mp_fragsleft_10093a20,pcVar4);
    }
    if ((float)_DAT_1009f76c != _DAT_10093a40) {
      pcVar4 = UTIL_VarArgs(&DAT_10091cc8);
      (*g_engfuncs.pfnCvar_DirectSet)((cvar_s *)&PTR_s_mp_timeleft_10093a34,pcVar4);
    }
    _DAT_1009f76c = in_stack_00000004;
    DAT_1009fe4c = iVar6;
    GameDLLInit(&DAT_100ac8c0);
    if (DAT_100add34 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x10023c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xf8))();
      return;
    }
  }
  else {
    (*g_engfuncs.pfnCVarGetFloat)(s_mp_chattime_10093f14);
    lVar8 = __ftol();
    if ((int)lVar8 < 10) {
      (*g_engfuncs.pfnCVarSetString)(s_mp_chattime_10093f14,&DAT_10093f10);
    }
    else if (0x78 < (int)lVar8) {
      pcVar4 = FUN_100676f0();
      (*g_engfuncs.pfnCVarSetString)(s_mp_chattime_10093f14,pcVar4);
    }
    fVar2 = _DAT_10093b6c + _DAT_1009fe70;
    param_1[1] = (int)fVar2;
    if ((fVar2 < gpGlobals->time) &&
       ((param_1[2] != 0 || (_DAT_1009fe70 + 120.0 < gpGlobals->time)))) {
                    /* WARNING: Could not recover jumptable at 0x10023b26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xf4))();
      return;
    }
  }
  return;
}

/* 10023cb0  FUN_10023cb0  (6 bytes)
 * undefined FUN_10023cb0()
 */
undefined4 FUN_10023cb0(void)

{
  return 1;
}

/* 10023cc0  FUN_10023cc0  (6 bytes)
 * undefined FUN_10023cc0()
 */
undefined4 FUN_10023cc0(void)

{
  return 1;
}

/* 10023cd0  FUN_10023cd0  (13 bytes)
 * undefined FUN_10023cd0()
 */
longlong FUN_10023cd0(void)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  return lVar1;
}

/* 10023ce0  FUN_10023ce0  (116 bytes)
 * undefined FUN_10023ce0()
 */
bool FUN_10023ce0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x100))();
  if (iVar1 == 0) {
    return false;
  }
  if (*(int **)(param_1 + 0x968) == (int *)0x0) {
    return true;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x968) + 0x108))();
  if (iVar1 == 0) {
    return false;
  }
  return *(int *)(&DAT_102dfb90 + *(int *)(*(int *)(param_1 + 0x968) + 0x78) * 0x2c) <
         *(int *)(&DAT_102dfb90 + param_2[0x1e] * 0x2c);
}

/* 10023d60  FUN_10023d60  (250 bytes)
 * undefined FUN_10023d60()
 */
undefined4 FUN_10023d60(void *param_1,int *param_2)

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
  iVar3 = (**(code **)(*param_2 + 0x108))();
  if (iVar3 == 0) {
    return 0;
  }
  iStack_4 = 0;
  param_2 = (int *)((int)param_1 + 0x950);
  do {
    for (piVar1 = (int *)*param_2; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x1d]) {
      iVar3 = *(int *)(&DAT_102dfb90 + piVar1[0x1e] * 0x2c);
      if (((iVar3 < 0) || (iVar3 != *(int *)(&DAT_102dfb90 + piVar2[0x1e] * 0x2c))) ||
         (piVar1 == piVar2)) {
        if (((iVar4 < iVar3) && (piVar1 != piVar2)) &&
           (iVar3 = (**(code **)(*piVar1 + 0x100))(), iVar3 != 0)) {
          iVar4 = *(int *)(&DAT_102dfb90 + piVar1[0x1e] * 0x2c);
          piVar5 = piVar1;
        }
      }
      else {
        iVar3 = (**(code **)(*piVar1 + 0x100))();
        if ((iVar3 != 0) && (iVar3 = FUN_1002e7b0(param_1,piVar1), iVar3 != 0)) {
          return 1;
        }
      }
    }
    iStack_4 = iStack_4 + 1;
    param_2 = param_2 + 1;
    if (5 < iStack_4) {
      if (piVar5 != (int *)0x0) {
        FUN_1002e7b0(param_1,piVar5);
        return 1;
      }
      return 0;
    }
  } while( true );
}

/* 10023e60  FUN_10023e60  (23 bytes)
 * undefined FUN_10023e60()
 */
undefined4 FUN_10023e60(undefined4 param_1)

{
  FUN_10069ce0(param_1);
  return 1;
}

/* 10023e80  FUN_10023e80  (50 bytes)
 * undefined FUN_10023e80()
 */
void FUN_10023e80(int param_1)

{
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100cbc00,(float *)0x0,*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10024220  FUN_10024220  (54 bytes)
 * undefined FUN_10024220()
 */
float10 FUN_10024220(int param_1)

{
  float10 fVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  if ((int)lVar2 != 1) {
    return (float10)10.0;
  }
  fVar1 = (float10)*(float *)(param_1 + 0x784) - (float10)680.0;
  *(float *)(param_1 + 0x784) = (float)fVar1;
  return fVar1 * (float10)0.22522523;
}

/* 10024260  FUN_10024260  (8 bytes)
 * undefined4 FUN_10024260(void)
 * called by: FUN_100393d0
 */
undefined4 FUN_10024260(void)

{
  return 1;
}

/* 10024270  FUN_10024270  (58 bytes)
 * undefined FUN_10024270()
 */
void __thiscall FUN_10024270(int param_1,int param_2)

{
  if (DAT_1009f4a4 != 0) {
    if ((*(uint *)(param_2 + 0x770) & 0x827) != 0) {
      *(undefined4 *)(param_1 + 8) = 1;
    }
    *(undefined4 *)(param_2 + 0x770) = 0;
    *(undefined4 *)(*(int *)(param_2 + 4) + 0x180) = 0;
    *(undefined4 *)(param_2 + 0x774) = 0;
  }
  return;
}

/* 100242b0  FUN_100242b0  (8 bytes)
 * undefined FUN_100242b0()
 */
undefined4 FUN_100242b0(void)

{
  return 1;
}

/* 100242c0  FUN_100242c0  (10 bytes)
 * undefined FUN_100242c0()
 */
float10 FUN_100242c0(void)

{
  return (float10)gpGlobals->time;
}

/* 100242d0  FUN_100242d0  (28 bytes)
 * undefined FUN_100242d0()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100242d0(void)

{
  if (_DAT_10093af4 != 0.0) {
    return 1;
  }
  return 0;
}

/* 100242f0  FUN_100242f0  (8 bytes)
 * undefined FUN_100242f0()
 */
undefined4 FUN_100242f0(void)

{
  return 1;
}

/* 10024300  FUN_10024300  (3 bytes)
 * undefined FUN_10024300()
 */
void FUN_10024300(void)

{
  return;
}

/* 10024310  FUN_10024310  (71 bytes)
 * undefined FUN_10024310()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10024310(int param_1)

{
  if ((0.0 < _DAT_10093ab8) && (((&DAT_102dfb8c)[*(int *)(param_1 + 0x78) * 0x2c] & 8) == 0)) {
    return (float10)gpGlobals->time;
  }
  return (float10)gpGlobals->time + (float10)20.0;
}

/* 10024360  FUN_10024360  (87 bytes)
 * float10 FUN_10024360(int * param_1, int param_2)
 */
float10 __thiscall FUN_10024360(int *param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  
  if (((param_2 != 0) && (*(int *)(param_2 + 0x78) != 0)) &&
     (((&DAT_102dfb8c)[*(int *)(param_2 + 0x78) * 0x2c] & 8) != 0)) {
    iVar1 = (*g_engfuncs.pfnNumberOfEntities)();
    if (gpGlobals->maxEntities + -100 <= iVar1) {
      fVar2 = (float10)(**(code **)(*param_1 + 0x80))(param_2);
      return fVar2;
    }
  }
  return (float10)0.0;
}

/* 100243c0  FUN_100243c0  (33 bytes)
 * undefined FUN_100243c0()
 */
void FUN_100243c0(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  *param_1 = *(undefined4 *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  return;
}

/* 100243f0  FUN_100243f0  (28 bytes)
 * undefined FUN_100243f0()
 */
char FUN_100243f0(int param_1)

{
  return ((*(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 0x40000000) != 0) + '\x01';
}

/* 10024410  FUN_10024410  (126 bytes)
 * undefined FUN_10024410()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10024410(void *param_1,void *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  if (0.0 < _DAT_10093ab8) {
    if (((&DAT_102dfb8c)[param_3[0x1e] * 0x2c] & 8) != 0) {
      uVar2 = FUN_1001eaf0(param_1,param_2,param_3);
      return uVar2;
    }
    iVar4 = 0;
    piVar3 = (int *)((int)param_2 + 0x950);
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
  uVar2 = FUN_1001eaf0(param_1,param_2,param_3);
  return uVar2;
}

/* 10024490  FUN_10024490  (8 bytes)
 * undefined FUN_10024490()
 */
undefined4 FUN_10024490(void)

{
  return 1;
}

/* 100244a0  FUN_100244a0  (3 bytes)
 * undefined FUN_100244a0()
 */
void FUN_100244a0(void)

{
  return;
}

/* 100244b0  FUN_100244b0  (30 bytes)
 * undefined FUN_100244b0()
 */
char FUN_100244b0(int param_1)

{
  return ((*(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 0x40000000) != 0) + '\x05';
}

/* 100244d0  FUN_100244d0  (16 bytes)
 * undefined FUN_100244d0()
 */
float10 FUN_100244d0(void)

{
  return (float10)gpGlobals->time + (float10)30.0;
}

/* 100244e0  FUN_100244e0  (33 bytes)
 * undefined FUN_100244e0()
 */
void FUN_100244e0(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  *param_1 = *(undefined4 *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  return;
}

/* 10024510  FUN_10024510  (3 bytes)
 * undefined FUN_10024510()
 */
void FUN_10024510(void)

{
  return;
}

/* 10024520  FUN_10024520  (8 bytes)
 * undefined FUN_10024520()
 */
undefined4 FUN_10024520(void)

{
  return 1;
}

/* 10024530  FUN_10024530  (30 bytes)
 * undefined FUN_10024530()
 */
char FUN_10024530(int param_1)

{
  return ((*(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 0x40000000) != 0) + '\x03';
}

/* 10024550  FUN_10024550  (16 bytes)
 * undefined FUN_10024550()
 */
float10 FUN_10024550(void)

{
  return (float10)gpGlobals->time + (float10)20.0;
}

/* 10024560  FUN_10024560  (33 bytes)
 * undefined FUN_10024560()
 */
void FUN_10024560(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  *param_1 = *(undefined4 *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  return;
}

/* 10024590  FUN_10024590  (7 bytes)
 * undefined FUN_10024590()
 */
float10 FUN_10024590(void)

{
  return (float10)60.0;
}

