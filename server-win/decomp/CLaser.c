/* mp.dll - CLaser (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001ac20  CLaser::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CLaser::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CLaser_1009df34,(int)param_1,0x1009dbb0,3);
  return;
}

/* 1001ac50  CLaser::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CLaser::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CLaser_1009df34,(int)param_1,&DAT_1009dbb0,3);
  return;
}

/* 1001ac80  CLaser::Spawn  (347 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CLaser::Spawn(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(param_1[1] + 0xb8) == 0) {
    param_1[4] = (int)CBaseEntity::SUB_Remove;
    return;
  }
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  (**(code **)(*param_1 + 0x20))();
  param_1[4] = (int)StrikeThink;
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 0x20000000;
  CBeam::PointsInit((CBeam *)param_1,(undefined4 *)(param_1[1] + 8),(undefined4 *)(param_1[1] + 8));
  if ((param_1[0x15] == 0) && (param_1[0x16] != 0)) {
    pvVar3 = CSprite::SpriteCreate
                       ((int)(gpGlobals->pStringBase + param_1[0x16]),(undefined4 *)(param_1[1] + 8)
                        ,1);
    param_1[0x15] = (int)pvVar3;
  }
  else {
    param_1[0x15] = 0;
  }
  iVar1 = param_1[0x15];
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1[1] + 0x15c);
    lVar4 = __ftol();
    lVar5 = __ftol();
    lVar6 = __ftol();
    lVar7 = __ftol();
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x148) = 3;
    *(float *)(*(int *)(iVar1 + 4) + 0x150) = (float)(int)lVar7;
    *(float *)(*(int *)(iVar1 + 4) + 0x154) = (float)(int)lVar6;
    *(float *)(*(int *)(iVar1 + 4) + 0x158) = (float)(int)lVar5;
    *(float *)(*(int *)(iVar1 + 4) + 0x14c) = (float)(int)lVar4;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x15c) = uVar2;
  }
  if ((*(int *)(param_1[1] + 0x1cc) != 0) && ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0)) {
    TurnOff((int)param_1);
    return;
  }
  TurnOn((int)param_1);
  return;
}

/* 1001ade0  CLaser::Precache  (76 bytes)
 * undefined Precache(int param_1)
 */
void __fastcall CLaser::Precache(int param_1)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnPrecacheModel)
                    (gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  *(int *)(*(int *)(param_1 + 4) + 0xb4) = iVar1;
  if (*(int *)(param_1 + 0x58) != 0) {
    (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + *(int *)(param_1 + 0x58));
  }
  return;
}

/* 1001ae30  CLaser::KeyValue  (749 bytes)
 * undefined KeyValue()
 */
void __thiscall CLaser::KeyValue(undefined *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined *this;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  longlong lVar10;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar7 = s_LaserTarget_1009df50;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001ae68:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001ae6d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001ae68;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001ae6d:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(*(int *)(param_1 + 4) + 0x1d4) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_width_1009df48;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001aec0:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001aec5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001aec0;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001aec5:
  if (iVar3 == 0) {
    atof(this,*(byte_conflict **)(param_2 + 8));
    lVar10 = __ftol();
    *(float *)(*(int *)(param_1 + 4) + 0x144) = (float)(int)lVar10;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_NoiseAmplitude_1009dea8;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001af24:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001af29;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001af24;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001af29:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x114) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_TextureScroll_1009de98;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001af7b:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001af80;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001af7b;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001af80:
  if (iVar3 == 0) {
    iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x134) = (float)iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_texture_1009de84;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001afda:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001afdf;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001afda;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001afdf:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(*(int *)(param_1 + 4) + 0xb8) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_EndSprite_1009df3c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001b032:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001b037;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001b032;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001b037:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x58) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_framestart_1009de78;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001b084:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001b089;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001b084;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001b089:
  if (iVar3 == 0) {
    iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x130) = (float)iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_damage_1009de68;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001b0e3:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001b0e8;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001b0e3;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001b0e8:
  if (iVar3 == 0) {
    fVar9 = atof(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x1e0) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 1001b120  CLaser::IsOn  (17 bytes)
 * bool IsOn(int param_1)
 * called by: CLaser::Use
 */
bool __fastcall CLaser::IsOn(int param_1)

{
  return (bool)('\x01' - ((*(uint *)(*(int *)(param_1 + 4) + 0x118) & 0x80) != 0));
}

/* 1001b140  CLaser::TurnOff  (44 bytes)
 * undefined TurnOff(int param_1)
 * called by: CFuncTankLaser::Activate, CFuncTankLaser::Think, CLaser::Spawn, CLaser::Use
 */
void __fastcall CLaser::TurnOff(int param_1)

{
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x104) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    CSprite::TurnOff(*(int *)(param_1 + 0x54));
    return;
  }
  return;
}

/* 1001b170  CLaser::TurnOn  (69 bytes)
 * undefined TurnOn(int param_1)
 * called by: CFuncTankLaser::Fire, CLaser::Spawn, CLaser::Use
 */
void __fastcall CLaser::TurnOn(int param_1)

{
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) & 0xffffff7f;
  if (*(int *)(param_1 + 0x54) != 0) {
    CSprite::TurnOn(*(int *)(param_1 + 0x54));
  }
  *(float *)(*(int *)(param_1 + 4) + 0x1e4) = gpGlobals->time;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time;
  return;
}

/* 1001b1c0  CLaser::Use  (54 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, int param_3)
 */
void __thiscall CLaser::Use(CLaser *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = IsOn((int)this);
  iVar2 = CBaseEntity::ShouldToggle(param_3,CONCAT31(extraout_var,bVar1));
  if (iVar2 != 0) {
    if (CONCAT31(extraout_var,bVar1) != 0) {
      TurnOff((int)this);
      return;
    }
    TurnOn((int)this);
  }
  return;
}

/* 1001b260  CLaser::StrikeThink  (134 bytes)
 * void StrikeThink(void)
 */
/* public: void __thiscall CLaser::StrikeThink(void) */

void __thiscall CLaser::StrikeThink(CLaser *this)

{
  int iVar1;
  undefined1 local_38 [56];
  
                    /* 0x1b260  113  ?StrikeThink@CLaser@@QAEXXZ */
  iVar1 = FUN_10019530(gpGlobals->pStringBase + this->pev->message);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
    *(undefined4 *)&this->field_0x5c = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)&this->field_0x60 = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)&this->field_0x64 = *(undefined4 *)(iVar1 + 0x10);
  }
  UTIL_TraceLine(this->pev->origin,&this->field_0x5c,0,0,local_38);
  FUN_1001b200(this,(int)local_38);
  this->pev->nextthink = gpGlobals->time + 0.1;
  return;
}

