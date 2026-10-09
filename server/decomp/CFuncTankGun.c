/* ts_i386.so - CFuncTankGun (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c3f64  CFuncTankGun::Fire  (594 bytes)
 * undefined Fire(float * param_1, float * param_2, int param_3)
 */
/* CFuncTankGun::Fire(Vector const &, Vector const &, entvars_s *) */

void __thiscall CFuncTankGun::Fire(CFuncTankGun *this,float *param_1,float *param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  undefined2 in_FPUControlWord;
  int iVar4;
  int iVar5;
  int local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  undefined2 local_20;
  undefined2 uStack_1e;
  
  if (*(float *)&this->field_0x98 != 0.0) {
    UTIL_MakeAimVectors((uint *)this->pev->angles);
    _local_20 = CONCAT22(uStack_1e,in_FPUControlWord);
    iVar1 = (int)ROUND((gpGlobals->time - *(float *)&this->field_0x98) * *(float *)&this->field_0x9c
                      );
    if (iVar1 < 1) {
      return;
    }
    for (local_60 = 0; local_60 < iVar1; local_60 = local_60 + 1) {
      switch(*(undefined4 *)&this->field_0xc8) {
      default:
        goto switchD_000c400a_caseD_0;
      case 1:
        pfVar3 = &local_3c;
        local_3c = *param_1;
        local_38 = param_1[1];
        local_34 = param_1[2];
        local_4c = *param_2;
        local_48 = param_2[1];
        local_44 = param_2[2];
        pfVar2 = &local_5c;
        iVar5 = *(int *)&this->field_0xdc;
        local_5c = (float)(&gTankSpread)[iVar5 * 3];
        local_58 = (float)(&DAT_00190ea4)[iVar5 * 3];
        local_54 = (float)(&DAT_00190ea8)[iVar5 * 3];
        iVar5 = *(int *)&this->field_0xcc;
        iVar4 = 6;
        break;
      case 2:
        pfVar3 = &local_5c;
        local_5c = *param_1;
        local_58 = param_1[1];
        local_54 = param_1[2];
        local_4c = *param_2;
        local_48 = param_2[1];
        local_44 = param_2[2];
        pfVar2 = &local_3c;
        iVar5 = *(int *)&this->field_0xdc;
        local_3c = (float)(&gTankSpread)[iVar5 * 3];
        local_38 = (float)(&DAT_00190ea4)[iVar5 * 3];
        local_34 = (float)(&DAT_00190ea8)[iVar5 * 3];
        iVar5 = *(int *)&this->field_0xcc;
        iVar4 = 7;
        break;
      case 3:
        pfVar3 = &local_5c;
        local_5c = *param_1;
        local_58 = param_1[1];
        local_54 = param_1[2];
        local_4c = *param_2;
        local_48 = param_2[1];
        local_44 = param_2[2];
        pfVar2 = &local_3c;
        iVar5 = *(int *)&this->field_0xdc;
        local_3c = (float)(&gTankSpread)[iVar5 * 3];
        local_38 = (float)(&DAT_00190ea4)[iVar5 * 3];
        local_34 = (float)(&DAT_00190ea8)[iVar5 * 3];
        iVar5 = *(int *)&this->field_0xcc;
        iVar4 = 8;
      }
      CBaseEntity::FireBullets
                ((CBaseEntity *)this,1,pfVar3,&local_4c,pfVar2,4096.0,iVar4,1,iVar5,param_3);
switchD_000c400a_caseD_0:
    }
  }
  CFuncTank::Fire((CBaseEntity *)this,param_1);
  return;
}

