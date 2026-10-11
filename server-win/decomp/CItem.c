/* mp.dll - CItem (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10029150  CItem::Spawn  (216 bytes)
 * undefined Spawn(int * param_1)
 * called by: CHealthKit::Spawn, CItemAntidote::Spawn, CItemBattery::Spawn, CItemSecurity::Spawn, CItemSuit::Spawn
 */
void __fastcall CItem::Spawn(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(param_1[1] + 0x108) = 6;
  *(undefined4 *)(param_1[1] + 0x10c) = 1;
  UTIL_SetOrigin(param_1[1],param_1[1] + 8);
  local_18 = 0x41800000;
  local_14 = 0x41800000;
  local_10 = 0x41800000;
  local_c = 0xc1800000;
  local_8 = 0xc1800000;
  local_4 = 0;
  UTIL_SetSize(param_1[1],&local_c,&local_18);
  param_1[5] = (int)ItemTouch;
  iVar2 = (*g_engfuncs.pfnDropToFloor)(*(edict_t **)(param_1[1] + 0x208));
  if (iVar2 == 0) {
    piVar1 = (int *)param_1[1];
    (*g_engfuncs.pfnAlertMessage)
              (at_error,s_Item__s_fell_out_of_level_at__f__1009f738,gpGlobals->pStringBase + *piVar1
               ,(double)(float)piVar1[2],(double)(float)piVar1[3],(double)(float)piVar1[4]);
    UTIL_Remove(param_1);
  }
  return;
}

/* 10029230  CItem::ItemTouch  (150 bytes)
 * void ItemTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CItem::ItemTouch(class CBaseEntity *) */

void __thiscall CItem::ItemTouch(CItem *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x29230  62  ?ItemTouch@CItem@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0xc0))();
  if ((iVar1 != 0) && (iVar1 = (**(code **)(*g_pGameRules + 0x88))(param_1,this), iVar1 != 0)) {
    iVar1 = (**(code **)(*(int *)this + 0x10c))(param_1);
    if (iVar1 == 0) {
      if (DAT_100aee70 == 0) {
        return;
      }
    }
    else {
      CBaseEntity::SUB_UseTargets((CBaseEntity *)this,param_1,3,0);
      *(undefined4 *)(this + 0x14) = 0;
      (**(code **)(*g_pGameRules + 0x8c))(param_1,this);
      iVar1 = (**(code **)(*g_pGameRules + 0x90))(this);
      if (iVar1 == 5) {
        (**(code **)(*(int *)this + 0xe4))();
        return;
      }
    }
    UTIL_Remove((int *)this);
  }
  return;
}

/* 100292d0  CItem::Respawn  (102 bytes)
 * undefined Respawn()
 */
int __fastcall CItem::Respawn(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined1 auStack_c [12];
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  uVar1 = (**(code **)(*g_pGameRules + 0x98))(auStack_c,param_1);
  UTIL_SetOrigin(*(int *)(param_1 + 4),uVar1);
  *(code **)(param_1 + 0x10) = Materialize;
  fVar2 = (float10)(**(code **)(*g_pGameRules + 0x94))(param_1);
  *(float *)(*(int *)(param_1 + 4) + 0x104) = (float)fVar2;
  return param_1;
}

/* 10029340  CItem::Materialize  (96 bytes)
 * void Materialize(void)
 */
/* public: void __thiscall CItem::Materialize(void) */

void __thiscall CItem::Materialize(CItem *this)

{
                    /* 0x29340  70  ?Materialize@CItem@@QAEXXZ */
  if ((*(byte *)(*(int *)(this + 4) + 0x118) & 0x80) != 0) {
    EMIT_SOUND_DYN(this,*(undefined4 *)(*(int *)(this + 4) + 0x208),1,
                   s_items_suitchargeok1_wav_1009f4d0,0x3f800000,0x3f4ccccd,0);
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) & 0xffffff7f;
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 2;
  }
  *(code **)(this + 0x14) = ItemTouch;
  return;
}

