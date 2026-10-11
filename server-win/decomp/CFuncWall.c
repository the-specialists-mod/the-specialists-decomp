/* mp.dll - CFuncWall (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10008e40  CFuncWall::Spawn  (121 bytes)
 * undefined Spawn(int param_1)
 * called by: CFuncConveyor::Spawn, CFuncMonsterClip::Spawn, CFuncWallToggle::Spawn
 */
void __fastcall CFuncWall::Spawn(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x50) = DAT_100ae498;
  *(undefined4 *)(iVar1 + 0x54) = DAT_100ae49c;
  *(undefined4 *)(iVar1 + 0x58) = DAT_100ae4a0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 4;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  *(uint *)(*(int *)(param_1 + 4) + 0x1a4) = *(uint *)(*(int *)(param_1 + 4) + 0x1a4) | 0x2000000;
  return;
}

/* 10008ec0  CFuncWall::Use  (59 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, int param_3)
 */
void __thiscall CFuncWall::Use(CFuncWall *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  iVar1 = CBaseEntity::ShouldToggle(param_3,(int)lVar2);
  if (iVar1 != 0) {
    this->pev->frame = 1.0 - this->pev->frame;
  }
  return;
}

