/* mp.dll - CWorldItem (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10029000  CWorldItem::KeyValue  (110 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CWorldItem::KeyValue(CWorldItem *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  CWorldItem *this_00;
  byte *pbVar6;
  bool bVar7;
  undefined3 uVar5;
  
  pbVar6 = &DAT_1009f6e4;
  pbVar2 = *(byte **)(param_1 + 4);
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CWorldItem *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_1002903a:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1002903f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CWorldItem *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_1002903a;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002903f:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x54 = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10029070  CWorldItem::Spawn  (208 bytes)
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
    pcVar3 = s_item_antidote_1009f728;
    break;
  case 0x2b:
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 0x50);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    pcVar3 = s_item_security_1009f718;
    break;
  case 0x2c:
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 0x50);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    pcVar3 = s_item_battery_1009e528;
    break;
  case 0x2d:
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 0x50);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    pcVar3 = s_item_suit_1009f70c;
    break;
  default:
    goto switchD_1002907e_default;
  }
  iVar2 = CBaseEntity::Create((int)pcVar3,puVar1,puVar4,0);
  if (iVar2 == 0) {
switchD_1002907e_default:
    (*g_engfuncs.pfnAlertMessage)
              (at_console,s_unable_to_create_world_item__d_1009f6ec,*(undefined4 *)(param_1 + 0x54))
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

