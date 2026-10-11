/* mp.dll - CBaseMonster (22 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100126e0  CBaseMonster::BloodColor  (7 bytes)
 * undefined BloodColor()
 */
undefined4 __fastcall CBaseMonster::BloodColor(int param_1)

{
  return *(undefined4 *)(param_1 + 0x130);
}

/* 100126f0  CBaseMonster::IsAlive  (18 bytes)
 * undefined IsAlive()
 */
bool __fastcall CBaseMonster::IsAlive(int param_1)

{
  return *(int *)(*(int *)(param_1 + 4) + 0x170) != 2;
}

/* 10013120  CBaseMonster::HasHumanGibs  (34 bytes)
 * undefined HasHumanGibs()
 */
undefined4 __fastcall CBaseMonster::HasHumanGibs(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x44))();
  if ((((iVar1 != 4) && (iVar1 != 0xb)) && (iVar1 != 3)) && (iVar1 != 2)) {
    return 0;
  }
  return 1;
}

/* 10013150  CBaseMonster::HasAlienGibs  (44 bytes)
 * undefined HasAlienGibs()
 */
undefined4 __fastcall CBaseMonster::HasAlienGibs(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x44))();
  if ((((iVar1 != 5) && (iVar1 != 7)) && (iVar1 != 6)) &&
     (((iVar1 != 10 && (iVar1 != 9)) && (iVar1 != 8)))) {
    return 0;
  }
  return 1;
}

/* 10013180  CBaseMonster::FadeMonster  (119 bytes)
 * undefined FadeMonster()
 */
void __fastcall CBaseMonster::FadeMonster(CBaseEntity *param_1)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0;
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x20) = DAT_100ae498;
  *(undefined4 *)(iVar1 + 0x24) = DAT_100ae49c;
  *(undefined4 *)(iVar1 + 0x28) = DAT_100ae4a0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x5c) = DAT_100ae498;
  *(undefined4 *)(iVar1 + 0x60) = DAT_100ae49c;
  *(undefined4 *)(iVar1 + 100) = DAT_100ae4a0;
  *(float *)(*(int *)(param_1 + 4) + 0x134) = gpGlobals->time;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x20;
  CBaseEntity::SUB_StartFadeOut(param_1);
  return;
}

/* 10013200  CBaseMonster::GibMonster  (237 bytes)
 * undefined GibMonster(int * param_1)
 */
void __fastcall CBaseMonster::GibMonster(int *param_1)

{
  bool bVar1;
  int iVar2;
  float10 fVar3;
  
  bVar1 = false;
  EMIT_SOUND_DYN(*(void **)(param_1[1] + 0x208),*(void **)(param_1[1] + 0x208),1,
                 s_common_bodysplat_wav_1009d078,0x3f800000,0x3f4ccccd,0);
  iVar2 = (**(code **)(*param_1 + 0x114))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x118))();
    if (iVar2 == 0) goto LAB_100132b3;
    fVar3 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_violence_agibs_1009d62c);
    if (fVar3 != (float10)0.0) {
      FUN_10012d30(param_1[1],4,0);
    }
  }
  else {
    fVar3 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_violence_hgibs_1009d63c);
    if (fVar3 != (float10)0.0) {
      FUN_100128f0(param_1[1]);
      FUN_10012d30(param_1[1],4,1);
    }
  }
  bVar1 = true;
LAB_100132b3:
  iVar2 = (**(code **)(*param_1 + 0xc0))();
  if (iVar2 == 0) {
    if (bVar1) {
      param_1[4] = (int)CBaseEntity::SUB_Remove;
      *(float *)(param_1[1] + 0x104) = gpGlobals->time;
      return;
    }
    (**(code **)(*param_1 + 0x11c))();
  }
  return;
}

/* 100132f0  CBaseMonster::GetDeathActivity  (703 bytes)
 * undefined GetDeathActivity()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall CBaseMonster::GetDeathActivity(CBaseAnimating *param_1)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_3c [16];
  float fStack_2c;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x170) != 0) {
    return *(int *)(param_1 + 0xf4);
  }
  pfVar3 = (float *)(**(code **)(*(int *)param_1 + 0xf0))(&fStack_44);
  fStack_60 = *pfVar3;
  bVar2 = false;
  fStack_5c = pfVar3[1];
  fStack_58 = pfVar3[2];
  iVar5 = 0x24;
  UTIL_MakeVectors(*(int *)(param_1 + 4) + 0x50);
  iVar4 = *(int *)(param_1 + 0xf8);
  fVar1 = _DAT_100ae4b8 * -1.0 * gpGlobals->v_forward[0] +
          _DAT_100ae4bc * -1.0 * gpGlobals->v_forward[1] +
          _DAT_100ae4c0 * -1.0 * gpGlobals->v_forward[2];
  if (iVar4 == 0) {
    bVar2 = true;
    if (0.3 < fVar1) {
      iVar5 = 0x26;
      goto LAB_1001340a;
    }
  }
  else {
    if (iVar4 == 1) {
      iVar5 = 0x42;
      goto LAB_1001340a;
    }
    if (iVar4 == 3) {
      iVar5 = 0x44;
      goto LAB_1001340a;
    }
    bVar2 = true;
    if (0.3 < fVar1) {
      iVar5 = 0x26;
      goto LAB_1001340a;
    }
  }
  bVar2 = true;
  if (fVar1 <= -0.3) {
    bVar2 = true;
    iVar5 = 0x25;
  }
LAB_1001340a:
  iVar4 = CBaseAnimating::LookupActivity(param_1,iVar5);
  if (iVar4 == -1) {
    if (bVar2) {
      iVar5 = 0x24;
    }
    else if (fVar1 <= 0.3) {
      if (fVar1 <= -0.3) {
        iVar5 = 0x25;
      }
    }
    else {
      iVar5 = 0x26;
    }
  }
  iVar4 = CBaseAnimating::LookupActivity(param_1,iVar5);
  if (iVar4 != -1) {
    if (iVar5 == 0x26) {
      fStack_54 = gpGlobals->v_forward[0] * 64.0 + fStack_60;
      fStack_50 = fStack_5c + gpGlobals->v_forward[1] * 64.0;
      fStack_4c = fStack_58 + gpGlobals->v_forward[2] * 64.0;
      fStack_44 = fStack_50;
      fStack_40 = fStack_4c;
      FUN_10076fe0(&fStack_60,&fStack_54,0,3,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                   auStack_3c);
      if (fStack_2c == 1.0) {
        return 0x26;
      }
      return 0x24;
    }
    if (iVar5 != 0x25) {
      return iVar5;
    }
    fStack_48 = fStack_60 - gpGlobals->v_forward[0] * 64.0;
    fStack_50 = fStack_5c - gpGlobals->v_forward[1] * 64.0;
    fStack_4c = fStack_58 - gpGlobals->v_forward[2] * 64.0;
    fStack_44 = fStack_50;
    fStack_40 = fStack_4c;
    FUN_10076fe0(&fStack_60,&fStack_48,0,3,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),auStack_3c
                );
    if (fStack_2c == 1.0) {
      return 0x25;
    }
  }
  return 0x24;
}

/* 100135b0  CBaseMonster::BecomeDead  (61 bytes)
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

/* 10013710  CBaseMonster::Killed  (266 bytes)
 * undefined Killed(undefined4 param_1, int param_2)
 */
void __thiscall CBaseMonster::Killed(CBaseMonster *this,undefined4 param_1,int param_2)

{
  int iVar1;
  edict_t *peVar2;
  
  if ((*(uint *)(this + 0x114) & 0x80) != 0) {
    iVar1 = FUN_100135f0(this,param_2);
    if (iVar1 == 0) {
      return;
    }
    FUN_10013620((int *)this);
    return;
  }
  *(uint *)(this + 0x114) = *(uint *)(this + 0x114) | 0x80;
  EMIT_SOUND_DYN(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),1,
                 s_common_null_wav_1009bfb8,0x3f800000,0x3f4ccccd,0);
  *(undefined4 *)(this + 0x10c) = 8;
  *(uint *)(this + 0x110) = *(uint *)(this + 0x110) | 0x100;
  peVar2 = *(edict_t **)(*(int *)(this + 4) + 0x198);
  if (((peVar2 != (edict_t *)0x0) ||
      (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 != (edict_t *)0x0)) &&
     (peVar2->pvPrivateData != (int *)0x0)) {
    (**(code **)(*(int *)peVar2->pvPrivateData + 0x48))(*(undefined4 *)(this + 4));
  }
  iVar1 = FUN_100135f0(this,param_2);
  if (iVar1 == 0) {
    if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x20) != 0) {
      *(undefined4 *)(this + 0x14) = 0;
      (**(code **)(*(int *)this + 0x128))();
    }
    if (*(float *)(*(int *)(this + 4) + 0x160) < -99.0) {
      *(undefined4 *)(*(int *)(this + 4) + 0x160) = 0;
    }
    *(undefined4 *)(this + 0x10c) = 8;
    return;
  }
  FUN_10013620((int *)this);
  return;
}

/* 10013e50  CBaseMonster::TakeHealth  (71 bytes)
 * undefined TakeHealth()
 */
undefined4 __thiscall CBaseMonster::TakeHealth(CBaseEntity *param_1,float param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (*(float *)(*(int *)(param_1 + 4) + 0x16c) == 0.0) {
    return 0;
  }
  *(uint *)(param_1 + 0xfc) = *(uint *)(param_1 + 0xfc) & ~(param_3 & 0x3fff);
  uVar1 = CBaseEntity::TakeHealth(param_1,param_2);
  return uVar1;
}

/* 10013ea0  CBaseMonster::TakeDamage  (1252 bytes)
 * undefined4 TakeDamage(int param_1, int param_2, float param_3, uint param_4)
 * called by: CBasePlayer::TakeDamage
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
CBaseMonster::TakeDamage(CBaseMonster *this,int param_1,int param_2,float param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  edict_t *peVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined3 extraout_var;
  Vector *pVVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Vector VStack_6c;
  Vector VStack_60;
  float fStack_54;
  float fStack_50;
  Vector VStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [16];
  Vector VStack_18;
  Vector VStack_c;
  
  if (*(float *)(*(int *)(this + 4) + 0x16c) == 0.0) {
    return 0;
  }
  iVar2 = (**(code **)(*(int *)this + 0xac))();
  if (iVar2 == 0) {
    uVar3 = FUN_10014390(this,param_1,param_2,param_3,param_4);
    return uVar3;
  }
  if (*(int *)(*(int *)(this + 4) + 0x170) == 0) {
    (**(code **)(*(int *)this + 0x134))();
  }
  *(uint *)(this + 0xfc) = *(uint *)(this + 0xfc) | param_4;
  if ((((param_1 != 0) &&
       (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(param_1 + 0x208)), iVar2 != 0)) &&
      ((peVar4 = *(edict_t **)(param_1 + 0x208), peVar4 != (edict_t *)0x0 ||
       (peVar4 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar4 != (edict_t *)0x0)))) &&
     (peVar4->pvPrivateData != (int *)0x0)) {
    pfVar5 = (float *)(**(code **)(*(int *)peVar4->pvPrivateData + 0xf0))(auStack_30);
    VStack_60.z = *pfVar5;
    fStack_54 = pfVar5[1];
    fStack_50 = pfVar5[2] - 10.0;
    Vector::Vector(&VStack_4c,&VStack_60.z);
    pfVar5 = (float *)(**(code **)(*(int *)this + 0xf0))(auStack_28);
    fStack_3c = VStack_4c.y - *pfVar5;
    fStack_38 = VStack_4c.z - pfVar5[1];
    fStack_34 = fStack_40 - pfVar5[2];
    Vector::Vector(&VStack_60,&fStack_3c);
    fVar8 = SQRT(VStack_60.x * VStack_60.x + VStack_60.y * VStack_60.y + VStack_60.z * VStack_60.z);
    if (fVar8 == 0.0) {
      fVar10 = 1.0;
      fVar9 = 0.0;
      fVar8 = 0.0;
      pVVar7 = &VStack_18;
    }
    else {
      fVar8 = 1.0 / fVar8;
      fVar10 = VStack_60.z * fVar8;
      fVar9 = VStack_60.y * fVar8;
      fVar8 = VStack_60.x * fVar8;
      pVVar7 = &VStack_c;
    }
    puVar6 = (undefined4 *)Vector::Vector(pVVar7,fVar8,fVar9,fVar10);
    Vector::Vector(&VStack_6c,puVar6);
    fVar8 = SQRT(VStack_6c.z * VStack_6c.z + VStack_6c.y * VStack_6c.y + VStack_6c.x * VStack_6c.x);
    if (fVar8 == 0.0) {
      VStack_6c.z = 1.0;
      VStack_6c.y = 0.0;
      VStack_6c.x = 0.0;
      pVVar7 = &VStack_c;
    }
    else {
      fVar8 = 1.0 / fVar8;
      VStack_6c.z = VStack_6c.z * fVar8;
      VStack_6c.y = VStack_6c.y * fVar8;
      VStack_6c.x = VStack_6c.x * fVar8;
      pVVar7 = &VStack_18;
    }
    puVar6 = (undefined4 *)Vector::Vector(pVVar7,VStack_6c.x,VStack_6c.y,VStack_6c.z);
    Vector::Vector(&VStack_60,puVar6);
    _DAT_100ae4b8 = VStack_60.x;
    _DAT_100ae4bc = VStack_60.y;
    _DAT_100ae4c0 = VStack_60.z;
  }
  iVar2 = (**(code **)(*(int *)this + 0xc0))();
  if (iVar2 != 0) {
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
  if (0.0 < *(float *)(*(int *)(this + 4) + 0x160)) {
    if (((((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x20) != 0) && (param_2 != 0)) &&
        (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(param_2 + 0x208)), iVar2 != 0))
       && ((*(byte *)(param_2 + 0x1a4) & 0x28) != 0)) {
      if (param_1 == 0) {
        fStack_38 = _DAT_100ae4bc * 64.0;
        iVar2 = *(int *)(this + 4);
        fStack_34 = _DAT_100ae4c0 * 64.0;
        VStack_60.x = _DAT_100ae4b8 * 64.0 + *(float *)(iVar2 + 8);
        VStack_60.y = fStack_38 + *(float *)(iVar2 + 0xc);
        VStack_60.z = fStack_34 + *(float *)(iVar2 + 0x10);
        *(float *)(this + 0x140) = VStack_60.x;
        *(float *)(this + 0x144) = VStack_60.y;
        *(float *)(this + 0x148) = VStack_60.z;
        VStack_4c.z = VStack_60.y;
        fStack_40 = VStack_60.z;
      }
      else {
        bVar1 = FUN_1000e440((uint *)(this + 0x11c));
        if (((CONCAT31(extraout_var,bVar1) == 0) ||
            (iVar2 = EHANDLE::operator->((uint *)(this + 0x11c)), param_1 == *(int *)(iVar2 + 4)))
           || (((byte)this[0x110] & 0x10) == 0)) {
          *(undefined4 *)(this + 0x140) = *(undefined4 *)(param_1 + 8);
          *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 0xc);
          *(undefined4 *)(this + 0x148) = *(undefined4 *)(param_1 + 0x10);
        }
      }
      FUN_1003acd0();
      if (0.0 < param_3) {
        *(uint *)(this + 0x110) = *(uint *)(this + 0x110) | 0x100;
      }
      if (20.0 <= param_3) {
        *(uint *)(this + 0x110) = *(uint *)(this + 0x110) | 0x200;
      }
    }
    return 1;
  }
  DAT_100aee6c = param_1;
  if ((param_4 & 0x2000) != 0) {
    (**(code **)(*(int *)this + 0x58))(param_2,2);
    DAT_100aee6c = 0;
    return 0;
  }
  (**(code **)(*(int *)this + 0x58))(param_2,(param_4 & 0x1000) != 0);
  DAT_100aee6c = 0;
  return 0;
}

/* 100149d0  CBaseMonster::FInViewCone  (216 bytes)
 * undefined FInViewCone()
 */
undefined4 __thiscall CBaseMonster::FInViewCone(int param_1,int param_2)

{
  float fVar1;
  float fStack_10;
  float fStack_c;
  
  UTIL_MakeVectors(*(int *)(param_1 + 4) + 0x50);
  fStack_10 = *(float *)(*(int *)(param_2 + 4) + 8) - *(float *)(*(int *)(param_1 + 4) + 8);
  fStack_c = *(float *)(*(int *)(param_2 + 4) + 0xc) - *(float *)(*(int *)(param_1 + 4) + 0xc);
  fVar1 = SQRT(fStack_10 * fStack_10 + fStack_c * fStack_c);
  if (fVar1 == 0.0) {
    fStack_10 = 0.0;
    fStack_c = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    fStack_10 = fVar1 * fStack_10;
    fStack_c = fStack_c * fVar1;
  }
  if (*(float *)(param_1 + 300) <
      fStack_10 * gpGlobals->v_forward[0] + fStack_c * gpGlobals->v_forward[1]) {
    return 1;
  }
  return 0;
}

/* 10014ab0  CBaseMonster::FInViewCone  (210 bytes)
 * undefined FInViewCone()
 */
undefined4 __thiscall CBaseMonster::FInViewCone(int param_1,float *param_2)

{
  float fVar1;
  float fStack_10;
  float fStack_c;
  
  UTIL_MakeVectors(*(int *)(param_1 + 4) + 0x50);
  fStack_10 = *param_2 - *(float *)(*(int *)(param_1 + 4) + 8);
  fStack_c = param_2[1] - *(float *)(*(int *)(param_1 + 4) + 0xc);
  fVar1 = SQRT(fStack_10 * fStack_10 + fStack_c * fStack_c);
  if (fVar1 == 0.0) {
    fStack_10 = 0.0;
    fStack_c = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    fStack_10 = fVar1 * fStack_10;
    fStack_c = fStack_c * fVar1;
  }
  if (*(float *)(param_1 + 300) <
      fStack_10 * gpGlobals->v_forward[0] + fStack_c * gpGlobals->v_forward[1]) {
    return 1;
  }
  return 0;
}

/* 10014e10  CBaseMonster::TraceAttack  (202 bytes)
 * undefined TraceAttack(undefined4 param_1, float param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CBaseMonster::TraceAttack(CBaseMonster *this,undefined4 param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int in_stack_00000018;
  uint in_stack_0000001c;
  Vector VStack_24;
  undefined4 uStack_18;
  float fStack_14;
  
  if (*(float *)(*(int *)(this + 4) + 0x16c) == 0.0) {
    return;
  }
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(in_stack_00000018 + 0x34);
  switch(*(undefined4 *)(in_stack_00000018 + 0x34)) {
  case 1:
    fVar2 = _DAT_100b3864;
    break;
  case 2:
    fVar2 = _DAT_100b3868;
    break;
  case 3:
    fVar2 = _DAT_100b386c;
    break;
  case 4:
  case 5:
    fVar2 = _DAT_100b3874;
    break;
  case 6:
  case 7:
    fVar2 = _DAT_100b3870;
    break;
  default:
    goto switchD_10014e46_default;
  }
  param_2 = fVar2 * param_2;
switchD_10014e46_default:
  fStack_14 = param_2;
  uStack_18 = 0x10014e87;
  uStack_18 = (**(code **)(*(int *)this + 0x5c))();
  Vector::Vector(&VStack_24,(undefined4 *)(in_stack_00000018 + 0x14));
  FUN_10079750();
  iVar1 = *(int *)this;
  fStack_14 = (float)in_stack_0000001c;
  Vector::Vector(&VStack_24,(undefined4 *)&stack0x0000000c);
  (**(code **)(iVar1 + 0x60))(param_2);
  FUN_100796f0(fStack_14,(int)this,param_2,in_stack_0000001c);
  return;
}

/* 1002b3b0  CBaseMonster::ChangeYaw  (9 bytes)
 * undefined ChangeYaw()
 */
float10 CBaseMonster::ChangeYaw(void)

{
  return (float10)0.0;
}

/* 1002b3c0  CBaseMonster::CorpseFallThink  (71 bytes)
 * void CorpseFallThink(void)
 */
/* public: void __thiscall CBaseMonster::CorpseFallThink(void) */

void __thiscall CBaseMonster::CorpseFallThink(CBaseMonster *this)

{
                    /* 0x2b3c0  26  ?CorpseFallThink@CBaseMonster@@QAEXXZ */
  if ((*(uint *)(*(int *)(this + 4) + 0x1a4) & 0x200) != 0) {
    *(undefined4 *)(this + 0x10) = 0;
    CBaseAnimating::SetSequenceBox(this);
    UTIL_SetOrigin(*(int *)(this + 4),*(int *)(this + 4) + 8);
    return;
  }
  *(float *)(*(int *)(this + 4) + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 1002b410  CBaseMonster::MonsterInitDead  (171 bytes)
 * undefined MonsterInitDead(int * param_1)
 */
void __fastcall CBaseMonster::MonsterInitDead(int *param_1)

{
  CBaseAnimating::InitBoneControllers((int)param_1);
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x108) = 6;
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  CBaseAnimating::ResetSequenceInfo((int)param_1);
  *(undefined4 *)(param_1[1] + 0x138) = 0;
  *(undefined4 *)(param_1[1] + 0x1b0) = *(undefined4 *)(param_1[1] + 0x160);
  *(undefined4 *)(param_1[1] + 0x170) = 2;
  UTIL_SetSize(param_1[1],&DAT_100ae498,&DAT_100ae498);
  UTIL_SetOrigin(param_1[1],param_1[1] + 8);
  (**(code **)(*param_1 + 0x128))();
  param_1[4] = (int)CorpseFallThink;
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.5;
  return;
}

/* 1002b4c0  CBaseMonster::KeyValue  (13 bytes)
 * undefined KeyValue(int param_1)
 * called by: CDeadHEV::KeyValue
 */
void __thiscall CBaseMonster::KeyValue(CBaseMonster *this,int param_1)

{
  CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
  return;
}

/* 1002b4d0  CBaseMonster::IRelationship  (38 bytes)
 * undefined IRelationship()
 */
undefined4 __thiscall CBaseMonster::IRelationship(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x44))();
  iVar2 = (**(code **)(*param_2 + 0x44))();
  return *(undefined4 *)(&DAT_1009fa40 + (iVar2 + iVar1 * 0xe) * 4);
}

/* 1002b500  CBaseMonster::Look  (509 bytes)
 * undefined Look()
 */
void __thiscall CBaseMonster::Look(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int iStack_1ac;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  int aiStack_190 [100];
  
  fStack_1b0 = (float)param_2;
  uVar6 = 0;
  param_1[3] = 0;
  param_1[0x44] = param_1[0x44] & 0xff9fffe1;
  iVar2 = param_1[1];
  fStack_19c = fStack_1b0 + *(float *)(iVar2 + 8);
  fStack_198 = fStack_1b0 + *(float *)(iVar2 + 0xc);
  fStack_194 = fStack_1b0 + *(float *)(iVar2 + 0x10);
  fStack_1b8 = *(float *)(iVar2 + 8) - fStack_1b0;
  fStack_1b4 = *(float *)(iVar2 + 0xc) - fStack_1b0;
  fStack_1b0 = *(float *)(iVar2 + 0x10) - fStack_1b0;
  fStack_1a4 = fStack_1b4;
  fStack_1a0 = fStack_1b0;
  iStack_1ac = UTIL_EntitiesInBox(aiStack_190,100,&fStack_1b8,&fStack_19c,0x28);
  if (0 < iStack_1ac) {
    piVar5 = aiStack_190;
    do {
      piVar1 = (int *)*piVar5;
      if ((((piVar1 != param_1) && (0.0 < *(float *)(piVar1[1] + 0x160))) &&
          (iVar2 = (**(code **)(*param_1 + 0x130))(piVar1), iVar2 != 0)) &&
         (((iVar2 = (**(code **)(*param_1 + 0x14c))(piVar1), iVar2 != 0 &&
           ((*(byte *)(piVar1[1] + 0x1a4) & 0x80) == 0)) &&
          (iVar2 = (**(code **)(*param_1 + 0x108))(piVar1), iVar2 != 0)))) {
        iVar2 = (**(code **)(*piVar1 + 0xc0))();
        if (iVar2 != 0) {
          uVar6 = uVar6 | 0x200000;
        }
        piVar1[3] = param_1[3];
        param_1[3] = (int)piVar1;
        piVar3 = (int *)EHANDLE::operator->((uint *)(param_1 + 0x47));
        if (piVar1 == piVar3) {
          uVar6 = uVar6 | 0x10;
        }
        uVar4 = (**(code **)(*param_1 + 0x130))(piVar1);
        switch(uVar4) {
        default:
          (*g_engfuncs.pfnAlertMessage)
                    (at_aiconsole,s__s_can_t_assess__s_1009fd50,
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
      piVar5 = piVar5 + 1;
      iStack_1ac = iStack_1ac + -1;
    } while (iStack_1ac != 0);
    param_1[0x44] = param_1[0x44] | uVar6;
    return;
  }
  param_1[0x44] = param_1[0x44];
  return;
}

/* 1002b720  CBaseMonster::BestVisibleEnemy  (254 bytes)
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
    iVar2 = (**(code **)(*piVar1 + 0xac))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*param_1 + 0x130))(piVar1);
      if (iVar4 < iVar2) {
        iVar4 = (**(code **)(*param_1 + 0x130))(piVar1);
        lVar5 = __ftol();
        iVar3 = (int)lVar5;
        piStack_4 = piVar1;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x130))(piVar1);
        if (iVar2 == iVar4) {
          lVar5 = __ftol();
          if ((int)lVar5 <= iVar3) {
            iVar4 = (**(code **)(*param_1 + 0x130))(piVar1);
            iVar3 = (int)lVar5;
            piStack_4 = piVar1;
          }
        }
      }
    }
  }
  return piStack_4;
}

/* 1003abe0  CBaseMonster::ShouldFadeOnDeath  (3 bytes)
 * undefined4 ShouldFadeOnDeath(void)
 * called by: CBasePlayer::BuyAmmo, CBasePlayer::Precache, CTSGroundWeapon::GetWeapon, CTSSellZone::SellTouch, CWorld::Precache, FUN_10013620, FUN_100622f0, FUN_10062470, FUN_100688f0, FUN_10068930, FUN_10068970
 */
undefined4 CBaseMonster::ShouldFadeOnDeath(void)

{
  return 0;
}

