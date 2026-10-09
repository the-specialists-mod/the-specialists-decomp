/* ts_i386.so - CFade (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000bd68c  CFade::Spawn  (160 bytes)
 * undefined Spawn(void)
 */
/* CFade::Spawn(void) */

void __thiscall CFade::Spawn(CFade *this)

{
  int *piVar1;
  
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  UTIL_SetSize((int)this->pev,this->pev->mins,this->pev->maxs);
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 0x80;
  this->pev->movetype = 5;
  this->pev->solid = 0;
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  return;
}

/* 000bd72c  CFade::KeyValue  (160 bytes)
 * undefined KeyValue(int param_1)
 */
/* CFade::KeyValue(KeyValueData_s *) */

void __thiscall CFade::KeyValue(CFade *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"duration");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    this->pev->dmg_take = (float)lVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"holdtime");
    if (iVar1 == 0) {
      lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      this->pev->dmg_save = (float)lVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

/* 000bd7d0  CFade::Use  (468 bytes)
 * undefined Use(CBaseEntity * param_1, int * param_2)
 */
/* CFade::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CFade::Use(CBaseEntity *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ushort local_a8;
  undefined4 local_9c [35];
  
  bVar3 = (((byte)param_1->pev->spawnflags ^ 1) & 1) != 0;
  local_a8 = (ushort)bVar3;
  if ((param_1->pev->spawnflags & 2) != 0) {
    local_a8 = bVar3 | 2;
  }
  if ((param_1->pev->spawnflags & 8) == 0) {
    if ((param_1->pev->spawnflags & 4) == 0) {
      UTIL_ScreenFadeAll(param_1->pev->rendercolor,param_1->pev->dmg_take,param_1->pev->dmg_save,
                         (char)(int)ROUND(param_1->pev->renderamt),local_a8);
    }
    else {
      iVar1 = (**(code **)(param_2[0x18] + 0xcc))(param_2);
      if (iVar1 != 0) {
        UTIL_ScreenFade(param_2,param_1->pev->rendercolor,param_1->pev->dmg_take,
                        param_1->pev->dmg_save,(char)(int)ROUND(param_1->pev->renderamt),local_a8);
      }
    }
  }
  else {
    iVar1 = UTIL_EntitiesInBox((int)local_9c,0x20,param_1->pev->absmin,param_1->pev->absmax,8);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        UTIL_ScreenFade((int *)local_9c[iVar2],param_1->pev->rendercolor,param_1->pev->dmg_take,
                        param_1->pev->dmg_save,(char)(int)ROUND(param_1->pev->renderamt),local_a8);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
  }
  CBaseEntity::SUB_UseTargets(param_1,param_1,3,0);
  return;
}

/* 000bf5c4  CFade::Duration  (13 bytes)
 * longdouble Duration(CFade * this)
 */
/* CFade::Duration(void) */

longdouble __thiscall CFade::Duration(CFade *this)

{
  return (longdouble)this->pev->dmg_take;
}

/* 000bf5d4  CFade::HoldTime  (13 bytes)
 * longdouble HoldTime(CFade * this)
 */
/* CFade::HoldTime(void) */

longdouble __thiscall CFade::HoldTime(CFade *this)

{
  return (longdouble)this->pev->dmg_save;
}

/* 000bf5e4  CFade::SetDuration  (17 bytes)
 * undefined SetDuration(undefined4 param_1)
 */
/* CFade::SetDuration(float) */

void __thiscall CFade::SetDuration(CFade *this,float param_1)

{
  this->pev->dmg_take = param_1;
  return;
}

/* 000bf5f8  CFade::SetHoldTime  (17 bytes)
 * undefined SetHoldTime(undefined4 param_1)
 */
/* CFade::SetHoldTime(float) */

void __thiscall CFade::SetHoldTime(CFade *this,float param_1)

{
  this->pev->dmg_save = param_1;
  return;
}

