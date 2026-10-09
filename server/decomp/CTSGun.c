/* ts_i386.so - CTSGun (47 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000802a8  CTSGun::ScaleSpread  (361 bytes)
 * undefined ScaleSpread(float * param_1, float param_2, int param_3)
 */
/* CTSGun::ScaleSpread(float &, float, int) */

void __thiscall CTSGun::ScaleSpread(CTSGun *this,float *param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longdouble lVar4;
  float local_1c;
  float local_18;
  
  if (param_3 != 0) {
    *param_1 = *param_1 * 0.875;
  }
  if (0.0 < param_2) {
    local_18 = 2.0;
    uVar3 = DoubleFireRate(*(int *)&this->field_0x80);
    if (uVar3 != 0) {
      local_18 = 1.0;
    }
    if (param_3 != 0) {
      local_18 = local_18 * 0.775;
    }
    fVar1 = gpGlobals->time;
    fVar2 = fVar1 - *(float *)&this->field_0x9e8;
    if (0.001 <= fVar2) {
      *param_1 = *param_1 + *(float *)(*(int *)&this->field_0x80 + 0x778);
      lVar4 = (longdouble)
              (**(code **)(*(int *)(*(int *)&this->field_0x80 + 0x60) + 0x10))
                        (*(int *)&this->field_0x80);
      lVar4 = lVar4 * (longdouble)fVar2;
      local_1c = (float)lVar4;
      if ((longdouble)1.0 <= lVar4) {
        *(undefined4 *)&this->field_0x9ec = 0;
        local_1c = 0.5;
      }
      fVar2 = (1.0 - local_1c) * param_2 * local_18 + *(float *)(*(int *)&this->field_0x80 + 0x778);
      if (0.1 < fVar2) {
        fVar2 = 0.1;
      }
      *(float *)(*(int *)&this->field_0x80 + 0x778) = fVar2;
    }
    else {
      *(undefined4 *)&this->field_0x9ec = 0;
    }
    *(float *)&this->field_0x9e8 = fVar1;
  }
  return;
}

/* 00080414  CTSGun::VKickback  (252 bytes)
 * undefined VKickback(int param_1, float param_2, int param_3, char param_4)
 */
/* CTSGun::VKickback(float, int, bool, float, float, bool) */

void CTSGun::VKickback(int param_1,float param_2,int param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_2 * 0.85;
  if (param_3 == 8) {
    local_c = local_10 * 0.35;
  }
  else if (param_3 - 4U < 2) {
    local_c = local_10 * 0.15;
  }
  else if (param_3 == 1) {
    local_c = local_10 * -0.25;
  }
  else if (param_3 - 6U < 2) {
    local_c = local_10 * -0.3;
  }
  else if (param_3 == 9) {
    local_c = local_10 * -0.35;
  }
  else {
    local_c = 0.0;
  }
  if (param_4 != '\0') {
    local_10 = local_10 * 0.775;
    local_c = local_c * 0.775;
  }
  uVar2 = DoubleFireRate(*(int *)(param_1 + 0x80));
  if (uVar2 != 0) {
    local_10 = local_10 * 0.6666667;
    local_c = local_c * 0.6666667;
  }
  iVar1 = **(int **)(param_1 + 0x80);
  if ((*(byte *)(iVar1 + 0x1a5) & 0x20) != 0) {
    *(float *)(iVar1 + 0x68) = *(float *)(iVar1 + 0x68) - local_10;
    *(float *)(**(int **)(param_1 + 0x80) + 0x6c) =
         local_c + *(float *)(**(int **)(param_1 + 0x80) + 0x6c);
  }
  return;
}

/* 0008053c  CTSGun::Spawn  (164 bytes)
 * undefined Spawn(void)
 */
/* CTSGun::Spawn(void) */

void __thiscall CTSGun::Spawn(CTSGun *this)

{
  Reset(this);
  this->pev->classname = (int)"weapon_tsgun" - (int)gpGlobals->pStringBase;
  (*this->vtable[10])(this);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/w_glock18.mdl");
  *(undefined4 *)&this->field_0x88 = 0x10;
  *(undefined4 *)&this->field_0xb4 = 1;
  *(undefined4 *)&this->field_0xc4 = 1;
  *(undefined4 *)&this->field_0xc8 = 0;
  *(undefined4 *)&this->field_0x9e4 = 0;
  *(undefined4 *)&this->field_0x9e8 = 0;
  CBasePlayerItem::FallInit((CBasePlayerItem *)this);
  return;
}

/* 000805e0  CTSGun::Reset  (128 bytes)
 * undefined Reset(void)
 */
/* CTSGun::Reset(void) */

void __thiscall CTSGun::Reset(CTSGun *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&this->field_0x114;
  for (iVar1 = 0x214; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)&this->field_0xd4;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)&this->field_0xc8 = 0;
  *(undefined4 *)&this->field_0xcc = 0;
  *(undefined4 *)&this->field_0xd0 = 0;
  this->field_0x97a = 0;
  puVar2 = (undefined4 *)&this->field_0x97c;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)&this->field_0x9b4 = 0;
  puVar2 = (undefined4 *)&this->field_0x9b8;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined4 *)&this->field_0xa08 = 0;
  return;
}

/* 00080660  CTSGun::Precache  (307 bytes)
 * undefined Precache(void)
 */
/* CTSGun::Precache(void) */

void __thiscall CTSGun::Precache(CTSGun *this)

{
  ushort uVar1;
  
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,"events/fire.sc");
  *(ushort *)&this->field_0x964 = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,"events/coldcock.sc");
  *(ushort *)&this->field_0x966 = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,"events/firelinked.sc");
  *(ushort *)&this->field_0x96e = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,"events/empty.sc");
  *(ushort *)&this->field_0x968 = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,"events/pump.sc");
  *(ushort *)&this->field_0x96a = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,"events/closecombat.sc");
  *(ushort *)&this->field_0x96c = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,"events/reload.sc");
  *(ushort *)&this->field_0x970 = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,"events/knife.sc");
  *(ushort *)&this->field_0x972 = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,"events/katana.sc");
  *(ushort *)&this->field_0x974 = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,"events/draw.sc");
  *(ushort *)&this->field_0x976 = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,"events/grenade.sc");
  *(ushort *)&this->field_0x978 = uVar1;
  return;
}

/* 00080794  CTSGun::AddItem  (279 bytes)
 * undefined4 AddItem(uint param_1)
 */
/* CTSGun::AddItem(int) */

undefined4 __thiscall CTSGun::AddItem(CTSGun *this,uint param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  uVar6 = 0x8079c;
  uVar2 = 0;
  if (*(int *)&this->field_0xcc != 0) {
    if ((((param_1 & *(uint *)(*(int *)&this->field_0xd0 + 0xe0)) == 0) ||
        ((param_1 & *(uint *)(*(int *)&this->field_0xd0 + 0xe4)) != 0)) ||
       ((param_1 & *(uint *)(*(int *)&this->field_0xcc + 0x10)) != 0)) {
      uVar2 = 0;
    }
    else {
      puVar1 = (uint *)(*(int *)&this->field_0xcc + 0x10);
      *puVar1 = *puVar1 | param_1;
      uVar2 = IsWeaponAkimbo(*(int *)&this->field_0xc8);
      if ((char)uVar2 == '\0') {
        if ((*(int *)(*(int *)&this->field_0xd0 + 200) != -1) &&
           (iVar3 = *(int *)(*(int *)&this->field_0xd0 + 200) * 0x38,
           (&this->field_0x114)[iVar3] != '\0')) {
          *(uint *)(&this->field_0x124 + iVar3) = *(uint *)(&this->field_0x124 + iVar3) | param_1;
        }
      }
      else {
        *(uint *)(&this->field_0x124 + *(int *)(*(int *)&this->field_0xd0 + 0xcc) * 0x38) =
             *(uint *)(&this->field_0x124 + *(int *)(*(int *)&this->field_0xd0 + 0xcc) * 0x38) |
             param_1;
      }
      uVar4 = *(uint *)&this->field_0xc8;
      *(undefined4 *)&this->field_0xc8 = 0;
      uVar5 = 0;
      iVar3 = SelectWeapon(this,uVar4);
      if (iVar3 != 0) {
        (*this->vtable[0x4a])(this,uVar4,uVar5,uVar6);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

/* 000808ac  CTSGun::AddAmmo  (156 bytes)
 * undefined4 AddAmmo(byte.conflict param_1, int param_2)
 */
/* CTSGun::AddAmmo(unsigned char, int) */

undefined4 __thiscall CTSGun::AddAmmo(CTSGun *this,byte_conflict param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (((param_1 < 0x10) && (0 < param_2)) &&
     (*(int *)(&this->field_0xd4 + (uint)param_1 * 4) <
      *(int *)(&DAT_00186e0c + (uint)param_1 * 0x38))) {
    iVar1 = (uint)param_1 * 4;
    iVar4 = param_2 + *(int *)(&this->field_0xd4 + iVar1);
    *(int *)(&this->field_0xd4 + iVar1) = iVar4;
    iVar3 = (uint)param_1 * 0x38;
    if (*(int *)(&DAT_00186e0c + iVar3) < iVar4) {
      *(undefined4 *)(&this->field_0xd4 + iVar1) = *(undefined4 *)(&DAT_00186e0c + iVar3);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* 0008094c  CTSGun::DropWeapon  (177 bytes)
 * undefined4 DropWeapon(int param_1, char param_2)
 */
/* CTSGun::DropWeapon(int, bool) */

undefined4 __thiscall CTSGun::DropWeapon(CTSGun *this,int param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1 - 1U < 0x25) && ((&this->field_0x114)[param_1 * 0x38] != '\0')) {
    puVar2 = (undefined4 *)(&this->field_0x114 + param_1 * 0x38);
    for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    if ((*(int *)&this->field_0x80 == 0) ||
       (iVar1 = (**(code **)(*(int *)(*(int *)&this->field_0x80 + 0x60) + 0xb4))
                          (*(int *)&this->field_0x80), iVar1 != 0)) {
      if (param_1 == *(int *)&this->field_0xc8) {
        if (param_2 == '\0') {
          HolsterWeapon(this);
        }
        else {
          GetBetterWeapon(this,param_1);
        }
      }
      return 1;
    }
  }
  return 0;
}

/* 00080a04  CTSGun::TakeWeapon  (1332 bytes)
 * undefined4 TakeWeapon(uint param_1, undefined4 * param_2, uint param_3)
 */
/* CTSGun::TakeWeapon(int, s_weapon_status *, int) */

undefined4 __thiscall CTSGun::TakeWeapon(CTSGun *this,uint param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  short local_12;
  
  if (0x25 < param_1) {
    return 0;
  }
  if (*(char *)(&global_weapon_info + param_1 * 0xf7) != '\0') {
    local_12 = (short)param_1;
    if ((&this->field_0x114)[param_1 * 0x38] == '\0') {
      if ((*(int *)(&DAT_0017dc08 + param_1 * 0x3dc) == -1) ||
         ((*(char *)(&global_weapon_info + *(int *)(&DAT_0017dc08 + param_1 * 0x3dc) * 0xf7) != '\0'
          && ((&this->field_0x114)[*(int *)(&DAT_0017dc08 + param_1 * 0x3dc) * 0x38] == '\0'))))
      goto LAB_00080b9b;
    }
    else if ((&DAT_0017dc1c)[param_1 * 0x3dc] == '\0') {
      if (((*(int *)(&DAT_0017dc08 + param_1 * 0x3dc) != -1) &&
          (*(char *)(&global_weapon_info + *(int *)(&DAT_0017dc08 + param_1 * 0x3dc) * 0xf7) != '\0'
          )) && ((&this->field_0x114)[*(int *)(&DAT_0017dc08 + param_1 * 0x3dc) * 0x38] == '\0')) {
        local_12 = *(short *)(&DAT_0017dc08 + param_1 * 0x3dc);
        goto LAB_00080b9b;
      }
    }
    else if (*(int *)(&this->field_0x118 + param_1 * 0x38) <
             *(int *)(&DAT_0017db64 + param_1 * 0x3dc)) {
LAB_00080b9b:
      iVar5 = (int)local_12;
      puVar1 = (undefined4 *)(&this->field_0x114 + iVar5 * 0x38);
      iVar2 = iVar5 * 0x3dc;
      if (((&DAT_0017dc1c)[iVar2] == '\0') || ((&this->field_0x114)[iVar5 * 0x38] == '\0')) {
        if (param_2 == (undefined4 *)0x0) {
          *(undefined1 *)puVar1 = 1;
          (&this->field_0x115)[iVar5 * 0x38] = (&DAT_0017db48)[iVar2];
          *(undefined4 *)(&this->field_0x120 + iVar5 * 0x38) = 0;
          if ((*(uint *)(&DAT_0017db4c + iVar2) & 1) == 0) {
            if ((*(uint *)(&DAT_0017db4c + iVar2) & 8) == 0) {
              (&this->field_0x116)[iVar5 * 0x38] =
                   '\x02' - ((*(uint *)(&DAT_0017db4c + iVar2) & 4) == 0);
            }
            else {
              (&this->field_0x116)[iVar5 * 0x38] = 3;
            }
          }
          else {
            (&this->field_0x116)[iVar5 * 0x38] = 0;
          }
          uVar3 = IsWeaponAkimbo((int)local_12);
          if ((char)uVar3 == '\0') {
            uVar3 = IsOnlyAkimbo((int)local_12);
            if ((char)uVar3 == '\0') {
              *(undefined4 *)(&this->field_0x118 + iVar5 * 0x38) = (&DAT_0017db44)[iVar5 * 0xf7];
              *(uint *)(&this->field_0x124 + iVar5 * 0x38) =
                   param_3 | *(uint *)(&DAT_0017dc24 + iVar2);
              *(undefined4 *)(&this->field_0x128 + iVar5 * 0x38) = 0;
            }
            else {
              *(int *)(&this->field_0x130 + iVar5 * 0x38) = (int)(&DAT_0017db44)[iVar5 * 0xf7] / 2;
              *(int *)(&this->field_0x134 + iVar5 * 0x38) = (int)(&DAT_0017db44)[iVar5 * 0xf7] / 2;
              *(undefined4 *)(&this->field_0x118 + iVar5 * 0x38) = (&DAT_0017db44)[iVar5 * 0xf7];
              *(uint *)(&this->field_0x124 + iVar5 * 0x38) =
                   param_3 | *(uint *)(&DAT_0017dc24 + iVar2);
              *(undefined4 *)(&this->field_0x128 + iVar5 * 0x38) = 0;
            }
          }
          else {
            iVar4 = *(int *)(&this->field_0x118 + *(int *)(&DAT_0017dc0c + iVar2) * 0x38);
            *(int *)(&this->field_0x130 + iVar5 * 0x38) = iVar4;
            iVar6 = (&DAT_0017db44)[*(int *)(&DAT_0017dc0c + iVar2) * 0xf7];
            *(int *)(&this->field_0x134 + iVar5 * 0x38) = iVar6;
            *(int *)(&this->field_0x118 + iVar5 * 0x38) = iVar4 + iVar6;
            uVar7 = param_3 | *(uint *)(&this->field_0x124 + *(int *)(&DAT_0017dc0c + iVar2) * 0x38)
                    | *(uint *)(&this->field_0x124 + iVar5 * 0x38);
            *(uint *)(&this->field_0x124 + iVar5 * 0x38) = uVar7;
            *(uint *)(&this->field_0x124 + *(int *)(&DAT_0017dc0c + iVar2) * 0x38) = uVar7;
            uVar7 = *(uint *)(&this->field_0x128 + iVar5 * 0x38) |
                    *(uint *)(&this->field_0x128 + *(int *)(&DAT_0017dc0c + iVar2) * 0x38);
            *(uint *)(&this->field_0x128 + iVar5 * 0x38) = uVar7;
            *(uint *)(&this->field_0x128 + *(int *)(&DAT_0017dc0c + iVar2) * 0x38) = uVar7;
          }
          *(undefined4 *)(&this->field_0x12c + iVar5 * 0x38) = 0;
          (&this->field_0x138)[iVar5 * 0x38] = 0;
          *(undefined4 *)(&this->field_0x11c + iVar5 * 0x38) = 0;
          *(int *)(&this->field_0x13c + iVar5 * 0x38) = iVar2 + 0x17dd92;
          uVar7 = *(uint *)(&this->field_0x124 + iVar5 * 0x38) & *(uint *)(&DAT_0017dc20 + iVar2);
          *(uint *)(&this->field_0x124 + iVar5 * 0x38) = uVar7;
          if ((uVar7 & 2) != 0) {
            *(uint *)(&this->field_0x128 + iVar5 * 0x38) =
                 *(uint *)(&this->field_0x128 + iVar5 * 0x38) | 2;
          }
          if (((&this->field_0x124)[iVar5 * 0x38] & 4) != 0) {
            *(uint *)(&this->field_0x128 + iVar5 * 0x38) =
                 *(uint *)(&this->field_0x128 + iVar5 * 0x38) | 4;
          }
        }
        else {
          puVar8 = puVar1;
          for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *param_2;
            param_2 = param_2 + 1;
            puVar8 = puVar8 + 1;
          }
          *(undefined1 *)puVar1 = 1;
          *(undefined4 *)(&this->field_0x11c + iVar5 * 0x38) = 0;
          *(undefined4 *)(&this->field_0x120 + iVar5 * 0x38) = 0;
          uVar3 = IsWeaponAkimbo((int)local_12);
          if ((char)uVar3 != '\0') {
            iVar6 = *(int *)(&this->field_0x118 + iVar5 * 0x38) +
                    *(int *)(&this->field_0x118 + *(int *)(&DAT_0017dc0c + iVar2) * 0x38);
            *(int *)(&this->field_0x118 + iVar5 * 0x38) = iVar6;
            iVar4 = *(int *)(&this->field_0x118 + *(int *)(&DAT_0017dc0c + iVar2) * 0x38);
            *(int *)(&this->field_0x130 + iVar5 * 0x38) = iVar4;
            *(int *)(&this->field_0x134 + iVar5 * 0x38) = iVar6 - iVar4;
            uVar7 = param_3 | *(uint *)(&this->field_0x124 + *(int *)(&DAT_0017dc0c + iVar2) * 0x38)
                    | *(uint *)(&this->field_0x124 + iVar5 * 0x38);
            *(uint *)(&this->field_0x124 + iVar5 * 0x38) = uVar7;
            *(uint *)(&this->field_0x124 + *(int *)(&DAT_0017dc0c + iVar2) * 0x38) = uVar7;
            uVar7 = *(uint *)(&this->field_0x128 + iVar5 * 0x38) |
                    *(uint *)(&this->field_0x128 + *(int *)(&DAT_0017dc0c + iVar2) * 0x38);
            *(uint *)(&this->field_0x128 + iVar5 * 0x38) = uVar7;
            *(uint *)(&this->field_0x128 + *(int *)(&DAT_0017dc0c + iVar2) * 0x38) = uVar7;
            if ((*(uint *)(&DAT_0017db4c + iVar2) & 1) == 0) {
              if ((*(uint *)(&DAT_0017db4c + iVar2) & 8) == 0) {
                (&this->field_0x116)[iVar5 * 0x38] =
                     '\x02' - ((*(uint *)(&DAT_0017db4c + iVar2) & 4) == 0);
              }
              else {
                (&this->field_0x116)[iVar5 * 0x38] = 3;
              }
            }
            else {
              (&this->field_0x116)[iVar5 * 0x38] = 0;
            }
          }
          *(uint *)(&this->field_0x124 + iVar5 * 0x38) =
               *(uint *)(&this->field_0x124 + iVar5 * 0x38) & *(uint *)(&DAT_0017dc20 + iVar2);
        }
      }
      else {
        *(int *)(&this->field_0x118 + iVar5 * 0x38) =
             *(int *)(&this->field_0x118 + iVar5 * 0x38) + 1;
      }
      return 1;
    }
  }
  return 0;
}

/* 00080f40  CTSGun::GetBetterWeapon  (116 bytes)
 * undefined GetBetterWeapon(int param_1)
 */
/* CTSGun::GetBetterWeapon(int) */

void __thiscall CTSGun::GetBetterWeapon(CTSGun *this,int param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  
  iVar1 = 0;
  uVar2 = g_iWeaponPriority;
  while ((((&this->field_0x114)[uVar2 * 0x38] == '\0' || (param_1 == uVar2)) &&
         (iVar1 = iVar1 + 1, iVar1 < 0x26))) {
    uVar2 = (&g_iWeaponPriority)[iVar1];
  }
  uVar3 = 0;
  iVar1 = SelectWeapon(this,uVar2);
  if (iVar1 != 0) {
    (*this->vtable[0x4a])(this,uVar2,uVar3);
  }
  return;
}

/* 00080fb8  CTSGun::SelectWeapon  (118 bytes)
 * undefined4 SelectWeapon(CTSGun * param_1, uint param_2)
 */
/* CTSGun::SelectWeapon(tsweapon_t, bool) */

undefined4 CTSGun::SelectWeapon(CTSGun *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_2 != *(uint *)&param_1->field_0xc8) && (param_2 < 0x26)) &&
     ((((&param_1->field_0x114)[param_2 * 0x38] != '\0' &&
       (*(char *)(&global_weapon_info + param_2 * 0xf7) != '\0')) || (uVar1 = 0, param_2 == 0)))) {
    HolsterWeapon(param_1);
    *(uint *)&param_1->field_0xc8 = param_2;
    uVar1 = 1;
  }
  return uVar1;
}

/* 00081030  CTSGun::Deploy  (499 bytes)
 * undefined4 Deploy(void)
 */
/* CTSGun::Deploy(void) */

undefined4 __thiscall CTSGun::Deploy(CTSGun *this)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)&this->field_0xc8 == 0) {
    HolsterWeapon(this);
  }
  else {
    *(undefined4 *)&this->field_0x9e0 = 0;
    iVar1 = *(int *)&this->field_0xc8;
    *(undefined1 **)&this->field_0xcc = &this->field_0x114 + iVar1 * 0x38;
    *(undefined4 **)&this->field_0xd0 = &global_weapon_info + iVar1 * 0xf7;
    *(int *)(&this->field_0x13c + iVar1 * 0x38) = iVar1 * 0x3dc + 0x17dd92;
    iVar1 = GetBodyByItems(*(int *)&this->field_0xc8,*(uint *)(*(int *)&this->field_0xcc + 0x10));
    *(int *)(*(int *)&this->field_0xcc + 0x18) = iVar1;
    this->pev->body = *(int *)(*(int *)&this->field_0xcc + 0x18);
    *(undefined4 *)(*(int *)&this->field_0xcc + 8) = 0;
    *(undefined1 *)(*(int *)&this->field_0xcc + 0x2c) = 0;
    if (*(int *)(*(int *)&this->field_0xcc + 0x28) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)*(short *)(*(int *)(*(int *)&this->field_0xcc + 0x28) + 4);
    }
    if ((*(byte *)(*(int *)&this->field_0xcc + 0x10) & 1) == 0) {
      iVar2 = *(int *)&this->field_0xd0 + 0x172;
    }
    else {
      iVar2 = *(int *)&this->field_0xd0 + 0x1b2;
    }
    CBasePlayerWeapon::DefaultDeploy
              ((CBasePlayerWeapon *)this,*(int *)&this->field_0xd0 + 0x132,iVar2,iVar1,
               (char *)(*(int *)&this->field_0xd0 + 0x232),0,this->pev->body);
    (*g_engfuncs.pfnPlaybackEvent)
              (1,*(edict_t **)(**(int **)&this->field_0x80 + 0x208),*(ushort *)&this->field_0x976,
               0.0,(float *)&g_vecZero,(float *)&g_vecZero,0.0,0.0,*(int *)&this->field_0xc8,
               *(int *)(*(int *)&this->field_0xcc + 0x10),0,0);
    CTSAnimation::Animate
              ((CTSAnimation *)(*(int *)&this->field_0x80 + 0x28c),
               *(CBasePlayer **)&this->field_0x80,0x34);
    iVar2 = *(int *)&this->field_0xc8 + 0x490;
    iVar1 = *(int *)&this->field_0x80 + 10;
    if (*(char *)(iVar2 + iVar1) < '\x01') {
      *(char *)(*(int *)&this->field_0xc8 + *(int *)&this->field_0x80 + 0x49a) =
           *(char *)(*(int *)&this->field_0xcc + 2) + '\x01';
    }
    else {
      *(char *)(*(int *)&this->field_0xcc + 2) = *(char *)(iVar2 + iVar1) + -1;
    }
  }
  return 1;
}

/* 00081228  CTSGun::GetActiveItems  (93 bytes)
 * uint GetActiveItems(void)
 */
/* CTSGun::GetActiveItems(void) */

uint __thiscall CTSGun::GetActiveItems(CTSGun *this)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if (*(int *)&this->field_0xcc != 0) {
    uVar1 = *(uint *)(*(int *)&this->field_0xcc + 0x14);
    uVar2 = IsWeaponAkimbo(*(int *)&this->field_0xc8);
    if (((char)uVar2 != '\0') ||
       (uVar2 = IsOnlyAkimbo(*(int *)&this->field_0xc8), (char)uVar2 != '\0')) {
      uVar1 = uVar1 | 0x40;
    }
  }
  return uVar1;
}

/* 00081288  CTSGun::StopReload  (125 bytes)
 * undefined StopReload(void)
 */
/* CTSGun::StopReload(void) */

void __thiscall CTSGun::StopReload(CTSGun *this)

{
  longdouble lVar1;
  
  if (((*(int *)&this->field_0xcc != 0) && (*(int *)&this->field_0xd0 != 0)) &&
     (*(int *)(*(int *)&this->field_0xcc + 0xc) != 0)) {
    *(undefined4 *)(*(int *)&this->field_0xcc + 0xc) = 0;
    if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\x01') {
      *(undefined4 *)(*(int *)&this->field_0xcc + 8) = 0;
      *(undefined1 *)(*(int *)&this->field_0xcc + 0x24) = 0;
    }
    lVar1 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0xa8 = (float)lVar1;
    *(float *)(*(int *)&this->field_0x80 + 300) = (float)lVar1;
  }
  return;
}

/* 00081308  CTSGun::MultiplyClips  (594 bytes)
 * int MultiplyClips(undefined4 param_1, CTSGun * param_2)
 */
/* CTSGun::MultiplyClips(void) */

int __regparm1 CTSGun::MultiplyClips(undefined4 param_1,CTSGun *param_2)

{
  int *piVar1;
  byte bVar2;
  uint3 uVar3;
  int iVar4;
  int iVar5;
  longdouble extraout_ST0;
  
  uVar3 = (uint3)((uint)param_1 >> 8);
  if ((*(int *)&param_2->field_0xcc == 0) || (*(int *)&param_2->field_0xd0 == 0)) {
    iVar5 = (uint)uVar3 << 8;
  }
  else {
    iVar5 = (uint)uVar3 << 8;
    if (*(int *)&param_2->field_0xc8 != 0x18) {
      StopReload(param_2);
      iVar5 = *(int *)&param_2->field_0xd0;
      if (*(char *)(iVar5 + 0xdc) == '\0') {
        *(int *)(*(int *)&param_2->field_0xcc + 4) = *(int *)(*(int *)&param_2->field_0xd0 + 4) << 1
        ;
        if (*(int *)(*(int *)&param_2->field_0xd0 + 200) == -1) {
          iVar5 = CONCAT31((int3)((uint)*(int *)&param_2->field_0xd0 >> 8),
                           *(undefined1 *)(*(int *)&param_2->field_0xd0 + 0x348)) + -4;
          if ((byte)iVar5 < 2) {
            *(int *)(*(int *)&param_2->field_0xcc + 0x1c) =
                 (int)ROUND((float)*(int *)(*(int *)&param_2->field_0xcc + 4) * 0.5);
            *(int *)(*(int *)&param_2->field_0xcc + 0x20) =
                 (int)ROUND((float)*(int *)(*(int *)&param_2->field_0xcc + 4) * 0.5);
            iVar5 = *(int *)&param_2->field_0xd0;
            if (*(int *)(iVar5 + 0xcc) != -1) {
              piVar1 = (int *)(iVar5 + 0xcc);
              iVar5 = (int)ROUND((float)*(int *)(*(int *)&param_2->field_0xcc + 4) * 0.5);
              *(int *)(&param_2->field_0x118 + *piVar1 * 0x38) = iVar5;
            }
          }
        }
        else {
          iVar5 = *(int *)(*(int *)&param_2->field_0xd0 + 200) * 0x38;
          *(int *)(&param_2->field_0x118 + iVar5) =
               (int)ROUND((float)*(int *)(*(int *)&param_2->field_0xcc + 4) * 0.5 +
                          (float)*(int *)(&param_2->field_0x118 + iVar5));
          iVar4 = *(int *)(*(int *)&param_2->field_0xd0 + 200);
          iVar5 = iVar4 * 7;
          *(undefined4 *)(&param_2->field_0x130 + iVar4 * 0x38) =
               *(undefined4 *)(*(int *)&param_2->field_0xcc + 4);
        }
      }
      else {
        iVar5 = (*(int *)(iVar5 + 0x24) * 2 - *(int *)(*(int *)&param_2->field_0xcc + 4)) *
                (uint)*(byte *)(iVar5 + 0xd0);
        iVar4 = *(int *)(*(int *)&param_2->field_0x80 + 0x548);
        if (iVar5 < iVar4) {
          iVar4 = iVar5;
        }
        bVar2 = *(byte *)(*(int *)&param_2->field_0xd0 + 0xd0);
        piVar1 = (int *)(*(int *)&param_2->field_0x80 + 0x548);
        *piVar1 = *piVar1 - iVar4;
        GetSpeedBySlots(*(int *)&param_2->field_0x80);
        CBasePlayer::SetPlayerSpeed(*(CBasePlayer **)&param_2->field_0x80,(float)extraout_ST0);
        iVar5 = *(int *)&param_2->field_0xcc;
        *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + iVar4 / (int)(uint)bVar2;
      }
      iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),1);
    }
  }
  return iVar5;
}

/* 0008155c  CTSGun::SwitchItems  (313 bytes)
 * undefined SwitchItems(void)
 */
/* CTSGun::SwitchItems(void) */

void __thiscall CTSGun::SwitchItems(CTSGun *this)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longdouble lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  if (*(int *)&this->field_0xcc == 0) {
    return;
  }
  iVar3 = *(int *)&this->field_0xcc;
  if ((*(uint *)(iVar3 + 0x10) & 6) == 6) {
    if ((*(uint *)(iVar3 + 0x14) & 6) == 6) {
      *(undefined4 *)(iVar3 + 0x14) = 0;
      goto LAB_00081638;
    }
    uVar2 = *(uint *)(*(int *)&this->field_0xcc + 0x14);
    if ((uVar2 & 2) != 0) {
      *(uint *)(*(int *)&this->field_0xcc + 0x14) = uVar2 | 4;
      puVar1 = (uint *)(*(int *)&this->field_0xcc + 0x14);
      *puVar1 = *puVar1 & 0xfffffffd;
      goto LAB_00081638;
    }
    uVar2 = *(uint *)(*(int *)&this->field_0xcc + 0x14);
    if ((uVar2 & 4) != 0) {
      *(uint *)(*(int *)&this->field_0xcc + 0x14) = uVar2 | 2;
      goto LAB_00081638;
    }
LAB_000815f2:
    puVar1 = (uint *)(*(int *)&this->field_0xcc + 0x14);
    *puVar1 = *puVar1 | 2;
  }
  else {
    iVar3 = *(int *)&this->field_0xcc;
    if ((*(byte *)(iVar3 + 0x10) & 2) == 0) {
      iVar3 = *(int *)&this->field_0xcc;
      if ((*(byte *)(iVar3 + 0x10) & 4) == 0) {
        *(undefined4 *)(*(int *)&this->field_0xcc + 0x14) = 0;
        return;
      }
      if ((*(byte *)(iVar3 + 0x14) & 4) == 0) {
        puVar1 = (uint *)(*(int *)&this->field_0xcc + 0x14);
        *puVar1 = *puVar1 | 4;
        goto LAB_00081638;
      }
    }
    else if ((*(byte *)(iVar3 + 0x14) & 2) == 0) goto LAB_000815f2;
    *(undefined4 *)(iVar3 + 0x14) = 0;
  }
LAB_00081638:
  iVar3 = *(int *)(**(int **)&this->field_0x80 + 0x208);
  fVar8 = 0.5;
  iVar4 = (*g_engfuncs.pfnRandomLong)(0,3);
  iVar4 = iVar4 + 0x62;
  uVar7 = 0;
  uVar6 = 0x3fa00000;
  lVar5 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.92,1.0);
  EMIT_SOUND_DYN(iVar3,3,"weapons/switch.wav",(float)lVar5,uVar6,uVar7,iVar4,fVar8);
  return;
}

/* 0008169c  CTSGun::SwitchFireMode  (116 bytes)
 * undefined SwitchFireMode(void)
 */
/* CTSGun::SwitchFireMode(void) */

void __thiscall CTSGun::SwitchFireMode(CTSGun *this)

{
  bool bVar1;
  uint uVar2;
  
  if (*(int *)&this->field_0xcc != 0) {
    uVar2 = *(byte *)(*(int *)&this->field_0xcc + 2) + 1;
    bVar1 = false;
    do {
      if ((*(int *)(*(int *)&this->field_0xd0 + 0xc) >> ((byte)uVar2 & 0x1f) & 1U) != 0) {
        *(byte *)(*(int *)&this->field_0xcc + 2) = (byte)uVar2;
        bVar1 = true;
      }
      uVar2 = uVar2 + 1 & (5 < (int)(uVar2 + 1)) - 1;
    } while (!bVar1);
    *(char *)(*(int *)&this->field_0xc8 + *(int *)&this->field_0x80 + 0x49a) =
         *(char *)(*(int *)&this->field_0xcc + 2) + '\x01';
  }
  return;
}

/* 00081710  CTSGun::Zoom  (53 bytes)
 * undefined Zoom(int param_1)
 */
/* CTSGun::Zoom(int) */

void __thiscall CTSGun::Zoom(CTSGun *this,int param_1)

{
  *(float *)(**(int **)&this->field_0x80 + 0x214) = (float)param_1;
  if (*(int *)(*(int *)&this->field_0xd0 + 0x3c) < 0x28) {
    *(undefined4 *)(**(int **)&this->field_0x80 + 0xbc) = 0;
  }
  return;
}

/* 00081748  CTSGun::Unzoom  (96 bytes)
 * undefined Unzoom(void)
 */
/* CTSGun::Unzoom(void) */

void __thiscall CTSGun::Unzoom(CTSGun *this)

{
  *(undefined4 *)(**(int **)&this->field_0x80 + 0x214) = 0;
  if ((*(int *)(**(int **)&this->field_0x80 + 0xbc) == 0) && (*(int *)&this->field_0xd0 != 0)) {
    *(int *)(**(int **)&this->field_0x80 + 0xbc) =
         (*(int *)&this->field_0xd0 - (int)gpGlobals->pStringBase) + 0x132;
  }
  return;
}

/* 000817a8  CTSGun::SecondaryAttack  (618 bytes)
 * undefined SecondaryAttack(void)
 */
/* CTSGun::SecondaryAttack(void) */

void __thiscall CTSGun::SecondaryAttack(CTSGun *this)

{
  uint uVar1;
  int iVar2;
  longdouble lVar3;
  
  if (*(int *)&this->field_0xcc == 0) {
    CCombatAttack(this);
    return;
  }
  if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\x02') {
    *(undefined1 *)(*(int *)&this->field_0xcc + 0x24) = 1;
    GrenadeFire(this);
    return;
  }
  if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\x03') {
    *(undefined1 *)(*(int *)&this->field_0xcc + 0x24) = 1;
    KnifeFire(this);
    return;
  }
  if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\n') {
    KatanaThrow(this);
    return;
  }
  if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\v') {
    return;
  }
  if (*(char *)(*(int *)&this->field_0xcc + 2) == '\x04') {
    if (((*(byte *)(*(int *)&this->field_0x80 + 0x815) & 8) == 0) &&
       (uVar1 = DoubleFireRate(*(int *)&this->field_0x80), uVar1 == 0)) {
      return;
    }
  }
  else if (*(char *)(*(int *)&this->field_0xcc + 2) != '\x05') {
    iVar2 = *(int *)&this->field_0xcc;
    if ((*(byte *)(iVar2 + 0x10) & 8) == 0) {
      if ((*(char *)(iVar2 + 0x2c) == '\0') && (*(short *)(*(int *)&this->field_0xd0 + 0x28c) != -1)
         ) {
        *(undefined1 *)(iVar2 + 0x2c) = 1;
        if (*(int *)(*(int *)&this->field_0xcc + 0x28) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)*(short *)(*(int *)(*(int *)&this->field_0xcc + 0x28) + 0xe);
        }
        (*this->vtable[0x5d])(this,iVar2,1,this->pev->body);
        *(int *)(*(int *)&this->field_0xcc + 0x28) = *(int *)&this->field_0xd0 + 0x28c;
      }
      else if (*(short *)(*(int *)&this->field_0xd0 + 0x28c) != -1) {
        *(undefined1 *)(*(int *)&this->field_0xcc + 0x2c) = 0;
        if (*(int *)(*(int *)&this->field_0xcc + 0x28) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)*(short *)(*(int *)(*(int *)&this->field_0xcc + 0x28) + 0xe);
        }
        (*this->vtable[0x5d])(this,iVar2,1,this->pev->body);
        *(int *)(*(int *)&this->field_0xcc + 0x28) = *(int *)&this->field_0xd0 + 0x252;
      }
    }
    else {
      if (*(float *)(**(int **)&this->field_0x80 + 0x214) == 0.0) {
        if (*(int *)(*(int *)&this->field_0xd0 + 0x3c) == 0) goto LAB_000819f3;
        iVar2 = *(int *)(*(int *)&this->field_0xd0 + 0x3c);
      }
      else {
        iVar2 = *(int *)&this->field_0xd0;
        if ((*(int *)(iVar2 + 0x40) == 0) ||
           ((float)*(int *)(iVar2 + 0x40) == *(float *)(**(int **)&this->field_0x80 + 0x214))) {
          Unzoom(this);
          goto LAB_000819f3;
        }
        iVar2 = *(int *)(iVar2 + 0x40);
      }
      Zoom(this,iVar2);
    }
LAB_000819f3:
    lVar3 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0xa0 = (float)((longdouble)0.3 + lVar3);
    lVar3 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0xa8 = (float)((longdouble)1.0 + lVar3);
    return;
  }
  Fire(this);
  return;
}

/* 00081a20  CTSGun::PrimaryAttack  (379 bytes)
 * undefined PrimaryAttack(void)
 */
/* CTSGun::PrimaryAttack(void) */

void __thiscall CTSGun::PrimaryAttack(CTSGun *this)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (*(int *)&this->field_0xcc == 0) {
    CCombatAttack(this);
    return;
  }
  if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\x02') {
    *(undefined1 *)(*(int *)&this->field_0xcc + 0x24) = 0;
    GrenadeFire(this);
    return;
  }
  if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\x03') {
    *(undefined1 *)(*(int *)&this->field_0xcc + 0x24) = 0;
    KnifeFire(this);
    return;
  }
  if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\n') {
    KatanaFire(this);
    return;
  }
  if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\v') {
    if ((*(byte *)(*(int *)&this->field_0x80 + 0x814) & 1) == 0) {
      return;
    }
    *(undefined1 *)(*(int *)&this->field_0xcc + 0x24) = 0;
    KnifeFire(this);
    return;
  }
  if ((*(char *)(*(int *)&this->field_0xcc + 2) == '\x01') ||
     (*(char *)(*(int *)&this->field_0xcc + 2) == '\x04')) {
    if ((*(byte *)(*(int *)&this->field_0x80 + 0x814) & 1) != 0) goto LAB_00081b95;
    uVar2 = DoubleFireRate(*(int *)&this->field_0x80);
    bVar3 = uVar2 == 0;
  }
  else {
    if ((*(char *)(*(int *)&this->field_0xcc + 2) == '\0') ||
       (*(char *)(*(int *)&this->field_0xcc + 2) == '\x05')) goto LAB_00081b95;
    iVar1 = *(int *)&this->field_0xcc;
    if (*(char *)(iVar1 + 2) == '\x02') {
      if ((*(byte *)(*(int *)&this->field_0x80 + 0x814) & 1) == 0) {
        return;
      }
      if (*(int *)(iVar1 + 8) != 0) {
        return;
      }
      *(uint *)(iVar1 + 8) = (*(int *)&this->field_0xc8 != 0x17) + 2;
      return;
    }
    if (*(char *)(*(int *)&this->field_0xcc + 2) != '\x03') {
      return;
    }
    bVar3 = (*(byte *)(**(int **)&this->field_0x80 + 0x180) & 1) == 0;
  }
  if (bVar3) {
    return;
  }
LAB_00081b95:
  Fire(this);
  return;
}

/* 00081ba8  CTSGun::AlternateAttack  (58 bytes)
 * undefined AlternateAttack(void)
 */
/* CTSGun::AlternateAttack(void) */

void __thiscall CTSGun::AlternateAttack(CTSGun *this)

{
  if ((*(int *)&this->field_0xcc != 0) && (0 < *(int *)(*(int *)&this->field_0xd0 + 0x10))) {
    ColdCock(this);
  }
  return;
}

/* 00081be4  CTSGun::EmptySound  (147 bytes)
 * undefined EmptySound(void)
 */
/* CTSGun::EmptySound(void) */

void __thiscall CTSGun::EmptySound(CTSGun *this)

{
  longdouble lVar1;
  
  if (*(int *)&this->field_0xc8 != 0x24) {
    (*g_engfuncs.pfnPlaybackEvent)
              (1,*(edict_t **)(**(int **)&this->field_0x80 + 0x208),*(ushort *)&this->field_0x968,
               0.0,(float *)&g_vecZero,(float *)&g_vecZero,0.0,0.0,0,0,0,0);
    lVar1 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0xa0 = (float)((longdouble)0.1 + lVar1);
    *(float *)&this->field_0x9c = (float)((longdouble)0.1 + lVar1);
    lVar1 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0xa8 = (float)((longdouble)0.5 + lVar1);
  }
  return;
}

/* 00081c78  CTSGun::Fire  (334 bytes)
 * undefined Fire(void)
 */
/* CTSGun::Fire(void) */

void __thiscall CTSGun::Fire(CTSGun *this)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)&this->field_0xcc != 0) {
    if (*(int *)(**(int **)&this->field_0x80 + 0x1c0) == 3) {
      EmptySound(this);
    }
    else {
      uVar2 = InfiniteClips(*(int *)&this->field_0x80);
      if (((uVar2 == 0) && (iVar1 = *(int *)&this->field_0xcc, *(int *)(iVar1 + 4) < 1)) &&
         ((*(char *)(iVar1 + 0x24) == '\0' ||
          ((*(char *)(iVar1 + 2) != '\x03' ||
           (*(char *)(*(int *)&this->field_0xd0 + 0x348) != '\x01')))))) {
        EmptySound(this);
      }
      else {
        shootanim_1297 = -1;
        UTIL_MakeVectors(**(int **)&this->field_0x80 + 0x74);
        if ((byte)(*(char *)(*(int *)&this->field_0xd0 + 0x348) - 4U) < 2) {
          uVar3 = AkimboFire(this);
          if ((char)uVar3 != '\0') {
            shootanim_1297 = (*(char *)(*(int *)&this->field_0xcc + 0x24) != '\0') + 8;
          }
        }
        else {
          if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\x01') {
            ShotgunFire(this);
          }
          else {
            StandardFire(this);
          }
          shootanim_1297 = 0;
        }
        if (-1 < shootanim_1297) {
          CTSAnimation::Animate
                    ((CTSAnimation *)(*(int *)&this->field_0x80 + 0x28c),
                     *(CBasePlayer **)&this->field_0x80,shootanim_1297);
        }
      }
    }
  }
  return;
}

/* 00081dd0  CTSGun::ColdCock  (821 bytes)
 * undefined ColdCock(void)
 */
/* CTSGun::ColdCock(void) */

void __thiscall CTSGun::ColdCock(CTSGun *this)

{
  undefined4 *puVar1;
  CBasePlayer *pCVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  vec_t *pvVar6;
  float *pfVar7;
  vec_t *pvVar8;
  longdouble lVar9;
  float fVar10;
  char local_71;
  undefined4 local_70;
  vec_t local_6c;
  vec_t local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c [11];
  
  if (__tmp_0_1302 == 0) {
    __tmp_0_1302 = 1;
  }
  if (__tmp_1_1304 == 0) {
    __tmp_1_1304 = 1;
  }
  if (__tmp_2_1306 == 0) {
    __tmp_2_1306 = 1;
  }
  if (*(int *)&this->field_0xcc != 0) {
    puVar1 = get_weapon_info(*(uint *)&this->field_0xc8);
    if (puVar1[4] != 0) {
      local_70 = (vec_t)CONCAT13((*(uint *)(**(int **)&this->field_0x80 + 0x250) & 0x70c30) != 0,
                                 (undefined3)local_70);
      UTIL_MakeVectors(**(int **)&this->field_0x80 + 0x74);
      if (*(int *)&this->field_0xd0 != 0) {
        if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\x02') {
          GrenadeIdle(this,1);
        }
        StopReload(this);
      }
      rate_1307 = 0.725;
      if (local_70._3_1_ != '\0') {
        rate_1307 = 1.0875001;
      }
      Unzoom(this);
      lVar9 = UTIL_WeaponTimeBase();
      lVar9 = lVar9 + (longdouble)rate_1307;
      *(float *)&this->field_0xa4 = (float)lVar9;
      *(float *)&this->field_0xa0 = (float)lVar9;
      *(float *)&this->field_0x9c = (float)lVar9;
      *(float *)(*(int *)&this->field_0x80 + 300) = (float)lVar9;
      lVar9 = UTIL_WeaponTimeBase();
      *(float *)&this->field_0xa8 = (float)((longdouble)2.0 + lVar9);
      (**(code **)(*(int *)(*(int *)&this->field_0x80 + 0x60) + 0x168))
                (local_3c,*(int *)&this->field_0x80);
      pfVar5 = local_3c;
      pfVar7 = &vecSrc_1301;
      for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar7 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar7 = pfVar7 + 1;
      }
      pvVar6 = gpGlobals->v_forward;
      pvVar8 = (vec_t *)&vecAiming_1303;
      for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pvVar8 = *pvVar6;
        pvVar6 = pvVar6 + 1;
        pvVar8 = pvVar8 + 1;
      }
      fVar10 = (float)*(int *)(*(int *)&this->field_0xd0 + 0x10);
      if (local_71 != '\0') {
        fVar10 = fVar10 * 0.6666667;
      }
      local_40 = vecSrc_1301;
      local_3c[0] = DAT_0017da58;
      local_3c[1] = DAT_0017da5c;
      local_60 = gpGlobals->v_forward[0] * 35.0;
      local_5c = gpGlobals->v_forward[1] * 35.0;
      local_58 = gpGlobals->v_forward[2] * 35.0;
      local_50 = vecSrc_1301 + local_60;
      local_4c = DAT_0017da58 + local_5c;
      local_48 = DAT_0017da5c + local_58;
      local_70 = gpGlobals->v_forward[0];
      local_6c = gpGlobals->v_forward[1];
      local_68 = gpGlobals->v_forward[2];
      pCVar2 = CBasePlayer::ColdCockAttack
                         (*(CBasePlayer **)&this->field_0x80,&local_40,&local_50,(float *)&local_70,
                          3,fVar10,(CBasePlayer *)((local_71 == '\0') - 1 | 0x27),'\0','\0','\0',
                          '\0');
      if (pCVar2 != (CBasePlayer *)0x0) {
        iVar4 = *(int *)(**(int **)&this->field_0x80 + 0x208);
        fVar10 = 0.5;
        iVar3 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
        EMIT_SOUND_DYN(iVar4,4,"player/kevlarhit.wav",0x3f800000,0x3f4ccccd,0,iVar3 + 0x3c,fVar10);
      }
      if ((*(int *)&this->field_0xcc != 0) && (**(char **)&this->field_0xcc != '\0')) {
        (*g_engfuncs.pfnPlaybackEvent)
                  (1,*(edict_t **)(**(int **)&this->field_0x80 + 0x208),
                   *(ushort *)&this->field_0x966,0.0,(float *)&g_vecZero,(float *)&g_vecZero,
                   vecDir_1305,DAT_0017da70,*(int *)&this->field_0xc8,
                   *(int *)(*(int *)&this->field_0xcc + 0x10),0,0);
      }
    }
  }
  return;
}

/* 00082108  CTSGun::ShotgunFire  (918 bytes)
 * undefined ShotgunFire(void)
 */
/* CTSGun::ShotgunFire(void) */

void __thiscall CTSGun::ShotgunFire(CTSGun *this)

{
  int *piVar1;
  char cVar2;
  ushort eventindex;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  vec_t *pvVar6;
  float *pfVar7;
  vec_t *pvVar8;
  longdouble lVar9;
  float fparam1;
  float fVar10;
  int iparam1;
  int iparam2;
  int bparam2;
  float *local_84;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_3c [44];
  
  if (__tmp_3_1312 == 0) {
    __tmp_3_1312 = 1;
  }
  if (__tmp_4_1314 == 0) {
    __tmp_4_1314 = 1;
  }
  if (__tmp_5_1316 == 0) {
    __tmp_5_1316 = 1;
  }
  if (*(int *)(*(int *)&this->field_0xcc + 8) == 0) {
    dopump_1317 = '\0';
    if ((*(char *)(*(int *)&this->field_0xcc + 2) == '\x03') &&
       (*(char *)(*(int *)&this->field_0xcc + 0x24) != '\0')) {
      dopump_1317 = '\x01';
    }
    if (*(char *)(*(int *)&this->field_0xcc + 2) == '\x01') {
      rate_1318 = 0.15;
    }
    else {
      rate_1318 = *(float *)(*(int *)&this->field_0xd0 + 0x18);
    }
    lVar9 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0x9c = (float)(lVar9 + (longdouble)rate_1318);
    lVar9 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0xa8 = (float)((longdouble)2.0 + lVar9);
    uVar3 = InfiniteClips(*(int *)&this->field_0x80);
    if (((uVar3 != 0) || (0 < *(int *)(*(int *)&this->field_0xcc + 4))) || (dopump_1317 != '\0')) {
      if (dopump_1317 == '\0') {
        uVar3 = InfiniteClips(*(int *)&this->field_0x80);
        if (uVar3 == 0) {
          piVar1 = (int *)(*(int *)&this->field_0xcc + 4);
          *piVar1 = *piVar1 + -1;
        }
      }
      (**(code **)(*(int *)(*(int *)&this->field_0x80 + 0x60) + 0x168))
                (local_3c,*(int *)&this->field_0x80);
      pfVar5 = local_84;
      pfVar7 = &vecSrc_1311;
      for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar7 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar7 = pfVar7 + 1;
      }
      pvVar6 = gpGlobals->v_forward;
      pvVar8 = &vecAiming_1313;
      for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pvVar8 = *pvVar6;
        pvVar6 = pvVar6 + 1;
        pvVar8 = pvVar8 + 1;
      }
      if (dopump_1317 == '\0') {
        local_50 = vecSrc_1311;
        local_4c = DAT_0017da8c;
        local_48 = DAT_0017da90;
        local_60 = vecAiming_1313;
        local_5c = DAT_0017da98;
        local_58 = DAT_0017da9c;
        local_70 = *(float *)(*(int *)&this->field_0xd0 + 0x28);
        local_6c = local_70;
        local_68 = local_70;
        CBasePlayer::ShootBulletsPlayer
                  (local_84,*(int **)&this->field_0x80,
                   *(byte_conflict *)(*(int *)&this->field_0xd0 + 0x24),&local_50,&local_60,
                   &local_70,*(float *)(*(int *)&this->field_0xd0 + 0x1c),
                   *(int *)(*(int *)&this->field_0xd0 + 0x20),
                   (uint)*(byte *)(*(int *)&this->field_0xd0 + 8),
                   *(undefined4 *)(*(int *)&this->field_0x80 + 0x7ec));
        pfVar5 = (float *)&vecDir_1315;
        for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar5 = *local_84;
          local_84 = local_84 + 1;
          pfVar5 = pfVar5 + 1;
        }
        if (*(char *)(*(int *)&this->field_0xd0 + 0x38) != '\0') {
          fVar10 = 1.0;
          if (((*(byte *)(*(int *)&this->field_0xd0 + 0xc) & 3) != 0) &&
             (*(char *)(*(int *)&this->field_0xcc + 2) != '\x01')) {
            fVar10 = 0.35;
          }
          VKickback((int)this,fVar10 * *(float *)(*(int *)&this->field_0xd0 + 0x30),
                    (uint)*(byte *)(*(int *)&this->field_0xd0 + 0x348),'\0');
        }
      }
      if (dopump_1317 == '\0') {
        iVar4 = **(int **)&this->field_0x80;
        bparam2 = (*(int **)&this->field_0x80)[0x1fb];
        cVar2 = *(char *)(*(int *)&this->field_0xcc + 2);
        iparam2 = *(int *)(*(int *)&this->field_0xcc + 0x10);
        iparam1 = *(int *)&this->field_0xc8;
        fVar10 = *(float *)(*(int *)&this->field_0xd0 + 0x28);
        fparam1 = *(float *)(*(int *)&this->field_0xd0 + 0x28);
        eventindex = *(ushort *)&this->field_0x964;
      }
      else {
        iVar4 = **(int **)&this->field_0x80;
        bparam2 = 0;
        cVar2 = *(char *)(*(int *)&this->field_0xcc + 2);
        iparam2 = *(int *)(*(int *)&this->field_0xcc + 0x10);
        iparam1 = *(int *)&this->field_0xc8;
        fVar10 = 0.0;
        fparam1 = 0.0;
        eventindex = *(ushort *)&this->field_0x96a;
      }
      (*g_engfuncs.pfnPlaybackEvent)
                (1,*(edict_t **)(iVar4 + 0x208),eventindex,0.0,(float *)&g_vecZero,
                 (float *)&g_vecZero,fparam1,fVar10,iparam1,iparam2,SUB14(cVar2 == '\x03',0),bparam2
                );
      if (*(char *)(*(int *)&this->field_0xcc + 0x24) == '\0') {
        *(undefined1 *)(*(int *)&this->field_0xcc + 0x24) = 1;
      }
      else {
        *(undefined1 *)(*(int *)&this->field_0xcc + 0x24) = 0;
      }
    }
  }
  else {
    *(undefined4 *)(*(int *)&this->field_0xcc + 8) = 2;
  }
  return;
}

/* 000824a4  CTSGun::StandardFire  (1303 bytes)
 * undefined StandardFire(void)
 */
/* CTSGun::StandardFire(void) */

void __thiscall CTSGun::StandardFire(CTSGun *this)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  vec_t *pvVar5;
  float *pfVar6;
  float fVar7;
  vec_t *pvVar8;
  float *pfVar9;
  longdouble lVar10;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_34;
  float local_30 [8];
  
  if (__tmp_6_1323 == 0) {
    __tmp_6_1323 = 1;
  }
  if (__tmp_7_1325 == 0) {
    __tmp_7_1325 = 1;
  }
  if (__tmp_8_1327 == 0) {
    vecDir_1326 = g_vecZero;
    DAT_0017dadc = DAT_00190ef0;
    DAT_0017dae0 = DAT_00190ef4;
    __tmp_8_1327 = 1;
  }
  (**(code **)(*(int *)(*(int *)&this->field_0x80 + 0x60) + 0x168))
            (local_30 + 1,*(int *)&this->field_0x80);
  pfVar6 = local_30 + 1;
  pfVar9 = &vecSrc_1322;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar9 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar9 = pfVar9 + 1;
  }
  pvVar5 = gpGlobals->v_forward;
  pvVar8 = &vecAiming_1324;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pvVar8 = *pvVar5;
    pvVar5 = pvVar5 + 1;
    pvVar8 = pvVar8 + 1;
  }
  spread_1329 = *(float *)(*(int *)&this->field_0xd0 + 0x28);
  if (*(int *)&this->field_0xc8 == 0x12) {
    iVar3 = **(int **)&this->field_0x80;
    local_34 = SQRT(*(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28) +
                    *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                    *(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20));
    if (35.0 < local_34) {
      *(undefined4 *)(*(int *)&this->field_0x80 + 0x778) = 0x3e99999a;
    }
  }
  if (*(int *)&this->field_0xc8 == 0x20) {
    iVar3 = **(int **)&this->field_0x80;
    local_34 = SQRT(*(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28) +
                    *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                    *(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20));
    if (local_34 <= 175.0) goto LAB_00082638;
    iVar3 = 0;
    if (((*(byte *)(*(int *)&this->field_0xcc + 0x10) & 1) != 0) &&
       (((*(byte *)(*(int *)&this->field_0xd0 + 0xe4) ^ 1) & 1) != 0)) {
      iVar3 = 1;
    }
    fVar7 = *(float *)(*(int *)&this->field_0xd0 + 0x34) * 5.0;
  }
  else {
LAB_00082638:
    if (*(char *)(*(int *)&this->field_0xd0 + 0x2c) == '\0') goto LAB_00082684;
    iVar3 = 0;
    if (((*(byte *)(*(int *)&this->field_0xcc + 0x10) & 1) != 0) &&
       (((*(byte *)(*(int *)&this->field_0xd0 + 0xe4) ^ 1) & 1) != 0)) {
      iVar3 = 1;
    }
    fVar7 = *(float *)(*(int *)&this->field_0xd0 + 0x34);
  }
  ScaleSpread(this,&spread_1329,fVar7,iVar3);
LAB_00082684:
  fVar7 = *(float *)(*(int *)&this->field_0xd0 + 0x1c);
  if (((*(byte *)(*(int *)&this->field_0xcc + 0x10) & 1) != 0) &&
     (((*(byte *)(*(int *)&this->field_0xd0 + 0xe4) ^ 1) & 1) != 0)) {
    fVar7 = fVar7 * 0.775;
  }
  local_50 = vecSrc_1322;
  local_4c = DAT_0017dac4;
  local_48 = DAT_0017dac8;
  local_60 = vecAiming_1324;
  local_5c = DAT_0017dad0;
  local_58 = DAT_0017dad4;
  local_70 = spread_1329;
  local_6c = local_70;
  local_68 = local_70;
  CBasePlayer::ShootBulletsPlayer
            (local_30,*(int **)&this->field_0x80,
             *(byte_conflict *)(*(int *)&this->field_0xd0 + 0x24),&local_50,&local_60,&local_70,
             fVar7,*(int *)(*(int *)&this->field_0xd0 + 0x20),
             (uint)*(byte *)(*(int *)&this->field_0xd0 + 8),
             *(undefined4 *)(*(int *)&this->field_0x80 + 0x7ec));
  pfVar6 = local_30;
  pfVar9 = (float *)&vecDir_1326;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar9 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar9 = pfVar9 + 1;
  }
  if ((((*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\a') ||
       (*(int *)&this->field_0xc8 == 0x1f)) || (*(int *)&this->field_0xc8 == 0x21)) ||
     (*(char *)(*(int *)&this->field_0xd0 + 0x38) != '\0')) {
    cVar4 = '\0';
    if (((*(byte *)(*(int *)&this->field_0xcc + 0x10) & 1) != 0) &&
       (((*(byte *)(*(int *)&this->field_0xd0 + 0xe4) ^ 1) & 1) != 0)) {
      cVar4 = '\x01';
    }
    VKickback((int)this,*(float *)(*(int *)&this->field_0xd0 + 0x30),
              (uint)*(byte *)(*(int *)&this->field_0xd0 + 0x348),cVar4);
  }
  uVar2 = InfiniteClips(*(int *)&this->field_0x80);
  if (uVar2 == 0) {
    piVar1 = (int *)(*(int *)&this->field_0xcc + 4);
    *piVar1 = *piVar1 + -1;
    if (*(int *)(*(int *)&this->field_0xd0 + 200) != -1) {
      *(int *)(&this->field_0x118 + *(int *)(*(int *)&this->field_0xd0 + 200) * 0x38) =
           *(int *)(&this->field_0x118 + *(int *)(*(int *)&this->field_0xd0 + 200) * 0x38) + -1;
      *(undefined4 *)(&this->field_0x130 + *(int *)(*(int *)&this->field_0xd0 + 200) * 0x38) =
           *(undefined4 *)(*(int *)&this->field_0xcc + 4);
      iVar3 = *(int *)(*(int *)&this->field_0xd0 + 200) * 0x38;
      if (*(int *)(&this->field_0x118 + iVar3) < 0) {
        *(undefined4 *)(&this->field_0x118 + iVar3) = 0;
      }
    }
  }
  bparam1_1328 = *(int *)(*(int *)&this->field_0xcc + 4) == 0;
  (*g_engfuncs.pfnPlaybackEvent)
            (1,*(edict_t **)(**(int **)&this->field_0x80 + 0x208),*(ushort *)&this->field_0x964,0.0,
             (float *)&g_vecZero,(float *)&g_vecZero,spread_1329,spread_1329,
             *(int *)&this->field_0xc8,*(int *)(*(int *)&this->field_0xcc + 0x10),(int)bparam1_1328,
             (*(int **)&this->field_0x80)[0x1fb]);
  if (*(char *)(*(int *)&this->field_0xcc + 2) == '\x02') {
    if (*(int *)(*(int *)&this->field_0xcc + 8) == 1) {
      rate_1330 = 0.2;
    }
    else {
      rate_1330 = 0.03;
    }
  }
  else if ((*(char *)(*(int *)&this->field_0xcc + 2) == '\x01') &&
          ((*(byte *)(*(int *)&this->field_0xd0 + 0xc) & 1) != 0)) {
    rate_1330 = 0.1;
  }
  else {
    rate_1330 = *(float *)(*(int *)&this->field_0xd0 + 0x18);
  }
  lVar10 = UTIL_WeaponTimeBase();
  *(float *)&this->field_0x9c = (float)(lVar10 + (longdouble)rate_1330);
  fVar7 = 2.0;
  if (((*(int *)&this->field_0xc8 == 0x24) && (*(int *)(*(int *)&this->field_0xcc + 4) < 1)) &&
     (uVar2 = InfiniteClips(*(int *)&this->field_0x80), uVar2 == 0)) {
    fVar7 = 0.5;
  }
  lVar10 = UTIL_WeaponTimeBase();
  *(float *)&this->field_0xa8 = (float)((longdouble)fVar7 + lVar10);
  return;
}

/* 000829c0  CTSGun::AkimboFire  (2334 bytes)
 * undefined4 AkimboFire(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CTSGun::AkimboFire(void) */

undefined4 __thiscall CTSGun::AkimboFire(CTSGun *this)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined4 extraout_EAX;
  int iVar6;
  char cVar7;
  ushort uVar8;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float **ppfVar12;
  vec_t *pvVar13;
  undefined4 *puVar14;
  float *pfVar15;
  undefined4 *puVar16;
  longdouble lVar17;
  longdouble lVar18;
  float *local_d8;
  int *local_d4;
  float *local_bc;
  float *local_a0;
  float *local_88;
  float *local_80;
  float *local_74;
  undefined4 local_70;
  float local_6c [4];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40 [8];
  float local_20;
  
  if (__tmp_9_1335 == 0) {
    __tmp_9_1335 = 1;
  }
  if (__tmp_10_1337 == 0) {
    __tmp_10_1337 = 1;
  }
  if (__tmp_11_1339 == 0) {
    __tmp_11_1339 = 1;
  }
  bVar3 = 1 < (byte)(*(char *)(*(int *)&this->field_0xcc + 2) - 4U);
  bVar4 = false;
  if (!bVar3) {
    if (*(char *)(*(int *)&this->field_0xcc + 2) == '\x05') {
      uVar5 = *(uint *)(**(int **)&this->field_0x80 + 0x180);
    }
    else {
      uVar5 = *(uint *)(*(int *)&this->field_0x80 + 0x814);
    }
    bVar4 = false;
    if (((uVar5 & 1) != 0) && ((uVar5 & 0x800) != 0)) {
      bVar4 = true;
    }
  }
  cVar7 = '\0';
  if ((bVar4) || (*(char *)(*(int *)&this->field_0xcc + 2) == '\0')) {
    cVar7 = '\x01';
  }
  local_70 = (float)CONCAT13(cVar7,(uint3)local_70);
  if ((bVar3) || (cVar7 != '\0')) {
    if (*(char *)(*(int *)&this->field_0xcc + 0x24) == '\0') {
      *(undefined1 *)(*(int *)&this->field_0xcc + 0x24) = 1;
    }
    else {
      *(undefined1 *)(*(int *)&this->field_0xcc + 0x24) = 0;
    }
    if (*(int *)(*(int *)&this->field_0xcc + 0x20) < 1) {
      local_70 = (float)(uint)(uint3)local_70;
      *(undefined1 *)(*(int *)&this->field_0xcc + 0x24) = 1;
    }
    if (*(int *)(*(int *)&this->field_0xcc + 0x1c) < 1) {
      local_70 = (float)((uint)local_70 & 0xffffff);
      *(undefined1 *)(*(int *)&this->field_0xcc + 0x24) = 0;
    }
  }
  else {
    if ((*(byte *)(**(int **)&this->field_0x80 + 0x180) & 1) != 0) {
      if (*(int *)(*(int *)&this->field_0xcc + 0x20) < 1) goto LAB_00082ad8;
      *(undefined1 *)(*(int *)&this->field_0xcc + 0x24) = 0;
    }
    if ((*(byte *)(**(int **)&this->field_0x80 + 0x181) & 8) != 0) {
      if (*(int *)(*(int *)&this->field_0xcc + 0x1c) < 1) {
LAB_00082ad8:
        uVar5 = EmptySound(this);
        return uVar5 & 0xffffff00;
      }
      *(undefined1 *)(*(int *)&this->field_0xcc + 0x24) = 1;
    }
  }
  uVar5 = InfiniteClips(*(int *)&this->field_0x80);
  if (uVar5 != 0) goto LAB_00082bf8;
  if (local_70._3_1_ == '\0') {
    piVar1 = (int *)(*(int *)&this->field_0xcc + 4);
    *piVar1 = *piVar1 + -1;
    if (*(char *)(*(int *)&this->field_0xcc + 0x24) == '\0') goto LAB_00082b88;
    piVar1 = (int *)(*(int *)&this->field_0xcc + 0x1c);
    *piVar1 = *piVar1 + -1;
  }
  else {
    piVar1 = (int *)(*(int *)&this->field_0xcc + 4);
    *piVar1 = *piVar1 + -2;
    piVar1 = (int *)(*(int *)&this->field_0xcc + 0x1c);
    *piVar1 = *piVar1 + -1;
LAB_00082b88:
    piVar1 = (int *)(*(int *)&this->field_0xcc + 0x20);
    *piVar1 = *piVar1 + -1;
  }
  if (*(int *)(*(int *)&this->field_0xcc + 4) < 0) {
    *(undefined4 *)(*(int *)&this->field_0xcc + 4) = 0;
  }
  if (*(int *)(*(int *)&this->field_0xcc + 0x1c) < 0) {
    *(undefined4 *)(*(int *)&this->field_0xcc + 0x1c) = 0;
  }
  if (*(int *)(*(int *)&this->field_0xcc + 0x20) < 0) {
    *(undefined4 *)(*(int *)&this->field_0xcc + 0x20) = 0;
  }
  if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\x04') {
    *(undefined4 *)(&this->field_0x118 + *(int *)(*(int *)&this->field_0xd0 + 0xcc) * 0x38) =
         *(undefined4 *)(*(int *)&this->field_0xcc + 0x1c);
  }
LAB_00082bf8:
  spread_1341 = *(float *)(*(int *)&this->field_0xd0 + 0x28);
  if (*(char *)(*(int *)&this->field_0xd0 + 0x2c) != '\0') {
    iVar6 = 0;
    if (((*(byte *)(*(int *)&this->field_0xcc + 0x10) & 1) != 0) &&
       (((*(byte *)(*(int *)&this->field_0xd0 + 0xe4) ^ 1) & 1) != 0)) {
      iVar6 = 1;
    }
    local_20 = *(float *)(*(int *)&this->field_0xd0 + 0x34);
    if (local_70._3_1_ != '\0') {
      local_20 = local_20 + local_20;
    }
    ScaleSpread(this,&spread_1341,local_20,iVar6);
  }
  dmg_1343 = *(float *)(*(int *)&this->field_0xd0 + 0x1c);
  if (((*(byte *)(*(int *)&this->field_0xcc + 0x10) & 1) != 0) &&
     (((*(byte *)(*(int *)&this->field_0xd0 + 0xe4) ^ 1) & 1) != 0)) {
    dmg_1343 = dmg_1343 * 0.775;
  }
  if (local_70._3_1_ == '\0') {
    pvVar13 = gpGlobals->v_forward;
    pfVar11 = &vecAiming_1336;
    for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar11 = *pvVar13;
      pvVar13 = pvVar13 + 1;
      pfVar11 = pfVar11 + 1;
    }
    (**(code **)(*(int *)(*(int *)&this->field_0x80 + 0x60) + 0x168))();
    pfVar11 = local_6c;
    for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      *local_bc = *pfVar11;
      pfVar11 = pfVar11 + 1;
      local_bc = local_bc + 1;
    }
    local_6c[3] = vecSrc_1334;
    local_5c = DAT_0017db00;
    local_58 = DAT_0017db04;
    local_50 = vecAiming_1336;
    local_4c = DAT_0017db0c;
    local_48 = DAT_0017db10;
    local_40[0] = spread_1341;
    local_40[1] = local_40[0];
    local_40[2] = local_40[0];
    CBasePlayer::ShootBulletsPlayer
              (local_d8,*(int **)&this->field_0x80,
               *(byte_conflict *)(*(int *)&this->field_0xd0 + 0x24),local_6c + 3,&local_50,local_40,
               dmg_1343,*(int *)(*(int *)&this->field_0xd0 + 0x20),
               (uint)*(byte *)(*(int *)&this->field_0xd0 + 8),
               *(undefined4 *)(*(int *)&this->field_0x80 + 0x7ec));
    puVar10 = (undefined4 *)&stack0xfffffef4;
    uVar9 = extraout_EDX_00;
  }
  else {
    local_74 = &vecAiming_1336;
    pvVar13 = gpGlobals->v_forward;
    pfVar11 = local_74;
    for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar11 = *pvVar13;
      pvVar13 = pvVar13 + 1;
      pfVar11 = pfVar11 + 1;
    }
    (**(code **)(*(int *)(*(int *)&this->field_0x80 + 0x60) + 0x168))();
    iVar6 = *local_d4;
    if (*(char *)(*(int *)&this->field_0xcc + 0x24) == '\0') {
      local_58 = 5.0;
    }
    else {
      local_58 = -5.0;
    }
    local_6c[3] = local_58 * *(float *)(iVar6 + 0x40);
    local_5c = local_58 * *(float *)(iVar6 + 0x44);
    local_58 = local_58 * *(float *)(iVar6 + 0x48);
    local_40[0] = local_4c + local_6c[3];
    local_40[1] = local_48 + local_5c;
    local_40[2] = local_44 + local_58;
    pfVar11 = local_40;
    for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      *local_80 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      local_80 = local_80 + 1;
    }
    local_50 = vecSrc_1334;
    local_4c = DAT_0017db00;
    local_48 = DAT_0017db04;
    local_40[0] = vecAiming_1336;
    local_40[1] = DAT_0017db0c;
    local_40[2] = DAT_0017db10;
    local_70 = spread_1341;
    local_6c[0] = local_70;
    local_6c[1] = local_70;
    CBasePlayer::ShootBulletsPlayer
              (local_6c + 3,*(int **)&this->field_0x80,
               *(byte_conflict *)(*(int *)&this->field_0xd0 + 0x24),&local_50,local_40,
               (float *)&local_70,dmg_1343,*(int *)(*(int *)&this->field_0xd0 + 0x20),
               (uint)*(byte *)(*(int *)&this->field_0xd0 + 8),
               *(undefined4 *)(*(int *)&this->field_0x80 + 0x7ec));
    pfVar11 = local_6c + 3;
    pfVar15 = (float *)&vecDir_1338;
    for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar15 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar15 = pfVar15 + 1;
    }
    (**(code **)(*(int *)(*(int *)&this->field_0x80 + 0x60) + 0x168))();
    if (*(char *)(*(int *)&this->field_0xcc + 0x24) == '\0') {
      fVar2 = -5.0;
    }
    else {
      fVar2 = 5.0;
    }
    local_74 = (float *)(*local_88 + fVar2 * gpGlobals->v_right[0]);
    local_70 = local_88[1] + fVar2 * gpGlobals->v_right[1];
    local_6c[0] = local_88[2] + fVar2 * gpGlobals->v_right[2];
    ppfVar12 = &local_74;
    for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      *local_a0 = (float)*ppfVar12;
      ppfVar12 = ppfVar12 + 1;
      local_a0 = local_a0 + 1;
    }
    local_6c[2] = vecSrc_1334;
    local_6c[3] = DAT_0017db00;
    local_5c = DAT_0017db04;
    local_54 = vecAiming_1336;
    local_50 = DAT_0017db0c;
    local_4c = DAT_0017db10;
    local_44 = spread_1341;
    local_40[0] = local_44;
    local_40[1] = local_44;
    CBasePlayer::ShootBulletsPlayer
              ((float *)&local_74,*(int **)&this->field_0x80,
               *(byte_conflict *)(*(int *)&this->field_0xd0 + 0x24),local_6c + 2,&local_54,&local_44
               ,dmg_1343,*(int *)(*(int *)&this->field_0xd0 + 0x20),
               (uint)*(byte *)(*(int *)&this->field_0xd0 + 8),
               *(int *)(*(int *)&this->field_0x80 + 0x7ec) + 0x21);
    puVar10 = (undefined4 *)&stack0xfffffef0;
    uVar9 = extraout_EDX;
  }
  puVar14 = (undefined4 *)puVar10[0xd];
  puVar16 = &vecDir_1338;
  for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar16 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar16 = puVar16 + 1;
  }
  if (*(char *)(*(int *)&this->field_0xd0 + 0x38) != '\0') {
    *(undefined2 *)(puVar10 + 9) = 0;
    puVar10[8] = _DAT_0017db18;
    puVar10[7] = vecDir_1338;
    uVar8 = (ushort)uVar9 & 0xff00;
    if (((*(byte *)(*(int *)&this->field_0xcc + 0x10) & 1) != 0) &&
       (((*(byte *)(*(int *)&this->field_0xd0 + 0xe4) ^ 1) & 1) != 0)) {
      uVar8 = (ushort)CONCAT31((int3)((uint)uVar9 >> 8),1);
    }
    *(ushort *)(puVar10 + 6) = uVar8;
    puVar10[5] = (uint)*(byte *)(*(int *)&this->field_0xd0 + 0x348);
    fVar2 = *(float *)(*(int *)&this->field_0xd0 + 0x30);
    if (*(char *)((int)puVar10 + 0x9b) != '\0') {
      fVar2 = fVar2 + fVar2;
    }
    puVar10[0x3a] = fVar2;
    puVar10[4] = puVar10[0x3a];
    puVar10[3] = this;
    puVar10[2] = 0x831d2;
    VKickback(puVar10[3],(float)puVar10[4],puVar10[5],*(char *)(puVar10 + 6));
  }
  bparam1_1340 = *(char *)(*(int *)&this->field_0xcc + 0x24) != '\0';
  uVar9 = *(undefined4 *)(**(int **)&this->field_0x80 + 0x208);
  puVar10[10] = (*(int **)&this->field_0x80)[0x1fb];
  puVar10[9] = (uint)(byte)bparam1_1340;
  puVar10[8] = *(undefined4 *)(*(int *)&this->field_0xcc + 0x10);
  puVar10[7] = *(undefined4 *)&this->field_0xc8;
  puVar10[6] = spread_1341;
  puVar10[5] = spread_1341;
  puVar10[4] = &g_vecZero;
  puVar10[3] = &g_vecZero;
  puVar10[2] = 0;
  if (*(char *)((int)puVar10 + 0x9b) == '\0') {
    uVar8 = *(ushort *)&this->field_0x964;
  }
  else {
    uVar8 = *(ushort *)&this->field_0x96e;
  }
  puVar10[1] = (uint)uVar8;
  *puVar10 = uVar9;
  puVar10[-1] = 1;
  puVar10[-2] = 0x83259;
  (*g_engfuncs.pfnPlaybackEvent)
            (puVar10[-1],(edict_t *)*puVar10,*(ushort *)(puVar10 + 1),(float)puVar10[2],
             (float *)puVar10[3],(float *)puVar10[4],(float)puVar10[5],(float)puVar10[6],puVar10[7],
             puVar10[8],puVar10[9],puVar10[10]);
  if (*(char *)(*(int *)&this->field_0xcc + 2) == '\x02') {
    if (*(int *)(*(int *)&this->field_0xcc + 8) == 1) {
      rate_1342 = 0.2;
    }
    else {
      rate_1342 = 0.03;
    }
  }
  else if ((*(char *)(*(int *)&this->field_0xcc + 2) == '\x01') ||
          (*(char *)(*(int *)&this->field_0xcc + 2) == '\x04')) {
    rate_1342 = 0.1;
  }
  else {
    rate_1342 = *(float *)(*(int *)&this->field_0xd0 + 0x18);
  }
  puVar10[10] = 0x832bc;
  lVar17 = UTIL_WeaponTimeBase();
  lVar18 = (longdouble)rate_1342;
  *(float *)&this->field_0xa0 = (float)(lVar17 + lVar18);
  *(float *)&this->field_0x9c = (float)(lVar17 + lVar18);
  puVar10[10] = 0x832d3;
  lVar18 = UTIL_WeaponTimeBase();
  *(float *)&this->field_0xa8 = (float)((longdouble)2.0 + lVar18);
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

/* 000832f0  CTSGun::GrenadeFire  (256 bytes)
 * undefined GrenadeFire(void)
 */
/* CTSGun::GrenadeFire(void) */

void __thiscall CTSGun::GrenadeFire(CTSGun *this)

{
  int iVar1;
  longdouble lVar2;
  
  if (((*(int *)&this->field_0xcc != 0) && (*(int *)(*(int *)&this->field_0xcc + 8) == 0)) &&
     (0 < *(int *)(*(int *)&this->field_0xcc + 4))) {
    if (*(int *)(*(int *)&this->field_0xcc + 0x28) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)*(short *)(*(int *)(*(int *)&this->field_0xcc + 0x28) + 0x26);
    }
    (*this->vtable[0x5d])(this,iVar1,1,0);
    (*g_engfuncs.pfnPlaybackEvent)
              (1,*(edict_t **)(**(int **)&this->field_0x80 + 0x208),*(ushort *)&this->field_0x978,
               0.0,(float *)&g_vecZero,(float *)&g_vecZero,0.0,0.0,0x13,0,0,0);
    *(undefined4 *)(*(int *)&this->field_0xcc + 8) = 1;
    lVar2 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0xa0 = (float)((longdouble)0.7 + lVar2);
    *(float *)&this->field_0x9c = (float)((longdouble)0.7 + lVar2);
    lVar2 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0xa8 = (float)((longdouble)0.7 + lVar2);
    *(float *)&this->field_0xa0c = gpGlobals->time + 5.0;
  }
  return;
}

/* 000833f0  CTSGun::KatanaFire  (1889 bytes)
 * undefined KatanaFire(void)
 */
/* CTSGun::KatanaFire(void) */

void __thiscall CTSGun::KatanaFire(CTSGun *this)

{
  uint *puVar1;
  uint3 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  longdouble lVar11;
  float fVar12;
  char local_d5;
  undefined4 local_d4;
  int local_d0;
  float local_cc;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c [7];
  float local_70;
  edict_t *local_50;
  float local_40 [8];
  float local_20;
  
  if (*(int *)&this->field_0xcc != 0) {
    UTIL_MakeVectors(**(int **)&this->field_0x80 + 0x74);
    iVar5 = **(int **)&this->field_0x80;
    bVar9 = (*(uint *)(iVar5 + 0x250) & 0x70c30) != 0;
    local_d4._0_3_ = CONCAT12(bVar9,(undefined2)local_d4);
    uVar2 = (uint3)local_d4;
    local_d4 = (uint)(uint3)local_d4;
    local_20 = SQRT(*(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28) +
                    *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                    *(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20));
    if (local_20 <= 100.0) {
      bVar10 = (*(byte *)(**(int **)&this->field_0x80 + 0x180) & 0x10) != 0;
    }
    else {
      iVar5 = **(int **)&this->field_0x80;
      local_20 = SQRT(*(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28) +
                      *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                      *(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20));
      if (local_20 == 0.0) {
        local_40[3] = 1.0;
        local_40[1] = 0.0;
        local_40[2] = 0.0;
      }
      else {
        local_40[3] = 1.0 / local_20;
        local_40[1] = local_40[3] * *(float *)(iVar5 + 0x20);
        local_40[2] = local_40[3] * *(float *)(iVar5 + 0x24);
        local_40[3] = local_40[3] * *(float *)(iVar5 + 0x28);
      }
      bVar10 = gpGlobals->v_forward[2] * local_40[3] +
               gpGlobals->v_forward[1] * local_40[2] + gpGlobals->v_forward[0] * local_40[1] <= -0.5
      ;
    }
    local_cc = 7.00649e-44;
    if (bVar9) {
      local_d0 = 0x11;
      local_cc = 4.90454e-44;
      local_c0 = 1.0;
      local_c4 = -NAN;
    }
    else if (bVar10) {
      local_d4 = CONCAT13(1,uVar2);
      local_d0 = 0xf;
      local_cc = 7.70714e-44;
      local_c0 = 1.0;
      local_c4 = 4.90454e-44;
    }
    else if ((*(byte *)(**(int **)&this->field_0x80 + 0x1a5) & 2) == 0) {
      local_d0 = 0x11;
      local_c0 = 1.1;
      local_c4 = 5.04467e-44;
    }
    else if (((*(byte *)(**(int **)&this->field_0x80 + 0x180) & 4) == 0) &&
            ((this->pev->flags & 0x4000) == 0)) {
      local_c0 = 0.7;
      if (1 < *(int *)&this->field_0xa04 - 1U) {
        iVar5 = (*g_engfuncs.pfnRandomLong)(1,2);
        *(int *)&this->field_0xa04 = iVar5;
      }
      if (*(int *)&this->field_0xa04 == 1) {
        local_d0 = 0x11;
        *(undefined4 *)&this->field_0xa04 = 2;
        local_c4 = 4.62428e-44;
      }
      else if (*(int *)&this->field_0xa04 == 2) {
        local_d0 = 0x10;
        *(undefined4 *)&this->field_0xa04 = 1;
        local_c4 = 4.76441e-44;
      }
    }
    else {
      local_c0 = 0.9;
      local_d4 = CONCAT13(1,uVar2);
      local_d0 = 0x11;
      local_c4 = 5.1848e-44;
      puVar1 = (uint *)(**(int **)&this->field_0x80 + 0x250);
      *puVar1 = *puVar1 | 4;
      puVar1 = (uint *)(**(int **)&this->field_0x80 + 0x250);
      *puVar1 = *puVar1 | 1;
      pfVar6 = local_40;
      local_40[1] = 0.0;
      local_40[2] = 0.0;
      local_40[3] = 16.0;
      pfVar7 = (float *)(**(int **)&this->field_0x80 + 0x174);
      for (iVar5 = 3; pfVar6 = pfVar6 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar6;
        pfVar7 = pfVar7 + 1;
      }
      *(undefined4 *)(*(int *)&this->field_0x80 + 0x4f4) = 0x40000000;
    }
    CTSAnimation::Animate
              ((CTSAnimation *)(*(int *)&this->field_0x80 + 0x28c),
               *(CBasePlayer **)&this->field_0x80,(int)local_c4);
    CBasePlayer::GetMeleeMultiplier(*(CBasePlayer **)&this->field_0x80);
    (**(code **)(*(int *)(*(int *)&this->field_0x80 + 0x60) + 0x168))
              (local_8c,*(int *)&this->field_0x80);
    pfVar6 = local_8c;
    pfVar7 = local_40;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
    }
    local_90 = local_40[0];
    local_8c[0] = local_40[1];
    local_8c[1] = local_40[2];
    local_b8 = (float)local_d0;
    local_c0 = local_b8 * gpGlobals->v_forward[0];
    local_bc = local_b8 * gpGlobals->v_forward[1];
    local_b8 = local_b8 * gpGlobals->v_forward[2];
    if (0.0 <= local_cc) {
      local_a8 = 1.0;
    }
    else {
      local_a8 = -1.0;
    }
    local_b0 = local_a8 * local_c0;
    local_ac = local_a8 * local_bc;
    local_a8 = local_a8 * local_b8;
    local_a0 = local_40[0] + local_b0;
    local_9c = local_40[1] + local_ac;
    local_98 = local_40[2] + local_a8;
    CBasePlayer::CheckHull
              (*(CBasePlayer **)&this->field_0x80,&local_90,&local_a0,local_8c + 3,
               (-(uint)(local_cc < 0.0) & 0xfffffffe) + 3);
    piVar8 = (int *)0x0;
    if (local_70 < 1.0) {
      if (local_50 == (edict_t *)0x0) {
        local_50 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      piVar8 = (int *)0x0;
      if (local_50 != (edict_t *)0x0) {
        piVar8 = local_50->pvPrivateData;
      }
      iVar5 = (**(code **)(piVar8[0x18] + 0xb4))(piVar8);
      if ((iVar5 == 0) || (*(char *)(*piVar8 + 0x118) < '\0')) {
        piVar8 = (int *)0x0;
      }
      else {
        fVar12 = local_cc;
        uVar3 = VictimKatanaHold(*(CBasePlayer **)&this->field_0x80,piVar8);
        if ((char)uVar3 == '\0') {
          ClearMultiDamage();
          local_c0 = gpGlobals->v_forward[0];
          local_bc = gpGlobals->v_forward[1];
          local_b8 = gpGlobals->v_forward[2];
          (**(code **)(piVar8[0x18] + 0x54))
                    (piVar8,**(undefined4 **)&this->field_0x80,local_cc,&local_c0,local_8c + 3,
                     0x1080,fVar12);
          ApplyMultiDamage(**(undefined4 **)&this->field_0x80,**(undefined4 **)&this->field_0x80);
          iVar5 = (**(code **)(piVar8[0x18] + 200))(piVar8);
          if (iVar5 != 0) {
            *(undefined4 *)(*(int *)&this->field_0xcc + 8) = 1;
            this->pev->body = 1;
            iVar5 = *(int *)(*piVar8 + 0x208);
            fVar12 = 0.5;
            iVar4 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
            EMIT_SOUND_DYN(iVar5,4,"weapons/katana/hit-body.wav",0x3f800000,0x3f4ccccd,0,
                           iVar4 + 0x5f,fVar12);
          }
        }
      }
    }
    if (piVar8 == (int *)0x0) {
      *(undefined4 *)(*(int *)&this->field_0x80 + 0x79c) = 0x3e800000;
      *(float *)(*(int *)&this->field_0x80 + 0x7a0) = local_cc;
      *(undefined1 *)(*(int *)&this->field_0x80 + 0x7a4) = 2;
    }
    if ((local_d5 != '\0') && (((*(byte *)(**(int **)&this->field_0x80 + 0x250) ^ 1) & 1) != 0)) {
      (*(int **)&this->field_0x80)[0x137] = (int)(local_c4 * 0.9);
      puVar1 = (uint *)(**(int **)&this->field_0x80 + 0x250);
      *puVar1 = *puVar1 | 1;
    }
    (*g_engfuncs.pfnPlaybackEvent)
              (1,*(edict_t **)(**(int **)&this->field_0x80 + 0x208),*(ushort *)&this->field_0x974,
               0.0,(float *)&g_vecZero,(float *)&g_vecZero,0.0,0.0,local_d4,
               *(int *)(*(int *)&this->field_0xcc + 8),0,0);
    lVar11 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0xa0 = (float)(lVar11 + (longdouble)local_c4);
    *(float *)&this->field_0x9c = (float)(lVar11 + (longdouble)local_c4);
    lVar11 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0xa8 = (float)((longdouble)3.0 + lVar11);
    *(float *)(*(int *)&this->field_0x80 + 0x4f8) = local_c4;
  }
  return;
}

/* 00083b68  CTSGun::KatanaThrow  (1238 bytes)
 * undefined KatanaThrow(void)
 */
/* CTSGun::KatanaThrow(void) */

void __thiscall CTSGun::KatanaThrow(CTSGun *this)

{
  int *piVar1;
  entvars_t *peVar2;
  CTSKnife *pCVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  vec_t *pvVar8;
  float *pfVar9;
  vec_t *pvVar10;
  longdouble lVar11;
  longdouble extraout_ST0;
  float fVar12;
  float local_10c [4];
  float local_fc;
  float local_f8;
  float local_f4;
  float local_ec [4];
  float local_dc;
  float local_d8;
  float local_d4;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_9c;
  float local_98;
  float local_94;
  undefined1 local_8c [20];
  float local_78 [11];
  float local_4c [4];
  float local_3c [7];
  float local_20;
  
  if (*(int *)&this->field_0xcc != 0) {
    fVar12 = *(float *)(*(int *)&this->field_0xd0 + 0x28);
    lVar11 = UTIL_WeaponTimeBase();
    lVar11 = lVar11 + (longdouble)fVar12;
    *(float *)&this->field_0xa0 = (float)lVar11;
    *(float *)&this->field_0x9c = (float)lVar11;
    lVar11 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0xa8 = (float)((longdouble)3.0 + lVar11);
    UTIL_MakeVectors(**(int **)&this->field_0x80 + 0x74);
    iVar6 = **(int **)&this->field_0x80;
    local_bc = *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0x174);
    local_b8 = *(float *)(iVar6 + 0xc) + *(float *)(iVar6 + 0x178);
    local_b4 = *(float *)(iVar6 + 0x10) + *(float *)(iVar6 + 0x17c);
    local_cc = gpGlobals->v_forward[0] * 32.0;
    local_c8 = gpGlobals->v_forward[1] * 32.0;
    local_c4 = gpGlobals->v_forward[2] * 32.0;
    local_ac = local_bc + local_cc;
    local_a8 = local_b8 + local_c8;
    local_a4 = local_b4 + local_c4;
    fVar12 = 1.0;
    local_dc = gpGlobals->v_right[0] * 1.0;
    local_d8 = gpGlobals->v_right[1] * 1.0;
    local_d4 = gpGlobals->v_right[2] * 1.0;
    local_9c = local_ac + local_dc;
    local_98 = local_a8 + local_d8;
    local_94 = local_a4 + local_d4;
    iVar4 = **(int **)&this->field_0x80;
    local_fc = *(float *)(iVar4 + 8) + *(float *)(iVar4 + 0x174);
    local_f8 = *(float *)(iVar4 + 0xc) + *(float *)(iVar4 + 0x178);
    local_f4 = *(float *)(iVar4 + 0x10) + *(float *)(iVar4 + 0x17c);
    local_10c[0] = gpGlobals->v_right[0] * 1.0;
    local_10c[1] = gpGlobals->v_right[1] * 1.0;
    local_10c[2] = gpGlobals->v_right[2] * 1.0;
    local_ec[0] = local_fc + local_10c[0];
    local_ec[1] = local_f8 + local_10c[1];
    local_ec[2] = local_f4 + local_10c[2];
    UTIL_TraceLine(local_ec,&local_9c,0,*(undefined4 *)(iVar6 + 0x208),local_8c);
    pfVar7 = local_78;
    pfVar9 = local_3c;
    for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar9 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar9 = pfVar9 + 1;
    }
    pfVar7 = local_10c;
    pfVar9 = local_4c;
    for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar9 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar9 = pfVar9 + 1;
    }
    local_10c[0] = local_3c[0];
    local_10c[1] = local_3c[1];
    local_10c[2] = local_3c[2];
    local_fc = local_4c[0];
    local_f8 = local_4c[1];
    local_f4 = local_4c[2];
    pCVar3 = CTSKnife::CreateKnife
                       (*(int **)&this->field_0x80,local_10c,&local_fc,
                        *(undefined4 *)(*(int *)&this->field_0xd0 + 0x20));
    if (pCVar3 != (CTSKnife *)0x0) {
      peVar2 = pCVar3->pev;
      local_20 = SQRT(peVar2->velocity[2] * peVar2->velocity[2] +
                      peVar2->velocity[1] * peVar2->velocity[1] +
                      peVar2->velocity[0] * peVar2->velocity[0]);
      if (local_20 == 0.0) {
        local_fc = 0.0;
        local_f8 = 0.0;
      }
      else {
        fVar12 = 1.0 / local_20;
        local_fc = fVar12 * peVar2->velocity[0];
        local_f8 = fVar12 * peVar2->velocity[1];
        fVar12 = fVar12 * peVar2->velocity[2];
      }
      local_f4 = fVar12;
      UTIL_VecToAngles(local_10c,&local_fc);
      peVar2 = pCVar3->pev;
      pfVar7 = local_10c;
      pfVar9 = local_ec;
      for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar9 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar9 = pfVar9 + 1;
      }
      pvVar8 = local_ec;
      pvVar10 = peVar2->angles;
      for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pvVar10 = *pvVar8;
        pvVar8 = pvVar8 + 1;
        pvVar10 = pvVar10 + 1;
      }
      pCVar3->pev->angles[2] = 90.0;
      pCVar3->pev->avelocity[0] = -700.0;
    }
    if (((*(uint *)(**(int **)&this->field_0x80 + 0x250) & 0x30c30) == 0) &&
       ((*(byte *)(**(int **)&this->field_0x80 + 0x1a5) & 2) != 0)) {
      CTSAnimation::Animate
                ((CTSAnimation *)(*(int *)&this->field_0x80 + 0x28c),
                 *(CBasePlayer **)&this->field_0x80,0x20);
    }
    iVar6 = *(int *)(**(int **)&this->field_0x80 + 0x208);
    fVar12 = 0.5;
    iVar4 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(iVar6,4,"weapons/katana/miss.wav",0x3f800000,0x3f4ccccd,0,iVar4 + 0x5f,fVar12);
    uVar5 = InfiniteClips(*(int *)&this->field_0x80);
    if (uVar5 == 0) {
      piVar1 = (int *)(*(int *)&this->field_0x80 + 0x548);
      *piVar1 = *piVar1 + (uint)*(byte *)(*(int *)&this->field_0xd0 + 0xd0);
      GetSpeedBySlots(*(int *)&this->field_0x80);
      CBasePlayer::SetPlayerSpeed(*(CBasePlayer **)&this->field_0x80,(float)extraout_ST0);
      DropWeapon(this,*(int *)&this->field_0xc8,'\x01');
    }
  }
  return;
}

/* 00084044  CTSGun::KnifeFire  (2501 bytes)
 * undefined KnifeFire(void)
 */
/* CTSGun::KnifeFire(void) */

void __thiscall CTSGun::KnifeFire(CTSGun *this)

{
  globalvars_t *pgVar1;
  void **ppvVar2;
  code *pcVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  entvars_t *peVar7;
  uint uVar8;
  undefined1 *puVar9;
  float *pfVar10;
  vec_t *pvVar11;
  int *piVar12;
  float *pfVar13;
  vec_t *pvVar14;
  longdouble lVar15;
  longdouble extraout_ST0;
  undefined1 *puVar16;
  float fVar17;
  undefined1 auStack_14c [8];
  float *local_144;
  float *local_140;
  CTSKnife *local_134;
  float *local_130;
  globalvars_t **local_12c;
  float *local_128;
  undefined4 *local_124;
  undefined1 *local_120;
  float local_11c;
  char cStack_115;
  undefined4 local_114;
  float local_110;
  float local_10c [4];
  float local_fc;
  float local_f8;
  float local_f4;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac [4];
  float local_9c [4];
  float local_8c;
  float local_88;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  float local_78 [10];
  edict_t *local_50;
  float local_4c [11];
  float local_20;
  
  puVar9 = auStack_14c;
  if (*(int *)&this->field_0xcc != 0) {
    cStack_115 = (*(uint *)(**(int **)&this->field_0x80 + 0x250) & 0x70c30) != 0;
    local_110 = *(float *)(*(int *)&this->field_0xd0 + 0x18);
    local_114 = 0;
    if ((bool)cStack_115) {
      local_110 = local_110 * 1.5;
    }
    lVar15 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0xa0 = (float)(lVar15 + (longdouble)local_110);
    *(float *)&this->field_0x9c = (float)(lVar15 + (longdouble)local_110);
    lVar15 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0xa8 = (float)((longdouble)3.0 + lVar15);
    *(float *)(*(int *)&this->field_0x80 + 0x4f8) = local_110;
    UTIL_MakeVectors(**(int **)&this->field_0x80 + 0x74);
    if (*(char *)(*(int *)&this->field_0xcc + 0x24) == '\0') {
      iVar5 = (*g_engfuncs.pfnRandomLong)(0,2);
      if ((cStack_115 == '\0') && ((*(byte *)(**(int **)&this->field_0x80 + 0x1a5) & 2) != 0)) {
        CTSAnimation::Animate
                  ((CTSAnimation *)(*(int *)&this->field_0x80 + 0x28c),
                   *(CBasePlayer **)&this->field_0x80,iVar5 + 0x1d);
      }
      local_11c = *(float *)(*(int *)&this->field_0xd0 + 0x1c);
      if (cStack_115 != '\0') {
        local_11c = local_11c * 0.6666667;
      }
      lVar15 = CBasePlayer::GetMeleeMultiplier(*(CBasePlayer **)&this->field_0x80);
      local_11c = (float)(lVar15 * (longdouble)local_11c);
      local_120 = local_7c;
      local_140 = &local_8c;
      (**(code **)(*(int *)(*(int *)&this->field_0x80 + 0x60) + 0x168))
                (local_140,*(int *)&this->field_0x80);
      pfVar10 = local_144;
      pfVar13 = local_4c + 3;
      for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar13 = *pfVar10;
        pfVar10 = pfVar10 + 1;
        pfVar13 = pfVar13 + 1;
      }
      puVar9 = &stack0xfffffeb0;
      local_9c[3] = local_4c[3];
      local_8c = local_4c[4];
      local_88 = local_4c[5];
      local_b0 = gpGlobals->v_forward[0] * 35.0;
      local_ac[0] = gpGlobals->v_forward[1] * 35.0;
      local_ac[1] = gpGlobals->v_forward[2] * 35.0;
      local_ac[3] = local_4c[3] + local_b0;
      local_9c[0] = local_4c[4] + local_ac[0];
      local_9c[1] = local_4c[5] + local_ac[1];
      CBasePlayer::CheckHull(*(CBasePlayer **)&this->field_0x80,local_144,local_ac + 3,local_124,3);
      piVar12 = (int *)0x0;
      if (local_78[2] < 1.0) {
        if (local_50 == (edict_t *)0x0) {
          local_50 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        }
        piVar12 = (int *)0x0;
        if (local_50 != (edict_t *)0x0) {
          piVar12 = local_50->pvPrivateData;
        }
        iVar5 = (**(code **)(piVar12[0x18] + 0xb4))(piVar12);
        if ((iVar5 == 0) || (*(char *)(*piVar12 + 0x118) < '\0')) {
          piVar12 = (int *)0x0;
        }
        else {
          puVar16 = local_120;
          uVar4 = VictimKnifeHold(*(CBasePlayer **)&this->field_0x80,piVar12);
          if ((char)uVar4 == '\0') {
            ClearMultiDamage();
            local_b0 = gpGlobals->v_forward[0];
            local_ac[0] = gpGlobals->v_forward[1];
            local_ac[1] = gpGlobals->v_forward[2];
            (**(code **)(piVar12[0x18] + 0x54))
                      (piVar12,**(undefined4 **)&this->field_0x80,local_120,&local_b0,local_80,
                       0x1004,puVar16);
            ApplyMultiDamage(**(undefined4 **)&this->field_0x80,**(undefined4 **)&this->field_0x80);
            iVar5 = (**(code **)(piVar12[0x18] + 200))(piVar12);
            if (iVar5 != 0) {
              *(undefined4 *)(*(int *)&this->field_0xcc + 8) = 1;
              this->pev->body = 1;
              iVar5 = *(int *)(*piVar12 + 0x208);
              fVar17 = 0.5;
              iVar6 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
              EMIT_SOUND_DYN(iVar5,4,"weapons/knife/knife_hitbody.wav",0x3f800000,0x3f4ccccd,0,
                             iVar6 + 0x5f,fVar17);
            }
          }
        }
      }
      if (piVar12 == (int *)0x0) {
        *(float *)(*(int *)&this->field_0x80 + 0x79c) =
             *(float *)(*(int *)&this->field_0xd0 + 0x18) * 0.25;
        *(undefined1 **)(*(int *)&this->field_0x80 + 0x7a0) = local_120;
        *(undefined1 *)(*(int *)&this->field_0x80 + 0x7a4) = 1;
      }
      (*g_engfuncs.pfnPlaybackEvent)
                (1,*(edict_t **)(**(int **)&this->field_0x80 + 0x208),*(ushort *)&this->field_0x972,
                 0.0,(float *)&g_vecZero,(float *)&g_vecZero,0.0,0.0,*(int *)&this->field_0xc8,
                 *(int *)(*(int *)&this->field_0xcc + 8),0,0);
    }
    else {
      local_128 = &local_8c;
      iVar5 = **(int **)&this->field_0x80;
      local_bc = *(float *)(iVar5 + 8) + *(float *)(iVar5 + 0x174);
      local_b8 = *(float *)(iVar5 + 0xc) + *(float *)(iVar5 + 0x178);
      local_b4 = *(float *)(iVar5 + 0x10) + *(float *)(iVar5 + 0x17c);
      local_12c = &gpGlobals;
      local_cc = gpGlobals->v_forward[0] * 32.0;
      local_c8 = gpGlobals->v_forward[1] * 32.0;
      local_c4 = gpGlobals->v_forward[2] * 32.0;
      local_4c[4] = local_bc + local_cc;
      local_4c[5] = local_c8 + local_b8;
      local_4c[6] = local_b4 + local_c4;
      local_dc = gpGlobals->v_right[0] * 1.0;
      local_d8 = gpGlobals->v_right[1] * 1.0;
      local_d4 = gpGlobals->v_right[2] * 1.0;
      local_130 = local_4c;
      local_4c[0] = local_4c[4] + local_dc;
      local_4c[1] = local_4c[5] + local_d8;
      local_4c[2] = local_4c[6] + local_d4;
      iVar6 = **(int **)&this->field_0x80;
      local_fc = *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0x174);
      local_f8 = *(float *)(iVar6 + 0xc) + *(float *)(iVar6 + 0x178);
      local_f4 = *(float *)(iVar6 + 0x10) + *(float *)(iVar6 + 0x17c);
      local_10c[0] = gpGlobals->v_right[0] * 1.0;
      local_10c[1] = gpGlobals->v_right[1] * 1.0;
      local_10c[2] = gpGlobals->v_right[2] * 1.0;
      local_ec = local_fc + local_10c[0];
      local_e8 = local_10c[1] + local_f8;
      local_e4 = local_f4 + local_10c[2];
      UTIL_TraceLine(&local_ec,local_130,0,*(undefined4 *)(iVar5 + 0x208),local_128);
      pfVar10 = local_78;
      pfVar13 = local_ac;
      for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar13 = *pfVar10;
        pfVar10 = pfVar10 + 1;
        pfVar13 = pfVar13 + 1;
      }
      if (*(int *)(*(int *)&this->field_0xd0 + 0x20) == 6) {
        pgVar1 = *local_12c;
        local_4c[0] = pgVar1->v_forward[0] * 1900.0;
        local_4c[1] = pgVar1->v_forward[1] * 1900.0;
        local_4c[2] = pgVar1->v_forward[2] * 1900.0;
        iVar5 = 3;
        pfVar10 = local_130;
        pfVar13 = local_9c;
      }
      else {
        pfVar10 = local_4c;
        local_4c[0] = gpGlobals->v_forward[0] * 1900.0;
        local_4c[1] = gpGlobals->v_forward[1] * 1900.0;
        local_4c[2] = gpGlobals->v_forward[2] * 1900.0;
        pfVar13 = local_9c;
        iVar5 = 3;
      }
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar13 = *pfVar10;
        pfVar10 = pfVar10 + 1;
        pfVar13 = pfVar13 + 1;
      }
      local_4c[0] = local_ac[0];
      local_4c[1] = local_ac[1];
      local_4c[2] = local_ac[2];
      local_4c[4] = local_9c[0];
      local_4c[5] = local_9c[1];
      local_4c[6] = local_9c[2];
      local_134 = CTSKnife::CreateKnife
                            (*(int **)&this->field_0x80,local_4c,local_4c + 4,
                             *(undefined4 *)(*(int *)&this->field_0xd0 + 0x20));
      if (local_134 != (CTSKnife *)0x0) {
        peVar7 = local_134->pev;
        local_20 = SQRT(peVar7->velocity[2] * peVar7->velocity[2] +
                        peVar7->velocity[1] * peVar7->velocity[1] +
                        peVar7->velocity[0] * peVar7->velocity[0]);
        if (local_20 == 0.0) {
          local_4c[6] = 1.0;
          local_4c[4] = 0.0;
          local_4c[5] = 0.0;
        }
        else {
          local_4c[6] = 1.0 / local_20;
          local_4c[4] = local_4c[6] * peVar7->velocity[0];
          local_4c[5] = local_4c[6] * peVar7->velocity[1];
          local_4c[6] = local_4c[6] * peVar7->velocity[2];
        }
        UTIL_VecToAngles(local_4c,local_4c + 4);
        peVar7 = local_134->pev;
        pfVar10 = local_4c;
        pfVar13 = local_10c;
        for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar13 = *pfVar10;
          pfVar10 = pfVar10 + 1;
          pfVar13 = pfVar13 + 1;
        }
        pvVar11 = local_10c;
        pvVar14 = peVar7->angles;
        for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pvVar14 = *pvVar11;
          pvVar11 = pvVar11 + 1;
          pvVar14 = pvVar14 + 1;
        }
        local_134->pev->angles[2] = 90.0;
        if (*(int *)(*(int *)&this->field_0xd0 + 0x20) == 6) {
          peVar7 = local_134->pev;
        }
        else {
          peVar7 = local_134->pev;
        }
        peVar7->avelocity[0] = -1300.0;
      }
      local_114 = 1;
      if (((*(uint *)(**(int **)&this->field_0x80 + 0x250) & 0x30c30) == 0) &&
         ((*(byte *)(**(int **)&this->field_0x80 + 0x1a5) & 2) != 0)) {
        CTSAnimation::Animate
                  ((CTSAnimation *)(*(int *)&this->field_0x80 + 0x28c),
                   *(CBasePlayer **)&this->field_0x80,0x20);
      }
      iVar5 = *(int *)(**(int **)&this->field_0x80 + 0x208);
      fVar17 = 0.5;
      iVar6 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
      EMIT_SOUND_DYN(iVar5,4,"weapons/knife/knife_miss.wav",0x3f800000,0x3f4ccccd,0,iVar6 + 0x5f,
                     fVar17);
    }
    if (*(int *)(puVar9 + 0x38) != 0) {
      *(undefined4 *)(puVar9 + -0x10) = *(undefined4 *)&this->field_0x80;
      *(undefined4 *)(puVar9 + -0x14) = 0x8490d;
      uVar8 = InfiniteClips(*(int *)(puVar9 + -0x10));
      if (uVar8 == 0) {
        piVar12 = (int *)(*(int *)&this->field_0x80 + 0x548);
        *piVar12 = *piVar12 + (uint)*(byte *)(*(int *)&this->field_0xd0 + 0xd0);
        *(undefined4 *)(puVar9 + -0x10) = *(undefined4 *)&this->field_0x80;
        *(undefined4 *)(puVar9 + -0x14) = 0x8493b;
        GetSpeedBySlots(*(int *)(puVar9 + -0x10));
        *(float *)(puVar9 + -0xc) = (float)extraout_ST0;
        *(undefined4 *)(puVar9 + -0x10) = *(undefined4 *)&this->field_0x80;
        *(undefined4 *)(puVar9 + -0x14) = 0x8494c;
        CBasePlayer::SetPlayerSpeed(*(CBasePlayer **)(puVar9 + -0x10),*(float *)(puVar9 + -0xc));
        piVar12 = (int *)(*(int *)&this->field_0xcc + 4);
        *piVar12 = *piVar12 + -1;
      }
      if (*(int *)(*(int *)&this->field_0xcc + 4) < 1) {
        *(undefined2 *)(puVar9 + -8) = 1;
        *(undefined4 *)(puVar9 + -0xc) = *(undefined4 *)&this->field_0xc8;
        *(CTSGun **)(puVar9 + -0x10) = this;
        *(undefined4 *)(puVar9 + -0x14) = 0x84a06;
        DropWeapon(*(CTSGun **)(puVar9 + -0x10),*(int *)(puVar9 + -0xc),puVar9[-8]);
      }
      else {
        ppvVar2 = this->vtable;
        *(undefined4 *)(puVar9 + -4) = 0;
        *(undefined4 *)(puVar9 + -8) = 1;
        if (*(int *)(*(int *)&this->field_0xcc + 0x28) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)*(short *)(*(int *)(*(int *)&this->field_0xcc + 0x28) + 0x28);
        }
        *(int *)(puVar9 + -0xc) = iVar5;
        *(CTSGun **)(puVar9 + -0x10) = this;
        pcVar3 = ppvVar2[0x5d];
        *(undefined4 *)(puVar9 + -0x14) = 0x84991;
        (*pcVar3)();
        iVar5 = **(int **)&this->field_0x80;
        *(undefined4 *)(puVar9 + -4) = 0;
        *(undefined4 *)(puVar9 + -8) = 0;
        *(undefined4 *)(puVar9 + -0xc) = *(undefined4 *)(*(int *)&this->field_0xcc + 0x10);
        *(undefined4 *)(puVar9 + -0x10) = *(undefined4 *)&this->field_0xc8;
        *(undefined4 *)(puVar9 + -0x14) = 0;
        *(undefined4 *)(puVar9 + -0x18) = 0;
        *(undefined4 **)(puVar9 + -0x1c) = &g_vecZero;
        *(undefined4 **)(puVar9 + -0x20) = &g_vecZero;
        *(undefined4 *)(puVar9 + -0x24) = 0;
        *(uint *)(puVar9 + -0x28) = (uint)*(ushort *)&this->field_0x976;
        *(undefined4 *)(puVar9 + -0x2c) = *(undefined4 *)(iVar5 + 0x208);
        *(undefined4 *)(puVar9 + -0x30) = 1;
        *(undefined4 *)(puVar9 + -0x34) = 0x849d9;
        (*g_engfuncs.pfnPlaybackEvent)
                  (*(int *)(puVar9 + -0x30),*(edict_t **)(puVar9 + -0x2c),
                   *(ushort *)(puVar9 + -0x28),*(float *)(puVar9 + -0x24),
                   *(float **)(puVar9 + -0x20),*(float **)(puVar9 + -0x1c),
                   *(float *)(puVar9 + -0x18),*(float *)(puVar9 + -0x14),*(int *)(puVar9 + -0x10),
                   *(int *)(puVar9 + -0xc),*(int *)(puVar9 + -8),*(int *)(puVar9 + -4));
        *(undefined4 *)(puVar9 + -4) = 0x849e1;
        lVar15 = UTIL_WeaponTimeBase();
        *(float *)&this->field_0xa8 = (float)((longdouble)2.0 + lVar15);
      }
    }
  }
  return;
}

/* 00084a14  CTSGun::ReloadWeapon  (149 bytes)
 * undefined4 ReloadWeapon(int param_1, undefined4 param_2, float param_3)
 */
/* CTSGun::ReloadWeapon(int, int, float) */

undefined4 __thiscall
CTSGun::ReloadWeapon(CTSGun *this,int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int iVar2;
  longdouble lVar3;
  
  if ((*(int *)&this->field_0xcc != 0) &&
     (0 < *(int *)(&this->field_0xd4 + (uint)*(byte *)(*(int *)&this->field_0xd0 + 8) * 4))) {
    iVar1 = param_1 - *(int *)(*(int *)&this->field_0xcc + 4);
    iVar2 = *(int *)(&this->field_0xd4 + (uint)*(byte *)(*(int *)&this->field_0xd0 + 8) * 4);
    if (iVar1 < *(int *)(&this->field_0xd4 + (uint)*(byte *)(*(int *)&this->field_0xd0 + 8) * 4)) {
      iVar2 = iVar1;
    }
    if (0 < iVar2) {
      *(undefined4 *)(*(int *)&this->field_0xcc + 0xc) = 1;
      lVar3 = UTIL_WeaponTimeBase();
      *(float *)(*(int *)&this->field_0x80 + 300) = (float)(lVar3 + (longdouble)param_3);
      return 1;
    }
  }
  return 0;
}

/* 00084aac  CTSGun::ShotgunReload  (682 bytes)
 * undefined ShotgunReload(void)
 */
/* CTSGun::ShotgunReload(void) */

void __thiscall CTSGun::ShotgunReload(CTSGun *this)

{
  int *piVar1;
  longdouble lVar2;
  
  if (*(int *)(*(int *)&this->field_0xcc + 8) == 0) {
    if ((0 < *(int *)(&this->field_0xd4 + (uint)*(byte *)(*(int *)&this->field_0xd0 + 8) * 4)) &&
       (*(int *)(*(int *)&this->field_0xcc + 4) < *(int *)(*(int *)&this->field_0xd0 + 4))) {
      Unzoom(this);
      if (*(int *)(**(int **)&this->field_0x80 + 0xbc) == 0) {
        *(int *)(**(int **)&this->field_0x80 + 0xbc) =
             (*(int *)&this->field_0xd0 - (int)gpGlobals->pStringBase) + 0x132;
      }
      *(undefined4 *)(*(int *)&this->field_0xcc + 8) = 1;
      (*g_engfuncs.pfnPlaybackEvent)
                (1,*(edict_t **)(**(int **)&this->field_0x80 + 0x208),*(ushort *)&this->field_0x970,
                 0.0,(float *)&g_vecZero,(float *)&g_vecZero,8.0,0.0,*(int *)&this->field_0xc8,
                 *(int *)(*(int *)&this->field_0xcc + 0x10),0,0);
      lVar2 = UTIL_WeaponTimeBase();
      *(float *)(*(int *)&this->field_0x80 + 300) = (float)((longdouble)0.3 + lVar2);
      lVar2 = UTIL_WeaponTimeBase();
      *(float *)&this->field_0xa8 = (float)((longdouble)0.3 + lVar2);
      lVar2 = UTIL_WeaponTimeBase();
      *(float *)&this->field_0x9c = (float)((longdouble)0.3 + lVar2);
      lVar2 = UTIL_WeaponTimeBase();
      *(float *)&this->field_0xa0 = (float)((longdouble)0.3 + lVar2);
    }
  }
  else if (*(int *)(*(int *)&this->field_0xcc + 8) == 1) {
    lVar2 = UTIL_WeaponTimeBase();
    if ((longdouble)*(float *)&this->field_0xa8 <= lVar2) {
      if ((*(int *)(&this->field_0xd4 + (uint)*(byte *)(*(int *)&this->field_0xd0 + 8) * 4) < 1) ||
         (*(int *)(*(int *)&this->field_0xd0 + 4) <= *(int *)(*(int *)&this->field_0xcc + 4))) {
        *(undefined4 *)(*(int *)&this->field_0xcc + 8) = 2;
      }
      else {
        *(int *)(&this->field_0xd4 + (uint)*(byte *)(*(int *)&this->field_0xd0 + 8) * 4) =
             *(int *)(&this->field_0xd4 + (uint)*(byte *)(*(int *)&this->field_0xd0 + 8) * 4) + -1;
        piVar1 = (int *)(*(int *)&this->field_0xcc + 4);
        *piVar1 = *piVar1 + 1;
        (*g_engfuncs.pfnPlaybackEvent)
                  (1,*(edict_t **)(**(int **)&this->field_0x80 + 0x208),
                   *(ushort *)&this->field_0x970,0.0,(float *)&g_vecZero,(float *)&g_vecZero,9.0,0.0
                   ,*(int *)&this->field_0xc8,*(int *)(*(int *)&this->field_0xcc + 0x10),0,0);
        lVar2 = UTIL_WeaponTimeBase();
        *(float *)&this->field_0xa8 =
             (float)(lVar2 + (longdouble)*(float *)(*(int *)&this->field_0xd0 + 0x14));
      }
    }
  }
  else if (*(int *)(*(int *)&this->field_0xcc + 8) == 2) {
    *(undefined4 *)(*(int *)&this->field_0xcc + 8) = 0;
    *(undefined1 *)(*(int *)&this->field_0xcc + 0x24) = 0;
    (*g_engfuncs.pfnPlaybackEvent)
              (1,*(edict_t **)(**(int **)&this->field_0x80 + 0x208),*(ushort *)&this->field_0x970,
               0.0,(float *)&g_vecZero,(float *)&g_vecZero,10.0,0.0,*(int *)&this->field_0xc8,
               *(int *)(*(int *)&this->field_0xcc + 0x10),0,0);
    lVar2 = UTIL_WeaponTimeBase();
    *(float *)(*(int *)&this->field_0x80 + 300) = (float)((longdouble)0.3 + lVar2);
    lVar2 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0xa8 = (float)((longdouble)3.0 + lVar2);
  }
  return;
}

/* 00084d5c  CTSGun::Reload  (429 bytes)
 * undefined Reload(void)
 */
/* CTSGun::Reload(void) */

void __thiscall CTSGun::Reload(CTSGun *this)

{
  int iVar1;
  short sVar2;
  longdouble lVar3;
  
  if (*(int *)&this->field_0xcc == 0) {
    CCombatBlock(this);
    return;
  }
  if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\x02') {
    return;
  }
  if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\x03') {
    CCombatBlock(this);
    return;
  }
  if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\n') {
    CCombatBlock(this);
    return;
  }
  if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\x01') {
    ShotgunReload(this);
    return;
  }
  if (*(int *)(&this->field_0xd4 + (uint)*(byte *)(*(int *)&this->field_0xd0 + 8) * 4) < 1) {
    return;
  }
  iVar1 = *(int *)&this->field_0xcc;
  if (*(int *)(iVar1 + 8) != 0) {
    return;
  }
  if ((*(int *)&this->field_0xc8 == 0x21) && (0 < *(int *)(iVar1 + 4))) {
    if (*(int *)(iVar1 + 0x28) != 0) {
      sVar2 = *(short *)(*(int *)(iVar1 + 0x28) + 0x10);
      goto LAB_00084e59;
    }
  }
  else if (*(int *)(*(int *)&this->field_0xcc + 0x28) != 0) {
    sVar2 = *(short *)(*(int *)(*(int *)&this->field_0xcc + 0x28) + 2);
    goto LAB_00084e59;
  }
  sVar2 = 0;
LAB_00084e59:
  iVar1 = ReloadWeapon(this,*(int *)(*(int *)&this->field_0xd0 + 4),(int)sVar2,
                       *(float *)(*(int *)&this->field_0xd0 + 0x14) * 1.0);
  if (iVar1 != 0) {
    lVar3 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0xa8 = (float)((longdouble)5.0 + lVar3);
    Unzoom(this);
    (*g_engfuncs.pfnPlaybackEvent)
              (1,*(edict_t **)(**(int **)&this->field_0x80 + 0x208),*(ushort *)&this->field_0x970,
               0.0,(float *)&g_vecZero,(float *)&g_vecZero,0.0,0.0,*(int *)&this->field_0xc8,
               *(int *)(*(int *)&this->field_0xcc + 0x10),0,0);
    CTSAnimation::Animate
              ((CTSAnimation *)(*(int *)&this->field_0x80 + 0x28c),
               *(CBasePlayer **)&this->field_0x80,0x33);
  }
  return;
}

/* 00084f18  CTSGun::GrenadeIdle  (1459 bytes)
 * undefined GrenadeIdle(int param_1)
 */
/* CTSGun::GrenadeIdle(int) */

void __thiscall CTSGun::GrenadeIdle(CTSGun *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  float fVar3;
  CM61Grenade *pCVar4;
  short *psVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longdouble lVar10;
  longdouble extraout_ST0;
  float local_94;
  float local_8c [4];
  float local_7c;
  float local_78;
  float local_74;
  float local_6c [4];
  float local_5c [4];
  float local_4c [7];
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  bVar2 = false;
  if (*(int *)&this->field_0xcc != 0) {
    if (*(int *)(*(int *)&this->field_0xcc + 8) == 1) {
      if (((*(uint *)(**(int **)&this->field_0x80 + 0x180) & 0x801) != 0) && (param_1 == 0)) {
        return;
      }
      iVar6 = **(int **)&this->field_0x80;
      local_28 = *(undefined4 *)(iVar6 + 0x78);
      local_24 = *(undefined4 *)(iVar6 + 0x7c);
      if (0.0 <= *(float *)(iVar6 + 0x74)) {
        fVar3 = 1.1111112;
      }
      else {
        fVar3 = 0.8888889;
      }
      local_2c = fVar3 * *(float *)(iVar6 + 0x74) + -10.0;
      local_94 = (90.0 - local_2c) * 7.0;
      if (750.0 < local_94) {
        local_94 = 750.0;
      }
      UTIL_MakeVectors(&local_2c);
      if (*(char *)(*(int *)&this->field_0xcc + 0x24) == '\0') {
        iVar6 = **(int **)&this->field_0x80;
        local_7c = *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0x174);
        local_78 = *(float *)(iVar6 + 0xc) + *(float *)(iVar6 + 0x178);
        local_74 = *(float *)(iVar6 + 0x10) + *(float *)(iVar6 + 0x17c);
        local_8c[0] = gpGlobals->v_forward[0] * 16.0;
        local_8c[1] = gpGlobals->v_forward[1] * 16.0;
        local_8c[2] = gpGlobals->v_forward[2] * 16.0;
        local_6c[0] = local_7c + local_8c[0];
        local_6c[1] = local_78 + local_8c[1];
        local_6c[2] = local_74 + local_8c[2];
        pfVar8 = local_6c;
        pfVar7 = local_4c;
        for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar7 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          pfVar7 = pfVar7 + 1;
        }
        local_7c = local_94 * gpGlobals->v_forward[0];
        local_78 = local_94 * gpGlobals->v_forward[1];
        local_74 = local_94 * gpGlobals->v_forward[2];
        iVar6 = **(int **)&this->field_0x80;
        local_8c[0] = local_7c + *(float *)(iVar6 + 0x20);
        local_8c[1] = local_78 + *(float *)(iVar6 + 0x24);
        local_8c[2] = local_74 + *(float *)(iVar6 + 0x28);
        iVar6 = 3;
        pfVar8 = local_8c;
        pfVar7 = local_5c;
      }
      else {
        iVar6 = **(int **)&this->field_0x80;
        local_7c = gpGlobals->v_forward[0] * 16.0;
        local_78 = gpGlobals->v_forward[1] * 16.0;
        local_74 = gpGlobals->v_forward[2] * 16.0;
        pfVar8 = local_8c;
        local_8c[0] = *(float *)(iVar6 + 8) + local_7c;
        local_8c[1] = *(float *)(iVar6 + 0xc) + local_78;
        local_8c[2] = *(float *)(iVar6 + 0x10) + local_74;
        pfVar7 = pfVar8;
        pfVar9 = local_4c;
        for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar9 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          pfVar9 = pfVar9 + 1;
        }
        local_30 = local_94 * 0.6666667;
        local_7c = local_30 * gpGlobals->v_forward[0];
        local_78 = local_30 * gpGlobals->v_forward[1];
        local_74 = local_30 * gpGlobals->v_forward[2];
        iVar6 = **(int **)&this->field_0x80;
        local_8c[0] = local_7c + *(float *)(iVar6 + 0x20);
        local_8c[1] = local_78 + *(float *)(iVar6 + 0x24);
        local_8c[2] = local_74 + *(float *)(iVar6 + 0x28);
        pfVar7 = local_5c;
        iVar6 = 3;
      }
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar7 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar7 + 1;
      }
      if (*(int *)(*(int *)&this->field_0xd0 + 0x20) == 4) {
        local_8c[0] = local_4c[0];
        local_8c[1] = local_4c[1];
        local_8c[2] = local_4c[2];
        local_7c = local_5c[0];
        local_78 = local_5c[1];
        local_74 = local_5c[2];
        pCVar4 = CM61Grenade::CreateGrenade
                           (*(int **)&this->field_0x80,0x40400000,local_8c,&local_7c);
        if (pCVar4 != (CM61Grenade *)0x0) {
          if (*(char *)(*(int *)&this->field_0xcc + 0x24) == '\0') {
            pCVar4->pev->avelocity[0] = 200.0;
          }
          else {
            pCVar4->pev->friction = 0.4;
            pCVar4->pev->avelocity[1] = 600.0;
            pCVar4->pev->avelocity[0] = -100.0;
          }
        }
      }
      iVar6 = *(int *)&this->field_0xcc;
      if (*(int *)(iVar6 + 0x28) == 0) {
        iVar6 = 0;
      }
      else {
        if (*(char *)(iVar6 + 0x24) == '\0') {
          psVar5 = (short *)(*(int *)(iVar6 + 0x28) + 0x28);
        }
        else {
          psVar5 = (short *)(*(int *)(iVar6 + 0x28) + 0x2a);
        }
        iVar6 = (int)*psVar5;
      }
      (*this->vtable[0x5d])(this,iVar6,1,0);
      (*g_engfuncs.pfnPlaybackEvent)
                (1,*(edict_t **)(**(int **)&this->field_0x80 + 0x208),*(ushort *)&this->field_0x978,
                 0.0,(float *)&g_vecZero,(float *)&g_vecZero,0.0,0.0,
                 SUB14(*(char *)(*(int *)&this->field_0xcc + 0x24) != '\0',0) + 0x14,0,0,0);
      CTSAnimation::Animate
                ((CTSAnimation *)(*(int *)&this->field_0x80 + 0x28c),
                 *(CBasePlayer **)&this->field_0x80,0x35);
      lVar10 = UTIL_WeaponTimeBase();
      local_30 = (float)((longdouble)0.5 + lVar10);
      *(float *)&this->field_0xa0 = local_30;
      *(float *)&this->field_0x9c = local_30;
      lVar10 = UTIL_WeaponTimeBase();
      *(float *)&this->field_0xa8 = (float)((longdouble)0.5 + lVar10);
      if (*(int *)(*(int *)&this->field_0xcc + 4) == 1) {
        *(undefined4 *)(**(int **)&this->field_0x80 + 0xc0) = 0;
      }
      if (param_1 == 0) {
        *(undefined4 *)(*(int *)&this->field_0xcc + 8) = 2;
      }
      else {
        *(undefined4 *)(*(int *)&this->field_0xcc + 8) = 0;
      }
      bVar2 = param_1 != 0;
      piVar1 = (int *)(*(int *)&this->field_0xcc + 4);
      *piVar1 = *piVar1 + -1;
    }
    else if (*(int *)(*(int *)&this->field_0xcc + 8) == 2) {
      *(undefined4 *)(*(int *)&this->field_0xcc + 8) = 0;
      bVar2 = true;
    }
    else {
      lVar10 = UTIL_WeaponTimeBase();
      *(float *)&this->field_0xa8 = (float)((longdouble)3.0 + lVar10);
    }
    if (bVar2) {
      piVar1 = (int *)(*(int *)&this->field_0x80 + 0x548);
      *piVar1 = *piVar1 + (uint)*(byte *)(*(int *)&this->field_0xd0 + 0xd0);
      GetSpeedBySlots(*(int *)&this->field_0x80);
      CBasePlayer::SetPlayerSpeed(*(CBasePlayer **)&this->field_0x80,(float)extraout_ST0);
      if (*(int *)(*(int *)&this->field_0xcc + 4) < 1) {
        DropWeapon(this,*(int *)&this->field_0xc8,'\x01');
      }
      else {
        if (*(int *)(*(int *)&this->field_0xcc + 0x28) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)*(short *)(*(int *)(*(int *)&this->field_0xcc + 0x28) + 4);
        }
        (*this->vtable[0x5d])(this,iVar6,1,0);
        lVar10 = UTIL_WeaponTimeBase();
        *(float *)&this->field_0xa8 = (float)((longdouble)2.0 + lVar10);
      }
    }
  }
  return;
}

/* 000854dc  CTSGun::WeaponIdle  (400 bytes)
 * undefined WeaponIdle(void)
 */
/* CTSGun::WeaponIdle(void) */

void __thiscall CTSGun::WeaponIdle(CTSGun *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longdouble lVar5;
  
  if (*(int *)&this->field_0xcc == 0) {
    CCombatIdle(this);
  }
  else {
    iVar4 = *(int *)&this->field_0xcc;
    *(undefined4 *)&this->field_0xb4 = *(undefined4 *)(iVar4 + 4);
    if (*(char *)(iVar4 + 0x2c) == '\0') {
      iVar2 = *(int *)&this->field_0xd0 + 0x252;
    }
    else {
      iVar4 = *(int *)&this->field_0xcc;
      iVar2 = *(int *)&this->field_0xd0 + 0x28c;
    }
    *(int *)(iVar4 + 0x28) = iVar2;
    if ((*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\x01') &&
       (*(int *)(*(int *)&this->field_0xcc + 8) != 0)) {
      (*this->vtable[0x62])(this);
    }
    else {
      if ((*(char *)(*(int *)&this->field_0xcc + 2) == '\x02') &&
         (*(float *)&this->field_0x9c <= 0.0)) {
        if (*(int *)(*(int *)&this->field_0xcc + 8) < 1) {
          *(undefined4 *)(*(int *)&this->field_0xcc + 8) = 0;
        }
        else {
          Fire(this);
          piVar1 = (int *)(*(int *)&this->field_0xcc + 8);
          *piVar1 = *piVar1 + -1;
        }
      }
      lVar5 = UTIL_WeaponTimeBase();
      if ((longdouble)*(float *)&this->field_0xa8 <= lVar5) {
        if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\x02') {
          GrenadeIdle(this,0);
        }
        else {
          uVar3 = InfiniteClips(*(int *)&this->field_0x80);
          if ((uVar3 == 0) && (*(int *)(*(int *)&this->field_0xcc + 4) < 1)) {
            (*this->vtable[0x62])(this);
          }
          else if (*(int *)(*(int *)&this->field_0xcc + 4) != 0) {
            lVar5 = UTIL_WeaponTimeBase();
            *(float *)&this->field_0xa8 = (float)((longdouble)3.0 + lVar5);
            if (*(int *)(*(int *)&this->field_0xcc + 0x28) == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = (int)**(short **)(*(int *)&this->field_0xcc + 0x28);
            }
            (*this->vtable[0x5d])(this,iVar4,0,this->pev->body);
          }
        }
      }
    }
  }
  return;
}

/* 00085674  CTSGun::Holster  (33 bytes)
 * undefined Holster(CTSGun * param_1)
 */
/* CTSGun::Holster(int) */

void CTSGun::Holster(CTSGun *param_1)

{
  HolsterWeapon(param_1);
  return;
}

/* 00085698  CTSGun::HolsterWeapon  (556 bytes)
 * undefined HolsterWeapon(void)
 */
/* CTSGun::HolsterWeapon(void) */

void __thiscall CTSGun::HolsterWeapon(CTSGun *this)

{
  void **ppvVar1;
  int iVar2;
  undefined4 *puVar3;
  longdouble lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(CTSGun **)(*(int *)&this->field_0x80 + 0xa18) = this;
  *(undefined4 *)(**(int **)&this->field_0x80 + 0xbc) = 0;
  *(undefined4 *)(**(int **)&this->field_0x80 + 0xc0) = 0;
  Unzoom(this);
  *(undefined1 *)(*(int *)&this->field_0x80 + 0xb58) = 0;
  *(undefined1 *)(*(int *)&this->field_0x80 + 0x478) = 0;
  lVar4 = UTIL_WeaponTimeBase();
  *(float *)(*(int *)&this->field_0x80 + 300) = (float)((longdouble)0.5 + lVar4);
  lVar4 = UTIL_WeaponTimeBase();
  *(float *)&this->field_0xa8 = (float)((longdouble)3.0 + lVar4);
  iVar2 = *(int *)&this->field_0x80;
  if ((*(float *)(iVar2 + 0x79c) != 0.0) && (*(char *)(iVar2 + 0x7a4) != '\0')) {
    *(undefined4 *)(iVar2 + 0x79c) = 0;
    *(undefined4 *)(*(int *)&this->field_0x80 + 0x7a0) = 0;
    *(undefined1 *)(*(int *)&this->field_0x80 + 0x7a4) = 0;
  }
  if ((*(int *)&this->field_0x80 != 0) &&
     (iVar2 = (**(code **)(*(int *)(*(int *)&this->field_0x80 + 0x60) + 0xb4))
                        (*(int *)&this->field_0x80), iVar2 == 0)) {
    return;
  }
  if ((*(int *)&this->field_0xcc != 0) && (*(int *)&this->field_0xd0 != 0)) {
    if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\x02') {
      GrenadeIdle(this,1);
    }
    else {
      *(undefined4 *)(*(int *)&this->field_0xcc + 0xc) = 0;
      *(undefined4 *)(*(int *)&this->field_0xcc + 8) = 0;
    }
  }
  *(undefined4 *)&this->field_0xc8 = 0;
  *(undefined4 *)&this->field_0xcc = 0;
  *(undefined4 *)&this->field_0xd0 = 0;
  puVar3 = get_weapon_info(0);
  *(int *)(**(int **)&this->field_0x80 + 0xbc) = (int)puVar3 + (0x132 - (int)gpGlobals->pStringBase)
  ;
  ppvVar1 = this->vtable;
  uVar6 = 0;
  uVar5 = 0;
  puVar3 = get_weapon_info(0);
  (*ppvVar1[0x5d])(this,(int)*(short *)((int)puVar3 + 0x256),uVar5,uVar6);
  (*g_engfuncs.pfnPlaybackEvent)
            (1,*(edict_t **)(**(int **)&this->field_0x80 + 0x208),*(ushort *)&this->field_0x976,0.0,
             (float *)&g_vecZero,(float *)&g_vecZero,0.0,0.0,*(int *)&this->field_0xc8,0,0,0);
  *(undefined4 *)&this->field_0xa00 = 0;
  *(undefined4 *)&this->field_0x9fc = 0;
  *(undefined4 *)&this->field_0xa04 = 0;
  return;
}

/* 000858c8  CTSGun::UpdateClientData  (1284 bytes)
 * undefined4 UpdateClientData(int * param_1)
 */
/* CTSGun::UpdateClientData(CBasePlayer *) */

undefined4 __thiscall CTSGun::UpdateClientData(CTSGun *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  
  if (*(float *)&this->field_0x9e0 <= gpGlobals->time) {
    bVar2 = false;
    *(float *)&this->field_0x9e0 = gpGlobals->time + 0.1;
    local_20 = 0x25;
    puVar5 = &this->field_0x928;
    local_34 = &this->field_0x9d5;
    local_30 = puVar5;
    local_2c = puVar5;
    local_28 = local_34;
    local_24 = puVar5;
    do {
      if (local_34[8] != local_30[4]) {
        local_28[8] = local_2c[4];
        (*g_engfuncs.pfnMessageBegin)
                  (1,gmsgTSWeaponStatus,(float *)0x0,*(edict_t **)(*param_1 + 0x208));
        (*g_engfuncs.pfnWriteByte)(local_20);
        (*g_engfuncs.pfnWriteByte)((uint)(byte)puVar5[4]);
        (*g_engfuncs.pfnWriteByte)(*(int *)(local_24 + 8));
        (*g_engfuncs.pfnMessageEnd)();
      }
      if (local_34[7] != local_30[-0x34]) {
        local_28[7] = local_2c[-0x34];
        (*g_engfuncs.pfnMessageBegin)
                  (1,gmsgTSWeaponStatus,(float *)0x0,*(edict_t **)(*param_1 + 0x208));
        (*g_engfuncs.pfnWriteByte)(local_20 + -1);
        (*g_engfuncs.pfnWriteByte)((uint)(byte)puVar5[-0x34]);
        (*g_engfuncs.pfnWriteByte)(*(int *)(local_24 + -0x30));
        (*g_engfuncs.pfnMessageEnd)();
      }
      local_24 = local_24 + -0x70;
      puVar5 = puVar5 + -0x70;
      local_2c = local_2c + -0x70;
      local_30 = local_30 + -0x70;
      local_28 = local_28 + -2;
      local_34 = local_34 + -2;
      local_20 = local_20 + -2;
    } while (-1 < local_20);
    if (*(int *)&this->field_0xcc != 0) {
      if (*(uint *)&this->field_0xc8 != (uint)(byte)this->field_0x97a) {
        bVar2 = true;
        this->field_0x97a = this->field_0xc8;
        puVar3 = *(undefined4 **)&this->field_0xcc;
        puVar6 = (undefined4 *)&this->field_0x97c;
        for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        *(undefined4 *)&this->field_0x9b4 =
             *(undefined4 *)(&this->field_0xd4 + (uint)*(byte *)(*(int *)&this->field_0xd0 + 8) * 4)
        ;
      }
      if (*(int *)&this->field_0x9b4 !=
          *(int *)(&this->field_0xd4 + (uint)*(byte *)(*(int *)&this->field_0xd0 + 8) * 4)) {
        bVar2 = true;
        puVar3 = *(undefined4 **)&this->field_0xcc;
        puVar6 = (undefined4 *)&this->field_0x97c;
        for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        *(undefined4 *)&this->field_0x9b4 =
             *(undefined4 *)(&this->field_0xd4 + (uint)*(byte *)(*(int *)&this->field_0xd0 + 8) * 4)
        ;
      }
      if (bVar2) {
        (*g_engfuncs.pfnMessageBegin)(1,gmsgWeaponInfo,(float *)0x0,*(edict_t **)(*param_1 + 0x208))
        ;
        (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0xc8);
        (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x980);
        (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0x9b4);
        (*g_engfuncs.pfnWriteByte)((uint)(byte)this->field_0x97e);
        (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x98c);
        (*g_engfuncs.pfnMessageEnd)();
        puVar3 = get_weapon_info(*(uint *)&this->field_0xc8);
        iVar4 = puVar3[0x32];
        if ((iVar4 != -1) && (iVar1 = iVar4 * 0x38, (&this->field_0x114)[iVar1] != '\0')) {
          (*g_engfuncs.pfnMessageBegin)
                    (1,gmsgTSWeaponStatus,(float *)0x0,*(edict_t **)(*param_1 + 0x208));
          (*g_engfuncs.pfnWriteByte)(iVar4);
          (*g_engfuncs.pfnWriteByte)((uint)(byte)(&this->field_0x114)[iVar1]);
          (*g_engfuncs.pfnWriteByte)(*(int *)(&this->field_0x118 + iVar1));
          (*g_engfuncs.pfnMessageEnd)();
        }
        puVar3 = get_weapon_info(*(uint *)&this->field_0xc8);
        iVar4 = puVar3[0x33];
        if (((iVar4 != -1) && (iVar4 != *(int *)&this->field_0xc8)) &&
           (iVar1 = iVar4 * 0x38, (&this->field_0x114)[iVar1] != '\0')) {
          (*g_engfuncs.pfnMessageBegin)
                    (1,gmsgTSWeaponStatus,(float *)0x0,*(edict_t **)(*param_1 + 0x208));
          (*g_engfuncs.pfnWriteByte)(iVar4);
          (*g_engfuncs.pfnWriteByte)((uint)(byte)(&this->field_0x114)[iVar1]);
          (*g_engfuncs.pfnWriteByte)(*(int *)(&this->field_0x118 + iVar1));
          (*g_engfuncs.pfnMessageEnd)();
        }
        *(undefined4 *)&this->field_0x980 = *(undefined4 *)(*(int *)&this->field_0xcc + 4);
      }
      return 1;
    }
    if (*(uint *)&this->field_0xc8 != (uint)(byte)this->field_0x97a) {
      this->field_0x97a = this->field_0xc8;
      (*g_engfuncs.pfnMessageBegin)(1,gmsgWeaponInfo,(float *)0x0,*(edict_t **)(*param_1 + 0x208));
      (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0xc8);
      (*g_engfuncs.pfnWriteByte)((int)ROUND(*(float *)(*(int *)&this->field_0x80 + 0x774)));
      (*g_engfuncs.pfnWriteShort)(0);
      (*g_engfuncs.pfnWriteByte)(0);
      (*g_engfuncs.pfnWriteByte)(0);
      (*g_engfuncs.pfnMessageEnd)();
    }
  }
  return 0;
}

/* 00085dd0  CTSGun::GetItemInfo  (130 bytes)
 * undefined4 GetItemInfo(undefined4 * param_1)
 */
/* CTSGun::GetItemInfo(ItemInfo *) */

undefined4 __thiscall CTSGun::GetItemInfo(CTSGun *this,undefined4 *param_1)

{
  param_1[6] = gpGlobals->pStringBase + this->pev->classname;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0xffffffff;
  param_1[7] = 0xffffffff;
  *param_1 = 1;
  param_1[1] = 2;
  param_1[9] = 0;
  *(undefined4 *)&this->field_0x88 = 0x10;
  param_1[8] = 0x10;
  param_1[10] = 1;
  return 1;
}

/* 00085e54  CTSGun::CCombatIdle  (104 bytes)
 * undefined CCombatIdle(void)
 */
/* CTSGun::CCombatIdle(void) */

void __thiscall CTSGun::CCombatIdle(CTSGun *this)

{
  void **ppvVar1;
  undefined4 *puVar2;
  longdouble lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar3 = UTIL_WeaponTimeBase();
  if ((longdouble)*(float *)&this->field_0xa8 <= lVar3) {
    lVar3 = UTIL_WeaponTimeBase();
    *(float *)&this->field_0xa8 = (float)((longdouble)3.0 + lVar3);
    ppvVar1 = this->vtable;
    uVar5 = 0;
    uVar4 = 0;
    puVar2 = get_weapon_info(0);
    (*ppvVar1[0x5d])(this,(int)*(short *)((int)puVar2 + 0x252),uVar4,uVar5);
  }
  return;
}

/* 00085ebc  CTSGun::CCombatBlock  (437 bytes)
 * undefined CCombatBlock(void)
 */
/* CTSGun::CCombatBlock(void) */

void __thiscall CTSGun::CCombatBlock(CTSGun *this)

{
  int *piVar1;
  int iVar2;
  longdouble lVar3;
  
  iVar2 = *(int *)&this->field_0x80;
  lVar3 = UTIL_WeaponTimeBase();
  if ((longdouble)*(float *)(iVar2 + 300) <= lVar3) {
    lVar3 = UTIL_WeaponTimeBase();
    if ((longdouble)*(float *)&this->field_0x9c <= lVar3) {
      lVar3 = UTIL_WeaponTimeBase();
      if ((longdouble)*(float *)&this->field_0xa0 <= lVar3) {
        lVar3 = UTIL_WeaponTimeBase();
        if ((((longdouble)*(float *)&this->field_0xa4 <= lVar3) &&
            (piVar1 = *(int **)&this->field_0x80, (*(uint *)(*piVar1 + 0x250) & 0x70c30) == 0)) &&
           (0.01 <= (float)piVar1[0x1dd])) {
          iVar2 = 0;
          if (*(int *)&this->field_0xcc == 0) {
            iVar2 = 1;
            piVar1[0x1ea] = 0x3f000000;
          }
          else if (*(int *)&this->field_0xd0 != 0) {
            if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\n') {
              *(undefined4 *)(*(int *)&this->field_0x80 + 0x7b0) = 0x3f000000;
            }
            else if (*(char *)(*(int *)&this->field_0xd0 + 0x348) == '\x03') {
              *(undefined4 *)(*(int *)&this->field_0x80 + 0x7ac) = 0x3f000000;
            }
            iVar2 = 0x12;
          }
          (*g_engfuncs.pfnPlaybackEvent)
                    (1,*(edict_t **)(**(int **)&this->field_0x80 + 0x208),
                     *(ushort *)&this->field_0x96c,0.0,(float *)&g_vecZero,(float *)&g_vecZero,
                     (float)*(int *)&this->field_0xc8,0.0,0,iVar2,0,0);
          CTSAnimation::Animate
                    ((CTSAnimation *)(*(int *)&this->field_0x80 + 0x28c),
                     *(CBasePlayer **)&this->field_0x80,0x26);
          CBasePlayer::UpdateMeleeBar(*(CBasePlayer **)&this->field_0x80,33.0);
          lVar3 = UTIL_WeaponTimeBase();
          *(float *)&this->field_0xa0 = (float)((longdouble)0.5 + lVar3);
          *(float *)&this->field_0x9c = (float)((longdouble)0.5 + lVar3);
          lVar3 = UTIL_WeaponTimeBase();
          *(float *)&this->field_0xa8 = (float)(lVar3 + (longdouble)3.0);
        }
      }
    }
  }
  return;
}

/* 00086078  CTSGun::CCombatAttack  (3441 bytes)
 * undefined CCombatAttack(void)
 */
/* CTSGun::CCombatAttack(void) */

void __thiscall CTSGun::CCombatAttack(CTSGun *this)

{
  uint *puVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined3 extraout_var;
  CBasePlayer *pCVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float *pfVar11;
  bool bVar12;
  longdouble lVar13;
  undefined4 uStack_130;
  undefined1 auStack_12c [3];
  char local_129;
  undefined4 local_128;
  undefined4 local_124;
  char local_11d;
  float local_11c;
  int local_118;
  float local_114;
  float local_110;
  float local_10c;
  int local_108;
  int local_104;
  float local_100;
  vec_t local_fc;
  vec_t local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc [4];
  float local_ac [4];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float local_80;
  float local_30 [8];
  
  puVar9 = (undefined4 *)auStack_12c;
  local_108 = 0x3f19999a;
  local_110 = 0.0;
  local_11d = '\x01';
  iVar8 = **(int **)&this->field_0x80;
  local_11c = SQRT(*(float *)(iVar8 + 0x28) * *(float *)(iVar8 + 0x28) +
                   *(float *)(iVar8 + 0x24) * *(float *)(iVar8 + 0x24) +
                   *(float *)(iVar8 + 0x20) * *(float *)(iVar8 + 0x20));
  local_114 = 0.0;
  local_100 = 0.0;
  local_104 = 0;
  local_124 = 0;
  piVar3 = *(int **)&this->field_0x80;
  local_128._0_3_ = CONCAT12((*(uint *)(*piVar3 + 0x250) & 0x50c30) != 0,(undefined2)local_128);
  local_128 = (uint)(uint3)local_128;
  uStack_130 = 0x8611b;
  local_10c = local_110;
  lVar13 = UTIL_WeaponTimeBase();
  if (lVar13 < (longdouble)(float)piVar3[0x4b]) {
    return;
  }
  uStack_130 = 0x86131;
  lVar13 = UTIL_WeaponTimeBase();
  if (lVar13 < (longdouble)*(float *)&this->field_0x9c) {
    return;
  }
  uStack_130 = 0x86147;
  lVar13 = UTIL_WeaponTimeBase();
  if (lVar13 < (longdouble)*(float *)&this->field_0xa0) {
    return;
  }
  local_98 = *(undefined4 *)(**(int **)&this->field_0x80 + 0x78);
  local_94 = *(undefined4 *)(**(int **)&this->field_0x80 + 0x7c);
  local_9c = 0;
  if (local_11c <= 100.0) {
    bVar12 = (*(byte *)(**(int **)&this->field_0x80 + 0x180) & 0x10) != 0;
    fVar2 = local_110;
  }
  else {
    UTIL_MakeVectors(&local_9c);
    iVar8 = **(int **)&this->field_0x80;
    local_80 = SQRT(*(float *)(iVar8 + 0x28) * *(float *)(iVar8 + 0x28) +
                    *(float *)(iVar8 + 0x24) * *(float *)(iVar8 + 0x24) +
                    *(float *)(iVar8 + 0x20) * *(float *)(iVar8 + 0x20));
    if (local_80 == local_110) {
      local_ac[2] = 1.0;
      local_ac[0] = 0.0;
      local_ac[1] = 0.0;
    }
    else {
      local_ac[2] = 1.0 / local_80;
      local_ac[0] = local_ac[2] * *(float *)(iVar8 + 0x20);
      local_ac[1] = local_ac[2] * *(float *)(iVar8 + 0x24);
      local_ac[2] = local_ac[2] * *(float *)(iVar8 + 0x28);
    }
    fVar2 = gpGlobals->v_forward[2] * local_ac[2] +
            gpGlobals->v_forward[1] * local_ac[1] + gpGlobals->v_forward[0] * local_ac[0];
    bVar12 = fVar2 <= -0.5;
  }
  local_118 = bVar12 + 2;
  if (local_128._2_1_ != '\0') {
    local_100 = -NAN;
    local_124 = 4;
    local_108 = 0x3f0ccccd;
    local_10c = 0.15;
    local_110 = 15.0;
    goto LAB_000862f9;
  }
  if ((*(byte *)(**(int **)&this->field_0x80 + 0x180) & 1) == 0) {
    uVar4 = *(uint *)(**(int **)&this->field_0x80 + 0x180);
    if ((uVar4 & 0x800) == 0) goto LAB_000869a3;
    if (((*(byte *)(**(int **)&this->field_0x80 + 0x1a5) & 2) != 0) &&
       (((uVar4 & 4) != 0 || ((this->pev->flags & 0x4000) != 0)))) {
      local_110 = 35.0;
      local_104 = 2;
      local_128 = CONCAT13(1,(uint3)local_128);
      local_100 = 2.8026e-44;
      local_124 = 6;
      local_114 = 6.30584e-44;
      local_108 = 0x3f800000;
      local_10c = 0.35;
      puVar1 = (uint *)(**(int **)&this->field_0x80 + 0x250);
      *puVar1 = *puVar1 | 4;
      puVar1 = (uint *)(**(int **)&this->field_0x80 + 0x250);
      *puVar1 = *puVar1 | 1;
      local_ac[0] = 0.0;
      local_ac[1] = 0.0;
      local_ac[2] = 16.0;
      pfVar10 = local_ac;
      pfVar11 = (float *)(**(int **)&this->field_0x80 + 0x174);
      for (iVar8 = 3; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar11 = *pfVar10;
        pfVar10 = pfVar10 + 1;
        pfVar11 = pfVar11 + 1;
      }
      *(undefined4 *)(*(int *)&this->field_0x80 + 0x4f4) = 0x40000000;
      local_118 = 2;
      goto LAB_000869a3;
    }
    if (local_118 == 3) {
      local_104 = 3;
      local_100 = 2.38221e-44;
      local_124 = 7;
      local_110 = local_11c * 0.3030303;
      if (80.0 < local_110) {
        local_110 = 80.0;
      }
      if (local_110 < 15.0) {
        local_110 = 15.0;
      }
      local_114 = 7.70714e-44;
      if ((*(byte *)(**(int **)&this->field_0x80 + 0x1a5) & 2) == 0) {
        local_108 = 0x3faccccd;
      }
      else {
        local_128 = CONCAT13(1,(uint3)local_128);
        local_108 = 0x3f800000;
      }
      local_10c = 0.3;
      goto LAB_000869a3;
    }
    local_104 = 2;
    if (((((*(byte *)(**(int **)&this->field_0x80 + 0x1a5) & 2) == 0) && (270.0 < local_11c)) &&
        ((*(byte *)(**(int **)&this->field_0x80 + 0x180) & 4) != 0)) && (0.5 < fVar2)) {
      local_128 = local_128 & 0xffffff;
      *(undefined4 *)&this->field_0xa00 = 0;
      local_110 = local_11c * 0.15384616;
      if (45.0 < local_110) {
        local_110 = 45.0;
      }
      if (local_110 < 15.0) {
        local_110 = 15.0;
      }
      local_114 = 6.30584e-44;
      local_108 = 0x3f800000;
      local_10c = 0.25;
      local_100 = 2.24208e-44;
      local_124 = 8;
      local_11d = '\0';
      puVar1 = (uint *)(**(int **)&this->field_0x80 + 0x250);
      *puVar1 = *puVar1 | 4;
      local_ac[0] = 0.0;
      local_ac[1] = 0.0;
      local_ac[2] = 16.0;
      pfVar10 = local_ac;
      pfVar11 = (float *)(**(int **)&this->field_0x80 + 0x174);
      for (iVar8 = 3; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar11 = *pfVar10;
        pfVar10 = pfVar10 + 1;
        pfVar11 = pfVar11 + 1;
      }
      *(undefined4 *)(*(int *)&this->field_0x80 + 0x4f4) = 0x40000000;
      goto LAB_000869a3;
    }
    if (((*(byte *)(**(int **)&this->field_0x80 + 0x1a5) & 2) != 0) || (local_11c <= 200.0)) {
      if (((*(byte *)(*(int *)&this->field_0x80 + 0x815) & 8) != 0) ||
         (2 < *(int *)&this->field_0xa00)) {
        local_128 = CONCAT13(1,(uint3)local_128);
        local_114 = 6.30584e-44;
        local_108 = 0x3f000000;
        local_10c = 0.3;
        *(undefined4 *)&this->field_0xa00 = 0;
        if (*(int *)&this->field_0xa04 == 0xf) {
switchD_000868eb_caseD_2:
          local_100 = 1.4013e-44;
        }
        else if (*(int *)&this->field_0xa04 == 10) {
switchD_000868eb_caseD_0:
          local_100 = 1.96182e-44;
        }
        else if (*(int *)&this->field_0xa04 == 0xe) {
switchD_000868eb_caseD_1:
          local_100 = 1.82169e-44;
        }
        else {
          if (*(int *)&this->field_0xa04 != 0xd) {
            iVar8 = (*g_engfuncs.pfnRandomLong)(0,3);
            switch(iVar8) {
            case 0:
              goto switchD_000868eb_caseD_0;
            case 1:
              goto switchD_000868eb_caseD_1;
            case 2:
              goto switchD_000868eb_caseD_2;
            case 3:
              break;
            default:
              goto switchD_000868eb_default;
            }
          }
          local_100 = 2.10195e-44;
        }
switchD_000868eb_default:
        local_110 = 25.0;
        goto LAB_00086912;
      }
      local_128 = CONCAT13(1,(uint3)local_128);
      local_114 = 6.30584e-44;
      *(int *)&this->field_0xa00 = *(int *)&this->field_0xa00 + 1;
      local_108 = 0x3e99999a;
      local_10c = 0.2;
      local_110 = 15.0;
      if (*(int *)&this->field_0xa04 == 0xb) {
LAB_0008698f:
        local_100 = 1.68156e-44;
      }
      else if ((*(int *)&this->field_0xa04 == 0xc) ||
              (iVar8 = (*g_engfuncs.pfnRandomLong)(0,1), iVar8 == 0)) {
        local_100 = 1.54143e-44;
      }
      else if (iVar8 == 1) goto LAB_0008698f;
      local_124 = 9;
      goto LAB_000869a3;
    }
    local_128 = local_128 & 0xffffff;
    *(undefined4 *)&this->field_0xa00 = 0;
    lVar13 = (longdouble)0.1 * (longdouble)local_11c;
    if ((longdouble)30.0 < lVar13) {
      lVar13 = (longdouble)30.0;
    }
    if (lVar13 < (longdouble)15.0) {
      lVar13 = (longdouble)15.0;
    }
    local_110 = (float)lVar13;
    local_114 = 6.30584e-44;
    local_108 = 0x3f400000;
    local_10c = 0.25;
    if (*(int *)&this->field_0xa04 == 0xf) {
LAB_000867c4:
      local_100 = 2.66247e-44;
      goto LAB_00086912;
    }
    if (*(int *)&this->field_0xa04 == 0x13) {
LAB_000867dd:
      local_100 = 2.52234e-44;
    }
    else if (*(int *)&this->field_0xa04 == 0x12) {
LAB_00086829:
      local_100 = 2.10195e-44;
    }
    else {
      iVar8 = (*g_engfuncs.pfnRandomLong)(0,2);
      if (iVar8 == 1) goto LAB_000867dd;
      if (iVar8 < 2) {
        if (iVar8 == 0) goto LAB_000867c4;
      }
      else if (iVar8 == 2) goto LAB_00086829;
    }
LAB_00086912:
    local_124 = 10;
    goto LAB_000869a3;
  }
  if ((*(byte *)(**(int **)&this->field_0x80 + 0x1a5) & 2) == 0) {
    local_100 = 3.36312e-44;
    local_124 = 5;
    local_108 = 0x3f000000;
    local_10c = 0.15;
    local_110 = 25.0;
LAB_000862f9:
    local_10c = 0.15;
    *(undefined4 *)&this->field_0x9fc = 0;
  }
  else {
    if ((2 < *(int *)&this->field_0x9fc) ||
       (((*(byte *)(**(int **)&this->field_0x80 + 0x180) & 4) != 0 &&
        ((*(byte *)(**(int **)&this->field_0x80 + 0x1a5) & 0x40) == 0)))) {
      local_100 = 3.50325e-44;
      local_124 = 0xb;
      local_108 = 0x3f266666;
      local_10c = 0.15;
      local_110 = 30.0;
      goto LAB_000862f9;
    }
    if ((((*(byte *)(*(int *)&this->field_0x80 + 0x814) ^ 1) & 1) == 0) ||
       (2 < *(int *)&this->field_0x9fc)) {
      local_108 = 0x3eb33333;
      local_10c = 0.15;
      *(undefined4 *)&this->field_0x9fc = 0;
      local_100 = 3.22299e-44;
      local_124 = 4;
      local_110 = 20.0;
    }
    else {
      *(int *)&this->field_0x9fc = *(int *)&this->field_0x9fc + 1;
      local_100 = 3.08286e-44;
      local_124 = 3;
      local_108 = 0x3e800000;
      local_10c = 0.1;
      local_110 = 10.0;
    }
  }
  local_104 = 1;
  local_118 = 2;
  local_114 = 4.90454e-44;
LAB_000869a3:
  if (local_104 != 0) {
    if (local_11d != '\0') {
      uVar4 = *(uint *)(**(int **)&this->field_0x80 + 0x250);
      if ((uVar4 & 0x20000) != 0) {
        *(uint *)(**(int **)&this->field_0x80 + 0x250) = uVar4 & 0xfffdffff;
        puVar1 = (uint *)(**(int **)&this->field_0x80 + 0x250);
        *puVar1 = *puVar1 & 0xfffffffb;
        iVar8 = **(int **)&this->field_0x80;
        if ((*(byte *)(iVar8 + 0x1a5) & 0x40) == 0) {
          iVar8 = **(int **)&this->field_0x80;
          local_ac[0] = 0.0;
          local_ac[1] = 0.0;
          local_ac[2] = 28.0;
        }
        else {
          local_ac[0] = 0.0;
          local_ac[1] = 0.0;
          local_ac[2] = 16.0;
        }
        local_ac[1] = 0.0;
        pfVar10 = local_ac;
        pfVar11 = (float *)(iVar8 + 0x174);
        for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar11 = *pfVar10;
          pfVar10 = pfVar10 + 1;
          pfVar11 = pfVar11 + 1;
        }
        *(undefined4 *)(**(int **)&this->field_0x80 + 0x120) = 0x3f800000;
        *(undefined4 *)(**(int **)&this->field_0x80 + 0x11c) = 0x3f800000;
        local_ac[0] = local_ac[1];
      }
    }
    *(float *)&this->field_0xa04 = local_100;
    lVar13 = CBasePlayer::GetMeleeMultiplier(*(CBasePlayer **)&this->field_0x80);
    local_110 = (float)(lVar13 * (longdouble)local_110);
    uVar5 = KungFu(*(int *)&this->field_0x80);
    if (CONCAT31(extraout_var,uVar5) != 0) {
      local_110 = local_110 + local_110;
    }
    if (local_118 == 3) {
      pfVar10 = (float *)(**(int **)&this->field_0x80 + 0x74);
      pfVar11 = local_ac;
      for (iVar8 = 3; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar11 = *pfVar10;
        pfVar10 = pfVar10 + 1;
        pfVar11 = pfVar11 + 1;
      }
      local_ac[2] = 0.0;
    }
    else {
      pfVar10 = (float *)(**(int **)&this->field_0x80 + 0x74);
      pfVar11 = local_ac;
      for (iVar8 = 3; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar11 = *pfVar10;
        pfVar10 = pfVar10 + 1;
        pfVar11 = pfVar11 + 1;
      }
    }
    local_80 = SQRT(local_ac[2] * local_ac[2] +
                    local_ac[1] * local_ac[1] + local_ac[0] * local_ac[0]);
    if (local_80 == 0.0) {
      local_bc[2] = 1.0;
      local_bc[0] = 0.0;
      local_bc[1] = 0.0;
    }
    else {
      local_bc[2] = 1.0 / local_80;
      local_bc[0] = local_bc[2] * local_ac[0];
      local_bc[1] = local_bc[2] * local_ac[1];
      local_bc[2] = local_bc[2] * local_ac[2];
    }
    UTIL_MakeVectors(local_ac);
    (**(code **)(*(int *)(*(int *)&this->field_0x80 + 0x60) + 0x168))
              (local_bc,*(int *)&this->field_0x80);
    pfVar10 = local_bc;
    pfVar11 = local_30;
    for (iVar8 = 3; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar11 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar11 = pfVar11 + 1;
    }
    local_c0 = local_30[0];
    local_bc[0] = local_30[1];
    local_bc[1] = local_30[2];
    local_e8 = (float)local_118;
    local_f0 = local_e8 * gpGlobals->v_forward[0];
    local_ec = local_e8 * gpGlobals->v_forward[1];
    local_e8 = local_e8 * gpGlobals->v_forward[2];
    if (local_11c == 4.2039e-45) {
      local_d8 = -1.0;
    }
    else {
      local_d8 = 1.0;
    }
    local_e0 = local_d8 * local_f0;
    local_dc = local_d8 * local_ec;
    local_d8 = local_d8 * local_e8;
    local_d0 = local_30[0] + local_e0;
    local_cc = local_30[1] + local_dc;
    local_c8 = local_30[2] + local_d8;
    local_100 = gpGlobals->v_forward[0];
    local_fc = gpGlobals->v_forward[1];
    local_f8 = gpGlobals->v_forward[2];
    pCVar6 = CBasePlayer::CloseCombatAttack
                       (*(CBasePlayer **)&this->field_0x80,&local_c0,&local_d0,&local_100,
                        (uint)(local_11c != 4.2039e-45) * 2 + 1,local_114,local_104,'\x01','\0',
                        '\x01','\0');
    if ((pCVar6 == (CBasePlayer *)0x0) && (0.001 < local_110)) {
      *(float *)(*(int *)&this->field_0x80 + 0x79c) = local_110;
      if (local_11c == 4.2039e-45) {
        *(float *)(*(int *)&this->field_0x80 + 0x7a0) = -local_114;
      }
      else {
        *(float *)(*(int *)&this->field_0x80 + 0x7a0) = local_114;
      }
      *(undefined1 *)(*(int *)&this->field_0x80 + 0x7a4) = 0;
    }
    if ((local_129 != '\0') && (((*(byte *)(**(int **)&this->field_0x80 + 0x250) ^ 1) & 1) != 0)) {
      CBasePlayer::BlockPlayer(*(CBasePlayer **)&this->field_0x80,local_10c * 0.75);
    }
    (*g_engfuncs.pfnPlaybackEvent)
              (1,*(edict_t **)(**(int **)&this->field_0x80 + 0x208),*(ushort *)&this->field_0x96c,
               0.0,(float *)&g_vecZero,(float *)&g_vecZero,0.0,0.0,local_108,local_128,0,0);
    puVar9 = &uStack_130;
  }
  *(undefined4 *)((int)puVar9 + -4) = 0x86dde;
  lVar13 = UTIL_WeaponTimeBase();
  fVar2 = *(float *)((int)puVar9 + 0x24);
  *(float *)&this->field_0xa0 = (float)(lVar13 + (longdouble)fVar2);
  *(float *)&this->field_0x9c = (float)(lVar13 + (longdouble)fVar2);
  *(undefined4 *)((int)puVar9 + -4) = 0x86df3;
  lVar13 = UTIL_WeaponTimeBase();
  *(float *)&this->field_0xa8 = (float)(lVar13 + (longdouble)2.0);
  *(undefined4 *)(*(int *)&this->field_0x80 + 0x7a8) = 0;
  *(undefined4 *)(*(int *)&this->field_0x80 + 0x4f8) = *(undefined4 *)((int)puVar9 + 0x24);
  return;
}

/* 00087264  CTSGun::iItemSlot  (6 bytes)
 * undefined4 iItemSlot(void)
 */
/* CTSGun::iItemSlot(void) */

undefined4 CTSGun::iItemSlot(void)

{
  return 2;
}

/* 0008726c  CTSGun::UseDecrement  (6 bytes)
 * undefined4 UseDecrement(void)
 */
/* CTSGun::UseDecrement(void) */

undefined4 CTSGun::UseDecrement(void)

{
  return 1;
}

/* 00087274  CTSGun::ShouldWeaponIdle  (6 bytes)
 * undefined4 ShouldWeaponIdle(void)
 */
/* CTSGun::ShouldWeaponIdle(void) */

undefined4 CTSGun::ShouldWeaponIdle(void)

{
  return 1;
}

