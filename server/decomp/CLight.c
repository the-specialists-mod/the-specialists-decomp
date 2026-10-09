/* ts_i386.so - CLight (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cba8c  CLight::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CLight::Save(CSave &) */

undefined4 __thiscall CLight::Save(CLight *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CLight",(int)this,(int *)m_SaveData,2);
  }
  return uVar2;
}

/* 000cbadc  CLight::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CLight::Restore(CRestore &) */

undefined4 __thiscall CLight::Restore(CLight *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CLight",(int)this,(int)m_SaveData,2);
  }
  return uVar2;
}

/* 000cbb2c  CLight::KeyValue  (209 bytes)
 * undefined KeyValue(int param_1)
 */
/* CLight::KeyValue(KeyValueData_s *) */

void __thiscall CLight::KeyValue(CLight *this,int param_1)

{
  entvars_t *peVar1;
  int iVar2;
  undefined4 uVar3;
  longdouble lVar4;
  
  iVar2 = strcmp(*(char **)(param_1 + 4),"style");
  if (iVar2 == 0) {
    uVar3 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0x64 = uVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar2 = strcmp(*(char **)(param_1 + 4),"pitch");
    if (iVar2 == 0) {
      peVar1 = this->pev;
      lVar4 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      peVar1->angles[0] = (float)lVar4;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar2 = strcmp(*(char **)(param_1 + 4),"pattern");
      if (iVar2 == 0) {
        iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
        *(int *)&this->field_0x68 = iVar2;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
  }
  return;
}

/* 000cbc04  CLight::Spawn  (152 bytes)
 * undefined Spawn(void)
 */
/* CLight::Spawn(void) */

void __thiscall CLight::Spawn(CLight *this)

{
  char *val;
  
  if (this->pev->targetname == 0) {
    (*g_engfuncs.pfnRemoveEntity)(this->pev->pContainingEntity);
  }
  else if (0x1f < *(int *)&this->field_0x64) {
    if ((this->pev->spawnflags & 1) == 0) {
      if (*(int *)&this->field_0x68 == 0) {
        val = "m";
      }
      else {
        val = gpGlobals->pStringBase + *(int *)&this->field_0x68;
      }
    }
    else {
      val = "a";
    }
    (*g_engfuncs.pfnLightStyle)(*(int *)&this->field_0x64,val);
  }
  return;
}

/* 000cbca4  CLight::Use  (193 bytes)
 * undefined Use(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 */
/* CLight::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CLight::Use(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char *val;
  
  if (0x1f < param_1[0x19]) {
    iVar1 = CBaseEntity::ShouldToggle(param_1,param_4,(*(byte *)(*param_1 + 0x1a0) ^ 1) & 1);
    if (iVar1 != 0) {
      if ((*(byte *)(*param_1 + 0x1a0) & 1) == 0) {
        (*g_engfuncs.pfnLightStyle)(param_1[0x19],"a");
        *(uint *)(*param_1 + 0x1a0) = *(uint *)(*param_1 + 0x1a0) | 1;
      }
      else {
        if (param_1[0x1a] == 0) {
          val = "m";
        }
        else {
          val = gpGlobals->pStringBase + param_1[0x1a];
        }
        (*g_engfuncs.pfnLightStyle)(param_1[0x19],val);
        *(uint *)(*param_1 + 0x1a0) = *(uint *)(*param_1 + 0x1a0) & 0xfffffffe;
      }
    }
  }
  return;
}

