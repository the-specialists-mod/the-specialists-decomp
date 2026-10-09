/* ts_i386.so - CEnvExplosion (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000bf9f4  CEnvExplosion::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CEnvExplosion::Save(CSave &) */

undefined4 __thiscall CEnvExplosion::Save(CEnvExplosion *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Save((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CEnvExplosion",(int)this,(int *)m_SaveData,2);
  }
  return uVar2;
}

/* 000bfa44  CEnvExplosion::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CEnvExplosion::Restore(CRestore &) */

undefined4 __thiscall CEnvExplosion::Restore(CEnvExplosion *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Restore((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CEnvExplosion",(int)this,(int)m_SaveData,2);
  }
  return uVar2;
}

/* 000bfab8  CEnvExplosion::KeyValue  (95 bytes)
 * undefined KeyValue(int param_1)
 */
/* CEnvExplosion::KeyValue(KeyValueData_s *) */

void __thiscall CEnvExplosion::KeyValue(CEnvExplosion *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"iMagnitude");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0x164 = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

/* 000bfb1c  CEnvExplosion::Spawn  (145 bytes)
 * undefined Spawn(void)
 */
/* CEnvExplosion::Spawn(void) */

void __thiscall CEnvExplosion::Spawn(CEnvExplosion *this)

{
  float fVar1;
  
  this->pev->solid = 0;
  this->pev->effects = 0x80;
  this->pev->movetype = 0;
  fVar1 = (float)(*(int *)&this->field_0x164 + -0x32) * 0.6;
  if (fVar1 < 10.0) {
    fVar1 = 10.0;
  }
  *(int *)&this->field_0x168 = (int)ROUND(fVar1);
  return;
}

/* 000bfbb0  CEnvExplosion::Use  (1136 bytes)
 * undefined Use(CBaseMonster * param_1)
 */
/* CEnvExplosion::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CEnvExplosion::Use(CBaseMonster *param_1)

{
  entvars_t *peVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  vec_t *pvVar6;
  float *pfVar7;
  vec_t *pvVar8;
  longdouble extraout_ST0;
  vec_t local_8c;
  float local_88;
  float local_84;
  float local_7c [4];
  float local_6c [4];
  undefined1 local_5c [16];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  
  param_1->pev->model = 0;
  param_1->pev->solid = 0;
  peVar1 = param_1->pev;
  local_8c = 0.0;
  local_88 = 0.0;
  local_84 = 8.0;
  local_7c[0] = peVar1->origin[0] + 0.0;
  local_7c[1] = peVar1->origin[1] + 0.0;
  local_7c[2] = peVar1->origin[2] + 8.0;
  pfVar5 = local_7c;
  pfVar7 = local_6c;
  for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar7 = pfVar7 + 1;
  }
  local_7c[2] = -40.0;
  local_8c = local_6c[0] + 0.0;
  local_88 = local_6c[1] + 0.0;
  local_84 = local_6c[2] + -40.0;
  local_7c[0] = 0.0;
  local_7c[1] = 0.0;
  UTIL_TraceLine(local_6c,&local_8c,1,param_1->pev->pContainingEntity,local_5c);
  if (local_4c == 1.0) {
    pvVar6 = param_1->pev->origin;
    iVar4 = 3;
    pvVar8 = pvVar6;
  }
  else {
    fVar2 = (float)(*(int *)&param_1[3].field_0x38 + -0x18);
    local_7c[0] = fVar2 * local_38 * 0.6;
    local_7c[1] = fVar2 * local_34 * 0.6;
    local_7c[2] = fVar2 * local_30 * 0.6;
    local_8c = local_48 + local_7c[0];
    local_88 = local_44 + local_7c[1];
    local_84 = local_40 + local_7c[2];
    iVar4 = 3;
    pvVar6 = &local_8c;
    pvVar8 = param_1->pev->origin;
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pvVar8 = *pvVar6;
    pvVar6 = pvVar6 + 1;
    pvVar8 = pvVar8 + 1;
  }
  if ((param_1->pev->spawnflags & 0x10) == 0) {
    (*g_engfuncs.pfnRandomFloat)(0.0,1.0);
    if ((longdouble)0.5 <= extraout_ST0) {
      iVar4 = 0xc;
    }
    else {
      iVar4 = 0xb;
    }
    UTIL_DecalTrace((int)local_5c,iVar4);
  }
  if ((param_1->pev->spawnflags & 4) == 0) {
    (*g_engfuncs.pfnMessageBegin)(5,0x17,param_1->pev->origin,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(3);
    (*g_engfuncs.pfnWriteCoord)(param_1->pev->origin[0]);
    (*g_engfuncs.pfnWriteCoord)(param_1->pev->origin[1]);
    (*g_engfuncs.pfnWriteCoord)(param_1->pev->origin[2]);
    (*g_engfuncs.pfnWriteShort)((int)g_sModelIndexFireball);
    uVar3 = (uint)(byte)param_1[3].field_0x3c;
  }
  else {
    (*g_engfuncs.pfnMessageBegin)(5,0x17,param_1->pev->origin,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(3);
    (*g_engfuncs.pfnWriteCoord)(param_1->pev->origin[0]);
    (*g_engfuncs.pfnWriteCoord)(param_1->pev->origin[1]);
    (*g_engfuncs.pfnWriteCoord)(param_1->pev->origin[2]);
    (*g_engfuncs.pfnWriteShort)((int)g_sModelIndexFireball);
    uVar3 = 0;
  }
  (*g_engfuncs.pfnWriteByte)(uVar3);
  (*g_engfuncs.pfnWriteByte)(0xf);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnMessageEnd)();
  if ((((byte)param_1->pev->spawnflags ^ 1) & 1) != 0) {
    CBaseMonster::RadiusDamage
              (param_1,param_1->pev,param_1->pev,(float)*(int *)&param_1[3].field_0x38);
  }
  *(undefined4 *)&param_1->field_0xc = 0xffff0000;
  *(code **)&param_1->field_0x10 = Smoke;
  param_1->pev->nextthink = gpGlobals->time + 0.3;
  if (((param_1->pev->spawnflags & 0x20) == 0) &&
     (iVar4 = (*g_engfuncs.pfnRandomLong)(0,3), 0 < iVar4)) {
    uVar3 = -iVar4 & 3;
    if (uVar3 != 0) {
      if (uVar3 < 3) {
        if (uVar3 < 2) {
          CBaseEntity::Create(0x10c60d,param_1->pev->origin,&local_38,0);
          iVar4 = iVar4 + -1;
        }
        CBaseEntity::Create(0x10c60d,param_1->pev->origin,&local_38,0);
        iVar4 = iVar4 + -1;
      }
      CBaseEntity::Create(0x10c60d,param_1->pev->origin,&local_38,0);
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {
        return;
      }
    }
    do {
      CBaseEntity::Create(0x10c60d,param_1->pev->origin,&local_38,0);
      CBaseEntity::Create(0x10c60d,param_1->pev->origin,&local_38,0);
      CBaseEntity::Create(0x10c60d,param_1->pev->origin,&local_38,0);
      CBaseEntity::Create(0x10c60d,param_1->pev->origin,&local_38,0);
      iVar4 = iVar4 + -4;
    } while (iVar4 != 0);
  }
  return;
}

/* 000c0024  CEnvExplosion::Smoke  (194 bytes)
 * undefined Smoke(void)
 */
/* CEnvExplosion::Smoke(void) */

void __thiscall CEnvExplosion::Smoke(CEnvExplosion *this)

{
  if ((this->pev->spawnflags & 8) == 0) {
    (*g_engfuncs.pfnMessageBegin)(5,0x17,this->pev->origin,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(5);
    (*g_engfuncs.pfnWriteCoord)(this->pev->origin[0]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->origin[1]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->origin[2]);
    (*g_engfuncs.pfnWriteShort)((int)g_sModelIndexSmoke);
    (*g_engfuncs.pfnWriteByte)((uint)(byte)this->field_0x168);
    (*g_engfuncs.pfnWriteByte)(0xc);
    (*g_engfuncs.pfnMessageEnd)();
  }
  if ((this->pev->spawnflags & 2) == 0) {
    UTIL_Remove((int *)this);
  }
  return;
}

