/* mp.dll - CFuncRotating (13 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10007650  CFuncRotating::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CFuncRotating::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CFuncRotating_10090ed8,(int)param_1,0x10090d60,5);
  return;
}

/* 10007680  CFuncRotating::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CFuncRotating::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CFuncRotating_10090ed8,(int)param_1,0x10090d60,5);
  return;
}

/* 100076c0  CFuncRotating::KeyValue  (362 bytes)
 * undefined KeyValue()
 */
void __thiscall CFuncRotating::KeyValue(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  float10 fVar8;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  bVar7 = true;
  pcVar5 = *(char **)(param_2 + 4);
  puVar2 = (undefined1 *)0xc;
  pcVar4 = pcVar5;
  pcVar6 = s_fanfriction_10090f04;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    fVar8 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x54) = (float)(fVar8 * (float10)0.01);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000007;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_Volume_10090efc;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    fVar8 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x5c) = (float)(fVar8 * (float10)0.1);
    if ((float10)1.0 < fVar8 * (float10)0.1) {
      *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
    }
    if (*(float *)(param_1 + 0x5c) < 0.0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  iVar3 = 0xc;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_spawnorigin_10090ef0;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    FUN_10068210(&fStack_c,(int)&fStack_c,*(char **)(param_2 + 8));
    if (((fStack_c != DAT_1009f4a8) || (fStack_8 != DAT_1009f4ac)) || (fStack_4 != DAT_1009f4b0)) {
      iVar3 = *(int *)(param_1 + 4);
      *(float *)(iVar3 + 8) = fStack_c;
      *(float *)(iVar3 + 0xc) = fStack_8;
      *(float *)(iVar3 + 0x10) = fStack_4;
      return;
    }
  }
  else {
    puVar2 = &DAT_00000007;
    bVar7 = true;
    pcVar4 = s_sounds_10090ee8;
    do {
      if (puVar2 == (undefined1 *)0x0) break;
      puVar2 = puVar2 + -1;
      bVar7 = *pcVar5 == *pcVar4;
      pcVar5 = pcVar5 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar7);
    if (bVar7) {
      uVar1 = FUN_1006e1dd(puVar2,*(byte_conflict **)(param_2 + 8));
      *(undefined4 *)(param_1 + 100) = uVar1;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}

/* 10007830  CFuncRotating::Spawn  (531 bytes)
 * undefined Spawn()
 */
void __fastcall CFuncRotating::Spawn(int *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  param_1[0x18] = 0x42c60000;
  if ((float)param_1[0x17] == 0.0) {
    param_1[0x17] = 0x3f800000;
  }
  iVar2 = param_1[1];
  param_1[0x16] = 0x3f4ccccd;
  uVar3 = *(uint *)(iVar2 + 0x1a0);
  if ((char)uVar3 < '\0') {
    param_1[0x16] = 0x40000000;
  }
  else if ((uVar3 & 0x100) == 0) {
    if ((uVar3 & 0x200) != 0) {
      param_1[0x16] = 0x3f4ccccd;
    }
  }
  else {
    param_1[0x16] = 0x3fa00000;
  }
  if ((float)param_1[0x15] == 0.0) {
    param_1[0x15] = 0x3f800000;
  }
  if ((*(uint *)(iVar2 + 0x1a0) & 4) == 0) {
    if ((*(uint *)(iVar2 + 0x1a0) & 8) != 0) {
      *(undefined4 *)(iVar2 + 0x44) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0x48) = 0;
      *(undefined4 *)(iVar2 + 0x4c) = 0;
      goto LAB_1000790f;
    }
    uStack_4 = 0;
    uStack_8 = 0x3f800000;
  }
  else {
    uStack_8 = 0;
    uStack_4 = 0x3f800000;
  }
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = uStack_8;
  *(undefined4 *)(iVar2 + 0x4c) = uStack_4;
LAB_1000790f:
  iVar2 = param_1[1];
  if ((*(byte *)(iVar2 + 0x1a0) & 2) != 0) {
    *(float *)(iVar2 + 0x44) = *(float *)(iVar2 + 0x44) * -1.0;
    *(float *)(iVar2 + 0x48) = *(float *)(iVar2 + 0x48) * -1.0;
    *(float *)(iVar2 + 0x4c) = *(float *)(iVar2 + 0x4c) * -1.0;
  }
  iVar2 = param_1[1];
  if ((*(byte *)(iVar2 + 0x1a0) & 0x40) == 0) {
    *(undefined4 *)(iVar2 + 0x10c) = 4;
    *(undefined4 *)(param_1[1] + 0x108) = 7;
  }
  else {
    *(undefined4 *)(iVar2 + 0x10c) = 0;
    *(undefined4 *)(param_1[1] + 0x110) = 0xffffffff;
    *(undefined4 *)(param_1[1] + 0x108) = 7;
  }
  FUN_100679a0();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  param_1[6] = (int)RotatingUse;
  fVar1 = *(float *)(param_1[1] + 0x1f8);
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    *(undefined4 *)(param_1[1] + 0x1f8) = 0;
  }
  iVar2 = param_1[1];
  if ((*(byte *)(iVar2 + 0x1a0) & 1) != 0) {
    param_1[4] = (int)CBaseEntity::SUB_CallUseToggle;
    *(float *)(iVar2 + 0x104) = *(float *)(iVar2 + 0x100) + 1.5;
  }
  if ((*(byte *)(param_1[1] + 0x1a0) & 0x20) != 0) {
    param_1[5] = (int)HurtTouch;
  }
                    /* WARNING: Could not recover jumptable at 0x10007a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

/* 10007a50  CFuncRotating::Precache  (369 bytes)
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
    if (iVar3 == -2) goto LAB_10007a9d;
    (*g_engfuncs.pfnPrecacheSound)(s);
    goto LAB_10007a86;
  }
LAB_10007a9d:
  switch(*(undefined4 *)(param_1 + 100)) {
  case 1:
    (*g_engfuncs.pfnPrecacheSound)(s_fans_fan1_wav_10090f60);
    iVar2 = (*g_engfuncs.pfnAllocString)(s_fans_fan1_wav_10090f60);
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)(s_fans_fan2_wav_10090f50);
    s = s_fans_fan2_wav_10090f50;
    goto LAB_10007a86;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)(s_fans_fan3_wav_10090f40);
    iVar2 = (*g_engfuncs.pfnAllocString)(s_fans_fan3_wav_10090f40);
    break;
  case 4:
    (*g_engfuncs.pfnPrecacheSound)(s_fans_fan4_wav_10090f30);
    s = s_fans_fan4_wav_10090f30;
LAB_10007a86:
    iVar2 = (*g_engfuncs.pfnAllocString)(s);
    *(int *)(*(int *)(param_1 + 4) + 500) = iVar2;
    goto LAB_10007b71;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)(s_fans_fan5_wav_10090f20);
    iVar2 = (*g_engfuncs.pfnAllocString)(s_fans_fan5_wav_10090f20);
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
        goto LAB_10007b71;
      }
    }
    iVar2 = (*g_engfuncs.pfnAllocString)(s_common_null_wav_10090f10);
  }
  *(int *)(*(int *)(param_1 + 4) + 500) = iVar2;
LAB_10007b71:
  iVar2 = *(int *)(param_1 + 4);
  if (((*(float *)(iVar2 + 0x5c) != DAT_1009f4a8) || (*(float *)(iVar2 + 0x60) != DAT_1009f4ac)) ||
     (*(float *)(iVar2 + 100) != DAT_1009f4b0)) {
    *(code **)(param_1 + 0x10) = SpinUp;
    *(float *)(iVar2 + 0x104) = *(float *)(iVar2 + 0x100) + 1.5;
  }
  return;
}

/* 10007be0  CFuncRotating::HurtTouch  (321 bytes)
 * void HurtTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CFuncRotating::HurtTouch(class CBaseEntity *) */

void __thiscall CFuncRotating::HurtTouch(CFuncRotating *this,CBaseEntity *param_1)

{
  int iVar1;
  entvars_t *peVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float fStack_20;
  float afStack_1c [7];
  
                    /* 0x7be0  56  ?HurtTouch@CFuncRotating@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  if (*(float *)(iVar1 + 0x16c) != 0.0) {
    peVar2 = this->pev;
    peVar2->dmg = SQRT(peVar2->avelocity[2] * peVar2->avelocity[2] +
                       peVar2->avelocity[1] * peVar2->avelocity[1] +
                       peVar2->avelocity[0] * peVar2->avelocity[0]) * 0.1;
    peVar2 = this->pev;
    (**(code **)(*(int *)param_1 + 0x38))(peVar2,peVar2,peVar2->dmg,1);
    pfVar6 = (float *)VecBModelOrigin(afStack_1c,(int)this->pev);
    fVar4 = *(float *)(iVar1 + 8) - *pfVar6;
    fVar5 = *(float *)(iVar1 + 0xc) - pfVar6[1];
    fStack_20 = *(float *)(iVar1 + 0x10) - pfVar6[2];
    fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fStack_20 * fStack_20);
    if (fVar3 == 0.0) {
      fVar4 = 0.0;
      fVar5 = 0.0;
      fStack_20 = 1.0;
    }
    else {
      fVar3 = 1.0 / fVar3;
      fVar4 = fVar4 * fVar3;
      fVar5 = fVar3 * fVar5;
      fStack_20 = fStack_20 * fVar3;
    }
    fVar3 = this->pev->dmg;
    *(float *)(iVar1 + 0x20) = fVar4 * fVar3;
    *(float *)(iVar1 + 0x24) = fVar5 * fVar3;
    *(float *)(iVar1 + 0x28) = fStack_20 * fVar3;
  }
  return;
}

/* 10007d30  CFuncRotating::RampPitchVol  (255 bytes)
 * undefined RampPitchVol(int param_1)
 * called by: CFuncRotating::SpinDown, CFuncRotating::SpinUp
 */
void __fastcall CFuncRotating::RampPitchVol(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float10 extraout_ST0;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 4);
  __ftol();
  lVar5 = __ftol();
  uVar4 = (int)(uint)lVar5 >> 0x1f;
  fVar1 = *(float *)(param_1 + 0x5c);
  lVar6 = __ftol();
  iVar3 = (int)lVar6;
  if (iVar3 == 100) {
    iVar3 = 99;
  }
  EMIT_SOUND_DYN(gpGlobals->pStringBase + *(int *)(iVar2 + 500),*(undefined4 *)(iVar2 + 0x208),6,
                 gpGlobals->pStringBase + *(int *)(iVar2 + 500),
                 (float)((extraout_ST0 / (float10)(int)(((uint)lVar5 ^ uVar4) - uVar4)) *
                        (float10)fVar1),*(undefined4 *)(param_1 + 0x58),0xc0,iVar3);
  return;
}

/* 10007e30  CFuncRotating::SpinUp  (412 bytes)
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
  
                    /* 0x7e30  101  ?SpinUp@CFuncRotating@@QAEXXZ */
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
        EMIT_SOUND_DYN(gpGlobals->pStringBase + this->pev->noise3,this->pev->pContainingEntity,6,
                       gpGlobals->pStringBase + this->pev->noise3,*(undefined4 *)&this->field_0x5c,
                       *(undefined4 *)&this->field_0x58,0xc0,100);
        *(code **)&this->field_0x10 = Rotate;
        Rotate(this);
        return;
      }
    }
  }
  RampPitchVol((int)this);
  return;
}

/* 10007fd0  CFuncRotating::SpinDown  (443 bytes)
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
  longlong lVar7;
  
                    /* 0x7fd0  100  ?SpinDown@CFuncRotating@@QAEXXZ */
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
  fVar2 = peVar5->avelocity[1];
  fVar3 = peVar5->avelocity[2];
  if (peVar5->movedir[0] == 0.0) {
    if (peVar5->movedir[1] == 0.0) {
      fVar4 = peVar5->movedir[2];
    }
    else {
      fVar4 = peVar5->movedir[1];
    }
  }
  else {
    fVar4 = peVar5->movedir[0];
  }
  if (((((fVar4 <= 0.0) || (fVar1 < 0.0 == (fVar1 == 0.0))) || (fVar2 < 0.0 == (fVar2 == 0.0))) ||
      (fVar3 < 0.0 == (fVar3 == 0.0))) &&
     (((0.0 <= fVar4 || (fVar1 < 0.0)) || ((fVar2 < 0.0 || (fVar3 < 0.0)))))) {
    RampPitchVol((int)this);
    return;
  }
  peVar5->avelocity[0] = DAT_1009f4a8;
  peVar5->avelocity[1] = DAT_1009f4ac;
  peVar5->avelocity[2] = DAT_1009f4b0;
  peVar5 = this->pev;
  lVar7 = __ftol();
  this_00 = peVar5->pContainingEntity;
  EMIT_SOUND_DYN(this_00,this_00,6,gpGlobals->pStringBase + peVar5->noise3,0,0,0x20,(int)lVar7);
  *(code **)&this->field_0x10 = Rotate;
  Rotate(this);
  return;
}

/* 10008190  CFuncRotating::Rotate  (22 bytes)
 * void Rotate(void)
 * called by: CFuncRotating::RotatingUse, CFuncRotating::SpinDown, CFuncRotating::SpinUp
 */
/* public: void __thiscall CFuncRotating::Rotate(void) */

void __thiscall CFuncRotating::Rotate(CFuncRotating *this)

{
                    /* 0x8190  86  ?Rotate@CFuncRotating@@QAEXXZ */
  this->pev->nextthink = this->pev->ltime + 10.0;
  return;
}

/* 100081b0  CFuncRotating::RotatingUse  (355 bytes)
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
  
                    /* 0x81b0  87  ?RotatingUse@CFuncRotating@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z
                        */
  peVar4 = this->pev;
  bVar5 = peVar4->avelocity[0] == DAT_1009f4a8;
  if ((peVar4->spawnflags & 0x10) == 0) {
    if (((bVar5) && (peVar4->avelocity[1] == DAT_1009f4ac)) &&
       (peVar4->avelocity[2] == DAT_1009f4b0)) {
      EMIT_SOUND_DYN(peVar4->pContainingEntity,peVar4->pContainingEntity,6,
                     gpGlobals->pStringBase + peVar4->noise3,*(undefined4 *)&this->field_0x5c,
                     *(undefined4 *)&this->field_0x58,0,100);
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
  else if (((bVar5) && (peVar4->avelocity[1] == DAT_1009f4ac)) &&
          (peVar4->avelocity[2] == DAT_1009f4b0)) {
    *(code **)&this->field_0x10 = SpinUp;
    EMIT_SOUND_DYN(peVar4->pContainingEntity,peVar4->pContainingEntity,6,
                   gpGlobals->pStringBase + peVar4->noise3,0x3c23d70a,
                   *(undefined4 *)&this->field_0x58,0,0x1e);
    this->pev->nextthink = this->pev->ltime + 0.1;
    return;
  }
  *(code **)&this->field_0x10 = SpinDown;
  peVar4->nextthink = peVar4->ltime + 0.1;
  return;
}

/* 10008320  CFuncRotating::Blocked  (28 bytes)
 * undefined Blocked()
 */
void __thiscall CFuncRotating::Blocked(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  (**(code **)(*param_2 + 0x38))(iVar1,iVar1,*(undefined4 *)(iVar1 + 0x1e0),1);
  return;
}

/* 10009160  CFuncRotating::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CFuncRotating::ObjectCaps(void)

{
  return 0;
}

