/* mp.dll - CBaseButton (14 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000b570  CBaseButton::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CBaseButton::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CBaseButton_1009c3a0,(int)param_1,0x1009c0b8,8);
  return;
}

/* 1000b5a0  CBaseButton::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CBaseButton::Restore(CBaseToggle *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CBaseButton_1009c3a0,(int)param_1,&DAT_1009c0b8,8)
  ;
  return;
}

/* 1000b5d0  CBaseButton::Precache  (625 bytes)
 * undefined Precache(int param_1)
 */
void __fastcall CBaseButton::Precache(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 0x40) != 0) {
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark1_wav_1009c474);
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark2_wav_1009c460);
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark3_wav_1009c44c);
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark4_wav_1009c438);
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark5_wav_1009c424);
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark6_wav_1009c410);
  }
  if (*(byte *)(param_1 + 0x120) != 0) {
    pcVar1 = ButtonSound((uint)*(byte *)(param_1 + 0x120));
    (*g_engfuncs.pfnPrecacheSound)(pcVar1);
    iVar2 = (*g_engfuncs.pfnAllocString)(pcVar1);
    *(int *)(param_1 + 0xfc) = iVar2;
  }
  if (*(byte *)(param_1 + 0x122) != 0) {
    pcVar1 = ButtonSound((uint)*(byte *)(param_1 + 0x122));
    (*g_engfuncs.pfnPrecacheSound)(pcVar1);
    iVar2 = (*g_engfuncs.pfnAllocString)(pcVar1);
    *(int *)(param_1 + 0x104) = iVar2;
  }
  switch(*(undefined1 *)(param_1 + 0x121)) {
  case 1:
    *(int *)(param_1 + 0x100) = (int)&DAT_1009c40c - (int)gpGlobals->pStringBase;
    break;
  case 2:
    *(int *)(param_1 + 0x100) = (int)&DAT_1009c408 - (int)gpGlobals->pStringBase;
    break;
  case 3:
    puVar3 = &DAT_1009c404;
    goto LAB_1000b74a;
  case 4:
    *(int *)(param_1 + 0x100) = (int)s_NFIRE_1009c3fc - (int)gpGlobals->pStringBase;
    break;
  case 5:
    *(int *)(param_1 + 0x100) = (int)s_NCHEM_1009c3f4 - (int)gpGlobals->pStringBase;
    break;
  case 6:
    puVar3 = &DAT_1009c3ec;
    goto LAB_1000b74a;
  case 7:
    *(int *)(param_1 + 0x100) = (int)&DAT_1009c3e4 - (int)gpGlobals->pStringBase;
    break;
  case 8:
    *(int *)(param_1 + 0x100) = (int)&DAT_1009c3e0 - (int)gpGlobals->pStringBase;
    break;
  case 9:
    puVar3 = &DAT_1009c3dc;
LAB_1000b74a:
    *(int *)(param_1 + 0x100) = (int)puVar3 - (int)gpGlobals->pStringBase;
    break;
  default:
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  switch(*(undefined1 *)(param_1 + 0x123)) {
  case 1:
    *(int *)(param_1 + 0x108) = (int)&DAT_1009c3d8 - (int)gpGlobals->pStringBase;
    return;
  case 2:
    *(int *)(param_1 + 0x108) = (int)&DAT_1009c3d4 - (int)gpGlobals->pStringBase;
    return;
  case 3:
    puVar3 = &DAT_1009c3d0;
    break;
  case 4:
    *(int *)(param_1 + 0x108) = (int)s_EFIRE_1009c3c8 - (int)gpGlobals->pStringBase;
    return;
  case 5:
    *(int *)(param_1 + 0x108) = (int)s_ECHEM_1009c3c0 - (int)gpGlobals->pStringBase;
    return;
  case 6:
    puVar3 = &DAT_1009c3b8;
    break;
  case 7:
    *(int *)(param_1 + 0x108) = (int)&DAT_1009c3b0 - (int)gpGlobals->pStringBase;
    return;
  case 8:
    *(int *)(param_1 + 0x108) = (int)&DAT_1009c3ac - (int)gpGlobals->pStringBase;
    return;
  default:
    *(undefined4 *)(param_1 + 0x108) = 0;
    return;
  }
  *(int *)(param_1 + 0x108) = (int)puVar3 - (int)gpGlobals->pStringBase;
  return;
}

/* 1000b890  CBaseButton::KeyValue  (553 bytes)
 * undefined KeyValue()
 */
void __thiscall CBaseButton::KeyValue(CBaseToggle *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  CBaseToggle *this;
  char *pcVar7;
  bool bVar8;
  longlong lVar9;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pcVar7 = s_changetarget_1009c4cc;
  pbVar2 = pbVar4;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1000b8c8:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1000b8cd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1000b8c8;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1000b8cd:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0xf8) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_locked_sound_1009c4bc;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1000b91d:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1000b922;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1000b91d;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1000b922:
  if (iVar3 == 0) {
    atof(this,*(byte_conflict **)(param_2 + 8));
    lVar9 = __ftol();
    param_1[0x120] = SUB81(lVar9,0);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_locked_sentence_1009c4ac;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1000b976:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1000b97b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1000b976;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1000b97b:
  if (iVar3 == 0) {
    atof(this,*(byte_conflict **)(param_2 + 8));
    lVar9 = __ftol();
    param_1[0x121] = SUB81(lVar9,0);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_unlocked_sound_1009c49c;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1000b9cf:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1000b9d4;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1000b9cf;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1000b9d4:
  if (iVar3 == 0) {
    atof(this,*(byte_conflict **)(param_2 + 8));
    lVar9 = __ftol();
    param_1[0x122] = SUB81(lVar9,0);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_unlocked_sentence_1009c488;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1000ba28:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1000ba2d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1000ba28;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1000ba2d:
  if (iVar3 == 0) {
    atof(this,*(byte_conflict **)(param_2 + 8));
    lVar9 = __ftol();
    param_1[0x123] = SUB81(lVar9,0);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_sounds_1009bf90;
  do {
    bVar1 = *pbVar4;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1000ba81:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1000ba86;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    this = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1000ba81;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1000ba86:
  if (iVar3 == 0) {
    uVar5 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x124) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  CBaseToggle::KeyValue(param_1,param_2);
  return;
}

/* 1000bac0  CBaseButton::TakeDamage  (213 bytes)
 * undefined4 TakeDamage(undefined4 param_1, int param_2)
 */
undefined4 __thiscall CBaseButton::TakeDamage(CBaseButton *this,undefined4 param_1,int param_2)

{
  undefined1 *this_00;
  bool bVar1;
  int iVar2;
  edict_t *peVar3;
  void *pvVar4;
  undefined3 extraout_var;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar2 = FUN_1000c220((int)this);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)&this->field_0x14 = 0;
  peVar3 = *(edict_t **)(param_2 + 0x208);
  if ((peVar3 == (edict_t *)0x0) &&
     (peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar3 == (edict_t *)0x0)) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = peVar3->pvPrivateData;
  }
  this_00 = &this->field_0xc4;
  EHANDLE::operator=((EHANDLE *)this_00,(int)pvVar4);
  bVar1 = FUN_1000e440((uint *)this_00);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (iVar2 == 2) {
      EMIT_SOUND_DYN(gpGlobals->pStringBase + this->pev->noise,this->pev->pContainingEntity,2,
                     gpGlobals->pStringBase + this->pev->noise,0x3f800000,0x3f4ccccd,0);
      if ((this->pev->spawnflags & 0x20) == 0) {
        uVar7 = 0;
        uVar6 = 3;
        piVar5 = (int *)EHANDLE::operator->((uint *)this_00);
        CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar5,uVar6,uVar7);
      }
      ButtonReturn(this);
      return 0;
    }
    ButtonActivate(this);
  }
  return 0;
}

/* 1000bbb0  CBaseButton::Spawn  (626 bytes)
 * undefined Spawn()
 */
void __fastcall CBaseButton::Spawn(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char *s;
  int iVar6;
  
  s = ButtonSound(param_1[0x49]);
  (*g_engfuncs.pfnPrecacheSound)(s);
  iVar6 = (*g_engfuncs.pfnAllocString)(s);
  *(int *)(param_1[1] + 0x1e8) = iVar6;
  (**(code **)(*param_1 + 0x20))();
  if ((*(byte *)(param_1[1] + 0x1a0) & 0x40) != 0) {
    param_1[4] = (int)ButtonSpark;
    *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.5;
  }
  SetMovedir(param_1[1]);
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  *(undefined4 *)(param_1[1] + 0x10c) = 4;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  if (*(float *)(param_1[1] + 0x1f8) == 0.0) {
    *(undefined4 *)(param_1[1] + 0x1f8) = 0x42200000;
  }
  if (0.0 < *(float *)(param_1[1] + 0x160)) {
    *(undefined4 *)(param_1[1] + 0x16c) = 0x3f800000;
  }
  if ((float)param_1[0x1f] == 0.0) {
    param_1[0x1f] = 0x3f800000;
  }
  if ((float)param_1[0x20] == 0.0) {
    param_1[0x20] = 0x40800000;
  }
  iVar6 = param_1[1];
  pfVar1 = (float *)(param_1 + 0x23);
  param_1[0x1c] = 1;
  *pfVar1 = *(float *)(iVar6 + 8);
  param_1[0x24] = *(int *)(iVar6 + 0xc);
  param_1[0x25] = *(int *)(iVar6 + 0x10);
  pfVar2 = (float *)(param_1 + 0x26);
  fVar5 = (ABS((*(float *)(iVar6 + 0xf4) - 2.0) * *(float *)(iVar6 + 0x44)) +
          ABS((*(float *)(iVar6 + 0xf8) - 2.0) * *(float *)(iVar6 + 0x48)) +
          ABS((*(float *)(iVar6 + 0xfc) - 2.0) * *(float *)(iVar6 + 0x4c))) - (float)param_1[0x20];
  fVar3 = *(float *)(iVar6 + 0x48);
  fVar4 = *(float *)(iVar6 + 0x4c);
  *pfVar2 = fVar5 * *(float *)(iVar6 + 0x44) + *pfVar1;
  param_1[0x27] = (int)(fVar5 * fVar3 + (float)param_1[0x24]);
  param_1[0x28] = (int)(fVar5 * fVar4 + (float)param_1[0x25]);
  if ((SQRT((*pfVar2 - *pfVar1) * (*pfVar2 - *pfVar1) +
            ((float)param_1[0x27] - (float)param_1[0x24]) *
            ((float)param_1[0x27] - (float)param_1[0x24]) +
            ((float)param_1[0x28] - (float)param_1[0x25]) *
            ((float)param_1[0x28] - (float)param_1[0x25])) < 1.0) ||
     ((*(byte *)(iVar6 + 0x1a0) & 1) != 0)) {
    *pfVar2 = *pfVar1;
    param_1[0x27] = param_1[0x24];
    param_1[0x28] = param_1[0x25];
  }
  param_1[0x3c] = (uint)(param_1[0x1f] == -0x40800000);
  param_1[0x3d] = 0;
  if ((*(uint *)(iVar6 + 0x1a0) & 0x100) != 0) {
    param_1[5] = (int)ButtonTouch;
    return;
  }
  param_1[5] = 0;
  param_1[6] = (int)ButtonUse;
  return;
}

/* 1000c140  CBaseButton::ButtonSpark  (66 bytes)
 * void ButtonSpark(void)
 */
/* public: void __thiscall CBaseButton::ButtonSpark(void) */

void __thiscall CBaseButton::ButtonSpark(CBaseButton *this)

{
  float10 fVar1;
  
                    /* 0xc140  16  ?ButtonSpark@CBaseButton@@QAEXXZ */
  *(code **)&this->field_0x10 = ButtonSpark;
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,1.5);
  this->pev->nextthink = (float)(fVar1 + (float10)0.1 + (float10)gpGlobals->time);
  DoSpark((int)this->pev,this->pev->mins);
  return;
}

/* 1000c190  CBaseButton::ButtonUse  (142 bytes)
 * void ButtonUse(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CBaseButton::ButtonUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CBaseButton::ButtonUse
          (CBaseButton *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  entvars_t *peVar1;
  
                    /* 0xc190  18  ?ButtonUse@CBaseButton@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  if ((*(int *)&this->field_0x70 != 2) && (*(int *)&this->field_0x70 != 3)) {
    EHANDLE::operator=((EHANDLE *)&this->field_0xc4,(int)param_1);
    if (*(int *)&this->field_0x70 == 0) {
      if ((*(int *)&this->field_0xf0 == 0) && (peVar1 = this->pev, (peVar1->spawnflags & 0x20) != 0)
         ) {
        EMIT_SOUND_DYN(gpGlobals->pStringBase + peVar1->noise,peVar1->pContainingEntity,2,
                       gpGlobals->pStringBase + peVar1->noise,0x3f800000,0x3f4ccccd,0);
        ButtonReturn(this);
        return;
      }
    }
    else {
      ButtonActivate(this);
    }
  }
  return;
}

/* 1000c280  CBaseButton::ButtonTouch  (286 bytes)
 * void ButtonTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CBaseButton::ButtonTouch(class CBaseEntity *) */

void __thiscall CBaseButton::ButtonTouch(CBaseButton *this,CBaseEntity *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
                    /* 0xc280  17  ?ButtonTouch@CBaseButton@@QAEXPAVCBaseEntity@@@Z */
  pcVar6 = s_player_1009c678;
  pbVar2 = (byte *)(gpGlobals->pStringBase + **(int **)(param_1 + 4));
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1000c2ca:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1000c2cf;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1000c2ca;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1000c2cf:
  if (iVar3 == 0) {
    EHANDLE::operator=((EHANDLE *)&this->field_0xc4,(int)param_1);
    iVar3 = FUN_1000c220((int)this);
    if (iVar3 != 0) {
      iVar4 = UTIL_IsMasterTriggered(*(int *)&this->field_0xec,param_1);
      if (iVar4 == 0) {
        PlayLockSounds((int)this->pev,(int *)&this->field_0xfc,1,1.4013e-45);
        return;
      }
      *(undefined4 *)&this->field_0x14 = 0;
      if (iVar3 == 2) {
        EMIT_SOUND_DYN(gpGlobals->pStringBase + this->pev->noise,this->pev->pContainingEntity,2,
                       gpGlobals->pStringBase + this->pev->noise,0x3f800000,0x3f4ccccd,0);
        uVar9 = 0;
        uVar8 = 3;
        piVar5 = (int *)EHANDLE::operator->((uint *)&this->field_0xc4);
        CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar5,uVar8,uVar9);
        ButtonReturn(this);
        return;
      }
      ButtonActivate(this);
    }
  }
  return;
}

/* 1000c3a0  CBaseButton::ButtonActivate  (233 bytes)
 * undefined ButtonActivate(void * param_1)
 * called by: CBaseButton::ButtonTouch, CBaseButton::ButtonUse, CBaseButton::TakeDamage
 */
void __fastcall CBaseButton::ButtonActivate(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  
  EMIT_SOUND_DYN(gpGlobals->pStringBase + *(int *)(*(int *)((int)param_1 + 4) + 0x1e8),
                 *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208),2,
                 gpGlobals->pStringBase + *(int *)(*(int *)((int)param_1 + 4) + 0x1e8),0x3f800000,
                 0x3f4ccccd,0);
  uVar1 = EHANDLE::operator->((uint *)((int)param_1 + 0xc4));
  iVar2 = UTIL_IsMasterTriggered(*(int *)((int)param_1 + 0xec),uVar1);
  if (iVar2 == 0) {
    PlayLockSounds(*(int *)((int)param_1 + 4),(int *)((int)param_1 + 0xfc),1,1.4013e-45);
    return;
  }
  fVar3 = *(float *)((int)param_1 + 4);
  piVar4 = (int *)((int)param_1 + 0xfc);
  fVar5 = 0.0;
  PlayLockSounds((int)fVar3,piVar4,0,1.4013e-45);
  *(undefined4 *)((int)param_1 + 0x70) = 2;
  *(code **)((int)param_1 + 0xcc) = TriggerAndWait;
  fVar6 = *(float *)(*(int *)((int)param_1 + 4) + 0x1f8);
  if (*(int *)((int)param_1 + 0xf4) == 0) {
    Vector::Vector((Vector *)&stack0xffffffe8,(undefined4 *)((int)param_1 + 0x98));
    CBaseToggle::LinearMove(param_1,fVar3,(float)piVar4,fVar5,fVar6);
    return;
  }
  Vector::Vector((Vector *)&stack0xffffffe8,(undefined4 *)((int)param_1 + 0xb0));
  CBaseToggle::AngularMove(param_1,fVar3,(float)piVar4,fVar5,fVar6);
  return;
}

/* 1000c490  CBaseButton::TriggerAndWait  (148 bytes)
 * void TriggerAndWait(void)
 */
/* public: void __thiscall CBaseButton::TriggerAndWait(void) */

void __thiscall CBaseButton::TriggerAndWait(CBaseButton *this)

{
  entvars_t *peVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
                    /* 0xc490  124  ?TriggerAndWait@CBaseButton@@QAEXXZ */
  uVar2 = EHANDLE::operator->((uint *)&this->field_0xc4);
  iVar3 = UTIL_IsMasterTriggered(*(int *)&this->field_0xec,uVar2);
  if (iVar3 != 0) {
    *(undefined4 *)&this->field_0x70 = 0;
    if ((*(int *)&this->field_0xf0 == 0) && (peVar1 = this->pev, (peVar1->spawnflags & 0x20) == 0))
    {
      peVar1->nextthink = peVar1->ltime + *(float *)&this->field_0x7c;
      *(code **)&this->field_0x10 = ButtonReturn;
    }
    else if ((this->pev->spawnflags & 0x100U) == 0) {
      *(undefined4 *)&this->field_0x14 = 0;
    }
    else {
      *(code **)&this->field_0x14 = ButtonTouch;
    }
    uVar5 = 0;
    uVar2 = 3;
    this->pev->frame = 1.0;
    piVar4 = (int *)EHANDLE::operator->((uint *)&this->field_0xc4);
    CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar4,uVar2,uVar5);
  }
  return;
}

/* 1000c530  CBaseButton::ButtonReturn  (128 bytes)
 * void ButtonReturn(void)
 * called by: CBaseButton::ButtonTouch, CBaseButton::ButtonUse, CBaseButton::TakeDamage
 */
/* public: void __thiscall CBaseButton::ButtonReturn(void) */

void __thiscall CBaseButton::ButtonReturn(CBaseButton *this)

{
  float in_stack_ffffffec;
  float in_stack_fffffff0;
  float in_stack_fffffff4;
  float fVar1;
  
                    /* 0xc530  15  ?ButtonReturn@CBaseButton@@QAEXXZ */
  *(undefined4 *)&this->field_0x70 = 3;
  *(code **)&this->field_0xcc = ButtonBackHome;
  if (*(int *)&this->field_0xf4 == 0) {
    fVar1 = this->pev->speed;
    Vector::Vector((Vector *)&stack0xffffffec,(undefined4 *)&this->field_0x8c);
    CBaseToggle::LinearMove
              ((CBaseToggle *)this,in_stack_ffffffec,in_stack_fffffff0,in_stack_fffffff4,fVar1);
    this->pev->frame = 0.0;
    return;
  }
  fVar1 = this->pev->speed;
  Vector::Vector((Vector *)&stack0xffffffec,(undefined4 *)&this->field_0xa4);
  CBaseToggle::AngularMove
            ((CBaseToggle *)this,in_stack_ffffffec,in_stack_fffffff0,in_stack_fffffff4,fVar1);
  this->pev->frame = 0.0;
  return;
}

/* 1000c5b0  CBaseButton::ButtonBackHome  (321 bytes)
 * void ButtonBackHome(void)
 */
/* public: void __thiscall CBaseButton::ButtonBackHome(void) */

void __thiscall CBaseButton::ButtonBackHome(CBaseButton *this)

{
  byte bVar1;
  int iVar2;
  entvars_t *peVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  edict_t *pEdictStartSearchAfter;
  bool bVar8;
  CBaseButton *pCVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
                    /* 0xc5b0  14  ?ButtonBackHome@CBaseButton@@QAEXXZ */
  *(undefined4 *)&this->field_0x70 = 1;
  if ((this->pev->spawnflags & 0x20) != 0) {
    uVar11 = 0;
    uVar10 = 3;
    piVar4 = (int *)EHANDLE::operator->((uint *)&this->field_0xc4);
    CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar4,uVar10,uVar11);
  }
  if (this->pev->target != 0) {
    pEdictStartSearchAfter = (edict_t *)0x0;
    while( true ) {
      pEdictStartSearchAfter =
           (*g_engfuncs.pfnFindEntityByString)
                     (pEdictStartSearchAfter,s_targetname_1009c68c,
                      gpGlobals->pStringBase + this->pev->target);
      if (pEdictStartSearchAfter == (edict_t *)0x0) break;
      iVar5 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
      if (iVar5 == 0) break;
      pcVar7 = s_multisource_1009c680;
      pbVar6 = (byte *)(gpGlobals->pStringBase + (pEdictStartSearchAfter->v).classname);
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_1000c673:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1000c678;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_1000c673;
        pbVar6 = pbVar6 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_1000c678:
      if ((iVar5 == 0) && (pEdictStartSearchAfter->pvPrivateData != (int *)0x0)) {
        iVar2 = *(int *)pEdictStartSearchAfter->pvPrivateData;
        uVar11 = 3;
        pCVar9 = this;
        uVar10 = EHANDLE::operator->((uint *)&this->field_0xc4);
        (**(code **)(iVar2 + 0xd8))(uVar10,pCVar9,uVar11,iVar5);
      }
    }
  }
  peVar3 = this->pev;
  if ((peVar3->spawnflags & 0x100U) == 0) {
    *(undefined4 *)&this->field_0x14 = 0;
  }
  else {
    *(code **)&this->field_0x14 = ButtonTouch;
  }
  if ((peVar3->spawnflags & 0x40) != 0) {
    *(code **)&this->field_0x10 = ButtonSpark;
    peVar3->nextthink = gpGlobals->time + 0.5;
  }
  return;
}

/* 1000d790  CBaseButton::ObjectCaps  (31 bytes)
 * undefined ObjectCaps()
 */
undefined4 __fastcall CBaseButton::ObjectCaps(int param_1)

{
  if (*(float *)(*(int *)(param_1 + 4) + 0x16c) != 0.0) {
    return 0;
  }
  return 8;
}

