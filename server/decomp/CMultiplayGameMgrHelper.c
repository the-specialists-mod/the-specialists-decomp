/* ts_i386.so - CMultiplayGameMgrHelper (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000d0e48  CMultiplayGameMgrHelper::~CMultiplayGameMgrHelper  (64 bytes)
 * undefined ~CMultiplayGameMgrHelper(uint param_1)
 */
/* CMultiplayGameMgrHelper::~CMultiplayGameMgrHelper(void) */

void __thiscall
CMultiplayGameMgrHelper::~CMultiplayGameMgrHelper(CMultiplayGameMgrHelper *this,uint param_1)

{
  *(undefined1 **)this = CMultiplayGameMgrHelper_virtual_table;
  *(undefined1 **)this = IVoiceGameMgrHelper_virtual_table;
  if ((param_1 & 1) != 0) {
    __builtin_delete(this);
  }
  return;
}

/* 000d0ed0  CMultiplayGameMgrHelper::CanPlayerHearPlayer  (170 bytes)
 * undefined4 CanPlayerHearPlayer(undefined4 this, int param_2, int param_3)
 */
/* CMultiplayGameMgrHelper::CanPlayerHearPlayer(CBasePlayer *, CBasePlayer *) */

undefined4 __thiscall
CMultiplayGameMgrHelper::CanPlayerHearPlayer(undefined4 this,int param_2,int param_3)

{
  float fVar1;
  undefined4 *puVar2;
  
  if ((g_teamplay != 0) &&
     (puVar2 = (undefined4 *)(**(code **)(*g_pGameRules + 0xcc))(g_pGameRules,param_2,param_3),
     puVar2 != (undefined4 *)0x1)) goto LAB_000d0f70;
  if ((((byte)(TSGameRules - 2U) < 2) || (puVar2 = &g_lastManStanding, g_lastManStanding != 0)) &&
     (puVar2 = (undefined4 *)(**(code **)(*(int *)(param_3 + 0x60) + 0xb4))(param_3),
     puVar2 == (undefined4 *)0x0)) {
    fVar1 = *(float *)(param_3 + 0x770);
    puVar2 = (undefined4 *)
             (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe);
    if (0.0 < fVar1 == 0 && (fVar1 == 0.0) == 0) {
      puVar2 = (undefined4 *)(**(code **)(*(int *)(param_2 + 0x60) + 0xb4))(param_2);
      if (puVar2 == (undefined4 *)0x0) {
        fVar1 = *(float *)(param_2 + 0x770);
        puVar2 = (undefined4 *)
                 (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                               (ushort)(fVar1 == 0.0) << 0xe);
        if (0.0 < fVar1 == 0 && (fVar1 == 0.0) == 0) goto LAB_000d0f74;
      }
LAB_000d0f70:
      return (uint)puVar2 & 0xffffff00;
    }
  }
LAB_000d0f74:
  return CONCAT31((int3)((uint)puVar2 >> 8),1);
}

