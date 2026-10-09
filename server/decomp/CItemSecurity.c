/* ts_i386.so - CItemSecurity (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cb9e8  CItemSecurity::Spawn  (72 bytes)
 * undefined Spawn(void)
 */
/* CItemSecurity::Spawn(void) */

void __thiscall CItemSecurity::Spawn(CItemSecurity *this)

{
  (*this->vtable[10])(this);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/w_security.mdl");
  CItem::Spawn((CItem *)this);
  return;
}

/* 000cba30  CItemSecurity::Precache  (39 bytes)
 * undefined Precache(void)
 */
/* CItemSecurity::Precache(void) */

void CItemSecurity::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)("models/w_security.mdl");
  return;
}

/* 000cba58  CItemSecurity::MyTouch  (16 bytes)
 * undefined4 MyTouch(undefined4 this, int param_2)
 */
/* CItemSecurity::MyTouch(CBasePlayer *) */

undefined4 __thiscall CItemSecurity::MyTouch(undefined4 this,int param_2)

{
  *(int *)(param_2 + 0x838) = *(int *)(param_2 + 0x838) + 1;
  return 1;
}

