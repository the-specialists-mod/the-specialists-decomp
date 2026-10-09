/* ts_i386.so - CItem (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cae8c  CItem::Spawn  (254 bytes)
 * undefined Spawn(void)
 */
/* CItem::Spawn(void) */

void __thiscall CItem::Spawn(CItem *this)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  this->pev->movetype = 6;
  this->pev->solid = 1;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  local_1c = 0x41800000;
  local_2c = 0xc1800000;
  local_24 = 0;
  local_28 = local_2c;
  local_18 = local_1c;
  local_14 = local_1c;
  UTIL_SetSize((int)this->pev,&local_2c,&local_1c);
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = ItemTouch;
  iVar1 = (*g_engfuncs.pfnDropToFloor)(this->pev->pContainingEntity);
  if (iVar1 == 0) {
    (*g_engfuncs.pfnAlertMessage)
              (at_error,"Item %s fell out of level at %f,%f,%f",
               gpGlobals->pStringBase + this->pev->classname,(double)this->pev->origin[0],
               (double)this->pev->origin[1],(double)this->pev->origin[2]);
    UTIL_Remove((int *)this);
  }
  return;
}

/* 000caf8c  CItem::ItemTouch  (214 bytes)
 * undefined ItemTouch(int param_1)
 */
/* CItem::ItemTouch(CBaseEntity *) */

void __thiscall CItem::ItemTouch(CItem *this,int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x60) + 200))(param_1);
  if ((iVar1 != 0) &&
     (iVar1 = (**(code **)(*g_pGameRules + 0x90))(g_pGameRules,param_1,this), iVar1 != 0)) {
    iVar1 = (*this->vtable[0x45])(this,param_1);
    if (iVar1 == 0) {
      if (gEvilImpulse101 == 0) {
        return;
      }
    }
    else {
      CBaseEntity::SUB_UseTargets((CBaseEntity *)this,param_1,3,0);
      *(undefined4 *)&this->field_0x14 = 0;
      *(undefined4 *)&this->field_0x18 = 0;
      (**(code **)(*g_pGameRules + 0x94))(g_pGameRules,param_1,this);
      iVar1 = (**(code **)(*g_pGameRules + 0x98))(g_pGameRules,this);
      if (iVar1 == 5) {
        (*this->vtable[0x3b])(this);
        return;
      }
    }
    UTIL_Remove((int *)this);
  }
  return;
}

/* 000cb064  CItem::Respawn  (145 bytes)
 * CItem * Respawn(void)
 */
/* CItem::Respawn(void) */

CItem * __thiscall CItem::Respawn(CItem *this)

{
  int *piVar1;
  longdouble lVar2;
  undefined1 local_2c [28];
  
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 0x80;
  (**(code **)(*g_pGameRules + 0xa0))(local_2c,g_pGameRules,this);
  UTIL_SetOrigin((int)this->pev,local_2c);
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = Materialize;
  lVar2 = (longdouble)(**(code **)(*g_pGameRules + 0x9c))(g_pGameRules,this);
  this->pev->nextthink = (float)lVar2;
  return this;
}

/* 000cb0f8  CItem::Materialize  (125 bytes)
 * undefined Materialize(void)
 */
/* CItem::Materialize(void) */

void __thiscall CItem::Materialize(CItem *this)

{
  int *piVar1;
  
  if ((char)this->pev->effects < '\0') {
    EMIT_SOUND_DYN((int)this->pev->pContainingEntity,1,"items/suitchargeok1.wav",0x3f800000,
                   0x3f4ccccd,0,0x96,0.5);
    piVar1 = &this->pev->effects;
    *piVar1 = *piVar1 & 0xffffff7f;
    piVar1 = &this->pev->effects;
    *piVar1 = *piVar1 | 2;
  }
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = ItemTouch;
  return;
}

/* 000cb504  CItem::MyTouch  (6 bytes)
 * undefined4 MyTouch(void)
 */
/* CItem::MyTouch(CBasePlayer *) */

undefined4 CItem::MyTouch(void)

{
  return 0;
}

