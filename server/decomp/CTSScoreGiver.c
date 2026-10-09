/* ts_i386.so - CTSScoreGiver (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0008c090  CTSScoreGiver::KeyValue  (37 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSScoreGiver::KeyValue(KeyValueData_s *) */

void __thiscall CTSScoreGiver::KeyValue(CTSScoreGiver *this,int param_1)

{
  CTSWinGiver::KeyValue((CTSWinGiver *)this,param_1);
  return;
}

/* 0008c0b8  CTSScoreGiver::Spawn  (157 bytes)
 * undefined Spawn(void)
 */
/* CTSScoreGiver::Spawn(void) */

void __thiscall CTSScoreGiver::Spawn(CTSScoreGiver *this)

{
  this->pev->classname = (int)"ts_scoregiver" - (int)gpGlobals->pStringBase;
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

/* 0008c158  CTSScoreGiver::Use  (183 bytes)
 * undefined Use(int * param_1)
 */
/* CTSScoreGiver::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTSScoreGiver::Use(int *param_1)

{
  int iVar1;
  float in_stack_00000014;
  
  iVar1 = param_1[0x19];
  param_1[0x19] = iVar1 + 1;
  if (param_1[0x1e] <= iVar1 + 1) {
    CTSGameRules::TeamWin
              ((CTSGameRules *)&TSGameRules,param_1[0x1d],(int)ROUND(in_stack_00000014),
               (byte)*(undefined4 *)(*param_1 + 0x1a0) & 1,'\x01');
    if (*(int *)(*param_1 + 0x1d4) != 0) {
      TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + *(int *)(*param_1 + 0x1d4));
    }
    param_1[0x19] = 0;
  }
  return;
}

