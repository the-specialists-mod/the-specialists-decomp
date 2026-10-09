/* ts_i386.so - CBasePlayerItem (38 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f1558  CBasePlayerItem::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CBasePlayerItem::Save(CSave &) */

undefined4 __thiscall CBasePlayerItem::Save(CBasePlayerItem *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseAnimating::Save((CBaseAnimating *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CBasePlayerItem",(int)this,(int *)m_SaveData,3);
  }
  return uVar2;
}

/* 000f15a8  CBasePlayerItem::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CBasePlayerItem::Restore(CRestore &) */

undefined4 __thiscall CBasePlayerItem::Restore(CBasePlayerItem *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseAnimating::Restore((CBaseAnimating *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CBasePlayerItem",(int)this,(int)m_SaveData,3);
  }
  return uVar2;
}

/* 000f1698  CBasePlayerItem::SetObjectCollisionBox  (195 bytes)
 * undefined SetObjectCollisionBox(void)
 */
/* CBasePlayerItem::SetObjectCollisionBox(void) */

void __thiscall CBasePlayerItem::SetObjectCollisionBox(CBasePlayerItem *this)

{
  entvars_t *peVar1;
  int iVar2;
  float *pfVar3;
  vec_t *pvVar4;
  float local_3c [4];
  float local_2c [7];
  
  peVar1 = this->pev;
  local_3c[0] = -24.0;
  local_3c[1] = -24.0;
  local_3c[2] = 0.0;
  local_2c[0] = peVar1->origin[0] + -24.0;
  local_2c[1] = peVar1->origin[1] + -24.0;
  local_2c[2] = peVar1->origin[2] + 0.0;
  pfVar3 = local_2c;
  pvVar4 = peVar1->absmin;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  peVar1 = this->pev;
  local_2c[0] = 24.0;
  local_2c[1] = 24.0;
  local_2c[2] = 16.0;
  local_3c[0] = peVar1->origin[0] + 24.0;
  local_3c[1] = peVar1->origin[1] + 24.0;
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

/* 000f175c  CBasePlayerItem::FallInit  (186 bytes)
 * undefined FallInit(void)
 */
/* CBasePlayerItem::FallInit(void) */

void __thiscall CBasePlayerItem::FallInit(CBasePlayerItem *this)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  this->pev->movetype = 6;
  this->pev->solid = 2;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  local_2c = 0;
  local_28 = local_2c;
  local_24 = local_2c;
  local_1c = local_2c;
  local_18 = local_2c;
  local_14 = local_2c;
  UTIL_SetSize((int)this->pev,&local_2c,&local_1c);
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = DefaultTouch;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = FallThink;
  this->pev->nextthink = gpGlobals->time + 0.1;
  return;
}

/* 000f1818  CBasePlayerItem::FallThink  (213 bytes)
 * undefined FallThink(void)
 */
/* CBasePlayerItem::FallThink(void) */

void __thiscall CBasePlayerItem::FallThink(CBasePlayerItem *this)

{
  edict_t *pEdict;
  bool bVar1;
  int iVar2;
  
  this->pev->nextthink = gpGlobals->time + 0.1;
  if ((this->pev->flags & 0x200) != 0) {
    pEdict = this->pev->owner;
    bVar1 = false;
    if ((pEdict == (edict_t *)0x0) ||
       (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar2 == 0)) {
      bVar1 = true;
    }
    if (!bVar1) {
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,0x1d);
      EMIT_SOUND_DYN((int)this->pev->pContainingEntity,3,"items/weapondrop1.wav",0x3f800000,
                     0x3f4ccccd,0,iVar2 + 0x5f,0.5);
    }
    this->pev->angles[0] = 0.0;
    this->pev->angles[2] = 0.0;
    Materialize(this);
    return;
  }
  return;
}

/* 000f18f0  CBasePlayerItem::Materialize  (167 bytes)
 * undefined Materialize(void)
 */
/* CBasePlayerItem::Materialize(void) */

void __thiscall CBasePlayerItem::Materialize(CBasePlayerItem *this)

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
  this->pev->solid = 1;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = DefaultTouch;
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  return;
}

/* 000f1998  CBasePlayerItem::AttemptToMaterialize  (98 bytes)
 * undefined AttemptToMaterialize(void)
 */
/* CBasePlayerItem::AttemptToMaterialize(void) */

void __thiscall CBasePlayerItem::AttemptToMaterialize(CBasePlayerItem *this)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)(**(code **)(*g_pGameRules + 0x88))(g_pGameRules,this);
  if (lVar1 == (longdouble)0.0) {
    Materialize(this);
  }
  else {
    this->pev->nextthink = (float)(lVar1 + (longdouble)gpGlobals->time);
  }
  return;
}

/* 000f19fc  CBasePlayerItem::CheckRespawn  (72 bytes)
 * undefined CheckRespawn(void)
 */
/* CBasePlayerItem::CheckRespawn(void) */

void __thiscall CBasePlayerItem::CheckRespawn(CBasePlayerItem *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*g_pGameRules + 0x80))(g_pGameRules,this);
  if (iVar1 == 1) {
    (*this->vtable[0x3b])(this);
  }
  return;
}

/* 000f1a44  CBasePlayerItem::Respawn  (250 bytes)
 * int * Respawn(void)
 */
/* CBasePlayerItem::Respawn(void) */

int * __thiscall CBasePlayerItem::Respawn(CBasePlayerItem *this)

{
  int *piVar1;
  longdouble lVar2;
  undefined4 *in_stack_ffffffc8;
  vec_t *pvVar3;
  edict_t *peVar4;
  undefined4 local_2c [7];
  
  peVar4 = this->pev->owner;
  pvVar3 = this->pev->angles;
  (**(code **)(*g_pGameRules + 0x8c))(local_2c,g_pGameRules,this);
  piVar1 = CBaseEntity::Create((int)(gpGlobals->pStringBase + this->pev->classname),local_2c,
                               in_stack_ffffffc8,pvVar3);
  if (piVar1 == (int *)0x0) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,"Respawn failed to create %s!\n",
               gpGlobals->pStringBase + this->pev->classname,pvVar3,peVar4);
  }
  else {
    *(uint *)(*piVar1 + 0x118) = *(uint *)(*piVar1 + 0x118) | 0x80;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[3] = -0x10000;
    piVar1[4] = (int)AttemptToMaterialize;
    (*g_engfuncs.pfnDropToFloor)(this->pev->pContainingEntity);
    lVar2 = (longdouble)(**(code **)(*g_pGameRules + 0x84))(g_pGameRules,this);
    *(float *)(*piVar1 + 0x104) = (float)lVar2;
  }
  return piVar1;
}

/* 000f1b40  CBasePlayerItem::DefaultTouch  (209 bytes)
 * undefined DefaultTouch(int * param_1)
 */
/* CBasePlayerItem::DefaultTouch(CBaseEntity *) */

void __thiscall CBasePlayerItem::DefaultTouch(CBasePlayerItem *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1[0x18] + 200))(param_1);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*g_pGameRules + 0x78))(g_pGameRules,param_1,this);
    if (iVar1 == 0) {
      if (gEvilImpulse101 != 0) {
        UTIL_Remove((int *)this);
      }
    }
    else {
      iVar1 = (**(code **)(param_1[0x18] + 0x84))(param_1,this);
      if (iVar1 != 0) {
        (*this->vtable[0x52])(this,param_1);
        EMIT_SOUND_DYN(*(int *)(*param_1 + 0x208),3,"items/gunpickup2.wav",0x3f800000,0x3f4ccccd,0,
                       100,0.5);
      }
      CBaseDelay::SUB_UseTargets((CBaseDelay *)this,param_1,3,0);
    }
  }
  return;
}

/* 000f1c58  CBasePlayerItem::DestroyItem  (63 bytes)
 * undefined DestroyItem(void)
 */
/* CBasePlayerItem::DestroyItem(void) */

void __thiscall CBasePlayerItem::DestroyItem(CBasePlayerItem *this)

{
  if (*(int *)&this[1].field_0x1c != 0) {
    (**(code **)(*(int *)(*(int *)&this[1].field_0x1c + 0x60) + 0x88))
              (*(undefined4 *)&this[1].field_0x1c,this);
  }
  (*this->vtable[0x51])(this);
  return;
}

/* 000f1c98  CBasePlayerItem::AddToPlayer  (20 bytes)
 * undefined4 AddToPlayer(undefined4 param_1)
 */
/* CBasePlayerItem::AddToPlayer(CBasePlayer *) */

undefined4 __thiscall CBasePlayerItem::AddToPlayer(CBasePlayerItem *this,undefined4 param_1)

{
  *(undefined4 *)&this[1].field_0x1c = param_1;
  return 1;
}

/* 000f1cac  CBasePlayerItem::Drop  (84 bytes)
 * undefined Drop(void)
 */
/* CBasePlayerItem::Drop(void) */

void __thiscall CBasePlayerItem::Drop(CBasePlayerItem *this)

{
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
  this->pev->nextthink = gpGlobals->time + 0.1;
  return;
}

/* 000f1d00  CBasePlayerItem::Kill  (84 bytes)
 * undefined Kill(void)
 */
/* CBasePlayerItem::Kill(void) */

void __thiscall CBasePlayerItem::Kill(CBasePlayerItem *this)

{
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
  this->pev->nextthink = gpGlobals->time + 0.1;
  return;
}

/* 000f1d54  CBasePlayerItem::Holster  (41 bytes)
 * undefined Holster(int param_1)
 */
/* CBasePlayerItem::Holster(int) */

void CBasePlayerItem::Holster(int param_1)

{
  *(undefined4 *)(**(int **)(param_1 + 0x80) + 0xbc) = 0;
  *(undefined4 *)(**(int **)(param_1 + 0x80) + 0xc0) = 0;
  return;
}

/* 000f1d80  CBasePlayerItem::AttachToPlayer  (161 bytes)
 * undefined AttachToPlayer(int * param_1)
 */
/* CBasePlayerItem::AttachToPlayer(CBasePlayer *) */

void __thiscall CBasePlayerItem::AttachToPlayer(CBasePlayerItem *this,int *param_1)

{
  this->pev->movetype = 0xc;
  this->pev->solid = 0;
  this->pev->aiment = *(edict_t **)(*param_1 + 0x208);
  this->pev->effects = 0x80;
  this->pev->modelindex = 0;
  this->pev->model = 0;
  this->pev->owner = *(edict_t **)(*param_1 + 0x208);
  this->pev->nextthink = gpGlobals->time + 0.1;
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  return;
}

/* 000f3424  CBasePlayerItem::AddDuplicate  (6 bytes)
 * undefined4 AddDuplicate(void)
 */
/* CBasePlayerItem::AddDuplicate(CBasePlayerItem *) */

undefined4 CBasePlayerItem::AddDuplicate(void)

{
  return 0;
}

/* 000f342c  CBasePlayerItem::GetItemInfo  (6 bytes)
 * undefined4 GetItemInfo(void)
 */
/* CBasePlayerItem::GetItemInfo(ItemInfo *) */

undefined4 CBasePlayerItem::GetItemInfo(void)

{
  return 0;
}

/* 000f3434  CBasePlayerItem::CanDeploy  (6 bytes)
 * undefined4 CanDeploy(void)
 */
/* CBasePlayerItem::CanDeploy(void) */

undefined4 CBasePlayerItem::CanDeploy(void)

{
  return 1;
}

/* 000f343c  CBasePlayerItem::Deploy  (6 bytes)
 * undefined4 Deploy(void)
 */
/* CBasePlayerItem::Deploy(void) */

undefined4 CBasePlayerItem::Deploy(void)

{
  return 1;
}

/* 000f3444  CBasePlayerItem::CanHolster  (6 bytes)
 * undefined4 CanHolster(void)
 */
/* CBasePlayerItem::CanHolster(void) */

undefined4 CBasePlayerItem::CanHolster(void)

{
  return 1;
}

/* 000f344c  CBasePlayerItem::UpdateItemInfo  (1 bytes)
 * undefined UpdateItemInfo(void)
 */
/* CBasePlayerItem::UpdateItemInfo(void) */

void CBasePlayerItem::UpdateItemInfo(void)

{
  return;
}

/* 000f3450  CBasePlayerItem::ItemPreFrame  (1 bytes)
 * undefined ItemPreFrame(void)
 */
/* CBasePlayerItem::ItemPreFrame(void) */

void CBasePlayerItem::ItemPreFrame(void)

{
  return;
}

/* 000f3454  CBasePlayerItem::ItemPostFrame  (1 bytes)
 * undefined ItemPostFrame(void)
 */
/* CBasePlayerItem::ItemPostFrame(void) */

void CBasePlayerItem::ItemPostFrame(void)

{
  return;
}

/* 000f3458  CBasePlayerItem::PrimaryAmmoIndex  (6 bytes)
 * undefined4 PrimaryAmmoIndex(void)
 */
/* CBasePlayerItem::PrimaryAmmoIndex(void) */

undefined4 CBasePlayerItem::PrimaryAmmoIndex(void)

{
  return 0xffffffff;
}

/* 000f3460  CBasePlayerItem::SecondaryAmmoIndex  (6 bytes)
 * undefined4 SecondaryAmmoIndex(void)
 */
/* CBasePlayerItem::SecondaryAmmoIndex(void) */

undefined4 CBasePlayerItem::SecondaryAmmoIndex(void)

{
  return 0xffffffff;
}

/* 000f3468  CBasePlayerItem::UpdateClientData  (6 bytes)
 * undefined4 UpdateClientData(void)
 */
/* CBasePlayerItem::UpdateClientData(CBasePlayer *) */

undefined4 CBasePlayerItem::UpdateClientData(void)

{
  return 0;
}

/* 000f3470  CBasePlayerItem::GetWeaponPtr  (6 bytes)
 * undefined4 GetWeaponPtr(void)
 */
/* CBasePlayerItem::GetWeaponPtr(void) */

undefined4 CBasePlayerItem::GetWeaponPtr(void)

{
  return 0;
}

/* 000f3478  CBasePlayerItem::iItemSlot  (6 bytes)
 * undefined4 iItemSlot(void)
 */
/* CBasePlayerItem::iItemSlot(void) */

undefined4 CBasePlayerItem::iItemSlot(void)

{
  return 0;
}

/* 000f3480  CBasePlayerItem::iItemPosition  (43 bytes)
 * undefined4 iItemPosition(void)
 */
/* CBasePlayerItem::iItemPosition(void) */

undefined4 __thiscall CBasePlayerItem::iItemPosition(CBasePlayerItem *this)

{
  return (&DAT_001a5b44)[*(int *)&this[1].field_0x24 * 0xb];
}

/* 000f34ac  CBasePlayerItem::pszAmmo1  (43 bytes)
 * undefined4 pszAmmo1(void)
 */
/* CBasePlayerItem::pszAmmo1(void) */

undefined4 __thiscall CBasePlayerItem::pszAmmo1(CBasePlayerItem *this)

{
  return (&DAT_001a5b48)[*(int *)&this[1].field_0x24 * 0xb];
}

/* 000f34d8  CBasePlayerItem::iMaxAmmo1  (43 bytes)
 * undefined4 iMaxAmmo1(void)
 */
/* CBasePlayerItem::iMaxAmmo1(void) */

undefined4 __thiscall CBasePlayerItem::iMaxAmmo1(CBasePlayerItem *this)

{
  return (&DAT_001a5b4c)[*(int *)&this[1].field_0x24 * 0xb];
}

/* 000f3504  CBasePlayerItem::pszAmmo2  (41 bytes)
 * undefined4 pszAmmo2(void)
 */
/* CBasePlayerItem::pszAmmo2(void) */

undefined4 __thiscall CBasePlayerItem::pszAmmo2(CBasePlayerItem *this)

{
  return (&DAT_001a5b50)[*(int *)&this[1].field_0x24 * 0xb];
}

/* 000f3530  CBasePlayerItem::iMaxAmmo2  (44 bytes)
 * undefined4 iMaxAmmo2(void)
 */
/* CBasePlayerItem::iMaxAmmo2(void) */

undefined4 __thiscall CBasePlayerItem::iMaxAmmo2(CBasePlayerItem *this)

{
  return (&DAT_001a5b54)[*(int *)&this[1].field_0x24 * 0xb];
}

/* 000f355c  CBasePlayerItem::pszName  (44 bytes)
 * undefined4 pszName(void)
 */
/* CBasePlayerItem::pszName(void) */

undefined4 __thiscall CBasePlayerItem::pszName(CBasePlayerItem *this)

{
  return *(undefined4 *)(&DAT_001a5b58 + *(int *)&this[1].field_0x24 * 0x2c);
}

/* 000f3588  CBasePlayerItem::iMaxClip  (44 bytes)
 * undefined4 iMaxClip(void)
 */
/* CBasePlayerItem::iMaxClip(void) */

undefined4 __thiscall CBasePlayerItem::iMaxClip(CBasePlayerItem *this)

{
  return *(undefined4 *)(&DAT_001a5b5c + *(int *)&this[1].field_0x24 * 0x2c);
}

/* 000f35b4  CBasePlayerItem::iWeight  (44 bytes)
 * undefined4 iWeight(void)
 */
/* CBasePlayerItem::iWeight(void) */

undefined4 __thiscall CBasePlayerItem::iWeight(CBasePlayerItem *this)

{
  return *(undefined4 *)(&DAT_001a5b68 + *(int *)&this[1].field_0x24 * 0x2c);
}

/* 000f35e0  CBasePlayerItem::iFlags  (44 bytes)
 * undefined4 iFlags(void)
 */
/* CBasePlayerItem::iFlags(void) */

undefined4 __thiscall CBasePlayerItem::iFlags(CBasePlayerItem *this)

{
  return *(undefined4 *)(&DAT_001a5b64 + *(int *)&this[1].field_0x24 * 0x2c);
}

