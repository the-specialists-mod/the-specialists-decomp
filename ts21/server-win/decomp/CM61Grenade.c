/* mp.dll - CM61Grenade (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100475f0  CM61Grenade::CreateGrenade  (197 bytes)
 * int * CreateGrenade(int param_1, int param_2)
 * called by: CTSGun::GrenadeIdle
 */
int * __cdecl CM61Grenade::CreateGrenade(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  piVar2 = (int *)GetClassPtr<CM61Grenade>(0);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  *(int *)piVar2[1] = (int)s_grenade_10097ea4 - (int)gpGlobals->pStringBase;
  piVar2[0x1e] = param_2;
  piVar2[0x20] = *(int *)(*(int *)(param_1 + 4) + 0x208);
  (**(code **)(*piVar2 + 0xc))();
  FUN_100679a0();
  iVar1 = piVar2[1];
  *(undefined4 *)(iVar1 + 0x20) = in_stack_00000018;
  *(undefined4 *)(iVar1 + 0x24) = in_stack_0000001c;
  *(undefined4 *)(iVar1 + 0x28) = in_stack_00000020;
  *(undefined4 *)(piVar2[1] + 0x198) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
  if (*(float *)(param_1 + 0x168) != 0.0) {
    *(undefined4 *)(piVar2[1] + 0x254) = *(undefined4 *)(param_1 + 0x168);
    return piVar2;
  }
  *(undefined4 *)(piVar2[1] + 0x254) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x254);
  return piVar2;
}

/* 100476c0  CM61Grenade::Spawn  (235 bytes)
 * undefined Spawn()
 */
void __fastcall CM61Grenade::Spawn(int param_1)

{
  FUN_10046a10(param_1);
  CTSGrenade::Precache();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),s_models_w_m61_mdl_1008fad0);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 10;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 2;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x11c) = 0x3f400000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x120) = 0x3f4ccccd;
  FUN_10067970();
  *(code **)(param_1 + 0x10) = FUN_10048fd0;
  *(code **)(param_1 + 0x14) = FUN_10048fc0;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x254) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x250) = 0;
  *(uint *)(*(int *)(param_1 + 4) + 0x250) = *(uint *)(*(int *)(param_1 + 4) + 0x250) | 2;
  return;
}

/* 100477b0  CM61Grenade::BounceTouch  (37 bytes)
 * void BounceTouch(CBaseEntity * param_1)
 */
/* public: virtual void __thiscall CM61Grenade::BounceTouch(class CBaseEntity *) */

void __thiscall CM61Grenade::BounceTouch(CM61Grenade *this,CBaseEntity *param_1)

{
                    /* 0x477b0  7  ?BounceTouch@CM61Grenade@@UAEXPAVCBaseEntity@@@Z */
  if (*(int *)(*(int *)(param_1 + 4) + 0x208) != *(int *)&this->field_0x80) {
    CTSGrenade::BounceTouch((CTSGrenade *)this,param_1);
    return;
  }
  return;
}

/* 100477e0  CM61Grenade::WaitThink  (703 bytes)
 * void WaitThink(void)
 */
/* public: virtual void __thiscall CM61Grenade::WaitThink(void) */

void __thiscall CM61Grenade::WaitThink(CM61Grenade *this)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  float10 fVar3;
  float in_stack_ffffff7c;
  float in_stack_ffffff80;
  float in_stack_ffffff84;
  entvars_t *peVar4;
  float *pfVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float fStack_28;
  edict_t *peStack_8;
  
                    /* 0x477e0  123  ?WaitThink@CM61Grenade@@UAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.1;
  if (*(float *)&this->field_0x78 <= *(float *)&this->field_0x7c) {
    iVar1 = (*this->vtable[0x29])();
    if (iVar1 == 0) {
      RemoveEntityFromSlowedArray((int)this);
      UTIL_Remove((int)this);
      return;
    }
    if (*(int *)&this->field_0x80 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)&this->field_0x80 + 0x80;
    }
    peVar4 = this->pev;
    fVar9 = 1024.0;
    fVar8 = 128.0;
    uVar7 = 0x1040;
    fVar6 = 100.0;
    FUN_1000a540(&stack0xffffff7c,peVar4->origin);
    TSExplosion(in_stack_ffffff7c,in_stack_ffffff80,in_stack_ffffff84,(int)peVar4,iVar1,fVar6,uVar7,
                fVar8,fVar9);
    RemoveEntityFromSlowedArray((int)this);
    UTIL_Remove((int)this);
    return;
  }
  if (this->pev->fuser1 == 0.0) {
    fVar3 = (float10)*(float *)&this->field_0x7c + (float10)0.1;
  }
  else {
    fVar3 = FUN_1005a3b0(this->pev->fuser1);
    fVar3 = fVar3 * (float10)0.1 + (float10)*(float *)&this->field_0x7c;
  }
  peVar4 = this->pev;
  *(float *)&this->field_0x7c = (float)fVar3;
  if (SQRT(peVar4->velocity[2] * peVar4->velocity[2] +
           peVar4->velocity[1] * peVar4->velocity[1] + peVar4->velocity[0] * peVar4->velocity[0]) <=
      64.0) goto LAB_10047a91;
  fVar6 = SQRT(peVar4->velocity[2] * peVar4->velocity[2] +
               peVar4->velocity[1] * peVar4->velocity[1] + peVar4->velocity[0] * peVar4->velocity[0]
              );
  if (fVar6 == 0.0) {
    local_50 = 0.0;
    local_4c = 0.0;
    local_48 = 1.0;
  }
  else {
    fVar6 = 1.0 / fVar6;
    FUN_1000c5f0(&local_50,fVar6 * peVar4->velocity[0],fVar6 * peVar4->velocity[1],
                 fVar6 * peVar4->velocity[2]);
  }
  local_3c = local_48 * 64.0 + peVar4->origin[2];
  local_40 = local_4c * 64.0 + peVar4->origin[1];
  local_44 = local_50 * 64.0 + peVar4->origin[0];
  FUN_10067850();
  if (1.0 <= fStack_28) goto LAB_10047a91;
  if (peStack_8 == (edict_t *)0x0) {
    peStack_8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peStack_8 != (edict_t *)0x0) goto LAB_100479fa;
    piVar2 = (int *)0x0;
  }
  else {
LAB_100479fa:
    piVar2 = peStack_8->pvPrivateData;
  }
  peVar4 = this->pev;
  local_50 = SQRT(peVar4->velocity[2] * peVar4->velocity[2] +
                  peVar4->velocity[1] * peVar4->velocity[1] +
                  peVar4->velocity[0] * peVar4->velocity[0]) * 0.1;
  if (*(float *)(piVar2[1] + 0x160) <= local_50) {
    FUN_1006a2f0();
    iVar1 = *piVar2;
    pfVar5 = (float *)&stack0xffffff90;
    fVar6 = 64.0;
    this_00 = (void *)FUN_10011fc0(this->pev->velocity,&local_40);
    FUN_10014e80(this_00,pfVar5,fVar6);
    (**(code **)(iVar1 + 0x34))();
    FUN_1006a310(this->pev,this->pev);
  }
LAB_10047a91:
  CTSPhysicObject::WaitThink((CTSPhysicObject *)this);
  return;
}

