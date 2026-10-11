/* mp.dll - CTSPhysicObject (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10050090  CTSPhysicObject::Spawn  (86 bytes)
 * undefined Spawn(int param_1)
 * called by: CM61Grenade::Spawn, CTSFlag::Spawn, CTSKnife::Spawn, CTSShrapnel::Spawn, CTSWorldGun::Spawn
 */
void __fastcall CTSPhysicObject::Spawn(int param_1)

{
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x254) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x54) = DAT_100ae498;
  *(undefined4 *)(param_1 + 0x58) = DAT_100ae49c;
  *(undefined4 *)(param_1 + 0x5c) = DAT_100ae4a0;
  *(undefined4 *)(param_1 + 0x60) = DAT_100ae498;
  *(undefined4 *)(param_1 + 100) = DAT_100ae49c;
  *(undefined4 *)(param_1 + 0x68) = DAT_100ae4a0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}

/* 100500f0  CTSPhysicObject::SavePhysics  (570 bytes)
 * undefined SavePhysics()
 */
void __fastcall CTSPhysicObject::SavePhysics(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  if ((*(float *)(param_1 + 0x74) != *(float *)(iVar5 + 0x254)) &&
     (((*(float *)(param_1 + 0x54) != DAT_100ae498 || (*(float *)(param_1 + 0x58) != DAT_100ae49c))
      || (*(float *)(param_1 + 0x5c) != DAT_100ae4a0)))) {
    fVar2 = *(float *)(iVar5 + 0x254);
    fVar3 = *(float *)(param_1 + 0x58);
    fVar4 = *(float *)(param_1 + 0x5c);
    *(float *)(iVar5 + 0x20) = fVar2 * *(float *)(param_1 + 0x54);
    *(float *)(iVar5 + 0x24) = fVar2 * fVar3;
    *(float *)(iVar5 + 0x28) = fVar2 * fVar4;
    iVar5 = *(int *)(param_1 + 4);
    fVar2 = *(float *)(iVar5 + 0x254);
    fVar3 = *(float *)(param_1 + 100);
    fVar4 = *(float *)(param_1 + 0x68);
    *(float *)(iVar5 + 0x5c) = fVar2 * *(float *)(param_1 + 0x60);
    *(float *)(iVar5 + 0x60) = fVar2 * fVar3;
    *(float *)(iVar5 + 100) = fVar2 * fVar4;
    fVar2 = *(float *)(*(int *)(param_1 + 4) + 0x254);
    *(float *)(*(int *)(param_1 + 4) + 0x11c) = fVar2 * *(float *)(param_1 + 0x6c) * fVar2;
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x254);
    return;
  }
  if (((*(float *)(param_1 + 0x54) == DAT_100ae498) && (*(float *)(param_1 + 0x58) == DAT_100ae49c))
     && (*(float *)(param_1 + 0x5c) == DAT_100ae4a0)) {
    pfVar1 = (float *)(iVar5 + 0x20);
    *(float *)(param_1 + 0x54) = *pfVar1;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar5 + 0x24);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar5 + 0x28);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar5 + 0x5c);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar5 + 0x60);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar5 + 100);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar5 + 0x11c);
    fVar2 = *(float *)(iVar5 + 0x254);
    *pfVar1 = fVar2 * *pfVar1;
    *(float *)(iVar5 + 0x24) = fVar2 * *(float *)(iVar5 + 0x24);
    *(float *)(iVar5 + 0x28) = fVar2 * *(float *)(iVar5 + 0x28);
    iVar5 = *(int *)(param_1 + 4);
    fVar2 = *(float *)(iVar5 + 0x254);
    *(float *)(iVar5 + 0x5c) = fVar2 * *(float *)(iVar5 + 0x5c);
    *(float *)(iVar5 + 0x60) = fVar2 * *(float *)(iVar5 + 0x60);
    *(float *)(iVar5 + 100) = fVar2 * *(float *)(iVar5 + 100);
    iVar5 = *(int *)(param_1 + 4);
    *(float *)(iVar5 + 0x11c) =
         *(float *)(iVar5 + 0x254) * *(float *)(iVar5 + 0x11c) * *(float *)(iVar5 + 0x254);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x254);
  }
  return;
}

/* 10050330  CTSPhysicObject::RestorePhysycs  (185 bytes)
 * undefined RestorePhysycs()
 */
void __fastcall CTSPhysicObject::RestorePhysycs(int param_1)

{
  int iVar1;
  
  if (((*(float *)(param_1 + 0x54) != DAT_100ae498) || (*(float *)(param_1 + 0x58) != DAT_100ae49c))
     || (*(float *)(param_1 + 0x5c) != DAT_100ae4a0)) {
    iVar1 = *(int *)(param_1 + 4);
    *(float *)(iVar1 + 0x20) = *(float *)(param_1 + 0x54);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x5c);
    iVar1 = *(int *)(param_1 + 4);
    *(float *)(iVar1 + 0x5c) = *(float *)(param_1 + 0x60);
    *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x11c) = *(undefined4 *)(param_1 + 0x6c);
    *(float *)(param_1 + 0x54) = DAT_100ae498;
    *(float *)(param_1 + 0x58) = DAT_100ae49c;
    *(float *)(param_1 + 0x5c) = DAT_100ae4a0;
    *(float *)(param_1 + 0x60) = DAT_100ae498;
    *(float *)(param_1 + 100) = DAT_100ae49c;
    *(float *)(param_1 + 0x68) = DAT_100ae4a0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return;
}

/* 100503f0  CTSPhysicObject::WaitThink  (36 bytes)
 * void WaitThink(void)
 * called by: CM61Grenade::WaitThink, CTSFlag::Fall, CTSKnife::WaitThink, CTSShrapnel::WaitThink, CTSWorldGun::Fall
 */
/* public: virtual void __thiscall CTSPhysicObject::WaitThink(void) */

void __thiscall CTSPhysicObject::WaitThink(CTSPhysicObject *this)

{
  int iVar1;
  
                    /* 0x503f0  140  ?WaitThink@CTSPhysicObject@@UAEXXZ */
  iVar1 = (**(code **)(*(int *)this + 0x10))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x110))();
    return;
  }
  (**(code **)(*(int *)this + 0x114))();
  return;
}

