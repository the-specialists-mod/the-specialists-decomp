/* mp.dll - CItem (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10021170  CItem::Spawn  (212 bytes)
 * undefined Spawn(int param_1)
 * called by: CHealthKit::Spawn, CItemAntidote::Spawn, CItemBattery::Spawn, CItemSecurity::Spawn, CItemSuit::Spawn, CTSSuperJump::Spawn
 */
void __fastcall CItem::Spawn(int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 6;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  FUN_100679a0();
  FUN_10067970();
  *(code **)(param_1 + 0x14) = ItemTouch;
  iVar2 = (*g_engfuncs.pfnDropToFloor)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  if (iVar2 == 0) {
    piVar1 = *(int **)(param_1 + 4);
    (*g_engfuncs.pfnAlertMessage)
              (at_error,s_Item__s_fell_out_of_level_at__f__10094428,gpGlobals->pStringBase + *piVar1
               ,(double)(float)piVar1[2],(double)(float)piVar1[3],(double)(float)piVar1[4]);
    UTIL_Remove(param_1);
  }
  return;
}

/* 10021250  CItem::ItemTouch  (150 bytes)
 * void ItemTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CItem::ItemTouch(class CBaseEntity *) */

void __thiscall CItem::ItemTouch(CItem *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x21250  57  ?ItemTouch@CItem@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  if ((iVar1 != 0) && (iVar1 = (**(code **)(*DAT_1009f494 + 0x8c))(param_1,this), iVar1 != 0)) {
    iVar1 = (**(code **)(*(int *)this + 0xf0))(param_1);
    if (iVar1 == 0) {
      if (DAT_1009fe78 == 0) {
        return;
      }
    }
    else {
      CBaseEntity::SUB_UseTargets((CBaseEntity *)this,param_1,3,0);
      *(undefined4 *)(this + 0x14) = 0;
      (**(code **)(*DAT_1009f494 + 0x90))(param_1,this);
      iVar1 = (**(code **)(*DAT_1009f494 + 0x94))(this);
      if (iVar1 == 5) {
        (**(code **)(*(int *)this + 200))();
        return;
      }
    }
    UTIL_Remove((int)this);
  }
  return;
}

/* 100212f0  CItem::Respawn  (102 bytes)
 * undefined Respawn()
 */
/* Identical-code folding: also CBaseEntity::Respawn, CItem::Respawn */

int __fastcall CItem::Respawn(int param_1)

{
  float10 fVar1;
  undefined1 auStack_c [12];
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  (**(code **)(*DAT_1009f494 + 0x9c))(auStack_c,param_1);
  FUN_100679a0();
  *(code **)(param_1 + 0x10) = Materialize;
  fVar1 = (float10)(**(code **)(*DAT_1009f494 + 0x98))(param_1);
  *(float *)(*(int *)(param_1 + 4) + 0x104) = (float)fVar1;
  return param_1;
}

/* 10021360  CItem::Materialize  (92 bytes)
 * void Materialize(void)
 */
/* public: void __thiscall CItem::Materialize(void) */

void __thiscall CItem::Materialize(CItem *this)

{
  char cVar1;
  
                    /* 0x21360  65  ?Materialize@CItem@@QAEXXZ */
  cVar1 = *(char *)(*(int *)(this + 4) + 0x118);
  if (cVar1 < '\0') {
    EMIT_SOUND_DYN((void *)CONCAT31((int3)((uint)this >> 8),cVar1),
                   *(undefined4 *)(*(int *)(this + 4) + 0x208),1,s_items_suitchargeok1_wav_100941b0,
                   0x3f800000,0x3f4ccccd,0,0x96);
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) & 0xffffff7f;
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 2;
  }
  *(code **)(this + 0x14) = ItemTouch;
  return;
}

