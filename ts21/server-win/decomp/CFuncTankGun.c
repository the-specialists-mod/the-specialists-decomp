/* mp.dll - CFuncTankGun (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001dc90  CFuncTankGun::Fire  (288 bytes)
 * undefined Fire(undefined4 * param_1, undefined4 * param_2, float param_3)
 */
void __thiscall
CFuncTankGun::Fire(CFuncTankGun *this,undefined4 *param_1,undefined4 *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  longlong lVar4;
  float in_stack_ffffffb8;
  float fVar5;
  undefined4 *puVar6;
  float in_stack_ffffffc4;
  float fVar7;
  float in_stack_ffffffd0;
  float in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  
  fVar2 = param_3;
  if (*(float *)&this->field_0x88 == 0.0) {
    CFuncTank::Fire((CFuncTank *)this,param_1);
  }
  else {
    FUN_10066e00(this->pev->angles);
    lVar4 = __ftol();
    param_3 = (float)lVar4;
    if (0 < (int)param_3) {
      do {
        iVar11 = *(int *)&this->field_0xb8;
        if (iVar11 == 1) {
          iVar11 = *(int *)&this->field_0xbc;
          fVar9 = 8.40779e-45;
LAB_1001dd34:
          iVar1 = *(int *)&this->field_0xcc;
LAB_1001dd44:
          iVar10 = 1;
          puVar3 = (undefined4 *)(&DAT_1009f44c + iVar1 * 0xc);
          fVar8 = 4096.0;
          fVar7 = 2.561127e-29;
          fVar12 = fVar2;
          FUN_1000a540(&stack0xffffffd0,puVar3);
          fVar5 = 2.5611302e-29;
          puVar6 = param_2;
          FUN_1000a540(&stack0xffffffc4,param_2);
          FUN_1000a540(&stack0xffffffb8,param_1);
          FUN_100126a0(this,1,in_stack_ffffffb8,fVar5,(float)puVar6,in_stack_ffffffc4,fVar7,
                       (float)puVar3,in_stack_ffffffd0,in_stack_ffffffd4,in_stack_ffffffd8,fVar8,
                       fVar9,iVar10,iVar11,fVar12);
        }
        else {
          if (iVar11 == 2) {
            iVar11 = *(int *)&this->field_0xbc;
            fVar9 = 9.80909e-45;
            goto LAB_1001dd34;
          }
          if (iVar11 == 3) {
            iVar1 = *(int *)&this->field_0xcc;
            iVar11 = *(int *)&this->field_0xbc;
            fVar9 = 1.12104e-44;
            goto LAB_1001dd44;
          }
        }
        param_3 = (float)((int)param_3 + -1);
        if (param_3 == 0.0) {
          CFuncTank::Fire((CFuncTank *)this,param_1);
          return;
        }
      } while( true );
    }
  }
  return;
}

