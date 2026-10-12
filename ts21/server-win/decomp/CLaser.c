/* mp.dll - CLaser (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10017c50  CLaser::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CLaser::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CLaser_10092e3c,(int)param_1,0x10092ab8,3);
  return;
}

/* 10017c80  CLaser::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CLaser::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CLaser_10092e3c,(int)param_1,0x10092ab8,3);
  return;
}

/* 10017cb0  CLaser::Spawn  (345 bytes)
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
  (**(code **)(*param_1 + 0x10))();
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

/* 10017e10  CLaser::Precache  (76 bytes)
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

/* 10017e60  CLaser::KeyValue  (477 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CLaser::KeyValue(CLaser *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  float10 fVar8;
  longlong lVar9;
  
  pcVar5 = *(char **)(param_1 + 4);
  iVar1 = 0xc;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_LaserTarget_10092e58;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->message = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0x6;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_width_10092e50;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    lVar9 = __ftol();
    this->pev->scale = (float)(int)lVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pvVar3 = (void *)0xf;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_NoiseAmplitude_10092db0;
  do {
    if (pvVar3 == (void *)0x0) break;
    pvVar3 = (void *)((int)pvVar3 + -1);
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    iVar1 = FUN_1006e1dd(pvVar3,*(byte_conflict **)(param_1 + 8));
    this->pev->body = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pvVar3 = (void *)0xe;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_TextureScroll_10092da0;
  do {
    if (pvVar3 == (void *)0x0) break;
    pvVar3 = (void *)((int)pvVar3 + -1);
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    iVar1 = FUN_1006e1dd(pvVar3,*(byte_conflict **)(param_1 + 8));
    this->pev->animtime = (float)iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 8;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_texture_10092d8c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->model = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 10;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_EndSprite_10092e44;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x58 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pvVar3 = (void *)0xb;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_framestart_10092d80;
  do {
    if (pvVar3 == (void *)0x0) break;
    pvVar3 = (void *)((int)pvVar3 + -1);
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    iVar1 = FUN_1006e1dd(pvVar3,*(byte_conflict **)(param_1 + 8));
    this->pev->frame = (float)iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000007;
  bVar7 = true;
  pcVar4 = s_damage_10092d70;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar7 = *pcVar5 == *pcVar4;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar7);
  if (bVar7) {
    fVar8 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    this->pev->dmg = (float)fVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10018040  CLaser::IsOn  (17 bytes)
 * bool IsOn(int param_1)
 * called by: CLaser::Use
 */
bool __fastcall CLaser::IsOn(int param_1)

{
  return (bool)('\x01' - ((*(byte *)(*(int *)(param_1 + 4) + 0x118) & 0x80) != 0));
}

/* 10018060  CLaser::TurnOff  (44 bytes)
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

/* 10018090  CLaser::TurnOn  (69 bytes)
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

/* 100180e0  CLaser::Use  (52 bytes)
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

/* 10018180  CLaser::StrikeThink  (134 bytes)
 * void StrikeThink(void)
 */
/* public: void __thiscall CLaser::StrikeThink(void) */

void __thiscall CLaser::StrikeThink(CLaser *this)

{
  int iVar1;
  undefined1 local_38 [56];
  
                    /* 0x18180  106  ?StrikeThink@CLaser@@QAEXXZ */
  iVar1 = FUN_10016810(gpGlobals->pStringBase + this->pev->message);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
    *(undefined4 *)&this->field_0x5c = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)&this->field_0x60 = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)&this->field_0x64 = *(undefined4 *)(iVar1 + 0x10);
  }
  FUN_10067850();
  FUN_10018120(this,(int)local_38);
  this->pev->nextthink = gpGlobals->time + 0.1;
  return;
}

