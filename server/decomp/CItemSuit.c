/* ts_i386.so - CItemSuit (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cb59c  CItemSuit::Spawn  (72 bytes)
 * undefined Spawn(void)
 */
/* CItemSuit::Spawn(void) */

void __thiscall CItemSuit::Spawn(CItemSuit *this)

{
  (*this->vtable[10])(this);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/w_suit.mdl");
  CItem::Spawn((CItem *)this);
  return;
}

/* 000cb5e4  CItemSuit::Precache  (39 bytes)
 * undefined Precache(void)
 */
/* CItemSuit::Precache(void) */

void CItemSuit::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)("models/w_suit.mdl");
  return;
}

/* 000cb60c  CItemSuit::MyTouch  (116 bytes)
 * undefined4 MyTouch(int * param_1)
 */
/* CItemSuit::MyTouch(CBasePlayer *) */

undefined4 __thiscall CItemSuit::MyTouch(CItemSuit *this,int *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  
  if (*(int *)(*param_1 + 0x168) < 0) {
    uVar1 = 0;
  }
  else {
    if ((this->pev->spawnflags & 1) == 0) {
      iVar3 = *param_1;
      pcVar2 = "!HEV_AAx";
    }
    else {
      iVar3 = *param_1;
      pcVar2 = "!HEV_A0";
    }
    EMIT_SOUND_SUIT(*(int *)(iVar3 + 0x208),pcVar2);
    *(uint *)(*param_1 + 0x168) = *(uint *)(*param_1 + 0x168) | 0x80000000;
    uVar1 = 1;
  }
  return uVar1;
}

