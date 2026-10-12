/* mp.dll - CFuncTrackAuto (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10029990  CFuncTrackAuto::UpdateAutoTargets  (177 bytes)
 * undefined UpdateAutoTargets(int param_1)
 */
void __fastcall CFuncTrackAuto::UpdateAutoTargets(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x118) != 0) && (*(int *)(param_1 + 0x11c) != 0)) {
    if (*(int *)(param_1 + 0x134) == 0) {
      iVar3 = CPathTrack::GetNext(*(int *)(param_1 + 0x118));
      iVar4 = *(int *)(param_1 + 0x11c);
    }
    else {
      iVar3 = CPathTrack::GetNext(*(int *)(param_1 + 0x11c));
      iVar4 = *(int *)(param_1 + 0x118);
    }
    iVar4 = CPathTrack::GetNext(iVar4);
    if ((((iVar3 != 0) &&
         (*(uint *)(*(int *)(iVar3 + 4) + 0x1a0) =
               *(uint *)(*(int *)(iVar3 + 4) + 0x1a0) & 0xfffffffe, *(int *)(param_1 + 0x130) == 2))
        && (piVar2 = *(int **)(param_1 + 0x120), piVar2 != (int *)0x0)) &&
       (*(float *)(piVar2[1] + 0x1f8) == 0.0)) {
      (**(code **)(*piVar2 + 0xc0))(param_1,param_1,1,0);
    }
    if (iVar4 != 0) {
      puVar1 = (uint *)(*(int *)(iVar4 + 4) + 0x1a0);
      *puVar1 = *puVar1 | 1;
    }
  }
  return;
}

/* 10029a50  CFuncTrackAuto::Use  (252 bytes)
 * undefined Use()
 */
void __thiscall
CFuncTrackAuto::Use(CFuncTrackChange *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  if (*(int *)&param_1->field_0x138 != 0) {
    iVar2 = *(int *)&param_1->field_0x70;
    if (iVar2 == 0) {
      iVar1 = *(int *)&param_1->field_0x118;
    }
    else if (iVar2 == 1) {
      iVar1 = *(int *)&param_1->field_0x11c;
    }
    else {
      iVar1 = 0;
    }
    iVar3 = 0x10;
    bVar6 = true;
    pcVar4 = gpGlobals->pStringBase + **(int **)(param_2 + 4);
    pcVar5 = s_func_tracktrain_100954c8;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      iVar1 = CFuncTrackChange::EvaluateTrain(param_1,iVar1);
      *(int *)&param_1->field_0x130 = iVar1;
      if ((iVar1 == 2) && (iVar2 != *(int *)&param_1->field_0x134)) {
        *(undefined4 *)&param_1->field_0x138 = 0;
        if (iVar2 == 0) {
          (*param_1->vtable[0x3f])();
          return;
        }
        (*param_1->vtable[0x3e])();
        return;
      }
    }
    else {
      if (iVar1 != 0) {
        iVar2 = CPathTrack::GetNext(iVar1);
        if ((iVar2 != 0) && (*(int *)(*(int *)&param_1->field_0x120 + 0x54) != iVar2)) {
          iVar2 = CBaseEntity::ShouldToggle(param_4,*(int *)&param_1->field_0x134);
          if (iVar2 != 0) {
            *(uint *)&param_1->field_0x134 = (uint)(*(int *)&param_1->field_0x134 == 0);
          }
        }
      }
      (*param_1->vtable[0x42])(*(undefined4 *)&param_1->field_0x134);
    }
  }
  return;
}

