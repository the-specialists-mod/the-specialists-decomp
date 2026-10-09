/* ts_i386.so - CTSSellZone (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000726c0  CTSSellZone::KeyValue  (92 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSSellZone::KeyValue(KeyValueData_s *) */

void __thiscall CTSSellZone::KeyValue(CTSSellZone *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"attackerteam");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0x64 = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

/* 00072720  CTSSellZone::Spawn  (198 bytes)
 * undefined Spawn(void)
 */
/* CTSSellZone::Spawn(void) */

void __thiscall CTSSellZone::Spawn(CTSSellZone *this)

{
  int *piVar1;
  
  this->pev->classname = (int)"ts_sellzone" - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  UTIL_SetSize((int)this->pev,this->pev->mins,this->pev->maxs);
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 0x80;
  this->pev->solid = 1;
  this->pev->movetype = 5;
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = SellTouch;
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  return;
}

/* 000727e8  CTSSellZone::SellTouch  (434 bytes)
 * undefined SellTouch(int * param_1)
 */
/* WARNING: Removing unreachable block (ram,0x0007289a) */
/* CTSSellZone::SellTouch(CBaseEntity *) */

void __thiscall CTSSellZone::SellTouch(CTSSellZone *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  edict_t *peVar3;
  undefined3 extraout_var;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  iVar2 = strcmp(gpGlobals->pStringBase + *(int *)*param_1,"WorldGun");
  if ((iVar2 == 0) && (iVar2 = CashBased(), iVar2 != 0)) {
    peVar3 = *(edict_t **)(*param_1 + 0x208);
    if (peVar3 == (edict_t *)0x0) {
      peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    piVar7 = (int *)0x0;
    if (peVar3 != (edict_t *)0x0) {
      piVar7 = peVar3->pvPrivateData;
    }
    bVar1 = int((EHANDLE *)(piVar7 + 0x2f));
    if ((CONCAT31(extraout_var,bVar1) != 0) && (piVar7[0x34] != 0)) {
      iVar2 = 0;
      if (piVar7[0x34] != 0) {
        iVar2 = *(int *)(piVar7[0x34] + 0x7c);
      }
      iVar4 = (**(code **)(*(int *)(iVar2 + 0x60) + 200))(iVar2);
      if ((iVar4 != 0) && (piVar7[0x22] != 0x1d)) {
        if (*(int *)&this->field_0x64 != -1) {
          pcVar5 = (char *)(**(code **)(*(int *)(iVar2 + 0x60) + 0xd0))(iVar2);
          iVar4 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pcVar5);
          if (*(int *)&this->field_0x64 != iVar4) {
            return;
          }
        }
        puVar6 = get_weapon_info(piVar7[0x22]);
        iVar4 = (int)puVar6[0x36] / 2 + *(int *)(iVar2 + 0x540);
        *(int *)(iVar2 + 0x540) = iVar4;
        if ((*(byte *)(piVar7 + 0x27) & 1) != 0) {
          *(int *)(iVar2 + 0x540) = iVar4 + 0x1c2;
        }
        if ((*(byte *)(piVar7 + 0x27) & 2) != 0) {
          *(int *)(iVar2 + 0x540) = *(int *)(iVar2 + 0x540) + 400;
        }
        if ((*(byte *)(piVar7 + 0x27) & 4) != 0) {
          *(int *)(iVar2 + 0x540) = *(int *)(iVar2 + 0x540) + 0xfa;
        }
        if ((*(byte *)(piVar7 + 0x27) & 8) != 0) {
          *(int *)(iVar2 + 0x540) = *(int *)(iVar2 + 0x540) + 900;
        }
        UTIL_Remove(piVar7);
      }
    }
  }
  return;
}

