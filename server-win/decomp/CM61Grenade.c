/* mp.dll - CM61Grenade (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10050de0  CM61Grenade::CreateGrenade  (207 bytes)
 * int * CreateGrenade(int * param_1, int param_2)
 * called by: CTSGun::GrenadeIdle
 */
int * __cdecl CM61Grenade::CreateGrenade(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  piVar2 = (int *)GetClassPtr<CM61Grenade>(0);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  *(int *)piVar2[1] = (int)s_grenade_100a315c - (int)gpGlobals->pStringBase;
  piVar2[0x1e] = param_2;
  piVar2[0x20] = *(int *)(param_1[1] + 0x208);
  (**(code **)(*piVar2 + 0x1c))();
  UTIL_SetOrigin(piVar2[1],&stack0x0000000c);
  iVar1 = piVar2[1];
  *(undefined4 *)(iVar1 + 0x20) = in_stack_00000018;
  *(undefined4 *)(iVar1 + 0x24) = in_stack_0000001c;
  *(undefined4 *)(iVar1 + 0x28) = in_stack_00000020;
  *(undefined4 *)(piVar2[1] + 0x198) = *(undefined4 *)(param_1[1] + 0x208);
  if ((float)param_1[0x5b] != 0.0) {
    (**(code **)(*piVar2 + 0xc))(param_1[0x5b],0);
    return piVar2;
  }
  iVar1 = *piVar2;
  fVar3 = (float10)(**(code **)(*param_1 + 8))(0);
  (**(code **)(iVar1 + 0xc))((float)fVar3);
  return piVar2;
}

/* 10050eb0  CM61Grenade::Spawn  (241 bytes)
 * undefined Spawn()
 */
void __fastcall CM61Grenade::Spawn(int param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  CTSPhysicObject::Spawn(param_1);
  CTSGrenade::Precache();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),s_models_w_m61_mdl_1009ab54);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 10;
  uStack_c = 0;
  uStack_8 = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 2;
  uStack_4 = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x11c) = 0x3f400000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x120) = 0x3f4ccccd;
  UTIL_SetSize(*(int *)(param_1 + 4),&uStack_c,&uStack_18);
  *(code **)(param_1 + 0x10) = FUN_10052e90;
  *(code **)(param_1 + 0x14) = FUN_10052ea0;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x254) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x250) = 0;
  *(uint *)(*(int *)(param_1 + 4) + 0x250) = *(uint *)(*(int *)(param_1 + 4) + 0x250) | 2;
  return;
}

/* 10050fb0  CM61Grenade::BounceTouch  (34 bytes)
 * void BounceTouch(CBaseEntity * param_1)
 */
/* public: virtual void __thiscall CM61Grenade::BounceTouch(class CBaseEntity *) */

void __thiscall CM61Grenade::BounceTouch(CM61Grenade *this,CBaseEntity *param_1)

{
                    /* 0x50fb0  7  ?BounceTouch@CM61Grenade@@UAEXPAVCBaseEntity@@@Z */
  if (*(int *)(*(int *)(param_1 + 4) + 0x208) != *(int *)&this->field_0x80) {
    CTSGrenade::BounceTouch((CTSGrenade *)this,param_1);
  }
  return;
}

/* 10050fe0  CM61Grenade::WaitThink  (731 bytes)
 * void WaitThink(void)
 */
/* public: virtual void __thiscall CM61Grenade::WaitThink(void) */

void __thiscall CM61Grenade::WaitThink(CM61Grenade *this)

{
  edict_t *peVar1;
  int iVar2;
  undefined4 *puVar3;
  Vector *this_00;
  float fVar4;
  Vector *pVVar5;
  int *piVar6;
  float10 fVar7;
  float in_stack_ffffff40;
  float in_stack_ffffff44;
  float in_stack_ffffff48;
  entvars_t *peVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  Vector VStack_8c;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  Vector VStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  Vector VStack_5c;
  Vector VStack_50;
  Vector VStack_44;
  undefined1 auStack_38 [16];
  float fStack_28;
  edict_t *peStack_8;
  
                    /* 0x50fe0  130  ?WaitThink@CM61Grenade@@UAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.1;
  if (*(float *)&this->field_0x78 <= *(float *)&this->field_0x7c) {
    iVar2 = (*this->vtable[0x2f])();
    if (iVar2 == 0) {
      RemoveEntityFromSlowedArray((int)this);
      UTIL_Remove((int *)this);
      return;
    }
    if (*(int *)&this->field_0x80 == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = (float)(*(int *)&this->field_0x80 + 0x80);
    }
    peVar8 = this->pev;
    fVar12 = 1024.0;
    fVar11 = 300.0;
    fVar10 = 5.8294e-42;
    fVar9 = 110.0;
    Vector::Vector((Vector *)&stack0xffffff40,peVar8->origin);
    TSExplosion(in_stack_ffffff40,in_stack_ffffff44,in_stack_ffffff48,(int)peVar8,(int)fVar4,fVar9,
                fVar10,fVar11,fVar12);
    RemoveEntityFromSlowedArray((int)this);
    UTIL_Remove((int *)this);
    return;
  }
  fVar7 = (float10)(*this->vtable[2])();
  peVar8 = this->pev;
  *(float *)&this->field_0x7c = (float)(fVar7 * (float10)0.1 + (float10)*(float *)&this->field_0x7c)
  ;
  if (SQRT(peVar8->velocity[2] * peVar8->velocity[2] +
           peVar8->velocity[1] * peVar8->velocity[1] + peVar8->velocity[0] * peVar8->velocity[0]) <=
      64.0) goto LAB_100512aa;
  peVar1 = peVar8->pContainingEntity;
  fVar4 = SQRT(peVar8->velocity[2] * peVar8->velocity[2] +
               peVar8->velocity[1] * peVar8->velocity[1] + peVar8->velocity[0] * peVar8->velocity[0]
              );
  if (fVar4 == 0.0) {
    fVar10 = 1.0;
    fVar9 = 0.0;
    fVar4 = 0.0;
    pVVar5 = &VStack_44;
  }
  else {
    fVar4 = 1.0 / fVar4;
    fVar10 = fVar4 * peVar8->velocity[2];
    fVar9 = fVar4 * peVar8->velocity[1];
    fVar4 = fVar4 * peVar8->velocity[0];
    pVVar5 = &VStack_50;
  }
  puVar3 = (undefined4 *)Vector::Vector(pVVar5,fVar4,fVar9,fVar10);
  Vector::Vector(&VStack_8c,puVar3);
  fStack_68 = VStack_8c.x * 64.0;
  fStack_64 = VStack_8c.y * 64.0;
  fStack_60 = VStack_8c.z * 64.0;
  Vector::Vector(&VStack_74,&fStack_68);
  peVar8 = this->pev;
  fStack_80 = VStack_74.x + peVar8->origin[0];
  fStack_7c = VStack_74.y + peVar8->origin[1];
  fStack_78 = VStack_74.z + peVar8->origin[2];
  Vector::Vector(&VStack_5c,&fStack_80);
  UTIL_TraceLine(this->pev->origin,&VStack_5c,0,peVar1,auStack_38);
  if (1.0 <= fStack_28) goto LAB_100512aa;
  if (peStack_8 == (edict_t *)0x0) {
    peStack_8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peStack_8 != (edict_t *)0x0) goto LAB_1005120b;
    piVar6 = (int *)0x0;
  }
  else {
LAB_1005120b:
    piVar6 = peStack_8->pvPrivateData;
  }
  peVar8 = this->pev;
  if (*(float *)(piVar6[1] + 0x160) <=
      SQRT(peVar8->velocity[2] * peVar8->velocity[2] +
           peVar8->velocity[1] * peVar8->velocity[1] + peVar8->velocity[0] * peVar8->velocity[0]) *
      0.1) {
    FUN_100796a0();
    iVar2 = *piVar6;
    pVVar5 = &VStack_50;
    fVar4 = 64.0;
    this_00 = (Vector *)FUN_100148f0(this->pev->velocity,&VStack_44.x);
    puVar3 = (undefined4 *)Vector::operator*(this_00,&pVVar5->x,fVar4);
    Vector::Vector((Vector *)&stack0xffffff50,puVar3);
    (**(code **)(iVar2 + 0x4c))();
    FUN_100796c0(this->pev,this->pev);
  }
LAB_100512aa:
  CTSPhysicObject::WaitThink((CTSPhysicObject *)this);
  return;
}

/* 100512c0  CM61Grenade::Use  (393 bytes)
 * undefined Use()
 */
void __thiscall CM61Grenade::Use(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  Vector aVStack_3c [2];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  Vector VStack_c;
  
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x200) != 0) {
    iVar4 = (**(code **)(*param_2 + 0xc0))();
    if (iVar4 != 0) {
      iVar4 = (**(code **)(*param_2 + 0xac))();
      if ((iVar4 != 0) && (iVar4 = param_2[1], (*(byte *)(iVar4 + 0x118) & 0x80) == 0)) {
        uStack_20 = *(undefined4 *)(iVar4 + 0x78);
        uStack_1c = *(undefined4 *)(iVar4 + 0x7c);
        uStack_24 = 0;
        UTIL_MakeVectors(&uStack_24);
        fVar1 = gpGlobals->v_forward[0];
        aVStack_3c[0].y = gpGlobals->v_forward[1];
        aVStack_3c[0].z = gpGlobals->v_forward[2] + 0.75;
        fVar2 = SQRT(fVar1 * fVar1 +
                     aVStack_3c[0].y * aVStack_3c[0].y + aVStack_3c[0].z * aVStack_3c[0].z);
        if (fVar2 == 0.0) {
          aVStack_3c[0].x = 0.0;
          aVStack_3c[0].y = 0.0;
          aVStack_3c[0].z = 1.0;
        }
        else {
          fVar2 = 1.0 / fVar2;
          puVar5 = (undefined4 *)
                   Vector::Vector(&VStack_c,fVar1 * fVar2,aVStack_3c[0].y * fVar2,
                                  aVStack_3c[0].z * fVar2);
          Vector::Vector(aVStack_3c,puVar5);
        }
        iVar4 = param_2[1];
        iVar3 = *(int *)(param_1 + 4);
        fVar1 = *(float *)(iVar4 + 0x24);
        fVar2 = *(float *)(iVar4 + 0x28);
        *(float *)(iVar3 + 0x20) = aVStack_3c[0].x * 625.0 + *(float *)(iVar4 + 0x20);
        *(float *)(iVar3 + 0x24) = aVStack_3c[0].y * 625.0 + fVar1;
        *(float *)(iVar3 + 0x28) = aVStack_3c[0].z * 625.0 + fVar2;
      }
    }
  }
  return;
}

