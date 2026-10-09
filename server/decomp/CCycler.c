/* ts_i386.so - CCycler (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c7444  CCycler::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CCycler::Save(CSave &) */

undefined4 __thiscall CCycler::Save(CCycler *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Save((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CCycler",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 000c7494  CCycler::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CCycler::Restore(CRestore &) */

undefined4 __thiscall CCycler::Restore(CCycler *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Restore((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CCycler",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 000c75d4  CCycler::GenericCyclerSpawn  (192 bytes)
 * undefined GenericCyclerSpawn(char * param_1, undefined4 param_2, undefined4 param_3)
 */
/* CCycler::GenericCyclerSpawn(char *, Vector, Vector) */

void __thiscall
CCycler::GenericCyclerSpawn(CCycler *this,char *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    (*g_engfuncs.pfnAlertMessage)
              (at_error,"cycler at %.0f %.0f %0.f missing modelname",(double)this->pev->origin[0],
               (double)this->pev->origin[1],(double)this->pev->origin[2]);
    (*g_engfuncs.pfnRemoveEntity)(this->pev->pContainingEntity);
  }
  else {
    this->pev->classname = (int)"cycler" - (int)gpGlobals->pStringBase;
    (*g_engfuncs.pfnPrecacheModel)(param_1);
    (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,param_1);
    Spawn(this);
    UTIL_SetSize((int)this->pev,param_2,param_3);
  }
  return;
}

/* 000c7694  CCycler::Spawn  (248 bytes)
 * undefined Spawn(void)
 */
/* CCycler::Spawn(void) */

void __thiscall CCycler::Spawn(CCycler *this)

{
  CBaseAnimating::InitBoneControllers((CBaseAnimating *)this);
  this->pev->solid = 3;
  this->pev->movetype = 0;
  this->pev->takedamage = 1.0;
  this->pev->effects = 0;
  this->pev->health = 80000.0;
  this->pev->yaw_speed = 5.0;
  this->pev->ideal_yaw = this->pev->angles[1];
  (*this->vtable[0x46])(this,0x168);
  *(undefined4 *)&this[1].field_0x8 = 0x42960000;
  *(undefined4 *)&this[1].field_0xc = 0;
  this->pev->nextthink = this->pev->nextthink + 1.0;
  CBaseAnimating::ResetSequenceInfo((CBaseAnimating *)this);
  if ((this->pev->sequence == 0) && (this->pev->frame == 0.0)) {
    *(undefined4 *)&this[3].field_0x38 = 1;
  }
  else {
    *(undefined4 *)&this[3].field_0x38 = 0;
    this->pev->framerate = 0.0;
  }
  return;
}

/* 000c778c  CCycler::Think  (165 bytes)
 * undefined Think(void)
 */
/* CCycler::Think(void) */

void __thiscall CCycler::Think(CCycler *this)

{
  this->pev->nextthink = gpGlobals->time + 0.1;
  if (*(int *)&this[3].field_0x38 != 0) {
    CBaseAnimating::StudioFrameAdvance((CBaseAnimating *)this,0.0);
  }
  if ((*(int *)&this[1].field_0x14 != 0) && (*(int *)&this[1].field_0x18 == 0)) {
    this->pev->animtime = gpGlobals->time;
    this->pev->framerate = 1.0;
    *(undefined4 *)&this[1].field_0x14 = 0;
    *(float *)&this[1].field_0x10 = gpGlobals->time;
    this->pev->frame = 0.0;
    if (*(int *)&this[3].field_0x38 == 0) {
      this->pev->framerate = 0.0;
    }
  }
  return;
}

/* 000c7834  CCycler::Use  (55 bytes)
 * undefined Use(int * param_1)
 */
/* CCycler::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CCycler::Use(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x59];
  param_1[0x59] = (uint)(iVar1 == 0);
  if ((iVar1 == 0) != 0) {
    *(undefined4 *)(*param_1 + 0x138) = 0x3f800000;
    return;
  }
  *(undefined4 *)(*param_1 + 0x138) = 0;
  return;
}

/* 000c7870  CCycler::TakeDamage  (201 bytes)
 * undefined4 TakeDamage(CBaseAnimating * param_1)
 */
/* CCycler::TakeDamage(entvars_s *, entvars_s *, float, int) */

undefined4 CCycler::TakeDamage(CBaseAnimating *param_1)

{
  int *piVar1;
  
  if (*(int *)&param_1[3].field_0x38 == 0) {
    param_1->pev->framerate = 1.0;
    CBaseAnimating::StudioFrameAdvance(param_1,0.1);
    param_1->pev->framerate = 0.0;
    (*g_engfuncs.pfnAlertMessage)
              (at_console,"sequence: %d, frame %.0f\n",param_1->pev->sequence,
               (double)param_1->pev->frame);
  }
  else {
    piVar1 = &param_1->pev->sequence;
    *piVar1 = *piVar1 + 1;
    CBaseAnimating::ResetSequenceInfo(param_1);
    if (*(float *)&param_1[1].field_0x8 == 0.0) {
      param_1->pev->sequence = 0;
      CBaseAnimating::ResetSequenceInfo(param_1);
    }
    param_1->pev->frame = 0.0;
  }
  return 0;
}

/* 000c8654  CCycler::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CCycler::ObjectCaps(void) */

undefined4 CCycler::ObjectCaps(void)

{
  return 10;
}

/* 000c865c  CCycler::IsAlive  (6 bytes)
 * undefined4 IsAlive(void)
 */
/* CCycler::IsAlive(void) */

undefined4 CCycler::IsAlive(void)

{
  return 0;
}

