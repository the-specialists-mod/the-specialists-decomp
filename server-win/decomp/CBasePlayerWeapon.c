/* mp.dll - CBasePlayerWeapon (18 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10027e20  CBasePlayerWeapon::AddWeapon  (15 bytes)
 * undefined AddWeapon()
 */
undefined4 __fastcall CBasePlayerWeapon::AddWeapon(int *param_1)

{
  (**(code **)(*param_1 + 0x158))(param_1);
  return 1;
}

/* 10027e30  CBasePlayerWeapon::GetWeaponPtr  (3 bytes)
 * undefined GetWeaponPtr()
 */
undefined4 __fastcall CBasePlayerWeapon::GetWeaponPtr(undefined4 param_1)

{
  return param_1;
}

/* 10073b90  CBasePlayerWeapon::SendWeaponAnim  (116 bytes)
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
  uStack00000010 = 0x10073bff;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10073c10  CBasePlayerWeapon::DefaultDeploy  (505 bytes)
 * undefined4 DefaultDeploy(int param_1, int param_2, undefined4 param_3, char * param_4, undefined4 param_5, undefined4 param_6)
 * called by: CTSGun::Deploy
 */
undefined4 __thiscall
CBasePlayerWeapon::DefaultDeploy
          (CBasePlayerWeapon *this,int param_1,int param_2,undefined4 param_3,char *param_4,
          undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *this_00;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar3 = (**(code **)(*(int *)this + 0x11c))();
  if (iVar3 == 0) {
    return 0;
  }
  *(int *)(*(int *)(*(int *)(this + 0x70) + 4) + 0xbc) = param_1 - (int)gpGlobals->pStringBase;
  *(int *)(*(int *)(*(int *)(this + 0x70) + 4) + 0xc0) = param_2 - (int)gpGlobals->pStringBase;
  uVar4 = 0xffffffff;
  do {
    pcVar6 = param_4;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_4 + 1;
    cVar1 = *param_4;
    param_4 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = (char *)(*(int *)(this + 0x70) + 0xb44);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_100a9398;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)(*(int *)(this + 0x70) + 0x464);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  if (*(int *)(this + 0x78) == 0x10) {
    switch(*(undefined4 *)(this + 0xb8)) {
    case 0x19:
    case 0x23:
      pcVar7 = s_knife_idle_100a62cc;
      pcVar6 = (char *)(*(int *)(this + 0x70) + 0x464);
      break;
    default:
      goto switchD_10073cd2_caseD_1a;
    case 0x1d:
      pcVar7 = s_briefcase_idle_100a62bc;
      pcVar6 = (char *)(*(int *)(this + 0x70) + 0x464);
      break;
    case 0x22:
      pcVar7 = s_katana_idle_100a62d8;
      pcVar6 = (char *)(*(int *)(this + 0x70) + 0x464);
    }
    uVar4 = 0xffffffff;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar8 + -uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
switchD_10073cd2_caseD_1a:
  (**(code **)(*(int *)this + 0x16c))(param_3,param_5,param_6);
  iVar3 = *(int *)(this + 0x70);
  if (*(float *)(iVar3 + 0x708) <= gpGlobals->time) {
    fVar9 = FUN_10076120();
    *(float *)(*(int *)(this + 0x70) + 0x118) = (float)(fVar9 + (float10)0.5);
  }
  else {
    fVar9 = FUN_10076120();
    *(float *)(iVar3 + 0x118) =
         (float)(((float10)*(float *)(iVar3 + 0x708) - (float10)gpGlobals->time) + fVar9);
  }
  if (*(int *)(this + 0xb8) == 0x24) {
    fVar9 = FUN_10076120();
    fVar9 = fVar9 + (float10)0.75;
  }
  else {
    fVar9 = FUN_10076120();
    fVar9 = fVar9 + (float10)3.0;
  }
  *(float *)(this + 0x98) = (float)fVar9;
  uVar2 = *(undefined4 *)(*(int *)(*(int *)(this + 0x70) + 4) + 0x208);
  (*g_engfuncs.pfnRandomLong)(0,3);
  uVar11 = 0;
  uVar10 = 0x3fa00000;
  fVar9 = (float10)(*g_engfuncs.pfnRandomFloat)(0.92,1.0);
  EMIT_SOUND_DYN(this_00,uVar2,2,s_weapons_draw_wav_100a5fd4,(float)fVar9,uVar10,uVar11);
  return 1;
}

/* 10073e30  CBasePlayerWeapon::ItemPostFrame  (896 bytes)
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
    DAT_102ee340 = param_1;
    return;
  }
  DAT_102ee340 = param_1;
  if (param_1[0x2f] == 0) {
    if ((*(uint *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 0x800) != 0) {
      iVar2 = (**(code **)(*param_1 + 400))();
      iVar2 = FUN_1007a0d0((float)param_1[0x24],gpGlobals->time,iVar2);
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x178))();
        (**(code **)(*param_1 + 0x184))();
        return;
      }
    }
    if ((*(byte *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 1) != 0) {
      iVar2 = (**(code **)(*param_1 + 400))();
      iVar2 = FUN_1007a0d0((float)param_1[0x23],gpGlobals->time,iVar2);
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x174))();
        (**(code **)(*param_1 + 0x184))();
        return;
      }
    }
    if ((*(uint *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 0x2000) != 0) {
      (**(code **)(*param_1 + 0x180))();
    }
    (**(code **)(*param_1 + 0x184))();
    return;
  }
  if ((*(int *)(param_1[0x2f] + 0xc) != 0) &&
     (iVar2 = param_1[0x1c], fVar5 = FUN_10076120(), (float10)*(float *)(iVar2 + 0x118) <= fVar5)) {
    iVar2 = *(int *)(DAT_102ee340[0x2f] + 4);
    iVar3 = *(int *)(DAT_102ee340[0x30] + 4) - iVar2;
    iVar4 = DAT_102ee340[*(byte *)(DAT_102ee340[0x30] + 8) + 0x31];
    if (iVar3 < DAT_102ee340[*(byte *)(DAT_102ee340[0x30] + 8) + 0x31]) {
      iVar4 = iVar3;
    }
    *(int *)(DAT_102ee340[0x2f] + 4) = iVar2 + iVar4;
    *(int *)(DAT_102ee340[0x2f] + 0x1c) = *(int *)(DAT_102ee340[0x2f] + 4) / 2;
    iVar2 = DAT_102ee340[0x2f];
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 4) - *(int *)(iVar2 + 0x1c);
    iVar2 = DAT_102ee340[0x30];
    if (*(char *)(iVar2 + 0x348) == '\x04') {
      DAT_102ee340[*(int *)(iVar2 + 0xcc) * 0xe + 0x42] = *(int *)(DAT_102ee340[0x2f] + 0x1c);
    }
    else {
      iVar2 = *(int *)(iVar2 + 200);
      if (iVar2 != -1) {
        DAT_102ee340[iVar2 * 0xe + 0x42] = DAT_102ee340[iVar2 * 0xe + 0x42] + iVar4;
        DAT_102ee340[*(int *)(DAT_102ee340[0x30] + 200) * 0xe + 0x48] =
             *(int *)(DAT_102ee340[0x2f] + 4);
      }
    }
    param_1[0x29] = *(int *)(DAT_102ee340[0x2f] + 4);
    DAT_102ee340[*(byte *)(DAT_102ee340[0x30] + 8) + 0x31] =
         DAT_102ee340[*(byte *)(DAT_102ee340[0x30] + 8) + 0x31] - iVar4;
    *(undefined4 *)(DAT_102ee340[0x2f] + 0xc) = 0;
  }
  if ((*(uint *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 0x800) == 0) {
LAB_100740b0:
    if ((*(byte *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 1) != 0) {
      iVar2 = (**(code **)(*param_1 + 400))();
      iVar2 = FUN_1007a0d0((float)param_1[0x23],gpGlobals->time,iVar2);
      if ((iVar2 != 0) && ((DAT_102ee340[0x2e] != 0x24 || (*(int *)(DAT_102ee340[0x2f] + 4) != 0))))
      {
        (**(code **)(*param_1 + 0x174))();
        goto LAB_10074194;
      }
    }
    if ((*(byte *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 0x40) != 0) {
      iVar2 = (**(code **)(*param_1 + 400))();
      iVar2 = FUN_1007a0d0((float)param_1[0x25],gpGlobals->time,iVar2);
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x17c))();
        goto LAB_10074194;
      }
    }
    uVar1 = *(uint *)(*(int *)(param_1[0x1c] + 4) + 0x180);
    if ((((uVar1 & 0x2000) == 0) || (*(int *)(DAT_102ee340[0x2f] + 0xc) != 0)) ||
       (DAT_102ee340[0x2e] == 0x24)) {
      if ((uVar1 & 0x801) == 0) goto LAB_100741a2;
    }
    else {
      (**(code **)(*param_1 + 0x180))();
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 400))();
    iVar2 = FUN_1007a0d0((float)param_1[0x24],gpGlobals->time,iVar2);
    if (iVar2 == 0) goto LAB_100740b0;
    (**(code **)(*param_1 + 0x178))();
  }
LAB_10074194:
  iVar2 = (**(code **)(*param_1 + 0x18c))();
  if (iVar2 == 0) {
    return;
  }
LAB_100741a2:
  (**(code **)(*param_1 + 0x184))();
  return;
}

/* 10079c20  CBasePlayerWeapon::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CBasePlayerWeapon::Save(CBasePlayerItem *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBasePlayerItem::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CBasePlayerWeapon_100a7728,(int)param_1,0x100a7418,7
                    );
  return;
}

/* 10079c50  CBasePlayerWeapon::Restore  (48 bytes)
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
            (param_2,(byte_conflict *)s_CBasePlayerWeapon_100a7728,(int)param_1,&DAT_100a7418,7);
  return;
}

/* 1007a1f0  CBasePlayerWeapon::AddDuplicate  (35 bytes)
 * undefined AddDuplicate()
 */
void __thiscall CBasePlayerWeapon::AddDuplicate(int *param_1,undefined4 param_2)

{
  if (param_1[0x2d] != 0) {
    (**(code **)(*param_1 + 0x158))();
    return;
  }
  (**(code **)(*param_1 + 0x15c))(param_2);
  return;
}

/* 1007a220  CBasePlayerWeapon::AddToPlayer  (141 bytes)
 * undefined4 AddToPlayer(int param_1)
 */
undefined4 __thiscall CBasePlayerWeapon::AddToPlayer(CBasePlayerWeapon *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_1007a130(this,param_1);
  *(uint *)(*(int *)(param_1 + 4) + 0x168) =
       *(uint *)(*(int *)(param_1 + 4) + 0x168) | 1 << ((byte)*(undefined4 *)(this + 0x78) & 0x1f);
  if (*(int *)(this + 0x9c) == 0) {
    iVar2 = FUN_100357d0((void *)(*(int *)(this + 0x78) * 5),
                         (byte_conflict *)(&DAT_102eee28)[*(int *)(this + 0x78) * 0xb]);
    *(int *)(this + 0x9c) = iVar2;
    iVar2 = FUN_100357d0((void *)(*(int *)(this + 0x78) * 5),
                         (byte_conflict *)(&DAT_102eee30)[*(int *)(this + 0x78) * 0xb]);
    *(int *)(this + 0xa0) = iVar2;
  }
  if (iVar1 != 0) {
    uVar3 = (**(code **)(*(int *)this + 0x160))();
    return uVar3;
  }
  return 0;
}

/* 1007a2b0  CBasePlayerWeapon::UpdateClientData  (242 bytes)
 * undefined4 UpdateClientData(int param_1)
 */
undefined4 __thiscall CBasePlayerWeapon::UpdateClientData(CBasePlayerWeapon *this,int param_1)

{
  CBasePlayerWeapon *pCVar1;
  int iValue;
  bool bVar2;
  
  pCVar1 = *(CBasePlayerWeapon **)(param_1 + 0x9fc);
  iValue = 0;
  if (pCVar1 == this) {
    iValue = (-(uint)(*(int *)(param_1 + 0xb18) != 0) & 0x3f) + 1;
  }
  bVar2 = *(int *)(param_1 + 0x9ac) == 0;
  if (((this == pCVar1) || (this == *(CBasePlayerWeapon **)(param_1 + 0xa00))) &&
     (pCVar1 != *(CBasePlayerWeapon **)(param_1 + 0xa00))) {
    bVar2 = true;
  }
  if (((*(int *)(this + 0xa4) != *(int *)(this + 0xa8)) || (iValue != *(int *)(this + 0xac))) ||
     ((*(int *)(param_1 + 0x9dc) != *(int *)(param_1 + 0x9e0) || (bVar2)))) {
    (*g_engfuncs.pfnMessageBegin)
              (1,DAT_100d96f0,(float *)0x0,*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
    (*g_engfuncs.pfnWriteByte)(iValue);
    (*g_engfuncs.pfnWriteByte)(*(int *)(this + 0x78));
    (*g_engfuncs.pfnWriteByte)(*(int *)(this + 0xa4));
    (*g_engfuncs.pfnMessageEnd)();
    *(int *)(this + 0xac) = iValue;
    *(undefined4 *)(this + 0xa8) = *(undefined4 *)(this + 0xa4);
    *(undefined4 *)(param_1 + 0x9ac) = 1;
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 0x14c))(param_1);
  }
  return 1;
}

/* 1007a4e0  CBasePlayerWeapon::IsUseable  (65 bytes)
 * undefined4 IsUseable(int * param_1)
 */
undefined4 __fastcall CBasePlayerWeapon::IsUseable(int *param_1)

{
  int iVar1;
  
  if (param_1[0x29] < 1) {
    iVar1 = (**(code **)(*param_1 + 0x144))();
    if ((*(int *)(param_1[0x1c] + 0xa0c + iVar1 * 4) < 1) &&
       (*(int *)(&DAT_102eee2c + param_1[0x1e] * 0x2c) != -1)) {
      return 0;
    }
  }
  return 1;
}

/* 1007a530  CBasePlayerWeapon::PlayEmptySound  (68 bytes)
 * undefined4 PlayEmptySound(int param_1)
 */
undefined4 __fastcall CBasePlayerWeapon::PlayEmptySound(int param_1)

{
  void *this;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    this = *(void **)(*(int *)(param_1 + 0x70) + 4);
    EMIT_SOUND_DYN(this,*(undefined4 *)((int)this + 0x208),1,s_weapons_357_cock1_wav_100a775c,
                   0x3f4ccccd,0x3f4ccccd,0);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return 0;
}

/* 1007a580  CBasePlayerWeapon::ResetEmptySound  (8 bytes)
 * undefined ResetEmptySound()
 */
void __fastcall CBasePlayerWeapon::ResetEmptySound(int param_1)

{
  *(undefined4 *)(param_1 + 0x7c) = 1;
  return;
}

/* 1007a590  CBasePlayerWeapon::PrimaryAmmoIndex  (7 bytes)
 * undefined PrimaryAmmoIndex()
 */
undefined4 __fastcall CBasePlayerWeapon::PrimaryAmmoIndex(int param_1)

{
  return *(undefined4 *)(param_1 + 0x9c);
}

/* 1007a5a0  CBasePlayerWeapon::SecondaryAmmoIndex  (4 bytes)
 * undefined SecondaryAmmoIndex()
 */
undefined4 CBasePlayerWeapon::SecondaryAmmoIndex(void)

{
  return 0xffffffff;
}

/* 1007a6c0  CBasePlayerWeapon::ExtractAmmo  (119 bytes)
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
  if ((&DAT_102eee28)[*(int *)(this + 0x78) * 0xb] != 0) {
    bVar1 = FUN_1007a3b0(param_1,*(int *)(this + 0xb4),(&DAT_102eee28)[*(int *)(this + 0x78) * 0xb],
                         *(int *)(&DAT_102eee3c + iVar2),*(undefined4 *)(&DAT_102eee2c + iVar2));
    *(undefined4 *)(this + 0xb4) = 0;
    pvVar3 = (void *)CONCAT31(extraout_var,bVar1);
  }
  if ((&DAT_102eee30)[*(int *)(this + 0x78) * 0xb] != 0) {
    bVar1 = FUN_1007a470(param_1,0,(&DAT_102eee30)[*(int *)(this + 0x78) * 0xb],
                         *(undefined4 *)(&DAT_102eee34 + *(int *)(this + 0x78) * 0x2c));
    pvVar3 = (void *)CONCAT31(extraout_var_00,bVar1);
  }
  return pvVar3;
}

/* 1007a740  CBasePlayerWeapon::ExtractClipAmmo  (64 bytes)
 * undefined ExtractClipAmmo()
 */
void __thiscall CBasePlayerWeapon::ExtractClipAmmo(int param_1,int param_2)

{
  (**(code **)(**(int **)(param_2 + 0x70) + 0x84))
            (-(uint)(*(uint *)(param_1 + 0xa4) != 0xffffffff) & *(uint *)(param_1 + 0xa4),
             (&DAT_102eee28)[*(int *)(param_1 + 0x78) * 0xb],
             *(undefined4 *)(&DAT_102eee2c + *(int *)(param_1 + 0x78) * 0x2c));
  return;
}

/* 1007a780  CBasePlayerWeapon::RetireWeapon  (45 bytes)
 * undefined RetireWeapon()
 */
void __fastcall CBasePlayerWeapon::RetireWeapon(int param_1)

{
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0xbc) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0xc0) = 0;
  (**(code **)(*g_pGameRules + 0x10))(*(undefined4 *)(param_1 + 0x70),param_1);
  return;
}

