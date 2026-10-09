/* ts_i386.so - CXenPLight (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f5180  CXenPLight::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CXenPLight::Save(CSave &) */

undefined4 __thiscall CXenPLight::Save(CXenPLight *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CActAnimating::Save((CActAnimating *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CXenPLight",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 000f51d0  CXenPLight::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CXenPLight::Restore(CRestore &) */

undefined4 __thiscall CXenPLight::Restore(CXenPLight *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CActAnimating::Restore((CActAnimating *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CXenPLight",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 000f5220  CXenPLight::Spawn  (737 bytes)
 * undefined Spawn(void)
 */
/* CXenPLight::Spawn(void) */

void __thiscall CXenPLight::Spawn(CXenPLight *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  entvars_t *peVar6;
  int iVar7;
  int *piVar8;
  edict_t *pEdict;
  CSprite *pCVar9;
  int iVar10;
  longdouble lVar11;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  
  (*this->vtable[10])(this);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/light.mdl");
  this->pev->movetype = 0;
  this->pev->solid = 1;
  local_2c = 0x42a00000;
  local_24 = 32.0;
  local_3c = -80.0;
  uVar5 = 0;
  local_38 = local_3c;
  local_34 = (float)uVar5;
  local_28 = local_2c;
  UTIL_SetSize((int)this->pev,&local_3c,&local_2c);
  CActAnimating::SetActivity((CActAnimating *)this,1);
  this->pev->nextthink = gpGlobals->time + 0.1;
  lVar11 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.0,255.0);
  this->pev->frame = (float)lVar11;
  peVar6 = this->pev;
  local_24 = (peVar6->mins[2] + peVar6->maxs[2]) * 0.5;
  local_3c = peVar6->origin[0] + 0.0;
  local_38 = peVar6->origin[1] + 0.0;
  local_34 = peVar6->origin[2] + local_24;
  local_2c = uVar5;
  local_28 = uVar5;
  pCVar9 = CSprite::SpriteCreate(0x110309,&local_3c,0);
  *(CSprite **)&this->field_0x84 = pCVar9;
  fVar1 = this->pev->rendercolor[0];
  fVar2 = this->pev->rendercolor[1];
  fVar3 = this->pev->rendercolor[2];
  fVar4 = this->pev->renderamt;
  iVar7 = this->pev->renderfx;
  pCVar9->pev->rendermode = 3;
  pCVar9->pev->rendercolor[0] = (float)(int)ROUND(fVar1);
  pCVar9->pev->rendercolor[1] = (float)(int)ROUND(fVar2);
  pCVar9->pev->rendercolor[2] = (float)(int)ROUND(fVar3);
  pCVar9->pev->renderamt = (float)(int)ROUND(fVar4);
  pCVar9->pev->renderfx = iVar7;
  piVar8 = *(int **)&this->field_0x84;
  pEdict = this->pev->pContainingEntity;
  if (pEdict != (edict_t *)0x0) {
    iVar7 = *piVar8;
    iVar10 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
    *(int *)(iVar7 + 0x110) = iVar10;
    *(undefined4 *)(*piVar8 + 0x114) = 1;
    *(edict_t **)(*piVar8 + 0x194) = pEdict;
    *(undefined4 *)(*piVar8 + 0x108) = 0xc;
  }
  return;
}

/* 000f5504  CXenPLight::Precache  (52 bytes)
 * undefined Precache(void)
 */
/* CXenPLight::Precache(void) */

void CXenPLight::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)("models/light.mdl");
  (*g_engfuncs.pfnPrecacheModel)("sprites/flare3.spr");
  return;
}

/* 000f5538  CXenPLight::Think  (189 bytes)
 * undefined Think(void)
 */
/* CXenPLight::Think(void) */

void __thiscall CXenPLight::Think(CXenPLight *this)

{
  CBaseAnimating::StudioFrameAdvance((CBaseAnimating *)this,0.0);
  this->pev->nextthink = gpGlobals->time + 0.1;
  switch(*(undefined4 *)&this->field_0x80) {
  case 0x11:
    if (*(int *)&this->field_0x78 != 0) {
      CActAnimating::SetActivity((CActAnimating *)this,0x12);
      LightOff(this);
    }
    break;
  case 0x12:
    if (this->pev->dmgtime < gpGlobals->time) {
      CActAnimating::SetActivity((CActAnimating *)this,0x13);
      LightOn(this);
    }
    break;
  case 0x13:
    if (*(int *)&this->field_0x78 != 0) {
      CActAnimating::SetActivity((CActAnimating *)this,1);
    }
  }
  return;
}

/* 000f5648  CXenPLight::Touch  (105 bytes)
 * undefined Touch(int param_1)
 */
/* CXenPLight::Touch(CBaseEntity *) */

void __thiscall CXenPLight::Touch(CXenPLight *this,int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x60) + 200))(param_1);
  if (iVar1 != 0) {
    this->pev->dmgtime = gpGlobals->time + 5.0;
    if ((*(int *)&this->field_0x80 == 1) || (*(int *)&this->field_0x80 == 0x13)) {
      CActAnimating::SetActivity((CActAnimating *)this,0x11);
    }
  }
  return;
}

/* 000f56b4  CXenPLight::LightOn  (68 bytes)
 * undefined LightOn(void)
 */
/* CXenPLight::LightOn(void) */

void __thiscall CXenPLight::LightOn(CXenPLight *this)

{
  uint *puVar1;
  
  CBaseDelay::SUB_UseTargets((CBaseDelay *)this,(int *)this,1,0);
  if (*(int *)&this->field_0x84 != 0) {
    puVar1 = (uint *)(**(int **)&this->field_0x84 + 0x118);
    *puVar1 = *puVar1 & 0xffffff7f;
  }
  return;
}

/* 000f56f8  CXenPLight::LightOff  (68 bytes)
 * undefined LightOff(void)
 */
/* CXenPLight::LightOff(void) */

void __thiscall CXenPLight::LightOff(CXenPLight *this)

{
  uint *puVar1;
  
  CBaseDelay::SUB_UseTargets((CBaseDelay *)this,(int *)this,0,0);
  if (*(int *)&this->field_0x84 != 0) {
    puVar1 = (uint *)(**(int **)&this->field_0x84 + 0x118);
    *puVar1 = *puVar1 | 0x80;
  }
  return;
}

