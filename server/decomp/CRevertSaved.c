/* ts_i386.so - CRevertSaved (14 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000ddc6c  CRevertSaved::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CRevertSaved::Save(CSave &) */

undefined4 __thiscall CRevertSaved::Save(CRevertSaved *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CRevertSaved",(int)this,(int *)m_SaveData,2);
  }
  return uVar2;
}

/* 000ddcbc  CRevertSaved::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CRevertSaved::Restore(CRestore &) */

undefined4 __thiscall CRevertSaved::Restore(CRevertSaved *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CRevertSaved",(int)this,(int)m_SaveData,2);
  }
  return uVar2;
}

/* 000ddd0c  CRevertSaved::KeyValue  (273 bytes)
 * undefined KeyValue(int param_1)
 */
/* CRevertSaved::KeyValue(KeyValueData_s *) */

void __thiscall CRevertSaved::KeyValue(CRevertSaved *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"duration");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    this->pev->dmg_take = (float)lVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"holdtime");
    if (iVar1 == 0) {
      lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      this->pev->dmg_save = (float)lVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"messagetime");
      if (iVar1 == 0) {
        lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
        *(float *)&this->field_0x64 = (float)lVar2;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(param_1 + 4),"loadtime");
        if (iVar1 == 0) {
          lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
          *(float *)&this->field_0x68 = (float)lVar2;
          *(undefined4 *)(param_1 + 0xc) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0xc) = 0;
        }
      }
    }
  }
  return;
}

/* 000dde24  CRevertSaved::Use  (147 bytes)
 * undefined Use(int * param_1)
 */
/* CRevertSaved::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CRevertSaved::Use(int *param_1)

{
  UTIL_ScreenFadeAll((float *)(*param_1 + 0x150),*(float *)(*param_1 + 0x1d8),
                     *(float *)(*param_1 + 0x1dc),(char)(int)ROUND(*(float *)(*param_1 + 0x14c)),1);
  *(float *)(*param_1 + 0x104) = (float)param_1[0x19] + gpGlobals->time;
  param_1[3] = -0x10000;
  param_1[4] = (int)MessageThink;
  return;
}

/* 000ddeb8  CRevertSaved::MessageThink  (125 bytes)
 * undefined MessageThink(void)
 */
/* CRevertSaved::MessageThink(void) */

void __thiscall CRevertSaved::MessageThink(CRevertSaved *this)

{
  float fVar1;
  
  UTIL_ShowMessageAll(gpGlobals->pStringBase + this->pev->message);
  fVar1 = *(float *)&this->field_0x68 - *(float *)&this->field_0x64;
  if (fVar1 <= 0.0) {
    LoadThink();
  }
  else {
    this->pev->nextthink = fVar1 + gpGlobals->time;
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = LoadThink;
  }
  return;
}

/* 000ddf38  CRevertSaved::LoadThink  (70 bytes)
 * undefined LoadThink(void)
 */
/* CRevertSaved::LoadThink(void) */

void CRevertSaved::LoadThink(void)

{
  if (gpGlobals->deathmatch == 0.0) {
    (*g_engfuncs.pfnServerCommand)("reload\n");
  }
  return;
}

/* 000de644  CRevertSaved::Duration  (13 bytes)
 * longdouble Duration(CRevertSaved * this)
 */
/* CRevertSaved::Duration(void) */

longdouble __thiscall CRevertSaved::Duration(CRevertSaved *this)

{
  return (longdouble)this->pev->dmg_take;
}

/* 000de654  CRevertSaved::HoldTime  (13 bytes)
 * longdouble HoldTime(CRevertSaved * this)
 */
/* CRevertSaved::HoldTime(void) */

longdouble __thiscall CRevertSaved::HoldTime(CRevertSaved *this)

{
  return (longdouble)this->pev->dmg_save;
}

/* 000de664  CRevertSaved::MessageTime  (8 bytes)
 * longdouble MessageTime(CRevertSaved * this)
 */
/* CRevertSaved::MessageTime(void) */

longdouble __thiscall CRevertSaved::MessageTime(CRevertSaved *this)

{
  return (longdouble)*(float *)&this->field_0x64;
}

/* 000de66c  CRevertSaved::LoadTime  (8 bytes)
 * longdouble LoadTime(CRevertSaved * this)
 */
/* CRevertSaved::LoadTime(void) */

longdouble __thiscall CRevertSaved::LoadTime(CRevertSaved *this)

{
  return (longdouble)*(float *)&this->field_0x68;
}

/* 000de674  CRevertSaved::SetDuration  (17 bytes)
 * undefined SetDuration(undefined4 param_1)
 */
/* CRevertSaved::SetDuration(float) */

void __thiscall CRevertSaved::SetDuration(CRevertSaved *this,float param_1)

{
  this->pev->dmg_take = param_1;
  return;
}

/* 000de688  CRevertSaved::SetHoldTime  (17 bytes)
 * undefined SetHoldTime(undefined4 param_1)
 */
/* CRevertSaved::SetHoldTime(float) */

void __thiscall CRevertSaved::SetHoldTime(CRevertSaved *this,float param_1)

{
  this->pev->dmg_save = param_1;
  return;
}

/* 000de69c  CRevertSaved::SetMessageTime  (12 bytes)
 * undefined SetMessageTime(undefined4 param_1)
 */
/* CRevertSaved::SetMessageTime(float) */

void __thiscall CRevertSaved::SetMessageTime(CRevertSaved *this,undefined4 param_1)

{
  *(undefined4 *)&this->field_0x64 = param_1;
  return;
}

/* 000de6a8  CRevertSaved::SetLoadTime  (12 bytes)
 * undefined SetLoadTime(undefined4 param_1)
 */
/* CRevertSaved::SetLoadTime(float) */

void __thiscall CRevertSaved::SetLoadTime(CRevertSaved *this,undefined4 param_1)

{
  *(undefined4 *)&this->field_0x68 = param_1;
  return;
}

