/* mp.dll - CWeaponCycler (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100200c0  CWeaponCycler::Spawn  (219 bytes)
 * undefined Spawn()
 */
void __fastcall CWeaponCycler::Spawn(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 3;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(*(int *)(param_1 + 4) + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(*(int *)(param_1 + 4) + 0xb4);
  FUN_100679a0();
  FUN_10067970();
  *(code **)(param_1 + 0x14) = CBasePlayerItem::DefaultTouch;
  return;
}

/* 100201a0  CWeaponCycler::Deploy  (74 bytes)
 * undefined4 Deploy(int * param_1)
 */
undefined4 __fastcall CWeaponCycler::Deploy(int *param_1)

{
  float10 fVar1;
  
  *(int *)(*(int *)(param_1[0x1c] + 4) + 0xbc) = param_1[0x2e];
  fVar1 = FUN_10066590();
  *(float *)(param_1[0x1c] + 0x118) = (float)(fVar1 + (float10)1.0);
  (**(code **)(*param_1 + 0x150))(0,1,0);
  param_1[0x29] = 0;
  return 1;
}

/* 100201f0  CWeaponCycler::Holster  (27 bytes)
 * undefined Holster(int param_1)
 */
void __fastcall CWeaponCycler::Holster(int param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_10066590();
  *(float *)(*(int *)(param_1 + 0x70) + 0x118) = (float)(fVar1 + (float10)0.5);
  return;
}

/* 10020210  CWeaponCycler::PrimaryAttack  (48 bytes)
 * undefined PrimaryAttack(int * param_1)
 */
void __fastcall CWeaponCycler::PrimaryAttack(int *param_1)

{
  (**(code **)(*param_1 + 0x150))(*(undefined4 *)(param_1[1] + 0x128),1,0);
  param_1[0x23] = (int)(gpGlobals->time + 0.3);
  return;
}

/* 10020240  CWeaponCycler::SecondaryAttack  (173 bytes)
 * undefined SecondaryAttack()
 */
void __fastcall CWeaponCycler::SecondaryAttack(int *param_1)

{
  void *pvVar1;
  uint uVar2;
  float fStack_8;
  float fStack_4;
  
  uVar2 = *(int *)(param_1[1] + 0x128) + 1U & 0x80000007;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
  }
  *(uint *)(param_1[1] + 0x128) = uVar2;
  *(int *)(param_1[1] + 0xb4) = param_1[0x2f];
  pvVar1 = (*g_engfuncs.pfnGetModelPtr)(*(edict_t **)(param_1[1] + 0x208));
  GetSequenceInfo((int)pvVar1,param_1[1],&fStack_8,&fStack_4);
  *(undefined4 *)(param_1[1] + 0xb4) = 0;
  if (fStack_8 == 0.0) {
    *(undefined4 *)(param_1[1] + 0x128) = 0;
  }
  (**(code **)(*param_1 + 0x150))(*(undefined4 *)(param_1[1] + 0x128),1,0);
  param_1[0x24] = (int)(gpGlobals->time + 0.3);
  return;
}

/* 10020820  CWeaponCycler::iItemSlot  (6 bytes)
 * undefined iItemSlot()
 */
undefined4 CWeaponCycler::iItemSlot(void)

{
  return 1;
}

/* 10020830  CWeaponCycler::GetItemInfo  (5 bytes)
 * undefined GetItemInfo()
 */
undefined4 CWeaponCycler::GetItemInfo(void)

{
  return 0;
}

