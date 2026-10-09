/* ts_i386.so - CTriggerPush (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e8f20  CTriggerPush::KeyValue  (37 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTriggerPush::KeyValue(KeyValueData_s *) */

void __thiscall CTriggerPush::KeyValue(CTriggerPush *this,int param_1)

{
  CBaseTrigger::KeyValue((CBaseTrigger *)this,param_1);
  return;
}

/* 000e8f48  CTriggerPush::Spawn  (199 bytes)
 * undefined Spawn(void)
 */
/* CTriggerPush::Spawn(void) */

void __thiscall CTriggerPush::Spawn(CTriggerPush *this)

{
  entvars_t *peVar1;
  bool bVar2;
  
  peVar1 = this->pev;
  bVar2 = false;
  if (((peVar1->angles[0] == g_vecZero) && (peVar1->angles[1] == DAT_00190ef0)) &&
     (peVar1->angles[2] == DAT_00190ef4)) {
    bVar2 = true;
  }
  if (bVar2) {
    this->pev->angles[1] = 360.0;
  }
  CBaseTrigger::InitTrigger((CBaseTrigger *)this);
  if (this->pev->speed == 0.0) {
    this->pev->speed = 100.0;
  }
  if ((this->pev->spawnflags & 2) != 0) {
    this->pev->solid = 0;
  }
  *(undefined4 *)&this->field_0x1c = 0xffff0000;
  *(code **)&this->field_0x20 = CBaseTrigger::ToggleUse;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  return;
}

/* 000e9010  CTriggerPush::Touch  (382 bytes)
 * undefined Touch(int * param_1)
 */
/* CTriggerPush::Touch(CBaseEntity *) */

void __thiscall CTriggerPush::Touch(CTriggerPush *this,int *param_1)

{
  int iVar1;
  entvars_t *peVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float local_3c [4];
  float local_2c [7];
  
  iVar1 = *param_1;
  switch(*(undefined4 *)(iVar1 + 0x108)) {
  case 0:
  case 7:
  case 8:
  case 0xc:
    break;
  default:
    if ((*(int *)(iVar1 + 0x10c) != 0) && (*(int *)(iVar1 + 0x10c) != 4)) {
      peVar2 = this->pev;
      if ((peVar2->spawnflags & 1) == 0) {
        peVar2 = this->pev;
        local_3c[2] = peVar2->speed;
        local_3c[0] = local_3c[2] * peVar2->movedir[0];
        local_3c[1] = local_3c[2] * peVar2->movedir[1];
        local_3c[2] = local_3c[2] * peVar2->movedir[2];
        if ((*(byte *)(iVar1 + 0x1a6) & 0x40) != 0) {
          local_2c[0] = local_3c[0] + *(float *)(iVar1 + 0x2c);
          local_2c[1] = local_3c[1] + *(float *)(iVar1 + 0x30);
          local_2c[2] = local_3c[2] + *(float *)(iVar1 + 0x34);
          pfVar4 = local_2c;
          pfVar5 = local_3c;
          for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar5 = *pfVar4;
            pfVar4 = pfVar4 + 1;
            pfVar5 = pfVar5 + 1;
          }
        }
        pfVar4 = local_3c;
        pfVar5 = (float *)(iVar1 + 0x2c);
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar5 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          pfVar5 = pfVar5 + 1;
        }
        *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) | 0x400000;
      }
      else {
        local_3c[2] = peVar2->speed;
        local_3c[0] = local_3c[2] * peVar2->movedir[0];
        local_3c[1] = local_3c[2] * peVar2->movedir[1];
        local_3c[2] = local_3c[2] * peVar2->movedir[2];
        local_2c[0] = *(float *)(iVar1 + 0x20) + local_3c[0];
        local_2c[1] = *(float *)(iVar1 + 0x24) + local_3c[1];
        local_2c[2] = *(float *)(iVar1 + 0x28) + local_3c[2];
        pfVar4 = local_2c;
        pfVar5 = (float *)(iVar1 + 0x20);
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar5 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          pfVar5 = pfVar5 + 1;
        }
        if (0.0 < *(float *)(iVar1 + 0x28)) {
          *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) & 0xfffffdff;
        }
        UTIL_Remove((int *)this);
      }
    }
  }
  return;
}

