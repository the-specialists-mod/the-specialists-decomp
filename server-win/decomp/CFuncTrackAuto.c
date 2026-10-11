/* mp.dll - CFuncTrackAuto (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10032040  CFuncTrackAuto::UpdateAutoTargets  (179 bytes)
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
      (**(code **)(*piVar2 + 0xd8))(param_1,param_1,1,0);
    }
    if (iVar4 != 0) {
      puVar1 = (uint *)(*(int *)(iVar4 + 4) + 0x1a0);
      *puVar1 = *puVar1 | 1;
    }
  }
  return;
}

/* 10032100  CFuncTrackAuto::Use  (303 bytes)
 * undefined Use()
 */
void __thiscall
CFuncTrackAuto::Use(CFuncTrackChange *param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  if (*(int *)&param_1->field_0x138 != 0) {
    if (*(int *)&param_1->field_0x70 == 0) {
      iVar4 = *(int *)&param_1->field_0x118;
    }
    else if (*(int *)&param_1->field_0x70 == 1) {
      iVar4 = *(int *)&param_1->field_0x11c;
    }
    else {
      iVar4 = 0;
    }
    pcVar5 = s_func_tracktrain_100a0818;
    pbVar2 = (byte *)(gpGlobals->pStringBase + **(int **)(param_2 + 4));
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_10032176:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_1003217b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_10032176;
      pbVar2 = pbVar2 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_1003217b:
    if (iVar3 == 0) {
      iVar4 = CFuncTrackChange::EvaluateTrain(param_1,iVar4);
      *(int *)&param_1->field_0x130 = iVar4;
      if ((iVar4 == 2) && (*(int *)&param_1->field_0x70 != *(int *)&param_1->field_0x134)) {
        *(undefined4 *)&param_1->field_0x138 = 0;
        if (*(int *)&param_1->field_0x70 == 0) {
          (*param_1->vtable[0x46])();
          return;
        }
        (*param_1->vtable[0x45])();
        return;
      }
    }
    else {
      if (iVar4 != 0) {
        iVar4 = CPathTrack::GetNext(iVar4);
        if ((iVar4 != 0) && (*(int *)(*(int *)&param_1->field_0x120 + 0x54) != iVar4)) {
          iVar4 = CBaseEntity::ShouldToggle(param_4,*(int *)&param_1->field_0x134);
          if (iVar4 != 0) {
            *(uint *)&param_1->field_0x134 = (uint)(*(int *)&param_1->field_0x134 == 0);
          }
        }
      }
      (*param_1->vtable[0x49])(*(undefined4 *)&param_1->field_0x134);
    }
  }
  return;
}

