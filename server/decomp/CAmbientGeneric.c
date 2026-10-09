/* ts_i386.so - CAmbientGeneric (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000dea74  CAmbientGeneric::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CAmbientGeneric::Save(CSave &) */

undefined4 __thiscall CAmbientGeneric::Save(CAmbientGeneric *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CAmbientGeneric",(int)this,(int *)m_SaveData,4);
  }
  return uVar2;
}

/* 000deac4  CAmbientGeneric::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CAmbientGeneric::Restore(CRestore &) */

undefined4 __thiscall CAmbientGeneric::Restore(CAmbientGeneric *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CAmbientGeneric",(int)this,(int)m_SaveData,4);
  }
  return uVar2;
}

/* 000deb14  CAmbientGeneric::Spawn  (375 bytes)
 * undefined Spawn(void)
 */
/* CAmbientGeneric::Spawn(void) */

void __thiscall CAmbientGeneric::Spawn(CAmbientGeneric *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if ((this->pev->spawnflags & 1) == 0) {
    if ((this->pev->spawnflags & 2) == 0) {
      if (((this->pev->spawnflags & 4) == 0) && ((this->pev->spawnflags & 8) != 0)) {
        *(undefined4 *)&this->field_0x64 = 0x3f4ccccd;
      }
      else {
        *(undefined4 *)&this->field_0x64 = 0x3fa00000;
      }
    }
    else {
      *(undefined4 *)&this->field_0x64 = 0x40000000;
    }
  }
  else {
    *(undefined4 *)&this->field_0x64 = 0;
  }
  iVar2 = this->pev->message;
  if (iVar2 != 0) {
    iVar3 = -1;
    pcVar4 = gpGlobals->pStringBase + iVar2;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      this->pev->solid = 0;
      this->pev->movetype = 0;
      *(undefined4 *)&this->field_0xc = 0xffff0000;
      *(code **)&this->field_0x10 = RampThink;
      this->pev->nextthink = 0.0;
      *(undefined4 *)&this->field_0x1c = 0xffff0000;
      *(code **)&this->field_0x20 = ToggleUse;
      *(undefined4 *)&this->field_0xcc = 0;
      *(uint *)&this->field_0xd0 = (uint)((this->pev->spawnflags & 0x20) == 0);
      (*this->vtable[10])(this);
      return;
    }
  }
  (*g_engfuncs.pfnAlertMessage)
            (at_error,"EMPTY AMBIENT AT: %f, %f, %f\n",(double)this->pev->origin[0],
             (double)this->pev->origin[1],(double)this->pev->origin[2]);
  this->pev->nextthink = gpGlobals->time + 0.1;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
  return;
}

/* 000dec90  CAmbientGeneric::Precache  (244 bytes)
 * undefined Precache(void)
 */
/* CAmbientGeneric::Precache(void) */

void __thiscall CAmbientGeneric::Precache(CAmbientGeneric *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *s;
  char *pcVar4;
  
  iVar2 = this->pev->message;
  s = gpGlobals->pStringBase + iVar2;
  if (iVar2 != 0) {
    uVar3 = 0xffffffff;
    pcVar4 = s;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if ((1 < ~uVar3 - 1) && (*s != '!')) {
      (*g_engfuncs.pfnPrecacheSound)(s);
    }
  }
  InitModulationParms(this);
  if (((this->pev->spawnflags & 0x10) == 0) && (*(int *)&this->field_0xd0 != 0)) {
    *(undefined4 *)&this->field_0xcc = 1;
  }
  if (*(int *)&this->field_0xcc != 0) {
    UTIL_EmitAmbientSound
              (this->pev->pContainingEntity,this->pev->origin,s,
               (float)*(int *)&this->field_0xb4 * 0.01,*(undefined4 *)&this->field_0x64,0x100,
               *(int *)&this->field_0xa4);
    this->pev->nextthink = gpGlobals->time + 0.1;
  }
  return;
}

/* 000ded84  CAmbientGeneric::RampThink  (1032 bytes)
 * undefined RampThink(void)
 */
/* CAmbientGeneric::RampThink(void) */

void __thiscall CAmbientGeneric::RampThink(CAmbientGeneric *this)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  uint local_1c;
  
  pcVar1 = gpGlobals->pStringBase;
  iVar2 = this->pev->message;
  iVar3 = *(int *)&this->field_0xa4;
  uVar7 = *(uint *)&this->field_0xb4;
  local_1c = 0;
  bVar10 = false;
  if ((((*(int *)&this->field_0x74 == 0) && (*(int *)&this->field_0x78 == 0)) &&
      (*(int *)&this->field_0x84 == 0)) &&
     ((*(int *)&this->field_0x88 == 0 && (*(int *)&this->field_0x8c == 0)))) {
    return;
  }
  if ((*(int *)&this->field_0x74 != 0) || (*(int *)&this->field_0x78 != 0)) {
    iVar9 = *(int *)&this->field_0xb0;
    if (*(int *)&this->field_0x74 < 1) {
      if (0 < *(int *)&this->field_0x78) {
        iVar3 = *(int *)&this->field_0xb0 - *(int *)&this->field_0x78;
        goto LAB_000dee33;
      }
    }
    else {
      iVar3 = iVar9 + *(int *)&this->field_0x74;
LAB_000dee33:
      *(int *)&this->field_0xb0 = iVar3;
    }
    iVar3 = *(int *)&this->field_0xb0 >> 8;
    if (*(int *)&this->field_0x6c < iVar3) {
      iVar3 = *(int *)&this->field_0x6c;
      *(undefined4 *)&this->field_0x74 = 0;
    }
    if (iVar3 < *(int *)&this->field_0x70) {
      *(undefined4 *)&this->field_0x78 = 0;
      goto LAB_000def12;
    }
    if (0xff < iVar3) {
      iVar3 = 0xff;
    }
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    *(int *)&this->field_0xa4 = iVar3;
    bVar10 = iVar9 >> 8 != iVar3;
    local_1c = 0x80;
  }
  if ((*(int *)&this->field_0x84 != 0) || (*(int *)&this->field_0x88 != 0)) {
    iVar9 = *(int *)&this->field_0xc0;
    if (*(int *)&this->field_0x84 < 1) {
      if (0 < *(int *)&this->field_0x88) {
        iVar4 = *(int *)&this->field_0xc0 - *(int *)&this->field_0x88;
        goto LAB_000deedd;
      }
    }
    else {
      iVar4 = iVar9 + *(int *)&this->field_0x84;
LAB_000deedd:
      *(int *)&this->field_0xc0 = iVar4;
    }
    uVar7 = *(int *)&this->field_0xc0 >> 8;
    if (*(int *)&this->field_0x7c < (int)uVar7) {
      uVar7 = *(uint *)&this->field_0x7c;
      *(undefined4 *)&this->field_0x84 = 0;
    }
    if ((int)uVar7 < *(int *)&this->field_0x80) {
      *(undefined4 *)&this->field_0x88 = 0;
LAB_000def12:
      UTIL_EmitAmbientSound
                (this->pev->pContainingEntity,this->pev->origin,pcVar1 + iVar2,0,0,0x20,0);
      return;
    }
    if (100 < (int)uVar7) {
      uVar7 = 100;
    }
    if ((int)uVar7 < 1) {
      uVar7 = 1;
    }
    *(uint *)&this->field_0xb4 = uVar7;
    bVar10 = (bool)(bVar10 | iVar9 >> 8 != uVar7);
    local_1c = local_1c | 0x40;
  }
  uVar8 = uVar7;
  iVar9 = iVar3;
  if (*(int *)&this->field_0x8c == 0) goto LAB_000df11f;
  if (0x6fffffff < *(int *)&this->field_0xc4) {
    *(undefined4 *)&this->field_0xc4 = 0;
  }
  iVar4 = *(int *)&this->field_0x90;
  iVar5 = *(int *)&this->field_0xc4 + iVar4;
  *(int *)&this->field_0xc4 = iVar5;
  iVar6 = iVar5 >> 8;
  if (iVar5 < 0) {
    *(undefined4 *)&this->field_0xc4 = 0;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    *(int *)&this->field_0x90 = iVar4;
    iVar6 = 0;
  }
  else if (0xff < iVar6) {
    iVar6 = 0xff;
    *(undefined4 *)&this->field_0xc4 = 0xff00;
    iVar4 = *(int *)&this->field_0x90;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    *(int *)&this->field_0x90 = -iVar4;
  }
  iVar4 = *(int *)&this->field_0x8c;
  if (iVar4 == 2) {
LAB_000df060:
    *(int *)&this->field_0xc8 = iVar6;
  }
  else if (iVar4 < 3) {
    if (iVar4 != 1) goto LAB_000df060;
    *(uint *)&this->field_0xc8 = ((iVar6 < 0x80) - 1 & 0xffffff01) + 0xff;
  }
  else {
    if (iVar4 != 3) goto LAB_000df060;
    if (iVar6 == 0xff) {
      iVar4 = (*g_engfuncs.pfnRandomLong)(0,0xff);
      *(int *)&this->field_0xc8 = iVar4;
    }
  }
  if (*(int *)&this->field_0x94 != 0) {
    iVar9 = iVar3 + ((*(int *)&this->field_0xc8 + -0x80) * *(int *)&this->field_0x94) / 100;
    if (0xff < iVar9) {
      iVar9 = 0xff;
    }
    if (iVar9 < 1) {
      iVar9 = 1;
    }
    bVar10 = (bool)(bVar10 | iVar3 != iVar9);
    local_1c = local_1c | 0x80;
  }
  if (*(int *)&this->field_0x98 != 0) {
    uVar8 = uVar7 + ((*(int *)&this->field_0xc8 + -0x80) * *(int *)&this->field_0x98) / 100;
    if (100 < (int)uVar8) {
      uVar8 = 100;
    }
    uVar8 = uVar8 & 0xffffffffU - ((int)uVar8 >> 0x1f);
    bVar10 = (bool)(bVar10 | uVar7 != uVar8);
    local_1c = local_1c | 0x40;
  }
LAB_000df11f:
  if ((local_1c != 0) && (bVar10)) {
    if (iVar9 == 100) {
      iVar9 = 0x65;
    }
    UTIL_EmitAmbientSound
              (this->pev->pContainingEntity,this->pev->origin,pcVar1 + iVar2,
               (float)(int)uVar8 * 0.01,*(undefined4 *)&this->field_0x64,local_1c,iVar9);
  }
  this->pev->nextthink = gpGlobals->time + 0.2;
  return;
}

/* 000df198  CAmbientGeneric::InitModulationParms  (597 bytes)
 * undefined InitModulationParms(void)
 */
/* CAmbientGeneric::InitModulationParms(void) */

void __thiscall CAmbientGeneric::InitModulationParms(CAmbientGeneric *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = (int)ROUND(this->pev->health * 10.0);
  *(int *)&this->field_0x7c = iVar2;
  if (100 < iVar2) {
    *(undefined4 *)&this->field_0x7c = 100;
  }
  if (*(int *)&this->field_0x7c < 0) {
    *(undefined4 *)&this->field_0x7c = 0;
  }
  if ((*(int *)&this->field_0x68 != 0) && (*(int *)&this->field_0x68 < 0x1c)) {
    puVar3 = (undefined4 *)(CHalfLifeRules_virtual_table + *(int *)&this->field_0x68 * 100 + 0x9c);
    puVar4 = (undefined4 *)&this->field_0x68;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    if (0 < *(int *)&this->field_0x78) {
      *(int *)&this->field_0x78 = (0x65 - *(int *)&this->field_0x78) * 0x40;
    }
    if (0 < *(int *)&this->field_0x74) {
      *(int *)&this->field_0x74 = (0x65 - *(int *)&this->field_0x74) * 0x40;
    }
    *(int *)&this->field_0x80 = *(int *)&this->field_0x80 * 10;
    *(int *)&this->field_0x7c = *(int *)&this->field_0x7c * 10;
    if (0 < *(int *)&this->field_0x84) {
      *(int *)&this->field_0x84 = (0x65 - *(int *)&this->field_0x84) * 0x40;
    }
    if (0 < *(int *)&this->field_0x88) {
      *(int *)&this->field_0x88 = (0x65 - *(int *)&this->field_0x88) * 0x40;
    }
    *(int *)&this->field_0x90 = *(int *)&this->field_0x90 << 8;
    *(undefined4 *)&this->field_0xb8 = *(undefined4 *)&this->field_0x84;
    *(undefined4 *)&this->field_0xbc = *(undefined4 *)&this->field_0x88;
    *(undefined4 *)&this->field_0xa8 = *(undefined4 *)&this->field_0x74;
    *(undefined4 *)&this->field_0xac = *(undefined4 *)&this->field_0x78;
  }
  *(int *)&this->field_0x84 = *(int *)&this->field_0xb8;
  *(undefined4 *)&this->field_0x88 = 0;
  if (*(int *)&this->field_0xb8 == 0) {
    uVar1 = *(undefined4 *)&this->field_0x7c;
  }
  else {
    uVar1 = *(undefined4 *)&this->field_0x80;
  }
  *(undefined4 *)&this->field_0xb4 = uVar1;
  *(int *)&this->field_0x74 = *(int *)&this->field_0xa8;
  *(undefined4 *)&this->field_0x78 = 0;
  if (*(int *)&this->field_0xa8 == 0) {
    uVar1 = *(undefined4 *)&this->field_0x6c;
  }
  else {
    uVar1 = *(undefined4 *)&this->field_0x70;
  }
  *(undefined4 *)&this->field_0xa4 = uVar1;
  if (*(int *)&this->field_0xa4 == 0) {
    *(undefined4 *)&this->field_0xa4 = 100;
  }
  *(int *)&this->field_0xb0 = *(int *)&this->field_0xa4 << 8;
  *(int *)&this->field_0xc0 = *(int *)&this->field_0xb4 << 8;
  *(undefined4 *)&this->field_0xc4 = 0;
  iVar2 = *(int *)&this->field_0x90;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  *(int *)&this->field_0x90 = iVar2;
  *(undefined4 *)&this->field_0xa0 = 1;
  if ((*(int *)&this->field_0x9c != 0) &&
     (iVar2 = (0xff - *(int *)&this->field_0x70) / *(int *)&this->field_0x9c +
              *(int *)&this->field_0x70, *(int *)&this->field_0x6c = iVar2, 0xff < iVar2)) {
    *(undefined4 *)&this->field_0x6c = 0xff;
  }
  if ((((*(int *)&this->field_0xa8 != 0) || (*(int *)&this->field_0xac != 0)) ||
      ((*(int *)&this->field_0x8c != 0 && (*(int *)&this->field_0x94 != 0)))) &&
     (*(int *)&this->field_0xa4 == 100)) {
    *(undefined4 *)&this->field_0xa4 = 0x65;
  }
  return;
}

/* 000df3f4  CAmbientGeneric::ToggleUse  (621 bytes)
 * undefined ToggleUse(undefined4 param_1, undefined4 param_2, int param_3, float param_4)
 */
/* CAmbientGeneric::ToggleUse(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void __thiscall
CAmbientGeneric::ToggleUse
          (CAmbientGeneric *this,undefined4 param_1,undefined4 param_2,int param_3,float param_4)

{
  int *piVar1;
  int iVar2;
  entvars_t *peVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar4 = gpGlobals->pStringBase + this->pev->message;
  if (param_3 != 3) {
    if ((*(int *)&this->field_0xcc != 0) && (param_3 == 1)) {
      return;
    }
    if ((*(int *)&this->field_0xcc == 0) && (param_3 == 0)) {
      return;
    }
  }
  if ((param_3 == 2) && (*(int *)&this->field_0xcc != 0)) {
    if (1.0 < param_4) {
      param_4 = 1.0;
    }
    if (param_4 < 0.0) {
      param_4 = 0.01;
    }
    iVar2 = (int)ROUND(param_4 * 255.0);
    *(int *)&this->field_0xa4 = iVar2;
    peVar3 = this->pev;
    uVar5 = 0x80;
LAB_000df5a9:
    UTIL_EmitAmbientSound(peVar3->pContainingEntity,this->pev->origin,pcVar4,0,0,uVar5,iVar2);
  }
  else {
    if (*(int *)&this->field_0xcc == 0) {
      if (*(int *)&this->field_0xd0 == 0) {
        UTIL_EmitAmbientSound(this->pev->pContainingEntity,this->pev->origin,pcVar4,0,0,0x20,0);
      }
      else {
        *(undefined4 *)&this->field_0xcc = 1;
      }
      InitModulationParms(this);
      UTIL_EmitAmbientSound
                (this->pev->pContainingEntity,this->pev->origin,pcVar4,
                 (float)*(int *)&this->field_0xb4 * 0.01,*(undefined4 *)&this->field_0x64,0,
                 *(int *)&this->field_0xa4);
      this->pev->nextthink = gpGlobals->time + 0.1;
      return;
    }
    if (*(int *)&this->field_0x9c == 0) {
      *(undefined4 *)&this->field_0xcc = 0;
      piVar1 = &this->pev->spawnflags;
      *piVar1 = *piVar1 | 0x10;
      if ((*(int *)&this->field_0xac == 0) && (*(int *)&this->field_0xbc == 0)) {
        peVar3 = this->pev;
        iVar2 = 0;
        uVar5 = 0x20;
        goto LAB_000df5a9;
      }
      *(undefined4 *)&this->field_0x78 = *(undefined4 *)&this->field_0xac;
      *(undefined4 *)&this->field_0x74 = 0;
      *(undefined4 *)&this->field_0x88 = *(undefined4 *)&this->field_0xbc;
      *(undefined4 *)&this->field_0x84 = 0;
    }
    else {
      if (*(int *)&this->field_0x9c < *(int *)&this->field_0xa0) {
        return;
      }
      *(int *)&this->field_0xa0 = *(int *)&this->field_0xa0 + 1;
      *(undefined4 *)&this->field_0x74 = *(undefined4 *)&this->field_0xa8;
      *(undefined4 *)&this->field_0x78 = 0;
      iVar2 = ((0xff - *(int *)&this->field_0x70) / *(int *)&this->field_0x9c) *
              *(int *)&this->field_0xa0 + *(int *)&this->field_0x70;
      *(int *)&this->field_0x6c = iVar2;
      if (0xff < iVar2) {
        *(undefined4 *)&this->field_0x6c = 0xff;
      }
    }
    this->pev->nextthink = gpGlobals->time + 0.1;
  }
  return;
}

/* 000df668  CAmbientGeneric::KeyValue  (1280 bytes)
 * undefined KeyValue(int param_1)
 */
/* CAmbientGeneric::KeyValue(KeyValueData_s *) */

void __thiscall CAmbientGeneric::KeyValue(CAmbientGeneric *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"preset");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0x68 = uVar2;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"pitch");
    if (iVar1 == 0) {
      uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      *(undefined4 *)&this->field_0x6c = uVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
      if (0xff < *(int *)&this->field_0x6c) {
        *(undefined4 *)&this->field_0x6c = 0xff;
      }
      if (-1 < *(int *)&this->field_0x6c) {
        return;
      }
      *(undefined4 *)&this->field_0x6c = 0;
      return;
    }
    iVar1 = strcmp(*(char **)(param_1 + 4),"pitchstart");
    if (iVar1 == 0) {
      uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      *(undefined4 *)&this->field_0x70 = uVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
      if (0xff < *(int *)&this->field_0x70) {
        *(undefined4 *)&this->field_0x70 = 0xff;
      }
      if (-1 < *(int *)&this->field_0x70) {
        return;
      }
      *(undefined4 *)&this->field_0x70 = 0;
      return;
    }
    iVar1 = strcmp(*(char **)(param_1 + 4),"spinup");
    if (iVar1 == 0) {
      iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      *(int *)&this->field_0x74 = iVar1;
      if (100 < iVar1) {
        *(undefined4 *)&this->field_0x74 = 100;
      }
      if (*(int *)&this->field_0x74 < 0) {
        *(undefined4 *)&this->field_0x74 = 0;
      }
      if (0 < *(int *)&this->field_0x74) {
        *(int *)&this->field_0x74 = (0x65 - *(int *)&this->field_0x74) * 0x40;
      }
      *(undefined4 *)&this->field_0xa8 = *(undefined4 *)&this->field_0x74;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"spindown");
      if (iVar1 == 0) {
        iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
        *(int *)&this->field_0x78 = iVar1;
        if (100 < iVar1) {
          *(undefined4 *)&this->field_0x78 = 100;
        }
        if (*(int *)&this->field_0x78 < 0) {
          *(undefined4 *)&this->field_0x78 = 0;
        }
        if (0 < *(int *)&this->field_0x78) {
          *(int *)&this->field_0x78 = (0x65 - *(int *)&this->field_0x78) * 0x40;
        }
        *(undefined4 *)&this->field_0xac = *(undefined4 *)&this->field_0x78;
      }
      else {
        iVar1 = strcmp(*(char **)(param_1 + 4),"volstart");
        if (iVar1 == 0) {
          iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
          *(int *)&this->field_0x80 = iVar1;
          if (10 < iVar1) {
            *(undefined4 *)&this->field_0x80 = 10;
          }
          if (*(int *)&this->field_0x80 < 0) {
            *(undefined4 *)&this->field_0x80 = 0;
          }
          *(int *)&this->field_0x80 = *(int *)&this->field_0x80 * 10;
        }
        else {
          iVar1 = strcmp(*(char **)(param_1 + 4),"fadein");
          if (iVar1 == 0) {
            iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
            *(int *)&this->field_0x84 = iVar1;
            if (100 < iVar1) {
              *(undefined4 *)&this->field_0x84 = 100;
            }
            if (*(int *)&this->field_0x84 < 0) {
              *(undefined4 *)&this->field_0x84 = 0;
            }
            if (0 < *(int *)&this->field_0x84) {
              *(int *)&this->field_0x84 = (0x65 - *(int *)&this->field_0x84) * 0x40;
            }
            *(undefined4 *)&this->field_0xb8 = *(undefined4 *)&this->field_0x84;
          }
          else {
            iVar1 = strcmp(*(char **)(param_1 + 4),"fadeout");
            if (iVar1 == 0) {
              iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
              *(int *)&this->field_0x88 = iVar1;
              if (100 < iVar1) {
                *(undefined4 *)&this->field_0x88 = 100;
              }
              if (*(int *)&this->field_0x88 < 0) {
                *(undefined4 *)&this->field_0x88 = 0;
              }
              if (0 < *(int *)&this->field_0x88) {
                *(int *)&this->field_0x88 = (0x65 - *(int *)&this->field_0x88) * 0x40;
              }
              *(undefined4 *)&this->field_0xbc = *(undefined4 *)&this->field_0x88;
            }
            else {
              iVar1 = strcmp(*(char **)(param_1 + 4),"lfotype");
              if (iVar1 == 0) {
                iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
                *(int *)&this->field_0x8c = iVar1;
                if (4 < iVar1) {
                  *(undefined4 *)&this->field_0x8c = 2;
                }
              }
              else {
                iVar1 = strcmp(*(char **)(param_1 + 4),"lforate");
                if (iVar1 == 0) {
                  iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
                  *(int *)&this->field_0x90 = iVar1;
                  if (1000 < iVar1) {
                    *(undefined4 *)&this->field_0x90 = 1000;
                  }
                  if (*(int *)&this->field_0x90 < 0) {
                    *(undefined4 *)&this->field_0x90 = 0;
                  }
                  *(int *)&this->field_0x90 = *(int *)&this->field_0x90 << 8;
                }
                else {
                  iVar1 = strcmp(*(char **)(param_1 + 4),"lfomodpitch");
                  if (iVar1 == 0) {
                    iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
                    *(int *)&this->field_0x94 = iVar1;
                    if (100 < iVar1) {
                      *(undefined4 *)&this->field_0x94 = 100;
                    }
                    if (*(int *)&this->field_0x94 < 0) {
                      *(undefined4 *)&this->field_0x94 = 0;
                    }
                  }
                  else {
                    iVar1 = strcmp(*(char **)(param_1 + 4),"lfomodvol");
                    if (iVar1 == 0) {
                      iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
                      *(int *)&this->field_0x98 = iVar1;
                      if (100 < iVar1) {
                        *(undefined4 *)&this->field_0x98 = 100;
                      }
                      if (*(int *)&this->field_0x98 < 0) {
                        *(undefined4 *)&this->field_0x98 = 0;
                      }
                    }
                    else {
                      iVar1 = strcmp(*(char **)(param_1 + 4),"cspinup");
                      if (iVar1 != 0) {
                        *(undefined4 *)(param_1 + 0xc) = 0;
                        return;
                      }
                      iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
                      *(int *)&this->field_0x9c = iVar1;
                      if (100 < iVar1) {
                        *(undefined4 *)&this->field_0x9c = 100;
                      }
                      if (*(int *)&this->field_0x9c < 0) {
                        *(undefined4 *)&this->field_0x9c = 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 000e1fc8  CAmbientGeneric::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CAmbientGeneric::ObjectCaps(void) */

undefined4 CAmbientGeneric::ObjectCaps(void)

{
  return 0;
}

