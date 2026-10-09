/* ts_i386.so - CTriggerVolume (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e7bc0  CTriggerVolume::Spawn  (116 bytes)
 * undefined Spawn(void)
 */
/* CTriggerVolume::Spawn(void) */

void __thiscall CTriggerVolume::Spawn(CTriggerVolume *this)

{
  this->pev->solid = 0;
  this->pev->movetype = 0;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  this->pev->model = 0;
  this->pev->modelindex = 0;
  return;
}

