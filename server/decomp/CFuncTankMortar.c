/* ts_i386.so - CFuncTankMortar (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c49b8  CFuncTankMortar::KeyValue  (99 bytes)
 * undefined KeyValue(int param_1)
 */
/* CFuncTankMortar::KeyValue(KeyValueData_s *) */

void __thiscall CFuncTankMortar::KeyValue(CFuncTankMortar *this,int param_1)

{
  entvars_t *peVar1;
  int iVar2;
  
  iVar2 = strcmp(*(char **)(param_1 + 4),"iMagnitude");
  if (iVar2 == 0) {
    peVar1 = this->pev;
    iVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    peVar1->impulse = iVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    CFuncTank::KeyValue((CFuncTank *)this,param_1);
  }
  return;
}

/* 000c4a20  CFuncTankMortar::Fire  (225 bytes)
 * undefined Fire(CFuncTank * param_1, float * param_2, float * param_3)
 */
/* CFuncTankMortar::Fire(Vector const &, Vector const &, entvars_s *) */

void CFuncTankMortar::Fire(CFuncTank *param_1,float *param_2,float *param_3)

{
  undefined2 in_FPUControlWord;
  undefined1 auStack_6c [20];
  undefined4 local_58 [13];
  int local_24;
  undefined2 local_20;
  undefined2 uStack_1e;
  
  if (*(float *)&param_1[1].field_0x34 != 0.0) {
    _local_20 = CONCAT22(uStack_1e,in_FPUControlWord);
    local_24 = (int)ROUND((gpGlobals->time - *(float *)&param_1[1].field_0x34) *
                          *(float *)&param_1[1].field_0x38);
    if (local_24 < 1) {
      return;
    }
    UTIL_MakeAimVectors((uint *)param_1->pev->angles);
    CFuncTank::TankTrace
              (param_1,param_2,param_3,(float *)(&gTankSpread + *(int *)&param_1[2].field_0x14 * 3),
               auStack_6c);
    ExplosionCreate(local_58,param_1->pev->angles,param_1->pev->pContainingEntity,
                    param_1->pev->impulse,1);
  }
  CFuncTank::Fire((CBaseEntity *)param_1,param_2);
  return;
}

