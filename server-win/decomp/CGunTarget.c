/* mp.dll - CGunTarget (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10032240  CGunTarget::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CGunTarget::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CGunTarget_100a0978,(int)param_1,0x100a0308,1);
  return;
}

/* 10032270  CGunTarget::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CGunTarget::Restore(CBaseToggle *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CGunTarget_100a0978,(int)param_1,&DAT_100a0308,1);
  return;
}

/* 100322a0  CGunTarget::Spawn  (205 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CGunTarget::Spawn(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 4;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
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

/* 10032370  CGunTarget::Activate  (188 bytes)
 * undefined Activate()
 */
void __fastcall CGunTarget::Activate(int *param_1)

{
  int iVar1;
  int iVar2;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar2 = (**(code **)(*param_1 + 0xcc))();
  if (iVar2 != 0) {
    EHANDLE::operator=((EHANDLE *)(param_1 + 0x49),iVar2);
    iVar1 = param_1[1];
    iVar2 = *(int *)(iVar2 + 4);
    fStack_c = *(float *)(iVar2 + 8) - (*(float *)(iVar1 + 0xe8) + *(float *)(iVar1 + 0xdc)) * 0.5;
    fStack_8 = *(float *)(iVar2 + 0xc) - (*(float *)(iVar1 + 0xec) + *(float *)(iVar1 + 0xe0)) * 0.5
    ;
    fStack_4 = *(float *)(iVar2 + 0x10) -
               (*(float *)(iVar1 + 0xf0) + *(float *)(iVar1 + 0xe4)) * 0.5;
    UTIL_SetOrigin(iVar1,&fStack_c);
  }
  return;
}

/* 10032430  CGunTarget::Start  (15 bytes)
 * void Start(void)
 */
/* public: void __thiscall CGunTarget::Start(void) */

void __thiscall CGunTarget::Start(CGunTarget *this)

{
                    /* 0x32430  109  ?Start@CGunTarget@@QAEXXZ */
  (*this->vtable[0x36])(this,this,1,0);
  return;
}

/* 10032440  CGunTarget::Next  (163 bytes)
 * void Next(void)
 * called by: CGunTarget::Use, CGunTarget::Wait
 */
/* public: void __thiscall CGunTarget::Next(void) */

void __thiscall CGunTarget::Next(CGunTarget *this)

{
  entvars_t *peVar1;
  int iVar2;
  Vector *this_00;
  float *pfVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float afStack_24 [3];
  float afStack_18 [3];
  float afStack_c [3];
  
                    /* 0x32440  77  ?Next@CGunTarget@@QAEXXZ */
  *(undefined4 *)&this->field_0x10 = 0;
  iVar2 = (*this->vtable[0x33])();
  EHANDLE::operator=((EHANDLE *)&this->field_0x124,iVar2);
  iVar2 = EHANDLE::operator->((uint *)&this->field_0x124);
  if (iVar2 == 0) {
    Stop((int)this);
    return;
  }
  peVar1 = this->pev;
  *(code **)&this->field_0xcc = Wait;
  pfVar5 = afStack_24;
  fVar7 = peVar1->speed;
  fVar6 = 0.5;
  this_00 = (Vector *)Vector::operator+((Vector *)peVar1->mins,afStack_18,peVar1->maxs);
  pfVar3 = (float *)Vector::operator*(this_00,pfVar5,fVar6);
  pfVar5 = afStack_c;
  fVar6 = 2.586354e-29;
  puVar4 = (undefined4 *)FUN_100148b0((void *)(*(int *)(iVar2 + 4) + 8),pfVar5,pfVar3);
  Vector::Vector((Vector *)&stack0xffffffc4,puVar4);
  CBaseToggle::LinearMove((CBaseToggle *)this,fVar6,(float)pfVar5,(float)pfVar3,fVar7);
  return;
}

/* 100324f0  CGunTarget::Wait  (180 bytes)
 * void Wait(void)
 */
/* public: void __thiscall CGunTarget::Wait(void) */

void __thiscall CGunTarget::Wait(CGunTarget *this)

{
  int *piVar1;
  float10 fVar2;
  
                    /* 0x324f0  129  ?Wait@CGunTarget@@QAEXXZ */
  piVar1 = (int *)EHANDLE::operator->((uint *)&this->field_0x124);
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
  fVar2 = (float10)(**(code **)(*piVar1 + 0x88))();
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

/* 100325b0  CGunTarget::Stop  (53 bytes)
 * undefined Stop(int param_1)
 * called by: CGunTarget::Next, CGunTarget::TakeDamage, CGunTarget::Use, CGunTarget::Wait
 */
void __fastcall CGunTarget::Stop(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x20) = DAT_100ae498;
  *(undefined4 *)(iVar1 + 0x24) = DAT_100ae49c;
  *(undefined4 *)(iVar1 + 0x28) = DAT_100ae4a0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x104) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x16c) = 0;
  return;
}

/* 100325f0  CGunTarget::TakeDamage  (128 bytes)
 * undefined4 TakeDamage(undefined4 param_1, undefined4 param_2, float param_3)
 */
undefined4 __thiscall
CGunTarget::TakeDamage(CGunTarget *this,undefined4 param_1,undefined4 param_2,float param_3)

{
  entvars_t *peVar1;
  int iVar2;
  
  peVar1 = this->pev;
  if (0.0 < peVar1->health) {
    peVar1->health = peVar1->health - param_3;
    if (this->pev->health <= 0.0) {
      this->pev->health = 0.0;
      Stop((int)this);
      iVar2 = this->pev->message;
      if (iVar2 != 0) {
        FireTargets((int)(gpGlobals->pStringBase + iVar2),this,this,3,0);
      }
    }
  }
  return 0;
}

/* 10032670  CGunTarget::Use  (123 bytes)
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
    iVar2 = (*this->vtable[0x33])();
    EHANDLE::operator=((EHANDLE *)&this->field_0x124,iVar2);
    bVar1 = FUN_1000e440((uint *)&this->field_0x124);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      this->pev->health = this->pev->max_health;
      Next(this);
    }
  }
  return;
}

/* 10032a40  CGunTarget::BodyTarget  (29 bytes)
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

