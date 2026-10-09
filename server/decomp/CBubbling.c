/* ts_i386.so - CBubbling (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000b8844  CBubbling::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CBubbling::Save(CSave &) */

undefined4 __thiscall CBubbling::Save(CBubbling *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CBubbling",(int)this,(int *)m_SaveData,3);
  }
  return uVar2;
}

/* 000b8894  CBubbling::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CBubbling::Restore(CRestore &) */

undefined4 __thiscall CBubbling::Restore(CBubbling *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CBubbling",(int)this,(int)m_SaveData,3);
  }
  return uVar2;
}

/* 000b88e4  CBubbling::Spawn  (315 bytes)
 * undefined Spawn(void)
 */
/* CBubbling::Spawn(void) */

void __thiscall CBubbling::Spawn(CBubbling *this)

{
  uint uVar1;
  vec_t vVar2;
  
  (*this->vtable[10])(this);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  this->pev->solid = 0;
  this->pev->renderamt = 0.0;
  this->pev->rendermode = 2;
  uVar1 = (uint)ROUND(ABS(this->pev->speed));
  this->pev->rendercolor[0] = (float)((int)uVar1 >> 8);
  this->pev->rendercolor[1] = (float)(uVar1 & 0xff);
  if (0.0 <= this->pev->speed) {
    vVar2 = 0.0;
  }
  else {
    vVar2 = 1.0;
  }
  this->pev->rendercolor[2] = vVar2;
  if ((((byte)this->pev->spawnflags ^ 1) & 1) == 0) {
    *(undefined4 *)&this->field_0x70 = 0;
  }
  else {
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = FizzThink;
    this->pev->nextthink = gpGlobals->time + 2.0;
    *(undefined4 *)&this->field_0x70 = 1;
  }
  return;
}

/* 000b8a24  CBubbling::Precache  (48 bytes)
 * undefined Precache(void)
 */
/* CBubbling::Precache(void) */

void __thiscall CBubbling::Precache(CBubbling *this)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnPrecacheModel)("sprites/bubble.spr");
  *(int *)&this->field_0x6c = iVar1;
  return;
}

/* 000b8a54  CBubbling::Use  (144 bytes)
 * undefined Use(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 */
/* CBubbling::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CBubbling::Use(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = CBaseEntity::ShouldToggle(param_1,param_4,param_1[0x1c]);
  if (iVar1 != 0) {
    param_1[0x1c] = (uint)(param_1[0x1c] == 0);
  }
  if (param_1[0x1c] == 0) {
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined4 *)(*param_1 + 0x104) = 0;
  }
  else {
    param_1[3] = -0x10000;
    param_1[4] = (int)FizzThink;
    *(float *)(*param_1 + 0x104) = gpGlobals->time + 0.1;
  }
  return;
}

/* 000b8ae4  CBubbling::KeyValue  (209 bytes)
 * int KeyValue(int param_1)
 */
/* CBubbling::KeyValue(KeyValueData_s *) */

int __thiscall CBubbling::KeyValue(CBubbling *this,int param_1)

{
  entvars_t *peVar1;
  int iVar2;
  
  iVar2 = strcmp(*(char **)(param_1 + 4),"density");
  if (iVar2 == 0) {
    iVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(int *)&this->field_0x64 = iVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar2 = strcmp(*(char **)(param_1 + 4),"frequency");
    if (iVar2 == 0) {
      iVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      *(int *)&this->field_0x68 = iVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar2 = strcmp(*(char **)(param_1 + 4),"current");
      if (iVar2 == 0) {
        peVar1 = this->pev;
        iVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
        peVar1->speed = (float)iVar2;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
  }
  return iVar2;
}

/* 000b8bb8  CBubbling::FizzThink  (213 bytes)
 * undefined FizzThink(void)
 */
/* CBubbling::FizzThink(void) */

void __thiscall CBubbling::FizzThink(CBubbling *this)

{
  int iVar1;
  float local_2c [7];
  
  VecBModelOrigin(local_2c,(int)this->pev);
  (*g_engfuncs.pfnMessageBegin)(5,0x17,local_2c,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0x69);
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteShort)((int)(short)iVar1);
  (*g_engfuncs.pfnWriteShort)((int)*(short *)&this->field_0x6c);
  (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x64);
  (*g_engfuncs.pfnMessageEnd)();
  if (*(int *)&this->field_0x68 < 0x14) {
    this->pev->nextthink = (gpGlobals->time + 2.5) - (float)*(int *)&this->field_0x68 * 0.1;
  }
  else {
    this->pev->nextthink = gpGlobals->time + 0.5;
  }
  return;
}

/* 000bf268  CBubbling::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CBubbling::ObjectCaps(void) */

undefined4 CBubbling::ObjectCaps(void)

{
  return 0;
}

