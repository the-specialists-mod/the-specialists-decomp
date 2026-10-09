/* ts_i386.so - CItemAntidote (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cb8f8  CItemAntidote::Spawn  (72 bytes)
 * undefined Spawn(void)
 */
/* CItemAntidote::Spawn(void) */

void __thiscall CItemAntidote::Spawn(CItemAntidote *this)

{
  (*this->vtable[10])(this);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/w_antidote.mdl");
  CItem::Spawn((CItem *)this);
  return;
}

/* 000cb940  CItemAntidote::Precache  (39 bytes)
 * undefined Precache(void)
 */
/* CItemAntidote::Precache(void) */

void CItemAntidote::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)("models/w_antidote.mdl");
  return;
}

/* 000cb968  CItemAntidote::MyTouch  (55 bytes)
 * undefined4 MyTouch(undefined4 this, CBasePlayer * param_2)
 */
/* CItemAntidote::MyTouch(CBasePlayer *) */

undefined4 __thiscall CItemAntidote::MyTouch(undefined4 this,CBasePlayer *param_2)

{
  CBasePlayer::SetSuitUpdate(param_2,"!HEV_DET4",0,0x3c);
  *(int *)&param_2->field_0x834 = *(int *)&param_2->field_0x834 + 1;
  return 1;
}

