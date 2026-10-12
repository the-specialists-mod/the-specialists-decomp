/* mp.dll - CBasePlayerItem (14 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10020780  CBasePlayerItem::CanHolster  (6 bytes)
 * undefined CanHolster()
 */
undefined4 CBasePlayerItem::CanHolster(void)

{
  return 1;
}

/* 10020790  CBasePlayerItem::ItemPreFrame  (1 bytes)
 * undefined ItemPreFrame()
 */
void CBasePlayerItem::ItemPreFrame(void)

{
  return;
}

/* 1006a8a0  CBasePlayerItem::Save  (48 bytes)
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
  CSave::WriteFields(param_1,(byte_conflict *)s_CBasePlayerItem_1009af88,(int)this,0x1009ac64,3);
  return;
}

/* 1006a8d0  CBasePlayerItem::Restore  (48 bytes)
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
  CRestore::ReadFields(param_1,(byte_conflict *)s_CBasePlayerItem_1009af88,(int)this,0x1009ac64,3);
  return;
}

/* 1006a960  CBasePlayerItem::SetObjectCollisionBox  (147 bytes)
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

/* 1006aaa0  CBasePlayerItem::FallThink  (144 bytes)
 * void FallThink(void)
 */
/* public: void __thiscall CBasePlayerItem::FallThink(void) */

void __thiscall CBasePlayerItem::FallThink(CBasePlayerItem *this)

{
  edict_t *pEdict;
  int iVar1;
  void *this_00;
  
                    /* 0x6aaa0  46  ?FallThink@CBasePlayerItem@@QAEXXZ */
  *(float *)(*(int *)(this + 4) + 0x104) = gpGlobals->time + 0.1;
  if ((*(uint *)(*(int *)(this + 4) + 0x1a4) & 0x200) != 0) {
    pEdict = *(edict_t **)(*(int *)(this + 4) + 0x198);
    if (pEdict != (edict_t *)0x0) {
      iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
      if (iVar1 != 0) {
        iVar1 = (*g_engfuncs.pfnRandomLong)(0,0x1d);
        EMIT_SOUND_DYN(this_00,*(undefined4 *)(*(int *)(this + 4) + 0x208),3,
                       s_items_weapondrop1_wav_10099c20,0x3f800000,0x3f4ccccd,0,iVar1 + 0x5f);
      }
    }
    *(undefined4 *)(*(int *)(this + 4) + 0x50) = 0;
    *(undefined4 *)(*(int *)(this + 4) + 0x58) = 0;
    Materialize(this);
    return;
  }
  return;
}

/* 1006ab30  CBasePlayerItem::Materialize  (128 bytes)
 * void Materialize(void)
 * called by: CBasePlayerItem::AttemptToMaterialize, CBasePlayerItem::FallThink
 */
/* public: void __thiscall CBasePlayerItem::Materialize(void) */

void __thiscall CBasePlayerItem::Materialize(CBasePlayerItem *this)

{
  char cVar1;
  
                    /* 0x6ab30  64  ?Materialize@CBasePlayerItem@@QAEXXZ */
  cVar1 = *(char *)(*(int *)(this + 4) + 0x118);
  if (cVar1 < '\0') {
    EMIT_SOUND_DYN((void *)CONCAT31((int3)((uint)this >> 8),cVar1),
                   *(undefined4 *)(*(int *)(this + 4) + 0x208),1,s_items_suitchargeok1_wav_100941b0,
                   0x3f800000,0x3f4ccccd,0,0x96);
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) & 0xffffff7f;
    *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 2;
  }
  *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 1;
  FUN_100679a0();
  *(code **)(this + 0x14) = DefaultTouch;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

/* 1006abb0  CBasePlayerItem::AttemptToMaterialize  (60 bytes)
 * void AttemptToMaterialize(void)
 */
/* public: void __thiscall CBasePlayerItem::AttemptToMaterialize(void) */

void __thiscall CBasePlayerItem::AttemptToMaterialize(CBasePlayerItem *this)

{
  float10 fVar1;
  
                    /* 0x6abb0  5  ?AttemptToMaterialize@CBasePlayerItem@@QAEXXZ */
  fVar1 = (float10)(**(code **)(*DAT_1009f494 + 0x84))(this);
  if (fVar1 == (float10)0.0) {
    Materialize(this);
    return;
  }
  *(float *)(*(int *)(this + 4) + 0x104) = (float)(fVar1 + (float10)gpGlobals->time);
  return;
}

/* 1006ac10  CBasePlayerItem::Respawn  (202 bytes)
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
           (**(code **)(*DAT_1009f494 + 0x88))
                     (puVar4,param_1,*(int *)(param_1 + 4) + 0x50,
                      *(undefined4 *)(*(int *)(param_1 + 4) + 0x198));
  iVar2 = CBaseEntity::Create((int)(gpGlobals->pStringBase + **(int **)(param_1 + 4)),puVar1,puVar4,
                              iVar2);
  if (iVar2 != 0) {
    *(uint *)(*(int *)(iVar2 + 4) + 0x118) = *(uint *)(*(int *)(iVar2 + 4) + 0x118) | 0x80;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(code **)(iVar2 + 0x10) = AttemptToMaterialize;
    (*g_engfuncs.pfnDropToFloor)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
    fVar3 = (float10)(**(code **)(*DAT_1009f494 + 0x80))(param_1);
    *(float *)(*(int *)(iVar2 + 4) + 0x104) = (float)fVar3;
    return iVar2;
  }
  (*g_engfuncs.pfnAlertMessage)
            (at_console,s_Respawn_failed_to_create__s__1009afac,
             gpGlobals->pStringBase + **(int **)(param_1 + 4));
  return 0;
}

/* 1006ace0  CBasePlayerItem::DefaultTouch  (141 bytes)
 * void DefaultTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CBasePlayerItem::DefaultTouch(class CBaseEntity *) */

void __thiscall CBasePlayerItem::DefaultTouch(CBasePlayerItem *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x6ace0  29  ?DefaultTouch@CBasePlayerItem@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*DAT_1009f494 + 0x74))(param_1,this);
    if (iVar1 == 0) {
      if (DAT_1009fe78 != 0) {
        UTIL_Remove((int)this);
        return;
      }
    }
    else {
      iVar1 = (**(code **)(*(int *)param_1 + 100))(this);
      if (iVar1 != 0) {
        (**(code **)(*(int *)this + 0x124))(param_1);
        EMIT_SOUND_DYN(*(void **)(*(int *)(param_1 + 4) + 0x208),
                       *(void **)(*(int *)(param_1 + 4) + 0x208),3,s_items_gunpickup2_wav_10094490,
                       0x3f800000,0x3f4ccccd,0,100);
      }
      CBaseDelay::SUB_UseTargets((CBaseDelay *)this,(int *)param_1,3,0);
    }
  }
  return;
}

/* 1006ada0  CBasePlayerItem::DestroyItem  (27 bytes)
 * void DestroyItem(void)
 */
/* public: void __thiscall CBasePlayerItem::DestroyItem(void) */

void __thiscall CBasePlayerItem::DestroyItem(CBasePlayerItem *this)

{
                    /* 0x6ada0  31  ?DestroyItem@CBasePlayerItem@@QAEXXZ */
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 0x68))(this);
  }
                    /* WARNING: Could not recover jumptable at 0x1006adb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x120))();
  return;
}

/* 1006add0  CBasePlayerItem::Drop  (37 bytes)
 * undefined Drop()
 */
void __fastcall CBasePlayerItem::Drop(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(code **)(param_1 + 0x10) = CBaseEntity::SUB_Remove;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 1006ae00  CBasePlayerItem::Kill  (37 bytes)
 * undefined Kill()
 */
void __fastcall CBasePlayerItem::Kill(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(code **)(param_1 + 0x10) = CBaseEntity::SUB_Remove;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 1006ae50  CBasePlayerItem::AttachToPlayer  (127 bytes)
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

