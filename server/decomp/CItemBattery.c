/* ts_i386.so - CItemBattery (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cb6cc  CItemBattery::Spawn  (72 bytes)
 * undefined Spawn(void)
 */
/* CItemBattery::Spawn(void) */

void __thiscall CItemBattery::Spawn(CItemBattery *this)

{
  (*this->vtable[10])(this);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/w_battery.mdl");
  CItem::Spawn((CItem *)this);
  return;
}

/* 000cb714  CItemBattery::Precache  (53 bytes)
 * undefined Precache(void)
 */
/* CItemBattery::Precache(void) */

void CItemBattery::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)("models/w_battery.mdl");
  (*g_engfuncs.pfnPrecacheSound)("items/gunpickup2.wav");
  return;
}

/* 000cb74c  CItemBattery::MyTouch  (355 bytes)
 * undefined4 MyTouch(CBasePlayer * param_1)
 */
/* CItemBattery::MyTouch(CBasePlayer *) */

undefined4 __thiscall CItemBattery::MyTouch(CItemBattery *this,CBasePlayer *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_4c [64];
  
  if (((param_1->pev->deadflag != 0) || (100.0 <= param_1->pev->armorvalue)) ||
     (-1 < param_1->pev->weapons)) {
    uVar1 = 0;
  }
  else {
    CBasePlayer::TakeArmor(param_1,0x32);
    EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,3,"items/gunpickup2.wav",0x3f800000,
                   0x3f4ccccd,0,100,0.5);
    (*g_engfuncs.pfnMessageBegin)(1,gmsgItemPickup,(float *)0x0,param_1->pev->pContainingEntity);
    (*g_engfuncs.pfnWriteString)(gpGlobals->pStringBase + this->pev->classname);
    (*g_engfuncs.pfnMessageEnd)();
    iVar2 = (int)ROUND(param_1->pev->armorvalue * 100.0 * 0.01 + 0.5) / 5;
    if (0 < iVar2) {
      iVar2 = iVar2 + -1;
    }
    sprintf(local_4c,"!HEV_%1dP",iVar2);
    CBasePlayer::SetSuitUpdate(param_1,local_4c,0,0x1e);
    uVar1 = 1;
  }
  return uVar1;
}

