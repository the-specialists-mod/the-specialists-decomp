/* ts_i386.so - CBreakable (23 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00074e84  CBreakable::BreakableRespawn  (607 bytes)
 * undefined BreakableRespawn(char param_1)
 */
/* CBreakable::BreakableRespawn(bool) */

void __thiscall CBreakable::BreakableRespawn(CBreakable *this,char param_1)

{
  undefined1 *this_00;
  entvars_t *peVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int *piVar4;
  CBaseDelay *pCVar5;
  undefined1 local_40 [4];
  vec_t local_3c;
  vec_t local_38;
  vec_t local_34;
  vec_t local_2c;
  vec_t local_28;
  vec_t local_24;
  
  if (((this->pev->deadflag == 2) || (this->pev->effects == 0x80)) || (param_1 != '\0')) {
    if (0.0 <= *(float *)&this->field_0x90) {
      peVar1 = this->pev;
      local_2c = peVar1->absmin[0];
      local_28 = peVar1->absmin[1];
      local_24 = peVar1->absmin[2];
      peVar1 = this->pev;
      local_3c = peVar1->absmax[0];
      local_38 = peVar1->absmax[1];
      local_34 = peVar1->absmax[2];
      iVar3 = UTIL_EntitiesInBox((int)local_40,1,&local_2c,&local_3c,0x2008);
      if (iVar3 == 0) {
        if ((this->pev->spawnflags & 8) != 0) {
          iVar3 = strcmp(&this->field_0x94,"");
          if (iVar3 == 0) {
            CBaseDelay::SUB_UseTargets((CBaseDelay *)this,(int *)0x0,3,0);
          }
          else if (*(float *)&this->field_0x64 == 0.0) {
            FireTargets((int)&this->field_0x94,0,this,3,0);
          }
          else {
            pCVar5 = GetClassPtr<CBaseDelay>(0);
            pCVar5->pev->classname = (int)"DelayedUse" - (int)gpGlobals->pStringBase;
            pCVar5->pev->nextthink = gpGlobals->time + *(float *)&this->field_0x64;
            *(undefined4 *)&pCVar5->field_0xc = 0xffff0000;
            *(code **)&pCVar5->field_0x10 = CBaseDelay::DelayThink;
            pCVar5->pev->button = 3;
            *(undefined4 *)&pCVar5->field_0x68 = *(undefined4 *)&this->field_0x68;
            *(undefined4 *)&pCVar5->field_0x64 = 0;
            pCVar5->pev->target = (int)this + (0x94 - (int)gpGlobals->pStringBase);
            pCVar5->pev->owner = (edict_t *)0x0;
          }
        }
        this->pev->deadflag = 0;
        this->pev->health = *(float *)&this->field_0x6c;
        this->pev->effects = 0;
        *(undefined4 *)&this->field_0xc = 0;
        *(undefined4 *)&this->field_0x10 = 0;
        (*this->vtable[9])(this);
      }
      else {
        this_00 = &this->field_0x70;
        bVar2 = int((EHANDLE *)this_00);
        if (CONCAT31(extraout_var,bVar2) != 0) {
          piVar4 = (int *)EHANDLE::operator->((EHANDLE *)this_00);
          *(float *)(*piVar4 + 0x104) = gpGlobals->time + 5.0;
          iVar3 = EHANDLE::operator->((EHANDLE *)this_00);
          *(undefined4 *)(iVar3 + 0xc) = 0xffff0000;
          *(code **)(iVar3 + 0x10) = CInfoBreakable::RespawnThink;
        }
      }
    }
    else {
      CBaseEntity::SUB_Remove((CBaseEntity *)this);
    }
  }
  return;
}

/* 000750ec  CBreakable::Spawn  (441 bytes)
 * undefined Spawn(void)
 */
/* CBreakable::Spawn(void) */

void __thiscall CBreakable::Spawn(CBreakable *this)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar2;
  undefined3 extraout_var_01;
  uint uVar3;
  int iVar4;
  vec_t *pvVar5;
  edict_t *peVar6;
  float local_2c [7];
  
  (*this->vtable[10])(this);
  *(float *)&this->field_0x6c = this->pev->health;
  this->pev->fuser1 = 1.0;
  if ((this->pev->spawnflags & 1) == 0) {
    this->pev->takedamage = 1.0;
  }
  else {
    this->pev->takedamage = 0.0;
  }
  this->pev->solid = 4;
  this->pev->movetype = 7;
  *(vec_t *)&this->field_0x84 = this->pev->angles[1];
  this->pev->angles[1] = 0.0;
  if (*(int *)&this->field_0x78 == 0) {
    this->pev->playerclass = 1;
  }
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = BreakTouch;
  if ((this->pev->spawnflags & 1) != 0) {
    *(undefined4 *)&this->field_0x14 = 0;
    *(undefined4 *)&this->field_0x18 = 0;
  }
  bVar1 = IsBreakable(this);
  if ((CONCAT31(extraout_var,bVar1) == 0) && (this->pev->rendermode != 0)) {
    piVar2 = &this->pev->flags;
    *piVar2 = *piVar2 | 0x2000000;
  }
  if (0.0 <= *(float *)&this->field_0x90) {
    bVar1 = int((EHANDLE *)&this->field_0x70);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      peVar6 = this->pev->pContainingEntity;
      pvVar5 = this->pev->angles;
      VecBModelOrigin(local_2c,(int)this->pev);
      piVar2 = CBaseEntity::Create((int)g_szInfoBreakable,local_2c,pvVar5,peVar6);
      EHANDLE::operator=((EHANDLE *)&this->field_0x70,piVar2);
    }
    bVar1 = int((EHANDLE *)&this->field_0x70);
    if (CONCAT31(extraout_var_01,bVar1) != 0) {
      uVar3 = EHANDLE::Get((EHANDLE *)&this->field_0x70);
      iVar4 = 0;
      if (uVar3 != 0) {
        iVar4 = *(int *)(uVar3 + 0x7c);
      }
      EHANDLE::operator=((EHANDLE *)(iVar4 + 100),(int *)this);
    }
  }
  return;
}

/* 000752a8  CBreakable::Killed  (54 bytes)
 * undefined Killed(CBreakable * param_1, undefined4 param_2)
 */
/* CBreakable::Killed(entvars_s *, int) */

void CBreakable::Killed(CBreakable *param_1,undefined4 param_2)

{
  BreakableLastpevAttacker = param_2;
  Die(param_1);
  BreakableLastpevAttacker = 0;
  return;
}

/* 000752e0  CBreakable::Die  (2643 bytes)
 * undefined Die(void)
 */
/* CBreakable::Die(void) */

void __thiscall CBreakable::Die(CBreakable *this)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined3 extraout_var;
  int *piVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  entvars_t *peVar10;
  undefined1 *puVar11;
  int iVar12;
  float *pfVar13;
  float fVar14;
  float *pfVar15;
  undefined2 in_FPUControlWord;
  longdouble extraout_ST0;
  vec_t *pvVar16;
  edict_t *peVar17;
  undefined1 auStack_48c [12];
  float local_480;
  float local_474;
  char local_46d;
  int *local_46c [256];
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c [4];
  float fStack_3c;
  float local_38;
  int local_34;
  undefined4 local_30;
  float local_2c [4];
  undefined1 auStack_1c [12];
  
  local_46d = '\0';
  local_474 = 1.0;
  if (this->pev->deadflag == 2) {
    return;
  }
  iVar3 = (*g_engfuncs.pfnRandomLong)(0,0x1d);
  iVar12 = iVar3 + 0x5f;
  if (iVar3 - 3U < 5) {
    iVar12 = 100;
  }
  (*g_engfuncs.pfnRandomFloat)(0.85,1.0);
  local_30 = CONCAT22(local_30._2_2_,in_FPUControlWord);
  iVar3 = (int)ROUND(this->pev->health);
  local_34 = iVar3;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  local_480 = (float)((longdouble)0.01 * (longdouble)iVar3 + extraout_ST0);
  local_38 = local_480;
  fVar14 = local_480;
  if (1.0 < local_480) {
    fVar14 = 1.0;
  }
  if (BreakableLastpevAttacker != (entvars_t *)0x0) {
    this->pev->fuser1 = BreakableLastpevAttacker->fuser1;
  }
  switch(*(undefined4 *)&this->field_0x78) {
  case 0:
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar3 == 0) {
      peVar10 = this->pev;
      pcVar4 = "debris/bustglass1.wav";
LAB_0007548b:
      EMIT_SOUND_DYN((int)peVar10->pContainingEntity,2,pcVar4,fVar14,0x3f4ccccd,0,iVar12,0.9);
    }
    else if (iVar3 == 1) {
      peVar10 = this->pev;
      pcVar4 = "debris/bustglass2.wav";
      goto LAB_0007548b;
    }
    local_46d = '\x01';
    break;
  case 1:
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar3 == 0) {
      peVar10 = this->pev;
      pcVar4 = "debris/bustcrate1.wav";
LAB_000754ff:
      EMIT_SOUND_DYN((int)peVar10->pContainingEntity,2,pcVar4,fVar14,0x3f4ccccd,0,iVar12,0.9);
    }
    else if (iVar3 == 1) {
      peVar10 = this->pev;
      pcVar4 = "debris/bustcrate2.wav";
      goto LAB_000754ff;
    }
    local_474 = local_474 * 2.5;
    local_46d = '\b';
    break;
  case 2:
  case 6:
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar3 == 0) {
      peVar10 = this->pev;
      pcVar4 = "debris/bustmetal1.wav";
LAB_0007557f:
      EMIT_SOUND_DYN((int)peVar10->pContainingEntity,2,pcVar4,fVar14,0x3f4ccccd,0,iVar12,0.9);
    }
    else if (iVar3 == 1) {
      peVar10 = this->pev;
      pcVar4 = "debris/bustmetal2.wav";
      goto LAB_0007557f;
    }
    local_474 = local_474 * 2.5;
    local_46d = '\x02';
    break;
  case 3:
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar3 == 0) {
      peVar10 = this->pev;
      pcVar4 = "debris/bustflesh1.wav";
LAB_000755ff:
      EMIT_SOUND_DYN((int)peVar10->pContainingEntity,2,pcVar4,fVar14,0x3f4ccccd,0,iVar12,0.9);
    }
    else if (iVar3 == 1) {
      peVar10 = this->pev;
      pcVar4 = "debris/bustflesh2.wav";
      goto LAB_000755ff;
    }
    local_474 = local_474 * 4.0;
    local_46d = '\x04';
    break;
  case 4:
  case 8:
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar3 == 0) {
      peVar10 = this->pev;
      pcVar4 = "debris/bustconcrete1.wav";
LAB_0007567f:
      EMIT_SOUND_DYN((int)peVar10->pContainingEntity,2,pcVar4,fVar14,0x3f4ccccd,0,iVar12,0.9);
    }
    else if (iVar3 == 1) {
      peVar10 = this->pev;
      pcVar4 = "debris/bustconcrete2.wav";
      goto LAB_0007567f;
    }
    local_474 = local_474 + local_474;
    local_46d = '@';
    break;
  case 5:
    EMIT_SOUND_DYN((int)this->pev->pContainingEntity,2,"debris/bustceiling.wav",fVar14,0x3f4ccccd,0,
                   iVar12,0.9);
  }
  peVar10 = this->pev;
  local_6c = peVar10->mins[0] + peVar10->maxs[0];
  local_68 = peVar10->mins[1] + peVar10->maxs[1];
  local_64 = peVar10->mins[2] + peVar10->maxs[2];
  local_5c = local_6c * 0.5;
  local_58 = local_68 * 0.5;
  local_54 = local_64 * 0.5;
  local_4c[0] = peVar10->origin[0] + local_5c;
  local_4c[1] = peVar10->origin[1] + local_58;
  local_4c[2] = peVar10->origin[2] + local_54;
  pfVar13 = local_4c;
  pfVar15 = local_2c;
  for (iVar12 = 3; iVar12 != 0; iVar12 = iVar12 + -1) {
    *pfVar15 = *pfVar13;
    pfVar13 = pfVar13 + 1;
    pfVar15 = pfVar15 + 1;
  }
  if (*(int *)&this->field_0x78 == 0) {
    (*g_engfuncs.pfnMessageBegin)(4,gmsgTSCreateDebris,local_2c,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteCoord)(local_2c[0]);
    (*g_engfuncs.pfnWriteCoord)(local_2c[1]);
    (*g_engfuncs.pfnWriteCoord)(local_2c[2]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[0]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[1]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[2]);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnWriteCoord)(*(float *)&this->field_0xf8);
    (*g_engfuncs.pfnWriteCoord)(*(float *)&this->field_0xfc);
    (*g_engfuncs.pfnWriteCoord)(*(float *)&this->field_0x100);
    (*g_engfuncs.pfnWriteCoord)(*(float *)&this->field_0x104);
    (*g_engfuncs.pfnWriteCoord)(*(float *)&this->field_0x108);
    (*g_engfuncs.pfnWriteCoord)(*(float *)&this->field_0x10c);
    (*g_engfuncs.pfnWriteLong)(*(int *)&this->field_0x114);
    (*g_engfuncs.pfnWriteCoord)(local_474 * *(float *)&this->field_0x110);
  }
  else {
    (*g_engfuncs.pfnMessageBegin)(4,0x17,local_2c,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0x6c);
    (*g_engfuncs.pfnWriteCoord)(local_2c[0]);
    (*g_engfuncs.pfnWriteCoord)(local_2c[1]);
    (*g_engfuncs.pfnWriteCoord)(local_2c[2]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[0]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[1]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[2]);
    (*g_engfuncs.pfnWriteCoord)
              (*(float *)&this->field_0x104 * *(float *)&this->field_0x110 * local_474);
    (*g_engfuncs.pfnWriteCoord)
              (*(float *)&this->field_0x108 * *(float *)&this->field_0x110 * local_474);
    (*g_engfuncs.pfnWriteCoord)
              (*(float *)&this->field_0x10c * *(float *)&this->field_0x110 * local_474);
    (*g_engfuncs.pfnWriteByte)(10);
    (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0x80);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnWriteByte)(0x19);
    (*g_engfuncs.pfnWriteByte)((int)local_46d);
  }
  (*g_engfuncs.pfnMessageEnd)();
  local_6c = this->pev->absmin[0];
  local_68 = this->pev->absmin[1];
  peVar10 = this->pev;
  local_5c = peVar10->absmax[0];
  local_58 = peVar10->absmax[1];
  local_64 = this->pev->absmax[2];
  local_54 = peVar10->absmax[2] + 8.0;
  uVar5 = UTIL_EntitiesInBox((int)local_46c,0x100,&local_6c,&local_5c,0x200);
  if ((uVar5 == 0) || (iVar12 = 0, (int)uVar5 < 1)) goto LAB_00075bd5;
  iVar3 = 0;
  uVar6 = uVar5 & 3;
  if ((int)uVar5 < 1) {
LAB_00075afd:
    puVar1 = (uint *)(**(int **)((int)local_46c + iVar3) + 0x1a4);
    *puVar1 = *puVar1 & 0xfffffdff;
    *(undefined4 *)(**(int **)((int)local_46c + iVar3) + 0x19c) = 0;
    iVar3 = iVar3 + 4;
    iVar12 = iVar12 + 1;
    if ((int)uVar5 <= iVar12) goto LAB_00075bd5;
  }
  else if (uVar6 != 0) {
    if (1 < uVar6) {
      if (2 < uVar6) {
        *(uint *)(*local_46c[0] + 0x1a4) = *(uint *)(*local_46c[0] + 0x1a4) & 0xfffffdff;
        *(undefined4 *)(*local_46c[0] + 0x19c) = 0;
        iVar3 = 4;
      }
      puVar1 = (uint *)(**(int **)((int)local_46c + iVar3) + 0x1a4);
      *puVar1 = *puVar1 & 0xfffffdff;
      *(undefined4 *)(**(int **)((int)local_46c + iVar3) + 0x19c) = 0;
      iVar3 = iVar3 + 4;
      iVar12 = (2 < uVar6) + 1;
    }
    goto LAB_00075afd;
  }
  puVar8 = auStack_1c + iVar3;
  puVar9 = puVar8;
  do {
    *(uint *)(**(int **)(puVar9 + -0x450) + 0x1a4) =
         *(uint *)(**(int **)(puVar9 + -0x450) + 0x1a4) & 0xfffffdff;
    *(undefined4 *)(**(int **)(puVar8 + -0x450) + 0x19c) = 0;
    *(uint *)(**(int **)(puVar9 + -0x44c) + 0x1a4) =
         *(uint *)(**(int **)(puVar9 + -0x44c) + 0x1a4) & 0xfffffdff;
    *(undefined4 *)(**(int **)(puVar8 + -0x44c) + 0x19c) = 0;
    *(uint *)(**(int **)(puVar9 + -0x448) + 0x1a4) =
         *(uint *)(**(int **)(puVar9 + -0x448) + 0x1a4) & 0xfffffdff;
    *(undefined4 *)(**(int **)(puVar8 + -0x448) + 0x19c) = 0;
    *(uint *)(**(int **)(puVar9 + -0x444) + 0x1a4) =
         *(uint *)(**(int **)(puVar9 + -0x444) + 0x1a4) & 0xfffffdff;
    *(undefined4 *)(**(int **)(puVar8 + -0x444) + 0x19c) = 0;
    puVar8 = puVar8 + 0x10;
    puVar9 = puVar9 + 0x10;
    iVar12 = iVar12 + 4;
  } while (iVar12 < (int)uVar5);
LAB_00075bd5:
  this->pev->solid = 0;
  CBaseDelay::SUB_UseTargets((CBaseDelay *)this,(int *)0x0,3,0);
  if (*(int *)&this->field_0x8c != 0) {
    peVar17 = this->pev->pContainingEntity;
    pvVar16 = this->pev->angles;
    VecBModelOrigin(local_4c,(int)this->pev);
    CBaseEntity::Create((int)(gpGlobals->pStringBase + *(int *)&this->field_0x8c),local_4c,pvVar16,
                        peVar17);
  }
  puVar11 = auStack_48c;
  if (0 < this->pev->impulse) {
    (*this->vtable[0x3e])(local_4c,this);
    fStack_3c = (float)this->pev->impulse * 2.5;
    fVar14 = (float)this->pev->impulse;
    peVar10 = BreakableLastpevAttacker;
    if (BreakableLastpevAttacker == (entvars_t *)0x0) {
      peVar10 = this->pev;
    }
    TSExplosion(&local_50,this->pev,peVar10,fVar14,0x1040,fVar14,fStack_3c);
    puVar11 = &stack0xfffffb70;
  }
  this->pev->deadflag = 2;
  this->pev->effects = 0x80;
  this->pev->takedamage = 0.0;
  if (0.0 <= *(float *)&this->field_0x90) {
    *(undefined1 **)(puVar11 + -0x10) = &this->field_0x70;
    *(undefined4 *)(puVar11 + -0x14) = 0x75cfe;
    bVar2 = int(*(EHANDLE **)(puVar11 + -0x10));
    if (CONCAT31(extraout_var,bVar2) != 0) {
      *(undefined1 **)(puVar11 + -0x10) = &this->field_0x70;
      *(undefined4 *)(puVar11 + -0x14) = 0x75d0e;
      piVar7 = (int *)EHANDLE::operator->(*(EHANDLE **)(puVar11 + -0x10));
      if (*(float *)&this->field_0x90 == 0.0) {
        fVar14 = 30.0;
      }
      else {
        fVar14 = *(float *)&this->field_0x90;
      }
      *(float *)(*piVar7 + 0x104) = gpGlobals->time + fVar14;
      *(undefined1 **)(puVar11 + -0x10) = &this->field_0x70;
      *(undefined4 *)(puVar11 + -0x14) = 0x75d4c;
      iVar12 = EHANDLE::operator->(*(EHANDLE **)(puVar11 + -0x10));
      *(undefined4 *)(iVar12 + 0xc) = 0xffff0000;
      *(code **)(iVar12 + 0x10) = CInfoBreakable::RespawnThink;
      return;
    }
  }
  *(CBreakable **)(puVar11 + -0x10) = this;
  *(undefined4 *)(puVar11 + -0x14) = 0x75d6d;
  CBaseEntity::SUB_Remove(*(CBaseEntity **)(puVar11 + -0x10));
  return;
}

/* 00075ed8  CBreakable::CBreakable  (66 bytes)
 * undefined CBreakable(void)
 */
/* CBreakable::CBreakable(void) */

void __thiscall CBreakable::CBreakable(CBreakable *this)

{
  this->vtable = (void **)CBaseEntity_virtual_table;
  this->vtable = (void **)CBaseDelay_virtual_table;
  this->vtable = (void **)CBreakable_virtual_table;
  EHANDLE::operator=((EHANDLE *)&this->field_0x70,(int *)0x0);
  return;
}

/* 00075f1c  CBreakable::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CBreakable::ObjectCaps(void) */

undefined4 CBreakable::ObjectCaps(void)

{
  return 0;
}

/* 00075f24  CBreakable::Explodable  (22 bytes)
 * bool Explodable(void)
 */
/* CBreakable::Explodable(void) */

bool __thiscall CBreakable::Explodable(CBreakable *this)

{
  return 0 < this->pev->impulse;
}

/* 00075f3c  CBreakable::ExplosionMagnitude  (13 bytes)
 * undefined4 ExplosionMagnitude(void)
 */
/* CBreakable::ExplosionMagnitude(void) */

int __thiscall CBreakable::ExplosionMagnitude(CBreakable *this)

{
  return this->pev->impulse;
}

/* 00075f4c  CBreakable::ExplosionSetMagnitude  (17 bytes)
 * undefined ExplosionSetMagnitude(undefined4 param_1)
 */
/* CBreakable::ExplosionSetMagnitude(int) */

void __thiscall CBreakable::ExplosionSetMagnitude(CBreakable *this,int param_1)

{
  this->pev->impulse = param_1;
  return;
}

/* 000c0370  CBreakable::KeyValue  (587 bytes)
 * char * KeyValue(int param_1)
 */
/* CBreakable::KeyValue(KeyValueData_s *) */

char * __thiscall CBreakable::KeyValue(CBreakable *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"explosion");
  if (iVar1 == 0) {
    pcVar2 = (char *)strcasecmp(*(char **)(param_1 + 8),"directed");
    *(uint *)&this->field_0x7c = (uint)(pcVar2 == (char *)0x0);
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"material");
    if (iVar1 == 0) {
      pcVar2 = (char *)__strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      if (pcVar2 < (char *)0xa) {
        *(char **)&this->field_0x78 = pcVar2;
      }
      else {
        *(undefined4 *)&this->field_0x78 = 1;
      }
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"respawntime");
      if (iVar1 == 0) {
        pcVar2 = (char *)__strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
        *(float *)&this->field_0x90 = (float)(int)pcVar2;
      }
      else {
        iVar1 = strcmp(*(char **)(param_1 + 4),"respawntarget");
        if (iVar1 == 0) {
          pcVar2 = strcpy(&this->field_0x94,*(char **)(param_1 + 8));
          *(undefined4 *)(param_1 + 0xc) = 1;
          return pcVar2;
        }
        iVar1 = strcmp(*(char **)(param_1 + 4),"deadmodel");
        pcVar2 = (char *)0x0;
        if (iVar1 != 0) {
          iVar1 = strcmp(*(char **)(param_1 + 4),"shards");
          pcVar2 = (char *)0x0;
          if (iVar1 != 0) {
            iVar1 = strcmp(*(char **)(param_1 + 4),"gibmodel");
            if (iVar1 == 0) {
              pcVar2 = (char *)(*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
              *(char **)&this->field_0x88 = pcVar2;
              *(undefined4 *)(param_1 + 0xc) = 1;
              return pcVar2;
            }
            iVar1 = strcmp(*(char **)(param_1 + 4),"spawnobject");
            if (iVar1 == 0) {
              iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
              pcVar2 = (char *)(iVar1 - 1);
              if (pcVar2 < (char *)0x15) {
                pcVar2 = (char *)(*(int *)(pSpawnObjects + iVar1 * 4) - (int)gpGlobals->pStringBase)
                ;
                *(char **)&this->field_0x8c = pcVar2;
              }
            }
            else {
              iVar1 = strcmp(*(char **)(param_1 + 4),"explodemagnitude");
              if (iVar1 == 0) {
                pcVar2 = (char *)__strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
                this->pev->impulse = (int)pcVar2;
              }
              else {
                iVar1 = strcmp(*(char **)(param_1 + 4),"lip");
                pcVar2 = (char *)0x0;
                if (iVar1 != 0) {
                  pcVar2 = (char *)CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
                  return pcVar2;
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return pcVar2;
}

/* 000c05ec  CBreakable::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CBreakable::Save(CSave &) */

undefined4 __thiscall CBreakable::Save(CBreakable *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CBreakable",(int)this,(int *)m_SaveData,5);
  }
  return uVar2;
}

/* 000c063c  CBreakable::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CBreakable::Restore(CRestore &) */

undefined4 __thiscall CBreakable::Restore(CBreakable *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CBreakable",(int)this,(int)m_SaveData,5);
  }
  return uVar2;
}

/* 000c068c  CBreakable::MaterialSoundList  (130 bytes)
 * undefined1 * MaterialSoundList(undefined4 param_1, undefined4 * param_2)
 */
/* CBreakable::MaterialSoundList(Materials, int &) */

undefined1 * CBreakable::MaterialSoundList(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x0;
  switch(param_1) {
  case 0:
  case 6:
  case 7:
    puVar1 = pSoundsGlass;
    *param_2 = 3;
    break;
  case 1:
    puVar1 = pSoundsWood;
    *param_2 = 3;
    break;
  case 2:
    puVar1 = pSoundsMetal;
    *param_2 = 3;
    break;
  case 3:
    puVar1 = pSoundsFlesh;
    *param_2 = 6;
    break;
  case 4:
  case 8:
    puVar1 = pSoundsConcrete;
    *param_2 = 3;
    break;
  default:
    *param_2 = 0;
  }
  return puVar1;
}

/* 000c0744  CBreakable::MaterialSoundPrecache  (95 bytes)
 * undefined MaterialSoundPrecache(undefined4 param_1)
 */
/* CBreakable::MaterialSoundPrecache(Materials) */

void CBreakable::MaterialSoundPrecache(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int local_14;
  
  local_14 = 0;
  puVar1 = MaterialSoundList(param_1,&local_14);
  iVar2 = 0;
  if (0 < local_14) {
    do {
      (*g_engfuncs.pfnPrecacheSound)(*(char **)(puVar1 + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_14);
  }
  return;
}

/* 000c07a4  CBreakable::MaterialSoundRandom  (122 bytes)
 * undefined MaterialSoundRandom(int param_1, undefined4 param_2, undefined4 param_3)
 */
/* CBreakable::MaterialSoundRandom(edict_s *, Materials, float) */

void CBreakable::MaterialSoundRandom(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int local_c;
  
  local_c = 0;
  puVar1 = MaterialSoundList(param_2,&local_c);
  if (local_c != 0) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,local_c + -1);
    EMIT_SOUND_DYN(param_1,4,*(char **)(puVar1 + iVar2 * 4),param_3,0x3f800000,0,100,0.5);
  }
  return;
}

/* 000c0820  CBreakable::Precache  (500 bytes)
 * undefined Precache(void)
 */
/* CBreakable::Precache(void) */

void __thiscall CBreakable::Precache(CBreakable *this)

{
  int iVar1;
  char *unaff_EDI;
  
  switch(*(undefined4 *)&this->field_0x78) {
  case 0:
  case 7:
    unaff_EDI = "models/glassgibs.mdl";
    (*g_engfuncs.pfnPrecacheSound)("debris/bustglass1.wav");
    (*g_engfuncs.pfnPrecacheSound)("debris/bustglass2.wav");
    break;
  case 1:
    unaff_EDI = "models/woodgibs.mdl";
    (*g_engfuncs.pfnPrecacheSound)("debris/bustcrate1.wav");
    (*g_engfuncs.pfnPrecacheSound)("debris/bustcrate2.wav");
    break;
  case 2:
    unaff_EDI = "models/metalplategibs.mdl";
    (*g_engfuncs.pfnPrecacheSound)("debris/bustmetal1.wav");
    (*g_engfuncs.pfnPrecacheSound)("debris/bustmetal2.wav");
    break;
  case 3:
    unaff_EDI = "models/fleshgibs.mdl";
    (*g_engfuncs.pfnPrecacheSound)("debris/bustflesh1.wav");
    (*g_engfuncs.pfnPrecacheSound)("debris/bustflesh2.wav");
    break;
  case 4:
    unaff_EDI = "models/cindergibs.mdl";
    (*g_engfuncs.pfnPrecacheSound)("debris/bustconcrete1.wav");
    (*g_engfuncs.pfnPrecacheSound)("debris/bustconcrete2.wav");
    break;
  case 5:
    unaff_EDI = "models/ceilinggibs.mdl";
    (*g_engfuncs.pfnPrecacheSound)("debris/bustceiling.wav");
    break;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)("buttons/spark5.wav");
    (*g_engfuncs.pfnPrecacheSound)("buttons/spark6.wav");
    unaff_EDI = "models/computergibs.mdl";
    (*g_engfuncs.pfnPrecacheSound)("debris/bustmetal1.wav");
    (*g_engfuncs.pfnPrecacheSound)("debris/bustmetal2.wav");
    break;
  case 8:
    unaff_EDI = "models/rockgibs.mdl";
    (*g_engfuncs.pfnPrecacheSound)("debris/bustconcrete1.wav");
    (*g_engfuncs.pfnPrecacheSound)("debris/bustconcrete2.wav");
  }
  MaterialSoundPrecache(*(undefined4 *)&this->field_0x78);
  if (*(int *)&this->field_0x88 != 0) {
    unaff_EDI = gpGlobals->pStringBase + *(int *)&this->field_0x88;
  }
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(unaff_EDI);
  *(int *)&this->field_0x80 = iVar1;
  if (*(int *)&this->field_0x8c != 0) {
    UTIL_PrecacheOther((int)(gpGlobals->pStringBase + *(int *)&this->field_0x8c));
  }
  return;
}

/* 000c0a44  CBreakable::DamageSound  (465 bytes)
 * undefined DamageSound(void)
 */
/* CBreakable::DamageSound(void) */

void __thiscall CBreakable::DamageSound(CBreakable *this)

{
  edict_t *peVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  longdouble lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  int local_40;
  char *local_3c [4];
  char *local_2c;
  char *local_28;
  
  iVar3 = *(int *)&this->field_0x78;
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,2);
  local_40 = 100;
  if (iVar2 == 0) {
    local_40 = (*g_engfuncs.pfnRandomLong)(0,0x22);
    local_40 = local_40 + 0x5f;
  }
  lVar4 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.75,1.0);
  fVar5 = (float)lVar4;
  if ((iVar3 == 6) && (iVar2 = (*g_engfuncs.pfnRandomLong)(0,1), iVar2 != 0)) {
    iVar3 = 2;
  }
  switch(iVar3) {
  case 0:
  case 6:
  case 7:
    local_3c[0] = "debris/glass1.wav";
    local_3c[1] = "debris/glass2.wav";
    local_3c[2] = "debris/glass3.wav";
    goto LAB_000c0bda;
  case 1:
    local_3c[0] = "debris/wood1.wav";
    local_3c[1] = "debris/wood2.wav";
    local_3c[2] = "debris/wood3.wav";
    goto LAB_000c0bda;
  case 2:
    local_3c[0] = "debris/metal1.wav";
    local_3c[1] = "debris/metal3.wav";
    local_3c[2] = "debris/metal2.wav";
    unaff_EBP = 2;
    break;
  case 3:
    local_3c[0] = "debris/flesh1.wav";
    local_3c[1] = "debris/flesh2.wav";
    local_3c[2] = "debris/flesh3.wav";
    local_3c[3] = "debris/flesh5.wav";
    local_2c = "debris/flesh6.wav";
    local_28 = "debris/flesh7.wav";
    unaff_EBP = 6;
    break;
  case 4:
  case 8:
    local_3c[0] = "debris/concrete1.wav";
    local_3c[1] = "debris/concrete2.wav";
    local_3c[2] = "debris/concrete3.wav";
LAB_000c0bda:
    unaff_EBP = 3;
    break;
  case 5:
    unaff_EBP = 0;
  }
  if (unaff_EBP != 0) {
    peVar1 = this->pev->pContainingEntity;
    fVar8 = 0.5;
    uVar7 = 0;
    uVar6 = 0x3f4ccccd;
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,unaff_EBP + -1);
    EMIT_SOUND_DYN((int)peVar1,2,local_3c[iVar3],fVar5,uVar6,uVar7,local_40,fVar8);
  }
  return;
}

/* 000c0c44  CBreakable::BreakTouch  (351 bytes)
 * undefined BreakTouch(int * param_1)
 */
/* CBreakable::BreakTouch(CBaseEntity *) */

void __thiscall CBreakable::BreakTouch(CBreakable *this,int *param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  
  iVar1 = *param_1;
  iVar4 = (**(code **)(param_1[0x18] + 200))(param_1);
  if (iVar4 != 0) {
    bVar3 = IsBreakable(this);
    if (CONCAT31(extraout_var,bVar3) != 0) {
      if ((this->pev->spawnflags & 2) != 0) {
        fVar2 = SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                     *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                     *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)) * 0.01;
        if (this->pev->health <= fVar2) {
          *(undefined4 *)&this->field_0x14 = 0;
          *(undefined4 *)&this->field_0x18 = 0;
          (*this->vtable[0x16])(this,iVar1,iVar1,fVar2,1);
          (**(code **)(param_1[0x18] + 0x58))(param_1,this->pev,this->pev,fVar2 * 0.25,4);
        }
      }
      if (((this->pev->spawnflags & 4) != 0) &&
         (this->pev->maxs[2] - 2.0 <= *(float *)(iVar1 + 0xcc))) {
        DamageSound(this);
        *(undefined4 *)&this->field_0xc = 0xffff0000;
        *(code **)&this->field_0x10 = Die;
        *(undefined4 *)&this->field_0x14 = 0;
        *(undefined4 *)&this->field_0x18 = 0;
        if (*(float *)&this->field_0x64 == 0.0) {
          *(undefined4 *)&this->field_0x64 = 0x3dcccccd;
        }
        this->pev->nextthink = this->pev->ltime + *(float *)&this->field_0x64;
      }
    }
  }
  return;
}

/* 000c0da4  CBreakable::Use  (696 bytes)
 * undefined Use(CBreakable * param_1, int * param_2, int * param_3)
 */
/* CBreakable::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CBreakable::Use(CBreakable *param_1,int *param_2,int *param_3)

{
  entvars_t *peVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  float *pfVar5;
  vec_t *pvVar6;
  float *pfVar7;
  vec_t *pvVar8;
  float local_5c [4];
  float local_4c;
  float local_48;
  float local_44;
  float local_3c [4];
  float local_2c [7];
  
  bVar3 = IsBreakable(param_1);
  if ((CONCAT31(extraout_var,bVar3) != 0) && (peVar1 = param_1->pev, peVar1->deadflag == 0)) {
    pfVar5 = &local_4c;
    local_4c = peVar1->absmin[0] + peVar1->absmax[0];
    local_48 = peVar1->absmin[1] + peVar1->absmax[1];
    local_44 = peVar1->absmin[2] + peVar1->absmax[2];
    local_3c[0] = local_4c / 2.0;
    local_3c[1] = local_48 / 2.0;
    local_3c[2] = local_44 / 2.0;
    if (param_2 == (int *)0x0) {
      if (param_3 == (int *)0x0) {
        pfVar5 = local_3c;
      }
      else {
        iVar4 = *param_3;
        local_4c = *(float *)(iVar4 + 0xc4) + *(float *)(iVar4 + 0xd0);
        local_48 = *(float *)(iVar4 + 200) + *(float *)(iVar4 + 0xd4);
        local_44 = *(float *)(iVar4 + 0xcc) + *(float *)(iVar4 + 0xd8);
        pfVar5 = local_5c;
        local_5c[0] = local_4c / 2.0;
        local_5c[1] = local_48 / 2.0;
        local_5c[2] = local_44 / 2.0;
      }
    }
    else {
      iVar4 = *param_2;
      local_5c[0] = *(float *)(iVar4 + 0xc4) + *(float *)(iVar4 + 0xd0);
      local_5c[1] = *(float *)(iVar4 + 200) + *(float *)(iVar4 + 0xd4);
      local_5c[2] = *(float *)(iVar4 + 0xcc) + *(float *)(iVar4 + 0xd8);
      local_4c = local_5c[0] / 2.0;
      local_48 = local_5c[1] / 2.0;
      local_44 = local_5c[2] / 2.0;
    }
    pfVar7 = local_2c;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar7 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar7 = pfVar7 + 1;
    }
    pfVar5 = local_3c;
    pfVar7 = (float *)&param_1->field_0xf8;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar7 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar7 = pfVar7 + 1;
    }
    local_4c = local_3c[0] - local_2c[0];
    local_48 = local_3c[1] - local_2c[1];
    local_44 = local_3c[2] - local_2c[2];
    fVar2 = SQRT(local_44 * local_44 + local_48 * local_48 + local_4c * local_4c);
    if (fVar2 == 0.0) {
      local_5c[0] = 0.0;
      local_5c[1] = 0.0;
      local_5c[2] = 1.0;
    }
    else {
      fVar2 = 1.0 / fVar2;
      local_5c[0] = fVar2 * local_4c;
      local_5c[1] = fVar2 * local_48;
      local_5c[2] = fVar2 * local_44;
    }
    pfVar5 = local_5c;
    pfVar7 = (float *)&param_1->field_0x104;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar7 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar7 = pfVar7 + 1;
    }
    *(undefined4 *)&param_1->field_0x114 = 0;
    local_5c[0] = local_3c[0] - local_2c[0];
    local_5c[1] = local_3c[1] - local_2c[1];
    local_5c[2] = local_3c[2] - local_2c[2];
    *(float *)&param_1->field_0x110 =
         SQRT(local_5c[2] * local_5c[2] + local_5c[1] * local_5c[1] + local_5c[0] * local_5c[0]);
    param_1->pev->angles[1] = *(vec_t *)&param_1->field_0x84;
    UTIL_MakeVectors(param_1->pev->angles);
    pvVar6 = gpGlobals->v_forward;
    pvVar8 = (vec_t *)&g_vecAttackDir;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pvVar8 = *pvVar6;
      pvVar6 = pvVar6 + 1;
      pvVar8 = pvVar8 + 1;
    }
    Die(param_1);
  }
  return;
}

/* 000c1060  CBreakable::TraceAttack  (729 bytes)
 * undefined TraceAttack(int param_1, float param_2, float * param_3, int param_4, uint param_5)
 */
/* CBreakable::TraceAttack(entvars_s *, float, Vector, TraceResult *, int) */

void __thiscall
CBreakable::TraceAttack
          (CBreakable *this,int param_1,float param_2,float *param_3,int param_4,uint param_5)

{
  char *pcVar1;
  int iVar2;
  entvars_t *peVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float *pfVar7;
  longdouble lVar8;
  float local_3c;
  float local_38;
  float local_34;
  float local_20;
  
  puVar4 = (undefined4 *)(param_4 + 0x14);
  puVar6 = (undefined4 *)&this->field_0xf8;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  if (SQRT(param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3) == 0.0) {
    local_20 = SQRT(*(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
                    *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                    *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20));
    if (local_20 != 0.0) {
      local_20 = SQRT(*(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
                      *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                      *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20));
      if (local_20 == 0.0) goto LAB_000c1182;
      local_34 = 1.0 / local_20;
      local_3c = local_34 * *(float *)(param_1 + 0x20);
      local_38 = local_34 * *(float *)(param_1 + 0x24);
      local_34 = local_34 * *(float *)(param_1 + 0x28);
LAB_000c11b4:
      goto LAB_000c11c4;
    }
    pfVar5 = (float *)&g_vecZero;
  }
  else {
    local_20 = SQRT(param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3);
    if (local_20 != 0.0) {
      local_34 = 1.0 / local_20;
      local_3c = local_34 * *param_3;
      local_38 = local_34 * param_3[1];
      local_34 = local_34 * param_3[2];
      goto LAB_000c11b4;
    }
LAB_000c1182:
    local_3c = 0.0;
    local_38 = 0.0;
    local_34 = 1.0;
LAB_000c11c4:
    pfVar5 = &local_3c;
  }
  pfVar7 = (float *)&this->field_0x104;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar7 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar7 = pfVar7 + 1;
  }
  *(uint *)&this->field_0x114 = param_5;
  *(float *)&this->field_0x110 = param_2;
  if ((param_5 & 0x2000000) != 0) {
    *(float *)&this->field_0x110 = param_2 * 8.0;
  }
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,1);
  if (iVar2 != 0) {
    if (*(int *)&this->field_0x78 == 6) {
      UTIL_Sparks((undefined4 *)(param_4 + 0x14));
      lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.7,1.0);
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,1);
      if (iVar2 == 0) {
        peVar3 = this->pev;
        pcVar1 = "buttons/spark5.wav";
      }
      else {
        if (iVar2 != 1) goto LAB_000c1303;
        peVar3 = this->pev;
        pcVar1 = "buttons/spark6.wav";
      }
      EMIT_SOUND_DYN((int)peVar3->pContainingEntity,2,pcVar1,(float)lVar8,0x3f4ccccd,0,100,0.5);
    }
    else if (*(int *)&this->field_0x78 == 7) {
      lVar8 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.5,1.5);
      UTIL_Ricochet((undefined4 *)(param_4 + 0x14),(float)lVar8);
    }
  }
LAB_000c1303:
  local_3c = *param_3;
  local_38 = param_3[1];
  local_34 = param_3[2];
  CBaseEntity::TraceAttack((CBaseEntity *)this,param_1,param_2,&local_3c,param_4,param_5);
  return;
}

/* 000c1344  CBreakable::TakeDamage  (717 bytes)
 * bool TakeDamage(int param_1, int param_2, float param_3, uint param_4)
 */
/* CBreakable::TakeDamage(entvars_s *, entvars_s *, float, int) */

bool __thiscall
CBreakable::TakeDamage(CBreakable *this,int param_1,int param_2,float param_3,uint param_4)

{
  entvars_t *peVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float local_5c [4];
  float local_4c;
  float local_48;
  float local_44;
  float local_3c [4];
  float local_2c [7];
  
  if (param_2 == param_1) {
    peVar1 = this->pev;
    local_5c[0] = peVar1->size[0] * 0.5;
    local_5c[1] = peVar1->size[1] * 0.5;
    local_5c[2] = peVar1->size[2] * 0.5;
    local_4c = peVar1->absmin[0] + local_5c[0];
    local_48 = peVar1->absmin[1] + local_5c[1];
    local_44 = peVar1->absmin[2] + local_5c[2];
    local_3c[0] = *(float *)(param_2 + 8) - local_4c;
    local_3c[1] = *(float *)(param_2 + 0xc) - local_48;
    local_3c[2] = *(float *)(param_2 + 0x10) - local_44;
    pfVar5 = local_3c;
    pfVar6 = local_2c;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
    if ((((*(byte *)(param_2 + 0x1a4) & 8) != 0) && ((this->pev->spawnflags & 0x100) != 0)) &&
       ((char)param_4 < '\0')) {
      param_3 = this->pev->health;
    }
  }
  else {
    peVar1 = this->pev;
    local_3c[0] = peVar1->size[0] * 0.5;
    local_3c[1] = peVar1->size[1] * 0.5;
    local_3c[2] = peVar1->size[2] * 0.5;
    local_4c = peVar1->absmin[0] + local_3c[0];
    local_48 = peVar1->absmin[1] + local_3c[1];
    local_44 = peVar1->absmin[2] + local_3c[2];
    local_5c[0] = *(float *)(param_1 + 8) - local_4c;
    local_5c[1] = *(float *)(param_1 + 0xc) - local_48;
    local_5c[2] = *(float *)(param_1 + 0x10) - local_44;
    pfVar5 = local_5c;
    pfVar6 = local_2c;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
  }
  bVar3 = IsBreakable(this);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    bVar3 = false;
  }
  else {
    if ((char)param_4 < '\0') {
      param_3 = param_3 + param_3;
    }
    if ((param_4 & 0x20000) != 0) {
      param_3 = param_3 * 0.1;
    }
    fVar2 = SQRT(local_2c[2] * local_2c[2] + local_2c[1] * local_2c[1] + local_2c[0] * local_2c[0]);
    if (fVar2 == 0.0) {
      local_5c[0] = 0.0;
      local_5c[1] = 0.0;
      local_5c[2] = 1.0;
    }
    else {
      fVar2 = 1.0 / fVar2;
      local_5c[0] = fVar2 * local_2c[0];
      local_5c[1] = fVar2 * local_2c[1];
      local_5c[2] = fVar2 * local_2c[2];
    }
    pfVar5 = local_5c;
    pfVar6 = (float *)&g_vecAttackDir;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
    this->pev->health = this->pev->health - param_3;
    bVar3 = 0.0 < this->pev->health;
    if (bVar3) {
      DamageSound(this);
    }
    else {
      BreakableLastpevAttacker = param_2;
      Die(this);
      BreakableLastpevAttacker = 0;
    }
  }
  return bVar3;
}

/* 000c1618  CBreakable::IsBreakable  (17 bytes)
 * bool IsBreakable(void)
 */
/* CBreakable::IsBreakable(void) */

bool __thiscall CBreakable::IsBreakable(CBreakable *this)

{
  return *(int *)&this->field_0x78 != 7;
}

/* 000c162c  CBreakable::DamageDecal  (84 bytes)
 * int DamageDecal(int * param_1)
 */
/* CBreakable::DamageDecal(int) */

int CBreakable::DamageDecal(int *param_1)

{
  int iVar1;
  
  if (param_1[0x1e] == 0) {
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,2);
    iVar1 = iVar1 + 0x19;
  }
  else if (param_1[0x1e] == 7) {
    iVar1 = 0x23;
  }
  else {
    iVar1 = CBaseEntity::DamageDecal(param_1);
  }
  return iVar1;
}

