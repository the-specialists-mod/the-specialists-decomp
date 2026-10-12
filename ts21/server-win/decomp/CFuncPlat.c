/* mp.dll - CFuncPlat (14 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10026110  CFuncPlat::CallGoDown  (8 bytes)
 * void CallGoDown(void)
 */
/* public: void __thiscall CFuncPlat::CallGoDown(void) */

void __thiscall CFuncPlat::CallGoDown(CFuncPlat *this)

{
                    /* 0x26110  18  ?CallGoDown@CFuncPlat@@QAEXXZ */
                    /* WARNING: Could not recover jumptable at 0x10026112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->vtable[0x3f])();
  return;
}

/* 10026120  CFuncPlat::CallHitTop  (8 bytes)
 * void CallHitTop(void)
 */
/* public: void __thiscall CFuncPlat::CallHitTop(void) */

void __thiscall CFuncPlat::CallHitTop(CFuncPlat *this)

{
                    /* 0x26120  20  ?CallHitTop@CFuncPlat@@QAEXXZ */
                    /* WARNING: Could not recover jumptable at 0x10026122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->vtable[0x40])();
  return;
}

/* 10026130  CFuncPlat::CallHitBottom  (8 bytes)
 * void CallHitBottom(void)
 */
/* public: void __thiscall CFuncPlat::CallHitBottom(void) */

void __thiscall CFuncPlat::CallHitBottom(CFuncPlat *this)

{
                    /* 0x26130  19  ?CallHitBottom@CFuncPlat@@QAEXXZ */
                    /* WARNING: Could not recover jumptable at 0x10026132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->vtable[0x41])();
  return;
}

/* 10026150  CFuncPlat::Save  (48 bytes)
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
  CSave::WriteFields(param_1,(byte_conflict *)s_CFuncPlat_100952d0,(int)this,0x10094df8,2);
  return;
}

/* 10026180  CFuncPlat::Restore  (48 bytes)
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
  CRestore::ReadFields(param_1,(byte_conflict *)s_CFuncPlat_100952d0,(int)this,0x10094df8,2);
  return;
}

/* 100261b0  CFuncPlat::KeyValue  (130 bytes)
 * undefined KeyValue(int param_1)
 * called by: CFuncTrackChange::KeyValue
 */
void __thiscall CFuncPlat::KeyValue(CFuncPlat *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 10;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_targettop_100950d4;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0xf8 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 10;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_targetbot_100950c8;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0xfc = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBasePlatTrain::KeyValue((CBasePlatTrain *)this,param_1);
  return;
}

/* 100263b0  CFuncPlat::Precache  (36 bytes)
 * undefined Precache(int * param_1)
 * called by: CFuncTrackChange::Precache
 */
void __fastcall CFuncPlat::Precache(int *param_1)

{
  int iVar1;
  
  CBasePlatTrain::Precache((int)param_1);
  iVar1 = (**(code **)(*param_1 + 0xf4))();
  if (iVar1 == 0) {
    PlatSpawnInsideTrigger(param_1[1]);
  }
  return;
}

/* 100263e0  CFuncPlat::Spawn  (85 bytes)
 * undefined Spawn(int * param_1)
 * called by: CFuncPlatRot::Spawn
 */
void __fastcall CFuncPlat::Spawn(int *param_1)

{
  FUN_10026240((int)param_1);
  (**(code **)(*param_1 + 0x10))();
  if (*(int *)(param_1[1] + 0x1cc) != 0) {
    FUN_100679a0();
    param_1[0x1c] = 0;
    param_1[6] = (int)PlatUse;
    return;
  }
  FUN_100679a0();
  param_1[0x1c] = 1;
  return;
}

/* 10026620  CFuncPlat::PlatUse  (97 bytes)
 * void PlatUse(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CFuncPlat::PlatUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CFuncPlat::PlatUse(CFuncPlat *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
                  float param_4)

{
  int iVar1;
  
                    /* 0x26620  77  ?PlatUse@CFuncPlat@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar1 = (*this->vtable[0x3d])();
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
      (*this->vtable[0x3e])();
      return;
    }
  }
  (*this->vtable[0x3f])();
  return;
}

/* 10026690  CFuncPlat::GoDown  (120 bytes)
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
    in_stack_ffffffec = *(float *)((int)param_1 + 0xf4);
    in_stack_fffffff4 = 0.0;
    in_stack_fffffff0 = 0.8;
    EMIT_SOUND_DYN(this,*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208),6,
                   gpGlobals->pStringBase + (int)this,in_stack_ffffffec,0x3f4ccccd,0,100);
  }
  *(undefined4 *)((int)param_1 + 0x70) = 3;
  *(code **)((int)param_1 + 0xcc) = CallHitBottom;
  fVar1 = *(float *)(*(int *)((int)param_1 + 4) + 0x1f8);
  FUN_1000a540(&stack0xffffffec,(undefined4 *)((int)param_1 + 0x98));
  CBaseToggle::LinearMove(param_1,in_stack_ffffffec,in_stack_fffffff0,in_stack_fffffff4,fVar1);
  return;
}

/* 10026710  CFuncPlat::HitBottom  (168 bytes)
 * undefined HitBottom(int param_1)
 * called by: CFuncPlatRot::HitBottom
 */
void __fastcall CFuncPlat::HitBottom(int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(*(int *)(param_1 + 4) + 0x1e8);
  if (pvVar1 != (void *)0x0) {
    EMIT_SOUND_DYN(pvVar1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),6,
                   gpGlobals->pStringBase + (int)pvVar1,0,0,0x20,100);
  }
  pvVar1 = *(void **)(*(int *)(param_1 + 4) + 0x1ec);
  if (pvVar1 != (void *)0x0) {
    EMIT_SOUND_DYN(pvVar1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),1,
                   gpGlobals->pStringBase + (int)pvVar1,*(undefined4 *)(param_1 + 0xf4),0x3f4ccccd,0
                   ,100);
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
  if (*(int *)(param_1 + 0xfc) != 0) {
    FireTargets((int)(gpGlobals->pStringBase + *(int *)(param_1 + 0xfc)),param_1,param_1,3,0);
  }
  return;
}

/* 100267c0  CFuncPlat::GoUp  (120 bytes)
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
    in_stack_ffffffec = *(float *)((int)param_1 + 0xf4);
    in_stack_fffffff4 = 0.0;
    in_stack_fffffff0 = 0.8;
    EMIT_SOUND_DYN(this,*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208),6,
                   gpGlobals->pStringBase + (int)this,in_stack_ffffffec,0x3f4ccccd,0,100);
  }
  *(undefined4 *)((int)param_1 + 0x70) = 2;
  *(code **)((int)param_1 + 0xcc) = CallHitTop;
  fVar1 = *(float *)(*(int *)((int)param_1 + 4) + 0x1f8);
  FUN_1000a540(&stack0xffffffec,(undefined4 *)((int)param_1 + 0x8c));
  CBaseToggle::LinearMove(param_1,in_stack_ffffffec,in_stack_fffffff0,in_stack_fffffff4,fVar1);
  return;
}

/* 10026840  CFuncPlat::HitTop  (210 bytes)
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
                   ,0,0,0x20,100);
  }
  pvVar1 = *(void **)(param_1[1] + 0x1ec);
  if (pvVar1 != (void *)0x0) {
    EMIT_SOUND_DYN(pvVar1,*(undefined4 *)(param_1[1] + 0x208),1,gpGlobals->pStringBase + (int)pvVar1
                   ,param_1[0x3d],0x3f4ccccd,0,100);
  }
  param_1[0x1c] = 0;
  iVar2 = (**(code **)(*param_1 + 0xf4))();
  if (iVar2 == 0) {
    param_1[4] = (int)CallGoDown;
    *(float *)(param_1[1] + 0x104) = *(float *)(param_1[1] + 0x100) + 3.0;
  }
  if (param_1[0x3e] != 0) {
    FireTargets((int)(gpGlobals->pStringBase + param_1[0x3e]),param_1,param_1,3,0);
  }
  return;
}

/* 10026920  CFuncPlat::Blocked  (166 bytes)
 * undefined Blocked()
 */
void __thiscall CFuncPlat::Blocked(int *param_1,int *param_2)

{
  void *this;
  
  (*g_engfuncs.pfnAlertMessage)
            (at_aiconsole,s__s_Blocked_by__s_100952dc,gpGlobals->pStringBase + *(int *)param_1[1],
             gpGlobals->pStringBase + *(int *)param_2[1]);
  (**(code **)(*param_2 + 0x38))(param_1[1],param_1[1],0x3f800000,1);
  this = *(void **)(param_1[1] + 0x1e8);
  if (this != (void *)0x0) {
    EMIT_SOUND_DYN(this,*(undefined4 *)(param_1[1] + 0x208),6,gpGlobals->pStringBase + (int)this,0,0
                   ,0x20,100);
  }
  if (param_1[0x1c] == 2) {
    (**(code **)(*param_1 + 0xfc))();
    return;
  }
  if (param_1[0x1c] == 3) {
    (**(code **)(*param_1 + 0xf8))();
  }
  return;
}

