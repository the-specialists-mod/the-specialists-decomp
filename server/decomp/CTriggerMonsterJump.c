/* ts_i386.so - CTriggerMonsterJump (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e6a0c  CTriggerMonsterJump::Spawn  (143 bytes)
 * undefined Spawn(void)
 */
/* CTriggerMonsterJump::Spawn(void) */

void __thiscall CTriggerMonsterJump::Spawn(CTriggerMonsterJump *this)

{
  SetMovedir((int)this->pev);
  CBaseTrigger::InitTrigger((CBaseTrigger *)this);
  this->pev->nextthink = 0.0;
  this->pev->speed = 200.0;
  *(undefined4 *)&this->field_0xd0 = 0x43160000;
  if (this->pev->targetname != 0) {
    this->pev->solid = 0;
    UTIL_SetOrigin((int)this->pev,this->pev->origin);
    *(undefined4 *)&this->field_0x1c = 0xffff0000;
    *(code **)&this->field_0x20 = CBaseTrigger::ToggleUse;
  }
  return;
}

/* 000e6a9c  CTriggerMonsterJump::Think  (69 bytes)
 * undefined Think(void)
 */
/* CTriggerMonsterJump::Think(void) */

void __thiscall CTriggerMonsterJump::Think(CTriggerMonsterJump *this)

{
  this->pev->solid = 0;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  return;
}

/* 000e6ae4  CTriggerMonsterJump::Touch  (168 bytes)
 * undefined Touch(int * param_1)
 */
/* CTriggerMonsterJump::Touch(CBaseEntity *) */

void __thiscall CTriggerMonsterJump::Touch(CTriggerMonsterJump *this,int *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  entvars_t *peVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float local_2c [7];
  
  iVar2 = *param_1;
  uVar3 = *(uint *)(iVar2 + 0x1a4);
  if ((uVar3 & 0x20) != 0) {
    *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) + 1.0;
    if ((uVar3 & 0x200) != 0) {
      *(uint *)(iVar2 + 0x1a4) = uVar3 & 0xfffffdff;
    }
    peVar4 = this->pev;
    fVar1 = peVar4->speed;
    local_2c[0] = fVar1 * peVar4->movedir[0];
    local_2c[1] = fVar1 * peVar4->movedir[1];
    local_2c[2] = fVar1 * peVar4->movedir[2];
    pfVar6 = local_2c;
    puVar7 = (undefined4 *)(iVar2 + 0x20);
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) + *(float *)&this->field_0xd0;
    this->pev->nextthink = gpGlobals->time;
  }
  return;
}

