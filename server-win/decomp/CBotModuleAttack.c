/* mp.dll - CBotModuleAttack (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006c3c0  CBotModuleAttack::ComputeAimOffset  (348 bytes)
 * undefined ComputeAimOffset()
 * called by: CBotModuleAttack::Think
 */
/* skill-scaled +-8 jitter, head/body height */

void __thiscall CBotModuleAttack::ComputeAimOffset(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float fStack_1c;
  
  iVar1 = *(int *)((int)param_3 + 0x1938);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x28) = DAT_100ae498;
    *(undefined4 *)(param_1 + 0x2c) = DAT_100ae49c;
    *(undefined4 *)(param_1 + 0x30) = DAT_100ae4a0;
    return;
  }
  if (((*(uint *)(*(int *)(iVar1 + 4) + 0x250) & 0x10c30) == 0) &&
     ((*(uint *)(*(int *)(iVar1 + 4) + 0x1a4) & 0x4000) == 0)) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,100);
    if ((float)iVar2 <= 50.0 / *(float *)((int)param_3 + 0x1a74)) {
      fVar3 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,32.0);
      fStack_1c = (float)fVar3;
    }
    else {
      fStack_1c = *(float *)(*(int *)(iVar1 + 4) + 0x17c);
    }
  }
  else {
    fStack_1c = 0.0;
  }
  if (*(float *)((int)param_3 + 0x1a74) <= 0.5) {
    param_3 = 0.5;
  }
  else {
    param_3 = *(float *)((int)param_3 + 0x1a74);
  }
  fVar3 = (float10)(*g_engfuncs.pfnRandomFloat)(-8.0,8.0);
  fVar4 = (float10)(*g_engfuncs.pfnRandomFloat)(-8.0,8.0);
  fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(-8.0,8.0);
  *(float *)(param_1 + 0x28) = (float)fVar3 / param_3;
  *(float *)(param_1 + 0x2c) = (float)fVar4 / param_3;
  *(float *)(param_1 + 0x30) = (float)((fVar5 + (float10)fStack_1c) / (float10)param_3);
  return;
}

/* 1006c520  CBotModuleAttack::Think  (1692 bytes)
 * undefined Think()
 */
/* module bit 4: tracking, target, cover goal, firing, close melee */

void __thiscall CBotModuleAttack::Think(int param_1,int *param_2,CBotBrain *param_3,char param_4)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  Vector *this;
  float10 fVar9;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float unaff_retaddr;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_54 [8];
  float fStack_4c;
  float fStack_48;
  Vector VStack_44;
  float fStack_38;
  Vector VStack_34;
  Vector VStack_28;
  undefined1 auStack_1c [8];
  float fStack_14;
  undefined1 uStack_10;
  Vector VStack_c;
  
  piVar1 = *(int **)(param_3 + 0x1938);
  if ((piVar1 != (int *)0x0) && (cVar3 = CBotBrain::NumVisibleEnemies((int)param_3), cVar3 != '\0'))
  {
    iVar4 = piVar1[1];
    fVar12 = *(float *)(iVar4 + 8);
    fVar11 = *(float *)(param_1 + 0x34);
    VStack_44.x = *(float *)(param_1 + 0x2c) + *(float *)(iVar4 + 0xc) + *(float *)(param_1 + 0x38);
    VStack_44.y = *(float *)(param_1 + 0x30) + *(float *)(iVar4 + 0x10) + *(float *)(param_1 + 0x3c)
    ;
    fVar10 = gpGlobals->frametime * 5.0;
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    auStack_54._0_4_ = fVar10 * *(float *)(param_1 + 0x34);
    auStack_54._4_4_ = *(float *)(param_1 + 0x38) - fVar10 * *(float *)(param_1 + 0x38);
    fStack_4c = *(float *)(param_1 + 0x3c) - fVar10 * *(float *)(param_1 + 0x3c);
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) - (float)auStack_54._0_4_;
    *(undefined4 *)(param_1 + 0x38) = auStack_54._4_4_;
    *(float *)(param_1 + 0x3c) = fStack_4c;
    CBotBrain::LookAt(param_3,param_2,*(float *)(param_1 + 0x28) + fVar12 + fVar11,VStack_44.x);
  }
  if (gpGlobals->time < *(float *)(param_1 + 4)) {
    return;
  }
  fVar9 = (float10)(**(code **)(*param_2 + 8))();
  if ((float10)1.0 <= ((float10)0.1 / fVar9) / (float10)*(float *)(param_3 + 0x1a74)) {
    fVar9 = (float10)1.0;
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 8))();
    fVar9 = ((float10)0.1 / fVar9) / (float10)*(float *)(param_3 + 0x1a74);
  }
  *(float *)(param_1 + 4) = (float)((float10)gpGlobals->time + fVar9);
  SelectEnemy(param_2,param_3);
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar4 = piVar1[1];
  iVar6 = param_2[1];
  fVar12 = *(float *)(iVar4 + 8) - *(float *)(iVar6 + 8);
  fVar11 = *(float *)(iVar4 + 0xc) - *(float *)(iVar6 + 0xc);
  fVar10 = *(float *)(iVar4 + 0x10) - *(float *)(iVar6 + 0x10);
  VStack_c.z = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12);
  cVar3 = CBotBrain::NumVisibleEnemies((int)param_3);
  if (cVar3 == '\0') {
    CBotBrain::DisableModules(param_3,4);
    iVar4 = (**(code **)(*piVar1 + 0xac))();
    if (iVar4 != 0) {
      iVar4 = piVar1[1];
      *(undefined4 *)(param_3 + 0x1a0c) = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)(param_3 + 0x1a10) = *(undefined4 *)(iVar4 + 0xc);
      uVar2 = *(undefined4 *)(iVar4 + 0x10);
      *(undefined4 *)(param_3 + 0x1938) = 0;
      *(undefined4 *)(param_3 + 0x1a14) = uVar2;
    }
    ReleaseAttack(param_2,param_3);
    return;
  }
  ComputeAimOffset(param_2,param_3);
  iVar4 = BotHoldingMelee(param_2,param_3);
  uStack_10 = iVar4 != 0;
  if ((bool)uStack_10) {
    param_3[0x1934] = (CBotBrain)0x1;
    iVar6 = (*g_engfuncs.pfnRandomLong)(0x1e,0x3c);
    iVar4 = piVar1[1];
    if ((float)iVar6 <= (float)param_2[0x1d8]) {
      *(undefined4 *)(param_3 + 0x1928) = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)(param_3 + 0x192c) = *(undefined4 *)(iVar4 + 0xc);
      *(undefined4 *)(param_3 + 0x1930) = *(undefined4 *)(iVar4 + 0x10);
    }
    else {
      auStack_54._4_4_ = *(float *)(param_2[1] + 0x10) - *(float *)(iVar4 + 0x10);
      (*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
      (*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
      fVar9 = SQRT((float10)(float)auStack_54._0_4_ * (float10)(float)auStack_54._0_4_ +
                   extraout_ST0_00 * extraout_ST0_00 + (float10)VStack_44.y * (float10)VStack_44.y);
      if (fVar9 == (float10)0.0) {
        fVar12 = 1.0;
        fVar11 = 0.0;
        fVar10 = 0.0;
        this = (Vector *)(auStack_1c + 4);
      }
      else {
        fVar9 = (float10)1.0 / fVar9;
        fVar12 = (float)((float10)VStack_44.y * fVar9);
        fVar11 = (float)(fVar9 * extraout_ST0_00);
        this = &VStack_c;
        fVar10 = (float)(fVar9 * (float10)(float)auStack_54._0_4_);
      }
      puVar7 = (undefined4 *)Vector::Vector(this,fVar10,fVar11,fVar12);
      Vector::Vector((Vector *)auStack_54,puVar7);
      iVar4 = (*g_engfuncs.pfnRandomLong)(0x80,0x100);
      fStack_38 = (float)iVar4;
      VStack_44.y = fStack_4c * fStack_38;
      VStack_44.z = fStack_48 * fStack_38;
      fStack_38 = VStack_44.x * fStack_38;
      Vector::Vector(&VStack_34,&VStack_44.y);
      iVar4 = piVar1[1];
      VStack_28.x = VStack_34.x + *(float *)(iVar4 + 8);
      VStack_28.y = VStack_34.y + *(float *)(iVar4 + 0xc);
      VStack_28.z = VStack_34.z + *(float *)(iVar4 + 0x10);
      Vector::Vector((Vector *)auStack_1c,&VStack_28.x);
      *(undefined4 *)(param_3 + 0x1928) = auStack_1c._0_4_;
      *(undefined4 *)(param_3 + 0x192c) = auStack_1c._4_4_;
      *(float *)(param_3 + 0x1930) = fStack_14;
    }
    uVar8 = 1;
LAB_1006c996:
    CBotBrain::EnableModules(param_3,uVar8);
  }
  else {
    pfVar5 = (float *)FindCoverSpot(&VStack_44.z,param_2,param_3,piVar1[1] + 8,piVar1);
    fStack_4c = *pfVar5;
    fStack_48 = pfVar5[1];
    VStack_44.x = pfVar5[2];
    *(float *)(param_3 + 0x1928) = fStack_4c;
    param_3[0x1934] = (CBotBrain)0x1;
    *(float *)(param_3 + 0x192c) = fStack_48;
    *(float *)(param_3 + 0x1930) = VStack_44.x;
    CBotBrain::EnableModules(param_3,1);
    if (*(float *)(param_1 + 0x10) < gpGlobals->time) {
      auStack_54._0_4_ = (*g_engfuncs.pfnRandomLong)(5,10);
      *(float *)(param_1 + 0x10) = (float)(int)auStack_54._0_4_ + gpGlobals->time;
      iVar4 = (*g_engfuncs.pfnRandomLong)(0,100);
      if (iVar4 < 0x47) {
        uVar8 = 8;
        goto LAB_1006c996;
      }
      (*g_engfuncs.pfnRandomFloat)(0.9,1.6);
      CBotBrain::PressButtons(param_3,4,(float)extraout_ST0);
    }
  }
  iVar4 = piVar1[1];
  auStack_1c._0_4_ = *(float *)(iVar4 + 8) + *(float *)(param_1 + 0x28);
  auStack_1c._4_4_ = *(float *)(param_1 + 0x2c) + *(float *)(iVar4 + 0xc);
  fStack_14 = *(float *)(param_1 + 0x30) + *(float *)(iVar4 + 0x10);
  Vector::Vector(&VStack_28,(undefined4 *)auStack_1c);
  pfVar5 = (float *)(**(code **)(*param_2 + 0x160))(&VStack_c.z);
  fStack_38 = VStack_34.z - *pfVar5;
  VStack_34.x = VStack_28.x - pfVar5[1];
  VStack_34.y = VStack_28.y - pfVar5[2];
  Vector::Vector(&VStack_44,&fStack_38);
  auStack_54._0_4_ = VStack_44.z;
  fVar12 = VStack_44.x;
  fVar11 = VStack_44.y;
  UTIL_MakeVectors(param_2[1] + 0x74);
  fVar9 = Vector::Length((float *)&stack0xffffffa4);
  if (fVar9 == (float10)0.0) {
    VStack_28.z = 0.0;
    auStack_1c._0_4_ = 0.0;
    auStack_1c._4_4_ = 1.0;
    pfVar5 = &VStack_28.z;
  }
  else {
    fVar9 = (float10)1.0 / fVar9;
    pfVar5 = (float *)Vector::Vector((Vector *)&VStack_c.y,(float)(fVar9 * (float10)fVar12),
                                     (float)((float10)fVar11 * fVar9),
                                     (float)((float10)(float)auStack_54._0_4_ * fVar9));
  }
  Vector::Vector((Vector *)(auStack_54 + 4),pfVar5);
  if ((0.9 < ABS((float)auStack_54._4_4_ * gpGlobals->v_forward[0] +
                 fStack_48 * gpGlobals->v_forward[2] + fStack_4c * gpGlobals->v_forward[1])) ||
     (param_4 != '\0')) {
    FireWeapon(param_2,param_3,param_3);
    if ((char)param_2 != '\0') goto LAB_1006cb9c;
  }
  else {
    ReleaseAttack(param_2,param_3);
  }
  if ((128.0 <= unaff_retaddr) || (gpGlobals->time <= *(float *)(param_1 + 0x18)))
  goto LAB_1006cb9c;
  if (96.0 <= unaff_retaddr) {
LAB_1006cb41:
    uVar8 = 2;
  }
  else {
    cVar3 = BotCanStockHit(param_2,param_3);
    uVar8 = 0x40;
    if (cVar3 == '\0') goto LAB_1006cb41;
  }
  CBotBrain::PressButtons(param_3,uVar8,0.6);
  fVar9 = (float10)(**(code **)(*param_2 + 8))();
  if ((float10)10.0 <= ((float10)1.5 / fVar9) / (float10)*(float *)(param_3 + 0x1a74)) {
    fVar9 = (float10)10.0;
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 8))();
    fVar9 = ((float10)1.5 / fVar9) / (float10)*(float *)(param_3 + 0x1a74);
  }
  *(float *)(param_1 + 0x18) = (float)((float10)gpGlobals->time + fVar9);
LAB_1006cb9c:
  if (param_2[0x1c5] != 0) {
    CBotBrain::EnableModules(param_3,0x200);
  }
  return;
}

/* 1006cbc0  CBotModuleAttack::FindCoverSpot  (755 bytes)
 * undefined FindCoverSpot()
 * called by: CBotModuleAttack::Think
 */
/* 8 probes x 512u from random 45deg start; hidden spot or farthest visible */

void __thiscall
CBotModuleAttack::FindCoverSpot
          (int param_1,undefined4 *param_2,int *param_3,int param_4,undefined4 *param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  longlong lVar6;
  int iStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_58;
  undefined4 uStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  undefined1 auStack_38 [16];
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (gpGlobals->time < *(float *)(param_1 + 0x14)) {
    *param_2 = *(undefined4 *)(param_1 + 0x1c);
    param_2[1] = *(undefined4 *)(param_1 + 0x20);
    param_2[2] = *(undefined4 *)(param_1 + 0x24);
    return;
  }
  fVar5 = (float10)(**(code **)(*param_3 + 8))();
  if ((float10)7.0 <= ((float10)3.0 / fVar5) / (float10)*(float *)(param_4 + 0x1a74)) {
    fVar5 = (float10)7.0;
  }
  else {
    fVar5 = (float10)(**(code **)(*param_3 + 8))();
    fVar5 = ((float10)3.0 / fVar5) / (float10)*(float *)(param_4 + 0x1a74);
  }
  *(float *)(param_1 + 0x14) = (float)((float10)gpGlobals->time + fVar5);
  iStack_7c = (*g_engfuncs.pfnRandomLong)(0,8);
  iVar3 = 1;
  iStack_7c = iStack_7c * 0x2d;
  iVar4 = 0;
  uStack_68 = *param_5;
  uStack_64 = param_5[1];
  uStack_60 = param_5[2];
  do {
    iVar1 = param_3[1];
    fVar5 = (float10)fcos((float10)iStack_7c * (float10)0.017453292519943295);
    fStack_44 = (float)(fVar5 * (float10)512.0);
    fVar5 = (float10)fsin((float10)iStack_7c * (float10)0.017453292519943295);
    fStack_50 = fStack_44 + *(float *)(iVar1 + 8);
    fStack_58 = (float)(fVar5 * (float10)512.0 + (float10)*(float *)(iVar1 + 0xc));
    uStack_54 = *(undefined4 *)(iVar1 + 0x10);
    fStack_4c = fStack_58;
    uStack_48 = uStack_54;
    UTIL_TraceLine((float *)(iVar1 + 8),&fStack_50,1,*(undefined4 *)(iVar1 + 0x208),auStack_38);
    uStack_74 = uStack_24;
    uStack_70 = uStack_20;
    uStack_6c = uStack_1c;
    if (param_6 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(param_6 + 4) + 0x208);
    }
    UTIL_TraceLine(param_5,&uStack_74,1,uVar2,auStack_38);
    iVar1 = param_3[1];
    if (1.0 <= fStack_28) {
      UTIL_TraceLine(iVar1 + 8,&uStack_74,1,*(undefined4 *)(iVar1 + 0x208),auStack_38);
      if (1.0 <= fStack_28) {
        lVar6 = __ftol();
        if (iVar4 < (int)lVar6) {
          uStack_68 = uStack_74;
          uStack_64 = uStack_70;
          uStack_60 = uStack_6c;
          iVar4 = (int)lVar6;
        }
      }
    }
    else {
      UTIL_TraceLine(iVar1 + 8,&uStack_74,1,*(undefined4 *)(iVar1 + 0x208),auStack_38);
      if (1.0 <= fStack_28) {
        *(undefined4 *)(param_1 + 0x1c) = uStack_74;
        *(undefined4 *)(param_1 + 0x20) = uStack_70;
        *(undefined4 *)(param_1 + 0x24) = uStack_6c;
        *param_2 = uStack_74;
        param_2[1] = uStack_70;
        param_2[2] = uStack_6c;
        return;
      }
    }
    iStack_7c = iStack_7c + 0x2d;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 9);
  *(undefined4 *)(param_1 + 0x1c) = *param_5;
  *(undefined4 *)(param_1 + 0x20) = param_5[1];
  *(undefined4 *)(param_1 + 0x24) = param_5[2];
  *param_2 = uStack_68;
  param_2[1] = uStack_64;
  param_2[2] = uStack_60;
  return;
}

/* 1006cec0  CBotModuleAttack::SelectEnemy  (205 bytes)
 * undefined SelectEnemy()
 * called by: CBotModuleAttack::Think
 */
/* nearest visible enemy, every RandomFloat(1,3) s */

void __thiscall CBotModuleAttack::SelectEnemy(int param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  float10 fVar10;
  
  iVar7 = (int)param_3;
  if ((*(int *)((int)param_3 + 0x1938) == 0) || (*(float *)(param_1 + 0xc) <= gpGlobals->time)) {
    fVar10 = (float10)(*g_engfuncs.pfnRandomFloat)(1.0,3.0);
    param_3 = 9999.0;
    cVar9 = '\0';
    *(float *)(param_1 + 0xc) = (float)(fVar10 + (float10)gpGlobals->time);
    cVar8 = CBotBrain::NumVisibleEnemies(iVar7);
    if ('\0' < cVar8) {
      do {
        iVar1 = *(int *)(iVar7 + 0x1988 + cVar9 * 4);
        if (iVar1 != 0) {
          iVar2 = *(int *)(iVar1 + 4);
          iVar3 = *(int *)(param_2 + 4);
          fVar4 = *(float *)(iVar2 + 8) - *(float *)(iVar3 + 8);
          fVar6 = *(float *)(iVar2 + 0xc) - *(float *)(iVar3 + 0xc);
          fVar5 = *(float *)(iVar2 + 0x10) - *(float *)(iVar3 + 0x10);
          fVar4 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5);
          if (fVar4 < param_3) {
            *(int *)(iVar7 + 0x1938) = iVar1;
            param_3 = fVar4;
          }
        }
        cVar9 = cVar9 + '\x01';
        cVar8 = CBotBrain::NumVisibleEnemies(iVar7);
      } while (cVar9 < cVar8);
    }
  }
  return;
}

/* 1006d010  CBotModuleAttack::FireWeapon  (1315 bytes)
 * undefined FireWeapon()
 * called by: CBotModuleAttack::Think
 */
/* per weapon kind attack/reload/switch decisions */

void __thiscall
CBotModuleAttack::FireWeapon(int param_1,CBasePlayer *param_2,CBotBrain *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  CTSGun *this;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  uint uVar7;
  float fVar8;
  
  if (((gpGlobals->time < *(float *)(param_1 + 8)) ||
      (this = *(CTSGun **)&param_2->field_0x9fc, this == (CTSGun *)0x0)) ||
     (*(int *)&this->field_0x78 != 0x10)) {
    return;
  }
  iVar4 = *(int *)&this->field_0xbc;
  if (iVar4 != 0) {
    cVar3 = *(char *)(*(int *)&this->field_0xc0 + 0x348);
    if (cVar3 == '\x02') {
      CBotBrain::PressButtons(param_3,1,0.1);
      *(float *)(param_1 + 8) = gpGlobals->time + 1.0;
      return;
    }
    if (cVar3 == '\n') {
      if (param_4 < 128.0) {
        CBotBrain::PressButtons(param_3,1,0.5);
        iVar4 = (*g_engfuncs.pfnRandomLong)(0,100);
        if (0x50 < iVar4) {
          CBotBrain::PressButtons(param_3,4,0.1);
        }
      }
      *(float *)(param_1 + 8) = gpGlobals->time + 0.5;
      return;
    }
    if (cVar3 == '\x03') {
      if ((*(int *)(iVar4 + 4) < 2) ||
         ((iVar4 = (*g_engfuncs.pfnRandomLong)(0,100), iVar4 < 0x51 && (param_4 <= 256.0)))) {
        if (param_4 < 128.0) {
          CBotBrain::PressButtons(param_3,1,0.1);
        }
      }
      else {
        CBotBrain::PressButtons(param_3,0x800,0.1);
        CBotBrain::PressButtons(param_3,1,0.0);
        param_4 = param_4 * 0.00052631577;
        if (*(int *)(param_3 + 0x1938) != 0) {
          iVar4 = *(int *)(*(int *)(param_3 + 0x1938) + 4);
          fVar1 = *(float *)(iVar4 + 0x20);
          fVar8 = *(float *)(iVar4 + 0x24);
          fVar2 = *(float *)(iVar4 + 0x28);
          fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(0.75,1.25);
          *(float *)(param_1 + 0x34) = (float)((float10)(param_4 * fVar1) * fVar5);
          *(float *)(param_1 + 0x38) = (float)(fVar5 * (float10)(param_4 * fVar8));
          *(float *)(param_1 + 0x3c) = (float)((float10)(param_4 * fVar2) * fVar5);
        }
        fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(0.75,1.25);
        *(float *)(param_1 + 0x3c) = (float)(fVar5 * (float10)(param_4 * 360.0));
      }
      *(float *)(param_1 + 8) = gpGlobals->time + 0.3;
      return;
    }
    if (*(int *)(iVar4 + 4) < 1) {
      CBotBrain::PressButtons(param_3,1,0.0);
      if (*(int *)(&this->field_0xc4 + (uint)*(byte *)(*(int *)&this->field_0xc0 + 8) * 4) < 1) {
        iVar4 = (*g_engfuncs.pfnRandomLong)(0,100);
        if (iVar4 < 0x33) {
          CBasePlayer::DropWeapon(param_2,0xffffffff,0.0);
        }
        else {
          CTSGun::GetBetterWeapon(this,*(int *)&this->field_0xb8);
        }
      }
      else {
        CBotBrain::PressButtons(param_3,0x2000,0.1);
      }
      *(float *)(param_1 + 8) = gpGlobals->time + 1.0;
      return;
    }
    if ((*(char *)(iVar4 + 2) != '\0') && (*(char *)(iVar4 + 2) != '\x03')) {
      fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(0.1,0.3);
      *(float *)(param_1 + 8) = (float)fVar5;
      CBotBrain::PressButtons(param_3,1,(float)fVar5);
      *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + gpGlobals->time;
      return;
    }
    fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(0.3,1.0);
    *(float *)(param_1 + 8) = (float)fVar5;
    CBotBrain::PressButtons(param_3,1,(float)fVar5);
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + gpGlobals->time + 0.3;
    return;
  }
  if (128.0 <= param_4) {
    if ((param_4 <= 256.0) && (iVar4 = (*g_engfuncs.pfnRandomLong)(0,100), iVar4 < 0x5b)) {
      *(float *)(param_1 + 8) = gpGlobals->time + 0.5;
      return;
    }
    CTSGun::GetBetterWeapon(this,0);
    fVar5 = (float10)(*param_2->vtable[2])();
    if ((((float10)0.3 / fVar5) / (float10)*(float *)(param_3 + 0x1a74) <= (float10)0.3) ||
       (fVar5 = (float10)(*param_2->vtable[2])(),
       ((float10)0.3 / fVar5) / (float10)*(float *)(param_3 + 0x1a74) < (float10)3.0)) {
      fVar5 = (float10)(*param_2->vtable[2])();
      if (((float10)0.3 / fVar5) / (float10)*(float *)(param_3 + 0x1a74) <= (float10)0.3) {
        fVar5 = (float10)0.3;
      }
      else {
        fVar5 = (float10)(*param_2->vtable[2])();
        fVar5 = ((float10)0.3 / fVar5) / (float10)*(float *)(param_3 + 0x1a74);
      }
    }
    else {
      fVar5 = (float10)3.0;
    }
    *(float *)(param_1 + 8) = (float)((float10)gpGlobals->time + fVar5);
    return;
  }
  fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(0.1,0.9);
  if (1.5 <= *(float *)(param_3 + 0x1a74)) {
    fVar6 = (float10)1.5;
  }
  else {
    fVar6 = (float10)*(float *)(param_3 + 0x1a74);
  }
  fVar1 = (float)(fVar6 * fVar5);
  iVar4 = (*g_engfuncs.pfnRandomLong)(0,100);
  if (iVar4 < 0x51) {
    CBotBrain::PressButtons(param_3,0x800,fVar1);
    CBotBrain::PressButtons(param_3,1,0.0);
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,100);
    if (iVar4 < 0x33) goto LAB_1006d437;
    CBotBrain::PressButtons(param_3,2,0.1);
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,100);
    if (iVar4 < 0x5b) goto LAB_1006d437;
    fVar8 = 0.1;
    uVar7 = 4;
  }
  else {
    CBotBrain::PressButtons(param_3,1,fVar1);
    fVar8 = 0.0;
    uVar7 = 0x800;
  }
  CBotBrain::PressButtons(param_3,uVar7,fVar8);
LAB_1006d437:
  *(float *)(param_1 + 8) = fVar1 + gpGlobals->time;
  return;
}

/* 1006d540  CBotModuleAttack::ReleaseAttack  (19 bytes)
 * undefined ReleaseAttack()
 * called by: CBotModuleAttack::Think
 */
/* PressButtons(ATTACK|ATTACK2, 0) */

void CBotModuleAttack::ReleaseAttack(undefined4 param_1,CBotBrain *param_2)

{
  CBotBrain::PressButtons(param_2,0x801,0.0);
  return;
}

