/* ts_i386.so - CFuncTrackAuto (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000d6b60  CFuncTrackAuto::UpdateAutoTargets  (227 bytes)
 * undefined UpdateAutoTargets(int param_1)
 */
/* CFuncTrackAuto::UpdateAutoTargets(int) */

void CFuncTrackAuto::UpdateAutoTargets(int param_1)

{
  int *piVar1;
  int *piVar2;
  CPathTrack *this;
  
  if ((*(int *)(param_1 + 300) != 0) && (*(int *)(param_1 + 0x130) != 0)) {
    if (*(int *)(param_1 + 0x148) == 0) {
      piVar1 = (int *)CPathTrack::GetNext(*(CPathTrack **)(param_1 + 300));
      this = *(CPathTrack **)(param_1 + 0x130);
    }
    else {
      piVar1 = (int *)CPathTrack::GetNext(*(CPathTrack **)(param_1 + 0x130));
      this = *(CPathTrack **)(param_1 + 300);
    }
    piVar2 = (int *)CPathTrack::GetNext(this);
    if ((((piVar1 != (int *)0x0) &&
         (*(uint *)(*piVar1 + 0x1a0) = *(uint *)(*piVar1 + 0x1a0) & 0xfffffffe,
         *(int *)(param_1 + 0x144) == 2)) && (*(int *)(param_1 + 0x134) != 0)) &&
       (*(float *)(**(int **)(param_1 + 0x134) + 0x1f8) == 0.0)) {
      (**(code **)((*(int **)(param_1 + 0x134))[0x18] + 0xe0))
                (*(undefined4 *)(param_1 + 0x134),param_1,param_1,1,0);
    }
    if (piVar2 != (int *)0x0) {
      *(uint *)(*piVar2 + 0x1a0) = *(uint *)(*piVar2 + 0x1a0) | 1;
    }
  }
  return;
}

/* 000d6c48  CFuncTrackAuto::Use  (310 bytes)
 * undefined Use(CFuncTrackChange * param_1, undefined4 * param_2, undefined4 param_3, int param_4)
 */
/* CFuncTrackAuto::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CFuncTrackAuto::Use(CFuncTrackChange *param_1,undefined4 *param_2,undefined4 param_3,
                        int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 extraout_var;
  CPathTrack *this;
  
  if (*(int *)&param_1->field_0x14c != 0) {
    if (*(int *)&param_1->field_0x80 == 0) {
      this = *(CPathTrack **)&param_1->field_0x12c;
    }
    else {
      this = (CPathTrack *)0x0;
      if (*(int *)&param_1->field_0x80 == 1) {
        this = *(CPathTrack **)&param_1->field_0x130;
      }
    }
    iVar2 = strcmp(gpGlobals->pStringBase + *(int *)*param_2,"func_tracktrain");
    if (iVar2 == 0) {
      uVar1 = CFuncTrackChange::EvaluateTrain(param_1,(int)this);
      *(int *)&param_1->field_0x144 = CONCAT31(extraout_var,uVar1);
      if ((CONCAT31(extraout_var,uVar1) == 2) &&
         (*(int *)&param_1->field_0x80 != *(int *)&param_1->field_0x148)) {
        *(undefined4 *)&param_1->field_0x14c = 0;
        if (*(int *)&param_1->field_0x80 == 0) {
          (*param_1->vtable[0x48])(param_1);
        }
        else {
          (*param_1->vtable[0x47])(param_1);
        }
      }
    }
    else {
      iVar2 = 0;
      if (this != (CPathTrack *)0x0) {
        iVar2 = CPathTrack::GetNext(this);
      }
      if (((iVar2 != 0) && (*(int *)(*(int *)&param_1->field_0x134 + 100) != iVar2)) &&
         (iVar2 = CBaseEntity::ShouldToggle(param_1,param_4,*(int *)&param_1->field_0x148),
         iVar2 != 0)) {
        *(uint *)&param_1->field_0x148 = (uint)(*(int *)&param_1->field_0x148 == 0);
      }
      (*param_1->vtable[0x4b])(param_1,*(undefined4 *)&param_1->field_0x148);
    }
  }
  return;
}

