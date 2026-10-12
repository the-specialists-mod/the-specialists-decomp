/* mp.dll - CGib (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10011110  CGib::WaitTillLand  (158 bytes)
 * void WaitTillLand(void)
 */
/* public: void __thiscall CGib::WaitTillLand(void) */

void __thiscall CGib::WaitTillLand(CGib *this)

{
  int iVar1;
  
                    /* 0x11110  139  ?WaitTillLand@CGib@@QAEXXZ */
  iVar1 = (**(code **)(*(int *)this + 0xa4))();
  if (iVar1 == 0) {
    UTIL_Remove((int)this);
    return;
  }
  iVar1 = *(int *)(this + 4);
  if (((*(float *)(iVar1 + 0x20) == DAT_1009f4a8) && (*(float *)(iVar1 + 0x24) == DAT_1009f4ac)) &&
     (*(float *)(iVar1 + 0x28) == DAT_1009f4b0)) {
    *(code **)(this + 0x10) = CBaseEntity::SUB_StartFadeOut;
    *(float *)(iVar1 + 0x104) = *(float *)(this + 0x60) + gpGlobals->time;
    if (*(int *)(this + 0x54) != -1) {
      CSoundEnt::InsertSound(0x10,(undefined4 *)(*(int *)(this + 4) + 8),0x180,25.0);
      return;
    }
  }
  else {
    *(float *)(iVar1 + 0x104) = gpGlobals->time + 0.5;
  }
  return;
}

/* 100111b0  CGib::BounceGibTouch  (393 bytes)
 * void BounceGibTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CGib::BounceGibTouch(class CBaseEntity *) */

void __thiscall CGib::BounceGibTouch(CGib *this,CBaseEntity *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 local_38 [56];
  
                    /* 0x111b0  6  ?BounceGibTouch@CGib@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(this + 4);
  if ((*(uint *)(iVar1 + 0x1a4) & 0x200) != 0) {
    *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) * 0.9;
    *(float *)(iVar1 + 0x24) = *(float *)(iVar1 + 0x24) * 0.9;
    *(float *)(iVar1 + 0x28) = *(float *)(iVar1 + 0x28) * 0.9;
    *(undefined4 *)(*(int *)(this + 4) + 0x50) = 0;
    *(undefined4 *)(*(int *)(this + 4) + 0x58) = 0;
    *(undefined4 *)(*(int *)(this + 4) + 0x5c) = 0;
    *(undefined4 *)(*(int *)(this + 4) + 100) = 0;
    return;
  }
  if (((DAT_1009f4b8 != 1) && (0 < *(int *)(this + 0x58))) && (*(int *)(this + 0x54) != -1)) {
    FUN_10067850();
    FUN_10067ea0((int)local_38,*(int *)(this + 0x54));
    *(int *)(this + 0x58) = *(int *)(this + 0x58) + -1;
  }
  if (*(int *)(this + 0x5c) != 9) {
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,2);
    if (iVar1 == 0) {
      fVar2 = ABS((float10)*(float *)(*(int *)(this + 4) + 0x28)) * (float10)0.0022222222222222222;
      if ((float10)1.0 < fVar2) {
        fVar2 = (float10)1.0;
      }
      CBreakable::MaterialSoundRandom
                (*(undefined4 *)(*(int *)(this + 4) + 0x208),*(undefined4 *)(this + 0x5c),
                 (float)(fVar2 * (float10)0.8));
    }
  }
  return;
}

/* 10011340  CGib::StickyGibTouch  (398 bytes)
 * void StickyGibTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CGib::StickyGibTouch(class CBaseEntity *) */

void __thiscall CGib::StickyGibTouch(CGib *this,CBaseEntity *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [36];
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
                    /* 0x11340  104  ?StickyGibTouch@CGib@@QAEXPAVCBaseEntity@@@Z */
  *(code **)(this + 0x10) = CBaseEntity::SUB_Remove;
  *(float *)(*(int *)(this + 4) + 0x104) = gpGlobals->time + 10.0;
  iVar2 = 0xb;
  bVar5 = true;
  pcVar3 = gpGlobals->pStringBase + **(int **)(param_1 + 4);
  pcVar4 = s_worldspawn_10092568;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    *(float *)(*(int *)(this + 4) + 0x104) = gpGlobals->time;
    return;
  }
  iVar2 = *(int *)(this + 4);
  local_3c = *(float *)(iVar2 + 0x28) * 32.0 + *(float *)(iVar2 + 0x10);
  local_40 = *(float *)(iVar2 + 0x24) * 32.0 + *(float *)(iVar2 + 0xc);
  local_44 = *(float *)(iVar2 + 0x20) * 32.0 + *(float *)(iVar2 + 8);
  FUN_10067850();
  FUN_10067ea0((int)local_38,*(int *)(this + 0x54));
  local_44 = fStack_14 * -1.0;
  iVar2 = *(int *)(this + 4);
  local_40 = fStack_10 * -1.0;
  local_3c = fStack_c * -1.0;
  *(float *)(iVar2 + 0x20) = local_44;
  *(float *)(iVar2 + 0x24) = local_40;
  *(float *)(iVar2 + 0x28) = local_3c;
  puVar1 = (undefined4 *)UTIL_VecToAngles(&local_44,*(int *)(this + 4) + 0x20);
  iVar2 = *(int *)(this + 4);
  *(undefined4 *)(iVar2 + 0x50) = *puVar1;
  *(undefined4 *)(iVar2 + 0x54) = puVar1[1];
  *(undefined4 *)(iVar2 + 0x58) = puVar1[2];
  iVar2 = *(int *)(this + 4);
  *(undefined4 *)(iVar2 + 0x20) = DAT_1009f4a8;
  *(undefined4 *)(iVar2 + 0x24) = DAT_1009f4ac;
  *(undefined4 *)(iVar2 + 0x28) = DAT_1009f4b0;
  iVar2 = *(int *)(this + 4);
  *(undefined4 *)(iVar2 + 0x5c) = DAT_1009f4a8;
  *(undefined4 *)(iVar2 + 0x60) = DAT_1009f4ac;
  *(undefined4 *)(iVar2 + 100) = DAT_1009f4b0;
  *(undefined4 *)(*(int *)(this + 4) + 0x108) = 0;
  return;
}

