/* mp.dll - CItemSoda (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10019fc0  CItemSoda::Precache  (1 bytes)
 * undefined Precache()
 */
void CItemSoda::Precache(void)

{
  return;
}

/* 10019fe0  CItemSoda::Spawn  (163 bytes)
 * undefined Spawn()
 */
void __fastcall CItemSoda::Spawn(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 6;
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_can_mdl_10092f98);
  FUN_10067970();
  param_1[4] = (int)CanThink;
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.5;
  return;
}

/* 1001a090  CItemSoda::CanThink  (144 bytes)
 * void CanThink(void)
 */
/* public: void __thiscall CItemSoda::CanThink(void) */

void __thiscall CItemSoda::CanThink(CItemSoda *this)

{
  edict_t *this_00;
  
                    /* 0x1a090  21  ?CanThink@CItemSoda@@QAEXXZ */
  this_00 = this->pev->pContainingEntity;
  EMIT_SOUND_DYN(this_00,this_00,1,s_weapons_g_bounce3_wav_10092f80,0x3f800000,0x3f4ccccd,0,100);
  this->pev->solid = 1;
  FUN_10067970();
  *(undefined4 *)&this->field_0x10 = 0;
  *(code **)&this->field_0x14 = CanTouch;
  return;
}

/* 1001a120  CItemSoda::CanTouch  (144 bytes)
 * void CanTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CItemSoda::CanTouch(class CBaseEntity *) */

void __thiscall CItemSoda::CanTouch(CItemSoda *this,CBaseEntity *param_1)

{
  edict_t *pEdict;
  int iVar1;
  
                    /* 0x1a120  22  ?CanTouch@CItemSoda@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)param_1 + 0x3c))(0x3f800000,0);
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

