/* ts_i386.so - CTSWinGiver (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0008bd5c  CTSWinGiver::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CTSWinGiver::Save(CSave &) */

undefined4 __thiscall CTSWinGiver::Save(CTSWinGiver *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CTSWinGiver",(int)this,(int *)m_SaveData,4);
  }
  return uVar2;
}

/* 0008bdac  CTSWinGiver::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CTSWinGiver::Restore(CRestore &) */

undefined4 __thiscall CTSWinGiver::Restore(CTSWinGiver *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CTSWinGiver",(int)this,(int)m_SaveData,4);
  }
  return uVar2;
}

/* 0008bdfc  CTSWinGiver::KeyValue  (253 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSWinGiver::KeyValue(KeyValueData_s *) */

void __thiscall CTSWinGiver::KeyValue(CTSWinGiver *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"victorycash");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0x6c = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"defeatcash");
    if (iVar1 == 0) {
      uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      *(undefined4 *)&this->field_0x70 = uVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"winnerteam");
      if (iVar1 == 0) {
        uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
        *(undefined4 *)&this->field_0x74 = uVar2;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(param_1 + 4),"callsnumber");
        if (iVar1 == 0) {
          uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
          *(undefined4 *)&this->field_0x78 = uVar2;
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

/* 0008bf00  CTSWinGiver::EnableObjective  (16 bytes)
 * undefined EnableObjective(int param_1)
 */
/* CTSWinGiver::EnableObjective(bool) */

void CTSWinGiver::EnableObjective(int param_1)

{
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  return;
}

/* 0008bf10  CTSWinGiver::Spawn  (157 bytes)
 * undefined Spawn(void)
 */
/* CTSWinGiver::Spawn(void) */

void __thiscall CTSWinGiver::Spawn(CTSWinGiver *this)

{
  this->pev->classname = (int)"ts_wingiver" - (int)gpGlobals->pStringBase;
  this->pev->effects = 0x80;
  this->pev->solid = 0;
  this->pev->flags = 0;
  this->pev->movetype = 0;
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  this->pev->nextthink = gpGlobals->time + 10.0;
  (*this->vtable[0xf])(this);
  return;
}

/* 0008bfb0  CTSWinGiver::Use  (187 bytes)
 * undefined Use(int * param_1)
 */
/* CTSWinGiver::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTSWinGiver::Use(int *param_1)

{
  int iVar1;
  float in_stack_00000014;
  
  if (((char)param_1[0x1a] == '\0') &&
     (iVar1 = param_1[0x19], param_1[0x19] = iVar1 + 1, param_1[0x1e] <= iVar1 + 1)) {
    CTSGameRules::TeamWin
              ((CTSGameRules *)&TSGameRules,param_1[0x1d],(int)ROUND(in_stack_00000014),'\x01','\0')
    ;
    if (*(int *)(*param_1 + 0x1d4) != 0) {
      TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + *(int *)(*param_1 + 0x1d4));
    }
    param_1[0x19] = 0;
    *(undefined1 *)(param_1 + 0x1a) = 1;
  }
  return;
}

/* 0008e64c  CTSWinGiver::IsObjective  (3 bytes)
 * undefined1 IsObjective(void)
 */
/* CTSWinGiver::IsObjective(void) */

undefined1 CTSWinGiver::IsObjective(void)

{
  return 1;
}

