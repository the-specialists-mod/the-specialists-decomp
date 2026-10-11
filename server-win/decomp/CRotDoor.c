/* mp.dll - CRotDoor (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10017ec0  CRotDoor::BreakableRespawn  (346 bytes)
 * undefined BreakableRespawn()
 */
void __thiscall CRotDoor::BreakableRespawn(int *param_1,char param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  uint *puVar4;
  int iStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = param_1[1];
  if (((*(int *)(iVar3 + 0x170) == 2) || (*(int *)(iVar3 + 0x118) == 0x80)) || (param_2 != '\0')) {
    fStack_c = *(float *)(iVar3 + 0xc4);
    uStack_8 = *(undefined4 *)(iVar3 + 200);
    uStack_4 = *(undefined4 *)(iVar3 + 0xcc);
    fStack_18 = *(float *)(iVar3 + 0xd0);
    uStack_14 = *(undefined4 *)(iVar3 + 0xd4);
    uStack_10 = *(undefined4 *)(iVar3 + 0xd8);
    iVar3 = UTIL_EntitiesInBox(&iStack_1c,1,&fStack_c,&fStack_18,0x2008);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1[1] + 0x170) = 0;
      *(undefined4 *)(param_1[1] + 0x118) = 0;
      iVar3 = param_1[1];
      *(int *)(iVar3 + 0x50) = param_1[0x47];
      *(int *)(iVar3 + 0x54) = param_1[0x48];
      *(int *)(iVar3 + 0x58) = param_1[0x49];
      iVar3 = param_1[1];
      *(undefined4 *)(iVar3 + 0x5c) = DAT_100ae498;
      *(undefined4 *)(iVar3 + 0x60) = DAT_100ae49c;
      *(undefined4 *)(iVar3 + 100) = DAT_100ae4a0;
      iVar3 = param_1[1];
      *(undefined4 *)(iVar3 + 0x20) = DAT_100ae498;
      *(undefined4 *)(iVar3 + 0x24) = DAT_100ae49c;
      *(undefined4 *)(iVar3 + 0x28) = DAT_100ae4a0;
      param_1[5] = 0;
      param_1[4] = 0;
      (**(code **)(*param_1 + 0x1c))();
    }
    else {
      puVar4 = (uint *)(param_1 + 0x3c);
      bVar2 = FUN_1000e440(puVar4);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        fVar1 = gpGlobals->time;
        iVar3 = EHANDLE::operator->(puVar4);
        *(float *)(*(int *)(iVar3 + 4) + 0x104) = fVar1 + 5.0;
        iVar3 = EHANDLE::operator->(puVar4);
        *(code **)(iVar3 + 0x10) = CInfoBreakable::RespawnThink;
        return;
      }
    }
  }
  return;
}

/* 10018020  CRotDoor::Spawn  (847 bytes)
 * undefined Spawn()
 */
void __fastcall CRotDoor::Spawn(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  EHANDLE *this;
  float fVar3;
  bool bVar4;
  undefined3 extraout_var;
  undefined4 *puVar5;
  int iVar6;
  undefined3 extraout_var_00;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar6 = param_1[1];
  param_1[0x44] = *(int *)(iVar6 + 8);
  param_1[0x45] = *(int *)(iVar6 + 0xc);
  param_1[0x46] = *(int *)(iVar6 + 0x10);
  param_1[0x47] = *(int *)(iVar6 + 0x50);
  param_1[0x48] = *(int *)(iVar6 + 0x54);
  param_1[0x49] = *(int *)(iVar6 + 0x58);
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  if ((float)param_1[0x41] <= 0.0) {
    *(undefined4 *)(iVar6 + 0x16c) = 0;
  }
  else {
    *(undefined4 *)(iVar6 + 0x16c) = 0x3f800000;
  }
  (**(code **)(*param_1 + 0x20))();
  CBaseToggle::AxisDir(param_1[1]);
  iVar6 = param_1[1];
  if ((*(byte *)(iVar6 + 0x1a0) & 2) != 0) {
    *(float *)(iVar6 + 0x44) = *(float *)(iVar6 + 0x44) * -1.0;
    *(float *)(iVar6 + 0x48) = *(float *)(iVar6 + 0x48) * -1.0;
    *(float *)(iVar6 + 0x4c) = *(float *)(iVar6 + 0x4c) * -1.0;
  }
  iVar6 = param_1[1];
  pfVar1 = (float *)(param_1 + 0x29);
  fVar3 = (float)param_1[0x1e];
  *pfVar1 = *(float *)(iVar6 + 0x50);
  param_1[0x2a] = *(int *)(iVar6 + 0x54);
  pfVar2 = (float *)(param_1 + 0x2c);
  param_1[0x2b] = *(int *)(iVar6 + 0x58);
  fStack_c = fVar3 * *(float *)(iVar6 + 0x44);
  fStack_8 = fVar3 * *(float *)(iVar6 + 0x48) + *(float *)(iVar6 + 0x54);
  fStack_4 = fVar3 * *(float *)(iVar6 + 0x4c) + *(float *)(iVar6 + 0x58);
  *pfVar2 = fStack_c + *(float *)(iVar6 + 0x50);
  param_1[0x2d] = (int)fStack_8;
  param_1[0x2e] = (int)fStack_4;
  if ((*(byte *)(iVar6 + 0x1a0) & 8) == 0) {
    *(undefined4 *)(iVar6 + 0x10c) = 4;
  }
  else {
    *(undefined4 *)(iVar6 + 0x10c) = 0;
  }
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  UTIL_SetOrigin(param_1[1],param_1[1] + 8);
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  if (*(float *)(param_1[1] + 0x1f8) == 0.0) {
    *(undefined4 *)(param_1[1] + 0x1f8) = 0x42c80000;
  }
  iVar6 = param_1[1];
  if ((*(byte *)(iVar6 + 0x1a0) & 1) != 0) {
    *(float *)(iVar6 + 0x50) = *pfVar2;
    *(int *)(iVar6 + 0x54) = param_1[0x2d];
    *(int *)(iVar6 + 0x58) = param_1[0x2e];
    *pfVar2 = *pfVar1;
    param_1[0x2d] = param_1[0x2a];
    *pfVar1 = *pfVar1;
    param_1[0x2e] = param_1[0x2b];
    param_1[0x2a] = param_1[0x2a];
    param_1[0x2b] = param_1[0x2b];
    iVar6 = param_1[1];
    fStack_8 = *(float *)(iVar6 + 0x48) * -1.0;
    fStack_4 = *(float *)(iVar6 + 0x4c) * -1.0;
    *(float *)(iVar6 + 0x44) = *(float *)(iVar6 + 0x44) * -1.0;
    *(float *)(iVar6 + 0x48) = fStack_8;
    *(float *)(iVar6 + 0x4c) = fStack_4;
  }
  param_1[0x1c] = 1;
  if ((*(uint *)(param_1[1] + 0x1a0) & 0x100) == 0) {
    param_1[5] = (int)CBaseDoor::DoorTouch;
  }
  else {
    param_1[5] = 0;
  }
  if (0.0 <= (float)param_1[0x3e]) {
    this = (EHANDLE *)(param_1 + 0x3c);
    bVar4 = FUN_1000e440((uint *)this);
    if (CONCAT31(extraout_var,bVar4) == 0) {
      iVar6 = param_1[1];
      uVar9 = *(undefined4 *)(iVar6 + 0x208);
      puVar8 = (undefined4 *)(iVar6 + 0x50);
      puVar5 = (undefined4 *)VecBModelOrigin(&fStack_c,iVar6);
      iVar6 = CBaseEntity::Create(0x100a36bc,puVar5,puVar8,uVar9);
      EHANDLE::operator=(this,iVar6);
    }
    bVar4 = FUN_1000e440((uint *)this);
    if (CONCAT31(extraout_var_00,bVar4) != 0) {
      uVar7 = EHANDLE::Get((uint *)this);
      if (uVar7 != 0) {
        EHANDLE::operator=((EHANDLE *)(*(int *)(uVar7 + 0x7c) + 0x54),(int)param_1);
        return;
      }
      EHANDLE::operator=((EHANDLE *)0x54,(int)param_1);
    }
  }
  return;
}

/* 10018370  CRotDoor::SetToggleState  (105 bytes)
 * undefined SetToggleState()
 */
void __thiscall CRotDoor::SetToggleState(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0xac);
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  return;
}

