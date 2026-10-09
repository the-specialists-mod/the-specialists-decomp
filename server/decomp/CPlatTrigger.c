/* ts_i386.so - CPlatTrigger (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000d2858  CPlatTrigger::SpawnInsideTrigger  (375 bytes)
 * undefined SpawnInsideTrigger(int * param_1)
 */
/* CPlatTrigger::SpawnInsideTrigger(CFuncPlat *) */

void __thiscall CPlatTrigger::SpawnInsideTrigger(CPlatTrigger *this,int *param_1)

{
  int iVar1;
  vec_t *pvVar2;
  vec_t *pvVar3;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  
  *(int **)&this->field_0x64 = param_1;
  this->pev->solid = 1;
  this->pev->movetype = 0;
  pvVar2 = (vec_t *)(*param_1 + 8);
  pvVar3 = this->pev->origin;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  local_2c = *(float *)(**(int **)&this->field_0x64 + 0xdc) + 25.0;
  local_28 = *(float *)(**(int **)&this->field_0x64 + 0xe0) + 25.0;
  iVar1 = **(int **)&this->field_0x64;
  local_3c = *(float *)(iVar1 + 0xe8) + 25.0;
  local_38 = *(float *)(iVar1 + 0xec) + 25.0;
  local_34 = *(float *)(iVar1 + 0xf0) + 8.0;
  local_24 = local_34 -
             ((*(float *)(*(int *)&this->field_0x64 + 0xa4) -
              *(float *)(*(int *)&this->field_0x64 + 0xb0)) + 8.0);
  iVar1 = **(int **)&this->field_0x64;
  if (*(float *)(iVar1 + 0xf4) <= 50.0) {
    local_2c = (*(float *)(iVar1 + 0xdc) + *(float *)(iVar1 + 0xe8)) * 0.5;
    local_3c = local_2c + 1.0;
  }
  iVar1 = **(int **)&this->field_0x64;
  if (*(float *)(iVar1 + 0xf8) <= 50.0) {
    local_28 = (*(float *)(iVar1 + 0xe0) + *(float *)(iVar1 + 0xec)) * 0.5;
    local_38 = local_28 + 1.0;
  }
  UTIL_SetSize((int)this->pev,&local_2c,&local_3c);
  return;
}

/* 000d29d0  CPlatTrigger::Touch  (150 bytes)
 * undefined Touch(undefined4 * param_1)
 */
/* CPlatTrigger::Touch(CBaseEntity *) */

void __thiscall CPlatTrigger::Touch(CPlatTrigger *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = strcmp(gpGlobals->pStringBase + *(int *)*param_1,"player");
  if (iVar1 == 0) {
    iVar1 = (**(code **)(param_1[0x18] + 0xb4))(param_1);
    if (iVar1 != 0) {
      iVar1 = *(int *)&this->field_0x64;
      if (*(int *)(iVar1 + 0x80) == 1) {
        (**(code **)(*(int *)(iVar1 + 0x60) + 0x11c))(iVar1);
      }
      else if ((*(int **)&this->field_0x64)[0x20] == 0) {
        iVar1 = **(int **)&this->field_0x64;
        *(float *)(iVar1 + 0x104) = *(float *)(iVar1 + 0x100) + 1.0;
      }
    }
  }
  return;
}

/* 000d7b80  CPlatTrigger::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CPlatTrigger::ObjectCaps(void) */

undefined4 CPlatTrigger::ObjectCaps(void)

{
  return 0x80000000;
}

