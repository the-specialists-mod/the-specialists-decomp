/* mp.dll - CBotNav (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006f810  CBotNav::Reset  (161 bytes)
 * undefined Reset(undefined4 * param_1)
 * called by: CBotBrain::Reset
 */
/* nav sub-object (brain+0x28) reset incl. Vector[512] path buffer */

void __fastcall CBotNav::Reset(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  param_1[4] = DAT_100ae498;
  param_1[5] = DAT_100ae49c;
  param_1[6] = DAT_100ae4a0;
  param_1[7] = DAT_100ae498;
  param_1[8] = DAT_100ae49c;
  uVar1 = DAT_100ae4a0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[9] = uVar1;
  param_1[0xd] = DAT_100ae498;
  param_1[0xe] = DAT_100ae49c;
  param_1[0xf] = DAT_100ae4a0;
  param_1[0x10] = DAT_100ae498;
  param_1[0x11] = DAT_100ae49c;
  param_1[0x12] = DAT_100ae4a0;
  puVar3 = param_1 + 0x16;
  for (iVar2 = 0x600; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x616] = 0;
  param_1[0x617] = 0;
  return;
}

/* 1006f8c0  CBotNav::RandomWanderPoint  (384 bytes)
 * undefined RandomWanderPoint(undefined4 * param_1, float * param_2)
 * called by: CBotNav::Replan
 */
/* RANDOM_LONG(1,16)*22 deg, RANDOM_LONG(1024,4096) units, trace end */

void __thiscall CBotNav::RandomWanderPoint(CBotNav *this,undefined4 *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  Vector VStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  Vector VStack_44;
  undefined1 auStack_38 [20];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar2 = (*g_engfuncs.pfnRandomLong)(1,0x10);
  if (((*(float *)(this + 0x40) == DAT_100ae498) && (*(float *)(this + 0x44) == DAT_100ae49c)) &&
     (*(float *)(this + 0x48) == DAT_100ae4a0)) {
    *(float *)(this + 0x40) = *param_2;
    *(float *)(this + 0x44) = param_2[1];
    *(float *)(this + 0x48) = param_2[2];
  }
  fVar4 = (float10)(iVar2 * 0x16) * (float10)0.017453292519943295;
  fVar5 = (float10)fcos(fVar4);
  fStack_50 = (float)fVar5;
  fVar4 = (float10)fsin(fVar4);
  fVar5 = SQRT((float10)fStack_50 * (float10)fStack_50 + fVar4 * fVar4);
  if (fVar5 == (float10)0.0) {
    pfVar3 = &fStack_50;
    fStack_50 = 0.0;
    fStack_4c = 0.0;
    fStack_48 = 1.0;
  }
  else {
    fVar5 = (float10)1.0 / fVar5;
    pfVar3 = (float *)Vector::Vector(&VStack_44,(float)(fVar5 * (float10)fStack_50),
                                     (float)(fVar5 * fVar4),0);
  }
  Vector::Vector(&VStack_5c,pfVar3);
  iVar2 = (*g_engfuncs.pfnRandomLong)(0x400,0x1000);
  fVar1 = (float)iVar2;
  fStack_50 = VStack_5c.x * fVar1;
  VStack_44.x = fStack_50 + *param_2;
  fStack_4c = VStack_5c.y * fVar1 + param_2[1];
  fStack_48 = fVar1 * VStack_5c.z + param_2[2];
  VStack_44.y = fStack_4c;
  VStack_44.z = fStack_48;
  UTIL_TraceLine(param_2,&VStack_44,1,0,auStack_38);
  *param_1 = uStack_24;
  param_1[1] = uStack_20;
  param_1[2] = uStack_1c;
  return;
}

/* 1006fa40  CBotNav::Replan  (442 bytes)
 * undefined4 Replan(int * param_1, undefined4 param_2, int * param_3, int param_4)
 * called by: CBotNav::Navigate
 */
/* reset nav state, straight-to-goal flag or FindPathBetweenPoints or wander; returns 3 */

undefined4 __thiscall
CBotNav::Replan(CBotNav *this,int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  CBotNav *pCVar1;
  CBotNav *pCVar2;
  int iVar3;
  CBotNav *pCVar4;
  float10 fVar5;
  undefined4 auStack_c [3];
  
  *(int *)(this + 0x28) = DAT_100ae498;
  *(undefined4 *)(this + 0x2c) = DAT_100ae49c;
  *(undefined4 *)(this + 0x30) = DAT_100ae4a0;
  fVar5 = (float10)(**(code **)(*param_3 + 8))();
  if ((float10)9.0 <= (float10)3.0 / fVar5) {
    fVar5 = (float10)9.0;
  }
  else {
    fVar5 = (float10)(**(code **)(*param_3 + 8))();
    fVar5 = (float10)3.0 / fVar5;
  }
  *(float *)(this + 4) = (float)((float10)gpGlobals->time + fVar5);
  pCVar2 = this + 0x58;
  *(float *)(this + 8) = gpGlobals->time + 0.5;
  pCVar4 = pCVar2;
  for (iVar3 = 0x600; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(int *)pCVar4 = 0;
    pCVar4 = pCVar4 + 4;
  }
  pCVar4 = this + 0x1c;
  *(undefined4 *)(this + 0x185c) = 0;
  *(int *)(this + 0x1858) = 0;
  *(int *)pCVar4 = DAT_100ae498;
  *(undefined4 *)(this + 0x20) = DAT_100ae49c;
  *(undefined4 *)(this + 0x24) = DAT_100ae4a0;
  pCVar1 = this + 0x10;
  *(int *)pCVar1 = DAT_100ae498;
  *(undefined4 *)(this + 0x14) = DAT_100ae49c;
  *(undefined4 *)(this + 0x18) = DAT_100ae4a0;
  *(int *)(this + 0x4c) = DAT_100ae498;
  *(undefined4 *)(this + 0x50) = DAT_100ae49c;
  *(undefined4 *)(this + 0x54) = DAT_100ae4a0;
  if (*(char *)(param_4 + 0x1934) != '\0') {
    *(int *)pCVar1 = *param_1;
    *(int *)(this + 0x14) = param_1[1];
    *(int *)(this + 0x18) = param_1[2];
    *(int *)pCVar4 = *param_1;
    *(int *)(this + 0x20) = param_1[1];
    *(int *)(this + 0x24) = param_1[2];
    *(undefined1 *)(param_4 + 0x1934) = 0;
    return 3;
  }
  iVar3 = CNodeGraph::FindPathBetweenPoints
                    ((CNodeGraph *)&g_NodeGraph,param_2,param_1,(int *)pCVar2,(int *)(this + 0x1858)
                     ,(int)param_3);
  if (iVar3 == 0) {
    pCVar2 = (CBotNav *)RandomWanderPoint(this,auStack_c,(float *)(param_3[1] + 8));
    *(int *)pCVar1 = *(int *)pCVar2;
    iVar3 = *(int *)(pCVar2 + 4);
  }
  else {
    iVar3 = *(int *)(this + 0x5c);
    *(int *)pCVar1 = *(int *)pCVar2;
  }
  *(int *)(this + 0x14) = iVar3;
  *(int *)(this + 0x18) = *(int *)(pCVar2 + 8);
  *(int *)pCVar4 = *param_1;
  *(int *)(this + 0x20) = param_1[1];
  *(int *)(this + 0x24) = param_1[2];
  return 3;
}

/* 1006fc00  CBotNav::Navigate  (2044 bytes)
 * undefined4 Navigate(int * param_1, void * param_2, float * param_3)
 * called by: CBotBrain::Think
 */
/* path following; 0 arrived, 1 failed/stuck, 2 in progress */

undefined4 __thiscall CBotNav::Navigate(CBotNav *this,int *param_1,void *param_2,float *param_3)

{
  CBotNav *pCVar1;
  CBotNav *pCVar2;
  CBotNav *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  undefined3 extraout_var;
  float *pfVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  uint uVar14;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 auStack_44 [3];
  undefined1 local_38 [16];
  float local_28;
  
  if (((*param_3 == DAT_100ae498) && (param_3[1] == DAT_100ae49c)) && (param_3[2] == DAT_100ae4a0))
  {
    return 1;
  }
  if (gpGlobals->time < *(float *)this) {
    return 2;
  }
  pCVar1 = this + 0x1c;
  *(float *)this = gpGlobals->time + 0.1;
  if ((((*(float *)pCVar1 != *param_3) || (*(float *)(this + 0x20) != param_3[1])) ||
      (*(float *)(this + 0x24) != param_3[2])) &&
     (iVar8 = Replan(this,(int *)param_3,param_1[1] + 8,param_1,(int)param_2), iVar8 == 1)) {
    *(float *)pCVar1 = DAT_100ae498;
    *(float *)(this + 0x20) = DAT_100ae49c;
    *(float *)(this + 0x24) = DAT_100ae4a0;
    return 1;
  }
  pCVar2 = this + 0x4c;
  if (((*(float *)(this + 0x4c) == DAT_100ae498) && (*(float *)(this + 0x50) == DAT_100ae49c)) &&
     (*(float *)(this + 0x54) == DAT_100ae4a0)) {
    iVar8 = param_1[1];
    pCVar3 = this + 0x10;
    fVar4 = *(float *)pCVar3 - *(float *)(iVar8 + 8);
    fVar5 = *(float *)(this + 0x14) - *(float *)(iVar8 + 0xc);
    fVar6 = *(float *)(this + 0x18) - *(float *)(iVar8 + 0x10);
    if ((SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) < 48.0) &&
       (UTIL_TraceLine(iVar8 + 8,pCVar3,1,*(undefined4 *)(iVar8 + 0x208),local_38), 1.0 <= local_28)
       ) {
      iVar8 = *(int *)(this + 0x185c) + 1;
      *(int *)(this + 0x185c) = iVar8;
      if (*(int *)(this + 0x1858) <= iVar8) {
        CBotBrain::SetMove(param_2,0,0);
        *(float *)pCVar3 = DAT_100ae498;
        *(float *)(this + 0x14) = DAT_100ae49c;
        *(float *)(this + 0x18) = DAT_100ae4a0;
        *(float *)pCVar1 = DAT_100ae498;
        *(float *)(this + 0x20) = DAT_100ae49c;
        *(float *)(this + 0x24) = DAT_100ae4a0;
        return 0;
      }
      *(float *)pCVar3 = *(float *)(this + iVar8 * 0xc + 0x58);
      *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + iVar8 * 0xc + 0x5c);
      *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + iVar8 * 0xc + 0x60);
      if (((*(float *)pCVar3 == DAT_100ae498) && (*(float *)(this + 0x14) == DAT_100ae49c)) &&
         (*(float *)(this + 0x18) == DAT_100ae4a0)) {
        CBotBrain::SetMove(param_2,0,0);
        goto LAB_10070020;
      }
    }
  }
  else {
    iVar8 = param_1[1];
    fVar4 = *(float *)pCVar2 - *(float *)(iVar8 + 8);
    fVar5 = *(float *)(this + 0x50) - *(float *)(iVar8 + 0xc);
    fVar6 = *(float *)(this + 0x54) - *(float *)(iVar8 + 0x10);
    if ((SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) < 48.0) &&
       (UTIL_TraceLine(iVar8 + 8,pCVar2,1,*(undefined4 *)(iVar8 + 0x208),local_38), 1.0 <= local_28)
       ) {
      *(float *)pCVar2 = DAT_100ae498;
      *(float *)(this + 0x50) = DAT_100ae49c;
      *(float *)(this + 0x54) = DAT_100ae4a0;
    }
  }
  if (*(float *)(this + 4) < gpGlobals->time) {
    fVar11 = (float10)(**(code **)(*param_1 + 8))();
    if ((float10)9.0 <= (float10)3.0 / fVar11) {
      fVar11 = (float10)9.0;
    }
    else {
      fVar11 = (float10)(**(code **)(*param_1 + 8))();
      fVar11 = (float10)3.0 / fVar11;
    }
    *(float *)(this + 4) = (float)((float10)gpGlobals->time + fVar11);
    iVar8 = param_1[1];
    fVar4 = *(float *)(this + 0x28) - *(float *)(iVar8 + 8);
    fVar5 = *(float *)(this + 0x2c) - *(float *)(iVar8 + 0xc);
    fVar6 = *(float *)(this + 0x30) - *(float *)(iVar8 + 0x10);
    if (SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) < 96.0) {
      pCVar3 = this + 0x10;
      *(float *)pCVar3 = DAT_100ae498;
      *(float *)(this + 0x14) = DAT_100ae49c;
      *(float *)(this + 0x18) = DAT_100ae4a0;
      if (((*(float *)pCVar3 == DAT_100ae498) && (*(float *)(this + 0x14) == DAT_100ae49c)) &&
         (*(float *)(this + 0x18) == DAT_100ae4a0)) {
        CBotBrain::SetMove(param_2,0,0);
        *(float *)pCVar3 = DAT_100ae498;
        *(float *)(this + 0x14) = DAT_100ae49c;
        *(float *)(this + 0x18) = DAT_100ae4a0;
        *(float *)pCVar2 = DAT_100ae498;
        *(float *)(this + 0x50) = DAT_100ae49c;
        *(float *)(this + 0x54) = DAT_100ae4a0;
LAB_10070020:
        *(float *)pCVar1 = DAT_100ae498;
        *(float *)(this + 0x20) = DAT_100ae49c;
        *(float *)(this + 0x24) = DAT_100ae4a0;
        return 1;
      }
    }
    iVar8 = param_1[1];
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(iVar8 + 8);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(iVar8 + 0xc);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(iVar8 + 0x10);
  }
  if (*(float *)(this + 8) < gpGlobals->time) {
    *(float *)(this + 8) = gpGlobals->time + 0.5;
    iVar8 = param_1[1];
    local_5c = *(float *)(this + 0x10) - *(float *)(iVar8 + 8);
    fStack_64 = *(float *)(this + 0x14) - *(float *)(iVar8 + 0xc);
    fStack_60 = *(float *)(this + 0x18) - *(float *)(iVar8 + 0x10);
    fStack_58 = fStack_64;
    fStack_54 = fStack_60;
    uVar9 = UTIL_VecToAngles(&fStack_50,&local_5c);
    UTIL_MakeVectors(uVar9);
    iVar8 = param_1[1];
    local_5c = *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0x174) + gpGlobals->v_forward[0] * 64.0;
    fStack_58 = *(float *)(iVar8 + 0x178) + *(float *)(iVar8 + 0xc) + gpGlobals->v_forward[1] * 64.0
    ;
    fStack_54 = *(float *)(iVar8 + 0x17c) + *(float *)(iVar8 + 0x10) +
                gpGlobals->v_forward[2] * 64.0;
    fStack_68 = *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0x174);
    fStack_64 = *(float *)(iVar8 + 0xc) + *(float *)(iVar8 + 0x178);
    fStack_60 = *(float *)(iVar8 + 0x10) + *(float *)(iVar8 + 0x17c);
    fStack_4c = fStack_64;
    fStack_48 = fStack_60;
    UTIL_TraceLine(&fStack_68,&local_5c,1,*(undefined4 *)(iVar8 + 0x208),local_38);
    bVar7 = 1.0 <= local_28;
    iVar8 = param_1[1];
    fStack_50 = gpGlobals->v_forward[0] * 64.0 + *(float *)(iVar8 + 8);
    fStack_58 = gpGlobals->v_forward[1] * 64.0 + *(float *)(iVar8 + 0xc);
    fStack_54 = gpGlobals->v_forward[2] * 64.0 + *(float *)(iVar8 + 0x10);
    fStack_4c = fStack_58;
    fStack_48 = fStack_54;
    UTIL_TraceLine((float *)(iVar8 + 8),&fStack_50,1,*(undefined4 *)(iVar8 + 0x208),local_38);
    if (bVar7) {
      if (local_28 < 1.0) {
        CBotBrain::PressButtons(param_2,2,1.0);
        CBotBrain::PressButtons(param_2,4,0.5);
      }
    }
    else if (local_28 >= 1.0) {
      CBotBrain::PressButtons(param_2,4,1.0);
    }
  }
  bVar7 = CBasePlayer::IsOnLadder((int)param_1);
  if (CONCAT31(extraout_var,bVar7) != 0) {
    if (0.0 <= *(float *)(param_1[1] + 0x10) - *(float *)(this + 0x18)) {
      CBotBrain::PressButtons(param_2,0x14,1.0);
      uVar14 = 10;
    }
    else {
      CBotBrain::PressButtons(param_2,0xc,1.0);
      uVar14 = 0x12;
    }
    CBotBrain::PressButtons(param_2,uVar14,0.0);
    CBotBrain::SetMove(param_2,0,0);
    CBotBrain::LookAt(param_2,param_1,*(float *)(this + 0x10),*(float *)(this + 0x14));
    CBotBrain::DisableModules(param_2,0x80);
  }
  iVar8 = param_1[1];
  pfVar10 = GetSteerPoint(this,&fStack_68,(int)param_1);
  local_5c = *pfVar10 - *(float *)(iVar8 + 8);
  fStack_58 = pfVar10[1] - *(float *)(iVar8 + 0xc);
  fStack_54 = pfVar10[2] - *(float *)(iVar8 + 0x10);
  fStack_4c = fStack_58;
  fStack_48 = fStack_54;
  pfVar10 = (float *)UTIL_VecToAngles(auStack_44,&local_5c);
  fStack_50 = *pfVar10;
  fVar4 = pfVar10[1];
  fStack_48 = pfVar10[2];
  fVar11 = UTIL_AngleMod(*(float *)(param_1[1] + 0x54));
  fVar12 = UTIL_AngleMod(fVar4);
  fVar13 = ABS(fVar12 - (float10)(float)fVar11);
  if ((float)fVar12 <= (float)fVar11) {
    fVar13 = ABS((float10)360.0 - fVar13);
  }
  fVar11 = (float10)fsin(fVar13 * (float10)0.017453292519943295);
  fVar12 = (float10)fcos(fVar13 * (float10)0.017453292519943295);
  CBotBrain::SetMove(param_2,(float)(fVar12 * (float10)(float)param_1[0x14f]),
                     (float)-(fVar11 * (float10)(float)param_1[0x14f]));
  return 2;
}

/* 10070400  CBotNav::GetSteerPoint  (1845 bytes)
 * float * GetSteerPoint(float * param_1, int param_2)
 * called by: CBotNav::Navigate
 */
/* 24-unit forward + +-16 side traces, detour points (nav+0x4c) */

float * __thiscall CBotNav::GetSteerPoint(CBotNav *this,float *param_1,int param_2)

{
  byte bVar1;
  CBotNav *pCVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  float *pfVar8;
  CBotNav *pCVar9;
  char *pcVar10;
  bool bVar11;
  Vector local_a0;
  Vector local_94;
  Vector local_88;
  CBotNav *local_7c;
  byte *local_78;
  Vector local_74;
  Vector local_68;
  Vector local_5c;
  undefined1 local_50 [16];
  float local_40;
  Vector local_3c [2];
  int local_20;
  Vector local_18;
  Vector local_c;
  
  local_7c = this;
  if (gpGlobals->time < *(float *)(this + 0xc)) {
    iVar3 = VectorEquals(this + 0x4c,(float *)&DAT_100ae498);
    if (iVar3 != 0) {
      *param_1 = *(float *)(this + 0x10);
      param_1[1] = *(float *)(this + 0x14);
      param_1[2] = *(float *)(this + 0x18);
      return param_1;
    }
    *param_1 = *(float *)(this + 0x4c);
    param_1[1] = *(float *)(this + 0x50);
    param_1[2] = *(float *)(this + 0x54);
    return param_1;
  }
  pCVar9 = this + 0x10;
  *(float *)(this + 0xc) = gpGlobals->time + 0.5;
  iVar3 = *(int *)(param_2 + 4);
  local_88.x = *(float *)pCVar9 - *(float *)(iVar3 + 8);
  local_88.y = *(float *)(this + 0x14) - *(float *)(iVar3 + 0xc);
  local_88.z = *(float *)(this + 0x18) - *(float *)(iVar3 + 0x10);
  Vector::Vector(&local_a0,&local_88.x);
  uVar4 = UTIL_VecToAngles(&local_74.x,&local_a0);
  UTIL_MakeVectors(uVar4);
  uVar4 = *(undefined4 *)(*(int *)(param_2 + 4) + 0x208);
  local_88.x = gpGlobals->v_forward[0] * 24.0;
  local_88.y = gpGlobals->v_forward[1] * 24.0;
  local_88.z = gpGlobals->v_forward[2] * 24.0;
  Vector::Vector(&local_94,&local_88.x);
  iVar3 = *(int *)(param_2 + 4);
  local_a0.x = local_94.x + *(float *)(iVar3 + 8);
  local_a0.y = local_94.y + *(float *)(iVar3 + 0xc);
  local_a0.z = local_94.z + *(float *)(iVar3 + 0x10);
  Vector::Vector(&local_74,&local_a0.x);
  UTIL_TraceLine(*(int *)(param_2 + 4) + 8,&local_74,0,uVar4,local_50);
  if (local_40 < 1.0) {
    pcVar10 = s_func_door_1009da90;
    local_78 = (byte *)(gpGlobals->pStringBase + *(int *)(local_20 + 0x80));
    pbVar5 = local_78;
    do {
      bVar1 = *pbVar5;
      bVar11 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_100705d0:
        iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_100705d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar11 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_100705d0;
      pbVar5 = pbVar5 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_100705d5:
    if (iVar3 != 0) {
      pcVar10 = s_func_door_rotating_1009da7c;
      pbVar5 = local_78;
      do {
        bVar1 = *pbVar5;
        bVar11 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_1007060a:
          iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_1007060f;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar11 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_1007060a;
        pbVar5 = pbVar5 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1007060f:
      if (iVar3 != 0) {
        puVar6 = (undefined4 *)
                 Vector::Vector(&local_74,gpGlobals->v_forward[0] * 48.0,
                                gpGlobals->v_forward[1] * 48.0,gpGlobals->v_forward[2] * 48.0);
        Vector::Vector(&local_a0,puVar6);
        puVar6 = (undefined4 *)
                 Vector::Vector(&local_88,local_3c[0].x - local_a0.x,local_3c[0].y - local_a0.y,
                                local_3c[0].z - local_a0.z);
        Vector::Vector(&local_94,puVar6);
        *(float *)(local_7c + 0x4c) = local_94.x;
        *(float *)(local_7c + 0x50) = local_94.y;
        *(float *)(local_7c + 0x54) = local_94.z;
        *param_1 = *(float *)(local_7c + 0x4c);
        param_1[1] = *(float *)(local_7c + 0x50);
        param_1[2] = *(float *)(local_7c + 0x54);
        return param_1;
      }
    }
  }
  uVar4 = *(undefined4 *)(*(int *)(param_2 + 4) + 0x208);
  puVar6 = (undefined4 *)
           Vector::Vector(&local_18,gpGlobals->v_right[0] * 16.0,gpGlobals->v_right[1] * 16.0,
                          gpGlobals->v_right[2] * 16.0);
  Vector::Vector(&local_a0,puVar6);
  puVar6 = (undefined4 *)
           Vector::Vector(&local_c,local_a0.x + *(float *)pCVar9,
                          local_a0.y + *(float *)(this + 0x14),local_a0.z + *(float *)(this + 0x18))
  ;
  Vector::Vector(&local_74,puVar6);
  puVar6 = (undefined4 *)
           Vector::Vector(&local_68,gpGlobals->v_right[0] * 16.0,gpGlobals->v_right[1] * 16.0,
                          gpGlobals->v_right[2] * 16.0);
  Vector::Vector(&local_94,puVar6);
  iVar3 = *(int *)(param_2 + 4);
  puVar6 = (undefined4 *)
           Vector::Vector(&local_5c,local_94.x + *(float *)(iVar3 + 8),
                          local_94.y + *(float *)(iVar3 + 0xc),local_94.z + *(float *)(iVar3 + 0x10)
                         );
  Vector::Vector(&local_88,puVar6);
  UTIL_TraceLine(&local_88,&local_74,0,uVar4,local_50);
  if (local_40 < 1.0) {
    pcVar10 = s_func_door_1009da90;
    local_78 = (byte *)(gpGlobals->pStringBase + *(int *)(local_20 + 0x80));
    pbVar5 = local_78;
    do {
      bVar1 = *pbVar5;
      bVar11 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_10070837:
        iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_1007083c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar11 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_10070837;
      pbVar5 = pbVar5 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_1007083c:
    if (iVar3 != 0) {
      pcVar10 = s_func_door_rotating_1009da7c;
      pbVar5 = local_78;
      do {
        bVar1 = *pbVar5;
        bVar11 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_10070871:
          iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_10070876;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar11 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_10070871;
        pbVar5 = pbVar5 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_10070876:
      if (iVar3 != 0) {
        puVar6 = (undefined4 *)
                 Vector::Vector(&local_5c,gpGlobals->v_right[0] * 48.0,gpGlobals->v_right[1] * 48.0,
                                gpGlobals->v_right[2] * 48.0);
        Vector::Vector(&local_a0,puVar6);
        puVar6 = (undefined4 *)
                 Vector::Vector(&local_68,local_3c[0].x - local_a0.x,local_3c[0].y - local_a0.y,
                                local_3c[0].z - local_a0.z);
        Vector::Vector(&local_94,puVar6);
        *(float *)(local_7c + 0x4c) = local_94.x;
        *(float *)(local_7c + 0x50) = local_94.y;
        *(float *)(local_7c + 0x54) = local_94.z;
        *param_1 = *(float *)(local_7c + 0x4c);
        param_1[1] = *(float *)(local_7c + 0x50);
        param_1[2] = *(float *)(local_7c + 0x54);
        return param_1;
      }
    }
  }
  uVar4 = *(undefined4 *)(*(int *)(param_2 + 4) + 0x208);
  puVar6 = (undefined4 *)
           Vector::Vector(&local_5c,gpGlobals->v_right[0] * 16.0,gpGlobals->v_right[1] * 16.0,
                          gpGlobals->v_right[2] * 16.0);
  Vector::Vector(&local_a0,puVar6);
  puVar6 = (undefined4 *)
           Vector::Vector(&local_68,*(float *)pCVar9 - local_a0.x,
                          *(float *)(this + 0x14) - local_a0.y,*(float *)(this + 0x18) - local_a0.z)
  ;
  Vector::Vector(&local_74,puVar6);
  puVar6 = (undefined4 *)
           Vector::Vector(&local_c,gpGlobals->v_right[0] * 16.0,gpGlobals->v_right[1] * 16.0,
                          gpGlobals->v_right[2] * 16.0);
  Vector::Vector(&local_94,puVar6);
  iVar3 = *(int *)(param_2 + 4);
  puVar6 = (undefined4 *)
           Vector::Vector(&local_18,*(float *)(iVar3 + 8) - local_94.x,
                          *(float *)(iVar3 + 0xc) - local_94.y,*(float *)(iVar3 + 0x10) - local_94.z
                         );
  Vector::Vector(&local_88,puVar6);
  UTIL_TraceLine(&local_88,&local_74,0,uVar4,local_50);
  pCVar2 = local_7c;
  if (local_40 < 1.0) {
    pcVar10 = s_func_door_1009da90;
    pbVar5 = (byte *)(gpGlobals->pStringBase + *(int *)(local_20 + 0x80));
    pbVar7 = pbVar5;
    do {
      bVar1 = *pbVar7;
      bVar11 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_10070a9d:
        iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_10070aa2;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar11 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_10070a9d;
      pbVar7 = pbVar7 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_10070aa2:
    if (iVar3 != 0) {
      pcVar10 = s_func_door_rotating_1009da7c;
      do {
        bVar1 = *pbVar5;
        bVar11 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_10070ad1:
          iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_10070ad6;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar11 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_10070ad1;
        pbVar5 = pbVar5 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_10070ad6:
      if (iVar3 != 0) {
        pCVar9 = local_7c + 0x4c;
        pfVar8 = (float *)Vector::operator*((Vector *)gpGlobals->v_right,&local_5c.x,48.0);
        pfVar8 = (float *)Vector::operator+(local_3c,&local_68.x,pfVar8);
        *(float *)pCVar9 = *pfVar8;
        *(float *)(pCVar2 + 0x50) = pfVar8[1];
        *(float *)(pCVar2 + 0x54) = pfVar8[2];
      }
    }
  }
  Vector::Vector((Vector *)param_1,(undefined4 *)pCVar9);
  return param_1;
}

