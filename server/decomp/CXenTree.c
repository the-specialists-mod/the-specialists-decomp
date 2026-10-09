/* ts_i386.so - CXenTree (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f5a10  CXenTree::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CXenTree::Save(CSave &) */

undefined4 __thiscall CXenTree::Save(CXenTree *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CActAnimating::Save((CActAnimating *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CXenTree",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 000f5a60  CXenTree::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CXenTree::Restore(CRestore &) */

undefined4 __thiscall CXenTree::Restore(CXenTree *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CActAnimating::Restore((CActAnimating *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CXenTree",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 000f5ab0  CXenTree::Spawn  (558 bytes)
 * undefined Spawn(void)
 */
/* CXenTree::Spawn(void) */

void __thiscall CXenTree::Spawn(CXenTree *this)

{
  entvars_t *peVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  longdouble lVar6;
  float local_5c;
  float local_58;
  float local_54;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c [7];
  
  (*this->vtable[10])(this);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/tree.mdl");
  this->pev->movetype = 0;
  this->pev->solid = 2;
  this->pev->takedamage = 1.0;
  local_2c[0] = 30.0;
  local_2c[2] = 188.0;
  local_3c = -30.0;
  local_34 = 0.0;
  local_38 = local_3c;
  local_2c[1] = local_2c[0];
  UTIL_SetSize((int)this->pev,&local_3c,local_2c);
  CActAnimating::SetActivity((CActAnimating *)this,1);
  this->pev->nextthink = gpGlobals->time + 0.1;
  lVar6 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.0,255.0);
  this->pev->frame = (float)lVar6;
  lVar6 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.7,1.4);
  this->pev->framerate = (float)lVar6;
  (*g_engfuncs.pfnAngleVectors)(this->pev->angles,&local_3c,(float *)0x0,(float *)0x0);
  peVar1 = this->pev;
  local_5c = local_3c * 64.0;
  local_58 = local_38 * 64.0;
  local_54 = local_34 * 64.0;
  local_2c[0] = peVar1->origin[0] + local_5c;
  local_2c[1] = peVar1->origin[1] + local_58;
  local_2c[2] = peVar1->origin[2] + local_54;
  pfVar4 = local_2c;
  pfVar5 = &local_3c;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  uVar2 = CXenTreeTrigger::TriggerCreate(this->pev->pContainingEntity,&local_3c);
  *(undefined4 *)&this->field_0x84 = uVar2;
  local_2c[0] = 24.0;
  local_2c[2] = 128.0;
  local_5c = -24.0;
  local_54 = 0.0;
  local_58 = local_5c;
  local_2c[1] = local_2c[0];
  UTIL_SetSize(**(int **)&this->field_0x84,&local_5c,local_2c);
  return;
}

/* 000f5ce0  CXenTree::Precache  (118 bytes)
 * undefined Precache(void)
 */
/* CXenTree::Precache(void) */

void CXenTree::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)("models/tree.mdl");
  (*g_engfuncs.pfnPrecacheModel)("sprites/flare3.spr");
  (*g_engfuncs.pfnPrecacheSound)(pAttackHitSounds);
  (*g_engfuncs.pfnPrecacheSound)(PTR_s_zombie_claw_strike2_wav_00124174);
  (*g_engfuncs.pfnPrecacheSound)(PTR_s_zombie_claw_strike3_wav_00124178);
  (*g_engfuncs.pfnPrecacheSound)(pAttackMissSounds);
  (*g_engfuncs.pfnPrecacheSound)(PTR_s_zombie_claw_miss2_wav_00124180);
  return;
}

/* 000f5d58  CXenTree::Touch  (103 bytes)
 * undefined Touch(undefined4 * param_1)
 */
/* CXenTree::Touch(CBaseEntity *) */

void __thiscall CXenTree::Touch(CXenTree *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1[0x18] + 200))(param_1);
  if ((iVar1 == 0) &&
     (iVar1 = strcmp(gpGlobals->pStringBase + *(int *)*param_1,"monster_bigmomma"), iVar1 == 0)) {
    return;
  }
  Attack(this);
  return;
}

/* 000f5dc0  CXenTree::Attack  (165 bytes)
 * undefined Attack(void)
 */
/* CXenTree::Attack(void) */

void __thiscall CXenTree::Attack(CXenTree *this)

{
  edict_t *peVar1;
  int iVar2;
  int iVar3;
  longdouble lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  if (*(int *)&this->field_0x80 == 1) {
    CActAnimating::SetActivity((CActAnimating *)this,0x1e);
    lVar4 = (longdouble)(*g_engfuncs.pfnRandomFloat)(1.0,1.4);
    this->pev->framerate = (float)lVar4;
    peVar1 = this->pev->pContainingEntity;
    fVar8 = 0.5;
    iVar2 = (*g_engfuncs.pfnRandomLong)(0x5f,0x69);
    uVar7 = 0;
    uVar6 = 0x3f4ccccd;
    uVar5 = 0x3f800000;
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    EMIT_SOUND_DYN((int)peVar1,1,(&pAttackMissSounds)[iVar3],uVar5,uVar6,uVar7,iVar2,fVar8);
  }
  return;
}

/* 000f5e68  CXenTree::HandleAnimEvent  (957 bytes)
 * undefined HandleAnimEvent(int * param_1)
 */
/* CXenTree::HandleAnimEvent(MonsterEvent_t *) */

void __thiscall CXenTree::HandleAnimEvent(CXenTree *this,int *param_1)

{
  entvars_t *peVar1;
  int *piVar2;
  edict_t *peVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  float *pfVar9;
  vec_t *pvVar10;
  float *pfVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 *local_88;
  undefined1 *local_84;
  undefined1 *local_80;
  int local_78;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  CXenTree *local_3c [8];
  undefined1 auStack_1c [12];
  
  if (*param_1 != 1) {
    return;
  }
  bVar4 = false;
  uVar5 = UTIL_EntitiesInBox((int)local_3c,8,(float *)(**(int **)&this->field_0x84 + 0xc4),
                             (float *)(**(int **)&this->field_0x84 + 0xd0),0x28);
  (*g_engfuncs.pfnAngleVectors)(this->pev->angles,&local_4c,(float *)0x0,(float *)0x0);
  local_78 = 0;
  if (0 < (int)uVar5) {
    iVar7 = 0;
    if (((int)uVar5 < 1) || ((uVar5 & 1) != 0)) {
      if ((local_3c[0] != this) && (local_3c[0]->pev->owner != this->pev->pContainingEntity)) {
        bVar4 = true;
        (*local_3c[0]->vtable[0x16])(local_3c[0],this->pev,this->pev,0x41c80000,5);
        local_3c[0]->pev->punchangle[0] = 15.0;
        peVar1 = local_3c[0]->pev;
        local_5c = peVar1->velocity[0] + local_4c * 100.0;
        local_58 = peVar1->velocity[1] + local_48 * 100.0;
        local_54 = peVar1->velocity[2] + local_44 * 100.0;
        pfVar9 = &local_5c;
        pvVar10 = peVar1->velocity;
        for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pvVar10 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          pvVar10 = pvVar10 + 1;
        }
      }
      iVar7 = 4;
      local_78 = 1;
      if ((int)uVar5 < 2) goto LAB_000f61bb;
    }
    puVar8 = auStack_1c + iVar7;
    local_88 = puVar8;
    local_84 = puVar8;
    local_80 = puVar8;
    do {
      if ((*(CXenTree **)(local_88 + -0x20) != this) &&
         (piVar2 = *(int **)(local_84 + -0x20),
         *(edict_t **)(*piVar2 + 0x198) != this->pev->pContainingEntity)) {
        bVar4 = true;
        (**(code **)(piVar2[0x18] + 0x58))(piVar2,this->pev,this->pev,0x41c80000,5);
        *(undefined4 *)(**(int **)(puVar8 + -0x20) + 0x68) = 0x41700000;
        iVar7 = **(int **)(local_80 + -0x20);
        local_5c = *(float *)(iVar7 + 0x20) + local_4c * 100.0;
        local_58 = *(float *)(iVar7 + 0x24) + local_48 * 100.0;
        local_54 = *(float *)(iVar7 + 0x28) + local_44 * 100.0;
        pfVar9 = &local_5c;
        pfVar11 = (float *)(iVar7 + 0x20);
        for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar11 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          pfVar11 = pfVar11 + 1;
        }
      }
      if ((*(CXenTree **)(local_88 + -0x1c) != this) &&
         (piVar2 = *(int **)(local_84 + -0x1c),
         *(edict_t **)(*piVar2 + 0x198) != this->pev->pContainingEntity)) {
        bVar4 = true;
        (**(code **)(piVar2[0x18] + 0x58))(piVar2,this->pev,this->pev,0x41c80000,5);
        *(undefined4 *)(**(int **)(puVar8 + -0x1c) + 0x68) = 0x41700000;
        iVar7 = **(int **)(local_80 + -0x1c);
        local_5c = *(float *)(iVar7 + 0x20) + local_4c * 100.0;
        local_58 = *(float *)(iVar7 + 0x24) + local_48 * 100.0;
        local_54 = *(float *)(iVar7 + 0x28) + local_44 * 100.0;
        pfVar9 = &local_5c;
        pfVar11 = (float *)(iVar7 + 0x20);
        for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar11 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          pfVar11 = pfVar11 + 1;
        }
      }
      local_80 = local_80 + 8;
      puVar8 = puVar8 + 8;
      local_84 = local_84 + 8;
      local_88 = local_88 + 8;
      local_78 = local_78 + 2;
    } while (local_78 < (int)uVar5);
  }
LAB_000f61bb:
  if (bVar4) {
    peVar3 = this->pev->pContainingEntity;
    fVar15 = 0.5;
    iVar7 = (*g_engfuncs.pfnRandomLong)(0x5f,0x69);
    uVar14 = 0;
    uVar13 = 0x3f4ccccd;
    uVar12 = 0x3f800000;
    iVar6 = (*g_engfuncs.pfnRandomLong)(0,2);
    EMIT_SOUND_DYN((int)peVar3,1,(&pAttackHitSounds)[iVar6],uVar12,uVar13,uVar14,iVar7,fVar15);
  }
  return;
}

/* 000f6228  CXenTree::Think  (146 bytes)
 * undefined Think(void)
 */
/* CXenTree::Think(void) */

void __thiscall CXenTree::Think(CXenTree *this)

{
  longdouble lVar1;
  
  CBaseAnimating::StudioFrameAdvance((CBaseAnimating *)this,0.0);
  this->pev->nextthink = gpGlobals->time + 0.1;
  CBaseAnimating::DispatchAnimEvents((int *)this);
  if (((*(int *)&this->field_0x80 != 1) && (*(int *)&this->field_0x80 == 0x1e)) &&
     (*(int *)&this->field_0x78 != 0)) {
    CActAnimating::SetActivity((CActAnimating *)this,1);
    lVar1 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.6,1.4);
    this->pev->framerate = (float)lVar1;
  }
  return;
}

/* 000f7108  CXenTree::TakeDamage  (38 bytes)
 * undefined4 TakeDamage(CXenTree * param_1)
 */
/* CXenTree::TakeDamage(entvars_s *, entvars_s *, float, int) */

undefined4 CXenTree::TakeDamage(CXenTree *param_1)

{
  Attack(param_1);
  return 0;
}

/* 000f7130  CXenTree::Classify  (6 bytes)
 * undefined4 Classify(void)
 */
/* CXenTree::Classify(void) */

undefined4 CXenTree::Classify(void)

{
  return 99;
}

