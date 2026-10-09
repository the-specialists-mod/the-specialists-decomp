/* ts_i386.so - CBloodSplat (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000db360  CBloodSplat::Spawn  (200 bytes)
 * undefined Spawn(int param_1)
 */
/* CBloodSplat::Spawn(entvars_s *) */

void __thiscall CBloodSplat::Spawn(CBloodSplat *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  vec_t *pvVar3;
  vec_t *pvVar4;
  float local_2c [7];
  
  local_2c[0] = *(float *)(param_1 + 8) + 0.0;
  local_2c[1] = *(float *)(param_1 + 0xc) + 0.0;
  local_2c[2] = *(float *)(param_1 + 0x10) + 32.0;
  pfVar2 = local_2c;
  pvVar3 = this->pev->origin;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  pvVar3 = (vec_t *)(param_1 + 0x74);
  pvVar4 = this->pev->angles;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar4 = *pvVar3;
    pvVar3 = pvVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  this->pev->owner = *(edict_t **)(param_1 + 0x208);
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = Spray;
  this->pev->nextthink = gpGlobals->time + 0.1;
  return;
}

/* 000db428  CBloodSplat::Spray  (250 bytes)
 * undefined Spray(void)
 */
/* CBloodSplat::Spray(void) */

void __thiscall CBloodSplat::Spray(CBloodSplat *this)

{
  entvars_t *peVar1;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_5c [76];
  
  if (g_Language != 1) {
    UTIL_MakeVectors(this->pev->angles);
    peVar1 = this->pev;
    local_6c = peVar1->origin[0] + gpGlobals->v_forward[0] * 128.0;
    local_68 = peVar1->origin[1] + gpGlobals->v_forward[1] * 128.0;
    local_64 = peVar1->origin[2] + gpGlobals->v_forward[2] * 128.0;
    UTIL_TraceLine(this->pev->origin,&local_6c,1,this->pev->owner,local_5c);
    UTIL_BloodDecalTrace((int)local_5c,0xf7);
  }
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
  this->pev->nextthink = gpGlobals->time + 0.1;
  return;
}

