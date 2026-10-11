/* mp.dll - CBotModuleLookAround (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006dde0  CBotModuleLookAround::Think  (177 bytes)
 * undefined Think()
 */
/* bit 0x80 (vtable 0x10094c20): every min(0.5/sm/sk,5) s look at FindLookPoint() */

void __thiscall CBotModuleLookAround::Think(int param_1,int *param_2,CBotBrain *param_3)

{
  float *pfVar1;
  float10 fVar2;
  undefined1 auStack_c [12];
  
  if (*(float *)(param_1 + 4) <= gpGlobals->time) {
    pfVar1 = (float *)FindLookPoint(auStack_c,param_2,param_3);
    CBotBrain::LookAt(param_3,param_2,*pfVar1,pfVar1[1]);
    fVar2 = (float10)(**(code **)(*param_2 + 8))();
    if (((float10)0.5 / fVar2) / (float10)*(float *)(param_3 + 0x1a74) < (float10)5.0) {
      fVar2 = (float10)(**(code **)(*param_2 + 8))();
      *(float *)(param_1 + 4) =
           (float)(((float10)0.5 / fVar2) / (float10)*(float *)(param_3 + 0x1a74) +
                  (float10)gpGlobals->time);
      return;
    }
    *(float *)(param_1 + 4) = gpGlobals->time + 5.0;
  }
  return;
}

/* 1006dea0  CBotModuleLookAround::FindLookPoint  (656 bytes)
 * undefined FindLookPoint()
 * called by: CBotModuleLookAround::Think
 */
/* 8 traces of 1024u (yaw RandomFloat(0,360)+45*i, pitch RandomFloat(-30,30)); first unobstructed
   end, else farthest */

void CBotModuleLookAround::FindLookPoint(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 uVar6;
  Vector *this;
  char cVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 uVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  undefined1 *puVar14;
  float fVar15;
  undefined1 *puVar16;
  float fStack_cc;
  Vector VStack_c8;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [20];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  Vector VStack_3c;
  Vector aVStack_30 [2];
  undefined1 auStack_18 [12];
  Vector VStack_c;
  
  fStack_cc = -1.0;
  fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,360.0);
  fStack_94 = (float)fVar8;
  cVar7 = '\0';
  do {
    fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(-30.0,30.0);
    fVar9 = (float10)fcos((float10)fStack_94 * (float10)0.017453292519943295);
    fVar1 = (float)fVar9;
    fVar9 = (float10)fsin((float10)fStack_94 * (float10)0.017453292519943295);
    fVar2 = (float)fVar9;
    fVar8 = (float10)fsin(fVar8 * (float10)0.017453292519943295);
    fVar3 = (float)fVar8;
    fVar8 = SQRT((float10)fVar1 * (float10)fVar1 +
                 (float10)fVar2 * (float10)fVar2 + fVar8 * (float10)fVar3);
    if (fVar8 == (float10)0.0) {
      fVar15 = 1.0;
      fVar13 = 0.0;
      fVar11 = 0.0;
      this = aVStack_30;
    }
    else {
      fVar8 = (float10)1.0 / fVar8;
      fVar15 = (float)(fVar8 * (float10)fVar3);
      fVar13 = (float)(fVar8 * (float10)fVar2);
      this = &VStack_c;
      fVar11 = (float)(fVar8 * (float10)fVar1);
    }
    puVar4 = (undefined4 *)Vector::Vector(this,fVar11,fVar13,fVar15);
    Vector::Vector(&VStack_3c,puVar4);
    fStack_bc = fVar1 * 1024.0;
    fStack_b8 = fVar2 * 1024.0;
    iVar12 = *(int *)(param_2[1] + 0x208);
    puVar16 = auStack_18;
    fStack_b4 = fVar3 * 1024.0;
    pfVar5 = (float *)(**(code **)(*param_2 + 0x160))();
    fStack_90 = VStack_c8.z + *pfVar5;
    fStack_8c = fStack_bc + pfVar5[1];
    fStack_88 = fStack_b8 + pfVar5[2];
    puVar14 = auStack_78;
    uVar10 = 1;
    fStack_80 = fStack_8c;
    fStack_7c = fStack_88;
    uVar6 = (**(code **)(*param_2 + 0x160))(&aVStack_30[0].z,&fStack_90);
    UTIL_TraceLine(uVar6,uVar10,iVar12,puVar14,puVar16);
    if (fStack_64 == 1.0) {
      *param_1 = fStack_60;
      param_1[1] = fStack_5c;
      param_1[2] = fStack_58;
      return;
    }
    iVar12 = param_2[1];
    fStack_a4 = fStack_60 - *(float *)(iVar12 + 8);
    fStack_a0 = fStack_5c - *(float *)(iVar12 + 0xc);
    fStack_9c = fStack_58 - *(float *)(iVar12 + 0x10);
    Vector::Vector(&VStack_c8,&fStack_a4);
    fVar1 = SQRT(VStack_c8.x * VStack_c8.x + VStack_c8.y * VStack_c8.y + VStack_c8.z * VStack_c8.z);
    if (fStack_cc < fVar1) {
      fStack_b0 = fStack_60;
      fStack_ac = fStack_5c;
      fStack_a8 = fStack_58;
      fStack_cc = fVar1;
    }
    fStack_94 = fStack_94 + 45.0;
    cVar7 = cVar7 + '\x01';
  } while (cVar7 < '\b');
  *param_1 = fStack_b0;
  param_1[1] = fStack_ac;
  param_1[2] = fStack_a8;
  return;
}

