/* mp.dll - CGunTarget (14 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10029b60  CGunTarget::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CGunTarget::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CGunTarget_10095628,(int)param_1,0x10094fb8,1);
  return;
}

/* 10029b90  CGunTarget::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CGunTarget::Restore(CBaseToggle *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CGunTarget_10095628,(int)param_1,0x10094fb8,1);
  return;
}

/* 10029bc0  CGunTarget::Spawn  (205 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CGunTarget::Spawn(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 4;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
  FUN_100679a0();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  if (*(float *)(*(int *)(param_1 + 4) + 0x1f8) == 0.0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8) = 0x42c80000;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x16c) = 0;
  *(uint *)(*(int *)(param_1 + 4) + 0x1a4) = *(uint *)(*(int *)(param_1 + 4) + 0x1a4) | 0x20;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1b0) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x160);
  iVar1 = *(int *)(param_1 + 4);
  if ((*(byte *)(iVar1 + 0x1a0) & 1) != 0) {
    *(code **)(param_1 + 0x10) = Start;
    *(float *)(iVar1 + 0x104) = *(float *)(iVar1 + 0x100) + 0.3;
  }
  return;
}

/* 10029c90  CGunTarget::Activate  (166 bytes)
 * undefined Activate()
 */
void __fastcall CGunTarget::Activate(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xb4))();
  if (iVar1 != 0) {
    EHANDLE::operator=((EHANDLE *)(param_1 + 0x49),iVar1);
    FUN_100679a0();
  }
  return;
}

/* 10029d40  CGunTarget::Start  (15 bytes)
 * void Start(void)
 */
/* public: void __thiscall CGunTarget::Start(void) */

void __thiscall CGunTarget::Start(CGunTarget *this)

{
                    /* 0x29d40  102  ?Start@CGunTarget@@QAEXXZ */
  (*this->vtable[0x30])(this,this,1,0);
  return;
}

/* 10029d50  CGunTarget::Next  (153 bytes)
 * void Next(void)
 * called by: CGunTarget::Use, CGunTarget::Wait
 */
/* public: void __thiscall CGunTarget::Next(void) */

void __thiscall CGunTarget::Next(CGunTarget *this)

{
  entvars_t *peVar1;
  int iVar2;
  void *this_00;
  float *pfVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float afStack_18 [3];
  float afStack_c [3];
  
                    /* 0x29d50  72  ?Next@CGunTarget@@QAEXXZ */
  *(undefined4 *)&this->field_0x10 = 0;
  iVar2 = (*this->vtable[0x2d])();
  EHANDLE::operator=((EHANDLE *)&this->field_0x124,iVar2);
  iVar2 = FUN_1000c1d0((uint *)&this->field_0x124);
  if (iVar2 == 0) {
    Stop((int)this);
    return;
  }
  peVar1 = this->pev;
  *(code **)&this->field_0xcc = Wait;
  pfVar5 = afStack_18;
  fVar7 = peVar1->speed;
  fVar6 = 0.5;
  this_00 = (void *)FUN_1000c610(peVar1->mins,afStack_c,peVar1->maxs);
  fVar4 = 2.5759536e-29;
  pfVar3 = (float *)FUN_10014e80(this_00,pfVar5,fVar6);
  FUN_10011f90((void *)(*(int *)(iVar2 + 4) + 8),(float *)&stack0xffffffd0,pfVar3);
  CBaseToggle::LinearMove((CBaseToggle *)this,fVar4,(float)pfVar5,fVar6,fVar7);
  return;
}

/* 10029df0  CGunTarget::Wait  (175 bytes)
 * void Wait(void)
 */
/* public: void __thiscall CGunTarget::Wait(void) */

void __thiscall CGunTarget::Wait(CGunTarget *this)

{
  int *piVar1;
  float10 fVar2;
  
                    /* 0x29df0  122  ?Wait@CGunTarget@@QAEXXZ */
  piVar1 = (int *)FUN_1000c1d0((uint *)&this->field_0x124);
  if (piVar1 == (int *)0x0) {
    Stop((int)this);
    return;
  }
  if (*(int *)(piVar1[1] + 0x1d4) != 0) {
    FireTargets((int)(gpGlobals->pStringBase + *(int *)(piVar1[1] + 0x1d4)),this,this,3,0);
    if ((*(byte *)(piVar1[1] + 0x1a0) & 4) != 0) {
      *(undefined4 *)(piVar1[1] + 0x1d4) = 0;
    }
  }
  fVar2 = (float10)(**(code **)(*piVar1 + 0x70))();
  *(float *)&this->field_0x7c = (float)fVar2;
  this->pev->target = *(string_t *)(piVar1[1] + 0x1c8);
  *(code **)&this->field_0x10 = Next;
  if (*(float *)&this->field_0x7c != 0.0) {
    this->pev->nextthink = this->pev->ltime + *(float *)&this->field_0x7c;
    return;
  }
  Next(this);
  return;
}

/* 10029ea0  CGunTarget::Stop  (53 bytes)
 * undefined Stop(int param_1)
 * called by: CGunTarget::Next, CGunTarget::TakeDamage, CGunTarget::Use, CGunTarget::Wait
 */
void __fastcall CGunTarget::Stop(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x20) = DAT_1009f4a8;
  *(undefined4 *)(iVar1 + 0x24) = DAT_1009f4ac;
  *(undefined4 *)(iVar1 + 0x28) = DAT_1009f4b0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x104) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x16c) = 0;
  return;
}

/* 10029ee0  CGunTarget::TakeDamage  (130 bytes)
 * undefined4 TakeDamage(undefined4 param_1, undefined4 param_2, float param_3)
 */
undefined4 __thiscall
CGunTarget::TakeDamage(CGunTarget *this,undefined4 param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  entvars_t *peVar2;
  int iVar3;
  
  peVar2 = this->pev;
  if (0.0 < peVar2->health) {
    peVar2->health = peVar2->health - param_3;
    fVar1 = this->pev->health;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      this->pev->health = 0.0;
      Stop((int)this);
      iVar3 = this->pev->message;
      if (iVar3 != 0) {
        FireTargets((int)(gpGlobals->pStringBase + iVar3),this,this,3,0);
      }
    }
  }
  return 0;
}

/* 10029f70  CGunTarget::Use  (121 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, int param_3)
 */
void __thiscall CGunTarget::Use(CGunTarget *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  iVar2 = CBaseEntity::ShouldToggle(param_3,*(int *)&this->field_0x150);
  if (iVar2 != 0) {
    if (*(int *)&this->field_0x150 != 0) {
      Stop((int)this);
      return;
    }
    this->pev->takedamage = 2.0;
    iVar2 = (*this->vtable[0x2d])();
    EHANDLE::operator=((EHANDLE *)&this->field_0x124,iVar2);
    bVar1 = FUN_1000c210((uint *)&this->field_0x124);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      this->pev->health = this->pev->max_health;
      Next(this);
    }
  }
  return;
}

/* 1002a380  CGunTarget::BloodColor  (4 bytes)
 * undefined BloodColor()
 */
undefined4 CGunTarget::BloodColor(void)

{
  return 0xffffffff;
}

/* 1002a390  CGunTarget::Classify  (6 bytes)
 * undefined Classify()
 */
undefined4 CGunTarget::Classify(void)

{
  return 1;
}

/* 1002a3a0  CGunTarget::BodyTarget  (29 bytes)
 * undefined BodyTarget()
 */
void __thiscall CGunTarget::BodyTarget(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *param_2 = *(undefined4 *)(iVar1 + 8);
  param_2[1] = *(undefined4 *)(iVar1 + 0xc);
  param_2[2] = *(undefined4 *)(iVar1 + 0x10);
  return;
}

/* 1002a3c0  CGunTarget::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CGunTarget::ObjectCaps(void)

{
  return 0;
}

