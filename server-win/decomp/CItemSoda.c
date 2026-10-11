/* mp.dll - CItemSoda (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001d4b0  CItemSoda::Spawn  (163 bytes)
 * undefined Spawn()
 */
void __fastcall CItemSoda::Spawn(int *param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x20))();
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 6;
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_can_mdl_1009e090);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  UTIL_SetSize(param_1[1],&uStack_c,&uStack_18);
  param_1[4] = (int)CanThink;
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.5;
  return;
}

/* 1001d560  CItemSoda::CanThink  (149 bytes)
 * void CanThink(void)
 */
/* public: void __thiscall CItemSoda::CanThink(void) */

void __thiscall CItemSoda::CanThink(CItemSoda *this)

{
  edict_t *this_00;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x1d560  22  ?CanThink@CItemSoda@@QAEXXZ */
  this_00 = this->pev->pContainingEntity;
  EMIT_SOUND_DYN(this_00,this_00,1,s_weapons_g_bounce3_wav_1009e078,0x3f800000,0x3f4ccccd,0);
  this->pev->solid = 1;
  local_18 = 0x41000000;
  local_14 = 0x41000000;
  local_10 = 0x41000000;
  local_c = 0xc1000000;
  local_8 = 0xc1000000;
  local_4 = 0;
  UTIL_SetSize((int)this->pev,&local_c,&local_18);
  *(undefined4 *)&this->field_0x10 = 0;
  *(code **)&this->field_0x14 = CanTouch;
  return;
}

/* 1001d600  CItemSoda::CanTouch  (144 bytes)
 * void CanTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CItemSoda::CanTouch(class CBaseEntity *) */

void __thiscall CItemSoda::CanTouch(CItemSoda *this,CBaseEntity *param_1)

{
  edict_t *pEdict;
  int iVar1;
  
                    /* 0x1d600  23  ?CanTouch@CItemSoda@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0xc0))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)param_1 + 0x54))(0x3f800000,0);
    pEdict = this->pev->owner;
    if (pEdict != (edict_t *)0x0) {
      iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
      if (iVar1 != 0) {
        (this->pev->owner->v).frags = 0.0;
      }
    }
    this->pev->solid = 0;
    this->pev->movetype = 0;
    this->pev->effects = 0x80;
    *(undefined4 *)&this->field_0x14 = 0;
    *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
    this->pev->nextthink = gpGlobals->time;
  }
  return;
}

