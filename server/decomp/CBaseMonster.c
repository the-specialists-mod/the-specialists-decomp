/* ts_i386.so - CBaseMonster (44 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000b13e0  CBaseMonster::HasHumanGibs  (53 bytes)
 * undefined4 HasHumanGibs(void)
 */
/* CBaseMonster::HasHumanGibs(void) */

undefined4 __thiscall CBaseMonster::HasHumanGibs(CBaseMonster *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*this->vtable[0x13])(this);
  if ((((iVar1 == 4) || (iVar1 == 0xb)) || (iVar1 == 3)) || (iVar1 == 2)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* 000b1418  CBaseMonster::HasAlienGibs  (63 bytes)
 * undefined4 HasAlienGibs(void)
 */
/* CBaseMonster::HasAlienGibs(void) */

undefined4 __thiscall CBaseMonster::HasAlienGibs(CBaseMonster *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*this->vtable[0x13])(this);
  if ((((iVar1 == 5) || (iVar1 == 7)) || (iVar1 == 6)) ||
     (((iVar1 == 10 || (iVar1 == 9)) || (iVar1 == 8)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* 000b145c  CBaseMonster::FadeMonster  (132 bytes)
 * undefined FadeMonster(void)
 */
/* CBaseMonster::FadeMonster(void) */

void __thiscall CBaseMonster::FadeMonster(CBaseMonster *this)

{
  int *piVar1;
  int iVar2;
  vec_t *pvVar3;
  vec_t *pvVar4;
  
  this->pev->framerate = 0.0;
  pvVar3 = (vec_t *)&g_vecZero;
  pvVar4 = this->pev->velocity;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar4 = *pvVar3;
    pvVar3 = pvVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  this->pev->movetype = 0;
  pvVar3 = (vec_t *)&g_vecZero;
  pvVar4 = this->pev->avelocity;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar4 = *pvVar3;
    pvVar3 = pvVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  this->pev->animtime = gpGlobals->time;
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 0x20;
  CBaseEntity::SUB_StartFadeOut((CBaseEntity *)this);
  return;
}

/* 000b14e0  CBaseMonster::GibMonster  (314 bytes)
 * undefined GibMonster(void)
 */
/* CBaseMonster::GibMonster(void) */

void __thiscall CBaseMonster::GibMonster(CBaseMonster *this)

{
  bool bVar1;
  int iVar2;
  longdouble lVar3;
  
  bVar1 = false;
  EMIT_SOUND_DYN((int)this->pev->pContainingEntity,1,"common/bodysplat.wav",0x3f800000,0x3f4ccccd,0,
                 100,0.5);
  iVar2 = (*this->vtable[0x47])(this);
  if (iVar2 == 0) {
    iVar2 = (*this->vtable[0x48])(this);
    if (iVar2 == 0) goto LAB_000b15c4;
    lVar3 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("violence_agibs");
    if (lVar3 != (longdouble)0.0) {
      iVar2 = 0;
      goto LAB_000b15b3;
    }
  }
  else {
    lVar3 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("violence_hgibs");
    if (lVar3 != (longdouble)0.0) {
      CGib::SpawnHeadGib((int)this->pev);
      iVar2 = 1;
LAB_000b15b3:
      CGib::SpawnRandomGibs((int)this->pev,4,iVar2);
    }
  }
  bVar1 = true;
LAB_000b15c4:
  iVar2 = (*this->vtable[0x32])(this);
  if (iVar2 == 0) {
    if (bVar1) {
      *(undefined4 *)&this->field_0xc = 0xffff0000;
      *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
      this->pev->nextthink = gpGlobals->time;
    }
    else {
      (*this->vtable[0x49])(this);
    }
  }
  return;
}

/* 000b1620  CBaseMonster::GetDeathActivity  (698 bytes)
 * int GetDeathActivity(void)
 */
/* CBaseMonster::GetDeathActivity(void) */

int __thiscall CBaseMonster::GetDeathActivity(CBaseMonster *this)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c [7];
  undefined1 local_60 [16];
  float local_50;
  
  if (this->pev->deadflag == 0) {
    (*this->vtable[0x3e])(local_7c,this);
    pfVar5 = local_7c;
    pfVar6 = local_7c + 3;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
    bVar2 = false;
    iVar4 = 0x24;
    UTIL_MakeVectors(this->pev->angles);
    local_80 = g_vecAttackDir * -1.0;
    local_7c[0] = DAT_00190ee4 * -1.0;
    local_7c[1] = DAT_00190ee8 * -1.0;
    fVar1 = gpGlobals->v_forward[2] * local_7c[1] +
            gpGlobals->v_forward[1] * local_7c[0] + gpGlobals->v_forward[0] * local_80;
    iVar3 = *(int *)&this[2].field_0x44;
    if (iVar3 == 1) {
      iVar4 = 0x42;
    }
    else if ((iVar3 < 2) || (iVar3 != 3)) {
      bVar2 = true;
      if (fVar1 <= 0.3) {
        if (fVar1 <= -0.3) {
          iVar4 = 0x25;
        }
      }
      else {
        iVar4 = 0x26;
      }
    }
    else {
      iVar4 = 0x44;
    }
    iVar3 = CBaseAnimating::LookupActivity((CBaseAnimating *)this,iVar4);
    if (iVar3 == -1) {
      if (bVar2) {
        iVar4 = 0x24;
      }
      else if (fVar1 <= 0.3) {
        if (fVar1 <= -0.3) {
          iVar4 = 0x25;
        }
      }
      else {
        iVar4 = 0x26;
      }
    }
    iVar3 = CBaseAnimating::LookupActivity((CBaseAnimating *)this,iVar4);
    if (iVar3 == -1) {
      iVar4 = 0x24;
    }
    if (iVar4 == 0x26) {
      local_90 = gpGlobals->v_forward[0] * 64.0;
      local_8c = gpGlobals->v_forward[1] * 64.0;
      local_88 = gpGlobals->v_forward[2] * 64.0;
      local_80 = local_7c[3] + local_90;
      local_7c[0] = local_7c[4] + local_8c;
      local_7c[1] = local_7c[5] + local_88;
      UTIL_TraceHull(local_7c + 3,&local_80,0,3,this->pev->pContainingEntity,local_60);
      if (local_50 != 1.0) {
        iVar4 = 0x24;
      }
    }
    if (iVar4 == 0x25) {
      local_80 = gpGlobals->v_forward[0] * 64.0;
      local_7c[0] = gpGlobals->v_forward[1] * 64.0;
      local_7c[1] = gpGlobals->v_forward[2] * 64.0;
      local_90 = local_7c[3] - local_80;
      local_8c = local_7c[4] - local_7c[0];
      local_88 = local_7c[5] - local_7c[1];
      UTIL_TraceHull(local_7c + 3,&local_90,0,3,this->pev->pContainingEntity,local_60);
      if (local_50 != 1.0) {
        iVar4 = 0x24;
      }
    }
  }
  else {
    iVar4 = *(int *)&this[2].field_0x40;
  }
  return iVar4;
}

/* 000b18e0  CBaseMonster::GetSmallFlinchActivity  (183 bytes)
 * int GetSmallFlinchActivity(void)
 */
/* CBaseMonster::GetSmallFlinchActivity(void) */

int __thiscall CBaseMonster::GetSmallFlinchActivity(CBaseMonster *this)

{
  int iVar1;
  int iVar2;
  
  UTIL_MakeVectors(this->pev->angles);
  switch(*(undefined4 *)&this[2].field_0x44) {
  default:
    iVar2 = 0x1a;
    break;
  case 1:
    iVar2 = 0x46;
    break;
  case 3:
    iVar2 = 0x48;
    break;
  case 4:
    iVar2 = 0x49;
    break;
  case 5:
    iVar2 = 0x4a;
    break;
  case 6:
    iVar2 = 0x4b;
    break;
  case 7:
    iVar2 = 0x4c;
  }
  iVar1 = CBaseAnimating::LookupActivity((CBaseAnimating *)this,iVar2);
  if (iVar1 == -1) {
    iVar2 = 0x1a;
  }
  return iVar2;
}

/* 000b19c0  CBaseMonster::BecomeDead  (75 bytes)
 * undefined BecomeDead(void)
 */
/* CBaseMonster::BecomeDead(void) */

void __thiscall CBaseMonster::BecomeDead(CBaseMonster *this)

{
  this->pev->takedamage = 1.0;
  this->pev->health = this->pev->max_health * 0.5;
  this->pev->max_health = 5.0;
  this->pev->movetype = 6;
  return;
}

/* 000b1a0c  CBaseMonster::ShouldGibMonster  (63 bytes)
 * undefined4 ShouldGibMonster(int param_1)
 */
/* CBaseMonster::ShouldGibMonster(int) */

undefined4 __thiscall CBaseMonster::ShouldGibMonster(CBaseMonster *this,int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 == 0) && (this->pev->health < -30.0)) || (uVar1 = 0, param_1 == 2)) {
    uVar1 = 1;
  }
  return uVar1;
}

/* 000b1a4c  CBaseMonster::CallGibMonster  (288 bytes)
 * undefined CallGibMonster(void)
 */
/* CBaseMonster::CallGibMonster(void) */

void __thiscall CBaseMonster::CallGibMonster(CBaseMonster *this)

{
  bool bVar1;
  int iVar2;
  char *szVarName;
  longdouble lVar3;
  
  bVar1 = false;
  iVar2 = (*this->vtable[0x47])(this);
  if (iVar2 == 0) {
    iVar2 = (*this->vtable[0x48])(this);
    if (iVar2 == 0) goto LAB_000b1acb;
    szVarName = "violence_agibs";
  }
  else {
    szVarName = "violence_hgibs";
  }
  lVar3 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)(szVarName);
  if (lVar3 == (longdouble)0.0) {
    bVar1 = true;
  }
LAB_000b1acb:
  this->pev->takedamage = 0.0;
  this->pev->solid = 0;
  if (bVar1) {
    (*this->vtable[0x49])(this);
  }
  else {
    this->pev->effects = 0x80;
    (*this->vtable[0x4a])(this);
  }
  this->pev->deadflag = 2;
  FCheckAITrigger();
  if (this->pev->health < -99.0) {
    this->pev->health = 0.0;
  }
  iVar2 = (*this->vtable[0x4d])(this);
  if ((iVar2 != 0) && (!bVar1)) {
    UTIL_Remove((int *)this);
  }
  return;
}

/* 000b1b74  CBaseMonster::Killed  (313 bytes)
 * undefined Killed(undefined4 param_1, int param_2)
 */
/* CBaseMonster::Killed(entvars_s *, int) */

void __thiscall CBaseMonster::Killed(CBaseMonster *this,undefined4 param_1,int param_2)

{
  int iVar1;
  edict_t *peVar2;
  void *pvVar3;
  
  if (((uint)this[2].vtable & 0x80) == 0) {
    this[2].vtable = (void **)((uint)this[2].vtable | 0x80);
    EMIT_SOUND_DYN((int)this->pev->pContainingEntity,1,"common/null.wav",0x3f800000,0x3f4ccccd,0,100
                   ,0.5);
    *(undefined4 *)&this[2].field_0x58 = 8;
    *(uint *)&this[2].field_0x5c = *(uint *)&this[2].field_0x5c | 0x100;
    peVar2 = this->pev->owner;
    if (peVar2 == (edict_t *)0x0) {
      peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    pvVar3 = (void *)0x0;
    if (peVar2 != (edict_t *)0x0) {
      pvVar3 = peVar2->pvPrivateData;
    }
    if (pvVar3 != (void *)0x0) {
      (**(code **)(*(int *)((int)pvVar3 + 0x60) + 0x50))(pvVar3,this->pev);
    }
    iVar1 = ShouldGibMonster(this,param_2);
    if (iVar1 == 0) {
      if ((this->pev->flags & 0x20) != 0) {
        *(undefined4 *)&this->field_0x14 = 0;
        *(undefined4 *)&this->field_0x18 = 0;
        (*this->vtable[0x4c])(this);
      }
      if (this->pev->health < -99.0) {
        this->pev->health = 0.0;
      }
      *(undefined4 *)&this[2].field_0x58 = 8;
      return;
    }
  }
  else {
    iVar1 = ShouldGibMonster(this,param_2);
    if (iVar1 == 0) {
      return;
    }
  }
  CallGibMonster(this);
  return;
}

/* 000b23d0  CBaseMonster::TakeHealth  (91 bytes)
 * undefined4 TakeHealth(float param_1, uint param_2)
 */
/* CBaseMonster::TakeHealth(float, int) */

undefined4 __thiscall CBaseMonster::TakeHealth(CBaseMonster *this,float param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (this->pev->takedamage == 0.0) {
    uVar1 = 0;
  }
  else {
    *(uint *)&this[2].field_0x48 = *(uint *)&this[2].field_0x48 & ~(param_2 & 0x3fff);
    uVar1 = CBaseEntity::TakeHealth((int *)this,param_1);
  }
  return uVar1;
}

/* 000b2430  CBaseMonster::TakeDamage  (1497 bytes)
 * undefined4 TakeDamage(int param_1, undefined4 param_2, float param_3, uint param_4)
 */
/* WARNING: Type propagation algorithm not settling */
/* CBaseMonster::TakeDamage(entvars_s *, entvars_s *, float, int) */

undefined4 __thiscall
CBaseMonster::TakeDamage
          (CBaseMonster *this,int param_1,undefined4 param_2,float param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  entvars_t *peVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  edict_t *peVar8;
  void **ppvVar9;
  undefined3 extraout_var;
  int *piVar10;
  void *pvVar11;
  undefined1 *puVar12;
  float *pfVar13;
  undefined4 *puVar14;
  float *pfVar15;
  undefined4 *puVar16;
  undefined1 auStack_b4 [4];
  undefined4 uStack_b0;
  undefined1 auStack_ac [4];
  undefined4 local_a8;
  float local_98;
  float local_94 [5];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_44 [13];
  
  uStack_b0 = 0xb243f;
  if (this->pev->takedamage == 0.0) {
    return 0;
  }
  iVar6 = (*this->vtable[0x2d])(this);
  if (iVar6 == 0) {
    uVar7 = DeadTakeDamage(this,param_1);
    return uVar7;
  }
  if (this->pev->deadflag == 0) {
    (*this->vtable[0x4f])(this);
  }
  local_94[0] = param_3;
  *(uint *)&this[2].field_0x48 = *(uint *)&this[2].field_0x48 | param_4;
  local_44[2] = 0.0;
  local_44[3] = 0.0;
  local_44[4] = 0.0;
  pfVar13 = local_44 + 2;
  pfVar15 = local_44 + 6;
  for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar15 = *pfVar13;
    pfVar13 = pfVar13 + 1;
    pfVar15 = pfVar15 + 1;
  }
  bVar5 = false;
  if ((param_1 == 0) ||
     (iVar6 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(param_1 + 0x208)), iVar6 == 0)) {
    bVar5 = true;
  }
  puVar12 = auStack_ac;
  if (!bVar5) {
    peVar8 = *(edict_t **)(param_1 + 0x208);
    if (peVar8 == (edict_t *)0x0) {
      peVar8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    pvVar11 = (void *)0x0;
    if (peVar8 != (edict_t *)0x0) {
      pvVar11 = peVar8->pvPrivateData;
    }
    puVar12 = auStack_ac;
    if (pvVar11 != (void *)0x0) {
      (**(code **)(*(int *)((int)pvVar11 + 0x60) + 0xf8))(&local_6c,pvVar11);
      uVar7 = 0;
      local_78 = 0x41200000;
      local_60 = local_70 - 0.0;
      local_5c = local_6c - 0.0;
      local_58 = local_68 - 10.0;
      local_80 = uVar7;
      local_7c = uVar7;
      (*this->vtable[0x3e])(local_94 + 1,this);
      puVar12 = auStack_b4;
      local_54 = local_64 - local_94[0];
      local_50 = local_60 - local_94[1];
      local_4c = local_5c - local_94[2];
      local_98 = SQRT(local_4c * local_4c + local_50 * local_50 + local_54 * local_54);
      if (local_98 == 0.0) {
        local_44[0] = 0.0;
        local_44[1] = 0.0;
        local_44[2] = 1.0;
      }
      else {
        local_98 = 1.0 / local_98;
        local_44[0] = local_98 * local_54;
        local_44[1] = local_98 * local_50;
        local_44[2] = local_98 * local_4c;
      }
      pfVar13 = local_44;
      pfVar15 = local_44 + 4;
      for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar15 = *pfVar13;
        pfVar13 = pfVar13 + 1;
        pfVar15 = pfVar15 + 1;
      }
      local_98 = SQRT(local_44[6] * local_44[6] +
                      local_44[5] * local_44[5] + local_44[4] * local_44[4]);
      if (local_98 == 0.0) {
        local_94[0] = 0.0;
        local_94[1] = 0.0;
        local_94[2] = 1.0;
      }
      else {
        fVar1 = 1.0 / local_98;
        local_94[0] = fVar1 * local_44[4];
        local_94[1] = fVar1 * local_44[5];
        local_94[2] = fVar1 * local_44[6];
      }
      pfVar13 = local_94;
      pfVar15 = &g_vecAttackDir;
      for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar15 = *pfVar13;
        pfVar13 = pfVar13 + 1;
        pfVar15 = pfVar15 + 1;
      }
      pfVar13 = &g_vecAttackDir;
      pfVar15 = local_44 + 4;
      for (iVar6 = 3; local_a8 = uVar7, iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar15 = *pfVar13;
        pfVar13 = pfVar13 + 1;
        pfVar15 = pfVar15 + 1;
      }
    }
  }
  ppvVar9 = this->vtable;
  *(CBaseMonster **)(puVar12 + -0x10) = this;
  pcVar3 = ppvVar9[0x32];
  *(undefined4 *)(puVar12 + -0x14) = 0xb274b;
  iVar6 = (*pcVar3)();
  if (iVar6 != 0) {
    if (*(int *)(puVar12 + 0xb4) != 0) {
      this->pev->dmg_inflictor = *(edict_t **)(*(int *)(puVar12 + 0xb4) + 0x208);
    }
    this->pev->dmg_take = *(float *)(puVar12 + 0x18) + this->pev->dmg_take;
    if ((this->pev->flags & 0x40) != 0) {
      return 0;
    }
  }
  if (*(int *)(puVar12 + 0xb4) != 0) {
    *(undefined4 *)(puVar12 + -0x10) = *(undefined4 *)(*(int *)(puVar12 + 0xb4) + 0x208);
    *(undefined4 *)(puVar12 + -0x14) = 0xb27bc;
    (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(puVar12 + -0x10));
  }
  this->pev->health = this->pev->health - *(float *)(puVar12 + 0x18);
  if (*(int *)&this[2].field_0x54 == 6) {
    *(uint *)&this[2].field_0x5c = *(uint *)&this[2].field_0x5c | 0x100;
    return 0;
  }
  if (this->pev->health <= 0.0) {
    g_pevLastInflictor = *(undefined4 *)(puVar12 + 0xb4);
    if ((*(uint *)(puVar12 + 0xc0) & 0x2000) == 0) {
      if ((*(uint *)(puVar12 + 0xc0) & 0x1000) == 0) {
        ppvVar9 = this->vtable;
        *(undefined4 *)(puVar12 + -8) = 0;
      }
      else {
        ppvVar9 = this->vtable;
        *(undefined4 *)(puVar12 + -8) = 1;
      }
    }
    else {
      ppvVar9 = this->vtable;
      *(undefined4 *)(puVar12 + -8) = 2;
    }
    *(undefined4 *)(puVar12 + -0xc) = *(undefined4 *)(puVar12 + 0xb8);
    *(CBaseMonster **)(puVar12 + -0x10) = this;
    pcVar3 = ppvVar9[0x18];
    *(undefined4 *)(puVar12 + -0x14) = 0xb285f;
    (*pcVar3)();
    g_pevLastInflictor = 0;
    return 0;
  }
  if ((this->pev->flags & 0x20) == 0) {
    return 1;
  }
  bVar5 = false;
  if (*(int *)(puVar12 + 0xb8) == 0) {
LAB_000b28b6:
    bVar5 = true;
  }
  else {
    *(undefined4 *)(puVar12 + -0x10) = *(undefined4 *)(*(int *)(puVar12 + 0xb8) + 0x208);
    *(undefined4 *)(puVar12 + -0x14) = 0xb28af;
    iVar6 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(puVar12 + -0x10));
    if (iVar6 == 0) goto LAB_000b28b6;
  }
  if (bVar5) {
    return 1;
  }
  if ((*(uint *)(*(int *)(puVar12 + 0xb8) + 0x1a4) & 0x28) == 0) {
    return 1;
  }
  if (*(int *)(puVar12 + 0xb4) == 0) {
    peVar4 = this->pev;
    *(float *)(puVar12 + 0x30) = g_vecAttackDir * 64.0;
    *(float *)(puVar12 + 0x34) = DAT_00190ee4 * 64.0;
    *(float *)(puVar12 + 0x38) = DAT_00190ee8 * 64.0;
    puVar14 = (undefined4 *)(puVar12 + 0x20);
    fVar1 = peVar4->origin[1];
    fVar2 = peVar4->origin[2];
    *(float *)(puVar12 + 0x20) = peVar4->origin[0] + g_vecAttackDir * 64.0;
    *(float *)(puVar12 + 0x24) = fVar1 + *(float *)(puVar12 + 0x34);
    *(float *)(puVar12 + 0x28) = fVar2 + *(float *)(puVar12 + 0x38);
  }
  else {
    *(undefined1 **)(puVar12 + -0x10) = &this[3].field_0x4;
    *(undefined4 *)(puVar12 + -0x14) = 0xb28f3;
    bVar5 = int(*(EHANDLE **)(puVar12 + -0x10));
    if (CONCAT31(extraout_var,bVar5) != 0) {
      *(undefined1 **)(puVar12 + -0x10) = &this[3].field_0x4;
      *(undefined4 *)(puVar12 + -0x14) = 0xb2903;
      piVar10 = (int *)EHANDLE::operator->(*(EHANDLE **)(puVar12 + -0x10));
      if ((*(int *)(puVar12 + 0xb4) != *piVar10) && ((*(uint *)&this[2].field_0x5c & 0x10) != 0))
      goto LAB_000b2993;
    }
    puVar14 = (undefined4 *)(*(int *)(puVar12 + 0xb4) + 8);
  }
  puVar16 = (undefined4 *)&this[3].field_0x28;
  for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar16 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar16 = puVar16 + 1;
  }
LAB_000b2993:
  *(undefined4 *)(puVar12 + 0x20) = *(undefined4 *)&this[3].field_0x28;
  *(undefined4 *)(puVar12 + 0x24) = *(undefined4 *)&this[3].field_0x2c;
  *(undefined4 *)(puVar12 + 0x28) = *(undefined4 *)&this[3].field_0x30;
  *(undefined1 **)(puVar12 + -0xc) = puVar12 + 0x20;
  *(CBaseMonster **)(puVar12 + -0x10) = this;
  *(undefined4 *)(puVar12 + -0x14) = 0xb29bf;
  MakeIdealYaw();
  if (0.0 < *(float *)(puVar12 + 0xbc)) {
    *(uint *)&this[2].field_0x5c = *(uint *)&this[2].field_0x5c | 0x100;
  }
  if (20.0 <= *(float *)(puVar12 + 0xbc)) {
    *(uint *)&this[2].field_0x5c = *(uint *)&this[2].field_0x5c | 0x200;
  }
  return 1;
}

/* 000b2a10  CBaseMonster::DeadTakeDamage  (755 bytes)
 * undefined4 DeadTakeDamage(undefined4 param_1, int param_2)
 */
/* WARNING: Type propagation algorithm not settling */
/* CBaseMonster::DeadTakeDamage(entvars_s *, entvars_s *, float, int) */

undefined4 CBaseMonster::DeadTakeDamage(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  edict_t *peVar6;
  int iVar7;
  void *pvVar8;
  undefined1 *puVar9;
  float *pfVar10;
  float *pfVar11;
  int unaff_retaddr;
  undefined1 auStack_b4 [4];
  undefined4 uStack_b0;
  undefined1 auStack_ac [4];
  undefined4 local_a8;
  float local_98;
  float local_94 [5];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_44 [13];
  
  uStack_b0 = 0xb2a1f;
  local_44[2] = 0.0;
  local_44[3] = 0.0;
  local_44[4] = 0.0;
  pfVar10 = local_44 + 2;
  pfVar11 = local_44 + 6;
  for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar11 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pfVar11 = pfVar11 + 1;
  }
  bVar4 = false;
  if ((param_2 == 0) ||
     (iVar7 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(param_2 + 0x208)), iVar7 == 0)) {
    bVar4 = true;
  }
  puVar9 = auStack_ac;
  if (!bVar4) {
    peVar6 = *(edict_t **)(param_2 + 0x208);
    if (peVar6 == (edict_t *)0x0) {
      peVar6 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    pvVar8 = (void *)0x0;
    if (peVar6 != (edict_t *)0x0) {
      pvVar8 = peVar6->pvPrivateData;
    }
    puVar9 = auStack_ac;
    if (pvVar8 != (void *)0x0) {
      (**(code **)(*(int *)((int)pvVar8 + 0x60) + 0xf8))(&local_6c,pvVar8);
      uVar1 = 0;
      local_78 = 0x41200000;
      local_60 = local_70 - 0.0;
      local_5c = local_6c - 0.0;
      local_58 = local_68 - 10.0;
      local_80 = uVar1;
      local_7c = uVar1;
      (**(code **)(*(int *)(unaff_retaddr + 0x60) + 0xf8))(local_94 + 1,unaff_retaddr);
      puVar9 = auStack_b4;
      local_54 = local_64 - local_94[0];
      local_50 = local_60 - local_94[1];
      local_4c = local_5c - local_94[2];
      fVar5 = SQRT(local_4c * local_4c + local_50 * local_50 + local_54 * local_54);
      if (fVar5 == 0.0) {
        local_44[0] = 0.0;
        local_44[1] = 0.0;
        local_44[2] = 1.0;
      }
      else {
        fVar5 = 1.0 / fVar5;
        local_44[0] = fVar5 * local_54;
        local_44[1] = fVar5 * local_50;
        local_44[2] = fVar5 * local_4c;
      }
      pfVar10 = local_44;
      pfVar11 = local_44 + 4;
      for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar11 = *pfVar10;
        pfVar10 = pfVar10 + 1;
        pfVar11 = pfVar11 + 1;
      }
      local_98 = SQRT(local_44[6] * local_44[6] +
                      local_44[5] * local_44[5] + local_44[4] * local_44[4]);
      if (local_98 == 0.0) {
        local_94[0] = 0.0;
        local_94[1] = 0.0;
        local_94[2] = 1.0;
      }
      else {
        fVar5 = 1.0 / local_98;
        local_94[0] = fVar5 * local_44[4];
        local_94[1] = fVar5 * local_44[5];
        local_94[2] = fVar5 * local_44[6];
      }
      pfVar10 = local_94;
      pfVar11 = (float *)&g_vecAttackDir;
      for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar11 = *pfVar10;
        pfVar10 = pfVar10 + 1;
        pfVar11 = pfVar11 + 1;
      }
      pfVar10 = (float *)&g_vecAttackDir;
      pfVar11 = local_44 + 4;
      for (iVar7 = 3; local_a8 = uVar1, iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar11 = *pfVar10;
        pfVar10 = pfVar10 + 1;
        pfVar11 = pfVar11 + 1;
      }
    }
  }
  if ((*(uint *)(puVar9 + 0xc0) & 0x2e1) != 0) {
    piVar2 = *(int **)(puVar9 + 0xb0);
    if (*(float *)(*piVar2 + 0x160) <= *(float *)(puVar9 + 0xbc)) {
      *(undefined4 *)(*piVar2 + 0x160) = 0xc2480000;
      iVar7 = piVar2[0x18];
      *(undefined4 *)(puVar9 + -8) = 2;
      *(undefined4 *)(puVar9 + -0xc) = *(undefined4 *)(puVar9 + 0xb8);
      *(int **)(puVar9 + -0x10) = piVar2;
      pcVar3 = *(code **)(iVar7 + 0x60);
      *(undefined4 *)(puVar9 + -0x14) = 0xb2cc9;
      (*pcVar3)();
      return 0;
    }
    *(float *)(**(int **)(puVar9 + 0xb0) + 0x160) =
         *(float *)(**(int **)(puVar9 + 0xb0) + 0x160) - *(float *)(puVar9 + 0xbc) * 0.1;
  }
  return 1;
}

/* 000b2d08  CBaseMonster::DamageForce  (92 bytes)
 * longdouble DamageForce(CBaseMonster * this, float param_2)
 */
/* CBaseMonster::DamageForce(float) */

longdouble __thiscall CBaseMonster::DamageForce(CBaseMonster *this,float param_2)

{
  entvars_t *peVar1;
  longdouble lVar2;
  
  peVar1 = this->pev;
  lVar2 = (longdouble)
          ((73728.0 / (peVar1->size[0] * peVar1->size[1] * peVar1->size[2])) * param_2 * 5.0);
  if ((longdouble)1000.0 < lVar2) {
    lVar2 = (longdouble)1000.0;
  }
  return lVar2;
}

/* 000b30c8  CBaseMonster::RadiusDamage  (120 bytes)
 * undefined RadiusDamage(undefined4 param_1, undefined4 param_2, float param_3)
 */
/* CBaseMonster::RadiusDamage(entvars_s *, entvars_s *, float, int, int) */

void __thiscall
CBaseMonster::RadiusDamage(CBaseMonster *this,undefined4 param_1,undefined4 param_2,float param_3)

{
  entvars_t *peVar1;
  vec_t local_2c;
  vec_t local_28;
  vec_t local_24;
  
  peVar1 = this->pev;
  local_2c = peVar1->origin[0];
  local_28 = peVar1->origin[1];
  local_24 = peVar1->origin[2];
  ::RadiusDamage((int)&local_2c,param_1,param_2,param_3,param_3 * 2.5);
  return;
}

/* 000b3140  CBaseMonster::RadiusDamage  (114 bytes)
 * undefined RadiusDamage(undefined4 this, undefined4 * param_2, undefined4 param_3, undefined4 param_4, float param_5)
 */
/* CBaseMonster::RadiusDamage(Vector, entvars_s *, entvars_s *, float, int, int) */

void __thiscall
CBaseMonster::RadiusDamage
          (undefined4 this,undefined4 *param_2,undefined4 param_3,undefined4 param_4,float param_5)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_2c = *param_2;
  local_28 = param_2[1];
  local_24 = param_2[2];
  ::RadiusDamage((int)&local_2c,param_3,param_4,param_5,param_5 * 2.5);
  return;
}

/* 000b31b4  CBaseMonster::CheckTraceHullAttack  (372 bytes)
 * int CheckTraceHullAttack(float param_1, int param_2, undefined4 param_3)
 */
/* WARNING: Removing unreachable block (ram,0x000b32d1) */
/* CBaseMonster::CheckTraceHullAttack(float, int, int) */

int __thiscall
CBaseMonster::CheckTraceHullAttack(CBaseMonster *this,float param_1,int param_2,undefined4 param_3)

{
  entvars_t *peVar1;
  int iVar2;
  float local_8c;
  float local_88;
  float local_84;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_5c [48];
  int local_2c;
  
  iVar2 = (*this->vtable[0x32])(this);
  if (iVar2 == 0) {
    UTIL_MakeAimVectors((uint *)this->pev->angles);
  }
  else {
    UTIL_MakeVectors(this->pev->angles);
  }
  peVar1 = this->pev;
  local_6c = peVar1->origin[0];
  local_68 = peVar1->origin[1];
  local_70 = this->pev->size[2] * 0.5 + peVar1->origin[2];
  local_8c = local_6c + param_1 * gpGlobals->v_forward[0];
  local_88 = local_68 + param_1 * gpGlobals->v_forward[1];
  local_84 = local_70 + param_1 * gpGlobals->v_forward[2];
  local_64 = local_70;
  UTIL_TraceHull(&local_6c,&local_8c,0,3,this->pev->pContainingEntity,local_5c);
  iVar2 = 0;
  if (local_2c != 0) {
    iVar2 = 0;
    if (local_2c != 0) {
      iVar2 = *(int *)(local_2c + 0x7c);
    }
    if (0 < param_2) {
      (**(code **)(*(int *)(iVar2 + 0x60) + 0x58))(iVar2,this->pev,this->pev,(float)param_2,param_3)
      ;
    }
  }
  return iVar2;
}

/* 000b3328  CBaseMonster::FInViewCone  (299 bytes)
 * bool FInViewCone(int * param_1)
 */
/* CBaseMonster::FInViewCone(CBaseEntity *) */

bool __thiscall CBaseMonster::FInViewCone(CBaseMonster *this,int *param_1)

{
  float fVar1;
  float local_3c;
  float local_38;
  
  UTIL_MakeVectors(this->pev->angles);
  local_3c = *(float *)(*param_1 + 8) - this->pev->origin[0];
  fVar1 = *(float *)(*param_1 + 0xc) - this->pev->origin[1];
  local_38 = SQRT(fVar1 * fVar1 + local_3c * local_3c);
  if (local_38 == 0.0) {
    local_3c = 0.0;
    local_38 = 0.0;
  }
  else {
    local_38 = 1.0 / local_38;
    local_3c = local_38 * local_3c;
    local_38 = local_38 * fVar1;
  }
  return *(float *)&this[3].field_0x14 <
         local_38 * gpGlobals->v_forward[1] + local_3c * gpGlobals->v_forward[0];
}

/* 000b3458  CBaseMonster::FInViewCone  (293 bytes)
 * bool FInViewCone(float * param_1)
 */
/* CBaseMonster::FInViewCone(Vector *) */

bool __thiscall CBaseMonster::FInViewCone(CBaseMonster *this,float *param_1)

{
  float fVar1;
  float local_3c;
  float local_38;
  
  UTIL_MakeVectors(this->pev->angles);
  local_3c = *param_1 - this->pev->origin[0];
  fVar1 = param_1[1] - this->pev->origin[1];
  local_38 = SQRT(fVar1 * fVar1 + local_3c * local_3c);
  if (local_38 == 0.0) {
    local_3c = 0.0;
    local_38 = 0.0;
  }
  else {
    local_38 = 1.0 / local_38;
    local_3c = local_38 * local_3c;
    local_38 = local_38 * fVar1;
  }
  return *(float *)&this[3].field_0x14 <
         local_38 * gpGlobals->v_forward[1] + local_3c * gpGlobals->v_forward[0];
}

/* 000b3848  CBaseMonster::TraceAttack  (306 bytes)
 * undefined TraceAttack(undefined4 param_1, float param_2, undefined4 * param_3, int param_4, uint param_5)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBaseMonster::TraceAttack(entvars_s *, float, Vector, TraceResult *, int) */

void __thiscall
CBaseMonster::TraceAttack
          (CBaseMonster *this,undefined4 param_1,float param_2,undefined4 *param_3,int param_4,
          uint param_5)

{
  uint uVar1;
  float fVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (this->pev->takedamage != 0.0) {
    *(undefined4 *)&this[2].field_0x44 = *(undefined4 *)(param_4 + 0x34);
    switch(*(undefined4 *)(param_4 + 0x34)) {
    case 1:
      param_2 = param_2 * _DAT_00191a4c;
      break;
    case 2:
      param_2 = param_2 * _DAT_00191a50;
      break;
    case 3:
      param_2 = param_2 * _DAT_00191a54;
      break;
    case 4:
    case 5:
      param_2 = param_2 * _DAT_00191a5c;
      break;
    case 6:
    case 7:
      param_2 = param_2 * _DAT_00191a58;
    }
    local_2c = *(undefined4 *)(param_4 + 0x14);
    local_28 = *(undefined4 *)(param_4 + 0x18);
    local_24 = *(undefined4 *)(param_4 + 0x1c);
    fVar2 = param_2;
    uVar1 = (*this->vtable[0x19])(this);
    SpawnBlood(&local_2c,uVar1,fVar2);
    local_2c = *param_3;
    local_28 = param_3[1];
    local_24 = param_3[2];
    (*this->vtable[0x1a])(this,param_2,&local_2c,param_4,param_5);
    AddMultiDamage(param_1,(int)this,param_2,param_5);
  }
  return;
}

/* 000b4c08  CBaseMonster::MakeDamageBloodDecal  (465 bytes)
 * undefined MakeDamageBloodDecal(int param_1, float param_2, int param_3, float * param_4)
 */
/* CBaseMonster::MakeDamageBloodDecal(int, float, TraceResult *, Vector const &) */

void __thiscall
CBaseMonster::MakeDamageBloodDecal
          (CBaseMonster *this,int param_1,float param_2,int param_3,float *param_4)

{
  entvars_t *peVar1;
  float flLow;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  longdouble lVar5;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c [4];
  undefined1 local_5c [16];
  float local_4c;
  
  iVar2 = (*this->vtable[0x2d])(this);
  if (iVar2 == 0) {
    peVar1 = this->pev;
    if (peVar1->max_health <= 0.0) {
      return;
    }
    peVar1->max_health = peVar1->max_health - 1.0;
  }
  if (0 < param_1) {
    flLow = -param_2;
    do {
      pfVar3 = param_4;
      pfVar4 = local_6c;
      for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar4 = pfVar4 + 1;
      }
      lVar5 = (longdouble)(*g_engfuncs.pfnRandomFloat)(flLow,param_2);
      local_6c[0] = (float)(lVar5 + (longdouble)local_6c[0]);
      lVar5 = (longdouble)(*g_engfuncs.pfnRandomFloat)(flLow,param_2);
      local_6c[1] = (float)(lVar5 + (longdouble)local_6c[1]);
      lVar5 = (longdouble)(*g_engfuncs.pfnRandomFloat)(flLow,param_2);
      local_6c[2] = (float)(lVar5 + (longdouble)local_6c[2]);
      local_7c = *(float *)(param_3 + 0x14) + local_6c[0] * 172.0;
      local_78 = *(float *)(param_3 + 0x18) + local_6c[1] * 172.0;
      local_74 = *(float *)(param_3 + 0x1c) + local_6c[2] * 172.0;
      UTIL_TraceLine(param_3 + 0x14,&local_7c,1,this->pev->pContainingEntity,local_5c);
      if (local_4c != 1.0) {
        iVar2 = (*this->vtable[0x19])(this);
        UTIL_BloodDecalTrace((int)local_5c,iVar2);
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

/* 000ce69c  CBaseMonster::ReportAIState  (1 bytes)
 * undefined ReportAIState(void)
 */
/* CBaseMonster::ReportAIState(void) */

void CBaseMonster::ReportAIState(void)

{
  return;
}

/* 000ce6a0  CBaseMonster::ChangeYaw  (21 bytes)
 * longdouble ChangeYaw(void)
 */
/* CBaseMonster::ChangeYaw(int) */

longdouble CBaseMonster::ChangeYaw(void)

{
  return (longdouble)0.0;
}

/* 000ce6b8  CBaseMonster::MakeIdealYaw  (1 bytes)
 * undefined MakeIdealYaw(void)
 */
/* CBaseMonster::MakeIdealYaw(Vector) */

void CBaseMonster::MakeIdealYaw(void)

{
  return;
}

/* 000ce6bc  CBaseMonster::CorpseFallThink  (106 bytes)
 * undefined CorpseFallThink(void)
 */
/* CBaseMonster::CorpseFallThink(void) */

void __thiscall CBaseMonster::CorpseFallThink(CBaseMonster *this)

{
  if ((this->pev->flags & 0x200) == 0) {
    this->pev->nextthink = gpGlobals->time + 0.1;
  }
  else {
    *(undefined4 *)&this->field_0xc = 0;
    *(undefined4 *)&this->field_0x10 = 0;
    CBaseAnimating::SetSequenceBox((CBaseAnimating *)this);
    UTIL_SetOrigin((int)this->pev,this->pev->origin);
  }
  return;
}

/* 000ce728  CBaseMonster::MonsterInitDead  (209 bytes)
 * undefined MonsterInitDead(void)
 */
/* CBaseMonster::MonsterInitDead(void) */

void __thiscall CBaseMonster::MonsterInitDead(CBaseMonster *this)

{
  CBaseAnimating::InitBoneControllers((CBaseAnimating *)this);
  this->pev->solid = 2;
  this->pev->movetype = 6;
  this->pev->frame = 0.0;
  CBaseAnimating::ResetSequenceInfo((CBaseAnimating *)this);
  this->pev->framerate = 0.0;
  this->pev->max_health = this->pev->health;
  this->pev->deadflag = 2;
  UTIL_SetSize((int)this->pev,&g_vecZero,&g_vecZero);
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  (*this->vtable[0x4c])(this);
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = CorpseFallThink;
  this->pev->nextthink = gpGlobals->time + 0.5;
  return;
}

/* 000ce7fc  CBaseMonster::ShouldFadeOnDeath  (6 bytes)
 * undefined4 ShouldFadeOnDeath(void)
 */
/* CBaseMonster::ShouldFadeOnDeath(void) */

undefined4 CBaseMonster::ShouldFadeOnDeath(void)

{
  return 0;
}

/* 000ce804  CBaseMonster::FCheckAITrigger  (6 bytes)
 * undefined4 FCheckAITrigger(void)
 */
/* CBaseMonster::FCheckAITrigger(void) */

undefined4 CBaseMonster::FCheckAITrigger(void)

{
  return 0;
}

/* 000ce80c  CBaseMonster::KeyValue  (37 bytes)
 * undefined KeyValue(int param_1)
 */
/* CBaseMonster::KeyValue(KeyValueData_s *) */

void __thiscall CBaseMonster::KeyValue(CBaseMonster *this,int param_1)

{
  CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
  return;
}

/* 000ce834  CBaseMonster::IRelationship  (78 bytes)
 * undefined4 IRelationship(int param_1)
 */
/* CBaseMonster::IRelationship(CBaseEntity *) */

undefined4 __thiscall CBaseMonster::IRelationship(CBaseMonster *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*this->vtable[0x13])(this);
  iVar2 = (**(code **)(*(int *)(param_1 + 0x60) + 0x4c))(param_1);
  return *(undefined4 *)(iEnemy_855 + (iVar2 + iVar1 * 0xe) * 4);
}

/* 000ce884  CBaseMonster::Look  (571 bytes)
 * undefined Look(int param_1)
 */
/* CBaseMonster::Look(int) */

void __thiscall CBaseMonster::Look(CBaseMonster *this,int param_1)

{
  entvars_t *peVar1;
  CBaseMonster *pCVar2;
  int iVar3;
  int iVar4;
  CBaseMonster *pCVar5;
  undefined4 uVar6;
  int local_1e8;
  uint local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  int local_1ac [103];
  
  local_1e0 = 0;
  *(uint *)&this[2].field_0x5c = *(uint *)&this[2].field_0x5c & 0xff9fffe1;
  *(undefined4 *)&this->field_0x8 = 0;
  local_1bc = (float)param_1;
  peVar1 = this->pev;
  local_1cc = peVar1->origin[0] + local_1bc;
  local_1c8 = peVar1->origin[1] + local_1bc;
  local_1c4 = peVar1->origin[2] + local_1bc;
  peVar1 = this->pev;
  local_1dc = peVar1->origin[0] - local_1bc;
  local_1d8 = peVar1->origin[1] - local_1bc;
  local_1d4 = peVar1->origin[2] - local_1bc;
  local_1b8 = local_1bc;
  local_1b4 = local_1bc;
  iVar3 = UTIL_EntitiesInBox((int)local_1ac,100,&local_1dc,&local_1cc,0x28);
  local_1e8 = 0;
  if (0 < iVar3) {
    do {
      pCVar2 = (CBaseMonster *)local_1ac[local_1e8];
      if ((((pCVar2 != this) && (0.0 < pCVar2->pev->health)) &&
          (iVar4 = (*this->vtable[0x4e])(this,pCVar2), iVar4 != 0)) &&
         (((iVar4 = (*this->vtable[0x54])(this,pCVar2), iVar4 != 0 &&
           (-1 < (char)pCVar2->pev->flags)) &&
          (iVar4 = (*this->vtable[0x43])(this,pCVar2), iVar4 != 0)))) {
        iVar4 = (*pCVar2->vtable[0x32])(pCVar2);
        if (iVar4 != 0) {
          local_1e0 = local_1e0 | 0x200000;
        }
        *(undefined4 *)&pCVar2->field_0x8 = *(undefined4 *)&this->field_0x8;
        *(CBaseMonster **)&this->field_0x8 = pCVar2;
        pCVar5 = (CBaseMonster *)_((EHANDLE *)&this[3].field_0x4);
        if (pCVar2 == pCVar5) {
          local_1e0 = local_1e0 | 0x10;
        }
        uVar6 = (*this->vtable[0x4e])(this,pCVar2);
        switch(uVar6) {
        default:
          (*g_engfuncs.pfnAlertMessage)
                    (at_aiconsole,"%s can\'t assess %s\n",
                     gpGlobals->pStringBase + this->pev->classname,
                     gpGlobals->pStringBase + pCVar2->pev->classname);
          break;
        case 1:
          local_1e0 = local_1e0 | 8;
          break;
        case 2:
          local_1e0 = local_1e0 | 2;
          break;
        case 3:
          local_1e0 = local_1e0 | 0x400000;
          break;
        case 0xfffffffe:
          break;
        case 0xffffffff:
          local_1e0 = local_1e0 | 4;
        }
      }
      local_1e8 = local_1e8 + 1;
    } while (local_1e8 < iVar3);
  }
  *(uint *)&this[2].field_0x5c = *(uint *)&this[2].field_0x5c | local_1e0;
  return;
}

/* 000ceae0  CBaseMonster::BestVisibleEnemy  (438 bytes)
 * int * BestVisibleEnemy(void)
 */
/* CBaseMonster::BestVisibleEnemy(void) */

int * __thiscall CBaseMonster::BestVisibleEnemy(CBaseMonster *this)

{
  int *piVar1;
  entvars_t *peVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int local_44;
  int local_40;
  int *local_3c;
  
  local_40 = 0x2000;
  piVar1 = *(int **)&this->field_0x8;
  local_3c = (int *)0x0;
  local_44 = 0;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    iVar6 = (**(code **)(piVar1[0x18] + 0xb4))(piVar1);
    if (iVar6 != 0) {
      iVar6 = (*this->vtable[0x4e])(this,piVar1);
      if (local_44 < iVar6) {
        local_44 = (*this->vtable[0x4e])(this,piVar1);
        iVar6 = *piVar1;
        peVar2 = this->pev;
        fVar3 = *(float *)(iVar6 + 8) - peVar2->origin[0];
        fVar5 = *(float *)(iVar6 + 0xc) - peVar2->origin[1];
        fVar4 = *(float *)(iVar6 + 0x10) - peVar2->origin[2];
        local_40 = (int)ROUND(SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3));
        local_3c = piVar1;
      }
      else {
        iVar6 = (*this->vtable[0x4e])(this,piVar1);
        if (iVar6 == local_44) {
          iVar6 = *piVar1;
          peVar2 = this->pev;
          fVar3 = *(float *)(iVar6 + 8) - peVar2->origin[0];
          fVar5 = *(float *)(iVar6 + 0xc) - peVar2->origin[1];
          fVar4 = *(float *)(iVar6 + 0x10) - peVar2->origin[2];
          iVar6 = (int)ROUND(SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3));
          if (iVar6 <= local_40) {
            local_44 = (*this->vtable[0x4e])(this,piVar1);
            local_40 = iVar6;
            local_3c = piVar1;
          }
        }
      }
    }
  }
  return local_3c;
}

/* 000cece4  CBaseMonster::BloodColor  (11 bytes)
 * undefined4 BloodColor(void)
 */
/* CBaseMonster::BloodColor(void) */

undefined4 __thiscall CBaseMonster::BloodColor(CBaseMonster *this)

{
  return *(undefined4 *)&this[3].field_0x18;
}

/* 000cecf0  CBaseMonster::PainSound  (1 bytes)
 * undefined PainSound(void)
 */
/* CBaseMonster::PainSound(void) */

void CBaseMonster::PainSound(void)

{
  return;
}

/* 000cecf4  CBaseMonster::SetConditions  (15 bytes)
 * undefined SetConditions(uint param_1)
 */
/* CBaseMonster::SetConditions(int) */

void __thiscall CBaseMonster::SetConditions(CBaseMonster *this,uint param_1)

{
  *(uint *)&this[2].field_0x5c = *(uint *)&this[2].field_0x5c | param_1;
  return;
}

/* 000ced04  CBaseMonster::ClearConditions  (17 bytes)
 * undefined ClearConditions(uint param_1)
 */
/* CBaseMonster::ClearConditions(int) */

void __thiscall CBaseMonster::ClearConditions(CBaseMonster *this,uint param_1)

{
  *(uint *)&this[2].field_0x5c = *(uint *)&this[2].field_0x5c & ~param_1;
  return;
}

/* 000ced18  CBaseMonster::HasConditions  (23 bytes)
 * bool HasConditions(uint param_1)
 */
/* CBaseMonster::HasConditions(int) */

bool __thiscall CBaseMonster::HasConditions(CBaseMonster *this,uint param_1)

{
  return (param_1 & *(uint *)&this[2].field_0x5c) != 0;
}

/* 000ced30  CBaseMonster::HasAllConditions  (27 bytes)
 * bool HasAllConditions(uint param_1)
 */
/* CBaseMonster::HasAllConditions(int) */

bool __thiscall CBaseMonster::HasAllConditions(CBaseMonster *this,uint param_1)

{
  return (param_1 & *(uint *)&this[2].field_0x5c) == param_1;
}

/* 000ced4c  CBaseMonster::Remember  (15 bytes)
 * undefined Remember(uint param_1)
 */
/* CBaseMonster::Remember(int) */

void __thiscall CBaseMonster::Remember(CBaseMonster *this,uint param_1)

{
  this[2].vtable = (void **)((uint)this[2].vtable | param_1);
  return;
}

/* 000ced5c  CBaseMonster::Forget  (17 bytes)
 * undefined Forget(uint param_1)
 */
/* CBaseMonster::Forget(int) */

void __thiscall CBaseMonster::Forget(CBaseMonster *this,uint param_1)

{
  this[2].vtable = (void **)((uint)this[2].vtable & ~param_1);
  return;
}

/* 000ced70  CBaseMonster::HasMemory  (23 bytes)
 * bool HasMemory(uint param_1)
 */
/* CBaseMonster::HasMemory(int) */

bool __thiscall CBaseMonster::HasMemory(CBaseMonster *this,uint param_1)

{
  return (param_1 & (uint)this[2].vtable) != 0;
}

/* 000ced88  CBaseMonster::HasAllMemories  (27 bytes)
 * bool HasAllMemories(uint param_1)
 */
/* CBaseMonster::HasAllMemories(int) */

bool __thiscall CBaseMonster::HasAllMemories(CBaseMonster *this,uint param_1)

{
  return (param_1 & (uint)this[2].vtable) == param_1;
}

/* 000ceda4  CBaseMonster::StopAnimation  (17 bytes)
 * undefined StopAnimation(void)
 */
/* CBaseMonster::StopAnimation(void) */

void __thiscall CBaseMonster::StopAnimation(CBaseMonster *this)

{
  this->pev->framerate = 0.0;
  return;
}

/* 000cedb8  CBaseMonster::IsAlive  (22 bytes)
 * bool IsAlive(void)
 */
/* CBaseMonster::IsAlive(void) */

bool __thiscall CBaseMonster::IsAlive(CBaseMonster *this)

{
  return this->pev->deadflag != 2;
}

