/* ts_i386.so - CBaseSpectator (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e2824  CBaseSpectator::SpectatorConnect  (48 bytes)
 * undefined SpectatorConnect(void)
 */
/* CBaseSpectator::SpectatorConnect(void) */

void __thiscall CBaseSpectator::SpectatorConnect(CBaseSpectator *this)

{
  *(undefined4 *)(*(int *)this + 0x1a4) = 0x4000000;
  *(undefined4 *)(*(int *)this + 0x10c) = 0;
  *(undefined4 *)(*(int *)this + 0x108) = 8;
  *(undefined4 *)(this + 4) = 0;
  return;
}

/* 000e2854  CBaseSpectator::SpectatorDisconnect  (1 bytes)
 * undefined SpectatorDisconnect(void)
 */
/* CBaseSpectator::SpectatorDisconnect(void) */

void CBaseSpectator::SpectatorDisconnect(void)

{
  return;
}

/* 000e2858  CBaseSpectator::SpectatorImpulseCommand  (290 bytes)
 * undefined SpectatorImpulseCommand(void)
 */
/* CBaseSpectator::SpectatorImpulseCommand(void) */

void __thiscall CBaseSpectator::SpectatorImpulseCommand(CBaseSpectator *this)

{
  bool bVar1;
  bool bVar2;
  edict_t *peVar3;
  edict_t *pEdictStartSearchAfter;
  int iVar4;
  vec_t *pvVar5;
  vec_t *pvVar6;
  
  peVar3 = pGoal_810;
  if (*(int *)(*(int *)this + 0x184) == 1) {
    bVar2 = false;
    pEdictStartSearchAfter = pGoal_810;
    do {
      pEdictStartSearchAfter =
           (*g_engfuncs.pfnFindEntityByString)
                     (pEdictStartSearchAfter,"classname","info_player_deathmatch");
      if (pEdictStartSearchAfter == peVar3) {
        (*g_engfuncs.pfnAlertMessage)(at_console,"Could not find a spawn spot.\n");
        goto LAB_000e28e3;
      }
      bVar1 = false;
      if ((pEdictStartSearchAfter == (edict_t *)0x0) ||
         (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter), iVar4 == 0)) {
        bVar1 = true;
      }
    } while (bVar1);
    bVar2 = true;
LAB_000e28e3:
    if (bVar2) {
      pGoal_810 = pEdictStartSearchAfter;
      UTIL_SetOrigin(*(int *)this,(pEdictStartSearchAfter->v).origin);
      pvVar5 = (pGoal_810->v).angles;
      pvVar6 = (vec_t *)(*(int *)this + 0x50);
      for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pvVar6 = *pvVar5;
        pvVar5 = pvVar5 + 1;
        pvVar6 = pvVar6 + 1;
      }
      *(undefined4 *)(*(int *)this + 0xa0) = 0;
    }
  }
  else {
    (*g_engfuncs.pfnAlertMessage)(at_console,"Unknown spectator impulse\n");
  }
  *(undefined4 *)(*(int *)this + 0x184) = 0;
  return;
}

/* 000e297c  CBaseSpectator::SpectatorThink  (93 bytes)
 * undefined SpectatorThink(void)
 */
/* CBaseSpectator::SpectatorThink(void) */

void __thiscall CBaseSpectator::SpectatorThink(CBaseSpectator *this)

{
  if ((*(byte *)(*(int *)this + 0x1a7) & 4) == 0) {
    *(undefined4 *)(*(int *)this + 0x1a4) = 0x4000000;
  }
  *(undefined4 *)(*(int *)this + 0x10c) = 0;
  *(undefined4 *)(*(int *)this + 0x108) = 8;
  if (*(int *)(*(int *)this + 0x184) != 0) {
    SpectatorImpulseCommand(this);
  }
  return;
}

/* 000e29dc  CBaseSpectator::Spawn  (48 bytes)
 * undefined Spawn(void)
 */
/* CBaseSpectator::Spawn(void) */

void __thiscall CBaseSpectator::Spawn(CBaseSpectator *this)

{
  *(undefined4 *)(*(int *)this + 0x1a4) = 0x4000000;
  *(undefined4 *)(*(int *)this + 0x10c) = 0;
  *(undefined4 *)(*(int *)this + 0x108) = 8;
  *(undefined4 *)(this + 4) = 0;
  return;
}

