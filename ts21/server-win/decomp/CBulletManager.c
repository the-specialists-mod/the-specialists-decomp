/* mp.dll - CBulletManager (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003f7e0  CBulletManager::FireBullet  (268 bytes)
 * undefined FireBullet(int param_1, int * param_2, int * param_3, int * param_4, int * param_5, int param_6)
 * called by: CBasePlayer::ShootBulletsPlayer
 */
void __thiscall
CBulletManager::FireBullet
          (CBulletManager *this,int param_1,int *param_2,int *param_3,int *param_4,int *param_5,
          int param_6)

{
  int iVar1;
  undefined4 uVar2;
  CBulletManager *pCVar3;
  
  iVar1 = 0;
  pCVar3 = this;
  do {
    if (*(int *)pCVar3 == 0) {
      if (iVar1 != -1) {
        pCVar3 = this + iVar1 * 0x40;
        *(int *)pCVar3 = param_1;
        *(int *)(pCVar3 + 0x1c) = *param_3;
        *(int *)(pCVar3 + 0x20) = param_3[1];
        *(int *)(pCVar3 + 0x24) = param_3[2];
        *(int *)(pCVar3 + 0x28) = *param_4;
        *(int *)(pCVar3 + 0x2c) = *param_5;
        iVar1 = *(int *)(param_1 + 0x968);
        if ((iVar1 == 0) || (*(int *)(iVar1 + 0x78) != 0x10)) {
          *(undefined4 *)(pCVar3 + 0x30) = 0;
        }
        else {
          *(uint *)(pCVar3 + 0x30) = (uint)*(byte *)(iVar1 + 0xb8);
        }
        *(int *)(pCVar3 + 0x10) = *param_2;
        *(int *)(pCVar3 + 0x14) = param_2[1];
        *(int *)(pCVar3 + 0x18) = param_2[2];
        *(int *)(pCVar3 + 4) = *param_2;
        *(int *)(pCVar3 + 8) = param_2[1];
        *(int *)(pCVar3 + 0xc) = param_2[2];
        if (*(float *)(param_1 + 0x168) == 0.0) {
          uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x254);
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0x168);
        }
        *(undefined4 *)(pCVar3 + 0x34) = uVar2;
        *(undefined4 *)(pCVar3 + 0x38) = 0;
        *(int *)(pCVar3 + 0x3c) = param_6;
        *(int *)(this + 0x4000) = *(int *)(this + 0x4000) + 1;
        return;
      }
      break;
    }
    iVar1 = iVar1 + 1;
    pCVar3 = pCVar3 + 0x40;
  } while (iVar1 < 0x100);
  UTIL_ClientPrintAll(3,s_WARNING_cannot_create_bullet__10097fc4,0,0,0,0);
  return;
}

