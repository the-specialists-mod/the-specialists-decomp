/* mp.dll - CGib (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10013900  CGib::WaitTillLand  (158 bytes)
 * void WaitTillLand(void)
 */
/* public: void __thiscall CGib::WaitTillLand(void) */

void __thiscall CGib::WaitTillLand(CGib *this)

{
  int iVar1;
  
                    /* 0x13900  149  ?WaitTillLand@CGib@@QAEXXZ */
  iVar1 = (**(code **)(*(int *)this + 0xbc))();
  if (iVar1 == 0) {
    UTIL_Remove((int *)this);
    return;
  }
  iVar1 = *(int *)(this + 4);
  if (((*(float *)(iVar1 + 0x20) == DAT_100ae498) && (*(float *)(iVar1 + 0x24) == DAT_100ae49c)) &&
     (*(float *)(iVar1 + 0x28) == DAT_100ae4a0)) {
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

/* 100139a0  CGib::BounceGibTouch  (435 bytes)
 * void BounceGibTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CGib::BounceGibTouch(class CBaseEntity *) */

void __thiscall CGib::BounceGibTouch(CGib *this,CBaseEntity *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined1 local_38 [56];
  
                    /* 0x139a0  6  ?BounceGibTouch@CGib@@QAEXPAVCBaseEntity@@@Z */
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
  if (((DAT_100ae4a8 != 1) && (0 < *(int *)(this + 0x58))) && (*(int *)(this + 0x54) != -1)) {
    local_50 = *(undefined4 *)(iVar1 + 8);
    local_4c = *(undefined4 *)(iVar1 + 0xc);
    local_3c = *(float *)(iVar1 + 0x10) + 8.0;
    local_48 = local_3c - 24.0;
    local_44 = local_50;
    local_40 = local_4c;
    UTIL_TraceLine(&local_44,&local_50,1,*(undefined4 *)(iVar1 + 0x208),local_38);
    FUN_10077580((int)local_38,*(int *)(this + 0x54));
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

/* 10013b60  CGib::StickyGibTouch  (470 bytes)
 * void StickyGibTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CGib::StickyGibTouch(class CBaseEntity *) */

void __thiscall CGib::StickyGibTouch(CGib *this,CBaseEntity *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  bool bVar7;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [36];
  float local_14;
  float local_10;
  float local_c;
  
                    /* 0x13b60  111  ?StickyGibTouch@CGib@@QAEXPAVCBaseEntity@@@Z */
  pcVar6 = s_worldspawn_1009d64c;
  *(code **)(this + 0x10) = CBaseEntity::SUB_Remove;
  *(float *)(*(int *)(this + 4) + 0x104) = gpGlobals->time + 10.0;
  pbVar3 = (byte *)(gpGlobals->pStringBase + **(int **)(param_1 + 4));
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_10013bca:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_10013bcf;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_10013bca;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_10013bcf:
  iVar2 = *(int *)(this + 4);
  if (iVar4 != 0) {
    *(float *)(iVar2 + 0x104) = gpGlobals->time;
    return;
  }
  local_50 = *(float *)(iVar2 + 0x20) * 32.0 + *(float *)(iVar2 + 8);
  local_4c = *(float *)(iVar2 + 0x24) * 32.0 + *(float *)(iVar2 + 0xc);
  local_48 = *(float *)(iVar2 + 0x28) * 32.0 + *(float *)(iVar2 + 0x10);
  local_40 = local_4c;
  local_3c = local_48;
  UTIL_TraceLine((float *)(iVar2 + 8),&local_50,1,*(undefined4 *)(iVar2 + 0x208),local_38);
  FUN_10077580((int)local_38,*(int *)(this + 0x54));
  local_50 = local_14 * -1.0;
  local_4c = local_10 * -1.0;
  iVar4 = *(int *)(this + 4);
  local_48 = local_c * -1.0;
  *(float *)(iVar4 + 0x20) = local_50;
  *(float *)(iVar4 + 0x24) = local_4c;
  *(float *)(iVar4 + 0x28) = local_48;
  local_40 = local_4c;
  local_3c = local_48;
  puVar5 = (undefined4 *)UTIL_VecToAngles(&local_44,*(int *)(this + 4) + 0x20);
  iVar4 = *(int *)(this + 4);
  *(undefined4 *)(iVar4 + 0x50) = *puVar5;
  *(undefined4 *)(iVar4 + 0x54) = puVar5[1];
  *(undefined4 *)(iVar4 + 0x58) = puVar5[2];
  iVar4 = *(int *)(this + 4);
  *(undefined4 *)(iVar4 + 0x20) = DAT_100ae498;
  *(undefined4 *)(iVar4 + 0x24) = DAT_100ae49c;
  *(undefined4 *)(iVar4 + 0x28) = DAT_100ae4a0;
  iVar4 = *(int *)(this + 4);
  *(undefined4 *)(iVar4 + 0x5c) = DAT_100ae498;
  *(undefined4 *)(iVar4 + 0x60) = DAT_100ae49c;
  *(undefined4 *)(iVar4 + 100) = DAT_100ae4a0;
  *(undefined4 *)(*(int *)(this + 4) + 0x108) = 0;
  return;
}

