/* mp.dll - CRestore (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100697f0  CRestore::ReadFields  (287 bytes)
 * undefined4 ReadFields(byte.conflict * param_1, int param_2, int param_3, int param_4)
 * called by: CActAnimating::Restore, CAmbientGeneric::Restore, CAutoTrigger::Restore, CBaseAnimating::Restore, CBaseButton::Restore, CBaseDelay::Restore, CBaseDoor::Restore, CBaseEntity::Restore, CBasePlatTrain::Restore, CBasePlayer::Restore, CBasePlayerItem::Restore, CBasePlayerWeapon::Restore, ... (75 total)
 */
undefined4 __thiscall
CRestore::ReadFields(CRestore *this,byte_conflict *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  ushort local_8;
  ushort uStack_6;
  undefined2 local_4;
  undefined2 uStack_2;
  
  FUN_10069950(this);
  uVar1 = FUN_10069950(this);
  uVar2 = CSaveRestoreBuffer::TokenHash((CSaveRestoreBuffer *)this,param_1);
  if ((short)uVar1 != (short)uVar2) {
    FUN_10068a90(this,4);
    return 0;
  }
  iVar3 = FUN_10069970(this);
  uVar1 = 0;
  iVar5 = 0;
  param_1 = (byte_conflict *)0x0;
  if (0 < param_4) {
    do {
      if ((*(int *)(this + 4) == 0) || ((*(byte *)(uVar1 * 0x10 + 0xe + param_3) & 1) == 0)) {
        iVar4 = uVar1 * 0x10;
        uVar2 = *(int *)(&DAT_1009a5f0 + *(int *)(iVar4 + param_3) * 4) *
                (int)*(short *)(iVar4 + 0xc + param_3);
        puVar6 = (undefined4 *)(*(int *)(iVar4 + param_3 + 8) + param_2);
        for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
      }
      param_1 = param_1 + 1;
      uVar1 = (uint)param_1 & 0xffff;
    } while ((int)uVar1 < param_4);
  }
  uVar1 = 0;
  if (0 < iVar3) {
    do {
      FUN_10069910(this,&local_8);
      iVar5 = FUN_10069490(this,param_2,param_3,param_4,iVar5,(uint)local_8,
                           *(byte_conflict **)(*(int *)(*(int *)this + 0x18) + (uint)uStack_6 * 4),
                           (char *)CONCAT22(uStack_2,local_4));
      iVar5 = iVar5 + 1;
      uVar1 = uVar1 + 1;
    } while ((int)(uVar1 & 0xffff) < iVar3);
  }
  return 1;
}

