/* mp.dll - CFuncWallToggle (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10007310  CFuncWallToggle::Spawn  (30 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CFuncWallToggle::Spawn(int param_1)

{
  CFuncWall::Spawn(param_1);
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) {
    TurnOff(param_1);
    return;
  }
  return;
}

/* 10007330  CFuncWallToggle::TurnOff  (48 bytes)
 * undefined TurnOff(int param_1)
 * called by: CFuncWallToggle::Spawn, CFuncWallToggle::Use
 */
void __fastcall CFuncWallToggle::TurnOff(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  FUN_100679a0();
  return;
}

/* 100073b0  CFuncWallToggle::Use  (54 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, int param_3)
 */
void __thiscall
CFuncWallToggle::Use(CFuncWallToggle *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_10007390((int)this);
  iVar2 = CBaseEntity::ShouldToggle(param_3,CONCAT31(extraout_var,bVar1));
  if (iVar2 != 0) {
    if (CONCAT31(extraout_var,bVar1) != 0) {
      TurnOff((int)this);
      return;
    }
    FUN_10007360((int)this);
  }
  return;
}

