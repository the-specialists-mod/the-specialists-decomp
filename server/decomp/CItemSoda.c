/* ts_i386.so - CItemSoda (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000bdfdc  CItemSoda::Precache  (1 bytes)
 * undefined Precache(void)
 */
/* CItemSoda::Precache(void) */

void CItemSoda::Precache(void)

{
  return;
}

/* 000be004  CItemSoda::Spawn  (186 bytes)
 * undefined Spawn(void)
 */
/* CItemSoda::Spawn(void) */

void __thiscall CItemSoda::Spawn(CItemSoda *this)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  (*this->vtable[10])(this);
  this->pev->solid = 0;
  this->pev->movetype = 6;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/can.mdl");
  local_2c = 0;
  local_28 = local_2c;
  local_24 = local_2c;
  local_1c = local_2c;
  local_18 = local_2c;
  local_14 = local_2c;
  UTIL_SetSize((int)this->pev,&local_2c,&local_1c);
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = CanThink;
  this->pev->nextthink = gpGlobals->time + 0.5;
  return;
}

/* 000be0c0  CItemSoda::CanThink  (182 bytes)
 * undefined CanThink(void)
 */
/* CItemSoda::CanThink(void) */

void __thiscall CItemSoda::CanThink(CItemSoda *this)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  EMIT_SOUND_DYN((int)this->pev->pContainingEntity,1,"weapons/g_bounce3.wav",0x3f800000,0x3f4ccccd,0
                 ,100,0.5);
  this->pev->solid = 1;
  local_1c = 0x41000000;
  local_2c = 0xc1000000;
  local_24 = 0;
  local_28 = local_2c;
  local_18 = local_1c;
  local_14 = local_1c;
  UTIL_SetSize((int)this->pev,&local_2c,&local_1c);
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = CanTouch;
  return;
}

/* 000be178  CItemSoda::CanTouch  (227 bytes)
 * undefined CanTouch(int param_1)
 */
/* CItemSoda::CanTouch(CBaseEntity *) */

void __thiscall CItemSoda::CanTouch(CItemSoda *this,int param_1)

{
  edict_t *pEdict;
  bool bVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 0x60) + 200))(param_1);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(param_1 + 0x60) + 0x5c))(param_1,0x3f800000,0);
    pEdict = this->pev->owner;
    bVar1 = false;
    if ((pEdict == (edict_t *)0x0) ||
       (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar2 == 0)) {
      bVar1 = true;
    }
    if (!bVar1) {
      (this->pev->owner->v).frags = 0.0;
    }
    this->pev->solid = 0;
    this->pev->movetype = 0;
    this->pev->effects = 0x80;
    *(undefined4 *)&this->field_0x14 = 0;
    *(undefined4 *)&this->field_0x18 = 0;
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
    this->pev->nextthink = gpGlobals->time;
    return;
  }
  return;
}

