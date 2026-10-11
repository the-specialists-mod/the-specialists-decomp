/* mp.dll - CBaseSpectator (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003e030  CBaseSpectator::SpectatorImpulseCommand  (226 bytes)
 * undefined SpectatorImpulseCommand(int param_1)
 * called by: CBaseSpectator::SpectatorThink
 */
void __fastcall CBaseSpectator::SpectatorImpulseCommand(int param_1)

{
  edict_t *peVar1;
  edict_t *pEdictStartSearchAfter;
  int iVar2;
  
  peVar1 = DAT_100c0544;
  pEdictStartSearchAfter = DAT_100c0544;
  if (*(int *)(*(int *)(param_1 + 4) + 0x184) != 1) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Unknown_spectator_impulse_100a2414);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x184) = 0;
    return;
  }
  do {
    pEdictStartSearchAfter =
         (*g_engfuncs.pfnFindEntityByString)
                   (pEdictStartSearchAfter,s_classname_1009c37c,s_info_player_deathmatch_100a23fc);
    if (pEdictStartSearchAfter == peVar1) {
      (*g_engfuncs.pfnAlertMessage)(at_console,s_Could_not_find_a_spawn_spot__100a23dc);
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x184) = 0;
      return;
    }
  } while ((pEdictStartSearchAfter == (edict_t *)0x0) ||
          (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter), iVar2 == 0));
  DAT_100c0544 = pEdictStartSearchAfter;
  UTIL_SetOrigin(*(int *)(param_1 + 4),(pEdictStartSearchAfter->v).origin);
  peVar1 = DAT_100c0544;
  iVar2 = *(int *)(param_1 + 4);
  *(vec_t *)(iVar2 + 0x50) = (DAT_100c0544->v).angles[0];
  *(vec_t *)(iVar2 + 0x54) = (peVar1->v).angles[1];
  *(vec_t *)(iVar2 + 0x58) = (peVar1->v).angles[2];
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xa0) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x184) = 0;
  return;
}

/* 1003e120  CBaseSpectator::SpectatorThink  (67 bytes)
 * undefined SpectatorThink(int param_1)
 * called by: pfnSpectatorThink
 */
void __fastcall CBaseSpectator::SpectatorThink(int param_1)

{
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x4000000) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4) = 0x4000000;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 8;
  if (*(int *)(*(int *)(param_1 + 4) + 0x184) != 0) {
    SpectatorImpulseCommand(param_1);
    return;
  }
  return;
}

