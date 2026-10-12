/* mp.dll - CTSPhysicObject (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10046a70  CTSPhysicObject::SavePhysics  (477 bytes)
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
  if ((*(float *)(param_1 + 0x74) == *(float *)(iVar5 + 0x254)) ||
     (((*(float *)(param_1 + 0x54) == DAT_1009f4a8 && (*(float *)(param_1 + 0x58) == DAT_1009f4ac))
      && (*(float *)(param_1 + 0x5c) == DAT_1009f4b0)))) {
    if (*(float *)(param_1 + 0x54) != DAT_1009f4a8) {
      return;
    }
    if (*(float *)(param_1 + 0x58) != DAT_1009f4ac) {
      return;
    }
    if (*(float *)(param_1 + 0x5c) != DAT_1009f4b0) {
      return;
    }
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
    fVar2 = *(float *)(iVar5 + 0x254);
    fVar3 = fVar2 * *(float *)(iVar5 + 0x11c);
  }
  else {
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
    iVar5 = *(int *)(param_1 + 4);
    fVar2 = *(float *)(iVar5 + 0x254);
    fVar3 = fVar2 * *(float *)(param_1 + 0x6c);
  }
  *(float *)(iVar5 + 0x11c) = fVar3 * fVar2;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x254);
  return;
}

/* 10046c50  CTSPhysicObject::RestorePhysycs  (185 bytes)
 * undefined RestorePhysycs()
 */
void __fastcall CTSPhysicObject::RestorePhysycs(int param_1)

{
  int iVar1;
  
  if (((*(float *)(param_1 + 0x54) != DAT_1009f4a8) || (*(float *)(param_1 + 0x58) != DAT_1009f4ac))
     || (*(float *)(param_1 + 0x5c) != DAT_1009f4b0)) {
    iVar1 = *(int *)(param_1 + 4);
    *(float *)(iVar1 + 0x20) = *(float *)(param_1 + 0x54);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x5c);
    iVar1 = *(int *)(param_1 + 4);
    *(float *)(iVar1 + 0x5c) = *(float *)(param_1 + 0x60);
    *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x11c) = *(undefined4 *)(param_1 + 0x6c);
    *(float *)(param_1 + 0x54) = DAT_1009f4a8;
    *(float *)(param_1 + 0x58) = DAT_1009f4ac;
    *(float *)(param_1 + 0x5c) = DAT_1009f4b0;
    *(float *)(param_1 + 0x60) = DAT_1009f4a8;
    *(float *)(param_1 + 100) = DAT_1009f4ac;
    *(float *)(param_1 + 0x68) = DAT_1009f4b0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return;
}

/* 10046d10  CTSPhysicObject::WaitThink  (38 bytes)
 * void WaitThink(void)
 * called by: CM61Grenade::WaitThink, CTSKnife::WaitThink, CTSShrapnel::WaitThink, CTSWorldGun::Fall
 */
/* public: virtual void __thiscall CTSPhysicObject::WaitThink(void) */

void __thiscall CTSPhysicObject::WaitThink(CTSPhysicObject *this)

{
                    /* 0x46d10  131  ?WaitThink@CTSPhysicObject@@UAEXXZ */
  if (*(float *)(*(int *)(this + 4) + 0x254) != 0.0) {
                    /* WARNING: Could not recover jumptable at 0x10046d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)this + 0xf4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10046d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0xf8))();
  return;
}

