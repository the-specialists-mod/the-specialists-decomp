/* ts_i386.so - CWeaponBox (13 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f27c8  CWeaponBox::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CWeaponBox::Save(CSave &) */

undefined4 __thiscall CWeaponBox::Save(CWeaponBox *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CWeaponBox",(int)this,(int *)m_SaveData,4);
  }
  return uVar2;
}

/* 000f2818  CWeaponBox::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CWeaponBox::Restore(CRestore &) */

undefined4 __thiscall CWeaponBox::Restore(CWeaponBox *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CWeaponBox",(int)this,(int)m_SaveData,4);
  }
  return uVar2;
}

/* 000f2868  CWeaponBox::Precache  (39 bytes)
 * undefined Precache(void)
 */
/* CWeaponBox::Precache(void) */

void CWeaponBox::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)("models/w_weaponbox.mdl");
  return;
}

/* 000f2890  CWeaponBox::KeyValue  (126 bytes)
 * undefined KeyValue(int param_1)
 */
/* CWeaponBox::KeyValue(KeyValueData_s *) */

void __thiscall CWeaponBox::KeyValue(CWeaponBox *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)&this->field_0x17c < 0x20) {
    iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 4));
    PackAmmo(this,iVar2,iVar1);
    *(int *)&this->field_0x17c = *(int *)&this->field_0x17c + 1;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    (*g_engfuncs.pfnAlertMessage)(at_console,"WeaponBox too full! only %d ammotypes allowed\n",0x20)
    ;
  }
  return;
}

/* 000f2914  CWeaponBox::Spawn  (106 bytes)
 * undefined Spawn(void)
 */
/* CWeaponBox::Spawn(void) */

void __thiscall CWeaponBox::Spawn(CWeaponBox *this)

{
  (*this->vtable[10])(this);
  this->pev->movetype = 6;
  this->pev->solid = 1;
  UTIL_SetSize((int)this->pev,&g_vecZero,&g_vecZero);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/w_weaponbox.mdl");
  return;
}

/* 000f2980  CWeaponBox::Kill  (256 bytes)
 * undefined Kill(void)
 */
/* CWeaponBox::Kill(void) */

void __thiscall CWeaponBox::Kill(CWeaponBox *this)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  puVar3 = (undefined4 *)&this->field_0x64;
  do {
    for (piVar1 = (int *)*puVar3; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x21]) {
      piVar1[3] = -0x10000;
      piVar1[4] = (int)CBaseEntity::SUB_Remove;
      *(float *)(*piVar1 + 0x104) = gpGlobals->time + 0.1;
    }
    for (piVar1 = (int *)puVar3[1]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x21]) {
      piVar1[3] = -0x10000;
      piVar1[4] = (int)CBaseEntity::SUB_Remove;
      *(float *)(*piVar1 + 0x104) = gpGlobals->time + 0.1;
    }
    for (piVar1 = (int *)puVar3[2]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x21]) {
      piVar1[3] = -0x10000;
      piVar1[4] = (int)CBaseEntity::SUB_Remove;
      *(float *)(*piVar1 + 0x104) = gpGlobals->time + 0.1;
    }
    puVar3 = puVar3 + 3;
    iVar2 = iVar2 + 3;
  } while (iVar2 < 6);
  UTIL_Remove((int *)this);
  return;
}

/* 000f2a80  CWeaponBox::Touch  (705 bytes)
 * undefined Touch(int * param_1)
 */
/* CWeaponBox::Touch(CBaseEntity *) */

void __thiscall CWeaponBox::Touch(CWeaponBox *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  CWeaponBox *pCVar5;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  CWeaponBox *local_20;
  int local_1c;
  int local_14;
  
  if ((((this->pev->flags & 0x200) != 0) &&
      (iVar1 = (**(code **)(param_1[0x18] + 200))(param_1), iVar1 != 0)) &&
     (iVar1 = (**(code **)(param_1[0x18] + 0xb4))(param_1), iVar1 != 0)) {
    local_14 = 0;
    puVar4 = &this->field_0xf0;
    local_34 = puVar4;
    local_30 = puVar4;
    local_2c = puVar4;
    local_28 = puVar4;
    do {
      if (*(int *)(local_34 + -0x74) != 0) {
        iVar1 = param_1[0x18];
        uVar2 = MaxAmmoCarry(*(int *)(local_34 + -0x74));
        (**(code **)(iVar1 + 0x8c))
                  (param_1,*(undefined4 *)(local_30 + 0xc),
                   gpGlobals->pStringBase + *(int *)(puVar4 + -0x74),uVar2);
        *(undefined4 *)(local_2c + -0x74) = 0;
        *(undefined4 *)(local_28 + 0xc) = 0;
      }
      if (*(int *)(local_34 + -0x70) != 0) {
        iVar1 = param_1[0x18];
        uVar2 = MaxAmmoCarry(*(int *)(local_34 + -0x70));
        (**(code **)(iVar1 + 0x8c))
                  (param_1,*(undefined4 *)(local_30 + 0x10),
                   gpGlobals->pStringBase + *(int *)(puVar4 + -0x70),uVar2);
        *(undefined4 *)(local_2c + -0x70) = 0;
        *(undefined4 *)(local_28 + 0x10) = 0;
      }
      local_28 = local_28 + 8;
      local_2c = local_2c + 8;
      local_30 = local_30 + 8;
      puVar4 = puVar4 + 8;
      local_34 = local_34 + 8;
      local_14 = local_14 + 2;
    } while (local_14 < 0x20);
    local_14 = 0;
    local_1c = 0;
    local_20 = this;
    pCVar5 = this;
    do {
      if (*(int *)&pCVar5->field_0x64 != 0) {
        iVar1 = *(int *)&local_20->field_0x64;
        iVar3 = local_1c;
        while (iVar1 != 0) {
          iVar1 = *(int *)(&this->field_0x64 + iVar3);
          *(undefined4 *)(&this->field_0x64 + iVar3) = *(undefined4 *)(iVar1 + 0x84);
          iVar3 = (**(code **)(param_1[0x18] + 0x84))(param_1,iVar1);
          if (iVar3 != 0) {
            (**(code **)(*(int *)(iVar1 + 0x60) + 0x148))(iVar1,param_1);
          }
          iVar3 = local_14 * 4;
          iVar1 = *(int *)(&this->field_0x64 + iVar3);
        }
      }
      if (*(int *)&pCVar5->field_0x68 != 0) {
        iVar1 = *(int *)&local_20->field_0x68;
        iVar3 = local_1c;
        while (iVar1 != 0) {
          iVar1 = *(int *)(&this->field_0x64 + iVar3 + 4);
          *(undefined4 *)(&this->field_0x64 + iVar3 + 4) = *(undefined4 *)(iVar1 + 0x84);
          iVar3 = (**(code **)(param_1[0x18] + 0x84))(param_1,iVar1);
          if (iVar3 != 0) {
            (**(code **)(*(int *)(iVar1 + 0x60) + 0x148))(iVar1,param_1);
          }
          iVar3 = local_14 * 4;
          iVar1 = *(int *)(&this->field_0x68 + iVar3);
        }
      }
      local_20 = (CWeaponBox *)&local_20->field_0x8;
      pCVar5 = (CWeaponBox *)&pCVar5->field_0x8;
      local_1c = local_1c + 8;
      local_14 = local_14 + 2;
    } while (local_14 < 6);
    EMIT_SOUND_DYN(*(int *)(*param_1 + 0x208),3,"items/gunpickup2.wav",0x3f800000,0x3f4ccccd,0,100,
                   0.5);
    *(undefined4 *)&this->field_0x14 = 0;
    *(undefined4 *)&this->field_0x18 = 0;
    UTIL_Remove((int *)this);
  }
  return;
}

/* 000f2d44  CWeaponBox::PackWeapon  (286 bytes)
 * undefined4 PackWeapon(int * param_1)
 */
/* CWeaponBox::PackWeapon(CBasePlayerItem *) */

undefined4 __thiscall CWeaponBox::PackWeapon(CWeaponBox *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = HasWeapon(this,param_1);
  if (iVar1 == 0) {
    if (param_1[0x20] != 0) {
      iVar1 = (**(code **)(*(int *)(param_1[0x20] + 0x60) + 0x88))(param_1[0x20],param_1);
      if (iVar1 == 0) goto LAB_000f2d95;
    }
    iVar3 = (**(code **)(param_1[0x18] + 0x15c))(param_1);
    iVar1 = iVar3 * 4;
    if (*(int *)(&this->field_0x64 + iVar1) == 0) {
      *(int **)(&this->field_0x64 + iVar3 * 4) = param_1;
      param_1[0x21] = 0;
    }
    else {
      param_1[0x21] = *(int *)(&this->field_0x64 + iVar1);
      *(int **)(&this->field_0x64 + iVar1) = param_1;
    }
    *(uint *)(*param_1 + 0x1a0) = *(uint *)(*param_1 + 0x1a0) | 0x40000000;
    *(undefined4 *)(*param_1 + 0x108) = 0;
    *(undefined4 *)(*param_1 + 0x10c) = 0;
    *(undefined4 *)(*param_1 + 0x118) = 0x80;
    *(undefined4 *)(*param_1 + 0xb4) = 0;
    *(undefined4 *)(*param_1 + 0xb8) = 0;
    *(edict_t **)(*param_1 + 0x198) = this->pev->pContainingEntity;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[0x20] = 0;
    uVar2 = 1;
  }
  else {
LAB_000f2d95:
    uVar2 = 0;
  }
  return uVar2;
}

/* 000f2e68  CWeaponBox::PackAmmo  (134 bytes)
 * undefined4 PackAmmo(int param_1, int param_2)
 */
/* CWeaponBox::PackAmmo(int, int) */

undefined4 __thiscall CWeaponBox::PackAmmo(CWeaponBox *this,int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"NULL String in PackAmmo!\n");
    uVar1 = 0;
  }
  else {
    iVar2 = MaxAmmoCarry(param_1);
    if ((iVar2 == -1) || (param_2 < 1)) {
      uVar1 = 0;
    }
    else {
      GiveAmmo(this,param_2,gpGlobals->pStringBase + param_1,iVar2,(int *)0x0);
      uVar1 = 1;
    }
  }
  return uVar1;
}

/* 000f2ef4  CWeaponBox::GiveAmmo  (551 bytes)
 * int GiveAmmo(CWeaponBox * this, int param_2, char * param_3, int param_4, int * param_5)
 */
/* CWeaponBox::GiveAmmo(int, char *, int, int *) */

int __thiscall
CWeaponBox::GiveAmmo(CWeaponBox *this,int param_2,char *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *local_18;
  undefined1 *local_14;
  
  iVar1 = 1;
  if (*(int *)&this->field_0x80 != 0) {
    iVar1 = strcasecmp(param_3,gpGlobals->pStringBase + *(int *)&this->field_0x80);
    if (iVar1 == 0) {
      if (param_5 != (int *)0x0) {
        *param_5 = 1;
      }
      iVar1 = param_4 - *(int *)&this->field_0x100;
      if (param_2 < iVar1) {
        iVar1 = param_2;
      }
      if ((param_2 != 0) && (iVar1 < 1)) {
        return unaff_EBP;
      }
      *(int *)&this->field_0x100 = *(int *)&this->field_0x100 + iVar1;
      return unaff_EBP;
    }
    puVar4 = &this->field_0xf8;
    iVar3 = 2;
    puVar5 = puVar4;
    local_18 = puVar4;
    local_14 = puVar4;
    do {
      iVar1 = iVar3;
      if (*(int *)(puVar4 + -0x74) == 0) break;
      iVar1 = strcasecmp(param_3,gpGlobals->pStringBase + *(int *)(puVar4 + -0x74));
      if (iVar1 == 0) {
        if (param_5 != (int *)0x0) {
          *param_5 = iVar3;
        }
        iVar1 = param_4 - *(int *)(local_18 + 0xc);
        if (param_2 < param_4 - *(int *)(local_18 + 0xc)) {
          iVar1 = param_2;
        }
        if ((param_2 != 0) && (iVar1 < 1)) {
          return unaff_EBP;
        }
        *(int *)(local_14 + 0xc) = iVar1 + *(int *)(puVar5 + 0xc);
        return unaff_EBP;
      }
      iVar1 = iVar3 + 1;
      if (*(int *)(puVar4 + -0x70) == 0) break;
      iVar2 = strcasecmp(param_3,gpGlobals->pStringBase + *(int *)(puVar4 + -0x70));
      if (iVar2 == 0) {
        if (param_5 != (int *)0x0) {
          *param_5 = iVar1;
        }
        iVar1 = param_4 - *(int *)(local_18 + 0x10);
        if (param_2 < param_4 - *(int *)(local_18 + 0x10)) {
          iVar1 = param_2;
        }
        if ((param_2 != 0) && (iVar1 < 1)) {
          return unaff_EBP;
        }
        *(int *)(local_14 + 0x10) = iVar1 + *(int *)(puVar5 + 0x10);
        return unaff_EBP;
      }
      local_14 = local_14 + 8;
      puVar5 = puVar5 + 8;
      local_18 = local_18 + 8;
      puVar4 = puVar4 + 8;
      iVar1 = iVar3 + 2;
      iVar3 = iVar1;
    } while (iVar1 < 0x20);
  }
  if (iVar1 < 0x20) {
    if (param_5 != (int *)0x0) {
      *param_5 = iVar1;
    }
    *(int *)(&this->field_0x7c + iVar1 * 4) = (int)param_3 - (int)gpGlobals->pStringBase;
    *(int *)(&this->field_0xfc + iVar1 * 4) = param_2;
  }
  else {
    (*g_engfuncs.pfnAlertMessage)(at_console,"out of named ammo slots\n");
  }
  return unaff_EBP;
}

/* 000f3128  CWeaponBox::HasWeapon  (124 bytes)
 * undefined4 HasWeapon(undefined4 * param_1)
 */
/* CWeaponBox::HasWeapon(CBasePlayerItem *) */

undefined4 __thiscall CWeaponBox::HasWeapon(CWeaponBox *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  globalvars_t *pgVar2;
  int iVar3;
  
  iVar3 = (**(code **)(param_1[0x18] + 0x15c))(param_1);
  pgVar2 = gpGlobals;
  puVar1 = *(undefined4 **)(&this->field_0x64 + iVar3 * 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar3 = strcmp(pgVar2->pStringBase + *(int *)*puVar1,pgVar2->pStringBase + *(int *)*param_1);
    if (iVar3 == 0) break;
    puVar1 = (undefined4 *)puVar1[0x21];
  }
  return 1;
}

/* 000f31a8  CWeaponBox::IsEmpty  (94 bytes)
 * undefined4 IsEmpty(void)
 */
/* CWeaponBox::IsEmpty(void) */

undefined4 __thiscall CWeaponBox::IsEmpty(CWeaponBox *this)

{
  int *piVar1;
  int iVar2;
  
  if (((((*(int *)&this->field_0x64 == 0) && (*(int *)&this->field_0x68 == 0)) &&
       (*(int *)&this->field_0x6c == 0)) &&
      ((*(int *)&this->field_0x70 == 0 && (*(int *)&this->field_0x74 == 0)))) &&
     (*(int *)&this->field_0x78 == 0)) {
    piVar1 = (int *)&this->field_0x7c;
    iVar2 = 0;
    while (((*piVar1 == 0 && (piVar1[1] == 0)) && ((piVar1[2] == 0 && (piVar1[3] == 0))))) {
      piVar1 = piVar1 + 4;
      iVar2 = iVar2 + 4;
      if (0x1f < iVar2) {
        return 1;
      }
    }
  }
  return 0;
}

/* 000f320c  CWeaponBox::SetObjectCollisionBox  (189 bytes)
 * undefined SetObjectCollisionBox(void)
 */
/* CWeaponBox::SetObjectCollisionBox(void) */

void __thiscall CWeaponBox::SetObjectCollisionBox(CWeaponBox *this)

{
  entvars_t *peVar1;
  int iVar2;
  float *pfVar3;
  vec_t *pvVar4;
  float local_3c [4];
  float local_2c [7];
  
  peVar1 = this->pev;
  local_3c[0] = -16.0;
  local_3c[1] = -16.0;
  local_3c[2] = 0.0;
  local_2c[0] = peVar1->origin[0] + -16.0;
  local_2c[1] = peVar1->origin[1] + -16.0;
  local_2c[2] = peVar1->origin[2] + 0.0;
  pfVar3 = local_2c;
  pvVar4 = peVar1->absmin;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  peVar1 = this->pev;
  local_2c[0] = 16.0;
  local_2c[1] = 16.0;
  local_2c[2] = 16.0;
  local_3c[0] = peVar1->origin[0] + 16.0;
  local_3c[1] = peVar1->origin[1] + 16.0;
  local_3c[2] = peVar1->origin[2] + 16.0;
  pfVar3 = local_3c;
  pvVar4 = peVar1->absmax;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  return;
}

