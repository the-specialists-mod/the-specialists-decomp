/* mp.dll - CBotModuleBuy (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006d630  CBotModuleBuy::Think  (960 bytes)
 * undefined Think()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bit 0x10 (vtable 0x10094c30): rebuild armament (kevlar, knives/katana, pistol, SMG or rifle, ammo
   x10), clear bit 0x10 */

void CBotModuleBuy::Think(CBasePlayer *param_1,CBotBrain *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  
  fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,1.0);
  fVar1 = (float)fVar5;
  CBasePlayer::ResetArmament((int)param_1);
  if (((0.3 < fVar1) || (_DAT_1009ef0c != 0.0)) && (_DAT_1009ef0c != -1.0)) {
    CBasePlayer::AddItemToArmament(param_1,0x10,0,1);
  }
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,5);
  if (iVar2 != 0) {
    if (iVar2 == 5) {
      CBasePlayer::AddItemToArmament(param_1,0x22,0,0);
    }
    else {
      iVar2 = 10;
      if (fVar1 <= 0.75) {
        iVar2 = 1;
      }
      iVar3 = (*g_engfuncs.pfnRandomLong)(0,2);
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        if ((iVar3 == 0) || (iVar3 == 2)) {
          CBasePlayer::AddItemToArmament(param_1,0x23,0,0);
        }
        if (iVar3 != 0) {
          CBasePlayer::AddItemToArmament(param_1,0x19,0,0);
        }
      }
    }
  }
  if (0.1 < fVar1) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,9);
    switch(iVar2) {
    case 0:
      uVar7 = 0;
      uVar4 = BotRandomAttachments(0x24);
      CBasePlayer::AddItemToArmament(param_1,0x24,uVar4,uVar7);
      iVar2 = 0xd;
      break;
    case 1:
      uVar7 = 0;
      uVar4 = BotRandomAttachments(1);
      CBasePlayer::AddItemToArmament(param_1,1,uVar4,uVar7);
      iVar2 = 1;
      break;
    case 2:
      uVar7 = 0;
      uVar4 = BotRandomAttachments(9);
      CBasePlayer::AddItemToArmament(param_1,9,uVar4,uVar7);
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,1);
      if (iVar2 != 0) {
        CBasePlayer::AddItemToArmament(param_1,9,0,0);
      }
      iVar2 = 2;
      break;
    case 3:
      uVar7 = 0;
      uVar4 = BotRandomAttachments(0xc);
      CBasePlayer::AddItemToArmament(param_1,0xc,uVar4,uVar7);
      iVar2 = 5;
      break;
    case 4:
      uVar7 = 0;
      uVar4 = BotRandomAttachments(0xe);
      CBasePlayer::AddItemToArmament(param_1,0xe,uVar4,uVar7);
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,1);
      if (iVar2 != 0) {
        CBasePlayer::AddItemToArmament(param_1,0xe,0,0);
      }
      iVar2 = 7;
      break;
    case 5:
      uVar7 = 0;
      uVar4 = BotRandomAttachments(2);
      CBasePlayer::AddItemToArmament(param_1,2,uVar4,uVar7);
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,1);
      if (iVar2 != 0) {
        CBasePlayer::AddItemToArmament(param_1,2,0,0);
      }
      iVar2 = 1;
      break;
    case 6:
      uVar7 = 0;
      uVar4 = BotRandomAttachments(0x15);
      CBasePlayer::AddItemToArmament(param_1,0x15,uVar4,uVar7);
      iVar2 = 2;
      break;
    case 7:
      uVar7 = 0;
      uVar4 = BotRandomAttachments(0x16);
      CBasePlayer::AddItemToArmament(param_1,0x16,uVar4,uVar7);
      iVar2 = 9;
      break;
    case 8:
      uVar7 = 0;
      uVar4 = BotRandomAttachments(0x1c);
      CBasePlayer::AddItemToArmament(param_1,0x1c,uVar4,uVar7);
      iVar2 = 10;
      break;
    case 9:
      uVar7 = 0;
      uVar4 = BotRandomAttachments(0x1f);
      CBasePlayer::AddItemToArmament(param_1,0x1f,uVar4,uVar7);
      iVar2 = 0xb;
      break;
    default:
      goto LAB_1006d8ce;
    }
    CBasePlayer::AddAmmoToArmament(param_1,iVar2,10);
  }
LAB_1006d8ce:
  if ((0.4 < fVar1) && (fVar1 < 0.7)) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(1,6);
    switch(iVar2) {
    case 1:
      uVar7 = 0;
      uVar4 = BotRandomAttachments(3);
      CBasePlayer::AddItemToArmament(param_1,3,uVar4,uVar7);
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,1);
      if (iVar2 != 0) {
        CBasePlayer::AddItemToArmament(param_1,3,0,0);
      }
      iVar2 = 1;
      break;
    case 2:
      uVar7 = 0;
      uVar4 = BotRandomAttachments(6);
      CBasePlayer::AddItemToArmament(param_1,6,uVar4,uVar7);
      iVar2 = 1;
      break;
    case 3:
      uVar7 = 0;
      uVar4 = BotRandomAttachments(7);
      CBasePlayer::AddItemToArmament(param_1,7,uVar4,uVar7);
      iVar2 = 1;
      break;
    case 4:
      uVar7 = 0;
      uVar4 = BotRandomAttachments(0x11);
      CBasePlayer::AddItemToArmament(param_1,0x11,uVar4,uVar7);
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,1);
      if (iVar2 != 0) {
        CBasePlayer::AddItemToArmament(param_1,0x11,0,0);
      }
      iVar2 = 0xc;
      break;
    case 5:
      uVar7 = 0;
      uVar4 = BotRandomAttachments(0x13);
      CBasePlayer::AddItemToArmament(param_1,0x13,uVar4,uVar7);
      iVar2 = 7;
      break;
    case 6:
      uVar7 = 0;
      uVar4 = BotRandomAttachments(0x17);
      CBasePlayer::AddItemToArmament(param_1,0x17,uVar4,uVar7);
      iVar2 = 2;
      break;
    default:
      goto switchD_1006d90f_default;
    }
    goto LAB_1006db5f;
  }
  if (fVar1 < 0.7) goto switchD_1006d90f_default;
  iVar2 = (*g_engfuncs.pfnRandomLong)(1,0xb);
  switch(iVar2) {
  case 1:
    uVar7 = 0;
    uVar4 = BotRandomAttachments(4);
    CBasePlayer::AddItemToArmament(param_1,4,uVar4,uVar7);
    iVar2 = 3;
    break;
  case 2:
    uVar7 = 0;
    uVar4 = BotRandomAttachments(0xb);
    CBasePlayer::AddItemToArmament(param_1,0xb,uVar4,uVar7);
    iVar2 = 3;
    break;
  case 3:
    uVar7 = 0;
    uVar4 = BotRandomAttachments(0x14);
    CBasePlayer::AddItemToArmament(param_1,0x14,uVar4,uVar7);
    iVar2 = 3;
    break;
  case 4:
    uVar7 = 0;
    uVar4 = BotRandomAttachments(0xd);
    CBasePlayer::AddItemToArmament(param_1,0xd,uVar4,uVar7);
    iVar2 = 6;
    break;
  case 5:
    uVar7 = 0;
    uVar4 = BotRandomAttachments(5);
    uVar6 = 5;
    goto LAB_1006db54;
  case 6:
    uVar7 = 0;
    uVar4 = BotRandomAttachments(0xf);
    uVar6 = 0xf;
    goto LAB_1006db54;
  case 7:
    uVar7 = 0;
    uVar4 = BotRandomAttachments(0x1a);
    CBasePlayer::AddItemToArmament(param_1,0x1a,uVar4,uVar7);
    iVar2 = 3;
    break;
  case 8:
    uVar7 = 0;
    uVar4 = BotRandomAttachments(0x1b);
    uVar6 = 0x1b;
    goto LAB_1006db54;
  case 9:
    uVar7 = 0;
    uVar4 = BotRandomAttachments(0x21);
    CBasePlayer::AddItemToArmament(param_1,0x21,uVar4,uVar7);
    iVar2 = 3;
    break;
  case 10:
    uVar7 = 0;
    uVar4 = BotRandomAttachments(0x12);
    CBasePlayer::AddItemToArmament(param_1,0x12,uVar4,uVar7);
    iVar2 = 8;
    break;
  case 0xb:
    uVar7 = 0;
    uVar4 = BotRandomAttachments(0x20);
    uVar6 = 0x20;
LAB_1006db54:
    CBasePlayer::AddItemToArmament(param_1,uVar6,uVar4,uVar7);
    iVar2 = 4;
    break;
  default:
    goto switchD_1006d90f_default;
  }
LAB_1006db5f:
  CBasePlayer::AddAmmoToArmament(param_1,iVar2,10);
switchD_1006d90f_default:
  CBotBrain::DisableModules(param_2,0x10);
  return;
}

