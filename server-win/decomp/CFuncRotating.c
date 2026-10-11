/* mp.dll - CFuncRotating (12 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10009270  CFuncRotating::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CFuncRotating::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CFuncRotating_1009bf80,(int)param_1,0x1009be08,5);
  return;
}

/* 100092a0  CFuncRotating::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CFuncRotating::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CFuncRotating_1009bf80,(int)param_1,&DAT_1009be08,5);
  return;
}

/* 100092e0  CFuncRotating::KeyValue  (514 bytes)
 * undefined KeyValue()
 */
void __thiscall CFuncRotating::KeyValue(undefined *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined *this;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pcVar7 = s_fanfriction_1009bfac;
  pbVar2 = pbVar4;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1000931c:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10009321;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1000931c;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10009321:
  if (iVar3 == 0) {
    fVar9 = atof(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x54) = (float)(fVar9 * (float10)0.01);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_Volume_1009bfa4;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10009379:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1000937e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10009379;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1000937e:
  if (iVar3 == 0) {
    fVar9 = atof(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x5c) = (float)(fVar9 * (float10)0.1);
    if ((float10)1.0 < fVar9 * (float10)0.1) {
      *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
    }
    if (*(float *)(param_1 + 0x5c) < 0.0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_spawnorigin_1009bf98;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10009403:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10009408;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10009403;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10009408:
  if (iVar3 == 0) {
    FUN_10077910(&fStack_c,*(char **)(param_2 + 8));
    if (((fStack_c != DAT_100ae498) || (fStack_8 != DAT_100ae49c)) || (fStack_4 != DAT_100ae4a0)) {
      iVar3 = *(int *)(param_1 + 4);
      *(float *)(iVar3 + 8) = fStack_c;
      *(float *)(iVar3 + 0xc) = fStack_8;
      *(float *)(iVar3 + 0x10) = fStack_4;
      return;
    }
  }
  else {
    pcVar7 = s_sounds_1009bf90;
    do {
      bVar1 = *pbVar4;
      uVar6 = (undefined3)((uint)this >> 8);
      this = (undefined *)CONCAT31(uVar6,bVar1);
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100094a6:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_100094ab;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      this = (undefined *)CONCAT31(uVar6,bVar1);
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100094a6;
      pbVar4 = pbVar4 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_100094ab:
    if (iVar3 == 0) {
      uVar5 = atoi(this,*(byte_conflict **)(param_2 + 8));
      *(undefined4 *)(param_1 + 100) = uVar5;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}

/* 100094f0  CFuncRotating::Spawn  (568 bytes)
 * undefined Spawn()
 */
void __fastcall CFuncRotating::Spawn(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  param_1[0x18] = 0x42c60000;
  if ((float)param_1[0x17] == 0.0) {
    param_1[0x17] = 0x3f800000;
  }
  iVar1 = param_1[1];
  param_1[0x16] = 0x3f4ccccd;
  uVar2 = *(uint *)(iVar1 + 0x1a0);
  if ((uVar2 & 0x80) == 0) {
    if ((uVar2 & 0x100) == 0) {
      if ((uVar2 & 0x200) != 0) {
        param_1[0x16] = 0x3f4ccccd;
      }
    }
    else {
      param_1[0x16] = 0x3fa00000;
    }
  }
  else {
    param_1[0x16] = 0x40000000;
  }
  if ((float)param_1[0x15] == 0.0) {
    param_1[0x15] = 0x3f800000;
  }
  if ((*(uint *)(iVar1 + 0x1a0) & 4) == 0) {
    if ((*(uint *)(iVar1 + 0x1a0) & 8) != 0) {
      *(undefined4 *)(iVar1 + 0x44) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x48) = 0;
      *(undefined4 *)(iVar1 + 0x4c) = 0;
      goto LAB_100095e3;
    }
    *(undefined4 *)(iVar1 + 0x44) = 0;
    uVar3 = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0x3f800000;
  }
  else {
    *(undefined4 *)(iVar1 + 0x44) = 0;
    uVar3 = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x48) = 0;
  }
  *(undefined4 *)(iVar1 + 0x4c) = uVar3;
LAB_100095e3:
  iVar1 = param_1[1];
  if ((*(byte *)(iVar1 + 0x1a0) & 2) != 0) {
    *(float *)(iVar1 + 0x44) = *(float *)(iVar1 + 0x44) * -1.0;
    *(float *)(iVar1 + 0x48) = *(float *)(iVar1 + 0x48) * -1.0;
    *(float *)(iVar1 + 0x4c) = *(float *)(iVar1 + 0x4c) * -1.0;
  }
  iVar1 = param_1[1];
  if ((*(byte *)(iVar1 + 0x1a0) & 0x40) == 0) {
    *(undefined4 *)(iVar1 + 0x10c) = 4;
    *(undefined4 *)(param_1[1] + 0x108) = 7;
  }
  else {
    *(undefined4 *)(iVar1 + 0x10c) = 0;
    *(undefined4 *)(param_1[1] + 0x110) = 0xffffffff;
    *(undefined4 *)(param_1[1] + 0x108) = 7;
  }
  UTIL_SetOrigin(param_1[1],param_1[1] + 8);
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  param_1[6] = (int)RotatingUse;
  if (*(float *)(param_1[1] + 0x1f8) <= 0.0) {
    *(undefined4 *)(param_1[1] + 0x1f8) = 0;
  }
  iVar1 = param_1[1];
  if ((*(byte *)(iVar1 + 0x1a0) & 1) != 0) {
    param_1[4] = (int)CBaseEntity::SUB_CallUseToggle;
    *(float *)(iVar1 + 0x104) = *(float *)(iVar1 + 0x100) + 1.5;
  }
  if ((*(byte *)(param_1[1] + 0x1a0) & 0x20) != 0) {
    param_1[5] = (int)HurtTouch;
  }
  (**(code **)(*param_1 + 0x20))();
  return;
}

/* 10009730  CFuncRotating::Precache  (369 bytes)
 * undefined Precache(int param_1)
 */
void __fastcall CFuncRotating::Precache(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *s;
  char *pcVar4;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x1d4);
  s = gpGlobals->pStringBase + iVar2;
  if (iVar2 != 0) {
    iVar3 = -1;
    pcVar4 = s;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar3 == -2) goto LAB_1000977d;
    (*g_engfuncs.pfnPrecacheSound)(s);
    goto LAB_10009766;
  }
LAB_1000977d:
  switch(*(undefined4 *)(param_1 + 100)) {
  case 1:
    (*g_engfuncs.pfnPrecacheSound)(s_fans_fan1_wav_1009c008);
    iVar2 = (*g_engfuncs.pfnAllocString)(s_fans_fan1_wav_1009c008);
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)(s_fans_fan2_wav_1009bff8);
    s = s_fans_fan2_wav_1009bff8;
    goto LAB_10009766;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)(s_fans_fan3_wav_1009bfe8);
    iVar2 = (*g_engfuncs.pfnAllocString)(s_fans_fan3_wav_1009bfe8);
    break;
  case 4:
    (*g_engfuncs.pfnPrecacheSound)(s_fans_fan4_wav_1009bfd8);
    s = s_fans_fan4_wav_1009bfd8;
LAB_10009766:
    iVar2 = (*g_engfuncs.pfnAllocString)(s);
    *(int *)(*(int *)(param_1 + 4) + 500) = iVar2;
    goto LAB_10009851;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)(s_fans_fan5_wav_1009bfc8);
    iVar2 = (*g_engfuncs.pfnAllocString)(s_fans_fan5_wav_1009bfc8);
    break;
  default:
    if (iVar2 != 0) {
      iVar2 = -1;
      pcVar4 = s;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (iVar2 != -2) {
        (*g_engfuncs.pfnPrecacheSound)(s);
        iVar2 = (*g_engfuncs.pfnAllocString)(s);
        *(int *)(*(int *)(param_1 + 4) + 500) = iVar2;
        goto LAB_10009851;
      }
    }
    iVar2 = (*g_engfuncs.pfnAllocString)(s_common_null_wav_1009bfb8);
  }
  *(int *)(*(int *)(param_1 + 4) + 500) = iVar2;
LAB_10009851:
  iVar2 = *(int *)(param_1 + 4);
  if (((*(float *)(iVar2 + 0x5c) != DAT_100ae498) || (*(float *)(iVar2 + 0x60) != DAT_100ae49c)) ||
     (*(float *)(iVar2 + 100) != DAT_100ae4a0)) {
    *(code **)(param_1 + 0x10) = SpinUp;
    *(float *)(iVar2 + 0x104) = *(float *)(iVar2 + 0x100) + 1.5;
  }
  return;
}

/* 100098c0  CFuncRotating::HurtTouch  (345 bytes)
 * void HurtTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CFuncRotating::HurtTouch(class CBaseEntity *) */

void __thiscall CFuncRotating::HurtTouch(CFuncRotating *this,CBaseEntity *param_1)

{
  int iVar1;
  entvars_t *peVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float afStack_1c [7];
  
                    /* 0x98c0  60  ?HurtTouch@CFuncRotating@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  if (*(float *)(iVar1 + 0x16c) != 0.0) {
    peVar2 = this->pev;
    peVar2->dmg = SQRT(peVar2->avelocity[2] * peVar2->avelocity[2] +
                       peVar2->avelocity[1] * peVar2->avelocity[1] +
                       peVar2->avelocity[0] * peVar2->avelocity[0]) * 0.1;
    peVar2 = this->pev;
    (**(code **)(*(int *)param_1 + 0x50))(peVar2,peVar2,peVar2->dmg,1);
    pfVar5 = (float *)VecBModelOrigin(afStack_1c,(int)this->pev);
    fVar4 = *(float *)(iVar1 + 8) - *pfVar5;
    fVar6 = *(float *)(iVar1 + 0xc) - pfVar5[1];
    fVar7 = *(float *)(iVar1 + 0x10) - pfVar5[2];
    fVar3 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar7 * fVar7);
    if (fVar3 == 0.0) {
      fVar4 = 0.0;
      fVar6 = 0.0;
      fVar7 = 1.0;
    }
    else {
      fVar3 = 1.0 / fVar3;
      fVar4 = fVar4 * fVar3;
      fVar6 = fVar3 * fVar6;
      fVar7 = fVar7 * fVar3;
    }
    fVar3 = this->pev->dmg;
    *(float *)(iVar1 + 0x20) = fVar4 * fVar3;
    *(float *)(iVar1 + 0x24) = fVar6 * fVar3;
    *(float *)(iVar1 + 0x28) = fVar7 * fVar3;
  }
  return;
}

/* 10009a20  CFuncRotating::RampPitchVol  (260 bytes)
 * undefined RampPitchVol(int param_1)
 * called by: CFuncRotating::SpinDown, CFuncRotating::SpinUp
 */
void __fastcall CFuncRotating::RampPitchVol(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 extraout_ST0;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  __ftol();
  lVar4 = __ftol();
  uVar3 = (int)(uint)lVar4 >> 0x1f;
  fVar1 = *(float *)(param_1 + 0x5c);
  __ftol();
  EMIT_SOUND_DYN(gpGlobals->pStringBase + *(int *)(iVar2 + 500),*(undefined4 *)(iVar2 + 0x208),6,
                 gpGlobals->pStringBase + *(int *)(iVar2 + 500),
                 (float)((extraout_ST0 / (float10)(int)(((uint)lVar4 ^ uVar3) - uVar3)) *
                        (float10)fVar1),*(undefined4 *)(param_1 + 0x58),0xc0);
  return;
}

/* 10009b30  CFuncRotating::SpinUp  (448 bytes)
 * void SpinUp(void)
 */
/* public: void __thiscall CFuncRotating::SpinUp(void) */

void __thiscall CFuncRotating::SpinUp(CFuncRotating *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  entvars_t *peVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
                    /* 0x9b30  108  ?SpinUp@CFuncRotating@@QAEXXZ */
  this->pev->nextthink = this->pev->ltime + 0.1;
  peVar5 = this->pev;
  fVar6 = peVar5->speed * *(float *)&this->field_0x54;
  fVar1 = peVar5->movedir[1];
  fVar2 = peVar5->movedir[2];
  fVar3 = peVar5->avelocity[1];
  fVar4 = peVar5->avelocity[2];
  peVar5->avelocity[0] = fVar6 * peVar5->movedir[0] + peVar5->avelocity[0];
  peVar5->avelocity[1] = fVar6 * fVar1 + fVar3;
  peVar5->avelocity[2] = fVar6 * fVar2 + fVar4;
  peVar5 = this->pev;
  lVar9 = __ftol();
  uVar7 = (int)(uint)lVar9 >> 0x1f;
  lVar10 = __ftol();
  uVar8 = (int)(uint)lVar10 >> 0x1f;
  if ((int)(((uint)lVar9 ^ uVar7) - uVar7) <= (int)(((uint)lVar10 ^ uVar8) - uVar8)) {
    lVar9 = __ftol();
    uVar7 = (int)(uint)lVar9 >> 0x1f;
    lVar10 = __ftol();
    uVar8 = (int)(uint)lVar10 >> 0x1f;
    if ((int)(((uint)lVar9 ^ uVar7) - uVar7) <= (int)(((uint)lVar10 ^ uVar8) - uVar8)) {
      lVar9 = __ftol();
      uVar7 = (int)(uint)lVar9 >> 0x1f;
      lVar10 = __ftol();
      uVar8 = (int)(uint)lVar10 >> 0x1f;
      if ((int)(((uint)lVar9 ^ uVar7) - uVar7) <= (int)(((uint)lVar10 ^ uVar8) - uVar8)) {
        fVar1 = peVar5->speed;
        fVar2 = peVar5->movedir[1];
        fVar3 = peVar5->movedir[2];
        peVar5->avelocity[0] = fVar1 * peVar5->movedir[0];
        peVar5->avelocity[1] = fVar1 * fVar2;
        peVar5->avelocity[2] = fVar1 * fVar3;
        EMIT_SOUND_DYN(gpGlobals,this->pev->pContainingEntity,6,
                       gpGlobals->pStringBase + this->pev->noise3,*(undefined4 *)&this->field_0x5c,
                       *(undefined4 *)&this->field_0x58,0xc0);
        *(code **)&this->field_0x10 = Rotate;
        Rotate(this);
        return;
      }
    }
  }
  RampPitchVol((int)this);
  return;
}

/* 10009cf0  CFuncRotating::SpinDown  (465 bytes)
 * void SpinDown(void)
 */
/* public: void __thiscall CFuncRotating::SpinDown(void) */

void __thiscall CFuncRotating::SpinDown(CFuncRotating *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  entvars_t *peVar5;
  edict_t *this_00;
  float fVar6;
  
                    /* 0x9cf0  107  ?SpinDown@CFuncRotating@@QAEXXZ */
  this->pev->nextthink = this->pev->ltime + 0.1;
  peVar5 = this->pev;
  fVar6 = peVar5->speed * *(float *)&this->field_0x54;
  fVar1 = peVar5->movedir[1];
  fVar2 = peVar5->movedir[2];
  fVar3 = peVar5->avelocity[1];
  fVar4 = peVar5->avelocity[2];
  peVar5->avelocity[0] = peVar5->avelocity[0] - fVar6 * peVar5->movedir[0];
  peVar5->avelocity[1] = fVar3 - fVar6 * fVar1;
  peVar5->avelocity[2] = fVar4 - fVar6 * fVar2;
  peVar5 = this->pev;
  fVar1 = peVar5->avelocity[0];
  if (peVar5->movedir[0] == 0.0) {
    if (peVar5->movedir[1] == 0.0) {
      fVar2 = peVar5->movedir[2];
    }
    else {
      fVar2 = peVar5->movedir[1];
    }
  }
  else {
    fVar2 = peVar5->movedir[0];
  }
  if (((((fVar2 <= 0.0) || (0.0 < fVar1)) || (0.0 < peVar5->avelocity[1])) ||
      (0.0 < peVar5->avelocity[2])) &&
     (((0.0 <= fVar2 || (fVar1 < 0.0)) ||
      ((peVar5->avelocity[1] < 0.0 || (peVar5->avelocity[2] < 0.0)))))) {
    RampPitchVol((int)this);
    return;
  }
  peVar5->avelocity[0] = DAT_100ae498;
  peVar5->avelocity[1] = DAT_100ae49c;
  peVar5->avelocity[2] = DAT_100ae4a0;
  peVar5 = this->pev;
  __ftol();
  this_00 = peVar5->pContainingEntity;
  EMIT_SOUND_DYN(this_00,this_00,6,gpGlobals->pStringBase + peVar5->noise3,0,0,0x20);
  *(code **)&this->field_0x10 = Rotate;
  Rotate(this);
  return;
}

/* 10009ed0  CFuncRotating::Rotate  (22 bytes)
 * void Rotate(void)
 * called by: CFuncRotating::RotatingUse, CFuncRotating::SpinDown, CFuncRotating::SpinUp
 */
/* public: void __thiscall CFuncRotating::Rotate(void) */

void __thiscall CFuncRotating::Rotate(CFuncRotating *this)

{
                    /* 0x9ed0  92  ?Rotate@CFuncRotating@@QAEXXZ */
  this->pev->nextthink = this->pev->ltime + 10.0;
  return;
}

/* 10009ef0  CFuncRotating::RotatingUse  (383 bytes)
 * void RotatingUse(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CFuncRotating::RotatingUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CFuncRotating::RotatingUse
          (CFuncRotating *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  entvars_t *peVar4;
  bool bVar5;
  
                    /* 0x9ef0  93  ?RotatingUse@CFuncRotating@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z
                        */
  peVar4 = this->pev;
  bVar5 = peVar4->avelocity[0] == DAT_100ae498;
  if ((peVar4->spawnflags & 0x10) == 0) {
    if (((bVar5) && (peVar4->avelocity[1] == DAT_100ae49c)) &&
       (peVar4->avelocity[2] == DAT_100ae4a0)) {
      EMIT_SOUND_DYN(peVar4->pContainingEntity,peVar4->pContainingEntity,6,
                     gpGlobals->pStringBase + peVar4->noise3,*(undefined4 *)&this->field_0x5c,
                     *(undefined4 *)&this->field_0x58,0);
      peVar4 = this->pev;
      fVar1 = peVar4->speed;
      fVar2 = peVar4->movedir[1];
      fVar3 = peVar4->movedir[2];
      peVar4->avelocity[0] = fVar1 * peVar4->movedir[0];
      peVar4->avelocity[1] = fVar1 * fVar2;
      peVar4->avelocity[2] = fVar1 * fVar3;
      *(code **)&this->field_0x10 = Rotate;
      Rotate(this);
      return;
    }
  }
  else if (((bVar5) && (peVar4->avelocity[1] == DAT_100ae49c)) &&
          (peVar4->avelocity[2] == DAT_100ae4a0)) {
    *(code **)&this->field_0x10 = SpinUp;
    EMIT_SOUND_DYN(peVar4->pContainingEntity,peVar4->pContainingEntity,6,
                   gpGlobals->pStringBase + peVar4->noise3,0x3c23d70a,
                   *(undefined4 *)&this->field_0x58,0);
    this->pev->nextthink = this->pev->ltime + 0.1;
    return;
  }
  *(code **)&this->field_0x10 = SpinDown;
  peVar4->nextthink = peVar4->ltime + 0.1;
  return;
}

/* 1000a070  CFuncRotating::Blocked  (28 bytes)
 * undefined Blocked()
 */
void __thiscall CFuncRotating::Blocked(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  (**(code **)(*param_2 + 0x50))(iVar1,iVar1,*(undefined4 *)(iVar1 + 0x1e0),1);
  return;
}

