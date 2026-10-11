/* mp.dll - CWallHealth (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10028010  CWallHealth::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CWallHealth::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CWallHealth_1009f694,(int)param_1,0x1009f618,5);
  return;
}

/* 10028040  CWallHealth::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CWallHealth::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CWallHealth_1009f694,(int)param_1,&DAT_1009f618,5)
  ;
  return;
}

/* 10028290  CWallHealth::Precache  (37 bytes)
 * undefined Precache()
 */
void CWallHealth::Precache(void)

{
  (*g_engfuncs.pfnPrecacheSound)(s_items_medshot4_wav_1009f6d0);
  (*g_engfuncs.pfnPrecacheSound)(s_items_medshotno1_wav_1009f6b8);
  (*g_engfuncs.pfnPrecacheSound)(s_items_medcharge4_wav_1009f6a0);
  return;
}

/* 100282c0  CWallHealth::Use  (489 bytes)
 * undefined Use(int * param_1)
 */
void __thiscall CWallHealth::Use(CWallHealth *this,int *param_1)

{
  globalvars_t *this_00;
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0xc0))();
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)&this->field_0xf8 < 1) {
    this->pev->frame = 1.0;
    Off(this);
    if (*(int *)&this->field_0xf8 < 1) goto LAB_10028455;
  }
  if ((*(uint *)(param_1[1] + 0x168) & 0x80000000) != 0) {
    this->pev->nextthink = this->pev->ltime + 0.25;
    *(code **)&this->field_0x10 = Off;
    if (gpGlobals->time <= *(float *)&this->field_0xf0) {
      return;
    }
    if (*(int *)&this->field_0xfc == 0) {
      *(undefined4 *)&this->field_0xfc = 1;
      EMIT_SOUND_DYN(this->pev,this->pev->pContainingEntity,3,s_items_medshot4_wav_1009f6d0,
                     0x3f800000,0x3f4ccccd,0);
      *(float *)&this->field_0x100 = gpGlobals->time + 0.56;
    }
    this_00 = gpGlobals;
    if ((*(int *)&this->field_0xfc == 1) && (*(float *)&this->field_0x100 <= gpGlobals->time)) {
      *(undefined4 *)&this->field_0xfc = 2;
      EMIT_SOUND_DYN(this_00,this->pev->pContainingEntity,6,s_items_medcharge4_wav_1009f6a0,
                     0x3f800000,0x3f4ccccd,0);
    }
    iVar1 = param_1[1];
    if (*(float *)(iVar1 + 0x160) == *(float *)(iVar1 + 0x1b0)) {
      return;
    }
    iVar1 = (**(code **)(*param_1 + 0x54))(*(float *)(iVar1 + 0x1b0) - *(float *)(iVar1 + 0x160),0);
    if (iVar1 != 0) {
      *(undefined4 *)&this->field_0xf8 = 0;
    }
    *(float *)&this->field_0xf0 = gpGlobals->time + 0.1;
    return;
  }
LAB_10028455:
  if (*(float *)&this->field_0x100 <= gpGlobals->time) {
    *(float *)&this->field_0x100 = gpGlobals->time + 0.62;
    EMIT_SOUND_DYN(this->pev,this->pev->pContainingEntity,3,s_items_medshotno1_wav_1009f6b8,
                   0x3f800000,0x3f4ccccd,0);
  }
  return;
}

/* 100284b0  CWallHealth::Recharge  (79 bytes)
 * void Recharge(void)
 */
/* public: void __thiscall CWallHealth::Recharge(void) */

void __thiscall CWallHealth::Recharge(CWallHealth *this)

{
  edict_t *this_00;
  
                    /* 0x284b0  87  ?Recharge@CWallHealth@@QAEXXZ */
  this_00 = this->pev->pContainingEntity;
  EMIT_SOUND_DYN(this_00,this_00,3,s_items_medshot4_wav_1009f6d0,0x3f800000,0x3f4ccccd,0);
  *(undefined4 *)&this->field_0xf8 = 1;
  this->pev->frame = 0.0;
  *(code **)&this->field_0x10 = CBaseEntity::SUB_DoNothing;
  return;
}

/* 10028500  CWallHealth::Off  (143 bytes)
 * void Off(void)
 * called by: CWallHealth::Use
 */
/* public: void __thiscall CWallHealth::Off(void) */

void __thiscall CWallHealth::Off(CWallHealth *this)

{
  edict_t *this_00;
  int iVar1;
  longlong lVar2;
  
                    /* 0x28500  80  ?Off@CWallHealth@@QAEXXZ */
  if (1 < *(int *)&this->field_0xfc) {
    this_00 = this->pev->pContainingEntity;
    EMIT_SOUND_DYN(this_00,this_00,6,s_items_medcharge4_wav_1009f6a0,0,0,0x20);
  }
  *(undefined4 *)&this->field_0xfc = 0;
  if (*(int *)&this->field_0xf8 == 0) {
    (**(code **)(*g_pGameRules + 0xb0))();
    lVar2 = __ftol();
    iVar1 = (int)lVar2;
    *(int *)&this->field_0xf4 = iVar1;
    if (0 < iVar1) {
      this->pev->nextthink = (float)iVar1 + this->pev->ltime;
      *(code **)&this->field_0x10 = Recharge;
      return;
    }
  }
  *(code **)&this->field_0x10 = CBaseEntity::SUB_DoNothing;
  return;
}

