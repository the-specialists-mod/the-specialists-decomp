/* ts_i386.so - CEnvBeverage (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000bde50  CEnvBeverage::Precache  (53 bytes)
 * undefined Precache(void)
 */
/* CEnvBeverage::Precache(void) */

void CEnvBeverage::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)("models/can.mdl");
  (*g_engfuncs.pfnPrecacheSound)("weapons/g_bounce3.wav");
  return;
}

/* 000bdeac  CEnvBeverage::Use  (193 bytes)
 * undefined Use(int * param_1)
 */
/* CEnvBeverage::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CEnvBeverage::Use(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((*(float *)(iVar2 + 0x164) == 0.0) && (0.0 < *(float *)(iVar2 + 0x160))) {
    piVar1 = CBaseEntity::Create(0x10c4f3,(undefined4 *)(*param_1 + 8),
                                 (undefined4 *)(*param_1 + 0x50),*(undefined4 *)(iVar2 + 0x208));
    if (*(int *)(*param_1 + 0x110) == 6) {
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,5);
      *(int *)(*piVar1 + 0x110) = iVar2;
    }
    else {
      *(undefined4 *)(*piVar1 + 0x110) = *(undefined4 *)(*param_1 + 0x110);
    }
    *(undefined4 *)(*param_1 + 0x164) = 0x3f800000;
    *(float *)(*param_1 + 0x160) = *(float *)(*param_1 + 0x160) - 1.0;
  }
  return;
}

/* 000bdf70  CEnvBeverage::Spawn  (107 bytes)
 * undefined Spawn(void)
 */
/* CEnvBeverage::Spawn(void) */

void __thiscall CEnvBeverage::Spawn(CEnvBeverage *this)

{
  (*this->vtable[10])(this);
  this->pev->solid = 0;
  this->pev->effects = 0x80;
  this->pev->frags = 0.0;
  if (this->pev->health == 0.0) {
    this->pev->health = 10.0;
  }
  return;
}

