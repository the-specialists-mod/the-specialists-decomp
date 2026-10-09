/* ts_i386.so - CBasePlayerWeapon (32 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a00d0  CBasePlayerWeapon::SendWeaponAnim  (160 bytes)
 * undefined SendWeaponAnim(int * param_1, undefined4 param_2, int param_3)
 */
/* CBasePlayerWeapon::SendWeaponAnim(int, int, int) */

void CBasePlayerWeapon::SendWeaponAnim(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  *(int *)(*(int *)param_1[0x20] + 0x218) = param_2;
  if ((param_3 != 0) &&
     (iVar1 = (*g_engfuncs.pfnCanSkipPlayer)(*(edict_t **)(*(int *)param_1[0x20] + 0x208)),
     iVar1 != 0)) {
    return;
  }
  (*g_engfuncs.pfnMessageBegin)(1,0x23,(float *)0x0,*(edict_t **)(*(int *)param_1[0x20] + 0x208));
  (*g_engfuncs.pfnWriteByte)(param_2);
  (*g_engfuncs.pfnWriteByte)(*(int *)(*param_1 + 0x114));
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000a0170  CBasePlayerWeapon::CanDeploy  (6 bytes)
 * undefined4 CanDeploy(void)
 */
/* CBasePlayerWeapon::CanDeploy(void) */

undefined4 CBasePlayerWeapon::CanDeploy(void)

{
  return 1;
}

/* 000a0178  CBasePlayerWeapon::DefaultDeploy  (550 bytes)
 * undefined4 DefaultDeploy(int param_1, int param_2, undefined4 param_3, char * param_4, undefined4 param_5, undefined4 param_6)
 */
/* CBasePlayerWeapon::DefaultDeploy(char *, char *, int, char *, int, int) */

undefined4 __thiscall
CBasePlayerWeapon::DefaultDeploy
          (CBasePlayerWeapon *this,int param_1,int param_2,undefined4 param_3,char *param_4,
          undefined4 param_5,undefined4 param_6)

{
  double dVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  longdouble lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  
  iVar2 = (*this->vtable[0x49])(this);
  if (iVar2 == 0) {
    return 0;
  }
  *(int *)(**(int **)&this[1].field_0x1c + 0xbc) = param_1 - (int)gpGlobals->pStringBase;
  *(int *)(**(int **)&this[1].field_0x1c + 0xc0) = param_2 - (int)gpGlobals->pStringBase;
  strcpy((char *)(*(int *)&this[1].field_0x1c + 0xb58),param_4);
  *(undefined1 *)(*(int *)&this[1].field_0x1c + 0x478) = 0;
  if (*(int *)&this[1].field_0x24 != 0x10) goto switchD_000a0245_caseD_1a;
  switch(this[2].pev) {
  case (entvars_t *)0x19:
  case (entvars_t *)0x23:
    iVar2 = 2;
    pcVar4 = "knife_idle";
    puVar5 = (undefined4 *)(*(int *)&this[1].field_0x1c + 0x478);
    break;
  default:
    goto switchD_000a0245_caseD_1a;
  case (entvars_t *)0x1d:
    pcVar4 = "briefcase_idle";
    puVar5 = (undefined4 *)(*(int *)&this[1].field_0x1c + 0x478);
    iVar2 = 3;
    break;
  case (entvars_t *)0x22:
    pcVar4 = "katana_idle";
    puVar5 = (undefined4 *)(*(int *)&this[1].field_0x1c + 0x478);
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      puVar5 = puVar5 + 1;
    }
    goto switchD_000a0245_caseD_1a;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)pcVar4;
  *(char *)((int)puVar5 + 2) = pcVar4[2];
switchD_000a0245_caseD_1a:
  (*this->vtable[0x5d])(this,param_3,param_5,param_6);
  if (*(float *)(*(int *)&this[1].field_0x1c + 0x71c) <= gpGlobals->time) {
    lVar6 = UTIL_WeaponTimeBase();
    *(float *)(*(int *)&this[1].field_0x1c + 300) = (float)((longdouble)0.5 + lVar6);
  }
  else {
    lVar6 = UTIL_WeaponTimeBase();
    *(float *)(*(int *)&this[1].field_0x1c + 300) =
         (float)(((longdouble)*(float *)(*(int *)&this[1].field_0x1c + 0x71c) -
                 (longdouble)gpGlobals->time) + lVar6);
  }
  if (this[2].pev == (entvars_t *)0x24) {
    lVar6 = UTIL_WeaponTimeBase();
    dVar1 = 0.75;
  }
  else {
    lVar6 = UTIL_WeaponTimeBase();
    dVar1 = 3.0;
  }
  *(float *)&this[1].field_0x44 = (float)((longdouble)dVar1 + lVar6);
  iVar2 = *(int *)(**(int **)&this[1].field_0x1c + 0x208);
  fVar9 = 0.5;
  iVar3 = (*g_engfuncs.pfnRandomLong)(0,3);
  iVar3 = iVar3 + 0x62;
  uVar8 = 0;
  uVar7 = 0x3fa00000;
  lVar6 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.92,1.0);
  EMIT_SOUND_DYN(iVar2,2,"weapons/draw.wav",(float)lVar6,uVar7,uVar8,iVar3,fVar9);
  return 1;
}

/* 000a03d4  CBasePlayerWeapon::ItemPostFrame  (1001 bytes)
 * undefined ItemPostFrame(void)
 */
/* CBasePlayerWeapon::ItemPostFrame(void) */

void __thiscall CBasePlayerWeapon::ItemPostFrame(CBasePlayerWeapon *this)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar4;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  longdouble lVar5;
  
  w_1170 = this;
  if (*(int *)&this[1].field_0x24 != 0x10) {
    return;
  }
  if (*(int *)&this[2].field_0x4 == 0) {
    if ((*(byte *)(**(int **)&this[1].field_0x1c + 0x181) & 8) != 0) {
      iVar3 = (*this->vtable[0x66])(this);
      bVar2 = CanAttack(*(float *)&this[1].field_0x3c,gpGlobals->time,iVar3);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        (*this->vtable[0x60])(this);
        goto LAB_000a07b4;
      }
    }
    if ((*(byte *)(**(int **)&this[1].field_0x1c + 0x180) & 1) != 0) {
      iVar3 = (*this->vtable[0x66])(this);
      bVar2 = CanAttack(*(float *)&this[1].field_0x38,gpGlobals->time,iVar3);
      if (CONCAT31(extraout_var_00,bVar2) != 0) {
        (*this->vtable[0x5f])(this);
        goto LAB_000a07b4;
      }
    }
    if ((*(byte *)(**(int **)&this[1].field_0x1c + 0x181) & 0x20) != 0) {
      (*this->vtable[0x62])(this);
    }
    goto LAB_000a07b4;
  }
  if ((*(int *)(*(int *)&this[2].field_0x4 + 0xc) != 0) &&
     (iVar3 = *(int *)&this[1].field_0x1c, lVar5 = UTIL_WeaponTimeBase(),
     (longdouble)*(float *)(iVar3 + 300) <= lVar5)) {
    iVar4 = *(int *)(*(int *)&w_1170[2].field_0x8 + 4) - *(int *)(*(int *)&w_1170[2].field_0x4 + 4);
    iVar3 = *(int *)(&w_1170[2].field_0xc + (uint)*(byte *)(*(int *)&w_1170[2].field_0x8 + 8) * 4);
    if (iVar4 < *(int *)(&w_1170[2].field_0xc +
                        (uint)*(byte *)(*(int *)&w_1170[2].field_0x8 + 8) * 4)) {
      iVar3 = iVar4;
    }
    piVar1 = (int *)(*(int *)&w_1170[2].field_0x4 + 4);
    *piVar1 = *piVar1 + iVar3;
    *(int *)(*(int *)&w_1170[2].field_0x4 + 0x1c) = *(int *)(*(int *)&w_1170[2].field_0x4 + 4) / 2;
    iVar4 = *(int *)&w_1170[2].field_0x4;
    *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 4) - *(int *)(iVar4 + 0x1c);
    if (*(char *)(*(int *)&w_1170[2].field_0x8 + 0x348) == '\x04') {
      *(undefined4 *)(&w_1170[2].field_0x50 + *(int *)(*(int *)&w_1170[2].field_0x8 + 0xcc) * 0x38)
           = *(undefined4 *)(*(int *)&w_1170[2].field_0x4 + 0x1c);
    }
    else if (*(int *)(*(int *)&w_1170[2].field_0x8 + 200) != -1) {
      *(int *)(&w_1170[2].field_0x50 + *(int *)(*(int *)&w_1170[2].field_0x8 + 200) * 0x38) =
           *(int *)(&w_1170[2].field_0x50 + *(int *)(*(int *)&w_1170[2].field_0x8 + 200) * 0x38) +
           iVar3;
      *(undefined4 *)(&w_1170[3].field_0x4 + *(int *)(*(int *)&w_1170[2].field_0x8 + 200) * 0x38) =
           *(undefined4 *)(*(int *)&w_1170[2].field_0x4 + 4);
    }
    *(undefined4 *)&this[1].field_0x50 = *(undefined4 *)(*(int *)&w_1170[2].field_0x4 + 4);
    *(int *)(&w_1170[2].field_0xc + (uint)*(byte *)(*(int *)&w_1170[2].field_0x8 + 8) * 4) =
         *(int *)(&w_1170[2].field_0xc + (uint)*(byte *)(*(int *)&w_1170[2].field_0x8 + 8) * 4) -
         iVar3;
    *(undefined4 *)(*(int *)&w_1170[2].field_0x4 + 0xc) = 0;
  }
  if ((*(byte *)(**(int **)&this[1].field_0x1c + 0x181) & 8) == 0) {
LAB_000a068c:
    if ((*(byte *)(**(int **)&this[1].field_0x1c + 0x180) & 1) != 0) {
      iVar3 = (*this->vtable[0x66])(this);
      bVar2 = CanAttack(*(float *)&this[1].field_0x38,gpGlobals->time,iVar3);
      if ((CONCAT31(extraout_var_02,bVar2) != 0) &&
         ((w_1170[2].pev != (entvars_t *)0x24 || (*(int *)(*(int *)&w_1170[2].field_0x4 + 4) != 0)))
         ) {
        (*this->vtable[0x5f])(this);
        goto LAB_000a07a0;
      }
    }
    if ((*(byte *)(**(int **)&this[1].field_0x1c + 0x180) & 0x40) != 0) {
      iVar3 = (*this->vtable[0x66])(this);
      bVar2 = CanAttack(*(float *)&this[1].field_0x40,gpGlobals->time,iVar3);
      if (CONCAT31(extraout_var_03,bVar2) != 0) {
        (*this->vtable[0x61])(this);
        goto LAB_000a07a0;
      }
    }
    if ((((*(byte *)(**(int **)&this[1].field_0x1c + 0x181) & 0x20) == 0) ||
        (*(int *)(*(int *)&w_1170[2].field_0x4 + 0xc) != 0)) || (w_1170[2].pev == (entvars_t *)0x24)
       ) {
      if ((*(uint *)(**(int **)&this[1].field_0x1c + 0x180) & 0x801) == 0) goto LAB_000a07b4;
    }
    else {
      (*this->vtable[0x62])(this);
    }
  }
  else {
    iVar3 = (*this->vtable[0x66])(this);
    bVar2 = CanAttack(*(float *)&this[1].field_0x3c,gpGlobals->time,iVar3);
    if (CONCAT31(extraout_var_01,bVar2) == 0) goto LAB_000a068c;
    (*this->vtable[0x60])(this);
  }
LAB_000a07a0:
  iVar3 = (*this->vtable[0x65])(this);
  if (iVar3 == 0) {
    return;
  }
LAB_000a07b4:
  (*this->vtable[99])(this);
  return;
}

/* 000f15f8  CBasePlayerWeapon::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CBasePlayerWeapon::Save(CSave &) */

undefined4 __thiscall CBasePlayerWeapon::Save(CBasePlayerWeapon *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBasePlayerItem::Save((CBasePlayerItem *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CBasePlayerWeapon",(int)this,(int *)m_SaveData,7);
  }
  return uVar2;
}

/* 000f1648  CBasePlayerWeapon::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CBasePlayerWeapon::Restore(CRestore &) */

undefined4 __thiscall CBasePlayerWeapon::Restore(CBasePlayerWeapon *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBasePlayerItem::Restore((CBasePlayerItem *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CBasePlayerWeapon",(int)this,(int)m_SaveData,7);
  }
  return uVar2;
}

/* 000f1e24  CBasePlayerWeapon::AddDuplicate  (57 bytes)
 * undefined AddDuplicate(undefined4 param_1)
 */
/* CBasePlayerWeapon::AddDuplicate(CBasePlayerItem *) */

void __thiscall CBasePlayerWeapon::AddDuplicate(CBasePlayerWeapon *this,undefined4 param_1)

{
  if (this[1].vtable == (void **)0x0) {
    (*this->vtable[0x59])(this,param_1);
  }
  else {
    (*this->vtable[0x58])(this,param_1);
  }
  return;
}

/* 000f1e60  CBasePlayerWeapon::AddToPlayer  (178 bytes)
 * undefined4 AddToPlayer(int * param_1)
 */
/* CBasePlayerWeapon::AddToPlayer(CBasePlayer *) */

undefined4 __thiscall CBasePlayerWeapon::AddToPlayer(CBasePlayerWeapon *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = CBasePlayerItem::AddToPlayer((CBasePlayerItem *)this,param_1);
  *(uint *)(*param_1 + 0x168) = *(uint *)(*param_1 + 0x168) | 1 << (this[1].field_0x24 & 0x1f);
  if (*(int *)&this[1].field_0x48 == 0) {
    iVar2 = CBasePlayer::GetAmmoIndex((char *)(&DAT_001a5b48)[*(int *)&this[1].field_0x24 * 0xb]);
    *(int *)&this[1].field_0x48 = iVar2;
    iVar2 = CBasePlayer::GetAmmoIndex((char *)(&DAT_001a5b50)[*(int *)&this[1].field_0x24 * 0xb]);
    *(int *)&this[1].field_0x4c = iVar2;
  }
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*this->vtable[0x5a])(this);
  }
  return uVar3;
}

/* 000f1f18  CBasePlayerWeapon::UpdateClientData  (339 bytes)
 * undefined4 UpdateClientData(int * param_1)
 */
/* CBasePlayerWeapon::UpdateClientData(CBasePlayer *) */

undefined4 __thiscall CBasePlayerWeapon::UpdateClientData(CBasePlayerWeapon *this,int *param_1)

{
  bool bVar1;
  int local_14;
  
  local_14 = 0;
  if ((CBasePlayerWeapon *)param_1[0x284] == this) {
    local_14 = ((param_1[0x2cb] != 0) - 1 & 0xffffffc1) + 0x40;
  }
  bVar1 = param_1[0x270] == 0;
  if (((this == (CBasePlayerWeapon *)param_1[0x284]) ||
      (this == (CBasePlayerWeapon *)param_1[0x285])) && (param_1[0x284] != param_1[0x285])) {
    bVar1 = true;
  }
  if (((*(int *)&this[1].field_0x50 != *(int *)&this[1].field_0x54) ||
      (local_14 != *(int *)&this[1].field_0x58)) || (param_1[0x27c] != param_1[0x27d])) {
    bVar1 = true;
  }
  if (bVar1) {
    (*g_engfuncs.pfnMessageBegin)(1,gmsgCurWeapon,(float *)0x0,*(edict_t **)(*param_1 + 0x208));
    (*g_engfuncs.pfnWriteByte)(local_14);
    (*g_engfuncs.pfnWriteByte)(*(int *)&this[1].field_0x24);
    (*g_engfuncs.pfnWriteByte)(*(int *)&this[1].field_0x50);
    (*g_engfuncs.pfnMessageEnd)();
    *(undefined4 *)&this[1].field_0x54 = *(undefined4 *)&this[1].field_0x50;
    *(int *)&this[1].field_0x58 = local_14;
    param_1[0x270] = 1;
  }
  if (*(int *)&this[1].field_0x20 != 0) {
    (**(code **)(*(int *)(*(int *)&this[1].field_0x20 + 0x60) + 0x154))
              (*(undefined4 *)&this[1].field_0x20,param_1);
  }
  return 1;
}

/* 000f206c  CBasePlayerWeapon::AddPrimaryAmmo  (242 bytes)
 * bool AddPrimaryAmmo(int param_1, undefined4 param_2, int param_3, undefined4 param_4)
 */
/* CBasePlayerWeapon::AddPrimaryAmmo(int, char *, int, int) */

bool __thiscall
CBasePlayerWeapon::AddPrimaryAmmo
          (CBasePlayerWeapon *this,int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 < 1) {
    *(undefined4 *)&this[1].field_0x50 = 0xffffffff;
  }
  else if (*(int *)&this[1].field_0x50 == 0) {
    if (param_1 < param_3) {
      param_3 = param_1;
    }
    iVar1 = *(int *)&this[1].field_0x50;
    *(int *)&this[1].field_0x50 = param_3;
    iVar1 = (**(code **)(*(int *)(*(int *)&this[1].field_0x1c + 0x60) + 0x8c))
                      (*(undefined4 *)&this[1].field_0x1c,param_1 - (param_3 - iVar1),param_2,
                       param_4);
    goto LAB_000f20fb;
  }
  iVar1 = (**(code **)(*(int *)(*(int *)&this[1].field_0x1c + 0x60) + 0x8c))
                    (*(undefined4 *)&this[1].field_0x1c,param_1,param_2,param_4);
LAB_000f20fb:
  if (0 < iVar1) {
    *(int *)&this[1].field_0x48 = iVar1;
    iVar2 = CBasePlayer::HasPlayerItem(*(CBasePlayer **)&this[1].field_0x1c,&this->pev);
    if (iVar2 != 0) {
      EMIT_SOUND_DYN((int)this->pev->pContainingEntity,3,"items/9mmclip1.wav",0x3f800000,0x3f4ccccd,
                     0,100,0.5);
    }
  }
  return 0 < iVar1;
}

/* 000f2164  CBasePlayerWeapon::AddSecondaryAmmo  (128 bytes)
 * bool AddSecondaryAmmo(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
/* CBasePlayerWeapon::AddSecondaryAmmo(int, char *, int) */

bool __thiscall
CBasePlayerWeapon::AddSecondaryAmmo
          (CBasePlayerWeapon *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(*(int *)&this[1].field_0x1c + 0x60) + 0x8c))
                    (*(undefined4 *)&this[1].field_0x1c,param_1,param_2,param_3);
  if (0 < iVar1) {
    *(int *)&this[1].field_0x4c = iVar1;
    EMIT_SOUND_DYN((int)this->pev->pContainingEntity,3,"items/9mmclip1.wav",0x3f800000,0x3f4ccccd,0,
                   100,0.5);
  }
  return 0 < iVar1;
}

/* 000f21e4  CBasePlayerWeapon::IsUseable  (103 bytes)
 * undefined4 IsUseable(void)
 */
/* CBasePlayerWeapon::IsUseable(void) */

undefined4 __thiscall CBasePlayerWeapon::IsUseable(CBasePlayerWeapon *this)

{
  int iVar1;
  int iVar2;
  
  if (((*(int *)&this[1].field_0x50 < 1) &&
      (iVar1 = *(int *)&this[1].field_0x1c, iVar2 = (*this->vtable[0x53])(this),
      *(int *)(iVar1 + 0xa20 + iVar2 * 4) < 1)) &&
     ((&DAT_001a5b4c)[*(int *)&this[1].field_0x24 * 0xb] != -1)) {
    return 0;
  }
  return 1;
}

/* 000f2250  CBasePlayerWeapon::DefaultReload  (192 bytes)
 * undefined4 DefaultReload(int param_1, int param_2, undefined4 param_3, float param_4)
 */
/* CBasePlayerWeapon::DefaultReload(int, int, float, int) */

undefined4
CBasePlayerWeapon::DefaultReload(int param_1,int param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  int iVar2;
  longdouble lVar3;
  undefined4 uVar4;
  
  if (0 < *(int *)(*(int *)(param_1 + 0x80) + 0xa20 + *(int *)(param_1 + 0xac) * 4)) {
    iVar2 = param_2 - *(int *)(param_1 + 0xb4);
    iVar1 = *(int *)(*(int *)(param_1 + 0x80) + 0xa20 + *(int *)(param_1 + 0xac) * 4);
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
    }
    if (iVar1 != 0) {
      lVar3 = UTIL_WeaponTimeBase();
      *(float *)(*(int *)(param_1 + 0x80) + 300) = (float)(lVar3 + (longdouble)param_4);
      iVar1 = *(int *)(param_1 + 0x60);
      uVar4 = 0;
      iVar2 = (**(code **)(*(int *)(param_1 + 0x60) + 0x198))(param_1);
      (**(code **)(iVar1 + 0x174))(param_1,param_3,iVar2 != 0,uVar4);
      *(undefined4 *)(param_1 + 0xc0) = 1;
      lVar3 = UTIL_WeaponTimeBase();
      *(float *)(param_1 + 0xa8) = (float)(lVar3 + (longdouble)3.0);
      return 1;
    }
  }
  return 0;
}

/* 000f2314  CBasePlayerWeapon::PlayEmptySound  (100 bytes)
 * undefined4 PlayEmptySound(void)
 */
/* CBasePlayerWeapon::PlayEmptySound(void) */

undefined4 __thiscall CBasePlayerWeapon::PlayEmptySound(CBasePlayerWeapon *this)

{
  if (*(int *)&this[1].field_0x28 != 0) {
    EMIT_SOUND_DYN(*(int *)(**(int **)&this[1].field_0x1c + 0x208),1,"weapons/357_cock1.wav",
                   0x3f4ccccd,0x3f4ccccd,0,100,0.5);
    *(undefined4 *)&this[1].field_0x28 = 0;
  }
  return 0;
}

/* 000f2378  CBasePlayerWeapon::ResetEmptySound  (15 bytes)
 * undefined ResetEmptySound(void)
 */
/* CBasePlayerWeapon::ResetEmptySound(void) */

void __thiscall CBasePlayerWeapon::ResetEmptySound(CBasePlayerWeapon *this)

{
  *(undefined4 *)&this[1].field_0x28 = 1;
  return;
}

/* 000f2388  CBasePlayerWeapon::PrimaryAmmoIndex  (11 bytes)
 * undefined4 PrimaryAmmoIndex(void)
 */
/* CBasePlayerWeapon::PrimaryAmmoIndex(void) */

undefined4 __thiscall CBasePlayerWeapon::PrimaryAmmoIndex(CBasePlayerWeapon *this)

{
  return *(undefined4 *)&this[1].field_0x48;
}

/* 000f2394  CBasePlayerWeapon::SecondaryAmmoIndex  (6 bytes)
 * undefined4 SecondaryAmmoIndex(void)
 */
/* CBasePlayerWeapon::SecondaryAmmoIndex(void) */

undefined4 CBasePlayerWeapon::SecondaryAmmoIndex(void)

{
  return 0xffffffff;
}

/* 000f239c  CBasePlayerWeapon::Holster  (51 bytes)
 * undefined Holster(int param_1)
 */
/* CBasePlayerWeapon::Holster(int) */

void CBasePlayerWeapon::Holster(int param_1)

{
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(**(int **)(param_1 + 0x80) + 0xbc) = 0;
  *(undefined4 *)(**(int **)(param_1 + 0x80) + 0xc0) = 0;
  return;
}

/* 000f2644  CBasePlayerWeapon::ExtractAmmo  (159 bytes)
 * undefined1 ExtractAmmo(CBasePlayerWeapon * param_1)
 */
/* CBasePlayerWeapon::ExtractAmmo(CBasePlayerWeapon *) */

undefined1 __thiscall
CBasePlayerWeapon::ExtractAmmo(CBasePlayerWeapon *this,CBasePlayerWeapon *param_1)

{
  int iVar1;
  undefined1 unaff_BP;
  
  iVar1 = *(int *)&this[1].field_0x24;
  if ((&DAT_001a5b48)[iVar1 * 0xb] != 0) {
    unaff_BP = AddPrimaryAmmo(param_1,(int)this[1].vtable,(&DAT_001a5b48)[iVar1 * 0xb],
                              *(int *)(&DAT_001a5b5c + iVar1 * 0x2c),(&DAT_001a5b4c)[iVar1 * 0xb]);
    this[1].vtable = (void **)0x0;
  }
  if ((&DAT_001a5b50)[*(int *)&this[1].field_0x24 * 0xb] != 0) {
    unaff_BP = AddSecondaryAmmo(param_1,0,(&DAT_001a5b50)[*(int *)&this[1].field_0x24 * 0xb],
                                (&DAT_001a5b54)[*(int *)&this[1].field_0x24 * 0xb]);
  }
  return unaff_BP;
}

/* 000f26e4  CBasePlayerWeapon::ExtractClipAmmo  (101 bytes)
 * undefined ExtractClipAmmo(int param_1)
 */
/* CBasePlayerWeapon::ExtractClipAmmo(CBasePlayerWeapon *) */

void __thiscall CBasePlayerWeapon::ExtractClipAmmo(CBasePlayerWeapon *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)&this[1].field_0x50 != -1) {
    uVar1 = *(undefined4 *)&this[1].field_0x50;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x80) + 0x60) + 0x8c))
            (*(undefined4 *)(param_1 + 0x80),uVar1,
             (&DAT_001a5b48)[*(int *)&this[1].field_0x24 * 0xb],
             (&DAT_001a5b4c)[*(int *)&this[1].field_0x24 * 0xb]);
  return;
}

/* 000f274c  CBasePlayerWeapon::RetireWeapon  (85 bytes)
 * undefined RetireWeapon(void)
 */
/* CBasePlayerWeapon::RetireWeapon(void) */

void __thiscall CBasePlayerWeapon::RetireWeapon(CBasePlayerWeapon *this)

{
  *(undefined4 *)(**(int **)&this[1].field_0x1c + 0xbc) = 0;
  *(undefined4 *)(**(int **)&this[1].field_0x1c + 0xc0) = 0;
  (**(code **)(*g_pGameRules + 0x18))(g_pGameRules,*(undefined4 *)&this[1].field_0x1c,this);
  return;
}

/* 000f32cc  CBasePlayerWeapon::PrintState  (136 bytes)
 * undefined PrintState(void)
 */
/* CBasePlayerWeapon::PrintState(void) */

void __thiscall CBasePlayerWeapon::PrintState(CBasePlayerWeapon *this)

{
  (*g_engfuncs.pfnAlertMessage)(at_console,"primary:  %f\n",(double)*(float *)&this[1].field_0x38);
  (*g_engfuncs.pfnAlertMessage)(at_console,"idle   :  %f\n",(double)*(float *)&this[1].field_0x44);
  (*g_engfuncs.pfnAlertMessage)(at_console,"m_finre:  %i\n",*(undefined4 *)&this[1].field_0x5c);
  (*g_engfuncs.pfnAlertMessage)(at_console,"m_iclip:  %i\n",*(undefined4 *)&this[1].field_0x50);
  return;
}

/* 000f3654  CBasePlayerWeapon::AddWeapon  (27 bytes)
 * undefined4 AddWeapon(void)
 */
/* CBasePlayerWeapon::AddWeapon(void) */

undefined4 __thiscall CBasePlayerWeapon::AddWeapon(CBasePlayerWeapon *this)

{
  (*this->vtable[0x58])(this,this);
  return 1;
}

/* 000f3670  CBasePlayerWeapon::UpdateItemInfo  (1 bytes)
 * undefined UpdateItemInfo(void)
 */
/* CBasePlayerWeapon::UpdateItemInfo(void) */

void CBasePlayerWeapon::UpdateItemInfo(void)

{
  return;
}

/* 000f3674  CBasePlayerWeapon::PrimaryAttack  (1 bytes)
 * undefined PrimaryAttack(void)
 */
/* CBasePlayerWeapon::PrimaryAttack(void) */

void CBasePlayerWeapon::PrimaryAttack(void)

{
  return;
}

/* 000f3678  CBasePlayerWeapon::SecondaryAttack  (1 bytes)
 * undefined SecondaryAttack(void)
 */
/* CBasePlayerWeapon::SecondaryAttack(void) */

void CBasePlayerWeapon::SecondaryAttack(void)

{
  return;
}

/* 000f367c  CBasePlayerWeapon::AlternateAttack  (1 bytes)
 * undefined AlternateAttack(void)
 */
/* CBasePlayerWeapon::AlternateAttack(void) */

void CBasePlayerWeapon::AlternateAttack(void)

{
  return;
}

/* 000f3680  CBasePlayerWeapon::Reload  (1 bytes)
 * undefined Reload(void)
 */
/* CBasePlayerWeapon::Reload(void) */

void CBasePlayerWeapon::Reload(void)

{
  return;
}

/* 000f3684  CBasePlayerWeapon::WeaponIdle  (1 bytes)
 * undefined WeaponIdle(void)
 */
/* CBasePlayerWeapon::WeaponIdle(void) */

void CBasePlayerWeapon::WeaponIdle(void)

{
  return;
}

/* 000f3688  CBasePlayerWeapon::ShouldWeaponIdle  (6 bytes)
 * undefined4 ShouldWeaponIdle(void)
 */
/* CBasePlayerWeapon::ShouldWeaponIdle(void) */

undefined4 CBasePlayerWeapon::ShouldWeaponIdle(void)

{
  return 0;
}

/* 000f3690  CBasePlayerWeapon::UseDecrement  (6 bytes)
 * undefined4 UseDecrement(void)
 */
/* CBasePlayerWeapon::UseDecrement(void) */

undefined4 CBasePlayerWeapon::UseDecrement(void)

{
  return 0;
}

/* 000f3698  CBasePlayerWeapon::GetWeaponPtr  (5 bytes)
 * CBasePlayerWeapon * GetWeaponPtr(void)
 */
/* CBasePlayerWeapon::GetWeaponPtr(void) */

CBasePlayerWeapon * __thiscall CBasePlayerWeapon::GetWeaponPtr(CBasePlayerWeapon *this)

{
  return this;
}

