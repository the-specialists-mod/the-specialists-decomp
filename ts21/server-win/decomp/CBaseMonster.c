/* mp.dll - CBaseMonster (24 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000fc50  CBaseMonster::BloodColor  (7 bytes)
 * undefined BloodColor()
 */
/* Identical-code folding: also CBaseEntity::BloodColor, CBaseMonster::BloodColor */

undefined4 __fastcall CBaseMonster::BloodColor(int param_1)

{
  return *(undefined4 *)(param_1 + 0x130);
}

/* 1000fc60  CBaseMonster::PainSound  (1 bytes)
 * undefined PainSound()
 */
void CBaseMonster::PainSound(void)

{
  return;
}

/* 1000fc70  CBaseMonster::IsAlive  (18 bytes)
 * undefined IsAlive()
 */
/* Identical-code folding: also CBaseEntity::IsAlive, CBaseMonster::IsAlive */

bool __fastcall CBaseMonster::IsAlive(int param_1)

{
  return *(int *)(*(int *)(param_1 + 4) + 0x170) != 2;
}

/* 10010920  CBaseMonster::HasHumanGibs  (34 bytes)
 * undefined HasHumanGibs()
 */
undefined4 __fastcall CBaseMonster::HasHumanGibs(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if ((((iVar1 != 4) && (iVar1 != 0xb)) && (iVar1 != 3)) && (iVar1 != 2)) {
    return 0;
  }
  return 1;
}

/* 10010950  CBaseMonster::HasAlienGibs  (44 bytes)
 * undefined HasAlienGibs()
 */
undefined4 __fastcall CBaseMonster::HasAlienGibs(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if ((((iVar1 != 5) && (iVar1 != 7)) && (iVar1 != 6)) &&
     (((iVar1 != 10 && (iVar1 != 9)) && (iVar1 != 8)))) {
    return 0;
  }
  return 1;
}

/* 10010980  CBaseMonster::FadeMonster  (118 bytes)
 * undefined FadeMonster()
 */
void __fastcall CBaseMonster::FadeMonster(CBaseEntity *param_1)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0;
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x20) = DAT_1009f4a8;
  *(undefined4 *)(iVar1 + 0x24) = DAT_1009f4ac;
  *(undefined4 *)(iVar1 + 0x28) = DAT_1009f4b0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x5c) = DAT_1009f4a8;
  *(undefined4 *)(iVar1 + 0x60) = DAT_1009f4ac;
  *(undefined4 *)(iVar1 + 100) = DAT_1009f4b0;
  *(float *)(*(int *)(param_1 + 4) + 0x134) = gpGlobals->time;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x20;
  CBaseEntity::SUB_StartFadeOut(param_1);
  return;
}

/* 10010a00  CBaseMonster::GibMonster  (231 bytes)
 * undefined GibMonster(int * param_1)
 */
void __fastcall CBaseMonster::GibMonster(int *param_1)

{
  bool bVar1;
  int iVar2;
  float10 fVar3;
  
  bVar1 = false;
  EMIT_SOUND_DYN(*(void **)(param_1[1] + 0x208),*(void **)(param_1[1] + 0x208),1,
                 s_common_bodysplat_wav_10091f10,0x3f800000,0x3f4ccccd,0,100);
  iVar2 = (**(code **)(*param_1 + 0xf8))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0xfc))();
    if (iVar2 == 0) goto LAB_10010aae;
    fVar3 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_violence_agibs_10092548);
    if (fVar3 != (float10)0.0) {
      FUN_100105b0(param_1[1],4,0);
    }
  }
  else {
    fVar3 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_violence_hgibs_10092558);
    if (fVar3 != (float10)0.0) {
      FUN_10010210(param_1[1]);
      FUN_100105b0(param_1[1],4,1);
    }
  }
  bVar1 = true;
LAB_10010aae:
  iVar2 = (**(code **)(*param_1 + 0xa8))();
  if (iVar2 == 0) {
    if (!bVar1) {
                    /* WARNING: Could not recover jumptable at 0x10010ae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x100))();
      return;
    }
    param_1[4] = (int)CBaseEntity::SUB_Remove;
    *(float *)(param_1[1] + 0x104) = gpGlobals->time;
  }
  return;
}

/* 10010af0  CBaseMonster::GetDeathActivity  (578 bytes)
 * undefined GetDeathActivity()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall CBaseMonster::GetDeathActivity(CBaseAnimating *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_44 [4];
  float fStack_40;
  float fStack_2c;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x170) != 0) {
    return *(int *)(param_1 + 0xf4);
  }
  (**(code **)(*(int *)param_1 + 0xd4))(auStack_44);
  bVar2 = false;
  iVar4 = 0x24;
  FUN_10066df0();
  iVar3 = *(int *)(param_1 + 0xf8);
  fVar1 = _DAT_1009f4c4 * -1.0 * gpGlobals->v_forward[0] +
          _DAT_1009f4c8 * -1.0 * gpGlobals->v_forward[1] +
          _DAT_1009f4cc * -1.0 * gpGlobals->v_forward[2];
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      iVar4 = 0x42;
      goto LAB_10010bdc;
    }
    if (iVar3 == 3) {
      iVar4 = 0x44;
      goto LAB_10010bdc;
    }
  }
  bVar2 = true;
  if (fVar1 <= 0.3) {
    if (fVar1 < -0.3 != (fVar1 == -0.3)) {
      iVar4 = 0x25;
    }
  }
  else {
    iVar4 = 0x26;
  }
LAB_10010bdc:
  iVar3 = CBaseAnimating::LookupActivity(param_1,iVar4);
  if (iVar3 == -1) {
    if (bVar2) {
      iVar4 = 0x24;
    }
    else if (fVar1 <= 0.3) {
      if (fVar1 < -0.3 != (fVar1 == -0.3)) {
        iVar4 = 0x25;
      }
    }
    else {
      iVar4 = 0x26;
    }
  }
  iVar3 = CBaseAnimating::LookupActivity(param_1,iVar4);
  if (iVar3 != -1) {
    if (iVar4 == 0x26) {
      fStack_40 = gpGlobals->v_forward[2];
    }
    else {
      if (iVar4 != 0x25) {
        return iVar4;
      }
      fStack_40 = gpGlobals->v_forward[2];
    }
    fStack_40 = fStack_40 * 64.0;
    FUN_10067870();
    if (fStack_2c == 1.0) {
      return iVar4;
    }
  }
  return 0x24;
}

/* 10010d40  CBaseMonster::GetSmallFlinchActivity  (108 bytes)
 * int GetSmallFlinchActivity(void * param_1)
 */
int __fastcall CBaseMonster::GetSmallFlinchActivity(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_10066df0();
  switch(*(undefined4 *)((int)param_1 + 0xf8)) {
  case 1:
    iVar3 = 0x46;
    break;
  default:
    iVar3 = 0x1a;
    break;
  case 3:
    iVar3 = 0x48;
    break;
  case 4:
    iVar3 = 0x49;
    break;
  case 5:
    iVar3 = 0x4a;
    break;
  case 6:
    iVar3 = 0x4b;
    break;
  case 7:
    iVar3 = 0x4c;
  }
  iVar1 = CBaseAnimating::LookupActivity(param_1,iVar3);
  iVar2 = 0x1a;
  if (iVar1 != -1) {
    iVar2 = iVar3;
  }
  return iVar2;
}

/* 10010dd0  CBaseMonster::BecomeDead  (61 bytes)
 * undefined BecomeDead()
 */
void __fastcall CBaseMonster::BecomeDead(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x16c) = 0x3f800000;
  *(float *)(*(int *)(param_1 + 4) + 0x160) = *(float *)(*(int *)(param_1 + 4) + 0x1b0) * 0.5;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1b0) = 0x40a00000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 6;
  return;
}

/* 10010f20  CBaseMonster::Killed  (257 bytes)
 * undefined Killed(undefined4 param_1, int param_2)
 */
/* Identical-code folding: also CBaseEntity::Killed, CBaseMonster::Killed */

void __thiscall CBaseMonster::Killed(CBaseMonster *this,undefined4 param_1,int param_2)

{
  int iVar1;
  edict_t *peVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  
  if ((char)*(uint *)(this + 0x114) < '\0') {
    iVar1 = FUN_10010e10(this,param_2);
    if (iVar1 == 0) {
      return;
    }
    FUN_10010e40(extraout_ECX);
    return;
  }
  *(uint *)(this + 0x114) = *(uint *)(this + 0x114) | 0x80;
  EMIT_SOUND_DYN(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),1,
                 s_common_null_wav_10090f10,0x3f800000,0x3f4ccccd,0,100);
  *(undefined4 *)(this + 0x10c) = 8;
  *(uint *)(this + 0x110) = *(uint *)(this + 0x110) | 0x100;
  peVar2 = *(edict_t **)(*(int *)(this + 4) + 0x198);
  if (((peVar2 != (edict_t *)0x0) ||
      (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 != (edict_t *)0x0)) &&
     (peVar2->pvPrivateData != (int *)0x0)) {
    (**(code **)(*(int *)peVar2->pvPrivateData + 0x30))(*(undefined4 *)(this + 4));
  }
  iVar1 = FUN_10010e10(this,param_2);
  if (iVar1 == 0) {
    if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x20) != 0) {
      *(undefined4 *)(this + 0x14) = 0;
      (**(code **)(*(int *)this + 0x10c))();
    }
    if (*(float *)(*(int *)(this + 4) + 0x160) < -99.0) {
      *(undefined4 *)(*(int *)(this + 4) + 0x160) = 0;
    }
    *(undefined4 *)(this + 0x10c) = 8;
    return;
  }
  FUN_10010e40(extraout_ECX_00);
  return;
}

/* 100115e0  CBaseMonster::TakeHealth  (74 bytes)
 * undefined4 TakeHealth(float param_1, uint param_2)
 * called by: CBasePlayer::TakeHealth
 */
/* Identical-code folding: also CBaseEntity::TakeHealth, CBaseMonster::TakeHealth */

undefined4 __thiscall CBaseMonster::TakeHealth(CBaseMonster *this,float param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(float *)(*(int *)(this + 4) + 0x16c) == 0.0) {
    return 0;
  }
  *(uint *)(this + 0xfc) = *(uint *)(this + 0xfc) & ~(param_2 & 0x3fff);
  uVar1 = CBaseEntity::TakeHealth((CBaseEntity *)this,param_1);
  return uVar1;
}

/* 10011630  CBaseMonster::TakeDamage  (1134 bytes)
 * undefined4 TakeDamage(int param_1, int param_2, float param_3, uint param_4)
 * called by: CBasePlayer::TakeDamage
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Identical-code folding: also CBaseEntity::TakeDamage, CBaseMonster::TakeDamage */

undefined4 __thiscall
CBaseMonster::TakeDamage(CBaseMonster *this,int param_1,int param_2,float param_3,uint param_4)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  edict_t *peVar5;
  undefined4 *puVar6;
  float *pfVar7;
  undefined3 extraout_var;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [16];
  
  if (*(float *)(*(int *)(this + 4) + 0x16c) == 0.0) {
    return 0;
  }
  iVar3 = (**(code **)(*(int *)this + 0x94))();
  if (iVar3 == 0) {
    uVar4 = FUN_10011aa0(this,param_1,param_2,param_3,param_4);
    return uVar4;
  }
  if (*(int *)(*(int *)(this + 4) + 0x170) == 0) {
    (**(code **)(*(int *)this + 0x118))();
  }
  *(uint *)(this + 0xfc) = *(uint *)(this + 0xfc) | param_4;
  if ((((param_1 != 0) &&
       (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(param_1 + 0x208)), iVar3 != 0)) &&
      ((peVar5 = *(edict_t **)(param_1 + 0x208), peVar5 != (edict_t *)0x0 ||
       (peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar5 != (edict_t *)0x0)))) &&
     (peVar5->pvPrivateData != (int *)0x0)) {
    puVar6 = (undefined4 *)(**(code **)(*(int *)peVar5->pvPrivateData + 0xd4))(auStack_18);
    fStack_28 = (float)*puVar6;
    fStack_24 = (float)puVar6[1];
    fStack_20 = (float)puVar6[2] - 10.0;
    pfVar7 = (float *)(**(code **)(*(int *)this + 0xd4))(auStack_10);
    fVar8 = fStack_24 - *pfVar7;
    fStack_2c = fStack_20 - pfVar7[1];
    fStack_28 = fStack_1c - pfVar7[2];
    fVar1 = SQRT(fVar8 * fVar8 + fStack_2c * fStack_2c + fStack_28 * fStack_28);
    if (fVar1 == 0.0) {
      fVar10 = 1.0;
      fVar9 = 0.0;
      fVar8 = 0.0;
    }
    else {
      fVar1 = 1.0 / fVar1;
      fVar10 = fStack_28 * fVar1;
      fVar9 = fStack_2c * fVar1;
      fVar8 = fVar8 * fVar1;
    }
    FUN_1000c5f0(&fStack_3c,fVar8,fVar9,fVar10);
    fVar8 = SQRT(fStack_34 * fStack_34 + fStack_38 * fStack_38 + fStack_3c * fStack_3c);
    if (fVar8 == 0.0) {
      fStack_34 = 1.0;
      fStack_38 = 0.0;
      fStack_3c = 0.0;
    }
    else {
      fVar8 = 1.0 / fVar8;
      fStack_34 = fStack_34 * fVar8;
      fStack_38 = fStack_38 * fVar8;
      fStack_3c = fStack_3c * fVar8;
    }
    FUN_1000c5f0(&fStack_24,fStack_3c,fStack_38,fStack_34);
    _DAT_1009f4c4 = fStack_24;
    _DAT_1009f4c8 = fStack_20;
    _DAT_1009f4cc = fStack_1c;
  }
  iVar3 = (**(code **)(*(int *)this + 0xa8))();
  if (iVar3 != 0) {
    if (param_1 != 0) {
      *(undefined4 *)(*(int *)(this + 4) + 0x18c) = *(undefined4 *)(param_1 + 0x208);
    }
    *(float *)(*(int *)(this + 4) + 0x1d8) = param_3 + *(float *)(*(int *)(this + 4) + 0x1d8);
    if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x40) != 0) {
      return 0;
    }
  }
  if (param_1 != 0) {
    (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(param_1 + 0x208));
  }
  *(float *)(*(int *)(this + 4) + 0x160) = *(float *)(*(int *)(this + 4) + 0x160) - param_3;
  if (*(int *)(this + 0x108) == 6) {
    *(uint *)(this + 0x110) = *(uint *)(this + 0x110) | 0x100;
    return 0;
  }
  fVar8 = *(float *)(*(int *)(this + 4) + 0x160);
  if (fVar8 < 0.0 == (fVar8 == 0.0)) {
    if (((((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x20) != 0) && (param_2 != 0)) &&
        (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(param_2 + 0x208)), iVar3 != 0))
       && ((*(byte *)(param_2 + 0x1a4) & 0x28) != 0)) {
      if (param_1 == 0) {
        fStack_28 = _DAT_1009f4cc * 64.0;
        iVar3 = *(int *)(this + 4);
        fStack_24 = _DAT_1009f4c4 * 64.0 + *(float *)(iVar3 + 8);
        fStack_20 = _DAT_1009f4c8 * 64.0 + *(float *)(iVar3 + 0xc);
        fStack_1c = fStack_28 + *(float *)(iVar3 + 0x10);
        *(float *)(this + 0x140) = fStack_24;
        *(float *)(this + 0x144) = fStack_20;
        *(float *)(this + 0x148) = fStack_1c;
      }
      else {
        bVar2 = FUN_1000c210((uint *)(this + 0x11c));
        if (((CONCAT31(extraout_var,bVar2) == 0) ||
            (iVar3 = FUN_1000c220((uint *)(this + 0x11c)), param_1 == *(int *)(iVar3 + 4))) ||
           (((byte)this[0x110] & 0x10) == 0)) {
          *(undefined4 *)(this + 0x140) = *(undefined4 *)(param_1 + 8);
          *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 0xc);
          *(undefined4 *)(this + 0x148) = *(undefined4 *)(param_1 + 0x10);
        }
      }
      FUN_10023290();
      if (0.0 < param_3) {
        *(uint *)(this + 0x110) = *(uint *)(this + 0x110) | 0x100;
      }
      if (20.0 <= param_3) {
        *(uint *)(this + 0x110) = *(uint *)(this + 0x110) | 0x200;
      }
    }
    return 1;
  }
  DAT_1009fe74 = param_1;
  if ((param_4 & 0x2000) != 0) {
    (**(code **)(*(int *)this + 0x40))(param_2,2);
    DAT_1009fe74 = 0;
    return 0;
  }
  (**(code **)(*(int *)this + 0x40))(param_2,(param_4 & 0x1000) != 0);
  DAT_1009fe74 = 0;
  return 0;
}

/* 100121e0  CBaseMonster::FInViewCone  (180 bytes)
 * undefined FInViewCone()
 */
undefined4 __thiscall CBaseMonster::FInViewCone(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FUN_10066df0();
  fVar1 = *(float *)(*(int *)(param_2 + 4) + 8) - *(float *)(*(int *)(param_1 + 4) + 8);
  fVar2 = *(float *)(*(int *)(param_2 + 4) + 0xc) - *(float *)(*(int *)(param_1 + 4) + 0xc);
  fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  if (fVar3 == 0.0) {
    fVar1 = 0.0;
    fVar2 = 0.0;
  }
  else {
    fVar3 = 1.0 / fVar3;
    fVar1 = fVar1 * fVar3;
    fVar2 = fVar2 * fVar3;
  }
  if (*(float *)(param_1 + 300) < gpGlobals->v_forward[0] * fVar1 + fVar2 * gpGlobals->v_forward[1])
  {
    return 1;
  }
  return 0;
}

/* 100122a0  CBaseMonster::FInViewCone  (174 bytes)
 * undefined FInViewCone()
 */
undefined4 __thiscall CBaseMonster::FInViewCone(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FUN_10066df0();
  fVar1 = *param_2 - *(float *)(*(int *)(param_1 + 4) + 8);
  fVar2 = param_2[1] - *(float *)(*(int *)(param_1 + 4) + 0xc);
  fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  if (fVar3 == 0.0) {
    fVar1 = 0.0;
    fVar2 = 0.0;
  }
  else {
    fVar3 = 1.0 / fVar3;
    fVar1 = fVar1 * fVar3;
    fVar2 = fVar2 * fVar3;
  }
  if (*(float *)(param_1 + 300) < gpGlobals->v_forward[0] * fVar1 + fVar2 * gpGlobals->v_forward[1])
  {
    return 1;
  }
  return 0;
}

/* 100125b0  CBaseMonster::TraceAttack  (202 bytes)
 * undefined TraceAttack(undefined4 param_1, float param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Identical-code folding: also CBaseEntity::TraceAttack, CBaseMonster::TraceAttack */

void __thiscall CBaseMonster::TraceAttack(CBaseMonster *this,undefined4 param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int in_stack_00000018;
  uint in_stack_0000001c;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  float fStack_14;
  
  if (*(float *)(*(int *)(this + 4) + 0x16c) == 0.0) {
    return;
  }
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(in_stack_00000018 + 0x34);
  switch(*(undefined4 *)(in_stack_00000018 + 0x34)) {
  case 1:
    fVar2 = _DAT_100a206c;
    break;
  case 2:
    fVar2 = _DAT_100a2070;
    break;
  case 3:
    fVar2 = _DAT_100a2074;
    break;
  case 4:
  case 5:
    fVar2 = _DAT_100a207c;
    break;
  case 6:
  case 7:
    fVar2 = _DAT_100a2078;
    break;
  default:
    goto switchD_100125e6_default;
  }
  param_2 = fVar2 * param_2;
switchD_100125e6_default:
  fStack_14 = param_2;
  uStack_18 = 0x10012627;
  uStack_18 = (**(code **)(*(int *)this + 0x44))();
  FUN_1000a540(auStack_24,(undefined4 *)(in_stack_00000018 + 0x14));
  FUN_1006a3a0();
  iVar1 = *(int *)this;
  fStack_14 = (float)in_stack_0000001c;
  FUN_1000a540(auStack_24,(undefined4 *)&stack0x0000000c);
  (**(code **)(iVar1 + 0x48))(param_2);
  FUN_1006a340(fStack_14,(int)this,param_2,in_stack_0000001c);
  return;
}

/* 10023270  CBaseMonster::ReportAIState  (1 bytes)
 * undefined ReportAIState()
 */
void CBaseMonster::ReportAIState(void)

{
  return;
}

/* 10023280  CBaseMonster::ChangeYaw  (9 bytes)
 * undefined ChangeYaw()
 */
float10 CBaseMonster::ChangeYaw(void)

{
  return (float10)0.0;
}

/* 100232a0  CBaseMonster::CorpseFallThink  (71 bytes)
 * void CorpseFallThink(void)
 */
/* public: void __thiscall CBaseMonster::CorpseFallThink(void) */

void __thiscall CBaseMonster::CorpseFallThink(CBaseMonster *this)

{
                    /* 0x232a0  24  ?CorpseFallThink@CBaseMonster@@QAEXXZ */
  if ((*(uint *)(*(int *)(this + 4) + 0x1a4) & 0x200) != 0) {
    *(undefined4 *)(this + 0x10) = 0;
    FUN_10006620(this);
    FUN_100679a0();
    return;
  }
  *(float *)(*(int *)(this + 4) + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 100232f0  CBaseMonster::MonsterInitDead  (171 bytes)
 * undefined MonsterInitDead(int * param_1)
 */
void __fastcall CBaseMonster::MonsterInitDead(int *param_1)

{
  FUN_10006430((int)param_1);
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x108) = 6;
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  CBaseAnimating::ResetSequenceInfo((int)param_1);
  *(undefined4 *)(param_1[1] + 0x138) = 0;
  *(undefined4 *)(param_1[1] + 0x1b0) = *(undefined4 *)(param_1[1] + 0x160);
  *(undefined4 *)(param_1[1] + 0x170) = 2;
  FUN_10067970();
  FUN_100679a0();
  (**(code **)(*param_1 + 0x10c))();
  param_1[4] = (int)CorpseFallThink;
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.5;
  return;
}

/* 100233a0  CBaseMonster::ShouldFadeOnDeath  (3 bytes)
 * undefined ShouldFadeOnDeath()
 */
undefined4 CBaseMonster::ShouldFadeOnDeath(void)

{
  return 0;
}

/* 100233d0  CBaseMonster::IRelationship  (38 bytes)
 * undefined IRelationship()
 */
undefined4 __thiscall CBaseMonster::IRelationship(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  iVar2 = (**(code **)(*param_2 + 0x2c))();
  return *(undefined4 *)(&DAT_10094758 + (iVar2 + iVar1 * 0xe) * 4);
}

/* 10023400  CBaseMonster::Look  (447 bytes)
 * undefined Look()
 */
void __thiscall CBaseMonster::Look(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  int iStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  int aiStack_190 [100];
  
  fStack_1ac = (float)param_2;
  iVar2 = param_1[1];
  iVar5 = 0;
  param_1[0x44] = param_1[0x44] & 0xff9fffe1;
  param_1[3] = 0;
  fStack_194 = fStack_1ac + *(float *)(iVar2 + 0x10);
  fStack_198 = fStack_1ac + *(float *)(iVar2 + 0xc);
  fStack_19c = fStack_1ac + *(float *)(iVar2 + 8);
  uVar6 = 0;
  fStack_1a4 = *(float *)(iVar2 + 0x10) - fStack_1ac;
  fStack_1a8 = *(float *)(iVar2 + 0xc) - fStack_1ac;
  fStack_1ac = *(float *)(iVar2 + 8) - fStack_1ac;
  iStack_1a0 = UTIL_EntitiesInBox((int)aiStack_190,100,&fStack_1ac,&fStack_19c,0x28);
  if (0 < iStack_1a0) {
    do {
      piVar1 = (int *)aiStack_190[iVar5];
      if ((((piVar1 != param_1) && (0.0 < *(float *)(piVar1[1] + 0x160))) &&
          (iVar2 = (**(code **)(*param_1 + 0x114))(piVar1), iVar2 != 0)) &&
         (((iVar2 = (**(code **)(*param_1 + 0x130))(piVar1), iVar2 != 0 &&
           (-1 < *(char *)(piVar1[1] + 0x1a4))) &&
          (iVar2 = (**(code **)(*param_1 + 0xec))(piVar1), iVar2 != 0)))) {
        iVar2 = (**(code **)(*piVar1 + 0xa8))();
        if (iVar2 != 0) {
          uVar6 = uVar6 | 0x200000;
        }
        piVar1[3] = param_1[3];
        param_1[3] = (int)piVar1;
        piVar3 = (int *)FUN_1000c1d0((uint *)(param_1 + 0x47));
        if (piVar1 == piVar3) {
          uVar6 = uVar6 | 0x10;
        }
        uVar4 = (**(code **)(*param_1 + 0x114))(piVar1);
        switch(uVar4) {
        default:
          (*g_engfuncs.pfnAlertMessage)
                    (at_aiconsole,s__s_can_t_assess__s_10094a68,
                     gpGlobals->pStringBase + *(int *)param_1[1],
                     gpGlobals->pStringBase + *(int *)piVar1[1]);
          break;
        case 1:
          uVar6 = uVar6 | 8;
          break;
        case 2:
          uVar6 = uVar6 | 2;
          break;
        case 3:
          uVar6 = uVar6 | 0x400000;
          break;
        case 0xfffffffe:
          break;
        case 0xffffffff:
          uVar6 = uVar6 | 4;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iStack_1a0);
  }
  param_1[0x44] = param_1[0x44] | uVar6;
  return;
}

/* 100235e0  CBaseMonster::BestVisibleEnemy  (251 bytes)
 * undefined BestVisibleEnemy()
 */
int * __fastcall CBaseMonster::BestVisibleEnemy(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piStack_4;
  
  piStack_4 = (int *)0x0;
  iVar4 = 0;
  iVar3 = 0x2000;
  for (piVar1 = (int *)param_1[3]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3]) {
    iVar2 = (**(code **)(*piVar1 + 0x94))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*param_1 + 0x114))(piVar1);
      if (iVar4 < iVar2) {
        iVar4 = (**(code **)(*param_1 + 0x114))();
        lVar5 = __ftol();
        iVar3 = (int)lVar5;
        piStack_4 = piVar1;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x114))(piVar1);
        if (iVar2 == iVar4) {
          lVar5 = __ftol();
          if ((int)lVar5 <= iVar3) {
            iVar4 = (**(code **)(*param_1 + 0x114))(piVar1);
            iVar3 = (int)lVar5;
            piStack_4 = piVar1;
          }
        }
      }
    }
  }
  return piStack_4;
}

