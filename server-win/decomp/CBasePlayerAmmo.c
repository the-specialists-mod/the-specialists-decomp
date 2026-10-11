/* mp.dll - CBasePlayerAmmo (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1007a5b0  CBasePlayerAmmo::Materialize  (96 bytes)
 * void Materialize(void)
 */
/* public: void __thiscall CBasePlayerAmmo::Materialize(void) */

void __thiscall CBasePlayerAmmo::Materialize(CBasePlayerAmmo *this)

{
                    /* 0x7a5b0  68  ?Materialize@CBasePlayerAmmo@@QAEXXZ */
  if ((*(byte *)(*(int *)(this + 4) + 0x118) & 0x80) != 0) {
    EMIT_SOUND_DYN(this,*(undefined4 *)(*(int *)(this + 4) + 0x208),1,
                   s_items_suitchargeok1_wav_1009f4d0,0x3f800000,0x3f4ccccd,0);
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) & 0xffffff7f;
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 2;
  }
  *(code **)(this + 0x14) = DefaultTouch;
  return;
}

/* 1007a610  CBasePlayerAmmo::DefaultTouch  (168 bytes)
 * void DefaultTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CBasePlayerAmmo::DefaultTouch(class CBaseEntity *) */

void __thiscall CBasePlayerAmmo::DefaultTouch(CBasePlayerAmmo *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x7a610  30  ?DefaultTouch@CBasePlayerAmmo@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0xc0))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)this + 0x10c))(param_1);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*g_pGameRules + 0xa4))(this);
      if (iVar1 == 3) {
        (**(code **)(*(int *)this + 0xe4))();
        return;
      }
      *(undefined4 *)(this + 0x14) = 0;
      *(code **)(this + 0x10) = CBaseEntity::SUB_Remove;
      *(float *)(*(int *)(this + 4) + 0x104) = gpGlobals->time + 0.1;
      return;
    }
    if (DAT_100aee70 != 0) {
      *(undefined4 *)(this + 0x14) = 0;
      *(code **)(this + 0x10) = CBaseEntity::SUB_Remove;
      *(float *)(*(int *)(this + 4) + 0x104) = gpGlobals->time + 0.1;
    }
  }
  return;
}

