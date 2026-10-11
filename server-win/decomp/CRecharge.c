/* mp.dll - CRecharge (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10026ca0  CRecharge::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CRecharge::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CRecharge_1009f4bc,(int)param_1,0x1009f428,5);
  return;
}

/* 10026cd0  CRecharge::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CRecharge::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CRecharge_1009f4bc,(int)param_1,&DAT_1009f428,5);
  return;
}

/* 10026d10  CRecharge::Precache  (37 bytes)
 * undefined Precache()
 */
void CRecharge::Precache(void)

{
  (*g_engfuncs.pfnPrecacheSound)(s_items_suitcharge1_wav_1009f500);
  (*g_engfuncs.pfnPrecacheSound)(s_items_suitchargeno1_wav_1009f4e8);
  (*g_engfuncs.pfnPrecacheSound)(s_items_suitchargeok1_wav_1009f4d0);
  return;
}

/* 10026d40  CRecharge::Use  (578 bytes)
 * undefined Use(void * param_1)
 */
void __thiscall CRecharge::Use(CRecharge *this,void *param_1)

{
  undefined1 *this_00;
  byte bVar1;
  edict_t *this_01;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  void *extraout_ECX;
  void *this_02;
  char *pcVar5;
  bool bVar6;
  
  pcVar5 = s_player_1009c678;
  pbVar2 = (byte *)(gpGlobals->pStringBase + **(int **)((int)param_1 + 4));
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_10026d84:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_10026d89;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_10026d84;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10026d89:
  if (iVar3 != 0) {
    return;
  }
  if (*(int *)&this->field_0xf8 < 1) {
    this->pev->frame = 1.0;
    Off(this);
    this_02 = extraout_ECX;
    if (*(int *)&this->field_0xf8 < 1) goto LAB_10026f30;
  }
  this_02 = *(void **)((int)param_1 + 4);
  if ((*(uint *)((int)this_02 + 0x168) & 0x80000000) != 0) {
    this->pev->nextthink = this->pev->ltime + 0.25;
    *(code **)&this->field_0x10 = Off;
    if (gpGlobals->time <= *(float *)&this->field_0xf0) {
      return;
    }
    if (param_1 == (void *)0x0) {
      return;
    }
    this_00 = &this->field_0xc4;
    EHANDLE::operator=((EHANDLE *)this_00,(int)param_1);
    piVar4 = (int *)EHANDLE::operator->((uint *)this_00);
    iVar3 = (**(code **)(*piVar4 + 0xc0))();
    if (iVar3 == 0) {
      return;
    }
    if (*(int *)&this->field_0xfc == 0) {
      *(undefined4 *)&this->field_0xfc = 1;
      this_01 = this->pev->pContainingEntity;
      EMIT_SOUND_DYN(this_01,this_01,3,s_items_suitchargeok1_wav_1009f4d0,0x3f59999a,0x3f4ccccd,0);
      *(float *)&this->field_0x100 = gpGlobals->time + 0.56;
    }
    if ((*(int *)&this->field_0xfc == 1) && (*(float *)&this->field_0x100 <= gpGlobals->time)) {
      *(undefined4 *)&this->field_0xfc = 2;
      EMIT_SOUND_DYN(this->pev,this->pev->pContainingEntity,6,s_items_suitcharge1_wav_1009f500,
                     0x3f59999a,0x3f4ccccd,0);
    }
    iVar3 = EHANDLE::operator->((uint *)this_00);
    if (*(float *)(*(int *)(iVar3 + 4) + 0x1bc) < 100.0) {
      *(undefined4 *)&this->field_0xf8 = 0;
      CBasePlayer::TakeArmor(param_1,100);
    }
    *(float *)&this->field_0xf0 = gpGlobals->time + 0.1;
    return;
  }
LAB_10026f30:
  if (*(float *)&this->field_0x100 <= gpGlobals->time) {
    *(float *)&this->field_0x100 = gpGlobals->time + 0.62;
    EMIT_SOUND_DYN(this_02,this->pev->pContainingEntity,3,s_items_suitchargeno1_wav_1009f4e8,
                   0x3f59999a,0x3f4ccccd,0);
  }
  return;
}

/* 10026f90  CRecharge::Recharge  (31 bytes)
 * void Recharge(void)
 */
/* public: void __thiscall CRecharge::Recharge(void) */

void __thiscall CRecharge::Recharge(CRecharge *this)

{
                    /* 0x26f90  86  ?Recharge@CRecharge@@QAEXXZ */
  *(undefined4 *)&this->field_0xf8 = 1;
  this->pev->frame = 0.0;
  *(code **)&this->field_0x10 = CBaseEntity::SUB_DoNothing;
  return;
}

/* 10026fb0  CRecharge::Off  (143 bytes)
 * void Off(void)
 * called by: CRecharge::Use
 */
/* public: void __thiscall CRecharge::Off(void) */

void __thiscall CRecharge::Off(CRecharge *this)

{
  edict_t *this_00;
  int iVar1;
  longlong lVar2;
  
                    /* 0x26fb0  79  ?Off@CRecharge@@QAEXXZ */
  if (1 < *(int *)&this->field_0xfc) {
    this_00 = this->pev->pContainingEntity;
    EMIT_SOUND_DYN(this_00,this_00,6,s_items_suitcharge1_wav_1009f500,0,0,0x20);
  }
  *(undefined4 *)&this->field_0xfc = 0;
  if (*(int *)&this->field_0xf8 == 0) {
    (**(code **)(*g_pGameRules + 0xb4))();
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

/* 10028080  CRecharge::KeyValue  (384 bytes)
 * undefined KeyValue()
 */
/* Identical-code folding: also CRecharge::KeyValue, CWallHealth::KeyValue */

void __thiscall CRecharge::KeyValue(CBaseToggle *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  CBaseToggle *this;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pcVar7 = s_style_1009c32c;
  pbVar2 = pbVar4;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100280b8:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100280bd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100280b8;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100280bd:
  if (iVar3 != 0) {
    pcVar7 = s_height_1009c324;
    pbVar2 = pbVar4;
    do {
      bVar1 = *pbVar2;
      uVar6 = (undefined3)((uint)this >> 8);
      this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100280f0:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100280f5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100280f0;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_100280f5:
    if (iVar3 != 0) {
      pbVar8 = &DAT_1009c310;
      pbVar2 = pbVar4;
      do {
        bVar1 = *pbVar2;
        uVar6 = (undefined3)((uint)this >> 8);
        this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_10028128:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_1002812d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
        bVar9 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_10028128;
        pbVar2 = pbVar2 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1002812d:
      if (iVar3 != 0) {
        pbVar8 = &DAT_1009c308;
        pbVar2 = pbVar4;
        do {
          bVar1 = *pbVar2;
          uVar6 = (undefined3)((uint)this >> 8);
          this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_10028160:
            iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_10028165;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_10028160;
          pbVar2 = pbVar2 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_10028165:
        if (iVar3 != 0) {
          pbVar8 = &DAT_1009c300;
          pbVar2 = pbVar4;
          do {
            bVar1 = *pbVar2;
            uVar6 = (undefined3)((uint)this >> 8);
            this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
            bVar9 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_10028194:
              iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_10028199;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
            bVar9 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_10028194;
            pbVar2 = pbVar2 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_10028199:
          if (iVar3 != 0) {
            pcVar7 = s_dmdelay_1009f4c8;
            do {
              bVar1 = *pbVar4;
              uVar6 = (undefined3)((uint)this >> 8);
              this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
              bVar9 = bVar1 < (byte)*pcVar7;
              if (bVar1 != *pcVar7) {
LAB_100281c8:
                iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_100281cd;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
              bVar9 = bVar1 < (byte)pcVar7[1];
              if (bVar1 != pcVar7[1]) goto LAB_100281c8;
              pbVar4 = pbVar4 + 2;
              pcVar7 = pcVar7 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_100281cd:
            if (iVar3 != 0) {
              CBaseToggle::KeyValue(param_1,param_2);
              return;
            }
            uVar5 = atoi(this,*(byte_conflict **)(param_2 + 8));
            *(undefined4 *)(param_1 + 0xf4) = uVar5;
          }
        }
      }
    }
  }
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

/* 10028200  CRecharge::Spawn  (137 bytes)
 * undefined Spawn(int * param_1)
 */
/* Identical-code folding: also CRecharge::Spawn, CWallHealth::Spawn */

void __fastcall CRecharge::Spawn(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x20))();
  *(undefined4 *)(param_1[1] + 0x10c) = 4;
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  UTIL_SetOrigin(param_1[1],param_1[1] + 8);
  iVar1 = param_1[1];
  UTIL_SetSize(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  param_1[0x3e] = 1;
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  return;
}

