/* mp.dll - CBaseButton (14 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100097b0  CBaseButton::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CBaseButton::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CBaseButton_100912f8,(int)param_1,0x10091010,8);
  return;
}

/* 100097e0  CBaseButton::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CBaseButton::Restore(CBaseToggle *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CBaseButton_100912f8,(int)param_1,0x10091010,8);
  return;
}

/* 10009810  CBaseButton::Precache  (625 bytes)
 * undefined Precache(int param_1)
 */
void __fastcall CBaseButton::Precache(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 0x40) != 0) {
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark1_wav_100913cc);
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark2_wav_100913b8);
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark3_wav_100913a4);
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark4_wav_10091390);
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark5_wav_1009137c);
    (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark6_wav_10091368);
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
    *(int *)(param_1 + 0x100) = (int)&DAT_10091364 - (int)gpGlobals->pStringBase;
    break;
  case 2:
    *(int *)(param_1 + 0x100) = (int)&DAT_10091360 - (int)gpGlobals->pStringBase;
    break;
  case 3:
    puVar3 = &DAT_1009135c;
    goto LAB_1000998a;
  case 4:
    *(int *)(param_1 + 0x100) = (int)s_NFIRE_10091354 - (int)gpGlobals->pStringBase;
    break;
  case 5:
    *(int *)(param_1 + 0x100) = (int)s_NCHEM_1009134c - (int)gpGlobals->pStringBase;
    break;
  case 6:
    puVar3 = &DAT_10091344;
    goto LAB_1000998a;
  case 7:
    *(int *)(param_1 + 0x100) = (int)&DAT_1009133c - (int)gpGlobals->pStringBase;
    break;
  case 8:
    *(int *)(param_1 + 0x100) = (int)&DAT_10091338 - (int)gpGlobals->pStringBase;
    break;
  case 9:
    puVar3 = &DAT_10091334;
LAB_1000998a:
    *(int *)(param_1 + 0x100) = (int)puVar3 - (int)gpGlobals->pStringBase;
    break;
  default:
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  switch(*(undefined1 *)(param_1 + 0x123)) {
  case 1:
    *(int *)(param_1 + 0x108) = (int)&DAT_10091330 - (int)gpGlobals->pStringBase;
    return;
  case 2:
    *(int *)(param_1 + 0x108) = (int)&DAT_1009132c - (int)gpGlobals->pStringBase;
    return;
  case 3:
    puVar3 = &DAT_10091328;
    break;
  case 4:
    *(int *)(param_1 + 0x108) = (int)s_EFIRE_10091320 - (int)gpGlobals->pStringBase;
    return;
  case 5:
    *(int *)(param_1 + 0x108) = (int)s_ECHEM_10091318 - (int)gpGlobals->pStringBase;
    return;
  case 6:
    puVar3 = &DAT_10091310;
    break;
  case 7:
    *(int *)(param_1 + 0x108) = (int)&DAT_10091308 - (int)gpGlobals->pStringBase;
    return;
  case 8:
    *(int *)(param_1 + 0x108) = (int)&DAT_10091304 - (int)gpGlobals->pStringBase;
    return;
  default:
    *(undefined4 *)(param_1 + 0x108) = 0;
    return;
  }
  *(int *)(param_1 + 0x108) = (int)puVar3 - (int)gpGlobals->pStringBase;
  return;
}

/* 10009ad0  CBaseButton::KeyValue  (349 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CBaseButton::KeyValue(CBaseButton *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  longlong lVar8;
  
  pcVar5 = *(char **)(param_1 + 4);
  iVar2 = 0xd;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_changetarget_10091424;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0xf8 = iVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = (undefined1 *)0xd;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_locked_sound_10091414;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    FUN_1006e0fb(puVar3,*(byte_conflict **)(param_1 + 8));
    lVar8 = __ftol();
    this->field_0x120 = (char)lVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = (undefined1 *)0x10;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_locked_sentence_10091404;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    FUN_1006e0fb(puVar3,*(byte_conflict **)(param_1 + 8));
    lVar8 = __ftol();
    this->field_0x121 = (char)lVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = (undefined1 *)0xf;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_unlocked_sound_100913f4;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    FUN_1006e0fb(puVar3,*(byte_conflict **)(param_1 + 8));
    lVar8 = __ftol();
    this->field_0x122 = (char)lVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = (undefined1 *)0x12;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_unlocked_sentence_100913e0;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    FUN_1006e0fb(puVar3,*(byte_conflict **)(param_1 + 8));
    lVar8 = __ftol();
    this->field_0x123 = (char)lVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = &DAT_00000007;
  bVar7 = true;
  pcVar4 = s_sounds_10090ee8;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar7 = *pcVar5 == *pcVar4;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar7);
  if (bVar7) {
    uVar1 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x124 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
  return;
}

/* 10009c30  CBaseButton::TakeDamage  (208 bytes)
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
  
  iVar2 = FUN_1000a2f0((int)this);
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
  bVar1 = FUN_1000c210((uint *)this_00);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (iVar2 == 2) {
      EMIT_SOUND_DYN(gpGlobals->pStringBase + this->pev->noise,this->pev->pContainingEntity,2,
                     gpGlobals->pStringBase + this->pev->noise,0x3f800000,0x3f4ccccd,0,100);
      if ((this->pev->spawnflags & 0x20) == 0) {
        uVar7 = 0;
        uVar6 = 3;
        piVar5 = (int *)FUN_1000c1d0((uint *)this_00);
        CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar5,uVar6,uVar7);
      }
      ButtonReturn(this);
      return 0;
    }
    ButtonActivate(this);
  }
  return 0;
}

/* 10009d10  CBaseButton::Spawn  (612 bytes)
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
  (**(code **)(*param_1 + 0x10))();
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

/* 1000a210  CBaseButton::ButtonSpark  (66 bytes)
 * void ButtonSpark(void)
 */
/* public: void __thiscall CBaseButton::ButtonSpark(void) */

void __thiscall CBaseButton::ButtonSpark(CBaseButton *this)

{
  float10 fVar1;
  
                    /* 0xa210  15  ?ButtonSpark@CBaseButton@@QAEXXZ */
  *(code **)&this->field_0x10 = ButtonSpark;
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,1.5);
  this->pev->nextthink = (float)(fVar1 + (float10)0.1 + (float10)gpGlobals->time);
  DoSpark((int)this->pev,this->pev->mins);
  return;
}

/* 1000a260  CBaseButton::ButtonUse  (137 bytes)
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
  
                    /* 0xa260  17  ?ButtonUse@CBaseButton@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  if ((*(int *)&this->field_0x70 != 2) && (*(int *)&this->field_0x70 != 3)) {
    EHANDLE::operator=((EHANDLE *)&this->field_0xc4,(int)param_1);
    if (*(int *)&this->field_0x70 == 0) {
      if ((*(int *)&this->field_0xf0 == 0) && (peVar1 = this->pev, (peVar1->spawnflags & 0x20) != 0)
         ) {
        EMIT_SOUND_DYN(gpGlobals->pStringBase + peVar1->noise,peVar1->pContainingEntity,2,
                       gpGlobals->pStringBase + peVar1->noise,0x3f800000,0x3f4ccccd,0,100);
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

/* 1000a350  CBaseButton::ButtonTouch  (243 bytes)
 * void ButtonTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CBaseButton::ButtonTouch(class CBaseEntity *) */

void __thiscall CBaseButton::ButtonTouch(CBaseButton *this,CBaseEntity *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
                    /* 0xa350  16  ?ButtonTouch@CBaseButton@@QAEXPAVCBaseEntity@@@Z */
  iVar3 = 7;
  bVar6 = true;
  pcVar4 = gpGlobals->pStringBase + **(int **)(param_1 + 4);
  pcVar5 = s_player_100915d0;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *pcVar4 == *pcVar5;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    EHANDLE::operator=((EHANDLE *)&this->field_0xc4,(int)param_1);
    iVar3 = FUN_1000a2f0((int)this);
    if (iVar3 != 0) {
      iVar1 = UTIL_IsMasterTriggered(*(int *)&this->field_0xec,param_1);
      if (iVar1 == 0) {
        PlayLockSounds((int)this->pev,(int *)&this->field_0xfc,1,1.4013e-45);
        return;
      }
      *(undefined4 *)&this->field_0x14 = 0;
      if (iVar3 == 2) {
        EMIT_SOUND_DYN(gpGlobals->pStringBase + this->pev->noise,this->pev->pContainingEntity,2,
                       gpGlobals->pStringBase + this->pev->noise,0x3f800000,0x3f4ccccd,0,100);
        uVar8 = 0;
        uVar7 = 3;
        piVar2 = (int *)FUN_1000c1d0((uint *)&this->field_0xc4);
        CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar2,uVar7,uVar8);
        ButtonReturn(this);
        return;
      }
      ButtonActivate(this);
    }
  }
  return;
}

/* 1000a450  CBaseButton::ButtonActivate  (228 bytes)
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
                 0x3f4ccccd,0,100);
  uVar1 = FUN_1000c1d0((uint *)((int)param_1 + 0xc4));
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
    FUN_1000a540(&stack0xffffffe8,(undefined4 *)((int)param_1 + 0x98));
    CBaseToggle::LinearMove(param_1,fVar3,(float)piVar4,fVar5,fVar6);
    return;
  }
  FUN_1000a540(&stack0xffffffe8,(undefined4 *)((int)param_1 + 0xb0));
  CBaseToggle::AngularMove(param_1,fVar3,(float)piVar4,fVar5,fVar6);
  return;
}

/* 1000a560  CBaseButton::TriggerAndWait  (148 bytes)
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
  
                    /* 0xa560  117  ?TriggerAndWait@CBaseButton@@QAEXXZ */
  uVar2 = FUN_1000c1d0((uint *)&this->field_0xc4);
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
    piVar4 = (int *)FUN_1000c1d0((uint *)&this->field_0xc4);
    CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar4,uVar2,uVar5);
  }
  return;
}

/* 1000a600  CBaseButton::ButtonReturn  (128 bytes)
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
  
                    /* 0xa600  14  ?ButtonReturn@CBaseButton@@QAEXXZ */
  *(undefined4 *)&this->field_0x70 = 3;
  *(code **)&this->field_0xcc = ButtonBackHome;
  if (*(int *)&this->field_0xf4 == 0) {
    fVar1 = this->pev->speed;
    FUN_1000a540(&stack0xffffffec,(undefined4 *)&this->field_0x8c);
    CBaseToggle::LinearMove
              ((CBaseToggle *)this,in_stack_ffffffec,in_stack_fffffff0,in_stack_fffffff4,fVar1);
    this->pev->frame = 0.0;
    return;
  }
  fVar1 = this->pev->speed;
  FUN_1000a540(&stack0xffffffec,(undefined4 *)&this->field_0xa4);
  CBaseToggle::AngularMove
            ((CBaseToggle *)this,in_stack_ffffffec,in_stack_fffffff0,in_stack_fffffff4,fVar1);
  this->pev->frame = 0.0;
  return;
}

/* 1000a680  CBaseButton::ButtonBackHome  (271 bytes)
 * void ButtonBackHome(void)
 */
/* public: void __thiscall CBaseButton::ButtonBackHome(void) */

void __thiscall CBaseButton::ButtonBackHome(CBaseButton *this)

{
  entvars_t *peVar1;
  int *piVar2;
  int iVar3;
  edict_t *pEdictStartSearchAfter;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  CBaseButton *pCVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
                    /* 0xa680  13  ?ButtonBackHome@CBaseButton@@QAEXXZ */
  *(undefined4 *)&this->field_0x70 = 1;
  if ((this->pev->spawnflags & 0x20) != 0) {
    uVar10 = 0;
    uVar9 = 3;
    piVar2 = (int *)FUN_1000c1d0((uint *)&this->field_0xc4);
    CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar2,uVar9,uVar10);
  }
  if (this->pev->target != 0) {
    pEdictStartSearchAfter = (edict_t *)0x0;
    while( true ) {
      pEdictStartSearchAfter =
           (*g_engfuncs.pfnFindEntityByString)
                     (pEdictStartSearchAfter,s_targetname_100915e4,
                      gpGlobals->pStringBase + this->pev->target);
      if (pEdictStartSearchAfter == (edict_t *)0x0) break;
      iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
      if (iVar3 == 0) break;
      iVar3 = 0xc;
      bVar6 = true;
      pcVar4 = gpGlobals->pStringBase + (pEdictStartSearchAfter->v).classname;
      pcVar5 = s_multisource_100915d8;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if ((bVar6) && (pEdictStartSearchAfter->pvPrivateData != (int *)0x0)) {
        iVar3 = *(int *)pEdictStartSearchAfter->pvPrivateData;
        uVar8 = 0;
        uVar10 = 3;
        pCVar7 = this;
        uVar9 = FUN_1000c1d0((uint *)&this->field_0xc4);
        (**(code **)(iVar3 + 0xc0))(uVar9,pCVar7,uVar10,uVar8);
      }
    }
  }
  peVar1 = this->pev;
  if ((peVar1->spawnflags & 0x100U) == 0) {
    *(undefined4 *)&this->field_0x14 = 0;
  }
  else {
    *(code **)&this->field_0x14 = ButtonTouch;
  }
  if ((peVar1->spawnflags & 0x40) != 0) {
    *(code **)&this->field_0x10 = ButtonSpark;
    peVar1->nextthink = gpGlobals->time + 0.5;
  }
  return;
}

/* 1000b630  CBaseButton::ObjectCaps  (31 bytes)
 * undefined ObjectCaps()
 */
undefined4 __fastcall CBaseButton::ObjectCaps(int param_1)

{
  if (*(float *)(*(int *)(param_1 + 4) + 0x16c) != 0.0) {
    return 0;
  }
  return 8;
}

