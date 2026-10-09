/* client.dll - unnamed_10041940 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10041940  FUN_10041940  (1 bytes)
 * undefined FUN_10041940()
 */
void FUN_10041940(void)

{
  return;
}

/* 10041950  FUN_10041950  (1 bytes)
 * undefined FUN_10041950()
 */
void FUN_10041950(void)

{
  return;
}

/* 10041960  FUN_10041960  (1 bytes)
 * undefined FUN_10041960()
 */
void FUN_10041960(void)

{
  return;
}

/* 10041970  FUN_10041970  (1 bytes)
 * undefined FUN_10041970()
 */
void FUN_10041970(void)

{
  return;
}

/* 10041980  FUN_10041980  (1 bytes)
 * undefined FUN_10041980()
 */
void FUN_10041980(void)

{
  return;
}

/* 10041990  FUN_10041990  (1 bytes)
 * undefined FUN_10041990()
 */
void FUN_10041990(void)

{
  return;
}

/* 100419a0  FUN_100419a0  (2713 bytes)
 * undefined FUN_100419a0()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100419a0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9)

{
  _func_423 **pp_Var1;
  _func_408 **pp_Var2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  void *this;
  float10 extraout_ST0;
  longlong lVar9;
  float fVar10;
  float *pfVar11;
  float fVar12;
  undefined *puVar13;
  int in_stack_ffffff50;
  undefined *puVar14;
  float fVar15;
  float fVar16;
  float in_stack_ffffff5c;
  int in_stack_ffffff60;
  float in_stack_ffffff64;
  float in_stack_ffffff68;
  float in_stack_ffffff6c;
  float in_stack_ffffff70;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float afStack_8 [2];
  
  if ((DAT_10189f8c & 1) == 0) {
    DAT_10189f8c = DAT_10189f8c | 1;
    FUN_1006af63(0x100424d0);
  }
  if ((DAT_10189f8c & 2) == 0) {
    DAT_10189f8c = DAT_10189f8c | 2;
    FUN_1006af63(0x100424c0);
  }
  if ((DAT_10189f8c & 4) == 0) {
    DAT_10189f8c = DAT_10189f8c | 4;
    FUN_1006af63(0x100424b0);
  }
  if ((DAT_10189f8c & 8) == 0) {
    DAT_10189f8c = DAT_10189f8c | 8;
    FUN_1006af63(0x100424a0);
  }
  if ((DAT_10189f8c & 0x10) == 0) {
    DAT_10189f8c = DAT_10189f8c | 0x10;
    FUN_1006af63(0x10042490);
  }
  if ((DAT_10189f8c & 0x20) == 0) {
    DAT_10189f8c = DAT_10189f8c | 0x20;
    FUN_1006af63(0x10042480);
  }
  if ((DAT_10189f8c & 0x40) == 0) {
    DAT_10189f8c = DAT_10189f8c | 0x40;
    FUN_1006af63(0x10042470);
  }
  if ((DAT_10189f8c & 0x80) == 0) {
    DAT_10189f8c = DAT_10189f8c | 0x80;
    FUN_1006af63(0x10042460);
  }
  if ((DAT_1018a09c & 1) == 0) {
    DAT_1018a09c = DAT_1018a09c | 1;
    FUN_1006af63(0x10042450);
  }
  if ((DAT_1018a09c & 2) == 0) {
    DAT_1018a09c = DAT_1018a09c | 2;
    FUN_1006af63(0x10042440);
  }
  fVar10 = param_1;
  DAT_10189d74 = *(int *)((int)param_1 + 4);
  _DAT_10189be8 = *(undefined4 *)((int)param_1 + 8);
  _DAT_10189bec = *(undefined4 *)((int)param_1 + 0xc);
  _DAT_10189bf0 = *(undefined4 *)((int)param_1 + 0x10);
  _DAT_10189bf8 = *(undefined4 *)((int)param_1 + 0x14);
  _DAT_10189bfc = *(undefined4 *)((int)param_1 + 0x18);
  _DAT_10189c00 = *(undefined4 *)((int)param_1 + 0x1c);
  _DAT_10189f90 = *(float *)((int)param_1 + 0x20);
  _DAT_10189f94 = *(float *)((int)param_1 + 0x24);
  _DAT_10189f98 = *(float *)((int)param_1 + 0x28);
  (*gEngfuncs.pfnAngleVectors)
            ((float *)&DAT_10189bf8,(float *)&DAT_10189fc8,(float *)&DAT_10189e10,
             (float *)&DAT_10189d68);
  DAT_10189ae0 = *(int *)((int)fVar10 + 0x38);
  DAT_1018a054 = *(uint *)((int)fVar10 + 0x3c);
  DAT_10189c54 = FUN_100071c0(*(int *)((int)fVar10 + 0x38));
  if (*(char *)(DAT_10189c54 + 0x3a) == '\0') {
    DAT_10189d60 = 0;
  }
  else {
    DAT_10189d60 = (*(gEngfuncs.pEventAPI)->EV_FindModelIndex)((char *)(DAT_10189c54 + 0x3a));
  }
  _DAT_10189d04 = (*gEngfuncs.pfnRandomLong)(0x3c,0x50);
  _DAT_10189d64 = (*gEngfuncs.pfnRandomLong)(0x32,100);
  iVar4 = FUN_1001c5e0(DAT_10189d74);
  if (iVar4 != 0) {
    DAT_10189f4c = FUN_1003df60((int)DAT_10189c54);
    _DAT_1018a0a4 = FUN_10007110(DAT_10189ae0,DAT_1018a054);
    pp_Var1 = &(gEngfuncs.pEventAPI)->EV_WeaponAnimation;
    iVar4 = (*gEngfuncs.pfnRandomLong)(0,1);
    (**pp_Var1)((int)*(short *)(DAT_10189f4c + 0x1a + iVar4 * 2),in_stack_ffffff50);
    iVar4 = CL_IsThirdPerson();
    if (iVar4 == 0) {
      if (DAT_101914a0 == 0) {
        if (DAT_10189d60 != 0) {
          in_stack_ffffff70 = (float)_DAT_10189d04;
          in_stack_ffffff68 = in_stack_ffffff70 * _DAT_10189fc8;
          in_stack_ffffff6c = in_stack_ffffff70 * _DAT_10189fcc;
          in_stack_ffffff70 = in_stack_ffffff70 * _DAT_10189fd0;
          FUN_10002610(&fStack_2c,(undefined4 *)&stack0xffffff68);
          fStack_18 = (float)_DAT_10189d64;
          fStack_20 = fStack_18 * _DAT_10189d68;
          fStack_1c = _DAT_10189d6c * fStack_18;
          fStack_18 = _DAT_10189d70 * fStack_18;
          FUN_10002610(&fStack_8c,&fStack_20);
          fStack_30 = (float)_DAT_10189d04;
          fStack_38 = fStack_30 * _DAT_10189e10;
          fStack_34 = _DAT_10189e14 * fStack_30;
          fStack_30 = _DAT_10189e18 * fStack_30;
          FUN_10002610(&fStack_50,&fStack_38);
          fStack_80 = fStack_50 + _DAT_10189f90;
          fStack_7c = _DAT_10189f94 + fStack_4c;
          fStack_78 = _DAT_10189f98 + fStack_48;
          FUN_10002610(&fStack_74,&fStack_80);
          fStack_44 = fStack_8c + fStack_74;
          fStack_40 = fStack_88 + fStack_70;
          fStack_3c = fStack_84 + fStack_6c;
          FUN_10002610(&fStack_5c,&fStack_44);
          fStack_68 = fStack_2c + fStack_5c;
          fStack_64 = fStack_28 + fStack_58;
          fStack_60 = fStack_24 + fStack_54;
          FUN_10002610(&fStack_14,&fStack_68);
          FUN_10056890(&DAT_10190b28,(float *)&DAT_10189bf8,&fStack_14,&DAT_10189f90,DAT_10189d60,2)
          ;
        }
      }
      else if (DAT_10189d60 != 0) {
        param_9 = (float)_DAT_10189d04;
        param_7 = param_9 * _DAT_10189fc8;
        param_8 = param_9 * _DAT_10189fcc;
        param_9 = param_9 * _DAT_10189fd0;
        FUN_10002610(&fStack_8c,&param_7);
        param_6 = (float)_DAT_10189d64;
        param_4 = param_6 * _DAT_10189d68;
        param_5 = _DAT_10189d6c * param_6;
        param_6 = _DAT_10189d70 * param_6;
        FUN_10002610(&fStack_2c,&param_4);
        param_3 = (float)_DAT_10189d04;
        param_1 = param_3 * _DAT_10189e10;
        param_2 = _DAT_10189e14 * param_3;
        param_3 = _DAT_10189e18 * param_3;
        FUN_10002610(&fStack_68,&param_1);
        fStack_5c = fStack_68 + _DAT_10189f90;
        fStack_58 = _DAT_10189f94 + fStack_64;
        fStack_54 = _DAT_10189f98 + fStack_60;
        FUN_10002610(&fStack_44,&fStack_5c);
        fStack_74 = fStack_2c + fStack_44;
        fStack_70 = fStack_28 + fStack_40;
        fStack_6c = fStack_24 + fStack_3c;
        FUN_10002610(&fStack_80,&fStack_74);
        fStack_50 = fStack_8c + fStack_80;
        fStack_4c = fStack_88 + fStack_7c;
        fStack_48 = fStack_84 + fStack_78;
        FUN_10002610(afStack_8,&fStack_50);
        fStack_30 = (float)(int)DAT_10189c54[0xd3];
        fStack_38 = fStack_30 * _DAT_10189fc8;
        fStack_34 = fStack_30 * _DAT_10189fcc;
        fStack_30 = fStack_30 * _DAT_10189fd0;
        FUN_10002610(&fStack_20,&fStack_38);
        in_stack_ffffff68 = *(float *)(DAT_101914a0 + 0xb60) - fStack_20;
        in_stack_ffffff6c = *(float *)(DAT_101914a0 + 0xb64) - fStack_1c;
        in_stack_ffffff70 = *(float *)(DAT_101914a0 + 0xb68) - fStack_18;
        FUN_10002610(&fStack_14,(undefined4 *)&stack0xffffff68);
        pfVar7 = afStack_8;
        puVar14 = &DAT_10189f90;
        puVar13 = &DAT_10189bf8;
        FUN_10056890(&fStack_14,(float *)&DAT_10189bf8,pfVar7,&DAT_10189f90,DAT_10189d60,2);
        fVar16 = 1.4013e-45;
        fVar15 = 4.0;
        FUN_10002610(&stack0xffffff48,(undefined4 *)&DAT_10189e10);
        pfVar11 = &fStack_14;
        fVar12 = 10.0;
        fVar10 = 2.605612e-29;
        puVar5 = (undefined4 *)FUN_1003efb0(&DAT_10189f90,pfVar11,10.0);
        FUN_10002610(&stack0xffffff3c,puVar5);
        pfVar6 = (float *)FUN_1003d240(&DAT_10189fc8,afStack_8,(float)(int)DAT_10189c54[0xd3]);
        puVar5 = (undefined4 *)
                 FUN_1003d200((void *)(DAT_101914a0 + 0xb60),(float *)&stack0xffffff68,pfVar6);
        FUN_10002610(&stack0xffffff30,puVar5);
        iVar4 = (*gEngfuncs.pfnRandomLong)(0x14,0x28);
        FUN_10047130(1,iVar4,(float)pfVar6,fVar10,(float)pfVar11,fVar12,(float)puVar13,(float)pfVar7
                     ,(float)puVar14,fVar15,fVar16,in_stack_ffffff5c,in_stack_ffffff60);
      }
    }
  }
  iVar4 = CL_IsThirdPerson();
  if (iVar4 == 0) {
    iVar4 = FUN_1001c5e0(DAT_10189d74);
    if (iVar4 != 0) goto LAB_100423c6;
  }
  cVar3 = FUN_100579a0(DAT_10189d74);
  if ((cVar3 != '\0') && (DAT_10189d60 != 0)) {
    fStack_88 = (float)_DAT_10189d04;
    in_stack_ffffff70 = fStack_88 * _DAT_10189fc8;
    fStack_8c = fStack_88 * _DAT_10189fcc;
    fStack_88 = fStack_88 * _DAT_10189fd0;
    FUN_10002610(&fStack_3c,(undefined4 *)&stack0xffffff70);
    fStack_10 = (float)_DAT_10189d64;
    fStack_18 = fStack_10 * _DAT_10189d68;
    fStack_14 = _DAT_10189d6c * fStack_10;
    fStack_10 = _DAT_10189d70 * fStack_10;
    FUN_10002610(&fStack_84,&fStack_18);
    fStack_28 = (float)_DAT_10189d04;
    fStack_30 = fStack_28 * _DAT_10189e10;
    fStack_2c = _DAT_10189e14 * fStack_28;
    fStack_28 = _DAT_10189e18 * fStack_28;
    FUN_10002610(&fStack_48,&fStack_30);
    fStack_78 = fStack_48 + _DAT_10189f90;
    fStack_74 = _DAT_10189f94 + fStack_44;
    fStack_70 = _DAT_10189f98 + fStack_40;
    FUN_10002610(&fStack_6c,&fStack_78);
    puVar5 = (undefined4 *)
             FUN_10009190(&param_3,fStack_84 + fStack_6c,fStack_80 + fStack_68,fStack_7c + fStack_64
                         );
    FUN_10002610(&fStack_24,puVar5);
    puVar5 = (undefined4 *)
             FUN_10009190(&param_6,fStack_3c + fStack_24,fStack_38 + fStack_20,fStack_34 + fStack_1c
                         );
    FUN_10002610(&fStack_c,puVar5);
    fStack_4c = (float)(int)DAT_10189c54[0xd3];
    fStack_54 = fStack_4c * _DAT_10189fc8;
    fStack_50 = fStack_4c * _DAT_10189fcc;
    fStack_4c = fStack_4c * _DAT_10189fd0;
    FUN_10002610(&fStack_60,&fStack_54);
    pfVar7 = (float *)FUN_10056be0(&param_9,DAT_10189d74,3);
    puVar5 = (undefined4 *)
             FUN_10009190(&stack0x00000030,*pfVar7 - fStack_60,pfVar7[1] - fStack_5c,
                          pfVar7[2] - fStack_58);
    FUN_10002610(&stack0x00000000,puVar5);
    pfVar7 = &fStack_c;
    puVar14 = &DAT_10189f90;
    puVar13 = &DAT_10189bf8;
    FUN_10056890(&stack0x00000000,(float *)&DAT_10189bf8,pfVar7,&DAT_10189f90,DAT_10189d60,2);
    fVar16 = 1.4013e-45;
    fVar15 = 4.0;
    FUN_10002610(&stack0xffffff50,(undefined4 *)&DAT_10189e10);
    pfVar11 = (float *)&stack0x00000030;
    fVar12 = 10.0;
    fVar10 = 2.6059614e-29;
    puVar5 = (undefined4 *)FUN_1003efb0(&DAT_10189f90,pfVar11,10.0);
    FUN_10002610(&stack0xffffff44,puVar5);
    pfVar8 = (float *)FUN_1003d240(&DAT_10189fc8,&fStack_c,(float)(int)DAT_10189c54[0xd3]);
    pfVar6 = (float *)register0x00000010;
    this = (void *)FUN_10056be0((undefined4 *)&stack0xffffff70,DAT_10189d74,3);
    puVar5 = (undefined4 *)FUN_1003d200(this,pfVar6,pfVar8);
    FUN_10002610(&stack0xffffff38,puVar5);
    iVar4 = (*gEngfuncs.pfnRandomLong)(0x14,0x28);
    FUN_10047130(1,iVar4,(float)pfVar8,fVar10,(float)pfVar11,fVar12,(float)puVar13,(float)pfVar7,
                 (float)puVar14,fVar15,fVar16,in_stack_ffffff64,(int)in_stack_ffffff68);
  }
LAB_100423c6:
  iVar4 = (*gEngfuncs.pfnRandomLong)(-5,5);
  lVar9 = __ftol();
  fVar10 = (float)(iVar4 + (0x19 - (int)lVar9));
  pp_Var2 = &(gEngfuncs.pEventAPI)->EV_PlaySound;
  (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
  (**pp_Var2)(-1,(float *)&DAT_10189be8,1,(char *)((int)DAT_10189c54 + 0x306),(float)extraout_ST0,
              fVar10,(int)in_stack_ffffff6c,(int)in_stack_ffffff70);
  return;
}

/* 10042440  FUN_10042440  (1 bytes)
 * undefined FUN_10042440()
 */
void FUN_10042440(void)

{
  return;
}

/* 10042450  FUN_10042450  (1 bytes)
 * undefined FUN_10042450()
 */
void FUN_10042450(void)

{
  return;
}

/* 10042460  FUN_10042460  (1 bytes)
 * undefined FUN_10042460()
 */
void FUN_10042460(void)

{
  return;
}

/* 10042470  FUN_10042470  (1 bytes)
 * undefined FUN_10042470()
 */
void FUN_10042470(void)

{
  return;
}

/* 10042480  FUN_10042480  (1 bytes)
 * undefined FUN_10042480()
 */
void FUN_10042480(void)

{
  return;
}

/* 10042490  FUN_10042490  (1 bytes)
 * undefined FUN_10042490()
 */
void FUN_10042490(void)

{
  return;
}

/* 100424a0  FUN_100424a0  (1 bytes)
 * undefined FUN_100424a0()
 */
void FUN_100424a0(void)

{
  return;
}

/* 100424b0  FUN_100424b0  (1 bytes)
 * undefined FUN_100424b0()
 */
void FUN_100424b0(void)

{
  return;
}

/* 100424c0  FUN_100424c0  (1 bytes)
 * undefined FUN_100424c0()
 */
void FUN_100424c0(void)

{
  return;
}

/* 100424d0  FUN_100424d0  (1 bytes)
 * undefined FUN_100424d0()
 */
void FUN_100424d0(void)

{
  return;
}

/* 100424e0  FUN_100424e0  (182 bytes)
 * undefined FUN_100424e0()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100424e0(int param_1)

{
  _func_408 **pp_Var1;
  int iVar2;
  float attenuation;
  float10 extraout_ST0;
  longlong lVar3;
  int unaff_retaddr;
  
  if ((DAT_10189f9c & 1) == 0) {
    DAT_10189f9c = DAT_10189f9c | 1;
    FUN_1006af63(0x100425a0);
  }
  DAT_10189fbc = *(int *)(param_1 + 4);
  _DAT_10189c68 = *(undefined4 *)(param_1 + 8);
  _DAT_10189c6c = *(undefined4 *)(param_1 + 0xc);
  _DAT_10189c70 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = (*gEngfuncs.pfnRandomLong)(-5,5);
  lVar3 = __ftol();
  attenuation = (float)(iVar2 + (0x19 - (int)lVar3));
  pp_Var1 = &(gEngfuncs.pEventAPI)->EV_PlaySound;
  (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
  (**pp_Var1)(DAT_10189fbc,(float *)&DAT_10189c68,1,s_weapons_pistol_empty_wav_100911e4,
              (float)extraout_ST0,attenuation,unaff_retaddr,param_1);
  return;
}

/* 100425a0  FUN_100425a0  (1 bytes)
 * undefined FUN_100425a0()
 */
void FUN_100425a0(void)

{
  return;
}

/* 100425b0  FUN_100425b0  (123 bytes)
 * undefined FUN_100425b0(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100425b0(int param_1)

{
  undefined4 uVar1;
  
  DAT_10189ca0 = *(int *)(param_1 + 0x38);
  DAT_10189e3c = FUN_100071c0(*(int *)(param_1 + 0x38));
  DAT_10189ff4 = *(uint *)(param_1 + 0x3c);
  _DAT_10189eb4 = *(int *)(param_1 + 4);
  uVar1 = FUN_1001c5c0(_DAT_10189eb4);
  if ((char)uVar1 != '\0') {
    DAT_10189c04 = FUN_1003df60((int)DAT_10189e3c);
    _DAT_10189f5c = FUN_10007110(DAT_10189ca0,DAT_10189ff4);
    (*(gEngfuncs.pEventAPI)->EV_WeaponAnimation)((int)*(short *)(DAT_10189c04 + 4),_DAT_10189f5c);
  }
  return;
}

/* 10042630  FUN_10042630  (91 bytes)
 * undefined FUN_10042630(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10042630(int param_1)

{
  undefined4 uVar1;
  
  DAT_10189abc = *(int *)(param_1 + 0x38);
  DAT_1018a0c4 = FUN_100071c0(0x18);
  _DAT_10189ee8 = *(int *)(param_1 + 4);
  uVar1 = FUN_1001c5c0(_DAT_10189ee8);
  if ((char)uVar1 != '\0') {
    _DAT_10189ffc = FUN_1003df60((int)DAT_1018a0c4);
    (*(gEngfuncs.pEventAPI)->EV_WeaponAnimation)
              ((int)*(short *)(_DAT_10189ffc + DAT_10189abc * 2),1);
  }
  return;
}

/* 10042690  FUN_10042690  (2813 bytes)
 * undefined FUN_10042690()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042690(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9,float param_10,
                 float param_11,float param_12,float param_13,float param_14,float param_15,
                 float param_16)

{
  _func_408 **pp_Var1;
  short sVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  int iVar9;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  longlong lVar10;
  float unaff_retaddr;
  int in_stack_ffffff74;
  int in_stack_ffffff78;
  int iStack_48;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((DAT_10189acc & 1) == 0) {
    DAT_10189acc = DAT_10189acc | 1;
    FUN_1006af63(0x100431f0);
  }
  if ((DAT_10189acc & 2) == 0) {
    DAT_10189acc = DAT_10189acc | 2;
    FUN_1006af63(0x100431e0);
  }
  if ((DAT_10189acc & 4) == 0) {
    DAT_10189acc = DAT_10189acc | 4;
    FUN_1006af63(0x100431d0);
  }
  if ((DAT_10189acc & 8) == 0) {
    DAT_10189acc = DAT_10189acc | 8;
    FUN_1006af63(0x100431c0);
  }
  if ((DAT_10189acc & 0x10) == 0) {
    DAT_10189acc = DAT_10189acc | 0x10;
    FUN_1006af63(0x100431b0);
  }
  if ((DAT_10189acc & 0x20) == 0) {
    DAT_10189acc = DAT_10189acc | 0x20;
    FUN_1006af63(0x100431a0);
  }
  if ((DAT_10189acc & 0x40) == 0) {
    DAT_10189acc = DAT_10189acc | 0x40;
    FUN_1006af63(0x10043190);
  }
  DAT_10189d0c = *(int *)((int)param_1 + 0x38);
  DAT_10189ae4 = FUN_100071c0(*(int *)((int)param_1 + 0x38));
  DAT_10189c98 = *(uint *)((int)param_1 + 0x3c);
  lVar10 = __ftol();
  DAT_101899d0 = (int)lVar10;
  DAT_10189f40 = *(int *)((int)param_1 + 4);
  _DAT_10189f80 = *(undefined4 *)((int)param_1 + 8);
  _DAT_10189f84 = *(undefined4 *)((int)param_1 + 0xc);
  _DAT_10189f88 = *(undefined4 *)((int)param_1 + 0x10);
  _DAT_10189c88 = *(undefined4 *)((int)param_1 + 0x14);
  _DAT_10189c8c = *(undefined4 *)((int)param_1 + 0x18);
  _DAT_10189c90 = *(undefined4 *)((int)param_1 + 0x1c);
  _DAT_10189f10 = *(float *)((int)param_1 + 0x20);
  _DAT_10189f14 = *(float *)((int)param_1 + 0x24);
  _DAT_10189f18 = *(float *)((int)param_1 + 0x28);
  (*gEngfuncs.pfnAngleVectors)
            ((float *)&DAT_10189c88,(float *)&DAT_10189de8,(float *)&DAT_10189d98,
             (float *)&DAT_10189cd8);
  uVar4 = FUN_1001c5c0(DAT_10189f40);
  if (((char)uVar4 != '\0') || (iVar5 = FUN_1001c5e0(DAT_10189f40), iVar5 != 0)) {
    DAT_10189d08 = FUN_1003df60((int)DAT_10189ae4);
    _DAT_10189c58 = FUN_10007110(DAT_10189d0c,DAT_10189c98);
    if (DAT_101899d0 == 0) {
      sVar2 = *(short *)(DAT_10189d08 + 2);
    }
    else {
      sVar2 = *(short *)(DAT_10189d08 + DAT_101899d0 * 2);
    }
    (*(gEngfuncs.pEventAPI)->EV_WeaponAnimation)((int)sVar2,_DAT_10189c58);
  }
  if (DAT_101899d0 == 9) {
    iVar5 = (*gEngfuncs.pfnRandomLong)(-5,5);
    lVar10 = __ftol();
    fVar8 = (float)(iVar5 + (0x19 - (int)lVar10));
    pp_Var1 = &(gEngfuncs.pEventAPI)->EV_PlaySound;
    (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
    (**pp_Var1)(DAT_10189f40,(float *)&DAT_10189f80,1,s_weapons_insert_shell_wav_100953a4,
                (float)extraout_ST0,fVar8,in_stack_ffffff74,in_stack_ffffff78);
  }
  if ((DAT_101899d0 == 10) &&
     ((iVar5 = CL_IsThirdPerson(), iVar5 != 0 || (iVar5 = FUN_1001c5e0(DAT_10189f40), iVar5 == 0))))
  {
    iVar5 = (*gEngfuncs.pfnRandomLong)(-5,5);
    lVar10 = __ftol();
    fVar8 = (float)(iVar5 + (0x19 - (int)lVar10));
    pp_Var1 = &(gEngfuncs.pEventAPI)->EV_PlaySound;
    (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
    (**pp_Var1)(DAT_10189f40,(float *)&DAT_10189f80,1,(char *)((int)DAT_10189ae4 + 0x306),
                (float)extraout_ST0_00,fVar8,in_stack_ffffff74,in_stack_ffffff78);
  }
  if (DAT_101899d0 == 0) {
    iVar5 = CL_IsThirdPerson();
    if ((iVar5 == 0) && (iVar5 = FUN_1001c5e0(DAT_10189f40), iVar5 != 0)) {
      return;
    }
    iVar5 = (*gEngfuncs.pfnRandomLong)(-5,5);
    lVar10 = __ftol();
    fVar8 = (float)(iVar5 + (0x19 - (int)lVar10));
    pp_Var1 = &(gEngfuncs.pEventAPI)->EV_PlaySound;
    (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
    (**pp_Var1)(DAT_10189f40,(float *)&DAT_10189f80,1,s_weapons_generic_reload_wav_10095388,
                (float)extraout_ST0_01,fVar8,in_stack_ffffff74,in_stack_ffffff78);
    cVar3 = FUN_100579a0(DAT_10189f40);
    if (cVar3 != '\0') {
      if (DAT_10189d0c == 0x21) {
        iVar5 = (*(gEngfuncs.pEventAPI)->EV_FindModelIndex)(s_models_shotgun_shell_mdl_10092510);
        iVar9 = 2;
        do {
          (*gEngfuncs.pfnRandomLong)(-0x1e,0x1e);
          iVar6 = (*gEngfuncs.pfnRandomLong)(0,0x1e);
          fStack_38 = (float)iVar6;
          fStack_40 = fStack_38 * _DAT_10189cd8;
          fStack_3c = _DAT_10189cdc * fStack_38;
          fStack_38 = _DAT_10189ce0 * fStack_38;
          FUN_10002610(&fStack_1c,&fStack_40);
          param_5 = _DAT_10189de8 * 10.0;
          param_6 = _DAT_10189dec * 10.0;
          param_7 = _DAT_10189df0 * 10.0;
          FUN_10002610(&param_2,&param_5);
          param_10 = (float)iStack_48;
          param_8 = param_10 * _DAT_10189d98;
          param_9 = _DAT_10189d9c * param_10;
          param_10 = _DAT_10189da0 * param_10;
          FUN_10002610(&param_14,&param_8);
          param_11 = param_14 + _DAT_10189f10;
          param_12 = _DAT_10189f14 + param_15;
          param_13 = _DAT_10189f18 + param_16;
          FUN_10002610(&fStack_34,&param_11);
          fStack_28 = param_2 + fStack_34;
          fStack_24 = param_3 + fStack_30;
          fStack_20 = param_4 + fStack_2c;
          FUN_10002610(&fStack_4,&fStack_28);
          fStack_10 = fStack_1c + fStack_4;
          fStack_c = fStack_18 + unaff_retaddr;
          fStack_8 = fStack_14 + param_1;
          FUN_10002610(&stack0x00000044,&fStack_10);
          uVar4 = FUN_10056be0((undefined4 *)&stack0x00000050,DAT_10189f40,0);
          FUN_10056890(uVar4,(float *)&DAT_10189c88,&stack0x00000044,&DAT_10189f10,iVar5,2);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      else {
        if (DAT_10189d0c == 0x1f) {
          iVar5 = (*(gEngfuncs.pEventAPI)->EV_FindModelIndex)(s_models_9mm_shell_mdl_10091524);
          iVar9 = 5;
          do {
            (*gEngfuncs.pfnRandomLong)(-0x1e,0x1e);
            iVar6 = (*gEngfuncs.pfnRandomLong)(0,0x1e);
            fStack_8 = (float)iVar6;
            fStack_10 = fStack_8 * _DAT_10189cd8;
            fStack_c = _DAT_10189cdc * fStack_8;
            fStack_8 = _DAT_10189ce0 * fStack_8;
            FUN_10002610(&param_8,&fStack_10);
            fStack_4 = _DAT_10189de8 * 10.0;
            FUN_10002610(&param_2,&fStack_4);
            fStack_14 = (float)iStack_44;
            fStack_1c = fStack_14 * _DAT_10189d98;
            fStack_18 = _DAT_10189d9c * fStack_14;
            fStack_14 = _DAT_10189da0 * fStack_14;
            FUN_10002610(&fStack_28,&fStack_1c);
            fStack_34 = fStack_28 + _DAT_10189f10;
            fStack_30 = _DAT_10189f14 + fStack_24;
            fStack_2c = _DAT_10189f18 + fStack_20;
            FUN_10002610(&param_11,&fStack_34);
            param_14 = param_2 + param_11;
            param_15 = param_3 + param_12;
            param_16 = param_4 + param_13;
            FUN_10002610(&param_5,&param_14);
            fStack_40 = param_8 + param_5;
            fStack_3c = param_9 + param_6;
            fStack_38 = param_10 + param_7;
            FUN_10002610(&stack0x00000044,&fStack_40);
            uVar4 = FUN_10056be0((undefined4 *)&stack0x00000050,DAT_10189f40,0);
            FUN_10056890(uVar4,(float *)&DAT_10189c88,&stack0x00000044,&DAT_10189f10,iVar5,1);
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          return;
        }
        if (DAT_10189d0c == 0x24) {
          iVar5 = (*(gEngfuncs.pEventAPI)->EV_FindModelIndex)(s_models_556_shell_mdl_10091264);
          (*gEngfuncs.pfnRandomLong)(-0x1e,0x1e);
          iVar9 = (*gEngfuncs.pfnRandomLong)(0,0x1e);
          fStack_8 = (float)iVar9;
          fStack_10 = fStack_8 * _DAT_10189cd8;
          fStack_c = _DAT_10189cdc * fStack_8;
          fStack_8 = _DAT_10189ce0 * fStack_8;
          FUN_10002610(&param_8,&fStack_10);
          fStack_4 = _DAT_10189de8 * 10.0;
          FUN_10002610(&param_2,&fStack_4);
          fStack_14 = (float)iStack_44;
          fStack_1c = fStack_14 * _DAT_10189d98;
          fStack_18 = _DAT_10189d9c * fStack_14;
          fStack_14 = _DAT_10189da0 * fStack_14;
          FUN_10002610(&fStack_28,&fStack_1c);
          fStack_34 = fStack_28 + _DAT_10189f10;
          fStack_30 = _DAT_10189f14 + fStack_24;
          fStack_2c = _DAT_10189f18 + fStack_20;
          FUN_10002610(&param_11,&fStack_34);
          param_14 = param_2 + param_11;
          param_15 = param_3 + param_12;
          param_16 = param_4 + param_13;
          FUN_10002610(&param_5,&param_14);
          fStack_40 = param_8 + param_5;
          fStack_3c = param_9 + param_6;
          fStack_38 = param_10 + param_7;
          FUN_10002610(&stack0x00000044,&fStack_40);
          uVar4 = FUN_10056be0((undefined4 *)&stack0x00000050,DAT_10189f40,0);
          FUN_10056890(uVar4,(float *)&DAT_10189c88,&stack0x00000044,&DAT_10189f10,iVar5,1);
          return;
        }
        iVar5 = 0;
        while( true ) {
          if ((*(char *)(DAT_10189ae4 + 0xd2) == '\x04') ||
             (iVar9 = 1, *(char *)(DAT_10189ae4 + 0xd2) == '\x05')) {
            iVar9 = 2;
          }
          if (iVar9 <= iVar5) break;
          (*gEngfuncs.pfnRandomFloat)(-60.0,60.0);
          _DAT_10189dcc = (float)extraout_ST0_02;
          (*gEngfuncs.pfnRandomFloat)(-60.0,60.0);
          _DAT_10189dc8 = (float)extraout_ST0_03;
          (*gEngfuncs.pfnRandomFloat)(-60.0,60.0);
          _DAT_10189dd0 = (float)extraout_ST0_04;
          DAT_1018a03c = (*(gEngfuncs.pEventAPI)->EV_FindModelIndex)
                                   (s_models_generic_clip_mdl_10095370);
          fStack_40 = (float)((-(uint)(iVar5 != 0) & 0xffffff88) + 0x3c);
          fVar8 = (float)(int)fStack_40;
          fStack_8 = fVar8 * _DAT_10189d98;
          fStack_4 = _DAT_10189d9c * fVar8;
          fStack_20 = fStack_8 + _DAT_10189f10;
          param_2 = _DAT_10189f14 + fStack_4;
          param_3 = _DAT_10189f18 + fVar8 * _DAT_10189da0;
          fStack_38 = _DAT_10189de8 * 8.0;
          fStack_34 = _DAT_10189dec * 8.0;
          fStack_30 = _DAT_10189df0 * 8.0;
          fStack_1c = param_2;
          fStack_18 = param_3;
          pfVar7 = (float *)FUN_10056be0((undefined4 *)&stack0x00000058,DAT_10189f40,
                                         (byte)-(iVar5 != 0) & 2);
          fStack_2c = *pfVar7 - fStack_38;
          fStack_28 = pfVar7[1] - fStack_34;
          fStack_24 = pfVar7[2] - fStack_30;
          fStack_10 = fStack_28;
          fStack_c = fStack_24;
          (*(gEngfuncs.pEfxAPI)->R_TempModel)
                    (&fStack_2c,&fStack_20,(float *)&DAT_10189dc8,2.0,DAT_1018a03c,0);
          iVar5 = iVar5 + 1;
        }
      }
    }
  }
  return;
}

/* 10043190  FUN_10043190  (1 bytes)
 * undefined FUN_10043190()
 */
void FUN_10043190(void)

{
  return;
}

/* 100431a0  FUN_100431a0  (1 bytes)
 * undefined FUN_100431a0()
 */
void FUN_100431a0(void)

{
  return;
}

/* 100431b0  FUN_100431b0  (1 bytes)
 * undefined FUN_100431b0()
 */
void FUN_100431b0(void)

{
  return;
}

/* 100431c0  FUN_100431c0  (1 bytes)
 * undefined FUN_100431c0()
 */
void FUN_100431c0(void)

{
  return;
}

/* 100431d0  FUN_100431d0  (1 bytes)
 * undefined FUN_100431d0()
 */
void FUN_100431d0(void)

{
  return;
}

/* 100431e0  FUN_100431e0  (1 bytes)
 * undefined FUN_100431e0()
 */
void FUN_100431e0(void)

{
  return;
}

/* 100431f0  FUN_100431f0  (1 bytes)
 * undefined FUN_100431f0()
 */
void FUN_100431f0(void)

{
  return;
}

/* 10043200  FUN_10043200  (1385 bytes)
 * undefined FUN_10043200()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043200(undefined *param_1,float param_2,float param_3,undefined *param_4,float param_5,
                 float param_6,float param_7,char *param_8,undefined *param_9,undefined *param_10,
                 undefined *param_11)

{
  _func_408 **pp_Var1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  longlong lVar8;
  short sStack00000028;
  int in_stack_ffffffe4;
  float in_stack_ffffffe8;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  undefined *puStack_8;
  float fStack_4;
  
  if ((DAT_10189ec5 & 1) == 0) {
    DAT_10189ec5 = DAT_10189ec5 | 1;
    FUN_1006af63(0x100437f0);
  }
  if ((DAT_10189ec5 & 2) == 0) {
    DAT_10189ec5 = DAT_10189ec5 | 2;
    FUN_1006af63(0x100437e0);
  }
  if ((DAT_10189ec5 & 4) == 0) {
    DAT_10189ec5 = DAT_10189ec5 | 4;
    FUN_1006af63(0x100437d0);
  }
  if ((DAT_10189ec5 & 8) == 0) {
    DAT_10189ec5 = DAT_10189ec5 | 8;
    FUN_1006af63(0x100437c0);
  }
  if ((DAT_10189ec5 & 0x10) == 0) {
    DAT_10189ec5 = DAT_10189ec5 | 0x10;
    FUN_1006af63(0x100437b0);
  }
  if ((DAT_10189ec5 & 0x20) == 0) {
    DAT_10189ec5 = DAT_10189ec5 | 0x20;
    FUN_1006af63(0x100437a0);
  }
  if ((DAT_10189ec5 & 0x40) == 0) {
    DAT_10189ec5 = DAT_10189ec5 | 0x40;
    FUN_1006af63(0x10043790);
  }
  if ((DAT_10189ec5 & 0x80) == 0) {
    DAT_10189ec5 = DAT_10189ec5 | 0x80;
    FUN_1006af63(0x10043780);
  }
  if ((DAT_10189a4c & 1) == 0) {
    DAT_10189a4c = DAT_10189a4c | 1;
    FUN_1006af63(0x10043770);
  }
  fVar7 = (float)param_1;
  DAT_10189b14 = *(int *)((int)param_1 + 4);
  _DAT_10189a20 = *(undefined4 *)((int)param_1 + 8);
  _DAT_10189a24 = *(undefined4 *)((int)param_1 + 0xc);
  _DAT_10189a28 = *(undefined4 *)((int)param_1 + 0x10);
  _DAT_10189ca8 = *(undefined4 *)((int)param_1 + 0x14);
  _DAT_10189cac = *(undefined4 *)((int)param_1 + 0x18);
  _DAT_10189cb0 = *(undefined4 *)((int)param_1 + 0x1c);
  _DAT_10189b58 = *(undefined4 *)((int)param_1 + 0x20);
  _DAT_10189b5c = *(undefined4 *)((int)param_1 + 0x24);
  _DAT_10189b60 = *(undefined4 *)((int)param_1 + 0x28);
  (*gEngfuncs.pfnAngleVectors)
            ((float *)&DAT_10189ca8,(float *)&DAT_10189a40,(float *)&DAT_10189e60,
             (float *)&DAT_10189f50);
  DAT_10189fa0 = *(int *)((int)fVar7 + 0x38);
  iVar6 = *(int *)((int)fVar7 + 0x3c);
  lVar8 = __ftol();
  puVar3 = FUN_100071c0((int)lVar8);
  uVar4 = FUN_1001c5c0(DAT_10189b14);
  if (((char)uVar4 != '\0') || (iVar5 = FUN_1001c5e0(DAT_10189b14), iVar5 != 0)) {
    (*(gEngfuncs.pEventAPI)->EV_WeaponAnimation)((int)*(short *)((int)puVar3 + iVar6 * 2 + 0x252),0)
    ;
  }
  FUN_1001c620((int)fVar7,(float *)&DAT_10189a50,(float *)&DAT_10189a20);
  if (DAT_10189fa0 == 0) {
    iVar6 = (*gEngfuncs.pfnRandomLong)(-5,5);
    lVar8 = __ftol();
    fVar7 = (float)(iVar6 + (0x19 - (int)lVar8));
    pp_Var1 = &(gEngfuncs.pEventAPI)->EV_PlaySound;
    (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
    (**pp_Var1)(DAT_10189b14,(float *)&DAT_10189a20,1,s_player_block_wav_100953c0,
                (float)extraout_ST0_00,fVar7,in_stack_ffffffe4,(int)in_stack_ffffffe8);
    return;
  }
  if (DAT_10189fa0 == 3) {
    _DAT_1018a0a8 = _DAT_10189a40 * -55.0 + _DAT_10189a50;
    _DAT_1018a0ac = (undefined *)(_DAT_10189a44 * -55.0 + _DAT_10189a54);
    _DAT_1018a0b0 = _DAT_10189a48 * -55.0 + _DAT_10189a58;
    in_stack_ffffffe8 = _DAT_1018a0a8;
    puStack_8 = _DAT_1018a0ac;
    fStack_4 = _DAT_1018a0b0;
  }
  else if (DAT_10189fa0 == 2) {
    puStack_8 = (undefined *)(_DAT_10189a44 * 45.0);
    fStack_4 = _DAT_10189a48 * 45.0;
    in_stack_ffffffe8 = _DAT_10189a40 * 45.0 + _DAT_10189a50;
    FUN_10002610(&fStack_c,(undefined4 *)&stack0xffffffe8);
    _DAT_1018a0a8 = fStack_c;
    _DAT_1018a0ac = puStack_8;
    _DAT_1018a0b0 = fStack_4;
  }
  else {
    fStack_c = _DAT_10189a40 * 35.0;
    puStack_8 = (undefined *)(_DAT_10189a44 * 35.0);
    fStack_4 = _DAT_10189a48 * 35.0;
    FUN_10002610(&stack0xffffffe8,&fStack_c);
    param_1 = (undefined *)(fStack_14 + _DAT_10189a54);
    param_2 = fStack_10 + _DAT_10189a58;
    FUN_10002610(&stack0x0000000c,(undefined4 *)&stack0x00000000);
    _DAT_1018a0a8 = param_3;
    _DAT_1018a0ac = param_4;
    _DAT_1018a0b0 = param_5;
  }
  iVar6 = (*gEngfuncs.pfnRandomLong)(-5,5);
  lVar8 = __ftol();
  fVar7 = (float)(iVar6 + (0x19 - (int)lVar8));
  pp_Var1 = &(gEngfuncs.pEventAPI)->EV_PlaySound;
  (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
  (**pp_Var1)(DAT_10189b14,(float *)&DAT_10189a20,1,s_player_closecombat_wav_1009540c,
              (float)extraout_ST0,fVar7,in_stack_ffffffe4,(int)in_stack_ffffffe8);
  (*(gEngfuncs.pEventAPI)->EV_SetUpPlayerPrediction)(0,1);
  (*(gEngfuncs.pEventAPI)->EV_PushPMStates)();
  (*(gEngfuncs.pEventAPI)->EV_SetSolidPlayers)(DAT_10189b14 + -1);
  (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
  (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
            ((float *)&DAT_10189a50,(float *)&DAT_1018a0a8,2,-1,(pmtrace_s *)&DAT_1018a058);
  if (_DAT_1018a068 == 1.0) goto LAB_100436eb;
  param_11 = &DAT_1018a0a8;
  _sStack00000028 = &DAT_10189a50;
  param_9 = &DAT_1018a058;
  param_8 = (char *)DAT_10189b14;
  param_7 = 2.6074467e-29;
  cVar2 = FUN_10045df0(DAT_10189b14,0x1018a058,&DAT_10189a50,&DAT_1018a0a8);
  if (cVar2 == 'D') {
LAB_100436ba:
    param_8 = s_sprites_wood_smoke_add_spr_100953d4;
  }
  else {
    if (cVar2 == 'F') goto LAB_100436eb;
    if (cVar2 == 'W') goto LAB_100436ba;
    param_8 = s_sprites_gun_smoke_add_spr_100953f0;
  }
  param_11 = (undefined *)0x1e;
  _sStack00000028 = (undefined *)0xc;
  param_9 = (undefined *)0x5;
  param_4 = &DAT_1018a078;
  param_3 = 2.6074648e-29;
  FUN_10002610(&stack0x00000014,(undefined4 *)&DAT_1018a078);
  param_1 = &DAT_1018a06c;
  FUN_10002610(&stack0x00000008,(undefined4 *)&DAT_1018a06c);
  param_1 = (undefined *)0x100436e8;
  FUN_100464f0(param_2,param_3,(float)param_4,param_5,param_6,param_7,(byte_conflict *)param_8,
               param_9,sStack00000028,(int)param_11);
LAB_100436eb:
  param_11 = (undefined *)0x100436f3;
  (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
  return;
}

/* 10043770  FUN_10043770  (1 bytes)
 * undefined FUN_10043770()
 */
void FUN_10043770(void)

{
  return;
}

/* 10043780  FUN_10043780  (1 bytes)
 * undefined FUN_10043780()
 */
void FUN_10043780(void)

{
  return;
}

/* 10043790  FUN_10043790  (1 bytes)
 * undefined FUN_10043790()
 */
void FUN_10043790(void)

{
  return;
}

/* 100437a0  FUN_100437a0  (1 bytes)
 * undefined FUN_100437a0()
 */
void FUN_100437a0(void)

{
  return;
}

/* 100437b0  FUN_100437b0  (1 bytes)
 * undefined FUN_100437b0()
 */
void FUN_100437b0(void)

{
  return;
}

/* 100437c0  FUN_100437c0  (1 bytes)
 * undefined FUN_100437c0()
 */
void FUN_100437c0(void)

{
  return;
}

/* 100437d0  FUN_100437d0  (1 bytes)
 * undefined FUN_100437d0()
 */
void FUN_100437d0(void)

{
  return;
}

/* 100437e0  FUN_100437e0  (1 bytes)
 * undefined FUN_100437e0()
 */
void FUN_100437e0(void)

{
  return;
}

/* 100437f0  FUN_100437f0  (1 bytes)
 * undefined FUN_100437f0()
 */
void FUN_100437f0(void)

{
  return;
}

/* 10043800  FUN_10043800  (1023 bytes)
 * undefined FUN_10043800()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043800(int param_1)

{
  _func_408 **pp_Var1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  float attenuation;
  float10 extraout_ST0;
  longlong lVar5;
  float pitch;
  float in_stack_00000020;
  float in_stack_00000024;
  undefined *in_stack_00000028;
  float in_stack_0000002c;
  float in_stack_00000030;
  float in_stack_00000034;
  char *in_stack_00000038;
  undefined *in_stack_0000003c;
  short sStack00000040;
  undefined *in_stack_00000044;
  int in_stack_fffffffc;
  
  if ((DAT_10189f3c & 1) == 0) {
    DAT_10189f3c = DAT_10189f3c | 1;
    FUN_1006af63(0x10043c80);
  }
  if ((DAT_10189f3c & 2) == 0) {
    DAT_10189f3c = DAT_10189f3c | 2;
    FUN_1006af63(0x10043c70);
  }
  if ((DAT_10189f3c & 4) == 0) {
    DAT_10189f3c = DAT_10189f3c | 4;
    FUN_1006af63(0x10043c60);
  }
  if ((DAT_10189f3c & 8) == 0) {
    DAT_10189f3c = DAT_10189f3c | 8;
    FUN_1006af63(0x10043c50);
  }
  if ((DAT_10189f3c & 0x10) == 0) {
    DAT_10189f3c = DAT_10189f3c | 0x10;
    FUN_1006af63(0x10043c40);
  }
  if ((DAT_10189f3c & 0x20) == 0) {
    DAT_10189f3c = DAT_10189f3c | 0x20;
    FUN_1006af63(0x10043c30);
  }
  if ((DAT_10189f3c & 0x40) == 0) {
    DAT_10189f3c = DAT_10189f3c | 0x40;
    FUN_1006af63(0x10043c20);
  }
  if ((DAT_10189f3c & 0x80) == 0) {
    DAT_10189f3c = DAT_10189f3c | 0x80;
    FUN_1006af63(0x10043c10);
  }
  if ((DAT_10189dc4 & 1) == 0) {
    DAT_10189dc4 = DAT_10189dc4 | 1;
    FUN_1006af63(0x10043c00);
  }
  DAT_10189c74 = FUN_100071c0(*(int *)(param_1 + 0x38));
  DAT_10189fa4 = *(int *)(param_1 + 0x38);
  DAT_10189d34 = *(uint *)(param_1 + 0x3c);
  DAT_10189f48 = *(int *)(param_1 + 4);
  _DAT_10189fd8 = *(undefined4 *)(param_1 + 8);
  _DAT_10189fdc = *(undefined4 *)(param_1 + 0xc);
  _DAT_10189fe0 = *(undefined4 *)(param_1 + 0x10);
  _DAT_10189fe8 = *(undefined4 *)(param_1 + 0x14);
  _DAT_10189fec = *(undefined4 *)(param_1 + 0x18);
  _DAT_10189ff0 = *(undefined4 *)(param_1 + 0x1c);
  _DAT_10189df8 = *(undefined4 *)(param_1 + 0x20);
  _DAT_10189dfc = *(undefined4 *)(param_1 + 0x24);
  _DAT_10189e00 = *(undefined4 *)(param_1 + 0x28);
  (*gEngfuncs.pfnAngleVectors)
            ((float *)&DAT_10189fe8,(float *)&DAT_10189af0,(float *)&DAT_10189d28,
             (float *)&DAT_10189e80);
  uVar3 = FUN_1001c5c0(DAT_10189f48);
  if ((char)uVar3 == '\0') {
    iVar4 = FUN_1001c5e0(DAT_10189f48);
    if (iVar4 != 0) goto LAB_100439f8;
  }
  else {
LAB_100439f8:
    DAT_10189dd4 = (int)DAT_10189c74 + 0x252;
    _DAT_10189c5c = FUN_10007110(DAT_10189fa4,DAT_10189d34);
    (*(gEngfuncs.pEventAPI)->EV_WeaponAnimation)((int)*(short *)(DAT_10189dd4 + 0x38),_DAT_10189c5c)
    ;
  }
  FUN_1001c620(param_1,(float *)&DAT_10189c78,(float *)&DAT_10189fd8);
  _DAT_10189f30 = _DAT_10189af0 * 30.0 + _DAT_10189c78;
  _DAT_10189f34 = _DAT_10189c7c + _DAT_10189af4 * 30.0;
  _DAT_10189f38 = _DAT_10189c80 + _DAT_10189af8 * 30.0;
  pitch = _DAT_10189f30;
  iVar4 = (*gEngfuncs.pfnRandomLong)(-5,5);
  lVar5 = __ftol();
  attenuation = (float)(iVar4 + (0x19 - (int)lVar5));
  pp_Var1 = &(gEngfuncs.pEventAPI)->EV_PlaySound;
  (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
  (**pp_Var1)(DAT_10189f48,(float *)&DAT_10189fd8,1,s_player_closecombat_wav_1009540c,
              (float)extraout_ST0,attenuation,in_stack_fffffffc,(int)pitch);
  (*(gEngfuncs.pEventAPI)->EV_SetUpPlayerPrediction)(0,1);
  (*(gEngfuncs.pEventAPI)->EV_PushPMStates)();
  (*(gEngfuncs.pEventAPI)->EV_SetSolidPlayers)(DAT_10189f48 + -1);
  (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
  (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
            ((float *)&DAT_10189c78,(float *)&DAT_10189f30,2,-1,(pmtrace_s *)&DAT_10189b78);
  if (_DAT_10189b88 == 1.0) goto LAB_10043bf0;
  in_stack_00000044 = &DAT_10189f30;
  _sStack00000040 = &DAT_10189c78;
  in_stack_0000003c = &DAT_10189b78;
  in_stack_00000038 = (char *)DAT_10189f48;
  in_stack_00000034 = 2.6078334e-29;
  cVar2 = FUN_10045df0(DAT_10189f48,0x10189b78,&DAT_10189c78,&DAT_10189f30);
  if (cVar2 == 'D') {
LAB_10043bbf:
    in_stack_00000038 = s_sprites_wood_smoke_add_spr_100953d4;
  }
  else {
    if (cVar2 == 'F') goto LAB_10043bf0;
    if (cVar2 == 'W') goto LAB_10043bbf;
    in_stack_00000038 = s_sprites_gun_smoke_add_spr_100953f0;
  }
  in_stack_00000044 = (undefined *)0x1e;
  _sStack00000040 = (undefined *)0xc;
  in_stack_0000003c = (undefined *)0x5;
  in_stack_00000028 = &DAT_10189b98;
  in_stack_00000024 = 2.6078515e-29;
  FUN_10002610(&stack0x0000002c,(undefined4 *)&DAT_10189b98);
  FUN_10002610(&stack0x00000020,(undefined4 *)&DAT_10189b8c);
  FUN_100464f0(in_stack_00000020,in_stack_00000024,(float)in_stack_00000028,in_stack_0000002c,
               in_stack_00000030,in_stack_00000034,(byte_conflict *)in_stack_00000038,
               in_stack_0000003c,sStack00000040,(int)in_stack_00000044);
LAB_10043bf0:
  in_stack_00000044 = (undefined *)0x10043bf8;
  (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
  return;
}

/* 10043c00  FUN_10043c00  (1 bytes)
 * undefined FUN_10043c00()
 */
void FUN_10043c00(void)

{
  return;
}

/* 10043c10  FUN_10043c10  (1 bytes)
 * undefined FUN_10043c10()
 */
void FUN_10043c10(void)

{
  return;
}

/* 10043c20  FUN_10043c20  (1 bytes)
 * undefined FUN_10043c20()
 */
void FUN_10043c20(void)

{
  return;
}

/* 10043c30  FUN_10043c30  (1 bytes)
 * undefined FUN_10043c30()
 */
void FUN_10043c30(void)

{
  return;
}

/* 10043c40  FUN_10043c40  (1 bytes)
 * undefined FUN_10043c40()
 */
void FUN_10043c40(void)

{
  return;
}

/* 10043c50  FUN_10043c50  (1 bytes)
 * undefined FUN_10043c50()
 */
void FUN_10043c50(void)

{
  return;
}

/* 10043c60  FUN_10043c60  (1 bytes)
 * undefined FUN_10043c60()
 */
void FUN_10043c60(void)

{
  return;
}

/* 10043c70  FUN_10043c70  (1 bytes)
 * undefined FUN_10043c70()
 */
void FUN_10043c70(void)

{
  return;
}

/* 10043c80  FUN_10043c80  (1 bytes)
 * undefined FUN_10043c80()
 */
void FUN_10043c80(void)

{
  return;
}

/* 10043c90  FUN_10043c90  (1185 bytes)
 * undefined FUN_10043c90()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043c90(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  event_api_s *peVar3;
  float fVar4;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar5;
  longlong lVar6;
  float fVar7;
  char *sample;
  int in_stack_00000018;
  int in_stack_0000001c;
  float in_stack_ffffffec;
  float fVar8;
  undefined *puVar9;
  float fVar10;
  
  if ((DAT_10189e8c & 1) == 0) {
    DAT_10189e8c = DAT_10189e8c | 1;
    FUN_1006af63(0x10044220);
  }
  if ((DAT_10189e8c & 2) == 0) {
    DAT_10189e8c = DAT_10189e8c | 2;
    FUN_1006af63(0x10044210);
  }
  if ((DAT_10189e8c & 4) == 0) {
    DAT_10189e8c = DAT_10189e8c | 4;
    FUN_1006af63(0x10044200);
  }
  if ((DAT_10189e8c & 8) == 0) {
    DAT_10189e8c = DAT_10189e8c | 8;
    FUN_1006af63(0x100441f0);
  }
  if ((DAT_10189e8c & 0x10) == 0) {
    DAT_10189e8c = DAT_10189e8c | 0x10;
    FUN_1006af63(0x100441e0);
  }
  if ((DAT_10189e8c & 0x20) == 0) {
    DAT_10189e8c = DAT_10189e8c | 0x20;
    FUN_1006af63(0x100441d0);
  }
  if ((DAT_10189e8c & 0x40) == 0) {
    DAT_10189e8c = DAT_10189e8c | 0x40;
    FUN_1006af63(0x100441c0);
  }
  if ((DAT_10189e8c & 0x80) == 0) {
    DAT_10189e8c = DAT_10189e8c | 0x80;
    FUN_1006af63(0x100441b0);
  }
  if ((DAT_10189c60 & 1) == 0) {
    DAT_10189c60 = DAT_10189c60 | 1;
    FUN_1006af63(0x100441a0);
  }
  DAT_1018a0a0 = *(float *)(param_1 + 4);
  _DAT_1018a020 = *(undefined4 *)(param_1 + 8);
  _DAT_1018a024 = *(undefined4 *)(param_1 + 0xc);
  _DAT_1018a028 = *(undefined4 *)(param_1 + 0x10);
  _DAT_10189e70 = *(undefined4 *)(param_1 + 0x14);
  _DAT_10189e74 = *(undefined4 *)(param_1 + 0x18);
  _DAT_10189e78 = *(undefined4 *)(param_1 + 0x1c);
  _DAT_10189e90 = *(undefined4 *)(param_1 + 0x20);
  _DAT_10189e94 = *(undefined4 *)(param_1 + 0x24);
  _DAT_10189e98 = *(undefined4 *)(param_1 + 0x28);
  (*gEngfuncs.pfnAngleVectors)
            ((float *)&DAT_10189e70,(float *)&DAT_10189e40,(float *)&DAT_10189bc0,
             (float *)&DAT_10189cf8);
  _DAT_10189d40 = FUN_100071c0(*(int *)(param_1 + 0x38));
  DAT_1018a044 = (int)_DAT_10189d40 + 0x252;
  FUN_1001c620(param_1,(float *)&DAT_10189bd0,(float *)&DAT_1018a020);
  _DAT_101899b8 = _DAT_10189e40 * 35.0 + _DAT_10189bd0;
  _DAT_101899bc = _DAT_10189bd4 + _DAT_10189e44 * 35.0;
  _DAT_101899c0 = _DAT_10189bd8 + _DAT_10189e48 * 35.0;
  fVar4 = _DAT_101899b8;
  (*(gEngfuncs.pEventAPI)->EV_SetUpPlayerPrediction)(0,1);
  (*(gEngfuncs.pEventAPI)->EV_PushPMStates)();
  (*(gEngfuncs.pEventAPI)->EV_SetSolidPlayers)((int)DAT_1018a0a0 + -1);
  (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
  (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
            ((float *)&DAT_10189bd0,(float *)&DAT_101899b8,2,-1,(pmtrace_s *)&DAT_101899d8);
  DAT_10189cc4 = *(int *)(param_1 + 0x3c);
  if (_DAT_101899e8 == 1.0) {
    iVar2 = (*gEngfuncs.pfnRandomLong)(-5,5);
    lVar6 = __ftol();
    peVar3 = gEngfuncs.pEventAPI;
    fVar4 = (float)(iVar2 + (0x19 - (int)lVar6));
    (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
    sample = s_weapons_knife_knife_miss_wav_10095424;
    fVar5 = extraout_ST0_00;
LAB_10044097:
    (*peVar3->EV_PlaySound)
              ((int)DAT_1018a0a0,(float *)&DAT_1018a020,1,sample,(float)fVar5,fVar4,
               in_stack_00000018,in_stack_0000001c);
  }
  else {
    fVar10 = 2.6081256e-29;
    fVar7 = DAT_1018a0a0;
    uVar1 = FUN_10045df0(DAT_1018a0a0,0x101899d8,&DAT_10189bd0,&DAT_101899b8);
    switch(uVar1) {
    case 0:
    case 0x44:
    case 0x57:
      break;
    default:
      puVar9 = &DAT_101899f8;
      fVar8 = 2.608144e-29;
      FUN_10002610(&stack0xfffffff8,(undefined4 *)&DAT_101899f8);
      FUN_10002610(&stack0xffffffec,(undefined4 *)&DAT_101899ec);
      FUN_10046f50(in_stack_ffffffec,fVar8,(float)puVar9,fVar4,fVar10,fVar7,
                   (byte_conflict *)s_sprites_scintille_metal_spr_10095460,5,6);
      puVar9 = &DAT_101899f8;
      fVar8 = 2.608159e-29;
      FUN_10002610(&stack0xfffffff8,(undefined4 *)&DAT_101899f8);
      FUN_10002610(&stack0xffffffec,(undefined4 *)&DAT_101899ec);
      FUN_100492b0(in_stack_ffffffec,fVar8,(float)puVar9,fVar4,fVar10,fVar7,7,1.15,25.0);
      iVar2 = (*gEngfuncs.pfnRandomLong)(-5,5);
      lVar6 = __ftol();
      peVar3 = gEngfuncs.pEventAPI;
      fVar4 = (float)(iVar2 + (0x19 - (int)lVar6));
      (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
      sample = s_weapons_knife_knife_hit_wav_10095444;
      fVar5 = extraout_ST0;
      goto LAB_10044097;
    case 0x46:
      DAT_10189cc4 = 1;
    }
  }
  iVar2 = FUN_1001c5e0((int)DAT_1018a0a0);
  if ((iVar2 != 0) && (iVar2 = CL_IsThirdPerson(), iVar2 == 0)) {
    iVar2 = (*gEngfuncs.pfnRandomLong)(0,2);
    if (iVar2 == 0) {
      DAT_10189adc = 0xf;
    }
    else if (iVar2 == 1) {
      DAT_10189adc = 0x10;
    }
    else if (iVar2 == 2) {
      DAT_10189adc = 0x11;
    }
    (*(gEngfuncs.pEventAPI)->EV_WeaponAnimation)
              ((int)*(short *)(DAT_1018a044 + DAT_10189adc * 2),DAT_10189cc4);
  }
  (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
  return;
}

/* 100441a0  FUN_100441a0  (1 bytes)
 * undefined FUN_100441a0()
 */
void FUN_100441a0(void)

{
  return;
}

/* 100441b0  FUN_100441b0  (1 bytes)
 * undefined FUN_100441b0()
 */
void FUN_100441b0(void)

{
  return;
}

/* 100441c0  FUN_100441c0  (1 bytes)
 * undefined FUN_100441c0()
 */
void FUN_100441c0(void)

{
  return;
}

/* 100441d0  FUN_100441d0  (1 bytes)
 * undefined FUN_100441d0()
 */
void FUN_100441d0(void)

{
  return;
}

/* 100441e0  FUN_100441e0  (1 bytes)
 * undefined FUN_100441e0()
 */
void FUN_100441e0(void)

{
  return;
}

/* 100441f0  FUN_100441f0  (1 bytes)
 * undefined FUN_100441f0()
 */
void FUN_100441f0(void)

{
  return;
}

/* 10044200  FUN_10044200  (1 bytes)
 * undefined FUN_10044200()
 */
void FUN_10044200(void)

{
  return;
}

/* 10044210  FUN_10044210  (1 bytes)
 * undefined FUN_10044210()
 */
void FUN_10044210(void)

{
  return;
}

/* 10044220  FUN_10044220  (1 bytes)
 * undefined FUN_10044220()
 */
void FUN_10044220(void)

{
  return;
}

/* 10044230  FUN_10044230  (1228 bytes)
 * undefined FUN_10044230()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044230(int param_1)

{
  _func_408 **pp_Var1;
  undefined1 uVar2;
  float10 extraout_ST0;
  longlong lVar3;
  short sVar4;
  int in_stack_00000014;
  int in_stack_00000018;
  float in_stack_ffffffe0;
  float fVar5;
  float fVar6;
  undefined *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char *pcVar11;
  int iVar12;
  short sVar13;
  float fVar14;
  
  if ((DAT_10189fa8 & 1) == 0) {
    DAT_10189fa8 = DAT_10189fa8 | 1;
    FUN_1006af63(0x100447e0);
  }
  if ((DAT_10189fa8 & 2) == 0) {
    DAT_10189fa8 = DAT_10189fa8 | 2;
    FUN_1006af63(0x100447d0);
  }
  if ((DAT_10189fa8 & 4) == 0) {
    DAT_10189fa8 = DAT_10189fa8 | 4;
    FUN_1006af63(0x100447c0);
  }
  if ((DAT_10189fa8 & 8) == 0) {
    DAT_10189fa8 = DAT_10189fa8 | 8;
    FUN_1006af63(0x100447b0);
  }
  if ((DAT_10189fa8 & 0x10) == 0) {
    DAT_10189fa8 = DAT_10189fa8 | 0x10;
    FUN_1006af63(0x100447a0);
  }
  if ((DAT_10189fa8 & 0x20) == 0) {
    DAT_10189fa8 = DAT_10189fa8 | 0x20;
    FUN_1006af63(0x10044790);
  }
  if ((DAT_10189fa8 & 0x40) == 0) {
    DAT_10189fa8 = DAT_10189fa8 | 0x40;
    FUN_1006af63(0x10044780);
  }
  if ((DAT_10189fa8 & 0x80) == 0) {
    DAT_10189fa8 = DAT_10189fa8 | 0x80;
    FUN_1006af63(0x10044770);
  }
  if ((DAT_10189e7d & 1) == 0) {
    DAT_10189e7d = DAT_10189e7d | 1;
    FUN_1006af63(0x10044760);
  }
  DAT_10189b3c = *(float *)(param_1 + 4);
  _DAT_10189e30 = *(undefined4 *)(param_1 + 8);
  _DAT_10189e34 = *(undefined4 *)(param_1 + 0xc);
  _DAT_10189e38 = *(undefined4 *)(param_1 + 0x10);
  _DAT_10189b68 = *(undefined4 *)(param_1 + 0x14);
  _DAT_10189b6c = *(undefined4 *)(param_1 + 0x18);
  _DAT_10189b70 = *(undefined4 *)(param_1 + 0x1c);
  _DAT_10189ce8 = *(undefined4 *)(param_1 + 0x20);
  _DAT_10189cec = *(undefined4 *)(param_1 + 0x24);
  _DAT_10189cf0 = *(undefined4 *)(param_1 + 0x28);
  (*gEngfuncs.pfnAngleVectors)
            ((float *)&DAT_10189b68,(float *)&DAT_10189fb0,(float *)&DAT_10189f70,
             (float *)&DAT_10189b48);
  _DAT_10189eb0 = FUN_100071c0(0x22);
  DAT_10189ff8 = (int)_DAT_10189eb0 + 0x252;
  FUN_1001c620(param_1,(float *)&DAT_10189dd8,(float *)&DAT_10189e30);
  DAT_101899d4 = *(int *)(param_1 + 0x38);
  if (DAT_101899d4 == 0xf) {
    _DAT_10189ab0 = _DAT_10189dd8 - _DAT_10189fb0 * 55.0;
    _DAT_10189ab4 = _DAT_10189ddc - _DAT_10189fb4 * 55.0;
    _DAT_10189ab8 = _DAT_10189de0 - _DAT_10189fb8 * 55.0;
  }
  else {
    _DAT_10189ab0 = _DAT_10189fb0 * 50.0 + _DAT_10189dd8;
    _DAT_10189ab4 = _DAT_10189fb4 * 50.0 + _DAT_10189ddc;
    _DAT_10189ab8 = _DAT_10189fb8 * 50.0 + _DAT_10189de0;
  }
  fVar8 = _DAT_10189ab0;
  (*(gEngfuncs.pEventAPI)->EV_SetUpPlayerPrediction)(0,1);
  (*(gEngfuncs.pEventAPI)->EV_PushPMStates)();
  (*(gEngfuncs.pEventAPI)->EV_SetSolidPlayers)((int)DAT_10189b3c + -1);
  (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
  (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
            ((float *)&DAT_10189dd8,(float *)&DAT_10189ab0,2,-1,(pmtrace_s *)&DAT_10189a60);
  DAT_10189e08 = *(int *)(param_1 + 0x3c);
  if (_DAT_10189a70 == 1.0) {
    iVar12 = (*gEngfuncs.pfnRandomLong)(0,1);
    pcVar11 = s_weapons_katana_miss_wav_10095498;
    if (iVar12 == 0) {
      pcVar11 = s_weapons_katana_miss1_wav_1009547c;
    }
LAB_10044649:
    iVar12 = (*gEngfuncs.pfnRandomLong)(-5,5);
    lVar3 = __ftol();
    pp_Var1 = &(gEngfuncs.pEventAPI)->EV_PlaySound;
    (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
    (**pp_Var1)((int)DAT_10189b3c,(float *)&DAT_10189e30,1,pcVar11,(float)extraout_ST0,
                (float)(iVar12 + (0x19 - (int)lVar3)),in_stack_00000014,in_stack_00000018);
  }
  else {
    fVar9 = 2.608598e-29;
    fVar10 = DAT_10189b3c;
    uVar2 = FUN_10045df0(DAT_10189b3c,0x10189a60,&DAT_10189dd8,&DAT_10189ab0);
    switch(uVar2) {
    case 0:
    case 0x44:
    case 0x57:
      break;
    default:
      sVar4 = 0xc;
      sVar13 = 5;
      pcVar11 = s_sprites_scintille_metal_spr_10095460;
      puVar7 = &DAT_10189a80;
      fVar5 = 2.6086176e-29;
      FUN_10002610(&stack0xffffffec,(undefined4 *)&DAT_10189a80);
      FUN_10002610(&stack0xffffffe0,(undefined4 *)&DAT_10189a74);
      FUN_10046f50(in_stack_ffffffe0,fVar5,(float)puVar7,fVar8,fVar9,fVar10,(byte_conflict *)pcVar11
                   ,sVar13,sVar4);
      fVar5 = 25.0;
      fVar14 = 1.15;
      iVar12 = 7;
      puVar7 = &DAT_10189a80;
      fVar6 = 2.6086327e-29;
      FUN_10002610(&stack0xffffffec,(undefined4 *)&DAT_10189a80);
      FUN_10002610(&stack0xffffffe0,(undefined4 *)&DAT_10189a74);
      FUN_100492b0(in_stack_ffffffe0,fVar6,(float)puVar7,fVar8,fVar9,fVar10,iVar12,fVar14,fVar5);
      iVar12 = (*gEngfuncs.pfnRandomLong)(0,1);
      pcVar11 = s_weapons_katana_hit_wav_100954c8;
      if (iVar12 == 0) {
        pcVar11 = s_weapons_katana_hit1_wav_100954b0;
      }
      goto LAB_10044649;
    case 0x46:
      DAT_10189e08 = 1;
    }
  }
  iVar12 = FUN_1001c5e0((int)DAT_10189b3c);
  if ((iVar12 != 0) && (iVar12 = CL_IsThirdPerson(), iVar12 == 0)) {
    (*(gEngfuncs.pEventAPI)->EV_WeaponAnimation)
              ((int)*(short *)(DAT_10189ff8 + DAT_101899d4 * 2),DAT_10189e08);
  }
  (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
  return;
}

/* 10044760  FUN_10044760  (1 bytes)
 * undefined FUN_10044760()
 */
void FUN_10044760(void)

{
  return;
}

/* 10044770  FUN_10044770  (1 bytes)
 * undefined FUN_10044770()
 */
void FUN_10044770(void)

{
  return;
}

/* 10044780  FUN_10044780  (1 bytes)
 * undefined FUN_10044780()
 */
void FUN_10044780(void)

{
  return;
}

/* 10044790  FUN_10044790  (1 bytes)
 * undefined FUN_10044790()
 */
void FUN_10044790(void)

{
  return;
}

/* 100447a0  FUN_100447a0  (1 bytes)
 * undefined FUN_100447a0()
 */
void FUN_100447a0(void)

{
  return;
}

/* 100447b0  FUN_100447b0  (1 bytes)
 * undefined FUN_100447b0()
 */
void FUN_100447b0(void)

{
  return;
}

/* 100447c0  FUN_100447c0  (1 bytes)
 * undefined FUN_100447c0()
 */
void FUN_100447c0(void)

{
  return;
}

/* 100447d0  FUN_100447d0  (1 bytes)
 * undefined FUN_100447d0()
 */
void FUN_100447d0(void)

{
  return;
}

/* 100447e0  FUN_100447e0  (1 bytes)
 * undefined FUN_100447e0()
 */
void FUN_100447e0(void)

{
  return;
}

/* 10044bf0  FUN_10044bf0  (1143 bytes)
 * float10 FUN_10044bf0(undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4, int param_5)
 * called by: FUN_10035d40, FUN_100450c0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10044bf0(int param_1,int param_2,float *param_3,float *param_4,int param_5)

{
  _func_408 **pp_Var1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  byte_conflict *pbVar9;
  float attenuation;
  char *pcVar10;
  byte_conflict *pbVar11;
  longlong lVar12;
  float *in_stack_00000020;
  float *in_stack_00000024;
  int in_stack_0000005c;
  undefined4 in_stack_ffffff9c;
  float *in_stack_ffffffa0;
  float volume;
  int in_stack_ffffffb0;
  int in_stack_ffffffb4;
  float fStack_44;
  float *pfStack_40;
  char *apcStack_2c [3];
  byte_conflict abStack_20 [15];
  undefined1 uStack_11;
  
  iVar4 = (*gEngfuncs.PM_PointContents)((float *)(param_2 + 0x14),(int *)0x0);
  if (iVar4 == -6) goto switchD_10044e11_caseD_46;
  (*gEngfuncs.pfnRandomLong)(0,100);
  iVar4 = (*(gEngfuncs.pEventAPI)->EV_IndexFromTrace)((pmtrace_s *)param_2);
  cVar3 = '\0';
  if ((0 < iVar4) && (iVar5 = (*gEngfuncs.GetMaxClients)(), iVar4 <= iVar5)) {
    cVar3 = 'F';
    goto LAB_10044dfa;
  }
  pcVar6 = (*(gEngfuncs.pEventAPI)->EV_TraceTexture)
                     (*(int *)(param_2 + 0x30),in_stack_00000020,in_stack_00000024);
  if (pcVar6 != (char *)0x0) {
    uVar7 = 0xffffffff;
    do {
      pcVar10 = pcVar6;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar6 + 1;
      cVar3 = *pcVar6;
      pcVar6 = pcVar10;
    } while (cVar3 != '\0');
    uVar7 = ~uVar7;
    pcVar6 = pcVar10 + -uVar7;
    pcVar10 = &stack0xffffff9c;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcVar6 = &stack0xffffff9c;
    if (((char)in_stack_ffffff9c == '-') || ((char)in_stack_ffffff9c == '+')) {
      pcVar6 = &stack0xffffff9e;
    }
    cVar3 = *pcVar6;
    if ((((cVar3 == '{') || (cVar3 == '!')) || (cVar3 == '~')) || (cVar3 == ' ')) {
      pcVar6 = pcVar6 + 1;
    }
    uVar7 = 0xffffffff;
    do {
      pcVar10 = pcVar6;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar6 + 1;
      cVar3 = *pcVar6;
      pcVar6 = pcVar10;
    } while (cVar3 != '\0');
    uVar7 = ~uVar7;
    pbVar9 = (byte_conflict *)(pcVar10 + -uVar7);
    pbVar11 = abStack_20;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar11 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar11 = pbVar11 + 1;
    }
    uStack_11 = 0;
    cVar3 = FUN_1002a340(abStack_20);
    if (cVar3 == 'F') goto LAB_10044dfa;
  }
  _DAT_1018a0f8 = (*gEngfuncs.pfnRandomLong)(0,0x7fff);
  if (0x3ffe < _DAT_1018a0f8) goto LAB_10044dfa;
  switch(_DAT_1018a0f8 % 5) {
  case 1:
    pcVar6 = s_debris_ric2_wav_100956d8;
    break;
  case 2:
    uVar7 = 0xffffffff;
    pcVar6 = s_debris_ric3_wav_100956c8;
    do {
      pcVar10 = pcVar6;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar10;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    pcVar6 = pcVar10 + -uVar7;
    pcVar10 = (char *)&DAT_1018a168;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar10 = pcVar10 + 4;
    }
    goto LAB_10044db7;
  case 3:
    pcVar6 = s_debris_ric4_wav_100956b8;
    break;
  case 4:
    uVar7 = 0xffffffff;
    pcVar6 = s_debris_ric5_wav_100956a8;
    do {
      pcVar10 = pcVar6;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar10;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    pcVar6 = pcVar10 + -uVar7;
    pcVar10 = (char *)&DAT_1018a168;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar10 = pcVar10 + 4;
    }
    goto LAB_10044db7;
  default:
    pcVar6 = s_debris_ric1_wav_10095698;
  }
  uVar7 = 0xffffffff;
  do {
    pcVar10 = pcVar6;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar10 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar10;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  pcVar6 = pcVar10 + -uVar7;
  pcVar10 = (char *)&DAT_1018a168;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar10 = pcVar10 + 4;
  }
LAB_10044db7:
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar10 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar10 = pcVar10 + 1;
  }
  lVar12 = __ftol();
  (*(gEngfuncs.pEventAPI)->EV_PlaySound)
            (-1,in_stack_ffffffa0,0,(char *)&DAT_1018a168,1.0,0.99,0,100 - (int)lVar12);
LAB_10044dfa:
  switch((int)cVar3) {
  case 0x44:
    fStack_44 = 0.1;
    iVar4 = 4;
    break;
  default:
    fStack_44 = 0.6;
    goto LAB_10044f9d;
  case 0x46:
switchD_10044e11_caseD_46:
    return (float10)0.0;
  case 0x47:
    fStack_44 = 0.5;
    apcStack_2c[0] = s_debris_metal5_wav_100955e4;
    iVar4 = 5;
    break;
  case 0x4d:
    goto LAB_10044e64;
  case 0x50:
  case 0x59:
    fStack_44 = 0.2;
    iVar4 = 3;
    break;
  case 0x53:
    fStack_44 = 0.0;
    iVar4 = 4;
    break;
  case 0x54:
    fStack_44 = 0.2;
LAB_10044f9d:
    apcStack_2c[0] = s_debris_cement4_wav_10095508;
    apcStack_2c[1] = s_debris_cement5_wav_100954f4;
    apcStack_2c[2] = s_debris_cement6_wav_100954e0;
    iVar4 = 7;
    break;
  case 0x56:
LAB_10044e64:
    fStack_44 = 0.3;
    apcStack_2c[0] = s_debris_metal5_wav_100955e4;
    iVar4 = 5;
    break;
  case 0x57:
    fStack_44 = 0.2;
    iVar4 = 3;
  }
  FUN_10048f60(pfStack_40,(byte_conflict *)(param_2 + 0x20),in_stack_0000005c,(int)cVar3);
  if (0x21 < param_1) {
    iVar5 = (*gEngfuncs.pfnRandomLong)(-5,5);
    lVar12 = __ftol();
    attenuation = (float)(iVar5 + (0x19 - (int)lVar12));
    volume = 0.0;
    pp_Var1 = &(gEngfuncs.pEventAPI)->EV_PlaySound;
    iVar4 = (*gEngfuncs.pfnRandomLong)(0,iVar4 + -1);
    (**pp_Var1)(0,pfStack_40,6,apcStack_2c[iVar4],volume,attenuation,in_stack_ffffffb0,
                in_stack_ffffffb4);
  }
  return (float10)fStack_44;
}

/* 100450c0  FUN_100450c0  (3277 bytes)
 * undefined FUN_100450c0(int param_1, undefined4 param_2, float * param_3, float * param_4, byte.conflict param_5, float * param_6, float * param_7, float param_8, float param_9, float param_10, int param_11, int param_12, undefined4 param_13, int param_14)
 * called by: FUN_1003dfa0, FUN_1003f090, FUN_10040c20, FUN_100450c0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_100450c0(int param_1,undefined4 param_2,float *param_3,float *param_4,byte_conflict param_5,
            float *param_6,float *param_7,float param_8,float param_9,float param_10,int param_11,
            int param_12,float param_13,int param_14)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float *pfVar5;
  cl_entity_s *pcVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  longlong lVar11;
  float in_stack_0000003c;
  float in_stack_00000040;
  int in_stack_00000044;
  int in_stack_0000004c;
  float in_stack_00000060;
  int in_stack_00000064;
  undefined4 in_stack_00000068;
  int in_stack_0000006c;
  float fVar12;
  float fVar13;
  undefined *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  char cVar18;
  float fVar19;
  float fVar20;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined1 auStack_4 [4];
  
  if ((DAT_1018a1b4 & 1) == 0) {
    DAT_1018a1b4 = DAT_1018a1b4 | 1;
    FUN_1006af63(0x10045de0);
  }
  if ((DAT_1018a1b4 & 2) == 0) {
    DAT_1018a1b4 = DAT_1018a1b4 | 2;
    FUN_1006af63(0x10045dd0);
  }
  if ((DAT_1018a1b4 & 4) == 0) {
    DAT_1018a1b4 = DAT_1018a1b4 | 4;
    FUN_1006af63(0x10045dc0);
  }
  if ((DAT_1018a1b4 & 8) == 0) {
    DAT_1018a1b4 = DAT_1018a1b4 | 8;
    FUN_1006af63(0x10045db0);
  }
  if ((DAT_1018a1b4 & 0x10) == 0) {
    DAT_1018a1b4 = DAT_1018a1b4 | 0x10;
    FUN_1006af63(0x10045da0);
  }
  if ((DAT_1018a1b4 & 0x20) == 0) {
    DAT_1018a1b4 = DAT_1018a1b4 | 0x20;
    FUN_1006af63(0x10045d90);
  }
  if ((DAT_1018d16c != 0) || (DAT_1018a154 = '\0', DAT_100963e8 < 0.99)) {
    DAT_1018a154 = '\x01';
  }
  DAT_1018a0e0 = FUN_100071f0(param_12);
  pfVar2 = param_7;
  pfVar3 = param_6;
  if (param_11 != 2) {
    fVar15 = *param_7;
    fVar16 = param_7[2];
    fVar17 = param_7[1];
    pfVar5 = (float *)FUN_1003d240(&stack0xffffffc4,&local_18,4096.0);
    pfVar3 = param_6;
    fVar20 = *pfVar5 + *param_6;
    fVar13 = param_6[2];
    fVar1 = param_6[1] + pfVar5[1];
    local_28 = fVar13 + pfVar5[2];
    FUN_10002610(&local_24,(undefined4 *)&stack0xffffffd0);
    _DAT_1018a1b8 = local_24;
    fVar12 = 2.8026e-45;
    _DAT_1018a1bc = local_20;
    _DAT_1018a1c0 = local_1c;
    (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
              (pfVar3,(float *)&DAT_1018a1b8,2,-1,(pmtrace_s *)&DAT_1018a110);
    _DAT_1018a1b8 = DAT_1018a124;
    _DAT_1018a1bc = DAT_1018a128;
    _DAT_1018a1c0 = DAT_1018a12c;
    local_1c = *pfVar3 + DAT_1018a124;
    local_28 = DAT_1018a124;
    fStack_c = pfVar3[1];
    local_24 = DAT_1018a128;
    local_18 = fStack_c + DAT_1018a128;
    fStack_8 = pfVar3[2];
    local_20 = DAT_1018a12c;
    fStack_14 = fStack_8 + DAT_1018a12c;
    FUN_10002610(&fStack_10,&local_1c);
    local_28 = fStack_10 * 0.5;
    local_24 = fStack_c * 0.5;
    local_20 = fStack_8 * 0.5;
    FUN_10002610(&stack0xffffffc0,&local_28);
    fStack_10 = fVar13 - _DAT_1018a1b8;
    fStack_c = fVar15 - _DAT_1018a1bc;
    fStack_8 = fVar17 - _DAT_1018a1c0;
    FUN_10002610(&local_28,&fStack_10);
    pcVar6 = (*gEngfuncs.GetLocalPlayer)();
    if (param_6 != (float *)pcVar6->index) {
      local_1c = *pfVar3 - _DAT_1018a1b8;
      fStack_c = pfVar3[1];
      fStack_8 = pfVar3[2];
      local_18 = fStack_c - _DAT_1018a1bc;
      fStack_14 = fStack_8 - _DAT_1018a1c0;
      FUN_10002610(&stack0xffffffcc,&local_1c);
      if (200.0 < SQRT(fVar16 * fVar16 + fVar20 * fVar20 + fVar1 * fVar1)) {
        local_1c = fVar13 - DAT_10190b28;
        fStack_c = DAT_10190b2c;
        fStack_8 = DAT_10190b30;
        local_18 = fVar15 - DAT_10190b2c;
        fStack_14 = fVar17 - DAT_10190b30;
        FUN_10002610(&stack0xffffffcc,&local_1c);
        if (SQRT(fVar16 * fVar16 + fVar20 * fVar20 + fVar1 * fVar1) <
            SQRT(local_28 * local_28 + local_24 * local_24 + local_20 * local_20) - 100.0) {
          local_18 = pfVar3[1];
          fVar19 = DAT_10190b28 - *pfVar3;
          fStack_c = DAT_10190b2c;
          fStack_14 = pfVar3[2];
          fStack_8 = DAT_10190b30;
          fVar16 = DAT_10190b2c - local_18;
          fVar20 = DAT_10190b30 - fStack_14;
          FUN_10002610(&local_28,(undefined4 *)&stack0xffffffcc);
          fStack_c = DAT_10190b2c;
          fStack_8 = DAT_10190b30;
          param_12 = (int)SQRT(local_28 * local_28 + local_24 * local_24 + local_20 * local_20);
          local_1c = DAT_10190b28 - _DAT_1018a1b8;
          local_18 = DAT_10190b2c - _DAT_1018a1bc;
          fStack_14 = DAT_10190b30 - _DAT_1018a1c0;
          FUN_10002610(&stack0xffffffcc,&local_1c);
          local_1c = *pfVar3 - _DAT_1018a1b8;
          fStack_c = pfVar3[1];
          fStack_8 = pfVar3[2];
          local_18 = fStack_c - _DAT_1018a1bc;
          fStack_14 = fStack_8 - _DAT_1018a1c0;
          FUN_10002610(&local_28,&local_1c);
          fVar1 = SQRT(local_28 * local_28 + local_24 * local_24 + local_20 * local_20);
          fVar16 = (SQRT(fVar19 * fVar19 + fVar16 * fVar16 + fVar20 * fVar20) + fVar1 +
                   (float)param_12) * 0.5;
          fVar16 = SQRT((fVar16 - (float)param_12) * (fVar16 - fVar1) * (fVar16 - fVar1) * fVar16);
          param_12 = (int)((fVar16 + fVar16) / fVar1);
          if ((float)param_12 < 75.0) {
            (*gEngfuncs.pfnRandomLong)(1,5);
            FUN_1006ac7a((undefined1 *)&param_1,(byte_conflict *)s_weapons_whizz_d_wav_100956e8);
            param_6 = (float *)((uint)param_6 & 0xffffff);
            fVar16 = 1.0 / ((float)param_14 + 0.1);
            param_14 = (int)(fVar16 + fVar16);
            if (1.0 < (float)param_14) {
              param_14 = 0x3f800000;
            }
            iVar7 = (*gEngfuncs.pfnRandomLong)(-5,5);
            lVar11 = __ftol();
            uVar8 = DAT_1018a1c4 & 0x80000001;
            if ((int)uVar8 < 0) {
              uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
            }
            DAT_1018a1c4 = DAT_1018a1c4 + 1;
            (*(gEngfuncs.pEventAPI)->EV_PlaySound)
                      (-1,&DAT_10190b28,uVar8 + 0x1f7,(char *)&param_3,in_stack_00000040,0.8,0,
                       iVar7 + (0x19 - (int)lVar11));
          }
        }
      }
    }
    param_12 = (int)in_stack_0000003c;
    if (in_stack_00000044 == 3) {
      param_12 = (int)(in_stack_0000003c * 8.0);
    }
    fStack_10 = fVar13 - _DAT_1018a1b8;
    fStack_c = fVar15 - _DAT_1018a1bc;
    fStack_8 = fVar17 - _DAT_1018a1c0;
    FUN_10002610(auStack_4,&fStack_10);
    if (DAT_1018ca5a != '\0') {
      param_11 = (int)in_stack_0000003c;
      if (in_stack_00000044 == 3) {
        param_11 = (int)(in_stack_0000003c * 8.0);
      }
      fVar16 = 0.0;
      fVar15 = 2.6100624e-29;
      pfVar5 = pfVar3;
      FUN_100524c0(&DAT_1018bde8,pfVar3,(float *)0x0,512.0,(float)param_12);
      if (((in_stack_00000044 == 5) || (in_stack_00000044 == 8)) || (in_stack_00000044 == 0xd)) {
        cVar18 = '\x01';
      }
      else {
        cVar18 = '\0';
      }
      puVar14 = &DAT_1018a1b8;
      fVar13 = 2.610078e-29;
      fVar17 = (float)param_11;
      FUN_10002610(&stack0xffffff9c,(undefined4 *)&DAT_1018a1b8);
      FUN_10002610(&stack0xffffff90,pfVar3);
      FUN_10052720(&DAT_1018bde8,fVar12,fVar13,(float)puVar14,fVar15,(float)pfVar5,fVar16,fVar17,
                   cVar18);
    }
    fVar16 = param_9;
    fVar15 = param_8;
    DAT_1018a0dc = CONCAT31(DAT_1018a0dc._1_3_,1);
    if (param_10._0_1_ != '\0') {
      do {
        fVar9 = FUN_1001aea0((DAT_1018a0dc & 0xff) + in_stack_0000004c,-3.1415927,3.1415927);
        param_11 = (int)(float)fVar9;
        fVar9 = FUN_1001aea0((DAT_1018a0dc & 0xff) + 1 + in_stack_0000004c,0.0,
                             (float)DAT_1018a0e0[7]);
        fVar9 = (float10)1.0 - fVar9 * fVar9 * fVar9;
        fVar10 = (float10)fcos((float10)(float)param_11);
        param_12 = (int)(float)(fVar9 * fVar10);
        fVar10 = (float10)fsin((float10)(float)param_11);
        fVar9 = fVar9 * fVar10;
        DAT_1018a1a8 = (float)(fVar9 * (float10)*(float *)fVar16 * (float10)(float)param_14 +
                               (float10)(float)param_12 * (float10)*(float *)fVar15 *
                               (float10)param_13 + (float10)*pfVar2);
        DAT_1018a1ac = (float)((float10)(float)param_12 * (float10)*(float *)((int)fVar15 + 4) *
                               (float10)param_13 +
                               fVar9 * (float10)(float)param_14 *
                               (float10)*(float *)((int)fVar16 + 4) + (float10)pfVar2[1]);
        DAT_1018a1b0 = (float)((float10)(float)param_12 * (float10)*(float *)((int)fVar15 + 8) *
                               (float10)param_13 +
                               fVar9 * (float10)*(float *)((int)fVar16 + 8) *
                               (float10)(float)param_14 + (float10)pfVar2[2]);
        _DAT_1018a1b8 = (float)(int)DAT_1018a0e0[5] * DAT_1018a1a8 + *pfVar3;
        _DAT_1018a1bc = (float)(int)DAT_1018a0e0[5] * DAT_1018a1ac + pfVar3[1];
        _DAT_1018a1c0 = (float)(int)DAT_1018a0e0[5] * DAT_1018a1b0 + pfVar3[2];
        if (DAT_1018a154 == '\0') {
          (*(gEngfuncs.pEventAPI)->EV_SetUpPlayerPrediction)(0,1);
          (*(gEngfuncs.pEventAPI)->EV_PushPMStates)();
          (*(gEngfuncs.pEventAPI)->EV_SetSolidPlayers)((int)param_8 + -1);
          (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
          (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
                    (pfVar3,(float *)&DAT_1018a1b8,2,-1,(pmtrace_s *)&DAT_1018a110);
          if (_DAT_1018a120 != 1.0) {
            _DAT_1018a100 = *pfVar3 - DAT_1018a124;
            _DAT_1018a104 = pfVar3[1] - DAT_1018a128;
            _DAT_1018a108 = pfVar3[2] - DAT_1018a12c;
            fVar9 = FUN_10058390((float *)&DAT_1018a100);
            _DAT_1018a0f4 = (float)(fVar9 / ((float10)(int)DAT_1018a0e0[8] * (float10)10.0));
            lVar11 = __ftol();
            fVar9 = FUN_10007290((int)lVar11);
            DAT_1018a164 = (float)(fVar9 * (float10)in_stack_00000060);
            iVar7 = in_stack_00000064;
            if (in_stack_00000064 == 1) {
              iVar7 = 1;
            }
            FUN_10044bf0(in_stack_0000003c,0x1018a110,pfVar3,&DAT_1018a1b8,iVar7);
            FUN_10001180(0x1018a110);
            DAT_1018a164 = DAT_1018a164 * (float)DAT_1018a0e0[6];
          }
          (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
        }
        else {
          local_28 = *pfVar3;
          local_24 = pfVar3[1];
          local_20 = pfVar3[2];
          fStack_10 = DAT_1018a1a8;
          fStack_c = DAT_1018a1ac;
          fStack_8 = DAT_1018a1b0;
          local_1c = local_28;
          local_18 = local_24;
          fStack_14 = local_20;
          FUN_10035c20(&DAT_100eb678,(int)param_6,(int *)&local_1c,(int *)&fStack_10,
                       (int *)&stack0x0000003c,&stack0x00000044,(int)in_stack_00000040);
        }
        bVar4 = (char)DAT_1018a0dc + 1;
        DAT_1018a0dc = CONCAT31(DAT_1018a0dc._1_3_,bVar4);
      } while (bVar4 <= param_10._0_1_);
    }
    if (((DAT_1018a154 == '\0') && (in_stack_00000040 != 1.4013e-45)) && (5.0 < DAT_1018a164)) {
      fVar17 = DAT_1018a164;
      if (48.0 <= DAT_1018a164) {
        fVar17 = 48.0;
      }
      fStack_10 = fVar17 * DAT_1018a1a8;
      _DAT_1018a0e8 = fStack_10 + DAT_1018a124;
      _DAT_1018a0ec = DAT_1018a1ac * fVar17 + DAT_1018a128;
      _DAT_1018a0f0 = fVar17 * DAT_1018a1b0 + DAT_1018a12c;
      local_28 = _DAT_1018a0e8;
      local_24 = _DAT_1018a0ec;
      local_20 = _DAT_1018a0f0;
      fStack_c = _DAT_1018a0ec;
      fStack_8 = _DAT_1018a0f0;
      iVar7 = (*gEngfuncs.PM_PointContents)((float *)&DAT_1018a0e8,(int *)0x0);
      if (iVar7 != -2) {
        _DAT_1018a158 = DAT_1018a124;
        _DAT_1018a15c = DAT_1018a128;
        _DAT_1018a160 = DAT_1018a12c;
        (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
        (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
                  ((float *)&DAT_1018a0e8,&DAT_1018a124,0,-1,(pmtrace_s *)&DAT_1018a110);
        if (_DAT_1018a120 != 1.0) {
          FUN_10044bf0(param_14,0x1018a110,&DAT_1018a0e8,&DAT_1018a158,2);
          FUN_10001180(0x1018a110);
        }
        FUN_100450c0(param_14,in_stack_0000003c,(float *)fVar15,(float *)fVar16,'\x01',
                     (float *)&DAT_1018a0e8,&DAT_1018a1a8,0.0,0.0,DAT_1018a164,2,in_stack_00000064,
                     (float)in_stack_00000068,in_stack_0000006c);
      }
    }
    return;
  }
  _DAT_1018a1b8 = *param_7 * 4096.0 + *param_6;
  _DAT_1018a1bc = param_7[1] * 4096.0 + param_6[1];
  _DAT_1018a1c0 = param_7[2] * 4096.0 + param_6[2];
  (*(gEngfuncs.pEventAPI)->EV_SetUpPlayerPrediction)(0,1);
  (*(gEngfuncs.pEventAPI)->EV_PushPMStates)();
  pfVar2 = param_3;
  (*(gEngfuncs.pEventAPI)->EV_SetSolidPlayers)((int)param_3 + -1);
  (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
  (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
            (pfVar3,(float *)&DAT_1018a1b8,2,-1,(pmtrace_s *)&DAT_1018a110);
  if (_DAT_1018a120 != 1.0) {
    FUN_10044bf0(pfVar2,0x1018a110,pfVar3,&DAT_1018a1b8,2);
    FUN_10001180(0x1018a110);
  }
  (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
  return;
}

/* 10045d90  FUN_10045d90  (1 bytes)
 * undefined FUN_10045d90()
 */
void FUN_10045d90(void)

{
  return;
}

/* 10045da0  FUN_10045da0  (1 bytes)
 * undefined FUN_10045da0()
 */
void FUN_10045da0(void)

{
  return;
}

/* 10045db0  FUN_10045db0  (1 bytes)
 * undefined FUN_10045db0()
 */
void FUN_10045db0(void)

{
  return;
}

/* 10045dc0  FUN_10045dc0  (1 bytes)
 * undefined FUN_10045dc0()
 */
void FUN_10045dc0(void)

{
  return;
}

/* 10045dd0  FUN_10045dd0  (1 bytes)
 * undefined FUN_10045dd0()
 */
void FUN_10045dd0(void)

{
  return;
}

/* 10045de0  FUN_10045de0  (1 bytes)
 * undefined FUN_10045de0()
 */
void FUN_10045de0(void)

{
  return;
}

/* 10045df0  FUN_10045df0  (735 bytes)
 * undefined1 FUN_10045df0(undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * called by: FUN_10043200, FUN_10043800, FUN_10043c90, FUN_10044230
 */
undefined1 __cdecl FUN_10045df0(undefined4 param_1,int param_2,float *param_3,float *param_4)

{
  _func_408 **pp_Var1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  byte_conflict *pbVar9;
  float attenuation;
  char *pcVar10;
  byte_conflict *pbVar11;
  longlong lVar12;
  float *in_stack_00000018;
  float *in_stack_0000001c;
  float volume;
  int in_stack_ffffff78;
  float *point;
  undefined4 uStack_6c;
  char acStack_68 [2];
  char acStack_66 [10];
  float *pfStack_5c;
  byte_conflict abStack_28 [15];
  undefined1 uStack_19;
  
  point = (float *)(param_2 + 0x14);
  iVar4 = (*gEngfuncs.PM_PointContents)(point,(int *)0x0);
  if (iVar4 == -6) {
    return 0;
  }
  iVar4 = (*(gEngfuncs.pEventAPI)->EV_IndexFromTrace)((pmtrace_s *)param_2);
  uVar3 = 0;
  if ((iVar4 < 1) || (iVar5 = (*gEngfuncs.GetMaxClients)(), iVar5 < iVar4)) {
    pcVar6 = (*(gEngfuncs.pEventAPI)->EV_TraceTexture)
                       (*(int *)(param_2 + 0x30),in_stack_00000018,in_stack_0000001c);
    if (pcVar6 != (char *)0x0) {
      uVar7 = 0xffffffff;
      do {
        pcVar10 = pcVar6;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar10;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      pcVar6 = pcVar10 + -uVar7;
      pcVar10 = acStack_68;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar10 = pcVar10 + 1;
      }
      pcVar6 = acStack_68;
      if ((acStack_68[0] == '-') || (acStack_68[0] == '+')) {
        pcVar6 = acStack_68 + 2;
      }
      cVar2 = *pcVar6;
      if ((((cVar2 == '{') || (cVar2 == '!')) || (cVar2 == '~')) || (cVar2 == ' ')) {
        pcVar6 = pcVar6 + 1;
      }
      uVar7 = 0xffffffff;
      do {
        pcVar10 = pcVar6;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar10;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      pbVar9 = (byte_conflict *)(pcVar10 + -uVar7);
      pbVar11 = abStack_28;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar11 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar11 = pbVar11 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar11 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar11 = pbVar11 + 1;
      }
      uStack_19 = 0;
      uVar3 = FUN_1002a340(abStack_28);
    }
  }
  else {
    uVar3 = 0x46;
  }
  switch(uVar3) {
  case 0x44:
    iVar4 = 3;
    break;
  default:
    goto LAB_1004605c;
  case 0x46:
    return uVar3;
  case 0x47:
    goto LAB_1004605c;
  case 0x4d:
    goto LAB_1004605c;
  case 0x50:
  case 0x59:
    iVar4 = 3;
    break;
  case 0x53:
    iVar4 = 4;
    break;
  case 0x54:
    iVar4 = 4;
    break;
  case 0x56:
LAB_1004605c:
    iVar4 = 2;
    break;
  case 0x57:
    iVar4 = 3;
  }
  iVar5 = (*gEngfuncs.pfnRandomLong)(-5,5);
  lVar12 = __ftol();
  attenuation = (float)(iVar5 + (0x19 - (int)lVar12));
  volume = 0.0;
  pp_Var1 = &(gEngfuncs.pEventAPI)->EV_PlaySound;
  iVar4 = (*gEngfuncs.pfnRandomLong)(0,iVar4 + -1);
  (**pp_Var1)(0,pfStack_5c,6,(char *)(&uStack_6c)[iVar4],volume,attenuation,in_stack_ffffff78,
              (int)point);
  return uVar3;
}

/* 10046110  FUN_10046110  (294 bytes)
 * undefined FUN_10046110(float * param_1, float * param_2)
 * called by: FUN_10035010, FUN_10046a70, FUN_10055500, FUN_10055760
 */
void __cdecl FUN_10046110(float *param_1,float *param_2)

{
  float fVar1;
  float10 extraout_ST1;
  longlong lVar2;
  
  if ((param_2[1] == 0.0) && (*param_2 == 0.0)) {
    if (0.0 < param_2[2]) {
      *param_1 = -90.0;
      param_1[2] = 0.0;
      param_1[1] = 0.0;
      return;
    }
    *param_1 = -270.0;
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    return;
  }
  if (*param_2 != 0.0) {
    fpatan((float10)param_2[1],(float10)*param_2);
    __ftol();
  }
  fpatan((float10)param_2[2],
         SQRT((float10)param_2[1] * (float10)param_2[1] + (float10)*param_2 * (float10)*param_2));
  lVar2 = __ftol();
  fVar1 = (float)(int)lVar2;
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + 360.0;
  }
  *param_1 = -fVar1;
  param_1[2] = 0.0;
  param_1[1] = (float)extraout_ST1;
  return;
}

/* 10046240  FUN_10046240  (674 bytes)
 * undefined FUN_10046240(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9)
 * called by: FUN_10035010
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10046240(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_bullet_trail_spr_100956fc,5);
  if (iVar1 != -1) {
    puVar2 = FUN_1004ffe0();
    *(undefined1 *)((int)puVar2 + 5) = 0;
    *(undefined1 *)puVar2 = 1;
    puVar2[0x37] = param_9 * 0.75;
    puVar2[0x38] = 0x3dcccccd;
    *(short *)(puVar2 + 0x45) = (short)iVar1;
    puVar2[0x42] = param_7;
    puVar2[5] = param_1;
    puVar2[6] = param_2;
    *(undefined1 *)(puVar2 + 1) = 4;
    puVar2[7] = param_3;
    puVar2[0x2c] = 0;
    puVar2[0x30] = 0;
    puVar2[0x2d] = 0x3f800000;
    puVar2[0x31] = 0;
    puVar2[0x2e] = 0x3f800000;
    puVar2[0x32] = 0x3f800000;
    puVar2[0x2f] = 0;
    puVar2[0x33] = 0x3f800000;
    local_30 = param_4 - _DAT_1018bda8 * param_8;
    local_2c = param_5 - _DAT_1018bdac * param_8;
    local_28 = param_6 - _DAT_1018bdb0 * param_8;
    puVar2[0x20] = local_30;
    puVar2[0x21] = local_2c;
    puVar2[0x22] = local_28;
    local_24 = _DAT_1018bda8 * param_8;
    local_20 = _DAT_1018bdac * param_8;
    local_1c = _DAT_1018bdb0 * param_8;
    FUN_10002610(&local_30,&local_24);
    local_18 = local_30 + param_4;
    local_14 = param_5 + local_2c;
    local_10 = param_6 + local_28;
    FUN_10002610(&local_c,&local_18);
    puVar2[0x23] = local_c;
    puVar2[0x24] = local_8;
    puVar2[0x25] = local_4;
    param_4 = _DAT_1018bda8 * param_7;
    param_5 = _DAT_1018bdac * param_7;
    param_6 = _DAT_1018bdb0 * param_7;
    FUN_10002610(&local_c,&param_4);
    local_18 = local_c + param_1;
    local_14 = param_2 + local_8;
    local_10 = param_3 + local_4;
    FUN_10002610(&local_24,&local_18);
    puVar2[0x26] = local_24;
    puVar2[0x27] = local_20;
    puVar2[0x28] = local_1c;
    param_4 = _DAT_1018bda8 * param_7;
    param_5 = _DAT_1018bdac * param_7;
    param_6 = _DAT_1018bdb0 * param_7;
    FUN_10002610(&local_c,&param_4);
    puVar3 = (undefined4 *)FUN_1003d200(&param_1,&local_18,&local_c);
    puVar2[0x29] = *puVar3;
    puVar2[0x2a] = puVar3[1];
    puVar2[0x2b] = puVar3[2];
    FUN_10050b60(&DAT_1018bde8,puVar2,0,0);
  }
  return;
}

/* 100464f0  FUN_100464f0  (393 bytes)
 * undefined FUN_100464f0(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, byte.conflict * param_7, undefined4 param_8, short param_9, int param_10)
 * called by: FUN_10043200, FUN_10043800, FUN_10048840
 */
void __cdecl
FUN_100464f0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            byte_conflict *param_7,undefined4 param_8,short param_9,int param_10)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  float local_c;
  float local_8;
  float local_4;
  
  uVar2 = FUN_10050ad0(&DAT_1018bde8,0);
  if ((char)uVar2 != '\0') {
    fVar6 = FUN_10056fa0(DAT_1018ca48);
    FUN_10050b00(&DAT_1018bde8,0,(float)fVar6);
    uVar2 = FUN_100570b0(&param_1);
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_10057270(&local_c);
      iVar3 = FUN_100572a0(&param_1,uVar2);
      if ((char)iVar3 != '\0') {
        iVar3 = FUN_100509d0(&DAT_1018bde8,param_7,(short)param_8);
        if (iVar3 != -1) {
          puVar4 = FUN_1004ffe0();
          iVar5 = (int)(short)param_10;
          param_10 = (int)param_9;
          *(undefined1 *)((int)puVar4 + 5) = 0;
          *(undefined1 *)puVar4 = 1;
          puVar4[0x38] = 0;
          puVar4[0x37] = 0x3f800000;
          puVar4[0x3f] = (float)iVar5;
          *(short *)(puVar4 + 0x45) = (short)iVar3;
          puVar4[0x36] = 0;
          puVar4[0x3e] = 0;
          puVar4[0x42] = (float)param_10;
          fVar1 = (float)param_10 * 0.5;
          local_c = param_4 * fVar1;
          param_4 = param_1 + local_c;
          param_5 = param_2 + param_5 * fVar1;
          *(undefined1 *)(puVar4 + 1) = 0;
          param_6 = param_3 + fVar1 * param_6;
          puVar4[0xe] = 0;
          puVar4[5] = param_4;
          puVar4[6] = param_5;
          puVar4[7] = param_6;
          puVar4[0xf] = 0;
          puVar4[0x10] = 0xc0000000;
          puVar4[0x39] = 0x3f000000;
          puVar4[0x3d] = 0x40533333;
          puVar4[0x4a] = 0x40e00000;
          local_8 = param_5;
          local_4 = param_6;
          FUN_10050b60(&DAT_1018bde8,puVar4,0,0);
        }
      }
    }
  }
  return;
}

/* 10046680  FUN_10046680  (994 bytes)
 * undefined FUN_10046680(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, byte.conflict * param_7, int param_8, short param_9, undefined4 param_10, float param_11, int param_12)
 * called by: FUN_10048f60
 */
void __cdecl
FUN_10046680(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            byte_conflict *param_7,int param_8,short param_9,int param_10,float param_11,
            int param_12)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  longlong lVar8;
  longlong lVar9;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 local_c;
  float fStack_8;
  float fStack_4;
  
  if ((char)param_12 == '\0') {
    uVar3 = FUN_10050ad0(&DAT_1018bde8,0);
    if ((char)uVar3 == '\0') {
      return;
    }
    fVar7 = FUN_10056fa0(DAT_1018ca48);
    FUN_10050b00(&DAT_1018bde8,0,(float)fVar7);
  }
  uVar3 = FUN_100570b0(&param_1);
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_10057270(&local_c);
    iVar4 = FUN_100572a0(&param_1,uVar3);
    if (((char)iVar4 != '\0') &&
       (iVar4 = FUN_100509d0(&DAT_1018bde8,param_7,(short)param_8), iVar4 != -1)) {
      puVar5 = FUN_1004ffe0();
      iVar6 = (int)param_11._0_2_;
      param_11 = (float)iVar6;
      param_12 = (int)(short)param_10;
      puVar5[0x3f] = param_11;
      fVar2 = (float)param_12;
      puVar5[0x34] = 0x3dcccccd;
      *(undefined1 *)((int)puVar5 + 7) = 0;
      puVar5[0x42] = fVar2;
      local_54 = param_4 * fVar2;
      *(undefined1 *)((int)puVar5 + 6) = 0;
      *(undefined1 *)((int)puVar5 + 5) = 0;
      *(undefined1 *)puVar5 = 1;
      puVar5[0x38] = 0;
      local_50 = param_5 * fVar2;
      puVar5[0x37] = 0x3f000000;
      *(short *)(puVar5 + 0x45) = (short)iVar4;
      puVar5[0x36] = 0;
      puVar5[0x3e] = 0;
      local_48 = local_54 * 0.5;
      local_44 = local_50 * 0.5;
      local_40 = fVar2 * param_6 * 0.5;
      FUN_10002610(&local_54,&local_48);
      local_3c = local_54 + param_1;
      local_38 = param_2 + local_50;
      local_34 = param_3 + local_4c;
      FUN_10002610(&local_30,&local_3c);
      *(undefined1 *)(puVar5 + 1) = 0;
      puVar5[0x3d] = 0x40533333;
      puVar5[0x4a] = 0x40e00000;
      puVar5[5] = local_30;
      param_12 = 0;
      puVar5[6] = local_2c;
      puVar5[7] = local_28;
      if (0 < param_9) {
        lVar8 = __ftol();
        param_11 = (float)-iVar6;
        lVar9 = __ftol();
        param_10 = (int)lVar9;
        pfVar1 = (float *)(puVar5 + 0xe);
        param_11 = (float)(int)param_9;
        do {
          iVar4 = (*gEngfuncs.pfnRandomLong)(param_10,(int)lVar8);
          param_8 = iVar4 + iVar6;
          puVar5[0x3f] = (float)param_8;
          fVar7 = (float10)(*gEngfuncs.pfnRandomFloat)(8.0,24.0);
          local_30 = (float)((float10)param_4 * fVar7);
          local_2c = (float)((float10)param_5 * fVar7);
          local_28 = (float)((float10)param_6 * fVar7);
          FUN_10002610(&local_3c,&local_30);
          local_40 = (float)(int)param_11;
          local_48 = local_3c / local_40;
          local_44 = local_38 / local_40;
          local_40 = local_34 / local_40;
          FUN_10002610(&fStack_24,&local_48);
          *pfVar1 = fStack_24;
          puVar5[0xf] = uStack_20;
          puVar5[0x10] = uStack_1c;
          fVar7 = (float10)(*gEngfuncs.pfnRandomFloat)(-2.0,2.0);
          *pfVar1 = (float)(fVar7 + (float10)*pfVar1);
          fVar7 = (float10)(*gEngfuncs.pfnRandomFloat)(-2.0,2.0);
          puVar5[0xf] = (float)(fVar7 + (float10)(float)puVar5[0xf]);
          puVar5[0x39] = 0x3dcccccd;
          iVar4 = FUN_10050b60(&DAT_1018bde8,puVar5,0,0);
          if (iVar4 == -1) {
            return;
          }
          fVar2 = (float)puVar5[0x42];
          puVar5[0x42] = fVar2 * 0.8;
          fVar2 = fVar2 * 0.8 * (float)param_12;
          fStack_18 = param_4 * fVar2;
          fStack_14 = param_5 * fVar2;
          local_54 = fStack_18 + param_1;
          local_50 = param_2 + fStack_14;
          local_4c = param_3 + fVar2 * param_6;
          puVar5[5] = local_54;
          puVar5[6] = local_50;
          puVar5[7] = local_4c;
          param_12 = param_12 + 1;
          param_11 = (float)((int)param_11 + -1);
          fStack_8 = local_50;
          fStack_4 = local_4c;
        } while (param_12 < param_9);
      }
    }
  }
  return;
}

/* 10046a70  FUN_10046a70  (351 bytes)
 * undefined FUN_10046a70(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, byte.conflict * param_7, int param_8, int param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13)
 * called by: FUN_10048f60
 */
void __cdecl
FUN_10046a70(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            byte_conflict *param_7,int param_8,int param_9,undefined4 param_10,undefined4 param_11,
            undefined4 param_12,undefined4 param_13)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  short sVar4;
  
  uVar1 = FUN_100570b0(&param_1);
  if ((char)uVar1 != '\0') {
    sVar4 = (short)param_8;
    iVar2 = FUN_100509d0(&DAT_1018bde8,param_7,sVar4);
    if (iVar2 != -1) {
      puVar3 = FUN_1004ffe0();
      puVar3[0x34] = 0;
      *(undefined1 *)((int)puVar3 + 7) = 0;
      *(undefined1 *)((int)puVar3 + 6) = 0;
      *(undefined1 *)((int)puVar3 + 5) = 2;
      *(undefined1 *)puVar3 = 1;
      uVar1 = param_12;
      if (sVar4 != 5) {
        uVar1 = 0;
      }
      puVar3[0x38] = uVar1;
      puVar3[0x37] = param_11;
      *(short *)(puVar3 + 0x45) = (short)iVar2;
      puVar3[0x3f] = 0;
      *(undefined1 *)(puVar3 + 1) = 0;
      param_8 = FUN_100509a0(&DAT_1018bde8,(int)(short)iVar2);
      param_9 = (int)(short)param_9;
      puVar3[0x3e] = (float)param_8;
      puVar3[0x42] = (float)param_9;
      puVar3[5] = param_4 * 0.1 + param_1;
      puVar3[6] = param_2 + param_5 * 0.1;
      puVar3[0x39] = param_13;
      puVar3[7] = param_3 + param_6 * 0.1;
      FUN_10046110((float *)(puVar3 + 8),&param_4);
      puVar3[0x36] = param_10;
      FUN_10050b60(&DAT_1018bde8,puVar3,0,0);
    }
  }
  return;
}

/* 10046bd0  FUN_10046bd0  (888 bytes)
 * undefined FUN_10046bd0(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, byte.conflict * param_7, int param_8, int param_9, undefined4 param_10, int param_11, float param_12, undefined4 param_13, int param_14, int param_15)
 * called by: FUN_1003dfa0, FUN_10040c20, FUN_10048f60
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10046bd0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            byte_conflict *param_7,int param_8,int param_9,undefined4 param_10,int param_11,
            float param_12,undefined4 param_13,int param_14,int param_15)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  longlong lVar7;
  short sVar8;
  float fVar9;
  undefined4 local_c;
  float local_8;
  float local_4;
  
  uVar2 = FUN_100570b0(&param_1);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_10057270(&local_c);
    iVar3 = FUN_100572a0(&param_1,uVar2);
    if ((char)iVar3 != '\0') {
      if ((char)param_14 == '\0') {
        uVar2 = FUN_10050ad0(&DAT_1018bde8,2);
        if ((char)uVar2 == '\0') {
          uVar2 = FUN_10050ad0(&DAT_1018bde8,3);
          if ((char)uVar2 == '\0') {
            uVar2 = FUN_10050ad0(&DAT_1018bde8,4);
            if ((char)uVar2 == '\0') {
              uVar2 = FUN_10050ad0(&DAT_1018bde8,5);
              if ((char)uVar2 == '\0') {
                return;
              }
              fVar6 = FUN_10056fa0(DAT_1018ca44);
              fVar9 = (float)fVar6;
              sVar8 = 5;
            }
            else {
              fVar6 = FUN_10056fa0(DAT_1018ca44);
              fVar9 = (float)fVar6;
              sVar8 = 4;
            }
          }
          else {
            fVar6 = FUN_10056fa0(DAT_1018ca44);
            fVar9 = (float)fVar6;
            sVar8 = 3;
          }
        }
        else {
          fVar6 = FUN_10056fa0(DAT_1018ca44);
          fVar9 = (float)fVar6;
          sVar8 = 2;
        }
        FUN_10050b00(&DAT_1018bde8,sVar8,fVar9);
      }
      sVar8 = (short)param_8;
      iVar3 = FUN_100509d0(&DAT_1018bde8,param_7,sVar8);
      if (iVar3 != -1) {
        puVar4 = FUN_1004ffe0();
        puVar4[0x34] = param_13;
        *(undefined1 *)((int)puVar4 + 7) = 0;
        *(undefined1 *)((int)puVar4 + 6) = 0;
        *(undefined1 *)((int)puVar4 + 5) = 1;
        *(undefined1 *)puVar4 = 1;
        if (sVar8 == 5) {
          puVar4[0x38] = 0x3d4ccccd;
        }
        else {
          puVar4[0x38] = 0;
        }
        puVar4[0x37] = 0x3f800000;
        *(short *)(puVar4 + 0x45) = (short)iVar3;
        puVar4[0x3f] = 0;
        puVar4[0x40] = 0x3e99999a;
        puVar4[0x4a] = 0;
        puVar4[0x42] = param_10;
        local_8 = param_2 + param_5 + param_5;
        local_4 = param_3 + param_6 + param_6;
        puVar4[0x48] = 2;
        puVar4[5] = param_4 + param_4 + param_1;
        puVar4[6] = local_8;
        puVar4[7] = local_4;
        *(byte *)(puVar4 + 1) = -((char)param_15 != '\0') & 3;
        param_14 = (*gEngfuncs.pfnRandomLong)((int)(short)param_9 / 2,(int)(short)param_9);
        lVar7 = __ftol();
        param_14 = (int)lVar7;
        param_15 = 0;
        if (0 < param_14) {
          param_4 = param_4 * 16.0;
          param_5 = param_5 * 16.0;
          iVar3 = (int)(short)param_11;
          param_6 = param_6 * 16.0;
          pfVar1 = (float *)(puVar4 + 0xe);
          param_11 = iVar3 / 2;
          param_8 = -(iVar3 / 2);
          local_8 = param_5;
          local_4 = param_6;
          do {
            param_9 = (*gEngfuncs.pfnRandomLong)(-0xb4,0xb4);
            puVar4[0x13] = (float)param_9;
            *pfVar1 = param_4;
            puVar4[0xf] = param_5;
            puVar4[0x10] = param_6;
            param_9 = (*gEngfuncs.pfnRandomLong)(-iVar3,iVar3);
            *pfVar1 = (float)param_9 + *pfVar1;
            param_9 = (*gEngfuncs.pfnRandomLong)(-iVar3,iVar3);
            puVar4[0xf] = (float)param_9 + (float)puVar4[0xf];
            param_9 = (*gEngfuncs.pfnRandomLong)(param_8,param_11);
            puVar4[0x10] = (float)param_9 + (float)puVar4[0x10];
            puVar4[0x36] = (float)puVar4[0x13] * 0.001 + param_12;
            param_9 = FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar4 + 0x45));
            puVar4[0x3e] = (float)param_9;
            iVar5 = FUN_10050b60(&DAT_1018bde8,puVar4,0,0);
            if (iVar5 == -1) {
              return;
            }
            param_15 = param_15 + 1;
          } while (param_15 < param_14);
        }
      }
    }
  }
  return;
}

/* 10046f50  FUN_10046f50  (470 bytes)
 * undefined FUN_10046f50(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, byte.conflict * param_7, short param_8, short param_9)
 * called by: FUN_10043c90, FUN_10044230, FUN_10048f60, FUN_1004bd50
 */
void __cdecl
FUN_10046f50(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            byte_conflict *param_7,short param_8,short param_9)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = FUN_100509d0(&DAT_1018bde8,param_7,param_8);
  if (iVar2 != -1) {
    puVar3 = FUN_1004ffe0();
    *(short *)(puVar3 + 0x45) = (short)iVar2;
    puVar3[0x34] = 0;
    *(undefined1 *)((int)puVar3 + 7) = 0;
    puVar3[0xe] = param_4 + param_4;
    *(undefined1 *)((int)puVar3 + 6) = 0;
    puVar3[0xf] = param_5 + param_5;
    *(undefined1 *)((int)puVar3 + 5) = 0;
    *(undefined1 *)puVar3 = 1;
    puVar3[0x10] = param_6 + param_6;
    puVar3[0x38] = 0x3d4ccccd;
    puVar3[0x42] = (float)(int)param_9;
    puVar3[0x37] = 0x3f333333;
    puVar3[0x3f] = 0;
    puVar3[0x36] = 0;
    *(undefined1 *)(puVar3 + 1) = 0;
    _param_8 = 0;
    if (param_9 < 0x19 != 0xffffffff) {
      do {
        iVar2 = _param_8 + 1;
        puVar3[0x42] = (float)puVar3[0x42] - (float)_param_8;
        fVar1 = (float)iVar2 * (float)(int)param_9 * 0.5;
        puVar3[5] = param_1 + param_4 * fVar1;
        puVar3[6] = param_2 + param_5 * fVar1;
        puVar3[7] = param_3 + fVar1 * param_6;
        iVar4 = FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar3 + 0x45));
        puVar3[0x3e] = (float)iVar4;
        if (_param_8 < 1) {
          puVar3[0x39] = 0;
        }
        else {
          puVar3[0x39] = 0x3f800000;
        }
        iVar4 = FUN_10050b60(&DAT_1018bde8,puVar3,0,0);
      } while ((iVar4 != -1) && (_param_8 = iVar2, iVar2 < (int)((param_9 < 0x19) + 1)));
    }
  }
  return;
}

/* 10047130  FUN_10047130  (896 bytes)
 * undefined FUN_10047130(short param_1, int param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12, int param_13)
 * called by: FUN_1003dfa0, FUN_1003f090, FUN_10040c20, FUN_100419a0
 */
void __cdecl
FUN_10047130(short param_1,int param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9,float param_10,float param_11,float param_12,
            int param_13)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  longlong lVar7;
  longlong lVar8;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 local_c;
  float fStack_8;
  float fStack_4;
  
  if ((char)param_13 == '\0') {
    uVar3 = FUN_10050ad0(&DAT_1018bde8,1);
    if ((char)uVar3 == '\0') {
      return;
    }
    fVar6 = FUN_10056fa0(0.1);
    FUN_10050b00(&DAT_1018bde8,1,(float)fVar6);
  }
  if ((*(float *)(DAT_100df464 + 0xc) != 0.0) &&
     (uVar3 = FUN_100570b0(&param_3), (char)uVar3 != '\0')) {
    uVar3 = FUN_10057270(&local_c);
    iVar4 = FUN_100572a0(&param_3,uVar3);
    if (((char)iVar4 != '\0') &&
       (iVar4 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_gun_smoke_add_spr_100953f0,5),
       iVar4 != -1)) {
      puVar5 = FUN_1004ffe0();
      puVar5[0x3f] = (float)param_2;
      puVar5[0x34] = 0x3c23d70a;
      *(undefined1 *)((int)puVar5 + 7) = 0;
      *(undefined1 *)((int)puVar5 + 6) = 0;
      *(undefined1 *)((int)puVar5 + 5) = 0;
      puVar5[0x42] = (float)(int)param_1;
      *(undefined1 *)puVar5 = 1;
      puVar5[0x38] = 0;
      puVar5[0x37] = 0x3e99999a;
      *(short *)(puVar5 + 0x45) = (short)iVar4;
      fVar2 = (float)(int)param_1 * 0.5;
      puVar5[0x36] = 0;
      puVar5[0x3e] = 0;
      param_13 = 0;
      *(undefined1 *)(puVar5 + 1) = 0;
      puVar5[0x3d] = 0x40533333;
      puVar5[5] = param_3 + param_9 * fVar2;
      puVar5[6] = param_4 + param_10 * fVar2;
      puVar5[7] = param_5 + fVar2 * param_11;
      lVar7 = __ftol();
      lVar8 = __ftol();
      pfVar1 = (float *)(puVar5 + 0xe);
      _param_1 = 5;
      do {
        iVar4 = (*gEngfuncs.pfnRandomLong)((int)lVar8,(int)lVar7);
        puVar5[0x3f] = (float)(iVar4 + param_2);
        fVar2 = param_12 / (float)_param_1;
        fStack_30 = param_6 + fVar2 * param_9;
        fStack_2c = param_7 + param_10 * fVar2;
        fStack_28 = param_8 + fVar2 * param_11;
        FUN_10002610(&fStack_24,&fStack_30);
        fVar2 = (float)puVar5[0x42] * 0.2;
        *pfVar1 = fStack_24;
        puVar5[0xf] = uStack_20;
        puVar5[0x10] = uStack_1c;
        fVar6 = (float10)(*gEngfuncs.pfnRandomFloat)(-fVar2,fVar2);
        *pfVar1 = (float)(fVar6 + (float10)*pfVar1);
        fVar6 = (float10)(*gEngfuncs.pfnRandomFloat)(-fVar2,fVar2);
        puVar5[0xf] = (float)(fVar6 + (float10)(float)puVar5[0xf]);
        puVar5[0x39] = 0x3dcccccd;
        iVar4 = FUN_10050b60(&DAT_1018bde8,puVar5,0,0);
        if (iVar4 == -1) {
          return;
        }
        fVar2 = (float)puVar5[0x42];
        puVar5[0x42] = fVar2 * 0.8;
        fVar2 = fVar2 * 0.8 * (float)param_13;
        fStack_18 = fVar2 * param_9;
        fStack_14 = param_10 * fVar2;
        fStack_8 = param_4 + fStack_14;
        fStack_4 = param_5 + fVar2 * param_11;
        puVar5[5] = fStack_18 + param_3;
        puVar5[6] = fStack_8;
        puVar5[7] = fStack_4;
        _param_1 = _param_1 + -1;
        param_13 = param_13 + 1;
      } while (0 < _param_1);
    }
  }
  return;
}

/* 100474b0  FUN_100474b0  (2045 bytes)
 * undefined FUN_100474b0(float param_1, float param_2, float param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12, int param_13, float param_14)
 * called by: FUN_1003dfa0, FUN_1003f090, FUN_10040c20
 */
void __cdecl
FUN_100474b0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9,float param_10,float param_11,float param_12,
            int param_13,float param_14)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  short sVar7;
  int iVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 fVar9;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  longlong lVar10;
  float in_stack_0000003c;
  float fStack00000040;
  float in_stack_00000048;
  int in_stack_0000004c;
  float in_stack_00000050;
  float in_stack_ffffff98;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  fVar4 = (float)(uint)*(byte *)((int)param_7 + 0x350);
  param_7 = *(float *)((int)param_7 + 0x358);
  if (param_14._0_1_ != '\0') {
    lVar10 = __ftol();
    param_7 = (float)lVar10;
  }
  if (param_12._0_1_ == '\0') {
    fVar14 = 60.0;
    fVar13 = 50.0;
    fVar12 = 2.6122616e-29;
    (*gEngfuncs.pfnRandomFloat)(50.0,60.0);
    pfVar5 = &param_10;
    fVar6 = (float)(extraout_ST0 * (float10)(int)param_9);
    fVar11 = 2.6122706e-29;
    FUN_10002610(&stack0xffffffa4,pfVar5);
    FUN_10002610(&stack0xffffff98,&param_3);
    FUN_10052c80(&DAT_1018bde8,in_stack_ffffff98,fVar11,(float)pfVar5,fVar12,fVar13,fVar14,fVar4,
                 fVar6);
  }
  fStack00000040 = (float)(int)(short)param_13;
  lVar10 = __ftol();
  param_13 = (int)lVar10;
  if ((short)lVar10 < 3) {
    param_13 = 3;
  }
  iVar8 = param_13;
  puVar2 = FUN_1004ffe0();
  puVar2[0x40] = 0;
  puVar2[0x3d] = 0x40533333;
  puVar2[0x4a] = 0;
  iVar3 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_ts_muzzleflash1h_spr_10095734,5);
  if (iVar3 != -1) {
    sVar7 = (short)iVar3;
    if (param_14._0_1_ == '\0') {
      fVar4 = (float)(int)(short)param_13;
      iVar8 = 0;
      puVar2[0x34] = 0;
      *(undefined1 *)((int)puVar2 + 7) = 0;
      *(undefined1 *)((int)puVar2 + 6) = 0;
      *(undefined1 *)puVar2 = 1;
      puVar2[0x36] = 0;
      puVar2[0x3f] = 0;
      *(undefined1 *)((int)puVar2 + 5) = 1;
      *(undefined1 *)(puVar2 + 1) = 1;
      param_14 = 0.9;
      if (0 < (int)fVar4) {
        fStack00000040 = (float)(int)fStack_24;
        param_13 = (int)(float)(int)fVar4;
        param_9 = (float)(int)in_stack_0000003c;
        do {
          (*gEngfuncs.pfnRandomFloat)(0.7,1.3);
          puVar2[0x42] = (float)(extraout_ST0_00 * (float10)fVar4);
          if (iVar8 == 0) {
            puVar2[0x42] = (float)(extraout_ST0_00 * (float10)fVar4 * (float10)0.7);
          }
          fVar6 = (float)(int)fStack_24;
          puVar2[5] = param_11 * param_12 +
                      (in_stack_00000048 * fVar6 * param_12) / in_stack_0000003c + param_5;
          puVar2[6] = param_11 * (float)param_13 +
                      (in_stack_00000048 * fVar6 * (float)param_13) / in_stack_0000003c + param_6;
          puVar2[7] = param_11 * param_14 +
                      (in_stack_00000048 * fVar6 * param_14) / in_stack_0000003c + param_7;
          puVar2[0xe] = param_8;
          puVar2[0xf] = param_9;
          puVar2[0x10] = param_10;
          (*gEngfuncs.pfnRandomFloat)(-3.0,3.0);
          puVar2[0x10] = (float)(extraout_ST0_01 + (float10)(float)puVar2[0x10]);
          *(short *)(puVar2 + 0x45) = sVar7;
          iVar3 = FUN_100509a0(&DAT_1018bde8,(int)sVar7);
          puVar2[0x37] = in_stack_00000048;
          puVar2[0x38] = fStack_24;
          puVar2[0x3e] = (float)iVar3;
          if (iVar8 == 1) {
            uVar1 = 0x3e4ccccd;
          }
          else {
            uVar1 = 0;
          }
          puVar2[0x39] = uVar1;
          fStack_c = (float)(*gEngfuncs.pfnRandomLong)(-0x5a,0x5a);
          puVar2[0x13] = (float)(int)fStack_c;
          iVar3 = FUN_10050b60(&DAT_1018bde8,puVar2,0,0);
          if (iVar3 == -1) {
            return;
          }
          in_stack_00000050 = in_stack_00000050 * 0.90909094;
          iVar8 = iVar8 + 1;
          fStack_20 = fStack_20 * 0.90909094;
        } while (iVar8 < (int)fStack_18);
      }
      if (fStack_20 == 1.4013e-45) {
        iVar8 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_ts_muzzleflash6_spr_10095718,5
                            );
        puVar2[0x34] = 0;
        param_14 = (float)((int)in_stack_0000003c + -2);
        *(undefined1 *)((int)puVar2 + 7) = 0;
        *(undefined1 *)((int)puVar2 + 6) = 0;
        fVar4 = (float)(int)param_14;
        puVar2[5] = fVar4 * param_10 + param_3;
        puVar2[6] = fVar4 * param_11 + param_4;
        puVar2[7] = fVar4 * param_12 + param_5;
        puVar2[0xe] = param_6;
        puVar2[0xf] = param_7;
        puVar2[0x10] = param_8;
        fStack00000040 = (float)(*gEngfuncs.pfnRandomLong)(-10,10);
        puVar2[0x13] = (float)(int)fStack00000040;
        *(undefined1 *)puVar2 = 1;
        puVar2[0x36] = 0;
        puVar2[0x38] = 0x3e051eb8;
        *(undefined1 *)((int)puVar2 + 5) = 1;
        puVar2[0x3f] = 0;
        (*gEngfuncs.pfnRandomFloat)(1.4,1.7);
        puVar2[0x37] = 0x3f19999a;
        *(short *)(puVar2 + 0x45) = (short)iVar8;
        *(undefined1 *)(puVar2 + 1) = 0;
        puVar2[0x42] = (float)(extraout_ST0_02 * (float10)fStack_18);
        in_stack_00000050 = (float)(*gEngfuncs.pfnRandomLong)(-10,10);
        puVar2[0x13] = (float)(int)in_stack_00000050;
        in_stack_00000050 = (float)FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar2 + 0x45));
      }
      else {
        puVar2[0x34] = 0;
        param_14 = (float)((int)in_stack_0000003c + -2);
        *(undefined1 *)((int)puVar2 + 7) = 0;
        *(undefined1 *)((int)puVar2 + 6) = 0;
        fVar4 = (float)(int)param_14;
        puVar2[5] = fVar4 * param_10 + param_3;
        puVar2[6] = fVar4 * param_11 + param_4;
        puVar2[7] = fVar4 * param_12 + param_5;
        puVar2[0xe] = param_6;
        puVar2[0xf] = param_7;
        puVar2[0x10] = param_8;
        fStack00000040 = (float)(*gEngfuncs.pfnRandomLong)(-10,10);
        puVar2[0x13] = (float)(int)fStack00000040;
        *(undefined1 *)puVar2 = 1;
        puVar2[0x36] = 0;
        puVar2[0x38] = 0x3e051eb8;
        *(undefined1 *)((int)puVar2 + 5) = 1;
        puVar2[0x3f] = 0;
        (*gEngfuncs.pfnRandomFloat)(1.1,1.4);
        puVar2[0x37] = 0x3f333333;
        *(short *)(puVar2 + 0x45) = sVar7;
        *(undefined1 *)(puVar2 + 1) = 0;
        puVar2[0x42] = (float)(extraout_ST0_03 * (float10)fStack_18);
        in_stack_00000050 = (float)(*gEngfuncs.pfnRandomLong)(-10,10);
        puVar2[0x13] = (float)(int)in_stack_00000050;
        in_stack_00000050 = (float)FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar2 + 0x45));
      }
      puVar2[0x3e] = (float)(int)in_stack_00000050;
      FUN_10050b60(&DAT_1018bde8,puVar2,0,0);
      return;
    }
    pfVar5 = (float *)FUN_10057270(&uStack_4);
    fStack_10 = param_3 - *pfVar5;
    fStack_c = param_4 - pfVar5[1];
    fStack_8 = param_5 - pfVar5[2];
    fVar9 = FUN_10058390(&fStack_10);
    if (fVar9 <= (float10)512.0) {
      fStack00000040 = (float)(int)(short)iVar8;
      puVar2[0x34] = 0;
      *(undefined1 *)((int)puVar2 + 7) = 0;
      *(undefined1 *)((int)puVar2 + 6) = 0;
      *(undefined1 *)puVar2 = 1;
      puVar2[0x36] = 0;
      param_14 = (float)(((float10)512.0 - fVar9) * (float10)0.0005859375);
      *(undefined1 *)((int)puVar2 + 5) = 1;
      puVar2[0x3f] = 0;
      *(short *)(puVar2 + 0x45) = sVar7;
      *(undefined1 *)(puVar2 + 1) = 1;
      lVar10 = __ftol();
      fVar4 = param_8;
      fVar6 = (float)(int)(short)lVar10;
      iVar8 = 0;
      if (0 < (int)fVar6) {
        fStack00000040 = (float)(int)fStack_24;
        param_13 = (int)(float)(int)fVar6;
        param_9 = (float)(int)in_stack_0000003c;
        while( true ) {
          (*gEngfuncs.pfnRandomFloat)(0.6,1.0);
          puVar2[0x42] = (float)(extraout_ST0_04 * (float10)fVar6);
          fVar11 = (float)(int)fStack_20;
          puVar2[5] = param_11 * param_12 +
                      (fVar11 * in_stack_00000048 * param_12) / in_stack_0000003c + param_5;
          puVar2[6] = param_11 * (float)param_13 +
                      (fVar11 * in_stack_00000048 * (float)param_13) / in_stack_0000003c + param_6;
          puVar2[7] = param_11 * param_14 +
                      (fVar11 * in_stack_00000048 * param_14) / in_stack_0000003c + param_7;
          puVar2[0xe] = param_8;
          puVar2[0xf] = param_9;
          puVar2[0x10] = fVar4;
          (*gEngfuncs.pfnRandomFloat)(-3.0,3.0);
          puVar2[0x10] = (float)(extraout_ST0_05 + (float10)(float)puVar2[0x10]);
          in_stack_0000004c = FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar2 + 0x45));
          puVar2[0x37] = in_stack_00000048;
          puVar2[0x38] = fStack_24;
          puVar2[0x3e] = (float)in_stack_0000004c;
          if (iVar8 == 1) {
            uVar1 = 0x3e99999a;
          }
          else {
            uVar1 = 0;
          }
          puVar2[0x39] = uVar1;
          iVar3 = FUN_10050b60(&DAT_1018bde8,puVar2,0,0);
          if (iVar3 == -1) break;
          in_stack_00000048 = in_stack_00000048 * 0.90909094;
          iVar8 = iVar8 + 1;
          fStack_24 = in_stack_00000048 * 0.2;
          if ((int)fStack_20 <= iVar8) {
            return;
          }
        }
      }
    }
  }
  return;
}

/* 10047cb0  FUN_10047cb0  (1271 bytes)
 * undefined FUN_10047cb0(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, undefined4 param_7, float param_8, float param_9, float param_10, float param_11, float param_12, float param_13, uint param_14, float param_15)
 * called by: FUN_1004bd50
 */
void __cdecl
FUN_10047cb0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            undefined4 param_7,float param_8,float param_9,float param_10,float param_11,
            float param_12,float param_13,uint param_14,float param_15)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  float10 fVar5;
  int local_5c;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  
  local_54 = param_4;
  local_50 = param_5;
  local_4c = param_6;
  if (param_4 <= param_5) {
    if (param_4 <= param_6) {
      local_54 = 0.0;
    }
    else {
      local_4c = 0.0;
    }
  }
  else if (param_5 <= param_6) {
    local_50 = 0.0;
  }
  else {
    local_4c = 0.0;
  }
  iVar2 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_glassfrag_spr_10095754,5);
  if (iVar2 != -1) {
    puVar3 = FUN_1004ffe0();
    puVar3[0x34] = 0x3f800000;
    *(undefined1 *)((int)puVar3 + 7) = 0;
    *(undefined1 *)((int)puVar3 + 6) = 0;
    *(undefined1 *)((int)puVar3 + 5) = 1;
    *(undefined1 *)puVar3 = 1;
    puVar3[0x38] = 0x3d4ccccd;
    puVar3[0x37] = 0x3f333333;
    *(short *)(puVar3 + 0x45) = (short)iVar2;
    fVar1 = (local_4c + local_50 + local_54) * 0.055555556 * 0.7;
    puVar3[0x3f] = 0;
    *(undefined1 *)(puVar3 + 1) = 3;
    puVar3[0x48] = 2;
    puVar3[0x40] = 0x3f000000;
    puVar3[0x4a] = 0;
    if (20.0 <= fVar1) {
      fVar1 = 20.0;
    }
    puVar3[0x42] = fVar1;
    local_48 = param_1;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    local_44 = param_2;
    local_40 = param_3;
    if (local_54 != 0.0) {
      local_48 = param_1 - param_4 * 0.5;
    }
    if (local_50 != 0.0) {
      local_44 = param_2 - param_5 * 0.5;
    }
    if (local_4c != 0.0) {
      local_40 = param_3 - param_6 * 0.5;
    }
    local_5c = 0;
    uVar4 = param_14 & 0x8000002;
    do {
      if (local_54 == 0.0) {
        local_44 = param_5 * 0.11111111 * (float)local_5c + (param_2 - param_5 * 0.5);
      }
      else {
        local_48 = param_4 * 0.11111111 * (float)local_5c + (param_1 - param_4 * 0.5);
      }
      param_14 = 0;
      do {
        if ((local_54 == 0.0) || (local_50 == 0.0)) {
          local_40 = param_6 * 0.11111111 * (float)(int)param_14 + (param_3 - param_6 * 0.5);
        }
        else {
          local_44 = param_5 * 0.11111111 * (float)(int)param_14 + (param_2 - param_5 * 0.5);
        }
        iVar2 = FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar3 + 0x45));
        puVar3[5] = local_48;
        puVar3[0x3e] = (float)iVar2;
        puVar3[6] = local_44;
        puVar3[7] = local_40;
        if (uVar4 == 0) {
          fVar5 = (float10)(*gEngfuncs.pfnRandomFloat)
                                     (param_8 * param_15 * 0.5,param_8 * param_15 + 15.0);
          puVar3[0xe] = (float)fVar5;
          fVar5 = (float10)(*gEngfuncs.pfnRandomFloat)
                                     (param_9 * param_15 * 0.5,param_9 * param_15 + 15.0);
          puVar3[0xf] = (float)fVar5;
          fVar5 = (float10)(*gEngfuncs.pfnRandomFloat)
                                     (param_10 * param_15 * 0.5,param_10 * param_15 + 15.0);
          puVar3[0x10] = (float)fVar5;
        }
        else {
          fVar5 = (float10)(*gEngfuncs.pfnRandomFloat)(-9.0,9.0);
          puVar3[0xe] = (float)fVar5;
          fVar5 = (float10)(*gEngfuncs.pfnRandomFloat)(-9.0,9.0);
          puVar3[0xf] = (float)fVar5;
          iVar2 = (*gEngfuncs.pfnRandomLong)(0,10);
          puVar3[0x10] = (float)iVar2;
          fVar1 = param_15 /
                  (SQRT(((float)puVar3[5] - param_11) * ((float)puVar3[5] - param_11) +
                        ((float)puVar3[6] - param_12) * ((float)puVar3[6] - param_12) +
                        ((float)puVar3[7] - param_13) * ((float)puVar3[7] - param_13)) + 1.0);
          puVar3[0xe] = param_8 * fVar1 * 10.0 + (float)puVar3[0xe];
          puVar3[0xf] = param_9 * fVar1 * 10.0 + (float)puVar3[0xf];
          puVar3[0x10] = fVar1 * param_10 * 10.0 + (float)puVar3[0x10];
        }
        iVar2 = (*gEngfuncs.pfnRandomLong)(-0x5a,0x5a);
        puVar3[0x13] = (float)iVar2;
        fVar5 = (float10)(*gEngfuncs.pfnRandomFloat)(2.0,5.0);
        puVar3[0x36] = (float)fVar5;
        iVar2 = FUN_10050b60(&DAT_1018bde8,puVar3,0,0);
        if (iVar2 == -1) {
          return;
        }
        param_14 = param_14 + 1;
      } while ((int)param_14 < 9);
      local_5c = local_5c + 1;
    } while (local_5c < 9);
  }
  return;
}

/* 100481b0  FUN_100481b0  (1343 bytes)
 * undefined FUN_100481b0(float * param_1, int param_2)
 * called by: FUN_1004bd50
 */
void __cdecl FUN_100481b0(float *param_1,int param_2)

{
  float *pfVar1;
  event_api_s *peVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float attenuation;
  int unaff_EBX;
  int unaff_EBP;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  float10 extraout_ST0_06;
  float10 extraout_ST0_07;
  float10 extraout_ST0_08;
  float10 extraout_ST0_09;
  longlong lVar7;
  float *in_stack_0000000c;
  int iStack00000010;
  double dVar8;
  int in_stack_00000030;
  int iStack00000034;
  int in_stack_00000038;
  int in_stack_00000054;
  char *sample;
  float volume;
  undefined4 uVar9;
  float *pfVar10;
  
  iVar3 = (*gEngfuncs.pfnRandomLong)(0,4);
  peVar2 = gEngfuncs.pEventAPI;
  switch(iVar3) {
  case 0:
    lVar7 = __ftol();
    attenuation = (float)(100 - (int)lVar7);
    (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
    volume = (float)extraout_ST0;
    sample = s_explo_explode_wav_100957d8;
    break;
  case 1:
    lVar7 = __ftol();
    attenuation = (float)(100 - (int)lVar7);
    (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
    volume = (float)extraout_ST0_00;
    sample = s_explo_explode1_wav_100957c4;
    break;
  case 2:
    lVar7 = __ftol();
    attenuation = (float)(100 - (int)lVar7);
    (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
    volume = (float)extraout_ST0_01;
    sample = s_explo_explode2_wav_100957b0;
    break;
  case 3:
    lVar7 = __ftol();
    attenuation = (float)(100 - (int)lVar7);
    (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
    volume = (float)extraout_ST0_02;
    sample = s_explo_explode3_wav_1009579c;
    break;
  case 4:
    lVar7 = __ftol();
    attenuation = (float)(100 - (int)lVar7);
    (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
    volume = (float)extraout_ST0_03;
    sample = s_explo_explode4_wav_10095788;
    break;
  default:
    goto switchD_100481d2_default;
  }
  (*peVar2->EV_PlaySound)(0,in_stack_0000000c,6,sample,volume,attenuation,unaff_EBP,unaff_EBX);
switchD_100481d2_default:
  iStack00000034 = in_stack_00000038 * 10;
  FUN_100524c0(&DAT_1018bde8,in_stack_0000000c,(float *)0x0,512.0,(float)iStack00000034);
  iVar3 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_grenade_asplode_spr_1009576c,5);
  if (iVar3 != -1) {
    puVar4 = FUN_1004ffe0();
    dVar8 = (double)in_stack_00000038;
    *(short *)(puVar4 + 0x45) = (short)iVar3;
    pfVar1 = (float *)(puVar4 + 5);
    puVar4[0x34] = 0x3c23d70a;
    *(undefined1 *)((int)puVar4 + 7) = 0;
    *(undefined1 *)((int)puVar4 + 6) = 0;
    *(undefined1 *)((int)puVar4 + 5) = 0;
    puVar4[0x42] = (float)in_stack_00000038 * 0.5;
    *(undefined1 *)puVar4 = 1;
    puVar4[0x38] = 0;
    puVar4[0x37] = 0x3e99999a;
    puVar4[0x36] = 0;
    puVar4[0x3e] = 0;
    *pfVar1 = *in_stack_0000000c;
    puVar4[6] = in_stack_0000000c[1];
    puVar4[7] = in_stack_0000000c[2];
    puVar4[7] = (float)in_stack_00000038 * 0.5 * 0.5 + (float)puVar4[7];
    *(undefined1 *)(puVar4 + 1) = 0;
    puVar4[0x39] = 0x3dcccccd;
    puVar4[0x3d] = 0x40533333;
    puVar4[0x4a] = 0;
    lVar7 = __ftol();
    iStack00000010 = (int)lVar7;
    iStack00000034 = 0;
    if (0 < iStack00000010) {
      do {
        (*gEngfuncs.pfnRandomFloat)(-70.0,70.0);
        puVar4[0xe] = (float)extraout_ST0_04;
        (*gEngfuncs.pfnRandomFloat)(-70.0,70.0);
        puVar4[0xf] = (float)extraout_ST0_05;
        (*gEngfuncs.pfnRandomFloat)(0.0,70.0);
        puVar4[0x10] = (float)extraout_ST0_06;
        iStack00000034 = (*gEngfuncs.pfnRandomLong)(0x19,0x1e);
        dVar8 = 0.0;
        puVar4[0x3f] = (float)iStack00000034;
        iStack00000010 = 0x10048496;
        iVar3 = FUN_10050b60(&DAT_1018bde8,puVar4,0,0);
        if (iVar3 == -1) {
          return;
        }
        in_stack_00000054 = in_stack_00000054 + 1;
      } while (in_stack_00000054 < in_stack_00000030);
    }
    iVar3 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_gun_smoke_add_spr_100953f0,5);
    if (iVar3 != -1) {
      puVar4[0x34] = 0x3c23d70a;
      *(undefined1 *)((int)puVar4 + 7) = 0;
      *(undefined1 *)((int)puVar4 + 6) = 0;
      *(undefined1 *)((int)puVar4 + 5) = 0;
      *(undefined1 *)puVar4 = 1;
      puVar4[0x42] = (float)((float10)dVar8 * (float10)0.7);
      puVar4[0x38] = 0;
      puVar4[0x37] = 0x3e99999a;
      *(short *)(puVar4 + 0x45) = (short)iVar3;
      puVar4[0x36] = 0;
      puVar4[0x3e] = 0;
      *pfVar1 = *in_stack_0000000c;
      puVar4[6] = in_stack_0000000c[1];
      puVar4[7] = in_stack_0000000c[2];
      puVar4[7] = (float)((float10)dVar8 * (float10)0.7 * (float10)0.5 + (float10)(float)puVar4[7]);
      *(undefined1 *)(puVar4 + 1) = 0;
      puVar4[0x39] = 0x3dcccccd;
      puVar4[0x3d] = 0x40533333;
      puVar4[0x4a] = 0;
      lVar7 = __ftol();
      iStack00000010 = (int)lVar7;
      iStack00000034 = 0;
      if (0 < iStack00000010) {
        do {
          (*gEngfuncs.pfnRandomFloat)(-54.0,54.0);
          puVar4[0xe] = (float)extraout_ST0_07;
          (*gEngfuncs.pfnRandomFloat)(-54.0,54.0);
          puVar4[0xf] = (float)extraout_ST0_08;
          (*gEngfuncs.pfnRandomFloat)(0.0,54.0);
          puVar4[0x10] = (float)extraout_ST0_09;
          iStack00000034 = (*gEngfuncs.pfnRandomLong)(2,10);
          puVar4[0x3f] = (float)iStack00000034;
          iStack00000010 = 0x100485ca;
          iVar3 = FUN_10050b60(&DAT_1018bde8,puVar4,0,0);
          if (iVar3 == -1) {
            return;
          }
          in_stack_00000054 = in_stack_00000054 + 1;
        } while (in_stack_00000054 < in_stack_00000030);
      }
      pfVar5 = (float *)FUN_1001fb70(&stack0x00000018,0,0,0x20);
      pfVar10 = (float *)&stack0x00000024;
      uVar9 = 0x1004860c;
      puVar6 = (undefined4 *)FUN_10035b10(in_stack_0000000c,pfVar10,pfVar5);
      FUN_10002610(&stack0xffffffe4,puVar6);
      FUN_10048e60(uVar9,pfVar10,pfVar5);
      iVar3 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_scintille_metal_spr_10095460,5);
      if (iVar3 != -1) {
        puVar4[0x34] = 0;
        *(undefined1 *)((int)puVar4 + 7) = 0;
        *(undefined1 *)((int)puVar4 + 6) = 0;
        *(undefined1 *)((int)puVar4 + 5) = 0;
        *(undefined1 *)puVar4 = 1;
        puVar4[0x38] = 0x3d4ccccd;
        puVar4[0xe] = 0;
        puVar4[0xf] = 0;
        puVar4[0x10] = 0;
        *(short *)(puVar4 + 0x45) = (short)iVar3;
        puVar4[0x37] = 0x3f800000;
        puVar4[0x3f] = 0;
        puVar4[0x36] = 0;
        in_stack_00000038 = in_stack_00000038 * 2;
        puVar4[0x42] = (float)in_stack_00000038;
        *pfVar1 = *in_stack_0000000c;
        puVar4[6] = in_stack_0000000c[1];
        puVar4[7] = in_stack_0000000c[2];
        puVar4[7] = (float)in_stack_00000038 * 0.5 + (float)puVar4[7];
        *(undefined1 *)(puVar4 + 1) = 0;
        in_stack_00000038 = FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar4 + 0x45));
        puVar4[0x39] = 0x40000000;
        puVar4[0x3e] = (float)in_stack_00000038;
        FUN_10050b60(&DAT_1018bde8,puVar4,0,0);
      }
    }
  }
  return;
}

/* 10048710  FUN_10048710  (299 bytes)
 * undefined FUN_10048710()
 */
void FUN_10048710(void)

{
  _func_678 **pp_Var1;
  _func_676 **pp_Var2;
  physent_s *ppVar3;
  int iVar4;
  int unaff_EBX;
  float10 extraout_ST0;
  longlong lVar5;
  pmtrace_s *in_stack_00000010;
  undefined1 *in_stack_0000003c;
  undefined1 *in_stack_00000064;
  int entity;
  float *in_stack_ffffffe8;
  int in_stack_ffffffec;
  
  (*gEngfuncs.pfnRandomLong)(1,8);
  FUN_1006ac7a(&stack0xffffffe8,(byte_conflict *)s__blood_i_10095800);
  ppVar3 = (*(gEngfuncs.pEventAPI)->EV_GetPhysent)(in_stack_00000010->ent);
  if ((((&stack0x00000000 != (undefined1 *)0x14) && ((char)in_stack_ffffffec != '\0')) &&
      (ppVar3 != (physent_s *)0x0)) && ((ppVar3->solid == 4 || (ppVar3->movetype == 0xd)))) {
    (*gEngfuncs.pfnGetCvarFloat)(s_r_decals_10091100);
    if (extraout_ST0 != (float10)0.0) {
      entity = 0;
      pp_Var1 = &(gEngfuncs.pEfxAPI)->R_DecalShoot;
      pp_Var2 = &(gEngfuncs.pEfxAPI)->Draw_DecalIndex;
      (*(gEngfuncs.pEventAPI)->EV_IndexFromTrace)(in_stack_00000010);
      iVar4 = (*(gEngfuncs.pEfxAPI)->Draw_DecalIndexFromName)(&stack0xfffffff4);
      iVar4 = (**pp_Var2)(iVar4);
      (**pp_Var1)(iVar4,entity,unaff_EBX,in_stack_ffffffe8,in_stack_ffffffec);
    }
  }
  iVar4 = (*gEngfuncs.pfnRandomLong)(0,100);
  if (0x5a < iVar4) {
    iVar4 = (*gEngfuncs.pfnRandomLong)(-5,5);
    lVar5 = __ftol();
    (*(gEngfuncs.pEventAPI)->EV_PlaySound)
              (-1,in_stack_00000010->endpos,0,s_player_splat_wav_100957ec,1.0,0.99,0,
               iVar4 + (0x19 - (int)lVar5));
    *in_stack_00000064 = 0;
    return;
  }
  *in_stack_0000003c = 0;
  return;
}

/* 10048840  FUN_10048840  (1538 bytes)
 * undefined FUN_10048840(float * param_1, float * param_2, int param_3)
 * called by: FUN_1004bcd0
 */
void __cdecl FUN_10048840(float *param_1,float *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  longlong lVar4;
  int in_stack_0000001c;
  int in_stack_00000024;
  undefined4 *in_stack_0000002c;
  float *in_stack_00000050;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  char *pcVar10;
  short sVar11;
  float fStack_6c;
  int iStack_68;
  float fStack_64;
  code *in_stack_ffffffac;
  code *pcVar12;
  int iStack_48;
  float fStack_44;
  float fStack_40;
  float local_3c;
  float fStack_38;
  code *pcStack_34;
  float fStack_30;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  float fStack_18;
  code *pcStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  uVar1 = FUN_100570b0(param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_10057270(&local_3c);
    fVar5 = 2.6137527e-29;
    iVar2 = FUN_100572a0(param_1,uVar1);
    if ((char)iVar2 != '\0') {
      if (0x7f < param_3) {
        (*gEngfuncs.pfnRandomFloat)(-0.3,0.3);
        (*gEngfuncs.pfnRandomFloat)(-0.3,0.3);
        (*gEngfuncs.pfnRandomFloat)(-0.1,0.1);
        fStack_64 = (float)(extraout_ST0 + (float10)fStack_64);
        FUN_10029e40(&fStack_6c);
        pfVar8 = &fStack_24;
        iVar2 = 0x14;
        sVar11 = 4;
        uVar1 = 5;
        pcVar10 = s_sprites_gun_smoke_add_spr_100953f0;
        fVar9 = 6.0;
        fVar7 = 2.6138174e-29;
        puVar3 = (undefined4 *)FUN_1003d240(&fStack_6c,pfVar8,6.0);
        fVar6 = 2.6138207e-29;
        FUN_10002610(&stack0xffffff64,puVar3);
        FUN_10002610(&stack0xffffff58,param_1);
        FUN_100464f0(fVar5,fVar6,(float)puVar3,fVar7,(float)pfVar8,fVar9,(byte_conflict *)pcVar10,
                     uVar1,sVar11,iVar2);
        lVar4 = __ftol();
        in_stack_00000024 = (int)lVar4;
      }
      iVar2 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_bloodfrag2_spr_1009580c,1);
      if (iVar2 != -1) {
        puVar3 = FUN_1004ffe0();
        fVar5 = (float)in_stack_00000024 * 0.075;
        *(short *)(puVar3 + 0x45) = (short)iVar2;
        *(undefined1 *)puVar3 = 1;
        puVar3[0x34] = 0x3f000000;
        *(undefined1 *)((int)puVar3 + 5) = 0;
        puVar3[0x38] = 0;
        puVar3[0x37] = 0x3f800000;
        puVar3[0x3f] = 0;
        if ((fVar5 <= 1.0) || (fVar5 < 5.0)) {
          if (fVar5 <= 1.0) {
            fVar5 = 1.0;
          }
        }
        else {
          fVar5 = 5.0;
        }
        puVar3[0x42] = fVar5;
        puVar3[0x4a] = 0x40000000;
        *(undefined1 *)(puVar3 + 1) = 3;
        puVar3[0x48] = 2;
        fVar5 = *(float *)(in_stack_0000001c + 8);
        __ftol();
        if (*(float *)(DAT_100df3a8 + 0xc) <= 10.0) {
          lVar4 = __ftol();
          switch((int)lVar4) {
          case 1:
            __ftol();
            break;
          case 2:
            __ftol();
            break;
          case 3:
            __ftol();
            break;
          case 4:
            __ftol();
            break;
          case 5:
            __ftol();
          }
        }
        else {
          __ftol();
        }
        (*gEngfuncs.pfnRandomFloat)(0.5,1.0);
        FUN_10029e40(&fStack_64);
        pcVar12 = in_stack_ffffffac;
        if (0 < iStack_68) {
          while( true ) {
            iStack_20 = FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar3 + 0x45));
            puVar3[0x39] = 0x3d99999a;
            puVar3[0x3e] = (float)iStack_20;
            (*gEngfuncs.pfnRandomFloat)(1.0,2.0);
            puVar3[0x36] = (float)extraout_ST0_00;
            if ((int)fStack_44 < 1) {
              local_3c = *param_2 * 32.0;
              fVar6 = param_2[1];
              pcStack_34 = (code *)(param_2[2] * 32.0);
              puVar3[0xe] = local_3c;
              puVar3[0xf] = fVar6 * 32.0;
              puVar3[0x10] = pcStack_34;
              puVar3[5] = *in_stack_0000002c;
              puVar3[6] = in_stack_0000002c[1];
              puVar3[7] = in_stack_0000002c[2];
              fStack_38 = fVar6 * 32.0;
            }
            else {
              (*gEngfuncs.pfnRandomFloat)(8.0,24.0);
              pfVar8 = (float *)(puVar3 + 0xe);
              *pfVar8 = (float)(extraout_ST0_01 * (float10)(float)pcVar12);
              puVar3[0xf] = (float)((float10)0.0 * extraout_ST0_01);
              puVar3[0x10] = (float)((float10)0.0 * extraout_ST0_01);
              (*gEngfuncs.pfnRandomFloat)(-1.0,1.0);
              *pfVar8 = (float)(extraout_ST0_02 + (float10)*pfVar8);
              (*gEngfuncs.pfnRandomFloat)(-1.0,1.0);
              puVar3[0xf] = (float)(extraout_ST0_03 + (float10)(float)puVar3[0xf]);
              fVar6 = (float)puVar3[0x42];
              puVar3[5] = fVar5;
              puVar3[6] = in_stack_ffffffac;
              puVar3[7] = fStack_30;
              fStack_c = fVar6 * fStack_44 * 0.3;
              fStack_8 = fStack_40 * fVar6 * 0.3;
              fStack_4 = fVar6 * local_3c * 0.3;
              fVar5 = fStack_c + fStack_38;
              in_stack_ffffffac = (code *)((float)pcStack_34 + fStack_8);
              fStack_10 = fStack_4 + fStack_30;
              fStack_28 = (float)puVar3[0x42] * 0.1 + fStack_28;
              fStack_30 = fStack_10 - fStack_28 / (float)iStack_48;
              fStack_38 = fVar5;
              pcStack_34 = in_stack_ffffffac;
              fStack_18 = fVar5;
              pcStack_14 = in_stack_ffffffac;
            }
            fStack_64 = 2.6141812e-29;
            iVar2 = (*gEngfuncs.PM_PointContents)((float *)(puVar3 + 5),(int *)0x0);
            if (iVar2 == -2) break;
            pcVar12 = FUN_10048710;
            iVar2 = FUN_10050b60(&DAT_1018bde8,puVar3,0,FUN_10048710);
            if (iVar2 == -1) {
              return;
            }
            fStack_24 = (float)((int)fStack_24 + 1);
            param_2 = in_stack_00000050;
            if ((int)fStack_40 <= (int)fStack_24) {
              return;
            }
          }
        }
      }
    }
  }
  return;
}

/* 10048e60  FUN_10048e60  (244 bytes)
 * undefined FUN_10048e60(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_1003dfa0, FUN_1003f090, FUN_10040c20, FUN_100481b0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10048e60(vec_t param_1,vec_t param_2,vec_t param_3)

{
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar1;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  vec_t in_stack_00000010;
  
  if (DAT_1018ca58 != '\0') {
    (*gEngfuncs.GetClientTime)();
    _DAT_1018a460 = (float)(extraout_ST0 - (float10)_DAT_1018a45c);
    if (extraout_ST0 - (float10)_DAT_1018a45c < (float10)0.0) {
      (*gEngfuncs.GetClientTime)();
      _DAT_1018a45c = (float)extraout_ST0_00;
      return;
    }
    fVar1 = FUN_10056fa0(0.1);
    if (fVar1 <= (float10)_DAT_1018a460) {
      (*gEngfuncs.GetClientTime)();
      _DAT_1018a45c = (float)extraout_ST0_01;
      DAT_1018a444 = (dlight_s *)0x0;
      DAT_1018a444 = (*(gEngfuncs.pEfxAPI)->CL_AllocDlight)(0);
      if (DAT_1018a444 != (dlight_s *)0x0) {
        DAT_1018a444->origin[0] = param_2;
        DAT_1018a444->origin[1] = param_3;
        DAT_1018a444->origin[2] = in_stack_00000010;
        DAT_1018a444->radius = 192.0;
        (DAT_1018a444->color).r = 0xf0;
        (DAT_1018a444->color).g = 0xdd;
        (DAT_1018a444->color).b = 0xac;
        fVar1 = FUN_10056fa0(0.06);
        (*gEngfuncs.GetClientTime)();
        DAT_1018a444->die = (float)(extraout_ST0_02 + (float10)(float)fVar1);
      }
    }
  }
  return;
}

/* 10048f60  FUN_10048f60  (797 bytes)
 * undefined FUN_10048f60(float * param_1, byte.conflict * param_2, int param_3, undefined4 param_4)
 * called by: FUN_10044bf0
 */
void __cdecl FUN_10048f60(float *param_1,byte_conflict *param_2,int param_3,byte_conflict *param_4)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float10 fVar4;
  undefined4 in_stack_00000018;
  float in_stack_ffffffb0;
  float in_stack_ffffffb8;
  byte_conflict *pbVar5;
  float in_stack_ffffffbc;
  float in_stack_ffffffc0;
  float in_stack_ffffffc4;
  char *in_stack_ffffffc8;
  char *pcVar6;
  float in_stack_ffffffcc;
  char *in_stack_ffffffd0;
  float fVar7;
  char *pcVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  char *pcVar14;
  short sVar15;
  undefined4 uVar16;
  int iVar17;
  float fVar18;
  short sVar19;
  float fVar20;
  undefined4 uVar21;
  int iVar22;
  undefined4 local_c [3];
  
  uVar1 = FUN_10050ad0(&DAT_1018bde8,7);
  if ((char)uVar1 == '\0') {
    if ((param_3 != 1) && (param_3 != 2)) {
      return;
    }
  }
  else {
    fVar4 = FUN_10056fa0(DAT_1018ca44);
    FUN_10050b00(&DAT_1018bde8,7,(float)fVar4);
  }
  uVar1 = FUN_100570b0(param_1);
  if ((char)uVar1 == '\0') {
    return;
  }
  uVar1 = FUN_10057270(local_c);
  fVar7 = 2.6143184e-29;
  iVar2 = FUN_100572a0(param_1,uVar1);
  if ((char)iVar2 == '\0') {
    return;
  }
  if (param_3 == 1) {
    fVar3 = 1.4013e-45;
  }
  else {
    fVar3 = (float)((-(uint)(param_3 != 2) & 2) + 2);
  }
  fVar11 = 0.0;
  fVar9 = 2.6143307e-29;
  iVar2 = (*gEngfuncs.pfnRandomLong)(0,100);
  switch(in_stack_00000018) {
  case 0x44:
    fVar7 = 4.2039e-44;
    pcVar6 = s_sprites_wood_smoke_add_spr_100953d4;
    goto LAB_10049193;
  default:
    iVar22 = 1;
    iVar17 = 0;
    uVar13 = 0x3f800000;
    fVar12 = 1.0;
    iVar10 = 0x20;
    uVar1 = 0x40800000;
    fVar11 = 7.00649e-45;
    fVar9 = 1.4013e-45;
    pcVar6 = s_sprites_debris_concrete3_spr_10095824;
    fVar7 = 2.6144788e-29;
    pbVar5 = param_4;
    FUN_10002610(&stack0xffffffbc,(undefined4 *)param_4);
    FUN_10002610(&stack0xffffffb0,param_1);
    FUN_10046bd0(in_stack_ffffffb0,fVar7,(float)pbVar5,in_stack_ffffffbc,in_stack_ffffffc0,
                 in_stack_ffffffc4,(byte_conflict *)pcVar6,(int)fVar9,(int)fVar11,uVar1,iVar10,
                 fVar12,uVar13,iVar17,iVar22);
    iVar10 = 1;
    fVar18 = 2.8026e-44;
    uVar1 = 0x10;
    fVar12 = 7.00649e-45;
    pcVar8 = s_sprites_gun_smoke_add_spr_100953f0;
    fVar7 = 2.614492e-29;
    pbVar5 = param_4;
    FUN_10002610(&stack0xffffffc8,(undefined4 *)param_4);
    FUN_10002610(&stack0xffffffbc,param_1);
    FUN_10046680(in_stack_ffffffbc,fVar7,(float)pbVar5,(float)pcVar6,fVar9,fVar11,
                 (byte_conflict *)pcVar8,(int)fVar12,SUB42(fVar3,0),uVar1,fVar18,iVar10);
    if (0x32 < iVar2) {
      sVar19 = 3;
      sVar15 = 5;
      pcVar14 = s_sprites_scintille_metal_spr_10095460;
      fVar7 = 2.6145053e-29;
      pbVar5 = param_4;
      FUN_10002610(&stack0xffffffd4,(undefined4 *)param_4);
      FUN_10002610(&stack0xffffffc8,param_1);
      FUN_10046f50((float)pcVar6,fVar7,(float)pbVar5,(float)pcVar8,fVar12,fVar3,
                   (byte_conflict *)pcVar14,sVar15,sVar19);
      fVar11 = 25.0;
      fVar9 = 1.15;
      iVar2 = 5;
      fVar7 = 2.614518e-29;
      FUN_10002610(&stack0xffffffd4,(undefined4 *)param_4);
      FUN_10002610(&stack0xffffffc8,param_1);
      FUN_100492b0((float)pcVar6,fVar7,(float)param_4,(float)pcVar8,fVar12,fVar3,iVar2,fVar9,fVar11)
      ;
    }
  case 0x46:
  case 0x53:
    return;
  case 0x47:
  case 0x4d:
  case 0x56:
    if (0x21 < iVar2) {
      sVar19 = 0x30;
      sVar15 = 5;
      pcVar6 = s_sprites_scintille_metal_spr_10095460;
      fVar12 = 2.6143503e-29;
      pbVar5 = param_4;
      FUN_10002610(&stack0xffffffd4,(undefined4 *)param_4);
      FUN_10002610(&stack0xffffffc8,param_1);
      FUN_10046f50((float)in_stack_ffffffc8,fVar12,(float)pbVar5,fVar7,fVar9,fVar11,
                   (byte_conflict *)pcVar6,sVar15,sVar19);
    }
    fVar20 = 25.0;
    fVar18 = 1.15;
    iVar10 = 0x17;
    in_stack_ffffffcc = 2.614363e-29;
    in_stack_ffffffd0 = (char *)param_4;
    FUN_10002610(&stack0xffffffd4,(undefined4 *)param_4);
    FUN_10002610(&stack0xffffffc8,param_1);
    fVar12 = 2.6143677e-29;
    FUN_100492b0((float)in_stack_ffffffc8,in_stack_ffffffcc,(float)in_stack_ffffffd0,fVar7,fVar9,
                 fVar11,iVar10,fVar18,fVar20);
    if (0x46 < iVar2) {
      uVar21 = 0x3e800000;
      uVar16 = 0x3c75c28f;
      uVar13 = 0x3f400000;
      uVar1 = 0;
      iVar10 = 5;
      iVar2 = 5;
      in_stack_ffffffd0 = s_sprites_shotgun_pellets_spr_10094d84;
      in_stack_ffffffbc = 2.6143825e-29;
      pbVar5 = param_4;
      FUN_10002610(&stack0xffffffc4,(undefined4 *)param_4);
      FUN_10002610(&stack0xffffffb8,param_1);
      FUN_10046a70(in_stack_ffffffb8,in_stack_ffffffbc,(float)pbVar5,fVar12,(float)in_stack_ffffffc8
                   ,in_stack_ffffffcc,(byte_conflict *)in_stack_ffffffd0,iVar2,iVar10,uVar1,uVar13,
                   uVar16,uVar21);
    }
    break;
  case 0x50:
  case 0x59:
    sVar19 = 0x30;
    sVar15 = 5;
    pcVar6 = s_sprites_scintille_metal_spr_10095460;
    in_stack_ffffffcc = 2.6144297e-29;
    in_stack_ffffffd0 = (char *)param_4;
    FUN_10002610(&stack0xffffffd4,(undefined4 *)param_4);
    FUN_10002610(&stack0xffffffc8,param_1);
    FUN_10046f50((float)in_stack_ffffffc8,in_stack_ffffffcc,(float)in_stack_ffffffd0,fVar7,fVar9,
                 fVar11,(byte_conflict *)pcVar6,sVar15,sVar19);
    if (0x32 < iVar2) {
      fVar18 = 25.0;
      fVar12 = 1.15;
      iVar2 = 3;
      in_stack_ffffffcc = 2.614444e-29;
      in_stack_ffffffd0 = (char *)param_4;
      FUN_10002610(&stack0xffffffd4,(undefined4 *)param_4);
      FUN_10002610(&stack0xffffffc8,param_1);
      FUN_100492b0((float)in_stack_ffffffc8,in_stack_ffffffcc,(float)in_stack_ffffffd0,fVar7,fVar9,
                   fVar11,iVar2,fVar12,fVar18);
    }
    break;
  case 0x57:
    iVar17 = 1;
    iVar10 = 0;
    uVar13 = 0x3f400000;
    fVar9 = 1.0;
    iVar2 = 0x20;
    uVar1 = 0x40a00000;
    in_stack_ffffffd0 = (char *)0x5;
    in_stack_ffffffcc = 7.00649e-45;
    in_stack_ffffffc8 = s_sprites_woodfrag_spr_10095844;
    fVar7 = 2.6144033e-29;
    pbVar5 = param_4;
    FUN_10002610(&stack0xffffffbc,(undefined4 *)param_4);
    FUN_10002610(&stack0xffffffb0,param_1);
    FUN_10046bd0(in_stack_ffffffb0,fVar7,(float)pbVar5,in_stack_ffffffbc,in_stack_ffffffc0,
                 in_stack_ffffffc4,(byte_conflict *)in_stack_ffffffc8,(int)in_stack_ffffffcc,
                 (int)in_stack_ffffffd0,uVar1,iVar2,fVar9,uVar13,iVar10,iVar17);
    fVar7 = 4.2039e-44;
    pcVar6 = s_sprites_wood_smoke_add_spr_100953d4;
    goto LAB_10049193;
  }
  fVar7 = 7.00649e-44;
  pcVar6 = s_sprites_gun_smoke_add_spr_100953f0;
LAB_10049193:
  iVar10 = 1;
  uVar1 = 0x10;
  iVar2 = 5;
  fVar9 = 2.614457e-29;
  FUN_10002610(&stack0xffffffc8,(undefined4 *)param_4);
  sVar15 = SUB42(fVar3,0);
  FUN_10002610(&stack0xffffffbc,param_1);
  FUN_10046680(in_stack_ffffffbc,fVar9,(float)param_4,(float)in_stack_ffffffc8,in_stack_ffffffcc,
               (float)in_stack_ffffffd0,(byte_conflict *)pcVar6,iVar2,sVar15,uVar1,fVar7,iVar10);
  return;
}

/* 100492b0  FUN_100492b0  (689 bytes)
 * undefined FUN_100492b0(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, int param_7, float param_8, float param_9)
 * called by: FUN_10043c90, FUN_10044230, FUN_10048f60, FUN_1004bd50
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_100492b0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            int param_7,float param_8,float param_9)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float flLow;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  longlong lVar10;
  int iStack_1c;
  
  uVar6 = FUN_10057910(&param_1,0x200);
  if ((((char)uVar6 == '\0') && (uVar6 = FUN_100570b0(&param_1), (char)uVar6 != '\0')) &&
     (iVar7 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_sparks_spr_1009585c,5),
     iVar7 != -1)) {
    puVar8 = FUN_1004ffe0();
    fVar2 = (float)puVar8[0x42];
    *(short *)(puVar8 + 0x45) = (short)iVar7;
    puVar8[0x34] = 0x3f800000;
    *(undefined1 *)((int)puVar8 + 7) = 0;
    *(undefined1 *)((int)puVar8 + 6) = 0;
    *(undefined1 *)((int)puVar8 + 5) = 0;
    *(undefined1 *)puVar8 = 1;
    puVar8[0x38] = 0x3d4ccccd;
    puVar8[0x37] = 0x3f666666;
    puVar8[0x3f] = 0;
    puVar8[0x4a] = 0x3eb33333;
    puVar8[0x3d] = 0x3dcccccd;
    puVar8[0x48] = 2;
    puVar8[5] = param_1 + param_4 * fVar2;
    puVar8[6] = param_2 + param_5 * fVar2;
    puVar8[7] = param_3 + fVar2 * param_6;
    param_7 = (*gEngfuncs.pfnRandomLong)((int)(short)param_7 / 2,(int)(short)param_7);
    lVar10 = __ftol();
    fVar2 = param_9;
    param_7 = (int)lVar10;
    iStack_1c = 0;
    if (0 < param_7) {
      fVar3 = param_4 * 17.0;
      fVar4 = param_5 * 17.0;
      pfVar1 = (float *)(puVar8 + 0xe);
      fVar5 = param_6 * 17.0;
      flLow = -param_9;
      param_4 = flLow;
      do {
        fVar9 = (float10)(*gEngfuncs.pfnRandomFloat)(0.5,1.15);
        *pfVar1 = fVar3;
        puVar8[0x42] = (float)(fVar9 * (float10)param_8);
        puVar8[0xf] = fVar4;
        puVar8[0x10] = fVar5;
        fVar9 = (float10)(*gEngfuncs.pfnRandomFloat)(flLow,fVar2);
        *pfVar1 = (float)(fVar9 + (float10)*pfVar1);
        fVar9 = (float10)(*gEngfuncs.pfnRandomFloat)(flLow,fVar2);
        puVar8[0xf] = (float)(fVar9 + (float10)(float)puVar8[0xf]);
        fVar9 = (float10)(*gEngfuncs.pfnRandomFloat)(0.0,fVar2);
        puVar8[0x10] = (float)(fVar9 + (float10)(float)puVar8[0x10]);
        fVar9 = (float10)(*gEngfuncs.pfnRandomFloat)(0.1,1.0);
        puVar8[0x36] = (float)fVar9;
        if ((fVar9 <= (float10)0.7) || (_DAT_1018ca50 <= 0.9)) {
          *(undefined1 *)(puVar8 + 1) = 0;
        }
        else {
          *(undefined1 *)(puVar8 + 1) = 3;
        }
        param_9 = (float)FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar8 + 0x45));
        puVar8[0x3e] = (float)(int)param_9;
        iVar7 = FUN_10050b60(&DAT_1018bde8,puVar8,0,0);
      } while ((iVar7 != -1) && (iStack_1c = iStack_1c + 1, iStack_1c < param_7));
    }
  }
  return;
}

/* 10049570  FUN_10049570  (162 bytes)
 * undefined4 FUN_10049570(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * called by: FUN_1001fe20
 */
undefined4 __cdecl
FUN_10049570(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  float10 fVar2;
  
  FUN_100299b0(param_4,param_3);
  uVar1 = FUN_10029a10();
  if ((DAT_100df1a0 != 0) && (*(float *)(DAT_100df1a0 + 0xc) != 0.0)) {
    return 1;
  }
  DAT_100df1a4 = (float)(int)uVar1;
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0x50;
  }
  else {
    *(uint *)(param_1 + 0x58) = uVar1;
  }
  if (*(int *)(param_1 + 0x58) == 0x50) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return 1;
  }
  fVar2 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_zoom_sensitivity_ratio_100937fc);
  *(float *)(param_1 + 0x18) =
       (float)((float10)(int)uVar1 * (float10)0.0125 * (float10)*(float *)(DAT_100df708 + 0xc) *
              fVar2);
  return 1;
}

/* 10049620  FUN_10049620  (306 bytes)
 * undefined FUN_10049620(int * param_1, int param_2)
 * called by: FUN_10049760
 */
void __cdecl FUN_10049620(int *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_1;
  if ((float)iVar1 < 0.001) {
    *param_1 = param_2;
    return;
  }
  if (param_2 != iVar1) {
    if (iVar1 < param_2) {
      lVar2 = __ftol();
      *param_1 = (int)lVar2;
      if (param_2 <= (int)lVar2) {
        *param_1 = param_2;
        return;
      }
    }
    else {
      if (param_2 < iVar1) {
        lVar2 = __ftol();
        *param_1 = (int)lVar2;
        if (param_2 < (int)lVar2) {
          return;
        }
      }
      *param_1 = param_2;
    }
  }
  return;
}

/* 10049760  FUN_10049760  (312 bytes)
 * undefined FUN_10049760(undefined4 * param_1)
 * called by: FUN_10024b00
 */
void __fastcall FUN_10049760(undefined4 *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  longlong lVar5;
  int iVar6;
  float local_8;
  
  for (piVar1 = (int *)*param_1; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((*(byte *)((int *)*piVar1 + 4) & 1) != 0) {
      (**(code **)(*(int *)*piVar1 + 0x10))();
    }
  }
  iVar6 = param_1[0x1e];
  if (0.001 <= *(float *)(iVar6 + 0xc)) {
    if ((110.0 <= *(float *)(iVar6 + 0xc)) || (70.0 < *(float *)(iVar6 + 0xc))) {
      if (110.0 <= *(float *)(iVar6 + 0xc)) {
        local_8 = 110.0;
      }
      else {
        local_8 = *(float *)(iVar6 + 0xc);
      }
    }
    else {
      local_8 = 70.0;
    }
  }
  else {
    local_8 = 80.0;
  }
  FUN_100209f0();
  lVar5 = __ftol();
  iVar3 = (int)lVar5;
  piVar1 = param_1 + 0x16;
  iVar6 = iVar3;
  if ((float)iVar3 < 0.001) {
    lVar5 = __ftol();
    iVar6 = (int)lVar5;
  }
  FUN_10049620(piVar1,iVar6);
  fVar2 = (float)*piVar1 - local_8;
  if (fVar2 <= 0.0) {
    fVar2 = -fVar2;
  }
  if (0.01 <= fVar2) {
    fVar4 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_zoom_sensitivity_ratio_100937fc);
    param_1[6] = (float)(((float10)iVar3 / (float10)local_8) *
                         (float10)*(float *)(DAT_100df708 + 0xc) * fVar4);
  }
  else {
    param_1[6] = 0;
  }
  if ((float)*piVar1 < 0.001) {
    lVar5 = __ftol();
    *piVar1 = (int)lVar5;
  }
  return;
}

/* 100498a0  FUN_100498a0  (26 bytes)
 * undefined FUN_100498a0()
 */
void FUN_100498a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004b730(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 100498c0  FUN_100498c0  (26 bytes)
 * undefined FUN_100498c0()
 */
void FUN_100498c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004b920(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 100498e0  FUN_100498e0  (26 bytes)
 * undefined FUN_100498e0()
 */
void FUN_100498e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004b950(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 10049900  FUN_10049900  (26 bytes)
 * undefined FUN_10049900()
 */
void FUN_10049900(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004b980(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 10049920  FUN_10049920  (26 bytes)
 * undefined FUN_10049920()
 */
void FUN_10049920(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004b9b0(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 10049940  FUN_10049940  (26 bytes)
 * undefined FUN_10049940()
 */
void FUN_10049940(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004b9e0(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 10049960  FUN_10049960  (26 bytes)
 * undefined FUN_10049960()
 */
void FUN_10049960(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004bad0(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 10049980  FUN_10049980  (26 bytes)
 * undefined FUN_10049980()
 */
void FUN_10049980(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004bb20(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 100499a0  FUN_100499a0  (26 bytes)
 * undefined FUN_100499a0()
 */
void FUN_100499a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004bb70(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 100499c0  FUN_100499c0  (26 bytes)
 * undefined FUN_100499c0()
 */
void FUN_100499c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004bc80(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 100499e0  FUN_100499e0  (26 bytes)
 * undefined FUN_100499e0()
 */
void FUN_100499e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004c0a0(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 10049a00  FUN_10049a00  (26 bytes)
 * undefined FUN_10049a00()
 */
void FUN_10049a00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004bef0(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 10049a20  FUN_10049a20  (26 bytes)
 * undefined FUN_10049a20()
 */
void FUN_10049a20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004b790(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 10049a40  FUN_10049a40  (26 bytes)
 * undefined FUN_10049a40()
 */
void FUN_10049a40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004b840(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 10049a60  FUN_10049a60  (26 bytes)
 * undefined FUN_10049a60()
 */
void FUN_10049a60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004b8e0(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 10049a80  FUN_10049a80  (26 bytes)
 * undefined FUN_10049a80()
 */
void FUN_10049a80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004c180(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 10049aa0  FUN_10049aa0  (26 bytes)
 * undefined FUN_10049aa0()
 */
void FUN_10049aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004ba50(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 10049ac0  FUN_10049ac0  (26 bytes)
 * undefined FUN_10049ac0()
 */
void FUN_10049ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004bcd0(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 10049ae0  FUN_10049ae0  (26 bytes)
 * undefined FUN_10049ae0()
 */
void FUN_10049ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004bd50(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 10049b00  FUN_10049b00  (26 bytes)
 * undefined FUN_10049b00()
 */
void FUN_10049b00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004bf90(param_1,param_2,param_3);
  return;
}

/* 10049b20  FUN_10049b20  (26 bytes)
 * undefined FUN_10049b20()
 */
void FUN_10049b20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004bfd0(param_1,param_2,param_3);
  return;
}

/* 10049b40  FUN_10049b40  (26 bytes)
 * undefined FUN_10049b40()
 */
void FUN_10049b40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004b7e0(&DAT_100d43cc,param_1,param_2,param_3);
  return;
}

/* 10049b60  FUN_10049b60  (26 bytes)
 * undefined FUN_10049b60()
 */
void FUN_10049b60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004c1e0(param_1,param_2,param_3);
  return;
}

/* 10049b80  FUN_10049b80  (398 bytes)
 * undefined FUN_10049b80()
 */
undefined4 __fastcall FUN_10049b80(int param_1)

{
  (*gEngfuncs.pfnHookUserMsg)(s_TSHealth_10095940,FUN_100498a0);
  (*gEngfuncs.pfnHookUserMsg)(s_TSArmor_10095938,FUN_100498c0);
  (*gEngfuncs.pfnHookUserMsg)(s_TSState_10095930,FUN_100498e0);
  (*gEngfuncs.pfnHookUserMsg)(s_TSCash_10095928,FUN_10049900);
  (*gEngfuncs.pfnHookUserMsg)(s_TSSpace_10095920,FUN_10049920);
  (*gEngfuncs.pfnHookUserMsg)(&DAT_10095918,FUN_10049940);
  (*gEngfuncs.pfnHookUserMsg)(s_PwUpTime_1009590c,FUN_10049960);
  (*gEngfuncs.pfnHookUserMsg)(s_RoundTime_10095900,FUN_10049980);
  (*gEngfuncs.pfnHookUserMsg)(s_Objective_100958f4,FUN_100499a0);
  (*gEngfuncs.pfnHookUserMsg)(s_ShowObj_100958ec,FUN_100499c0);
  (*gEngfuncs.pfnHookUserMsg)(s_TSMessage_100958e0,FUN_100499e0);
  (*gEngfuncs.pfnHookUserMsg)(s_PTakeDam_100958d4,FUN_10049ac0);
  (*gEngfuncs.pfnHookUserMsg)(s_TSSlowMo_100958c8,FUN_10049a00);
  (*gEngfuncs.pfnHookUserMsg)(s_TSFrags_100958c0,FUN_10049ae0);
  (*gEngfuncs.pfnHookUserMsg)(s_TSPAward_100958b4,FUN_10049a20);
  (*gEngfuncs.pfnHookUserMsg)(s_SrvSett_100958ac,FUN_10049a40);
  (*gEngfuncs.pfnHookUserMsg)(s_TSBTime_100958a4,FUN_10049a60);
  (*gEngfuncs.pfnHookUserMsg)(s_TSHVoice_10095898,FUN_10049a80);
  (*gEngfuncs.pfnHookUserMsg)(s_TSFlag_10095890,FUN_10049aa0);
  (*gEngfuncs.pfnHookUserMsg)(s_TSMBlur_10095888,FUN_10049b00);
  (*gEngfuncs.pfnHookUserMsg)(s_TSPSys_10095880,FUN_10049b20);
  (*gEngfuncs.pfnHookUserMsg)(s_PlInfo_10095878,FUN_10049b40);
  (*gEngfuncs.pfnHookUserMsg)(s_TSFade_10095870,FUN_10049b60);
  FUN_10020a40(&DAT_100cf920,param_1);
  return 1;
}

/* 10049d10  FUN_10049d10  (352 bytes)
 * undefined FUN_10049d10(int param_1)
 */
void __fastcall FUN_10049d10(int param_1)

{
  HSPRITE HVar1;
  int iVar2;
  HSPRITE *pHVar3;
  undefined4 *puVar4;
  
  pHVar3 = (HSPRITE *)(param_1 + 0x38);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pHVar3 = 0;
    pHVar3 = pHVar3 + 1;
  }
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_stand_spr_10095a60);
  *(HSPRITE *)(param_1 + 0x38) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_crouched_spr_10095a44);
  *(HSPRITE *)(param_1 + 0x3c) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_prone_spr_10095a28);
  *(HSPRITE *)(param_1 + 0x40) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_health_spr_10095a0c);
  *(HSPRITE *)(param_1 + 0x58) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_kevlar_spr_100959f0);
  *(HSPRITE *)(param_1 + 0x5c) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_cursor_spr_100959dc);
  *(HSPRITE *)(param_1 + 0x1434) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_compass_spr_100959c8);
  *(HSPRITE *)(param_1 + 0x1438) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_uparrow_spr_100959b4);
  *(HSPRITE *)(param_1 + 0x143c) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_downarrow_spr_1009599c);
  *(HSPRITE *)(param_1 + 0x1440) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_kungfu_spr_10095980);
  *(HSPRITE *)(param_1 + 100) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_movement_spr_10095964);
  *(HSPRITE *)(param_1 + 0x68) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_flag_spr_1009594c);
  *(HSPRITE *)(param_1 + 0x6c) = HVar1;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x70);
  for (iVar2 = 0x270; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x1444);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = (undefined4 *)(param_1 + 0xa30);
  for (iVar2 = 0x280; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x1468) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x146c);
  for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x152c) = 0;
  *(undefined1 *)(param_1 + 0x152d) = 0;
  *(undefined4 *)(param_1 + 0x1530) = 0;
  *(undefined4 *)(param_1 + 0x1534) = 0;
  *(undefined4 *)(param_1 + 0x1430) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return;
}

/* 10049e70  FUN_10049e70  (44 bytes)
 * undefined FUN_10049e70()
 */
void __fastcall FUN_10049e70(int param_1)

{
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return;
}

/* 10049ea0  FUN_10049ea0  (276 bytes)
 * undefined FUN_10049ea0()
 */
undefined4 __fastcall FUN_10049ea0(int param_1)

{
  char cVar1;
  int b;
  int g;
  uint uVar2;
  longlong lVar3;
  
  if (DAT_1018d184 != '\0') {
    lVar3 = __ftol();
    b = (int)lVar3;
    lVar3 = __ftol();
    g = (int)lVar3;
    lVar3 = __ftol();
    (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(param_1 + 0x1434),(int)lVar3,g,b);
    (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_1018d17c + -0x10,DAT_1018d180 + -0x10,(wrect_t *)0x0);
  }
  if (*(float *)(DAT_100df50c + 0xc) == 0.0) {
    if (*(float *)(param_1 + 0x2c) != 0.0) {
      FUN_1004a130(param_1);
    }
    FUN_1004af40(param_1);
    FUN_1004b0e0(param_1);
    uVar2 = FUN_1004c250();
    if ((char)uVar2 == '\0') {
      cVar1 = FUN_1004c280();
      if (cVar1 == '\0') {
        if (DAT_100cf97c != 0) {
          FUN_1004ab40(param_1);
        }
        FUN_1004acc0();
        FUN_1004a3e0(param_1);
        if (*(int *)(param_1 + 0x14) == 0) {
          *(undefined4 *)(param_1 + 0x1c) = 0;
        }
        else {
          FUN_1004a2e0(param_1);
        }
        if (1 < DAT_100cf97c) {
          FUN_10049fc0(param_1);
        }
      }
    }
  }
  return 1;
}

/* 10049fc0  FUN_10049fc0  (360 bytes)
 * undefined FUN_10049fc0(int param_1)
 * called by: FUN_10049ea0
 */
void __fastcall FUN_10049fc0(int param_1)

{
  int y;
  int iVar1;
  float *pfVar2;
  
  iVar1 = 0;
  if (-1 < *(int *)(param_1 + 0x1430)) {
    pfVar2 = (float *)(param_1 + 0xa3c);
    do {
      if ((((*(char *)(pfVar2 + -3) != '\0') && (*(char *)(pfVar2 + 1) != '\0')) &&
          (FUN_100579c0(pfVar2 + -2,&DAT_1018a5b0,&DAT_1018a4cc), DAT_1018a5b0 != -1)) &&
         (DAT_1018a4cc != -1)) {
        (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(param_1 + 0x1438),100,100,0xcd);
        (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_1018a5b0 + -0x10,DAT_1018a4cc + -0x10,(wrect_t *)0x0)
        ;
        if (*pfVar2 <= DAT_100cf960 + 72.0) {
          if (*pfVar2 < DAT_100cf960 - 72.0) {
            (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(param_1 + 0x1440),100,100,0xcd);
            y = DAT_1018a4cc + 0x10;
            goto LAB_1004a0cd;
          }
        }
        else {
          (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(param_1 + 0x143c),100,100,0xcd);
          y = DAT_1018a4cc + -0x30;
LAB_1004a0cd:
          (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_1018a5b0 + -0x10,y,(wrect_t *)0x0);
        }
        FUN_10021ce0(DAT_1018a5b0 + 0x10,DAT_1018a4cc + -8,DAT_100d5908,(char *)(pfVar2 + 1),100,100
                     ,0xcd);
      }
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 0x14;
    } while (iVar1 <= *(int *)(param_1 + 0x1430));
  }
  return;
}

/* 1004a130  FUN_1004a130  (426 bytes)
 * undefined FUN_1004a130(int param_1)
 * called by: FUN_10049ea0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004a130(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  if (*(float *)(param_1 + 0x30) < DAT_100cf944) {
    if (*(char *)(param_1 + 0x34) != '\x02') {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - 1.0;
    }
    if (*(float *)(param_1 + 0x2c) <= 0.0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    if (*(char *)(param_1 + 0x34) == '\x01') {
      fVar1 = 0.1;
    }
    else {
      fVar1 = 1.0;
    }
    *(float *)(param_1 + 0x30) = DAT_100cf944 + fVar1;
  }
  lVar5 = __ftol();
  iVar2 = (int)lVar5;
  DAT_1018a538 = iVar2;
  if (iVar2 < 0x3c) {
    uVar4 = 0xc3;
    uVar3 = 0x2d;
    DAT_1018a5a8 = 0xc3;
    DAT_1018a514 = 0x2d;
    DAT_1018a608 = 0x2d;
  }
  else {
    lVar5 = __ftol();
    uVar4 = (undefined4)lVar5;
    DAT_1018a5a8 = uVar4;
    lVar5 = __ftol();
    uVar3 = (undefined4)lVar5;
    DAT_1018a514 = uVar3;
    lVar5 = __ftol();
    DAT_1018a608 = (undefined4)lVar5;
  }
  _DAT_1018a478 = DAT_100d5908 + -0x48;
  DAT_1018a59c = 8;
  _DAT_1018a5dc = 0x14;
  _DAT_1018a478 =
       FUN_1004c290(&DAT_100cf920,_DAT_1018a478,0xc,'\x03',iVar2 / 0x3c,uVar4,uVar3,DAT_1018a608);
  _DAT_1018a478 =
       FUN_10021ce0(_DAT_1018a478,DAT_1018a59c + 4,DAT_100d5908,&DAT_10093ac4,DAT_1018a5a8,
                    DAT_1018a514,DAT_1018a608);
  _DAT_1018a478 =
       FUN_1004c290(&DAT_100cf920,_DAT_1018a478,DAT_1018a59c + 4,'#',DAT_1018a538 % 0x3c,
                    DAT_1018a5a8,DAT_1018a514,DAT_1018a608);
  return;
}

/* 1004a2e0  FUN_1004a2e0  (252 bytes)
 * undefined FUN_1004a2e0(int param_1)
 * called by: FUN_10049ea0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004a2e0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  
  uVar4 = *(uint *)(param_1 + 0x14);
  if ((uVar4 & 1) == 0) {
    if ((uVar4 & 2) == 0) {
      if ((uVar4 & 8) != 0) {
        pcVar10 = s__Pwr_SlowPause_10095a90;
        goto LAB_1004a307;
      }
      if ((uVar4 & 0x10) == 0) goto LAB_1004a361;
      pcVar10 = s__Pwr_DoubleFireRate_10095a7c;
    }
    else {
      pcVar10 = s__Pwr_InfiniteAmmo_10095aa0;
    }
    pcVar10 = FUN_100349a0(pcVar10);
    uVar4 = 0xffffffff;
    do {
      pcVar6 = pcVar10;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar10 = pcVar6 + -uVar4;
    pcVar6 = (char *)&DAT_1018a5e0;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar6 = pcVar6 + 4;
    }
  }
  else {
    pcVar10 = s__Pwr_SlowMotion_10095ab4;
LAB_1004a307:
    pcVar10 = FUN_100349a0(pcVar10);
    uVar4 = 0xffffffff;
    do {
      pcVar6 = pcVar10;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar10 = pcVar6 + -uVar4;
    pcVar6 = (char *)&DAT_1018a5e0;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar6 = pcVar6 + 4;
    }
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar6 = pcVar6 + 1;
  }
LAB_1004a361:
  iVar2 = FUN_10021ce0(8,8,DAT_100d5908,(char *)&DAT_1018a5e0,0x2d,0xc3,0x2d);
  _DAT_1018a470 = iVar2;
  if (*(float *)(param_1 + 0x1c) <= DAT_100cf944) {
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
      return;
    }
    uVar11 = 0x2d;
    uVar9 = 0xc3;
    uVar8 = 0x2d;
  }
  else {
    uVar11 = 0x2d;
    uVar9 = 0xc3;
    uVar8 = 0x2d;
    lVar7 = __ftol();
    iVar3 = (int)lVar7;
  }
  FUN_1004c290(&DAT_100cf920,iVar2 + 4,8,'\x03',iVar3,uVar8,uVar9,uVar11);
  return;
}

/* 1004a3e0  FUN_1004a3e0  (1885 bytes)
 * undefined FUN_1004a3e0(int param_1)
 * called by: FUN_10049ea0
 */
void __fastcall FUN_1004a3e0(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  cl_entity_s *pcVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uStack0000001c;
  int iStack00000030;
  int in_stack_00000050;
  int in_stack_00000054;
  int in_stack_00000058;
  int in_stack_0000005c;
  int in_stack_00000060;
  int in_stack_00000064;
  int in_stack_00000068;
  int in_stack_0000006c;
  undefined4 uStack000000e8;
  
  if (*(float *)(DAT_100df494 + 0xc) == 0.0) {
    lVar11 = __ftol();
    DAT_1018a474 = (int)lVar11;
    lVar12 = __ftol();
    DAT_1018a598 = (int)lVar12;
    lVar13 = __ftol();
    DAT_1018a480 = (int)lVar13;
    DAT_1018a604 = DAT_100d590c + -0x30;
    DAT_1018a4c4 = 8;
    DAT_1018a594 = 0x28;
    (*gEngfuncs.pfnFillRGBA)(8,DAT_1018a604,0x7f,0x27,(int)lVar11,(int)lVar12,DAT_1018a480,0xf);
    (*gEngfuncs.pfnSPR_Width)(*(HSPRITE *)(param_1 + 0x38 + (uint)*(byte *)(param_1 + 0x22) * 4),0);
    iVar3 = (*gEngfuncs.pfnSPR_Height)
                      (*(HSPRITE *)(param_1 + 0x38 + (uint)*(byte *)(param_1 + 0x22) * 4),0);
    bVar2 = *(byte *)(param_1 + 0x20);
    if (bVar2 < 0x65) {
      uVar4 = (uint)bVar2;
    }
    else {
      uVar4 = 100;
    }
    if (bVar2 < 100) {
      (*gEngfuncs.pfnSPR_Set)
                (*(HSPRITE *)(param_1 + 0x38 + (uint)*(byte *)(param_1 + 0x22) * 4),0xc3,0x2d,0x2d);
      (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_1018a4c4,DAT_1018a604 + -4,(wrect_t *)&stack0x00000030)
      ;
    }
    uStack0000001c = 0x1004a562;
    (*gEngfuncs.pfnSPR_Set)
              (*(HSPRITE *)(param_1 + 0x38 + (uint)*(byte *)(param_1 + 0x22) * 4),DAT_1018a474 / 2,
               DAT_1018a598 / 2,DAT_1018a480 / 2);
    uStack0000001c = 0x1004a580;
    (*gEngfuncs.pfnSPR_DrawAdditive)
              (0,DAT_1018a4c4,DAT_1018a604 + -4 + (iVar3 - (int)(uVar4 * iVar3) / 100),
               (wrect_t *)&stack0x00000050);
    DAT_1018a4c4 = 0x48;
    if (*(byte *)(param_1 + 0x20) < 0x32) {
      iVar9 = 0x2d;
      iVar3 = 0x2d;
      iVar5 = 0xc3;
    }
    else {
      iVar9 = DAT_1018a480 / 2;
      iVar3 = DAT_1018a598 / 2;
      iVar5 = DAT_1018a474 / 2;
    }
    iStack00000030 = 0x1004a5f7;
    FUN_1004c290(&DAT_100cf920,0x48,DAT_1018a604 + 4,'\x05',(uint)*(byte *)(param_1 + 0x20),iVar5,
                 iVar3,iVar9);
    if (*(byte *)(param_1 + 0x20) < 0x32) {
      iVar9 = 0x2d;
      iVar3 = 0x2d;
      iVar5 = 0xc3;
    }
    else {
      iVar9 = DAT_1018a480 / 2;
      iVar3 = DAT_1018a598 / 2;
      iVar5 = DAT_1018a474 / 2;
    }
    (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(param_1 + 0x58),iVar5,iVar3,iVar9);
    (*gEngfuncs.pfnSPR_DrawAdditive)(0,0x68,DAT_1018a604,(wrect_t *)0x0);
    if (*(byte *)(param_1 + 0x21) != 0) {
      if (*(byte *)(param_1 + 0x21) < 0x32) {
        in_stack_0000006c = 0x2d;
        in_stack_00000068 = 0x2d;
        in_stack_00000064 = 0xc3;
      }
      else {
        in_stack_0000006c = DAT_1018a480 / 2;
        in_stack_00000068 = DAT_1018a598 / 2;
        in_stack_00000064 = DAT_1018a474 / 2;
      }
      in_stack_00000060 = *(HSPRITE *)(param_1 + 0x5c);
      in_stack_0000005c = 0x1004a6bd;
      (*gEngfuncs.pfnSPR_Set)
                (in_stack_00000060,in_stack_00000064,in_stack_00000068,in_stack_0000006c);
      in_stack_00000068 = DAT_1018a604 + 0x14;
      in_stack_0000006c = 0;
      in_stack_00000064 = DAT_1018a4c4;
      in_stack_00000060 = 0;
      in_stack_0000005c = 0x1004a6d8;
      (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_1018a4c4,in_stack_00000068,(wrect_t *)0x0);
    }
    DAT_1018a4c4 = 8;
    DAT_1018a604 = DAT_1018a604 + -0x14;
    DAT_1018a594 = 0x14;
    if (DAT_100cf97c != 0) {
      pcVar6 = (*gEngfuncs.GetLocalPlayer)();
      iVar3 = pcVar6->index;
      uVar4 = 0xffffffff;
      in_stack_0000006c = 0x23;
      pcVar7 = &DAT_101901fe + iVar3 * 0x20;
      do {
        pcVar10 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar10 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar10;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar10 + -uVar4;
      pcVar10 = (char *)&DAT_1018a5b4;
      for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar10 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar10 = pcVar10 + 1;
      }
      iVar3 = (int)(short)(&DAT_101901fc)[iVar3 * 0x10];
      in_stack_00000064 = (&DAT_10096978)[iVar3 * 3];
      in_stack_00000068 = (&DAT_1009697c)[iVar3 * 3];
      in_stack_00000060 = (&DAT_10096974)[iVar3 * 3];
      in_stack_0000005c = DAT_1018a594 + -1;
      in_stack_00000058 = 0x7f;
      in_stack_00000054 = DAT_1018a604;
      in_stack_00000050 = DAT_1018a4c4;
      (*gEngfuncs.pfnFillRGBA)
                (DAT_1018a4c4,DAT_1018a604,0x7f,in_stack_0000005c,in_stack_00000060,
                 in_stack_00000064,in_stack_00000068,0x23);
      FUN_10021ce0(DAT_1018a4c4 + 2,DAT_1018a604,DAT_100d5908,(char *)&DAT_1018a5b4,
                   (&DAT_10096974)[iVar3 * 3],(&DAT_10096978)[iVar3 * 3],(&DAT_1009697c)[iVar3 * 3])
      ;
    }
    DAT_1018a604 = DAT_100d590c + -0x1c;
    DAT_1018a4c4 = 0x88;
    DAT_1018a594 = 0x14;
    in_stack_0000006c = 0x1004a7f8;
    (*gEngfuncs.pfnFillRGBA)(0x88,DAT_1018a604,0x7f,0x13,DAT_1018a474,DAT_1018a598,DAT_1018a480,0xf)
    ;
    if (*(byte *)(param_1 + 0x28) == 0) {
      iVar9 = 0x2d;
      iVar3 = 0x2d;
      iVar5 = 0xc3;
    }
    else {
      iVar9 = DAT_1018a480 / 2;
      iVar3 = DAT_1018a598 / 2;
      iVar5 = DAT_1018a474 / 2;
    }
    DAT_1018a58c = FUN_1004c290(&DAT_100cf920,DAT_1018a4c4 + 8,DAT_1018a604 + 2,'\x03',
                                (uint)*(byte *)(param_1 + 0x28),iVar5,iVar3,iVar9);
    if (*(char *)(param_1 + 0x28) == '\0') {
      iVar9 = 0x2d;
      iVar3 = 0x2d;
      iVar5 = 0xc3;
    }
    else {
      iVar9 = DAT_1018a480 / 2;
      iVar3 = DAT_1018a598 / 2;
      iVar5 = DAT_1018a474 / 2;
    }
    pcVar7 = FUN_100349a0(s__HUD_FreeSlots_10095ad4);
    FUN_10021ce0(DAT_1018a58c + 8,DAT_1018a604,DAT_100d5908,pcVar7,iVar5,iVar3,iVar9);
    if ((1 < DAT_100cf97c) || (DAT_1018d170 != 0)) {
      DAT_1018a604 = DAT_1018a604 - DAT_1018a594;
      (*gEngfuncs.pfnFillRGBA)
                (DAT_1018a4c4,DAT_1018a604,0x7f,DAT_1018a594 + -1,DAT_1018a474,DAT_1018a598,
                 DAT_1018a480,0xf);
      if (*(int *)(param_1 + 0x24) < 1000) {
        iVar9 = 0x2d;
        iVar3 = 0x2d;
        iVar5 = 0xc3;
      }
      else {
        iVar9 = DAT_1018a480 / 2;
        iVar3 = DAT_1018a598 / 2;
        iVar5 = DAT_1018a474 / 2;
      }
      DAT_1018a58c = FUN_1004c290(&DAT_100cf920,DAT_1018a4c4,DAT_1018a604 + 2,'\x11',
                                  *(int *)(param_1 + 0x24),iVar5,iVar3,iVar9);
      if (*(int *)(param_1 + 0x24) < 1000) {
        iVar9 = 0x2d;
        iVar3 = 0x2d;
        iVar5 = 0xc3;
      }
      else {
        iVar9 = DAT_1018a480 / 2;
        iVar3 = DAT_1018a598 / 2;
        iVar5 = DAT_1018a474 / 2;
      }
      pcVar7 = FUN_100349a0(s__HUD_Credits_10095ac4);
      FUN_10021ce0(DAT_1018a58c + 8,DAT_1018a604,DAT_100d5908,pcVar7,iVar5,iVar3,iVar9);
    }
    if (*(char *)(param_1 + 0x29) != '\0') {
      DAT_1018a4c4 = DAT_100d5908 / 2 + -0x30;
      DAT_1018a604 = DAT_100d590c + -0x38;
      lVar11 = __ftol();
      lVar12 = __ftol();
      lVar13 = __ftol();
      (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(param_1 + 100),(int)lVar13,(int)lVar12,(int)lVar11);
      (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_1018a4c4,DAT_1018a604,(wrect_t *)0x0);
    }
    if (*(char *)(param_1 + 0x2a) != '\0') {
      DAT_1018a604 = DAT_100d590c + -0x38;
      DAT_1018a4c4 = DAT_100d5908 / 2;
      lVar11 = __ftol();
      iVar3 = (int)lVar11;
      lVar11 = __ftol();
      iVar9 = (int)lVar11;
      lVar11 = __ftol();
      uStack000000e8 = 0x1004ab1e;
      (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(param_1 + 0x68),(int)lVar11,iVar9,iVar3);
      uStack000000e8 = 0x1004ab35;
      (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_1018a4c4,DAT_1018a604,(wrect_t *)0x0);
    }
  }
  return;
}

/* 1004ab40  FUN_1004ab40  (380 bytes)
 * undefined FUN_1004ab40(int param_1)
 * called by: FUN_10049ea0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004ab40(int param_1)

{
  cl_entity_s *pcVar1;
  int r;
  int g;
  
  pcVar1 = (*gEngfuncs.GetLocalPlayer)();
  DAT_1018a5f0 = pcVar1->index;
  DAT_1018a520 = (*gEngfuncs.GetMaxClients)();
  DAT_1018a540 = 0;
  if (-1 < DAT_1018a520) {
    do {
      if ((*(char *)(param_1 + 0x1444 + DAT_1018a540) != '\0') &&
         (*(undefined1 *)(param_1 + 0x1444 + DAT_1018a540) = 0, DAT_1018a540 != DAT_1018a5f0)) {
        if ((&DAT_101901f0)[DAT_1018a540 * 8] == 0) {
          if ((((&DAT_101901fc)[DAT_1018a540 * 0x10] == (&DAT_101901fc)[DAT_1018a5f0 * 0x10]) &&
              (FUN_1004b470(DAT_1018a540,&DAT_1018a614,&DAT_1018a5d8), DAT_1018a614 != -1)) &&
             (DAT_1018a5d8 != -1)) {
            _DAT_1018a5a4 = 0x44800000;
            _DAT_1018a4c8 = 0x3f000000;
            (*gEngfuncs.pfnFillRGBA)(DAT_1018a614 + -2,DAT_1018a5d8 + -2,4,4,0x2d,0xc3,0x2d,0x75);
          }
        }
        else {
          FUN_1004b470(DAT_1018a540,&DAT_1018a614,&DAT_1018a5d8);
          if ((DAT_1018a614 != -1) && (DAT_1018a5d8 != -1)) {
            if ((&DAT_101901fc)[DAT_1018a540 * 0x10] == (&DAT_101901fc)[DAT_1018a5f0 * 0x10]) {
              g = 0x41;
              r = 0xf;
            }
            else {
              g = 0xf;
              r = 0x41;
            }
            (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(param_1 + 0x6c),r,g,0xf);
            (*gEngfuncs.pfnSPR_DrawAdditive)
                      (0,DAT_1018a614 + -0x18,DAT_1018a5d8 + -0x30,(wrect_t *)0x0);
          }
        }
      }
      DAT_1018a540 = DAT_1018a540 + 1;
    } while (DAT_1018a540 <= DAT_1018a520);
  }
  return;
}

/* 1004acc0  FUN_1004acc0  (623 bytes)
 * undefined FUN_1004acc0(void)
 * called by: FUN_10049ea0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004acc0(void)

{
  char cVar1;
  int iVar2;
  cl_entity_s *pcVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  undefined4 auStack_8 [2];
  
  if ((DAT_1018a534 & 1) == 0) {
    DAT_1018a534 = DAT_1018a534 | 1;
    FUN_1006af63(0x1004af30);
  }
  pcVar3 = (*gEngfuncs.GetLocalPlayer)();
  DAT_1018a53c = pcVar3->index;
  (*(gEngfuncs.pEventAPI)->EV_PushPMStates)();
  (*(gEngfuncs.pEventAPI)->EV_SetUpPlayerPrediction)(0,1);
  (*(gEngfuncs.pEventAPI)->EV_SetSolidPlayers)(DAT_1018a53c + -1);
  (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
  fVar10 = DAT_1018bd90 * 8192.0;
  fVar11 = DAT_1018bd94 * 8192.0;
  fVar12 = DAT_1018bd98 * 8192.0;
  pfVar4 = (float *)FUN_10057270(auStack_8);
  fStack_14 = fVar10 + *pfVar4;
  fStack_10 = fVar11 + pfVar4[1];
  fStack_c = fVar12 + pfVar4[2];
  pfVar4 = (float *)FUN_10057270((undefined4 *)&stack0x00000004);
  (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
            (pfVar4,&fStack_14,2,DAT_1018a53c,(pmtrace_s *)&DAT_1018a4d0);
  _DAT_100d0cd8 = DAT_1018a4e4;
  _DAT_100d0cdc = DAT_1018a4e8;
  _DAT_100d0ce0 = DAT_1018a4ec;
  iVar5 = (*(gEngfuncs.pEventAPI)->EV_IndexFromTrace)((pmtrace_s *)&DAT_1018a4d0);
  _DAT_1018a518 = (*gEngfuncs.GetEntityByIndex)(iVar5);
  iVar5 = DAT_100d590c;
  DAT_1018a60c = 0;
  if ((_DAT_1018a518 != (cl_entity_s *)0x0) && (_DAT_1018a518->player != 0)) {
    iVar2 = _DAT_1018a518->index;
    if ((DAT_100cf97c == 0) ||
       ((&DAT_101901fc)[iVar2 * 0x10] != (&DAT_101901fc)[DAT_1018a53c * 0x10])) {
      if (*(char **)(&DAT_1018fbd8 + iVar2 * 0x14) != (char *)0x0) {
        uVar6 = 0xffffffff;
        pcVar8 = *(char **)(&DAT_1018fbd8 + iVar2 * 0x14);
        do {
          pcVar9 = pcVar8;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar9 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar8 = pcVar9 + -uVar6;
        pcVar9 = (char *)&DAT_1018a548;
        for (uVar7 = uVar6 >> 2; iVar5 = DAT_100d590c, uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        FUN_10021ce0(DAT_100d5908 / 2,iVar5 / 2 + -0x28,DAT_100d5908,(char *)&DAT_1018a548,0xc3,0x2d
                     ,0x2d);
        DAT_1018a60c = 2;
        (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
        return;
      }
    }
    else if (*(char **)(&DAT_1018fbd8 + iVar2 * 0x14) != (char *)0x0) {
      uVar6 = 0xffffffff;
      pcVar8 = *(char **)(&DAT_1018fbd8 + iVar2 * 0x14);
      do {
        pcVar9 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar8 = pcVar9 + -uVar6;
      pcVar9 = (char *)&DAT_1018a548;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_10021ce0(DAT_100d5908 / 2,iVar5 / 2 + -0x28,DAT_100d5908,(char *)&DAT_1018a548,0x2d,0xc3,
                   0x2d);
      DAT_1018a60c = 1;
    }
  }
  (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
  return;
}

/* 1004af30  FUN_1004af30  (1 bytes)
 * undefined FUN_1004af30()
 */
void FUN_1004af30(void)

{
  return;
}

/* 1004af40  FUN_1004af40  (410 bytes)
 * undefined FUN_1004af40(int param_1)
 * called by: FUN_10049ea0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004af40(int param_1)

{
  int iVar1;
  float *pfVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  DAT_1018a590 = 0;
  do {
    pfVar2 = (float *)(param_1 + 0x70 + DAT_1018a590 * 0x9c);
    if (DAT_100cf944 < *(float *)(param_1 + 0x70 + DAT_1018a590 * 0x9c)) {
      if (10.0 < *pfVar2 - DAT_100cf944) {
        *pfVar2 = DAT_100cf944 + 10.0;
      }
      iVar1 = param_1 + DAT_1018a590 * 0x9c;
      if (((*(int *)(param_1 + 0x74 + DAT_1018a590 * 0x9c) == 0) && (*(int *)(iVar1 + 0x78) == 0))
         && (*(int *)(iVar1 + 0x7c) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      DAT_1018a51c = !bVar3;
      lVar4 = __ftol();
      _DAT_1018a610 = (int)lVar4;
      lVar5 = __ftol();
      _DAT_1018a544 = (int)lVar5;
      lVar6 = __ftol();
      _DAT_1018a5a0 = (undefined4)lVar6;
      FUN_10021ce0(*(int *)(iVar1 + 0x100),*(undefined4 *)(iVar1 + 0x104),DAT_100d5908,
                   (char *)(iVar1 + 0x80),(int)lVar4,(int)lVar5,_DAT_1018a5a0);
    }
    DAT_1018a590 = DAT_1018a590 + 1;
  } while (DAT_1018a590 < 0x10);
  return;
}

/* 1004b0e0  FUN_1004b0e0  (905 bytes)
 * undefined FUN_1004b0e0(int param_1)
 * called by: FUN_10049ea0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004b0e0(int param_1)

{
  char cVar1;
  int iVar2;
  cl_entity_s *pcVar3;
  int g;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int y;
  char *pcVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  longlong lVar15;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  undefined4 uVar16;
  undefined4 uVar17;
  char *pcVar18;
  int iVar19;
  int *piStack_c;
  
  if (0 < *(int *)(param_1 + 0x1468)) {
    __ftol();
    __ftol();
    __ftol();
    pcVar3 = (*gEngfuncs.GetLocalPlayer)();
    if (pcVar3 != (cl_entity_s *)0x0) {
      (*gEngfuncs.GetLocalPlayer)();
    }
    fVar12 = FUN_10055ac0(DAT_100963e8);
    fVar14 = (float10)_DAT_100cf950;
    fVar13 = (float10)*(float *)(param_1 + 0x1530) - fVar14 / fVar12;
    *(float *)(param_1 + 0x1530) = (float)fVar13;
    fVar14 = (float10)*(float *)(param_1 + 0x1534) - fVar14 / fVar12;
    *(float *)(param_1 + 0x1534) = (float)fVar14;
    if ((float)fVar13 < 0.0) {
      *(undefined4 *)(param_1 + 0x1530) = 0x3dcccccd;
      *(bool *)(param_1 + 0x152c) = *(char *)(param_1 + 0x152c) == '\0';
    }
    if (fVar14 < (float10)0.0) {
      *(undefined4 *)(param_1 + 0x1534) = 0x3f000000;
      *(bool *)(param_1 + 0x152d) = *(char *)(param_1 + 0x152d) == '\0';
    }
    iVar4 = 0x10;
    if (*(int *)(param_1 + 0x1468) < 0x11) {
      iVar4 = *(int *)(param_1 + 0x1468);
    }
    *(undefined4 *)(param_1 + 0x1468) = 0;
    iVar19 = 0;
    if (0 < iVar4) {
      piVar10 = (int *)(param_1 + 0x1470);
      iVar5 = param_1;
      do {
        if (((piVar10[-1] != 0) && (iVar2 = piVar10[1], 0 < iVar2)) && (iVar2 < 5)) {
          y = iVar2 * 0x30 + 0x28;
          iVar2 = DAT_100d5908 + -0x38;
          lVar15 = __ftol();
          iVar7 = (int)lVar15;
          lVar15 = __ftol();
          g = (int)lVar15;
          lVar15 = __ftol();
          (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(iVar5 + 0x6c),(int)lVar15,g,iVar7);
          (*gEngfuncs.pfnSPR_DrawAdditive)(0,iVar2,y,(wrect_t *)0x0);
          iVar7 = *piStack_c;
          if ((0 < iVar7) && (iVar7 < 0x41)) {
            if (iVar7 == y) {
              uVar8 = 0xffffffff;
              pcVar18 = s_Take_the_Briefcase_to_the_base__10095ae4;
              do {
                pcVar11 = pcVar18;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar11 = pcVar18 + 1;
                cVar1 = *pcVar18;
                pcVar18 = pcVar11;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              pcVar18 = pcVar11 + -uVar8;
              pcVar11 = (char *)&DAT_1018a484;
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar11 = *(undefined4 *)pcVar18;
                pcVar18 = pcVar18 + 4;
                pcVar11 = pcVar11 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar11 = *pcVar18;
                pcVar18 = pcVar18 + 1;
                pcVar11 = pcVar11 + 1;
              }
              iVar4 = in_stack_00000004 + 0x23;
              if (0xff < iVar4) {
                iVar4 = 0xff;
              }
              pcVar18 = (char *)&DAT_1018a484;
              uVar16 = 0x140;
              iVar19 = DAT_100d5908;
              uVar17 = in_stack_0000000c;
              uVar6 = in_stack_00000008;
              iVar5 = FUN_10021ca0(0,DAT_100d5908,(char *)&DAT_1018a484);
              FUN_10021ce0((DAT_100d5908 - iVar5) + -0x20,uVar16,iVar19,pcVar18,iVar4,uVar17,uVar6);
            }
            if (*(char **)(&DAT_1018fbd8 + *piStack_c * 0x14) == (char *)0x0) {
              DAT_1018a484._0_1_ = 0;
            }
            else {
              _strncpy((char *)&DAT_1018a484,*(char **)(&DAT_1018fbd8 + *piStack_c * 0x14),0x18);
            }
            DAT_1018a49c = 0;
            iVar4 = 0x28;
            lVar15 = __ftol();
            iVar19 = (int)lVar15;
            lVar15 = __ftol();
            uVar6 = (undefined4)lVar15;
            pcVar18 = (char *)&DAT_1018a484;
            uVar17 = in_stack_00000018;
            iVar5 = DAT_100d5908;
            iVar7 = FUN_10021ca0(0,DAT_100d5908,(char *)&DAT_1018a484);
            FUN_10021ce0(iVar2 - iVar7,uVar17,iVar5,pcVar18,uVar6,iVar19,iVar4);
            iVar5 = in_stack_0000001c;
          }
          *(int *)(iVar5 + 0x1468) = param_1 + 1;
          piVar10 = piStack_c;
        }
        iVar19 = iVar19 + 1;
        piVar10 = piVar10 + 3;
      } while (iVar19 < iVar4);
    }
  }
  return;
}

/* 1004b470  FUN_1004b470  (150 bytes)
 * undefined FUN_1004b470(undefined4 param_1, undefined4 * param_2, undefined4 * param_3)
 * called by: FUN_1004ab40
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1004b470(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if ((DAT_1018a5d4 & 1) == 0) {
    DAT_1018a5d4 = DAT_1018a5d4 | 1;
    FUN_1006af63(0x1004b510);
  }
  DAT_1018a588 = (*gEngfuncs.GetEntityByIndex)(param_1);
  *param_2 = 0xffffffff;
  *param_3 = 0xffffffff;
  if ((DAT_1018a588 != (cl_entity_s *)0x0) && (DAT_1018a588->player != 0)) {
    _DAT_1018a5f8 = DAT_1018a588->origin[0];
    _DAT_1018a5fc = DAT_1018a588->origin[1];
    _DAT_1018a600 = DAT_1018a588->origin[2] + 40.0;
    FUN_100579c0(&DAT_1018a5f8,param_2,param_3);
  }
  return;
}

/* 1004b510  FUN_1004b510  (1 bytes)
 * undefined FUN_1004b510()
 */
void FUN_1004b510(void)

{
  return;
}

/* 1004b520  FUN_1004b520  (518 bytes)
 * undefined FUN_1004b520(char * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5, uint param_6)
 * called by: FUN_10011320, FUN_10011650, FUN_10012050, FUN_10038840, FUN_10039400, FUN_1004c0a0
 */
void __thiscall
FUN_1004b520(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,uint param_6)

{
  uint *_Dest;
  uint uVar1;
  char *_Source;
  cl_entity_s *pcVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  size_t _Count;
  
  iVar4 = 0;
  pfVar6 = (float *)((int)this + 0x70);
  do {
    if (*pfVar6 < DAT_100cf944) break;
    iVar4 = iVar4 + 1;
    pfVar6 = pfVar6 + 0x27;
  } while (iVar4 < 0xf);
  if (0xf < iVar4) {
    return;
  }
  if (DAT_100cf944 < *(float *)((int)this + iVar4 * 0x9c + 0x70)) {
    return;
  }
  _Count = 0x80;
  _Dest = (uint *)((int)this + iVar4 * 0x9c + 0x80);
  _Source = FUN_100349a0(param_1);
  _strncpy((char *)_Dest,_Source,_Count);
  *(undefined1 *)((int)this + iVar4 * 0x9c + 0xff) = 0;
  pcVar2 = (*gEngfuncs.GetLocalPlayer)();
  if (pcVar2 != (cl_entity_s *)0x0) {
    pcVar2 = (*gEngfuncs.GetLocalPlayer)();
    if (((-1 < pcVar2->index) && (*(char **)(&DAT_1018fbd8 + pcVar2->index * 0x14) != (char *)0x0))
       && (puVar3 = FUN_1006c930(_Dest,*(char **)(&DAT_1018fbd8 + pcVar2->index * 0x14)),
          puVar3 != (uint *)0x0)) {
      *(undefined4 *)((int)this + iVar4 * 0x9c + 0x7c) = 0x9b;
      *(undefined4 *)((int)this + iVar4 * 0x9c + 0x74) = 0x9b;
      *(undefined4 *)((int)this + iVar4 * 0x9c + 0x78) = 0x9b;
      goto LAB_1004b5f5;
    }
  }
  *(undefined4 *)((int)this + iVar4 * 0x9c + 0x7c) = param_4;
  *(undefined4 *)((int)this + iVar4 * 0x9c + 0x74) = param_2;
  *(undefined4 *)((int)this + iVar4 * 0x9c + 0x78) = param_3;
LAB_1004b5f5:
  if ((param_6 & 1) == 0) {
    if ((param_6 & 8) == 0) {
      iVar5 = DAT_100d590c / 2;
    }
    else {
      iVar5 = DAT_100d590c + -0x40;
    }
    *(int *)((int)this + iVar4 * 0x9c + 0x104) = iVar5;
  }
  else {
    *(undefined4 *)((int)this + iVar4 * 0x9c + 0x104) = 0x20;
  }
  if ((param_6 & 2) == 0) {
    if ((param_6 & 4) == 0) {
      iVar5 = FUN_10021ca0(0,DAT_100d5908,(char *)_Dest);
      *(int *)((int)this + iVar4 * 0x9c + 0x100) = DAT_100d5908 / 2 - iVar5 / 2;
    }
    else {
      iVar5 = FUN_10021ca0(0,DAT_100d5908,(char *)_Dest);
      *(int *)((int)this + iVar4 * 0x9c + 0x100) = (DAT_100d5908 - iVar5) + -0x20;
    }
  }
  else {
    *(undefined4 *)((int)this + iVar4 * 0x9c + 0x100) = 0x20;
  }
  iVar5 = 0;
  *(uint *)((int)this + iVar4 * 0x9c + 0x108) = param_6;
  iVar7 = 0;
  do {
    if (0xf < iVar7) break;
    if (((DAT_100cf944 < *(float *)((int)this + iVar5 * 0x9c + 0x70)) &&
        (iVar8 = *(int *)((int)this + iVar4 * 0x9c + 0x104),
        *(int *)((int)this + iVar5 * 0x9c + 0x104) == iVar8)) &&
       (uVar1 = *(uint *)((int)this + iVar4 * 0x9c + 0x108),
       *(uint *)((int)this + iVar5 * 0x9c + 0x108) == uVar1)) {
      if ((param_6 & 0x10) != 0) {
        *(undefined4 *)((int)this + iVar5 * 0x9c + 0x70) = 0;
        break;
      }
      if ((uVar1 & 1) == 0) {
        iVar8 = iVar8 + -0x10;
      }
      else {
        iVar8 = iVar8 + 0x10;
      }
      iVar5 = 0;
      *(int *)((int)this + iVar4 * 0x9c + 0x104) = iVar8;
      iVar7 = iVar7 + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  *(float *)((int)this + iVar4 * 0x9c + 0x70) = (float)param_5 * 0.1 + DAT_100cf944;
  return;
}

/* 1004b730  FUN_1004b730  (86 bytes)
 * undefined FUN_1004b730(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_100498a0
 */
void __thiscall FUN_1004b730(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  FUN_100299b0(param_3,param_2);
  DAT_100cf9d8 = FUN_10029a10();
  *(char *)((int)this + 0x20) = (char)DAT_100cf9d8;
  cVar1 = FUN_1004c280();
  if ((cVar1 == '\0') && (*(char *)((int)this + 0x20) == '\0')) {
    iVar2 = CL_IsThirdPerson();
    if (iVar2 == 0) {
      FUN_1004fe00();
    }
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b790  FUN_1004b790  (70 bytes)
 * undefined FUN_1004b790(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10049a20
 */
void __thiscall FUN_1004b790(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  uVar2 = FUN_10029a10();
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x41)) {
    *(char *)(&DAT_101901f4 + uVar1 * 8) = (char)uVar2;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b7e0  FUN_1004b7e0  (81 bytes)
 * undefined FUN_1004b7e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10049b40
 */
void __thiscall FUN_1004b7e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  uVar2 = FUN_10029a10();
  uVar3 = FUN_10029a10();
  if (((0 < (int)uVar1) && ((int)uVar1 < 0x41)) && (uVar2 == 0)) {
    *(char *)((int)&DAT_1018d128 + uVar1 * 2 + 1) = (char)uVar3;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b840  FUN_1004b840  (142 bytes)
 * undefined FUN_1004b840(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10049a40
 */
void __thiscall FUN_1004b840(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  iVar2 = FUN_10029a50();
  switch(uVar1) {
  case 0:
    DAT_1018d16c = iVar2;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    return;
  case 1:
    DAT_1018d170 = iVar2;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    return;
  case 2:
    FUN_100072c0(iVar2);
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    return;
  case 3:
    DAT_1018d174 = iVar2;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b8e0  FUN_1004b8e0  (54 bytes)
 * undefined FUN_1004b8e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10049a60
 */
void __thiscall FUN_1004b8e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  DAT_1018d178 = uVar1 != 0;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b920  FUN_1004b920  (46 bytes)
 * undefined FUN_1004b920(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_100498c0
 */
void __thiscall FUN_1004b920(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(char *)((int)this + 0x21) = (char)uVar1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b950  FUN_1004b950  (46 bytes)
 * undefined FUN_1004b950(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_100498e0
 */
void __thiscall FUN_1004b950(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(char *)((int)this + 0x22) = (char)uVar1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b980  FUN_1004b980  (46 bytes)
 * undefined FUN_1004b980(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10049900
 */
void __thiscall FUN_1004b980(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_100299b0(param_3,param_2);
  iVar1 = FUN_10029a50();
  *(int *)((int)this + 0x24) = iVar1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b9b0  FUN_1004b9b0  (46 bytes)
 * undefined FUN_1004b9b0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10049920
 */
void __thiscall FUN_1004b9b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(char *)((int)this + 0x28) = (char)uVar1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b9e0  FUN_1004b9e0  (111 bytes)
 * undefined4 FUN_1004b9e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10049940
 */
undefined4 __thiscall
FUN_1004b9e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a50();
  uVar2 = FUN_10029a10();
  if ((uVar1 & 0x104) == 0) {
    *(uint *)((int)this + 0x14) = uVar1;
    *(uint *)((int)this + 0x18) = uVar2;
  }
  else {
    if ((uVar1 & 4) == 0) {
      *(undefined1 *)((int)this + 0x2a) = 1;
    }
    else {
      *(undefined1 *)((int)this + 0x29) = 1;
    }
    if (*(int *)((int)this + 0x14) == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      *(undefined4 *)((int)this + 0x18) = 0;
      *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
      return 1;
    }
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 1004ba50  FUN_1004ba50  (121 bytes)
 * undefined4 FUN_1004ba50(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10049aa0
 */
undefined4 __thiscall
FUN_1004ba50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_100299b0(param_3,param_2);
  uVar2 = FUN_10029a10();
  uVar3 = FUN_10029a10();
  uVar4 = FUN_10029a10();
  uVar5 = FUN_10029a10();
  if ((0 < (int)uVar3) && ((int)uVar3 < 0x10)) {
    puVar1 = (uint *)((int)this + uVar3 * 0xc + 0x146c);
    if (uVar2 == 1) {
      puVar1[1] = uVar5;
    }
    else {
      puVar1[1] = 0;
    }
    *puVar1 = uVar2;
    puVar1[2] = uVar4;
  }
  *(undefined4 *)((int)this + 0x1468) = 0x10;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 1004bad0  FUN_1004bad0  (67 bytes)
 * undefined FUN_1004bad0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10049960
 */
void __thiscall FUN_1004bad0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  uint uVar2;
  
  FUN_100299b0(param_3,param_2);
  uVar2 = FUN_10029a10();
  fVar1 = (float)(int)uVar2 + DAT_100cf944;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  *(float *)((int)this + 0x1c) = fVar1;
  return;
}

/* 1004bb20  FUN_1004bb20  (69 bytes)
 * undefined FUN_1004bb20(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10049980
 */
void __thiscall FUN_1004bb20(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(float *)((int)this + 0x2c) = (float)(int)uVar1;
  uVar1 = FUN_10029a10();
  *(char *)((int)this + 0x34) = (char)uVar1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004bb70  FUN_1004bb70  (270 bytes)
 * undefined FUN_1004bb70(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_100499a0
 */
void __thiscall FUN_1004bb70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  char local_40 [64];
  
  FUN_100299b0(param_3,param_2);
  fVar9 = FUN_10029b60();
  fVar10 = FUN_10029b60();
  fVar11 = FUN_10029b60();
  uVar2 = FUN_10029a10();
  pcVar3 = FUN_10029b00();
  uVar4 = 0xffffffff;
  do {
    pcVar8 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = pcVar8 + -uVar4;
  pcVar8 = local_40;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  if ((-1 < (int)uVar2) || ((int)uVar2 < 0x20)) {
    if (uVar2 == 0) {
      puVar7 = (undefined4 *)((int)this + 0xa30);
      for (iVar6 = 0x280; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined4 *)((int)this + 0x1430) = 0;
    }
    *(float *)((int)this + uVar2 * 0x50 + 0xa34) = (float)fVar9;
    *(float *)((int)this + uVar2 * 0x50 + 0xa38) = (float)fVar10;
    *(float *)((int)this + uVar2 * 0x50 + 0xa3c) = (float)fVar11;
    uVar4 = 0xffffffff;
    pcVar3 = local_40;
    do {
      pcVar8 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar3 = pcVar8 + -uVar4;
    pcVar8 = (char *)((int)this + uVar2 * 0x50 + 0xa40);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar8 = pcVar8 + 1;
    }
    *(undefined1 *)((int)this + uVar2 * 0x50 + 0xa30) = 1;
    if (*(int *)((int)this + 0x1430) < (int)uVar2) {
      *(uint *)((int)this + 0x1430) = uVar2;
    }
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

