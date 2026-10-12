/* mp.dll - unnamed_1006d120 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006d120  FUN_1006d120  (39 bytes)
 * undefined FUN_1006d120(void * param_1)
 * called by: CXenPLight::Think
 */
void __fastcall FUN_1006d120(void *param_1)

{
  int iVar1;
  
  CBaseDelay::SUB_UseTargets(param_1,param_1,1,0);
  if (*(int *)((int)param_1 + 0x74) != 0) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x74) + 4);
    *(uint *)(iVar1 + 0x118) = *(uint *)(iVar1 + 0x118) & 0xffffff7f;
  }
  return;
}

/* 1006d150  FUN_1006d150  (39 bytes)
 * undefined FUN_1006d150(void * param_1)
 * called by: CXenPLight::Think
 */
void __fastcall FUN_1006d150(void *param_1)

{
  int iVar1;
  
  CBaseDelay::SUB_UseTargets(param_1,param_1,0,0);
  if (*(int *)((int)param_1 + 0x74) != 0) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x74) + 4);
    *(uint *)(iVar1 + 0x118) = *(uint *)(iVar1 + 0x118) | 0x80;
  }
  return;
}

/* 1006da90  FUN_1006da90  (151 bytes)
 * undefined FUN_1006da90()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006da90(void)

{
  DAT_102e0104 = 0x42b40000;
  DAT_102e0108 = 0xc1c80000;
  _DAT_102e010c = 0;
  _DAT_102e0110 = 0x41c80000;
  DAT_102e0114 = 0x42960000;
  _DAT_102e0118 = 0;
  _DAT_102e011c = 0xc1700000;
  _DAT_102e0120 = 0xc2c80000;
  _DAT_102e0124 = 0;
  _DAT_102e0128 = 0xc2b40000;
  _DAT_102e012c = 0xc20c0000;
  _DAT_102e0130 = 0;
  _DAT_102e0134 = 0xc2b40000;
  _DAT_102e0138 = 0x42700000;
  _DAT_102e013c = 0;
  return;
}

/* 1006dc70  FUN_1006dc70  (178 bytes)
 * undefined FUN_1006dc70(int * param_1)
 * called by: CXenSporeLarge::Spawn, CXenSporeMed::Spawn, CXenSporeSmall::Spawn
 */
void __fastcall FUN_1006dc70(int *param_1)

{
  float10 fVar1;
  
  (**(code **)(*param_1 + 0x10))();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),
             (&PTR_s_models_fungus_small__mdl_1009b790)[*(int *)(param_1[1] + 0x110)]);
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x3f800000;
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,255.0);
  *(float *)(param_1[1] + 0x130) = (float)fVar1;
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.7,1.4);
  *(float *)(param_1[1] + 0x138) = (float)fVar1;
  CBaseAnimating::ResetSequenceInfo((int)param_1);
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.1,0.4);
  *(float *)(param_1[1] + 0x104) = (float)(fVar1 + (float10)gpGlobals->time);
  return;
}

/* 1006e072  FUN_1006e072  (23 bytes)
 * undefined FUN_1006e072(void)
 * called by: FUN_10073881
 */
void FUN_1006e072(void)

{
  void *extraout_ECX;
  
  FUN_1006e08a();
  DAT_102e0144 = FUN_1006fadb();
  FUN_1006fa8b(extraout_ECX);
  return;
}

/* 1006e089  FUN_1006e089  (1 bytes)
 * undefined FUN_1006e089()
 */
void FUN_1006e089(void)

{
  return;
}

/* 1006e08a  FUN_1006e08a  (56 bytes)
 * undefined FUN_1006e08a(void)
 * called by: FUN_1006e072
 */
void FUN_1006e08a(void)

{
  PTR___fptrap_1009bbd8 = FUN_1006fb5e;
  PTR___fptrap_1009bbd4 = __cfltcvt;
  PTR___fptrap_1009bbdc = __fassign;
  PTR___fptrap_1009bbe0 = FUN_1006fb04;
  PTR___fptrap_1009bbe4 = FUN_1006fbac;
  PTR___fptrap_1009bbe8 = __cfltcvt;
  return;
}

/* 1006e0fb  FUN_1006e0fb  (87 bytes)
 * float10 FUN_1006e0fb(undefined1 * param_1, byte.conflict * param_2)
 * called by: CBaseButton::KeyValue, CBaseDelay::KeyValue, CBaseDoor::KeyValue, CBasePlatTrain::KeyValue, CBaseToggle::KeyValue, CBaseTrigger::KeyValue, CBlood::KeyValue, CChangeLevel::KeyValue, CEnvSound::KeyValue, CEnvSpark::KeyValue, CFade::KeyValue, CFrictionModifier::KeyValue, ... (39 total)
 */
float10 __thiscall FUN_1006e0fb(undefined1 *param_1,byte_conflict *param_2)

{
  uint uVar1;
  int iVar2;
  byte *this;
  undefined1 *puVar3;
  uint local_1c [6];
  
  while( true ) {
    if (DAT_1009bbc4 < 2) {
      uVar1 = (byte)PTR_DAT_1009b9b8[(uint)*param_2 * 2] & 8;
      param_1 = PTR_DAT_1009b9b8;
    }
    else {
      puVar3 = &DAT_00000008;
      uVar1 = FUN_1006f09e(param_1,(uint)*param_2,8);
      param_1 = puVar3;
    }
    if (uVar1 == 0) break;
    param_2 = param_2 + 1;
  }
  this = param_2;
  _strlen((char *)param_2);
  iVar2 = FUN_1006ff2a(this,local_1c,param_2);
  return (float10)*(double *)(iVar2 + 0x10);
}

/* 1006e152  FUN_1006e152  (139 bytes)
 * int FUN_1006e152(byte.conflict * param_1)
 * called by: FUN_1006e1dd, FUN_1007b254, FUN_1007ebf3
 */
int __thiscall FUN_1006e152(void *this,byte_conflict *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  
  while( true ) {
    if (DAT_1009bbc4 < 2) {
      uVar1 = (byte)PTR_DAT_1009b9b8[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_1009b9b8;
    }
    else {
      puVar6 = &DAT_00000008;
      uVar1 = FUN_1006f09e(this,(uint)*param_1,8);
      this = puVar6;
    }
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar1 = (uint)*param_1;
  pbVar5 = param_1 + 1;
  if ((uVar1 == 0x2d) || (uVar4 = uVar1, uVar1 == 0x2b)) {
    uVar4 = (uint)*pbVar5;
    pbVar5 = param_1 + 2;
  }
  iVar3 = 0;
  while( true ) {
    if (DAT_1009bbc4 < 2) {
      uVar2 = (byte)PTR_DAT_1009b9b8[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined1 *)0x4;
      uVar2 = FUN_1006f09e(this,uVar4,4);
      this = puVar6;
    }
    if (uVar2 == 0) break;
    iVar3 = (uVar4 - 0x30) + iVar3 * 10;
    uVar4 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return iVar3;
}

/* 1006e1dd  FUN_1006e1dd  (11 bytes)
 * undefined FUN_1006e1dd(byte.conflict * param_1)
 * called by: CAmbientGeneric::KeyValue, CAutoTrigger::KeyValue, CBaseButton::KeyValue, CBaseDoor::KeyValue, CBaseTrigger::KeyValue, CBlood::KeyValue, CBreakable::KeyValue, CBubbling::KeyValue, CDeadHEV::KeyValue, CEnvExplosion::KeyValue, CEnvGlobal::KeyValue, CEnvShooter::KeyValue, ... (53 total)
 */
void __thiscall FUN_1006e1dd(void *this,byte_conflict *param_1)

{
  FUN_1006e152(this,param_1);
  return;
}

/* 1006e2a2  FUN_1006e2a2  (45 bytes)
 * undefined FUN_1006e2a2(undefined * UNRECOVERED_JUMPTABLE)
 * called by: FUN_1007046d
 */
void FUN_1006e2a2(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1006e2cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

/* 1006e2d6  FUN_1006e2d6  (7 bytes)
 * undefined FUN_1006e2d6(undefined4 param_1, undefined * UNRECOVERED_JUMPTABLE)
 * called by: FUN_100707f1
 */
void FUN_1006e2d6(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1006e2db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

/* 1006e2dd  FUN_1006e2dd  (7 bytes)
 * undefined FUN_1006e2dd(undefined4 param_1, undefined * UNRECOVERED_JUMPTABLE)
 * called by: FUN_1007062d
 */
void FUN_1006e2dd(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1006e2e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

/* 1006e2e4  FUN_1006e2e4  (7 bytes)
 * undefined FUN_1006e2e4(undefined4 param_1, undefined * UNRECOVERED_JUMPTABLE)
 * called by: FUN_1007062d
 */
void FUN_1006e2e4(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1006e2e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

/* 1006e2eb  FUN_1006e2eb  (79 bytes)
 * undefined FUN_1006e2eb(PVOID param_1, PEXCEPTION_RECORD param_2)
 * called by: FUN_1006e4b9, FUN_1007046d
 */
void FUN_1006e2eb(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1006e313,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}

/* 1006e33a  FUN_1006e33a  (54 bytes)
 * undefined4 FUN_1006e33a(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3, undefined4 param_4)
 * called by: FUN_1007fe78, FUN_1007fea6, FUN_1007feb8, FUN_1007fed8, FUN_1007ff01, FUN_1007ff3c, FUN_1007ff61, FUN_1007ff7b, FUN_1007ffa1, FUN_1007ffb8, FUN_1007ffd8
 */
undefined4 __cdecl
FUN_1006e33a(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  int *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_10070064(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}

/* 1006e38a  FUN_1006e38a  (84 bytes)
 * undefined4 FUN_1006e38a(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5)
 * called by: FUN_100704e8
 */
undefined4 __cdecl
FUN_1006e38a(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_1006e3de;
  local_8 = param_4 + 1;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}

/* 1006e3de  FUN_1006e3de  (37 bytes)
 * undefined FUN_1006e3de(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3)
 */
void __cdecl FUN_1006e3de(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_10070064(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}

/* 1006e403  FUN_1006e403  (182 bytes)
 * undefined4 FUN_1006e403(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * called by: FUN_100702b2
 */
undefined4 __cdecl
FUN_1006e403(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffbc;
  local_28 = FUN_1006e4b9;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x1006e48b;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_10070951();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}

/* 1006e4b9  FUN_1006e4b9  (114 bytes)
 * undefined4 FUN_1006e4b9(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3)
 */
undefined4 __cdecl FUN_1006e4b9(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_10070064(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_1006e2eb(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x1006e523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}

/* 1006e52e  FUN_1006e52e  (123 bytes)
 * int FUN_1006e52e(int param_1, int param_2, int param_3, uint * param_4, uint * param_5)
 * called by: FUN_100700ff, FUN_100702b2
 */
int __cdecl FUN_1006e52e(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar4 = uVar5;
  uVar3 = uVar5;
  while (uVar2 = uVar4, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
      FUN_10070add();
    }
    uVar5 = uVar5 - 1;
    if (((*(int *)(iVar1 + 4 + uVar5 * 0x14) < param_3) &&
        (param_3 <= *(int *)(iVar1 + uVar5 * 0x14 + 8))) || (uVar4 = uVar2, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar4 = uVar5;
      uVar3 = uVar2;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((*(uint *)(param_1 + 0xc) < uVar3) || (uVar3 < uVar5)) {
    FUN_10070add();
  }
  return iVar1 + uVar5 * 0x14;
}

/* 1006e5cc  FUN_1006e5cc  (34 bytes)
 * undefined FUN_1006e5cc()
 */
undefined4 FUN_1006e5cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(uint *)(param_1 + 4) & 6) != 0) {
    *param_4 = param_2;
    uVar1 = 3;
  }
  return uVar1;
}

/* 1006e682  FUN_1006e682  (24 bytes)
 * undefined FUN_1006e682(void)
 * called by: FUN_100775d8, __local_unwind2
 */
void FUN_1006e682(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1009b93c = *(undefined4 *)(unaff_EBP + 8);
  DAT_1009b938 = in_EAX;
  DAT_1009b940 = unaff_EBP;
  return;
}

/* 1006e69a  FUN_1006e69a  (82 bytes)
 * int FUN_1006e69a(undefined1 * param_1, byte.conflict * param_2)
 * called by: CEnvLight::KeyValue, CEnvLight::Spawn, CHalfLifeMultiplay::CHalfLifeMultiplay, CHalfLifeMultiplay::ClientUserInfoChanged, CHalfLifeTeamplay::ClientUserInfoChanged, CHalfLifeTeamplay::InitHUD, CItemBattery::MyTouch, FUN_1001af00, FUN_1005fe40, FUN_100604a0, FUN_10063360, FUN_100676f0, ... (23 total)
 */
int __cdecl FUN_1006e69a(undefined1 *param_1,byte_conflict *param_2)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  iVar1 = FUN_10070c4b((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10070b33(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}

/* 1006e728  FUN_1006e728  (46 bytes)
 * uint FUN_1006e728(int param_1)
 * called by: FUN_10036580, SENTENCEG_Init
 */
uint __thiscall FUN_1006e728(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_1009bbc4) {
    uVar1 = FUN_1006f09e(this,param_1,0x103);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_1009b9b8 + param_1 * 2) & 0x103;
}

/* 1006e7a6  FUN_1006e7a6  (40 bytes)
 * uint FUN_1006e7a6(int param_1)
 * called by: SENTENCEG_Init
 */
uint __thiscall FUN_1006e7a6(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_1009bbc4) {
    uVar1 = FUN_1006f09e(this,param_1,4);
    return uVar1;
  }
  return (byte)PTR_DAT_1009b9b8[param_1 * 2] & 4;
}

/* 1006e7fb  FUN_1006e7fb  (40 bytes)
 * uint FUN_1006e7fb(int param_1)
 * called by: CTSGameRules::PlayerVote, FUN_10024840, FUN_10036580, FUN_10071455, FUN_10071ee2, Host_Say
 */
uint __thiscall FUN_1006e7fb(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_1009bbc4) {
    uVar1 = FUN_1006f09e(this,param_1,8);
    return uVar1;
  }
  return (byte)PTR_DAT_1009b9b8[param_1 * 2] & 8;
}

/* 1006e84b  FUN_1006e84b  (46 bytes)
 * uint FUN_1006e84b(int param_1)
 * called by: FUN_10024840
 */
uint __thiscall FUN_1006e84b(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_1009bbc4) {
    uVar1 = FUN_1006f09e(this,param_1,0x107);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_1009b9b8 + param_1 * 2) & 0x107;
}

/* 1006e879  FUN_1006e879  (46 bytes)
 * uint FUN_1006e879(int param_1)
 * called by: CTSGameRules::PlayerVote, Host_Say
 */
uint __thiscall FUN_1006e879(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_1009bbc4) {
    uVar1 = FUN_1006f09e(this,param_1,0x157);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_1009b9b8 + param_1 * 2) & 0x157;
}

/* 1006e8a7  FUN_1006e8a7  (46 bytes)
 * uint FUN_1006e8a7(int param_1)
 * called by: FUN_1005df50, FUN_1005e180, adjust_weapon_value
 */
uint __thiscall FUN_1006e8a7(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_1009bbc4) {
    uVar1 = FUN_1006f09e(this,param_1,0x117);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_1009b9b8 + param_1 * 2) & 0x117;
}

/* 1006ea8e  FUN_1006ea8e  (52 bytes)
 * undefined FUN_1006ea8e(char * param_1, byte.conflict * param_2)
 * called by: CEnvLight::KeyValue, CVoiceGameMgr::ClientCommand, FUN_1005df50, FUN_1005e180, FUN_10064a20, adjust_weapon_value, pfnClientCommand
 */
void __cdecl FUN_1006ea8e(char *param_1,byte_conflict *param_2)

{
  void *this;
  char *local_24;
  size_t local_20;
  char *local_1c;
  undefined4 local_18;
  
  local_18 = 0x49;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = _strlen(param_1);
  FUN_10071455(this,(int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  return;
}

/* 1006ead0  FUN_1006ead0  (133 bytes)
 * uint * FUN_1006ead0(uint * param_1, char * param_2)
 * called by: CTSGameRules::PlayerVote, FUN_1005e180, FUN_10075ab7, adjust_weapon_value, pfnClientCommand
 */
uint * __cdecl FUN_1006ead0(uint *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  
  cVar3 = *param_2;
  if (cVar3 == '\0') {
    return param_1;
  }
  if (param_2[1] == '\0') {
    while (((uint)param_1 & 3) != 0) {
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      param_1 = (uint *)((int)param_1 + 1);
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar5 = *param_1;
        uVar9 = uVar5 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar7 = uVar5 ^ 0xffffffff ^ uVar5 + 0x7efefeff;
        puVar10 = param_1 + 1;
        if (((uVar9 ^ 0xffffffff ^ uVar9 + 0x7efefeff) & 0x81010100) != 0) break;
        param_1 = puVar10;
        if ((uVar7 & 0x81010100) != 0) {
          if ((uVar7 & 0x1010100) != 0) {
            return (uint *)0x0;
          }
          if ((uVar5 + 0x7efefeff & 0x80000000) == 0) {
            return (uint *)0x0;
          }
        }
      }
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 8);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 1);
      }
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 0x10);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 2);
      }
      if (cVar6 == '\0') break;
      cVar6 = (char)(uVar5 >> 0x18);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 3);
      }
      param_1 = puVar10;
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
    }
    return (uint *)0x0;
  }
  do {
    cVar6 = (char)*param_1;
    do {
      while (puVar10 = param_1, param_1 = (uint *)((int)puVar10 + 1), cVar6 != cVar3) {
        if (cVar6 == '\0') {
          return (uint *)0x0;
        }
        cVar6 = *(char *)param_1;
      }
      cVar6 = *(char *)param_1;
      pcVar8 = param_2;
      puVar4 = puVar10;
    } while (cVar6 != param_2[1]);
    do {
      if (pcVar8[2] == '\0') {
        return puVar10;
      }
      if (*(char *)((int)puVar4 + 2) != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') {
        return puVar10;
      }
      pcVar2 = (char *)((int)puVar4 + 3);
      pcVar8 = pcVar8 + 2;
      puVar4 = (uint *)((int)puVar4 + 2);
    } while (*pcVar1 == *pcVar2);
  } while( true );
}

/* 1006eb5a  FUN_1006eb5a  (10 bytes)
 * undefined FUN_1006eb5a(undefined4 param_1)
 * called by: CCyclerSprite::Animate, CGlow::Animate, CSprite::Animate
 */
void __fastcall FUN_1006eb5a(undefined4 param_1)

{
  __cintrindisp2(param_1,0x1009b950);
  return;
}

/* 1006eb64  FUN_1006eb64  (30 bytes)
 * undefined FUN_1006eb64()
 */
float10 FUN_1006eb64(void)

{
  ushort in_FPUStatusWord;
  float10 in_ST0;
  float10 in_ST1;
  float10 extraout_ST1;
  
  do {
    if (DAT_102e0144 == 1) {
      in_ST1 = FUN_10072e2c();
      in_ST0 = extraout_ST1;
    }
    else {
      in_ST1 = in_ST1 - (float10)(unkint10)(in_ST1 / in_ST0) * in_ST0;
    }
  } while ((in_FPUStatusWord & 0x400) != 0);
  return in_ST1;
}

/* 1006eb82  FUN_1006eb82  (11 bytes)
 * undefined FUN_1006eb82(undefined * param_1)
 * called by: CWorld::Precache, FUN_10023830, FUN_10024720, FUN_100250c0, FUN_10069bf0, Unwind@1007ff10, Unwind@1007ff1b, Unwind@1007ff26, Unwind@1007ff31
 */
void __cdecl FUN_1006eb82(undefined *param_1)

{
  FUN_1006f7f9(param_1);
  return;
}

/* 1006eba0  FUN_1006eba0  (25 bytes)
 * undefined FUN_1006eba0(void)
 * called by: CEnvLight::KeyValue
 */
void FUN_1006eba0(void)

{
  float10 in_ST0;
  float10 in_ST1;
  
  FUN_1006ebc2(SUB84((double)in_ST1,0),(uint)((ulonglong)(double)in_ST1 >> 0x20),
               SUB84((double)in_ST0,0),(uint)((ulonglong)(double)in_ST0 >> 0x20));
  return;
}

/* 1006ebc2  FUN_1006ebc2  (467 bytes)
 * undefined1[10] FUN_1006ebc2(int param_1, uint param_2, int param_3, uint param_4)
 * called by: FUN_1006eba0
 */
/* decompilation failed: 
Low-level Error: Overlapping input varnodes */

/* 1006ed95  FUN_1006ed95  (40 bytes)
 * undefined FUN_1006ed95(void)
 * called by: FUN_1006ebc2
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006ed95(void)

{
  float10 in_ST0;
  
  if (ROUND(in_ST0) == in_ST0) {
    return;
  }
  return;
}

/* 1006edbd  FUN_1006edbd  (126 bytes)
 * undefined4 FUN_1006edbd(undefined4 param_1)
 * called by: FUN_1006ee3b
 */
undefined4 __cdecl FUN_1006edbd(undefined4 param_1)

{
  byte_conflict *pbVar1;
  SIZE_T SVar2;
  
  FUN_10073993();
  pbVar1 = (byte_conflict *)FUN_10073cee(DAT_102e1858);
  if (pbVar1 < DAT_102e1854 + (4 - (int)DAT_102e1858)) {
    SVar2 = FUN_10073cee(DAT_102e1858);
    pbVar1 = FUN_100739bf(DAT_102e1858,(uint *)(SVar2 + 0x10));
    if (pbVar1 == (byte_conflict *)0x0) {
      param_1 = 0;
      goto LAB_1006ee32;
    }
    DAT_102e1854 = pbVar1 + ((int)DAT_102e1854 - (int)DAT_102e1858 >> 2) * 4;
    DAT_102e1858 = pbVar1;
  }
  *(undefined4 *)DAT_102e1854 = param_1;
  DAT_102e1854 = DAT_102e1854 + 4;
LAB_1006ee32:
  FUN_1007399c();
  return param_1;
}

/* 1006ee3b  FUN_1006ee3b  (18 bytes)
 * int FUN_1006ee3b(undefined4 param_1)
 * called by: CBasePlayer::ShootBulletsPlayer, CTSGun::AlternateAttack, FUN_10023700, FUN_10023740, FUN_10042bb0, FUN_1004b050, FUN_1004b400, FUN_1004b8c0, FUN_1004de10, FUN_1005cd00
 */
int __cdecl FUN_1006ee3b(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1006edbd(param_1);
  return (iVar1 != 0) - 1;
}

/* 1006ee4d  FUN_1006ee4d  (47 bytes)
 * undefined FUN_1006ee4d()
 */
void FUN_1006ee4d(void)

{
  DAT_102e1858 = _malloc(0x80);
  if (DAT_102e1858 == (undefined4 *)0x0) {
    __amsg_exit(0x18);
  }
  *DAT_102e1858 = 0;
  DAT_102e1854 = DAT_102e1858;
  return;
}

/* 1006ee7c  FUN_1006ee7c  (9 bytes)
 * undefined FUN_1006ee7c()
 */
void FUN_1006ee7c(void)

{
  __amsg_exit(0x19);
  return;
}

/* 1006ee90  FUN_1006ee90  (20 bytes)
 * undefined FUN_1006ee90(void)
 */
void FUN_1006ee90(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_100735e8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_1006eead(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}

/* 1006eead  FUN_1006eead  (174 bytes)
 * undefined FUN_1006eead(int param_1, uint param_2)
 * called by: FUN_1006ee90
 */
void __cdecl FUN_1006eead(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      FUN_1007358c();
    }
LAB_1006ef3c:
    if (DAT_102e0140 == 0) {
      __startOneArgErrorHandling(&DAT_1009b9b0,0xd,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_10073575();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)),in_ST0);
    }
    else if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_1006ef3c;
    if (DAT_102e0140 == 0) {
      __math_exit(&DAT_1009b9b0,0xd,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  return;
}

/* 1006ef63  FUN_1006ef63  (111 bytes)
 * uint FUN_1006ef63(uint param_1)
 * called by: FUN_1002ff30, FUN_10036580, FUN_1007bc4a
 */
uint __cdecl FUN_1006ef63(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_102e0214 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_102e1848);
    bVar1 = DAT_102e1844 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement(&DAT_102e1848);
      this = (void *)0x13;
      FUN_10073e71(0x13);
    }
    param_1 = FUN_1006efd2(this,param_1);
    if (bVar1) {
      FUN_10073ed2(0x13);
    }
    else {
      InterlockedDecrement(&DAT_102e1848);
    }
  }
  return param_1;
}

/* 1006efd2  FUN_1006efd2  (204 bytes)
 * uint FUN_1006efd2(uint param_1)
 * called by: FUN_1006ef63
 */
uint __thiscall FUN_1006efd2(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_102e0214 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1009bbc4 < 2) {
        uVar2 = (byte)PTR_DAT_1009b9b8[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_1006f09e(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1009b9b8[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10074578(DAT_102e0214,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}

/* 1006f09e  FUN_1006f09e  (117 bytes)
 * uint FUN_1006f09e(int param_1, uint param_2)
 * called by: FUN_1002ff30, FUN_1006e0fb, FUN_1006e152, FUN_1006e728, FUN_1006e7a6, FUN_1006e7fb, FUN_1006e84b, FUN_1006e879, FUN_1006e8a7, FUN_1006efd2, FUN_1006fb04, FUN_10071455, ... (17 total)
 */
uint __thiscall FUN_1006f09e(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1009b9b8 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1009b9b8[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_100747c7(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}

/* 1006f113  FUN_1006f113  (164 bytes)
 * uint FUN_1006f113(byte.conflict * param_1, byte.conflict * param_2)
 * called by: FUN_10039730
 */
uint __cdecl FUN_1006f113(byte_conflict *param_1,byte_conflict *param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  int iVar3;
  byte *pbVar4;
  byte local_24 [32];
  
  pDVar2 = FUN_10070951();
  pbVar4 = local_24;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4 = pbVar4 + 4;
  }
  do {
    bVar1 = *param_2;
    local_24[bVar1 >> 3] = local_24[bVar1 >> 3] | '\x01' << (bVar1 & 7);
    param_2 = param_2 + 1;
  } while (bVar1 != 0);
  if (param_1 == (byte_conflict *)0x0) {
    param_1 = (byte_conflict *)pDVar2[6];
  }
  for (; (bVar1 = *param_1, pbVar4 = param_1, (local_24[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0
         && (bVar1 != 0)); param_1 = param_1 + 1) {
  }
  do {
    bVar1 = *pbVar4;
    if (bVar1 == 0) {
LAB_1006f1a2:
      pDVar2[6] = (DWORD)pbVar4;
      return -(uint)(param_1 != pbVar4) & (uint)param_1;
    }
    if ((local_24[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0) {
      *pbVar4 = 0;
      pbVar4 = pbVar4 + 1;
      goto LAB_1006f1a2;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}

/* 1006f1c0  FUN_1006f1c0  (47 bytes)
 * undefined FUN_1006f1c0(void)
 * called by: CChangeLevel::ChangeList, FUN_10069f30, FUN_10074578, FUN_100747c7, FUN_10075ab7, FUN_1007e4fa, FUN_1007ea8a, FUN_1007f187, FUN_1007f29a, FUN_1007f5bd
 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_1006f1c0(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}

/* 1006f1ef  FUN_1006f1ef  (49 bytes)
 * undefined4 FUN_1006f1ef(FILE * param_1)
 * called by: FUN_1005df50, FUN_1005e180, FUN_100639d0, FUN_10063b50, FUN_100749b8, adjust_weapon_value, save_weapon_value
 */
undefined4 __cdecl FUN_1006f1ef(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_100749cc((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_10074a1e((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}

/* 1006f26c  FUN_1006f26c  (98 bytes)
 * char * FUN_1006f26c(char * param_1, int param_2, undefined4 * param_3)
 * called by: FUN_1005df50, FUN_1005e180, adjust_weapon_value
 */
char * __cdecl FUN_1006f26c(char *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_2 < 1) {
    param_1 = (char *)0x0;
  }
  else {
    FUN_100749cc((uint)param_3);
    pcVar3 = param_1;
    do {
      param_2 = param_2 + -1;
      if (param_2 == 0) break;
      piVar1 = param_3 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        uVar2 = FUN_10074ce1(param_3);
      }
      else {
        uVar2 = (uint)*(byte *)*param_3;
        *param_3 = (byte *)*param_3 + 1;
      }
      if (uVar2 == 0xffffffff) {
        if (pcVar3 == param_1) {
          param_1 = (char *)0x0;
          goto LAB_1006f2c0;
        }
        break;
      }
      *pcVar3 = (char)uVar2;
      pcVar3 = pcVar3 + 1;
    } while ((char)uVar2 != '\n');
    *pcVar3 = '\0';
LAB_1006f2c0:
    FUN_10074a1e((uint)param_3);
  }
  return param_1;
}

/* 1006f2ce  FUN_1006f2ce  (49 bytes)
 * undefined4 * FUN_1006f2ce(LPCSTR param_1, char * param_2, uint param_3)
 * called by: FUN_1006f2ff
 */
undefined4 * __cdecl FUN_1006f2ce(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_10074f2d();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_10074dbd(param_1,param_2,param_3,puVar1);
  FUN_10074a1e((uint)puVar1);
  return puVar2;
}

/* 1006f2ff  FUN_1006f2ff  (19 bytes)
 * undefined FUN_1006f2ff(LPCSTR param_1, char * param_2)
 * called by: FUN_1005df50, FUN_1005e180, FUN_100639d0, FUN_10063b50, adjust_weapon_value, save_weapon_value
 */
void __cdecl FUN_1006f2ff(LPCSTR param_1,char *param_2)

{
  FUN_1006f2ce(param_1,param_2,0x40);
  return;
}

/* 1006f312  FUN_1006f312  (47 bytes)
 * uint FUN_1006f312(char * param_1, uint param_2, uint param_3, int * param_4)
 * called by: FUN_100639d0
 */
uint __cdecl FUN_1006f312(char *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  FUN_100749cc((uint)param_4);
  uVar1 = FUN_1006f341(param_1,param_2,param_3,param_4);
  FUN_10074a1e((uint)param_4);
  return uVar1;
}

/* 1006f341  FUN_1006f341  (232 bytes)
 * uint FUN_1006f341(char * param_1, uint param_2, uint param_3, int * param_4)
 * called by: FUN_1006f312
 */
uint __cdecl FUN_1006f341(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  piVar1 = param_4;
  pcVar6 = (char *)(param_2 * param_3);
  if (pcVar6 == (char *)0x0) {
    param_3 = 0;
  }
  else {
    pcVar5 = param_1;
    param_1 = pcVar6;
    if ((*(ushort *)(param_4 + 3) & 0x10c) == 0) {
      param_4 = (int *)0x1000;
    }
    else {
      param_4 = (int *)param_4[6];
    }
    do {
      if (((*(ushort *)(piVar1 + 3) & 0x10c) == 0) ||
         (pcVar2 = (char *)piVar1[1], pcVar2 == (char *)0x0)) {
        if (param_1 < param_4) {
          uVar4 = FUN_10074ce1(piVar1);
          if (uVar4 == 0xffffffff) goto LAB_1006f41d;
          *pcVar5 = (char)uVar4;
          param_4 = (int *)piVar1[6];
          pcVar5 = pcVar5 + 1;
          param_1 = param_1 + -1;
        }
        else {
          pcVar2 = param_1;
          if (param_4 != (int *)0x0) {
            pcVar2 = param_1 + -((uint)param_1 % (uint)param_4);
          }
          iVar3 = FUN_10074ff5(piVar1[4],pcVar5,pcVar2);
          if (iVar3 == 0) {
            piVar1[3] = piVar1[3] | 0x10;
LAB_1006f41d:
            return (uint)((int)pcVar6 - (int)param_1) / param_2;
          }
          if (iVar3 == -1) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_1006f41d;
          }
          param_1 = param_1 + -iVar3;
          pcVar5 = pcVar5 + iVar3;
        }
      }
      else {
        pcVar7 = param_1;
        if (pcVar2 <= param_1) {
          pcVar7 = pcVar2;
        }
        FUN_10075240((undefined4 *)pcVar5,(undefined4 *)*piVar1,(uint)pcVar7);
        param_1 = param_1 + -(int)pcVar7;
        piVar1[1] = piVar1[1] - (int)pcVar7;
        *piVar1 = (int)(pcVar7 + *piVar1);
        pcVar5 = pcVar5 + (int)pcVar7;
      }
    } while (param_1 != (char *)0x0);
  }
  return param_3;
}

/* 1006f429  FUN_1006f429  (47 bytes)
 * uint FUN_1006f429(char * param_1, uint param_2, uint param_3, int * param_4)
 * called by: FUN_10063b50, save_weapon_value
 */
uint __cdecl FUN_1006f429(char *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  FUN_100749cc((uint)param_4);
  uVar1 = FUN_1006f458(param_1,param_2,param_3,param_4);
  FUN_10074a1e((uint)param_4);
  return uVar1;
}

/* 1006f458  FUN_1006f458  (266 bytes)
 * uint FUN_1006f458(char * param_1, uint param_2, uint param_3, int * param_4)
 * called by: FUN_1006f429
 */
uint __cdecl FUN_1006f458(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar1 = param_4;
  piVar6 = (int *)(param_2 * param_3);
  if (piVar6 == (int *)0x0) {
    param_3 = 0;
  }
  else {
    piVar5 = piVar6;
    if ((*(ushort *)(param_4 + 3) & 0x10c) == 0) {
      param_4 = (int *)0x1000;
    }
    else {
      param_4 = (int *)param_4[6];
    }
    do {
      if (((piVar1[3] & 0x108U) == 0) || (piVar7 = (int *)piVar1[1], piVar7 == (int *)0x0)) {
        if (param_4 <= piVar5) {
          if (((piVar1[3] & 0x108U) != 0) && (iVar2 = FUN_10074bd8(piVar1), iVar2 != 0)) {
LAB_1006f559:
            return (uint)((int)piVar6 - (int)piVar5) / param_2;
          }
          piVar7 = piVar5;
          if (param_4 != (int *)0x0) {
            piVar7 = (int *)((int)piVar5 - (uint)piVar5 % (uint)param_4);
          }
          piVar3 = (int *)FUN_10075575(piVar1[4],param_1,(uint)piVar7);
          if ((piVar3 == (int *)0xffffffff) ||
             (piVar5 = (int *)((int)piVar5 - (int)piVar3), piVar3 < piVar7)) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_1006f559;
          }
          goto LAB_1006f510;
        }
        uVar4 = FUN_10070b33((int)*param_1,piVar1);
        if (uVar4 == 0xffffffff) goto LAB_1006f559;
        param_1 = param_1 + 1;
        param_4 = (int *)piVar1[6];
        piVar5 = (int *)((int)piVar5 - 1);
        if ((int)param_4 < 1) {
          param_4 = (int *)0x1;
        }
      }
      else {
        piVar3 = piVar5;
        if (piVar7 <= piVar5) {
          piVar3 = piVar7;
        }
        FUN_10075240((undefined4 *)*piVar1,(undefined4 *)param_1,(uint)piVar3);
        piVar1[1] = piVar1[1] - (int)piVar3;
        *piVar1 = *piVar1 + (int)piVar3;
        piVar5 = (int *)((int)piVar5 - (int)piVar3);
LAB_1006f510:
        param_1 = param_1 + (int)piVar3;
      }
    } while (piVar5 != (int *)0x0);
  }
  return param_3;
}

/* 1006f562  FUN_1006f562  (44 bytes)
 * int FUN_1006f562(int * param_1, int param_2, DWORD param_3)
 * called by: save_weapon_value
 */
int __cdecl FUN_1006f562(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_100749cc((uint)param_1);
  iVar1 = FUN_1006f58e(param_1,param_2,param_3);
  FUN_10074a1e((uint)param_1);
  return iVar1;
}

/* 1006f58e  FUN_1006f58e  (141 bytes)
 * int FUN_1006f58e(int * param_1, int param_2, DWORD param_3)
 * called by: FUN_1006f562
 */
int __cdecl FUN_1006f58e(int *param_1,int param_2,DWORD param_3)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    pDVar4 = FUN_100757d8();
    *pDVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_100758e4((char *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_10074bd8(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & 0xfffffffc;
    }
    DVar3 = FUN_100757ea(param_1[4],param_2,param_3);
    iVar2 = (DVar3 != 0xffffffff) - 1;
  }
  return iVar2;
}

/* 1006f61b  FUN_1006f61b  (81 bytes)
 * int FUN_1006f61b(undefined1 * param_1, byte.conflict * param_2, undefined4 * param_3)
 * called by: FUN_10068840, UTIL_VarArgs
 */
int __cdecl FUN_1006f61b(undefined1 *param_1,byte_conflict *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  iVar1 = FUN_10070c4b((int *)&local_24,param_2,param_3);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10070b33(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}

/* 1006f66c  FUN_1006f66c  (80 bytes)
 * int FUN_1006f66c(undefined1 * param_1, int param_2, byte.conflict * param_3, undefined4 * param_4)
 * called by: FUN_10069f30
 */
int __cdecl FUN_1006f66c(undefined1 *param_1,int param_2,byte_conflict *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2;
  local_18 = 0x42;
  iVar1 = FUN_10070c4b((int *)&local_24,param_3,param_4);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10070b33(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}

/* 1006f6bc  FUN_1006f6bc  (289 bytes)
 * int * FUN_1006f6bc(int param_1, int param_2)
 * called by: FUN_1006c200, FUN_100708cc, FUN_10070951, FUN_10074910, FUN_10079f4c, FUN_1007a6c7
 */
int * __cdecl FUN_1006f6bc(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *_Size;
  int *local_24;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1008a258;
  pcStack_10 = FUN_100775d8;
  local_14 = ExceptionList;
  puVar2 = (uint *)(param_1 * param_2);
  puVar3 = puVar2;
  ExceptionList = &local_14;
  if (puVar2 < (uint *)0xffffffe1) {
    if (puVar2 == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
    ExceptionList = &local_14;
  }
  do {
    local_24 = (int *)0x0;
    if (puVar3 < (uint *)0xffffffe1) {
      if (DAT_102e0828 == 3) {
        if (puVar2 <= DAT_102e0820) {
          FUN_10073e71(9);
          local_8 = 0;
          local_24 = FUN_100761d6(puVar2);
          local_8 = 0xffffffff;
          FUN_1006f755();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_1006f7a9;
LAB_1006f798:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_1006f7a4:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_102e0828 != 2) || (DAT_1009e444 < puVar3)) goto LAB_1006f7a4;
        FUN_10073e71(9);
        local_8 = 1;
        local_24 = FUN_1007709b((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_1006f7de();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_1006f798;
      }
LAB_1006f7a9:
      local_24 = HeapAlloc(DAT_102e0824,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_102e023c == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_10075a6f(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}

/* 1006f755  FUN_1006f755  (9 bytes)
 * undefined FUN_1006f755(void)
 * called by: FUN_1006f6bc
 */
void FUN_1006f755(void)

{
  FUN_10073ed2(9);
  return;
}

/* 1006f7de  FUN_1006f7de  (9 bytes)
 * undefined FUN_1006f7de(void)
 * called by: FUN_1006f6bc
 */
void FUN_1006f7de(void)

{
  FUN_10073ed2(9);
  return;
}

/* 1006f7f9  FUN_1006f7f9  (215 bytes)
 * undefined FUN_1006f7f9(undefined * param_1)
 * called by: FUN_1006c400, FUN_1006eb82, FUN_100709b8, FUN_100739bf, FUN_10073e05, FUN_10073e71, FUN_10073eff, FUN_10074145, FUN_10074260, FUN_100749b8, FUN_1007786c, FUN_100778c0, ... (25 total)
 */
void __cdecl FUN_1006f7f9(undefined *param_1)

{
  uint *puVar1;
  int local_2c;
  uint *local_28;
  uint local_24;
  uint *local_20;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1008a270;
  pcStack_10 = FUN_100775d8;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_102e0828 == 3) {
    ExceptionList = &local_14;
    FUN_10073e71(9);
    local_8 = 0;
    local_20 = (uint *)FUN_10075e82((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_10075ead(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_1006f863();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_102e0828 != 2) goto LAB_1006f8c5;
    ExceptionList = &local_14;
    FUN_10073e71(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10076fff(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10077056(local_2c,local_24,(byte_conflict *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_1006f8bb();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_1006f8c5:
  HeapFree(DAT_102e0824,0,param_1);
  ExceptionList = local_14;
  return;
}

/* 1006f863  FUN_1006f863  (9 bytes)
 * undefined FUN_1006f863(void)
 * called by: FUN_1006f7f9
 */
void FUN_1006f863(void)

{
  FUN_10073ed2(9);
  return;
}

/* 1006f8bb  FUN_1006f8bb  (9 bytes)
 * undefined FUN_1006f8bb(void)
 * called by: FUN_1006f7f9
 */
void FUN_1006f8bb(void)

{
  FUN_10073ed2(9);
  return;
}

/* 1006f8e2  FUN_1006f8e2  (217 bytes)
 * undefined4 FUN_1006f8e2(undefined4 param_1, int param_2)
 * called by: entry
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1006f8e2(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_102e0160 = GetVersion();
    iVar1 = FUN_10075bff(1);
    if (iVar1 != 0) {
      _DAT_102e016c = DAT_102e0160 >> 8 & 0xff;
      _DAT_102e0168 = DAT_102e0160 & 0xff;
      DAT_102e0160 = DAT_102e0160 >> 0x10;
      _DAT_102e0164 = _DAT_102e0168 * 0x100 + _DAT_102e016c;
      iVar1 = FUN_100708cc();
      if (iVar1 != 0) {
        DAT_102e185c = GetCommandLineA();
        DAT_102e014c = FUN_10077bc6();
        FUN_100776b0();
        FUN_10077979();
        FUN_100778c0();
        FUN_10073881();
        DAT_102e0148 = DAT_102e0148 + 1;
        goto LAB_1006f9b5;
      }
      FUN_10075c5c();
    }
LAB_1006f942:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_102e0148 < 1) goto LAB_1006f942;
      DAT_102e0148 = DAT_102e0148 + -1;
      if (DAT_102e0198 == 0) {
        FUN_100738d0();
      }
      FUN_1007786c();
      FUN_10070920();
      FUN_10075c5c();
    }
    else if (param_2 == 3) {
      FUN_100709b8((undefined *)0x0);
    }
LAB_1006f9b5:
    uVar2 = 1;
  }
  return uVar2;
}

/* 1006fa8b  FUN_1006fa8b  (18 bytes)
 * undefined FUN_1006fa8b(void * param_1)
 * called by: FUN_1006e072
 */
void __fastcall FUN_1006fa8b(void *param_1)

{
  FUN_10077f11(param_1,0x10000,0x30000);
  return;
}

/* 1006fa9d  FUN_1006fa9d  (62 bytes)
 * undefined4 FUN_1006fa9d(void)
 * called by: FUN_1006fadb
 */
/* WARNING: Removing unreachable block (ram,0x1006fad2) */

undefined4 FUN_1006fa9d(void)

{
  return 0;
}

/* 1006fadb  FUN_1006fadb  (41 bytes)
 * undefined FUN_1006fadb(void)
 * called by: FUN_1006e072
 */
void FUN_1006fadb(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_1006fa9d();
  return;
}

/* 1006fb04  FUN_1006fb04  (90 bytes)
 * undefined FUN_1006fb04(char * param_1)
 */
void __cdecl FUN_1006fb04(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_100780aa((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_1009bbc4 < 2) {
        uVar3 = (byte)PTR_DAT_1009b9b8[*param_1 * 2] & 4;
        this = PTR_DAT_1009b9b8;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_1006f09e(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_1009bbc8;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}

/* 1006fb5e  FUN_1006fb5e  (78 bytes)
 * undefined FUN_1006fb5e()
 */
void FUN_1006fb5e(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != DAT_1009bbc8))) {
    pcVar2 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar2;
  }
  if (*param_1 != '\0') {
    do {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
      pcVar2 = param_1;
      if ((cVar1 == '\0') || (cVar1 == 'e')) break;
    } while (cVar1 != 'E');
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + -1;
    } while (*pcVar2 == '0');
    if (*pcVar2 == DAT_1009bbc8) {
      pcVar2 = pcVar3 + -2;
    }
    do {
      cVar1 = *param_1;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + 1;
      *pcVar2 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}

/* 1006fbac  FUN_1006fbac  (24 bytes)
 * undefined FUN_1006fbac()
 */
undefined4 FUN_1006fbac(double *param_1)

{
  if (0.0 <= *param_1) {
    return 1;
  }
  return 0;
}

/* 1006fc02  FUN_1006fc02  (97 bytes)
 * undefined1 * FUN_1006fc02(undefined8 * param_1, undefined1 * param_2, int param_3, int param_4)
 * called by: __cfltcvt
 */
undefined1 * __cdecl FUN_1006fc02(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_100786ef((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_10078678(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_1006fc63(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}

/* 1006fc63  FUN_1006fc63  (194 bytes)
 * undefined1 * FUN_1006fc63(undefined1 * param_1, int param_2, int param_3, int * param_4, char param_5)
 * called by: FUN_1006fc02, FUN_1006fe21
 */
undefined1 * __cdecl
FUN_1006fc63(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_1006ff05(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
  }
  puVar1 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    puVar1 = param_1 + 1;
  }
  puVar2 = puVar1;
  if (0 < param_2) {
    puVar2 = puVar1 + 1;
    *puVar1 = puVar1[1];
    *puVar2 = DAT_1009bbc8;
  }
  puVar3 = FUN_10078810((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
  if (param_3 != 0) {
    *(undefined1 *)puVar3 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar4 = param_4[1] + -1;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
      *(undefined1 *)((int)puVar3 + 1) = 0x2d;
    }
    if (99 < iVar4) {
      *(char *)((int)puVar3 + 2) = *(char *)((int)puVar3 + 2) + (char)(iVar4 / 100);
      iVar4 = iVar4 % 100;
    }
    if (9 < iVar4) {
      *(char *)((int)puVar3 + 3) = *(char *)((int)puVar3 + 3) + (char)(iVar4 / 10);
      iVar4 = iVar4 % 10;
    }
    *(char *)(puVar3 + 1) = (char)puVar3[1] + (char)iVar4;
  }
  return param_1;
}

/* 1006fd25  FUN_1006fd25  (85 bytes)
 * char * FUN_1006fd25(undefined8 * param_1, char * param_2, size_t param_3)
 * called by: __cfltcvt
 */
char * __cdecl FUN_1006fd25(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_100786ef((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_10078678(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_1006fd7a(param_2,param_3,&local_14,'\0');
  return param_2;
}

/* 1006fd7a  FUN_1006fd7a  (167 bytes)
 * char * FUN_1006fd7a(char * param_1, size_t param_2, int * param_3, char param_4)
 * called by: FUN_1006fd25, FUN_1006fe21
 */
char * __cdecl FUN_1006fd7a(char *param_1,size_t param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = param_3[1];
  if ((param_4 != '\0') && (iVar1 - 1U == param_2)) {
    iVar2 = *param_3;
    param_1[(uint)(iVar2 == 0x2d) + (iVar1 - 1U)] = '0';
    (param_1 + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = '\0';
  }
  pcVar3 = param_1;
  if (*param_3 == 0x2d) {
    *param_1 = '-';
    pcVar3 = param_1 + 1;
  }
  if (param_3[1] < 1) {
    FUN_1006ff05(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_1006ff05(pcVar3,1);
    *pcVar3 = DAT_1009bbc8;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_1006ff05(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}

/* 1006fe21  FUN_1006fe21  (147 bytes)
 * undefined FUN_1006fe21(undefined8 * param_1, char * param_2, size_t param_3, int param_4)
 * called by: __cfltcvt
 */
void __cdecl FUN_1006fe21(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_100786ef((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_10078678(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_1006fc63(param_2,param_3,param_4,&local_14,'\x01');
  }
  else {
    pcVar2 = param_2 + (local_14 == 0x2d);
    if (iVar1 < local_10) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_1006fd7a(param_2,param_3,&local_14,'\x01');
  }
  return;
}

/* 1006ff05  FUN_1006ff05  (37 bytes)
 * undefined FUN_1006ff05(char * param_1, int param_2)
 * called by: FUN_1006fc63, FUN_1006fd7a
 */
void __cdecl FUN_1006ff05(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10078900((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}

/* 1006ff2a  FUN_1006ff2a  (127 bytes)
 * undefined FUN_1006ff2a(uint * param_1, byte.conflict * param_2)
 * called by: FUN_1006e0fb
 */
void __thiscall FUN_1006ff2a(void *this,uint *param_1,byte_conflict *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort local_1c [6];
  uint local_10;
  undefined4 uStack_c;
  int local_8;
  
  uVar3 = 0;
  uVar1 = FUN_10078c3e(this,local_1c,&local_8,param_2,0,0,0,0);
  if ((uVar1 & 4) == 0) {
    iVar2 = FUN_1007854a(local_1c,&local_10);
    if (((uVar1 & 2) != 0) || (iVar2 == 1)) {
      uVar3 = 0x80;
    }
    if (((uVar1 & 1) != 0) || (iVar2 == 2)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    local_10 = 0;
    uStack_c = 0;
  }
  *param_1 = uVar3;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_c,local_10);
  param_1[1] = local_8 - (int)param_2;
  return;
}

/* 10070064  FUN_10070064  (155 bytes)
 * undefined4 FUN_10070064(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3, undefined4 param_4, int * param_5, int param_6, PVOID param_7, char param_8)
 * called by: FUN_1006e33a, FUN_1006e3de, FUN_1006e4b9
 */
undefined4 __cdecl
FUN_10070064(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int *param_5,
            int param_6,PVOID param_7,char param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*param_5 != 0x19930520) {
    FUN_10070add();
  }
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((param_1->ExceptionCode == 0xe06d7363) && (0x19930520 < param_1->ExceptionInformation[0])
          ) && (pcVar1 = *(code **)(param_1->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)) {
        uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
      FUN_100700ff(param_1,param_2,param_3,param_4,(int)param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    FUN_100703b9((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}

/* 100700ff  FUN_100700ff  (435 bytes)
 * undefined FUN_100700ff(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3, undefined4 param_4, int param_5, char param_6, int param_7, PVOID param_8)
 * called by: FUN_10070064
 */
void __cdecl
FUN_100700ff(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            char param_6,int param_7,PVOID param_8)

{
  byte_conflict *pbVar1;
  bool bVar2;
  DWORD *pDVar3;
  undefined3 extraout_var;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_18 = local_18 & 0xffffff00;
  local_14 = *(int *)((int)param_2 + 8);
  if ((local_14 < -1) || (*(int *)(param_5 + 4) <= local_14)) {
    FUN_10070add();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
       (param_1->ExceptionInformation[2] == 0)) {
      pDVar3 = FUN_10070951();
      if (pDVar3[0x1b] == 0) {
        return;
      }
      pDVar3 = FUN_10070951();
      param_1 = (PEXCEPTION_RECORD)pDVar3[0x1b];
      pDVar3 = FUN_10070951();
      param_3 = pDVar3[0x1c];
      local_18 = CONCAT31(local_18._1_3_,1);
      bVar2 = FUN_100791af(param_1,1);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        FUN_10070add();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_10070287;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
         (param_1->ExceptionInformation[2] == 0)) {
        FUN_10070add();
      }
    }
    iVar5 = local_14;
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       (param_1->ExceptionInformation[0] == 0x19930520)) {
      piVar4 = (int *)FUN_1006e52e(param_5,param_7,local_14,&local_8,&local_1c);
      do {
        if (local_1c <= local_8) {
          if (param_6 == '\0') {
            return;
          }
          FUN_100707f1((int)param_1);
          return;
        }
        if ((*piVar4 <= iVar5) && (iVar5 <= piVar4[1])) {
          pbVar1 = (byte_conflict *)piVar4[4];
          for (local_10 = piVar4[3]; iVar5 = local_14, 0 < local_10; local_10 = local_10 + -1) {
            piVar6 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
            for (local_c = *piVar6; 0 < local_c; local_c = local_c + -1) {
              piVar6 = piVar6 + 1;
              iVar5 = FUN_1007035c(pbVar1,(byte_conflict *)*piVar6,
                                   (uint *)param_1->ExceptionInformation[2]);
              if (iVar5 != 0) {
                FUN_1007046d(param_1,param_2,param_3,param_4,param_5,pbVar1,(byte_conflict *)*piVar6
                             ,piVar4,param_7,param_8);
                iVar5 = local_14;
                goto LAB_10070267;
              }
            }
            pbVar1 = pbVar1 + 0x10;
          }
        }
LAB_10070267:
        local_8 = local_8 + 1;
        piVar4 = piVar4 + 5;
      } while( true );
    }
  }
LAB_10070287:
  if (param_6 == '\0') {
    FUN_100702b2(param_1,param_2,param_3,param_4,param_5,local_14,param_7,param_8);
    return;
  }
  FUN_10070a64();
  return;
}

/* 100702b2  FUN_100702b2  (170 bytes)
 * undefined FUN_100702b2(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3, undefined4 param_4, int param_5, int param_6, int param_7, PVOID param_8)
 * called by: FUN_100700ff
 */
void __cdecl
FUN_100702b2(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,PVOID param_8)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  pDVar1 = FUN_10070951();
  if ((pDVar1[0x1a] != 0) &&
     (iVar2 = FUN_1006e403(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 != 0)) {
    return;
  }
  piVar3 = (int *)FUN_1006e52e(param_5,param_7,param_6,&local_8,&local_c);
  for (; local_8 < local_c; local_8 = local_8 + 1) {
    if ((*piVar3 <= param_6) && (param_6 <= piVar3[1])) {
      iVar4 = piVar3[3] * 0x10 + piVar3[4];
      iVar2 = *(int *)(iVar4 + -0xc);
      if ((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) {
        FUN_1007046d(param_1,param_2,param_3,param_4,param_5,(byte_conflict *)(iVar4 + -0x10),
                     (byte_conflict *)0x0,piVar3,param_7,param_8);
      }
    }
    piVar3 = piVar3 + 5;
  }
  return;
}

/* 1007035c  FUN_1007035c  (93 bytes)
 * undefined4 FUN_1007035c(byte.conflict * param_1, byte.conflict * param_2, uint * param_3)
 * called by: FUN_100700ff
 */
undefined4 __cdecl FUN_1007035c(byte_conflict *param_1,byte_conflict *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_100703b3:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_1007038d:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_100703b3;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_1007038d;
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* 100703b9  FUN_100703b9  (132 bytes)
 * undefined FUN_100703b9(int param_1, undefined4 param_2, int param_3, int param_4)
 * called by: FUN_10070064, FUN_1007046d
 */
void __cdecl FUN_100703b9(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1008a2d8;
  pcStack_10 = FUN_100775d8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (iVar2 = *(int *)(param_1 + 8); local_8 = 0xffffffff, iVar2 != param_4;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar2 * 8)) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
      FUN_10070add();
    }
    local_8 = 0;
    iVar1 = *(int *)(*(int *)(param_3 + 8) + 4 + iVar2 * 8);
    if (iVar1 != 0) {
      __CallSettingFrame_12(iVar1,param_1,0x103);
    }
  }
  *(int *)(param_1 + 8) = iVar2;
  ExceptionList = local_14;
  return;
}

/* 10070420  FUN_10070420  (10 bytes)
 * undefined FUN_10070420()
 */
void FUN_10070420(void)

{
  int unaff_EBP;
  
  FUN_10070457(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}

/* 10070457  FUN_10070457  (22 bytes)
 * undefined FUN_10070457()
 * called by: FUN_10070420
 */
undefined4 FUN_10070457(undefined4 *param_1)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
  puStack_c = &DAT_1008a320;
  pcStack_10 = FUN_100775d8;
  pvStack_14 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_10070951();
  if (pDVar1[0x18] != 0) {
    uStack_8 = 1;
    pDVar1 = FUN_10070951();
    (*(code *)pDVar1[0x18])();
  }
  uStack_8 = 0xffffffff;
  uVar2 = FUN_100793fc();
  return uVar2;
}

/* 1007046d  FUN_1007046d  (123 bytes)
 * undefined FUN_1007046d(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3, undefined4 param_4, int param_5, byte.conflict * param_6, byte.conflict * param_7, int * param_8, int param_9, PVOID param_10)
 * called by: FUN_100700ff, FUN_100702b2
 */
void __cdecl
FUN_1007046d(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            byte_conflict *param_6,byte_conflict *param_7,int *param_8,int param_9,PVOID param_10)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (byte_conflict *)0x0) {
    FUN_1007062d((int)param_1,(int)param_2,param_6,param_7);
  }
  if (param_10 == (PVOID)0x0) {
    param_10 = param_2;
  }
  FUN_1006e2eb(param_10,param_1);
  FUN_100703b9((int)param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_100704e8((DWORD)param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_1006e2a2(UNRECOVERED_JUMPTABLE);
  }
  return;
}

/* 100704e8  FUN_100704e8  (165 bytes)
 * undefined4 FUN_100704e8(DWORD param_1, undefined4 param_2, DWORD param_3, undefined4 param_4, undefined4 param_5, int param_6, int param_7)
 * called by: FUN_1007046d
 */
undefined4 __cdecl
FUN_100704e8(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1008a2e8;
  pcStack_10 = FUN_100775d8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10070951();
  FUN_10070951();
  pDVar1 = FUN_10070951();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_10070951();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_1006e38a(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_100705b5();
  ExceptionList = local_14;
  return uVar2;
}

/* 1007058d  FUN_1007058d  (10 bytes)
 * undefined FUN_1007058d()
 */
void FUN_1007058d(void)

{
  int unaff_EBP;
  
  FUN_10070603(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}

/* 10070597  FUN_10070597  (24 bytes)
 * undefined FUN_10070597()
 */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

undefined4 FUN_10070597(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(iVar1 + -4) = 0xffffffff;
  *(int *)(iVar1 + -8) = unaff_EBP + -0x10;
  *(undefined4 *)(iVar1 + -0xc) = 0x100705a9;
  __local_unwind2(*(int *)(iVar1 + -8),*(int *)(iVar1 + -4));
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}

/* 100705b5  FUN_100705b5  (78 bytes)
 * undefined FUN_100705b5(void)
 * called by: FUN_100704e8
 */
void FUN_100705b5(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_10070951();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_10070951();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    FUN_100707f1((int)unaff_EDI);
  }
  return;
}

/* 10070603  FUN_10070603  (42 bytes)
 * undefined FUN_10070603()
 * called by: FUN_1007058d
 */
undefined4 FUN_10070603(int *param_1)

{
  param_1 = (int *)*param_1;
  if ((((*param_1 == -0x1f928c9d) && (param_1[4] == 3)) && (param_1[5] == 0x19930520)) &&
     (param_1[7] == 0)) {
    return 1;
  }
  return 0;
}

/* 1007062d  FUN_1007062d  (440 bytes)
 * undefined FUN_1007062d(int param_1, int param_2, byte.conflict * param_3, byte.conflict * param_4)
 * called by: FUN_1007046d
 */
void __cdecl FUN_1007062d(int param_1,int param_2,byte_conflict *param_3,byte_conflict *param_4)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined4 *puVar4;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  uint uVar5;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1008a300;
  pcStack_10 = FUN_100775d8;
  local_14 = ExceptionList;
  if (*(int *)(param_3 + 4) == 0) {
    return;
  }
  if (*(char *)(*(int *)(param_3 + 4) + 8) == '\0') {
    return;
  }
  if (*(int *)(param_3 + 8) == 0) {
    return;
  }
  piVar1 = (int *)(*(int *)(param_3 + 8) + 0xc + param_2);
  local_8 = 0;
  if ((*param_3 & 8) == 0) {
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        ExceptionList = &local_14;
        bVar2 = FUN_100791af(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_03,bVar2) != 0) &&
           (bVar2 = FUN_100791cb(piVar1,1), CONCAT31(extraout_var_04,bVar2) != 0)) {
          uVar5 = *(uint *)(param_4 + 0x14);
          puVar4 = (undefined4 *)FUN_10070858(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_10078900(piVar1,puVar4,uVar5);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_100791af(*(void **)(param_1 + 0x18),1);
        if (((CONCAT31(extraout_var_05,bVar2) != 0) &&
            (bVar2 = FUN_100791cb(piVar1,1), CONCAT31(extraout_var_06,bVar2) != 0)) &&
           (bVar2 = FUN_100791e7(*(FARPROC *)(param_4 + 0x18)), CONCAT31(extraout_var_07,bVar2) != 0
           )) {
          if ((*param_4 & 4) != 0) {
            FUN_10070858(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_1006e2e4(piVar1,*(undefined **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
          FUN_10070858(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_1006e2dd(piVar1,*(undefined **)(param_4 + 0x18));
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_100791af(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var_01,bVar2) != 0) &&
         (bVar2 = FUN_100791cb(piVar1,1), CONCAT31(extraout_var_02,bVar2) != 0)) {
        FUN_10078900(piVar1,*(undefined4 **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_100706bb;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    bVar2 = FUN_100791af(*(void **)(param_1 + 0x18),1);
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (bVar2 = FUN_100791cb(piVar1,1), CONCAT31(extraout_var_00,bVar2) != 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar3;
LAB_100706bb:
      iVar3 = FUN_10070858(iVar3,(int *)(param_4 + 8));
      *piVar1 = iVar3;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_10070add();
  ExceptionList = local_14;
  return;
}

/* 100707e5  FUN_100707e5  (4 bytes)
 * undefined FUN_100707e5()
 */
undefined4 FUN_100707e5(void)

{
  return 1;
}

/* 100707e9  FUN_100707e9  (8 bytes)
 * undefined FUN_100707e9()
 */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void __fastcall FUN_100707e9(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  DWORD *pDVar3;
  undefined4 unaff_EBX;
  undefined1 *puVar4;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(int *)(iVar1 + -4) = unaff_EBP;
  *(undefined4 *)(iVar1 + -8) = 0xffffffff;
  *(undefined **)(iVar1 + -0xc) = &DAT_1008a320;
  *(code **)(iVar1 + -0x10) = FUN_100775d8;
  *(void **)(iVar1 + -0x14) = ExceptionList;
  ExceptionList = (void *)(iVar1 + -0x14);
  *(undefined4 *)(iVar1 + -0x18) = param_1;
  *(undefined4 *)(iVar1 + -0x1c) = param_1;
  *(undefined4 *)(iVar1 + -0x20) = unaff_EBX;
  *(undefined4 *)(iVar1 + -0x24) = unaff_ESI;
  puVar4 = (undefined1 *)(iVar1 + -0x28);
  *(undefined4 *)(iVar1 + -0x28) = unaff_EDI;
  *(int *)(iVar1 + -0x1c) = iVar1 + -0x28;
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined4 *)(iVar1 + -0x2c) = 0x10070a93;
  pDVar3 = FUN_10070951();
  if (pDVar3[0x18] != 0) {
    *(undefined4 *)(iVar1 + -8) = 1;
    *(undefined4 *)(iVar1 + -0x2c) = 0x10070aa4;
    pDVar3 = FUN_10070951();
    pcVar2 = (code *)pDVar3[0x18];
    puVar4 = (undefined1 *)(iVar1 + -0x2c);
    *(undefined4 *)(iVar1 + -0x2c) = 0x10070aa7;
    (*pcVar2)();
    *(undefined4 *)(iVar1 + -8) = 0;
  }
  *(undefined4 *)(iVar1 + -8) = 0xffffffff;
  *(undefined4 *)(puVar4 + -4) = 0x10070ac0;
  FUN_100793fc();
  return;
}

/* 100707f1  FUN_100707f1  (86 bytes)
 * undefined FUN_100707f1(int param_1)
 * called by: FUN_100700ff, FUN_100705b5
 */
void __cdecl FUN_100707f1(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1008a310;
  pcStack_10 = FUN_100775d8;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_1006e2d6(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}

/* 10070847  FUN_10070847  (9 bytes)
 * undefined FUN_10070847()
 */
bool FUN_10070847(void)

{
  int unaff_EBP;
  
  return *(char *)(unaff_EBP + 0xc) != '\0';
}

/* 10070850  FUN_10070850  (8 bytes)
 * undefined FUN_10070850()
 */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void __fastcall FUN_10070850(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  DWORD *pDVar3;
  undefined4 unaff_EBX;
  undefined1 *puVar4;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(int *)(iVar1 + -4) = unaff_EBP;
  *(undefined4 *)(iVar1 + -8) = 0xffffffff;
  *(undefined **)(iVar1 + -0xc) = &DAT_1008a320;
  *(code **)(iVar1 + -0x10) = FUN_100775d8;
  *(void **)(iVar1 + -0x14) = ExceptionList;
  ExceptionList = (void *)(iVar1 + -0x14);
  *(undefined4 *)(iVar1 + -0x18) = param_1;
  *(undefined4 *)(iVar1 + -0x1c) = param_1;
  *(undefined4 *)(iVar1 + -0x20) = unaff_EBX;
  *(undefined4 *)(iVar1 + -0x24) = unaff_ESI;
  puVar4 = (undefined1 *)(iVar1 + -0x28);
  *(undefined4 *)(iVar1 + -0x28) = unaff_EDI;
  *(int *)(iVar1 + -0x1c) = iVar1 + -0x28;
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined4 *)(iVar1 + -0x2c) = 0x10070a93;
  pDVar3 = FUN_10070951();
  if (pDVar3[0x18] != 0) {
    *(undefined4 *)(iVar1 + -8) = 1;
    *(undefined4 *)(iVar1 + -0x2c) = 0x10070aa4;
    pDVar3 = FUN_10070951();
    pcVar2 = (code *)pDVar3[0x18];
    puVar4 = (undefined1 *)(iVar1 + -0x2c);
    *(undefined4 *)(iVar1 + -0x2c) = 0x10070aa7;
    (*pcVar2)();
    *(undefined4 *)(iVar1 + -8) = 0;
  }
  *(undefined4 *)(iVar1 + -8) = 0xffffffff;
  *(undefined4 *)(puVar4 + -4) = 0x10070ac0;
  FUN_100793fc();
  return;
}

/* 10070858  FUN_10070858  (35 bytes)
 * int FUN_10070858(int param_1, int * param_2)
 * called by: FUN_1007062d
 */
int __cdecl FUN_10070858(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = *param_2 + param_1;
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + param_1) + param_2[2]) + iVar1;
  }
  return iVar2;
}

/* 100708cc  FUN_100708cc  (84 bytes)
 * undefined4 FUN_100708cc(void)
 * called by: FUN_1006f8e2
 */
undefined4 FUN_100708cc(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10073ddc();
  DAT_1009bc00 = TlsAlloc();
  if (DAT_1009bc00 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1006f6bc(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1009bc00,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1007093e((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

/* 10070920  FUN_10070920  (30 bytes)
 * undefined FUN_10070920(void)
 * called by: FUN_1006f8e2
 */
void FUN_10070920(void)

{
  FUN_10073e05();
  if (DAT_1009bc00 != 0xffffffff) {
    TlsFree(DAT_1009bc00);
    DAT_1009bc00 = 0xffffffff;
  }
  return;
}

/* 1007093e  FUN_1007093e  (19 bytes)
 * undefined FUN_1007093e(int param_1)
 * called by: FUN_100708cc, FUN_10070951
 */
void __cdecl FUN_1007093e(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1009e530;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}

/* 10070951  FUN_10070951  (103 bytes)
 * DWORD * FUN_10070951(void)
 * called by: FUN_1006e403, FUN_1006f113, FUN_100700ff, FUN_100702b2, FUN_100704e8, FUN_100705b5, FUN_10070a64, FUN_100757d8, FUN_100757e1, FUN_10079284, FUN_1007c2f3, FUN_1007c4d7
 */
DWORD * FUN_10070951(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1009bc00);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1006f6bc(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1009bc00,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1007093e((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_100709ac;
      }
    }
    __amsg_exit(0x10);
  }
LAB_100709ac:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

/* 100709b8  FUN_100709b8  (160 bytes)
 * undefined FUN_100709b8(undefined * param_1)
 * called by: FUN_1006f8e2
 */
void __cdecl FUN_100709b8(undefined *param_1)

{
  if (DAT_1009bc00 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_1009bc00), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_1006f7f9(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_1006f7f9(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_1006f7f9(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_1006f7f9(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_1006f7f9(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_1006f7f9(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_1009e530) {
        FUN_1006f7f9(*(undefined **)(param_1 + 0x50));
      }
      FUN_1006f7f9(param_1);
    }
    TlsSetValue(DAT_1009bc00,(LPVOID)0x0);
    return;
  }
  return;
}

/* 10070a64  FUN_10070a64  (86 bytes)
 * undefined FUN_10070a64(void)
 * called by: FUN_100700ff, FUN_10070add, FUN_1007914b
 */
void FUN_10070a64(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1008a320;
  pcStack_10 = FUN_100775d8;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_10070951();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_10070951();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_100793fc();
  return;
}

/* 10070aac  FUN_10070aac  (4 bytes)
 * undefined FUN_10070aac()
 */
undefined4 FUN_10070aac(void)

{
  return 1;
}

/* 10070add  FUN_10070add  (79 bytes)
 * undefined FUN_10070add(void)
 * called by: FUN_1006e52e, FUN_10070064, FUN_100700ff, FUN_100703b9, FUN_1007062d
 */
void FUN_10070add(void)

{
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1008a338;
  pcStack_10 = FUN_100775d8;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_1009bc04 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_1009bc04)();
  }
  local_8 = 0xffffffff;
  FUN_10070a64();
  return;
}

/* 10070b1a  FUN_10070b1a  (4 bytes)
 * undefined FUN_10070b1a()
 */
undefined4 FUN_10070b1a(void)

{
  return 1;
}

/* 10070b33  FUN_10070b33  (280 bytes)
 * uint FUN_10070b33(uint param_1, int * param_2)
 * called by: FUN_1006e69a, FUN_1006f458, FUN_1006f61b, FUN_1006f66c, FUN_1007138c
 */
uint __cdecl FUN_10070b33(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  byte_conflict bVar5;
  undefined3 extraout_var;
  undefined *puVar6;
  int *piVar7;
  
  piVar4 = param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_10070c3f:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_10070c3f;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_1009c048 && (piVar4 != (int *)&DAT_1009c068)) ||
        (bVar5 = FUN_10079457(uVar2), CONCAT31(extraout_var,bVar5) == 0)))) {
      FUN_10079413(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x1;
      param_2 = (int *)FUN_10075575(uVar2,(char *)&param_1,1);
    }
    else {
      pcVar3 = (char *)piVar4[2];
      piVar7 = (int *)(*piVar4 - (int)pcVar3);
      *piVar4 = (int)(pcVar3 + 1);
      piVar4[1] = piVar4[6] + -1;
      if ((int)piVar7 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_1009e448;
        }
        else {
          puVar6 = (undefined *)((&DAT_102e0700)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_100757ea(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_10075575(uVar2,pcVar3,(uint)piVar7);
      }
      *(undefined1 *)piVar4[2] = (undefined1)param_1;
    }
    if (param_2 == piVar7) {
      return param_1 & 0xff;
    }
    piVar4[3] = piVar4[3] | 0x20;
  }
  return 0xffffffff;
}

/* 10070c4b  FUN_10070c4b  (1825 bytes)
 * int FUN_10070c4b(int * param_1, byte.conflict * param_2, undefined4 * param_3)
 * called by: FUN_1006e69a, FUN_1006f61b, FUN_1006f66c
 */
int __cdecl FUN_10070c4b(int *param_1,byte_conflict *param_2,undefined4 *param_3)

{
  byte_conflict *pbVar1;
  uint uVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  undefined4 uVar5;
  short *psVar6;
  int *piVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined1 local_24c [511];
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  CHAR local_3c [4];
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char local_1a;
  char local_19;
  int local_18;
  int local_14;
  undefined1 *local_10;
  WCHAR *local_c;
  uint local_8;
  
  local_34 = 0;
  bVar9 = *param_2;
  local_10 = (undefined1 *)0x0;
  local_18 = 0;
  pbVar1 = param_2;
  do {
    if ((bVar9 == 0) || (param_2 = pbVar1 + 1, local_18 < 0)) {
      return local_18;
    }
    if (((char)bVar9 < ' ') || ('x' < (char)bVar9)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(byte *)((int)&PTR_FUN_1008a330 + (int)(char)bVar9) & 0xf;
    }
    local_34 = (int)(char)(&DAT_1008a350)[uVar2 * 8 + local_34] >> 4;
    switch(local_34) {
    case 0:
switchD_10070cb9_caseD_0:
      local_28 = 0;
      if ((PTR_DAT_1009b9b8[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        FUN_1007138c((int)(char)bVar9,param_1,&local_18);
        bVar9 = *param_2;
        param_2 = pbVar1 + 2;
      }
      FUN_1007138c((int)(char)bVar9,param_1,&local_18);
      break;
    case 1:
      local_14 = -1;
      local_38 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_8 = 0;
      local_28 = 0;
      break;
    case 2:
      if (bVar9 == 0x20) {
        local_8 = local_8 | 2;
      }
      else if (bVar9 == 0x23) {
        local_8 = local_8 | 0x80;
      }
      else if (bVar9 == 0x2b) {
        local_8 = local_8 | 1;
      }
      else if (bVar9 == 0x2d) {
        local_8 = local_8 | 4;
      }
      else if (bVar9 == 0x30) {
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (bVar9 == 0x2a) {
        local_24 = FUN_1007142a((int *)&param_3);
        if (local_24 < 0) {
          local_8 = local_8 | 4;
          local_24 = -local_24;
        }
      }
      else {
        local_24 = (char)bVar9 + -0x30 + local_24 * 10;
      }
      break;
    case 4:
      local_14 = 0;
      break;
    case 5:
      if (bVar9 == 0x2a) {
        local_14 = FUN_1007142a((int *)&param_3);
        if (local_14 < 0) {
          local_14 = -1;
        }
      }
      else {
        local_14 = (char)bVar9 + -0x30 + local_14 * 10;
      }
      break;
    case 6:
      if (bVar9 == 0x49) {
        if ((*param_2 != 0x36) || (pbVar1[2] != '4')) {
          local_34 = 0;
          goto switchD_10070cb9_caseD_0;
        }
        param_2 = pbVar1 + 3;
        local_8 = local_8 | 0x8000;
      }
      else if (bVar9 == 0x68) {
        local_8 = local_8 | 0x20;
      }
      else if (bVar9 == 0x6c) {
        local_8 = local_8 | 0x10;
      }
      else if (bVar9 == 0x77) {
        local_8 = local_8 | 0x800;
      }
      break;
    case 7:
      pWVar4 = local_c;
      if ((char)bVar9 < 'h') {
        if ((char)bVar9 < 'e') {
          if ((char)bVar9 < 'Y') {
            if (bVar9 == 0x58) {
LAB_100710ca:
              local_30 = 7;
LAB_100710d1:
              local_10 = (undefined1 *)0x10;
              if ((local_8 & 0x80) != 0) {
                local_1a = '0';
                local_19 = (char)local_30 + 'Q';
                local_20 = 2;
              }
              goto LAB_1007113b;
            }
            if (bVar9 != 0x43) {
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_10070e78;
                }
                goto LAB_10071255;
              }
              local_38 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_10070ed9;
            }
            if ((local_8 & 0x830) == 0) {
              local_8 = local_8 | 0x800;
            }
LAB_10070f06:
            if ((local_8 & 0x810) == 0) {
              uVar5 = FUN_1007142a((int *)&param_3);
              local_24c[0] = (char)uVar5;
              local_10 = (undefined1 *)0x1;
            }
            else {
              uVar5 = FUN_10071447((int *)&param_3);
              local_10 = (undefined1 *)FUN_10079480(local_24c,(WCHAR)uVar5);
              if ((int)local_10 < 0) {
                local_2c = 1;
              }
            }
            pWVar4 = (WCHAR *)local_24c;
          }
          else if (bVar9 == 0x5a) {
            psVar6 = (short *)FUN_1007142a((int *)&param_3);
            if ((psVar6 == (short *)0x0) ||
               (pWVar4 = *(WCHAR **)(psVar6 + 2), pWVar4 == (WCHAR *)0x0)) {
              local_c = (WCHAR *)PTR_DAT_1009bc08;
              pWVar4 = (WCHAR *)PTR_DAT_1009bc08;
              goto LAB_1007104b;
            }
            if ((local_8 & 0x800) == 0) {
              local_28 = 0;
              local_10 = (undefined1 *)(int)*psVar6;
            }
            else {
              local_28 = 1;
              local_10 = (undefined1 *)((uint)(int)*psVar6 >> 1);
            }
          }
          else {
            if (bVar9 == 99) goto LAB_10070f06;
            if (bVar9 == 100) goto LAB_10071130;
          }
        }
        else {
LAB_10070ed9:
          local_8 = local_8 | 0x40;
          pWVar4 = (WCHAR *)local_24c;
          if (local_14 < 0) {
            local_14 = 6;
          }
          else if ((local_14 == 0) && (bVar9 == 0x67)) {
            local_14 = 1;
          }
          local_4c = *param_3;
          local_48 = param_3[1];
          param_3 = param_3 + 2;
          local_c = pWVar4;
          (*(code *)PTR___fptrap_1009bbd4)(&local_4c,local_24c,(int)(char)bVar9,local_14,local_38);
          uVar2 = local_8 & 0x80;
          if ((uVar2 != 0) && (local_14 == 0)) {
            (*(code *)PTR___fptrap_1009bbe0)(local_24c);
          }
          if ((bVar9 == 0x67) && (uVar2 == 0)) {
            (*(code *)PTR___fptrap_1009bbd8)(local_24c);
          }
          if (local_24c[0] == '-') {
            local_8 = local_8 | 0x100;
            pWVar4 = (WCHAR *)(local_24c + 1);
            local_c = pWVar4;
          }
LAB_1007104b:
          local_10 = (undefined1 *)_strlen((char *)pWVar4);
          pWVar4 = local_c;
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_10071130:
          local_8 = local_8 | 0x40;
        }
        else {
          if (bVar9 == 0x6e) {
            piVar7 = (int *)FUN_1007142a((int *)&param_3);
            if ((local_8 & 0x20) == 0) {
              *piVar7 = local_18;
            }
            else {
              *(undefined2 *)piVar7 = (undefined2)local_18;
            }
            local_2c = 1;
            break;
          }
          if (bVar9 == 0x6f) {
            local_10 = (undefined1 *)0x8;
            if ((local_8 & 0x80) != 0) {
              local_8 = local_8 | 0x200;
            }
            goto LAB_1007113b;
          }
          if (bVar9 == 0x70) {
            local_14 = 8;
            goto LAB_100710ca;
          }
          if (bVar9 == 0x73) {
LAB_10070e78:
            iVar10 = local_14;
            if (local_14 == -1) {
              iVar10 = 0x7fffffff;
            }
            pWVar3 = (WCHAR *)FUN_1007142a((int *)&param_3);
            if ((local_8 & 0x810) == 0) {
              pWVar4 = pWVar3;
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_1009bc08;
                pWVar4 = (WCHAR *)PTR_DAT_1009bc08;
              }
              for (; (iVar10 != 0 && ((char)*pWVar3 != '\0')); pWVar3 = (WCHAR *)((int)pWVar3 + 1))
              {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar3 - (int)pWVar4);
            }
            else {
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_1009bc0c;
              }
              local_28 = 1;
              for (pWVar4 = pWVar3; (iVar10 != 0 && (*pWVar4 != L'\0')); pWVar4 = pWVar4 + 1) {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar4 - (int)pWVar3 >> 1);
              pWVar4 = pWVar3;
            }
            goto LAB_10071255;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_10071255;
            local_30 = 0x27;
            goto LAB_100710d1;
          }
        }
        local_10 = (undefined1 *)0xa;
LAB_1007113b:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar2 = FUN_1007142a((int *)&param_3);
              uVar13 = (ulonglong)uVar2;
              goto LAB_1007118e;
            }
            uVar2 = FUN_1007142a((int *)&param_3);
          }
          else if ((local_8 & 0x40) == 0) {
            uVar2 = FUN_1007142a((int *)&param_3);
            uVar2 = uVar2 & 0xffff;
          }
          else {
            uVar5 = FUN_1007142a((int *)&param_3);
            uVar2 = (uint)(short)uVar5;
          }
          uVar13 = (ulonglong)(int)uVar2;
        }
        else {
          uVar13 = FUN_10071437((int *)&param_3);
        }
LAB_1007118e:
        iVar10 = (int)(uVar13 >> 0x20);
        if ((((local_8 & 0x40) != 0) && (iVar10 == 0 || (longlong)uVar13 < 0)) &&
           ((longlong)uVar13 < 0)) {
          local_8 = local_8 | 0x100;
          uVar13 = CONCAT44(-(iVar10 + (uint)((int)uVar13 != 0)),-(int)uVar13);
        }
        uVar2 = (uint)(uVar13 >> 0x20);
        uVar15 = uVar13 & 0xffffffff;
        if ((local_8 & 0x8000) == 0) {
          uVar2 = 0;
        }
        if (local_14 < 0) {
          local_14 = 1;
        }
        else {
          local_8 = local_8 & 0xfffffff7;
        }
        if ((int)uVar13 == 0 && uVar2 == 0) {
          local_20 = 0;
        }
        local_c = (WCHAR *)&local_4d;
        while( true ) {
          uVar11 = (uint)uVar15;
          iVar10 = local_14 + -1;
          if ((local_14 < 1) && (uVar11 == 0 && uVar2 == 0)) break;
          local_40 = (int)local_10 >> 0x1f;
          local_44 = (uint)local_10;
          local_14 = iVar10;
          uVar14 = __aullrem(uVar11,uVar2,(uint)local_10,local_40);
          iVar10 = (int)uVar14 + 0x30;
          uVar15 = __aulldiv(uVar11,uVar2,local_44,local_40);
          uVar2 = (uint)(uVar15 >> 0x20);
          if (0x39 < iVar10) {
            iVar10 = iVar10 + local_30;
          }
          pWVar4 = (WCHAR *)((int)local_c + -1);
          *(char *)local_c = (char)iVar10;
          local_c = pWVar4;
        }
        iVar8 = -(int)local_c;
        local_10 = &local_4d + iVar8;
        pWVar4 = (WCHAR *)((int)local_c + 1);
        local_14 = iVar10;
        if (((local_8 & 0x200) != 0) &&
           ((*(char *)pWVar4 != '0' || (local_10 == (undefined1 *)0x0)))) {
          *(char *)local_c = '0';
          local_10 = (undefined1 *)((int)&local_4c + iVar8);
          pWVar4 = local_c;
        }
      }
LAB_10071255:
      local_c = pWVar4;
      uVar2 = local_8;
      if (local_2c == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) == 0) goto LAB_1007128d;
              local_1a = ' ';
            }
            else {
              local_1a = '+';
            }
          }
          else {
            local_1a = '-';
          }
          local_20 = 1;
        }
LAB_1007128d:
        iVar10 = (local_24 - local_20) - (int)local_10;
        if ((local_8 & 0xc) == 0) {
          FUN_100713c1(0x20,iVar10,param_1,&local_18);
        }
        FUN_100713f2(&local_1a,local_20,param_1,&local_18);
        if (((uVar2 & 8) != 0) && ((uVar2 & 4) == 0)) {
          FUN_100713c1(0x30,iVar10,param_1,&local_18);
        }
        if ((local_28 == 0) || (puVar12 = local_10, pWVar4 = local_c, (int)local_10 < 1)) {
          FUN_100713f2((char *)local_c,(int)local_10,param_1,&local_18);
        }
        else {
          do {
            puVar12 = puVar12 + -1;
            iVar8 = FUN_10079480(local_3c,*pWVar4);
            if (iVar8 < 1) break;
            FUN_100713f2(local_3c,iVar8,param_1,&local_18);
            pWVar4 = pWVar4 + 1;
          } while (puVar12 != (undefined1 *)0x0);
        }
        if ((local_8 & 4) != 0) {
          FUN_100713c1(0x20,iVar10,param_1,&local_18);
        }
      }
    }
    bVar9 = *param_2;
    pbVar1 = param_2;
  } while( true );
}

/* 1007138c  FUN_1007138c  (53 bytes)
 * undefined FUN_1007138c(uint param_1, int * param_2, int * param_3)
 * called by: FUN_10070c4b, FUN_100713c1, FUN_100713f2
 */
void __cdecl FUN_1007138c(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_10070b33(param_1,param_2);
  }
  else {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
    uVar2 = param_1 & 0xff;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}

/* 100713c1  FUN_100713c1  (49 bytes)
 * undefined FUN_100713c1(uint param_1, int param_2, int * param_3, int * param_4)
 * called by: FUN_10070c4b
 */
void __cdecl FUN_100713c1(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_1007138c(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

/* 100713f2  FUN_100713f2  (56 bytes)
 * undefined FUN_100713f2(char * param_1, int param_2, int * param_3, int * param_4)
 * called by: FUN_10070c4b
 */
void __cdecl FUN_100713f2(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_1007138c((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

/* 1007142a  FUN_1007142a  (13 bytes)
 * undefined4 FUN_1007142a(int * param_1)
 * called by: FUN_10070c4b
 */
undefined4 __cdecl FUN_1007142a(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}

/* 10071437  FUN_10071437  (16 bytes)
 * undefined8 FUN_10071437(int * param_1)
 * called by: FUN_10070c4b
 */
undefined8 __cdecl FUN_10071437(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}

/* 10071447  FUN_10071447  (14 bytes)
 * undefined4 FUN_10071447(int * param_1)
 * called by: FUN_10070c4b
 */
undefined4 __cdecl FUN_10071447(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}

/* 10071455  FUN_10071455  (2597 bytes)
 * int FUN_10071455(int * param_1, byte.conflict * param_2, undefined4 * param_3)
 * called by: FUN_1006ea8e
 */
int __thiscall FUN_10071455(void *this,int *param_1,byte_conflict *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  void *this_00;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  void *this_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *piVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  WCHAR *pWVar13;
  undefined1 *puVar14;
  int iVar15;
  bool bVar16;
  int *piVar17;
  char local_1c8;
  char local_1c7 [351];
  byte local_68 [32];
  undefined4 *local_48;
  WCHAR local_42;
  uint local_40;
  byte local_3c;
  undefined1 local_3b;
  byte local_39;
  int local_38;
  WCHAR *local_34;
  WCHAR *local_30;
  undefined8 local_2c;
  int local_24;
  int local_20;
  byte local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  int *local_18;
  char local_13;
  char local_12;
  char local_11;
  int local_10;
  char local_9;
  undefined *local_8;
  
  local_19 = '\0';
  bVar1 = *param_2;
  local_8 = (undefined1 *)0x0;
  local_38 = 0;
  pbVar9 = param_2;
  piVar7 = (int *)PTR_DAT_1009b9b8;
  do {
    PTR_DAT_1009b9b8 = (undefined *)piVar7;
    if (bVar1 == 0) {
LAB_10071e5b:
      if (local_18 == (int *)0xffffffff) {
LAB_10071e61:
        if ((local_38 == 0) && (local_19 == '\0')) {
          local_38 = -1;
        }
      }
      return local_38;
    }
    if ((int)DAT_1009bbc4 < 2) {
      uVar5 = *(byte *)((int)piVar7 + (uint)bVar1 * 2) & 8;
    }
    else {
      piVar7 = (int *)&DAT_00000008;
      uVar5 = FUN_1006f09e(this,(uint)bVar1,8);
    }
    if (uVar5 != 0) {
      local_8 = local_8 + -1;
      piVar7 = param_1;
      uVar5 = FUN_10071ee2((int *)&local_8,param_1);
      FUN_10071ecb(uVar5,piVar7);
      uVar5 = FUN_1006e7fb(this_00,(uint)pbVar9[1]);
      piVar7 = extraout_ECX;
      pbVar10 = pbVar9;
      while (pbVar9 = pbVar10 + 1, uVar5 != 0) {
        piVar17 = (int *)(uint)pbVar10[2];
        uVar5 = FUN_1006e7fb(piVar7,(int)(uint)pbVar10[2]);
        piVar7 = piVar17;
        pbVar10 = pbVar9;
      }
    }
    if (*pbVar9 == 0x25) {
      local_39 = 0;
      local_1c = 0;
      local_1b = '\0';
      local_12 = '\0';
      local_13 = '\0';
      local_1a = '\0';
      puVar14 = (undefined1 *)0x0;
      local_9 = '\0';
      local_20 = 0;
      local_24 = 0;
      local_10 = 0;
      local_11 = '\x01';
      local_34 = (WCHAR *)0x0;
      do {
        uVar5 = (uint)pbVar9[1];
        param_2 = pbVar9 + 1;
        if ((int)DAT_1009bbc4 < 2) {
          uVar6 = (byte)PTR_DAT_1009b9b8[uVar5 * 2] & 4;
          piVar7 = (int *)PTR_DAT_1009b9b8;
        }
        else {
          piVar17 = (int *)0x4;
          uVar6 = FUN_1006f09e(piVar7,uVar5,4);
          piVar7 = piVar17;
        }
        if (uVar6 == 0) {
          if (uVar5 < 0x4f) {
            if (uVar5 != 0x4e) {
              if (uVar5 == 0x2a) {
                local_12 = local_12 + '\x01';
              }
              else if (uVar5 != 0x46) {
                if (uVar5 == 0x49) {
                  if ((pbVar9[2] != 0x36) || (pbVar9[3] != 0x34)) goto LAB_100715b0;
                  local_34 = (WCHAR *)((int)local_34 + 1);
                  local_2c = 0;
                  param_2 = pbVar9 + 3;
                }
                else if (uVar5 == 0x4c) {
                  local_11 = local_11 + '\x01';
                }
                else {
LAB_100715b0:
                  local_13 = local_13 + '\x01';
                }
              }
            }
          }
          else if (uVar5 == 0x68) {
            local_11 = local_11 + -1;
            local_9 = local_9 + -1;
          }
          else {
            if (uVar5 == 0x6c) {
              local_11 = local_11 + '\x01';
            }
            else if (uVar5 != 0x77) goto LAB_100715b0;
            local_9 = local_9 + '\x01';
          }
        }
        else {
          local_24 = local_24 + 1;
          local_10 = (uVar5 - 0x30) + local_10 * 10;
        }
        pbVar9 = param_2;
      } while (local_13 == '\0');
      puVar2 = param_3;
      if (local_12 == '\0') {
        local_30 = (WCHAR *)*param_3;
        puVar2 = param_3 + 1;
        local_48 = param_3;
      }
      param_3 = puVar2;
      local_13 = '\0';
      if (local_9 == '\0') {
        if ((*param_2 == 0x53) || (*param_2 == 0x43)) {
          local_9 = '\x01';
        }
        else {
          local_9 = -1;
        }
      }
      uVar5 = *param_2 | 0x20;
      local_40 = uVar5;
      if (uVar5 != 0x6e) {
        if ((uVar5 == 99) || (uVar5 == 0x7b)) {
          local_8 = local_8 + 1;
          piVar7 = param_1;
          local_18 = (int *)FUN_10071eb1(param_1);
        }
        else {
          piVar7 = param_1;
          local_18 = (int *)FUN_10071ee2((int *)&local_8,param_1);
        }
      }
      if ((local_24 != 0) && (local_10 == 0)) {
LAB_10071e3b:
        local_8 = local_8 + -1;
        FUN_10071ecb((uint)local_18,param_1);
        goto LAB_10071e5b;
      }
      if (uVar5 < 0x70) {
        if (uVar5 == 0x6f) {
LAB_10071b68:
          if (local_18 == (int *)0x2d) {
            local_1b = '\x01';
          }
          else if (local_18 != (int *)0x2b) goto LAB_10071b9d;
          local_10 = local_10 + -1;
          if ((local_10 == 0) && (local_24 != 0)) {
            local_13 = '\x01';
          }
          else {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10071eb1(param_1);
          }
          goto LAB_10071b9d;
        }
        if (uVar5 != 99) {
          if (uVar5 == 100) goto LAB_10071b68;
          if (uVar5 < 0x65) {
LAB_100718e0:
            if ((int *)(uint)*param_2 != local_18) goto LAB_10071e3b;
            local_19 = local_19 + -1;
            if (local_12 == '\0') {
              param_3 = local_48;
            }
            goto LAB_10071dbc;
          }
          if (0x67 < uVar5) {
            if (uVar5 == 0x69) {
              uVar5 = 100;
              goto LAB_1007169e;
            }
            if (uVar5 != 0x6e) goto LAB_100718e0;
            puVar14 = local_8;
            if (local_12 != '\0') goto LAB_10071dbc;
            goto LAB_10071d96;
          }
          pcVar11 = &local_1c8;
          if (local_18 == (int *)0x2d) {
            local_1c8 = '-';
            pcVar11 = local_1c7;
LAB_100716d4:
            local_10 = local_10 + -1;
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10071eb1(param_1);
          }
          else if (local_18 == (int *)0x2b) goto LAB_100716d4;
          if ((local_24 == 0) || (0x15d < local_10)) {
            local_10 = 0x15d;
          }
          while( true ) {
            piVar17 = local_18;
            if ((int)DAT_1009bbc4 < 2) {
              uVar5 = (byte)PTR_DAT_1009b9b8[(int)local_18 * 2] & 4;
            }
            else {
              uVar5 = FUN_1006f09e(piVar7,(int)local_18,4);
            }
            if ((uVar5 == 0) ||
               (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
            local_20 = local_20 + 1;
            *pcVar11 = (char)piVar17;
            pcVar11 = pcVar11 + 1;
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10071eb1(param_1);
          }
          if ((DAT_1009bbc8 == (char)piVar17) &&
             (iVar15 = local_10 + -1, bVar16 = local_10 != 0, local_10 = iVar15, bVar16)) {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            piVar17 = (int *)FUN_10071eb1(param_1);
            *pcVar11 = DAT_1009bbc8;
            while( true ) {
              pcVar11 = pcVar11 + 1;
              local_18 = piVar17;
              if ((int)DAT_1009bbc4 < 2) {
                uVar5 = (byte)PTR_DAT_1009b9b8[(int)piVar17 * 2] & 4;
              }
              else {
                uVar5 = FUN_1006f09e(piVar7,(int)piVar17,4);
              }
              if ((uVar5 == 0) ||
                 (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
              local_20 = local_20 + 1;
              *pcVar11 = (char)piVar17;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              piVar17 = (int *)FUN_10071eb1(param_1);
            }
          }
          pcVar12 = pcVar11;
          if ((local_20 != 0) &&
             (((piVar17 == (int *)0x65 || (piVar17 == (int *)0x45)) &&
              (iVar15 = local_10 + -1, bVar16 = local_10 != 0, local_10 = iVar15, bVar16)))) {
            *pcVar11 = 'e';
            pcVar12 = pcVar11 + 1;
            local_8 = local_8 + 1;
            piVar7 = param_1;
            piVar17 = (int *)FUN_10071eb1(param_1);
            local_18 = piVar17;
            if (piVar17 == (int *)0x2d) {
              *pcVar12 = '-';
              pcVar12 = pcVar11 + 2;
LAB_100717fb:
              bVar16 = local_10 != 0;
              local_10 = local_10 + -1;
              if (bVar16) goto LAB_1007180a;
              local_10 = 0;
            }
            else if (piVar17 == (int *)0x2b) goto LAB_100717fb;
            while( true ) {
              if ((int)DAT_1009bbc4 < 2) {
                uVar5 = (byte)PTR_DAT_1009b9b8[(int)piVar17 * 2] & 4;
              }
              else {
                uVar5 = FUN_1006f09e(piVar7,(int)piVar17,4);
              }
              if ((uVar5 == 0) ||
                 (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
              local_20 = local_20 + 1;
              *pcVar12 = (char)piVar17;
              pcVar12 = pcVar12 + 1;
LAB_1007180a:
              local_8 = local_8 + 1;
              piVar7 = param_1;
              piVar17 = (int *)FUN_10071eb1(param_1);
              local_18 = piVar17;
            }
          }
          local_8 = local_8 + -1;
          piVar7 = param_1;
          FUN_10071ecb((uint)piVar17,param_1);
          if (local_20 != 0) {
            if (local_12 == '\0') {
              local_38 = local_38 + 1;
              *pcVar12 = '\0';
              (*(code *)PTR___fptrap_1009bbdc)(local_11 + -1,local_30,&local_1c8);
              piVar7 = extraout_ECX_00;
            }
            goto LAB_10071dbc;
          }
          goto LAB_10071e5b;
        }
        if (local_24 == 0) {
          local_10 = local_10 + 1;
          local_24 = 1;
        }
        if ('\0' < local_9) {
          local_1a = '\x01';
        }
        pcVar11 = &DAT_1009bc18;
LAB_100719c1:
        local_1c = 0xff;
        pbVar9 = (byte *)pcVar11;
        pbVar10 = param_2;
LAB_100719c5:
        param_2 = pbVar10;
        _memset(local_68,0,0x20);
        if ((local_40 == 0x7b) && (*pbVar9 == 0x5d)) {
          uVar5 = 0x5d;
          local_68[0xb] = 0x20;
          pbVar9 = pbVar9 + 1;
        }
        else {
          uVar5 = (uint)local_39;
        }
        while (pWVar13 = local_30, bVar1 = *pbVar9, bVar1 != 0x5d) {
          if (((bVar1 == 0x2d) && (bVar8 = (byte)uVar5, bVar8 != 0)) &&
             (bVar4 = pbVar9[1], bVar4 != 0x5d)) {
            if (bVar4 <= bVar8) {
              uVar5 = (uint)bVar4;
              bVar4 = bVar8;
            }
            if ((byte)uVar5 <= bVar4) {
              iVar15 = (bVar4 - uVar5) + 1;
              do {
                local_68[uVar5 >> 3] = local_68[uVar5 >> 3] | '\x01' << ((byte)uVar5 & 7);
                uVar5 = uVar5 + 1;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
            }
            uVar5 = 0;
            pbVar9 = pbVar9 + 2;
          }
          else {
            uVar5 = (uint)bVar1;
            local_68[bVar1 >> 3] = local_68[bVar1 >> 3] | '\x01' << (bVar1 & 7);
            pbVar9 = pbVar9 + 1;
          }
        }
        if (*pbVar9 == 0) goto LAB_10071e5b;
        if (local_40 == 0x7b) {
          param_2 = pbVar9;
        }
        local_8 = local_8 + -1;
        local_34 = local_30;
        piVar7 = param_1;
        FUN_10071ecb((uint)local_18,param_1);
        while( true ) {
          if ((local_24 != 0) &&
             (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16))
          goto LAB_10071b2a;
          local_8 = local_8 + 1;
          local_18 = (int *)FUN_10071eb1(param_1);
          if (local_18 == (int *)0xffffffff) break;
          bVar1 = (byte)local_18;
          piVar7 = (int *)(int)(char)(local_68[(int)local_18 >> 3] ^ local_1c);
          if (((uint)piVar7 & 1 << (bVar1 & 7)) == 0) break;
          if (local_12 == '\0') {
            if (local_1a == '\0') {
              *(byte *)pWVar13 = bVar1;
              pWVar13 = (WCHAR *)((int)pWVar13 + 1);
              local_30 = pWVar13;
            }
            else {
              local_3c = bVar1;
              if ((PTR_DAT_1009b9b8[((uint)local_18 & 0xff) * 2 + 1] & 0x80) != 0) {
                local_8 = local_8 + 1;
                uVar5 = FUN_10071eb1(param_1);
                local_3b = (undefined1)uVar5;
              }
              FUN_10079635(&local_42,&local_3c,DAT_1009bbc4);
              *pWVar13 = local_42;
              pWVar13 = pWVar13 + 1;
              piVar7 = extraout_ECX_01;
              local_30 = pWVar13;
            }
          }
          else {
            local_34 = (WCHAR *)((int)local_34 + 1);
          }
        }
        local_8 = local_8 + -1;
        piVar7 = param_1;
        FUN_10071ecb((uint)local_18,param_1);
LAB_10071b2a:
        if (local_34 == pWVar13) goto LAB_10071e5b;
        if ((local_12 == '\0') && (local_38 = local_38 + 1, local_40 != 99)) {
          if (local_1a == '\0') {
            *(byte *)local_30 = 0;
          }
          else {
            *local_30 = L'\0';
          }
        }
      }
      else {
        if (uVar5 == 0x70) {
          local_11 = '\x01';
          goto LAB_10071b68;
        }
        if (uVar5 == 0x73) {
          if ('\0' < local_9) {
            local_1a = '\x01';
          }
          pcVar11 = s_____1009bc10;
          goto LAB_100719c1;
        }
        if (uVar5 == 0x75) goto LAB_10071b68;
        if (uVar5 != 0x78) {
          if (uVar5 != 0x7b) goto LAB_100718e0;
          if ('\0' < local_9) {
            local_1a = '\x01';
          }
          pbVar9 = param_2 + 1;
          pbVar10 = pbVar9;
          if (*pbVar9 == 0x5e) {
            pcVar11 = (char *)(param_2 + 2);
            param_2 = pbVar9;
            goto LAB_100719c1;
          }
          goto LAB_100719c5;
        }
LAB_1007169e:
        if (local_18 == (int *)0x2d) {
          local_1b = '\x01';
LAB_1007192d:
          local_10 = local_10 + -1;
          if ((local_10 == 0) && (local_24 != 0)) {
            local_13 = '\x01';
          }
          else {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10071eb1(param_1);
          }
        }
        else if (local_18 == (int *)0x2b) goto LAB_1007192d;
        if (local_18 == (int *)0x30) {
          local_8 = local_8 + 1;
          piVar7 = param_1;
          local_18 = (int *)FUN_10071eb1(param_1);
          if (((char)local_18 == 'x') || ((char)local_18 == 'X')) {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10071eb1(param_1);
            uVar5 = 0x78;
          }
          else {
            local_20 = 1;
            if (uVar5 == 0x78) {
              local_8 = local_8 + -1;
              piVar7 = param_1;
              FUN_10071ecb((uint)local_18,param_1);
              local_18 = (int *)0x30;
            }
            else {
              uVar5 = 0x6f;
            }
          }
        }
LAB_10071b9d:
        if (local_34 == (WCHAR *)0x0) {
          if (local_13 == '\0') {
            while ((piVar17 = local_18, uVar5 != 0x78 && (uVar5 != 0x70))) {
              if ((int)DAT_1009bbc4 < 2) {
                uVar6 = (byte)PTR_DAT_1009b9b8[(int)local_18 * 2] & 4;
              }
              else {
                piVar3 = (int *)0x4;
                uVar6 = FUN_1006f09e(piVar7,(int)local_18,4);
                piVar7 = piVar3;
              }
              if (uVar6 == 0) goto LAB_10071d64;
              if (uVar5 == 0x6f) {
                if (0x37 < (int)piVar17) goto LAB_10071d64;
                iVar15 = (int)puVar14 << 3;
              }
              else {
                iVar15 = (int)puVar14 * 10;
              }
LAB_10071d3c:
              local_20 = local_20 + 1;
              puVar14 = (undefined1 *)(iVar15 + -0x30 + (int)piVar17);
              if ((local_24 != 0) && (local_10 = local_10 + -1, local_10 == 0)) goto LAB_10071d72;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              local_18 = (int *)FUN_10071eb1(param_1);
            }
            if ((int)DAT_1009bbc4 < 2) {
              uVar6 = (byte)PTR_DAT_1009b9b8[(int)local_18 * 2] & 0x80;
            }
            else {
              piVar3 = (int *)0x80;
              uVar6 = FUN_1006f09e(piVar7,(int)local_18,0x80);
              piVar7 = piVar3;
            }
            if (uVar6 != 0) {
              iVar15 = (int)puVar14 << 4;
              piVar3 = piVar17;
              piVar17 = (int *)FUN_10071e7a(piVar7,(uint)piVar17);
              piVar7 = piVar3;
              local_18 = piVar17;
              goto LAB_10071d3c;
            }
LAB_10071d64:
            local_8 = local_8 + -1;
            piVar7 = param_1;
            FUN_10071ecb((uint)piVar17,param_1);
          }
LAB_10071d72:
          if (local_1b != '\0') {
            puVar14 = (undefined1 *)-(int)puVar14;
          }
        }
        else {
          if (local_13 == '\0') {
            while (piVar17 = local_18, uVar5 != 0x78) {
              if ((int)DAT_1009bbc4 < 2) {
                uVar6 = (byte)PTR_DAT_1009b9b8[(int)local_18 * 2] & 4;
              }
              else {
                uVar6 = FUN_1006f09e(piVar7,(int)local_18,4);
              }
              if (uVar6 == 0) goto LAB_10071c86;
              if (uVar5 == 0x6f) {
                if (0x37 < (int)piVar17) goto LAB_10071c86;
                local_2c = __allshl('\x03',(int)local_2c._4_4_);
                piVar7 = extraout_ECX_02;
              }
              else {
                local_2c = __allmul((uint)local_2c,(int)local_2c._4_4_,10,0);
                piVar7 = extraout_ECX_03;
              }
LAB_10071c58:
              local_20 = local_20 + 1;
              piVar17 = piVar17 + -0xc;
              local_2c = CONCAT44((int)local_2c._4_4_ + ((int)piVar17 >> 0x1f) +
                                  (uint)CARRY4((uint)local_2c,(uint)piVar17),
                                  (undefined1 *)((uint)local_2c + (int)piVar17));
              if ((local_24 != 0) && (local_10 = local_10 + -1, local_10 == 0)) goto LAB_10071c94;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              local_18 = (int *)FUN_10071eb1(param_1);
            }
            if ((int)DAT_1009bbc4 < 2) {
              uVar6 = (byte)PTR_DAT_1009b9b8[(int)local_18 * 2] & 0x80;
            }
            else {
              uVar6 = FUN_1006f09e(piVar7,(int)local_18,0x80);
            }
            if (uVar6 != 0) {
              local_2c = __allshl('\x04',(int)local_2c._4_4_);
              piVar7 = piVar17;
              piVar17 = (int *)FUN_10071e7a(this_01,(uint)piVar17);
              local_18 = piVar17;
              goto LAB_10071c58;
            }
LAB_10071c86:
            local_8 = local_8 + -1;
            piVar7 = param_1;
            FUN_10071ecb((uint)piVar17,param_1);
          }
LAB_10071c94:
          if (local_1b != '\0') {
            piVar7 = (int *)-((int)local_2c._4_4_ + (uint)((uint)local_2c != 0));
            local_2c = CONCAT44(piVar7,-(uint)local_2c);
          }
        }
        if (uVar5 == 0x46) {
          local_20 = 0;
        }
        if (local_20 == 0) goto LAB_10071e5b;
        if (local_12 == '\0') {
          local_38 = local_38 + 1;
LAB_10071d96:
          if (local_34 == (WCHAR *)0x0) {
            if (local_11 == '\0') {
              *local_30 = (WCHAR)puVar14;
            }
            else {
              *(undefined1 **)local_30 = puVar14;
            }
          }
          else {
            *(uint *)local_30 = (uint)local_2c;
            *(int **)(local_30 + 2) = local_2c._4_4_;
            piVar7 = local_2c._4_4_;
          }
        }
      }
LAB_10071dbc:
      local_19 = local_19 + '\x01';
      param_2 = param_2 + 1;
      this = piVar7;
    }
    else {
      local_8 = local_8 + 1;
      piVar7 = (int *)FUN_10071eb1(param_1);
      param_2 = pbVar9 + 1;
      local_18 = piVar7;
      if ((int *)(uint)*pbVar9 != piVar7) goto LAB_10071e3b;
      this = PTR_DAT_1009b9b8;
      if ((PTR_DAT_1009b9b8[((uint)piVar7 & 0xff) * 2 + 1] & 0x80) != 0) {
        local_8 = local_8 + 1;
        piVar17 = (int *)FUN_10071eb1(param_1);
        this = (void *)(uint)*param_2;
        param_2 = pbVar9 + 2;
        if (this != piVar17) {
          local_8 = local_8 + -1;
          FUN_10071ecb((uint)piVar17,param_1);
          local_8 = local_8 + -1;
          FUN_10071ecb((uint)piVar7,param_1);
          goto LAB_10071e5b;
        }
        local_8 = local_8 + -1;
      }
    }
    if ((local_18 == (int *)0xffffffff) && ((*param_2 != '%' || (param_2[1] != 'n'))))
    goto LAB_10071e61;
    bVar1 = *param_2;
    pbVar9 = param_2;
    piVar7 = (int *)PTR_DAT_1009b9b8;
  } while( true );
}

/* 10071e7a  FUN_10071e7a  (55 bytes)
 * uint FUN_10071e7a(uint param_1)
 * called by: FUN_10071455
 */
uint __thiscall FUN_10071e7a(void *this,uint param_1)

{
  uint uVar1;
  
  if (DAT_1009bbc4 < 2) {
    uVar1 = (byte)PTR_DAT_1009b9b8[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_1006f09e(this,param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}

/* 10071eb1  FUN_10071eb1  (26 bytes)
 * uint FUN_10071eb1(undefined4 * param_1)
 * called by: FUN_10071455, FUN_10071ee2
 */
uint __cdecl FUN_10071eb1(undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    return (uint)bVar2;
  }
  uVar3 = FUN_10074ce1(param_1);
  return uVar3;
}

/* 10071ecb  FUN_10071ecb  (23 bytes)
 * undefined FUN_10071ecb(uint param_1, int * param_2)
 * called by: FUN_10071455
 */
void __cdecl FUN_10071ecb(uint param_1,int *param_2)

{
  if (param_1 != 0xffffffff) {
    FUN_100797a8(param_1,param_2);
  }
  return;
}

/* 10071ee2  FUN_10071ee2  (36 bytes)
 * uint FUN_10071ee2(int * param_1, undefined4 * param_2)
 * called by: FUN_10071455
 */
uint __cdecl FUN_10071ee2(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  void *this;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_10071eb1(param_2);
    uVar2 = FUN_1006e7fb(this,uVar1);
  } while (uVar2 != 0);
  return uVar1;
}

/* 10071f20  FUN_10071f20  (188 bytes)
 * uint * FUN_10071f20(uint * param_1, char param_2)
 * called by: FUN_10075ab7, FUN_1007faab
 */
uint * __cdecl FUN_10071f20(uint *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)param_1 & 3) != 0) {
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}

/* 100720a3  FUN_100720a3  (7 bytes)
 * undefined FUN_100720a3(void)
 * called by: __ctrandisp1, __ctrandisp2
 */
void FUN_100720a3(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  *(byte *)(unaff_EBP + -0x2c8) = *(byte *)(unaff_EBP + -0x2c8) & 0xfe;
  if (DAT_102e0140 != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if ((cVar1 != -1) && (cVar1 != -2)) {
      if (cVar1 == '\0') {
        return;
      }
      *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
      goto LAB_10072179;
    }
    uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    if (uVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 4;
      in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
      if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
        in_ST0 = in_ST0 * (float10)0.0;
      }
      goto LAB_10072179;
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.79769313486232e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_10072179;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_10072179:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  FUN_10079816((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),(int *)(unaff_EBP + -0x8e),
               (ushort *)(unaff_EBP + -0xa4));
  return;
}

/* 100720aa  FUN_100720aa  (305 bytes)
 * undefined FUN_100720aa(void)
 * called by: __cintrindisp1, __cintrindisp2
 */
void FUN_100720aa(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  if (DAT_102e0140 != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if ((cVar1 != -1) && (cVar1 != -2)) {
      if (cVar1 == '\0') {
        return;
      }
      *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
      goto LAB_10072179;
    }
    uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    if (uVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 4;
      in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
      if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
        in_ST0 = in_ST0 * (float10)0.0;
      }
      goto LAB_10072179;
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.79769313486232e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_10072179;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_10072179:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  FUN_10079816((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),(int *)(unaff_EBP + -0x8e),
               (ushort *)(unaff_EBP + -0xa4));
  return;
}

/* 10072354  FUN_10072354  (7 bytes)
 * undefined FUN_10072354()
 */
float10 FUN_10072354(void)

{
  return (float10)0;
}

/* 1007238d  FUN_1007238d  (42 bytes)
 * undefined FUN_1007238d()
 */
float10 FUN_1007238d(void)

{
  int unaff_EBP;
  float10 in_ST0;
  unkbyte10 in_ST1;
  
  *(unkbyte10 *)(unaff_EBP + -0x9e) = in_ST1;
  if ((*(byte *)(unaff_EBP + -0x97) & 0x40) == 0) {
    *(undefined1 *)(unaff_EBP + -0x90) = 1;
  }
  else {
    *(undefined1 *)(unaff_EBP + -0x90) = 7;
  }
  return *(float10 *)(unaff_EBP + -0x9e) + in_ST0;
}

/* 100723b7  FUN_100723b7  (63 bytes)
 * undefined FUN_100723b7()
 */
float10 FUN_100723b7(void)

{
  float10 fVar1;
  int unaff_EBP;
  unkbyte10 in_ST0;
  float10 fVar2;
  float10 in_ST1;
  
  *(unkbyte10 *)(unaff_EBP + -0x9e) = in_ST0;
  fVar1 = *(float10 *)(unaff_EBP + -0x9e);
  fVar2 = fVar1;
  if ((*(byte *)(unaff_EBP + -0x97) & 0x40) != 0) {
    *(float10 *)(unaff_EBP + -0x9e) = in_ST1;
    fVar2 = *(float10 *)(unaff_EBP + -0x9e);
    in_ST1 = fVar1;
    if ((*(byte *)(unaff_EBP + -0x97) & 0x40) != 0) {
      *(undefined1 *)(unaff_EBP + -0x90) = 7;
      goto LAB_100723f3;
    }
  }
  *(undefined1 *)(unaff_EBP + -0x90) = 1;
LAB_100723f3:
  return fVar2 + in_ST1;
}

/* 100723f6  FUN_100723f6  (29 bytes)
 * undefined FUN_100723f6()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unkbyte10 FUN_100723f6(void)

{
  int unaff_EBP;
  unkbyte10 Var1;
  
  Var1 = _DAT_1009bc20;
  if (*(char *)(unaff_EBP + -0x90) < '\x01') {
    *(undefined1 *)(unaff_EBP + -0x90) = 1;
  }
  return Var1;
}

/* 10072c26  FUN_10072c26  (518 bytes)
 * undefined4 FUN_10072c26(undefined4 param_1, uint param_2, ushort param_3)
 * called by: FUN_10072e2c
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10072c26(undefined4 param_1,uint param_2,ushort param_3)

{
  undefined4 in_EAX;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 in_stack_0000001c;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  ushort in_stack_00000024;
  
  if ((((((CONCAT22(param_3,param_2._2_2_) ^ 0x700) & 0x700) == 0) &&
       ((&DAT_1009bc6c)[(param_2._2_2_ & 0x7800) >> 0xb] != '\0')) && ((param_3 & 0x7fff) != 0x7fff)
      ) && ((((in_stack_00000024 & 0x7fff) != 0 && ((in_stack_00000024 & 0x7fff) != 0x7fff)) &&
            (((CONCAT22(in_stack_00000022,in_stack_00000020) & 0x7fffffff) == 0 &&
             ((param_2 & 0x7fffffff) == 0)))))) {
    if ((ushort)((param_3 & 0x7fff) + 0x3f) < (in_stack_00000024 & 0x7fff)) {
      iVar1 = ((in_stack_00000024 & 0x7fff) - (param_3 & 0x7fff) & 0x3f | 0x20) + 1;
      fVar3 = ABS((float10)CONCAT28(in_stack_00000024 & 0x7fff | param_3 & 0x8000,
                                    CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))));
      fVar2 = ABS((float10)CONCAT28(in_stack_00000024,
                                    CONCAT26(in_stack_00000022,
                                             CONCAT24(in_stack_00000020,in_stack_0000001c))));
      do {
        if (fVar3 <= fVar2) {
          fVar2 = fVar2 - fVar3;
        }
        fVar3 = fVar3 * (float10)_DAT_1009bc9c;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else {
      while (-1 < (int)((in_stack_00000024 & 0x7fff) - ((param_3 & 0x7fff) + 10))) {
        fVar2 = (float10)CONCAT28(in_stack_00000024,
                                  CONCAT26(in_stack_00000022,
                                           CONCAT24(in_stack_00000020,in_stack_0000001c)));
        fVar3 = (float10)CONCAT28((in_stack_00000024 & 0x7fff) -
                                  ((in_stack_00000024 & 0x7fff) - param_3 & 7 | 4) |
                                  param_3 & 0x8000,
                                  CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)));
        fVar2 = fVar2 - (float10)(unkint10)(fVar2 / fVar3) * fVar3;
        in_stack_0000001c = SUB104(fVar2,0);
        in_stack_00000020 = (undefined2)((unkuint10)fVar2 >> 0x20);
        in_stack_00000022 = (undefined2)((unkuint10)fVar2 >> 0x30);
        in_stack_00000024 = (ushort)((unkuint10)fVar2 >> 0x40);
      }
    }
  }
  return in_EAX;
}

/* 10072e2c  FUN_10072e2c  (178 bytes)
 * float10 FUN_10072e2c(void)
 * called by: FUN_1006eb64
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10072e2c(void)

{
  float10 in_ST0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 in_ST1;
  uint uVar2;
  float10 fVar1;
  
  uVar2 = (uint)((unkuint10)in_ST1 >> 0x20);
  if (((uint)((unkuint10)in_ST1 >> 0x30) & 0x7fff0000) != 0) {
    FUN_10072c26(SUB104(in_ST1,0),uVar2,(ushort)((unkuint10)in_ST1 >> 0x40));
    return extraout_ST0;
  }
  if (SUB104(in_ST1,0) != 0 || uVar2 != 0) {
    fVar1 = in_ST1 * (float10)_DAT_1009bc84;
    FUN_10072c26(SUB104(fVar1,0),(uint)((unkuint10)fVar1 >> 0x20),(ushort)((unkuint10)fVar1 >> 0x40)
                );
    return extraout_ST0_00;
  }
  return in_ST0 - (float10)(unkint10)(in_ST0 / in_ST1) * in_ST1;
}

/* 100731e9  FUN_100731e9  (231 bytes)
 * undefined FUN_100731e9(uint * param_1)
 * called by: __nh_malloc
 */
void __cdecl FUN_100731e9(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1008a400;
  pcStack_10 = FUN_100775d8;
  local_14 = ExceptionList;
  if (DAT_102e0828 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_102e0820) {
      ExceptionList = &local_14;
      FUN_10073e71(9);
      local_8 = 0;
      piVar1 = FUN_100761d6(param_1);
      local_8 = 0xffffffff;
      FUN_10073250();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_102e0828 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_1009e444) {
        ExceptionList = &local_14;
        FUN_10073e71(9);
        local_8 = 1;
        piVar1 = FUN_1007709b(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_100732af();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_100732c8;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_100732c8:
  HeapAlloc(DAT_102e0824,0,dwBytes);
  ExceptionList = local_14;
  return;
}

/* 10073250  FUN_10073250  (9 bytes)
 * undefined FUN_10073250(void)
 * called by: FUN_100731e9
 */
void FUN_10073250(void)

{
  FUN_10073ed2(9);
  return;
}

/* 100732af  FUN_100732af  (9 bytes)
 * undefined FUN_100732af(void)
 * called by: FUN_100731e9
 */
void FUN_100732af(void)

{
  FUN_10073ed2(9);
  return;
}

/* 10073500  FUN_10073500  (23 bytes)
 * float10 FUN_10073500(undefined4 param_1, undefined4 param_2, undefined2 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 * called by: FUN_1006ebc2, FUN_10073649
 */
float10 __fastcall
FUN_10073500(undefined4 param_1,uint param_2,undefined2 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float10 in_ST0;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  double dStack_c;
  
  local_14 = param_7;
  local_10 = param_8;
  dStack_c = (double)in_ST0;
  uStack_1c = param_5;
  uStack_18 = param_6;
  uStack_20 = param_1;
  FUN_10079816(param_2,&local_24,&param_3);
  return (float10)dStack_c;
}

/* 10073560  FUN_10073560  (21 bytes)
 * undefined1[10] FUN_10073560(void)
 * called by: FUN_1006ebc2
 */
undefined1  [10] FUN_10073560(void)

{
  float10 in_ST0;
  float10 fVar1;
  undefined1 auVar2 [10];
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  auVar2 = (undefined1  [10])fscale((float10)1 + fVar1,ROUND(in_ST0));
  return auVar2;
}

/* 10073575  FUN_10073575  (23 bytes)
 * undefined FUN_10073575(void)
 * called by: FUN_1006ebc2, FUN_1006eead
 */
void FUN_10073575(void)

{
  return;
}

/* 1007358c  FUN_1007358c  (25 bytes)
 * undefined4 FUN_1007358c(void)
 * called by: FUN_1006eead
 */
undefined4 FUN_1007358c(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 7;
  }
  return 1;
}

/* 100735e8  FUN_100735e8  (22 bytes)
 * uint FUN_100735e8(undefined4 param_1, uint param_2)
 * called by: FUN_1006ee90
 */
uint __cdecl FUN_100735e8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}

/* 100735fe  FUN_100735fe  (13 bytes)
 * undefined FUN_100735fe(void)
 * called by: FUN_1006ebc2
 */
void FUN_100735fe(void)

{
  return;
}

/* 10073649  FUN_10073649  (163 bytes)
 * undefined FUN_10073649(undefined4 param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * called by: FUN_1006ebc2
 */
void __fastcall
FUN_10073649(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  ushort in_FPUStatusWord;
  float10 in_ST0;
  ushort unaff_retaddr;
  uint uStack_4;
  
  uStack_4 = (uint)((ulonglong)(double)in_ST0 >> 0x20);
  if (((ulonglong)(double)in_ST0 & 0x7ff0000000000000) == 0) {
    fscale(in_ST0,(float10)1536.0);
  }
  else if ((uStack_4 & 0x7ff00000) == 0x7ff00000) {
    fscale(in_ST0,(float10)-1536.0);
  }
  else if (((unaff_retaddr == 0x27f) || ((unaff_retaddr & 0x20) != 0)) ||
          ((in_FPUStatusWord & 0x20) == 0)) {
    return;
  }
  if (param_2 == 0x1d) {
    FUN_10073500(param_1,0x1d,unaff_retaddr,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  __startOneArgErrorHandling(param_1,param_2,unaff_retaddr,param_3,param_4,param_5);
  return;
}

/* 100736ec  FUN_100736ec  (304 bytes)
 * undefined4 FUN_100736ec(int param_1, int param_2, double param_3, double * param_4)
 * called by: FUN_1006ebc2
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100736ec(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_1009e5c0;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_10073777:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (0.0 < param_3) goto LAB_10073812;
        if (param_3 < 0.0) goto LAB_100737a9;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_1007381c(param_3);
        if (0.0 < param_3) {
          dVar2 = _DAT_1009e5c0;
          if (iVar3 == 1) {
            dVar2 = -_DAT_1009e5c0;
          }
          goto LAB_10073812;
        }
        if (param_3 < 0.0) {
          dVar2 = _DAT_1009e5e0;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_10073812;
        }
      }
      dVar2 = 1.0;
      goto LAB_10073812;
    }
    if (1.0 < dVar1) goto LAB_10073812;
    if (1.0 <= dVar1) {
LAB_1007373c:
      *param_4 = _DAT_1009e5c8;
      return 1;
    }
  }
  else {
    if (param_3 != -INFINITY) goto LAB_10073777;
    if (dVar1 <= 1.0) {
      if (1.0 <= dVar1) goto LAB_1007373c;
      goto LAB_10073812;
    }
  }
LAB_100737a9:
  dVar2 = 0.0;
LAB_10073812:
  *param_4 = dVar2;
  return 0;
}

/* 1007381c  FUN_1007381c  (101 bytes)
 * undefined4 FUN_1007381c(double param_1)
 * called by: FUN_100736ec
 */
undefined4 __cdecl FUN_1007381c(double param_1)

{
  uint uVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_10079eba(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
  if ((uVar1 & 0x90) == 0) {
    fVar2 = __frnd(param_1);
    if ((double)fVar2 == param_1) {
      fVar2 = __frnd(param_1 / 2.0);
      if (fVar2 == (float10)(param_1 / 2.0)) {
        uVar3 = 2;
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
  }
  return 0;
}

/* 10073881  FUN_10073881  (45 bytes)
 * undefined FUN_10073881(void)
 * called by: FUN_1006f8e2
 */
void FUN_10073881(void)

{
  if (PTR_FUN_1009b928 != (undefined *)0x0) {
    (*(code *)PTR_FUN_1009b928)();
  }
  FUN_100739a5((undefined4 *)&DAT_1008f040,(undefined4 *)&DAT_1008f054);
  FUN_100739a5((undefined4 *)&DAT_1008f000,(undefined4 *)&DAT_1008f03c);
  return;
}

/* 100738d0  FUN_100738d0  (15 bytes)
 * undefined FUN_100738d0(void)
 * called by: FUN_1006f8e2
 */
void FUN_100738d0(void)

{
  FUN_100738ee(0,0,1);
  return;
}

/* 100738ee  FUN_100738ee  (163 bytes)
 * undefined FUN_100738ee(UINT param_1, int param_2, int param_3)
 * called by: FUN_100738d0, __exit
 */
void __cdecl FUN_100738ee(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10073993();
  if (DAT_102e019c == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_102e0198 = 1;
  DAT_102e0194 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_102e1858 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_102e1854 - 4), DAT_102e1858 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_102e1858 <= puVar1);
    }
    FUN_100739a5((undefined4 *)&DAT_1008f058,(undefined4 *)&DAT_1008f060);
  }
  FUN_100739a5((undefined4 *)&DAT_1008f064,(undefined4 *)&DAT_1008f06c);
  if (param_3 == 0) {
    DAT_102e019c = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1007399c();
  return;
}

/* 10073993  FUN_10073993  (9 bytes)
 * undefined FUN_10073993(void)
 * called by: FUN_1006edbd, FUN_100738ee
 */
void FUN_10073993(void)

{
  FUN_10073e71(0xd);
  return;
}

/* 1007399c  FUN_1007399c  (9 bytes)
 * undefined FUN_1007399c(void)
 * called by: FUN_1006edbd, FUN_100738ee
 */
void FUN_1007399c(void)

{
  FUN_10073ed2(0xd);
  return;
}

/* 100739a5  FUN_100739a5  (26 bytes)
 * undefined FUN_100739a5(undefined4 * param_1, undefined4 * param_2)
 * called by: FUN_10073881, FUN_100738ee
 */
void __cdecl FUN_100739a5(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}

