/* mp.dll - CBasePlayerAmmo (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006b410  CBasePlayerAmmo::Materialize  (92 bytes)
 * void Materialize(void)
 */
/* public: void __thiscall CBasePlayerAmmo::Materialize(void) */

void __thiscall CBasePlayerAmmo::Materialize(CBasePlayerAmmo *this)

{
  char cVar1;
  
                    /* 0x6b410  63  ?Materialize@CBasePlayerAmmo@@QAEXXZ */
  cVar1 = *(char *)(*(int *)(this + 4) + 0x118);
  if (cVar1 < '\0') {
    EMIT_SOUND_DYN((void *)CONCAT31((int3)((uint)this >> 8),cVar1),
                   *(undefined4 *)(*(int *)(this + 4) + 0x208),1,s_items_suitchargeok1_wav_100941b0,
                   0x3f800000,0x3f4ccccd,0,0x96);
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) & 0xffffff7f;
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 2;
  }
  *(code **)(this + 0x14) = DefaultTouch;
  return;
}

/* 1006b470  CBasePlayerAmmo::DefaultTouch  (168 bytes)
 * void DefaultTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CBasePlayerAmmo::DefaultTouch(class CBaseEntity *) */

void __thiscall CBasePlayerAmmo::DefaultTouch(CBasePlayerAmmo *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x6b470  28  ?DefaultTouch@CBasePlayerAmmo@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)this + 0xf0))(param_1);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*DAT_1009f494 + 0xa8))(this);
      if (iVar1 == 3) {
        (**(code **)(*(int *)this + 200))();
        return;
      }
      *(undefined4 *)(this + 0x14) = 0;
      *(code **)(this + 0x10) = CBaseEntity::SUB_Remove;
      *(float *)(*(int *)(this + 4) + 0x104) = gpGlobals->time + 0.1;
      return;
    }
    if (DAT_1009fe78 != 0) {
      *(undefined4 *)(this + 0x14) = 0;
      *(code **)(this + 0x10) = CBaseEntity::SUB_Remove;
      *(float *)(*(int *)(this + 4) + 0x104) = gpGlobals->time + 0.1;
    }
  }
  return;
}

