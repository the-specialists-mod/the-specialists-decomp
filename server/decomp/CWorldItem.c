/* ts_i386.so - CWorldItem (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cad0c  CWorldItem::KeyValue  (92 bytes)
 * undefined KeyValue(int param_1)
 */
/* CWorldItem::KeyValue(KeyValueData_s *) */

void __thiscall CWorldItem::KeyValue(CWorldItem *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"type");
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

/* 000cad6c  CWorldItem::Spawn  (261 bytes)
 * undefined Spawn(void)
 */
/* CWorldItem::Spawn(void) */

void __thiscall CWorldItem::Spawn(CWorldItem *this)

{
  char *pcVar1;
  int *piVar2;
  vec_t *pvVar3;
  vec_t *pvVar4;
  
  piVar2 = (int *)0x0;
  switch(*(undefined4 *)&this->field_0x64) {
  case 0x2a:
    pvVar4 = this->pev->angles;
    pvVar3 = this->pev->origin;
    pcVar1 = "item_antidote";
    break;
  case 0x2b:
    pvVar4 = this->pev->angles;
    pvVar3 = this->pev->origin;
    pcVar1 = "item_security";
    break;
  case 0x2c:
    pvVar4 = this->pev->angles;
    pvVar3 = this->pev->origin;
    pcVar1 = "item_battery";
    break;
  case 0x2d:
    pvVar4 = this->pev->angles;
    pvVar3 = this->pev->origin;
    pcVar1 = "item_suit";
    break;
  default:
    goto switchD_000cada0_default;
  }
  piVar2 = CBaseEntity::Create((int)pcVar1,pvVar3,pvVar4,0);
switchD_000cada0_default:
  if (piVar2 == (int *)0x0) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,"unable to create world_item %d\n",*(undefined4 *)&this->field_0x64);
  }
  else {
    *(string_t *)(*piVar2 + 0x1c8) = this->pev->target;
    *(string_t *)(*piVar2 + 0x1cc) = this->pev->targetname;
    *(int *)(*piVar2 + 0x1a0) = this->pev->spawnflags;
  }
  (*g_engfuncs.pfnRemoveEntity)(this->pev->pContainingEntity);
  return;
}

