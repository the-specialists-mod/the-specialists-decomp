/* mp.dll - CTSSellZone (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1004a6b0  CTSSellZone::KeyValue  (110 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSSellZone::KeyValue(CTSSellZone *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  CTSSellZone *this_00;
  char *pcVar6;
  bool bVar7;
  undefined3 uVar5;
  
  pcVar6 = s_attackerteam_100a3548;
  pbVar2 = *(byte **)(param_1 + 4);
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CTSSellZone *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1004a6ea:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1004a6ef;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CTSSellZone *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1004a6ea;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1004a6ef:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x54 = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 1004a720  CTSSellZone::Spawn  (161 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTSSellZone::Spawn(int param_1)

{
  int iVar1;
  
  **(int **)(param_1 + 4) = (int)s_ts_sellzone_100a3644 - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  iVar1 = *(int *)(param_1 + 4);
  UTIL_SetSize(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 5;
  *(code **)(param_1 + 0x14) = SellTouch;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

/* 1004a7d0  CTSSellZone::SellTouch  (398 bytes)
 * void SellTouch(CBaseEntity * param_1)
 */
/* WARNING: Removing unreachable block (ram,0x1004a877) */
/* WARNING: Removing unreachable block (ram,0x1004a88b) */
/* public: void __thiscall CTSSellZone::SellTouch(class CBaseEntity *) */

void __thiscall CTSSellZone::SellTouch(CTSSellZone *this,CBaseEntity *param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  edict_t *peVar5;
  undefined3 extraout_var;
  byte_conflict *pbVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int *piVar9;
  bool bVar10;
  
                    /* 0x4a7d0  100  ?SellTouch@CTSSellZone@@QAEXPAVCBaseEntity@@@Z */
  pcVar8 = s_WorldGun_1009d570;
  pbVar3 = (byte *)(gpGlobals->pStringBase + **(int **)(param_1 + 4));
  do {
    bVar1 = *pbVar3;
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1004a818:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1004a81d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1004a818;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1004a81d:
  if ((iVar4 == 0) && (iVar4 = CBaseMonster::ShouldFadeOnDeath(), iVar4 != 0)) {
    peVar5 = *(edict_t **)(*(int *)(param_1 + 4) + 0x208);
    if ((peVar5 == (edict_t *)0x0) &&
       (peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar5 == (edict_t *)0x0)) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = peVar5->pvPrivateData;
    }
    bVar10 = FUN_1000e440((uint *)(piVar9 + 0x2b));
    if ((CONCAT31(extraout_var,bVar10) != 0) && (piVar9[0x30] != 0)) {
      piVar2 = *(int **)(piVar9[0x30] + 0x7c);
      iVar4 = (**(code **)(*piVar2 + 0xc0))();
      if (((iVar4 != 0) && (iVar4 = piVar9[0x1e], iVar4 != 0x1d)) && ((0 < iVar4 || (iVar4 < 0x26)))
         ) {
        if (*(int *)&this->field_0x54 != -1) {
          pbVar6 = (byte_conflict *)(**(code **)(*piVar2 + 200))();
          iVar4 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pbVar6);
          if (*(int *)&this->field_0x54 != iVar4) {
            return;
          }
        }
        puVar7 = get_weapon_info(piVar9[0x1e]);
        iVar4 = piVar2[0x14b] + (int)puVar7[0x36] / 2;
        piVar2[0x14b] = iVar4;
        if ((*(byte *)(piVar9 + 0x23) & 1) != 0) {
          piVar2[0x14b] = iVar4 + 0x1c2;
        }
        if ((*(byte *)(piVar9 + 0x23) & 2) != 0) {
          piVar2[0x14b] = piVar2[0x14b] + 400;
        }
        if ((*(byte *)(piVar9 + 0x23) & 4) != 0) {
          piVar2[0x14b] = piVar2[0x14b] + 0xfa;
        }
        if ((*(byte *)(piVar9 + 0x23) & 8) != 0) {
          piVar2[0x14b] = piVar2[0x14b] + 900;
        }
        UTIL_Remove(piVar9);
      }
    }
  }
  return;
}

