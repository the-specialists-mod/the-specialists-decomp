/* mp.dll - CBasePlayerItem (12 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10027e00  CBasePlayerItem::CanHolster  (6 bytes)
 * undefined CanHolster()
 */
/* Identical-code folding: also CBasePlayer::IsNetClient, CBasePlayer::IsPlayer,
   CBasePlayerItem::CanHolster, CFuncTrackChange::IsTogglePlat, CGunTarget::Classify,
   CTSGun::ShouldWeaponIdle, CTSGun::UseDecrement, CWeaponCycler::iItemSlot */

undefined4 CBasePlayerItem::CanHolster(void)

{
  return 1;
}

/* 10079bc0  CBasePlayerItem::Save  (48 bytes)
 * undefined Save(void * param_1)
 * called by: CBasePlayerWeapon::Save
 */
void __thiscall CBasePlayerItem::Save(CBasePlayerItem *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseAnimating::Save((CBaseAnimating *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_1,(byte_conflict *)s_CBasePlayerItem_100a7718,(int)this,0x100a73e8,3);
  return;
}

/* 10079bf0  CBasePlayerItem::Restore  (48 bytes)
 * undefined Restore(void * param_1)
 * called by: CBasePlayerWeapon::Restore
 */
void __thiscall CBasePlayerItem::Restore(CBasePlayerItem *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseAnimating::Restore((CBaseAnimating *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_1,(byte_conflict *)s_CBasePlayerItem_100a7718,(int)this,&DAT_100a73e8,3);
  return;
}

/* 10079c80  CBasePlayerItem::SetObjectCollisionBox  (173 bytes)
 * undefined SetObjectCollisionBox(int param_1)
 */
void __fastcall CBasePlayerItem::SetObjectCollisionBox(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(float *)(iVar1 + 0xc4) = *(float *)(iVar1 + 8) - 24.0;
  *(float *)(iVar1 + 200) = *(float *)(iVar1 + 0xc) - 24.0;
  *(undefined4 *)(iVar1 + 0xcc) = *(undefined4 *)(iVar1 + 0x10);
  iVar1 = *(int *)(param_1 + 4);
  *(float *)(iVar1 + 0xd0) = *(float *)(iVar1 + 8) + 24.0;
  *(float *)(iVar1 + 0xd4) = *(float *)(iVar1 + 0xc) + 24.0;
  *(float *)(iVar1 + 0xd8) = *(float *)(iVar1 + 0x10) + 16.0;
  return;
}

/* 10079dd0  CBasePlayerItem::FallThink  (148 bytes)
 * void FallThink(void)
 */
/* public: void __thiscall CBasePlayerItem::FallThink(void) */

void __thiscall CBasePlayerItem::FallThink(CBasePlayerItem *this)

{
  edict_t *pEdict;
  int iVar1;
  void *this_00;
  
                    /* 0x79dd0  50  ?FallThink@CBasePlayerItem@@QAEXXZ */
  *(float *)(*(int *)(this + 4) + 0x104) = gpGlobals->time + 0.1;
  if ((*(uint *)(*(int *)(this + 4) + 0x1a4) & 0x200) != 0) {
    pEdict = *(edict_t **)(*(int *)(this + 4) + 0x198);
    if (pEdict != (edict_t *)0x0) {
      iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
      if (iVar1 != 0) {
        (*g_engfuncs.pfnRandomLong)(0,0x1d);
        EMIT_SOUND_DYN(this_00,*(undefined4 *)(*(int *)(this + 4) + 0x208),3,
                       s_items_weapondrop1_wav_100a5b30,0x3f800000,0x3f4ccccd,0);
      }
    }
    *(undefined4 *)(*(int *)(this + 4) + 0x50) = 0;
    *(undefined4 *)(*(int *)(this + 4) + 0x58) = 0;
    Materialize(this);
  }
  return;
}

/* 10079e70  CBasePlayerItem::Materialize  (132 bytes)
 * void Materialize(void)
 * called by: CBasePlayerItem::AttemptToMaterialize, CBasePlayerItem::FallThink
 */
/* public: void __thiscall CBasePlayerItem::Materialize(void) */

void __thiscall CBasePlayerItem::Materialize(CBasePlayerItem *this)

{
                    /* 0x79e70  69  ?Materialize@CBasePlayerItem@@QAEXXZ */
  if ((*(byte *)(*(int *)(this + 4) + 0x118) & 0x80) != 0) {
    EMIT_SOUND_DYN(this,*(undefined4 *)(*(int *)(this + 4) + 0x208),1,
                   s_items_suitchargeok1_wav_1009f4d0,0x3f800000,0x3f4ccccd,0);
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) & 0xffffff7f;
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 2;
  }
  *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 1;
  UTIL_SetOrigin(*(int *)(this + 4),*(int *)(this + 4) + 8);
  *(code **)(this + 0x14) = DefaultTouch;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

/* 10079f00  CBasePlayerItem::AttemptToMaterialize  (61 bytes)
 * void AttemptToMaterialize(void)
 */
/* public: void __thiscall CBasePlayerItem::AttemptToMaterialize(void) */

void __thiscall CBasePlayerItem::AttemptToMaterialize(CBasePlayerItem *this)

{
  float10 fVar1;
  
                    /* 0x79f00  5  ?AttemptToMaterialize@CBasePlayerItem@@QAEXXZ */
  fVar1 = (float10)(**(code **)(*g_pGameRules + 0x80))(this);
  if (fVar1 == (float10)0.0) {
    Materialize(this);
    return;
  }
  *(float *)(*(int *)(this + 4) + 0x104) = (float)(fVar1 + (float10)gpGlobals->time);
  return;
}

/* 10079f60  CBasePlayerItem::Respawn  (199 bytes)
 * undefined Respawn()
 */
int __fastcall CBasePlayerItem::Respawn(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  undefined4 *puVar4;
  undefined4 auStack_c [3];
  
  puVar4 = auStack_c;
  iVar2 = param_1;
  puVar1 = (undefined4 *)
           (**(code **)(*g_pGameRules + 0x84))
                     (puVar4,param_1,*(int *)(param_1 + 4) + 0x50,
                      *(undefined4 *)(*(int *)(param_1 + 4) + 0x198));
  iVar2 = CBaseEntity::Create((int)(gpGlobals->pStringBase + **(int **)(param_1 + 4)),puVar1,puVar4,
                              iVar2);
  if (iVar2 != 0) {
    *(uint *)(*(int *)(iVar2 + 4) + 0x118) = *(uint *)(*(int *)(iVar2 + 4) + 0x118) | 0x80;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(code **)(iVar2 + 0x10) = AttemptToMaterialize;
    (*g_engfuncs.pfnDropToFloor)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
    fVar3 = (float10)(**(code **)(*g_pGameRules + 0x7c))(param_1);
    *(float *)(*(int *)(iVar2 + 4) + 0x104) = (float)fVar3;
    return iVar2;
  }
  (*g_engfuncs.pfnAlertMessage)
            (at_console,s_Respawn_failed_to_create__s__100a773c,
             gpGlobals->pStringBase + **(int **)(param_1 + 4));
  return 0;
}

/* 1007a030  CBasePlayerItem::DefaultTouch  (146 bytes)
 * void DefaultTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CBasePlayerItem::DefaultTouch(class CBaseEntity *) */

void __thiscall CBasePlayerItem::DefaultTouch(CBasePlayerItem *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x7a030  31  ?DefaultTouch@CBasePlayerItem@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0xc0))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*g_pGameRules + 0x70))(param_1,this);
    if (iVar1 == 0) {
      if (DAT_100aee70 != 0) {
        UTIL_Remove((int *)this);
        return;
      }
    }
    else {
      iVar1 = (**(code **)(*(int *)param_1 + 0x7c))(this);
      if (iVar1 != 0) {
        (**(code **)(*(int *)this + 0x140))(param_1);
        EMIT_SOUND_DYN(*(void **)(*(int *)(param_1 + 4) + 0x208),
                       *(void **)(*(int *)(param_1 + 4) + 0x208),3,s_items_gunpickup2_wav_1009f7a0,
                       0x3f800000,0x3f4ccccd,0);
      }
      CBaseDelay::SUB_UseTargets((CBaseDelay *)this,(int *)param_1,3,0);
    }
  }
  return;
}

/* 1007a110  CBasePlayerItem::DestroyItem  (31 bytes)
 * void DestroyItem(void)
 */
/* public: void __thiscall CBasePlayerItem::DestroyItem(void) */

void __thiscall CBasePlayerItem::DestroyItem(CBasePlayerItem *this)

{
                    /* 0x7a110  33  ?DestroyItem@CBasePlayerItem@@QAEXXZ */
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 0x80))(this);
  }
  (**(code **)(*(int *)this + 0x13c))();
  return;
}

/* 1007a140  CBasePlayerItem::Drop  (37 bytes)
 * undefined Drop()
 */
/* Identical-code folding: also CBasePlayerItem::Drop, CBasePlayerItem::Kill */

void __fastcall CBasePlayerItem::Drop(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(code **)(param_1 + 0x10) = CBaseEntity::SUB_Remove;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 1007a170  CBasePlayerItem::AttachToPlayer  (127 bytes)
 * undefined AttachToPlayer()
 */
void __thiscall CBasePlayerItem::AttachToPlayer(int param_1,int param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0xc;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x194) = *(undefined4 *)(*(int *)(param_2 + 4) + 0x208);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xb4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xb8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x198) = *(undefined4 *)(*(int *)(param_2 + 4) + 0x208);
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

