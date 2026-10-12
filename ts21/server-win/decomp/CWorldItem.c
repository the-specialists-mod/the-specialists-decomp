/* mp.dll - CWorldItem (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10021040  CWorldItem::KeyValue  (72 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CWorldItem::KeyValue(CWorldItem *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = 5;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = &DAT_100943d4;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    uVar1 = FUN_1006e1dd(*(void **)(param_1 + 8),*(void **)(param_1 + 8));
    *(undefined4 *)&this->field_0x54 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10021090  CWorldItem::Spawn  (208 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CWorldItem::Spawn(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  switch(*(undefined4 *)(param_1 + 0x54)) {
  case 0x2a:
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 0x50);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    pcVar3 = s_item_antidote_10094418;
    break;
  case 0x2b:
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 0x50);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    pcVar3 = s_item_security_10094408;
    break;
  case 0x2c:
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 0x50);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    pcVar3 = s_item_battery_10093430;
    break;
  case 0x2d:
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 0x50);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    pcVar3 = s_item_suit_100943fc;
    break;
  default:
    goto switchD_1002109e_default;
  }
  iVar2 = CBaseEntity::Create((int)pcVar3,puVar1,puVar4,0);
  if (iVar2 == 0) {
switchD_1002109e_default:
    (*g_engfuncs.pfnAlertMessage)
              (at_console,s_unable_to_create_world_item__d_100943dc,*(undefined4 *)(param_1 + 0x54))
    ;
  }
  else {
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x1c8) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c8);
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x1cc) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1cc);
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x1a0) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a0);
  }
  (*g_engfuncs.pfnRemoveEntity)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  return;
}

