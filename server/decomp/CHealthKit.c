/* ts_i386.so - CHealthKit (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c88e8  CHealthKit::Spawn  (72 bytes)
 * undefined Spawn(void)
 */
/* CHealthKit::Spawn(void) */

void __thiscall CHealthKit::Spawn(CHealthKit *this)

{
  (*this->vtable[10])(this);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/w_medkit.mdl");
  CItem::Spawn((CItem *)this);
  return;
}

/* 000c8930  CHealthKit::Precache  (53 bytes)
 * undefined Precache(void)
 */
/* CHealthKit::Precache(void) */

void CHealthKit::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)("models/w_medkit.mdl");
  (*g_engfuncs.pfnPrecacheSound)("items/smallmedkit1.wav");
  return;
}

/* 000c8968  CHealthKit::MyTouch  (258 bytes)
 * undefined4 MyTouch(int * param_1)
 */
/* CHealthKit::MyTouch(CBasePlayer *) */

undefined4 __thiscall CHealthKit::MyTouch(CHealthKit *this,int *param_1)

{
  int iVar1;
  
  if ((*(int *)(*param_1 + 0x170) == 0) &&
     (iVar1 = (**(code **)(param_1[0x18] + 0x5c))(param_1,0x42480000,0), iVar1 != 0)) {
    (*g_engfuncs.pfnMessageBegin)(1,gmsgItemPickup,(float *)0x0,*(edict_t **)(*param_1 + 0x208));
    (*g_engfuncs.pfnWriteString)(gpGlobals->pStringBase + this->pev->classname);
    (*g_engfuncs.pfnMessageEnd)();
    EMIT_SOUND_DYN(*(int *)(*param_1 + 0x208),3,"items/smallmedkit1.wav",0x3f800000,0x3f4ccccd,0,100
                   ,0.5);
    iVar1 = (**(code **)(*g_pGameRules + 0x98))(g_pGameRules,this);
    if (iVar1 == 0) {
      UTIL_Remove((int *)this);
    }
    else {
      (*this->vtable[0x3b])(this);
    }
    return 1;
  }
  return 0;
}

