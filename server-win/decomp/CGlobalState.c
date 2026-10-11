/* mp.dll - CGlobalState (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1007b0b0  CGlobalState::DumpGlobals  (66 bytes)
 * undefined DumpGlobals(int * param_1)
 * called by: CBasePlayer::CheatImpulseCommands
 */
void __fastcall CGlobalState::DumpGlobals(int *param_1)

{
  int iVar1;
  
  (*g_engfuncs.pfnAlertMessage)(at_console,s____Globals____100a7ba4);
  for (iVar1 = *param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 100)) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,s__s___s___s__100a7b94,iVar1,iVar1 + 0x40,
               (&PTR_DAT_100a7950)[*(int *)(iVar1 + 0x60)]);
  }
  return;
}

