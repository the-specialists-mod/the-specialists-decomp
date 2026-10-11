/* mp.dll - CFuncPlat (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002e340  CFuncPlat::CallGoDown  (8 bytes)
 * void CallGoDown(void)
 */
/* public: void __thiscall CFuncPlat::CallGoDown(void) */

void __thiscall CFuncPlat::CallGoDown(CFuncPlat *this)

{
                    /* 0x2e340  19  ?CallGoDown@CFuncPlat@@QAEXXZ */
                    /* WARNING: Could not recover jumptable at 0x1002e342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->vtable[0x46])();
  return;
}

/* 1002e350  CFuncPlat::CallHitTop  (8 bytes)
 * void CallHitTop(void)
 */
/* public: void __thiscall CFuncPlat::CallHitTop(void) */

void __thiscall CFuncPlat::CallHitTop(CFuncPlat *this)

{
                    /* 0x2e350  21  ?CallHitTop@CFuncPlat@@QAEXXZ */
                    /* WARNING: Could not recover jumptable at 0x1002e352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->vtable[0x47])();
  return;
}

/* 1002e360  CFuncPlat::CallHitBottom  (8 bytes)
 * void CallHitBottom(void)
 */
/* public: void __thiscall CFuncPlat::CallHitBottom(void) */

void __thiscall CFuncPlat::CallHitBottom(CFuncPlat *this)

{
                    /* 0x2e360  20  ?CallHitBottom@CFuncPlat@@QAEXXZ */
                    /* WARNING: Could not recover jumptable at 0x1002e362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->vtable[0x48])();
  return;
}

/* 1002e380  CFuncPlat::Save  (48 bytes)
 * undefined Save(void * param_1)
 * called by: CFuncPlatRot::Save
 */
void __thiscall CFuncPlat::Save(CFuncPlat *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBasePlatTrain::Save((CBasePlatTrain *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_1,(byte_conflict *)s_CFuncPlat_100a0620,(int)this,0x100a0148,2);
  return;
}

/* 1002e3b0  CFuncPlat::Restore  (48 bytes)
 * undefined Restore(void * param_1)
 * called by: CFuncPlatRot::Restore
 */
void __thiscall CFuncPlat::Restore(CFuncPlat *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBasePlatTrain::Restore((CBasePlatTrain *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_1,(byte_conflict *)s_CFuncPlat_100a0620,(int)this,&DAT_100a0148,2);
  return;
}

/* 1002e3e0  CFuncPlat::KeyValue  (198 bytes)
 * undefined KeyValue(int param_1)
 * called by: CFuncTrackChange::KeyValue
 */
void __thiscall CFuncPlat::KeyValue(CFuncPlat *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  
  pbVar4 = *(byte **)(param_1 + 4);
  pcVar5 = s_targettop_100a0424;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1002e418:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1002e41d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1002e418;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002e41d:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0xf8 = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar5 = s_targetbot_100a0418;
  do {
    bVar1 = *pbVar4;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1002e46d:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1002e472;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1002e46d;
    pbVar4 = pbVar4 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002e472:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0xfc = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBasePlatTrain::KeyValue((CBasePlatTrain *)this,param_1);
  return;
}

/* 1002e4b0  CFuncPlat::Setup  (363 bytes)
 * undefined Setup(int param_1)
 * called by: CFuncPlat::Spawn, CFuncTrackChange::Spawn
 */
void __fastcall CFuncPlat::Setup(int param_1)

{
  int iVar1;
  float fVar2;
  
  if (*(float *)(param_1 + 0x88) == 0.0) {
    *(undefined4 *)(param_1 + 0x88) = 0x42a00000;
  }
  if (*(float *)(param_1 + 0x84) == 0.0) {
    *(undefined4 *)(param_1 + 0x84) = 0x41200000;
  }
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x50) = DAT_100ae498;
  *(undefined4 *)(iVar1 + 0x54) = DAT_100ae49c;
  *(undefined4 *)(iVar1 + 0x58) = DAT_100ae4a0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 4;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  iVar1 = *(int *)(param_1 + 4);
  UTIL_SetSize(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 0x10);
  if (*(float *)(param_1 + 0xc0) == 0.0) {
    fVar2 = (*(float *)(iVar1 + 0x10) - *(float *)(iVar1 + 0xfc)) + 8.0;
  }
  else {
    fVar2 = *(float *)(iVar1 + 0x10) - *(float *)(param_1 + 0xc0);
  }
  *(float *)(param_1 + 0xa0) = fVar2;
  if (*(float *)(iVar1 + 0x1f8) == 0.0) {
    *(undefined4 *)(iVar1 + 0x1f8) = 0x43160000;
  }
  if (*(float *)(param_1 + 0xf4) == 0.0) {
    *(undefined4 *)(param_1 + 0xf4) = 0x3f59999a;
  }
  return;
}

/* 1002e620  CFuncPlat::Precache  (36 bytes)
 * undefined Precache(int * param_1)
 * called by: CFuncTrackChange::Precache
 */
void __fastcall CFuncPlat::Precache(int *param_1)

{
  int iVar1;
  
  CBasePlatTrain::Precache((int)param_1);
  iVar1 = (**(code **)(*param_1 + 0x110))();
  if (iVar1 == 0) {
    PlatSpawnInsideTrigger(param_1[1]);
  }
  return;
}

/* 1002e650  CFuncPlat::Spawn  (85 bytes)
 * undefined Spawn(int * param_1)
 * called by: CFuncPlatRot::Spawn
 */
void __fastcall CFuncPlat::Spawn(int *param_1)

{
  int iVar1;
  
  Setup((int)param_1);
  (**(code **)(*param_1 + 0x20))();
  iVar1 = param_1[1];
  if (*(int *)(iVar1 + 0x1cc) != 0) {
    UTIL_SetOrigin(iVar1,param_1 + 0x23);
    param_1[0x1c] = 0;
    param_1[6] = (int)PlatUse;
    return;
  }
  UTIL_SetOrigin(iVar1,param_1 + 0x26);
  param_1[0x1c] = 1;
  return;
}

/* 1002e8d0  CFuncPlat::PlatUse  (97 bytes)
 * void PlatUse(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CFuncPlat::PlatUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CFuncPlat::PlatUse(CFuncPlat *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
                  float param_4)

{
  int iVar1;
  
                    /* 0x2e8d0  82  ?PlatUse@CFuncPlat@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar1 = (*this->vtable[0x44])();
  if (iVar1 == 0) {
    *(undefined4 *)&this->field_0x18 = 0;
    if (*(int *)&this->field_0x70 != 0) {
      return;
    }
  }
  else {
    iVar1 = CBaseEntity::ShouldToggle(param_3,(uint)(*(int *)&this->field_0x70 == 1));
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)&this->field_0x70 != 0) {
      if (*(int *)&this->field_0x70 != 1) {
        return;
      }
      (*this->vtable[0x45])();
      return;
    }
  }
  (*this->vtable[0x46])();
  return;
}

/* 1002e940  CFuncPlat::GoDown  (125 bytes)
 * undefined GoDown(void * param_1)
 * called by: CFuncPlatRot::GoDown, CFuncTrackChange::GoDown
 */
void __fastcall CFuncPlat::GoDown(void *param_1)

{
  void *this;
  float in_stack_ffffffec;
  float in_stack_fffffff0;
  float in_stack_fffffff4;
  float fVar1;
  
  this = *(void **)(*(int *)((int)param_1 + 4) + 0x1e8);
  if (this != (void *)0x0) {
    in_stack_fffffff4 = 1.4013e-43;
    in_stack_fffffff0 = 0.0;
    in_stack_ffffffec = 0.8;
    EMIT_SOUND_DYN(this,*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208),6,
                   gpGlobals->pStringBase + (int)this,*(undefined4 *)((int)param_1 + 0xf4),
                   0x3f4ccccd,0);
  }
  *(undefined4 *)((int)param_1 + 0x70) = 3;
  *(code **)((int)param_1 + 0xcc) = CallHitBottom;
  fVar1 = *(float *)(*(int *)((int)param_1 + 4) + 0x1f8);
  Vector::Vector((Vector *)&stack0xffffffec,(undefined4 *)((int)param_1 + 0x98));
  CBaseToggle::LinearMove(param_1,in_stack_ffffffec,in_stack_fffffff0,in_stack_fffffff4,fVar1);
  return;
}

/* 1002e9c0  CFuncPlat::HitBottom  (178 bytes)
 * undefined HitBottom(int param_1)
 * called by: CFuncPlatRot::HitBottom
 */
void __fastcall CFuncPlat::HitBottom(int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(*(int *)(param_1 + 4) + 0x1e8);
  if (pvVar1 != (void *)0x0) {
    EMIT_SOUND_DYN(pvVar1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),6,
                   gpGlobals->pStringBase + (int)pvVar1,0,0,0x20);
  }
  pvVar1 = *(void **)(*(int *)(param_1 + 4) + 0x1ec);
  if (pvVar1 != (void *)0x0) {
    EMIT_SOUND_DYN(pvVar1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),1,
                   gpGlobals->pStringBase + (int)pvVar1,*(undefined4 *)(param_1 + 0xf4),0x3f4ccccd,0
                  );
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
  if (*(int *)(param_1 + 0xfc) != 0) {
    FireTargets((int)(gpGlobals->pStringBase + *(int *)(param_1 + 0xfc)),param_1,param_1,3,0);
  }
  return;
}

/* 1002ea80  CFuncPlat::GoUp  (125 bytes)
 * undefined GoUp(void * param_1)
 * called by: CFuncPlatRot::GoUp, CFuncTrackChange::GoUp
 */
void __fastcall CFuncPlat::GoUp(void *param_1)

{
  void *this;
  float in_stack_ffffffec;
  float in_stack_fffffff0;
  float in_stack_fffffff4;
  float fVar1;
  
  this = *(void **)(*(int *)((int)param_1 + 4) + 0x1e8);
  if (this != (void *)0x0) {
    in_stack_fffffff4 = 1.4013e-43;
    in_stack_fffffff0 = 0.0;
    in_stack_ffffffec = 0.8;
    EMIT_SOUND_DYN(this,*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208),6,
                   gpGlobals->pStringBase + (int)this,*(undefined4 *)((int)param_1 + 0xf4),
                   0x3f4ccccd,0);
  }
  *(undefined4 *)((int)param_1 + 0x70) = 2;
  *(code **)((int)param_1 + 0xcc) = CallHitTop;
  fVar1 = *(float *)(*(int *)((int)param_1 + 4) + 0x1f8);
  Vector::Vector((Vector *)&stack0xffffffec,(undefined4 *)((int)param_1 + 0x8c));
  CBaseToggle::LinearMove(param_1,in_stack_ffffffec,in_stack_fffffff0,in_stack_fffffff4,fVar1);
  return;
}

/* 1002eb00  CFuncPlat::HitTop  (220 bytes)
 * undefined HitTop(int * param_1)
 * called by: CFuncPlatRot::HitTop
 */
void __fastcall CFuncPlat::HitTop(int *param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = *(void **)(param_1[1] + 0x1e8);
  if (pvVar1 != (void *)0x0) {
    EMIT_SOUND_DYN(pvVar1,*(undefined4 *)(param_1[1] + 0x208),6,gpGlobals->pStringBase + (int)pvVar1
                   ,0,0,0x20);
  }
  pvVar1 = *(void **)(param_1[1] + 0x1ec);
  if (pvVar1 != (void *)0x0) {
    EMIT_SOUND_DYN(pvVar1,*(undefined4 *)(param_1[1] + 0x208),1,gpGlobals->pStringBase + (int)pvVar1
                   ,param_1[0x3d],0x3f4ccccd,0);
  }
  param_1[0x1c] = 0;
  iVar2 = (**(code **)(*param_1 + 0x110))();
  if (iVar2 == 0) {
    param_1[4] = (int)CallGoDown;
    *(float *)(param_1[1] + 0x104) = *(float *)(param_1[1] + 0x100) + 3.0;
  }
  if (param_1[0x3e] != 0) {
    FireTargets((int)(gpGlobals->pStringBase + param_1[0x3e]),param_1,param_1,3,0);
  }
  return;
}

/* 1002ebe0  CFuncPlat::Blocked  (171 bytes)
 * undefined Blocked()
 */
void __thiscall CFuncPlat::Blocked(int *param_1,int *param_2)

{
  void *this;
  
  (*g_engfuncs.pfnAlertMessage)
            (at_aiconsole,s__s_Blocked_by__s_100a062c,gpGlobals->pStringBase + *(int *)param_1[1],
             gpGlobals->pStringBase + *(int *)param_2[1]);
  (**(code **)(*param_2 + 0x50))(param_1[1],param_1[1],0x3f800000,1);
  this = *(void **)(param_1[1] + 0x1e8);
  if (this != (void *)0x0) {
    EMIT_SOUND_DYN(this,*(undefined4 *)(param_1[1] + 0x208),6,gpGlobals->pStringBase + (int)this,0,0
                   ,0x20);
  }
  if (param_1[0x1c] == 2) {
    (**(code **)(*param_1 + 0x118))();
    return;
  }
  if (param_1[0x1c] == 3) {
    (**(code **)(*param_1 + 0x114))();
  }
  return;
}

