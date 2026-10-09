/* ts_i386.so - CTSModel (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000722e8  CTSModel::Spawn  (369 bytes)
 * undefined Spawn(void)
 */
/* CTSModel::Spawn(void) */

void __thiscall CTSModel::Spawn(CTSModel *this)

{
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  (*this->vtable[10])(this);
  this->pev->classname = (int)"ts_model" - (int)gpGlobals->pStringBase;
  if (this->pev->model == 0) {
    (*g_engfuncs.pfnRemoveEntity)(this->pev->pContainingEntity);
  }
  else {
    (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + this->pev->model);
    (*g_engfuncs.pfnSetModel)
              (this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
    local_3c = 0;
    local_38 = local_3c;
    local_34 = local_3c;
    local_2c = local_3c;
    local_28 = local_3c;
    local_24 = local_3c;
    UTIL_SetSize((int)this->pev,&local_3c,&local_2c);
    UTIL_SetOrigin((int)this->pev,this->pev->origin);
    CBaseAnimating::InitBoneControllers((CBaseAnimating *)this);
    this->pev->solid = 3;
    this->pev->movetype = 0;
    this->pev->takedamage = 0.0;
    this->pev->effects = 0;
    this->pev->health = 1.0;
    this->pev->yaw_speed = 5.0;
    this->pev->ideal_yaw = this->pev->angles[1];
    *(undefined4 *)&this->field_0x6c = 0x42960000;
    *(undefined4 *)&this->field_0x70 = 0;
    this->pev->nextthink = this->pev->nextthink + 1.0;
    CBaseAnimating::ResetSequenceInfo((CBaseAnimating *)this);
  }
  return;
}

/* 00072460  CTSModel::Precache  (1 bytes)
 * undefined Precache(void)
 */
/* CTSModel::Precache(void) */

void CTSModel::Precache(void)

{
  return;
}

