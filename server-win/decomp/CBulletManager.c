/* mp.dll - CBulletManager (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100470a0  CBulletManager::Reset  (28 bytes)
 * undefined Reset(undefined4 * param_1)
 * called by: CTSGameRules::Init, FUN_10047080, FUN_1004c210
 */
/* .so CBulletManager::Reset; TSGameRules+0x1864 */

void __fastcall CBulletManager::Reset(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x1000] = 0;
  param_1[0x1001] = 0;
  return;
}

/* 10047150  CBulletManager::FireBullet  (263 bytes)
 * undefined FireBullet(int * param_1, int * param_2, int * param_3, int * param_4, int * param_5, int param_6)
 * called by: CBasePlayer::ShootBulletsPlayer
 */
void __thiscall
CBulletManager::FireBullet
          (CBulletManager *this,int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,
          int param_6)

{
  int iVar1;
  CBulletManager *pCVar2;
  float10 fVar3;
  
  iVar1 = 0;
  pCVar2 = this;
  do {
    if (*(int *)pCVar2 == 0) {
      if (iVar1 != -1) {
        pCVar2 = this + iVar1 * 0x40;
        *(int **)pCVar2 = param_1;
        *(int *)(pCVar2 + 0x1c) = *param_3;
        *(int *)(pCVar2 + 0x20) = param_3[1];
        *(int *)(pCVar2 + 0x24) = param_3[2];
        *(int *)(pCVar2 + 0x28) = *param_4;
        *(int *)(pCVar2 + 0x2c) = *param_5;
        iVar1 = param_1[0x27f];
        if ((iVar1 == 0) || (*(int *)(iVar1 + 0x78) != 0x10)) {
          *(undefined4 *)(pCVar2 + 0x30) = 0xffffffff;
        }
        else {
          *(undefined4 *)(pCVar2 + 0x30) = *(undefined4 *)(iVar1 + 0xb8);
        }
        *(int *)(pCVar2 + 0x10) = *param_2;
        *(int *)(pCVar2 + 0x14) = param_2[1];
        *(int *)(pCVar2 + 0x18) = param_2[2];
        *(int *)(pCVar2 + 4) = *param_2;
        *(int *)(pCVar2 + 8) = param_2[1];
        *(int *)(pCVar2 + 0xc) = param_2[2];
        if ((float)param_1[0x5b] == 0.0) {
          fVar3 = (float10)(**(code **)(*param_1 + 8))();
          *(float *)(pCVar2 + 0x34) = (float)fVar3;
        }
        else {
          *(int *)(pCVar2 + 0x34) = param_1[0x5b];
        }
        *(undefined4 *)(pCVar2 + 0x38) = 0;
        *(int *)(pCVar2 + 0x3c) = param_6;
        *(int *)(this + 0x4000) = *(int *)(this + 0x4000) + 1;
        return;
      }
      break;
    }
    iVar1 = iVar1 + 1;
    pCVar2 = pCVar2 + 0x40;
  } while (iVar1 < 0x100);
  UTIL_ClientPrintAll(3,s_WARNING_cannot_create_bullet__100a32b8,0,0,0,0);
  return;
}

