/* ts_i386.so - CEnvSpark (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a9de4  CEnvSpark::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CEnvSpark::Save(CSave &) */

undefined4 __thiscall CEnvSpark::Save(CEnvSpark *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CEnvSpark",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 000a9e34  CEnvSpark::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CEnvSpark::Restore(CRestore &) */

undefined4 __thiscall CEnvSpark::Restore(CEnvSpark *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CEnvSpark",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 000a9ecc  CEnvSpark::Spawn  (241 bytes)
 * undefined Spawn(void)
 */
/* CEnvSpark::Spawn(void) */

void __thiscall CEnvSpark::Spawn(CEnvSpark *this)

{
  uint uVar1;
  code *pcVar2;
  longdouble lVar3;
  
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  *(undefined4 *)&this->field_0x1c = 0;
  *(undefined4 *)&this->field_0x20 = 0;
  uVar1 = this->pev->spawnflags;
  if ((uVar1 & 0x20) == 0) {
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = SparkThink;
  }
  else {
    if ((uVar1 & 0x40) == 0) {
      pcVar2 = SparkStart;
    }
    else {
      *(undefined4 *)&this->field_0xc = 0xffff0000;
      *(code **)&this->field_0x10 = SparkThink;
      pcVar2 = SparkStop;
    }
    *(undefined4 *)&this->field_0x1c = 0xffff0000;
    *(code **)&this->field_0x20 = pcVar2;
  }
  lVar3 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.0,1.5);
  this->pev->nextthink = (float)(lVar3 + (longdouble)gpGlobals->time + (longdouble)0.1);
  if (*(float *)&this->field_0x64 <= 0.0) {
    *(undefined4 *)&this->field_0x64 = 0x3fc00000;
  }
  (*this->vtable[10])(this);
  return;
}

/* 000a9fc4  CEnvSpark::Precache  (102 bytes)
 * undefined Precache(void)
 */
/* CEnvSpark::Precache(void) */

void CEnvSpark::Precache(void)

{
  (*g_engfuncs.pfnPrecacheSound)("buttons/spark1.wav");
  (*g_engfuncs.pfnPrecacheSound)("buttons/spark2.wav");
  (*g_engfuncs.pfnPrecacheSound)("buttons/spark3.wav");
  (*g_engfuncs.pfnPrecacheSound)("buttons/spark4.wav");
  (*g_engfuncs.pfnPrecacheSound)("buttons/spark5.wav");
  (*g_engfuncs.pfnPrecacheSound)("buttons/spark6.wav");
  return;
}

/* 000aa02c  CEnvSpark::KeyValue  (254 bytes)
 * undefined KeyValue(int param_1)
 */
/* CEnvSpark::KeyValue(KeyValueData_s *) */

void __thiscall CEnvSpark::KeyValue(CEnvSpark *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"MaxDelay");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this->field_0x64 = (float)lVar2;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"style");
    if ((((iVar1 != 0) && (iVar1 = strcmp(*(char **)(param_1 + 4),"height"), iVar1 != 0)) &&
        (iVar1 = strcmp(*(char **)(param_1 + 4),"killtarget"), iVar1 != 0)) &&
       (((iVar1 = strcmp(*(char **)(param_1 + 4),"value1"), iVar1 != 0 &&
         (iVar1 = strcmp(*(char **)(param_1 + 4),"value2"), iVar1 != 0)) &&
        (iVar1 = strcmp(*(char **)(param_1 + 4),"value3"), iVar1 != 0)))) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 000aa12c  CEnvSpark::SparkThink  (87 bytes)
 * undefined SparkThink(void)
 */
/* CEnvSpark::SparkThink(void) */

void __thiscall CEnvSpark::SparkThink(CEnvSpark *this)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.0,*(float *)&this->field_0x64);
  this->pev->nextthink = (float)(lVar1 + (longdouble)gpGlobals->time + (longdouble)0.1);
  DoSpark((int)this->pev,this->pev->origin);
  return;
}

/* 000aa184  CEnvSpark::SparkStart  (113 bytes)
 * undefined SparkStart(int * param_1)
 */
/* CEnvSpark::SparkStart(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CEnvSpark::SparkStart(int *param_1)

{
  longdouble lVar1;
  
  param_1[7] = -0x10000;
  param_1[8] = (int)SparkStop;
  param_1[3] = -0x10000;
  param_1[4] = (int)SparkThink;
  lVar1 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.0,(float)param_1[0x19]);
  *(float *)(*param_1 + 0x104) = (float)(lVar1 + (longdouble)gpGlobals->time + (longdouble)0.1);
  return;
}

/* 000aa1f8  CEnvSpark::SparkStop  (54 bytes)
 * undefined SparkStop(int param_1)
 */
/* CEnvSpark::SparkStop(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CEnvSpark::SparkStop(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0xffff0000;
  *(code **)(param_1 + 0x20) = SparkStart;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

