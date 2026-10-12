/* mp.dll - CWallHealth (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10020a00  CWallHealth::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CWallHealth::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CWallHealth_10094374,(int)param_1,0x100942f8,5);
  return;
}

/* 10020a30  CWallHealth::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CWallHealth::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CWallHealth_10094374,(int)param_1,0x100942f8,5);
  return;
}

/* 10020a70  CWallHealth::KeyValue  (168 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CWallHealth::KeyValue(CWallHealth *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  pcVar4 = *(char **)(param_1 + 4);
  iVar2 = 6;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_style_10091284;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (!bVar6) {
    iVar2 = 7;
    bVar6 = true;
    pcVar3 = pcVar4;
    pcVar5 = s_height_1009127c;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pcVar3 == *pcVar5;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      iVar2 = 7;
      bVar6 = true;
      pcVar3 = pcVar4;
      pcVar5 = &DAT_10091268;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *pcVar3 == *pcVar5;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (!bVar6) {
        iVar2 = 7;
        bVar6 = true;
        pcVar3 = pcVar4;
        pcVar5 = &DAT_10091260;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar6 = *pcVar3 == *pcVar5;
          pcVar3 = pcVar3 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (!bVar6) {
          iVar2 = 7;
          bVar6 = true;
          pcVar3 = pcVar4;
          pcVar5 = &DAT_10091258;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar6 = *pcVar3 == *pcVar5;
            pcVar3 = pcVar3 + 1;
            pcVar5 = pcVar5 + 1;
          } while (bVar6);
          if (!bVar6) {
            iVar2 = 8;
            bVar6 = true;
            pcVar3 = s_dmdelay_100941a8;
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar6 = *pcVar4 == *pcVar3;
              pcVar4 = pcVar4 + 1;
              pcVar3 = pcVar3 + 1;
            } while (bVar6);
            if (!bVar6) {
              CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
              return;
            }
            uVar1 = FUN_1006e1dd(*(void **)(param_1 + 8),*(void **)(param_1 + 8));
            *(undefined4 *)&this->field_0xf4 = uVar1;
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 10020b20  CWallHealth::Spawn  (144 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CWallHealth::Spawn(int *param_1)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0x10))();
  *(undefined4 *)(param_1[1] + 0x10c) = 4;
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  FUN_100679a0();
  FUN_10067970();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  lVar1 = __ftol();
  param_1[0x3e] = (int)lVar1;
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  return;
}

/* 10020bb0  CWallHealth::Precache  (37 bytes)
 * undefined Precache()
 */
void CWallHealth::Precache(void)

{
  (*g_engfuncs.pfnPrecacheSound)(s_items_medshot4_wav_100943b0);
  (*g_engfuncs.pfnPrecacheSound)(s_items_medshotno1_wav_10094398);
  (*g_engfuncs.pfnPrecacheSound)(s_items_medcharge4_wav_10094380);
  return;
}

/* 10020be0  CWallHealth::Use  (433 bytes)
 * undefined Use(int * param_1)
 */
void __thiscall CWallHealth::Use(CWallHealth *this,int *param_1)

{
  globalvars_t *this_00;
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0xa8))();
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)&this->field_0xf8 < 1) {
    this->pev->frame = 1.0;
    Off(this);
    if (*(int *)&this->field_0xf8 < 1) goto LAB_10020d42;
  }
  if (*(int *)(param_1[1] + 0x168) < 0) {
    this->pev->nextthink = this->pev->ltime + 0.25;
    *(code **)&this->field_0x10 = Off;
    if (gpGlobals->time <= *(float *)&this->field_0xf0) {
      return;
    }
    if (*(int *)&this->field_0xfc == 0) {
      *(undefined4 *)&this->field_0xfc = 1;
      EMIT_SOUND_DYN(this->pev,this->pev->pContainingEntity,3,s_items_medshot4_wav_100943b0,
                     0x3f800000,0x3f4ccccd,0,100);
      *(float *)&this->field_0x100 = gpGlobals->time + 0.56;
    }
    this_00 = gpGlobals;
    if ((*(int *)&this->field_0xfc == 1) &&
       (*(float *)&this->field_0x100 < gpGlobals->time !=
        (*(float *)&this->field_0x100 == gpGlobals->time))) {
      *(undefined4 *)&this->field_0xfc = 2;
      EMIT_SOUND_DYN(this_00,this->pev->pContainingEntity,6,s_items_medcharge4_wav_10094380,
                     0x3f800000,0x3f4ccccd,0,100);
    }
    iVar1 = (**(code **)(*param_1 + 0x3c))(0x3f800000,0);
    if (iVar1 != 0) {
      *(int *)&this->field_0xf8 = *(int *)&this->field_0xf8 + -1;
    }
    *(float *)&this->field_0xf0 = gpGlobals->time + 0.1;
    return;
  }
LAB_10020d42:
  if (*(float *)&this->field_0x100 < gpGlobals->time !=
      (*(float *)&this->field_0x100 == gpGlobals->time)) {
    *(float *)&this->field_0x100 = gpGlobals->time + 0.62;
    EMIT_SOUND_DYN(this->pev,this->pev->pContainingEntity,3,s_items_medshotno1_wav_10094398,
                   0x3f800000,0x3f4ccccd,0,100);
  }
  return;
}

/* 10020da0  CWallHealth::Recharge  (81 bytes)
 * void Recharge(void)
 */
/* public: void __thiscall CWallHealth::Recharge(void) */

void __thiscall CWallHealth::Recharge(CWallHealth *this)

{
  edict_t *this_00;
  longlong lVar1;
  
                    /* 0x20da0  82  ?Recharge@CWallHealth@@QAEXXZ */
  this_00 = this->pev->pContainingEntity;
  EMIT_SOUND_DYN(this_00,this_00,3,s_items_medshot4_wav_100943b0,0x3f800000,0x3f4ccccd,0,100);
  lVar1 = __ftol();
  *(int *)&this->field_0xf8 = (int)lVar1;
  this->pev->frame = 0.0;
  *(code **)&this->field_0x10 = CBaseEntity::SUB_DoNothing;
  return;
}

/* 10020e00  CWallHealth::Off  (138 bytes)
 * void Off(void)
 * called by: CWallHealth::Use
 */
/* public: void __thiscall CWallHealth::Off(void) */

void __thiscall CWallHealth::Off(CWallHealth *this)

{
  edict_t *this_00;
  int iVar1;
  longlong lVar2;
  
                    /* 0x20e00  75  ?Off@CWallHealth@@QAEXXZ */
  if (1 < *(int *)&this->field_0xfc) {
    this_00 = this->pev->pContainingEntity;
    EMIT_SOUND_DYN(this_00,this_00,6,s_items_medcharge4_wav_10094380,0,0,0x20,100);
  }
  *(undefined4 *)&this->field_0xfc = 0;
  if (*(int *)&this->field_0xf8 == 0) {
    (**(code **)(*DAT_1009f494 + 0xb4))();
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

/* 10020f30  CWallHealth::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CWallHealth::ObjectCaps(void)

{
  return 0x10;
}

