/* mp.dll - CFuncPlatRot (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100269e0  CFuncPlatRot::Save  (48 bytes)
 * undefined Save(void * param_1)
 * called by: CFuncTrackChange::Save
 */
void __thiscall CFuncPlatRot::Save(CFuncPlatRot *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CFuncPlat::Save((CFuncPlat *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_1,(byte_conflict *)s_CFuncPlatRot_100952f0,(int)this,0x10094e18,2);
  return;
}

/* 10026a10  CFuncPlatRot::Restore  (48 bytes)
 * undefined Restore(void * param_1)
 * called by: CFuncTrackChange::Restore
 */
void __thiscall CFuncPlatRot::Restore(CFuncPlatRot *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CFuncPlat::Restore((CFuncPlat *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_1,(byte_conflict *)s_CFuncPlatRot_100952f0,(int)this,0x10094e18,2);
  return;
}

/* 10026a40  CFuncPlatRot::SetupRotation  (269 bytes)
 * undefined SetupRotation(int param_1)
 * called by: CFuncPlatRot::Spawn, CFuncTrackChange::Spawn
 */
void __fastcall CFuncPlatRot::SetupRotation(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  if (*(float *)(param_1 + 0xdc) == 0.0) {
    *(undefined4 *)(param_1 + 0x10c) = DAT_1009f4a8;
    *(undefined4 *)(param_1 + 0x110) = DAT_1009f4ac;
    *(undefined4 *)(param_1 + 0x114) = DAT_1009f4b0;
    *(undefined4 *)(param_1 + 0x100) = DAT_1009f4a8;
    *(undefined4 *)(param_1 + 0x104) = DAT_1009f4ac;
    *(undefined4 *)(param_1 + 0x108) = DAT_1009f4b0;
  }
  else {
    CBaseToggle::AxisDir(*(int *)(param_1 + 4));
    iVar6 = *(int *)(param_1 + 4);
    fVar1 = *(float *)(param_1 + 0xdc);
    *(float *)(param_1 + 0x10c) = *(float *)(iVar6 + 0x50);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(iVar6 + 0x54);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(iVar6 + 0x58);
    fVar2 = *(float *)(iVar6 + 0x48);
    fVar3 = *(float *)(iVar6 + 0x4c);
    fVar4 = *(float *)(iVar6 + 0x54);
    fVar5 = *(float *)(iVar6 + 0x58);
    *(float *)(param_1 + 0x100) = fVar1 * *(float *)(iVar6 + 0x44) + *(float *)(iVar6 + 0x50);
    *(float *)(param_1 + 0x104) = fVar1 * fVar2 + fVar4;
    *(float *)(param_1 + 0x108) = fVar1 * fVar3 + fVar5;
  }
  iVar6 = *(int *)(param_1 + 4);
  if (*(int *)(iVar6 + 0x1cc) != 0) {
    *(undefined4 *)(iVar6 + 0x50) = *(undefined4 *)(param_1 + 0x100);
    *(undefined4 *)(iVar6 + 0x54) = *(undefined4 *)(param_1 + 0x104);
    *(undefined4 *)(iVar6 + 0x58) = *(undefined4 *)(param_1 + 0x108);
  }
  return;
}

/* 10026b50  CFuncPlatRot::Spawn  (16 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CFuncPlatRot::Spawn(int *param_1)

{
  CFuncPlat::Spawn(param_1);
  SetupRotation((int)param_1);
  return;
}

/* 10026b60  CFuncPlatRot::GoDown  (43 bytes)
 * undefined GoDown(void * param_1)
 */
void __fastcall CFuncPlatRot::GoDown(void *param_1)

{
  CFuncPlat::GoDown(param_1);
  RotMove(param_1,(float *)((int)param_1 + 0x10c),
          *(float *)(*(int *)((int)param_1 + 4) + 0x104) -
          *(float *)(*(int *)((int)param_1 + 4) + 0x100));
  return;
}

/* 10026b90  CFuncPlatRot::HitBottom  (70 bytes)
 * undefined HitBottom(int param_1)
 * called by: CFuncTrackChange::HitBottom
 */
void __fastcall CFuncPlatRot::HitBottom(int param_1)

{
  int iVar1;
  
  CFuncPlat::HitBottom(param_1);
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x5c) = DAT_1009f4a8;
  *(undefined4 *)(iVar1 + 0x60) = DAT_1009f4ac;
  *(undefined4 *)(iVar1 + 100) = DAT_1009f4b0;
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x114);
  return;
}

/* 10026be0  CFuncPlatRot::GoUp  (43 bytes)
 * undefined GoUp(void * param_1)
 */
void __fastcall CFuncPlatRot::GoUp(void *param_1)

{
  CFuncPlat::GoUp(param_1);
  RotMove(param_1,(float *)((int)param_1 + 0x100),
          *(float *)(*(int *)((int)param_1 + 4) + 0x104) -
          *(float *)(*(int *)((int)param_1 + 4) + 0x100));
  return;
}

/* 10026c10  CFuncPlatRot::HitTop  (70 bytes)
 * undefined HitTop(int * param_1)
 * called by: CFuncTrackChange::HitTop
 */
void __fastcall CFuncPlatRot::HitTop(int *param_1)

{
  int iVar1;
  
  CFuncPlat::HitTop(param_1);
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x5c) = DAT_1009f4a8;
  *(undefined4 *)(iVar1 + 0x60) = DAT_1009f4ac;
  *(undefined4 *)(iVar1 + 100) = DAT_1009f4b0;
  iVar1 = param_1[1];
  *(int *)(iVar1 + 0x50) = param_1[0x40];
  *(int *)(iVar1 + 0x54) = param_1[0x41];
  *(int *)(iVar1 + 0x58) = param_1[0x42];
  return;
}

/* 10026c60  CFuncPlatRot::RotMove  (172 bytes)
 * undefined RotMove(float * param_1, float param_2)
 * called by: CFuncPlatRot::GoDown, CFuncPlatRot::GoUp, CFuncTrackChange::GoDown, CFuncTrackChange::GoUp
 */
void __thiscall CFuncPlatRot::RotMove(CFuncPlatRot *this,float *param_1,float param_2)

{
  entvars_t *peVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  peVar1 = this->pev;
  fVar2 = *param_1 - peVar1->angles[0];
  fVar3 = param_1[1] - peVar1->angles[1];
  fVar4 = param_1[2] - peVar1->angles[2];
  if (0.1 <= param_2) {
    fVar5 = 1.0 / param_2;
    peVar1->avelocity[0] = fVar2 * fVar5;
    peVar1->avelocity[1] = fVar3 * fVar5;
    peVar1->avelocity[2] = fVar5 * fVar4;
    return;
  }
  peVar1->avelocity[0] = fVar2;
  peVar1->avelocity[1] = fVar3;
  peVar1->avelocity[2] = fVar4;
  this->pev->nextthink = this->pev->ltime + 1.0;
  return;
}

