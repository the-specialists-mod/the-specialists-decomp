/* mp.dll - CBasePlayerWeapon (25 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100207a0  CBasePlayerWeapon::AddWeapon  (15 bytes)
 * undefined AddWeapon()
 */
undefined4 __fastcall CBasePlayerWeapon::AddWeapon(int *param_1)

{
  (**(code **)(*param_1 + 0x13c))(param_1);
  return 1;
}

/* 100207b0  CBasePlayerWeapon::UpdateItemInfo  (1 bytes)
 * undefined UpdateItemInfo()
 */
void CBasePlayerWeapon::UpdateItemInfo(void)

{
  return;
}

/* 100207c0  CBasePlayerWeapon::AlternateAttack  (1 bytes)
 * undefined AlternateAttack()
 */
void CBasePlayerWeapon::AlternateAttack(void)

{
  return;
}

/* 100207d0  CBasePlayerWeapon::Reload  (1 bytes)
 * undefined Reload()
 */
void CBasePlayerWeapon::Reload(void)

{
  return;
}

/* 100207e0  CBasePlayerWeapon::WeaponIdle  (1 bytes)
 * undefined WeaponIdle()
 */
void CBasePlayerWeapon::WeaponIdle(void)

{
  return;
}

/* 100207f0  CBasePlayerWeapon::ShouldWeaponIdle  (3 bytes)
 * undefined ShouldWeaponIdle()
 */
undefined4 CBasePlayerWeapon::ShouldWeaponIdle(void)

{
  return 0;
}

/* 10020800  CBasePlayerWeapon::UseDecrement  (3 bytes)
 * undefined UseDecrement()
 */
undefined4 CBasePlayerWeapon::UseDecrement(void)

{
  return 0;
}

/* 10020810  CBasePlayerWeapon::GetWeaponPtr  (3 bytes)
 * undefined GetWeaponPtr()
 */
undefined4 __fastcall CBasePlayerWeapon::GetWeaponPtr(undefined4 param_1)

{
  return param_1;
}

/* 10064b10  CBasePlayerWeapon::SendWeaponAnim  (116 bytes)
 * undefined SendWeaponAnim(undefined4 param_1, int param_2)
 */
void __thiscall CBasePlayerWeapon::SendWeaponAnim(CBasePlayerWeapon *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uStack00000010;
  
  *(int *)(*(int *)(*(int *)(this + 0x70) + 4) + 0x218) = param_1;
  if ((param_2 != 0) &&
     (iVar1 = (*g_engfuncs.pfnCanSkipPlayer)
                        (*(edict_t **)(*(int *)(*(int *)(this + 0x70) + 4) + 0x208)), iVar1 != 0)) {
    return;
  }
  (*g_engfuncs.pfnMessageBegin)
            (1,0x23,(float *)0x0,*(edict_t **)(*(int *)(*(int *)(this + 0x70) + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(param_1);
  (*g_engfuncs.pfnWriteByte)(*(int *)(*(int *)(this + 4) + 0x114));
  uStack00000010 = 0x10064b7f;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10064b90  CBasePlayerWeapon::CanDeploy  (6 bytes)
 * undefined CanDeploy()
 */
undefined4 CBasePlayerWeapon::CanDeploy(void)

{
  return 1;
}

/* 10064ce0  CBasePlayerWeapon::ItemPostFrame  (843 bytes)
 * undefined ItemPostFrame(int * param_1)
 */
void __fastcall CBasePlayerWeapon::ItemPostFrame(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  if (param_1[0x1e] != 0x10) {
    DAT_102df078 = param_1;
    return;
  }
  DAT_102df078 = param_1;
  if (param_1[0x2f] == 0) {
    if ((*(uint *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 0x800) != 0) {
      iVar2 = (**(code **)(*param_1 + 0x174))();
      iVar2 = FUN_1006ad70((float)param_1[0x24],gpGlobals->time,iVar2);
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x15c))();
        goto LAB_10064da1;
      }
    }
    if ((*(byte *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 1) != 0) {
      iVar2 = (**(code **)(*param_1 + 0x174))();
      iVar2 = FUN_1006ad70((float)param_1[0x23],gpGlobals->time,iVar2);
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x158))();
        goto LAB_10064da1;
      }
    }
    if ((*(uint *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 0x2000) != 0) {
      (**(code **)(*param_1 + 0x164))();
    }
LAB_10064da1:
                    /* WARNING: Could not recover jumptable at 0x10064da6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x168))();
    return;
  }
  if ((*(int *)(param_1[0x2f] + 0xc) != 0) &&
     (iVar2 = param_1[0x1c], fVar5 = FUN_10066590(), (float10)*(float *)(iVar2 + 0x118) <= fVar5)) {
    iVar2 = *(int *)(DAT_102df078[0x2f] + 4);
    iVar3 = *(int *)(DAT_102df078[0x30] + 4) - iVar2;
    iVar4 = DAT_102df078[*(byte *)(DAT_102df078[0x30] + 8) + 0x31];
    if (iVar3 < DAT_102df078[*(byte *)(DAT_102df078[0x30] + 8) + 0x31]) {
      iVar4 = iVar3;
    }
    *(int *)(DAT_102df078[0x2f] + 4) = iVar2 + iVar4;
    *(int *)(DAT_102df078[0x2f] + 0x1c) = *(int *)(DAT_102df078[0x2f] + 4) / 2;
    iVar2 = DAT_102df078[0x2f];
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 4) - *(int *)(iVar2 + 0x1c);
    iVar2 = DAT_102df078[0x30];
    if (*(char *)(iVar2 + 0x360) == '\x04') {
      DAT_102df078[*(short *)(iVar2 + 200) * 0xc + 0x42] = *(int *)(DAT_102df078[0x2f] + 0x1c);
    }
    else if (*(short *)(iVar2 + 0xc6) != -1) {
      DAT_102df078[*(short *)(iVar2 + 0xc6) * 0xc + 0x42] =
           DAT_102df078[*(short *)(iVar2 + 0xc6) * 0xc + 0x42] + iVar4;
      DAT_102df078[(*(short *)(DAT_102df078[0x30] + 0xc6) + 6) * 0xc] =
           *(int *)(DAT_102df078[0x2f] + 4);
    }
    param_1[0x29] = *(int *)(DAT_102df078[0x2f] + 4);
    DAT_102df078[*(byte *)(DAT_102df078[0x30] + 8) + 0x31] =
         DAT_102df078[*(byte *)(DAT_102df078[0x30] + 8) + 0x31] - iVar4;
    *(undefined4 *)(DAT_102df078[0x2f] + 0xc) = 0;
  }
  if ((*(uint *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 0x800) != 0) {
    iVar2 = (**(code **)(*param_1 + 0x174))();
    iVar2 = FUN_1006ad70((float)param_1[0x24],gpGlobals->time,iVar2);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x15c))();
      goto LAB_10064f3d;
    }
  }
  if ((*(byte *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 1) != 0) {
    iVar2 = (**(code **)(*param_1 + 0x174))();
    iVar2 = FUN_1006ad70((float)param_1[0x23],gpGlobals->time,iVar2);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x158))();
      goto LAB_10064f3d;
    }
  }
  if ((*(byte *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 0x40) != 0) {
    iVar2 = (**(code **)(*param_1 + 0x174))();
    iVar2 = FUN_1006ad70((float)param_1[0x25],gpGlobals->time,iVar2);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x160))();
      goto LAB_10064f3d;
    }
  }
  uVar1 = *(uint *)(*(int *)(param_1[0x1c] + 4) + 0x180);
  if (((uVar1 & 0x2000) == 0) || (*(int *)(DAT_102df078[0x2f] + 0xc) != 0)) {
    if ((uVar1 & 0x801) == 0) {
                    /* WARNING: Could not recover jumptable at 0x10065023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x168))();
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x164))();
  }
LAB_10064f3d:
  iVar2 = (**(code **)(*param_1 + 0x170))();
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10064f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))();
  return;
}

/* 1006a900  CBasePlayerWeapon::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CBasePlayerWeapon::Save(CBasePlayerItem *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBasePlayerItem::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CBasePlayerWeapon_1009af98,(int)param_1,0x1009ac98,7
                    );
  return;
}

/* 1006a930  CBasePlayerWeapon::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CBasePlayerWeapon::Restore(CBasePlayerItem *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBasePlayerItem::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CBasePlayerWeapon_1009af98,(int)param_1,0x1009ac98,7);
  return;
}

/* 1006aed0  CBasePlayerWeapon::AddDuplicate  (24 bytes)
 * undefined AddDuplicate()
 */
void __fastcall CBasePlayerWeapon::AddDuplicate(int *param_1)

{
  if (param_1[0x2d] != 0) {
                    /* WARNING: Could not recover jumptable at 0x1006aedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x13c))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1006aee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}

/* 1006aef0  CBasePlayerWeapon::AddToPlayer  (138 bytes)
 * undefined AddToPlayer()
 */
undefined4 __thiscall CBasePlayerWeapon::AddToPlayer(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_EDX;
  
  iVar1 = FUN_1006adc0(param_1,param_2);
  *(uint *)(*(int *)(extraout_EDX + 4) + 0x168) =
       *(uint *)(*(int *)(extraout_EDX + 4) + 0x168) | 1 << ((byte)param_1[0x1e] & 0x1f);
  if (param_1[0x27] == 0) {
    iVar2 = FUN_1002d8f0((void *)(param_1[0x1e] * 5),
                         (byte_conflict *)(&DAT_102dfb70)[param_1[0x1e] * 0xb]);
    param_1[0x27] = iVar2;
    iVar2 = FUN_1002d8f0((void *)(param_1[0x1e] * 5),
                         (byte_conflict *)(&DAT_102dfb78)[param_1[0x1e] * 0xb]);
    param_1[0x28] = iVar2;
  }
  if (iVar1 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x144))();
    return uVar3;
  }
  return 0;
}

/* 1006af80  CBasePlayerWeapon::UpdateClientData  (242 bytes)
 * undefined4 UpdateClientData(int param_1)
 */
undefined4 __thiscall CBasePlayerWeapon::UpdateClientData(CBasePlayerWeapon *this,int param_1)

{
  CBasePlayerWeapon *pCVar1;
  int iValue;
  bool bVar2;
  
  pCVar1 = *(CBasePlayerWeapon **)(param_1 + 0x968);
  iValue = 0;
  if (pCVar1 == this) {
    iValue = (-(uint)(*(int *)(param_1 + 0xa84) != 0) & 0x3f) + 1;
  }
  bVar2 = *(int *)(param_1 + 0x918) == 0;
  if (((this == pCVar1) || (this == *(CBasePlayerWeapon **)(param_1 + 0x96c))) &&
     (pCVar1 != *(CBasePlayerWeapon **)(param_1 + 0x96c))) {
    bVar2 = true;
  }
  if (((*(int *)(this + 0xa4) != *(int *)(this + 0xa8)) || (iValue != *(int *)(this + 0xac))) ||
     ((*(int *)(param_1 + 0x948) != *(int *)(param_1 + 0x94c) || (bVar2)))) {
    (*g_engfuncs.pfnMessageBegin)
              (1,DAT_100cbbcc,(float *)0x0,*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
    (*g_engfuncs.pfnWriteByte)(iValue);
    (*g_engfuncs.pfnWriteByte)(*(int *)(this + 0x78));
    (*g_engfuncs.pfnWriteByte)(*(int *)(this + 0xa4));
    (*g_engfuncs.pfnMessageEnd)();
    *(int *)(this + 0xac) = iValue;
    *(undefined4 *)(this + 0xa8) = *(undefined4 *)(this + 0xa4);
    *(undefined4 *)(param_1 + 0x918) = 1;
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 0x130))(param_1);
  }
  return 1;
}

/* 1006b190  CBasePlayerWeapon::IsUseable  (65 bytes)
 * undefined4 IsUseable(int * param_1)
 */
undefined4 __fastcall CBasePlayerWeapon::IsUseable(int *param_1)

{
  int iVar1;
  
  if (param_1[0x29] < 1) {
    iVar1 = (**(code **)(*param_1 + 0x128))();
    if ((*(int *)(param_1[0x1c] + 0x978 + iVar1 * 4) < 1) &&
       (*(int *)(&DAT_102dfb74 + param_1[0x1e] * 0x2c) != -1)) {
      return 0;
    }
  }
  return 1;
}

/* 1006b280  CBasePlayerWeapon::PlayEmptySound  (63 bytes)
 * undefined4 PlayEmptySound(int param_1)
 */
undefined4 __fastcall CBasePlayerWeapon::PlayEmptySound(int param_1)

{
  void *this;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    this = *(void **)(*(int *)(param_1 + 0x70) + 4);
    EMIT_SOUND_DYN(this,*(undefined4 *)((int)this + 0x208),1,s_weapons_357_cock1_wav_1009afcc,
                   0x3f4ccccd,0x3f4ccccd,0,100);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return 0;
}

/* 1006b2c0  CBasePlayerWeapon::ResetEmptySound  (8 bytes)
 * undefined ResetEmptySound()
 */
void __fastcall CBasePlayerWeapon::ResetEmptySound(int param_1)

{
  *(undefined4 *)(param_1 + 0x7c) = 1;
  return;
}

/* 1006b2d0  CBasePlayerWeapon::PrimaryAmmoIndex  (7 bytes)
 * undefined PrimaryAmmoIndex()
 */
undefined4 __fastcall CBasePlayerWeapon::PrimaryAmmoIndex(int param_1)

{
  return *(undefined4 *)(param_1 + 0x9c);
}

/* 1006b2e0  CBasePlayerWeapon::SecondaryAmmoIndex  (4 bytes)
 * undefined SecondaryAmmoIndex()
 */
undefined4 CBasePlayerWeapon::SecondaryAmmoIndex(void)

{
  return 0xffffffff;
}

/* 1006b520  CBasePlayerWeapon::ExtractAmmo  (119 bytes)
 * void * ExtractAmmo(void * param_1)
 */
void * __thiscall CBasePlayerWeapon::ExtractAmmo(CBasePlayerWeapon *this,void *param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  void *pvVar3;
  undefined3 extraout_var_00;
  
  iVar2 = *(int *)(this + 0x78) * 0x2c;
  pvVar3 = param_1;
  if ((&DAT_102dfb70)[*(int *)(this + 0x78) * 0xb] != 0) {
    bVar1 = FUN_1006b080(param_1,*(int *)(this + 0xb4),(&DAT_102dfb70)[*(int *)(this + 0x78) * 0xb],
                         *(int *)(&DAT_102dfb84 + iVar2),*(undefined4 *)(&DAT_102dfb74 + iVar2));
    *(undefined4 *)(this + 0xb4) = 0;
    pvVar3 = (void *)CONCAT31(extraout_var,bVar1);
  }
  if ((&DAT_102dfb78)[*(int *)(this + 0x78) * 0xb] != 0) {
    bVar1 = FUN_1006b130(param_1,0,(&DAT_102dfb78)[*(int *)(this + 0x78) * 0xb],
                         *(undefined4 *)(&DAT_102dfb7c + *(int *)(this + 0x78) * 0x2c));
    pvVar3 = (void *)CONCAT31(extraout_var_00,bVar1);
  }
  return pvVar3;
}

/* 1006b5a0  CBasePlayerWeapon::ExtractClipAmmo  (61 bytes)
 * undefined ExtractClipAmmo()
 */
void __thiscall CBasePlayerWeapon::ExtractClipAmmo(int param_1,int param_2)

{
  (**(code **)(**(int **)(param_2 + 0x70) + 0x6c))
            (-(uint)(*(uint *)(param_1 + 0xa4) != 0xffffffff) & *(uint *)(param_1 + 0xa4),
             (&DAT_102dfb70)[*(int *)(param_1 + 0x78) * 0xb],
             *(undefined4 *)(&DAT_102dfb74 + *(int *)(param_1 + 0x78) * 0x2c));
  return;
}

/* 1006b5e0  CBasePlayerWeapon::RetireWeapon  (45 bytes)
 * undefined RetireWeapon()
 */
void __fastcall CBasePlayerWeapon::RetireWeapon(int param_1)

{
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0xbc) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0xc0) = 0;
  (**(code **)(*DAT_1009f494 + 0x14))(*(undefined4 *)(param_1 + 0x70),param_1);
  return;
}

/* 1006bc20  CBasePlayerWeapon::PrintState  (98 bytes)
 * undefined PrintState(int param_1)
 */
void __fastcall CBasePlayerWeapon::PrintState(int param_1)

{
  (*g_engfuncs.pfnAlertMessage)
            (at_console,s_primary___f_1009b0a0,(double)*(float *)(param_1 + 0x8c));
  (*g_engfuncs.pfnAlertMessage)(at_console,s_idle____f_1009b090,(double)*(float *)(param_1 + 0x98));
  (*g_engfuncs.pfnAlertMessage)(at_console,s_m_finre___i_1009b080,*(undefined4 *)(param_1 + 0xb0));
  (*g_engfuncs.pfnAlertMessage)(at_console,s_m_iclip___i_1009b070,*(undefined4 *)(param_1 + 0xa4));
  return;
}

