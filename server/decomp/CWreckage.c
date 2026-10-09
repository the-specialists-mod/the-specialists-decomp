/* ts_i386.so - CWreckage (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c7f20  CWreckage::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CWreckage::Save(CSave &) */

undefined4 __thiscall CWreckage::Save(CWreckage *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Save((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CWreckage",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 000c7f70  CWreckage::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CWreckage::Restore(CRestore &) */

undefined4 __thiscall CWreckage::Restore(CWreckage *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Restore((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CWreckage",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 000c7fe4  CWreckage::Spawn  (234 bytes)
 * undefined Spawn(void)
 */
/* CWreckage::Spawn(void) */

void __thiscall CWreckage::Spawn(CWreckage *this)

{
  this->pev->solid = 0;
  this->pev->movetype = 0;
  this->pev->takedamage = 0.0;
  this->pev->effects = 0;
  this->pev->frame = 0.0;
  this->pev->nextthink = gpGlobals->time + 0.1;
  if (this->pev->model != 0) {
    (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + this->pev->model);
    (*g_engfuncs.pfnSetModel)
              (this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  }
  *(int *)&this->field_0x164 = (int)ROUND(gpGlobals->time);
  return;
}

/* 000c80d0  CWreckage::Precache  (71 bytes)
 * undefined Precache(void)
 */
/* CWreckage::Precache(void) */

void __thiscall CWreckage::Precache(CWreckage *this)

{
  if (this->pev->model != 0) {
    (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + this->pev->model);
  }
  return;
}

/* 000c8118  CWreckage::Think  (431 bytes)
 * undefined Think(void)
 */
/* CWreckage::Think(void) */

void __thiscall CWreckage::Think(CWreckage *this)

{
  int iVar1;
  longdouble extraout_ST0;
  longdouble extraout_ST0_00;
  longdouble extraout_ST0_01;
  longdouble extraout_ST0_02;
  float local_2c;
  float local_28;
  float local_24;
  
  CBaseAnimating::StudioFrameAdvance((CBaseAnimating *)this,0.0);
  this->pev->nextthink = gpGlobals->time + 0.2;
  if (this->pev->dmgtime != 0.0) {
    if (this->pev->dmgtime < gpGlobals->time) {
      UTIL_Remove((int *)this);
      return;
    }
    (*g_engfuncs.pfnRandomFloat)(0.0,this->pev->dmgtime - (float)*(int *)&this->field_0x164);
    if ((longdouble)this->pev->dmgtime - (longdouble)gpGlobals->time < extraout_ST0) {
      return;
    }
  }
  (*g_engfuncs.pfnRandomFloat)(this->pev->absmin[0],this->pev->absmax[0]);
  local_2c = (float)extraout_ST0_00;
  (*g_engfuncs.pfnRandomFloat)(this->pev->absmin[1],this->pev->absmax[1]);
  local_28 = (float)extraout_ST0_01;
  (*g_engfuncs.pfnRandomFloat)(this->pev->absmin[2],this->pev->absmax[2]);
  local_24 = (float)extraout_ST0_02;
  (*g_engfuncs.pfnMessageBegin)(4,0x17,&local_2c,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(5);
  (*g_engfuncs.pfnWriteCoord)(local_2c);
  (*g_engfuncs.pfnWriteCoord)(local_28);
  (*g_engfuncs.pfnWriteCoord)(local_24);
  (*g_engfuncs.pfnWriteShort)((int)g_sModelIndexSmoke);
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,0x31);
  (*g_engfuncs.pfnWriteByte)(iVar1 + 0x32);
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,3);
  (*g_engfuncs.pfnWriteByte)(iVar1 + 8);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

