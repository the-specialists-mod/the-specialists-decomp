/* ts_i386.so - CGib (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000b089c  CGib::LimitVelocity  (245 bytes)
 * undefined LimitVelocity(void)
 */
/* CGib::LimitVelocity(void) */

void __thiscall CGib::LimitVelocity(CGib *this)

{
  entvars_t *peVar1;
  int iVar2;
  float *pfVar3;
  vec_t *pvVar4;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c [7];
  float local_10;
  
  peVar1 = this->pev;
  if (1500.0 < SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
                    peVar1->velocity[1] * peVar1->velocity[1] +
                    peVar1->velocity[0] * peVar1->velocity[0])) {
    peVar1 = this->pev;
    local_10 = SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
                    peVar1->velocity[1] * peVar1->velocity[1] +
                    peVar1->velocity[0] * peVar1->velocity[0]);
    if (local_10 == 0.0) {
      local_34 = 1.0;
      local_3c = 0.0;
      local_38 = 0.0;
    }
    else {
      local_10 = 1.0 / local_10;
      local_3c = local_10 * peVar1->velocity[0];
      local_38 = local_10 * peVar1->velocity[1];
      local_34 = local_10 * peVar1->velocity[2];
    }
    local_2c[0] = local_3c * 1500.0;
    local_2c[1] = local_38 * 1500.0;
    local_2c[2] = local_34 * 1500.0;
    pfVar3 = local_2c;
    pvVar4 = peVar1->velocity;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pvVar4 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pvVar4 = pvVar4 + 1;
    }
  }
  return;
}

/* 000b0994  CGib::SpawnStickyGibs  (848 bytes)
 * undefined SpawnStickyGibs(int param_1, float * param_2, int param_3)
 */
/* CGib::SpawnStickyGibs(entvars_s *, Vector, int) */

void CGib::SpawnStickyGibs(int param_1,float *param_2,int param_3)

{
  entvars_t *peVar1;
  CGib *this;
  int iVar2;
  edict_t *peVar3;
  undefined4 uVar4;
  void *pvVar5;
  vec_t *pvVar6;
  vec_t *pvVar7;
  longdouble lVar8;
  int local_40;
  vec_t local_3c;
  vec_t local_38;
  vec_t local_34;
  float local_2c;
  float local_28;
  float local_24;
  
  if ((g_Language != 1) && (0 < param_3)) {
    local_40 = param_3;
    do {
      this = GetClassPtr<CGib>(0);
      Spawn(this,"models/stickygib.mdl");
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,2);
      this->pev->body = iVar2;
      if (param_1 != 0) {
        lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-3.0,3.0);
        this->pev->origin[0] = (float)(lVar8 + (longdouble)*param_2);
        lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-3.0,3.0);
        this->pev->origin[1] = (float)(lVar8 + (longdouble)param_2[1]);
        lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-3.0,3.0);
        this->pev->origin[2] = (float)(lVar8 + (longdouble)param_2[2]);
        local_2c = g_vecAttackDir * -1.0;
        local_28 = DAT_00190ee4 * -1.0;
        local_24 = DAT_00190ee8 * -1.0;
        pvVar6 = &local_2c;
        pvVar7 = this->pev->velocity;
        for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pvVar7 = *pvVar6;
          pvVar6 = pvVar6 + 1;
          pvVar7 = pvVar7 + 1;
        }
        lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-0.15,0.15);
        this->pev->velocity[0] = (float)(lVar8 + (longdouble)this->pev->velocity[0]);
        lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-0.15,0.15);
        this->pev->velocity[1] = (float)(lVar8 + (longdouble)this->pev->velocity[1]);
        lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-0.15,0.15);
        this->pev->velocity[2] = (float)(lVar8 + (longdouble)this->pev->velocity[2]);
        peVar1 = this->pev;
        local_2c = peVar1->velocity[0] * 900.0;
        local_28 = peVar1->velocity[1] * 900.0;
        local_24 = peVar1->velocity[2] * 900.0;
        pvVar6 = &local_2c;
        pvVar7 = peVar1->velocity;
        for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pvVar7 = *pvVar6;
          pvVar6 = pvVar6 + 1;
          pvVar7 = pvVar7 + 1;
        }
        lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(250.0,400.0);
        this->pev->avelocity[0] = (float)lVar8;
        lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(250.0,400.0);
        this->pev->avelocity[1] = (float)lVar8;
        peVar3 = *(edict_t **)(param_1 + 0x208);
        if (peVar3 == (edict_t *)0x0) {
          peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        }
        pvVar5 = (void *)0x0;
        if (peVar3 != (edict_t *)0x0) {
          pvVar5 = peVar3->pvPrivateData;
        }
        uVar4 = (**(code **)(*(int *)((int)pvVar5 + 0x60) + 100))(pvVar5);
        *(undefined4 *)&this->field_0x64 = uVar4;
        if (*(float *)(param_1 + 0x160) <= -50.0) {
          if (*(float *)(param_1 + 0x160) <= -200.0) {
            pvVar6 = this->pev->velocity;
          }
          else {
            pvVar6 = this->pev->velocity;
          }
        }
        else {
          pvVar6 = this->pev->velocity;
        }
        pvVar7 = &local_2c;
        for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pvVar6 = *pvVar7;
          pvVar7 = pvVar7 + 1;
          pvVar6 = pvVar6 + 1;
        }
        this->pev->movetype = 6;
        this->pev->solid = 2;
        local_3c = 0.0;
        local_38 = local_3c;
        local_34 = local_3c;
        local_2c = local_3c;
        local_28 = local_3c;
        local_24 = local_3c;
        UTIL_SetSize((int)this->pev,&local_3c,&local_2c);
        *(undefined4 *)&this->field_0x14 = 0xffff0000;
        *(code **)&this->field_0x18 = StickyGibTouch;
        *(undefined4 *)&this->field_0xc = 0;
        *(undefined4 *)&this->field_0x10 = 0;
      }
      LimitVelocity(this);
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  return;
}

/* 000b0ce8  CGib::SpawnHeadGib  (884 bytes)
 * undefined SpawnHeadGib(int param_1)
 */
/* CGib::SpawnHeadGib(entvars_s *) */

void CGib::SpawnHeadGib(int param_1)

{
  float fVar1;
  CGib *this;
  char *pcVar2;
  edict_t *peVar3;
  undefined4 uVar4;
  entvars_t *peVar5;
  int iVar6;
  void *pvVar7;
  vec_t *pvVar8;
  vec_t *pvVar9;
  longdouble lVar10;
  longdouble lVar11;
  longdouble lVar12;
  float local_5c [4];
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c [7];
  
  this = GetClassPtr<CGib>(0);
  if (g_Language == 1) {
    pcVar2 = "models/germangibs.mdl";
  }
  else {
    pcVar2 = "models/hgibs.mdl";
  }
  Spawn(this,pcVar2);
  this->pev->body = 0;
  if (param_1 != 0) {
    local_2c[0] = *(float *)(param_1 + 8) + *(float *)(param_1 + 0x174);
    local_2c[1] = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x178);
    local_2c[2] = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x17c);
    pvVar8 = local_2c;
    pvVar9 = this->pev->origin;
    for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pvVar9 = *pvVar8;
      pvVar8 = pvVar8 + 1;
      pvVar9 = pvVar9 + 1;
    }
    peVar3 = (*g_engfuncs.pfnFindClientInPVS)(this->pev->pContainingEntity);
    iVar6 = (*g_engfuncs.pfnRandomLong)(0,100);
    if ((iVar6 < 6) && (peVar3 != (edict_t *)0x0)) {
      local_5c[0] = (peVar3->v).origin[0] + (peVar3->v).view_ofs[0];
      local_5c[1] = (peVar3->v).origin[1] + (peVar3->v).view_ofs[1];
      local_5c[2] = (peVar3->v).origin[2] + (peVar3->v).view_ofs[2];
      peVar5 = this->pev;
      local_4c = local_5c[0] - peVar5->origin[0];
      local_48 = local_5c[1] - peVar5->origin[1];
      local_44 = local_5c[2] - peVar5->origin[2];
      fVar1 = SQRT(local_44 * local_44 + local_48 * local_48 + local_4c * local_4c);
      if (fVar1 == 0.0) {
        local_3c = 0.0;
        local_38 = 0.0;
        local_34 = 1.0;
      }
      else {
        fVar1 = 1.0 / fVar1;
        local_3c = fVar1 * local_4c;
        local_38 = fVar1 * local_48;
        local_34 = fVar1 * local_44;
      }
      local_2c[0] = local_3c * 300.0;
      local_2c[1] = local_38 * 300.0;
      local_2c[2] = local_34 * 300.0;
      pvVar8 = local_2c;
      pvVar9 = this->pev->velocity;
      for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pvVar9 = *pvVar8;
        pvVar8 = pvVar8 + 1;
        pvVar9 = pvVar9 + 1;
      }
      this->pev->velocity[2] = this->pev->velocity[2] + 100.0;
    }
    else {
      peVar5 = this->pev;
      lVar12 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-100.0,100.0);
      lVar10 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-100.0,100.0);
      lVar11 = (longdouble)(*g_engfuncs.pfnRandomFloat)(200.0,300.0);
      local_5c[2] = (float)lVar11;
      pvVar8 = local_5c;
      pvVar9 = peVar5->velocity;
      for (iVar6 = 3; local_5c[0] = (float)lVar12, local_5c[1] = (float)lVar10, iVar6 != 0;
          iVar6 = iVar6 + -1) {
        *pvVar9 = *pvVar8;
        pvVar8 = pvVar8 + 1;
        pvVar9 = pvVar9 + 1;
      }
    }
    lVar12 = (longdouble)(*g_engfuncs.pfnRandomFloat)(100.0,200.0);
    this->pev->avelocity[0] = (float)lVar12;
    lVar12 = (longdouble)(*g_engfuncs.pfnRandomFloat)(100.0,300.0);
    this->pev->avelocity[1] = (float)lVar12;
    peVar3 = *(edict_t **)(param_1 + 0x208);
    if (peVar3 == (edict_t *)0x0) {
      peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    pvVar7 = (void *)0x0;
    if (peVar3 != (edict_t *)0x0) {
      pvVar7 = peVar3->pvPrivateData;
    }
    uVar4 = (**(code **)(*(int *)((int)pvVar7 + 0x60) + 100))(pvVar7);
    *(undefined4 *)&this->field_0x64 = uVar4;
    if (*(float *)(param_1 + 0x160) <= -50.0) {
      if (*(float *)(param_1 + 0x160) <= -200.0) {
        peVar5 = this->pev;
        pvVar8 = peVar5->velocity;
        fVar1 = 4.0;
      }
      else {
        peVar5 = this->pev;
        pvVar8 = peVar5->velocity;
        fVar1 = 2.0;
      }
    }
    else {
      peVar5 = this->pev;
      pvVar8 = peVar5->velocity;
      fVar1 = 0.7;
    }
    local_5c[0] = fVar1 * peVar5->velocity[0];
    local_5c[1] = fVar1 * pvVar8[1];
    local_5c[2] = fVar1 * pvVar8[2];
    pvVar9 = local_5c;
    for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pvVar8 = *pvVar9;
      pvVar9 = pvVar9 + 1;
      pvVar8 = pvVar8 + 1;
    }
  }
  LimitVelocity(this);
  return;
}

/* 000b1060  CGib::SpawnRandomGibs  (888 bytes)
 * undefined SpawnRandomGibs(int param_1, int param_2, int param_3)
 */
/* CGib::SpawnRandomGibs(entvars_s *, int, int) */

void CGib::SpawnRandomGibs(int param_1,int param_2,int param_3)

{
  entvars_t *peVar1;
  CGib *this;
  char *pcVar2;
  edict_t *peVar3;
  undefined4 uVar4;
  void *pvVar5;
  vec_t *pvVar6;
  vec_t *pvVar7;
  longdouble lVar8;
  int iVar9;
  int lHigh;
  int local_40;
  vec_t local_3c;
  vec_t local_38;
  vec_t local_34;
  float local_2c;
  float local_28;
  float local_24;
  
  if (0 < param_2) {
    local_40 = param_2;
    do {
      this = GetClassPtr<CGib>(0);
      if (g_Language == 1) {
        pcVar2 = "models/germangibs.mdl";
LAB_000b10e5:
        Spawn(this,pcVar2);
        lHigh = 3;
        iVar9 = 0;
      }
      else {
        if (param_3 == 0) {
          pcVar2 = "models/agibs.mdl";
          goto LAB_000b10e5;
        }
        Spawn(this,"models/hgibs.mdl");
        lHigh = 5;
        iVar9 = 1;
      }
      iVar9 = (*g_engfuncs.pfnRandomLong)(iVar9,lHigh);
      this->pev->body = iVar9;
      if (param_1 != 0) {
        lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.0,1.0);
        this->pev->origin[0] =
             (float)(lVar8 * (longdouble)*(float *)(param_1 + 0xf4) +
                    (longdouble)*(float *)(param_1 + 0xc4));
        lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.0,1.0);
        this->pev->origin[1] =
             (float)(lVar8 * (longdouble)*(float *)(param_1 + 0xf8) +
                    (longdouble)*(float *)(param_1 + 200));
        lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.0,1.0);
        this->pev->origin[2] =
             (float)(lVar8 * (longdouble)*(float *)(param_1 + 0xfc) +
                     (longdouble)*(float *)(param_1 + 0xcc) + (longdouble)1.0);
        local_2c = g_vecAttackDir * -1.0;
        local_28 = DAT_00190ee4 * -1.0;
        local_24 = DAT_00190ee8 * -1.0;
        pvVar6 = &local_2c;
        pvVar7 = this->pev->velocity;
        for (iVar9 = 3; iVar9 != 0; iVar9 = iVar9 + -1) {
          *pvVar7 = *pvVar6;
          pvVar6 = pvVar6 + 1;
          pvVar7 = pvVar7 + 1;
        }
        lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-0.25,0.25);
        this->pev->velocity[0] = (float)(lVar8 + (longdouble)this->pev->velocity[0]);
        lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-0.25,0.25);
        this->pev->velocity[1] = (float)(lVar8 + (longdouble)this->pev->velocity[1]);
        lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-0.25,0.25);
        this->pev->velocity[2] = (float)(lVar8 + (longdouble)this->pev->velocity[2]);
        peVar1 = this->pev;
        lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(300.0,400.0);
        local_2c = (float)(lVar8 * (longdouble)peVar1->velocity[0]);
        local_28 = (float)(lVar8 * (longdouble)peVar1->velocity[1]);
        local_24 = (float)(lVar8 * (longdouble)peVar1->velocity[2]);
        pvVar6 = &local_2c;
        pvVar7 = peVar1->velocity;
        for (iVar9 = 3; iVar9 != 0; iVar9 = iVar9 + -1) {
          *pvVar7 = *pvVar6;
          pvVar6 = pvVar6 + 1;
          pvVar7 = pvVar7 + 1;
        }
        lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(100.0,200.0);
        this->pev->avelocity[0] = (float)lVar8;
        lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(100.0,300.0);
        this->pev->avelocity[1] = (float)lVar8;
        peVar3 = *(edict_t **)(param_1 + 0x208);
        if (peVar3 == (edict_t *)0x0) {
          peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        }
        pvVar5 = (void *)0x0;
        if (peVar3 != (edict_t *)0x0) {
          pvVar5 = peVar3->pvPrivateData;
        }
        uVar4 = (**(code **)(*(int *)((int)pvVar5 + 0x60) + 100))(pvVar5);
        *(undefined4 *)&this->field_0x64 = uVar4;
        if (*(float *)(param_1 + 0x160) <= -50.0) {
          if (*(float *)(param_1 + 0x160) <= -200.0) {
            pvVar6 = this->pev->velocity;
          }
          else {
            pvVar6 = this->pev->velocity;
          }
        }
        else {
          pvVar6 = this->pev->velocity;
        }
        pvVar7 = &local_2c;
        for (iVar9 = 3; iVar9 != 0; iVar9 = iVar9 + -1) {
          *pvVar6 = *pvVar7;
          pvVar7 = pvVar7 + 1;
          pvVar6 = pvVar6 + 1;
        }
        this->pev->solid = 2;
        local_3c = 0.0;
        local_38 = local_3c;
        local_34 = local_3c;
        local_2c = local_3c;
        local_28 = local_3c;
        local_24 = local_3c;
        UTIL_SetSize((int)this->pev,&local_3c,&local_2c);
      }
      LimitVelocity(this);
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  return;
}

/* 000b1dd4  CGib::WaitTillLand  (229 bytes)
 * undefined WaitTillLand(void)
 */
/* CGib::WaitTillLand(void) */

void __thiscall CGib::WaitTillLand(CGib *this)

{
  entvars_t *peVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (*this->vtable[0x31])(this);
  if (iVar3 == 0) {
    UTIL_Remove((int *)this);
  }
  else {
    peVar1 = this->pev;
    bVar2 = false;
    if (((peVar1->velocity[0] == g_vecZero) && (peVar1->velocity[1] == DAT_00190ef0)) &&
       (peVar1->velocity[2] == DAT_00190ef4)) {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined4 *)&this->field_0xc = 0xffff0000;
      *(code **)&this->field_0x10 = CBaseEntity::SUB_StartFadeOut;
      this->pev->nextthink = gpGlobals->time + *(float *)&this->field_0x70;
      if (*(int *)&this->field_0x64 != -1) {
        CSoundEnt::InsertSound(0x10,this->pev->origin,0x180,25.0);
      }
    }
    else {
      this->pev->nextthink = gpGlobals->time + 0.5;
    }
  }
  return;
}

/* 000b1ebc  CGib::BounceGibTouch  (502 bytes)
 * undefined BounceGibTouch(int * param_1)
 */
/* CGib::BounceGibTouch(CBaseEntity *) */

void CGib::BounceGibTouch(int *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  longdouble lVar5;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c [4];
  undefined1 local_6c [64];
  float local_2c [7];
  
  iVar2 = *param_1;
  if ((*(byte *)(iVar2 + 0x1a5) & 2) == 0) {
    if (((g_Language != 1) && (0 < param_1[0x1a])) && (param_1[0x19] != -1)) {
      iVar2 = *param_1;
      local_7c[0] = *(float *)(iVar2 + 8) + 0.0;
      local_7c[1] = *(float *)(iVar2 + 0xc) + 0.0;
      local_7c[2] = *(float *)(iVar2 + 0x10) + 8.0;
      pfVar3 = local_7c;
      pfVar4 = local_2c;
      for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar4 = pfVar4 + 1;
      }
      local_7c[2] = -24.0;
      local_8c = local_2c[0] + 0.0;
      local_88 = local_2c[1] + 0.0;
      local_84 = local_2c[2] + -24.0;
      local_7c[0] = 0.0;
      local_7c[1] = 0.0;
      UTIL_TraceLine(local_2c,&local_8c,1,*(undefined4 *)(*param_1 + 0x208),local_6c);
      UTIL_BloodDecalTrace((int)local_6c,param_1[0x19]);
      param_1[0x1a] = param_1[0x1a] + -1;
    }
    if ((param_1[0x1b] != 9) && (iVar2 = (*g_engfuncs.pfnRandomLong)(0,2), iVar2 == 0)) {
      lVar5 = (longdouble)0.0022222222222222222 * (longdouble)ABS(*(float *)(*param_1 + 0x28));
      if ((longdouble)1.0 < lVar5) {
        lVar5 = (longdouble)1.0;
      }
      CBreakable::MaterialSoundRandom
                (*(int *)(*param_1 + 0x208),param_1[0x1b],(float)(lVar5 * (longdouble)0.8));
    }
  }
  else {
    local_7c[0] = *(float *)(iVar2 + 0x20) * 0.9;
    local_7c[1] = *(float *)(iVar2 + 0x24) * 0.9;
    local_7c[2] = *(float *)(iVar2 + 0x28) * 0.9;
    pfVar3 = local_7c;
    pfVar4 = (float *)(iVar2 + 0x20);
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar4 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar4 = pfVar4 + 1;
    }
    *(undefined4 *)(*param_1 + 0x50) = 0;
    *(undefined4 *)(*param_1 + 0x58) = 0;
    *(undefined4 *)(*param_1 + 0x5c) = 0;
    *(undefined4 *)(*param_1 + 100) = 0;
  }
  return;
}

/* 000b20b4  CGib::StickyGibTouch  (509 bytes)
 * undefined StickyGibTouch(undefined4 * param_1)
 */
/* CGib::StickyGibTouch(CBaseEntity *) */

void __thiscall CGib::StickyGibTouch(CGib *this,undefined4 *param_1)

{
  entvars_t *peVar1;
  globalvars_t *pgVar2;
  int iVar3;
  float *pfVar4;
  vec_t *pvVar5;
  float *pfVar6;
  vec_t *pvVar7;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c [4];
  undefined1 local_6c [36];
  float local_48;
  float local_44;
  float local_40;
  
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
  this->pev->nextthink = gpGlobals->time + 10.0;
  pgVar2 = gpGlobals;
  iVar3 = strcmp(gpGlobals->pStringBase + *(int *)*param_1,"worldspawn");
  if (iVar3 == 0) {
    peVar1 = this->pev;
    local_8c = peVar1->velocity[0] * 32.0;
    local_88 = peVar1->velocity[1] * 32.0;
    local_84 = peVar1->velocity[2] * 32.0;
    local_7c[0] = peVar1->origin[0] + local_8c;
    local_7c[1] = peVar1->origin[1] + local_88;
    local_7c[2] = peVar1->origin[2] + local_84;
    UTIL_TraceLine(this->pev->origin,local_7c,1,peVar1->pContainingEntity,local_6c);
    UTIL_BloodDecalTrace((int)local_6c,*(int *)&this->field_0x64);
    local_8c = local_48 * -1.0;
    local_88 = local_44 * -1.0;
    local_84 = local_40 * -1.0;
    pfVar4 = &local_8c;
    pvVar5 = this->pev->velocity;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pvVar5 = pvVar5 + 1;
    }
    UTIL_VecToAngles(&local_8c,this->pev->velocity);
    peVar1 = this->pev;
    pfVar4 = &local_8c;
    pfVar6 = local_7c;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar6 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar6 = pfVar6 + 1;
    }
    pfVar4 = local_7c;
    pvVar5 = peVar1->angles;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pvVar5 = pvVar5 + 1;
    }
    pvVar5 = (vec_t *)&g_vecZero;
    pvVar7 = this->pev->velocity;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar7 = *pvVar5;
      pvVar5 = pvVar5 + 1;
      pvVar7 = pvVar7 + 1;
    }
    pvVar5 = (vec_t *)&g_vecZero;
    pvVar7 = this->pev->avelocity;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar7 = *pvVar5;
      pvVar5 = pvVar5 + 1;
      pvVar7 = pvVar7 + 1;
    }
    this->pev->movetype = 0;
  }
  else {
    this->pev->nextthink = pgVar2->time;
  }
  return;
}

/* 000b22b4  CGib::Spawn  (283 bytes)
 * undefined Spawn(undefined4 param_1)
 */
/* CGib::Spawn(char const *) */

void __thiscall CGib::Spawn(CGib *this,char *param_1)

{
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  this->pev->movetype = 10;
  this->pev->friction = 0.55;
  this->pev->renderamt = 255.0;
  this->pev->rendermode = 0;
  this->pev->renderfx = 0;
  this->pev->solid = 3;
  this->pev->classname = (int)&DAT_0010bf0b - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,param_1);
  local_3c = 0;
  local_38 = local_3c;
  local_34 = local_3c;
  local_2c = local_3c;
  local_28 = local_3c;
  local_24 = local_3c;
  UTIL_SetSize((int)this->pev,&local_3c,&local_2c);
  this->pev->nextthink = gpGlobals->time + 4.0;
  *(undefined4 *)&this->field_0x70 = 0x41c80000;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = WaitTillLand;
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = BounceGibTouch;
  *(undefined4 *)&this->field_0x6c = 9;
  *(undefined4 *)&this->field_0x68 = 5;
  return;
}

/* 000b4ea8  CGib::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CGib::ObjectCaps(void) */

undefined4 CGib::ObjectCaps(void)

{
  return 0x80000000;
}

