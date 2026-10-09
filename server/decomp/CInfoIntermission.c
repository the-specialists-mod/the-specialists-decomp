/* ts_i386.so - CInfoIntermission (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000ddf80  CInfoIntermission::Spawn  (119 bytes)
 * undefined Spawn(void)
 */
/* CInfoIntermission::Spawn(void) */

void __thiscall CInfoIntermission::Spawn(CInfoIntermission *this)

{
  int iVar1;
  vec_t *pvVar2;
  vec_t *pvVar3;
  
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  this->pev->solid = 0;
  this->pev->effects = 0x80;
  pvVar2 = (vec_t *)&g_vecZero;
  pvVar3 = this->pev->v_angle;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  this->pev->nextthink = gpGlobals->time + 2.0;
  return;
}

/* 000ddff8  CInfoIntermission::Think  (343 bytes)
 * undefined Think(void)
 */
/* CInfoIntermission::Think(void) */

void __thiscall CInfoIntermission::Think(CInfoIntermission *this)

{
  byte *pbVar1;
  entvars_t *peVar2;
  bool bVar3;
  edict_t *pEdict;
  int iVar4;
  undefined4 *puVar5;
  vec_t *pvVar6;
  vec_t *pvVar7;
  vec_t avStack_6c [7];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_2c [7];
  
  pEdict = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,"targetname",gpGlobals->pStringBase + this->pev->target);
  bVar3 = false;
  if (pEdict != (edict_t *)0x0) {
    iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
    if (iVar4 != 0) goto LAB_000de05f;
  }
  bVar3 = true;
LAB_000de05f:
  if (!bVar3) {
    peVar2 = this->pev;
    local_4c = (pEdict->v).origin[0] - peVar2->origin[0];
    local_48 = (pEdict->v).origin[1] - peVar2->origin[1];
    local_44 = (pEdict->v).origin[2] - peVar2->origin[2];
    local_50 = SQRT(local_44 * local_44 + local_48 * local_48 + local_4c * local_4c);
    if (local_50 == 0.0) {
      local_34 = 1.0;
      local_3c = 0.0;
      local_38 = 0.0;
    }
    else {
      local_34 = 1.0 / local_50;
      local_3c = local_34 * local_4c;
      local_38 = local_34 * local_48;
      local_34 = local_34 * local_44;
    }
    UTIL_VecToAngles(local_2c,&local_3c);
    peVar2 = this->pev;
    puVar5 = local_2c;
    pvVar6 = avStack_6c;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pvVar6 = (vec_t)*puVar5;
      puVar5 = puVar5 + 1;
      pvVar6 = pvVar6 + 1;
    }
    pvVar6 = avStack_6c;
    pvVar7 = peVar2->v_angle;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pvVar7 = *pvVar6;
      pvVar6 = pvVar6 + 1;
      pvVar7 = pvVar7 + 1;
    }
    pbVar1 = (byte *)((int)this->pev->v_angle + 3);
    *pbVar1 = *pbVar1 ^ 0x80;
  }
  return;
}

