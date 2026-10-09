/* ts_i386.so - CTSAmmoPack (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a1334  CTSAmmoPack::CreateAmmoPack  (186 bytes)
 * CTSAmmoPack * CreateAmmoPack(int * param_1, undefined4 * param_2)
 */
/* CTSAmmoPack::CreateAmmoPack(CBaseEntity *, s_ammo_info *, int) */

CTSAmmoPack * CTSAmmoPack::CreateAmmoPack(int *param_1,undefined4 *param_2)

{
  CTSAmmoPack *pCVar1;
  int iVar2;
  undefined4 *puVar3;
  
  pCVar1 = GetClassPtr<CTSAmmoPack>(0);
  if (pCVar1 == (CTSAmmoPack *)0x0) {
    UTIL_ClientPrintAll(3,"WARNING:cannot create ammopack!\n",0,0,0,0);
    pCVar1 = (CTSAmmoPack *)0x0;
  }
  else {
    pCVar1->pev->classname = (string_t)("11CTSAmmoPack" + (5 - (int)gpGlobals->pStringBase));
    if (param_2 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)&pCVar1->field_0x64;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
    }
    else {
      puVar3 = (undefined4 *)&pCVar1->field_0x64;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    (*pCVar1->vtable[9])(pCVar1);
    if (param_1 != (int *)0x0) {
      pCVar1->pev->owner = *(edict_t **)(*param_1 + 0x208);
    }
  }
  return pCVar1;
}

/* 000a13f4  CTSAmmoPack::Spawn  (329 bytes)
 * undefined Spawn(void)
 */
/* CTSAmmoPack::Spawn(void) */

void __thiscall CTSAmmoPack::Spawn(CTSAmmoPack *this)

{
  int *piVar1;
  float fVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  (*this->vtable[10])(this);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/ammopack.mdl");
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
  fVar2 = (float)weaponstay_time._12_4_;
  if (60.0 < (float)weaponstay_time._12_4_) {
    fVar2 = 60.0;
  }
  if (fVar2 < 5.0) {
    fVar2 = 5.0;
  }
  *(float *)&this->field_0xa4 = fVar2 + gpGlobals->time;
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = Fall;
  this->pev->nextthink = gpGlobals->time + 0.1;
  this->pev->iuser4 = 0;
  piVar1 = &this->pev->iuser4;
  *piVar1 = *piVar1 | 2;
  this->pev->armorvalue = 0.0;
  this->pev->owner = (edict_t *)0x0;
  return;
}

/* 000a1540  CTSAmmoPack::Precache  (1 bytes)
 * undefined Precache(void)
 */
/* CTSAmmoPack::Precache(void) */

void CTSAmmoPack::Precache(void)

{
  return;
}

/* 000a1544  CTSAmmoPack::Fall  (123 bytes)
 * undefined Fall(void)
 */
/* CTSAmmoPack::Fall(void) */

void __thiscall CTSAmmoPack::Fall(CTSAmmoPack *this)

{
  this->pev->nextthink = gpGlobals->time + 0.1;
  if ((this->pev->flags & 0x200) != 0) {
    this->pev->angles[0] = 0.0;
    this->pev->angles[2] = 0.0;
    OnGround(this);
  }
  if (*(float *)&this->field_0xa4 < gpGlobals->time) {
    UTIL_Remove((int *)this);
  }
  return;
}

/* 000a15c0  CTSAmmoPack::WaitThink  (78 bytes)
 * undefined WaitThink(void)
 */
/* CTSAmmoPack::WaitThink(void) */

void __thiscall CTSAmmoPack::WaitThink(CTSAmmoPack *this)

{
  this->pev->nextthink = gpGlobals->time + 0.1;
  if (*(float *)&this->field_0xa4 < gpGlobals->time) {
    UTIL_Remove((int *)this);
  }
  return;
}

/* 000a1610  CTSAmmoPack::OnGround  (173 bytes)
 * undefined OnGround(void)
 */
/* CTSAmmoPack::OnGround(void) */

void __thiscall CTSAmmoPack::OnGround(CTSAmmoPack *this)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  this->pev->owner = (edict_t *)0x0;
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
  *(code **)&this->field_0x18 = WaitTouch;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = WaitThink;
  return;
}

/* 000a16c0  CTSAmmoPack::WaitTouch  (620 bytes)
 * undefined WaitTouch(CBasePlayer * param_1)
 */
/* CTSAmmoPack::WaitTouch(CBaseEntity *) */

void __thiscall CTSAmmoPack::WaitTouch(CTSAmmoPack *this,CBasePlayer *param_1)

{
  bool bVar1;
  int iVar2;
  void ***pppvVar3;
  void ***pppvVar4;
  void ***pppvVar5;
  byte_conflict bVar6;
  int local_24;
  
  iVar2 = (*param_1->vtable[0x32])(param_1);
  if ((((iVar2 != 0) && (iVar2 = (*param_1->vtable[0x2d])(param_1), iVar2 != 0)) &&
      (*(int *)&param_1->field_0xa10 != 0)) &&
     (*(int *)(*(int *)&param_1->field_0xa10 + 0x88) == 0x10)) {
    bVar1 = false;
    local_24 = 0;
    pppvVar3 = &this->vtable;
    pppvVar4 = pppvVar3;
    pppvVar5 = pppvVar3;
    do {
      bVar6 = (byte_conflict)local_24;
      if ((pppvVar5[1] != (void **)0x0) &&
         (iVar2 = CTSGun::AddAmmo(*(CTSGun **)&param_1->field_0xa10,bVar6,(int)pppvVar4[1]),
         iVar2 != 0)) {
        bVar1 = true;
        pppvVar3[1] = (void **)0x0;
      }
      if ((pppvVar5[2] != (void **)0x0) &&
         (iVar2 = CTSGun::AddAmmo(*(CTSGun **)&param_1->field_0xa10,bVar6 + '\x01',(int)pppvVar4[2])
         , iVar2 != 0)) {
        bVar1 = true;
        pppvVar3[2] = (void **)0x0;
      }
      if ((pppvVar5[3] != (void **)0x0) &&
         (iVar2 = CTSGun::AddAmmo(*(CTSGun **)&param_1->field_0xa10,bVar6 + '\x02',(int)pppvVar4[3])
         , iVar2 != 0)) {
        bVar1 = true;
        pppvVar3[3] = (void **)0x0;
      }
      if ((pppvVar5[4] != (void **)0x0) &&
         (iVar2 = CTSGun::AddAmmo(*(CTSGun **)&param_1->field_0xa10,bVar6 + '\x03',(int)pppvVar4[4])
         , iVar2 != 0)) {
        bVar1 = true;
        pppvVar3[4] = (void **)0x0;
      }
      pppvVar3 = pppvVar3 + 4;
      pppvVar4 = pppvVar4 + 4;
      pppvVar5 = pppvVar5 + 4;
      local_24 = local_24 + 4;
    } while (local_24 < 0x10);
    if (bVar1) {
      EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,3,"items/9mmclip1.wav",0x3f800000,
                     0x3f4ccccd,0,100,0.5);
    }
    if ((0.0 < this->pev->armorvalue) &&
       (((param_1->pev->button & 0x20) != 0 || (param_1->pev->armorvalue != 0.0)))) {
      CBasePlayer::TakeArmor(param_1,(int)ROUND(this->pev->armorvalue));
      this->pev->armorvalue = 0.0;
    }
    if (this->pev->armorvalue == 0.0) {
      UTIL_Remove((int *)this);
    }
  }
  return;
}

