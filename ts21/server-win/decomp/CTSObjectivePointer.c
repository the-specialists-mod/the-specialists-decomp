/* mp.dll - CTSObjectivePointer (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10050800  CTSObjectivePointer::KeyValue  (123 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSObjectivePointer::KeyValue(CTSObjectivePointer *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 0xb;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = &DAT_10099024;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x54 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 0xb;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_objmsgmerc_10099018;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x58 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10050880  CTSObjectivePointer::Spawn  (97 bytes)
 * undefined Spawn()
 */
void __fastcall CTSObjectivePointer::Spawn(int param_1)

{
  **(int **)(param_1 + 4) = (int)s_ts_objective_ptr_10099030 - (int)gpGlobals->pStringBase;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 10.0;
  return;
}

/* 100508f0  CTSObjectivePointer::Use  (584 bytes)
 * undefined Use()
 */
void __fastcall CTSObjectivePointer::Use(char *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  byte_conflict *pbVar6;
  uint uVar7;
  void *this;
  char *pcVar8;
  edict_t *pEdictStartSearchAfter;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  int iStack_68;
  int iStack_58;
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [16];
  char acStack_2c [44];
  
  pEdictStartSearchAfter = (edict_t *)0x0;
  if (*(int *)(*(int *)(param_1 + 4) + 0x1c8) != 0) {
    while ((pEdictStartSearchAfter =
                 (*g_engfuncs.pfnFindEntityByString)
                           (pEdictStartSearchAfter,s_targetname_100915e4,
                            gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1c8)),
           pEdictStartSearchAfter != (edict_t *)0x0 &&
           (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter), iVar2 != 0))) {
      piVar1 = pEdictStartSearchAfter->pvPrivateData;
      pcVar8 = gpGlobals->pStringBase;
      iVar2 = 8;
      bVar11 = true;
      pcVar9 = pcVar8 + (pEdictStartSearchAfter->v).classname;
      pcVar10 = s_ts_hack_100982e4;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar11 = *pcVar9 == *pcVar10;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      } while (bVar11);
      if (bVar11) goto LAB_100509ad;
      iVar2 = 8;
      bVar11 = true;
      pcVar9 = pcVar8 + (pEdictStartSearchAfter->v).classname;
      pcVar10 = s_ts_bomb_100982ec;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar11 = *pcVar9 == *pcVar10;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      } while (bVar11);
      if (bVar11) goto LAB_100509ad;
      iVar2 = 0xe;
      bVar11 = true;
      pcVar8 = pcVar8 + (pEdictStartSearchAfter->v).classname;
      pcVar9 = s_ts_teamescape_100982d4;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar11 = *pcVar8 == *pcVar9;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      } while (bVar11);
      if (bVar11) {
LAB_100509ad:
        (**(code **)(*piVar1 + 0xf0))(1);
        iVar2 = FUN_10046630(&DAT_100ac8c0,piVar1);
        if ((iVar2 != -1) && (iStack_68 = 1, 0 < gpGlobals->maxClients)) {
          do {
            piVar3 = (int *)UTIL_PlayerByIndex(iStack_68);
            if (piVar3 != (int *)0x0) {
              (*g_engfuncs.pfnMessageBegin)
                        (1,DAT_100cbc88,(float *)0x0,*(edict_t **)(piVar3[1] + 0x208));
              pfVar4 = (float *)(**(code **)(*piVar1 + 0xd4))(auStack_54);
              (*g_engfuncs.pfnWriteCoord)(*pfVar4);
              iVar5 = (**(code **)(*piVar1 + 0xd4))(auStack_48);
              (*g_engfuncs.pfnWriteCoord)(*(float *)(iVar5 + 4));
              iVar5 = (**(code **)(*piVar1 + 0xd4))(auStack_3c);
              (*g_engfuncs.pfnWriteCoord)(*(float *)(iVar5 + 8));
              (*g_engfuncs.pfnWriteByte)(iVar2);
              acStack_2c[0] = '\0';
              pbVar6 = (byte_conflict *)(**(code **)(*piVar3 + 0xb0))();
              uVar7 = FUN_1007e860(this,(byte_conflict *)s_Specialists_10097488,pbVar6);
              if (uVar7 == 0) {
                if (*(int *)(iStack_58 + 0x54) != 0) {
                  pcVar8 = gpGlobals->pStringBase + *(int *)(iStack_58 + 0x54);
LAB_10050aeb:
                  _strncpy(acStack_2c,pcVar8,0x40);
                }
              }
              else if (*(int *)(iStack_58 + 0x58) != 0) {
                pcVar8 = gpGlobals->pStringBase + *(int *)(iStack_58 + 0x58);
                goto LAB_10050aeb;
              }
              param_1 = acStack_2c;
              (*g_engfuncs.pfnWriteString)(param_1);
              iStack_68 = 0x10050b0c;
              (*g_engfuncs.pfnMessageEnd)();
            }
            iStack_68 = iStack_68 + 1;
          } while (iStack_68 <= gpGlobals->maxClients);
        }
      }
    }
  }
  return;
}

